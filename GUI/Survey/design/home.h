#ifndef HOME_H
#define HOME_H

#include <QDialog>
class FirstQuestion;

namespace Ui {
class home;
}

class home : public QDialog
{
    Q_OBJECT

public:
    explicit home(QWidget *parent = nullptr);
    ~home();

private slots:
    void on_pushButton_clicked();

private:
    Ui::home *ui;
    FirstQuestion *firstQuestion;
};

#endif // HOME_H
