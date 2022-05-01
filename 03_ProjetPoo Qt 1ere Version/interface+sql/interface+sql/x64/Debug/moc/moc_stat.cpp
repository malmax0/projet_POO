/****************************************************************************
** Meta object code from reading C++ file 'stat.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../stat.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_stataffi_t {
    QByteArrayData data[3];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_stataffi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_stataffi_t qt_meta_stringdata_stataffi = {
    {
QT_MOC_LITERAL(0, 0, 8), // "stataffi"
QT_MOC_LITERAL(1, 9, 21), // "on_BtStatAffi_clicked"
QT_MOC_LITERAL(2, 31, 0) // ""

    },
    "stataffi\0on_BtStatAffi_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_stataffi[] = {

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

void stataffi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<stataffi *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_BtStatAffi_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject stataffi::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_stataffi.data,
    qt_meta_data_stataffi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *stataffi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *stataffi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_stataffi.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int stataffi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_statcalcmois_t {
    QByteArrayData data[3];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_statcalcmois_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_statcalcmois_t qt_meta_stringdata_statcalcmois = {
    {
QT_MOC_LITERAL(0, 0, 12), // "statcalcmois"
QT_MOC_LITERAL(1, 13, 25), // "on_BtStatCalcMois_clicked"
QT_MOC_LITERAL(2, 39, 0) // ""

    },
    "statcalcmois\0on_BtStatCalcMois_clicked\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_statcalcmois[] = {

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

void statcalcmois::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<statcalcmois *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_BtStatCalcMois_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject statcalcmois::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_statcalcmois.data,
    qt_meta_data_statcalcmois,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *statcalcmois::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *statcalcmois::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_statcalcmois.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int statcalcmois::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_statcalctotal_t {
    QByteArrayData data[3];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_statcalctotal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_statcalctotal_t qt_meta_stringdata_statcalctotal = {
    {
QT_MOC_LITERAL(0, 0, 13), // "statcalctotal"
QT_MOC_LITERAL(1, 14, 26), // "on_BtStatCalcTotal_clicked"
QT_MOC_LITERAL(2, 41, 0) // ""

    },
    "statcalctotal\0on_BtStatCalcTotal_clicked\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_statcalctotal[] = {

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

void statcalctotal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<statcalctotal *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_BtStatCalcTotal_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject statcalctotal::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_statcalctotal.data,
    qt_meta_data_statcalctotal,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *statcalctotal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *statcalctotal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_statcalctotal.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int statcalctotal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_statchoix_t {
    QByteArrayData data[3];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_statchoix_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_statchoix_t qt_meta_stringdata_statchoix = {
    {
QT_MOC_LITERAL(0, 0, 9), // "statchoix"
QT_MOC_LITERAL(1, 10, 20), // "on_BtStatVal_clicked"
QT_MOC_LITERAL(2, 31, 0) // ""

    },
    "statchoix\0on_BtStatVal_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_statchoix[] = {

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

void statchoix::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<statchoix *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_BtStatVal_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject statchoix::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_statchoix.data,
    qt_meta_data_statchoix,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *statchoix::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *statchoix::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_statchoix.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int statchoix::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_statsimu_t {
    QByteArrayData data[3];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_statsimu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_statsimu_t qt_meta_stringdata_statsimu = {
    {
QT_MOC_LITERAL(0, 0, 8), // "statsimu"
QT_MOC_LITERAL(1, 9, 21), // "on_BtStatSimu_clicked"
QT_MOC_LITERAL(2, 31, 0) // ""

    },
    "statsimu\0on_BtStatSimu_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_statsimu[] = {

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

void statsimu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<statsimu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_BtStatSimu_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject statsimu::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_statsimu.data,
    qt_meta_data_statsimu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *statsimu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *statsimu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_statsimu.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int statsimu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
