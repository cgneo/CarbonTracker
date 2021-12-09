#include "user.h"
#include <iostream>
using namespace std;

void User::set_userId(){
    int last_Id = 0;
    //int last_Id = lastId();
    this->userId = last_Id + 1;
    //We want to create different unique ID's
}

void User::set_username(string username)
{this->username = username;}

string User::get_username( )
{return username;}

void User::set_name(string name)
    {this->name = name;}

void User::set_birthday(int birthday_day, int birthday_month, int birthday_year)
    {this->birthday = new Date(birthday_day, birthday_month, birthday_year);}

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
