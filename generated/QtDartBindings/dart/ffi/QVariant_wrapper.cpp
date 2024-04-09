#include "QVariant_wrapper.h"

#include <QDebug>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
// tag=1006
QVariant_wrapper::QVariant_wrapper() : ::QVariant() {}

// tag=1006
QVariant_wrapper::QVariant_wrapper(bool b) : ::QVariant(b) {}

// tag=1006
QVariant_wrapper::QVariant_wrapper(const QByteArray &bytearray)
    : ::QVariant(bytearray) {}

// tag=1006
QVariant_wrapper::QVariant_wrapper(const QLine &line) : ::QVariant(line) {}

// tag=1006
QVariant_wrapper::QVariant_wrapper(const QLineF &line) : ::QVariant(line) {}

// tag=1006
QVariant_wrapper::QVariant_wrapper(const QList<QString> &stringlist)
    : ::QVariant(stringlist) {}

// tag=1006
QVariant_wrapper::QVariant_wrapper(const QList<QVariant> &list)
    : ::QVariant(list) {}

// tag=1006
QVariant_wrapper::QVariant_wrapper(const QModelIndex &modelIndex)
    : ::QVariant(modelIndex) {}

// tag=1006
QVariant_wrapper::QVariant_wrapper(const QPoint &pt) : ::QVariant(pt) {}

// tag=1006
QVariant_wrapper::QVariant_wrapper(const QPointF &pt) : ::QVariant(pt) {}

// tag=1006
QVariant_wrapper::QVariant_wrapper(const QRect &rect) : ::QVariant(rect) {}

// tag=1006
QVariant_wrapper::QVariant_wrapper(const QRectF &rect) : ::QVariant(rect) {}

// tag=1006
QVariant_wrapper::QVariant_wrapper(const QSize &size) : ::QVariant(size) {}

// tag=1006
QVariant_wrapper::QVariant_wrapper(const QSizeF &size) : ::QVariant(size) {}

// tag=1006
QVariant_wrapper::QVariant_wrapper(const QString &string)
    : ::QVariant(string) {}

// tag=1006
QVariant_wrapper::QVariant_wrapper(const char *str) : ::QVariant(str) {}

// tag=1006
QVariant_wrapper::QVariant_wrapper(double d) : ::QVariant(d) {}

// tag=1006
QVariant_wrapper::QVariant_wrapper(float f) : ::QVariant(f) {}

// tag=1006
QVariant_wrapper::QVariant_wrapper(int i) : ::QVariant(i) {}

// tag=1006
QVariant_wrapper::QVariant_wrapper(qint64 ll) : ::QVariant(ll) {}
void QVariant_wrapper::clear() {
  // tag=1000

  // tag=1004
  ::QVariant::clear();
}
void QVariant_wrapper::detach() {
  // tag=1000

  // tag=1004
  ::QVariant::detach();
}
bool QVariant_wrapper::equals(const QVariant &other) const {
  // tag=1000

  // tag=1004
  return ::QVariant::equals(other);
}

// ========================================================================
// START of custom code block [file: shiboken_snippets/qvariant.cpp
// (qvariant-fromObject)]

/** static*/
QVariant QVariant_wrapper::fromObject(QObject *obj) {
  return QVariant::fromValue<QObject *>(obj);
}
// END of custom code block [file: shiboken_snippets/qvariant.cpp
// (qvariant-fromObject)]
// ========================================================================

bool QVariant_wrapper::isDetached() const {
  // tag=1000

  // tag=1004
  return ::QVariant::isDetached();
}
bool QVariant_wrapper::isNull() const {
  // tag=1000

  // tag=1004
  return ::QVariant::isNull();
}
bool QVariant_wrapper::isValid() const {
  // tag=1000

  // tag=1004
  return ::QVariant::isValid();
}
void QVariant_wrapper::setValue(const QVariant &avalue) {
  // tag=1000

  // tag=1004
  ::QVariant::setValue(avalue);
}
bool QVariant_wrapper::toBool() const {
  // tag=1000

  // tag=1004
  return ::QVariant::toBool();
}
QByteArray QVariant_wrapper::toByteArray() const {
  // tag=1000

  // tag=1004
  return ::QVariant::toByteArray();
}
QLine QVariant_wrapper::toLine() const {
  // tag=1000

  // tag=1004
  return ::QVariant::toLine();
}
QLineF QVariant_wrapper::toLineF() const {
  // tag=1000

  // tag=1004
  return ::QVariant::toLineF();
}
QList<QVariant> QVariant_wrapper::toList() const {
  // tag=1000

  // tag=1004
  return ::QVariant::toList();
}
QModelIndex QVariant_wrapper::toModelIndex() const {
  // tag=1000

  // tag=1004
  return ::QVariant::toModelIndex();
}

// ========================================================================
// START of custom code block [file: shiboken_snippets/qvariant.cpp
// (qvariant-toObject)]
/** static */
QObject *QVariant_wrapper::toObject(
    QVariant v) // apparently shiboken isn't honouring adding const-&
{
  return v.value<QObject *>();
}
// END of custom code block [file: shiboken_snippets/qvariant.cpp
// (qvariant-toObject)]
// ========================================================================

QPoint QVariant_wrapper::toPoint() const {
  // tag=1000

  // tag=1004
  return ::QVariant::toPoint();
}
QPointF QVariant_wrapper::toPointF() const {
  // tag=1000

  // tag=1004
  return ::QVariant::toPointF();
}
QRect QVariant_wrapper::toRect() const {
  // tag=1000

  // tag=1004
  return ::QVariant::toRect();
}
QRectF QVariant_wrapper::toRectF() const {
  // tag=1000

  // tag=1004
  return ::QVariant::toRectF();
}
QSize QVariant_wrapper::toSize() const {
  // tag=1000

  // tag=1004
  return ::QVariant::toSize();
}
QSizeF QVariant_wrapper::toSizeF() const {
  // tag=1000

  // tag=1004
  return ::QVariant::toSizeF();
}
QList<QString> QVariant_wrapper::toStringList() const {
  // tag=1000

  // tag=1004
  return ::QVariant::toStringList();
}
int QVariant_wrapper::typeId() const {
  // tag=1000

  // tag=1004
  return ::QVariant::typeId();
}
const char *QVariant_wrapper::typeName() const {
  // tag=1000

  // tag=1004
  return ::QVariant::typeName();
}
int QVariant_wrapper::userType() const {
  // tag=1000

  // tag=1004
  return ::QVariant::userType();
}

// tag=1005
QVariant_wrapper::~QVariant_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QVariant *fromPtr(void *ptr) {
  return reinterpret_cast<QVariant *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QVariant_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QVariant_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QVariant_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QVariant_wrapper *>(
      cppObj);
}
void *c_QVariant__constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_bool(bool b) {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(b);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_QByteArray(void *bytearray_) {
  auto &bytearray = *reinterpret_cast<QByteArray *>(bytearray_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(bytearray);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_QLine(void *line_) {
  auto &line = *reinterpret_cast<QLine *>(line_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(line);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_QLineF(void *line_) {
  auto &line = *reinterpret_cast<QLineF *>(line_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(line);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_QList_QString(void *stringlist_) {
  auto &stringlist = *reinterpret_cast<QList<QString> *>(stringlist_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(stringlist);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_QList_QVariant(void *list_) {
  auto &list = *reinterpret_cast<QList<QVariant> *>(list_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(list);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_QModelIndex(void *modelIndex_) {
  auto &modelIndex = *reinterpret_cast<QModelIndex *>(modelIndex_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(modelIndex);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_QPoint(void *pt_) {
  auto &pt = *reinterpret_cast<QPoint *>(pt_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(pt);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_QPointF(void *pt_) {
  auto &pt = *reinterpret_cast<QPointF *>(pt_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(pt);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_QRect(void *rect_) {
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(rect);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_QRectF(void *rect_) {
  auto &rect = *reinterpret_cast<QRectF *>(rect_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(rect);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_QSize(void *size_) {
  auto &size = *reinterpret_cast<QSize *>(size_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(size);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_QSizeF(void *size_) {
  auto &size = *reinterpret_cast<QSizeF *>(size_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(size);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_QString(const char *string_) {
  const auto string = QString::fromUtf8(string_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(string);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_char(const char *str) {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(str);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_double(double d) {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(d);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_float(float f) {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(f);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_int(int i) {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(i);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_qint64(qint64 ll) {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(ll);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// clear()
void c_QVariant__clear(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->clear();
}

// tag=1050
// detach()
void c_QVariant__detach(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->detach();
}

// tag=1050
// equals(const QVariant & other) const
bool c_QVariant__equals_QVariant(void *thisObj, void *other_) {
  auto &other = *reinterpret_cast<QVariant *>(other_);
  return
      // tag=1011

      // tag=1073
      fromWrapperPtr(thisObj)->equals(other);
}

// tag=1050
// fromObject(QObject * arg__1)
void *c_static_QVariant__fromObject_QObject(void *arg__1_) {
  auto arg__1 = reinterpret_cast<QObject *>(arg__1_);
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QVariant>{
          QtDartBindings_wrappersNS::QVariant_wrapper::fromObject(arg__1)};
}

// tag=1050
// isDetached() const
bool c_QVariant__isDetached(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isDetached();
}

// tag=1050
// isNull() const
bool c_QVariant__isNull(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isNull();
}

// tag=1050
// isValid() const
bool c_QVariant__isValid(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isValid();
}

// tag=1050
// setValue(const QVariant & avalue)
void c_QVariant__setValue_QVariant(void *thisObj, void *avalue_) {
  auto &avalue = *reinterpret_cast<QVariant *>(avalue_);
  // tag=1010
  fromPtr(thisObj)->setValue(avalue);
}

// tag=1050
// toBool() const
bool c_QVariant__toBool(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->toBool();
}

// tag=1050
// toByteArray() const
void *c_QVariant__toByteArray(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->toByteArray()};
}

// tag=1050
// toLine() const
void *c_QVariant__toLine(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QLine>{fromPtr(thisObj)->toLine()};
}

// tag=1050
// toLineF() const
void *c_QVariant__toLineF(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QLineF>{fromPtr(thisObj)->toLineF()};
}

// tag=1050
// toList() const
void *c_QVariant__toList(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QVariant>>{fromPtr(thisObj)->toList()};
}

// tag=1050
// toModelIndex() const
void *c_QVariant__toModelIndex(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{
          fromPtr(thisObj)->toModelIndex()};
}

// tag=1050
// toObject(QVariant arg__1)
void *c_static_QVariant__toObject_QVariant(void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QVariant *>(arg__1_);
  return
      // tag=1068
      QtDartBindings_wrappersNS::QVariant_wrapper::toObject(arg__1);
}

// tag=1050
// toPoint() const
void *c_QVariant__toPoint(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPoint>{fromPtr(thisObj)->toPoint()};
}

// tag=1050
// toPointF() const
void *c_QVariant__toPointF(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPointF>{fromPtr(thisObj)->toPointF()};
}

// tag=1050
// toRect() const
void *c_QVariant__toRect(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->toRect()};
}

// tag=1050
// toRectF() const
void *c_QVariant__toRectF(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRectF>{fromPtr(thisObj)->toRectF()};
}

// tag=1050
// toSize() const
void *c_QVariant__toSize(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->toSize()};
}

// tag=1050
// toSizeF() const
void *c_QVariant__toSizeF(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSizeF>{fromPtr(thisObj)->toSizeF()};
}

// tag=1050
// toStringList() const
void *c_QVariant__toStringList(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QString>>{
          fromPtr(thisObj)->toStringList()};
}

// tag=1050
// typeId() const
int c_QVariant__typeId(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->typeId();
}

// tag=1050
// typeName() const
const char *c_QVariant__typeName(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->typeName();
}

// tag=1050
// userType() const
int c_QVariant__userType(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->userType();
}
void c_QVariant__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
}
