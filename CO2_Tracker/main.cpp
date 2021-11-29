#include "mainwindow.h"
#include <QGraphicsWidget>
#include <receipt.h>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    Date *fecha = new Date(1,12,2020);

    Date* new_fecha = fecha->add_duration(20);
    new_fecha->print();

    Receipt rec = Receipt(1, food, fecha, 3, 15);

    rec.get_dates()[0].print();
    rec.get_dates()[1].print();
//    w.show();
//    return a.exec();
}
