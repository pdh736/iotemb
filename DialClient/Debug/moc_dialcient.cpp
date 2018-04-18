/****************************************************************************
** Meta object code from reading C++ file 'dialcient.h'
**
** Created: Wed Apr 18 12:24:51 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dialcient.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialcient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialCient[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      30,   10,   10,   10, 0x0a,
      42,   10,   10,   10, 0x0a,
      63,   10,   10,   10, 0x0a,
      79,   10,   10,   10, 0x0a,
      96,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DialCient[] = {
    "DialCient\0\0ArdLedSig(QString)\0mySlot(int)\0"
    "myTimerBtnSlot(bool)\0myTimeOutSlot()\0"
    "myComboSlot(int)\0myArdLedSlot(bool)\0"
};

void DialCient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DialCient *_t = static_cast<DialCient *>(_o);
        switch (_id) {
        case 0: _t->ArdLedSig((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->mySlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->myTimerBtnSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->myTimeOutSlot(); break;
        case 4: _t->myComboSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->myArdLedSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DialCient::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DialCient::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DialCient,
      qt_meta_data_DialCient, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialCient::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialCient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialCient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialCient))
        return static_cast<void*>(const_cast< DialCient*>(this));
    return QWidget::qt_metacast(_clname);
}

int DialCient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void DialCient::ArdLedSig(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
