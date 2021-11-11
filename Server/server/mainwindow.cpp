#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"servedev.h"


#include <iostream>
#include "session.cpp"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //m_pBoxServer = new servedev(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addMessage(QString Msg)
{

    ui->textEditStatus->setText(Msg);

}

void MainWindow::on_pushButtonStart_clicked()
{
    m_pBoxServer = new servedev(this);

    bool success = m_pBoxServer->listen(QHostAddress::Any, quint16(ui->textEditPort->toPlainText().toInt()));
    if(!success)
    {
        addMessage("Server failed...");

    }
    else
    {
        addMessage("Server Started...");

        QString line = QString::fromUtf8(random_string(64)).trimmed();
        addMessage(line);
    }

}
