#ifndef CONSUMPTION_H
#define CONSUMPTION_H
#include <string>
#include <vector>
#include "object.h"
#include "base_consumption.h"



class Consumption
{
private:
    int consumptionId;
    int userId;
    int base_consumptionId;
    vector<Object> total_consumption; //Array of objects
    double total_footprint;
    double food_footprint;
    double transport_footprint;
    Base_Consumption base;

public:
    //Seters and getters
    Consumption(int userId);
    ~Consumption();
    int get_consumptionId();
    int get_userId();
    int get_base_consumptionId();
    double get_food_footprint();
    double get_transport_footprint();

    //Other methods
    double calculate_food_footprint();
    double calculate_transport_footprint();
    void add_object(Object obj);
    void remove_object(Object obj);
    void add_base_consumption(Base_Consumption base);

};

#endif // CONSUMPTION_H
