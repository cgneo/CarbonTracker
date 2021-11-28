#include "mainwindow.h"
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

int main(int argc, char *argv[])
{
    QNetworkAccessManager *mgr = new QNetworkAccessManager();
    const QUrl url(QStringLiteral("https://beta2.api.climatiq.io/emission-factors/sectors?source=BEIS"));
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    request.setRawHeader("Authorization","Bearer PMM4N5N6DEMY3VHQJXZ3S0FEE9GZ");
    QByteArray data("{\"emission_factor\": \"passenger_vehicle-vehicle_type_car-fuel_source_na-engine_size_na-vehicle_age_na-vehicle_weight_na\",\"parameters\":{\"distance\": 10,\"distance_unit\": \"km\"},\"metadata\": {\"scope\": \"2\",\"category\": \"string\"}}");
    QNetworkReply *reply = mgr->post(request, data);
    std::cout << 'hi';
    QObject::connect(reply, &QNetworkReply::finished, [=](){
        if(reply->error() == QNetworkReply::NoError){
            QString contents = QString::fromUtf8(reply->readAll());
            std::cout << 'ballabla'<<contents.toStdString() << std::endl;
        }
        else{
            QString err = reply->errorString();
            std::cout << 'ballabla'<<err.toStdString() << std::endl;
        }
        reply->deleteLater();
    });

    return 0;
    /*
    QApplication a(argc, argv);
    //setup GUI (you could be doing this in the designer)
    QWidget widget;
    QFormLayout layout(&widget);
    QLineEdit lineEditCode;
    QLineEdit lineEditBrand;
    QLineEdit lineEditEco;
    QLineEdit lineEditCategory;
    auto edits = {&lineEditCode, &lineEditBrand, &lineEditEco, &lineEditCategory};
    for(auto edit : edits) edit->setReadOnly(true);
    layout.addRow("Code:", &lineEditCode);
    QPushButton button("Click for magic");
    layout.addRow(&button);

    //send request to uinames API
    QNetworkAccessManager networkManager;
    QObject::connect(&networkManager, &QNetworkAccessManager::finished,
                     [&](QNetworkReply* reply){
        //this lambda is called when the reply is received
        //it can be a slot in your GUI window class
        //check for errors

        if(reply->error() != QNetworkReply::NoError){
            for(auto edit : edits) edit->setText("Error");
            networkManager.clearAccessCache();
        } else {
            //parse the reply JSON and display result in the UI
            QJsonObject jsonObject= QJsonDocument::fromJson(reply->readAll()).object();
            //get code
            QJsonValue productKey =jsonObject["results"];
            QString code = productKey[0].toString();
            //pass info to the window
            lineEditCode.setText(code);
        }
        button.setEnabled(true);
        reply->deleteLater();
    });
    //url parameters
    QUrl url("https://beta2.api.climatiq.io/emission-factors/sectors?source=BEIS");
    QNetworkRequest networkRequest(url);
    networkRequest.setRawHeader("Authorization","Bearer PMM4N5N6DEMY3VHQJXZ3S0FEE9GZ");
    networkRequest.setRawHeader("Content-Type","application/json");
    //send GET request when the button is clicked
    QObject::connect(&button, &QPushButton::clicked, [&](){
        networkManager.get(networkRequest);
        button.setEnabled(false);
        for(auto edit : edits) edit->setText("Loading. . .");
    });

    widget.show();
    return a.exec();
    */
}
