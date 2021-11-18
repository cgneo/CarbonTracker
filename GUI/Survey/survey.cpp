#include "survey.h"
#include "ui_survey.h"
#include <QPixmap>

Survey::Survey(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Survey)
{
    ui->setupUi(this);
    QPixmap pix("/Users/andres/Downloads/logo\ carbon\ tracker.jpeg");
    ui ->label_pic -> setPixmap(pix.scaled(450,250, Qt::KeepAspectRatio));
}

Survey::~Survey()
{
    delete ui;
}

