#ifndef DONUT_H
#define DONUT_H

#include <QMainWindow>
#include<QtCharts>
#include<QChartView>
#include<QPieSeries>
#include<QPieSlice>
#include "mainwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Donut; }
QT_END_NAMESPACE

class Donut : public QMainWindow
{
    Q_OBJECT

public:
    Donut(QWidget *parent = nullptr/*,double* data*/);
    ~Donut();
    Ui::MainWindow *ui;

private:
    MainWindow *mainwindow;

};


#endif // Donut_H

