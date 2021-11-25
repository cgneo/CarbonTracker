#include "receipt.h"
#include "date.h"
#include <string>

Receipt::Receipt(type receipt, Date *start_date, int num_people, int duration) {
    receipt_type = receipt;
    number_of_people = num_people;
    set_duration(duration);
    set_dates(start_date);
}

Receipt::~Receipt(){};//To be constructed

void Receipt::set_footprint(double footprint) {
    this->footprint = footprint;
}

void Receipt::set_duration(int duration) {
    this->duration = duration; //Input by user, number of days

}

void Receipt::set_dates(Date *date1) {
    date[0] = *date1;
    date[1] = *(date1->add_duration(duration));
}

void Receipt::set_number_of_people(double number_of_people) {
    this->number_of_people = number_of_people;
}

double Receipt::get_footprint() {
    return footprint;
}

double Receipt::get_duration() {
    return duration;
}

int Receipt::get_number_of_people() {
    return number_of_people;
}

Date* Receipt::get_dates(){
    return date;
}

void Receipt::print(){
    Date *dates = get_dates();
    std::cout << "Dates: " << dates[0].print2() << "-" << dates[1].print2() << std::endl;
}
