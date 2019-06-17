/****************************************************************************
** Meta object code from reading C++ file 'notepad.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../notepad.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notepad.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NotePad_t {
    QByteArrayData data[15];
    char stringdata0[266];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NotePad_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NotePad_t qt_meta_stringdata_NotePad = {
    {
QT_MOC_LITERAL(0, 0, 7), // "NotePad"
QT_MOC_LITERAL(1, 8, 13), // "onTextChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 30), // "on_comboBox_currentTextChanged"
QT_MOC_LITERAL(4, 54, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(5, 78, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(6, 102, 26), // "on_actionSave_as_triggered"
QT_MOC_LITERAL(7, 129, 22), // "on_button_undo_clicked"
QT_MOC_LITERAL(8, 152, 22), // "on_button_redo_clicked"
QT_MOC_LITERAL(9, 175, 22), // "on_actionNew_triggered"
QT_MOC_LITERAL(10, 198, 22), // "on_button_copy_clicked"
QT_MOC_LITERAL(11, 221, 23), // "on_button_paste_clicked"
QT_MOC_LITERAL(12, 245, 6), // "slot_1"
QT_MOC_LITERAL(13, 252, 6), // "slot_2"
QT_MOC_LITERAL(14, 259, 6) // "slot_3"

    },
    "NotePad\0onTextChanged\0\0"
    "on_comboBox_currentTextChanged\0"
    "on_actionOpen_triggered\0on_actionSave_triggered\0"
    "on_actionSave_as_triggered\0"
    "on_button_undo_clicked\0on_button_redo_clicked\0"
    "on_actionNew_triggered\0on_button_copy_clicked\0"
    "on_button_paste_clicked\0slot_1\0slot_2\0"
    "slot_3"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NotePad[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

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

void NotePad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NotePad *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onTextChanged(); break;
        case 1: _t->on_comboBox_currentTextChanged(); break;
        case 2: _t->on_actionOpen_triggered(); break;
        case 3: _t->on_actionSave_triggered(); break;
        case 4: _t->on_actionSave_as_triggered(); break;
        case 5: _t->on_button_undo_clicked(); break;
        case 6: _t->on_button_redo_clicked(); break;
        case 7: _t->on_actionNew_triggered(); break;
        case 8: _t->on_button_copy_clicked(); break;
        case 9: _t->on_button_paste_clicked(); break;
        case 10: _t->slot_1(); break;
        case 11: _t->slot_2(); break;
        case 12: _t->slot_3(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject NotePad::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_NotePad.data,
    qt_meta_data_NotePad,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NotePad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NotePad::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NotePad.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int NotePad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
