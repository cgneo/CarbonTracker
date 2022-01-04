#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "donut.h"


//data is a dictionary, or 2 lists, first the categories ordered, then their respective emissions
Donut::Donut(QWidget *parent /*,double* data*/)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPieSeries *series = new QPieSeries();
    series->setHoleSize(0.35);
    QPieSlice *slice1 = series->append("Locomotive", 1);

    QPieSlice *slice2 =series->append("Airplane", 2);
    QPieSlice *slice3 =series->append("Car", 2);

    slice1->setLabelVisible();
    slice2->setLabelVisible();
    slice3->setLabelVisible();

    QPieSlice::connect(slice1, &QPieSlice::hovered,
                       slice1, &QPieSlice::setExploded);
    QPieSlice::connect(slice2, &QPieSlice::hovered,
                       slice2, &QPieSlice::setExploded);
    QPieSlice::connect(slice3, &QPieSlice::hovered,
                       slice3, &QPieSlice::setExploded);

    QString string = "clicked";

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setAnimationOptions(QChart::SeriesAnimations);
    chart->setTitle("My Transport Footprint");
    chart->setTheme(QChart::ChartThemeBrownSand);

    QChartView *chartview = new QChartView(chart);
    chartview->setRenderHint(QPainter::Antialiasing);

    //chartview->setParent(ui->donutFrame);
    //Commented to run

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignLeft);
}

Donut::~Donut()
{
    delete ui;
}
