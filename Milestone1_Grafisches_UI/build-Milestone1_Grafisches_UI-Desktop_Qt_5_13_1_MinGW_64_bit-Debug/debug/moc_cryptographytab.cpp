/****************************************************************************
** Meta object code from reading C++ file 'cryptographytab.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Milestone1_Grafisches_UI/cryptographytab.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cryptographytab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cryptographytab_t {
    QByteArrayData data[13];
    char stringdata0[275];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cryptographytab_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cryptographytab_t qt_meta_stringdata_cryptographytab = {
    {
QT_MOC_LITERAL(0, 0, 15), // "cryptographytab"
QT_MOC_LITERAL(1, 16, 23), // "on_encodeButton_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 26), // "on_createKeyButton_clicked"
QT_MOC_LITERAL(4, 68, 23), // "on_decodeButton_clicked"
QT_MOC_LITERAL(5, 92, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(6, 116, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(7, 140, 21), // "on_comboBox_activated"
QT_MOC_LITERAL(8, 162, 4), // "arg1"
QT_MOC_LITERAL(9, 167, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(10, 199, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(11, 223, 23), // "on_ImportButton_clicked"
QT_MOC_LITERAL(12, 247, 27) // "on_importbildbutton_clicked"

    },
    "cryptographytab\0on_encodeButton_clicked\0"
    "\0on_createKeyButton_clicked\0"
    "on_decodeButton_clicked\0on_pushButton_2_clicked\0"
    "on_pushButton_3_clicked\0on_comboBox_activated\0"
    "arg1\0on_comboBox_currentIndexChanged\0"
    "on_pushButton_4_clicked\0on_ImportButton_clicked\0"
    "on_importbildbutton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cryptographytab[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    1,   69,    2, 0x08 /* Private */,
       9,    1,   72,    2, 0x08 /* Private */,
      10,    0,   75,    2, 0x08 /* Private */,
      11,    0,   76,    2, 0x08 /* Private */,
      12,    0,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cryptographytab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cryptographytab *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_encodeButton_clicked(); break;
        case 1: _t->on_createKeyButton_clicked(); break;
        case 2: _t->on_decodeButton_clicked(); break;
        /*case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->on_pushButton_3_clicked(); break;
        case 5: _t->on_comboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;*/
        case 6: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_pushButton_4_clicked(); break;
        case 8: _t->on_ImportButton_clicked(); break;
        case 9: _t->on_importbildbutton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject cryptographytab::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_cryptographytab.data,
    qt_meta_data_cryptographytab,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cryptographytab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cryptographytab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cryptographytab.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int cryptographytab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
