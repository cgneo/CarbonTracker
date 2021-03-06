#include "receipt.h"
#include "date.h"
#include <string>
#include "food.h"
Receipt::Receipt() {

}

Receipt::Receipt(type receipt, Date *start_date, int num_people, int duration) {
    receipt_type = receipt;
    number_of_people = num_people;
    set_duration(duration); //Only valid for food receipts, for transport "duration = 0"
    set_dates(start_date);

    receiptId = 0;//To be assigned
}

Receipt::~Receipt(){
    //Free memory from vector
};//To be constructed


//----------Get methods--------------------------
int Receipt::get_userId(){
    return userId;
}

int Receipt::get_receiptId(){
    return receiptId;
}

double Receipt::get_footprint() {
    return footprint;
}

double Receipt::get_duration() {
    return duration;
}

int Receipt::get_number_of_people() {
    return number_of_people;
}

Date* Receipt::get_dates(){
    return date;
}

//----------Set methods---------------------------
void Receipt::set_footprint(double footprint) {
    if (receipt_type == food){
        for (int i = 0; i < content.size(); i++){
            //footprint += content[i]->get_footprint();
        } //Iterate through content and add footprint of each object
    }
    else{
        //footprint = content[0]->get_footprint(); //footprint is the footprint of the transport object
    }
}

void Receipt::set_duration(int duration) {
    this->duration = duration; //Input by user, number of days

}

void Receipt::set_dates(Date *date1) {
    this->date[0].set_date(date1->get_day(), date1->get_month(), date1->get_year());
    this->date[1] = *(date1->add_duration(duration));
}

void Receipt::set_number_of_people(double number_of_people) {
    this->number_of_people = number_of_people; //Inputby user, number of people
}



//----------Other methods----------------------------

void Receipt::print(){
    Date *dates = get_dates();
    std::cout << "Dates: " << dates[0].print2() << "-" << dates[1].print2() << std::endl;
}

void Receipt::add_to_footprint(int new_footprint){
    this->footprint += new_footprint;
}
int read_receipt_elements(string str){//Takes a string with file directory
    return 0; //Replace with function that reads scan of receipt
              //and outputs array of barcodes and quantities
}//we will need to change int!


void Receipt::add_receipt(string str){//Takes a string with file directory and createsa receipt element
    set_number_of_people(number_of_people); //Input from the user
    set_duration(duration); //Input from the user
    int array = read_receipt_elements(str);
    for(int i = 0; i<array; i++){//change to array.size() //addthe footprint of each item to the overall footprint

    }
}

bool Receipt::duration_is_valid(){
    if (duration < 0) throw std::invalid_argument("Invalid number");
    return true;
}

bool Receipt::number_of_people_is_valid(){
    if (number_of_people < 0) throw std::invalid_argument("Invalid number");
    return true;
}

vector<vector<string>> Receipt::get_receipt_content(){
    return content;
}

void Receipt::set_content(vector<vector<string>> content) {
    this->content=content;
}

void Receipt::receipt_to_consumption(Consumption* c) {
   for (vector<string> product_info: content) {
       QString category = QString::fromStdString(product_info[3]);
       if (product_info[4] == "_") {
           continue;
       }
       else {
           double co2 = atof(product_info[4].c_str());
           Food* product_object = new Food(&date[0], category, stoi(product_info[5]), product_info[0], co2);
           c->add_object(product_object, true);
       }
   }
}
