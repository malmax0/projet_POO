/****************************************************************************
** Meta object code from reading C++ file 'commande.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../commande.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'commande.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_commandeaffi_t {
    QByteArrayData data[3];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_commandeaffi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_commandeaffi_t qt_meta_stringdata_commandeaffi = {
    {
QT_MOC_LITERAL(0, 0, 12), // "commandeaffi"
QT_MOC_LITERAL(1, 13, 25), // "on_BtCommandeAffi_clicked"
QT_MOC_LITERAL(2, 39, 0) // ""

    },
    "commandeaffi\0on_BtCommandeAffi_clicked\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_commandeaffi[] = {

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

void commandeaffi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<commandeaffi *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_BtCommandeAffi_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject commandeaffi::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_commandeaffi.data,
    qt_meta_data_commandeaffi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *commandeaffi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *commandeaffi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_commandeaffi.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int commandeaffi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_commandeajout_t {
    QByteArrayData data[3];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_commandeajout_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_commandeajout_t qt_meta_stringdata_commandeajout = {
    {
QT_MOC_LITERAL(0, 0, 13), // "commandeajout"
QT_MOC_LITERAL(1, 14, 18), // "on_BtAjout_clicked"
QT_MOC_LITERAL(2, 33, 0) // ""

    },
    "commandeajout\0on_BtAjout_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_commandeajout[] = {

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

void commandeajout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<commandeajout *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_BtAjout_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject commandeajout::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_commandeajout.data,
    qt_meta_data_commandeajout,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *commandeajout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *commandeajout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_commandeajout.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int commandeajout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_commandeajoutarticle_t {
    QByteArrayData data[3];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_commandeajoutarticle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_commandeajoutarticle_t qt_meta_stringdata_commandeajoutarticle = {
    {
QT_MOC_LITERAL(0, 0, 20), // "commandeajoutarticle"
QT_MOC_LITERAL(1, 21, 33), // "on_BtCommandeAjoutArticle_cli..."
QT_MOC_LITERAL(2, 55, 0) // ""

    },
    "commandeajoutarticle\0"
    "on_BtCommandeAjoutArticle_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_commandeajoutarticle[] = {

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

void commandeajoutarticle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<commandeajoutarticle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_BtCommandeAjoutArticle_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject commandeajoutarticle::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_commandeajoutarticle.data,
    qt_meta_data_commandeajoutarticle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *commandeajoutarticle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *commandeajoutarticle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_commandeajoutarticle.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int commandeajoutarticle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_commandemodif_t {
    QByteArrayData data[3];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_commandemodif_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_commandemodif_t qt_meta_stringdata_commandemodif = {
    {
QT_MOC_LITERAL(0, 0, 13), // "commandemodif"
QT_MOC_LITERAL(1, 14, 18), // "on_BtModif_clicked"
QT_MOC_LITERAL(2, 33, 0) // ""

    },
    "commandemodif\0on_BtModif_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_commandemodif[] = {

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

void commandemodif::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<commandemodif *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_BtModif_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject commandemodif::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_commandemodif.data,
    qt_meta_data_commandemodif,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *commandemodif::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *commandemodif::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_commandemodif.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int commandemodif::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_commandesuppr_t {
    QByteArrayData data[3];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_commandesuppr_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_commandesuppr_t qt_meta_stringdata_commandesuppr = {
    {
QT_MOC_LITERAL(0, 0, 13), // "commandesuppr"
QT_MOC_LITERAL(1, 14, 18), // "on_BtSuppr_clicked"
QT_MOC_LITERAL(2, 33, 0) // ""

    },
    "commandesuppr\0on_BtSuppr_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_commandesuppr[] = {

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

void commandesuppr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<commandesuppr *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_BtSuppr_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject commandesuppr::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_commandesuppr.data,
    qt_meta_data_commandesuppr,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *commandesuppr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *commandesuppr::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_commandesuppr.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int commandesuppr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
