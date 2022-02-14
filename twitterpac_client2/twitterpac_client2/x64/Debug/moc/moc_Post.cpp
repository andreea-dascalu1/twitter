/****************************************************************************
** Meta object code from reading C++ file 'Post.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Post.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Post.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Post_t {
    QByteArrayData data[8];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Post_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Post_t qt_meta_stringdata_Post = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Post"
QT_MOC_LITERAL(1, 5, 27), // "on_pushButton_reply_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 29), // "on_pushButton_retweet_clicked"
QT_MOC_LITERAL(4, 64, 26), // "on_pushButton_like_clicked"
QT_MOC_LITERAL(5, 91, 29), // "on_pushButton_dislike_clicked"
QT_MOC_LITERAL(6, 121, 25), // "on_pushButton_retweetPref"
QT_MOC_LITERAL(7, 147, 18) // "on_pushButton_Send"

    },
    "Post\0on_pushButton_reply_clicked\0\0"
    "on_pushButton_retweet_clicked\0"
    "on_pushButton_like_clicked\0"
    "on_pushButton_dislike_clicked\0"
    "on_pushButton_retweetPref\0on_pushButton_Send"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Post[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Post::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Post *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_reply_clicked(); break;
        case 1: _t->on_pushButton_retweet_clicked(); break;
        case 2: _t->on_pushButton_like_clicked(); break;
        case 3: _t->on_pushButton_dislike_clicked(); break;
        case 4: _t->on_pushButton_retweetPref(); break;
        case 5: _t->on_pushButton_Send(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Post::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Post.data,
    qt_meta_data_Post,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Post::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Post::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Post.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Post::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
