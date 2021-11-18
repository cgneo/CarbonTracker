#ifndef RECEIPT_HPP
#define RECEIPT_HPP
#include "date.hpp"

class Receipt{

   public:
    Receipt();
    void set_footprint(double footprint);
    void set_duration(int duration);
    void set_dates(Date, Date);
    void set_number_of_people(double number_of_people);

    double get_footprint();
    double get_duration();
    int get_number_of_people();

   protected:
    double footprint;
    int duration; // length in days
    Date Date[2]; // [date1, date2] each have attributes .day, .month, .year
    int number_of_people;
    int receipt[]; //list of barcodes from receipt
};

#endif // RECEIPT_HPP
