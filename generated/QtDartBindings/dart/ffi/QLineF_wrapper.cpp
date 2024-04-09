#include "QLineF_wrapper.h"

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
QLineF_wrapper::QLineF_wrapper() : ::QLineF() {}

// tag=1006
QLineF_wrapper::QLineF_wrapper(const QLine &line) : ::QLineF(line) {}

// tag=1006
QLineF_wrapper::QLineF_wrapper(const QPointF &pt1, const QPointF &pt2)
    : ::QLineF(pt1, pt2) {}

// tag=1006
QLineF_wrapper::QLineF_wrapper(qreal x1, qreal y1, qreal x2, qreal y2)
    : ::QLineF(x1, y1, x2, y2) {}
qreal QLineF_wrapper::angle() const {
  // tag=1000

  // tag=1004
  return ::QLineF::angle();
}
qreal QLineF_wrapper::angleTo(const QLineF &l) const {
  // tag=1000

  // tag=1004
  return ::QLineF::angleTo(l);
}
QPointF QLineF_wrapper::center() const {
  // tag=1000

  // tag=1004
  return ::QLineF::center();
}
qreal QLineF_wrapper::dx() const {
  // tag=1000

  // tag=1004
  return ::QLineF::dx();
}
qreal QLineF_wrapper::dy() const {
  // tag=1000

  // tag=1004
  return ::QLineF::dy();
}
QLineF QLineF_wrapper::fromPolar(qreal length, qreal angle) {
  // tag=1000

  // tag=1004
  return ::QLineF::fromPolar(length, angle);
}
bool QLineF_wrapper::isNull() const {
  // tag=1000

  // tag=1004
  return ::QLineF::isNull();
}
qreal QLineF_wrapper::length() const {
  // tag=1000

  // tag=1004
  return ::QLineF::length();
}
QLineF QLineF_wrapper::normalVector() const {
  // tag=1000

  // tag=1004
  return ::QLineF::normalVector();
}
QPointF QLineF_wrapper::p1() const {
  // tag=1000

  // tag=1004
  return ::QLineF::p1();
}
QPointF QLineF_wrapper::p2() const {
  // tag=1000

  // tag=1004
  return ::QLineF::p2();
}
QPointF QLineF_wrapper::pointAt(qreal t) const {
  // tag=1000

  // tag=1004
  return ::QLineF::pointAt(t);
}
void QLineF_wrapper::setAngle(qreal angle) {
  // tag=1000

  // tag=1004
  ::QLineF::setAngle(angle);
}
void QLineF_wrapper::setLength(qreal len) {
  // tag=1000

  // tag=1004
  ::QLineF::setLength(len);
}
void QLineF_wrapper::setLine(qreal x1, qreal y1, qreal x2, qreal y2) {
  // tag=1000

  // tag=1004
  ::QLineF::setLine(x1, y1, x2, y2);
}
void QLineF_wrapper::setP1(const QPointF &p1) {
  // tag=1000

  // tag=1004
  ::QLineF::setP1(p1);
}
void QLineF_wrapper::setP2(const QPointF &p2) {
  // tag=1000

  // tag=1004
  ::QLineF::setP2(p2);
}
void QLineF_wrapper::setPoints(const QPointF &p1, const QPointF &p2) {
  // tag=1000

  // tag=1004
  ::QLineF::setPoints(p1, p2);
}
QLine QLineF_wrapper::toLine() const {
  // tag=1000

  // tag=1004
  return ::QLineF::toLine();
}
void QLineF_wrapper::translate(const QPointF &p) {
  // tag=1000

  // tag=1004
  ::QLineF::translate(p);
}
void QLineF_wrapper::translate(qreal dx, qreal dy) {
  // tag=1000

  // tag=1004
  ::QLineF::translate(dx, dy);
}
QLineF QLineF_wrapper::translated(const QPointF &p) const {
  // tag=1000

  // tag=1004
  return ::QLineF::translated(p);
}
QLineF QLineF_wrapper::translated(qreal dx, qreal dy) const {
  // tag=1000

  // tag=1004
  return ::QLineF::translated(dx, dy);
}
QLineF QLineF_wrapper::unitVector() const {
  // tag=1000

  // tag=1004
  return ::QLineF::unitVector();
}
qreal QLineF_wrapper::x1() const {
  // tag=1000

  // tag=1004
  return ::QLineF::x1();
}
qreal QLineF_wrapper::x2() const {
  // tag=1000

  // tag=1004
  return ::QLineF::x2();
}
qreal QLineF_wrapper::y1() const {
  // tag=1000

  // tag=1004
  return ::QLineF::y1();
}
qreal QLineF_wrapper::y2() const {
  // tag=1000

  // tag=1004
  return ::QLineF::y2();
}

// tag=1005
QLineF_wrapper::~QLineF_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QLineF *fromPtr(void *ptr) { return reinterpret_cast<QLineF *>(ptr); }
// tag=1014
static QtDartBindings_wrappersNS::QLineF_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QLineF_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QLineF_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QLineF_wrapper *>(cppObj);
}
void *c_QLineF__constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QLineF_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QLineF__constructor_QLine(void *line_) {
  auto &line = *reinterpret_cast<QLine *>(line_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QLineF_wrapper(line);
  return reinterpret_cast<void *>(ptr);
}
void *c_QLineF__constructor_QPointF_QPointF(void *pt1_, void *pt2_) {
  auto &pt1 = *reinterpret_cast<QPointF *>(pt1_);
  auto &pt2 = *reinterpret_cast<QPointF *>(pt2_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QLineF_wrapper(pt1, pt2);
  return reinterpret_cast<void *>(ptr);
}
void *c_QLineF__constructor_qreal_qreal_qreal_qreal(qreal x1, qreal y1,
                                                    qreal x2, qreal y2) {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QLineF_wrapper(x1, y1, x2, y2);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// angle() const
qreal c_QLineF__angle(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->angle();
}

// tag=1050
// angleTo(const QLineF & l) const
qreal c_QLineF__angleTo_QLineF(void *thisObj, void *l_) {
  auto &l = *reinterpret_cast<QLineF *>(l_);
  return
      // tag=1010
      fromPtr(thisObj)->angleTo(l);
}

// tag=1050
// center() const
void *c_QLineF__center(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPointF>{fromPtr(thisObj)->center()};
}

// tag=1050
// dx() const
qreal c_QLineF__dx(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->dx();
}

// tag=1050
// dy() const
qreal c_QLineF__dy(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->dy();
}

// tag=1050
// fromPolar(qreal length, qreal angle)
void *c_static_QLineF__fromPolar_qreal_qreal(qreal length, qreal angle) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QLineF>{
          QtDartBindings_wrappersNS::QLineF_wrapper::fromPolar(length, angle)};
}

// tag=1050
// isNull() const
bool c_QLineF__isNull(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isNull();
}

// tag=1050
// length() const
qreal c_QLineF__length(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->length();
}

// tag=1050
// normalVector() const
void *c_QLineF__normalVector(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QLineF>{fromPtr(thisObj)->normalVector()};
}

// tag=1050
// p1() const
void *c_QLineF__p1(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPointF>{fromPtr(thisObj)->p1()};
}

// tag=1050
// p2() const
void *c_QLineF__p2(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPointF>{fromPtr(thisObj)->p2()};
}

// tag=1050
// pointAt(qreal t) const
void *c_QLineF__pointAt_qreal(void *thisObj, qreal t) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPointF>{fromPtr(thisObj)->pointAt(t)};
}

// tag=1050
// setAngle(qreal angle)
void c_QLineF__setAngle_qreal(void *thisObj, qreal angle) {
  // tag=1010
  fromPtr(thisObj)->setAngle(angle);
}

// tag=1050
// setLength(qreal len)
void c_QLineF__setLength_qreal(void *thisObj, qreal len) {
  // tag=1010
  fromPtr(thisObj)->setLength(len);
}

// tag=1050
// setLine(qreal x1, qreal y1, qreal x2, qreal y2)
void c_QLineF__setLine_qreal_qreal_qreal_qreal(void *thisObj, qreal x1,
                                               qreal y1, qreal x2, qreal y2) {
  // tag=1010
  fromPtr(thisObj)->setLine(x1, y1, x2, y2);
}

// tag=1050
// setP1(const QPointF & p1)
void c_QLineF__setP1_QPointF(void *thisObj, void *p1_) {
  auto &p1 = *reinterpret_cast<QPointF *>(p1_);
  // tag=1010
  fromPtr(thisObj)->setP1(p1);
}

// tag=1050
// setP2(const QPointF & p2)
void c_QLineF__setP2_QPointF(void *thisObj, void *p2_) {
  auto &p2 = *reinterpret_cast<QPointF *>(p2_);
  // tag=1010
  fromPtr(thisObj)->setP2(p2);
}

// tag=1050
// setPoints(const QPointF & p1, const QPointF & p2)
void c_QLineF__setPoints_QPointF_QPointF(void *thisObj, void *p1_, void *p2_) {
  auto &p1 = *reinterpret_cast<QPointF *>(p1_);
  auto &p2 = *reinterpret_cast<QPointF *>(p2_);
  // tag=1010
  fromPtr(thisObj)->setPoints(p1, p2);
}

// tag=1050
// toLine() const
void *c_QLineF__toLine(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QLine>{fromPtr(thisObj)->toLine()};
}

// tag=1050
// translate(const QPointF & p)
void c_QLineF__translate_QPointF(void *thisObj, void *p_) {
  auto &p = *reinterpret_cast<QPointF *>(p_);
  // tag=1010
  fromPtr(thisObj)->translate(p);
}

// tag=1050
// translate(qreal dx, qreal dy)
void c_QLineF__translate_qreal_qreal(void *thisObj, qreal dx, qreal dy) {
  // tag=1010
  fromPtr(thisObj)->translate(dx, dy);
}

// tag=1050
// translated(const QPointF & p) const
void *c_QLineF__translated_QPointF(void *thisObj, void *p_) {
  auto &p = *reinterpret_cast<QPointF *>(p_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QLineF>{fromPtr(thisObj)->translated(p)};
}

// tag=1050
// translated(qreal dx, qreal dy) const
void *c_QLineF__translated_qreal_qreal(void *thisObj, qreal dx, qreal dy) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QLineF>{fromPtr(thisObj)->translated(dx, dy)};
}

// tag=1050
// unitVector() const
void *c_QLineF__unitVector(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QLineF>{fromPtr(thisObj)->unitVector()};
}

// tag=1050
// x1() const
qreal c_QLineF__x1(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->x1();
}

// tag=1050
// x2() const
qreal c_QLineF__x2(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->x2();
}

// tag=1050
// y1() const
qreal c_QLineF__y1(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->y1();
}

// tag=1050
// y2() const
qreal c_QLineF__y2(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->y2();
}
void c_QLineF__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
}
