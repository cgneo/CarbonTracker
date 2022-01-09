#ifndef HOUSING_H
#define HOUSING_H

#include "object.h"

class Housing : public Object{
public:
    Housing();
    Housing(int l);
    ~Housing();
    virtual void set_footprint(double light_c);

protected:
    double light;
};

#endif // HOUSING_H
