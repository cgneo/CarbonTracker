#include "transport_api.h"



transport_api::transport_api(){
    connect(&networkManager,&QNetworkAccessManager::finished,this,&transport_api::parse_reply);
    emission = -5;
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
        api_key=bytes;
    }

void transport_api::get_reply(char*distance, char*id){
    QUrl url("https://beta2.api.climatiq.io/estimate");
    QNetworkRequest networkRequest(url);
    networkRequest.setRawHeader("Authorization", api_key);
    networkRequest.setRawHeader("Content-Type","application/json");
    QByteArray data("{\"emission_factor\": \"");
    data.append(get_transport_ID(id));
    data.append("\",\"parameters\":{\"distance\": ");
    data.append(distance);
    data.append(",\"distance_unit\": \"km\"},\"metadata\": {\"scope\": \"2\",\"category\": \"string\"}}");
    QEventLoop loop;
    QNetworkReply* reply = networkManager.post(networkRequest, data);
    connect(reply , SIGNAL(finished()), &loop, SLOT(quit()));
    loop.exec();
}

double transport_api::get_emission(){return emission;}

double transport_api::parse_reply(QNetworkReply* reply){
QString strValue;
    if(reply->error() != QNetworkReply::NoError){
        networkManager.clearAccessCache();
        emission=-1;
        std::cout<<reply->error()<<std::endl;

    } else {
        //parse the reply JSON
        QJsonObject jsonObject = QJsonDocument::fromJson(reply->readAll()).object();
        //get code
        QJsonValue alpha = jsonObject.value("co2e");
        double beta = alpha.toDouble();
        QString code = jsonObject["co2e_unit"].toString();
        emission_unit = code;
        emission = beta;
    }
    reply->deleteLater();
}

QString transport_api::get_emission_unit(){return emission_unit;}
constexpr unsigned int hash(const char *s, int off = 0) {
    return !s[off] ? 5381 : (hash(s, off+1)*33) ^ s[off];
}

char* transport_api::get_transport_ID(char* input){
switch( hash(input) ){
case hash("international train") : return "passenger_train-route_type_international_rail-fuel_source_na";
case hash("metro") : return "passenger_train-route_type_urban-fuel_source_diesel";
case hash("national train") :  return "passenger_train-route_type_national_rail-fuel_source_na";
case hash("bus") : return "passenger_train-route_type_national_rail-fuel_source_na";
case hash("ferry") : return "passenger_ferry-route_type_na-fuel_source_na";
case hash("electric car") : return "passenger_vehicle-vehicle_type_car-fuel_source_bev-engine_size_na-vehicle_age_na-vehicle_weight_na";
case hash("petrol car") :  return "passenger_vehicle-vehicle_type_car-fuel_source_petrol-engine_size_na-vehicle_age_na-vehicle_weight_na";
case hash("diesel car") : return "passenger_vehicle-vehicle_type_car-fuel_source_diesel-engine_size_na-vehicle_age_na-vehicle_weight_na";
case hash("petrol motorbike") : return "passenger_vehicle-vehicle_type_large_motorbike-fuel_source_petrol-engine_size_na-vehicle_age_na-vehicle_weight_na";
case hash("first class international flight") : return "passenger_flight-route_type_outside_uk-aircraft_type_na-distance_na-class_first-contrails_included";
case hash("domestic flight") : return "passenger_flight-route_type_domestic-aircraft_type_na-distance_na-class_na-contrails_included";
case hash("business class international flight") : return "passenger_flight-route_type_outside_uk-aircraft_type_na-distance_na-class_business-contrails_included";
case hash("economy class international flight") : return "passenger_flight-route_type_outside_uk-aircraft_type_na-distance_na-class_economy-contrails_included";
}}
