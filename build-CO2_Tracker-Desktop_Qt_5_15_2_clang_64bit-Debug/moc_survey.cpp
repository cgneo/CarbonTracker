/****************************************************************************
** Meta object code from reading C++ file 'survey.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../CO2_Tracker/survey.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'survey.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Survey_t {
    QByteArrayData data[10];
    char stringdata0[241];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Survey_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Survey_t qt_meta_stringdata_Survey = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Survey"
QT_MOC_LITERAL(1, 7, 21), // "on_buttonMain_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 29), // "on_buttonNextHousing1_clicked"
QT_MOC_LITERAL(4, 60, 29), // "on_buttonNextHousing2_clicked"
QT_MOC_LITERAL(5, 90, 29), // "on_buttonNextHousing3_clicked"
QT_MOC_LITERAL(6, 120, 31), // "on_buttonNextTransport1_clicked"
QT_MOC_LITERAL(7, 152, 31), // "on_buttonNextTransport2_clicked"
QT_MOC_LITERAL(8, 184, 31), // "on_buttonNextTransport3_clicked"
QT_MOC_LITERAL(9, 216, 24) // "on_buttonAccount_clicked"

    },
    "Survey\0on_buttonMain_clicked\0\0"
    "on_buttonNextHousing1_clicked\0"
    "on_buttonNextHousing2_clicked\0"
    "on_buttonNextHousing3_clicked\0"
    "on_buttonNextTransport1_clicked\0"
    "on_buttonNextTransport2_clicked\0"
    "on_buttonNextTransport3_clicked\0"
    "on_buttonAccount_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Survey[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Survey::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Survey *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_buttonMain_clicked(); break;
        case 1: _t->on_buttonNextHousing1_clicked(); break;
        case 2: _t->on_buttonNextHousing2_clicked(); break;
        case 3: _t->on_buttonNextHousing3_clicked(); break;
        case 4: _t->on_buttonNextTransport1_clicked(); break;
        case 5: _t->on_buttonNextTransport2_clicked(); break;
        case 6: _t->on_buttonNextTransport3_clicked(); break;
        case 7: _t->on_buttonAccount_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Survey::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Survey.data,
    qt_meta_data_Survey,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Survey::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Survey::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Survey.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Survey::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE