#include "tests.h"
#include "date.h"
#include "random"
#include "json.h"
#include "user.h"
#include <iostream>
#include <filesystem>
#include <QFileInfo>
#include <QCoreApplication>

using namespace std;


Tests::Tests(){};

bool Tests::start_test(){ //Main trigger function
    bool flag;


    flag = test_JsonUser();
    return flag;
}



//-------------------Dates ---------------------------------
void Tests::test_add_duration(){
    try{
        for (int i = 0; i++; i < 10){
            //Finish test
            Date fecha = Date();
            int month = rand()%12;
            int day = rand()%fecha.days_in_month[month];
            fecha.set_date(day, month, 2020);

            Date *new_fecha = fecha.add_duration(rand()%100);
            fecha.is_valid(); // Test if the date is valid
        }
    }
    catch (...){
        throw invalid_argument("Something went wrong...");
    }
    qDebug() << "Test: Add duration - Succes";
}

// User
void test_user(User *user){ // need to change this test
    try{
          user->name_is_valid(); // Test if the name is valid
         // user->birthday_is_vaild(); //this line is wrong, need to att a get_birthday() function
          user->email_is_valid();
          user->seeds_are_valid();
          user->living_partners_are_valid();
    }
    catch (...){
        throw invalid_argument("Something went wrong...");
    }
    cout << "Test: Set username passed" << endl;

}

//---------------------Json------------------------------
bool Tests::test_JsonUser(){//Trigger function for module
    qDebug() << "-----Testing Json DB Module-------";
    Json_DB* p = new Json_DB();

    test_createJsonUserObject(p);
    test_writeJsonUser(p);
   }


bool Tests::test_does_file_exist(){
    QString path = QCoreApplication::applicationDirPath();
    qDebug() << path;

    Json_DB* json = new Json_DB();
    QFileInfo check_file(json->get_path()+json->get_FileName());//Define file to search

    if (check_file.exists() && check_file.isFile()) {
            qDebug() << "test_does_file_exist() - Success";
            return true;
        }
    else {
            qDebug() << "test_does_file_exist() - Fail";
            return false;
        }
}

void Tests::test_createJsonUserObject(Json_DB* json){
    try{
        json->createJsonUserObject();
    }
    catch(...){
        throw invalid_argument("Test: Create Json User Object - Fail");
    }
    qDebug() << "Test: Create Json User Object - Success";
}

void Tests::test_writeJsonUser(Json_DB *json){
    try{
        json->writeJsonUser();
    }
    catch(...){
        throw invalid_argument("test_writeJsonUser - Error writing file");
    }

    //Can test if there is adequate content
    qDebug() << "test_writeJsonUser - Success";
}
