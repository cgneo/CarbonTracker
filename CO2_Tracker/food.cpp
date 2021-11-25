#include "food.h"

Food::Food(int quantity) {
    set_quantity(quantity);
    set_barcode();
    set_footprint(barcode, quantity);
}

void Food::set_quantity(double quantity) {
    this->quantity = quantity;
}

void Food::set_footprint(double barcode, double quantity) {
    footprint = get_carbon(barcode) * quantity/1000;
}

void Food::set_barcode() {
    barcode = 00000000; //will replace with function that gets barcode of object
}

double Food::get_quantity() {
    return quantity;
}

double Food::get_barcode() {
    return barcode;
}

double Food::get_footprint() {
    return footprint;
}


double Food::get_carbon(double barcode) {
    return 10; //will replace "10" with function that calls API to get
               //C02 footprint of food item
}
