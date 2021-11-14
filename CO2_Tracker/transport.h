#ifndef TRANSPORT_H
#define TRANSPORT_H

class Transport{
   public:
    Transport();
    void set_duration(double time);
    double get_duration();
protected:
    double duration;
    double distance;
};

class Locomotive: public Transport{
public:
    Locomotive();
    double get_carbon_emission();
    private:
    double carbon_coefficient;
    double carbon_emission;
};


class Airplane: public Transport{
public:
    Airplane();
    double get_carbon_emission();
private:
    double carbon_coefficient;
    double carbon_emission;
};

class Car: public Transport{
public:
    Car();
    double get_carbon_emission();
private:
    double carbon_coefficient;
    double carbon_emission;
};


#endif // TRANSPORT_H
