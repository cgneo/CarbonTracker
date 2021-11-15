#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    QBarSet *set0 = new QBarSet("Bob");
    QBarSet *set1 = new QBarSet("Tom");
    QBarSet *set2 = new QBarSet("John");
    QBarSet *set3 = new QBarSet("Doe");
    QBarSet *set4 = new QBarSet("Ahmad");

    *set0 << 30 << 40 << 10 << 20 << 10 << 60;
    *set1 << 10 << 30 << 42 << 15 << 81 << 75;
    *set2 << 80 << 100 << 70 << 13 << 60 << 20;
    *set3 << 30 << 10 << 80 << 70 << 60 << 45;
    *set4 << 100 << 40 << 70 << 30 << 16 << 42;

    QBarSeries *series = new QBarSeries();
    series->append(set0);
    series->append(set1);
    series->append(set2);
    series->append(set3);
    series->append(set4);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("BarChart test");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QStringList categories;
    categories << "Jan" << "Feb" << "Mar" << "Apr" << "May" << "Jun";
    QBarCategoryAxis *axis = new QBarCategoryAxis();
    axis->append(categories);
    chart->createDefaultAxes();
    chart->setAxisX(axis, series);

    QChartView *chartView = new QChartView(chart);
    chartView->setParent(ui->horizontalFrame);

}

Dialog::~Dialog()
{
    delete ui;
}

