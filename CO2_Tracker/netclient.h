//#ifndef NETCLIENT_H
//#define NETCLIENT_H

//#include <QAbstractSocket>
//#include <QDebug>
//#include <QFile>

//#include <QHostAddress>

//#include <QMetaType>
//#include <QString>
//#include <QStandardPaths>
//#include <QTcpSocket>

//class netclient : public QObject
//{
//    Q_OBJECT

//public:
//    void startClient();
//    explicit netclient();
//    ~netclient();

//signals:
//    void newMessage(QString);

//private slots:
//    void readSocket();
//    void discardSocket();
//    void displayError(QAbstractSocket::SocketError socketError);

//    void displayMessage(const QString& str);
//    void on_pushButton_sendMessage_clicked(QString& str);
//    void on_pushButton_sendAttachment_clicked();

//private:
//    QTcpSocket* socket;
//};

//#endif // NETCLIENT_H
