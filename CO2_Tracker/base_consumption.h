#ifndef BASE_CONSUMPTION_H
#define BASE_CONSUMPTION_H
#include <vector>
#include "object.h"


class Base_Consumption
{
private:
    Date last_added_date;
    int consumptionId;
    int base_consumptionId; // all the three id's can be the same
    vector<Object *> base_consumption;
    double footprint;

public:
    int userId;
    Base_Consumption();
    ~Base_Consumption();
    Date get_last_added_date(); //Not implemented
    void set_last_added_date(Date d);

    int get_consumptionId();
    int get_userId();
    int get_base_consumptionId();
    double get_total_footprint();
    int get_size();
    Object *get_object_i(int i);
    double get_footprint();



    //Other methods

    //vector<Object> *calculate_base_consumption(double c_footprint, int roommates);//Receive as parameters the info from the survey

    void add_object(Object *item);
    double total_base_food();
    double total_base_transport();


};

#endif // BASE_CONSUMPTION_H
