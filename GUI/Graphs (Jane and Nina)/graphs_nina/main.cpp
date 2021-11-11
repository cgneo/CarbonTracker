#include "mainwindow.h"
#include "iostream"
#include <QApplication>
#include <QProcess>
#include <QDebug>
int main(int argc, char *argv[])
{
    //QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    QProcess process;
    QString scriptFile =  "temp.py";

    QString pythonCommand = "python " + scriptFile + " --arg " ;
    process.start(pythonCommand);
    process.execute(pythonCommand);
    process.waitForFinished(1000);
    QByteArray someData;
            someData = process.readAll();


    qDebug() << QString(someData);
    //return a.exec();
    return 0;
}
