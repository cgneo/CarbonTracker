#include "consumption.h"
#include "object.h"
#include "json_DB.hpp"

string Consumption::vehicles[12] = {"Electric car",
                                 "Petrol car",
                                 "Diesel car",
                                 "Petrol motorbike",
                                 "Bus",
                                 "Metro",
                                 "Ferry",
                                 "National train",
                                 "International train",
                                 "Domestic flight",
                                 "First class international flight",
                                 "Economy class international flight"};


Consumption::Consumption(){ // Creates unique id equal to that of the user
    total_footprint = 0;
    food_footprint = 0;
    transport_footprint = 0;
    base = Base_Consumption();

    for (int i = 0; i < 12; i++){
        std::pair<std::string,double> pair (vehicles[i], 0);
        footprint_by_vehicle->insert(pair);
    }
}

Consumption::Consumption(Base_Consumption base, vector<Object*> total_consumption){
    this -> total_consumption = total_consumption;
    calculate_footprint();
    this -> base = base;
    add_base_consumption(base);

    footprint_by_vehicle = new std::unordered_map<string, double>; //Assigning dictionaries
    footprint_by_date = new std::unordered_map<string, double>;

    for (int i = 0; i < 12; i++){
        std::pair<std::string,double> pair (vehicles[i], 0);
        footprint_by_vehicle->insert(pair);
    }
}

Consumption::~Consumption(){ //To be properly done
    //delete &total_consumption;

}

int Consumption::get_userId(){
    return userId;
}

void Consumption::set_userId(int user){
    userId = user;
}
int Consumption::get_consumptionId(){
    return consumptionId;
}
double Consumption::get_total_footprint(){
    return total_footprint;
}

double Consumption::get_food_footprint(){
    return food_footprint;
}

double Consumption::get_transport_footprint(){
    return transport_footprint;
}

Object *Consumption::get_object_i(int i){
    return total_consumption[i];
}

vector<Object*> *Consumption::get_total_consumption(){
    return &total_consumption;
}

void Consumption::calculate_footprint(){ // should be part of initialization
    for(Object *i : total_consumption){
        Object obj = *i;

        QString type_ = obj.get_type();
        string type = type_.toStdString();
        QString name_ = obj.get_name();
        string name = name_.toStdString();
        double footprint = obj.get_footprint();
        Date *date = obj.get_date();

        total_footprint += footprint; //update total footprint
        if(type == "food"){
            food_footprint += footprint;

        }
        else if(type == "transport"){
            footprint_by_vehicle->at(name) += footprint;
            transport_footprint += footprint;
        }
        int day = date->get_day();
        int month = date->get_month();
        int year = date->get_year();

        string key_day = to_string(day)+to_string(month)+to_string(year);
        string key_month = to_string(month) + to_string(year);
        string key_year = to_string(year);

        footprint_by_date->at(key_day) += footprint;
        footprint_by_date->at(key_month) += footprint;
        footprint_by_date->at(key_year) += footprint;

    }
}


int Consumption::get_base_consumptionId(){
    return base.get_userId();
}

void Consumption::add_object(Object *obj, bool new_object){ //New object = True if object is added by user
    total_consumption.push_back(obj);                       //False if it is read from Json file
    Json_DB json_obj;

    if (new_object){ // If object is new, write into json file
        json_obj.addObject_to_file(*obj);
    } //Otherwise, we are just adding the object to the total_consumption vector

    QString type_ = obj->get_type();
    string type = type_.toStdString();
    QString name_ = obj->get_name();
    string name = name_.toStdString();
    double footprint = obj->get_footprint();
    Date *date = obj->get_date();

    total_footprint += footprint; //update total footprint

    if(type == "food"){
        food_footprint += footprint; //Update food footprint

    }
    else if(type == "transport"){
        footprint_by_vehicle->at(name) += footprint;
        transport_footprint += footprint; //Update transport footprint
    }

    int day = date->get_day();
    int month = date->get_month();
    int year = date->get_year();

    string key_day = to_string(day)+to_string(month)+to_string(year);
    string key_month = "00"+to_string(month) + to_string(year);
    string key_year = "0000"+to_string(year); //Creating standarized hash keys for dates

    if (footprint_by_date->find(key_day) == footprint_by_date->end()){
        footprint_by_date->insert({key_day, footprint});
    } //Check if key is in dictionary. Add key if not, update value if it is in dictionary
    else{
        footprint_by_date->at(key_day) += footprint;
    }

    if (footprint_by_date->find(key_month) == footprint_by_date->end()){
        footprint_by_date->insert({key_month, footprint});
    } //Repeat process for month key
    else{
        footprint_by_date->at(key_month) += footprint;
    }

    if (footprint_by_date->find(key_year) == footprint_by_date->end()){
        footprint_by_date->insert({key_year, footprint});
    } //Repeat process for year_key
    else{
        footprint_by_date->at(key_year) += footprint;
    }

}

void Consumption::add_base_consumption(Base_Consumption base){
    int size = base.get_size();
    for(int i=0;i<size;i++){
        Object *new_obj = base.get_object_i(i);
        add_object(new_obj, true);
    }
}

double Consumption::get_vehicle_footprint(string vehicle_name){
    return footprint_by_vehicle->at(vehicle_name);
}

double Consumption::get_yearly_footprint(string year){
    return footprint_by_date->at(year);
}

double Consumption::get_monthly_footprint(string month){
    return footprint_by_date->at(month);
}

double Consumption::get_daily_footprint(string day){
    return footprint_by_date->at(day);

}

void Consumption::add_receipt(Receipt receipt){
    int size = receipt.get_receipt_content().size();
    vector<Object *> content = receipt.get_receipt_content();
    for(int i=0;i<size;i++){
        Object *new_obj = content[i];
        add_object(new_obj, true);
    }
}

void Consumption::set_total_consumption(vector<Object*> consumption){
    for(int i=0;;i++){

        Object obj = *consumption[i];
        QString type_ = obj.get_type();
        string type = type_.toStdString();
        QString name_ = obj.get_name();
        string name = name_.toStdString();
        double footprint = obj.get_footprint();
        Date *date = obj.get_date();

        total_footprint += footprint; //update total footprint
        if(type == "food"){
            food_footprint += footprint;

        }
        else if(type == "transport"){
            footprint_by_vehicle[name] += footprint;
            transport_footprint += footprint;
        }
        int day = date->get_day();
        int month = date->get_month();
        int year = date->get_year();

        string key_day = to_string(day)+to_string(month)+to_string(year);
        string key_month = to_string(month) + to_string(year);
        string key_year = to_string(year);

        footprint_by_date[key_day] += footprint;
        footprint_by_date[key_month] += footprint;
        footprint_by_date[key_year] += footprint;
    }
    total_consumption = consumption;
}

