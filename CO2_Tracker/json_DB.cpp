#include "json_DB.hpp"
#include <iostream>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <string>
#include <fstream>
#include <filesystem>
#include <QDesktopServices>
#include <QSaveFile>
#include <QFileInfo>
#include <QDir>
#include <QCoreApplication>
#include "tests.h"
#include "user.h"


//---------------------Basic methods ---------------------------
Json_DB::Json_DB(){
    set_path();
};

Json_DB::~Json_DB(){};

const QString Json_DB::file_name = "CarbonTracker_data.json";
QString Json_DB::path = "";

void Json_DB::set_path(){
    QString exec_path = QCoreApplication::applicationDirPath() ; //Get executable path
    int to_del = exec_path.indexOf("build/CarbonTracker_exe.app"); //Getting index to delete
    path = exec_path.mid(0, to_del);
}

std::unordered_map<std::string, std::string> Json_DB::daily_challenges = {
    {"Challenge 1", "Eat less meat"},
    {"Challenge 2", "Eat the rich"},
    {"Challenge 3", "Don't have babies"},
    {"Challenge 4", "Unplug your devices"},

};

std::string Json_DB::get_challenge_by_key(std::string s) {
    return daily_challenges.at(s);
}

QString Json_DB::get_path(){
    return path;
}

QString Json_DB::get_FileName(){
    return file_name;
}


using namespace std;

void Json_DB::create_empty_file(){//Creates new file in proper path if it doesnt exist
    QDir dir;
    QFile my_file(path + file_name);

    if (!dir.exists(path)){
        qDebug() << "Directory not found";
    }

    else{
    if ( my_file.open(QIODevice::ReadWrite) ) //Create file only if it doesn't exist
        {
            qDebug()<<"file exists";
        }
    }
}

void Json_DB::clearJsonObject(QJsonObject &object)
{
    QStringList strList = object.keys();
    for(int i = 0; i < strList.size(); ++i)
    {
        object.remove(strList.at(i));
    }
}

void Json_DB::createJsonUserObject(QJsonObject &obj, User &user)
{
    obj["Username"] = user.get_username();
    obj["Name"] = user.get_name();
    QJsonArray date = {user.get_birthday()->get_day(), user.get_birthday()->get_month()
                      , user.get_birthday()->get_year()};
    obj["Date"] = date;
    obj["Email"] = user.get_email();
    obj["Country"] = user.get_country();
    obj["Footprint"] = user.get_footprint();
    obj["Seeds"] = user.get_seeds();

    QJsonArray friends;
    obj["Friends"] = friends;

    QJsonArray consumption;
    obj["Consumption"] = consumption;
    obj["Base consumption"] = consumption;
}

void Json_DB::writeJsonUser(User &user){
    create_empty_file(); //Ensure that file exists, or create it otherwise

    QJsonObject user_json;
    createJsonUserObject(user_json, user); //Create json_user

    QFile file(path+file_name);

    if (!file.open(QIODevice::WriteOnly)) {
            qWarning("Couldn't open save file");
        }

    file.write(QJsonDocument(user_json).toJson());
}

QJsonDocument *Json_DB::read_JsonFile(){
    QFile file(path+file_name);

    if (!file.open(QIODevice::ReadOnly)) {
            qWarning("Couldn't open save file");
        }

    QByteArray data = file.readAll();

    QJsonDocument *json_doc = new QJsonDocument(QJsonDocument::fromJson(data));
    return json_doc;
}

void Json_DB::write_in_file(QJsonObject &json_obj){
    QFile file(path+file_name);

    if (!file.open(QIODevice::WriteOnly)) {
            qWarning("Couldn't open save file");
        }
    file.write(QJsonDocument(json_obj).toJson());
}

void Json_DB::addObject_to_file(Object &obj){

    QFile file(path+file_name);

    QJsonDocument* current_doc = read_JsonFile(); //Retrieve the current json file

    QJsonObject json_file = current_doc->object(); //Full json object
    QJsonObject object_json;
    obj.object_to_json(object_json); //Creating an object in json format

    if (json_file.contains("Consumption") && json_file["Consumption"].isArray()){
        QJsonArray consumption = json_file["Consumption"].toArray(); //Store the consumption json array
        consumption.append(object_json);
        json_file["Consumption"] = consumption; //Updating the consumption array
    }
    else{
        qDebug() << "Consumption array is not in json file";
    }

    delete current_doc;
    write_in_file(json_file); //Update file
}

void Json_DB::parseJsonFile(const QString &fileName)
{
    QFile file(fileName);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        //if the file cannot pe opened, we show an error message
        qDebug() << QString("fail to open the file: ").arg(__FILE__).arg(__LINE__).arg(__FUNCTION__);
        return;
    }
    QByteArray array = file.readAll();
    file.close();
    QJsonParseError jsonParseError;
    QJsonDocument jsonDocument(QJsonDocument::fromJson(array, &jsonParseError));
    if(QJsonParseError::NoError != jsonParseError.error)
    {
        qDebug() << QString("JsonParseError: ").arg(jsonParseError.errorString());
        return;
    }
    QJsonObject rootObject = jsonDocument.object();
    QStringList rootKeys=rootObject.keys();
    qDebug()<<rootKeys<<"\r\n";

    for(auto&rootKey:rootKeys){

        qDebug()<<rootKey<<"\r\n"; //User
        QJsonValue rootJsonValue = rootObject.value(rootKey);
        QJsonArray rootJsonArrays = rootJsonValue.toArray();

        for(auto i = rootJsonArrays.constBegin(); i != rootJsonArrays.constEnd(); ++i){
            QJsonObject branchObject = (*i).toObject(); //User_id Belonging to
            QStringList branchKeys=branchObject.keys();
            for(auto&branchKey:branchKeys){
                qDebug()<<"  "<<branchKey<<"\r\n"; //User_id
                QJsonValue leafJsonValue = branchObject.value(branchKey);
                QJsonObject leafObject = leafJsonValue.toObject(); //Belonging to User_id
                QStringList leafKeys=leafObject.keys();
                for(auto&leafKey:leafKeys){
                    double value=leafObject.value(leafKey).toDouble();
                    qDebug()<<"  h  "<<leafKey<<":"<<value<<"\r\n"; //displaying the values of each attribute
                }
            }
        }
    }
}
