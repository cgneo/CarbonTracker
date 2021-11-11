#include "mainwindow.h"
import QtCharts 2.15
#include <QAbstractSeries>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

QLineSeries* series = new QLineSeries();
series->add(0, 6);
series->add(2, 4);
...
chartView->chart()->addSeries(series);
chartView->chart()->createDefaultAxes();
