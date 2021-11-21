#include "secondquestion.h"
#include "ui_secondquestion.h"

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
