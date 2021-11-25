#ifndef SECONDQUESTION_H
#define SECONDQUESTION_H

#include <QDialog>
class ThirdQuestion;

namespace Ui {
class SecondQuestion;
}

class SecondQuestion : public QDialog
{
    Q_OBJECT

public:
    explicit SecondQuestion(QWidget *parent = nullptr);
    ~SecondQuestion();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SecondQuestion *ui;
    ThirdQuestion *thirdQuestion;
};

#endif // SECONDQUESTION_H
