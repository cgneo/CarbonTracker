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
#include <QtWidgets/QGridLayout>
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
    QGridLayout *gridLayout;
    QTabWidget *tabMain;
    QWidget *tab;
    QGridLayout *gridLayout_12;
    QGridLayout *gridLayout_10;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_11;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_5;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_pic;
    QPushButton *buttonMain;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_7;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_14;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QTabWidget *tabHousing;
    QWidget *tab_11;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_15;
    QVBoxLayout *verticalLayout_11;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_11;
    QRadioButton *radioButton_12;
    QPushButton *buttonNextHousing1;
    QWidget *tab_12;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_16;
    QRadioButton *radio1_3;
    QRadioButton *radio2_3;
    QRadioButton *radio3_3;
    QRadioButton *radio4_3;
    QPushButton *buttonNextHousing2;
    QWidget *tab_13;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_2;
    QSlider *horizontalSlider_3;
    QLabel *label_18;
    QPushButton *buttonNextHousing3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_3;
    QGridLayout *gridLayout_9;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_21;
    QLabel *label_22;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QTabWidget *tabTransport;
    QWidget *tab_14;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_23;
    QVBoxLayout *verticalLayout_12;
    QRadioButton *radioButton_13;
    QRadioButton *radioButton_14;
    QRadioButton *radioButton_15;
    QRadioButton *radioButton_16;
    QPushButton *buttonNextTransport1;
    QWidget *tab_15;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_24;
    QRadioButton *radio1_4;
    QRadioButton *radio2_4;
    QRadioButton *radio3_4;
    QRadioButton *radio4_4;
    QPushButton *buttonNextTransport2;
    QWidget *tab_16;
    QGridLayout *gridLayout_8;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_25;
    QHBoxLayout *horizontalLayout_4;
    QSlider *horizontalSlider_4;
    QLabel *label_26;
    QPushButton *buttonNextTransport3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_pic_2;
    QWidget *tab_4;
    QGridLayout *gridLayout_11;
    QVBoxLayout *verticalLayout_14;
    QSpacerItem *verticalSpacer_10;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_9;
    QVBoxLayout *verticalLayout_13;
    QLabel *label;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *verticalSpacer_12;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(897, 610);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabMain = new QTabWidget(centralwidget);
        tabMain->setObjectName(QString::fromUtf8("tabMain"));
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
        tabMain->setStyleSheet(QString::fromUtf8("\n"
"QTabWidget::pane { /* The tab widget frame */\n"
"    border-top: 2px solid #C2C7CB;\n"
"	\n"
"	background-color:rgba(182, 212, 166, 180);\n"
"}\n"
"QTabBar::tab {\n"
"	background-color: rgb(103, 116, 81);\n"
"    border: 1px solid #C4C4C3;\n"
"    border-bottom-color: #C2C7CB; /* same as the pane color */\n"
"    border-top-left-radius: 4px;\n"
"    border-top-right-radius: 4px;\n"
"    min-width: 20ex;\n"
"    padding: 5px;\n"
"	font: 13pt \"Gill Sans\";\n"
"}\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"	background-color: rgb(201, 199, 203);\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_12 = new QGridLayout(tab);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer_9, 3, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer_8, 2, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setFamily(QString::fromUtf8("Gill Sans"));
        font.setPointSize(32);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_5);

        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Gill Sans"));
        font1.setPointSize(27);
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(88, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_pic = new QLabel(tab);
        label_pic->setObjectName(QString::fromUtf8("label_pic"));
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

        verticalLayout_9->addWidget(label_pic);

        buttonMain = new QPushButton(tab);
        buttonMain->setObjectName(QString::fromUtf8("buttonMain"));

        verticalLayout_9->addWidget(buttonMain);


        horizontalLayout_5->addLayout(verticalLayout_9);

        horizontalSpacer_6 = new QSpacerItem(118, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        verticalLayout_10->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout_10);

        horizontalSpacer_8 = new QSpacerItem(38, 68, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);


        gridLayout_10->addLayout(horizontalLayout_6, 1, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer_7, 0, 0, 1, 1);


        gridLayout_12->addLayout(gridLayout_10, 0, 0, 1, 1);

        tabMain->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        label_14 = new QLabel(tab_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Gill Sans"));
        font2.setPointSize(30);
        label_14->setFont(font2);
        label_14->setTextFormat(Qt::AutoText);

        verticalLayout_2->addWidget(label_14);

        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Gill Sans"));
        font3.setPointSize(16);
        label_13->setFont(font3);
        label_13->setTextFormat(Qt::RichText);

        verticalLayout_2->addWidget(label_13);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        tabHousing = new QTabWidget(tab_2);
        tabHousing->setObjectName(QString::fromUtf8("tabHousing"));
        tab_11 = new QWidget();
        tab_11->setObjectName(QString::fromUtf8("tab_11"));
        gridLayout_2 = new QGridLayout(tab_11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_15 = new QLabel(tab_11);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMinimumSize(QSize(0, 60));
        label_15->setMaximumSize(QSize(16777215, 60));
        label_15->setFont(font3);

        verticalLayout->addWidget(label_15);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        radioButton_9 = new QRadioButton(tab_11);
        radioButton_9->setObjectName(QString::fromUtf8("radioButton_9"));

        verticalLayout_11->addWidget(radioButton_9);

        radioButton_10 = new QRadioButton(tab_11);
        radioButton_10->setObjectName(QString::fromUtf8("radioButton_10"));

        verticalLayout_11->addWidget(radioButton_10);

        radioButton_11 = new QRadioButton(tab_11);
        radioButton_11->setObjectName(QString::fromUtf8("radioButton_11"));

        verticalLayout_11->addWidget(radioButton_11);

        radioButton_12 = new QRadioButton(tab_11);
        radioButton_12->setObjectName(QString::fromUtf8("radioButton_12"));

        verticalLayout_11->addWidget(radioButton_12);


        verticalLayout->addLayout(verticalLayout_11);

        buttonNextHousing1 = new QPushButton(tab_11);
        buttonNextHousing1->setObjectName(QString::fromUtf8("buttonNextHousing1"));

        verticalLayout->addWidget(buttonNextHousing1);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        tabHousing->addTab(tab_11, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName(QString::fromUtf8("tab_12"));
        gridLayout_5 = new QGridLayout(tab_12);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_16 = new QLabel(tab_12);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_4->addWidget(label_16);

        radio1_3 = new QRadioButton(tab_12);
        radio1_3->setObjectName(QString::fromUtf8("radio1_3"));

        verticalLayout_4->addWidget(radio1_3);

        radio2_3 = new QRadioButton(tab_12);
        radio2_3->setObjectName(QString::fromUtf8("radio2_3"));

        verticalLayout_4->addWidget(radio2_3);

        radio3_3 = new QRadioButton(tab_12);
        radio3_3->setObjectName(QString::fromUtf8("radio3_3"));

        verticalLayout_4->addWidget(radio3_3);

        radio4_3 = new QRadioButton(tab_12);
        radio4_3->setObjectName(QString::fromUtf8("radio4_3"));

        verticalLayout_4->addWidget(radio4_3);

        buttonNextHousing2 = new QPushButton(tab_12);
        buttonNextHousing2->setObjectName(QString::fromUtf8("buttonNextHousing2"));

        verticalLayout_4->addWidget(buttonNextHousing2);


        gridLayout_5->addLayout(verticalLayout_4, 0, 0, 1, 1);

        tabHousing->addTab(tab_12, QString());
        tab_13 = new QWidget();
        tab_13->setObjectName(QString::fromUtf8("tab_13"));
        gridLayout_4 = new QGridLayout(tab_13);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_17 = new QLabel(tab_13);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout_3->addWidget(label_17);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSlider_3 = new QSlider(tab_13);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setMaximum(10);
        horizontalSlider_3->setSingleStep(1);
        horizontalSlider_3->setOrientation(Qt::Horizontal);
        horizontalSlider_3->setTickPosition(QSlider::TicksBelow);
        horizontalSlider_3->setTickInterval(1);

        horizontalLayout_2->addWidget(horizontalSlider_3);

        label_18 = new QLabel(tab_13);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMinimumSize(QSize(16, 0));

        horizontalLayout_2->addWidget(label_18);


        verticalLayout_3->addLayout(horizontalLayout_2);

        buttonNextHousing3 = new QPushButton(tab_13);
        buttonNextHousing3->setObjectName(QString::fromUtf8("buttonNextHousing3"));

        verticalLayout_3->addWidget(buttonNextHousing3);


        gridLayout_4->addLayout(verticalLayout_3, 0, 0, 1, 1);

        tabHousing->addTab(tab_13, QString());

        horizontalLayout->addWidget(tabHousing);

        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        gridLayout_3->addLayout(verticalLayout_2, 0, 0, 1, 1);

        tabMain->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_9 = new QGridLayout(tab_3);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        label_21 = new QLabel(tab_3);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font2);
        label_21->setTextFormat(Qt::AutoText);

        verticalLayout_5->addWidget(label_21);

        label_22 = new QLabel(tab_3);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font3);
        label_22->setTextFormat(Qt::RichText);

        verticalLayout_5->addWidget(label_22);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        tabTransport = new QTabWidget(tab_3);
        tabTransport->setObjectName(QString::fromUtf8("tabTransport"));
        tab_14 = new QWidget();
        tab_14->setObjectName(QString::fromUtf8("tab_14"));
        gridLayout_6 = new QGridLayout(tab_14);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_23 = new QLabel(tab_14);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setMinimumSize(QSize(0, 60));
        label_23->setMaximumSize(QSize(16777215, 60));
        label_23->setFont(font3);

        verticalLayout_6->addWidget(label_23);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        radioButton_13 = new QRadioButton(tab_14);
        radioButton_13->setObjectName(QString::fromUtf8("radioButton_13"));
        radioButton_13->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"    border: 2px solid;;\n"
"    border-radius: 6px;\n"
"	border-color: rgb(234, 147, 96);\n"
"	background-color: rgb(234, 147, 96);\n"
"    min-width: 100px;\n"
"	padding: 10px;\n"
"}"));

        verticalLayout_12->addWidget(radioButton_13);

        radioButton_14 = new QRadioButton(tab_14);
        radioButton_14->setObjectName(QString::fromUtf8("radioButton_14"));

        verticalLayout_12->addWidget(radioButton_14);

        radioButton_15 = new QRadioButton(tab_14);
        radioButton_15->setObjectName(QString::fromUtf8("radioButton_15"));

        verticalLayout_12->addWidget(radioButton_15);

        radioButton_16 = new QRadioButton(tab_14);
        radioButton_16->setObjectName(QString::fromUtf8("radioButton_16"));

        verticalLayout_12->addWidget(radioButton_16);


        verticalLayout_6->addLayout(verticalLayout_12);

        buttonNextTransport1 = new QPushButton(tab_14);
        buttonNextTransport1->setObjectName(QString::fromUtf8("buttonNextTransport1"));

        verticalLayout_6->addWidget(buttonNextTransport1);


        gridLayout_6->addLayout(verticalLayout_6, 0, 0, 1, 1);

        tabTransport->addTab(tab_14, QString());
        tab_15 = new QWidget();
        tab_15->setObjectName(QString::fromUtf8("tab_15"));
        gridLayout_7 = new QGridLayout(tab_15);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_24 = new QLabel(tab_15);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        verticalLayout_7->addWidget(label_24);

        radio1_4 = new QRadioButton(tab_15);
        radio1_4->setObjectName(QString::fromUtf8("radio1_4"));

        verticalLayout_7->addWidget(radio1_4);

        radio2_4 = new QRadioButton(tab_15);
        radio2_4->setObjectName(QString::fromUtf8("radio2_4"));

        verticalLayout_7->addWidget(radio2_4);

        radio3_4 = new QRadioButton(tab_15);
        radio3_4->setObjectName(QString::fromUtf8("radio3_4"));

        verticalLayout_7->addWidget(radio3_4);

        radio4_4 = new QRadioButton(tab_15);
        radio4_4->setObjectName(QString::fromUtf8("radio4_4"));

        verticalLayout_7->addWidget(radio4_4);

        buttonNextTransport2 = new QPushButton(tab_15);
        buttonNextTransport2->setObjectName(QString::fromUtf8("buttonNextTransport2"));

        verticalLayout_7->addWidget(buttonNextTransport2);


        gridLayout_7->addLayout(verticalLayout_7, 0, 0, 1, 1);

        tabTransport->addTab(tab_15, QString());
        tab_16 = new QWidget();
        tab_16->setObjectName(QString::fromUtf8("tab_16"));
        gridLayout_8 = new QGridLayout(tab_16);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_25 = new QLabel(tab_16);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        verticalLayout_8->addWidget(label_25);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSlider_4 = new QSlider(tab_16);
        horizontalSlider_4->setObjectName(QString::fromUtf8("horizontalSlider_4"));
        horizontalSlider_4->setMaximum(10);
        horizontalSlider_4->setSingleStep(1);
        horizontalSlider_4->setOrientation(Qt::Horizontal);
        horizontalSlider_4->setTickPosition(QSlider::TicksBelow);
        horizontalSlider_4->setTickInterval(1);

        horizontalLayout_4->addWidget(horizontalSlider_4);

        label_26 = new QLabel(tab_16);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setMinimumSize(QSize(16, 0));

        horizontalLayout_4->addWidget(label_26);


        verticalLayout_8->addLayout(horizontalLayout_4);

        buttonNextTransport3 = new QPushButton(tab_16);
        buttonNextTransport3->setObjectName(QString::fromUtf8("buttonNextTransport3"));

        verticalLayout_8->addWidget(buttonNextTransport3);


        gridLayout_8->addLayout(verticalLayout_8, 0, 0, 1, 1);

        tabTransport->addTab(tab_16, QString());

        horizontalLayout_3->addWidget(tabTransport);

        horizontalSpacer_4 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_5->addLayout(horizontalLayout_3);

        verticalSpacer_5 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_5);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_6);


        gridLayout_9->addLayout(verticalLayout_5, 0, 0, 2, 2);

        label_pic_2 = new QLabel(tab_3);
        label_pic_2->setObjectName(QString::fromUtf8("label_pic_2"));

        gridLayout_9->addWidget(label_pic_2, 1, 1, 1, 1);

        tabMain->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_11 = new QGridLayout(tab_4);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_10);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_9);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        label = new QLabel(tab_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(label);

        pushButton = new QPushButton(tab_4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_13->addWidget(pushButton);


        horizontalLayout_7->addLayout(verticalLayout_13);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_10);


        verticalLayout_14->addLayout(horizontalLayout_7);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_11);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_12);


        gridLayout_11->addLayout(verticalLayout_14, 0, 0, 1, 1);

        tabMain->addTab(tab_4, QString());

        gridLayout->addWidget(tabMain, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabMain->setCurrentIndex(0);
        tabHousing->setCurrentIndex(0);
        tabTransport->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "CARBON TRACKER", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "ARE YOU READY FOR A CHANGE?", nullptr));
        label_pic->setText(QString());
        buttonMain->setText(QApplication::translate("MainWindow", "Compute your carbon footprint", nullptr));
        tabMain->setTabText(tabMain->indexOf(tab), QApplication::translate("MainWindow", "Welcome", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#8962b4;\">Housing</span></p></body></html>", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Housing leaves a footprint. Let's see how sustainable your way of living is.</p></body></html>", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">Do you live alone or do you have flatmates?</span></p></body></html>", nullptr));
        radioButton_9->setText(QApplication::translate("MainWindow", "Alone", nullptr));
        radioButton_10->setText(QApplication::translate("MainWindow", "1-2", nullptr));
        radioButton_11->setText(QApplication::translate("MainWindow", "3-4", nullptr));
        radioButton_12->setText(QApplication::translate("MainWindow", "5+", nullptr));
        buttonNextHousing1->setText(QApplication::translate("MainWindow", "Next", nullptr));
        tabHousing->setTabText(tabHousing->indexOf(tab_11), QApplication::translate("MainWindow", "Question 1", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">How much do you spend a year in furniture?</span></p></body></html>", nullptr));
        radio1_3->setText(QApplication::translate("MainWindow", "I don't buy furniture often", nullptr));
        radio2_3->setText(QApplication::translate("MainWindow", "Less than 200 \342\202\254", nullptr));
        radio3_3->setText(QApplication::translate("MainWindow", "200-1000 \342\202\254", nullptr));
        radio4_3->setText(QApplication::translate("MainWindow", "More than a 1000 \342\202\254", nullptr));
        buttonNextHousing2->setText(QApplication::translate("MainWindow", "Next", nullptr));
        tabHousing->setTabText(tabHousing->indexOf(tab_12), QApplication::translate("MainWindow", "Question 2", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">How much electricity do you consume in average monthly</span></p></body></html>", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "0", nullptr));
        buttonNextHousing3->setText(QApplication::translate("MainWindow", "Next", nullptr));
        tabHousing->setTabText(tabHousing->indexOf(tab_13), QApplication::translate("MainWindow", "Question 3", nullptr));
        tabMain->setTabText(tabMain->indexOf(tab_2), QApplication::translate("MainWindow", "Housing", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#8962b4;\">Transport</span></p></body></html>", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Transportation leaves a footprint. Let's see how sustainable </p><p align=\"center\">the means of transport you use are in your private life.</p></body></html>", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">Do you live alone or do you have flatmates?</span></p></body></html>", nullptr));
        radioButton_13->setText(QApplication::translate("MainWindow", "Alone", nullptr));
        radioButton_14->setText(QApplication::translate("MainWindow", "1-2", nullptr));
        radioButton_15->setText(QApplication::translate("MainWindow", "3-4", nullptr));
        radioButton_16->setText(QApplication::translate("MainWindow", "5+", nullptr));
        buttonNextTransport1->setText(QApplication::translate("MainWindow", "Next", nullptr));
        tabTransport->setTabText(tabTransport->indexOf(tab_14), QApplication::translate("MainWindow", "Question 1", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">How much do you spend a year in furniture?</span></p></body></html>", nullptr));
        radio1_4->setText(QApplication::translate("MainWindow", "I don't buy furniture often", nullptr));
        radio2_4->setText(QApplication::translate("MainWindow", "Less than 200 \342\202\254", nullptr));
        radio3_4->setText(QApplication::translate("MainWindow", "200-1000 \342\202\254", nullptr));
        radio4_4->setText(QApplication::translate("MainWindow", "More than a 1000 \342\202\254", nullptr));
        buttonNextTransport2->setText(QApplication::translate("MainWindow", "Next", nullptr));
        tabTransport->setTabText(tabTransport->indexOf(tab_15), QApplication::translate("MainWindow", "Question 2", nullptr));
        label_25->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">How much electricity do you consume in average monthly</span></p></body></html>", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "0", nullptr));
        buttonNextTransport3->setText(QApplication::translate("MainWindow", "Next", nullptr));
        tabTransport->setTabText(tabTransport->indexOf(tab_16), QApplication::translate("MainWindow", "Question 3", nullptr));
        label_pic_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        tabMain->setTabText(tabMain->indexOf(tab_3), QApplication::translate("MainWindow", "Transport", nullptr));
        label->setText(QApplication::translate("MainWindow", "Get started!", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Submit", nullptr));
        tabMain->setTabText(tabMain->indexOf(tab_4), QApplication::translate("MainWindow", "Confirmation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
