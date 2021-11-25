#ifndef SECONDQUESTION_H
#define SECONDQUESTION_H

#include <QDialog>

namespace Ui {
class SecondQuestion;
}

class SecondQuestion : public QDialog
{
    Q_OBJECT

public:
    explicit SecondQuestion(QWidget *parent = nullptr);
    ~SecondQuestion();

private:
    Ui::SecondQuestion *ui;
};

#endif // SECONDQUESTION_H
