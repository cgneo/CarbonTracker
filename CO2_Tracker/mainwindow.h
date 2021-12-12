#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QTextStream>
#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>
#include <QImage>
#include <QMap>

#include "survey.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void insert_challenge(QString key, QString value); //insert a new challenge to challenge_dictionary

private slots:

    void on_Surveybutton_clicked();

    void on_Scanbutton_clicked();

    void on_daily_challenge_1_stateChanged(int arg1);
    void on_daily_challenge_2_stateChanged(int arg1);
    void on_daily_challenge_3_stateChanged(int arg1);
    void on_daily_challenge_4_stateChanged(int arg1);

    void get_seed();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Survey *survey;

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

    QMap<QString,QString> challenge_dictionary;
    const QString key[10];
    const QString value[10];

};
#endif // MAINWINDOW_H




