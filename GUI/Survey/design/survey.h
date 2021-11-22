#ifndef SURVEY_H
#define SURVEY_H

#include <QMainWindow>
class home;

QT_BEGIN_NAMESPACE
namespace Ui { class Survey; }
QT_END_NAMESPACE

class Survey : public QMainWindow
{
    Q_OBJECT

public:
    Survey(QWidget *parent = nullptr);
    ~Survey();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Survey *ui;
    home *homeObject;
};
#endif // SURVEY_H
