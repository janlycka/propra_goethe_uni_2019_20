/****************************************************************************
** Meta object code from reading C++ file 'gameoflifetab.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../gameoflifetab.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gameoflifetab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gameOfLifeTab_t {
    QByteArrayData data[10];
    char stringdata0[219];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gameOfLifeTab_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gameOfLifeTab_t qt_meta_stringdata_gameOfLifeTab = {
    {
QT_MOC_LITERAL(0, 0, 13), // "gameOfLifeTab"
QT_MOC_LITERAL(1, 14, 22), // "on_startButton_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 33), // "on_planeWidthSpinBox_valueCha..."
QT_MOC_LITERAL(4, 72, 4), // "arg1"
QT_MOC_LITERAL(5, 77, 34), // "on_planeHeightSpinBox_valueCh..."
QT_MOC_LITERAL(6, 112, 26), // "on_randomizeButton_clicked"
QT_MOC_LITERAL(7, 139, 31), // "on_intervalSpinBox_valueChanged"
QT_MOC_LITERAL(8, 171, 23), // "on_importButton_clicked"
QT_MOC_LITERAL(9, 195, 23) // "on_exportButton_clicked"

    },
    "gameOfLifeTab\0on_startButton_clicked\0"
    "\0on_planeWidthSpinBox_valueChanged\0"
    "arg1\0on_planeHeightSpinBox_valueChanged\0"
    "on_randomizeButton_clicked\0"
    "on_intervalSpinBox_valueChanged\0"
    "on_importButton_clicked\0on_exportButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gameOfLifeTab[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    1,   50,    2, 0x08 /* Private */,
       5,    1,   53,    2, 0x08 /* Private */,
       6,    0,   56,    2, 0x08 /* Private */,
       7,    1,   57,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gameOfLifeTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<gameOfLifeTab *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_startButton_clicked(); break;
        case 1: _t->on_planeWidthSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_planeHeightSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_randomizeButton_clicked(); break;
        case 4: _t->on_intervalSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_importButton_clicked(); break;
        case 6: _t->on_exportButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gameOfLifeTab::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_gameOfLifeTab.data,
    qt_meta_data_gameOfLifeTab,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gameOfLifeTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gameOfLifeTab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gameOfLifeTab.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int gameOfLifeTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
