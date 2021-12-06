#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("/Users/andres/Downloads/logo\ carbon\ tracker.jpeg");
    ui ->label_pic -> setPixmap(pix.scaled(450,250, Qt::KeepAspectRatio));
    QPixmap pix_2("/Users/andres/Desktop/PROJECT\ PIC/trasnport_icon.png");
    ui ->label_pic_2 -> setPixmap(pix_2.scaled(350,600, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_buttonMain_clicked()
{
    if (ui->tabMain->count() > 1) {
        ui->tabMain->setCurrentIndex( (ui->tabMain->currentIndex()+1) % ui->tabMain->count() );
    }
}

void MainWindow::on_buttonNextHousing1_clicked()
{
    if (ui->tabHousing->count() > 1) {
        ui->tabHousing->setCurrentIndex( (ui->tabHousing->currentIndex()+1) % ui->tabHousing->count() );
    }
}

void MainWindow::on_buttonNextHousing2_clicked()
{
    if (ui->tabHousing->count() > 1) {
        ui->tabHousing->setCurrentIndex( (ui->tabHousing->currentIndex()+1) % ui->tabHousing->count() );
    }
}


void MainWindow::on_buttonNextHousing3_clicked()
{
    if (ui->tabHousing->count() > 1) {
        ui->tabMain->setCurrentIndex( (ui->tabMain->currentIndex()+1) % ui->tabMain->count() );
    }
}

