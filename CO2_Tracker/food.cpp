#include "food.hpp"

Food::Food() {
    quantity = 1;
    barcode = 00000000;
}

void Food::set_quantity(double quantity) {
    this->quantity = quantity;
}

void Food::set_barcode(double barcode) {
    this->barcode = barcode;
}

double Food::get_quantity() {
    return quantity;
}

double Food::get_barcode() {
    return barcode;
}
