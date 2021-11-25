#include "base_consumption.h"

Base_Consumption::Base_Consumption( int userId)
{
    this->userId = userId;
    base_consumptionId = userId;
    consumptionId = userId;
    base_consumption = calculate_base_consumption();//Args missing
    footprint = 0;

}

Base_Consumption::~Base_Consumption(){
    delete &userId;
    delete &base_consumption;
}

int const Base_Consumption::get_userId(){
    return userId;
}
int const Base_Consumption::get_consumptionId(){
    return consumptionId;
}
int const Base_Consumption::get_base_consumptionId(){
    return base_consumptionId;
}
vector<object> Base_Consumption::*calculate_base_consumption(){

}

