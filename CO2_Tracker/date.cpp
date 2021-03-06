#include "date.h"
#include <iostream>
#include <string>
#include <time.h>

int Date::days_in_month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

Date::Date(){};

Date::~Date(){};

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

using namespace std;

string Date::to_String(){
    return to_string(day) + to_string(month) + to_string(year);
}

using namespace std;
bool Date::operator==(Date *d1){
    if (to_string(day)+ to_string(month)+to_string(year) == to_string(d1->get_day())+ to_string(d1->get_month())+to_string(d1->get_year())){
        return true;
    }
    return false;
}

Date* Date::add_duration(int duration){//creates a date objects "duration" days after
    int num_days_in_month = days_in_month[month];
    int new_month = month;
    int new_year = year;
    int new_day = day;


    while (duration >  0){
        int diff = num_days_in_month - new_day + 1;

        if (duration > diff)//See if we need to go to next month
        {
            duration -= diff;
            if (new_month == 12){ //See if we need a new year
                new_year += 1;
                new_month = 1;
                new_day = 1;
            }
            else{
                new_month += 1;
                new_day = 1;
            }
            num_days_in_month = days_in_month[new_month];
        }
        else{
            new_day += duration;
            duration = 0;
        }
    }
    return new Date(new_day, new_month, new_year);
}

bool Date::is_valid(){
    if (year >= 1920 && year < 2030){
        if (month >= 0 && month <= 12){
            if (day >= 0 && day <= days_in_month[month]){
                return true;}
            else{
                throw std::invalid_argument("Invalid days");}
        }
        else{
            throw std::invalid_argument("Invalid month");}
    }
    else{
        throw std::invalid_argument("Invalid year");}
}


void Date::get_current_date(){
    time_t our_time = time(NULL);
    struct tm * aTime = localtime(&our_time);

    int day = aTime->tm_mday;
    int month = aTime->tm_mon + 1;
    int year = aTime->tm_year + 1900;

    set_date(day, month, year);

}



void Date::print(){//prints a date object
    std::cout << "Day: " << get_day() << ", Month: "
              << get_month() << ", Year: " << get_year() << std::endl;
}

using namespace std;
string Date::print2(){//Returns a printable string
    return "Day: " +  to_string(get_day()) + ", Month: " + to_string(get_month())
            + ", Year: " + to_string(get_year());
}
