#include "mainwindow.h"
#include "ui_mainwindow.h"

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

//void MainWindow::quit





void MainWindow::on_checkBox_clicked()
{

}

void MainWindow::on_Seedsprogress_valueChanged(int value)
{
    ui -> Seedsprogress -> setValue(ui -> on_checkBox_clicked());
    //connect(); --> QCheckBox

}
void MainWindow::on_checkBox_stateChanged(int arg1)
{

}

