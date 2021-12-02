#include <QCoreApplication>

#include <iostream>
#include <colormod.h>


#include <QTcpServer>
#include <QTcpSocket>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Adding colors
    Color::Modifier terminal_red(Color::FG_RED);
    Color::Modifier terminal_redBG(Color::BG_RED);
    Color::Modifier terminal_cyan(Color::FG_CYAN);
    Color::Modifier terminal_white(Color::FG_WHITE);
    Color::Modifier terminal_default(Color::FG_DEFAULT);
    Color::Modifier terminal_defaultBG(Color::BG_DEFAULT);

    // Create a server
    QTcpServer *m_server = new QTcpServer();

    if (m_server->listen(QHostAddress::Any, 8080))
    {
//        connect(this, &MainWindow::newMessage, this, &MainWindow::displayMessage);
//        connect(m_server, &QTcpServer::newConnection, this, &MainWindow::newConnection);
        std::cout << "QTCPServer: " << terminal_cyan << "Server is listening..." << terminal_default << '\n';
    }
    else
    {
        std::cout << "QTCPServer: " << terminal_red << "Unable to start the server..." << terminal_default << '\n';
        exit(EXIT_FAILURE);
    }

    // Invoke the flush and call it manually.
    std::cout.flush();


    return a.exec();
}

class TCPserver {
    Q_OBJECT

    public:
        explicit TCPserver(QWidget *parent = nullptr);
        ~TCPserver();

    signals:
        void newMessage(QString);
    private slots:
        void newConnection();
        void appendToSocketList(QTcpSocket* socket);

        void readSocket();
        void discardSocket();
        void displayError(QAbstractSocket::SocketError socketError);

        void displayMessage(const QString& str);
        void sendMessage(QTcpSocket* socket);
        void sendAttachment(QTcpSocket* socket, QString filePath);

        void on_pushButton_sendMessage_clicked();
        void on_pushButton_sendAttachment_clicked();

        void refreshComboBox();
    private:
        QTcpServer* m_server;
        QSet<QTcpSocket*> connection_set;
};

