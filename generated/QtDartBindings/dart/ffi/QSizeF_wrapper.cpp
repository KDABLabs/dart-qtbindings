#include "QSizeF_wrapper.h"

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
QSizeF_wrapper::QSizeF_wrapper() : ::QSizeF() {}

// tag=1006
QSizeF_wrapper::QSizeF_wrapper(const QSize &sz) : ::QSizeF(sz) {}

// tag=1006
QSizeF_wrapper::QSizeF_wrapper(qreal w, qreal h) : ::QSizeF(w, h) {}
QSizeF QSizeF_wrapper::boundedTo(const QSizeF &arg__1) const {
  // tag=1000

  // tag=1004
  return ::QSizeF::boundedTo(arg__1);
}
QSizeF QSizeF_wrapper::expandedTo(const QSizeF &arg__1) const {
  // tag=1000

  // tag=1004
  return ::QSizeF::expandedTo(arg__1);
}
qreal QSizeF_wrapper::height() const {
  // tag=1000

  // tag=1004
  return ::QSizeF::height();
}
bool QSizeF_wrapper::isEmpty() const {
  // tag=1000

  // tag=1004
  return ::QSizeF::isEmpty();
}
bool QSizeF_wrapper::isNull() const {
  // tag=1000

  // tag=1004
  return ::QSizeF::isNull();
}
bool QSizeF_wrapper::isValid() const {
  // tag=1000

  // tag=1004
  return ::QSizeF::isValid();
}
void QSizeF_wrapper::setHeight(qreal h) {
  // tag=1000

  // tag=1004
  ::QSizeF::setHeight(h);
}
void QSizeF_wrapper::setWidth(qreal w) {
  // tag=1000

  // tag=1004
  ::QSizeF::setWidth(w);
}
QSize QSizeF_wrapper::toSize() const {
  // tag=1000

  // tag=1004
  return ::QSizeF::toSize();
}
void QSizeF_wrapper::transpose() {
  // tag=1000

  // tag=1004
  ::QSizeF::transpose();
}
QSizeF QSizeF_wrapper::transposed() const {
  // tag=1000

  // tag=1004
  return ::QSizeF::transposed();
}
qreal QSizeF_wrapper::width() const {
  // tag=1000

  // tag=1004
  return ::QSizeF::width();
}

// tag=1005
QSizeF_wrapper::~QSizeF_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QSizeF *fromPtr(void *ptr) { return reinterpret_cast<QSizeF *>(ptr); }
// tag=1014
static QtDartBindings_wrappersNS::QSizeF_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QSizeF_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QSizeF_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QSizeF_wrapper *>(cppObj);
}
void *c_QSizeF__constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QSizeF_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QSizeF__constructor_QSize(void *sz_) {
  auto &sz = *reinterpret_cast<QSize *>(sz_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QSizeF_wrapper(sz);
  return reinterpret_cast<void *>(ptr);
}
void *c_QSizeF__constructor_qreal_qreal(qreal w, qreal h) {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QSizeF_wrapper(w, h);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// boundedTo(const QSizeF & arg__1) const
void *c_QSizeF__boundedTo_QSizeF(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QSizeF *>(arg__1_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSizeF>{fromPtr(thisObj)->boundedTo(arg__1)};
}

// tag=1050
// expandedTo(const QSizeF & arg__1) const
void *c_QSizeF__expandedTo_QSizeF(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QSizeF *>(arg__1_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSizeF>{fromPtr(thisObj)->expandedTo(arg__1)};
}

// tag=1050
// height() const
qreal c_QSizeF__height(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->height();
}

// tag=1050
// isEmpty() const
bool c_QSizeF__isEmpty(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isEmpty();
}

// tag=1050
// isNull() const
bool c_QSizeF__isNull(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isNull();
}

// tag=1050
// isValid() const
bool c_QSizeF__isValid(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isValid();
}

// tag=1050
// setHeight(qreal h)
void c_QSizeF__setHeight_qreal(void *thisObj, qreal h) {
  // tag=1010
  fromPtr(thisObj)->setHeight(h);
}

// tag=1050
// setWidth(qreal w)
void c_QSizeF__setWidth_qreal(void *thisObj, qreal w) {
  // tag=1010
  fromPtr(thisObj)->setWidth(w);
}

// tag=1050
// toSize() const
void *c_QSizeF__toSize(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->toSize()};
}

// tag=1050
// transpose()
void c_QSizeF__transpose(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->transpose();
}

// tag=1050
// transposed() const
void *c_QSizeF__transposed(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSizeF>{fromPtr(thisObj)->transposed()};
}

// tag=1050
// width() const
qreal c_QSizeF__width(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->width();
}
void c_QSizeF__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
}
