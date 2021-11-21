#include "user.hpp"
#include <iostream>
using namespace std;

void User::set_username(string username)
{this->username = username;}

void User::set_name(string name)
{this->name = name;}

void User::set_birthday(int birthday_year, int birthday_month, int birthday_day)
{this->birthday_year = birthday_year;
 this->birthday_month = birthday_month;
 this->birthday_day = birthday_day;}

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

User::~User() {
    username.clear();
    name.clear();
    delete &birthday_year;
    delete &birthday_month;
    delete &birthday_day;
    country.clear();
    email.clear();
    delete &footprint;
    friends.clear();
    delete &seeds;
};
