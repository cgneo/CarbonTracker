#include "survey.h"
#include "ui_survey.h"
#include <QPixmap>
#include <QMessageBox>

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "json_DB.hpp"
#include "object.h"

Survey::Survey(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Survey)
{
    ui->setupUi(this);
    QPixmap pix(":/survey/logo_CT.jpeg");
    ui ->label_pic -> setPixmap(pix.scaled(650,450, Qt::KeepAspectRatio));
    QPixmap pix_2(":/survey/home_icon2.png");
    ui ->label_pic_3 -> setPixmap(pix_2.scaled(450,700, Qt::KeepAspectRatio));
    QPixmap pix_3(":/survey/trasnport_icon.png");
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
    if (ui->tabMain->count() > 1) {
        ui->tabMain->setCurrentIndex( (ui->tabMain->currentIndex()+1) % ui->tabMain->count() );
    }
}

void Survey::on_buttonNextTransport1_clicked()
{
    if (ui->tabTransport->count() > 1) {
        if (ui->radioButton_commuteY->isChecked() == 0 && ui->radioButton_commuteN->isChecked() == 0){
            QMessageBox::warning(this, "Warning", "You have not selected an answer");
        } else if (ui->radioButton_commuteY->isChecked()){
            ui->tabTransport->setCurrentIndex( (ui->tabTransport->currentIndex()+1) % ui->tabTransport->count() );
        } else {
            ui->tabMain->setCurrentIndex( (ui->tabMain->currentIndex()+1) % ui->tabMain->count() );
        }
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

//linking mainwindow and survey by a click on the "Account button"
void Survey::on_buttonAccount_clicked()
{        
    // initializing an account given the information inputted by the user in the survey
    QString username = ui->lineUsername->text();
    QString name = ui->lineName->text();
    QString email = ui->lineEmail->text();
    QString country = ui->comboCountry->currentText();
    // QString password = ui->linePassword->text(); // is a password needed?
    int living_partners = ui->sliderLivingPartners->value();
    int birthday = ui->spinBoxDay->value();
    int birthmonth = ui->spinBoxMonth->value();
    int birthyear = ui->spinBoxYear->value();

    Json_DB obj;
    QJsonObject doc;
    User u(username, name, birthday, birthmonth, birthyear, email, country, living_partners);
    obj.writeJsonUser(u);

    mainwindow = new MainWindow(this);
    mainwindow->show();
    hide();
}

