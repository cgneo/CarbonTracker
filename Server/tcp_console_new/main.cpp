#include <QCoreApplication>

#include <iostream>
#include <colormod.h>
#include <main.h>


#include <QTcpServer>
#include <QTcpSocket>
#include <QFile>
#include <QDir>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Create a server
    new TCPserver();

    return a.exec();
}


TCPserver::TCPserver()
{
    m_server = new QTcpServer();

    if (m_server->listen(QHostAddress::Any, 8080))
    {
       connect(this, &TCPserver::newMessage, this, &TCPserver::displayMessage);
       connect(m_server, &QTcpServer::newConnection, this, &TCPserver::newConnection);
       std::cout << "QTCPServer: " << "Server is listening..." << '\n';
    }
    else
    {
        std::cout << "QTCPServer: " << "Unable to start the server..." << '\n';
        exit(EXIT_FAILURE);
    }
}

TCPserver::~TCPserver()
{
    foreach (QTcpSocket* socket, connection_set)
    {
        socket->close();
        socket->deleteLater();
    }

    m_server->close();
    m_server->deleteLater();
}

void TCPserver::newConnection()
{
    while (m_server->hasPendingConnections())
        appendToSocketList(m_server->nextPendingConnection());
}

void TCPserver::appendToSocketList(QTcpSocket* socket)
{
    connection_set.insert(socket);
    connect(socket, &QTcpSocket::readyRead, this, &TCPserver::readSocket);
    connect(socket, &QTcpSocket::disconnected, this, &TCPserver::discardSocket);
    connect(socket, &QAbstractSocket::errorOccurred, this, &TCPserver::displayError);

    std::cout << "INFO: " << "lient with sockd: " << socket->socketDescriptor() << " has just entered the room." << '\n';
}

void TCPserver::readSocket()
{
    QTcpSocket* socket = reinterpret_cast<QTcpSocket*>(sender());

    QByteArray buffer;

    QDataStream socketStream(socket);
    socketStream.setVersion(QDataStream::Qt_5_15);

    socketStream.startTransaction();
    socketStream >> buffer;


    if(!socketStream.commitTransaction())
    {
        std::cout << "INFO: " << "Waiting for more data to come.. " << socket->socketDescriptor() << '\n';

        QString message = QString("%1 :: Waiting for more data to come..").arg(socket->socketDescriptor());
        emit newMessage(message);
        return;
    }

    QString header = buffer.mid(0,128);
    QString fileType = header.split(",")[0].split(":")[1];

    buffer = buffer.mid(128);

    if(fileType=="attachment"){
        QString fileName = header.split(",")[1].split(":")[1];
        QString ext = fileName.split(".")[1];
        QString size = header.split(",")[2].split(":")[1].split(";")[0];

        std::cout << "ATTENTION: " << "You are receiving an attachment from :" << socket->socketDescriptor() << " of size: " << size.toStdString() << ", called " << fileName.toStdString() << " Do you want to accept it? (y/n)" << '\n';

        char choice = 'a';
        while (choice!='a' and choice !='y' and choice!='n') {
            std::cin >> choice;
        }

        if (choice=='y')
        {
            //QString filePath = QFileDialog::getSaveFileName(this, tr("Save File"), QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)+"/"+fileName, QString("File (*.%1)").arg(ext));
            QString filePath = QDir::currentPath();
            QFile file(filePath);
            if (file.open(QIODevice::WriteOnly)){
                file.write(buffer);
                QString message = QString("INFO :: Attachment from sd:%1 successfully stored on disk under the path %2").arg(socket->socketDescriptor()).arg(QString(filePath));
                emit newMessage(message);
            } else
                 std::cout << "ATTENTION: An error occurred while trying to write the attachment." << '\n';
        } else {
            QString message = QString("INFO :: Attachment from sd:%1 discarded").arg(socket->socketDescriptor());
            emit newMessage(message);
        }
    }else if(fileType=="message"){
        QString message = QString("%1 :: %2").arg(socket->socketDescriptor()).arg(QString::fromStdString(buffer.toStdString()));
        emit newMessage(message);
    }
}

void TCPserver::discardSocket()
{
    QTcpSocket* socket = reinterpret_cast<QTcpSocket*>(sender());
    QSet<QTcpSocket*>::iterator it = connection_set.find(socket);
    if (it != connection_set.end()){
        displayMessage(QString("INFO :: A client has just left the room").arg(socket->socketDescriptor()));
        connection_set.remove(*it);
    }
    refreshComboBox();

    socket->deleteLater();
}

void TCPserver::displayError(QAbstractSocket::SocketError socketError)
{

    switch (socketError) {
        case QAbstractSocket::RemoteHostClosedError:
        break;
        case QAbstractSocket::HostNotFoundError:
            std::cout << "HostNotFoundError: " << "The host was not found. Please check the host name and port settings." << '\n';
        break;
        case QAbstractSocket::ConnectionRefusedError:
            std::cout << "ConnectionRefusedError: " << "The connection was refused by the peer. Make sure QTCPServer is running, and check that the host name and port settings are correct." <<  '\n';
        break;
        default:
            QTcpSocket* socket = qobject_cast<QTcpSocket*>(sender());
            std::cout << "Attention: : " << "The following error occurred: " << socket->errorString().toStdString() << '\n';
        break;
    }
}

void TCPserver::on_pushButton_sendMessage_clicked()
{
//    QString receiver = ui->comboBox_receiver->currentText();
    QTextStream s(stdin);
    QString receiver = s.readLine();

    if(receiver=="Broadcast")
    {
        foreach (QTcpSocket* socket,connection_set)
        {
            sendMessage(socket);
        }
    }
    else
    {
        foreach (QTcpSocket* socket,connection_set)
        {
            if(socket->socketDescriptor() == receiver.toLongLong())
            {
                sendMessage(socket);
                break;
            }
        }
    }
//    ui->lineEdit_message->clear();
}


void TCPserver::on_pushButton_sendAttachment_clicked()
{
//    QString receiver = ui->comboBox_receiver->currentText();
    QTextStream s(stdin);
    QString receiver = s.readLine();

//    QString filePath = QFileDialog::getOpenFileName(this, ("Select an attachment"), QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation), ("File (*.json *.txt *.png *.jpg *.jpeg)"));
    QString filePath = QDir::currentPath();

    if(filePath.isEmpty()){
//        QMessageBox::critical(this,"QTCPClient","You haven't selected any attachment!");
        std::cout << "QTCPClient You haven't selected any attachment!" << '\n';
        return;
    }

    if(receiver=="Broadcast")
    {
        foreach (QTcpSocket* socket,connection_set)
        {
            sendAttachment(socket, filePath);
        }
    }
    else
    {
        foreach (QTcpSocket* socket,connection_set)
        {
            if(socket->socketDescriptor() == receiver.toLongLong())
            {
                sendAttachment(socket, filePath);
                break;
            }
        }
    }
//    ui->lineEdit_message->clear();
}

void TCPserver::sendMessage(QTcpSocket* socket)
{
    // Adding colors
    Color::Modifier terminal_red(Color::FG_RED);
    Color::Modifier terminal_redBG(Color::BG_RED);
    Color::Modifier terminal_cyan(Color::FG_CYAN);
    Color::Modifier terminal_white(Color::FG_WHITE);
    Color::Modifier terminal_default(Color::FG_DEFAULT);
    Color::Modifier terminal_defaultBG(Color::BG_DEFAULT);

    if(socket)
    {
        if(socket->isOpen())
        {
            QTextStream s(stdin);
            QString str = s.readLine();

            QDataStream socketStream(socket);
            socketStream.setVersion(QDataStream::Qt_5_15);

            QByteArray header;
            header.prepend(QString("fileType:message,fileName:null,fileSize:%1;").arg(str.size()).toUtf8());
            header.resize(128);

            QByteArray byteArray = str.toUtf8();
            byteArray.prepend(header);

            socketStream.setVersion(QDataStream::Qt_5_15);
            socketStream << byteArray;
        }
        else
            std::cout << "QTCPServer: " << terminal_red << "Socket doesn't seem to be opened." << terminal_default << '\n';
    }
    else
        std::cout << "QTCPServer: " << terminal_red << "Not connected." << terminal_default << '\n';
}

void TCPserver::sendAttachment(QTcpSocket* socket, QString filePath)
{

    if(socket)
    {
        if(socket->isOpen())
        {
            QFile m_file(filePath);
            if(m_file.open(QIODevice::ReadOnly)){

                QFileInfo fileInfo(m_file.fileName());
                QString fileName(fileInfo.fileName());

                QDataStream socketStream(socket);
                socketStream.setVersion(QDataStream::Qt_5_15);

                QByteArray header;
                header.prepend(QString("fileType:attachment,fileName:%1,fileSize:%2;").arg(fileName).arg(m_file.size()).toUtf8());
                header.resize(128);

                QByteArray byteArray = m_file.readAll();
                byteArray.prepend(header);

                socketStream << byteArray;
            } else
                std::cout << "QTCPClient: " << "Couldn't open the attachment!" << '\n';
        }
        else
            std::cout << "QTCPServer: " << "Socket doesn't seem to be opened!" << '\n';
    }
    else
        std::cout << "QTCPServer: " << "Not connected." << '\n';
}


void TCPserver::displayMessage(const QString& str)
{
    std::cout << str.toStdString() << '\n';

}

void TCPserver::refreshComboBox(){
//    ui->comboBox_receiver->clear();
//    ui->comboBox_receiver->addItem("Broadcast");
    foreach(QTcpSocket* socket, connection_set)
//        ui->comboBox_receiver->addItem(QString::number(socket->socketDescriptor()));
        std::cout << QString::number(socket->socketDescriptor()).toStdString() << '\n';
}
