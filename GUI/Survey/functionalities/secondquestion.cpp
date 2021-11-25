#include "secondquestion.h"
#include "ui_secondquestion.h"
#include "thirdquestion.h"
#include <QMessageBox>

SecondQuestion::SecondQuestion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondQuestion)
{
    ui->setupUi(this);
}

SecondQuestion::~SecondQuestion()
{
    delete ui;
}

void SecondQuestion::on_pushButton_clicked()
{
    QString string = "You have clicked answer:";
    QString output = string;
    if( bool ans1 = ui->radio1->isChecked()) {output += " 1";}
    if( bool ans2 = ui->radio2->isChecked()) {output += " 2";}
    if( bool ans3 = ui->radio3->isChecked()) {output += " 3";}
    if( bool ans4 = ui->radio4->isChecked()) {output += " 4";}

    if(output == string){
        QMessageBox::warning(this, "", "You have not answered");
    } else {
        QMessageBox::about(this, "Result", output);
        hide();
        thirdQuestion = new ThirdQuestion(this);
        thirdQuestion->show();
    }
}

