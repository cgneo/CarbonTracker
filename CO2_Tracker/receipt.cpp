#include "receipt.hpp"
#include "date.hpp"

Receipt::Receipt() {
    footprint = 0;
    duration = 0;
    number_of_people = 1;
}

void Receipt::set_footprint(double footprint) {
    this->footprint = footprint;
}

void Receipt::set_duration(int duration) {
    this->duration = duration;
}

void Receipt::set_dates(Date date1, Date date2) {
    date[0] = date1;
    date[1] = date2;
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
