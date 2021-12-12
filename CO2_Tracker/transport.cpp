
#include "transport.h"
Transport :: Transport(){
    distance = "0";
}

void Transport:: set_distance(char* travelled){
    distance = travelled;
}

Locomotive :: Locomotive(){
    footprint = 0;
}

Airplane :: Airplane(){
        footprint = 0;

}

Car :: Car(){
        footprint = 0;
}

void Locomotive ::  set_footprint(double estimate){footprint = estimate;}
void Car ::  set_footprint(double estimate){footprint = estimate;}
void Airplane ::  set_footprint(double estimate){footprint = estimate;}
double Locomotive ::  get_footprint(){return footprint;}
double Car ::  get_footprint(){return footprint;}
double Airplane ::  get_footprint(){return footprint;}
