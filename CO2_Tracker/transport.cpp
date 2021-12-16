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


//bool Transport::transport_is_valid(){
//    if ((int)distance < 0) throw std::invalid_argument("Invalid number");
//    return true;
//}

//bool Locomotive::footprint_is_valid(){
//    if (footprint < 0) throw std::invalid_argument("Invalid number");
//    return true;
//}

//bool Airplane::footprint_is_valid(){
//    if (footprint < 0) throw std::invalid_argument("Invalid number");
//    return true;
//}

//bool Car::footprint_is_valid(){
//    if (footprint < 0) throw std::invalid_argument("Invalid number");
//    return true;
//}
