#include "thirdquestion.h"
#include "ui_thirdquestion.h"
#include "transport.h"
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
    transport = new Transport(this);
    transport->show();
}

