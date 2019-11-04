/****************************************************************************
** Meta object code from reading C++ file 'golwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Milestone1_Grafisches_UI/golwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'golwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GolWidget_t {
    QByteArrayData data[24];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GolWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GolWidget_t qt_meta_stringdata_GolWidget = {
    {
QT_MOC_LITERAL(0, 0, 9), // "GolWidget"
QT_MOC_LITERAL(1, 10, 8), // "drawGrid"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 9), // "QPainter&"
QT_MOC_LITERAL(4, 30, 7), // "painter"
QT_MOC_LITERAL(5, 38, 9), // "drawCells"
QT_MOC_LITERAL(6, 48, 10), // "clearPlane"
QT_MOC_LITERAL(7, 59, 13), // "surroundCells"
QT_MOC_LITERAL(8, 73, 6), // "xCoord"
QT_MOC_LITERAL(9, 80, 6), // "yCoord"
QT_MOC_LITERAL(10, 87, 10), // "evolveCell"
QT_MOC_LITERAL(11, 98, 11), // "evolvePlane"
QT_MOC_LITERAL(12, 110, 7), // "copyVec"
QT_MOC_LITERAL(13, 118, 18), // "std::vector<short>"
QT_MOC_LITERAL(14, 137, 4), // "from"
QT_MOC_LITERAL(15, 142, 19), // "std::vector<short>&"
QT_MOC_LITERAL(16, 162, 2), // "to"
QT_MOC_LITERAL(17, 165, 9), // "randomize"
QT_MOC_LITERAL(18, 175, 18), // "addHorizontalCells"
QT_MOC_LITERAL(19, 194, 9), // "rowAmount"
QT_MOC_LITERAL(20, 204, 16), // "addVerticalCells"
QT_MOC_LITERAL(21, 221, 12), // "columnAmount"
QT_MOC_LITERAL(22, 234, 13), // "fillWithBlank"
QT_MOC_LITERAL(23, 248, 12) // "printCellVec"

    },
    "GolWidget\0drawGrid\0\0QPainter&\0painter\0"
    "drawCells\0clearPlane\0surroundCells\0"
    "xCoord\0yCoord\0evolveCell\0evolvePlane\0"
    "copyVec\0std::vector<short>\0from\0"
    "std::vector<short>&\0to\0randomize\0"
    "addHorizontalCells\0rowAmount\0"
    "addVerticalCells\0columnAmount\0"
    "fillWithBlank\0printCellVec"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GolWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x0a /* Public */,
       5,    1,   87,    2, 0x0a /* Public */,
       6,    0,   90,    2, 0x0a /* Public */,
       7,    2,   91,    2, 0x0a /* Public */,
      10,    2,   96,    2, 0x0a /* Public */,
      11,    0,  101,    2, 0x0a /* Public */,
      12,    2,  102,    2, 0x0a /* Public */,
      17,    0,  107,    2, 0x0a /* Public */,
      18,    1,  108,    2, 0x0a /* Public */,
      18,    0,  111,    2, 0x2a /* Public | MethodCloned */,
      20,    1,  112,    2, 0x0a /* Public */,
      20,    0,  115,    2, 0x2a /* Public | MethodCloned */,
      22,    0,  116,    2, 0x0a /* Public */,
      23,    0,  117,    2, 0x0a /* Public */,

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
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GolWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GolWidget *>(_o);
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
        case 12: _t->fillWithBlank(); break;
        case 13: _t->printCellVec(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GolWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_GolWidget.data,
    qt_meta_data_GolWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GolWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GolWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GolWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GolWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
