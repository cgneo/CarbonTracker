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


class Json_DB
{/*
    Q_OBJECT*/

public:
    //Get and set
    Json_DB ();
    ~Json_DB();
    QString get_path();
    QString get_FileName();
    void set_path();

//    explicit Json_DB(QObject *parent = nullptr);
    void create_empty_file();
    void clearJsonObject(QJsonObject &object); //Clears a JSON file
    QJsonObject createJsonUserObject();
    void writeJsonUser();



    void parseJsonObjectV(QJsonObject &object);
    void parseJsonObjectI(QJsonObject &object);
    void parseJsonObject(QJsonArray::const_iterator iter);
    void parseJsonFile(const QString &fileName);
    void initList();

private:
    static const QString file_name;
    static QString path;

signals:

public slots:
};

#endif // SERVERCLIENT_HPP
