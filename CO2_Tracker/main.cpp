#include "transport_API.cpp"
#include "tests.h"

//#ifdef Test
//#include "tests.h"
//#endif
#include "json_DB.hpp"
#include "object.h"
#include "transport.h"
#include "transport_api.h"
#include "mainwindow.h"
#include "survey.h"
#include "donut.h"
#include <iostream>
#include <QSsl>
#include <QString>
#include <QGraphicsWidget>
#include <QApplication>
#include <QApplication>
#include <QtCharts>
#include <QChartView>
#include <QBarSet>
#include <QBarSeries>
#include "food.h"
#include "base_consumption.h"
#include "consumption.h"


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
  //  ------------------Try Amine's code--------------------
//    string filepath = "/Users/alex_christlieb/Desktop/Carrefour_receipt.png";
//    vector<vector<string>> receipt_info = get_receipt_info(filepath);

//    // print the content of receipt_info
//    for (vector<string> pair_info : receipt_info)
//    {
//        cout << "ID: " << pair_info[0] << " ECOSCORE: " << pair_info[1] << " BRAND: " << pair_info[2] << " CATEGORY: " << pair_info[3] << endl;
//    }

//-------------------Try reading the json file to get consumption array--------------

//    Json_DB json_obj;
//    User *u = json_obj.readUser_from_Json();

//    int size =  u->get_consumption()->get_total_consumption()->size();

//    for (int i = 0; i < size; i++){//Iterate through vector
//        qDebug() << "Object - " << QString::number(i);
//        Object *o = u->get_consumption()->get_object_i(i);
//        string date = o->get_date()->print2();
//        qDebug() << o->get_type();
//        qDebug() << o->get_name();
//        qDebug() << o->get_footprint();
//        qDebug() << QString::fromStdString(date);

//        if (o->get_type() == "Food"){
//            Food* f = static_cast<Food*>(o);
//            qDebug() << QString::number(f->get_barcode());
//            //qDebug() << QString::fromStdString(f->get_category());
//            qDebug() << QString::number(f->get_quantity());
//        }
//        else if (o->get_type() == "Transport"){
//            Transport* t = static_cast<Transport*>(o);
//            qDebug() << t->get_distance();
//        }
//    }

//-----------------Try Writing into json file------------
//    Json_DB json_obj;
//    QJsonObject doc;

//    QString username = "alex.christlieb";
//    QString name = "Alejandro Christlieb";
//    QString email = "alexchristlieb@gmail.com";
//    QString country = "Mexico";
//    int living_partners = 3;
//    int birthday = 13;
//    int birthmonth = 10;
//    int birthyear = 2001;
//    int profile_pic = 0;

//    User u(username, name, birthday, birthmonth, birthyear, email, country, living_partners, profile_pic);

//    Date* fecha = new Date(01,04,2019);
//    Date* fech2 = new Date(02,03,2020);
//    Date* fech3 = new Date(02,03,2020);
//    Date* fech4 = new Date(02,03,2020);
//    Object t1(fech2, "Eletric car", "transport", 33);
//    Object t2(fecha, "Bus", "transport", 54);
//    Object t3(fecha, "Ferry", "transport", 12);
//    Object t4(fecha, "Metro", "transport", 20);

//    std::string distance = "1000";
//    char *d = new char[distance.length() + 1];
//    Transport trans(fech2, "Nuevisimo", d);
//    trans.set_footprint(69);

//    Object obj(fecha, "Metro", "Transport",10);
//    Object obj2(fech2, "Avion", "Transport",100);

//    obj.set_footprint(10390);
//    obj2.set_footprint(1000000);

//    Base_Consumption b;
//    b.add_object(&obj);
//    b.add_object(&obj2);

//    Consumption c;
//    c.add_base_consumption(b);
//    double thing = c.get_object_i(0)->get_footprint();
//    std::cout << thing;

//    json_obj.writeJsonUser(u);
//    json_obj.addObject_to_file(t1);
//    json_obj.addObject_to_file(t2);
//    json_obj.addObject_to_file(t3);
//    json_obj.addObject_to_file(t4);


//--------------------------Try Catalina's Testing---------
#ifdef Test
    Tests t;
    //t.start_test();
#endif


//--------------------------Run the UI--------------------
//

//    std::unordered_map<string, double>* dic = u->get_consumption()->footprint_by_vehicle;
//    qDebug() << dic->at("Electric car");
//    Consumption c;
//    std::unordered_map<string, double>* dic2 = c.footprint_by_vehicle;
//    qDebug()<<dic2->at("Bus");

    //Consumption *c = u->get_consumption();
    //qDebug() << c->get_object_i(0)->get_name();

    //qDebug() << u->get_name();
    //qDebug() << u->get_consumption()->get_object_i(0)->get_name();


//    Consumption c;


//    vector<string> keys = c.get_keys(c.footprint_by_vehicle);

//    qDebug() << QString::fromStdString(keys.at(0));

    //window.set_user(u);

    //User *u2 = window.get_user();
    //qDebug() << u2->get_name();
    //Object *temp = u2->get_consumption()->get_object_i(0);
    //qDebug() << temp->get_name();
    //qDebug() << temp->get_footprint();


   Tests t1;
   Json_DB json_obj;
   QString file = json_obj.get_path() + json_obj.get_FileName();
   t1.test_does_file_exist(file);
//   User u;
//   //json_obj.writeJsonUser(u);

   bool new_user = !t1.test_does_file_exist(file);

    //This code is actually USED
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



//    Date d;
//    d.get_current_date();
//    std::cout << d.to_String();


}
