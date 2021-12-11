#ifndef API_TRANSPORT_H
#define API_TRANSPORT_H

#include <QMainWindow>
#include <string>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QApplication>
#include <QtWidgets>
#include <QtNetwork>
#include <iostream>
#include <QFile>


namespace Ui {
class api_transport;
}

class api_transport : public QMainWindow
{
    Q_OBJECT

public:
    QByteArray get_API();
    char *get_transport_ID(char *input);
    double calculator2(QPushButton *button, char* input,char* distance);
    explicit api_transport(QWidget *parent = nullptr);
    ~api_transport();

private slots:
    void on_pushButton_clicked();

private:
    Ui::api_transport *ui;
};

#endif // API_TRANSPORT_H
