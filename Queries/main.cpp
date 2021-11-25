#include "mainwindow.h"
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QApplication>
#include <QtWidgets>
#include <QtNetwork>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //setup GUI (you could be doing this in the designer)
    QWidget widget;
    QFormLayout layout(&widget);
    QLineEdit lineEditCode;
    QLineEdit lineEditBrand;
    QLineEdit lineEditEco;
    QLineEdit lineEditCategory;
    auto edits = {&lineEditCode, &lineEditBrand, &lineEditEco, &lineEditCategory};
    for(auto edit : edits) edit->setReadOnly(true);
    layout.addRow("Code:", &lineEditCode);
    layout.addRow("Brand:", &lineEditBrand);
    layout.addRow("Eco Score:", &lineEditEco);
    layout.addRow("Category:", &lineEditCategory);
    QPushButton button("Click for magic");
    layout.addRow(&button);

    //send request to uinames API
    QNetworkAccessManager networkManager;
    QObject::connect(&networkManager, &QNetworkAccessManager::finished,
                     [&](QNetworkReply* reply){
        //this lambda is called when the reply is received
        //it can be a slot in your GUI window class
        //check for errors
        if(reply->error() != QNetworkReply::NoError){
            for(auto edit : edits) edit->setText("Error");
            networkManager.clearAccessCache();
        } else {
            //parse the reply JSON and display result in the UI
            QJsonObject jsonObject= QJsonDocument::fromJson(reply->readAll()).object();
            //get code
            QString code = jsonObject["code"].toString();
            //enter product object
            QJsonValue productKey = jsonObject["product"];
            //get brand from product object
            QString brand = productKey["brands"].toString();
            //get eco_score from product object
            QString eco_score = productKey["ecoscore_score"].toVariant().toString();
            //get category from product object
            QString category = productKey["categories_imported"].toString();
            //pass info to the window
            lineEditCode.setText(code);
            lineEditBrand.setText(brand);
            lineEditEco.setText(eco_score);
            lineEditCategory.setText(category);
        }
        button.setEnabled(true);
        reply->deleteLater();
    });
    //url parameters
    QUrlQuery query;
    query.addQueryItem("amount", "1");
    QUrl url("https://world.openfoodfacts.org/api/v0/product/8076809513388.json");
    url.setQuery(query);
    QNetworkRequest networkRequest(url);
    //send GET request when the button is clicked
    QObject::connect(&button, &QPushButton::clicked, [&](){
        networkManager.get(networkRequest);
        button.setEnabled(false);
        for(auto edit : edits) edit->setText("Loading. . .");
    });

    widget.show();
    return a.exec();
}
