#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

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
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
