#include <QGraphicsWidget>
#include "transport_API.cpp"
#include "tests.h"
#include "json_DB.hpp"
#include "object.h"
#include "transport.h"
#include "api_transport.h"
#include "mainwindow.h"
#include "survey.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Json_DB obj;

    Tests t;
    t.test_does_file_exist();
    obj.create_empty_file();
    bool new_user = !t.test_does_file_exist();
    qDebug() << new_user;

    if (new_user){ //If user is new, open profile set_up
        Survey window;
        window.show();
        return a.exec();
    }
    else{ //Else open regular window
        MainWindow window;
        window.show();
        return a.exec();
    }


}
