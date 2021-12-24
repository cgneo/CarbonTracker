#ifndef TRANSPORT_H
#define TRANSPORT_H

#include "object.h"


class Transport : public Object{
   public:
    Transport();
    void set_distance(char* distance);
    char* get_distance();
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
