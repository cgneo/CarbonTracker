#ifndef OBJECT_H
#define OBJECT_H

#include <string>
#include "date.h"

using namespace std;
class Object {
public:
    Object();
    Object(Date current_date, string object_name, string object_type);
    ~Object();
    Date get_date();
    double get_footprint();
    string get_type();
    string get_name();
    void set_date(Date current_date);
    virtual void set_footprint(double co2_emission);
    void set_name(string object_name);
    void set_type(string object_type);

protected:
    Date date;
    double footprint;
    string type;
    string name;
};


#endif // OBJECT_H
