/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN10MainWindowE = QtMocHelpers::stringData(
    "MainWindow",
    "simulation_start",
    "",
    "simulation_stop",
    "on_simulation_start_button_clicked",
    "on_simulation_stop_button_clicked",
    "on_simulation_duration_input_valueChanged",
    "arg1",
    "on_pid_ti_input_valueChanged",
    "on_pid_td_input_valueChanged",
    "on_pid_kp_input_valueChanged",
    "on_generator_amplitude_input_valueChanged",
    "on_generator_frequency_input_valueChanged",
    "on_generator_generatortype_input_currentIndexChanged",
    "index",
    "on_arx_noise_input_valueChanged",
    "on_arx_noisetype_input_currentIndexChanged",
    "on_arx_delay_input_valueChanged",
    "on_arx_b_input_textChanged",
    "on_arx_a_input_textChanged",
    "on_simulation_reset_button_clicked",
    "on_simulation_interval_input_valueChanged",
    "action_save_as",
    "action_open",
    "action_simulation_export",
    "action_simulation_open"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN10MainWindowE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  146,    2, 0x08,    1 /* Private */,
       3,    0,  147,    2, 0x08,    2 /* Private */,
       4,    0,  148,    2, 0x08,    3 /* Private */,
       5,    0,  149,    2, 0x08,    4 /* Private */,
       6,    1,  150,    2, 0x08,    5 /* Private */,
       8,    1,  153,    2, 0x08,    7 /* Private */,
       9,    1,  156,    2, 0x08,    9 /* Private */,
      10,    1,  159,    2, 0x08,   11 /* Private */,
      11,    1,  162,    2, 0x08,   13 /* Private */,
      12,    1,  165,    2, 0x08,   15 /* Private */,
      13,    1,  168,    2, 0x08,   17 /* Private */,
      15,    1,  171,    2, 0x08,   19 /* Private */,
      16,    1,  174,    2, 0x08,   21 /* Private */,
      17,    1,  177,    2, 0x08,   23 /* Private */,
      18,    1,  180,    2, 0x08,   25 /* Private */,
      19,    1,  183,    2, 0x08,   27 /* Private */,
      20,    0,  186,    2, 0x08,   29 /* Private */,
      21,    1,  187,    2, 0x08,   30 /* Private */,
      22,    0,  190,    2, 0x08,   32 /* Private */,
      23,    0,  191,    2, 0x08,   33 /* Private */,
      24,    0,  192,    2, 0x08,   34 /* Private */,
      25,    0,  193,    2, 0x08,   35 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ZN10MainWindowE.offsetsAndSizes,
    qt_meta_data_ZN10MainWindowE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN10MainWindowE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'simulation_start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'simulation_stop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_simulation_start_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_simulation_stop_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_simulation_duration_input_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_pid_ti_input_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_pid_td_input_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_pid_kp_input_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_generator_amplitude_input_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_generator_frequency_input_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_generator_generatortype_input_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_arx_noise_input_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_arx_noisetype_input_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_arx_delay_input_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_arx_b_input_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_arx_a_input_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_simulation_reset_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_simulation_interval_input_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'action_save_as'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'action_open'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'action_simulation_export'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'action_simulation_open'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->simulation_start(); break;
        case 1: _t->simulation_stop(); break;
        case 2: _t->on_simulation_start_button_clicked(); break;
        case 3: _t->on_simulation_stop_button_clicked(); break;
        case 4: _t->on_simulation_duration_input_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 5: _t->on_pid_ti_input_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 6: _t->on_pid_td_input_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 7: _t->on_pid_kp_input_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 8: _t->on_generator_amplitude_input_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 9: _t->on_generator_frequency_input_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 10: _t->on_generator_generatortype_input_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->on_arx_noise_input_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 12: _t->on_arx_noisetype_input_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->on_arx_delay_input_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->on_arx_b_input_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->on_arx_a_input_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: _t->on_simulation_reset_button_clicked(); break;
        case 17: _t->on_simulation_interval_input_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->action_save_as(); break;
        case 19: _t->action_open(); break;
        case 20: _t->action_simulation_export(); break;
        case 21: _t->action_simulation_open(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN10MainWindowE.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 22;
    }
    return _id;
}
QT_WARNING_POP
