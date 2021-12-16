#include "user.h"
#include "date.h"
#include <iostream>
#include <regex>
#include <QString>

using namespace std;

//-----------------------Constructors, and destructor ------------
User::User(QString username, QString name, int birthday, int birthmonth,
           int birthyear, QString email, QString country, int living_partners){
    set_username(username);
    set_birthday(birthday, birthmonth, birthyear);
    set_name(name);
    set_email(email);
    set_country(country);
    set_living_partners(living_partners);
    footprint = 0;
    seeds = 0;
}

User::User(){
}

User::~User() { //Must correct this destructor
    username.clear();
    name.clear();
    country.clear();
    email.clear();
    //friends.clear();
    if (birthday != nullptr){
        delete birthday;
    }
};


//--------------------------Get methods ---------------------

QString User::get_username( )
{return username;}

QString User::get_name(){
    return name;
}

QString User::get_country(){
    return country;
}

QString User::get_email(){
    return email;
}

Date* User::get_birthday(){
    return birthday;
}

int User::get_living_partners(){
    return living_partners;
}

int User::get_seeds(){
    return seeds;
}

double User::get_footprint(){
    return footprint;
}


//-------------------------Set methods----------------------
void User::set_userId(){
    int last_Id = 0;
    //int last_Id = lastId();
    this->userId = last_Id + 1;
    //We want to create different unique ID's
}

void User::set_username(QString username)
{this->username = username;}

void User::set_name(QString name)
    {this->name = name;}

void User::set_birthday(int birthday_day, int birthday_month, int birthday_year)
    {this->birthday = new Date(birthday_day, birthday_month, birthday_year);}

void User::set_country(QString country)
    {this->country = country;}

void User::set_email(QString email)
    {this->email = email;}

void User::set_footprint(double footprint)
    {this->footprint = footprint;}

void User::set_friends(QString friend_id)
    {friends.push_back(friend_id.toStdString());}

void User::set_seeds(int seeds)
    {this->seeds = seeds;}

void User::set_living_partners(int living_partners)
    {this->living_partners = living_partners;}

void User::set_picture(QString image)
    {this->image = image;}



//--------------------------Test methods--------------------
bool User::name_is_valid(){
        // If first character is invalid
        if (!((name[0] >= 'A' && name[0] <= 'Z')))
            throw std::invalid_argument("First character should be a big letter");

        // Traverse the string for the rest of the characters
        for (int i = 1; i < name.length(); i++) {
            if (!((name[i] >= 'a' && name[i] <= 'z') || (name[i] >= 'A' && name[i] <= 'Z') || (name[i] == ' ')))
                throw std::invalid_argument("You entered an invalid character");
        }

        // String is a valid identifier
        return true;
}

bool User::birthday_is_valid(){
    if (birthday->is_valid()) return true;
    else
        throw std::invalid_argument("Invalid year");
}

bool User::email_is_valid(){
       // define a regular expression
       const regex pattern ("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

       // try to match the string with the regular expression
       return regex_match(email.toStdString(), pattern);
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
