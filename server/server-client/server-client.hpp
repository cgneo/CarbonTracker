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

class ParseClass : public QObject
{
    Q_OBJECT

public:
    explicit ParseClass(QObject *parent = nullptr);
    void clearJsonObject(QJsonObject &object);
    void createJsonFile(const QString &fileName);


    void parseJsonObjectV(QJsonObject &object);
    void parseJsonObjectI(QJsonObject &object);
    void parseJsonObject(QJsonArray::const_iterator iter);
    void parseJsonFile(const QString &fileName);
    void initList();

private:

signals:

public slots:
};

#endif // SERVERCLIENT_HPP
