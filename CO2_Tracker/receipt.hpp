#ifndef RECEIPT_HPP
#define RECEIPT_HPP

class Receipt{

   public:
    Receipt();
    void set_footprint(double footprint);
    void set_duration(int duration);
    void set_dates(int date1, int date2);
    void set_number_of_people(double number_of_people);

    double get_footprint();
    double get_duration();
    int get_number_of_people();

   protected:
    double footprint;
    int duration; // length in days
    int Date[2]; // [01012021, 31122021] represents 1/01/2021 to 31/12/2021
    int number_of_people;
    int content[]; //list of barcodes from receipt
};

#endif // RECEIPT_HPP
