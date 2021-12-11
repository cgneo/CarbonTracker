#ifndef TESTS_H
#define TESTS_H


class Tests
{
public:
    Tests();

    bool start_test();
    //-----------------------Class testing--------------------

    //Date
    void test_add_duration();

    // -----------------Json and data fetching-------------------
    void test_does_file_exist();

};

#endif // TESTS_H
