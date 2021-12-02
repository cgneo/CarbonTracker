#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    //QPixmap pix("/Users/dainjung/Downloads/photo_2021-11-18 10.52.38.jpeg");
        //ui ->label -> setPixmap(pix.scaled(100,120, Qt::KeepAspectRatio));

    //QPixmap pix("/Users/dainjung/Downloads/Screenshot 2021-11-25 at 15.57.00");
        //ui ->label -> setPixmap(pix.scaled(100,120, Qt::KeepAspectRatio));

    QPixmap pix("/Users/cyrine/Desktop/Semester3/CSE201/TD3/CarbonTracker/CarbonTrack_goodversion/Inspiration/Capture\ d’écran\ 2021-11-25\ à\ 12.14.07\ PM.png");
        ui ->label -> setPixmap(pix.scaled(300,400, Qt::KeepAspectRatio));





       //ui -> Seedsprogress -> setValue(ui -> checkBox -> stateChanged(int));
      //connect(ui -> checkBox, SIGNAL (isChecked(int)), ui -> Seedsprogress, SLOT(setValue(int)));
    //connect(ui -> checkBox_3, SIGNAL (isChecked(int)), ui -> Seedsprogress, SLOT(valueChanged(int)));
    //connect(ui -> checkBox_4, SIGNAL (isChecked(int)), ui -> Seedsprogress, SLOT(valueChanged(int)));
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

    //ui -> Seedsprogress -> setValue(ui -> on_checkBox_clicked());
    //connect(); --> QCheckBox


}
void MainWindow::on_checkBox_stateChanged(int arg1)
{

}



