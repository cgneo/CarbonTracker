#ifndef FOOD_API_H
#define FOOD_API_H
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
#include <string>
#include <vector>

using namespace std;

class food_api : public QObject
{
    Q_OBJECT
public:
    food_api(string id, string quant);
    void get_reply();
    void parse_reply(QNetworkReply*);
    vector<string> get_product_info();
    string get_id();
    string get_quantity();
private:
    QNetworkAccessManager networkManager;
    vector<string> product_info; // = {code, eco_score, brand, category}
    string product_id;
    string quantity;
};

#endif // FOOD_API_H
