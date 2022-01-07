#include <string>
#include <vector>
#include <random>
#include <session.h>
#include <iostream>

using namespace std;

std::string random_string(std::size_t length)
{
    const std::string CHARACTERS = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    std::random_device random_device;
    std::mt19937 generator(random_device());
    std::uniform_int_distribution<> distribution(0, CHARACTERS.size() - 1);

    std::string random_string;

    for (std::size_t i = 0; i < length; ++i)
    {
        random_string += CHARACTERS[distribution(generator)];
    }

    return random_string;
}




Session::Session() {
    session_list.push_back( random_string(64) );
}

Session::~Session() {
    session_list.clear();
}


string Session::addNewSession() {
    string temp_token = random_string(64);
    while (std::find(session_list.begin(), session_list.end(), temp_token) != session_list.end())
    {
        // if element in vector.
        temp_token = random_string(64);
    }
    session_list.push_back( temp_token );

    return temp_token;
}


// problematic function: why is it not working!?
void Session::removeSession(string sessionID) {
    vector<string> temp;
    for(string currentID : session_list) {
        if (currentID != sessionID) {
            temp.push_back(currentID);
        }
    }
    session_list.clear();
    session_list = temp;
}



bool Session::checkSessionExist(string sessionID) {
    for(string currentID : session_list) {
        if (currentID==sessionID) {
           return true;
        }
    }
    return false;
}


void Session::removeAllSession() {
    session_list.clear();
}

string Session::displayAllSessions() {
    string temp;
    for(string currentID : session_list) {
        temp += currentID + '\n';
    }
    return temp;
}
