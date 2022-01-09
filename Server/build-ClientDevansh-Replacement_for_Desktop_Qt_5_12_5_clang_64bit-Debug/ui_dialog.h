/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEditIP;
    QTextEdit *textEditPort;
    QPushButton *Connect;
    QLabel *label_3;
    QTextEdit *textEdit_3;
    QPushButton *Send;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(400, 300);
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 71, 20));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 80, 81, 20));
        textEditIP = new QTextEdit(Dialog);
        textEditIP->setObjectName(QString::fromUtf8("textEditIP"));
        textEditIP->setGeometry(QRect(100, 30, 241, 31));
        textEditPort = new QTextEdit(Dialog);
        textEditPort->setObjectName(QString::fromUtf8("textEditPort"));
        textEditPort->setGeometry(QRect(100, 80, 241, 31));
        Connect = new QPushButton(Dialog);
        Connect->setObjectName(QString::fromUtf8("Connect"));
        Connect->setGeometry(QRect(260, 130, 89, 25));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 170, 81, 20));
        textEdit_3 = new QTextEdit(Dialog);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(80, 170, 271, 51));
        Send = new QPushButton(Dialog);
        Send->setObjectName(QString::fromUtf8("Send"));
        Send->setGeometry(QRect(260, 230, 89, 25));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "IP Address", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "PORT", nullptr));
        Connect->setText(QCoreApplication::translate("Dialog", "Connect", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Message", nullptr));
        Send->setText(QCoreApplication::translate("Dialog", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
