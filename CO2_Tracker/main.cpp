#include "transport_API.cpp"

#ifdef Test
#include "tests.h"
#endif
#include "json_DB.hpp"
#include "object.h"
#include "transport.h"
#include "transport_api.h"
#include "mainwindow.h"
#include "survey.h"
#include "donut.h"
#include <QSsl>
#include <QString>
#include <QGraphicsWidget>
#include <QApplication>
#include <json_DB.hpp>
#include <iostream>

/**
* The main function in main.cpp runs the automatic grader by default.
*
* The value of the Test defines what code is executed in the main function.
* If the value is 1 the program runs the automatic testing of the program.
*
* If the value is 0 (or different from 1) the program runs the
* code in the custom code section below.
*
* You can always run the automatic testing just changing the definition of
* Test to 0.
*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow window;
//    window.show();
//    return a.exec();

    Json_DB json_obj;
    QJsonObject doc;

    QString username = "alex.christlieb";
    QString name = "Alejandro Christlieb";
    QString email = "alexchristlieb@gmail.com";
    QString country = "Mexico";
    int living_partners = 3;
    int birthday = 13;
    int birthmonth = 10;
    int birthyear = 2001;

    User u(username, name, birthday, birthmonth, birthyear, email, country, living_partners);

    //json_obj.createJsonUserObject(doc, u);
//    json_obj.writeJsonUser(u);

#ifdef Test
    Tests t;
//   QString file = obj.get_path() + obj.get_FileName();
//   t.test_does_file_exist(file);

//    Tests t;
    t.start_test();
#endif
//    QString full_path = json_obj.get_path() + json_obj.get_FileName();


    Date* fecha = new Date(01,04,2019);
    Date* fech2 = new Date(02,03,2020);
    Object obj(fecha, "Metro", "Transport");
    Object obj2(fech2, "Avion", "Transport");
    obj.set_footprint(10390);
    obj2.set_footprint(1000000);

    //json_obj.writeJsonUser(u);
    json_obj.addObject_to_file(obj);
    json_obj.addObject_to_file(obj2);


//    Survey window;
//    window.show();
//    return a.exec();

//      Donut d;
//      d.show();
//      return a.exec();
//    Json_DB obj;

//    Tests t;
//    QString file = obj.get_path() + obj.get_FileName();
//    t.test_does_file_exist(file);

//   bool new_user = !t.test_does_file_exist(file);

//   if (new_user){ //If user is new, open profile set_up
//       Survey window;
//       window.show();
//       return a.exec();
//   }
//   else{ //Else open regular window
//       MainWindow window;
//       window.show();
//       return a.exec();
//   }

//    bool new_user = !t.test_does_file_exist(file);

    //This code is actually USED
//    if (new_user){ //If user is new, open profile set_up
//        Survey window;
//        window.show();
//        return a.exec();
//    }
//    else{ //Else open regular window
//        MainWindow window;
//        window.show();
//        return a.exec();
//     }

//     Object *ham = new Object();
//     Object *amg = new Object();
//     Object *bread = new Object();
//     Object *aston = new Object();
//     ham->set_footprint(10);
//     amg->set_type("transport");
//     amg->set_footprint(20);
//     bread->set_footprint(35);
//     aston->set_type("transport");
//     aston->set_footprint(80);

//     Base_Consumption week1;
//     week1.add_object(ham);
//     //week1.add_object(amg);
//     //week1.add_object(bread);
//     //week1.add_object(aston);

//     double cbf = week1.get_footprint();
//     std::cout << cbf << std::endl;
}
