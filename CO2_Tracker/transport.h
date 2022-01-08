#ifndef TRANSPORT_H
#define TRANSPORT_H
#include "object.h"
#include <string>

class Transport : public Object{
   public:
    Transport();
    Transport(Date *current_date, QString object_name, char* distance);
    ~Transport();

    void set_distance(char* distance);
    char* get_distance();

    //(virtual void object_to_json(QJsonObject &obj); //Get an empy QJsonObject and encodes a food object
protected:
    char* distance;
};

class Locomotive: public Transport{
public:
    Locomotive();
    void set_footprint(double estimate);
    double  get_footprint();
};


class Airplane: public Transport{
public:
    Airplane();
    void set_footprint(double estimate);
    double  get_footprint();
};

class Car: public Transport{
public:
    Car();
    void set_footprint(double estimate);
    double  get_footprint();
};
#endif // TRANSPORT_H
