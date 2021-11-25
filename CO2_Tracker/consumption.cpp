#include "consumption.h"

Consumption::Consumption(int userId)
{
    this->userId = userId;
    this->base_consumptionId = userId;
    consumptionId = (this->userId); // Creates unique id equal to that of the user
    total_footprint = 0;
//    base_consumption = Base_Consumption(userId);//Args missing
}

Consumption::~Consumption(){
    delete &userId;
//    delete &base_consumption;
    delete &total_footprint;
    delete &total_consumption;
}

int Consumption::get_userId(){
    return userId;
}
int Consumption::get_consumptionId(){
    return consumptionId;
}

//int Consumption::get_base_consumptionId(){
//    return base_consumption.userId;
//}
void Consumption::add_object(Object obj){

}
void Consumption::add_base_consumption(Base_Consumption base_consumption){
//    this->base_consumption = base_consumption;
}

