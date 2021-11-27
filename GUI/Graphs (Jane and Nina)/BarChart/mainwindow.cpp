#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QBarSet *set0 = new QBarSet("You");
    QBarSet *set1 = new QBarSet("Greta");
    QBarSet *set2 = new QBarSet("Jeff Bezos");

    *set0 << 1 << 2 << 3 ;
    *set1 << 5 << 0 << 0 ;
    *set2 << 3 << 5 << 8 ;

    QBarSeries *series = new QBarSeries();
    series->append(set0);
    series->append(set1);
    series->append(set2);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Simple barchart example");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QStringList categories;
    categories << "Food" << "Transport" << "Housing";
    QBarCategoryAxis *axis = new QBarCategoryAxis();
    axis->append(categories);
    chart->createDefaultAxes();
    chart->setAxisX(axis,series);

    QChartView *chartView = new QChartView(chart);
    chartView->setParent(ui->horizontalFrame);


}

MainWindow::~MainWindow()
{
    delete ui;
}

