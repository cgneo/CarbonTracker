#include "transport.h"

Transport :: Transport():Object(){
    distance = "0";
    set_type("transport");
}

Transport::Transport(Date *current_date, QString object_name,
                     char* distance)
    :Object(current_date, object_name){
    set_type("transport");
    this->distance = distance;
}

Transport::~Transport(){
    delete date; //Check how to make sure that the vector works
}

void Transport :: set_distance(char* travelled){
    distance = travelled;
}

char* Transport:: get_distance(){
    return distance;
}

void Transport ::  set_footprint(double estimate){footprint = estimate;}
double Transport ::  get_footprint(){return footprint;}
