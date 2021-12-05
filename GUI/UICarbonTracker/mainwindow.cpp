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


    //QPixmap pix("/Users/cyrine/Desktop/Semester3/CSE201/TD3/CarbonTracker/CarbonTrack_goodversion/Inspiration/Capture\ d’écran\ 2021-11-25\ à\ 12.14.07\ PM.png");
        //ui ->label -> setPixmap(pix.scaled(300,400, Qt::KeepAspectRatio))

}


MainWindow::~MainWindow()
{
    delete ui;
}

//void MainWindow::quit




void MainWindow::on_Seedsprogress_valueChanged(int value)
{

    //ui -> Seedsprogress -> setValue(ui -> on_checkBox_clicked());
    //connect(); --> QCheckBox


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
    if (ui->daily_challenge_1->isChecked()){
        ui->SeedsprogressBar->setValue(ui->SeedsprogressBar->value() + 25);
    }else{
        ui->SeedsprogressBar->setValue(ui->SeedsprogressBar->value() - 25);
    }
}

void MainWindow::on_daily_challenge_3_stateChanged(int)
{
    if (ui->daily_challenge_1->isChecked()){
        ui->SeedsprogressBar->setValue(ui->SeedsprogressBar->value() + 25);
    }else{
        ui->SeedsprogressBar->setValue(ui->SeedsprogressBar->value() - 25);
    }
}
void MainWindow::on_daily_challenge_4_stateChanged(int)
{
    if (ui->daily_challenge_1->isChecked()){
        ui->SeedsprogressBar->setValue(ui->SeedsprogressBar->value() + 25);
    }else{
        ui->SeedsprogressBar->setValue(ui->SeedsprogressBar->value() - 25);
    }
}
