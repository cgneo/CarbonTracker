#include "food.h"
#include <string>

Food::Food(double quantity) {
    set_quantity(quantity);
    set_barcode();
    set_footprint(barcode, quantity);
    set_category(barcode);
}

void Food::set_quantity(double quantity) {
    this->quantity = quantity;
}

void Food::set_footprint(double barcode, double quantity) {
    footprint = retrieve_carbon(barcode) * quantity/1000;
}

void Food::set_barcode(double barcode) {
    this -> barcode = barcode; //will replace with function that gets barcode of object
}

void Food::set_category(string str) {
    category = str; //will replace w/function that retrieves category
}

double Food::get_quantity() {
    return quantity;
}

double Food::get_barcode() {
    return barcode;
}



string Food::retrieve_category(double barcode){
    return "category";//will replace "category" with function that calls API
                        // to get category of food item
}

double Food::retrieve_carbon(double barcode) {
    return 10; //will replace "10" with function that calls API to get
               //C02 footprint of food item
}

void Food::read_food_item(double barcode){
    double co2_total = retrieve_carbon(barcode);
    string str = retrieve_category(barcode);
    set_category(str);
    set_barcode(barcode);
    set_footprint(co2_total, 1);

}
