#ifndef FOOD_H
#define FOOD_H

class Food{
   public:
    Food();
    void set_quantity(double quantity);
    void set_barcode(double barcode);
    void set_footprint(double footprint);

    double get_footprint();
    double get_quantity();
    long get_barcode();
protected:
    long barcode;
    int quantity;
    double footprint;
};

#endif // FOOD_H
