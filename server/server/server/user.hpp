#ifndef USER_H
#define USER_H
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

  void set_username(string username);

  void set_name(string name);

  void set_birthday(int birthday_year, int birthday_month, int birthday_day);

  void set_country(string country);

  void set_email(string email);

  void set_footprint(double footprint);

  void set_friends(string friend_id);

  void set_seeds(int seeds);

  ~User();

};
#endif // USER_H
