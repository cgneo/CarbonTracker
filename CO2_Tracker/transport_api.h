#ifndef TRANSPORT_API_H
#define TRANSPORT_API_H
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QApplication>
#include <QtWidgets>
#include <QtNetwork>
#include <iostream>
#include <QFile>

class transport_api : public QObject
{
    Q_OBJECT
public:
    transport_api();
    void get_reply();
    void parse_reply(QNetworkReply*);
    void set_api_key();
    double emission;
private:
    QNetworkAccessManager networkManager;
    QByteArray api_key;


};


#endif // TRANSPORT_API_H
