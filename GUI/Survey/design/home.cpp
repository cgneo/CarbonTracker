#include "home.h"
#include "ui_home.h"
#include "firstquestion.h"
#include <QPixmap>

home::home(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::home)
{
    ui->setupUi(this);
    QPixmap pix("/Users/andres/Desktop/PROJECT\ PIC/home_icon2.png");
    ui ->label_pic -> setPixmap(pix.scaled(350,600, Qt::KeepAspectRatio));
}

home::~home()
{
    delete ui;
}

void home::on_pushButton_clicked()
{
    hide();
    firstQuestion = new FirstQuestion(this);
    firstQuestion->show();
}

