/****************************************************************************
** Meta object code from reading C++ file 'desktop.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../code/main/desktop.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'desktop.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Desktop_t {
    QByteArrayData data[20];
    char stringdata0[423];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Desktop_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Desktop_t qt_meta_stringdata_Desktop = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Desktop"
QT_MOC_LITERAL(1, 8, 17), // "updateCurrentTime"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 27), // "on_actionShutdown_triggered"
QT_MOC_LITERAL(4, 55, 18), // "on_notepad_clicked"
QT_MOC_LITERAL(5, 74, 22), // "on_text_editor_clicked"
QT_MOC_LITERAL(6, 97, 22), // "on_tic_tac_toe_clicked"
QT_MOC_LITERAL(7, 120, 23), // "on_image_viewer_clicked"
QT_MOC_LITERAL(8, 144, 21), // "on_calculator_clicked"
QT_MOC_LITERAL(9, 166, 22), // "on_create_file_clicked"
QT_MOC_LITERAL(10, 189, 22), // "on_delete_file_clicked"
QT_MOC_LITERAL(11, 212, 20), // "on_copy_file_clicked"
QT_MOC_LITERAL(12, 233, 20), // "on_move_file_clicked"
QT_MOC_LITERAL(13, 254, 26), // "on_check_file_info_clicked"
QT_MOC_LITERAL(14, 281, 25), // "on_file_encryptor_clicked"
QT_MOC_LITERAL(15, 307, 25), // "on_file_decryptor_clicked"
QT_MOC_LITERAL(16, 333, 25), // "on_text_encryptor_clicked"
QT_MOC_LITERAL(17, 359, 25), // "on_text_decryptor_clicked"
QT_MOC_LITERAL(18, 385, 19), // "on_calender_clicked"
QT_MOC_LITERAL(19, 405, 17) // "on_b_time_clicked"

    },
    "Desktop\0updateCurrentTime\0\0"
    "on_actionShutdown_triggered\0"
    "on_notepad_clicked\0on_text_editor_clicked\0"
    "on_tic_tac_toe_clicked\0on_image_viewer_clicked\0"
    "on_calculator_clicked\0on_create_file_clicked\0"
    "on_delete_file_clicked\0on_copy_file_clicked\0"
    "on_move_file_clicked\0on_check_file_info_clicked\0"
    "on_file_encryptor_clicked\0"
    "on_file_decryptor_clicked\0"
    "on_text_encryptor_clicked\0"
    "on_text_decryptor_clicked\0on_calender_clicked\0"
    "on_b_time_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Desktop[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x08 /* Private */,
       3,    0,  105,    2, 0x08 /* Private */,
       4,    0,  106,    2, 0x08 /* Private */,
       5,    0,  107,    2, 0x08 /* Private */,
       6,    0,  108,    2, 0x08 /* Private */,
       7,    0,  109,    2, 0x08 /* Private */,
       8,    0,  110,    2, 0x08 /* Private */,
       9,    0,  111,    2, 0x08 /* Private */,
      10,    0,  112,    2, 0x08 /* Private */,
      11,    0,  113,    2, 0x08 /* Private */,
      12,    0,  114,    2, 0x08 /* Private */,
      13,    0,  115,    2, 0x08 /* Private */,
      14,    0,  116,    2, 0x08 /* Private */,
      15,    0,  117,    2, 0x08 /* Private */,
      16,    0,  118,    2, 0x08 /* Private */,
      17,    0,  119,    2, 0x08 /* Private */,
      18,    0,  120,    2, 0x08 /* Private */,
      19,    0,  121,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Desktop::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Desktop *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateCurrentTime(); break;
        case 1: _t->on_actionShutdown_triggered(); break;
        case 2: _t->on_notepad_clicked(); break;
        case 3: _t->on_text_editor_clicked(); break;
        case 4: _t->on_tic_tac_toe_clicked(); break;
        case 5: _t->on_image_viewer_clicked(); break;
        case 6: _t->on_calculator_clicked(); break;
        case 7: _t->on_create_file_clicked(); break;
        case 8: _t->on_delete_file_clicked(); break;
        case 9: _t->on_copy_file_clicked(); break;
        case 10: _t->on_move_file_clicked(); break;
        case 11: _t->on_check_file_info_clicked(); break;
        case 12: _t->on_file_encryptor_clicked(); break;
        case 13: _t->on_file_decryptor_clicked(); break;
        case 14: _t->on_text_encryptor_clicked(); break;
        case 15: _t->on_text_decryptor_clicked(); break;
        case 16: _t->on_calender_clicked(); break;
        case 17: _t->on_b_time_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Desktop::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_Desktop.data,
    qt_meta_data_Desktop,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Desktop::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Desktop::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Desktop.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Desktop::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
