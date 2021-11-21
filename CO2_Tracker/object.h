#ifndef OBJECT_H
#define OBJECT_H

#include <string>
#include "date.h"

using namespace std;
class object{
public:
    object();
    object(Date current_date, string object_name, string object_type);
    ~object();
    Date get_date();
    float get_footprint();
    string get_type();
    string get_name();
    void set_date(Date current_date);
    void set_footprint(float co2_emission);
    void set_name(string object_name);
    void set_type(string object_type);

protected:
    Date date;
    float footprint;
    string type;
    string name;
};


#endif // OBJECT_H
