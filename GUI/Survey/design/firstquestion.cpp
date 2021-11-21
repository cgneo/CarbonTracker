#include "firstquestion.h"
#include "ui_firstquestion.h"
#include "secondquestion.h"
#include <QMessageBox>

FirstQuestion::FirstQuestion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FirstQuestion)
{
    ui->setupUi(this);
}

FirstQuestion::~FirstQuestion()
{
    delete ui;
}

void FirstQuestion::on_Check_clicked()
{
    QString output = "You have clicked answers:";
    if( bool ans1 = ui->Answer1->isChecked()) {output += " 1";}
    if( bool ans2 = ui->Answer2->isChecked()) {output += " 2";}
    if( bool ans3 = ui->Answer3->isChecked()) {output += " 3";}
    if( bool ans4 = ui->Answer4->isChecked()) {output += " 4";}
    QMessageBox::about(this, "Result", output);
    hide();

    secQuestion = new SecondQuestion(this);
    secQuestion->show();
}

