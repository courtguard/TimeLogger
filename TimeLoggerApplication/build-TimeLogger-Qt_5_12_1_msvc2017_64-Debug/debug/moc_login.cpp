/****************************************************************************
** Meta object code from reading C++ file 'login.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TimeLogger/login.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'login.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Login_t {
    QByteArrayData data[16];
    char stringdata0[367];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Login_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Login_t qt_meta_stringdata_Login = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Login"
QT_MOC_LITERAL(1, 6, 11), // "dataUpdated"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 22), // "on_buttonLogIn_clicked"
QT_MOC_LITERAL(4, 42, 22), // "on_buttoSignUp_clicked"
QT_MOC_LITERAL(5, 65, 27), // "on_buttonLogInCheck_clicked"
QT_MOC_LITERAL(6, 93, 28), // "on_buttonSignUpCheck_clicked"
QT_MOC_LITERAL(7, 122, 31), // "on_lineEditName_editingFinished"
QT_MOC_LITERAL(8, 154, 34), // "on_lineEditSurname_editingFin..."
QT_MOC_LITERAL(9, 189, 31), // "on_lineEditUser_editingFinished"
QT_MOC_LITERAL(10, 221, 35), // "on_lineEditPassword_editingFi..."
QT_MOC_LITERAL(11, 257, 34), // "on_lineEditUserLog_editingFin..."
QT_MOC_LITERAL(12, 292, 34), // "on_lineEditPassLog_editingFin..."
QT_MOC_LITERAL(13, 327, 11), // "validateLog"
QT_MOC_LITERAL(14, 339, 12), // "validateSign"
QT_MOC_LITERAL(15, 352, 14) // "selectedButton"

    },
    "Login\0dataUpdated\0\0on_buttonLogIn_clicked\0"
    "on_buttoSignUp_clicked\0"
    "on_buttonLogInCheck_clicked\0"
    "on_buttonSignUpCheck_clicked\0"
    "on_lineEditName_editingFinished\0"
    "on_lineEditSurname_editingFinished\0"
    "on_lineEditUser_editingFinished\0"
    "on_lineEditPassword_editingFinished\0"
    "on_lineEditUserLog_editingFinished\0"
    "on_lineEditPassLog_editingFinished\0"
    "validateLog\0validateSign\0selectedButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Login[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void Login::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Login *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataUpdated(); break;
        case 1: _t->on_buttonLogIn_clicked(); break;
        case 2: _t->on_buttoSignUp_clicked(); break;
        case 3: _t->on_buttonLogInCheck_clicked(); break;
        case 4: _t->on_buttonSignUpCheck_clicked(); break;
        case 5: _t->on_lineEditName_editingFinished(); break;
        case 6: _t->on_lineEditSurname_editingFinished(); break;
        case 7: _t->on_lineEditUser_editingFinished(); break;
        case 8: _t->on_lineEditPassword_editingFinished(); break;
        case 9: _t->on_lineEditUserLog_editingFinished(); break;
        case 10: _t->on_lineEditPassLog_editingFinished(); break;
        case 11: _t->validateLog(); break;
        case 12: _t->validateSign(); break;
        case 13: _t->selectedButton(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Login::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Login::dataUpdated)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Login::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_Login.data,
    qt_meta_data_Login,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Login::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Login::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Login.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Login::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Login::dataUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
