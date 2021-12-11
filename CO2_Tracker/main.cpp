#include <QGraphicsWidget>
#include "transport_API.cpp"
#include "tests.h"
#include "server-client.hpp"
#include "object.h"
#include "transport.h"
#include "api_transport.h"
#include "mainwindow.h"
#include <QApplication>


int main(int argc, char *argv[])
{
//    Date *fecha = new Date(01,01,2021);
//    Object o(fecha, "metro", "transport");
//    Transport *m = new Transport();

//    Locomotive *m = new Locomotive(fecha, "metro", "transport", "100");
    QApplication a(argc, argv);
    MainWindow w;

//    calculator(argc, argv, "economy international flight", "10000", m);
//    std::cout << std::to_string(m->get_footprint()) << std::endl

    w.show();
    return a.exec();
}
