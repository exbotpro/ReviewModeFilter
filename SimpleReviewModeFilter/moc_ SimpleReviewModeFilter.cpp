/****************************************************************************
** Meta object code from reading C++ file 'SimpleReviewModeFilter.h '
**
** Created: Wed May 27 16:25:31 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "SimpleReviewModeFilter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SimpleReviewModeFilter.h ' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SimpleReviewModeFilter[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      32,   23,   24,   23, 0x0a,
      54,   23,   24,   23, 0x0a,
      76,   23,   24,   23, 0x0a,
      98,   23,   24,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SimpleReviewModeFilter[] = {
    "SimpleReviewModeFilter\0\0tResult\0"
    "on_btn_clip_clicked()\0on_btn_next_clicked()\0"
    "on_btn_prev_clicked()\0on_btn_showclip_clicked()\0"
};

const QMetaObject SimpleReviewModeFilter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SimpleReviewModeFilter,
      qt_meta_data_SimpleReviewModeFilter, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SimpleReviewModeFilter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SimpleReviewModeFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SimpleReviewModeFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SimpleReviewModeFilter))
        return static_cast<void*>(const_cast< SimpleReviewModeFilter*>(this));
    if (!strcmp(_clname, "cBaseQtFilter"))
        return static_cast< cBaseQtFilter*>(const_cast< SimpleReviewModeFilter*>(this));
    return QObject::qt_metacast(_clname);
}

int SimpleReviewModeFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { tResult _r = on_btn_clip_clicked();
            if (_a[0]) *reinterpret_cast< tResult*>(_a[0]) = _r; }  break;
        case 1: { tResult _r = on_btn_next_clicked();
            if (_a[0]) *reinterpret_cast< tResult*>(_a[0]) = _r; }  break;
        case 2: { tResult _r = on_btn_prev_clicked();
            if (_a[0]) *reinterpret_cast< tResult*>(_a[0]) = _r; }  break;
        case 3: { tResult _r = on_btn_showclip_clicked();
            if (_a[0]) *reinterpret_cast< tResult*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE