/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout;
    QProgressBar *SeedsprogressBar;
    QLabel *seed;
    QPushButton *Scanbutton;
    QPushButton *Surveybutton;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_7;
    QFrame *gridFrame;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QFrame *verticalFrame_3;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *textBrowser_4;
    QCheckBox *daily_challenge_1;
    QCheckBox *daily_challenge_2;
    QCheckBox *daily_challenge_3;
    QCheckBox *daily_challenge_4;
    QSpacerItem *horizontalSpacer;
    QFrame *verticalFrame_2;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *textBrowser_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_4;
    QSpacerItem *horizontalSpacer_3;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_12;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_10;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_27;
    QLabel *label_28;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_2;
    QComboBox *vehicleTransport;
    QVBoxLayout *verticalLayout_9;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpinBox *distanceTransport;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *buttonTransport;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLabel *outputTransport;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QWidget *tab_21;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout1;
    QTextEdit *textEdit_2;
    QLabel *food_label;
    QTextEdit *textEdit_3;
    QFrame *verticalFrame1;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *textEdit;
    QCheckBox *food_tip_1;
    QCheckBox *food_tip_2;
    QCheckBox *food_tip_3;
    QVBoxLayout *verticalLayout_21;
    QTextEdit *textEdit_4;
    QLabel *transport_label;
    QTextEdit *textEdit_5;
    QFrame *verticalFrame2;
    QVBoxLayout *verticalLayout_5;
    QTextEdit *textEdit_6;
    QCheckBox *transportation_tip_1;
    QCheckBox *transportation_tip_2;
    QCheckBox *transportation_tip_3;
    QVBoxLayout *verticalLayout_31;
    QTextEdit *textEdit_7;
    QLabel *home_label;
    QTextEdit *textEdit_8;
    QFrame *verticalFrame3;
    QVBoxLayout *verticalLayout_6;
    QTextEdit *textEdit_9;
    QCheckBox *house_tip_1;
    QCheckBox *house_tip_2;
    QCheckBox *house_tip_3;
    QWidget *tab_4;
    QComboBox *comboBox;
    QLabel *tree;
    QPushButton *tree_button;
    QListView *listView;
    QPushButton *select_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(950, 686);
        QPalette palette;
        QBrush brush(QColor(232, 233, 237, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush1(QColor(147, 188, 130, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        QBrush brush2(QColor(70, 70, 70, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        MainWindow->setPalette(palette);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        QPalette palette1;
        QBrush brush3(QColor(233, 208, 160, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        tabWidget->setPalette(palette1);
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane { /* The tab widget frame */\n"
"    border-top: 2px solid #C2C7CB;\n"
"	\n"
"	\n"
"	background-color: rgb(215, 217, 217);\n"
"}\n"
"\n"
"\n"
"QTabBar::tab {\n"
"    \n"
"	background-color: rgb(103, 116, 81);\n"
"    border: 1px solid #C4C4C3;\n"
"    border-bottom-color: #C2C7CB; /* same as the pane color */\n"
"    border-top-left-radius: 4px;\n"
"    border-top-right-radius: 4px;\n"
"    min-width: 20ex;\n"
"    padding: 5px;\n"
"	font: 13pt \"Gill Sans\";\n"
"}\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"    \n"
"	background-color: rgb(201, 199, 203);\n"
"}"));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(1000, 1000));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        QPalette palette2;
        QBrush brush4(QColor(0, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush3);
        QBrush brush5(QColor(255, 255, 255, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush5);
        QBrush brush6(QColor(244, 231, 207, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        QBrush brush7(QColor(117, 104, 80, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush7);
        QBrush brush8(QColor(156, 139, 107, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush5);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush4);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        QBrush brush9(QColor(255, 255, 220, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush4);
        QBrush brush10(QColor(0, 0, 0, 128));
        brush10.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        tab->setPalette(palette2);
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 891, 541));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalFrame = new QFrame(layoutWidget);
        verticalFrame->setObjectName(QString::fromUtf8("verticalFrame"));
        verticalFrame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    border-radius: 4px;\n"
"    padding: 2px;\n"
"	\n"
"	background-color: rgba(236, 234, 238,100);\n"
"}"));
        verticalLayout = new QVBoxLayout(verticalFrame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        SeedsprogressBar = new QProgressBar(verticalFrame);
        SeedsprogressBar->setObjectName(QString::fromUtf8("SeedsprogressBar"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Gill Sans")});
        SeedsprogressBar->setFont(font);
        SeedsprogressBar->setStyleSheet(QString::fromUtf8("QProgressBar{\n"
"	\n"
"	background-color: rgb(231, 229, 232);\n"
"	border-style: solid; \n"
"	border-radius: 10px; \n"
"	text-align: center\n"
"	\n"
"\n"
"}	\n"
"\n"
"QProgressBar::chunk{\n"
"	border-radius: 8px; \n"
"	\n"
"	background-color: rgb(234, 147, 96);\n"
"}"));
        SeedsprogressBar->setValue(0);

        verticalLayout->addWidget(SeedsprogressBar);

        seed = new QLabel(verticalFrame);
        seed->setObjectName(QString::fromUtf8("seed"));
        seed->setMaximumSize(QSize(16777215, 16777215));
        seed->setPixmap(QPixmap(QString::fromUtf8("../2021-12-09 11.11.21.jpg")));

        verticalLayout->addWidget(seed);

        Scanbutton = new QPushButton(verticalFrame);
        Scanbutton->setObjectName(QString::fromUtf8("Scanbutton"));
        QPalette palette3;
        QBrush brush11(QColor(234, 147, 96, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        Scanbutton->setPalette(palette3);
        Scanbutton->setFont(font);
        Scanbutton->setCursor(QCursor(Qt::PointingHandCursor));
        Scanbutton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-image: url(:/i18n/UICarbonTracker_en_150.qm);\n"
"    border: 2px solid;;\n"
"    border-radius: 6px;\n"
"	border-color: rgb(234, 147, 96);\n"
"	background-color: rgb(234, 147, 96);\n"
"    min-width: 100px;\n"
"	padding: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; \n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; \n"
"}"));

        verticalLayout->addWidget(Scanbutton);

        Surveybutton = new QPushButton(verticalFrame);
        Surveybutton->setObjectName(QString::fromUtf8("Surveybutton"));
        Surveybutton->setFont(font);
        Surveybutton->setCursor(QCursor(Qt::PointingHandCursor));
        Surveybutton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-image: url(:/i18n/UICarbonTracker_en_150.qm);\n"
"    border: 2px solid;;\n"
"    border-radius: 6px;\n"
"	border-color: rgba(162, 155, 255, 204);\n"
"	background-color: rgba(162, 155, 255, 204);\n"
"    min-width: 100px;\n"
"	padding: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; \n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; \n"
"}"));

        verticalLayout->addWidget(Surveybutton);


        horizontalLayout_5->addWidget(verticalFrame);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        gridFrame = new QFrame(layoutWidget);
        gridFrame->setObjectName(QString::fromUtf8("gridFrame"));
        gridFrame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"   \n"
"    border-radius: 4px;\n"
"    padding: 2px;\n"
"	background-color: rgba(236, 234, 238,100);\n"
"}"));
        gridLayout = new QGridLayout(gridFrame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));

        verticalLayout_7->addWidget(gridFrame);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_7->addItem(verticalSpacer_3);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalFrame_3 = new QFrame(layoutWidget);
        verticalFrame_3->setObjectName(QString::fromUtf8("verticalFrame_3"));
        verticalFrame_3->setStyleSheet(QString::fromUtf8("QFrame {\n"
"   \n"
"    border-radius: 4px;\n"
"    padding: 2px;\n"
"	background-color: rgba(236, 234, 238,100);\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(verticalFrame_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(10, 10, 10, 10);
        textBrowser_4 = new QTextBrowser(verticalFrame_3);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setMaximumSize(QSize(150, 35));
        QPalette palette4;
        QBrush brush12(QColor(136, 159, 124, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        textBrowser_4->setPalette(palette4);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Gill Sans")});
        font1.setBold(true);
        font1.setItalic(true);
        textBrowser_4->setFont(font1);
        textBrowser_4->setStyleSheet(QString::fromUtf8("QTextBrowser{\n"
"\n"
"	border: 2px solid rgb(37, 39, 48);\n"
"	border-radius: 6px;\n"
"	border-color: rgb(136, 159, 124);\n"
"	background-color: rgb(136, 159, 124);\n"
"\n"
"}"));

        verticalLayout_3->addWidget(textBrowser_4, 0, Qt::AlignHCenter);

        daily_challenge_1 = new QCheckBox(verticalFrame_3);
        daily_challenge_1->setObjectName(QString::fromUtf8("daily_challenge_1"));
        daily_challenge_1->setFont(font);

        verticalLayout_3->addWidget(daily_challenge_1);

        daily_challenge_2 = new QCheckBox(verticalFrame_3);
        daily_challenge_2->setObjectName(QString::fromUtf8("daily_challenge_2"));
        daily_challenge_2->setFont(font);

        verticalLayout_3->addWidget(daily_challenge_2);

        daily_challenge_3 = new QCheckBox(verticalFrame_3);
        daily_challenge_3->setObjectName(QString::fromUtf8("daily_challenge_3"));
        daily_challenge_3->setFont(font);

        verticalLayout_3->addWidget(daily_challenge_3);

        daily_challenge_4 = new QCheckBox(verticalFrame_3);
        daily_challenge_4->setObjectName(QString::fromUtf8("daily_challenge_4"));
        daily_challenge_4->setFont(font);

        verticalLayout_3->addWidget(daily_challenge_4);


        horizontalLayout_3->addWidget(verticalFrame_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        verticalFrame_2 = new QFrame(layoutWidget);
        verticalFrame_2->setObjectName(QString::fromUtf8("verticalFrame_2"));
        verticalFrame_2->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background-color: rgba(236, 234, 238,100);\n"
"\n"
"    border-radius: 4px;\n"
"    padding: 2px;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(verticalFrame_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(10, 10, 10, 10);
        textBrowser_5 = new QTextBrowser(verticalFrame_2);
        textBrowser_5->setObjectName(QString::fromUtf8("textBrowser_5"));
        textBrowser_5->setMaximumSize(QSize(150, 35));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Gill Sans")});
        font2.setPointSize(13);
        font2.setBold(false);
        font2.setItalic(false);
        textBrowser_5->setFont(font2);
        textBrowser_5->setStyleSheet(QString::fromUtf8("QTextBrowser{\n"
"\n"
"	border: 2px solid rgb(37, 39, 48);\n"
"	border-radius: 6px;\n"
"	border-color: rgb(136, 159, 124);\n"
"	background-color: rgb(136, 159, 124);\n"
"	font: 13pt \"Gill Sans\";\n"
"}"));

        verticalLayout_2->addWidget(textBrowser_5);

        checkBox_6 = new QCheckBox(verticalFrame_2);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setFont(font);

        verticalLayout_2->addWidget(checkBox_6);

        checkBox_7 = new QCheckBox(verticalFrame_2);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));
        checkBox_7->setFont(font);

        verticalLayout_2->addWidget(checkBox_7);

        checkBox_5 = new QCheckBox(verticalFrame_2);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setFont(font);

        verticalLayout_2->addWidget(checkBox_5);

        checkBox_4 = new QCheckBox(verticalFrame_2);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setFont(font);

        verticalLayout_2->addWidget(checkBox_4);


        horizontalLayout_3->addWidget(verticalFrame_2);


        verticalLayout_7->addLayout(horizontalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout_7);


        horizontalLayout_6->addLayout(horizontalLayout_5);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_10);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_27 = new QLabel(tab_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Gill Sans")});
        font3.setPointSize(30);
        label_27->setFont(font3);
        label_27->setTextFormat(Qt::AutoText);

        verticalLayout_11->addWidget(label_27);

        label_28 = new QLabel(tab_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Gill Sans")});
        font4.setPointSize(16);
        label_28->setFont(font4);
        label_28->setTextFormat(Qt::RichText);

        verticalLayout_11->addWidget(label_28);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_7);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_8->addWidget(label_2);

        vehicleTransport = new QComboBox(tab_2);
        vehicleTransport->addItem(QString());
        vehicleTransport->addItem(QString());
        vehicleTransport->addItem(QString());
        vehicleTransport->addItem(QString());
        vehicleTransport->addItem(QString());
        vehicleTransport->addItem(QString());
        vehicleTransport->addItem(QString());
        vehicleTransport->addItem(QString());
        vehicleTransport->addItem(QString());
        vehicleTransport->addItem(QString());
        vehicleTransport->addItem(QString());
        vehicleTransport->addItem(QString());
        vehicleTransport->addItem(QString());
        vehicleTransport->setObjectName(QString::fromUtf8("vehicleTransport"));

        verticalLayout_8->addWidget(vehicleTransport);


        horizontalLayout_7->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_9->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        distanceTransport = new QSpinBox(tab_2);
        distanceTransport->setObjectName(QString::fromUtf8("distanceTransport"));
        distanceTransport->setMinimum(0);
        distanceTransport->setMaximum(10000);
        distanceTransport->setSingleStep(10);
        distanceTransport->setStepType(QAbstractSpinBox::DefaultStepType);
        distanceTransport->setValue(10);
        distanceTransport->setDisplayIntegerBase(10);

        horizontalLayout->addWidget(distanceTransport);

        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);


        verticalLayout_9->addLayout(horizontalLayout);


        horizontalLayout_7->addLayout(verticalLayout_9);


        verticalLayout_10->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);

        buttonTransport = new QPushButton(tab_2);
        buttonTransport->setObjectName(QString::fromUtf8("buttonTransport"));

        horizontalLayout_9->addWidget(buttonTransport);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_6);


        verticalLayout_10->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label_6);

        outputTransport = new QLabel(tab_2);
        outputTransport->setObjectName(QString::fromUtf8("outputTransport"));
        outputTransport->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(outputTransport);

        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_8->addWidget(label_5);


        verticalLayout_10->addLayout(horizontalLayout_8);


        horizontalLayout_10->addLayout(verticalLayout_10);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);


        verticalLayout_11->addLayout(horizontalLayout_10);


        horizontalLayout_11->addLayout(verticalLayout_11);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_9);


        verticalLayout_12->addLayout(horizontalLayout_11);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_4);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_5);


        gridLayout_3->addLayout(verticalLayout_12, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_21 = new QWidget();
        tab_21->setObjectName(QString::fromUtf8("tab_21"));
        tabWidget->addTab(tab_21, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        horizontalLayout_4 = new QHBoxLayout(tab_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout1 = new QVBoxLayout();
        verticalLayout1->setObjectName(QString::fromUtf8("verticalLayout1"));
        verticalLayout1->setContentsMargins(5, 5, 5, 5);
        textEdit_2 = new QTextEdit(tab_3);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setMaximumSize(QSize(16777215, 30));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush12);
        QBrush brush13(QColor(208, 255, 182, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush13);
        QBrush brush14(QColor(173, 213, 151, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush14);
        QBrush brush15(QColor(69, 86, 60, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush15);
        QBrush brush16(QColor(92, 114, 81, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush16);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush5);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush4);
        QBrush brush17(QColor(197, 213, 188, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush17);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush13);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush14);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush15);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush16);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush17);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush13);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush14);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush15);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush16);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush15);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush4);
        QBrush brush18(QColor(139, 172, 121, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush18);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        textEdit_2->setPalette(palette5);
        textEdit_2->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"\n"
"	border: 2px solid rgb(37, 39, 48);\n"
"	border-radius: 6px;\n"
"	border-color: rgb(136, 159, 124);\n"
"	background-color: rgb(136, 159, 124);\n"
"\n"
"}"));

        verticalLayout1->addWidget(textEdit_2);

        food_label = new QLabel(tab_3);
        food_label->setObjectName(QString::fromUtf8("food_label"));
        food_label->setPixmap(QPixmap(QString::fromUtf8("build/tips photos/food-pic.png")));

        verticalLayout1->addWidget(food_label);

        textEdit_3 = new QTextEdit(tab_3);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setMaximumSize(QSize(16777215, 100));
        textEdit_3->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"\n"
"	border: 2px solid rgb(37, 39, 48);\n"
"	border-radius: 6px;\n"
"	border-color: rgb(136, 159, 124);\n"
"	background-color: rgb(136, 159, 124,77);\n"
"\n"
"}"));

        verticalLayout1->addWidget(textEdit_3);

        verticalFrame1 = new QFrame(tab_3);
        verticalFrame1->setObjectName(QString::fromUtf8("verticalFrame1"));
        verticalLayout_4 = new QVBoxLayout(verticalFrame1);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        textEdit = new QTextEdit(verticalFrame1);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setMaximumSize(QSize(16777215, 25));
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"\n"
"	border: 2px solid rgb(37, 39, 48);\n"
"	border-radius: 6px;\n"
"	border-color: rgb(136, 159, 124);\n"
"	background-color: rgb(136, 159, 124);\n"
"\n"
"}"));

        verticalLayout_4->addWidget(textEdit);

        food_tip_1 = new QCheckBox(verticalFrame1);
        food_tip_1->setObjectName(QString::fromUtf8("food_tip_1"));

        verticalLayout_4->addWidget(food_tip_1);

        food_tip_2 = new QCheckBox(verticalFrame1);
        food_tip_2->setObjectName(QString::fromUtf8("food_tip_2"));

        verticalLayout_4->addWidget(food_tip_2);

        food_tip_3 = new QCheckBox(verticalFrame1);
        food_tip_3->setObjectName(QString::fromUtf8("food_tip_3"));

        verticalLayout_4->addWidget(food_tip_3);


        verticalLayout1->addWidget(verticalFrame1);


        horizontalLayout_4->addLayout(verticalLayout1);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(5, 5, 5, 5);
        textEdit_4 = new QTextEdit(tab_3);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
        textEdit_4->setMaximumSize(QSize(16777215, 30));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush12);
        QBrush brush19(QColor(207, 247, 190, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush19);
        QBrush brush20(QColor(172, 206, 158, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush20);
        QBrush brush21(QColor(69, 82, 63, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush21);
        QBrush brush22(QColor(92, 110, 84, 255));
        brush22.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush22);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush5);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush4);
        QBrush brush23(QColor(196, 210, 191, 255));
        brush23.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush23);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush19);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush20);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush21);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush22);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush23);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush21);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush19);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush20);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush21);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush22);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush21);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush21);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush4);
        QBrush brush24(QColor(138, 165, 127, 255));
        brush24.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush24);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        textEdit_4->setPalette(palette6);
        textEdit_4->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"\n"
"	border: 2px solid rgb(37, 39, 48);\n"
"	border-radius: 6px;\n"
"	border-color: rgb(136, 159, 124);\n"
"	background-color: rgb(136, 159, 124);\n"
"\n"
"}"));

        verticalLayout_21->addWidget(textEdit_4);

        transport_label = new QLabel(tab_3);
        transport_label->setObjectName(QString::fromUtf8("transport_label"));
        transport_label->setPixmap(QPixmap(QString::fromUtf8("build/tips photos/new_plane_pic.png")));

        verticalLayout_21->addWidget(transport_label);

        textEdit_5 = new QTextEdit(tab_3);
        textEdit_5->setObjectName(QString::fromUtf8("textEdit_5"));
        textEdit_5->setMaximumSize(QSize(16777215, 100));
        textEdit_5->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"\n"
"	border: 2px solid rgb(37, 39, 48);\n"
"	border-radius: 6px;\n"
"	border-color: rgb(136, 159, 124);\n"
"	background-color: rgb(136, 159, 124,77);\n"
"\n"
"}"));

        verticalLayout_21->addWidget(textEdit_5);

        verticalFrame2 = new QFrame(tab_3);
        verticalFrame2->setObjectName(QString::fromUtf8("verticalFrame2"));
        verticalLayout_5 = new QVBoxLayout(verticalFrame2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        textEdit_6 = new QTextEdit(verticalFrame2);
        textEdit_6->setObjectName(QString::fromUtf8("textEdit_6"));
        textEdit_6->setMaximumSize(QSize(16777215, 25));
        textEdit_6->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"\n"
"	border: 2px solid rgb(37, 39, 48);\n"
"	border-radius: 6px;\n"
"	border-color: rgb(136, 159, 124);\n"
"	background-color: rgb(136, 159, 124);\n"
"\n"
"}"));

        verticalLayout_5->addWidget(textEdit_6);

        transportation_tip_1 = new QCheckBox(verticalFrame2);
        transportation_tip_1->setObjectName(QString::fromUtf8("transportation_tip_1"));

        verticalLayout_5->addWidget(transportation_tip_1);

        transportation_tip_2 = new QCheckBox(verticalFrame2);
        transportation_tip_2->setObjectName(QString::fromUtf8("transportation_tip_2"));

        verticalLayout_5->addWidget(transportation_tip_2);

        transportation_tip_3 = new QCheckBox(verticalFrame2);
        transportation_tip_3->setObjectName(QString::fromUtf8("transportation_tip_3"));

        verticalLayout_5->addWidget(transportation_tip_3);


        verticalLayout_21->addWidget(verticalFrame2);


        horizontalLayout_4->addLayout(verticalLayout_21);

        verticalLayout_31 = new QVBoxLayout();
        verticalLayout_31->setObjectName(QString::fromUtf8("verticalLayout_31"));
        verticalLayout_31->setContentsMargins(5, 5, 5, 5);
        textEdit_7 = new QTextEdit(tab_3);
        textEdit_7->setObjectName(QString::fromUtf8("textEdit_7"));
        textEdit_7->setMaximumSize(QSize(16777215, 30));
        textEdit_7->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"\n"
"	border: 2px solid rgb(37, 39, 48);\n"
"	border-radius: 6px;\n"
"	border-color: rgb(136, 159, 124);\n"
"	background-color: rgb(136, 159, 124);\n"
"\n"
"}"));

        verticalLayout_31->addWidget(textEdit_7);

        home_label = new QLabel(tab_3);
        home_label->setObjectName(QString::fromUtf8("home_label"));
        home_label->setPixmap(QPixmap(QString::fromUtf8("build/tips photos/home-pic.png")));

        verticalLayout_31->addWidget(home_label);

        textEdit_8 = new QTextEdit(tab_3);
        textEdit_8->setObjectName(QString::fromUtf8("textEdit_8"));
        textEdit_8->setMaximumSize(QSize(16777215, 100));
        textEdit_8->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"\n"
"	border: 2px solid rgb(37, 39, 48);\n"
"	border-radius: 6px;\n"
"	border-color: rgb(136, 159, 124);\n"
"	background-color: rgb(136, 159, 124,77);\n"
"\n"
"}"));

        verticalLayout_31->addWidget(textEdit_8);

        verticalFrame3 = new QFrame(tab_3);
        verticalFrame3->setObjectName(QString::fromUtf8("verticalFrame3"));
        verticalLayout_6 = new QVBoxLayout(verticalFrame3);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        textEdit_9 = new QTextEdit(verticalFrame3);
        textEdit_9->setObjectName(QString::fromUtf8("textEdit_9"));
        textEdit_9->setMaximumSize(QSize(16777215, 25));
        textEdit_9->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"\n"
"	border: 2px solid rgb(37, 39, 48);\n"
"	border-radius: 6px;\n"
"	border-color: rgb(136, 159, 124);\n"
"	background-color: rgb(136, 159, 124);\n"
"\n"
"}"));

        verticalLayout_6->addWidget(textEdit_9);

        house_tip_1 = new QCheckBox(verticalFrame3);
        house_tip_1->setObjectName(QString::fromUtf8("house_tip_1"));

        verticalLayout_6->addWidget(house_tip_1);

        house_tip_2 = new QCheckBox(verticalFrame3);
        house_tip_2->setObjectName(QString::fromUtf8("house_tip_2"));

        verticalLayout_6->addWidget(house_tip_2);

        house_tip_3 = new QCheckBox(verticalFrame3);
        house_tip_3->setObjectName(QString::fromUtf8("house_tip_3"));

        verticalLayout_6->addWidget(house_tip_3);


        verticalLayout_31->addWidget(verticalFrame3);


        horizontalLayout_4->addLayout(verticalLayout_31);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        comboBox = new QComboBox(tab_4);
        comboBox->addItem(QString::fromUtf8("Choose your activity ..."));
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(620, 275, 231, 31));
        comboBox->setFont(font);
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    border: 2px solid black;\n"
"    border-radius: 3px;\n"
"    padding: 5px 18px 5px 70px;\n"
"    min-width: 6em;\n"
"}\n"
"\n"
"QComboBox:editable {\n"
"    background: black;\n"
"}\n"
"\n"
"QComboBox:!editable, QComboBox::drop-down:editable {\n"
"     background: rgb(171, 197, 153);\n"
"}\n"
"\n"
"/* QComboBox gets the \"on\" state when the popup is open */\n"
"QComboBox:!editable:on, QComboBox::drop-down:editable:on {\n"
"    background: rgb(171, 197, 153);\n"
"}\n"
"\n"
"QComboBox:on { /* shift the text when the popup opens */\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;\n"
"\n"
"    border-left-width: 1px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid; /* just a single line */\n"
"    border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"    border-bottom-right-radius: 3px;\n"
"}\n"
"\n"
"\n"
"\n"
"QComboBox"
                        "::down-arrow:on { /* shift the arrow when popup is open */\n"
"    top: 1px;\n"
"    left: 1px;\n"
"}"));
        tree = new QLabel(tab_4);
        tree->setObjectName(QString::fromUtf8("tree"));
        tree->setGeometry(QRect(80, 122, 211, 341));
        tree->setPixmap(QPixmap(QString::fromUtf8("resources/pictures/tree_animation.gif")));
        tree_button = new QPushButton(tab_4);
        tree_button->setObjectName(QString::fromUtf8("tree_button"));
        tree_button->setGeometry(QRect(20, 490, 271, 35));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush11);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        tree_button->setPalette(palette7);
        tree_button->setFont(font);
        tree_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 2px solid black;\n"
"    padding: 5px 18px 5px 70px;\n"
"    min-width: 6em;\n"
"    border-radius: 6px;\n"
"    background-color: rgb(234, 147, 96);\n"
"    min-width: 100px;\n"
"	padding: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(233, 208, 160);\n"
"}\n"
"\n"
""));
        listView = new QListView(tab_4);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(300, 30, 311, 481));
        listView->setStyleSheet(QString::fromUtf8("QListView {\n"
"    alternate-background-color: rgba(233, 232, 235, 166);\n"
"}\n"
"\n"
"QListView {\n"
"    show-decoration-selected: 1; /* make the selection span the entire width of the view */\n"
"}\n"
"\n"
"QListView::item:alternate {\n"
"    background: rgb(233, 208, 160);\n"
"}\n"
"\n"
"QListView::item:selected {\n"
"    border: 1px solid #6a6ea9;\n"
"}\n"
"\n"
"QListView::item:selected:!active {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #ABAFE5, stop: 1 #8588B2);\n"
"}\n"
"\n"
"QListView::item:selected:active {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #6a6ea9, stop: 1 #888dd9);\n"
"}\n"
"\n"
"QListView::item:hover {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #FAFBFE, stop: 1 #DCDEF1);\n"
"}"));
        select_button = new QPushButton(tab_4);
        select_button->setObjectName(QString::fromUtf8("select_button"));
        select_button->setGeometry(QRect(300, 520, 113, 32));
        tabWidget->addTab(tab_4, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 950, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(SeedsprogressBar, &QProgressBar::valueChanged, seed, qOverload<>(&QLabel::raise));

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        seed->setText(QString());
        Scanbutton->setText(QCoreApplication::translate("MainWindow", "Scan my activities", nullptr));
        Surveybutton->setText(QCoreApplication::translate("MainWindow", "My activities today", nullptr));
        textBrowser_4->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Gill Sans'; font-size:13pt; font-weight:600; font-style:italic;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-weight:400; font-style:normal; color:#ffffff;\">Daily challenges</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-weight:400; font-style:normal; color:#ffffff;\"><br /></p></body></html>", nullptr));
        daily_challenge_1->setText(QCoreApplication::translate("MainWindow", "Challenge #1", nullptr));
        daily_challenge_2->setText(QCoreApplication::translate("MainWindow", "Challenge #2", nullptr));
        daily_challenge_3->setText(QCoreApplication::translate("MainWindow", "Challenge #3", nullptr));
        daily_challenge_4->setText(QCoreApplication::translate("MainWindow", "Challenge #4", nullptr));
        textBrowser_5->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Gill Sans'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; color:#ffffff;\">Monthly challenges</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; color:#ffffff;\"><br /></p></body></html>", nullptr));
        checkBox_6->setText(QCoreApplication::translate("MainWindow", "Challenge # 1", nullptr));
        checkBox_7->setText(QCoreApplication::translate("MainWindow", "Challenge # 2", nullptr));
        checkBox_5->setText(QCoreApplication::translate("MainWindow", "Challenge # 3", nullptr));
        checkBox_4->setText(QCoreApplication::translate("MainWindow", "Challenge # 4", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Profile page", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#8962b4;\">Transport emissions</span></p></body></html>", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Input your emissions due to transport here!</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Select your vehicle", nullptr));
        vehicleTransport->setItemText(0, QCoreApplication::translate("MainWindow", "business class international flight", nullptr));
        vehicleTransport->setItemText(1, QCoreApplication::translate("MainWindow", "electric car", nullptr));
        vehicleTransport->setItemText(2, QCoreApplication::translate("MainWindow", "petrol car", nullptr));
        vehicleTransport->setItemText(3, QCoreApplication::translate("MainWindow", "diesel car", nullptr));
        vehicleTransport->setItemText(4, QCoreApplication::translate("MainWindow", "petrol motorbike", nullptr));
        vehicleTransport->setItemText(5, QCoreApplication::translate("MainWindow", "bus", nullptr));
        vehicleTransport->setItemText(6, QCoreApplication::translate("MainWindow", "metro", nullptr));
        vehicleTransport->setItemText(7, QCoreApplication::translate("MainWindow", "ferry", nullptr));
        vehicleTransport->setItemText(8, QCoreApplication::translate("MainWindow", "national train", nullptr));
        vehicleTransport->setItemText(9, QCoreApplication::translate("MainWindow", "international train", nullptr));
        vehicleTransport->setItemText(10, QCoreApplication::translate("MainWindow", "domestic flight", nullptr));
        vehicleTransport->setItemText(11, QCoreApplication::translate("MainWindow", "first class international flight", nullptr));
        vehicleTransport->setItemText(12, QCoreApplication::translate("MainWindow", "economy class internationl flight", nullptr));

        label->setText(QCoreApplication::translate("MainWindow", "Select the distance", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "km", nullptr));
        buttonTransport->setText(QCoreApplication::translate("MainWindow", "Calculate your emissions", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Your emissions are:", nullptr));
        outputTransport->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "kg of CO2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Survey", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_21), QCoreApplication::translate("MainWindow", "Graph page", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Food</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        food_label->setText(QString());
        textEdit_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Info</p></body></html>", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Food Tips</p></body></html>", nullptr));
        food_tip_1->setText(QCoreApplication::translate("MainWindow", "Reduce dairy consumption", nullptr));
        food_tip_2->setText(QCoreApplication::translate("MainWindow", "Consume local and seasonal products", nullptr));
        food_tip_3->setText(QCoreApplication::translate("MainWindow", "Eat less red meat", nullptr));
        textEdit_4->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Transportation</p></body></html>", nullptr));
        transport_label->setText(QString());
        textEdit_5->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Info</p></body></html>", nullptr));
        textEdit_6->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Transportation Tips</p></body></html>", nullptr));
        transportation_tip_1->setText(QCoreApplication::translate("MainWindow", "Avoid driving at peak times", nullptr));
        transportation_tip_2->setText(QCoreApplication::translate("MainWindow", "Sharing a car to go to work", nullptr));
        transportation_tip_3->setText(QCoreApplication::translate("MainWindow", "Replace the car with public transports ", nullptr));
        textEdit_7->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Home</p></body></html>", nullptr));
        home_label->setText(QString());
        textEdit_8->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Info</p></body></html>", nullptr));
        textEdit_9->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">House Tips</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        house_tip_1->setText(QCoreApplication::translate("MainWindow", "Unplug your charger when not in use", nullptr));
        house_tip_2->setText(QCoreApplication::translate("MainWindow", "Turn off the lights", nullptr));
        house_tip_3->setText(QCoreApplication::translate("MainWindow", "Use the dishwasher when it is full", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Challenges/info/tips", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Chat", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Send challenges", nullptr));

        tree->setText(QString());
        tree_button->setText(QCoreApplication::translate("MainWindow", "Grow your tree", nullptr));
        select_button->setText(QCoreApplication::translate("MainWindow", "Select", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Your friends", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
