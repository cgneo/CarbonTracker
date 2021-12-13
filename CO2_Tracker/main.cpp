#include "mainwindow.h"
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
    QApplication a(argc, argv);
    MainWindow w;

    Date hi = Date(1,1,1);
    Object yo; //= Object(Date(1,1,1), "yo", "foofoo");
    yo.set_name("mohammad");
    std::cout << yo.get_name() << std::endl;

//    w.show();
//    return a.exec();
}
