/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
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
    "tikTimer",
    "",
    "wartosciPlot",
    "sterPlot",
    "uchybPlot",
    "clearWart",
    "clearSter",
    "clearRegulator",
    "addKrok",
    "krok",
    "addZad",
    "wzad",
    "addReg",
    "wreg",
    "addUchyb",
    "wuchyb",
    "addWster",
    "wster",
    "addWP",
    "p",
    "addWI",
    "i",
    "addWD",
    "d",
    "on_startButton_clicked",
    "on_stopButton_clicked",
    "on_krokButton_clicked",
    "on_resetButton_clicked",
    "on_speedButton_clicked",
    "on_PotwierdButton_clicked",
    "on_PotwierdzARX_clicked",
    "on_pButton_clicked",
    "on_iButton_clicked",
    "on_dButton_clicked",
    "on_aKtoraSpin_valueChanged",
    "arg1",
    "on_bKtoraSpin_valueChanged",
    "on_granicaStanButton_clicked",
    "on_granicaWprowadzButton_clicked",
    "on_gornaSpin_valueChanged",
    "on_dolnaSpin_valueChanged",
    "on_clear_I_clicked",
    "on_clear_D_clicked",
    "on_Testuj_ARX_clicked",
    "on_Testuj_PID_clicked",
    "on_Testuj_UAR_clicked",
    "on_stanStatyczny_clicked",
    "on_PotwierdzStatyczny_clicked",
    "on_zapiszButton_clicked",
    "on_wczytajButton_clicked",
    "on_zapiszButton_all_clicked",
    "on_wczytajButton_all_clicked",
    "on_sledzWartosciCombo_currentIndexChanged",
    "index",
    "on_sledzUchybCombo_currentIndexChanged",
    "on_sledzPIDCombo_currentIndexChanged",
    "on_insert_checkStateChanged",
    "Qt::CheckState",
    "on_szybkoscSimSpin_valueChanged",
    "on_ampSkokSpin_valueChanged",
    "on_ampSinusSpin_valueChanged",
    "on_ampProstokatSpin_valueChanged",
    "on_okresSinusSpin_valueChanged",
    "on_okresProstokatSpin_valueChanged",
    "on_wypelnienieProstokatSpin_valueChanged",
    "on_suStatic_spin_valueChanged",
    "on_preStatic_spin_valueChanged",
    "on_pSpin_valueChanged",
    "on_iSpin_valueChanged",
    "on_dSpin_valueChanged",
    "on_sposob_sumy_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN10MainWindowE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      59,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  368,    2, 0x08,    1 /* Private */,
       3,    0,  369,    2, 0x08,    2 /* Private */,
       4,    0,  370,    2, 0x08,    3 /* Private */,
       5,    0,  371,    2, 0x08,    4 /* Private */,
       6,    0,  372,    2, 0x08,    5 /* Private */,
       7,    0,  373,    2, 0x08,    6 /* Private */,
       8,    0,  374,    2, 0x08,    7 /* Private */,
       9,    1,  375,    2, 0x08,    8 /* Private */,
      11,    1,  378,    2, 0x08,   10 /* Private */,
      13,    1,  381,    2, 0x08,   12 /* Private */,
      15,    1,  384,    2, 0x08,   14 /* Private */,
      17,    1,  387,    2, 0x08,   16 /* Private */,
      19,    1,  390,    2, 0x08,   18 /* Private */,
      21,    1,  393,    2, 0x08,   20 /* Private */,
      23,    1,  396,    2, 0x08,   22 /* Private */,
      25,    0,  399,    2, 0x08,   24 /* Private */,
      26,    0,  400,    2, 0x08,   25 /* Private */,
      27,    0,  401,    2, 0x08,   26 /* Private */,
      28,    0,  402,    2, 0x08,   27 /* Private */,
      29,    0,  403,    2, 0x08,   28 /* Private */,
      30,    0,  404,    2, 0x08,   29 /* Private */,
      31,    0,  405,    2, 0x08,   30 /* Private */,
      32,    0,  406,    2, 0x08,   31 /* Private */,
      33,    0,  407,    2, 0x08,   32 /* Private */,
      34,    0,  408,    2, 0x08,   33 /* Private */,
      35,    1,  409,    2, 0x08,   34 /* Private */,
      37,    1,  412,    2, 0x08,   36 /* Private */,
      38,    0,  415,    2, 0x08,   38 /* Private */,
      39,    0,  416,    2, 0x08,   39 /* Private */,
      40,    1,  417,    2, 0x08,   40 /* Private */,
      41,    1,  420,    2, 0x08,   42 /* Private */,
      42,    0,  423,    2, 0x08,   44 /* Private */,
      43,    0,  424,    2, 0x08,   45 /* Private */,
      44,    0,  425,    2, 0x08,   46 /* Private */,
      45,    0,  426,    2, 0x08,   47 /* Private */,
      46,    0,  427,    2, 0x08,   48 /* Private */,
      47,    0,  428,    2, 0x08,   49 /* Private */,
      48,    0,  429,    2, 0x08,   50 /* Private */,
      49,    0,  430,    2, 0x08,   51 /* Private */,
      50,    0,  431,    2, 0x08,   52 /* Private */,
      51,    0,  432,    2, 0x08,   53 /* Private */,
      52,    0,  433,    2, 0x08,   54 /* Private */,
      53,    1,  434,    2, 0x08,   55 /* Private */,
      55,    1,  437,    2, 0x08,   57 /* Private */,
      56,    1,  440,    2, 0x08,   59 /* Private */,
      57,    1,  443,    2, 0x08,   61 /* Private */,
      59,    1,  446,    2, 0x08,   63 /* Private */,
      60,    1,  449,    2, 0x08,   65 /* Private */,
      61,    1,  452,    2, 0x08,   67 /* Private */,
      62,    1,  455,    2, 0x08,   69 /* Private */,
      63,    1,  458,    2, 0x08,   71 /* Private */,
      64,    1,  461,    2, 0x08,   73 /* Private */,
      65,    1,  464,    2, 0x08,   75 /* Private */,
      66,    1,  467,    2, 0x08,   77 /* Private */,
      67,    1,  470,    2, 0x08,   79 /* Private */,
      68,    1,  473,    2, 0x08,   81 /* Private */,
      69,    1,  476,    2, 0x08,   83 /* Private */,
      70,    1,  479,    2, 0x08,   85 /* Private */,
      71,    0,  482,    2, 0x08,   87 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void, QMetaType::Double,   14,
    QMetaType::Void, QMetaType::Double,   16,
    QMetaType::Void, QMetaType::Double,   18,
    QMetaType::Void, QMetaType::Double,   20,
    QMetaType::Void, QMetaType::Double,   22,
    QMetaType::Void, QMetaType::Double,   24,
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
    QMetaType::Void, QMetaType::Int,   36,
    QMetaType::Void, QMetaType::Int,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   36,
    QMetaType::Void, QMetaType::Double,   36,
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
    QMetaType::Void, QMetaType::Int,   54,
    QMetaType::Void, QMetaType::Int,   54,
    QMetaType::Void, QMetaType::Int,   54,
    QMetaType::Void, 0x80000000 | 58,   36,
    QMetaType::Void, QMetaType::Double,   36,
    QMetaType::Void, QMetaType::Double,   36,
    QMetaType::Void, QMetaType::Double,   36,
    QMetaType::Void, QMetaType::Double,   36,
    QMetaType::Void, QMetaType::Int,   36,
    QMetaType::Void, QMetaType::Int,   36,
    QMetaType::Void, QMetaType::Double,   36,
    QMetaType::Void, QMetaType::Double,   36,
    QMetaType::Void, QMetaType::Double,   36,
    QMetaType::Void, QMetaType::Double,   36,
    QMetaType::Void, QMetaType::Double,   36,
    QMetaType::Void, QMetaType::Double,   36,
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
        // method 'tikTimer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'wartosciPlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sterPlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'uchybPlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearWart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearSter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearRegulator'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addKrok'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'addZad'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'addReg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'addUchyb'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'addWster'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'addWP'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'addWI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'addWD'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_startButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_stopButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_krokButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_resetButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_speedButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PotwierdButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PotwierdzARX_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_iButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_dButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_aKtoraSpin_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_bKtoraSpin_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_granicaStanButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_granicaWprowadzButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_gornaSpin_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_dolnaSpin_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_clear_I_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clear_D_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Testuj_ARX_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Testuj_PID_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Testuj_UAR_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_stanStatyczny_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PotwierdzStatyczny_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_zapiszButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_wczytajButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_zapiszButton_all_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_wczytajButton_all_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_sledzWartosciCombo_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_sledzUchybCombo_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_sledzPIDCombo_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_insert_checkStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Qt::CheckState &, std::false_type>,
        // method 'on_szybkoscSimSpin_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_ampSkokSpin_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_ampSinusSpin_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_ampProstokatSpin_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_okresSinusSpin_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_okresProstokatSpin_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_wypelnienieProstokatSpin_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_suStatic_spin_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_preStatic_spin_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_pSpin_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_iSpin_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_dSpin_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_sposob_sumy_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->tikTimer(); break;
        case 1: _t->wartosciPlot(); break;
        case 2: _t->sterPlot(); break;
        case 3: _t->uchybPlot(); break;
        case 4: _t->clearWart(); break;
        case 5: _t->clearSter(); break;
        case 6: _t->clearRegulator(); break;
        case 7: _t->addKrok((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->addZad((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 9: _t->addReg((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 10: _t->addUchyb((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 11: _t->addWster((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 12: _t->addWP((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 13: _t->addWI((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 14: _t->addWD((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 15: _t->on_startButton_clicked(); break;
        case 16: _t->on_stopButton_clicked(); break;
        case 17: _t->on_krokButton_clicked(); break;
        case 18: _t->on_resetButton_clicked(); break;
        case 19: _t->on_speedButton_clicked(); break;
        case 20: _t->on_PotwierdButton_clicked(); break;
        case 21: _t->on_PotwierdzARX_clicked(); break;
        case 22: _t->on_pButton_clicked(); break;
        case 23: _t->on_iButton_clicked(); break;
        case 24: _t->on_dButton_clicked(); break;
        case 25: _t->on_aKtoraSpin_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 26: _t->on_bKtoraSpin_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 27: _t->on_granicaStanButton_clicked(); break;
        case 28: _t->on_granicaWprowadzButton_clicked(); break;
        case 29: _t->on_gornaSpin_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 30: _t->on_dolnaSpin_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 31: _t->on_clear_I_clicked(); break;
        case 32: _t->on_clear_D_clicked(); break;
        case 33: _t->on_Testuj_ARX_clicked(); break;
        case 34: _t->on_Testuj_PID_clicked(); break;
        case 35: _t->on_Testuj_UAR_clicked(); break;
        case 36: _t->on_stanStatyczny_clicked(); break;
        case 37: _t->on_PotwierdzStatyczny_clicked(); break;
        case 38: _t->on_zapiszButton_clicked(); break;
        case 39: _t->on_wczytajButton_clicked(); break;
        case 40: _t->on_zapiszButton_all_clicked(); break;
        case 41: _t->on_wczytajButton_all_clicked(); break;
        case 42: _t->on_sledzWartosciCombo_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 43: _t->on_sledzUchybCombo_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 44: _t->on_sledzPIDCombo_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 45: _t->on_insert_checkStateChanged((*reinterpret_cast< std::add_pointer_t<Qt::CheckState>>(_a[1]))); break;
        case 46: _t->on_szybkoscSimSpin_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 47: _t->on_ampSkokSpin_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 48: _t->on_ampSinusSpin_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 49: _t->on_ampProstokatSpin_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 50: _t->on_okresSinusSpin_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 51: _t->on_okresProstokatSpin_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 52: _t->on_wypelnienieProstokatSpin_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 53: _t->on_suStatic_spin_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 54: _t->on_preStatic_spin_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 55: _t->on_pSpin_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 56: _t->on_iSpin_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 57: _t->on_dSpin_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 58: _t->on_sposob_sumy_clicked(); break;
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
        if (_id < 59)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 59;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 59)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 59;
    }
    return _id;
}
QT_WARNING_POP
