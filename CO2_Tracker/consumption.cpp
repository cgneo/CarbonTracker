#include "consumption.h"
#include "object.h"
#include "json_DB.hpp"

QString Consumption::vehicles[12] = {"Electric car",
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

    transportfootprint = {
        {"Electric car", 0},
        {"Petrol car", 0},
        {"Diesel car", 0},
        {"Petrol motorbike", 0},
        {"Bus", 0},
        {"Metro", 0},
        {"Ferry", 0},
        {"National train", 0},
        {"International train", 0},
        {"Domestic flight", 0},
        {"First class international flight", 0},
        {"Economy class international flight", 0},
    };
}

Consumption::Consumption(Base_Consumption base, vector<Object*> total_consumption){
    this -> total_consumption = total_consumption;
    calculate_footprint();
    this -> base = base;
    add_base_consumption(base);
    transportfootprint = {
        {"Electric car", 0},
        {"Petrol car", 0},
        {"Diesel car", 0},
        {"Petrol motorbike", 0},
        {"Bus", 0},
        {"Metro", 0},
        {"Ferry", 0},
        {"National train", 0},
        {"International train", 0},
        {"Domestic flight", 0},
        {"First class international flight", 0},
        {"Economy class international flight", 0},
    };
}

Consumption::~Consumption(){ //To be properly done
    //delete &total_consumption;
}

int Consumption::get_userId(){
    return userId;
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

void Consumption::calculate_footprint(){ // should be part of initialization
    for(Object *i : total_consumption){
        Object obj = *i;

        QString type = obj.get_type();
        QString name = obj.get_name();
        double footprint = obj.get_footprint();
        Date *date = obj.get_date();

        total_footprint += footprint; //update total footprint
        if(type == "food"){
            food_footprint += footprint;
        }
        else if(type == "transport"){
            transportfootprint[name] += footprint;
            transport_footprint += footprint;
        }
        int day = date->get_day();
        int month = date->get_month();
        int year = date->get_year();

        QString key_day = QString::number(day)+QString::number(month) + QString::number(year);
        QString key_month = QString::number(month) + QString::number(year);
        QString key_year = QString::number(year);

        datefootprint[key_day] += footprint;
        datefootprint[key_month] += footprint;
        datefootprint[key_year] += footprint;
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

    QString type = obj->get_type();
    QString name = obj->get_name();
    double footprint = obj->get_footprint();
    Date *date = obj->get_date();

    total_footprint += footprint; //update total footprint
    if(type == "food"){
        food_footprint += footprint;
    }
    else if(type == "transport"){
        transportfootprint[name] += footprint;
        transport_footprint += footprint;
    }
    int day = date->get_day();
    int month = date->get_month();
    int year = date->get_year();

    QString key_day = QString::number(day)+QString::number(month) + QString::number(year);
    QString key_month = QString::number(month) + QString::number(year);
    QString key_year = QString::number(year);

    datefootprint[key_day] += footprint;
    datefootprint[key_month] += footprint;
    datefootprint[key_year] += footprint;

}

void Consumption::add_base_consumption(Base_Consumption base){
    int size = base.get_size();
    for(int i=0;i<size;i++){
        Object *new_obj = base.get_object_i(i);
        add_object(new_obj, true);
    }
}

double Consumption::get_vehicle_footprint(QString vehicle_name){
    return transportfootprint[vehicle_name];
}

double Consumption::get_yearly_footprint(QString year){
    return datefootprint[year];
}

double Consumption::get_monthly_footprint(QString month){
    return datefootprint[month]
}

double Consumption::get_daily_footprint(QString day){
    return datefootprint[day];

}

void Consumption::add_receipt(Receipt receipt){
    int size = receipt.get_receipt_content().size();
    vector<Object *> content = receipt.get_receipt_content();
    for(int i=0;i<size;i++){
        Object *new_obj = content[i];
        add_object(new_obj, true);
    }
}

void Consumption::set_total_consumption(vector<Object *> consumption){
    total_consumption = consumption;
}

