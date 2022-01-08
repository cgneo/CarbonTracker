//#include "food_api.h"
//#include <string>
//#include <vector>

//food_api::food_api(string id, string quant){
//    QObject::connect(&networkManager,&QNetworkAccessManager::finished,this,&food_api::parse_reply);
//    product_id = id;
//    quantity = quant;
//    product_info = {};
//}

//void food_api::get_reply(){
//    QString qstr_url = QString::fromStdString("https://world.openfoodfacts.org/api/v0/product/" + product_id + ".json");
//    QUrl url(qstr_url);
//    QNetworkRequest networkRequest(url);
//    QEventLoop loop;
//    QNetworkReply* reply = networkManager.get(networkRequest);
//    QObject::connect(reply , SIGNAL(finished()), &loop, SLOT(quit()));
//    loop.exec();
//}

//void food_api::parse_reply(QNetworkReply* reply){
//    if(reply->error() != QNetworkReply::NoError){
//        networkManager.clearAccessCache();
//        string errMsg = "network error for product: " + product_id;
//        product_info = {errMsg};

//    } else {
//        // parse the JSON reply
//        QJsonObject jsonObject = QJsonDocument::fromJson(reply->readAll()).object();
//        // enter product object
//        QJsonObject productKey = jsonObject["product"].toObject();
//        // initialise the elements of product_info
//        string code, brand, eco_score, category;

//        // get code or store error message
//        if (jsonObject.contains("code")){
//            code = jsonObject["code"].toString().toStdString();
//        }
//        else {
//            code = "_";
//        }

//        // get brand or store error message
//        if (productKey.contains("brands")){
//            brand = productKey["brands"].toString().toStdString();
//        }
//        else {
//            brand = "_";
//        }

//        // get eco_score or store error message
//        if (productKey.contains("ecoscore_score")){
//            eco_score = productKey["ecoscore_score"].toVariant().toString().toStdString();
//        }
//        else {
//            eco_score = "_";
//        }

//        // get category or store error message
//        if (productKey.contains("categories_imported")){
//            string full_category = productKey["categories_imported"].toString().toStdString();
//            string delimiter = ",";
//            category = full_category.substr(0, full_category.find(delimiter));
//        }
//        else {
//            category = "_";
//        }

//        //store information in product_info
//        product_info = {code, eco_score, brand, category};

//    }
//}

//vector<string> food_api::get_product_info(){
//    return product_info;
//}

//string food_api::get_id() {
//    return product_id;
//}

//string food_api::get_quantity(){
//    return quantity;
//}
