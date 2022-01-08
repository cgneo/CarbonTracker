TEMPLATE = app
QT += core gui network charts

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
    survey.cpp \
    receipt_info.cpp \
    food_api.cpp \


HEADERS += \
    base_consumption.h \
    colormod.h \
    consumption.h \
    date.h \
    json_DB.hpp \
    netclient.h \
    netserver.h \
    object.h \
    food.h \
    tests.h \
    transport.h \
    user.h \
    mainwindow.h \
    survey.h \
    receipt.h \
    food_api.h \
    transport_api.h

FORMS += \
    mainwindow.ui \
    survey.ui

TARGET = CarbonTracker_exe

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../../../usr/local/Cellar/tesseract/4.1.1/lib/release/ -ltesseract.4
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../../../usr/local/Cellar/tesseract/4.1.1/lib/debug/ -ltesseract.4
else:unix: LIBS += -L$$PWD/../../../../../../usr/local/Cellar/tesseract/4.1.1/lib/ -ltesseract.4

INCLUDEPATH += $$PWD/../../../../../../usr/local/Cellar/tesseract/4.1.1/include
DEPENDPATH += $$PWD/../../../../../../usr/local/Cellar/tesseract/4.1.1/include

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../../../usr/local/Cellar/leptonica/1.82.0/lib/release/ -llept.5
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../../../usr/local/Cellar/leptonica/1.82.0/lib/debug/ -llept.5
else:unix: LIBS += -L$$PWD/../../../../../../usr/local/Cellar/leptonica/1.82.0/lib/ -llept.5

INCLUDEPATH += $$PWD/../../../../../../usr/local/Cellar/leptonica/1.82.0/include
DEPENDPATH += $$PWD/../../../../../../usr/local/Cellar/leptonica/1.82.0/include
