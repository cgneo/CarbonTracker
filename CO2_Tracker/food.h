#ifndef FOOD_H
#define FOOD_H

#include <string>
#include "object.h"

class Food : public Object {
   public:
    Food();
    void set_quantity(double quantity);
    void set_barcode(double barcode);
    void set_category(string str);
    virtual void set_footprint(double barcode, double quantity);

    double get_quantity();
    double get_barcode();
    string get_category();

    double retrieve_carbon(double barcode);
    string retrieve_category(double barcode);
    void create_food_item(double barcode);

protected:
    double barcode;
    double quantity;
    string category;
};

#endif // FOOD_H
