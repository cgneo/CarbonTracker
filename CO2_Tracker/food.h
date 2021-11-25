#ifndef FOOD_H
#define FOOD_H

#include <string>
#include "object.h"

class Food : public Object {
   public:
    Food(double quantity);
    void set_quantity(double quantity);
    void set_barcode();
    virtual void set_footprint(double barcode, double quantity);

    double get_quantity();
    long get_barcode();

    double retrieve_carbon(double barcode);
    string set_category(double barcode);

protected:
<<<<<<< Updated upstream
    long barcode;
    double quantity;
    string category;
=======
    double barcode;
    int quantity;
    double footprint;
>>>>>>> Stashed changes
};

#endif // FOOD_H
