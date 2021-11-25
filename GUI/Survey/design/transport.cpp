#include "transport.h"
#include "ui_transport.h"
#include <QPixmap>

Transport::Transport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Transport)
{
    ui->setupUi(this);
    ui->setupUi(this);
    QPixmap pix("/Users/andres/Desktop/PROJECT\ PIC/trasnport_icon.png /");
    ui ->label_pic -> setPixmap(pix.scaled(350,600, Qt::KeepAspectRatio));
}

Transport::~Transport()
{
    delete ui;
}
