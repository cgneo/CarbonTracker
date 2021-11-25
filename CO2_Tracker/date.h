#ifndef DATE_H
#define DATE_H
#include <string>

class Date {
public:
    Date();
    Date(int day, int month, int year);

    void set_date(int day, int month, int year);
    int get_day();
    int get_month();
    int get_year();
    Date* add_duration(int days);
    static int days_in_month[13];
    void print();
    std::string print2();

private:
    int day;
    int month;
    int year;
};

#endif // DATE_H
