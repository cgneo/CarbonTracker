#include "friends.h"
#include "netclient.h"
#include "netserver.h"


friends::friends(QWidget *parent) : QMainWindow(parent)
{
    // Create a server
    netserver* tcp = new netserver();
    tcp->startServer();
}

void add_friend(){

    if ("@online"){
        if ("has just entered the room"){
            //adding a friend in your list
            //friends_list.push_back(Username)
            //active_friend_list.push_back(Username)
        }
    }
}

void active_friend(){

    //add a blue dot or animation/indication that this person is online
    //differ the opacity ?
}

