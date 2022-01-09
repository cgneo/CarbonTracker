#include "food.h"
#include <string>

Food::Food(){
    set_type("food");
    set_barcode(0000000000000);
    set_quantity(1);
    set_footprint(0000000000000,0);
}

Food::Food(string barcode) {
    //double co2_total = retrieve_carbon(barcode);
    set_quantity(1);
    set_barcode(barcode);
    //set_footprint(co2_total, 1);
}

Food::Food(Date *current_date, QString object_name,
               int quantity, string barcode, double footprint)
                :Object(current_date, object_name){
    set_type("food");
    set_barcode(barcode);
    set_footprint(footprint, quantity);
    set_date(current_date);
    set_name(name);
}

Food::~Food(){
    delete date;
}
//---------------------Get Methods--------------------------
double Food::get_quantity() {
    return quantity;
}

string Food::get_barcode() {
    return barcode;
}
string Food::get_category(){
    return category;
}

//-------------------Set Methods----------------------------
void Food::set_quantity(double quantity) {
    this->quantity = quantity;
}

void Food::set_footprint(double footprint, double quantity) {
    footprint = footprint * quantity;
    //footprint = footprint * quantity/1000;
}

void Food::set_barcode(string barcode) {
    this -> barcode = barcode;
}

void Food::set_category(string str) {
    category = str;
}

//---------------Other Methods------------------------------


string Food::retrieve_category(double barcode){
    return "food";//will replace "category" with function that calls API
                        // to get category of food item
}

double Food::retrieve_carbon(double barcode) {
    return 10; //will replace "10" with function that calls API to get
               //C02 footprint of food item
}

//void Food::object_to_json(QJsonObject &obj){
//    obj["Type"] = type;
//    obj["Name"] = name;

//    QJsonArray json_date = {date->get_day(), date->get_month()
//                      , date->get_year()};
//    obj["Date"] = json_date;
//    obj["Footprint"] = footprint;
//    obj["Barcode"] = barcode;
//    obj["Quantity"] = quantity;
//    obj["Category"] = QString::fromStdString(category);
//}
