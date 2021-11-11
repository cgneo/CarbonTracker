#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class User {
public:
  string username;
  string name;
  int birthday_year, birthday_month, birthday_day;
  string country;
  string email;
  double footprint;
  vector<string> friends;
  int seeds;

  void set_username(string username)
  {this->username = username;}

  void set_name(string name)
  {this->name = name;}

  void set_birthday(int birthday_year, int birthday_month, int birthday_day)
  {this->birthday_year = birthday_year;
   this->birthday_month = birthday_month;
   this->birthday_day = birthday_day;}

  void set_country(string country)
  {this->country = country;}

  void set_email(string email)
  {this->email = email;}

  void set_footprint(double footprint)
  {this->footprint = footprint;}

  void set_friends(string friend_id)
  {friends.push_back(friend_id);}

  void set_seeds(int seeds)
  {this->seeds = seeds;}


  ~User() {
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

};

#endif // MAINWINDOW_H
