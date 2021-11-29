#include <QCoreApplication>
#include <iostream>

#include <session.h>
#include <colormod.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Adding colors
    Color::Modifier terminal_red(Color::FG_RED);
    Color::Modifier terminal_redBG(Color::BG_RED);
    Color::Modifier terminal_cyan(Color::FG_CYAN);
    Color::Modifier terminal_white(Color::FG_WHITE);
    Color::Modifier terminal_default(Color::FG_DEFAULT);
    Color::Modifier terminal_defaultBG(Color::BG_DEFAULT);
    // Testing sessions
    Session* hello = new Session();
    string tempID = hello->addNewSession();
    std::cout << "Hello, the new session ID: " << terminal_cyan << tempID << terminal_default << " is added.\n\n";
    std::cout << "checkSessionExist: " << terminal_cyan << tempID << terminal_default << " is: " << hello->checkSessionExist(tempID) << ", where exists is 1, didn't exist is 0\n\n";
    hello->removeSession(tempID);
    std::cout << "Removing " << terminal_red << tempID << terminal_default << " now.\n";
    std::cout << "checkSessionExist: " << terminal_red << tempID << terminal_default << " is: " << hello->checkSessionExist(tempID) << ", where exists is 1, didn't exist is 0\n\n";
    hello->removeAllSession();

    // Invoke the flush and call it manually.
    std::cout.flush();

    return a.exec();
}
