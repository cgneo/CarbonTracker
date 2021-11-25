#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QtCharts>
#include<QChartView>
#include<QPieSeries>
#include<QPieSlice>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr/*,double* data*/);
    ~MainWindow();
    //QPieSlice::hovered(bool state);

public slots:
    void hoverexplode(QPieSlice slice){
        slice.hovered(slice.state);
        slice.setExploded(state);
        //emit ;
            };
signals:
    void element_hovered(bool state);


private:
    Ui::MainWindow *ui;
};


/*class MyQPieSlice: public QPieSlice
{
public:
    //bool state;
    void hovered(bool state){
        if (value != m_value) {
                m_value = value;
                emit valueChanged(value);
            }
    };
};*/

#endif // MAINWINDOW_H
