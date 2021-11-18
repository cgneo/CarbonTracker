
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
    carbon_emission = duration*carbon_coefficient;

}

double Locomotive:: get_carbon_emission(){
    return carbon_emission;
}

Airplane :: Airplane(){
    carbon_coefficient = 0;
    carbon_emission = duration*carbon_coefficient;

}

double Airplane:: get_carbon_emission(){
    return carbon_emission;
}


Car :: Car(){
    carbon_coefficient = 0;
    carbon_emission = duration*carbon_coefficient;

}

double Car:: get_carbon_emission(){
    return carbon_emission;
}





