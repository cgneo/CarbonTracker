#ifndef USER_H
#define USER_H
#include <iostream>
#include <string>
#include <vector>
#include "date.h"
#include "consumption.h"
#include "base_consumption.h"
#include <QString>

using namespace std;

class User {
private :
  int userId;
  QString username;
  QString name;
  Date *birthday;
  QString country;
  QString email;
  double footprint;
  vector<string> friends;
  int seeds;
  Consumption consumption; //should be a pointer
  Base_Consumption base_consumption; //should be a pointer
  int living_partners;
  QString image;

public:
  User();
  User(QString username, QString name, int birthday, int birthmonth,
       int birthyear, QString email, QString country, int living_partners);
  ~User();

  //Get and set methods
  int get_userId(); //Do we need an user_id?
  QString get_name();
  QString get_username();
  QString get_country();
  QString get_email();
  Date* get_birthday();
  int get_living_partners();
  int get_seeds();
  double get_footprint();


  void set_name(QString name);
  void set_birthday(int birthday_day, int birthday_month, int birthday_year);
  void set_userId();
  void set_username(QString username);
  void set_country(QString country);
  void set_email(QString email);
  void set_footprint(double footprint);
  void set_friends(QString friend_id);
  void set_seeds(int seeds);
  void set_living_partners(int living_partners);
  void set_picture(QString picture);

  bool name_is_valid();
  bool birthday_is_valid();
  bool email_is_valid();
  bool seeds_are_valid();
  bool living_partners_are_valid();
  bool footprint_is_valid();

  //Additional functions to write

  int lastId(); //Get the last user_id stored in the DB







};
#endif // USER_H
