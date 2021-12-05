#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QTextStream>
#include <QTextImageFormat> //to upload the trees/seeds?
#include <QTextFrameFormat>
#include <QSurfaceFormat> //colour, buffer size...
#include <QPainter>

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
    void on_Seedsprogress_valueChanged(int value);

    void on_Surveybutton_clicked();

    void on_Scanbutton_clicked();

    void on_daily_challenge_1_stateChanged(int arg1);

     void on_daily_challenge_2_stateChanged(int arg1);
     void on_daily_challenge_3_stateChanged(int arg1);
     void on_daily_challenge_4_stateChanged(int arg1);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H







