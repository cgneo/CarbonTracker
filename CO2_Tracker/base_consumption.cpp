#include "base_consumption.h"


Base_Consumption::Base_Consumption(){

}

Base_Consumption::Base_Consumption(int userId)
{
    this->userId = userId;
    base_consumptionId = userId;
    consumptionId = userId;
//    base_consumption = calculate_base_consumption();//Args missing
}

Base_Consumption::~Base_Consumption(){
    delete &userId;
//    delete &base_consumption;
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

double Base_Consumption::get_total_footprint() {
    return footprint;
}

int Base_Consumption::get_size() {
    return base_consumption.size();
}

vector<Object> Base_Consumption::*calculate_base_consumption(double c_footprint, int roommates){
    //get base footprint and divide by number of roommates
}

void Base_Consumption::add_object(Object item) {
    base_consumption.push_back(item);
    footprint += item.get_footprint();
}

double Base_Consumption::total_base_food() {
    double food_print = 0;
    for(vector<Object>::iterator i = base_consumption.begin(); i != base_consumption.end(); i++) {
        if(i->get_type() == "food") {
            food_print += i->get_footprint();
        }
    }
    return food_print;
}

double Base_Consumption::total_base_transport() {
    double transport_print = 0;
    for(vector<Object>::iterator i = base_consumption.begin(); i != base_consumption.end(); i++) {
        if(i->get_type() == "transport") {
            transport_print += i->get_footprint();
        }
    }
    return transport_print;
}

