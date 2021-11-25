/********************************************************************************
** Form generated from reading UI file 'firstdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTDIALOG_H
#define UI_FIRSTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FirstDialog
{
public:
    QPlainTextEdit *plainTextEdit;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QCheckBox *Answer1;
    QCheckBox *Answer2;
    QCheckBox *Answer3;
    QCheckBox *Answer4;
    QPushButton *Check;

    void setupUi(QDialog *FirstDialog)
    {
        if (FirstDialog->objectName().isEmpty())
            FirstDialog->setObjectName(QString::fromUtf8("FirstDialog"));
        FirstDialog->resize(400, 300);
        plainTextEdit = new QPlainTextEdit(FirstDialog);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(50, 10, 321, 61));
        widget = new QWidget(FirstDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(110, 100, 198, 150));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        Answer1 = new QCheckBox(widget);
        Answer1->setObjectName(QString::fromUtf8("Answer1"));

        verticalLayout->addWidget(Answer1);

        Answer2 = new QCheckBox(widget);
        Answer2->setObjectName(QString::fromUtf8("Answer2"));

        verticalLayout->addWidget(Answer2);

        Answer3 = new QCheckBox(widget);
        Answer3->setObjectName(QString::fromUtf8("Answer3"));

        verticalLayout->addWidget(Answer3);

        Answer4 = new QCheckBox(widget);
        Answer4->setObjectName(QString::fromUtf8("Answer4"));

        verticalLayout->addWidget(Answer4);

        Check = new QPushButton(widget);
        Check->setObjectName(QString::fromUtf8("Check"));

        verticalLayout->addWidget(Check);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(FirstDialog);

        QMetaObject::connectSlotsByName(FirstDialog);
    } // setupUi

    void retranslateUi(QDialog *FirstDialog)
    {
        FirstDialog->setWindowTitle(QApplication::translate("FirstDialog", "Dialog", nullptr));
        plainTextEdit->setPlainText(QApplication::translate("FirstDialog", "Welcome to Carbon Tracker, the app you get to know you carbon emmisions.\n"
"First we ask you some questions:", nullptr));
        label->setText(QApplication::translate("FirstDialog", "Question 1 (when multiple are possible)", nullptr));
        Answer1->setText(QApplication::translate("FirstDialog", "Answer 1", nullptr));
        Answer2->setText(QApplication::translate("FirstDialog", "Answer 2", nullptr));
        Answer3->setText(QApplication::translate("FirstDialog", "Answer 3", nullptr));
        Answer4->setText(QApplication::translate("FirstDialog", "Answer 4", nullptr));
        Check->setText(QApplication::translate("FirstDialog", "Check", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FirstDialog: public Ui_FirstDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTDIALOG_H
