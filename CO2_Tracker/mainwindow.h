
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QTextStream>
#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>
#include <QImage>
#include <QMap>
#include <QMovie>
#include <QLabel>
#include <QGraphicsScene>
#include <QPushButton>
#include "user.h"

#include <netserver.h>
#include <netclient.h>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    int a;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
//    netserver* CB_server;
//    netclient* CB_receiver;


private slots:
    void on_Surveybutton_clicked();

    void on_Scanbutton_clicked();

    void on_daily_challenge_1_stateChanged(int arg1);
    void on_daily_challenge_2_stateChanged(int arg1);
    void on_daily_challenge_3_stateChanged(int arg1);
    void on_daily_challenge_4_stateChanged(int arg1);

    void get_seed();

    void on_buttonTransport_clicked();

    void on_tree_button_clicked();

    void enableButton();


    void on_send_button_clicked();

private:
    Ui::MainWindow *ui;
    User *current_user;

    QPropertyAnimation *animation_1;
    QPropertyAnimation *animation_2;
    QPropertyAnimation *animation_3;
    QPropertyAnimation *animation_4;
    QPropertyAnimation *animation_seed;

    QGraphicsOpacityEffect *opacity_effect_1;
    QGraphicsOpacityEffect *opacity_effect_2;
    QGraphicsOpacityEffect *opacity_effect_3;
    QGraphicsOpacityEffect *opacity_effect_4;
    QGraphicsOpacityEffect *opacity_effect_seed;





};
#endif // MAINWINDOW_H



