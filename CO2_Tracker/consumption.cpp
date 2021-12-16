#include "consumption.h"
#include "object.h"

Consumption::Consumption(){}

Consumption::Consumption(int userId)
{
    this->userId = userId;
    this->base_consumptionId = userId;
    consumptionId = (this->userId); // Creates unique id equal to that of the user
    total_footprint = 0;
    food_footprint = 0;
    transport_footprint = 0;
    base = Base_Consumption(userId);
}

Consumption::Consumption(int userId, Base_Consumption base, vector<Object> total_consumption){
    this->userId = userId;
    this->base_consumptionId = userId;
    this -> total_consumption = total_consumption;
    consumptionId = (this->userId); // Creates unique id equal to that of the user
    this -> base = base;
    add_base_consumption(base);
    calculate_each_footprint();
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

double Consumption::get_food_footprint(){
    return food_footprint;
}
double Consumption::get_transport_footprint(){
    return transport_footprint;
}

Object Consumption::get_object_i(int i){
    return total_consumption[i];
}

void Consumption::calculate_each_footprint(){ // should be part of initialization
    for(vector<Object>::iterator i=total_consumption.begin(); i!=total_consumption.end();i++){
        Object obj = *i;
        if(obj.get_type() == "food"){
            food_footprint += obj.get_footprint();
            total_footprint += obj.get_footprint();
        }
        if(obj.get_type() == "transport"){
            transport_footprint += obj.get_footprint();
            total_footprint += obj.get_footprint();
        }
        else{
            total_footprint += obj.get_footprint();
        }
    }
}

int Consumption::get_base_consumptionId(){
    return base.get_userId();
}

void Consumption::add_object(Object obj){
    total_consumption.push_back(obj);
    total_footprint += obj.get_footprint();
    if(obj.get_type() == "food"){
        food_footprint += obj.get_footprint();
    }
    if(obj.get_type() == "transport"){
        transport_footprint += obj.get_footprint();
    }
}

/*
void Consumption::remove_object(Object obj){

    int size = total_consumption.size();
    for(vector<Object>::iterator i=total_consumption.begin(); i!=total_consumption.end();i++){
        if(total_consumption[i]==obj){

        }
    }

}Object get_object_i(int i)
*/ // not sure yet if we will need this

void Consumption::add_base_consumption(Base_Consumption base){
    int size = base.get_size();
    for(int i=0;i<size;i++){
        Object new_obj = base.get_object_i(i);
        add_object(new_obj);
        total_footprint += new_obj.get_footprint();
        if(new_obj.get_type() == "food"){
            food_footprint += new_obj.get_footprint();
        }
        if(new_obj.get_type() == "transport"){
            transport_footprint += new_obj.get_footprint();
        }
    }
}



