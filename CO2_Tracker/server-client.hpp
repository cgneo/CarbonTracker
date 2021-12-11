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

class ParseClass
{/*
    Q_OBJECT*/

public:
    ParseClass ();

//    explicit ParseClass(QObject *parent = nullptr);
    void clearJsonObject(QJsonObject &object); //Clears a JSON file
    void createJsonFile(const QString &fileName);
    void create_empty_file();

    void parseJsonObjectV(QJsonObject &object);
    void parseJsonObjectI(QJsonObject &object);
    void parseJsonObject(QJsonArray::const_iterator iter);
    void parseJsonFile(const QString &fileName);
    void initList();

private:
    static const QString file;
    static const QString path;

signals:

public slots:
};

#endif // SERVERCLIENT_HPP
