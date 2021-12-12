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

    //Daily

    QBarSet *set0 = new QBarSet("Food");
    QBarSet *set1 = new QBarSet("Housing");
    QBarSet *set2 = new QBarSet("Transports");

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
    categories << "You" << "Greta" << "Jeff";
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

    //Monthly

    QBarSet *set4 = new QBarSet("Food");
    QBarSet *set5 = new QBarSet("Housing");
    QBarSet *set6 = new QBarSet("Transports");

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
    categories2 << "You" << "Greta" << "Jeff";
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

    //Yearly

    QBarSet *set7 = new QBarSet("Food");
    QBarSet *set8 = new QBarSet("Housing");
    QBarSet *set9 = new QBarSet("Transports");

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
    categories3 << "You" << "Greta" << "Jeff";
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

    //Summary(Daily, Monthly, Yearly all in one page)

    //daily
    QBarSet *set0sum = new QBarSet("Food");
    QBarSet *set1sum = new QBarSet("Housing");
    QBarSet *set2sum = new QBarSet("Transports");

    *set0sum << 1 << 2 << 3;
    *set1sum << 5 << 0 << 0;
    *set2sum << 3 << 5 << 8;

    QStackedBarSeries *seriessum = new QStackedBarSeries();
    seriessum->append(set0sum);
    seriessum->append(set1sum);
    seriessum->append(set2sum);

    QChart *chartsum = new QChart();
    chartsum->addSeries(seriessum);
    chartsum->setTitle("Your daily emission compared to public figures' (in CO2/kg)");
    chartsum->setAnimationOptions(QChart::SeriesAnimations);

    QBarCategoryAxis *axisXsum = new QBarCategoryAxis();
    axisXsum->append(categories);
    chartsum->addAxis(axisXsum, Qt::AlignBottom);
    seriessum->attachAxis(axisXsum);
    QValueAxis *axisYsum = new QValueAxis();
    chart->addAxis(axisYsum, Qt::AlignLeft);
    series->attachAxis(axisYsum);

    chartsum->legend()->setVisible(true);
    chartsum->legend()->setAlignment(Qt::AlignBottom);

    QChartView *chartViewsum = new QChartView(chartsum);
    chartViewsum->setParent(ui->horizontalFrame1sum);

    //monthly
    QBarSet *set4sum = new QBarSet("Food");
    QBarSet *set5sum = new QBarSet("Housing");
    QBarSet *set6sum = new QBarSet("Transports");

    *set4sum << 10 << 20 << 30;
    *set5sum << 50 << 2 << 2;
    *set6sum << 30 << 50 << 80;

    QStackedBarSeries *series2sum = new QStackedBarSeries();
    series2sum->append(set4sum);
    series2sum->append(set5sum);
    series2sum->append(set6sum);

    QChart *chart2sum = new QChart();
    chart2sum->addSeries(series2sum);
    chart2sum->setTitle("Your monthly emission compared to public figures' (in CO2/kg)");
    chart2sum->setAnimationOptions(QChart::SeriesAnimations);

    QBarCategoryAxis *axisX2sum = new QBarCategoryAxis();
    axisX2sum->append(categories2);
    chart2sum->addAxis(axisX2sum, Qt::AlignBottom);
    series2sum->attachAxis(axisX2sum);
    QValueAxis *axisY2sum = new QValueAxis();
    chart2sum->addAxis(axisY2sum, Qt::AlignLeft);
    series2sum->attachAxis(axisY2sum);

    chart2sum->legend()->setVisible(true);
    chart2sum->legend()->setAlignment(Qt::AlignBottom);

    QChartView *chartView2sum = new QChartView(chart2sum);
    chartView2sum->setParent(ui->horizontalFrame2sum);

    //yearly
    QBarSet *set7sum = new QBarSet("Food");
    QBarSet *set8sum = new QBarSet("Housing");
    QBarSet *set9sum = new QBarSet("Transports");

    *set7sum << 10 << 20 << 30;
    *set8sum << 50 << 2 << 2;
    *set9sum << 30 << 50 << 80;

    QStackedBarSeries *series3sum = new QStackedBarSeries();
    series3sum->append(set7sum);
    series3sum->append(set8sum);
    series3sum->append(set9sum);

    QChart *chart3sum = new QChart();
    chart3sum->addSeries(series3sum);
    chart3sum->setTitle("Your yearly emission compared to public figures' (in CO2/kg)");
    chart3sum->setAnimationOptions(QChart::SeriesAnimations);

    QBarCategoryAxis *axisX3sum = new QBarCategoryAxis();
    axisX3sum->append(categories3);
    chart3sum->addAxis(axisX3sum, Qt::AlignBottom);
    series3sum->attachAxis(axisX3sum);
    QValueAxis *axisY3sum = new QValueAxis();
    chart3sum->addAxis(axisY3sum, Qt::AlignLeft);
    series3sum->attachAxis(axisY3sum);

    chart3sum->legend()->setVisible(true);
    chart3sum->legend()->setAlignment(Qt::AlignBottom);

    QChartView *chartView3sum = new QChartView(chart3sum);
    chartView3sum->setParent(ui->horizontalFrame3sum);


}

MainWindow::~MainWindow()
{
    delete ui;
}

