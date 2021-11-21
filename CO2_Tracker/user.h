#ifndef USER_H
#define USER_H
#include <iostream>
#include <string>
#include <vector>
#include "date.h"
using namespace std;

class User {
private :
  string username;
  string name;
  Date *birthday;
  string country;
  string email;
  double footprint;
  vector<string> friends;
  int seeds;

public:
  void set_username(string username);

  void set_name(string name);

  void set_birthday(int birthday_day, int birthday_month, int birthday_year);

  void set_country(string country);

  void set_email(string email);

  void set_footprint(double footprint);

  void set_friends(string friend_id);

  void set_seeds(int seeds);

  ~User();

};
#endif // USER_H
