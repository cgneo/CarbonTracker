#include <QCoreApplication>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QString>

void basics()
{
    QFile file ("test.txt");
    if (!file.open(QIODevice::ReadWrite)){
        qCritical() << "Could not open file";
        qCritical() << file.errorString();
        return;
    }
    qInfo() << "Writing file...";
    file.write(QByteArray("Hello"));
    file.flush(); // pushes the data to the device

    qInfo() << "Reading file...";
    file.seek(0);
    qInfo() << file.readAll();

    file.close();
}

bool writeFile(QString filename)
{
    QFile file (filename);
    if (!file.open(QIODevice::WriteOnly)){
        qCritical() << file.errorString();
        return false;
    }
    QTextStream stream(&file);
    for (int i = 0; i < 5; i++)
    {
        stream << QString::number(i) << " Hello\r\n ";
    }

    file.close();
    return true;
}

void readFile(QString filename)
{
    QFile file (filename);
    if (!file.exists())
    {   //Check if the file exists
        qCritical() << "File not found";
        return;
    }
    if (!file.open(QIODevice::ReadOnly))
    {   //Try to open the file. If we cannot open it, then we get an errorString.
        qCritical() << file.errorString();
        return;
    }
    QTextStream stream(&file);
    //QString data = stream.readAll();

    while (!stream.atEnd()){
        QString line = stream.readLine();
        qInfo() << line;
    }

    file.close();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //basics();
    //writeFile("test.txt");
    //readFile("test.txt");
    return a.exec();
}
