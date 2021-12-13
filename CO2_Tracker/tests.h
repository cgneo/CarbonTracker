#ifndef TESTS_H
#define TESTS_H
#include "json_DB.hpp"
#include "user.h"


class Tests
{
public:
    Tests();

    bool start_test();

    bool test_JsonUser();
    //-----------------------Class testing--------------------

    //Date
    void test_add_duration();

    //User
    void test_user(User *user);

    // -----------------Json and data fetching-------------------
    bool test_does_file_exist();
    void test_createJsonUserObject(Json_DB* json);
    void test_writeJsonUser(Json_DB* json);

};

#endif // TESTS_H
