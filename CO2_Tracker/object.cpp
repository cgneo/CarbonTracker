#include "object.h"
#include "date.h"



Object::Object(){
    date = new Date(0,0,0);
    footprint = 0;
    name = "jesus";
    type = "food";
}

Object::Object(Date *current_date, QString object_name){
    date = current_date;
    name = object_name;
}

Object::Object(Date *current_date, QString object_name, QString object_type, double footprint){
    date = current_date;
    this->footprint = footprint;
    name = object_name;
    type = object_type;
}

Object::~Object(){
    //delete date;
    //Can crash the program if two objects with same date are generated together
}


//---------------------Get Methods--------------------------
Date* Object::get_date(){
    return date;
}

double Object::get_footprint(){
    return footprint;
}

QString Object::get_type(){
    return type;
}

QString Object::get_name(){
    return name;
}

//---------------------Set Methods--------------------------
void Object::set_date(Date *current_date){
    date = current_date;
}

void Object::set_footprint(double co2_emission){
    footprint = co2_emission;
}

void Object::set_name(QString object_name){
    name = object_name;
}

void Object::set_type(QString object_type){
    type = object_type;
}

//---------------------Other methods------------------------------
void Object::object_to_json(QJsonObject &obj){
    obj["Type"] = type;
    obj["Name"] = name;

    QJsonArray json_date = {date->get_day(), date->get_month()
                      , date->get_year()};
    obj["Date"] = json_date;
    obj["Footprint"] = footprint;
}

