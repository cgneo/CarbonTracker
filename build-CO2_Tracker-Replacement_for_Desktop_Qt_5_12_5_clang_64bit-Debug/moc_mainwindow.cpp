/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../CO2_Tracker/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[30];
    char stringdata0[323];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 23), // "on_Surveybutton_clicked"
QT_MOC_LITERAL(35, 0), // ""
QT_MOC_LITERAL(36, 21), // "on_Scanbutton_clicked"
QT_MOC_LITERAL(58, 28), // "on_RefreshPushButton_clicked"
QT_MOC_LITERAL(87, 33), // "on_daily_challenge_1_stateCha..."
QT_MOC_LITERAL(121, 4), // "arg1"
QT_MOC_LITERAL(126, 33), // "on_daily_challenge_2_stateCha..."
QT_MOC_LITERAL(160, 33), // "on_daily_challenge_3_stateCha..."
QT_MOC_LITERAL(194, 33), // "on_daily_challenge_4_stateCha..."
QT_MOC_LITERAL(228, 8), // "get_seed"
QT_MOC_LITERAL(237, 26), // "on_buttonTransport_clicked"
QT_MOC_LITERAL(264, 22), // "on_tree_button_clicked"
QT_MOC_LITERAL(287, 12), // "enableButton"
QT_MOC_LITERAL(300, 22) // "on_send_button_clicked"

    },
    "MainWindow\0on_Surveybutton_clicked\0\0"
    "on_Scanbutton_clicked\0"
    "on_RefreshPushButton_clicked\0"
    "on_daily_challenge_1_stateChanged\0"
    "arg1\0on_daily_challenge_2_stateChanged\0"
    "on_daily_challenge_3_stateChanged\0"
    "on_daily_challenge_4_stateChanged\0"
    "get_seed\0on_buttonTransport_clicked\0"
    "on_tree_button_clicked\0enableButton\0"
    "on_send_button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x08,    1 /* Private */,
       3,    0,   87,    2, 0x08,    2 /* Private */,
       4,    0,   88,    2, 0x08,    3 /* Private */,
       5,    1,   89,    2, 0x08,    4 /* Private */,
       7,    1,   92,    2, 0x08,    6 /* Private */,
       8,    1,   95,    2, 0x08,    8 /* Private */,
       9,    1,   98,    2, 0x08,   10 /* Private */,
      10,    0,  101,    2, 0x08,   12 /* Private */,
      11,    0,  102,    2, 0x08,   13 /* Private */,
      12,    0,  103,    2, 0x08,   14 /* Private */,
      13,    0,  104,    2, 0x08,   15 /* Private */,
      14,    0,  105,    2, 0x08,   16 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_Surveybutton_clicked(); break;
        case 1: _t->on_Scanbutton_clicked(); break;
        case 2: _t->on_RefreshPushButton_clicked(); break;
        case 3: _t->on_daily_challenge_1_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_daily_challenge_2_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_daily_challenge_3_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_daily_challenge_4_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->get_seed(); break;
        case 8: _t->on_buttonTransport_clicked(); break;
        case 9: _t->on_tree_button_clicked(); break;
        case 10: _t->enableButton(); break;
        case 11: _t->on_send_button_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
