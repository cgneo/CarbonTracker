#ifndef DATE_H
#define DATE_H

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

#endif // DATE_H
