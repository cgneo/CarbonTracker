#ifndef RECEIPT_H
#define RECEIPT_H
#include "date.h"


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
    Date date[2]; // [01012021, 31122021] represents 1/01/2021 to 31/12/2021
    int number_of_people;
    int content[]; //list of barcodes from receipt
};

#endif // RECEIPT_H
