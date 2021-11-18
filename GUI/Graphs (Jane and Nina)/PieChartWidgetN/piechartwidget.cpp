#include "piechartwidget.h"
#include <QPainter>

PieChartWidget::PieChartWidget(QWidget *parent): QWidget(parent)
{

}

void PieChartWidget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QRectF size = QRectF(10,10, this->width()-10, this->width()-10);
    painter.setBrush(Qt::red);
    painter.drawPie(size, 0, 90*16);
    painter.setBrush(Qt::blue);
    painter.drawPie(size, 90*16, 120*16);
    painter.setBrush(Qt::green);
    painter.drawPie(size, 120*16, 270*16);
    /*painter.setBrush(Qt::red);
    painter.drawPie(size, 0, 90*16);
    painter.setBrush(Qt::blue);
    painter.drawPie(size, 90*16, 120*16);
    painter.setBrush(Qt::green);
    painter.drawPie(size, 120*16, 120*16);
    painter.setBrush(Qt::yellow);
    painter.drawPie(size, 120*16, 250*16);
    painter.setBrush(Qt::magenta);
    painter.drawPie(size, 250*16, 260*16);
    painter.setBrush(Qt::gray);
    painter.drawPie(size, 260*16, 265*16);
    painter.setBrush(Qt::cyan);
    painter.drawPie(size, 265*16, 270*16);
    */
}



double pie_chart_data(double categories, double emissions){
//takes in an array with all the categories, as well as an array with the associated emoissions and
//puts them together to output data that can be inputed into the pie chart function to represent it


}

double* percentage(double* emissions){
    double tot = 0;
    int n = sizeof(emissions)/sizeof(emissions[0]);;
    for(int i = 0; i<n ; i++){
          tot+=emissions[i];
       }
    double proportions[n];
            //emissions/tot;
    for(int i = 0; i<n ; i++){
          proportions[i] = emissions[i]/tot;
       }
    return proportions;
}

double* get_graph_intervals(double* proportions, int size){
    //size is the number of categories, i.e. the length of proportions
    double intervals[size+1];
    intervals[0] = 0;
    for(int i = 0; i<size;i++){
        int k = 360*proportions[i] - intervals[i];
        intervals[i+1] = k;
    }
    return intervals;

}
