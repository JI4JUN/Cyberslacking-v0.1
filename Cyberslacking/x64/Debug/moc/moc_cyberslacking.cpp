/****************************************************************************
** Meta object code from reading C++ file 'cyberslacking.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../cyberslacking.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cyberslacking.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cyberslacking_t {
    QByteArrayData data[11];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cyberslacking_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cyberslacking_t qt_meta_stringdata_Cyberslacking = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Cyberslacking"
QT_MOC_LITERAL(1, 14, 11), // "time_update"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 27), // "res_init_pushButton_clicked"
QT_MOC_LITERAL(4, 55, 15), // "Initialization*"
QT_MOC_LITERAL(5, 71, 7), // "initWgt"
QT_MOC_LITERAL(6, 79, 30), // "res_current_pushButton_clicked"
QT_MOC_LITERAL(7, 110, 22), // "CurrentUserDataWidget*"
QT_MOC_LITERAL(8, 133, 6), // "curWgt"
QT_MOC_LITERAL(9, 140, 10), // "work_start"
QT_MOC_LITERAL(10, 151, 29) // "on_offwork_pushButton_clicked"

    },
    "Cyberslacking\0time_update\0\0"
    "res_init_pushButton_clicked\0Initialization*\0"
    "initWgt\0res_current_pushButton_clicked\0"
    "CurrentUserDataWidget*\0curWgt\0work_start\0"
    "on_offwork_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cyberslacking[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,
       9,    0,   46,    2, 0x08 /* Private */,
      10,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Cyberslacking::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Cyberslacking *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->time_update(); break;
        case 1: _t->res_init_pushButton_clicked((*reinterpret_cast< Initialization*(*)>(_a[1]))); break;
        case 2: _t->res_current_pushButton_clicked((*reinterpret_cast< CurrentUserDataWidget*(*)>(_a[1]))); break;
        case 3: _t->work_start(); break;
        case 4: _t->on_offwork_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Initialization* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CurrentUserDataWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Cyberslacking::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Cyberslacking.data,
    qt_meta_data_Cyberslacking,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Cyberslacking::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cyberslacking::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cyberslacking.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Cyberslacking::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
