/****************************************************************************
** Meta object code from reading C++ file 'cryptowidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../cryptowidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cryptowidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cryptowidget_t {
    QByteArrayData data[22];
    char stringdata0[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cryptowidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cryptowidget_t qt_meta_stringdata_cryptowidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "cryptowidget"
QT_MOC_LITERAL(1, 13, 8), // "drawGrid"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 9), // "QPainter&"
QT_MOC_LITERAL(4, 33, 7), // "painter"
QT_MOC_LITERAL(5, 41, 9), // "drawCells"
QT_MOC_LITERAL(6, 51, 10), // "clearPlane"
QT_MOC_LITERAL(7, 62, 13), // "surroundCells"
QT_MOC_LITERAL(8, 76, 6), // "xCoord"
QT_MOC_LITERAL(9, 83, 6), // "yCoord"
QT_MOC_LITERAL(10, 90, 10), // "evolveCell"
QT_MOC_LITERAL(11, 101, 11), // "evolvePlane"
QT_MOC_LITERAL(12, 113, 7), // "copyVec"
QT_MOC_LITERAL(13, 121, 18), // "std::vector<short>"
QT_MOC_LITERAL(14, 140, 4), // "from"
QT_MOC_LITERAL(15, 145, 19), // "std::vector<short>&"
QT_MOC_LITERAL(16, 165, 2), // "to"
QT_MOC_LITERAL(17, 168, 9), // "randomize"
QT_MOC_LITERAL(18, 178, 18), // "addHorizontalCells"
QT_MOC_LITERAL(19, 197, 9), // "rowAmount"
QT_MOC_LITERAL(20, 207, 16), // "addVerticalCells"
QT_MOC_LITERAL(21, 224, 12) // "columnAmount"

    },
    "cryptowidget\0drawGrid\0\0QPainter&\0"
    "painter\0drawCells\0clearPlane\0surroundCells\0"
    "xCoord\0yCoord\0evolveCell\0evolvePlane\0"
    "copyVec\0std::vector<short>\0from\0"
    "std::vector<short>&\0to\0randomize\0"
    "addHorizontalCells\0rowAmount\0"
    "addVerticalCells\0columnAmount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cryptowidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x0a /* Public */,
       5,    1,   77,    2, 0x0a /* Public */,
       6,    0,   80,    2, 0x0a /* Public */,
       7,    2,   81,    2, 0x0a /* Public */,
      10,    2,   86,    2, 0x0a /* Public */,
      11,    0,   91,    2, 0x0a /* Public */,
      12,    2,   92,    2, 0x0a /* Public */,
      17,    0,   97,    2, 0x0a /* Public */,
      18,    1,   98,    2, 0x0a /* Public */,
      18,    0,  101,    2, 0x2a /* Public | MethodCloned */,
      20,    1,  102,    2, 0x0a /* Public */,
      20,    0,  105,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Short, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::Short, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 15,   14,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void,

       0        // eod
};

void cryptowidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cryptowidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->drawGrid((*reinterpret_cast< QPainter(*)>(_a[1]))); break;
        case 1: _t->drawCells((*reinterpret_cast< QPainter(*)>(_a[1]))); break;
        case 2: _t->clearPlane(); break;
        case 3: { short _r = _t->surroundCells((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< short*>(_a[0]) = std::move(_r); }  break;
        case 4: { short _r = _t->evolveCell((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< short*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->evolvePlane(); break;
        case 6: _t->copyVec((*reinterpret_cast< std::vector<short>(*)>(_a[1])),(*reinterpret_cast< std::vector<short>(*)>(_a[2]))); break;
        case 7: _t->randomize(); break;
        case 8: _t->addHorizontalCells((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->addHorizontalCells(); break;
        case 10: _t->addVerticalCells((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->addVerticalCells(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject cryptowidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_cryptowidget.data,
    qt_meta_data_cryptowidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cryptowidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cryptowidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cryptowidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int cryptowidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
