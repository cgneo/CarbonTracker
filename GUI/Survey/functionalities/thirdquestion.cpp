#include "thirdquestion.h"
#include "ui_thirdquestion.h"
#include "login.h"
#include <QMessageBox>

ThirdQuestion::ThirdQuestion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ThirdQuestion)
{
    ui->setupUi(this);
}

ThirdQuestion::~ThirdQuestion()
{
    delete ui;
}


void ThirdQuestion::on_pushButton_clicked()
{
    int value = ui->horizontalSlider->value();
    QString output = QString::number(value);
    QMessageBox::about(this,"ad",output);
    hide();
    login = new LogIn(this);
    login->show();
}

