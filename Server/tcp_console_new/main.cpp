#include <QCoreApplication>

#include <iostream>

#include <netserver.h>
#include <netclient.h>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Create a server
//    netserver* tcp = new netserver();
//    tcp->startServer();

    // Create a client
    netclient* receive = new netclient();
    receive->startClient();

    // Invoke the flush and call it manually.
    std::cout.flush();

    return a.exec();
}
