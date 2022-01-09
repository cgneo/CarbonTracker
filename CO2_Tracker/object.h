#ifndef OBJECT_H
#define OBJECT_H

#include <string>
#include "date.h"
#include <QString>
#include <QJsonObject>
#include <QJsonArray>

using namespace std;

class Object{
public:
    Object();
    Object(Date *current_date, QString object_name);
    Object(Date *current_date, QString object_name, QString object_type, double footprint);
    virtual ~Object();

    Date *get_date();
    double get_footprint();
    QString get_type();
    QString get_name();
    void set_date(Date *current_date);
    virtual void set_footprint(double co2_emission);
    void set_name(QString object_name);
    void set_type(QString object_type);

    void object_to_json(QJsonObject &obj); //Gets an empy QJsonObj and encodes an object

protected:
    Date *date;
    double footprint;
    QString type;
    QString name;
};


#endif // OBJECT_H
