#include "food.h"

Food::Food() {
    quantity = 1;
    barcode = 00000000;
    footprint = 0;
}

void Food::set_quantity(double quantity) {
    this->quantity = quantity;
}


double Food::get_quantity() {
    return quantity;
}

long Food::get_barcode() {
    return barcode;
}

double Food::get_footprint() {
    return footprint;
}

