#ifndef FOOD_H
#define FOOD_H

class Food{
   public:
    Food(int quantity);
    void set_quantity(double quantity);
    void set_barcode();
    void set_footprint(double barcode, double quantity);

    double get_footprint();
    double get_quantity();
    long get_barcode();

    double get_carbon(double barcode);
protected:
    long barcode;
    int quantity;
    double footprint;
};

#endif // FOOD_H
