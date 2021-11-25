#include "mainwindow.h"
#include "ui_mainwindow.h"


//data is a dictionary, or 2 lists, first the categories ordered, then their respective emissions
MainWindow::MainWindow(QWidget *parent /*,double* data*/)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    QPieSlice a, b;
    QObject::connect(&a, &QPieSlice::hovered,
                    &b, &QPieSlice::hoverexplode);





    QPieSeries *series = new QPieSeries();
    series->setHoleSize(0.35);
    QPieSlice *slice = series->append("fruits & vegetables", 1);
    //fruits&vegetables, meat, poultry, fish&seafood, grains&pasta, condiments, dairy, snacks, drinks
    QPieSlice *slice1 = series->append("meat", 1);


    slice->setExploded();
    slice->setLabelVisible();
    QPieSlice *slice2 =series->append("seafood, 1%", 1);
    QPieSlice *slice3 =series->append("poultry", 1);
    QPieSlice *slice4 =series->append("grains", 3);
    QPieSlice *slice5 =series->append("condiments", 1);
    QPieSlice *slice6 =series->append("dairy", 1);
    QPieSlice *slice7 =series->append("snacks", 1);
    QPieSlice *slice8 =series->append("drinks", 1);

    slice2->setLabelVisible();
    slice3->setLabelVisible();
    slice4->setLabelVisible();
    slice5->setLabelVisible();
    slice6->setLabelVisible();
    slice7->setLabelVisible();
    slice8->setLabelVisible();

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

