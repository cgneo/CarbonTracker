#include "user.h"
#include "date.h"
#include <iostream>
#include <regex>
using namespace std;

int User::days_in_month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

void User::set_userId(){
    int last_Id = 0;
    //int last_Id = lastId();
    this->userId = last_Id + 1;
    //We want to create different unique ID's
}

void User::set_username(string username)
{this->username = username;}

string User::get_username()
{return username;}

void User::set_name(string name)
    {this->name = name;}

void User::set_birthday(int birthday_day, int birthday_month, int birthday_year)
    {this->birthday = new Date(birthday_day, birthday_month, birthday_year);}

Date* User::get_birthday() {
    return birthday;
}

void User::set_country(string country)
    {this->country = country;}

void User::set_email(string email)
    {this->email = email;}

void User::set_footprint(double footprint)
    {this->footprint = footprint;}

void User::set_friends(string friend_id)
    {friends.push_back(friend_id);}

void User::set_seeds(int seeds)
    {this->seeds = seeds;}

void User::set_living_partners(int living_partners)
    {this->living_partners = living_partners;}

void User::set_picture(string image)
    {this->image = image;}

User::~User() {
    username.clear();
    name.clear();
    delete birthday;
    country.clear();
    email.clear();
    delete &footprint;
    friends.clear();
    delete &seeds;
    delete &living_partners;
};

bool User::name_is_valid(){
        // If first character is invalid
        if (!((name[0] >= 'A' && name[0] <= 'Z')))
            throw std::invalid_argument("First character should be a big letter");

        // Traverse the string for the rest of the characters
        for (int i = 1; i < name.length(); i++) {
            if (!((name[i] >= 'a' && name[i] <= 'z') || (name[i] >= 'A' && name[i] <= 'Z') || (name[i] == ' ')))
                throw std::invalid_argument("You entered an invalid character");
            else if (name[i-1] == ' ' && !(name[i] >= 'A' && name[i] <= 'Z')) // if there is a space before a letter, it means that there is another name added, which has to start with capital letter, else it is not a valid name
                throw std::invalid_argument("You entered an invalid character");
        }

        // String is a valid identifier
        return true;
}

bool User::birthday_is_valid(int birthday_day, int birthday_month, int birthday_year){
    if (birthday_year >= 1910 && birthday_year < 2020){
        if (birthday_month >= 0 && birthday_month <= 12){
            if (birthday_day >= 0 && birthday_day <= days_in_month[birthday_month]){
                return true;}
            else{
                throw std::invalid_argument("Invalid days");}
        }
        else{
            throw std::invalid_argument("Invalid month");}
    }
    else{
        throw std::invalid_argument("Invalid year");}
}

bool User::email_is_valid(){
       // define a regular expression
       const regex pattern ("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

       // try to match the string with the regular expression
       return regex_match(email, pattern);
}

bool User::seeds_are_valid(){
    if (seeds < 0) throw std::invalid_argument("Invalid number");
    return true;
}

bool User::living_partners_are_valid(){
    if (living_partners < 0) throw std::invalid_argument("Invalid number");
    return true;
}

bool User::footprint_is_valid(){
    if (footprint < 0) throw std::invalid_argument("Invalid number");
    return true;
}
