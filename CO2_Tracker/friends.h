#ifndef FRIENDS_H
#define FRIENDS_H
#include <vector>
#include <string>

#include <QMainWindow>

class friends : public QMainWindow
{
    Q_OBJECT
public:
    explicit friends(QWidget *parent = nullptr);
    void add_friend();
    void active_friend();

    
signals:
    
private:
    std::vector<std::string> friends_list = {};
    std::vector<std::string> active_friends_list = {};

};

#endif // FRIENDS_H
