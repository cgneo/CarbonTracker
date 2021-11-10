
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPieSeries *series = new QPieSeries();

    series->append("Transportation", 20);
    series->append("Food", 20);
    series->append("Shopping", 20);
    series->append("Other", 20);

    QChart *chart = new QChart();
    chart->addSeries(Series);
    chart->setTitle("Daily Entry Pie Chart");

    QChartView *chartview = new QChartView(chart);
    chartview->setParent(ui->horizontalFrame);

}

MainWindow::~MainWindow()
{
    delete ui;
}

