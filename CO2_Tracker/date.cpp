#include "date.h"


Date::Date(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
}

void Date::set_date(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
}

int Date::get_day() {
    return day;
}

int Date::get_month() {
    return month;
}

int Date::get_year() {
    return year;
}
