#include "mainwindow.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QDebug>
#include <QMap>
#include "json_DB.hpp"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix1(":/challenges/food-pic.png");
    ui ->food_label -> setPixmap(pix1.scaled(450,250, Qt::KeepAspectRatio));

    QPixmap pix2(":/challenges/plane-pic.png");
    ui ->transport_label -> setPixmap(pix2.scaled(450,250, Qt::KeepAspectRatio));

    QPixmap pix3(":/challenges/home-pic.png");
    ui ->home_label -> setPixmap(pix3.scaled(450,250, Qt::KeepAspectRatio));



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

    ui->daily_challenge_1->setText(QString::fromStdString(Json_DB::get_challenge_by_key("Challenge 1")));
    ui->daily_challenge_2->setText(QString::fromStdString(Json_DB::get_challenge_by_key("Challenge 2")));
    ui->daily_challenge_3->setText(QString::fromStdString(Json_DB::get_challenge_by_key("Challenge 3")));
    ui->daily_challenge_4->setText(QString::fromStdString(Json_DB::get_challenge_by_key("Challenge 4")));

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
    }else{
        ui->SeedsprogressBar->setValue(ui->SeedsprogressBar->value() - 25);
    }
}

void MainWindow::get_seed()
{
    if (ui -> SeedsprogressBar -> value() == 100){
        animation_seed -> start();
    }
}
