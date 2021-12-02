#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtCharts>
#include <QChartView>
#include <QBarSet>
#include <QBarSeries>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QBarSet *set0 = new QBarSet("You");
    QBarSet *set1 = new QBarSet("Greta");
    QBarSet *set2 = new QBarSet("Jeff Bezos");

    *set0 << 1 << 2 << 3;
    *set1 << 5 << 0 << 0;
    *set2 << 3 << 5 << 8;

    QStackedBarSeries *series = new QStackedBarSeries();
    series->append(set0);
    series->append(set1);
    series->append(set2);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Your daily emission compared to public figures' (in CO2/kg)");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QStringList categories;
    categories << "Food" << "Housing" << "Transports";
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);
    QValueAxis *axisY = new QValueAxis();
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    QChartView *chartView = new QChartView(chart);
    chartView->setParent(ui->horizontalFrame1);

    QBarSet *set4 = new QBarSet("You");
    QBarSet *set5 = new QBarSet("Greta");
    QBarSet *set6 = new QBarSet("Jeff Bezos");

    *set4 << 10 << 20 << 30;
    *set5 << 50 << 2 << 2;
    *set6 << 30 << 50 << 80;

    QStackedBarSeries *series2 = new QStackedBarSeries();
    series2->append(set4);
    series2->append(set5);
    series2->append(set6);

    QChart *chart2 = new QChart();
    chart2->addSeries(series2);
    chart2->setTitle("Your monthly emission compared to public figures' (in CO2/kg)");
    chart2->setAnimationOptions(QChart::SeriesAnimations);

    QStringList categories2;
    categories2 << "Food" << "Housing" << "Transports";
    QBarCategoryAxis *axisX2 = new QBarCategoryAxis();
    axisX2->append(categories2);
    chart2->addAxis(axisX2, Qt::AlignBottom);
    series2->attachAxis(axisX2);
    QValueAxis *axisY2 = new QValueAxis();
    chart2->addAxis(axisY2, Qt::AlignLeft);
    series2->attachAxis(axisY2);

    chart2->legend()->setVisible(true);
    chart2->legend()->setAlignment(Qt::AlignBottom);

    QChartView *chartView2 = new QChartView(chart2);
    chartView2->setParent(ui->horizontalFrame2);

    QBarSet *set7 = new QBarSet("You");
    QBarSet *set8 = new QBarSet("Greta");
    QBarSet *set9 = new QBarSet("Jeff Bezos");

    *set7 << 100 << 200 << 300;
    *set8 << 500 << 20 << 20;
    *set9 << 300 << 500 << 800;

    QStackedBarSeries *series3 = new QStackedBarSeries();
    series3->append(set7);
    series3->append(set8);
    series3->append(set9);

    QChart *chart3 = new QChart();
    chart3->addSeries(series3);
    chart3->setTitle("Your yearly emission compared to public figures' (in CO2/kg)");
    chart3->setAnimationOptions(QChart::SeriesAnimations);

    QStringList categories3;
    categories3 << "Food" << "Housing" << "Transports";
    QBarCategoryAxis *axisX3 = new QBarCategoryAxis();
    axisX3->append(categories3);
    chart3->addAxis(axisX3, Qt::AlignBottom);
    series3->attachAxis(axisX3);
    QValueAxis *axisY3 = new QValueAxis();
    chart3->addAxis(axisY3, Qt::AlignLeft);
    series3->attachAxis(axisY3);

    chart3->legend()->setVisible(true);
    chart3->legend()->setAlignment(Qt::AlignBottom);

    QChartView *chartView3 = new QChartView(chart3);
    chartView3->setParent(ui->horizontalFrame3);

}

MainWindow::~MainWindow()
{
    delete ui;
}

