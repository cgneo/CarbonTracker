#include "tests.h"
#include "date.h"
#include "random"
#include "json.h"
#include <iostream>

using namespace std;

Tests::Tests()
{
    test_add_duration();
}

void Tests::test_add_duration(){
    try{
        for (int i = 0; i++; i < 10){
            //Finish test
            Date fecha = Date();
            int month = rand()%12;
            int day = rand()%fecha.days_in_month[month];
            fecha.set_date(day, month, 2020);

            Date *new_fecha = fecha.add_duration(rand()%100);
            fecha.is_valid(); //Test if the date is valid
        }
    }
    catch (...){
        throw invalid_argument("Something went wrong...");
    }
    cout << "Test: Add duration passed" << endl;
}



//---------------------Json------------------------------

void Tests::test_does_file_exist(){

}
