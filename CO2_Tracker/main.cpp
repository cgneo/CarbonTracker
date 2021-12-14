#include <QGraphicsWidget>
#include "transport_api.cpp"
#include "tests.h"
#include "json_DB.hpp"
#include "object.h"
#include "transport.h"
#include "transport_api.h"
#include "mainwindow.h"
#include "survey.h"
#include <QApplication>
#include <cstring>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    /*
    Json_DB obj;

    Tests t;
    bool new_user = !t.test_does_file_exist();
    qDebug() << new_user;

    if (new_user){ //If user is new, open profile set_up
        Survey window;
        window.show();
        return a.exec();
    }
    else{ //Else open regular window
        MainWindow window;
        window.show();
        return a.exec();
    }


//    Date *fecha = new Date(01,01,2021);
//    Object o(fecha, "metro", "transport");
//    Transport *m = new Transport();
//    ParseClass p;
//    p.create_empty_file();


//    Locomotive *m = new Locomotive(fecha, "metro", "transport", "100");

//    calculator(argc, argv, "economy international flight", "10000", m);
//    std::cout << std::to_string(m->get_footprint()) << std::endl



*/
    Transport bus;
    bus.set_name("petrol car");
    string s = bus.get_name();

        int n = s.length();

        // declaring character array
        char char_array[n + 1];

        // copying the contents of the
        // string to char array
    strcpy(char_array, s.c_str());
    bus.set_distance("1000");
    transport_api api;
    api.get_reply(bus.get_distance(),char_array);
    bus.set_footprint(api.get_emission());
    std::cout<<bus.get_footprint()<<std::endl;
    qDebug()<<api.get_emission_unit();
    //return a.exec();
    Car car;
    std::cout<<car.get_name()<<std::endl;
}
