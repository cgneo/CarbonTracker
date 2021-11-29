#ifndef SESSION_H
#define SESSION_H
#endif // SESSION_H

#include <string>
#include <vector>
using namespace std;



class Session {

public:
    string username;
    vector<string> session_list;

    Session();
    ~Session();
    string addNewSession();
    void removeSession(string sessionID);
    bool checkSessionExist(string sessionID);
    void removeAllSession();
    string displayAllSessions();
private:

};

