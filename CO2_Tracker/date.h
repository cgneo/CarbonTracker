#ifndef DATE_H
#define DATE_H
#include <string>

class Date {
public:
    Date();
    ~Date();
    Date(int day, int month, int year);
    static int days_in_month[13];

    void set_date(int day, int month, int year);
    int get_day();
    int get_month();
    int get_year();
    Date* add_duration(int days);

    void print();
    std::string print2();
    bool is_valid();

private:
    int day;
    int month;
    int year;
};

#endif // DATE_H
