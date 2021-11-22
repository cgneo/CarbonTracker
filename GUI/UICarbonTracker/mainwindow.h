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

    void on_checkBox_clicked();

    void on_checkBox_stateChanged(int arg1);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

//class Painter : public QPainter
//{
//       Q_OBJECT
//public:
//    Painter(QPaintDevice * device);
//    ~Painter();
//    void drawEllipse(const QRectF & rectangle);
//    void drawImage(const QRectF & target, const QImage & image,
//                   const QRectF & source, Qt::ImageConversionFlags flags = Qt::AutoColor);
//    void drawLine(const QLine & line);
//    void drawPicture(const QPointF & point, const QPicture & picture);

//};
