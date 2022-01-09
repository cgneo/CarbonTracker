#include "transport_api.h"



transport_api::transport_api(){
    /*
     This constructors connects the network manager which is the sender and waits for the signal
     &QNetworkAccessManager::finished to do transport_api::parse_reply
     */
    connect(&networkManager,&QNetworkAccessManager::finished,this,&transport_api::parse_reply);
    emission = -5;
    // We now need to get the API key
    QFile file("/Users/alex_christlieb/Documents/Ecole Polytechnique/Courses/Year 2/CSE201/Project/CarbonTracker/CO2_Tracker/API_KEY.txt");
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
    // We construct the URL and give it the headers and data
    QUrl url("https://beta2.api.climatiq.io/estimate");
    QNetworkRequest networkRequest(url);
    networkRequest.setRawHeader("Authorization", api_key);
    networkRequest.setRawHeader("Content-Type","application/json");
    QByteArray data("{\"emission_factor\": \"");
    data.append(get_transport_ID(id));
    data.append("\",\"parameters\":{\"distance\": ");
    data.append(distance);
    data.append(",\"distance_unit\": \"km\"},\"metadata\": {\"scope\": \"2\",\"category\": \"string\"}}");
    // Create a loop to prevent callbacks and wait for reply to fully download
    QEventLoop loop;
    QNetworkReply* reply = networkManager.post(networkRequest, data);
    // Send a POST request
    connect(reply , SIGNAL(finished()), &loop, SLOT(quit()));
    loop.exec();
}

double transport_api::get_emission(){return emission;}

double transport_api::parse_reply(QNetworkReply* reply){
    // Check if there is a reply error. If so, print out the error number (famous convention that assigns for each number an error)
    if(reply->error() != QNetworkReply::NoError){
        networkManager.clearAccessCache();
        emission=-1;
        std::cout<<reply->error()<<std::endl;

    } else {
        //parse the reply JSON
        QJsonObject jsonObject = QJsonDocument::fromJson(reply->readAll()).object();
        //get CO2 amount and unit
        QJsonValue alpha = jsonObject.value("co2e");
        double beta = alpha.toDouble();
        QString code = jsonObject["co2e_unit"].toString();
        emission_unit = code;
        emission = beta;
    }
    reply->deleteLater();
}

QString transport_api::get_emission_unit(){return emission_unit;}

// create hash function to be able to compare strings
constexpr unsigned int hash(const char *s, int off = 0) {
    return !s[off] ? 5381 : (hash(s, off+1)*33) ^ s[off];
}

// compare the input with strings to get corresponding ID for URL data
char* transport_api::get_transport_ID(char* input){
switch( hash(input) ){
case hash("International train") : return "passenger_train-route_type_international_rail-fuel_source_na";
case hash("Metro") : return "passenger_train-route_type_urban-fuel_source_diesel";
case hash("National train") :  return "passenger_train-route_type_national_rail-fuel_source_na";
case hash("Bus") : return "passenger_train-route_type_national_rail-fuel_source_na";
case hash("Ferry") : return "passenger_ferry-route_type_na-fuel_source_na";
case hash("Electric car") : return "passenger_vehicle-vehicle_type_car-fuel_source_bev-engine_size_na-vehicle_age_na-vehicle_weight_na";
case hash("Petrol car") :  return "passenger_vehicle-vehicle_type_car-fuel_source_petrol-engine_size_na-vehicle_age_na-vehicle_weight_na";
case hash("Diesel car") : return "passenger_vehicle-vehicle_type_car-fuel_source_diesel-engine_size_na-vehicle_age_na-vehicle_weight_na";
case hash("Petrol motorbike") : return "passenger_vehicle-vehicle_type_large_motorbike-fuel_source_petrol-engine_size_na-vehicle_age_na-vehicle_weight_na";
case hash("First class international flight") : return "passenger_flight-route_type_outside_uk-aircraft_type_na-distance_na-class_first-contrails_included";
case hash("Domestic flight") : return "passenger_flight-route_type_domestic-aircraft_type_na-distance_na-class_na-contrails_included";
case hash("Business class international flight") : return "passenger_flight-route_type_outside_uk-aircraft_type_na-distance_na-class_business-contrails_included";
case hash("Economy class international flight") : return "passenger_flight-route_type_outside_uk-aircraft_type_na-distance_na-class_economy-contrails_included";
}}
