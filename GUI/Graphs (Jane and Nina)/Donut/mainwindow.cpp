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
    QPieSlice *slice = series->append("fruits & vegetables", 1);
    //fruits&vegetables, meat, poultry, fish&seafood, grains&pasta, condiments, dairy, snacks, drinks
    QPieSlice *slice1 = series->append("meat", 1);


    //slice->setExploded();
    slice->setLabelVisible();
    QPieSlice *slice2 =series->append("seafood, 1%", 2);
    QPieSlice *slice3 =series->append("poultry", 2);
    QPieSlice *slice4 =series->append("grains", 3);
    QPieSlice *slice5 =series->append("condiments", 1);
    QPieSlice *slice6 =series->append("dairy", 0.5);
    QPieSlice *slice7 =series->append("snacks", 0.4);
    QPieSlice *slice8 =series->append("drinks", 0.1);
    slice1->setLabelVisible();
    slice2->setLabelVisible();
    slice3->setLabelVisible();
    slice4->setLabelVisible();
    slice5->setLabelVisible();
    slice6->setLabelVisible();
    slice7->setLabelVisible();
    slice8->setLabelVisible();

    QPieSlice::connect(slice1, &QPieSlice::hovered,
                       slice1, &QPieSlice::setExploded);
    QPieSlice::connect(slice2, &QPieSlice::hovered,
                       slice2, &QPieSlice::setExploded);
    QPieSlice::connect(slice3, &QPieSlice::hovered,
                       slice3, &QPieSlice::setExploded);
    QPieSlice::connect(slice4, &QPieSlice::hovered,
                       slice4, &QPieSlice::setExploded);
    QPieSlice::connect(slice5, &QPieSlice::hovered,
                       slice5, &QPieSlice::setExploded);
    QPieSlice::connect(slice6, &QPieSlice::hovered,
                       slice6, &QPieSlice::setExploded);
    QPieSlice::connect(slice7, &QPieSlice::hovered,
                       slice7, &QPieSlice::setExploded);
    QPieSlice::connect(slice8, &QPieSlice::hovered,
                       slice8, &QPieSlice::setExploded);
    QPieSlice::connect(slice, &QPieSlice::hovered,
                       slice, &QPieSlice::setExploded);


    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setAnimationOptions(QChart::SeriesAnimations);
    chart->setTitle("My Foodprint");
    chart->setTheme(QChart::ChartThemeBrownSand);


    QChartView *chartview = new QChartView(chart);
    chartview->setRenderHint(QPainter::Antialiasing);

    chartview->setParent(ui->horizontalFrame);

    chart->legend()->setVisible(false);
    chart->legend()->setAlignment(Qt::AlignLeft);
}

MainWindow::~MainWindow()
{
    delete ui;
}

