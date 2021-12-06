/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_pic;
    QWidget *tab_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QTabWidget *tabWidget_2;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QPushButton *Check;
    QWidget *tab_6;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QRadioButton *radio1;
    QRadioButton *radio2;
    QRadioButton *radio3;
    QRadioButton *radio4;
    QPushButton *pushButton;
    QWidget *tab_7;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QSlider *horizontalSlider;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_pic_2;
    QTabWidget *tabWidget_3;
    QWidget *tab_8;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_7;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QPushButton *Check_2;
    QWidget *tab_9;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_10;
    QRadioButton *radio1_2;
    QRadioButton *radio2_2;
    QRadioButton *radio3_2;
    QRadioButton *radio4_2;
    QPushButton *pushButton_4;
    QWidget *tab_10;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_3;
    QSlider *horizontalSlider_2;
    QLabel *label_12;
    QPushButton *pushButton_5;
    QWidget *tab_4;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(865, 679);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 871, 661));
        QPalette palette;
        QBrush brush(QColor(207, 233, 170, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        tabWidget->setPalette(palette);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(270, 410, 235, 32));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(230, 40, 281, 37));
        QFont font;
        font.setFamily(QString::fromUtf8("Gill Sans"));
        font.setPointSize(32);
        label_5->setFont(font);
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(170, 90, 438, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Gill Sans"));
        font1.setPointSize(27);
        label_6->setFont(font1);
        label_pic = new QLabel(tab);
        label_pic->setObjectName(QString::fromUtf8("label_pic"));
        label_pic->setGeometry(QRect(250, 140, 381, 231));
        QPalette palette1;
        QBrush brush1(QColor(32, 32, 32, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush2(QColor(167, 234, 166, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        label_pic->setPalette(palette1);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        layoutWidget = new QWidget(tab_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(4, 5, 791, 521));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        tabWidget_2 = new QTabWidget(layoutWidget);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        verticalLayout_2 = new QVBoxLayout(tab_5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(tab_5);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Gill Sans"));
        font2.setPointSize(16);
        label->setFont(font2);

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton = new QRadioButton(tab_5);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(tab_5);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(tab_5);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(tab_5);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        verticalLayout->addWidget(radioButton_4);


        verticalLayout_2->addLayout(verticalLayout);

        Check = new QPushButton(tab_5);
        Check->setObjectName(QString::fromUtf8("Check"));

        verticalLayout_2->addWidget(Check);

        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        layoutWidget_2 = new QWidget(tab_6);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 0, 481, 181));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_4->addWidget(label_2);

        radio1 = new QRadioButton(layoutWidget_2);
        radio1->setObjectName(QString::fromUtf8("radio1"));

        verticalLayout_4->addWidget(radio1);

        radio2 = new QRadioButton(layoutWidget_2);
        radio2->setObjectName(QString::fromUtf8("radio2"));

        verticalLayout_4->addWidget(radio2);

        radio3 = new QRadioButton(layoutWidget_2);
        radio3->setObjectName(QString::fromUtf8("radio3"));

        verticalLayout_4->addWidget(radio3);

        radio4 = new QRadioButton(layoutWidget_2);
        radio4->setObjectName(QString::fromUtf8("radio4"));

        verticalLayout_4->addWidget(radio4);

        pushButton = new QPushButton(layoutWidget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_4->addWidget(pushButton);

        tabWidget_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        layoutWidget1 = new QWidget(tab_7);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 0, 601, 181));
        verticalLayout_5 = new QVBoxLayout(layoutWidget1);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_5->addWidget(label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSlider = new QSlider(layoutWidget1);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMaximum(10);
        horizontalSlider->setSingleStep(1);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TicksBelow);
        horizontalSlider->setTickInterval(1);

        horizontalLayout_2->addWidget(horizontalSlider);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(16, 0));

        horizontalLayout_2->addWidget(label_4);


        verticalLayout_5->addLayout(horizontalLayout_2);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_5->addWidget(pushButton_2);

        tabWidget_2->addTab(tab_7, QString());

        horizontalLayout->addWidget(tabWidget_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(330, 210, 151, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Gill Sans"));
        font3.setPointSize(30);
        label_7->setFont(font3);
        label_7->setTextFormat(Qt::AutoText);
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(110, 250, 581, 91));
        label_8->setFont(font2);
        label_8->setTextFormat(Qt::RichText);
        label_pic_2 = new QLabel(tab_3);
        label_pic_2->setObjectName(QString::fromUtf8("label_pic_2"));
        label_pic_2->setGeometry(QRect(210, 10, 371, 181));
        tabWidget_3 = new QTabWidget(tab_3);
        tabWidget_3->setObjectName(QString::fromUtf8("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(170, 352, 471, 221));
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        verticalLayout_6 = new QVBoxLayout(tab_8);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_9 = new QLabel(tab_8);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font2);

        verticalLayout_6->addWidget(label_9);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        radioButton_5 = new QRadioButton(tab_8);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        verticalLayout_7->addWidget(radioButton_5);

        radioButton_6 = new QRadioButton(tab_8);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));

        verticalLayout_7->addWidget(radioButton_6);

        radioButton_7 = new QRadioButton(tab_8);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));

        verticalLayout_7->addWidget(radioButton_7);

        radioButton_8 = new QRadioButton(tab_8);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));

        verticalLayout_7->addWidget(radioButton_8);


        verticalLayout_6->addLayout(verticalLayout_7);

        Check_2 = new QPushButton(tab_8);
        Check_2->setObjectName(QString::fromUtf8("Check_2"));

        verticalLayout_6->addWidget(Check_2);

        tabWidget_3->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        layoutWidget_3 = new QWidget(tab_9);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(0, 0, 481, 181));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_8->addWidget(label_10);

        radio1_2 = new QRadioButton(layoutWidget_3);
        radio1_2->setObjectName(QString::fromUtf8("radio1_2"));

        verticalLayout_8->addWidget(radio1_2);

        radio2_2 = new QRadioButton(layoutWidget_3);
        radio2_2->setObjectName(QString::fromUtf8("radio2_2"));

        verticalLayout_8->addWidget(radio2_2);

        radio3_2 = new QRadioButton(layoutWidget_3);
        radio3_2->setObjectName(QString::fromUtf8("radio3_2"));

        verticalLayout_8->addWidget(radio3_2);

        radio4_2 = new QRadioButton(layoutWidget_3);
        radio4_2->setObjectName(QString::fromUtf8("radio4_2"));

        verticalLayout_8->addWidget(radio4_2);

        pushButton_4 = new QPushButton(layoutWidget_3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout_8->addWidget(pushButton_4);

        tabWidget_3->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QString::fromUtf8("tab_10"));
        layoutWidget_4 = new QWidget(tab_10);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(0, 0, 601, 181));
        verticalLayout_9 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_9->addWidget(label_11);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSlider_2 = new QSlider(layoutWidget_4);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setMaximum(10);
        horizontalSlider_2->setSingleStep(1);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        horizontalSlider_2->setTickPosition(QSlider::TicksBelow);
        horizontalSlider_2->setTickInterval(1);

        horizontalLayout_3->addWidget(horizontalSlider_2);

        label_12 = new QLabel(layoutWidget_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(16, 0));

        horizontalLayout_3->addWidget(label_12);


        verticalLayout_9->addLayout(horizontalLayout_3);

        pushButton_5 = new QPushButton(layoutWidget_4);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout_9->addWidget(pushButton_5);

        tabWidget_3->addTab(tab_10, QString());
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Compute your carbon footprint", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "CARBON TRACKER", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "ARE YOU READY FOR A CHANGE?", nullptr));
        label_pic->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Welcome", nullptr));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">Do you live alone or do you have flatmates?</span></p></body></html>", nullptr));
        radioButton->setText(QApplication::translate("MainWindow", "Alone", nullptr));
        radioButton_2->setText(QApplication::translate("MainWindow", "1-2", nullptr));
        radioButton_3->setText(QApplication::translate("MainWindow", "3-4", nullptr));
        radioButton_4->setText(QApplication::translate("MainWindow", "5+", nullptr));
        Check->setText(QApplication::translate("MainWindow", "Next", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("MainWindow", "Question 1", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">How much do you spend a year in furniture?</span></p></body></html>", nullptr));
        radio1->setText(QApplication::translate("MainWindow", "I don't buy furniture often", nullptr));
        radio2->setText(QApplication::translate("MainWindow", "Less than 200 \342\202\254", nullptr));
        radio3->setText(QApplication::translate("MainWindow", "200-1000 \342\202\254", nullptr));
        radio4->setText(QApplication::translate("MainWindow", "More than a 1000 \342\202\254", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Next", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("MainWindow", "Question 2", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "How much electricity do you consume in average monthly (slider with discrete values in 100kWh)", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Next", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("MainWindow", "Question 3", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Housing", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#8962b4;\">Transport</span></p></body></html>", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Transportation leaves a footprint. Let's see how sustainable </p><p align=\"center\">are the means of transport you use in your private life.</p></body></html>", nullptr));
        label_pic_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">Do you live alone or do you have flatmates?</span></p></body></html>", nullptr));
        radioButton_5->setText(QApplication::translate("MainWindow", "Alone", nullptr));
        radioButton_6->setText(QApplication::translate("MainWindow", "1-2", nullptr));
        radioButton_7->setText(QApplication::translate("MainWindow", "3-4", nullptr));
        radioButton_8->setText(QApplication::translate("MainWindow", "5+", nullptr));
        Check_2->setText(QApplication::translate("MainWindow", "Next", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_8), QApplication::translate("MainWindow", "Question 1", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">How much do you spend a year in furniture?</span></p></body></html>", nullptr));
        radio1_2->setText(QApplication::translate("MainWindow", "I don't buy furniture often", nullptr));
        radio2_2->setText(QApplication::translate("MainWindow", "Less than 200 \342\202\254", nullptr));
        radio3_2->setText(QApplication::translate("MainWindow", "200-1000 \342\202\254", nullptr));
        radio4_2->setText(QApplication::translate("MainWindow", "More than a 1000 \342\202\254", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "Next", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_9), QApplication::translate("MainWindow", "Question 2", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "How much electricity do you consume in average monthly (slider with discrete values in 100kWh)", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "Next", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_10), QApplication::translate("MainWindow", "Question 3", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Transport", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Confirmation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
