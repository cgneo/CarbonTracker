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

private slots:
    void on_buttonMain_clicked();
    void on_buttonNextHousing1_clicked();
    void on_buttonNextHousing2_clicked();
    void on_buttonNextHousing3_clicked();
    void on_buttonNextTransport1_clicked();
    void on_buttonNextTransport2_clicked();
    void on_buttonNextTransport3_clicked();
    void on_buttonAccount_clicked() ;

private:
    Ui::Survey *ui;
};
#endif // SURVEY_H
