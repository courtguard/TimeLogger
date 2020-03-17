/****************************************************************************
** Meta object code from reading C++ file 'mydatabase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TimeLogger/mydatabase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mydatabase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyDatabase_t {
    QByteArrayData data[29];
    char stringdata0[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyDatabase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyDatabase_t qt_meta_stringdata_MyDatabase = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MyDatabase"
QT_MOC_LITERAL(1, 11, 11), // "updateHours"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 5), // "hours"
QT_MOC_LITERAL(4, 30, 9), // "setValues"
QT_MOC_LITERAL(5, 40, 11), // "QPieSeries*"
QT_MOC_LITERAL(6, 52, 6), // "series"
QT_MOC_LITERAL(7, 59, 7), // "setDays"
QT_MOC_LITERAL(8, 67, 6), // "monday"
QT_MOC_LITERAL(9, 74, 7), // "tuesday"
QT_MOC_LITERAL(10, 82, 9), // "wednesday"
QT_MOC_LITERAL(11, 92, 8), // "thursday"
QT_MOC_LITERAL(12, 101, 6), // "friday"
QT_MOC_LITERAL(13, 108, 8), // "saturday"
QT_MOC_LITERAL(14, 117, 6), // "sunday"
QT_MOC_LITERAL(15, 124, 11), // "setProjects"
QT_MOC_LITERAL(16, 136, 7), // "project"
QT_MOC_LITERAL(17, 144, 1), // "i"
QT_MOC_LITERAL(18, 146, 8), // "setHours"
QT_MOC_LITERAL(19, 155, 4), // "date"
QT_MOC_LITERAL(20, 160, 5), // "value"
QT_MOC_LITERAL(21, 166, 1), // "j"
QT_MOC_LITERAL(22, 168, 10), // "setReports"
QT_MOC_LITERAL(23, 179, 1), // "m"
QT_MOC_LITERAL(24, 181, 1), // "k"
QT_MOC_LITERAL(25, 183, 4), // "text"
QT_MOC_LITERAL(26, 188, 11), // "setCheckBox"
QT_MOC_LITERAL(27, 200, 11), // "dataUpdated"
QT_MOC_LITERAL(28, 212, 10) // "addButtons"

    },
    "MyDatabase\0updateHours\0\0hours\0setValues\0"
    "QPieSeries*\0series\0setDays\0monday\0"
    "tuesday\0wednesday\0thursday\0friday\0"
    "saturday\0sunday\0setProjects\0project\0"
    "i\0setHours\0date\0value\0j\0setReports\0m\0"
    "k\0text\0setCheckBox\0dataUpdated\0"
    "addButtons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyDatabase[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       7,    7,   65,    2, 0x06 /* Public */,
      15,    2,   80,    2, 0x06 /* Public */,
      18,    3,   85,    2, 0x06 /* Public */,
      22,    3,   92,    2, 0x06 /* Public */,
      26,    1,   99,    2, 0x06 /* Public */,
      27,    0,  102,    2, 0x06 /* Public */,
      28,    1,  103,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    8,    9,   10,   11,   12,   13,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   16,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,   19,   20,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,   23,   24,   25,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   23,

       0        // eod
};

void MyDatabase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyDatabase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateHours((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setValues((*reinterpret_cast< QPieSeries*(*)>(_a[1]))); break;
        case 2: _t->setDays((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7]))); break;
        case 3: _t->setProjects((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->setHours((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->setReports((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 6: _t->setCheckBox((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->dataUpdated(); break;
        case 8: _t->addButtons((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPieSeries* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyDatabase::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDatabase::updateHours)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MyDatabase::*)(QPieSeries * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDatabase::setValues)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MyDatabase::*)(int , int , int , int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDatabase::setDays)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MyDatabase::*)(QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDatabase::setProjects)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MyDatabase::*)(QString , QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDatabase::setHours)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MyDatabase::*)(int , int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDatabase::setReports)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MyDatabase::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDatabase::setCheckBox)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MyDatabase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDatabase::dataUpdated)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MyDatabase::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDatabase::addButtons)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyDatabase::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MyDatabase.data,
    qt_meta_data_MyDatabase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyDatabase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyDatabase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyDatabase.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MyDatabase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void MyDatabase::updateHours(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyDatabase::setValues(QPieSeries * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MyDatabase::setDays(int _t1, int _t2, int _t3, int _t4, int _t5, int _t6, int _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MyDatabase::setProjects(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MyDatabase::setHours(QString _t1, QString _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MyDatabase::setReports(int _t1, int _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MyDatabase::setCheckBox(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MyDatabase::dataUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MyDatabase::addButtons(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
