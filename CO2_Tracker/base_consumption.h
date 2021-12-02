#ifndef BASE_CONSUMPTION_H
#define BASE_CONSUMPTION_H
#include <vector>
#include "object.h"


class Base_Consumption
{
private:
    int consumptionId;
    int base_consumptionId; // all the three id's can be the same
    vector<Object> *base_consumption;
    double footprint;

public:
    int userId;
    Base_Consumption();
    Base_Consumption(const int userId); //Args missing
    ~Base_Consumption();
    int get_consumptionId();
    int get_userId();
    int get_base_consumptionId();

    //Other methods

    vector<Object> *calculate_base_consumption(double c_footprint, int roommates);//Receive as parameters the info from the survey



//


};

#endif // BASE_CONSUMPTION_H
