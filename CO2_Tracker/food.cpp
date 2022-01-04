#include "food.h"
#include <string>

Food::Food(){
    set_type("food");
    set_barcode(0000000000000);
    set_quantity(1);
    set_footprint(0000000000000,0);
}

Food::Food(double barcode) {
    double co2_total = retrieve_carbon(barcode);
    set_quantity(1);
    set_barcode(barcode);
    set_footprint(co2_total, 1);
}

Food::Food(int quantity, double barcode, double footprint){
    set_type("food");
    set_quantity(quantity);
    set_barcode(barcode);
    set_footprint(footprint, quantity);
}

Food::~Food(){

}
//---------------------Get Methods--------------------------
double Food::get_quantity() {
    return quantity;
}

double Food::get_barcode() {
    return barcode;
}
string Food::get_category(){
    return category;
}

//-------------------Set Methods----------------------------
void Food::set_quantity(double quantity) {
    this->quantity = quantity;
}

void Food::set_footprint(double barcode, double quantity) {
    footprint = retrieve_carbon(barcode) * quantity/1000;
}

void Food::set_barcode(double barcode) {
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

