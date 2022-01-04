#include "mainwindow.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QDebug>
#include <QMap>
#include "json_DB.hpp"
#include "json_DB.cpp"
#include <QApplication>
#include "transport_api.h"
#include <QMovie>
#include <QLabel>
#include <QGraphicsScene>
#include <QFileDialog>
#include <QMessageBox>
#include <QDir>

#include <QtCharts>
#include <QChartView>
#include <QBarSet>
#include <QBarSeries>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //begining of graphs
    //Donutchart

    QPieSeries *dseries = new QPieSeries();
    dseries->setHoleSize(0.35);
    QPieSlice *dslice1 = dseries->append("Locomotive", 1);

    QPieSlice *dslice2 =dseries->append("Airplane", 2);
    QPieSlice *dslice3 =dseries->append("Car", 2);

    dslice1->setLabelVisible();
    dslice2->setLabelVisible();
    dslice3->setLabelVisible();

    QPieSlice::connect(dslice1, &QPieSlice::hovered,
                       dslice1, &QPieSlice::setExploded);
    QPieSlice::connect(dslice2, &QPieSlice::hovered,
                       dslice2, &QPieSlice::setExploded);
    QPieSlice::connect(dslice3, &QPieSlice::hovered,
                       dslice3, &QPieSlice::setExploded);

    QString string = "clicked";

    QChart *dchart = new QChart();
    dchart->addSeries(dseries);
    dchart->setAnimationOptions(QChart::SeriesAnimations);
    dchart->setTitle("My Transportation Footprint");
    dchart->setTheme(QChart::ChartThemeBrownSand);

    QChartView *dchartview = new QChartView(dchart);
    dchartview->setRenderHint(QPainter::Antialiasing);

    dchartview->setParent(ui->transportsframe);
    //Commented to run

    dchart->legend()->setVisible(true);
    dchart->legend()->setAlignment(Qt::AlignLeft);

    //Daily

    QBarSet *set0 = new QBarSet("Food");
    QBarSet *set1 = new QBarSet("Transports");

    *set0 << 1 << 2 << 3;
    *set1 << 5 << 0 << 0;

    QStackedBarSeries *series = new QStackedBarSeries();
    series->append(set0);
    series->append(set1);

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
    QBarSet *set5 = new QBarSet("Transports");

    *set4 << 10 << 20 << 30;
    *set5 << 50 << 2 << 2;

    QStackedBarSeries *series2 = new QStackedBarSeries();
    series2->append(set4);
    series2->append(set5);

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
    QBarSet *set8 = new QBarSet("Transports");

    *set7 << 100 << 200 << 300;
    *set8 << 500 << 20 << 20;

    QStackedBarSeries *series3 = new QStackedBarSeries();
    series3->append(set7);
    series3->append(set8);

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
    QBarSet *set1sum = new QBarSet("Transports");

    *set0sum << 1 << 2 << 3;
    *set1sum << 5 << 0 << 0;

    QStackedBarSeries *seriessum = new QStackedBarSeries();
    seriessum->append(set0sum);
    seriessum->append(set1sum);

    QChart *chartsum = new QChart();
    chartsum->addSeries(seriessum);
    chartsum->setTitle("Your daily emission compared to public figures' (in CO2/kg)");
    chartsum->setAnimationOptions(QChart::SeriesAnimations);

    QBarCategoryAxis *axisXsum = new QBarCategoryAxis();
    axisXsum->append(categories);
    chartsum->addAxis(axisXsum, Qt::AlignBottom);
    seriessum->attachAxis(axisXsum);
    QValueAxis *axisYsum = new QValueAxis();
    chartsum->addAxis(axisYsum, Qt::AlignLeft);
    seriessum->attachAxis(axisYsum);

    chartsum->legend()->setVisible(true);
    chartsum->legend()->setAlignment(Qt::AlignBottom);

    QChartView *chartViewsum = new QChartView(chartsum);
    chartViewsum->setParent(ui->horizontalFrame1sum);

    //monthly
    QBarSet *set4sum = new QBarSet("Food");
    QBarSet *set5sum = new QBarSet("Transports");

    *set4sum << 10 << 20 << 30;
    *set5sum << 50 << 2 << 2;

    QStackedBarSeries *series2sum = new QStackedBarSeries();
    series2sum->append(set4sum);
    series2sum->append(set5sum);

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
    QBarSet *set8sum = new QBarSet("Transports");

    *set7sum << 10 << 20 << 30;
    *set8sum << 50 << 2 << 2;

    QStackedBarSeries *series3sum = new QStackedBarSeries();
    series3sum->append(set7sum);
    series3sum->append(set8sum);

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

    //end of graphs

    QPixmap pix1(":/challenges/food-pic.png");
    ui -> food_label -> setPixmap(pix1.scaled(450,250, Qt::KeepAspectRatio));

    QPixmap pix2(":/challenges/plane-pic.png");
    ui -> transport_label -> setPixmap(pix2.scaled(450,250, Qt::KeepAspectRatio));

    QPixmap pix3(":/challenges/home-pic.png");
    ui -> home_label -> setPixmap(pix3.scaled(450,250, Qt::KeepAspectRatio));

    QPixmap pix4(":/challenges/seed.png");
    ui -> seed -> setPixmap(pix4.scaled(100,200, Qt::KeepAspectRatio));


    opacity_effect_1 = new QGraphicsOpacityEffect(ui -> daily_challenge_1);
    ui -> daily_challenge_1 -> setGraphicsEffect(opacity_effect_1);
    opacity_effect_1 -> setOpacity(1);
    animation_1 = new QPropertyAnimation(opacity_effect_1, "opacity", this);
    animation_1 -> setStartValue(1);
    animation_1 -> setEndValue(0);
    animation_1 -> setDuration(500);
    animation_1 -> setEasingCurve(QEasingCurve::Linear);

    connect(animation_1, SIGNAL(stateChanged(QAbstractAnimation::State,QAbstractAnimation::State)),
            this, SLOT(on_animation_stateChanged(QAbstractAnimation::State,QAbstractAnimation::State)));

    opacity_effect_2 = new QGraphicsOpacityEffect(ui -> daily_challenge_2);
    ui -> daily_challenge_2 -> setGraphicsEffect(opacity_effect_2);
    opacity_effect_2 -> setOpacity(1);
    animation_2 = new QPropertyAnimation(opacity_effect_2, "opacity", this);
    animation_2 -> setStartValue(1);
    animation_2 -> setEndValue(0);
    animation_2 -> setDuration(500);
    animation_2 -> setEasingCurve(QEasingCurve::Linear);

    connect(animation_2, SIGNAL(stateChanged(QAbstractAnimation::State,QAbstractAnimation::State)),
            this, SLOT(on_animation_stateChanged(QAbstractAnimation::State,QAbstractAnimation::State)));

    opacity_effect_3 = new QGraphicsOpacityEffect(ui -> daily_challenge_3);
    ui -> daily_challenge_3 -> setGraphicsEffect(opacity_effect_3);
    opacity_effect_3 -> setOpacity(1);
    animation_3 = new QPropertyAnimation(opacity_effect_3, "opacity", this);
    animation_3 -> setStartValue(1);
    animation_3 -> setEndValue(0);
    animation_3 -> setDuration(500);
    animation_3 -> setEasingCurve(QEasingCurve::Linear);

    connect(animation_3, SIGNAL(stateChanged(QAbstractAnimation::State,QAbstractAnimation::State)),
            this, SLOT(on_animation_stateChanged(QAbstractAnimation::State,QAbstractAnimation::State)));

    opacity_effect_4 = new QGraphicsOpacityEffect(ui -> daily_challenge_4);
    ui -> daily_challenge_4 -> setGraphicsEffect(opacity_effect_4);
    opacity_effect_4 -> setOpacity(1);
    animation_4 = new QPropertyAnimation(opacity_effect_4, "opacity", this);
    animation_4 -> setStartValue(1);
    animation_4 -> setEndValue(0);
    animation_4 -> setDuration(500);
    animation_4 -> setEasingCurve(QEasingCurve::Linear);

    connect(animation_4, SIGNAL(stateChanged(QAbstractAnimation::State,QAbstractAnimation::State)),
            this, SLOT(on_animation_stateChanged(QAbstractAnimation::State,QAbstractAnimation::State)));

    opacity_effect_seed = new QGraphicsOpacityEffect( ui -> seed);
    animation_seed = new QPropertyAnimation(opacity_effect_seed,"opacity", this);
    ui-> seed -> setGraphicsEffect(opacity_effect_seed);
    opacity_effect_seed -> setOpacity(1);
    animation_seed-> setDuration(500);
    animation_seed -> setStartValue(0);
    animation_seed -> setEndValue(1);
    animation_seed -> setEasingCurve(QEasingCurve::InBack);
    animation_seed-> start(QPropertyAnimation::DeleteWhenStopped);

    connect(animation_seed, SIGNAL(stateChanged(QAbstractAnimation::State,QAbstractAnimation::State)),
            this, SLOT(on_animation_stateChanged(QAbstractAnimation::State,QAbstractAnimation::State)));

    std::string a = Json_DB::random_key(Json_DB::daily_challenges);
    std::string b = Json_DB::random_key(Json_DB::daily_challenges);

    ui->daily_challenge_1->setText(QString::fromStdString(Json_DB::get_challenge_by_key(a)));
    ui->daily_challenge_2->setText(QString::fromStdString(Json_DB::get_challenge_by_key(b)));
    ui->daily_challenge_3->setText(QString::fromStdString(Json_DB::get_challenge_by_key("Challenge 3")));
    ui->daily_challenge_4->setText(QString::fromStdString(Json_DB::get_challenge_by_key("Challenge 4")));

    ui->food_tip_1->setText(QString::fromStdString(Json_DB::get_ftip_by_key("Food Tip 1")));
    ui->food_tip_2->setText(QString::fromStdString(Json_DB::get_ftip_by_key("Food Tip 2")));
    ui->food_tip_3->setText(QString::fromStdString(Json_DB::get_ftip_by_key("Food Tip 3")));

    ui->transportation_tip_1->setText(QString::fromStdString(Json_DB::get_ttip_by_key("Transportation Tip 1")));
    ui->transportation_tip_2->setText(QString::fromStdString(Json_DB::get_ttip_by_key("Transportation Tip 2")));
    ui->transportation_tip_3->setText(QString::fromStdString(Json_DB::get_ttip_by_key("Transportation Tip 3")));

    ui->house_tip_1->setText(QString::fromStdString(Json_DB::get_htip_by_key("House Tip 1")));
    ui->house_tip_2->setText(QString::fromStdString(Json_DB::get_htip_by_key("House Tip 2")));
    ui->house_tip_3->setText(QString::fromStdString(Json_DB::get_htip_by_key("House Tip 3")));

    ui -> tree_button -> setEnabled(false);
    connect(ui-> tree_button, SIGNAL(clicked), this, SLOT(enableButton));
}


MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_Surveybutton_clicked()
{

       ui->tabWidget->setCurrentIndex( (ui->tabWidget->currentIndex()+1) % ui->tabWidget->count() );
}


void MainWindow::on_Scanbutton_clicked()
{
    QString file_name = QFileDialog::getOpenFileName(this,"Open a file", QDir::homePath());
    QMessageBox::information(this, "...", file_name);
    //amine_function(file_name)
}

void MainWindow::on_daily_challenge_1_stateChanged(int)
{
    if (ui->daily_challenge_1->isChecked()){
        ui->SeedsprogressBar->setValue(ui->SeedsprogressBar->value() + 25);
        animation_1 -> start();
    }else{
        ui->SeedsprogressBar->setValue(ui->SeedsprogressBar->value() - 25);
    }
}

void MainWindow::on_daily_challenge_2_stateChanged(int)
{
    if (ui->daily_challenge_2->isChecked()){
        ui->SeedsprogressBar->setValue(ui->SeedsprogressBar->value() + 25);
        animation_2 -> start();
    }else{
        ui->SeedsprogressBar->setValue(ui->SeedsprogressBar->value() - 25);
    }
}

void MainWindow::on_daily_challenge_3_stateChanged(int)
{
    if (ui->daily_challenge_3->isChecked()){
        ui->SeedsprogressBar->setValue(ui->SeedsprogressBar->value() + 25);
        animation_3 -> start();
    }else{
        ui->SeedsprogressBar->setValue(ui->SeedsprogressBar->value() - 25);
    }
}
void MainWindow::on_daily_challenge_4_stateChanged(int)
{
    if (ui-> daily_challenge_4-> isChecked()){
        ui->SeedsprogressBar->setValue(ui->SeedsprogressBar->value() + 25);
        animation_4 -> start();
        enableButton();
    }else{
        ui->SeedsprogressBar->setValue(ui->SeedsprogressBar->value() - 25);
    }
}

void MainWindow::get_seed()
{
    if (ui -> SeedsprogressBar -> value() == 100){
        animation_seed -> start();
        enableButton();
    }
}

void MainWindow::on_buttonTransport_clicked()
{
    Transport t;
    QString vehicle = ui->vehicleTransport->currentText(); // taking input from user for vehicle
    string distance = ui->distanceTransport->cleanText().toStdString(); // taking input from user for distance
    t.set_type(vehicle);
    char* d = 0;//distance
    t.set_distance(d);// convert distance to char
    // converting std strings to char arrays
        // vehicle
    int n = vehicle.length();
    char char_array_vehicle[n+1];
    strcpy(char_array_vehicle, vehicle.toStdString().c_str());

        // distance
    int m = distance.length();
    char char_array_distance[m+1];
    strcpy(char_array_distance, distance.c_str());

    // calling the (transport) api
    transport_api api;
    api.get_reply(char_array_distance, char_array_vehicle);

    // outputting the emission for given vehicle and distance
    QString emission = QString::number(api.get_emission());
    t.set_footprint(api.get_emission());
    ui->outputTransport->setText(emission);
}

void MainWindow::enableButton()
{
    ui -> tree_button ->setEnabled(true);
}




void MainWindow::on_tree_button_clicked()
{
    QMovie *movie = new QMovie(":/challenges/tree_animation.gif");
    ui -> tree ->setMovie(movie);
    QSize scaledSize(200, 300);
    movie -> setScaledSize(scaledSize);
    if (movie ->currentFrameNumber() < 3){
    movie -> start();
    }
    if (movie -> currentFrameNumber() == 3){
        movie -> stop();
    }

//    if(movie->currentFrameNumber() == (movie->frameCount() - 1))
//            {
//                movie->stop();
//                //Explicity emit finished signal so that label **
//                //can show the image instead of a frozen gif
//                //Also, double check that movie stopped before emiting
//                if (movie->state() == QMovie::NotRunning)
//                {
//                    emit movie->finished();
//                }
//            }

}
