#ifndef RECEIPT_H
#define RECEIPT_H
#include "date.h"
#include "object.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

enum type {food, transport};

class Receipt{

   public:
    Receipt(type receipt, Date *start_date,
            int num_people, int duration);
    ~Receipt();
    void set_footprint(double footprint);
    void set_duration(int duration);
    bool duration_is_valid();
    void set_dates(Date* start_date);
    void set_number_of_people(double number_of_people);
    bool number_of_people_is_valid();

    double get_footprint();
    double get_duration();
    int get_number_of_people();
    int get_userId();
    int get_receiptId();
    Date* get_dates();
    vector<Object *> get_receipt_content();

    void print();
    void add_to_footprint(int new_footprint);
    int lastId();//Retrieve last receipt id in the DB
    double total_carbon(int receiptId);

    void add_receipt(string str);

   protected:
    int userId;
    int receiptId;
    double footprint;
    string file;
    type receipt_type;
    int duration; // length in days
    Date* date = new Date[2];
    int number_of_people;
    vector<Object *> content; //list of barcodes from receipt
};

#endif // RECEIPT_H
