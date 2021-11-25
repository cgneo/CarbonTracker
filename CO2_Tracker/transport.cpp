
#include "transport.h"
Transport :: Transport(){
    duration = 0;
}

void Transport:: set_duration(double time){
    duration = time;
}

double Transport:: get_duration(){
    return duration;
}

Locomotive :: Locomotive(){
    carbon_coefficient = 0;
    footprint = duration*carbon_coefficient;

}

Airplane :: Airplane(){
    carbon_coefficient = 0;
    footprint = duration*carbon_coefficient;

}

Car :: Car(){
    carbon_coefficient = 0;
    footprint = duration*carbon_coefficient;

}
