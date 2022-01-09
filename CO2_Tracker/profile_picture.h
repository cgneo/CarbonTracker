#ifndef PROFILE_PICTURE_H
#define PROFILE_PICTURE_H

#include <QMainWindow>
#include <QFileDialog>
QT_BEGIN_NAMESPACE
namespace Ui {class MainWindow;}
QT_END_NAMESPACE

class profile_picture : public QMainWindow
{   Q_OBJECT
public:
    profile_picture(QWidget *parent = nullptr);
    ~profile_picture();

private slots:
    void on_button_image_clicked();

    void on_userlist_itemClicked(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;
};

#endif // PROFILE_PICTURE_H
