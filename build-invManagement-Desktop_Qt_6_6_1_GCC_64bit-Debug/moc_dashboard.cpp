/****************************************************************************
** Meta object code from reading C++ file 'dashboard.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../invManagement/dashboard.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dashboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSdashboardENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSdashboardENDCLASS = QtMocHelpers::stringData(
    "dashboard",
    "on_addProduct_clicked",
    "",
    "on_updateProduct_clicked",
    "on_detailsProduct_clicked",
    "on_addCustomer_clicked",
    "on_updateCustomer_clicked",
    "on_detailsCustomer_clicked",
    "on_entryPurchase_clicked",
    "on_historyPurchase_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSdashboardENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[10];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[25];
    char stringdata4[26];
    char stringdata5[23];
    char stringdata6[26];
    char stringdata7[27];
    char stringdata8[25];
    char stringdata9[27];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSdashboardENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSdashboardENDCLASS_t qt_meta_stringdata_CLASSdashboardENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "dashboard"
        QT_MOC_LITERAL(10, 21),  // "on_addProduct_clicked"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 24),  // "on_updateProduct_clicked"
        QT_MOC_LITERAL(58, 25),  // "on_detailsProduct_clicked"
        QT_MOC_LITERAL(84, 22),  // "on_addCustomer_clicked"
        QT_MOC_LITERAL(107, 25),  // "on_updateCustomer_clicked"
        QT_MOC_LITERAL(133, 26),  // "on_detailsCustomer_clicked"
        QT_MOC_LITERAL(160, 24),  // "on_entryPurchase_clicked"
        QT_MOC_LITERAL(185, 26)   // "on_historyPurchase_clicked"
    },
    "dashboard",
    "on_addProduct_clicked",
    "",
    "on_updateProduct_clicked",
    "on_detailsProduct_clicked",
    "on_addCustomer_clicked",
    "on_updateCustomer_clicked",
    "on_detailsCustomer_clicked",
    "on_entryPurchase_clicked",
    "on_historyPurchase_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdashboardENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    0,   68,    2, 0x08,    7 /* Private */,
       9,    0,   69,    2, 0x08,    8 /* Private */,

 // slots: parameters
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

Q_CONSTINIT const QMetaObject dashboard::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSdashboardENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdashboardENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdashboardENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<dashboard, std::true_type>,
        // method 'on_addProduct_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_updateProduct_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_detailsProduct_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addCustomer_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_updateCustomer_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_detailsCustomer_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_entryPurchase_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_historyPurchase_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void dashboard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<dashboard *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_addProduct_clicked(); break;
        case 1: _t->on_updateProduct_clicked(); break;
        case 2: _t->on_detailsProduct_clicked(); break;
        case 3: _t->on_addCustomer_clicked(); break;
        case 4: _t->on_updateCustomer_clicked(); break;
        case 5: _t->on_detailsCustomer_clicked(); break;
        case 6: _t->on_entryPurchase_clicked(); break;
        case 7: _t->on_historyPurchase_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *dashboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dashboard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdashboardENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int dashboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
