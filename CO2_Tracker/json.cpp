#include "json.h"
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <string>
#include <fstream>

using namespace std;

string Json::file = "CarbonTracker_data.json";


Json::Json()
{

}

bool Json::does_file_exist(string input_file){
    ifstream file(input_file);

    if (!file.is_open()){
        throw std::invalid_argument("File not found");
    }
    else{
        return true;
    }
}
