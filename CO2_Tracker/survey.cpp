#include "survey.h"
#include "ui_survey.h"
#include <QPixmap>
#include <QMessageBox>
#include <json_DB.hpp>

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "transport.h"
#include "transport_api.h"

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
    ui->tabMain->setCurrentIndex( (ui->tabMain->currentIndex()+1) % ui->tabMain->count() );
}

void Survey::on_buttonNextTransport1_clicked()
{
    if (ui->tabTransport->count() > 1) {
        bool yes = ui->radioButton_TransY->isChecked();
        bool no = ui->radioButton_TransN->isChecked();
        if (not no && not yes){
            QMessageBox::warning(this, "Warning", "You have not selected an answer.");
        }else if (yes){
            ui->tabTransport->setCurrentIndex( (ui->tabTransport->currentIndex()+1) % ui->tabTransport->count() );
        }else {
            ui->tabMain->setCurrentIndex( (ui->tabMain->currentIndex()+1) % ui->tabMain->count() );
        }
    }
}

void Survey::on_buttonNextTransport2_clicked()
{
    if (ui->tabTransport->count() > 1) {
        bool no = ui->radioButton_TransN->isChecked();
        if (no){
            QMessageBox::warning(this, "Warning", "You have selected that you don't commute.");
        } else {
            ui->tabTransport->setCurrentIndex( (ui->tabTransport->currentIndex()+1) % ui->tabTransport->count() );
        }
    }
}


void Survey::on_buttonNextTransport3_clicked()
{
    if (ui->tabTransport->count() > 1) {
        bool no = ui->radioButton_TransN->isChecked();
        if (no){
            QMessageBox::warning(this, "Warning", "You have selected that you don't commute.");
        } else {
            ui->tabMain->setCurrentIndex( (ui->tabMain->currentIndex()+1) % ui->tabMain->count() );
        }
    }
}

//linking mainwindow and survey by a click on the "Account button" while submitting all the obtained inf
void Survey::on_buttonAccount_clicked()
{
    Json_DB json_obj;
    QJsonObject doc;

    // Using information from 'housing' tab
    int living_partners = ui->living_partners->value();

    // Using information from 'create account' tabs
        // Warning messages
    if ((ui->Name->text().isEmpty())){
        QMessageBox::warning(this, "Warning", "You have not submitted a name.");
    } else if ((ui->Email->text().isEmpty())){
        QMessageBox::warning(this, "Warning", "You have not submitted an email.");
    } else if (ui->Username->text().isEmpty()){
        QMessageBox::warning(this, "Warning", "You have not submitted a username.");
    } else if (ui->Password->text().isEmpty()){
        QMessageBox::warning(this, "Warning", "You have not submitted a password.");
    } else {

        // Using information from 'transport' tab
        bool yes = ui->radioButton_TransY->isChecked();

        if(yes){
            Transport t;
            QString vehicle = ui->vehicleT->currentText(); // taking input from user for vehicle
            string distance = ui->distanceT->cleanText().toStdString(); // taking input from user for distance
            t.set_type(vehicle);
            char* d = 0;//distance
            t.set_distance(d);// convert distance to char
            // converting std strings to char arrays
                // vehicle
            int n = vehicle.length();
            char char_array_vehicle[n+1];
            strcpy(char_array_vehicle, vehicle.toStdString().c_str());

                // distance
            int m = distance.length();
            char char_array_distance[m+1];
            strcpy(char_array_distance, distance.c_str());

            // calling the (transport) api
            transport_api api;
            api.get_reply(char_array_distance, char_array_vehicle);

            // outputting the emission for given vehicle and distance
            QString emission = QString::number(api.get_emission());
            t.set_footprint(api.get_emission());

            // the value 'emission' contains a QString of the number of kg of CO2 emitted by the transport.
        }

    QString username = ui->Username->text();
    QString name = ui->Name->text();
    QString email = ui->Email->text();
    QString password = ui->Password->text();
    QString country = ui->Country->currentText();

    int birthday = ui->Day->value();
    int birthmonth = ui->Month->value();
    int birthyear = ui->Year->value();

    User u(username, name, birthday, birthmonth, birthyear, email, country, living_partners, 0);

    json_obj.createJsonUserObject(doc, u);
    json_obj.writeJsonUser(u);

    mainwindow = new MainWindow(this);
    mainwindow->show();
    hide();

    }
}

void Survey::on_living_partners_valueChanged(int value)
{
    ui->label->setNum(value);
}

