#ifndef FOOD_HPP
#define FOOD_HPP

class Food{
   public:
    Food();
    void set_quantity(double quantity);
    void set_barcode(double barcode);
    double get_quantity();
    double get_barcode();
protected:
    double barcode;
    int quantity;
};

#endif // FOOD_HPP
