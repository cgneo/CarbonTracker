#ifndef FOOD_H
#define FOOD_H

class Food{
   public:
    Food();
    void set_quantity(double quantity);
    void set_barcode();
    void set_footprint(double barcode, double quantity);

    double get_footprint();
    double get_quantity();
    double get_barcode();

    double get_carbon(double barcode);
protected:
    double barcode;
    doubles quantity;
    double footprint;
};

#endif // FOOD_H
