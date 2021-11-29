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
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextBrowser *Profilepicture;
    QTextBrowser *numberofSeeds;
    QProgressBar *SeedsprogressBar;
    QLabel *label_2;
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *textBrowser_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_4;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *textBrowser_4;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox;
    QWidget *tab_2;
    QLabel *label;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_41;
    QProgressBar *Seedsprogress;
    QCheckBox *checkBox1;
    QWidget *tab_21;
    QCheckBox *checkBox_21;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout1;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit;
    QVBoxLayout *verticalLayout_21;
    QTextEdit *textEdit_4;
    QLabel *label_21;
    QTextEdit *textEdit_5;
    QTextEdit *textEdit_6;
    QVBoxLayout *verticalLayout_31;
    QTextEdit *textEdit_7;
    QLabel *label_3;
    QTextEdit *textEdit_8;
    QTextEdit *textEdit_9;
    QWidget *tab_4;
    QHBoxLayout *horizontalLayout_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QPalette palette;
        QBrush brush(QColor(171, 197, 153, 255));
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
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(1000, 1000));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayoutWidget = new QWidget(tab);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, -2, 231, 671));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        Profilepicture = new QTextBrowser(verticalLayoutWidget);
        Profilepicture->setObjectName(QString::fromUtf8("Profilepicture"));
        Profilepicture->setMaximumSize(QSize(100, 100));

        verticalLayout->addWidget(Profilepicture, 0, Qt::AlignHCenter);

        numberofSeeds = new QTextBrowser(verticalLayoutWidget);
        numberofSeeds->setObjectName(QString::fromUtf8("numberofSeeds"));
        numberofSeeds->setMaximumSize(QSize(200, 50));

        verticalLayout->addWidget(numberofSeeds, 0, Qt::AlignHCenter);

        SeedsprogressBar = new QProgressBar(verticalLayoutWidget);
        SeedsprogressBar->setObjectName(QString::fromUtf8("SeedsprogressBar"));
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
"	background-color: rgb(134, 157, 122);\n"
"}"));
        SeedsprogressBar->setValue(24);

        verticalLayout->addWidget(SeedsprogressBar);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font;
        font.setFamily(QString::fromUtf8("Gill Sans"));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color: rgb(171, 197, 153);\n"
"	border-color: rgba(255, 255, 255, 0);\n"
"	border-radius: 10px\n"
"}"));

        verticalLayout->addWidget(pushButton);

        verticalLayoutWidget_2 = new QWidget(tab);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(510, 310, 251, 191));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(10, 10, 10, 10);
        textBrowser_5 = new QTextBrowser(verticalLayoutWidget_2);
        textBrowser_5->setObjectName(QString::fromUtf8("textBrowser_5"));
        textBrowser_5->setMaximumSize(QSize(200, 50));
        textBrowser_5->setFont(font);

        verticalLayout_2->addWidget(textBrowser_5, 0, Qt::AlignHCenter);

        checkBox_6 = new QCheckBox(verticalLayoutWidget_2);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setFont(font);

        verticalLayout_2->addWidget(checkBox_6);

        checkBox_7 = new QCheckBox(verticalLayoutWidget_2);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));
        checkBox_7->setFont(font);

        verticalLayout_2->addWidget(checkBox_7);

        checkBox_5 = new QCheckBox(verticalLayoutWidget_2);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setFont(font);

        verticalLayout_2->addWidget(checkBox_5);

        checkBox_4 = new QCheckBox(verticalLayoutWidget_2);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setFont(font);

        verticalLayout_2->addWidget(checkBox_4);

        verticalLayoutWidget_3 = new QWidget(tab);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(240, 309, 261, 191));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(10, 10, 10, 10);
        textBrowser_4 = new QTextBrowser(verticalLayoutWidget_3);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setMaximumSize(QSize(200, 50));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        textBrowser_4->setPalette(palette2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Gill Sans"));
        font1.setPointSize(13);
        textBrowser_4->setFont(font1);
        textBrowser_4->setStyleSheet(QString::fromUtf8("QTextBrowser{\n"
"	color: rgb(171, 197, 153);\n"
"	border: 2px solid rgb(37, 39, 48);\n"
"	border-radius: 20px\n"
"	background-color: rgb(37,  36, 44)\n"
"}"));

        verticalLayout_3->addWidget(textBrowser_4, 0, Qt::AlignHCenter);

        checkBox_3 = new QCheckBox(verticalLayoutWidget_3);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setFont(font);

        verticalLayout_3->addWidget(checkBox_3);

        checkBox_2 = new QCheckBox(verticalLayoutWidget_3);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setFont(font);

        verticalLayout_3->addWidget(checkBox_2);

        checkBox = new QCheckBox(verticalLayoutWidget_3);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setFont(font);

        verticalLayout_3->addWidget(checkBox);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(610, 20, 151, 111));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/photo_2021-11-18 10.52.38.jpeg")));
        textBrowser = new QTextBrowser(tab_2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(300, 50, 191, 51));
        textBrowser_2 = new QTextBrowser(tab_2);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(50, 320, 101, 41));
        textBrowser_3 = new QTextBrowser(tab_2);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(50, 370, 111, 61));
        textBrowser_41 = new QTextBrowser(tab_2);
        textBrowser_41->setObjectName(QString::fromUtf8("textBrowser_41"));
        textBrowser_41->setGeometry(QRect(70, 210, 181, 51));
        Seedsprogress = new QProgressBar(tab_2);
        Seedsprogress->setObjectName(QString::fromUtf8("Seedsprogress"));
        Seedsprogress->setGeometry(QRect(70, 260, 181, 21));
        Seedsprogress->setValue(24);
        checkBox1 = new QCheckBox(tab_2);
        checkBox1->setObjectName(QString::fromUtf8("checkBox1"));
        checkBox1->setGeometry(QRect(300, 210, 131, 20));
        tabWidget->addTab(tab_2, QString());
        tab_21 = new QWidget();
        tab_21->setObjectName(QString::fromUtf8("tab_21"));
        checkBox_21 = new QCheckBox(tab_21);
        checkBox_21->setObjectName(QString::fromUtf8("checkBox_21"));
        checkBox_21->setGeometry(QRect(170, 120, 86, 20));
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
        QPalette palette3;
        QBrush brush4(QColor(0, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        QBrush brush5(QColor(139, 172, 121, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush5);
        QBrush brush6(QColor(208, 255, 182, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush6);
        QBrush brush7(QColor(173, 213, 151, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush7);
        QBrush brush8(QColor(69, 86, 60, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush8);
        QBrush brush9(QColor(92, 114, 81, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush9);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush4);
        QBrush brush10(QColor(255, 255, 255, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush10);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush4);
        QBrush brush11(QColor(197, 213, 188, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        QBrush brush12(QColor(255, 255, 220, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush12);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush4);
        QBrush brush13(QColor(0, 0, 0, 128));
        brush13.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush13);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        textEdit_2->setPalette(palette3);
        textEdit_2->setStyleSheet(QString::fromUtf8("QtextEdit_2{rgb(139, 195, 136)qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.05 rgba(14, 8, 73, 255), stop:0.36 rgba(28, 17, 145, 255), stop:0.6 rgba(126, 14, 81, 255), stop:0.75 rgba(234, 11, 11, 255), stop:0.79 rgba(244, 70, 5, 255), stop:0.86 rgba(255, 136, 0, 255), stop:0.935 rgba(239, 236, 55, 255))QtextEdit_2{rgb(147, 173, 109)}}"));

        verticalLayout1->addWidget(textEdit_2);

        textEdit_3 = new QTextEdit(tab_3);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));

        verticalLayout1->addWidget(textEdit_3);

        textEdit = new QTextEdit(tab_3);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout1->addWidget(textEdit);


        horizontalLayout_4->addLayout(verticalLayout1);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(5, 5, 5, 5);
        textEdit_4 = new QTextEdit(tab_3);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
        textEdit_4->setMaximumSize(QSize(16777215, 30));

        verticalLayout_21->addWidget(textEdit_4);

        label_21 = new QLabel(tab_3);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setPixmap(QPixmap(QString::fromUtf8("../../../../../../../../../Capture d\342\200\231\303\251cran 2021-11-25 \303\240 11.42.59 AM.png")));

        verticalLayout_21->addWidget(label_21);

        textEdit_5 = new QTextEdit(tab_3);
        textEdit_5->setObjectName(QString::fromUtf8("textEdit_5"));

        verticalLayout_21->addWidget(textEdit_5);

        textEdit_6 = new QTextEdit(tab_3);
        textEdit_6->setObjectName(QString::fromUtf8("textEdit_6"));

        verticalLayout_21->addWidget(textEdit_6);


        horizontalLayout_4->addLayout(verticalLayout_21);

        verticalLayout_31 = new QVBoxLayout();
        verticalLayout_31->setObjectName(QString::fromUtf8("verticalLayout_31"));
        verticalLayout_31->setContentsMargins(5, 5, 5, 5);
        textEdit_7 = new QTextEdit(tab_3);
        textEdit_7->setObjectName(QString::fromUtf8("textEdit_7"));
        textEdit_7->setMaximumSize(QSize(16777215, 30));

        verticalLayout_31->addWidget(textEdit_7);

        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_31->addWidget(label_3);

        textEdit_8 = new QTextEdit(tab_3);
        textEdit_8->setObjectName(QString::fromUtf8("textEdit_8"));

        verticalLayout_31->addWidget(textEdit_8);

        textEdit_9 = new QTextEdit(tab_3);
        textEdit_9->setObjectName(QString::fromUtf8("textEdit_9"));

        verticalLayout_31->addWidget(textEdit_9);


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
        menubar->setGeometry(QRect(0, 0, 800, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "My activities today", nullptr));
        textBrowser_5->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Gill Sans'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont';\">Monthly challenges</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont';\"><br /></p></body></html>", nullptr));
        checkBox_6->setText(QApplication::translate("MainWindow", "CheckBox", nullptr));
        checkBox_7->setText(QApplication::translate("MainWindow", "CheckBox", nullptr));
        checkBox_5->setText(QApplication::translate("MainWindow", "CheckBox", nullptr));
        checkBox_4->setText(QApplication::translate("MainWindow", "CheckBox", nullptr));
        textBrowser_4->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Gill Sans'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont';\">Daily challenges</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont';\"><br /></p></body></html>", nullptr));
        checkBox_3->setText(QApplication::translate("MainWindow", "Challenge # 1", nullptr));
        checkBox_2->setText(QApplication::translate("MainWindow", "CheckBox", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "CheckBox", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Profile page", nullptr));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>file:///Users/dainjung/Downloads/photo_2021-11-18 10.52.38.jpeg</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QString());
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Name </p></body></html>", nullptr));
        textBrowser_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Scan barcode</p></body></html>", nullptr));
        textBrowser_3->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Input activity</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textBrowser_41->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">number of seeds</p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        checkBox1->setText(QApplication::translate("MainWindow", "Challenge 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Graph page", nullptr));
        checkBox_21->setText(QApplication::translate("MainWindow", "CheckBox", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_21), QApplication::translate("MainWindow", "Graph page", nullptr));
        textEdit_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Food</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textEdit_3->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Info</p></body></html>", nullptr));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Food Tips:</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textEdit_4->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Transportation</p></body></html>", nullptr));
        label_21->setText(QString());
        textEdit_5->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Info</p></body></html>", nullptr));
        textEdit_6->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Transportation Tips:</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textEdit_7->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Home</p></body></html>", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        textEdit_8->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Info</p></body></html>", nullptr));
        textEdit_9->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Transportation Tips:</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Your friends", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Challenges/info/tips", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
