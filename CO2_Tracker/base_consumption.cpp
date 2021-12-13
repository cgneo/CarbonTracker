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
int Base_Consumption::get_size(){
    return base_consumption.size();
}
vector<Object> Base_Consumption::*calculate_base_consumption(double c_footprint, int roommates){
    //get base footprint and divide by number of roommates
}

Object Base_Consumption::get_object_i(int i){
    return base_consumption[i];
}
