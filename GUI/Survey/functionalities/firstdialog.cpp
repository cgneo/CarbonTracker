#include "firstdialog.h"
#include "secdialog.h"
#include "ui_firstdialog.h"
#include <QMessageBox>

FirstDialog::FirstDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FirstDialog)
{
    ui->setupUi(this);
}

FirstDialog::~FirstDialog()
{
    delete ui;
}

void FirstDialog::on_Check_clicked()
{
    QString output = "You have clicked answers:";
    if( bool ans1 = ui->Answer1->isChecked()) {output += " 1";}
    if( bool ans2 = ui->Answer2->isChecked()) {output += " 2";}
    if( bool ans3 = ui->Answer3->isChecked()) {output += " 3";}
    if( bool ans4 = ui->Answer4->isChecked()) {output += " 4";}
    QMessageBox::about(this, "Result", output);
    hide();

    secDialog = new SecDialog(this);
    secDialog->show();
}

