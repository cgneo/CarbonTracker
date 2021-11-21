#ifndef FIRSTQUESTION_H
#define FIRSTQUESTION_H

#include <QDialog>
class SecondQuestion;

namespace Ui {
class FirstQuestion;
}

class FirstQuestion : public QDialog
{
    Q_OBJECT

public:
    explicit FirstQuestion(QWidget *parent = nullptr);
    ~FirstQuestion();

private slots:
    void on_Check_clicked();

private:
    Ui::FirstQuestion *ui;
    SecondQuestion *secQuestion;
};

#endif // FIRSTQUESTION_H
