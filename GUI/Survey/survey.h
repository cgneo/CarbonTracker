#ifndef SURVEY_H
#define SURVEY_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Survey; }
QT_END_NAMESPACE

class Survey : public QMainWindow
{
    Q_OBJECT

public:
    Survey(QWidget *parent = nullptr);
    ~Survey();

private:
    Ui::Survey *ui;
};
#endif // SURVEY_H
