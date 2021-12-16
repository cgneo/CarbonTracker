#include "netclient.h"

#include <iostream>
#include <QDir>

netclient::netclient()
{
    std::cout << "hi from client" << std::endl;
}

netclient::~netclient()
{
    if(socket->isOpen())
        socket->close();
}


void netclient::startClient() {
    try
    {
        connect(this, &netclient::newMessage, this, &netclient::displayMessage);
//        connect(socket, &QTcpSocket::readyRead, this, &netclient::readSocket);
//        connect(socket, &QTcpSocket::disconnected, this, &netclient::discardSocket);
//        connect(socket, &QAbstractSocket::errorOccurred, this, &netclient::displayError);

        std::cout << "hi from client1" << std::endl;

        socket->connectToHost(QHostAddress::LocalHost,8080);

        std::cout << "hi from client2" << std::endl;

        if (socket->waitForConnected())
            std::cout << "ClientMsg: Connected to Server" << std::endl;
        else {
            std::cout << "ClientMsg: The following error occurred: " << socket->errorString().toStdString() << std::endl;
            exit(EXIT_FAILURE);
        }

        // Invoke the flush and call it manually.
        std::cout.flush();
    }
    catch (...)
    {
        std::cout << "ClientMsg: " << "Unable to start the server..." << '\n';
        exit(EXIT_FAILURE);
    }
}


void netclient::readSocket()
{
    QByteArray buffer;

    QDataStream socketStream(socket);
    socketStream.setVersion(QDataStream::Qt_5_15);

    socketStream.startTransaction();
    socketStream >> buffer;

    if (!socketStream.commitTransaction())
    {
        QString message = QString("%1 :: Waiting for more data to come..").arg(socket->socketDescriptor());
        emit newMessage(message);
        return;
    }

    QString header = buffer.mid(0,128);
    QString fileType = header.split(",")[0].split(":")[1];

    buffer = buffer.mid(128);

    if (fileType=="attachment") {
        QString fileName = header.split(",")[1].split(":")[1];
        QString ext = fileName.split(".")[1];
        QString size = header.split(",")[2].split(":")[1].split(";")[0];

        std::cout << "ClientMsg ATTENTION: " << "You are receiving an attachment from :" << socket->socketDescriptor() << " of size: " << size.toStdString() << ", called " << fileName.toStdString() << "\n";


        //QString filePath = QFileDialog::getSaveFileName(this, tr("Save File"), QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)+"/"+fileName, QString("File (*.%1)").arg(ext));
        QString filePath = QDir::currentPath();
        QFile file(filePath);
        if (file.open(QIODevice::WriteOnly)){
            file.write(buffer);
            QString message = QString("ClientMsg INFO :: Attachment from sd:%1 successfully stored on disk under the path %2").arg(socket->socketDescriptor()).arg(QString(filePath));
            emit newMessage(message);
        } else {
            std::cout << "ClientMsg ATTENTION: An error occurred while trying to write the attachment." << '\n';
        }


    } else if(fileType=="message") {
        QString message = QString("%1 :: %2").arg(socket->socketDescriptor()).arg(QString::fromStdString(buffer.toStdString()));
        emit newMessage(message);
    }
}


void netclient::discardSocket()
{
    socket->deleteLater();
    socket=nullptr;

    std::cout << "ClientMsg: Disconnected from Server!" << std::endl;
}

void netclient::displayError(QAbstractSocket::SocketError socketError)
{
    switch (socketError) {
        case QAbstractSocket::RemoteHostClosedError:
        break;
        case QAbstractSocket::HostNotFoundError:
            std::cout << "ClientMsg HostNotFoundError: " << "The host was not found. Please check the host name and port settings." << '\n';
        break;
        case QAbstractSocket::ConnectionRefusedError:
            std::cout << "ClientMsg ConnectionRefusedError: " << "The connection was refused by the peer. Make sure QTCPServer is running, and check that the host name and port settings are correct." <<  '\n';
        break;
        default:
            QTcpSocket* socket = qobject_cast<QTcpSocket*>(sender());
            std::cout << "ClientMsg Attention: : " << "The following error occurred: " << socket->errorString().toStdString() << '\n';
        break;
    }
}

// could be improved: instead of passing QString, one can use pointer
void netclient::on_pushButton_sendMessage_clicked(QString str)
{
    if(socket)
    {
        if(socket->isOpen())
        {

            QDataStream socketStream(socket);
            socketStream.setVersion(QDataStream::Qt_5_15);

            QByteArray header;
            header.prepend(QString("fileType:message,fileName:null,fileSize:%1;").arg(str.size()).toUtf8());
            header.resize(128);

            QByteArray byteArray = str.toUtf8();
            byteArray.prepend(header);

            socketStream << byteArray;
        }
        else
            std::cout << "ClientMsg: Socket doesn't seem to be opened" << std::endl;
    }
    else
        std::cout << "ClientMsg: Not connected" << std::endl;
}


void netclient::on_pushButton_sendAttachment_clicked()
{
    if(socket)
    {
        if(socket->isOpen())
        {
//            QString filePath = QFileDialog::getOpenFileName(this, ("Select an attachment"), QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation), ("File (*.json *.txt *.png *.jpg *.jpeg)"));
            QString filePath = QDir::currentPath();

            if(filePath.isEmpty()){
                std::cout << "ClientMsg: You haven't selected any attachment!" << std::endl;
                return;
            }

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

                socketStream.setVersion(QDataStream::Qt_5_15);
                socketStream << byteArray;
            }else
                std::cout << "ClientMsg: Attachment is not readable!" << std::endl;
        }
        else
            std::cout << "ClientMsg: Socket doesn't seem to be opened" << std::endl;
    }
    else
        std::cout << "QTCPClient: Not connected" << std::endl;
}

void netclient::displayMessage(const QString& str)
{
    std::cout << str.toStdString() << '\n';
    // Invoke the flush and call it manually.
    std::cout.flush();
}
