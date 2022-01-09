#ifndef TESTS_H
#define TESTS_H
#include <QString>
#include "json_DB.hpp"
#include "user.h"
#include "transport.h"
#include "receipt.h"

class Tests
{
public:
    Tests();
    bool start_test();

    //-----------------------Class testing--------------------

    //Date
    void test_add_duration();

    //User
    void test_user(User *user);

    //Transport
    void test_transport(Transport *transport);

    //Receipt
    void test_receipt(Receipt *receipt);

    // -----------------Json and data fetching-------------------
    bool test_JsonUser(); //Main function to test the ones below

    bool test_does_file_exist(QString file);
    void test_createJsonUserObject(Json_DB &json, User &user);
    void test_is_path_correct(Json_DB &json);
};

#endif // TESTS_H
