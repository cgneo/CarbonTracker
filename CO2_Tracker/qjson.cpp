#include <cstdint>
#include <iostream>
#include <memory>
#include <string>
#include <sstream>
#include <curl.h>
#include <food.hpp>
#include <receipt.hpp>
#include <date.hpp>

namespace
{
    std::size_t callback(
            const char* in,
            std::size_t size,
            std::size_t num,
            std::string* out)
    {
        const std::size_t totalBytes(size * num);
        out->append(in, totalBytes);
        return totalBytes;
    }
}

using namespace std;

string replace(std::string& str, std::string& from, int barcode){
    //str = const std::string url("https://world.openfoodfacts.org/api/v0/product/[barcode].json");
    int index;
    stringstream ss;
    ss << barcode;
    string barcode_str = ss.str();
    //int to string
    while((index=str.find(from) != string::npos)){
        str.replace(index, 9, barcode_str);
    }
    return str;
}
