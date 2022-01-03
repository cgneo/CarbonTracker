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

Consumption::Consumption(int userId, Base_Consumption base, vector<Object*> total_consumption){
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

Object *Consumption::get_object_i(int i){
    return total_consumption[i];
}

void Consumption::calculate_each_footprint(){ // should be part of initialization
    for(Object *i : total_consumption){
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

void Consumption::add_object(Object *obj){
    total_consumption.push_back(obj);
    total_footprint += obj->get_footprint();
    if(obj->get_type() == "food"){
        food_footprint += obj->get_footprint();
    }
    if(obj->get_type() == "transport"){
        transport_footprint += obj->get_footprint();
    }
}

void Consumption::add_base_consumption(Base_Consumption base){
    int size = base.get_size();
    for(int i=0;i<size;i++){
        Object *new_obj = base.get_object_i(i);
        add_object(new_obj);
        total_footprint += new_obj->get_footprint();
        if(new_obj->get_type() == "food"){
            food_footprint += new_obj->get_footprint();
        }
        if(new_obj->get_type() == "transport"){
            transport_footprint += new_obj->get_footprint();
        }
    }
}

double Consumption::get_vehicle_footprint(string vehicle_name){
    int size = total_consumption.size();
    double vehicle_footprint = 0;
    for(int i=0;i<size;i++){
        if(total_consumption[i]->get_name()==vehicle_name){
            vehicle_footprint += total_consumption[i]->get_footprint();
        }
    }
    return vehicle_footprint;
}

double Consumption::get_yearly_footprint(int year){
    int size = total_consumption.size();
    double year_footprint = 0;
    for(int i=0;i<size;i++){
        if(total_consumption[i]->get_date()->get_year()==year){
            year_footprint += total_consumption[i]->get_footprint();
            }
        }
    return year_footprint;
}

double Consumption::get_monthly_footprint(int month, int year){
    int size = total_consumption.size();
    double month_footprint = 0;
    for(int i=0;i<size;i++){
        if(total_consumption[i]->get_date()->get_year()==year){
            if(total_consumption[i]->get_date()->get_month()==month){
                month_footprint += total_consumption[i]->get_footprint();
            }
        }

    }
    return month_footprint;
}

double Consumption::get_daily_footprint(int day, int month, int year){
    int size = total_consumption.size();
    double daily_footprint = 0;
    for(int i=0;i<size;i++){
        if(total_consumption[i]->get_date()->get_year()==year){
            if(total_consumption[i]->get_date()->get_month()==month){
                if(total_consumption[i]->get_date()->get_day()==day){
                    daily_footprint += total_consumption[i]->get_footprint();
                }
            }
        }

    }
    return daily_footprint;

}


