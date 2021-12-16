#ifndef TESTS_H
#define TESTS_H
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
    void test_does_file_exist();
};

#endif // TESTS_H
