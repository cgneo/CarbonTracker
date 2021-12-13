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
    delete &base_consumptionId;
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
    total_consumption.push_back(obj);
    total_footprint += obj.get_footprint();

}

/*
void Consumption::remove_object(Object obj){

    int size = total_consumption.size();
    for(vector<Object>::iterator i=total_consumption.begin(); i!=total_consumption.end();i++){
        if(total_consumption[i]==obj){

        }
    }

}
*/

void Consumption::add_base_consumption(Base_Consumption base){
    int size = base.get_size();
    for(int i=0;i<size;i++){
        add_object(base.object[i]);//tbd
    }
    total_footprint += base.get_total_footprint();

}

