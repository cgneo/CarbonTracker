#include "object.h"
#include "date.h"

object::object(){
    date = Date(0,0,0);
    footprint = 0;
    name = "Jesus";
    type = "Food";
}

object::object(Date current_date, string object_name, string object_type){
    date = current_date;
    footprint = 0;
    name = object_name;
    type = object_type;
}
Date object::get_date(){
    return date;
}

float object::get_footprint(){
    return footprint;
}
string object::get_type(){
    return type;}

string object::get_name(){
    return name;}

void object::set_date(Date current_date){
    date = current_date;
}
void object::set_footprint(float co2_emission){
    footprint = co2_emission;
}
void object::set_name(string object_name){
    name = object_name;
}
void object::set_type(string object_type){
    type = object_type;
}
object::~object(){
    delete &date;
    type.clear();
    name.clear();
    delete &footprint;
}


