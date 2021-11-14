#include "food.hpp"

Food::Food() {
    quantity = 1;
    barcode = 00000000;
    footprint = 0;
}

void Food::set_quantity(double quantity) {
    this->quantity = quantity;
}

void Food::set_barcode(double barcode) {
    this->barcode = barcode;
}

void Food::set_footprint(double footprint) {
    this->footprint = footprint;
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
