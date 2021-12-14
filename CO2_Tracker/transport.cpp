
#include "transport.h"
Transport :: Transport():Object(){
    distance = "0";
}

void Transport:: set_distance(char* travelled){
    distance = travelled;
}
char* Transport:: get_distance(){
    return distance;
}
Locomotive :: Locomotive():Transport(){}

Airplane :: Airplane():Transport(){}

Car :: Car():Transport(){}

void Locomotive ::  set_footprint(double estimate){footprint = estimate;}
void Car ::  set_footprint(double estimate){footprint = estimate;}
void Airplane ::  set_footprint(double estimate){footprint = estimate;}
double Locomotive ::  get_footprint(){return footprint;}
double Car ::  get_footprint(){return footprint;}
double Airplane ::  get_footprint(){return footprint;}
