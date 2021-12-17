#ifndef SERVERCLIENT_HPP
#define SERVERCLIENT_HPP

#include <QObject>
#include <QJsonDocument>
#include <QJsonParseError>
#include <QJsonArray>
#include <QJsonObject>
#include <QFile>
#include <QIODevice>
#include <QStringList>
#include <QDebug>
#include <QList>
#include <string>
#include "user.h"
#include <QMap>
#include <unordered_map>

using namespace std;

class Json_DB
{/*
    Q_OBJECT*/

public:
    //Constructos, destructor
    Json_DB ();
    ~Json_DB();

    //Get and set
    QString get_path();
    QString get_FileName();
    void set_path();

//    explicit Json_DB(QObject *parent = nullptr);
    void create_empty_file();
    void clearJsonObject(QJsonObject &object); //Clears a JSON file
    void createJsonUserObject(QJsonObject &obj, User &user);
    void writeJsonUser(User &user);



    void parseJsonObjectV(QJsonObject &object);
    void parseJsonObjectI(QJsonObject &object);
    void parseJsonObject(QJsonArray::const_iterator iter);
    void parseJsonFile(const QString &fileName);
    void initList();
    static std::string get_challenge_by_key(std::string s);
    static std::string get_ftip_by_key(std::string s);
    static std::string get_ttip_by_key(std::string s);
    static std::string get_htip_by_key(std::string s);
    static std::string random_key(std::unordered_map<std::string, std::string> m);

private:
    static const QString file_name;
    static QString path;
    static std::unordered_map<std::string, std::string> daily_challenges;
    static std::unordered_map<std::string, std::string> food_tips;
    static std::unordered_map<std::string, std::string> transportation_tips;
    static std::unordered_map<std::string, std::string> house_tips;



signals:

public slots:
};

#endif // SERVERCLIENT_HPP
