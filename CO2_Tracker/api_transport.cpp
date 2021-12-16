#include "api_transport.h"
#include "ui_api_transport.h"
#include <string>
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







api_transport::api_transport(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::api_transport)
{
    ui->setupUi(this);
}

api_transport::~api_transport()
{
    delete ui;
}


QByteArray api_transport::get_API(){
    QFile file("/Users/alex_christlieb/Desktop/API_KEY.txt");
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



char* api_transport::get_transport_ID(char* input){
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


void api_transport::on_pushButton_clicked()
{
    QNetworkAccessManager *man = new QNetworkAccessManager(this);
    connect(man, &QNetworkAccessManager::finished, this, &api_transport::downloadFinished);
    const QUrl url = QUrl(url);
    QNetworkRequest networkRequest(url);
    QByteArray key = get_API();
    networkRequest.setRawHeader("Authorization", key);
    networkRequest.setRawHeader("Content-Type","application/json");
    QByteArray data("{\"emission_factor\": \"");
    data.append("metro");
    data.append("\",\"parameters\":{\"distance\": ");
    data.append("10");
    data.append(",\"distance_unit\": \"km\"},\"metadata\": {\"scope\": \"2\",\"category\": \"string\"}}");
    //send GET request when the button is clicked

    man->post(networkRequest, data);
}

void api_transport::downloadFinished(QNetworkReply *reply) {
    QJsonObject jsonObject= QJsonDocument::fromJson(reply->readAll()).object();
    //get code
    QJsonValue alpha = jsonObject.value("co2e");
    double beta = alpha.toDouble();
    QString code = jsonObject["co2e_unit"].toString();
    QString strValue = QString::number(beta, 'f', 3);


    //printing value
    std::cout<<strValue.toStdString()<<std::endl;
}




