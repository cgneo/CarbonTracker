#include "ranking.h"


ranking::ranking(QWidget *parent) : QMainWindow(parent)
{

}

void add_friend(){
    // Create a server
    TCPserver* tcp = new TCPserver();
    tcp->startServer();
    if ("@online"){
        if ("has just entered the room"){
            //adding a friend in your list
            friends_list.push_back(Username)
            active_friend_list.push_back(Username)
        }
    }
}

void active_friend(){
    // Create a server
    TCPserver* tcp = new TCPserver();
    tcp->startServer();
    //add a blue dot or animation/indication that this person is online
    //differ the opacity ? 
}

