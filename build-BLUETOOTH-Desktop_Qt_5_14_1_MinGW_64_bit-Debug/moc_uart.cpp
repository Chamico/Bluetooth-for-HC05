/****************************************************************************
** Meta object code from reading C++ file 'uart.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../BLUETOOTH/Uart/uart.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uart.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Uart_t {
    QByteArrayData data[5];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Uart_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Uart_t qt_meta_stringdata_Uart = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Uart"
QT_MOC_LITERAL(1, 5, 51), // "signals_uart_radioButton_blue..."
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 50), // "signals_uart_radioButton_blue..."
QT_MOC_LITERAL(4, 109, 46) // "signals_uart_comboBox_avaliab..."

    },
    "Uart\0signals_uart_radioButton_bluetooth_close_setChecked\0"
    "\0signals_uart_radioButton_bluetooth_open_setChecked\0"
    "signals_uart_comboBox_avaliable_serialport_Set"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Uart[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       3,    1,   32,    2, 0x06 /* Public */,
       4,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void Uart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Uart *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signals_uart_radioButton_bluetooth_close_setChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->signals_uart_radioButton_bluetooth_open_setChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->signals_uart_comboBox_avaliable_serialport_Set((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Uart::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Uart::signals_uart_radioButton_bluetooth_close_setChecked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Uart::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Uart::signals_uart_radioButton_bluetooth_open_setChecked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Uart::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Uart::signals_uart_comboBox_avaliable_serialport_Set)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Uart::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Uart.data,
    qt_meta_data_Uart,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Uart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Uart::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Uart.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Uart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Uart::signals_uart_radioButton_bluetooth_close_setChecked(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Uart::signals_uart_radioButton_bluetooth_open_setChecked(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Uart::signals_uart_comboBox_avaliable_serialport_Set(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
