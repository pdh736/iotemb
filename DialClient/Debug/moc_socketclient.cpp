/****************************************************************************
** Meta object code from reading C++ file 'socketclient.h'
**
** Created: Wed Apr 18 12:24:51 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../socketclient.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'socketclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SocketClient[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      36,   13,   13,   13, 0x08,
      57,   13,   13,   13, 0x08,
      78,   13,   13,   13, 0x08,
      96,   13,   13,   13, 0x08,
     116,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SocketClient[] = {
    "SocketClient\0\0slotConnectToServer()\0"
    "slotClosedByServer()\0slotSocketReadData()\0"
    "slotSocketError()\0slotConnectServer()\0"
    "slotSocketWriteData(QString)\0"
};

void SocketClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SocketClient *_t = static_cast<SocketClient *>(_o);
        switch (_id) {
        case 0: _t->slotConnectToServer(); break;
        case 1: _t->slotClosedByServer(); break;
        case 2: _t->slotSocketReadData(); break;
        case 3: _t->slotSocketError(); break;
        case 4: _t->slotConnectServer(); break;
        case 5: _t->slotSocketWriteData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SocketClient::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SocketClient::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SocketClient,
      qt_meta_data_SocketClient, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SocketClient::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SocketClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SocketClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SocketClient))
        return static_cast<void*>(const_cast< SocketClient*>(this));
    return QWidget::qt_metacast(_clname);
}

int SocketClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
