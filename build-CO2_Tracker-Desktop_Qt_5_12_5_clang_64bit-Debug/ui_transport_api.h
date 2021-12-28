/********************************************************************************
** Form generated from reading UI file 'transport_api.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSPORT_API_H
#define UI_TRANSPORT_API_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_api_transport
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *api_transport)
    {
        if (api_transport->objectName().isEmpty())
            api_transport->setObjectName(QString::fromUtf8("api_transport"));
        api_transport->resize(800, 600);
        centralwidget = new QWidget(api_transport);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(100, 90, 346, 226));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        horizontalLayout->addWidget(textEdit);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        api_transport->setCentralWidget(centralwidget);
        menubar = new QMenuBar(api_transport);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
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

#endif // UI_TRANSPORT_API_H
