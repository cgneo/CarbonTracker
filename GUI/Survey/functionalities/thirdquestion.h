#ifndef THIRDQUESTION_H
#define THIRDQUESTION_H

#include <QDialog>
class LogIn;

namespace Ui {
class ThirdQuestion;
}

class ThirdQuestion : public QDialog
{
    Q_OBJECT

public:
    explicit ThirdQuestion(QWidget *parent = nullptr);
    ~ThirdQuestion();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ThirdQuestion *ui;
    LogIn *login;
};

#endif // THIRDQUESTION_H
