TEMPLATE = app
QT += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    api_transport.cpp \
    base_consumption.cpp \
    consumption.cpp \
    date.cpp \
    friends.cpp \
    json_DB.cpp \
    netclient.cpp \
    netserver.cpp \
    object.cpp \
    food.cpp \
    tests.cpp \
    transport.cpp \
    user.cpp\
    main.cpp \
    receipt.cpp \
    transport_API.cpp \
    mainwindow.cpp \
    survey.cpp


HEADERS += \
    api_transport.h \
    base_consumption.h \
    colormod.h \
    consumption.h \
    date.h \
    friends.h \
    json_DB.hpp \
    netclient.h \
    netserver.h \
    object.h \
    food.h \
    tests.h \
    transport.h \
    user.h \
    receipt.h \
    mainwindow.h \
    survey.h

FORMS += \
    api_transport.ui \
    mainwindow.ui \
    survey.ui

TARGET = CarbonTracker_exe

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
