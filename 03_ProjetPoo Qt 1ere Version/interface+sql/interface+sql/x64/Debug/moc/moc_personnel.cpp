/****************************************************************************
** Meta object code from reading C++ file 'personnel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../personnel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'personnel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_personnelaffi_t {
    QByteArrayData data[3];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_personnelaffi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_personnelaffi_t qt_meta_stringdata_personnelaffi = {
    {
QT_MOC_LITERAL(0, 0, 13), // "personnelaffi"
QT_MOC_LITERAL(1, 14, 26), // "on_BtPersonnelAffi_clicked"
QT_MOC_LITERAL(2, 41, 0) // ""

    },
    "personnelaffi\0on_BtPersonnelAffi_clicked\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_personnelaffi[] = {

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

void personnelaffi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<personnelaffi *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_BtPersonnelAffi_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject personnelaffi::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_personnelaffi.data,
    qt_meta_data_personnelaffi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *personnelaffi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *personnelaffi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_personnelaffi.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int personnelaffi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_personnelajout_t {
    QByteArrayData data[3];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_personnelajout_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_personnelajout_t qt_meta_stringdata_personnelajout = {
    {
QT_MOC_LITERAL(0, 0, 14), // "personnelajout"
QT_MOC_LITERAL(1, 15, 27), // "on_BtPersonnelAjout_clicked"
QT_MOC_LITERAL(2, 43, 0) // ""

    },
    "personnelajout\0on_BtPersonnelAjout_clicked\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_personnelajout[] = {

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

void personnelajout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<personnelajout *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_BtPersonnelAjout_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject personnelajout::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_personnelajout.data,
    qt_meta_data_personnelajout,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *personnelajout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *personnelajout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_personnelajout.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int personnelajout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_personnelchangementsuperieur_t {
    QByteArrayData data[3];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_personnelchangementsuperieur_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_personnelchangementsuperieur_t qt_meta_stringdata_personnelchangementsuperieur = {
    {
QT_MOC_LITERAL(0, 0, 28), // "personnelchangementsuperieur"
QT_MOC_LITERAL(1, 29, 38), // "on_BtPersonnelChangerSuperieu..."
QT_MOC_LITERAL(2, 68, 0) // ""

    },
    "personnelchangementsuperieur\0"
    "on_BtPersonnelChangerSuperieur_clicked\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_personnelchangementsuperieur[] = {

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

void personnelchangementsuperieur::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<personnelchangementsuperieur *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_BtPersonnelChangerSuperieur_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject personnelchangementsuperieur::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_personnelchangementsuperieur.data,
    qt_meta_data_personnelchangementsuperieur,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *personnelchangementsuperieur::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *personnelchangementsuperieur::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_personnelchangementsuperieur.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int personnelchangementsuperieur::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_personnelmodif_t {
    QByteArrayData data[3];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_personnelmodif_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_personnelmodif_t qt_meta_stringdata_personnelmodif = {
    {
QT_MOC_LITERAL(0, 0, 14), // "personnelmodif"
QT_MOC_LITERAL(1, 15, 27), // "on_BtPersonnelModif_clicked"
QT_MOC_LITERAL(2, 43, 0) // ""

    },
    "personnelmodif\0on_BtPersonnelModif_clicked\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_personnelmodif[] = {

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

void personnelmodif::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<personnelmodif *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_BtPersonnelModif_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject personnelmodif::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_personnelmodif.data,
    qt_meta_data_personnelmodif,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *personnelmodif::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *personnelmodif::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_personnelmodif.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int personnelmodif::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_personnelsuppr_t {
    QByteArrayData data[3];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_personnelsuppr_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_personnelsuppr_t qt_meta_stringdata_personnelsuppr = {
    {
QT_MOC_LITERAL(0, 0, 14), // "personnelsuppr"
QT_MOC_LITERAL(1, 15, 27), // "on_BtPersonnelSuppr_clicked"
QT_MOC_LITERAL(2, 43, 0) // ""

    },
    "personnelsuppr\0on_BtPersonnelSuppr_clicked\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_personnelsuppr[] = {

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

void personnelsuppr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<personnelsuppr *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_BtPersonnelSuppr_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject personnelsuppr::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_personnelsuppr.data,
    qt_meta_data_personnelsuppr,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *personnelsuppr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *personnelsuppr::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_personnelsuppr.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int personnelsuppr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
