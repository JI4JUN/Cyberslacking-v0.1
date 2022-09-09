/****************************************************************************
** Meta object code from reading C++ file 'globalsignaltable.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../globalsignaltable.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'globalsignaltable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GlobalSignalTable_t {
    QByteArrayData data[14];
    char stringdata0[242];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GlobalSignalTable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GlobalSignalTable_t qt_meta_stringdata_GlobalSignalTable = {
    {
QT_MOC_LITERAL(0, 0, 17), // "GlobalSignalTable"
QT_MOC_LITERAL(1, 18, 26), // "res_init_pushButton_signal"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 15), // "Initialization*"
QT_MOC_LITERAL(4, 62, 7), // "initWgt"
QT_MOC_LITERAL(5, 70, 26), // "req_init_pushButton_signal"
QT_MOC_LITERAL(6, 97, 29), // "res_current_pushButton_signal"
QT_MOC_LITERAL(7, 127, 22), // "CurrentUserDataWidget*"
QT_MOC_LITERAL(8, 150, 6), // "curWgt"
QT_MOC_LITERAL(9, 157, 29), // "req_current_pushButton_signal"
QT_MOC_LITERAL(10, 187, 37), // "res_confirm_pushButton_clicke..."
QT_MOC_LITERAL(11, 225, 4), // "hour"
QT_MOC_LITERAL(12, 230, 4), // "days"
QT_MOC_LITERAL(13, 235, 6) // "income"

    },
    "GlobalSignalTable\0res_init_pushButton_signal\0"
    "\0Initialization*\0initWgt\0"
    "req_init_pushButton_signal\0"
    "res_current_pushButton_signal\0"
    "CurrentUserDataWidget*\0curWgt\0"
    "req_current_pushButton_signal\0"
    "res_confirm_pushButton_clicked_signal\0"
    "hour\0days\0income"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GlobalSignalTable[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,
       6,    1,   45,    2, 0x06 /* Public */,
       9,    1,   48,    2, 0x06 /* Public */,
      10,    3,   51,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,   11,   12,   13,

       0        // eod
};

void GlobalSignalTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GlobalSignalTable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->res_init_pushButton_signal((*reinterpret_cast< Initialization*(*)>(_a[1]))); break;
        case 1: _t->req_init_pushButton_signal((*reinterpret_cast< Initialization*(*)>(_a[1]))); break;
        case 2: _t->res_current_pushButton_signal((*reinterpret_cast< CurrentUserDataWidget*(*)>(_a[1]))); break;
        case 3: _t->req_current_pushButton_signal((*reinterpret_cast< CurrentUserDataWidget*(*)>(_a[1]))); break;
        case 4: _t->res_confirm_pushButton_clicked_signal((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Initialization* >(); break;
            }
            break;
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
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CurrentUserDataWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GlobalSignalTable::*)(Initialization * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalSignalTable::res_init_pushButton_signal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GlobalSignalTable::*)(Initialization * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalSignalTable::req_init_pushButton_signal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GlobalSignalTable::*)(CurrentUserDataWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalSignalTable::res_current_pushButton_signal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GlobalSignalTable::*)(CurrentUserDataWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalSignalTable::req_current_pushButton_signal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GlobalSignalTable::*)(double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalSignalTable::res_confirm_pushButton_clicked_signal)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GlobalSignalTable::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_GlobalSignalTable.data,
    qt_meta_data_GlobalSignalTable,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GlobalSignalTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GlobalSignalTable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalSignalTable.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GlobalSignalTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void GlobalSignalTable::res_init_pushButton_signal(Initialization * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GlobalSignalTable::req_init_pushButton_signal(Initialization * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GlobalSignalTable::res_current_pushButton_signal(CurrentUserDataWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GlobalSignalTable::req_current_pushButton_signal(CurrentUserDataWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GlobalSignalTable::res_confirm_pushButton_clicked_signal(double _t1, double _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
