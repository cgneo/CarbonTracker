#include "survey.h"
#include "ui_survey.h"
#include <QPixmap>
#include <QMessageBox>

Survey::Survey(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Survey)
{
    ui->setupUi(this);
    QPixmap pix("../build/pictures/logo_carbon_tracker.jpeg");
    ui ->label_pic -> setPixmap(pix.scaled(650,450, Qt::KeepAspectRatio));
    QPixmap pix_2("../build/pictures/home_icon2.png");
    ui ->label_pic_3 -> setPixmap(pix_2.scaled(450,700, Qt::KeepAspectRatio));
    QPixmap pix_3("../build/pictures/trasnport_icon.png");
    ui ->pic_label_3 -> setPixmap(pix_3.scaled(450,700, Qt::KeepAspectRatio));

}

Survey::~Survey()
{
    delete ui;
}


void Survey::on_buttonMain_clicked()
{
    if (ui->tabMain->count() > 1) {
        ui->tabMain->setCurrentIndex( (ui->tabMain->currentIndex()+1) % ui->tabMain->count() );
    }
}

void Survey::on_buttonNextHousing1_clicked()
{
    QString test;
    QString output = test;
    if (ui->radioH1_1->isChecked()){output += "answer 1";}
    if (ui->radioH1_2->isChecked()){output += "answer 2";}
    if (ui->radioH1_3->isChecked()){output += "answer 3";}
    if (ui->radioH1_4->isChecked()){output += "answer 4";}

    if (ui->tabHousing->count() > 1) {
        if (output == test){
            QMessageBox::warning(this, "Warning", "You did not select an answer.");
        } else {
            ui->tabHousing->setCurrentIndex( (ui->tabHousing->currentIndex()+1) % ui->tabHousing->count() );
        }
    }
}

void Survey::on_buttonNextHousing2_clicked()
{
    if (ui->tabHousing->count() > 1) {
        ui->tabHousing->setCurrentIndex( (ui->tabHousing->currentIndex()+1) % ui->tabHousing->count() );
    }
}


void Survey::on_buttonNextHousing3_clicked()
{
    if (ui->tabHousing->count() > 1) {
        ui->tabMain->setCurrentIndex( (ui->tabMain->currentIndex()+1) % ui->tabMain->count() );
    }
}

void Survey::on_buttonNextTransport1_clicked()
{
    if (ui->tabTransport->count() > 1) {
        ui->tabTransport->setCurrentIndex( (ui->tabTransport->currentIndex()+1) % ui->tabTransport->count() );
    }
}

void Survey::on_buttonNextTransport2_clicked()
{
    if (ui->tabTransport->count() > 1) {
        ui->tabTransport->setCurrentIndex( (ui->tabTransport->currentIndex()+1) % ui->tabTransport->count() );
    }
}


void Survey::on_buttonNextTransport3_clicked()
{
    if (ui->tabTransport->count() > 1) {
        ui->tabMain->setCurrentIndex( (ui->tabMain->currentIndex()+1) % ui->tabMain->count() );
    }
}

void Survey::on_buttonAccount_clicked()
{
    if (ui->tabMain->count() > 1) {
        ui->tabMain->setCurrentIndex( (ui->tabMain->currentIndex()+1) % ui->tabMain->count() );
    }
}

