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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
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
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout;
    QProgressBar *SeedsprogressBar;
    QLabel *seed;
    QPushButton *Scanbutton;
    QPushButton *Surveybutton;
    QFrame *verticalFrame_2;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *textBrowser_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_4;
    QFrame *verticalFrame_3;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *textBrowser_4;
    QCheckBox *daily_challenge_1;
    QCheckBox *daily_challenge_2;
    QCheckBox *daily_challenge_3;
    QCheckBox *daily_challenge_4;
    QFrame *gridFrame;
    QGridLayout *gridLayout;
    QWidget *tab_2;
    QWidget *tab_21;
    QFrame *donutFrame;
    QHBoxLayout *horizontalLayout_3;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout1;
    QTextEdit *textEdit_2;
    QLabel *food_label;
    QTextEdit *textEdit_3;
    QFrame *verticalFrame1;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *textEdit;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox;
    QVBoxLayout *verticalLayout_21;
    QTextEdit *textEdit_4;
    QLabel *transport_label;
    QTextEdit *textEdit_5;
    QFrame *verticalFrame2;
    QVBoxLayout *verticalLayout_5;
    QTextEdit *textEdit_6;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_10;
    QCheckBox *checkBox_9;
    QVBoxLayout *verticalLayout_31;
    QTextEdit *textEdit_7;
    QLabel *home_label;
    QTextEdit *textEdit_8;
    QFrame *verticalFrame3;
    QVBoxLayout *verticalLayout_6;
    QTextEdit *textEdit_9;
    QCheckBox *checkBox_11;
    QCheckBox *checkBox_12;
    QCheckBox *checkBox_13;
    QWidget *tab_4;
    QHBoxLayout *horizontalLayout_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(3474, 1347);
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
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
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
        verticalFrame = new QFrame(tab);
        verticalFrame->setObjectName(QString::fromUtf8("verticalFrame"));
        verticalFrame->setGeometry(QRect(10, 10, 211, 561));
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

        verticalFrame_2 = new QFrame(tab);
        verticalFrame_2->setObjectName(QString::fromUtf8("verticalFrame_2"));
        verticalFrame_2->setGeometry(QRect(510, 380, 261, 191));
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
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(false);
        font1.setItalic(false);
        textBrowser_5->setFont(font1);
        textBrowser_5->setStyleSheet(QString::fromUtf8("QTextBrowser{\n"
"\n"
"	border: 2px solid rgb(37, 39, 48);\n"
"	border-radius: 6px;\n"
"	border-color: rgb(136, 159, 124);\n"
"	background-color: rgb(136, 159, 124);\n"
"	font: 13pt \"Gill Sans\";\n"
"}"));

        verticalLayout_2->addWidget(textBrowser_5, 0, Qt::AlignHCenter);

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

        verticalFrame_3 = new QFrame(tab);
        verticalFrame_3->setObjectName(QString::fromUtf8("verticalFrame_3"));
        verticalFrame_3->setGeometry(QRect(230, 380, 261, 191));
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
        QFont font2;
        font2.setBold(true);
        font2.setItalic(true);
        textBrowser_4->setFont(font2);
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

        gridFrame = new QFrame(tab);
        gridFrame->setObjectName(QString::fromUtf8("gridFrame"));
        gridFrame->setGeometry(QRect(229, 9, 541, 361));
        gridFrame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"   \n"
"    border-radius: 4px;\n"
"    padding: 2px;\n"
"	background-color: rgba(236, 234, 238,100);\n"
"}"));
        gridLayout = new QGridLayout(gridFrame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_21 = new QWidget();
        tab_21->setObjectName(QString::fromUtf8("tab_21"));
        donutFrame = new QFrame(tab_21);
        donutFrame->setObjectName(QString::fromUtf8("donutFrame"));
        donutFrame->setGeometry(QRect(10, 10, 801, 461));
        horizontalLayout_3 = new QHBoxLayout(donutFrame);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
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

        checkBox_3 = new QCheckBox(verticalFrame1);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        verticalLayout_4->addWidget(checkBox_3);

        checkBox_2 = new QCheckBox(verticalFrame1);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        verticalLayout_4->addWidget(checkBox_2);

        checkBox = new QCheckBox(verticalFrame1);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout_4->addWidget(checkBox);


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

        checkBox_8 = new QCheckBox(verticalFrame2);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));

        verticalLayout_5->addWidget(checkBox_8);

        checkBox_10 = new QCheckBox(verticalFrame2);
        checkBox_10->setObjectName(QString::fromUtf8("checkBox_10"));

        verticalLayout_5->addWidget(checkBox_10);

        checkBox_9 = new QCheckBox(verticalFrame2);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));

        verticalLayout_5->addWidget(checkBox_9);


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

        checkBox_11 = new QCheckBox(verticalFrame3);
        checkBox_11->setObjectName(QString::fromUtf8("checkBox_11"));

        verticalLayout_6->addWidget(checkBox_11);

        checkBox_12 = new QCheckBox(verticalFrame3);
        checkBox_12->setObjectName(QString::fromUtf8("checkBox_12"));

        verticalLayout_6->addWidget(checkBox_12);

        checkBox_13 = new QCheckBox(verticalFrame3);
        checkBox_13->setObjectName(QString::fromUtf8("checkBox_13"));

        verticalLayout_6->addWidget(checkBox_13);


        verticalLayout_31->addWidget(verticalFrame3);


        horizontalLayout_4->addLayout(verticalLayout_31);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        horizontalLayout_2 = new QHBoxLayout(tab_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tabWidget->addTab(tab_4, QString());

        horizontalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 3474, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(SeedsprogressBar, SIGNAL(valueChanged(int)), seed, SLOT(raise()));

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        seed->setText(QString());
        Scanbutton->setText(QApplication::translate("MainWindow", "Scan my activities", nullptr));
        Surveybutton->setText(QApplication::translate("MainWindow", "My activities today", nullptr));
        textBrowser_5->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Gill Sans'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; color:#ffffff;\">Monthly challenges</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; color:#ffffff;\"><br /></p></body></html>", nullptr));
        checkBox_6->setText(QApplication::translate("MainWindow", "Challenge # 1", nullptr));
        checkBox_7->setText(QApplication::translate("MainWindow", "Challenge # 2", nullptr));
        checkBox_5->setText(QApplication::translate("MainWindow", "Challenge # 3", nullptr));
        checkBox_4->setText(QApplication::translate("MainWindow", "Challenge # 4", nullptr));
        textBrowser_4->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700; font-style:italic;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400; font-style:normal; color:#ffffff;\">Daily challenges</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400; font-style:normal; color:#ffffff;\"><br /></p></body></html>", nullptr));
        daily_challenge_1->setText(QApplication::translate("MainWindow", "Challenge #1", nullptr));
        daily_challenge_2->setText(QApplication::translate("MainWindow", "Challenge #2", nullptr));
        daily_challenge_3->setText(QApplication::translate("MainWindow", "Challenge #3", nullptr));
        daily_challenge_4->setText(QApplication::translate("MainWindow", "Challenge #4", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Profile page", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Survey", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_21), QApplication::translate("MainWindow", "Graph page", nullptr));
        textEdit_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Food</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        food_label->setText(QString());
        textEdit_3->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Info</p></body></html>", nullptr));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Food Tips</p></body></html>", nullptr));
        checkBox_3->setText(QApplication::translate("MainWindow", "Reduce dairy consumption", nullptr));
        checkBox_2->setText(QApplication::translate("MainWindow", "Consume local and seasonal products", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "Eat less red meat", nullptr));
        textEdit_4->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Transportation</p></body></html>", nullptr));
        transport_label->setText(QString());
        textEdit_5->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Info</p></body></html>", nullptr));
        textEdit_6->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Transportation Tips</p></body></html>", nullptr));
        checkBox_8->setText(QApplication::translate("MainWindow", "Avoid driving at peak times", nullptr));
        checkBox_10->setText(QApplication::translate("MainWindow", "Sharing a car to go to work", nullptr));
        checkBox_9->setText(QApplication::translate("MainWindow", "Replace the car with public transports ", nullptr));
        textEdit_7->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Home</p></body></html>", nullptr));
        home_label->setText(QString());
        textEdit_8->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Info</p></body></html>", nullptr));
        textEdit_9->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">House Tips</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        checkBox_11->setText(QApplication::translate("MainWindow", "Unplug your charger when not in use", nullptr));
        checkBox_12->setText(QApplication::translate("MainWindow", "Turn off the lights", nullptr));
        checkBox_13->setText(QApplication::translate("MainWindow", "Use the dishwasher when it is full", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Challenges/info/tips", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Your friends", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
