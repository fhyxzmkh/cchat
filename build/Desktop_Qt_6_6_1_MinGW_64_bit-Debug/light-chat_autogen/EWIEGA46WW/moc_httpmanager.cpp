/****************************************************************************
** Meta object code from reading C++ file 'httpmanager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../httpmanager.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'httpmanager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSHttpManagerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSHttpManagerENDCLASS = QtMocHelpers::stringData(
    "HttpManager",
    "sig_http_finish",
    "",
    "RequestId",
    "id",
    "res",
    "ErrorCodes",
    "err",
    "Modules",
    "mod",
    "sig_register_mod_finish",
    "slot_http_finish"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSHttpManagerENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[12];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[3];
    char stringdata5[4];
    char stringdata6[11];
    char stringdata7[4];
    char stringdata8[8];
    char stringdata9[4];
    char stringdata10[24];
    char stringdata11[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSHttpManagerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSHttpManagerENDCLASS_t qt_meta_stringdata_CLASSHttpManagerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "HttpManager"
        QT_MOC_LITERAL(12, 15),  // "sig_http_finish"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 9),  // "RequestId"
        QT_MOC_LITERAL(39, 2),  // "id"
        QT_MOC_LITERAL(42, 3),  // "res"
        QT_MOC_LITERAL(46, 10),  // "ErrorCodes"
        QT_MOC_LITERAL(57, 3),  // "err"
        QT_MOC_LITERAL(61, 7),  // "Modules"
        QT_MOC_LITERAL(69, 3),  // "mod"
        QT_MOC_LITERAL(73, 23),  // "sig_register_mod_finish"
        QT_MOC_LITERAL(97, 16)   // "slot_http_finish"
    },
    "HttpManager",
    "sig_http_finish",
    "",
    "RequestId",
    "id",
    "res",
    "ErrorCodes",
    "err",
    "Modules",
    "mod",
    "sig_register_mod_finish",
    "slot_http_finish"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSHttpManagerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    4,   32,    2, 0x06,    1 /* Public */,
      10,    3,   41,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    4,   48,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, 0x80000000 | 6, 0x80000000 | 8,    4,    5,    7,    9,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, 0x80000000 | 6,    4,    5,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, 0x80000000 | 6, 0x80000000 | 8,    4,    5,    7,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject HttpManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSHttpManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSHttpManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSHttpManagerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<HttpManager, std::true_type>,
        // method 'sig_http_finish'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<RequestId, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<ErrorCodes, std::false_type>,
        QtPrivate::TypeAndForceComplete<Modules, std::false_type>,
        // method 'sig_register_mod_finish'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<RequestId, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<ErrorCodes, std::false_type>,
        // method 'slot_http_finish'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<RequestId, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<ErrorCodes, std::false_type>,
        QtPrivate::TypeAndForceComplete<Modules, std::false_type>
    >,
    nullptr
} };

void HttpManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HttpManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sig_http_finish((*reinterpret_cast< std::add_pointer_t<RequestId>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<ErrorCodes>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<Modules>>(_a[4]))); break;
        case 1: _t->sig_register_mod_finish((*reinterpret_cast< std::add_pointer_t<RequestId>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<ErrorCodes>>(_a[3]))); break;
        case 2: _t->slot_http_finish((*reinterpret_cast< std::add_pointer_t<RequestId>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<ErrorCodes>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<Modules>>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HttpManager::*)(RequestId , QString , ErrorCodes , Modules );
            if (_t _q_method = &HttpManager::sig_http_finish; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HttpManager::*)(RequestId , QString , ErrorCodes );
            if (_t _q_method = &HttpManager::sig_register_mod_finish; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *HttpManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HttpManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSHttpManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Singleton<HttpManager>"))
        return static_cast< Singleton<HttpManager>*>(this);
    if (!strcmp(_clname, "std::enable_shared_from_this<HttpManager>"))
        return static_cast< std::enable_shared_from_this<HttpManager>*>(this);
    return QObject::qt_metacast(_clname);
}

int HttpManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void HttpManager::sig_http_finish(RequestId _t1, QString _t2, ErrorCodes _t3, Modules _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HttpManager::sig_register_mod_finish(RequestId _t1, QString _t2, ErrorCodes _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
