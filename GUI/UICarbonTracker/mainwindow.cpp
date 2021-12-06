#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}


MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_Surveybutton_clicked()
{
    if (ui->tabWidget->count() > 1) {
          ui->tabWidget->setCurrentIndex( (ui->tabWidget->currentIndex()+1) % ui->tabWidget->count() );
       }
}


void MainWindow::on_Scanbutton_clicked()
{

}



void MainWindow::on_daily_challenge_1_stateChanged(int)
{
    if (ui->daily_challenge_1->isChecked()){
        ui->SeedsprogressBar->setValue(ui->SeedsprogressBar->value() + 25);
    }else{
        ui->SeedsprogressBar->setValue(ui->SeedsprogressBar->value() - 25);
    }
}

void MainWindow::on_daily_challenge_2_stateChanged(int)
{
    if (ui->daily_challenge_2->isChecked()){
        ui->SeedsprogressBar->setValue(ui->SeedsprogressBar->value() + 25);
    }else{
        ui->SeedsprogressBar->setValue(ui->SeedsprogressBar->value() - 25);
    }
}

void MainWindow::on_daily_challenge_3_stateChanged(int)
{
    if (ui->daily_challenge_3->isChecked()){
        ui->SeedsprogressBar->setValue(ui->SeedsprogressBar->value() + 25);
    }else{
        ui->SeedsprogressBar->setValue(ui->SeedsprogressBar->value() - 25);
    }
}
void MainWindow::on_daily_challenge_4_stateChanged(int)
{
    if (ui->daily_challenge_4->isChecked()){
        ui->SeedsprogressBar->setValue(ui->SeedsprogressBar->value() + 25);
    }else{
        ui->SeedsprogressBar->setValue(ui->SeedsprogressBar->value() - 25);
    }
}

/*
MyTimer::MyTimer()
{
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(MyTimerSlot()));
    timer -> start (86400);
}

void MyTimer::MyTimerslot()
{
    qDebug();
}
*/
/*
void MainWindow::on_daily_challenge_1_destroyed()
{
    if (ui->daily_challenge_1->isChecked()){

    }
}
*/
