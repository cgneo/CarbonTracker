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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabMain;
    QWidget *tab;
    QPushButton *buttonMain;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_pic;
    QWidget *tab_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_14;
    QLabel *label_13;
    QTabWidget *tabHousing;
    QWidget *tab_11;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *label_15;
    QVBoxLayout *verticalLayout_11;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_11;
    QRadioButton *radioButton_12;
    QPushButton *buttonNextHousing1;
    QWidget *tab_12;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_16;
    QRadioButton *radio1_3;
    QRadioButton *radio2_3;
    QRadioButton *radio3_3;
    QRadioButton *radio4_3;
    QPushButton *buttonNextHousing2;
    QWidget *tab_13;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_4;
    QSlider *horizontalSlider_3;
    QLabel *label_18;
    QPushButton *buttonNextHousing3;
    QWidget *tab_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_pic_2;
    QTabWidget *tabTransport;
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
        tabMain = new QTabWidget(centralwidget);
        tabMain->setObjectName(QString::fromUtf8("tabMain"));
        tabMain->setGeometry(QRect(0, 0, 871, 661));
        QPalette palette;
        QBrush brush(QColor(207, 233, 170, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        tabMain->setPalette(palette);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        buttonMain = new QPushButton(tab);
        buttonMain->setObjectName(QString::fromUtf8("buttonMain"));
        buttonMain->setGeometry(QRect(270, 410, 235, 32));
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
        tabMain->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        layoutWidget = new QWidget(tab_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 100, 691, 391));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Gill Sans"));
        font2.setPointSize(30);
        label_14->setFont(font2);
        label_14->setTextFormat(Qt::AutoText);

        verticalLayout_2->addWidget(label_14);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Gill Sans"));
        font3.setPointSize(16);
        label_13->setFont(font3);
        label_13->setTextFormat(Qt::RichText);

        verticalLayout_2->addWidget(label_13);

        tabHousing = new QTabWidget(layoutWidget);
        tabHousing->setObjectName(QString::fromUtf8("tabHousing"));
        tab_11 = new QWidget();
        tab_11->setObjectName(QString::fromUtf8("tab_11"));
        layoutWidget1 = new QWidget(tab_11);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(9, 9, 469, 166));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget1);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMinimumSize(QSize(0, 30));
        label_15->setFont(font3);

        verticalLayout->addWidget(label_15);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        radioButton_9 = new QRadioButton(layoutWidget1);
        radioButton_9->setObjectName(QString::fromUtf8("radioButton_9"));

        verticalLayout_11->addWidget(radioButton_9);

        radioButton_10 = new QRadioButton(layoutWidget1);
        radioButton_10->setObjectName(QString::fromUtf8("radioButton_10"));

        verticalLayout_11->addWidget(radioButton_10);

        radioButton_11 = new QRadioButton(layoutWidget1);
        radioButton_11->setObjectName(QString::fromUtf8("radioButton_11"));

        verticalLayout_11->addWidget(radioButton_11);

        radioButton_12 = new QRadioButton(layoutWidget1);
        radioButton_12->setObjectName(QString::fromUtf8("radioButton_12"));

        verticalLayout_11->addWidget(radioButton_12);


        verticalLayout->addLayout(verticalLayout_11);

        buttonNextHousing1 = new QPushButton(layoutWidget1);
        buttonNextHousing1->setObjectName(QString::fromUtf8("buttonNextHousing1"));

        verticalLayout->addWidget(buttonNextHousing1);

        tabHousing->addTab(tab_11, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName(QString::fromUtf8("tab_12"));
        layoutWidget_5 = new QWidget(tab_12);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(0, 0, 681, 191));
        verticalLayout_12 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget_5);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_12->addWidget(label_16);

        radio1_3 = new QRadioButton(layoutWidget_5);
        radio1_3->setObjectName(QString::fromUtf8("radio1_3"));

        verticalLayout_12->addWidget(radio1_3);

        radio2_3 = new QRadioButton(layoutWidget_5);
        radio2_3->setObjectName(QString::fromUtf8("radio2_3"));

        verticalLayout_12->addWidget(radio2_3);

        radio3_3 = new QRadioButton(layoutWidget_5);
        radio3_3->setObjectName(QString::fromUtf8("radio3_3"));

        verticalLayout_12->addWidget(radio3_3);

        radio4_3 = new QRadioButton(layoutWidget_5);
        radio4_3->setObjectName(QString::fromUtf8("radio4_3"));

        verticalLayout_12->addWidget(radio4_3);

        buttonNextHousing2 = new QPushButton(layoutWidget_5);
        buttonNextHousing2->setObjectName(QString::fromUtf8("buttonNextHousing2"));

        verticalLayout_12->addWidget(buttonNextHousing2);

        tabHousing->addTab(tab_12, QString());
        tab_13 = new QWidget();
        tab_13->setObjectName(QString::fromUtf8("tab_13"));
        layoutWidget_6 = new QWidget(tab_13);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(0, 0, 601, 181));
        verticalLayout_13 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(layoutWidget_6);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout_13->addWidget(label_17);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSlider_3 = new QSlider(layoutWidget_6);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setMaximum(10);
        horizontalSlider_3->setSingleStep(1);
        horizontalSlider_3->setOrientation(Qt::Horizontal);
        horizontalSlider_3->setTickPosition(QSlider::TicksBelow);
        horizontalSlider_3->setTickInterval(1);

        horizontalLayout_4->addWidget(horizontalSlider_3);

        label_18 = new QLabel(layoutWidget_6);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMinimumSize(QSize(16, 0));

        horizontalLayout_4->addWidget(label_18);


        verticalLayout_13->addLayout(horizontalLayout_4);

        buttonNextHousing3 = new QPushButton(layoutWidget_6);
        buttonNextHousing3->setObjectName(QString::fromUtf8("buttonNextHousing3"));

        verticalLayout_13->addWidget(buttonNextHousing3);

        tabHousing->addTab(tab_13, QString());

        verticalLayout_2->addWidget(tabHousing);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 1);
        verticalLayout_2->setStretch(2, 3);
        tabMain->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(330, 210, 151, 51));
        label_7->setFont(font2);
        label_7->setTextFormat(Qt::AutoText);
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(110, 250, 581, 91));
        label_8->setFont(font3);
        label_8->setTextFormat(Qt::RichText);
        label_pic_2 = new QLabel(tab_3);
        label_pic_2->setObjectName(QString::fromUtf8("label_pic_2"));
        label_pic_2->setGeometry(QRect(210, 10, 371, 181));
        tabTransport = new QTabWidget(tab_3);
        tabTransport->setObjectName(QString::fromUtf8("tabTransport"));
        tabTransport->setGeometry(QRect(170, 352, 471, 221));
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        verticalLayout_6 = new QVBoxLayout(tab_8);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_9 = new QLabel(tab_8);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font3);

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

        tabTransport->addTab(tab_8, QString());
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

        tabTransport->addTab(tab_9, QString());
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

        tabTransport->addTab(tab_10, QString());
        tabMain->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabMain->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabMain->setCurrentIndex(0);
        tabHousing->setCurrentIndex(1);
        tabTransport->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        buttonMain->setText(QApplication::translate("MainWindow", "Compute your carbon footprint", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "CARBON TRACKER", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "ARE YOU READY FOR A CHANGE?", nullptr));
        label_pic->setText(QString());
        tabMain->setTabText(tabMain->indexOf(tab), QApplication::translate("MainWindow", "Welcome", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#8962b4;\">Housing</span></p></body></html>", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Housing leaves a footprint. Let's see how sustainable your way of living is.</p></body></html>", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">Do you live alone or do you have flatmates?</span></p></body></html>", nullptr));
        radioButton_9->setText(QApplication::translate("MainWindow", "Alone", nullptr));
        radioButton_10->setText(QApplication::translate("MainWindow", "1-2", nullptr));
        radioButton_11->setText(QApplication::translate("MainWindow", "3-4", nullptr));
        radioButton_12->setText(QApplication::translate("MainWindow", "5+", nullptr));
        buttonNextHousing1->setText(QApplication::translate("MainWindow", "Next", nullptr));
        tabHousing->setTabText(tabHousing->indexOf(tab_11), QApplication::translate("MainWindow", "Question 1", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">How much do you spend a year in furniture?</span></p></body></html>", nullptr));
        radio1_3->setText(QApplication::translate("MainWindow", "I don't buy furniture often", nullptr));
        radio2_3->setText(QApplication::translate("MainWindow", "Less than 200 \342\202\254", nullptr));
        radio3_3->setText(QApplication::translate("MainWindow", "200-1000 \342\202\254", nullptr));
        radio4_3->setText(QApplication::translate("MainWindow", "More than a 1000 \342\202\254", nullptr));
        buttonNextHousing2->setText(QApplication::translate("MainWindow", "Next", nullptr));
        tabHousing->setTabText(tabHousing->indexOf(tab_12), QApplication::translate("MainWindow", "Question 2", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "How much electricity do you consume in average monthly (slider with discrete values in 100kWh)", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "0", nullptr));
        buttonNextHousing3->setText(QApplication::translate("MainWindow", "Next", nullptr));
        tabHousing->setTabText(tabHousing->indexOf(tab_13), QApplication::translate("MainWindow", "Question 3", nullptr));
        tabMain->setTabText(tabMain->indexOf(tab_2), QApplication::translate("MainWindow", "Housing", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#8962b4;\">Transport</span></p></body></html>", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Transportation leaves a footprint. Let's see how sustainable </p><p align=\"center\">the means of transport you use are in your private life.</p></body></html>", nullptr));
        label_pic_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">Do you live alone or do you have flatmates?</span></p></body></html>", nullptr));
        radioButton_5->setText(QApplication::translate("MainWindow", "Alone", nullptr));
        radioButton_6->setText(QApplication::translate("MainWindow", "1-2", nullptr));
        radioButton_7->setText(QApplication::translate("MainWindow", "3-4", nullptr));
        radioButton_8->setText(QApplication::translate("MainWindow", "5+", nullptr));
        Check_2->setText(QApplication::translate("MainWindow", "Next", nullptr));
        tabTransport->setTabText(tabTransport->indexOf(tab_8), QApplication::translate("MainWindow", "Question 1", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">How much do you spend a year in furniture?</span></p></body></html>", nullptr));
        radio1_2->setText(QApplication::translate("MainWindow", "I don't buy furniture often", nullptr));
        radio2_2->setText(QApplication::translate("MainWindow", "Less than 200 \342\202\254", nullptr));
        radio3_2->setText(QApplication::translate("MainWindow", "200-1000 \342\202\254", nullptr));
        radio4_2->setText(QApplication::translate("MainWindow", "More than a 1000 \342\202\254", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "Next", nullptr));
        tabTransport->setTabText(tabTransport->indexOf(tab_9), QApplication::translate("MainWindow", "Question 2", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "How much electricity do you consume in average monthly (slider with discrete values in 100kWh)", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "Next", nullptr));
        tabTransport->setTabText(tabTransport->indexOf(tab_10), QApplication::translate("MainWindow", "Question 3", nullptr));
        tabMain->setTabText(tabMain->indexOf(tab_3), QApplication::translate("MainWindow", "Transport", nullptr));
        tabMain->setTabText(tabMain->indexOf(tab_4), QApplication::translate("MainWindow", "Confirmation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
