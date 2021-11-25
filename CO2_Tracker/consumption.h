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
//    Base_Consumption base_consumption;

public:
    //Seters and getters
    Consumption(int userId);
    ~Consumption();
    int get_consumptionId();
    int get_userId();
    int get_base_consumptionId();

    //Other methods
    void add_object(Object obj);
<<<<<<< Updated upstream
    void add_base_consumption(Base_Consumption base_consumption);
=======
    void add_base_consumption();
>>>>>>> Stashed changes
};

#endif // CONSUMPTION_H
