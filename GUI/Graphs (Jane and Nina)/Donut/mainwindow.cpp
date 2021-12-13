#include "mainwindow.h"
#include "ui_mainwindow.h"


//data is a dictionary, or 2 lists, first the categories ordered, then their respective emissions
MainWindow::MainWindow(QWidget *parent /*,double* data*/)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /*QPieSlice::connect(ui->horizontalFrame,SIGNAL(slice2.hovered(slice2.state))),
            ui->horizontalFrame,SLOT(slice2->setExploded());*/


/*
    QPieSlice a, b;
    QObject::connect(&a, &QPieSlice::hovered,
                    &b, &QPieSlice::hoverexplode);

*/



    QPieSeries *series = new QPieSeries();
    series->setHoleSize(0.35);
    QPieSlice *slice1 = series->append("Locomotive", 1);


    //slice->setExploded();
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


    QPieSlice::connect(slice1, &QPieSlice::hovered,
                    slice1, &QPieSlice::setLabel(QString string));

    //create a floating label

    //if (slice1->hovered(bool slice1(state))){
    //    slice1->setLabel(Qstring "newlabel");
    //}

    //connect(slice1, SIGNAL(hovered()), slice1, SLOT(setLabel(QString"clicked")));

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setAnimationOptions(QChart::SeriesAnimations);
    chart->setTitle("My Transport Footprint");
    chart->setTheme(QChart::ChartThemeBrownSand);

    QChartView *chartview = new QChartView(chart);
    chartview->setRenderHint(QPainter::Antialiasing);

    chartview->setParent(ui->horizontalFrame);

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignLeft);
}

MainWindow::~MainWindow()
{
    delete ui;
}

