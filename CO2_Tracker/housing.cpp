#include "housing.h"

Housing::Housing(){
    light = 0;
    set_footprint(light);
}

Housing::~Housing(){
}

void Housing::set_footprint(double light_c){
    footprint = light_c * 60;
}
