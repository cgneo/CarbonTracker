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
#include "consumption.h"
#include <QtCharts>
#include <QChartView>
#include <QBarSet>
#include <QBarSeries>
#include "receipt_info.cpp"




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

//    // Create a server
//    CB_server = new netserver();
//    CB_server->startServer();

//    // Create a client
//    CB_receiver = new netclient();
//    CB_receiver->startClient();

    // Invoke the flush and call it manually.
    std::cout.flush();


    ui->setupUi(this);
    Json_DB json_obj;
    User *u = json_obj.readUser_from_Json();
    current_user = u;
    //begining of graphs
    //LineChart

    QLineSeries *Lseries = new QLineSeries();

    Lseries->append(0, 500);
     Lseries->append(10, 850);
     Lseries->append(20, 1000);
     Lseries->append(30, 1000);
     Lseries->append(40, 1250);
     Lseries->append(50, 1500);
     Lseries->append(60, 2500);
     Lseries->append(70, 4000);
     Lseries->append(80, 5300);
     Lseries->append(90, 6000);
     Lseries->append(100, 6650);
     Lseries->append(110, 9900);



   //     *Lseries << QPointF(11, 1) << QPointF(13, 3) << QPointF(17, 6) << QPointF(18, 3)
     //           << QPointF(20, 2);

        QChart *Lchart = new QChart();
        Lchart->legend()->hide();
        Lchart->addSeries(Lseries);
        Lchart->createDefaultAxes();

    /*
        QStringList categories;
       categories << "Jan" << "Feb" << "Mar" << "Apr" << "May" << "Jun";
       QBarCategoryAxis *axisX = new QBarCategoryAxis();
       axisX->append(categories);
       chart->addAxis(axisX, Qt::AlignBottom);
       series->attachAxis(axisX);
       axisX->setRange(QString("Jan"), QString("Jun"));
       QValueAxis *axisY = new QValueAxis();
       chart->addAxis(axisY, Qt::AlignLeft);
       series->attachAxis(axisY);
       //axisY->setRange(0, 20);*/


        Lchart->setTitle("The World's carbon footprint through time since 1900");

        //chart->legend()->setVisible(true);
        //chart->legend()->setAlignment(Qt::AlignBottom);

        //axisY = QValueAxis();
        //axisY.setTitleText("Loss (W)");

        Lchart->setAnimationOptions(QChart::SeriesAnimations);
        Lchart->setTheme(QChart::ChartThemeBrownSand);

        // Customize series
        QPen pen(QRgb(0xfdb157));
        pen.setWidth(5);
        Lseries->setPen(pen);

        // Customize chart title
        QFont font;
        font.setPixelSize(18);
        Lchart->setTitleFont(font);
        Lchart->setTitleBrush(QBrush(Qt::white));

        // Customize chart background
        QLinearGradient backgroundGradient;
        backgroundGradient.setStart(QPointF(0, 0));
        backgroundGradient.setFinalStop(QPointF(0, 1));
        backgroundGradient.setColorAt(0.0, QRgb(0xd2d0d1));

        Lchart->setBackgroundBrush(backgroundGradient);

        // Customize plot area background
        QLinearGradient plotAreaGradient;
        plotAreaGradient.setStart(QPointF(0, 1));
        plotAreaGradient.setFinalStop(QPointF(1, 0));
        plotAreaGradient.setColorAt(0.0, QRgb(0x555555));
        plotAreaGradient.setColorAt(1.0, QRgb(0x55aa55));
        plotAreaGradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        Lchart->setPlotAreaBackgroundBrush(plotAreaGradient);
        Lchart->setPlotAreaBackgroundVisible(true);


        Lchart->setTheme(QChart::ChartThemeBrownSand);
        QChartView *LchartView = new QChartView(Lchart);
        LchartView->setRenderHint(QPainter::Antialiasing);
        LchartView->setParent(ui->LineFrame);


    //Donutchart


    //calling data
    //build
    QPieSeries *dseries = new QPieSeries();
    dseries->setHoleSize(0.35);

    QPieSeries *dseries2 = new QPieSeries();
    dseries2->setHoleSize(0.35);

    //QPieSlice *slices[12];
    Consumption *c = u->get_consumption();

    QPieSlice *slice;

    //Code to do pie chart with food
    vector<string> keys = c->get_keys(c->footprint_by_food_category);
    vector<string> keys2 = c->get_keys(c->footprint_by_vehicle);

    int size = keys.size();
    int size2 = keys2.size();

    for (int i = 0; i < size; i++){
        //qDebug() << QString::fromStdString(c->vehicles[i]);
        string label = keys.at(i);

        //std::unordered_map<string, double>* dic = c2->footprint_by_vehicle;


        slice =  dseries->append(QString::fromStdString(label), c->get_category_footprint(label));
        //slices[i] = dseries->append(c.vehicles[i], 1);
        if(c->get_category_footprint(label)!=0){
            slice->setLabelVisible();
        }

        QPieSlice::connect(slice, &QPieSlice::hovered,
                           slice, &QPieSlice::setExploded);
    }

    for (int i = 0; i < size2; i++){
        //qDebug() << QString::fromStdString(c->vehicles[i]);
        string label = keys2.at(i);

        //std::unordered_map<string, double>* dic = c2->footprint_by_vehicle;


        slice =  dseries2->append(QString::fromStdString(label), c->get_vehicle_footprint(label));
        //slices[i] = dseries->append(c.vehicles[i], 1);
        if(c->get_vehicle_footprint(label)!=0){
            slice->setLabelVisible();
        }

        QPieSlice::connect(slice, &QPieSlice::hovered,
                           slice, &QPieSlice::setExploded);
    }

    //Code to graph transport categories
//    for (int i = 0; i < 12; i++){
//        qDebug() << QString::fromStdString(c->vehicles[i]);
//        string vehicle = c->vehicles[i];

//        //std::unordered_map<string, double>* dic = c2->footprint_by_vehicle;


//        slice =  dseries->append(QString::fromStdString(vehicle), c->get_vehicle_footprint(vehicle));
//        //slices[i] = dseries->append(c.vehicles[i], 1);
//        slice->setLabelVisible();
//        QPieSlice::connect(slice, &QPieSlice::hovered,
//                           slice, &QPieSlice::setExploded);
//    }

    /*
    QPieSlice *dslice1 = dseries->append("Locomotive", 1);
    QPieSlice *dslice2 =dseries->append("Airplane", 2);
    QPieSlice *dslice3 =dseries->append("Car", 2);

    QPieSlice *slices[12] = {dslice1, dslice2, dslice3, dslice4, dslice5, dslice6, dslice7, dslice8, dslice9, dslice10, dslice11, dslice12};

    dslice1->setLabelVisible();
    dslice2->setLabelVisible();
    dslice3->setLabelVisible();

    QPieSlice::connect(dslice1, &QPieSlice::hovered,
                       dslice1, &QPieSlice::setExploded);
    QPieSlice::connect(dslice2, &QPieSlice::hovered,
                       dslice2, &QPieSlice::setExploded);
    QPieSlice::connect(dslice3, &QPieSlice::hovered,
                       dslice3, &QPieSlice::setExploded);
*/
    QString string = "clicked";

    QChart *dchart = new QChart();
    dchart->addSeries(dseries);
    dchart->setAnimationOptions(QChart::SeriesAnimations);
    dchart->setTitle("My Food Footprint");
    dchart->setTheme(QChart::ChartThemeBrownSand);

    QChartView *dchartview = new QChartView(dchart);
    dchartview->setRenderHint(QPainter::Antialiasing);

    dchartview->setParent(ui->foodframe1);
    //Commented to run

    dchart->legend()->setVisible(true);
    dchart->legend()->setAlignment(Qt::AlignBottom);

   //transports

    QChart *dchart2 = new QChart();
    dchart2->addSeries(dseries2);
    dchart2->setAnimationOptions(QChart::SeriesAnimations);
    dchart2->setTitle("My Transportation Footprint");
    dchart2->setTheme(QChart::ChartThemeBrownSand);

    QChartView *dchartview2 = new QChartView(dchart2);
    dchartview2->setRenderHint(QPainter::Antialiasing);

    dchartview2->setParent(ui->transportsframe);
    //Commented to run

    dchart2->legend()->setVisible(true);
    dchart2->legend()->setAlignment(Qt::AlignLeft);
    //


    //Daily

    QBarSet *set0 = new QBarSet("General footrpint");
    //QBarSet *set1 = new QBarSet("Transports");

    Date d;
    d.get_current_date();

    *set0 << c->get_daily_footprint(d.to_String()) << 7 << 70 ;
    //*set1 << 5 << 0 << 0;

    QStackedBarSeries *series = new QStackedBarSeries();
    series->append(set0);
    //series->append(set1);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Your daily emission compared to public figures' (in kg.CO2)");
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

    QBarSet *set4 = new QBarSet("General footprint");
    //QBarSet *set5 = new QBarSet("Transports");

    *set4 << c->get_monthly_footprint("00012022") << 208 << 2087;
    //*set5 << 50 << 2 << 2;

    QStackedBarSeries *series2 = new QStackedBarSeries();
    series2->append(set4);
    //series2->append(set5);

    QChart *chart2 = new QChart();
    chart2->addSeries(series2);
    chart2->setTitle("Your monthly emission compared to public figures' (in kg.CO2)");
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

    QBarSet *set7 = new QBarSet("General footprint");
    //QBarSet *set8 = new QBarSet("Transports");

    *set7 << c->get_yearly_footprint("00002022") << 2505 << 25052 ;
    //*set8 << 500 << 20 << 20;

    QStackedBarSeries *series3 = new QStackedBarSeries();
    series3->append(set7);
    //series3->append(set8);

    QChart *chart3 = new QChart();
    chart3->addSeries(series3);
    chart3->setTitle("Your yearly emission compared to public figures' (in kgCO2)");
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


    //end of graphs

    QPixmap pix1(":/challenges/food-pic.png");
    ui -> food_label -> setPixmap(pix1.scaled(450,250, Qt::KeepAspectRatio));

    QPixmap pix2(":/challenges/plane-pic.png");
    ui -> transport_label -> setPixmap(pix2.scaled(450,250, Qt::KeepAspectRatio));

    QPixmap pix3(":/challenges/home-pic.png");
    ui -> home_label -> setPixmap(pix3.scaled(450,250, Qt::KeepAspectRatio));

    QPixmap pix4(":/challenges/seed.png");
    ui -> seed -> setPixmap(pix4.scaled(100,200, Qt::KeepAspectRatio));

    QPixmap pix5(":/survey/trasnport_icon.png");
    ui -> trans_picture -> setPixmap(pix5.scaled(500,300, Qt::KeepAspectRatio));

    QPixmap pix6(":/challenges/graph photo.png");
    ui -> graph_pic -> setPixmap(pix6.scaled(500,300, Qt::KeepAspectRatio));




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
void MainWindow::on_RefreshPushButton_clicked(){
    MainWindow *new_window = new MainWindow(this);
    new_window->show();
    hide();

}

void MainWindow::on_Scanbutton_clicked()
{
//    QString file_name = QFileDialog::getOpenFileName(this,"Open a file", QDir::homePath());
//    QMessageBox::information(this, "...", file_name);
    string filepath = "/Users/alex_christlieb/Desktop/carrefour.png";
    vector<vector<string>> receipt_vec = get_receipt_info(filepath);
    Receipt rec;
    Date *today = new  Date();
    today->get_current_date();
    rec.set_dates(today);
    rec.set_content(receipt_vec);
    //rec.set_dates(); HAVE TO SET DATE OF RECEIPT
    rec.receipt_to_consumption(current_user->get_consumption());
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
    QString vehicle = ui->vehicleTransport->currentText(); // taking input from user for vehicle
    string distance = ui->distanceTransport->cleanText().toStdString(); // taking input from user for distance

    // convert distance to char arrays
    // converting std strings to char arrays
    // vehicle
    int n = vehicle.length();
    char char_array_vehicle[n+1];
    strcpy(char_array_vehicle, vehicle.toStdString().c_str());
    // distance
    int m = distance.length();
    char char_array_distance[m+1];
    strcpy(char_array_distance, distance.c_str());
    Date* d = new Date();
    d->get_current_date();

    Transport* t = new Transport(d,vehicle,char_array_distance);

    // calling the (transport) api
    transport_api api;
    api.get_reply(char_array_distance, char_array_vehicle);

    // outputting the emission for given vehicle and distance
    QString emission = QString::number(api.get_emission());
    t->set_footprint(api.get_emission());
    ui->outputTransport->setText(emission);

    current_user->get_consumption()->add_object(t, true);
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

