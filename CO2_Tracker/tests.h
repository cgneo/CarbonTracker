#ifndef TESTS_H
#define TESTS_H
#include "json_DB.hpp"


class Tests
{
public:
    Tests();

    bool start_test();

    bool test_JsonUser();
    //-----------------------Class testing--------------------

    //Date
    void test_add_duration();

    // -----------------Json and data fetching-------------------
    void test_does_file_exist(Json_DB* json);
    void test_createJsonUserObject(Json_DB* json);
    void test_writeJsonUser(Json_DB* json);

};

#endif // TESTS_H
