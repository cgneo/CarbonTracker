#include "profile_picture.h"
#include <QGraphicsWidget>
#include <receipt.h>
#include "tests.h"
#include "food.h"
#include "object.h"
#include "date.h"
#include "iostream"

#include <QApplication>

int main(int argc, char *argv[])
{
    Object *ham = new Object();
    Object *amg = new Object();
    Object *bread = new Object();
    Object *aston = new Object();
    ham->set_footprint(10);
    amg->set_type("transport");
    amg->set_footprint(20);
    bread->set_footprint(35);
    aston->set_type("transport");
    aston->set_footprint(80);

    Base_Consumption week1;
    week1.add_object(ham);
    //week1.add_object(amg);
    //week1.add_object(bread);
    //week1.add_object(aston);

    double cbf = week1.get_footprint();
    std::cout << cbf << std::endl;



//    w.show();
//    return a.exec();
}
