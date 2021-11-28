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
QApplication a(argc, argv);
//setup GUI (you could be doing this in the designer)
QWidget widget;
QFormLayout layout(&widget);
QLineEdit lineEditCode;
auto edits = {&lineEditCode};
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
        QJsonValue alpha = jsonObject.value("co2e");
        double beta = alpha.toDouble();
        std::cout<<beta;
         QString code = jsonObject["co2e_unit"].toString();
        //pass info to the window
        lineEditCode.setText(code);
    }
    button.setEnabled(true);
    reply->deleteLater();
});
//url parameters
QUrl url("https://beta2.api.climatiq.io/estimate");
QNetworkRequest networkRequest(url);
networkRequest.setRawHeader("Authorization","Bearer PMM4N5N6DEMY3VHQJXZ3S0FEE9GZ");
networkRequest.setRawHeader("Content-Type","application/json");
QByteArray data("{\"emission_factor\": \"passenger_vehicle-vehicle_type_car-fuel_source_na-engine_size_na-vehicle_age_na-vehicle_weight_na\",\"parameters\":{\"distance\": 30,\"distance_unit\": \"km\"},\"metadata\": {\"scope\": \"2\",\"category\": \"string\"}}");
//send GET request when the button is clicked
QObject::connect(&button, &QPushButton::clicked, [&](){
    networkManager.post(networkRequest,data);
    button.setEnabled(false);
    for(auto edit : edits) edit->setText("Loading. . .");
});

widget.show();
return a.exec();

}
