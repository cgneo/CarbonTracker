#include "object.h"
#include "date.h"

Object::Object(){date = Date(0,0,0);
                footprint = 0;
                name = "Jesus";
                type = "Food";}

Object::Object(Date current_date, string object_name, string object_type){
    date = current_date;
    footprint = 0;
    name = object_name;
    type = object_type;
}

Date Object::get_date(){
    return date;
}

double Object::get_footprint(){
    return footprint;
}

string Object::get_type(){
    return type;
}

string Object::get_name(){
    return name;
}

void Object::set_date(Date current_date){
    date = current_date;
}

void Object::set_footprint(double co2_emission){
    footprint = co2_emission;
}

void Object::set_name(string object_name){
    name = object_name;
}

void Object::set_type(string object_type){
    type = object_type;
}

Object::~Object(){
    delete &date;
    type.clear();
    name.clear();
    delete &footprint;
}


