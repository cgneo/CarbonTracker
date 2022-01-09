#include "transport.h"

Transport :: Transport():Object(){
    distance = 0;
}

Transport::Transport(Date *current_date, QString object_name,
                     char* distance)
    :Object(current_date, object_name){
    set_type("transport");
    this->distance = distance;
}

Transport::~Transport(){
    //delete distance;
    delete date; //Check how to make sure that the vector works
}

void Transport :: set_distance(char* travelled){
    distance = travelled;
}
char* Transport:: get_distance(){
    return distance;
}

//void Transport::object_to_json(QJsonObject &obj){
//    obj["Type"] = type;
//    obj["Name"] = name;

//    QJsonArray json_date = {date->get_day(), date->get_month()
//                      , date->get_year()};
//    obj["Date"] = json_date;
//    obj["Footprint"] = footprint;
//    obj["Distance"] = QString::fromStdString(distance);
//}

Locomotive :: Locomotive():Transport(){}

Airplane :: Airplane():Transport(){}

Car :: Car():Transport(){}

void Locomotive ::  set_footprint(double estimate){footprint = estimate;}
void Car ::  set_footprint(double estimate){footprint = estimate;}
void Airplane ::  set_footprint(double estimate){footprint = estimate;}
double Locomotive ::  get_footprint(){return footprint;}
double Car ::  get_footprint(){return footprint;}
double Airplane ::  get_footprint(){return footprint;}
