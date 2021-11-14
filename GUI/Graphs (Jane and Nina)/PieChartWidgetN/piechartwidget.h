#ifndef PIECHARTWIDGET_H
#define PIECHARTWIDGET_H
#include <QWidget>

class PieChartWidget: public QWidget
{
    Q_OBJECT
public:
    PieChartWidget(QWidget *parent = 0);
protected:
    void paintEvent(QPaintEvent *);
};

#endif // PIECHARTWIDGET_H
