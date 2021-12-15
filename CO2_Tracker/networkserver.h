#ifndef MAIN_H
#define MAIN_H

#endif // MAIN_H

#include <ostream>

#include <QTcpServer>
#include <QTcpSocket>


// inherits from QObject (so that connect method can be accessed)
class TCPserver : public QObject {

    Q_OBJECT

    public:
        void startServer();
        explicit TCPserver();
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
