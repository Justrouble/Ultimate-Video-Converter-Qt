/****************************************************************************
** Meta object code from reading C++ file 'ffmpegprocess.h'
**
** Created: Fri Jan 11 20:46:51 2013
**      by: The Qt Meta Object Compiler version 67 (Qt 5.0.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ffmpegprocess.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ffmpegprocess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FFmpegProcess_t {
    QByteArrayData data[10];
    char stringdata[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_FFmpegProcess_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_FFmpegProcess_t qt_meta_stringdata_FFmpegProcess = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 8),
QT_MOC_LITERAL(2, 23, 0),
QT_MOC_LITERAL(3, 24, 7),
QT_MOC_LITERAL(4, 32, 15),
QT_MOC_LITERAL(5, 48, 8),
QT_MOC_LITERAL(6, 57, 8),
QT_MOC_LITERAL(7, 66, 13),
QT_MOC_LITERAL(8, 80, 14),
QT_MOC_LITERAL(9, 95, 6)
    },
    "FFmpegProcess\0lineRead\0\0rawLine\0"
    "durationChanged\0duration\0tableRow\0"
    "statusChanged\0readFFmpegLine\0status\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FFmpegProcess[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   48, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x05,
       4,    2,   37,    2, 0x05,
       7,    2,   42,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       8,    0,   47,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    5,    6,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00495103,
       3, QMetaType::QString, 0x00495103,
       9, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       1,
       0,
       2,

       0        // eod
};

void FFmpegProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FFmpegProcess *_t = static_cast<FFmpegProcess *>(_o);
        switch (_id) {
        case 0: _t->lineRead((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->durationChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->statusChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->readFFmpegLine(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FFmpegProcess::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FFmpegProcess::lineRead)) {
                *result = 0;
            }
        }
        {
            typedef void (FFmpegProcess::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FFmpegProcess::durationChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (FFmpegProcess::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FFmpegProcess::statusChanged)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject FFmpegProcess::staticMetaObject = {
    { &QProcess::staticMetaObject, qt_meta_stringdata_FFmpegProcess.data,
      qt_meta_data_FFmpegProcess,  qt_static_metacall, 0, 0}
};


const QMetaObject *FFmpegProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FFmpegProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FFmpegProcess.stringdata))
        return static_cast<void*>(const_cast< FFmpegProcess*>(this));
    return QProcess::qt_metacast(_clname);
}

int FFmpegProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProcess::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = duration(); break;
        case 1: *reinterpret_cast< QString*>(_v) = rawLine(); break;
        case 2: *reinterpret_cast< QString*>(_v) = status(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setDuration(*reinterpret_cast< QString*>(_v)); break;
        case 1: setRawLine(*reinterpret_cast< QString*>(_v)); break;
        case 2: setStatus(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FFmpegProcess::lineRead(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FFmpegProcess::durationChanged(QString _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FFmpegProcess::statusChanged(QString _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
