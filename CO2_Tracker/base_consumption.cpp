#include "base_consumption.h"


Base_Consumption::Base_Consumption(){
    userId = 0;
    base_consumptionId = 0;
    consumptionId = 0;
    footprint = 0;
}

Base_Consumption::Base_Consumption(int userId)
{
    this->userId = userId;
    base_consumptionId = userId;
    consumptionId = userId;
    footprint = 0;
//    base_consumption = calculate_base_consumption();//Args missing
}

Base_Consumption::~Base_Consumption(){
    for (Object *obj: base_consumption)
        delete obj;
}

int Base_Consumption::get_userId(){
    return userId;
}
int Base_Consumption::get_consumptionId(){
    return consumptionId;
}

int Base_Consumption::get_base_consumptionId(){
    return base_consumptionId;
}
int Base_Consumption::get_size(){
    return base_consumption.size();
}

Object *Base_Consumption::get_object_i(int i){
    return base_consumption[i];
}

double Base_Consumption::get_footprint() {
    return footprint;
}

//vector<Object> Base_Consumption::*calculate_base_consumption(double c_footprint, int roommates){
//    //get base footprint and divide by number of roommates
//}


//Adds object to base_consumption vector and adds its carbon footprint to footprint
void Base_Consumption::add_object(Object *item) {
    base_consumption.push_back(item);
    footprint += item->get_footprint();
}


//returns the total (base) food footprint of user
double Base_Consumption::total_base_food() {
    double food_print = 0;
    for(Object *obj : base_consumption) {
        if(obj->get_type() == "food") {
            food_print += obj->get_footprint();
        }
    }
    return food_print;
}


//returns the total (base) transport footprint of user
double Base_Consumption::total_base_transport() {
    double transport_print = 0;
    for(Object *obj : base_consumption) {
        if(obj->get_type() == "transport") {
            transport_print += obj->get_footprint();
        }
    }
    return transport_print;
}
