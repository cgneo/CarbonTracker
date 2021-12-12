#include "json_DB.hpp"
#include <iostream>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <string>
#include <fstream>
#include <filesystem>
#include <QDir>
#include <QDesktopServices>
#include <QSaveFile>

//---------------------Basic methods ---------------------------
Json_DB::Json_DB(){};
Json_DB::~Json_DB(){};

const QString Json_DB::file_name = "CarbonTracker_data.txt";
const QString Json_DB::path = "/Users/alex_christlieb/Documents/Ecole Polytechnique/Courses/Year 2/CSE201/Project/CarbonTracker/CO2_Tracker/build/";

QString Json_DB::get_path(){
    return path;
}

QString Json_DB::get_FileName(){
    return file_name;
}

//Json_DB::Json_DB(QObject *parent) : QObject(parent)
//{}

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

QJsonObject Json_DB::createJsonUserObject()
{
    QJsonArray jsonArray;
    QJsonObject rootObject;
    QJsonObject branchObject;
    QJsonObject leafObject;
    //leafObject.insert(" ", value);
    branchObject.insert("User_id", leafObject);
    jsonArray.append(branchObject);
    clearJsonObject(leafObject);
    clearJsonObject(branchObject);

    //leafObject.insert(" ", value);
    branchObject.insert("Username", leafObject);
    jsonArray.append(branchObject);
    clearJsonObject(leafObject);
    clearJsonObject(branchObject);

    //leafObject.insert(" ", value);
    branchObject.insert("Name", leafObject);
    jsonArray.append(branchObject);
    clearJsonObject(leafObject);
    clearJsonObject(branchObject);

    //leafObject.insert(" ", value);
    branchObject.insert("Age", leafObject);
    jsonArray.append(branchObject);
    clearJsonObject(leafObject);
    clearJsonObject(branchObject);

    //leafObject.insert(" ", value);
    branchObject.insert("Country", leafObject);
    jsonArray.append(branchObject);
    clearJsonObject(leafObject);
    clearJsonObject(branchObject);

    //leafObject.insert("value", 3);
    branchObject.insert("Email", leafObject);
    jsonArray.append(branchObject);
    clearJsonObject(leafObject);
    clearJsonObject(branchObject);

    //leafObject.insert(" ", value);
    branchObject.insert("Footprint", leafObject);
    jsonArray.append(branchObject);
    clearJsonObject(leafObject);
    clearJsonObject(branchObject);

    //leafObject.insert(" ", value);
    branchObject.insert("Friends", leafObject);
    jsonArray.append(branchObject);
    clearJsonObject(leafObject);
    clearJsonObject(branchObject);

    //leafObject.insert(" ", value);
    branchObject.insert("Seeds", leafObject);
    jsonArray.append(branchObject);
    clearJsonObject(leafObject);
    clearJsonObject(branchObject);

    rootObject.insert("User", jsonArray);

    return rootObject;
}

void Json_DB::writeJsonUser(){
    create_empty_file();

    QJsonObject user = createJsonUserObject();

    QFile file(file_name);

    if (!file.open(QIODevice::WriteOnly)) {
            qWarning("Couldn't open save file");
        }

    file.write(QJsonDocument(user).toJson());
    qDebug() << "Is doc empty?" << QJsonDocument(user);
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
                    qDebug()<<"    "<<leafKey<<":"<<value<<"\r\n"; //displaying the values of each attribute
                }
            }
        }
    }
}
