#include <QGraphicsWidget>
#include "transport_API.cpp"
#include "tests.h"
#include "json_DB.hpp"
#include "object.h"
#include "transport.h"
#include "api_transport.h"
#include "mainwindow.h"
#include "survey.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
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

}
