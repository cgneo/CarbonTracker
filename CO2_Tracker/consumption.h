#ifndef CONSUMPTION_H
#define CONSUMPTION_H
#include <string>
#include <vector>
#include "object.h"
#include "base_consumption.h"
#include "receipt.h"
#include <unordered_map>



class Consumption
{
private:
    int consumptionId;
    int userId;
    int base_consumptionId;
    vector<Object*> total_consumption; //Array of objects
    double total_footprint;
    double food_footprint;
    double transport_footprint;
    Base_Consumption base;

public:
    static QString vehicles[12];
    std::unordered_map<QString, int> transportfootprint;
    std::unordered_map<QString, int> datefootprint;
    //Seters and getters
    Consumption();
    Consumption(Base_Consumption base, vector<Object*>);
    ~Consumption();

    //Get methods
    int get_consumptionId();
    int get_userId();
    int get_base_consumptionId();
    double get_total_footprint();
    double get_food_footprint();
    double get_transport_footprint();
    Object *get_object_i(int i);

    //Other methods
        //Initialization methods
    void calculate_footprint();
    void add_object(Object *obj, bool new_object);
    void add_base_consumption(Base_Consumption base);

        //Methods for graphs
    double get_vehicle_footprint(QString vehicle_name);
    double get_yearly_footprint(QString month);
    double get_monthly_footprint(QString month);
    double get_daily_footprint(QString month);

        //Other
    void add_receipt(Receipt receipt);

};

#endif // CONSUMPTION_H
