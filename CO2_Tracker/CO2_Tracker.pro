TEMPLATE = app
QT += core gui network charts
QT += core
DEFINES += Test #variable that allows the execution of the tests

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    base_consumption.cpp \
    consumption.cpp \
    date.cpp \
    donut.cpp \
    json_DB.cpp \
    netclient.cpp \
    netserver.cpp \
    object.cpp \
    food.cpp \
    profile_picture.cpp \
    tests.cpp \
    transport.cpp \
    user.cpp\
    main.cpp \
    receipt.cpp \
    transport_API.cpp \
    mainwindow.cpp \
    survey.cpp


HEADERS += \
    base_consumption.h \
    colormod.h \
    consumption.h \
    date.h \
    donut.h \
    json_DB.hpp \
    netclient.h \
    netserver.h \
    object.h \
    food.h \
    profile_picture.h \
    tests.h \
    transport.h \
    transport_api.h \
    user.h \
    receipt.h \
    mainwindow.h \
    survey.h

FORMS += \
    mainwindow.ui \
    survey.ui \
    transport_api.ui

TARGET = CarbonTracker_exe

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources/pictures/images.qrc
