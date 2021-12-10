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
#include <QFile>

QByteArray get_API(){
    QFile file("/Users/apple/Desktop/CSE201/CarbonTracker/CO2_Tracker/API_KEY.txt");
    //QByteArray *bytes = new Q;
    QByteArray bytes;
    if( file.open( QIODevice::ReadOnly ) )
    {
        try{
            bytes = file.readAll();
            file.close();
        } catch(...) {
            std::cout << "Error";
        }
    }
    return  bytes;
}

char* get_transport_ID(char* input){
    if (input =="international train"){
        return "passenger_train-route_type_international_rail-fuel_source_na";
    };
    if (input == "metro"){
        return "passenger_train-route_type_urban-fuel_source_diesel";
    }
    if (input == "national train"){
        return "passenger_train-route_type_national_rail-fuel_source_na";
    }
    if (input == "bus"){
        return "passenger_vehicle-vehicle_type_local_bus-fuel_source_na-distance_na-engine_size_na";
    }
    if (input == "ferry"){
        return "passenger_ferry-route_type_na-fuel_source_na";
    }
    if (input == "electric car"){
        return "passenger_vehicle-vehicle_type_car-fuel_source_bev-engine_size_na-vehicle_age_na-vehicle_weight_na";
    }
    if (input == "petrol car"){
        return "passenger_vehicle-vehicle_type_car-fuel_source_petrol-engine_size_na-vehicle_age_na-vehicle_weight_na";
    }
    if (input == "diesel car"){
        return "passenger_vehicle-vehicle_type_car-fuel_source_diesel-engine_size_na-vehicle_age_na-vehicle_weight_na";
    }
    if (input == "petrol motorbike"){
        return "passenger_vehicle-vehicle_type_large_motorbike-fuel_source_petrol-engine_size_na-vehicle_age_na-vehicle_weight_na";
    }
    if (input =="first class international flight"){
        return "passenger_flight-route_type_outside_uk-aircraft_type_na-distance_na-class_first-contrails_included";
    };
    if (input == "domestic flight"){
        return "passenger_flight-route_type_domestic-aircraft_type_na-distance_na-class_na-contrails_included";
    }
    if (input == "business class international flight"){
        return "passenger_flight-route_type_outside_uk-aircraft_type_na-distance_na-class_business-contrails_included";
    }
    if (input == "economy international flight"){
        return "passenger_flight-route_type_outside_uk-aircraft_type_na-distance_na-class_economy-contrails_included";
    }
}


int calculator(int argc, char *argv[], char* input,char* distance)
{
QApplication a(argc, argv);
//setup GUI (you could be doing this in the designer)
QWidget widget;
QFormLayout layout(&widget);
QLineEdit lineEditCode;
auto edits = {&lineEditCode};
for(auto edit : edits) edit->setReadOnly(true);
layout.addRow("Carbon footprint [Kg]:", &lineEditCode);
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
        QString code = jsonObject["co2e_unit"].toString();
        QString strValue = QString::number(beta, 'f', 3);
        //pass info to the window
        lineEditCode.setText(strValue+" "+code);
    }
    button.setEnabled(true);
    reply->deleteLater();
});
//url parameters
char* transport_type;
transport_type = get_transport_ID(input);
QUrl url("https://beta2.api.climatiq.io/estimate");
QNetworkRequest networkRequest(url);
QByteArray key = get_API();
networkRequest.setRawHeader("Authorization", key);
networkRequest.setRawHeader("Content-Type","application/json");
QByteArray data("{\"emission_factor\": \"");
data.append(transport_type);
data.append("\",\"parameters\":{\"distance\": ");
data.append(distance);
data.append(",\"distance_unit\": \"km\"},\"metadata\": {\"scope\": \"2\",\"category\": \"string\"}}");
//send GET request when the button is clicked
QObject::connect(&button, &QPushButton::clicked, [&](){
    networkManager.post(networkRequest,data);
    button.setEnabled(false);
    for(auto edit : edits) edit->setText("Loading. . .");
});

widget.show();
return a.exec();
}

