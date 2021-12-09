#ifndef JSON_H
#define JSON_H
#include <string>
#include <experimental/filesystem>

using namespace std;
class Json
{
public:
    Json();
    void createJson_file();
    bool does_file_exist(string input_file);

private:
    static string file;

};

#endif // JSON_H
