#include "json_DB.hpp"
#include <iostream>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <string>
#include <fstream>
#include <QDesktopServices>
#include <QSaveFile>
#include <QFileInfo>
#include <QDir>
#include <QCoreApplication>
#include "tests.h"
#include "user.h"
#include "food.h"
#include <random>
#include <ctime>


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
    {"Challenge 1", "Don't eat meat today"},
    {"Challenge 2", "Substitute driving by biking or walking"},
    {"Challenge 3", "Minimise food waste at home"},
    {"Challenge 4", "Unplug your devices"},
    {"Challenge 5", "Minimise food waste at home"},
    {"Challenge 6", "Unplug your devices"},

};

std::unordered_map<std::string, std::string> Json_DB::food_tips = {
    {"Food Tip 1", "Reduce dairy consumption"},
    {"Food Tip 2", "Consume local and seasonal products"},
    {"Food Tip 3", "Eat less read meat"},
    {"Food Tip 4", "Avoid food with plastic wraps"},
    {"Food Tip 5", "Cover pots and pans while cooking"},
    {"Food Tip 6", "Use your own bags for groceries"},

};

std::unordered_map<std::string, std::string> Json_DB::transportation_tips = {
    {"Transportation Tip 1", "Avoid driving at peak times"},
    {"Transportation Tip 2", "Sharing a car to go to work"},
    {"Transportation Tip 3", "Prioritise the use of public transport"},
    {"Transportation Tip 4", "Travel by train instead of plane"},
    {"Transportation Tip 5", "Prioritise the use of public transport"},
    {"Transportation Tip 6", "Travel by train instead of plane"},

};

std::unordered_map<std::string, std::string> Json_DB::house_tips = {
    {"House Tip 1", "Unplug your charger when not in use"},
    {"House Tip 2", "Turn off the lights"},
    {"House Tip 3", "Wait until dishwasher is full to use it"},
    {"House Tip 4", "Turn off the lights when you leave a room"},
    {"House Tip 5", "Close the shower tap while soaping"},
    {"House Tip 6", "Taking the stairs instead of the lift"},

};

std::string Json_DB::get_challenge_by_key(std::string s) {
    return daily_challenges.at(s);
}

std::string Json_DB::get_ftip_by_key(std::string s) {
    return food_tips.at(s);
}

std::string Json_DB::get_ttip_by_key(std::string s) {
    return transportation_tips.at(s);
}

std::string Json_DB::get_htip_by_key(std::string s) {
    return house_tips.at(s);
}

std::string Json_DB::random_key(std::unordered_map<std::string, std::string> m){
    auto it = std::begin(m);
    srand((unsigned) time(0));
    int random_index = rand() % m.size();
    std::advance(it, random_index);
    return it->first;
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
                      ,user.get_birthday()->get_year()};
    obj["Birthday"] = date;
    obj["Email"] = user.get_email();
    obj["Country"] = user.get_country();
    obj["Footprint"] = user.get_footprint();
    obj["Seeds"] = user.get_seeds();
    obj["Living partners"] = user.get_living_partners();
    //obj["Profile picture"] = user.get_profile_picture();


//    QJsonArray friends;
//    obj["Friends"] = friends;

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

QJsonDocument *Json_DB::read_JsonFile(){ //Returns an object on the heap. REMEMBER TO DELETE
    QFile file(path+file_name);

    if (!file.open(QIODevice::ReadOnly)) {
            qWarning("Couldn't open save file");
        }

    QByteArray data = file.readAll();

    QJsonDocument *json_doc = new QJsonDocument(QJsonDocument::fromJson(data));
    return json_doc;
}


User *Json_DB::readUser_from_Json(){
    QJsonDocument* current_doc = read_JsonFile(); //Retrieve the current json file
    QJsonObject json_file = current_doc->object(); //Full json object

    QString username = json_file["Username"].toString();
    QString name = json_file["Name"].toString();
    QJsonArray date_json = json_file["Birthday"].toArray();
    int day = date_json.at(0).toInt();
    int month = date_json.at(1).toInt();
    int year = date_json.at(2).toInt();
    QString email = json_file["Email"].toString();
    QString country = json_file["Country"].toString();
    double footprint = json_file["Footprint"].toDouble();
    int seeds = json_file["Seeds"].toInt();
    int partners = json_file["Living partners"].toInt();
    int profile_pic = json_file["Profile picture"].toInt();

    User *u = new User (username, name, day, month, year, email, country, partners, profile_pic);
    get_consumption_from_Json(*u,  *current_doc);
    //Should add base_consumption as well
    return u;
}

void Json_DB::get_consumption_from_Json(User &u, QJsonDocument &current_doc){
    QJsonObject json_file = current_doc.object(); //Full json object

    //Get the consumption array of json objects
    QJsonArray consumption_json = json_file["Consumption"].toArray();

    int size = consumption_json.size();

    Consumption consumption;

    for (int i = size - 1; i >= 0; i--){ //Iterate through the json array backwards to get newer elements in front
        QJsonObject json_object = consumption_json.at(i).toObject();

        //Unpack the date of the object
        QJsonArray date_json = json_object["Date"].toArray();
        int day = date_json.at(0).toInt();
        int month = date_json.at(1).toInt();
        int year = date_json.at(2).toInt();
        qDebug() << day;
        qDebug() << month;
        qDebug() << year;

        Date *date = new Date(day,month, year);

        qDebug() << QString::fromStdString(date->print2());

        //Unpack the other attributes
        double footprint = json_object["Footprint"].toDouble();
        QString type = json_object["Type"].toString();
        QString name = json_object["Name"].toString();
        Object o(date, name, type, footprint);
        consumption.add_object(&o, false);
//        if (type == "Transport"){ //If its a transport object, unpack transport attributes
//            string distance = json_object["Distance"].toString().toStdString();
//            char * d = new char[distance.length() + 1];

//            Transport t(date, name, d); //Create a transport object
//            t.set_footprint(footprint);

//            consumption.add_object(t);//Put object in vector
//        }
//        else if (type == "Food"){ //Unpack food attributes
//            double barcode = json_object["Barcode"].toDouble();
//            double quantity =json_object["Quantity"].toDouble();
//            QString category = json_object["Category"].toString();

//            Food f(date, name, quantity, barcode, category);
//            f.set_footprint(footprint, quantity); //Build food object

//            consumption.push_back(f); //Put object in vector
//        }
        }
    u.set_consumption(consumption);

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
