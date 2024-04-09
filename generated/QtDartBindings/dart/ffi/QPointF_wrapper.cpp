#include "QPointF_wrapper.h"

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
QPointF_wrapper::QPointF_wrapper() : ::QPointF() {}

// tag=1006
QPointF_wrapper::QPointF_wrapper(const QPoint &p) : ::QPointF(p) {}

// tag=1006
QPointF_wrapper::QPointF_wrapper(qreal xpos, qreal ypos)
    : ::QPointF(xpos, ypos) {}
qreal QPointF_wrapper::dotProduct(const QPointF &p1, const QPointF &p2) {
  // tag=1000

  // tag=1004
  return ::QPointF::dotProduct(p1, p2);
}
bool QPointF_wrapper::isNull() const {
  // tag=1000

  // tag=1004
  return ::QPointF::isNull();
}
qreal QPointF_wrapper::manhattanLength() const {
  // tag=1000

  // tag=1004
  return ::QPointF::manhattanLength();
}
void QPointF_wrapper::setX(qreal x) {
  // tag=1000

  // tag=1004
  ::QPointF::setX(x);
}
void QPointF_wrapper::setY(qreal y) {
  // tag=1000

  // tag=1004
  ::QPointF::setY(y);
}
QPoint QPointF_wrapper::toPoint() const {
  // tag=1000

  // tag=1004
  return ::QPointF::toPoint();
}
QPointF QPointF_wrapper::transposed() const {
  // tag=1000

  // tag=1004
  return ::QPointF::transposed();
}
qreal QPointF_wrapper::x() const {
  // tag=1000

  // tag=1004
  return ::QPointF::x();
}
qreal QPointF_wrapper::y() const {
  // tag=1000

  // tag=1004
  return ::QPointF::y();
}

// tag=1005
QPointF_wrapper::~QPointF_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QPointF *fromPtr(void *ptr) { return reinterpret_cast<QPointF *>(ptr); }
// tag=1014
static QtDartBindings_wrappersNS::QPointF_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QPointF_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QPointF_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QPointF_wrapper *>(cppObj);
}
void *c_QPointF__constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QPointF_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QPointF__constructor_QPoint(void *p_) {
  auto &p = *reinterpret_cast<QPoint *>(p_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QPointF_wrapper(p);
  return reinterpret_cast<void *>(ptr);
}
void *c_QPointF__constructor_qreal_qreal(qreal xpos, qreal ypos) {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QPointF_wrapper(xpos, ypos);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// dotProduct(const QPointF & p1, const QPointF & p2)
qreal c_static_QPointF__dotProduct_QPointF_QPointF(void *p1_, void *p2_) {
  auto &p1 = *reinterpret_cast<QPointF *>(p1_);
  auto &p2 = *reinterpret_cast<QPointF *>(p2_);
  return
      // tag=1068
      QtDartBindings_wrappersNS::QPointF_wrapper::dotProduct(p1, p2);
}

// tag=1050
// isNull() const
bool c_QPointF__isNull(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isNull();
}

// tag=1050
// manhattanLength() const
qreal c_QPointF__manhattanLength(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->manhattanLength();
}

// tag=1050
// setX(qreal x)
void c_QPointF__setX_qreal(void *thisObj, qreal x) {
  // tag=1010
  fromPtr(thisObj)->setX(x);
}

// tag=1050
// setY(qreal y)
void c_QPointF__setY_qreal(void *thisObj, qreal y) {
  // tag=1010
  fromPtr(thisObj)->setY(y);
}

// tag=1050
// toPoint() const
void *c_QPointF__toPoint(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPoint>{fromPtr(thisObj)->toPoint()};
}

// tag=1050
// transposed() const
void *c_QPointF__transposed(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPointF>{fromPtr(thisObj)->transposed()};
}

// tag=1050
// x() const
qreal c_QPointF__x(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->x();
}

// tag=1050
// y() const
qreal c_QPointF__y(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->y();
}
void c_QPointF__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
}
