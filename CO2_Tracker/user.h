#ifndef USER_H
#define USER_H
#include <iostream>
#include <string>
#include <vector>
#include "date.h"
#include "consumption.h"
#include "base_consumption.h"

using namespace std;

class User {
private :
  int userId;
  string username;
  string name;
  Date *birthday;
  string country;
  string email;
  double footprint;
  vector<string> friends;
  int seeds;
  Consumption consumption;
  Base_Consumption base_consumption;
  int living_partners;
  string image;
  static int days_in_month[13];

public:
  //Get and set methods
  void set_userId();
  int get_userId();

  void set_username(string username);
  string get_username();

  void set_name(string name);

  void set_birthday(int birthday_day, int birthday_month, int birthday_year);
  Date* get_birthday();

  void set_country(string country);

  void set_email(string email);

  void set_footprint(double footprint);

  void set_friends(string friend_id);

  void set_seeds(int seeds);

  void set_living_partners(int living_partners);

  void set_picture(string picture);

  ~User();

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
