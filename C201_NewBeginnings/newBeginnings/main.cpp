#include "survey.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Survey w;
    w.show();
    return a.exec();
}
