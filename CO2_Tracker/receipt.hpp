#ifndef RECEIPT_HPP
#define RECEIPT_HPP
class Receipt{
   public:
    Receipt();
    void set_footprint(double footprint);
    void set_duration(double date1, double date2);
    void set_number_of_people(double number_of_people);

    double get_footprint();
    double get_duration();
    int get_number_of_people();

   protected:
    double footprint;
    double duration;
    double Date[2];
    int number_of_people;
    int content[];
};

#endif // RECEIPT_HPP
