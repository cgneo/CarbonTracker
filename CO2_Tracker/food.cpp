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

void Food::set_barcode() {
    barcode = 00000000; //will replace with function that gets barcode of object
}

string Food::set_category(double barcode) {
    return "category name"; //will replace w/function that retrieves category
}

double Food::get_quantity() {
    return quantity;
}

long Food::get_barcode() {
    return barcode;
}


double Food::retrieve_carbon(double barcode) {
    return 10; //will replace "10" with function that calls API to get
               //C02 footprint of food item
}
