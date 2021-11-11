#ifndef SESSION_H
#define SESSION_H
#endif // SESSION_H

#include <string>
using namespace std;



class Session {

public:
    string username;
    string session_list[1];

    Session();
    ~Session();
    string addNewSession();
    string removeSession(string id);
    void removeAllSession(string user);

private:

};

