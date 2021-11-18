#ifndef DATE_HPP
#define DATE_HPP

class Date {
public:
    Date();
    Date(int day, int month, int year);
    void set_date(int day, int month, int year);
    int get_day();
    int get_month();
    int get_year();

private:
    int day;
    int month;
    int year;
};

#endif // DATE_HPP
