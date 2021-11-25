#ifndef TRANSPORT_H
#define TRANSPORT_H

#include "object.h"


class Transport : public Object{
   public:
    Transport();
    void set_duration(double time);
    double get_duration();
protected:
    double duration;
};

class Locomotive: public Transport{
public:
    Locomotive();
private:
    double carbon_coefficient;
    double footprint;
};


class Airplane: public Transport{
public:
    Airplane();
private:
    double carbon_coefficient;
    double footprint;
};

class Car: public Transport{
public:
    Car();
private:
    double carbon_coefficient;
    double footprint;
};


#endif // TRANSPORT_H
