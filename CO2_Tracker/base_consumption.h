#ifndef BASE_CONSUMPTION_H
#define BASE_CONSUMPTION_H
#include <vector>
#include "object.h"


class Base_Consumption
{
private:
    int userId;
    int consumptionId;
    int base_consumptionId; // all the three id's can be the same
    vector<object> *base_consumption;
    double footprint;

public:
    Base_Consumption(const int userId); //Args missing
    ~Base_Consumption();
    int const get_consumptionId();
    int const get_userId();
    int const get_base_consumptionId();

    //Other methods

    vector<object> *calculate_base_consumption();//Receive as parameters the info from the survey



//


};

#endif // BASE_CONSUMPTION_H
