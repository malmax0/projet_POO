/****************************************************************************
** Meta object code from reading C++ file 'client.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../client.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'client.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_clientaffi_t {
    QByteArrayData data[3];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_clientaffi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_clientaffi_t qt_meta_stringdata_clientaffi = {
    {
QT_MOC_LITERAL(0, 0, 10), // "clientaffi"
QT_MOC_LITERAL(1, 11, 23), // "on_BtClientAffi_clicked"
QT_MOC_LITERAL(2, 35, 0) // ""

    },
    "clientaffi\0on_BtClientAffi_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_clientaffi[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void clientaffi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<clientaffi *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_BtClientAffi_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject clientaffi::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_clientaffi.data,
    qt_meta_data_clientaffi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *clientaffi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *clientaffi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_clientaffi.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int clientaffi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_clientajout_t {
    QByteArrayData data[4];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_clientajout_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_clientajout_t qt_meta_stringdata_clientajout = {
    {
QT_MOC_LITERAL(0, 0, 11), // "clientajout"
QT_MOC_LITERAL(1, 12, 24), // "on_BtClientAjout_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 32) // "on_BtClientAjout_adresse_clicked"

    },
    "clientajout\0on_BtClientAjout_clicked\0"
    "\0on_BtClientAjout_adresse_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_clientajout[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void clientajout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<clientajout *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_BtClientAjout_clicked(); break;
        case 1: _t->on_BtClientAjout_adresse_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject clientajout::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_clientajout.data,
    qt_meta_data_clientajout,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *clientajout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *clientajout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_clientajout.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int clientajout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_clientajoutadress_t {
    QByteArrayData data[3];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_clientajoutadress_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_clientajoutadress_t qt_meta_stringdata_clientajoutadress = {
    {
QT_MOC_LITERAL(0, 0, 17), // "clientajoutadress"
QT_MOC_LITERAL(1, 18, 30), // "on_BtClientAjoutAdress_clicked"
QT_MOC_LITERAL(2, 49, 0) // ""

    },
    "clientajoutadress\0on_BtClientAjoutAdress_clicked\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_clientajoutadress[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void clientajoutadress::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<clientajoutadress *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_BtClientAjoutAdress_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject clientajoutadress::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_clientajoutadress.data,
    qt_meta_data_clientajoutadress,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *clientajoutadress::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *clientajoutadress::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_clientajoutadress.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int clientajoutadress::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_clientmodif_t {
    QByteArrayData data[5];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_clientmodif_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_clientmodif_t qt_meta_stringdata_clientmodif = {
    {
QT_MOC_LITERAL(0, 0, 11), // "clientmodif"
QT_MOC_LITERAL(1, 12, 27), // "on_BtClientModifVal_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 31), // "on_BtClientSupprAdresse_clicked"
QT_MOC_LITERAL(4, 73, 31) // "on_BtClientAjoutAdresse_clicked"

    },
    "clientmodif\0on_BtClientModifVal_clicked\0"
    "\0on_BtClientSupprAdresse_clicked\0"
    "on_BtClientAjoutAdresse_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_clientmodif[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void clientmodif::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<clientmodif *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_BtClientModifVal_clicked(); break;
        case 1: _t->on_BtClientSupprAdresse_clicked(); break;
        case 2: _t->on_BtClientAjoutAdresse_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject clientmodif::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_clientmodif.data,
    qt_meta_data_clientmodif,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *clientmodif::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *clientmodif::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_clientmodif.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int clientmodif::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_clientmodifadresssuppr_t {
    QByteArrayData data[3];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_clientmodifadresssuppr_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_clientmodifadresssuppr_t qt_meta_stringdata_clientmodifadresssuppr = {
    {
QT_MOC_LITERAL(0, 0, 22), // "clientmodifadresssuppr"
QT_MOC_LITERAL(1, 23, 25), // "on_BtAdresseSuppr_clicked"
QT_MOC_LITERAL(2, 49, 0) // ""

    },
    "clientmodifadresssuppr\0on_BtAdresseSuppr_clicked\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_clientmodifadresssuppr[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void clientmodifadresssuppr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<clientmodifadresssuppr *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_BtAdresseSuppr_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject clientmodifadresssuppr::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_clientmodifadresssuppr.data,
    qt_meta_data_clientmodifadresssuppr,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *clientmodifadresssuppr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *clientmodifadresssuppr::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_clientmodifadresssuppr.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int clientmodifadresssuppr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_clientsuppr_t {
    QByteArrayData data[3];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_clientsuppr_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_clientsuppr_t qt_meta_stringdata_clientsuppr = {
    {
QT_MOC_LITERAL(0, 0, 11), // "clientsuppr"
QT_MOC_LITERAL(1, 12, 24), // "on_BtClientSuppr_clicked"
QT_MOC_LITERAL(2, 37, 0) // ""

    },
    "clientsuppr\0on_BtClientSuppr_clicked\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_clientsuppr[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void clientsuppr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<clientsuppr *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_BtClientSuppr_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject clientsuppr::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_clientsuppr.data,
    qt_meta_data_clientsuppr,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *clientsuppr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *clientsuppr::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_clientsuppr.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int clientsuppr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
