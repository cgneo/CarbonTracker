TEMPLATE = app
QT += core gui network
QT += charts
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    base_consumption.cpp \
    consumption.cpp \
    date.cpp \
    json_DB.cpp \
    object.cpp \
    food.cpp \
    tests.cpp \
    transport.cpp \
    transport_api.cpp \
    user.cpp\
    main.cpp \
    receipt.cpp \
    mainwindow.cpp \
    survey.cpp


HEADERS += \
    base_consumption.h \
    consumption.h \
    date.h \
    json_DB.hpp \
    object.h \
    food.h \
    tests.h \
    transport.h \
    transport_api.h \
    user.h \
    receipt.h \
    mainwindow.h \
    survey.h

FORMS += \
    mainwindow.ui \
    survey.ui

TARGET = CarbonTracker_exe

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
