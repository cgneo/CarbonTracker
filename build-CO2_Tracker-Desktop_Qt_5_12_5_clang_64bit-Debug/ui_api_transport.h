/********************************************************************************
** Form generated from reading UI file 'api_transport.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_API_TRANSPORT_H
#define UI_API_TRANSPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_api_transport
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *api_transport)
    {
        if (api_transport->objectName().isEmpty())
            api_transport->setObjectName(QString::fromUtf8("api_transport"));
        api_transport->resize(800, 600);
        centralwidget = new QWidget(api_transport);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 90, 251, 131));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, 290, 181, 51));
        api_transport->setCentralWidget(centralwidget);
        menubar = new QMenuBar(api_transport);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        api_transport->setMenuBar(menubar);
        statusbar = new QStatusBar(api_transport);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        api_transport->setStatusBar(statusbar);

        retranslateUi(api_transport);

        QMetaObject::connectSlotsByName(api_transport);
    } // setupUi

    void retranslateUi(QMainWindow *api_transport)
    {
        api_transport->setWindowTitle(QCoreApplication::translate("api_transport", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("api_transport", "Magic", nullptr));
        label->setText(QCoreApplication::translate("api_transport", "CO2 Emissions: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class api_transport: public Ui_api_transport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_API_TRANSPORT_H
