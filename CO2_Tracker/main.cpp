#include "mainwindow.h"
#include <QGraphicsWidget>
#include <receipt.h>
#include "tests.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    Tests t;

    Date* new_fecha = fecha->add_duration(20);
    new_fecha->print();

    Receipt rec = Receipt(1, food, fecha, 3, 15);

    rec.get_dates()[0].print();
    rec.get_dates()[1].print();
//    w.show();
//    return a.exec();
}
