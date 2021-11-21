#ifndef FIRSTDIALOG_H
#define FIRSTDIALOG_H

#include <QDialog>
class SecDialog;

namespace Ui {
class FirstDialog;
}

class FirstDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FirstDialog(QWidget *parent = nullptr);
    ~FirstDialog();

private slots:
    void on_Check_clicked();

private:
    Ui::FirstDialog *ui;
    SecDialog *secDialog;
};

#endif // FIRSTDIALOG_H
