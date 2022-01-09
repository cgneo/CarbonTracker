#ifndef TRANSPORT_H
#define TRANSPORT_H
#include "object.h"
#include <string>

class Transport : public Object{
   public:
    Transport();
    Transport(Date *current_date, QString object_name, char* distance);
    ~Transport();

    void set_distance(char* distance);
    char* get_distance();
    void set_footprint(double estimate);
    double  get_footprint();
private:
    char* distance; //It needs to be char* because of the way the API POST request is constructed
};

#endif // TRANSPORT_H
