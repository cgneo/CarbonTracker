#include "server-client.hpp"

ParseClass::ParseClass(QObject *parent) : QObject(parent)
{}

void ParseClass::clearJsonObject(QJsonObject &object)
{
    QStringList strList = object.keys();
    for(int i = 0; i < strList.size(); ++i)
    {
        object.remove(strList.at(i));
    }
}

void ParseClass::createJsonFile(const QString &fileName)
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
    QJsonDocument jsonDocument; // QJsonDocument class provides methods for reading and writing JSON documents
    jsonDocument.setObject(rootObject);
    QByteArray byteArray = jsonDocument.toJson(QJsonDocument::Indented);
    QFile file(fileName);
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        //if the file cannot pe opened, we show an error message
        qDebug() << QString("fail to open the file: ").arg(__FILE__).arg(__LINE__).arg(__FUNCTION__);
        return;
    }
    QTextStream out(&file);
    out << byteArray;
    file.close();
    qDebug() << byteArray;
}


void ParseClass::parseJsonFile(const QString &fileName)
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
