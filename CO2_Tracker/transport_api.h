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
    void get_reply(char*distance,char* id);
    double parse_reply(QNetworkReply*);
    double get_emission();
    QString get_emission_unit();
    char* get_transport_ID(char*);
private:
    QNetworkAccessManager networkManager;
    QByteArray api_key;
    double emission;
    QString emission_unit;
};


#endif // TRANSPORT_API_H
