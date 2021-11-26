#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("/Users/cyrine/Bureau/Capture d’écran 2021-11-25 à 11.42.59 AM");
        ui ->label -> setPixmap(pix.scaled(350,250, Qt::KeepAspectRatio));



}

MainWindow::~MainWindow()
{
    delete ui;
}

//void MainWindow::quit



void MainWindow::on_checkBox_clicked()
{

}

void MainWindow::on_Seedsprogress_valueChanged(int value)
{
}
void MainWindow::on_checkBox_stateChanged(int arg1)
{

}

