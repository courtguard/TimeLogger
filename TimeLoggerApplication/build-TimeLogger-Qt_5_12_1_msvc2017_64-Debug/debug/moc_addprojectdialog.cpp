/****************************************************************************
** Meta object code from reading C++ file 'addprojectdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TimeLogger/addprojectdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addprojectdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddProjectDialog_t {
    QByteArrayData data[11];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddProjectDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddProjectDialog_t qt_meta_stringdata_AddProjectDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "AddProjectDialog"
QT_MOC_LITERAL(1, 17, 11), // "dataUpdated"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 30), // "on_buttonCreateProject_clicked"
QT_MOC_LITERAL(4, 61, 30), // "on_buttonCancelProject_clicked"
QT_MOC_LITERAL(5, 92, 41), // "on_textEditProjectDescription..."
QT_MOC_LITERAL(6, 134, 34), // "on_lineEditProjectName_textCh..."
QT_MOC_LITERAL(7, 169, 4), // "arg1"
QT_MOC_LITERAL(8, 174, 34), // "on_lineEditCompanyName_textCh..."
QT_MOC_LITERAL(9, 209, 12), // "validateInfo"
QT_MOC_LITERAL(10, 222, 33) // "on_lineEditClientName_textCha..."

    },
    "AddProjectDialog\0dataUpdated\0\0"
    "on_buttonCreateProject_clicked\0"
    "on_buttonCancelProject_clicked\0"
    "on_textEditProjectDescription_textChanged\0"
    "on_lineEditProjectName_textChanged\0"
    "arg1\0on_lineEditCompanyName_textChanged\0"
    "validateInfo\0on_lineEditClientName_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddProjectDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    1,   58,    2, 0x08 /* Private */,
       8,    1,   61,    2, 0x08 /* Private */,
       9,    0,   64,    2, 0x08 /* Private */,
      10,    1,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void AddProjectDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AddProjectDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataUpdated(); break;
        case 1: _t->on_buttonCreateProject_clicked(); break;
        case 2: _t->on_buttonCancelProject_clicked(); break;
        case 3: _t->on_textEditProjectDescription_textChanged(); break;
        case 4: _t->on_lineEditProjectName_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_lineEditCompanyName_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->validateInfo(); break;
        case 7: _t->on_lineEditClientName_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AddProjectDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddProjectDialog::dataUpdated)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AddProjectDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_AddProjectDialog.data,
    qt_meta_data_AddProjectDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AddProjectDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddProjectDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddProjectDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AddProjectDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void AddProjectDialog::dataUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
