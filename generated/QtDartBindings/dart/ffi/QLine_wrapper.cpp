#include "QLine_wrapper.h"

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
QLine_wrapper::QLine_wrapper() : ::QLine() {}

// tag=1006
QLine_wrapper::QLine_wrapper(const QPoint &pt1, const QPoint &pt2)
    : ::QLine(pt1, pt2) {}

// tag=1006
QLine_wrapper::QLine_wrapper(int x1, int y1, int x2, int y2)
    : ::QLine(x1, y1, x2, y2) {}
QPoint QLine_wrapper::center() const {
  // tag=1000

  // tag=1004
  return ::QLine::center();
}
int QLine_wrapper::dx() const {
  // tag=1000

  // tag=1004
  return ::QLine::dx();
}
int QLine_wrapper::dy() const {
  // tag=1000

  // tag=1004
  return ::QLine::dy();
}
bool QLine_wrapper::isNull() const {
  // tag=1000

  // tag=1004
  return ::QLine::isNull();
}
QPoint QLine_wrapper::p1() const {
  // tag=1000

  // tag=1004
  return ::QLine::p1();
}
QPoint QLine_wrapper::p2() const {
  // tag=1000

  // tag=1004
  return ::QLine::p2();
}
void QLine_wrapper::setLine(int x1, int y1, int x2, int y2) {
  // tag=1000

  // tag=1004
  ::QLine::setLine(x1, y1, x2, y2);
}
void QLine_wrapper::setP1(const QPoint &p1) {
  // tag=1000

  // tag=1004
  ::QLine::setP1(p1);
}
void QLine_wrapper::setP2(const QPoint &p2) {
  // tag=1000

  // tag=1004
  ::QLine::setP2(p2);
}
void QLine_wrapper::setPoints(const QPoint &p1, const QPoint &p2) {
  // tag=1000

  // tag=1004
  ::QLine::setPoints(p1, p2);
}
void QLine_wrapper::translate(const QPoint &p) {
  // tag=1000

  // tag=1004
  ::QLine::translate(p);
}
void QLine_wrapper::translate(int dx, int dy) {
  // tag=1000

  // tag=1004
  ::QLine::translate(dx, dy);
}
QLine QLine_wrapper::translated(const QPoint &p) const {
  // tag=1000

  // tag=1004
  return ::QLine::translated(p);
}
QLine QLine_wrapper::translated(int dx, int dy) const {
  // tag=1000

  // tag=1004
  return ::QLine::translated(dx, dy);
}
int QLine_wrapper::x1() const {
  // tag=1000

  // tag=1004
  return ::QLine::x1();
}
int QLine_wrapper::x2() const {
  // tag=1000

  // tag=1004
  return ::QLine::x2();
}
int QLine_wrapper::y1() const {
  // tag=1000

  // tag=1004
  return ::QLine::y1();
}
int QLine_wrapper::y2() const {
  // tag=1000

  // tag=1004
  return ::QLine::y2();
}

// tag=1005
QLine_wrapper::~QLine_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QLine *fromPtr(void *ptr) { return reinterpret_cast<QLine *>(ptr); }
// tag=1014
static QtDartBindings_wrappersNS::QLine_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QLine_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QLine_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QLine_wrapper *>(cppObj);
}
void *c_QLine__constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QLine_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QLine__constructor_QPoint_QPoint(void *pt1_, void *pt2_) {
  auto &pt1 = *reinterpret_cast<QPoint *>(pt1_);
  auto &pt2 = *reinterpret_cast<QPoint *>(pt2_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QLine_wrapper(pt1, pt2);
  return reinterpret_cast<void *>(ptr);
}
void *c_QLine__constructor_int_int_int_int(int x1, int y1, int x2, int y2) {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QLine_wrapper(x1, y1, x2, y2);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// center() const
void *c_QLine__center(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPoint>{fromPtr(thisObj)->center()};
}

// tag=1050
// dx() const
int c_QLine__dx(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->dx();
}

// tag=1050
// dy() const
int c_QLine__dy(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->dy();
}

// tag=1050
// isNull() const
bool c_QLine__isNull(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isNull();
}

// tag=1050
// p1() const
void *c_QLine__p1(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPoint>{fromPtr(thisObj)->p1()};
}

// tag=1050
// p2() const
void *c_QLine__p2(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPoint>{fromPtr(thisObj)->p2()};
}

// tag=1050
// setLine(int x1, int y1, int x2, int y2)
void c_QLine__setLine_int_int_int_int(void *thisObj, int x1, int y1, int x2,
                                      int y2) {
  // tag=1010
  fromPtr(thisObj)->setLine(x1, y1, x2, y2);
}

// tag=1050
// setP1(const QPoint & p1)
void c_QLine__setP1_QPoint(void *thisObj, void *p1_) {
  auto &p1 = *reinterpret_cast<QPoint *>(p1_);
  // tag=1010
  fromPtr(thisObj)->setP1(p1);
}

// tag=1050
// setP2(const QPoint & p2)
void c_QLine__setP2_QPoint(void *thisObj, void *p2_) {
  auto &p2 = *reinterpret_cast<QPoint *>(p2_);
  // tag=1010
  fromPtr(thisObj)->setP2(p2);
}

// tag=1050
// setPoints(const QPoint & p1, const QPoint & p2)
void c_QLine__setPoints_QPoint_QPoint(void *thisObj, void *p1_, void *p2_) {
  auto &p1 = *reinterpret_cast<QPoint *>(p1_);
  auto &p2 = *reinterpret_cast<QPoint *>(p2_);
  // tag=1010
  fromPtr(thisObj)->setPoints(p1, p2);
}

// tag=1050
// translate(const QPoint & p)
void c_QLine__translate_QPoint(void *thisObj, void *p_) {
  auto &p = *reinterpret_cast<QPoint *>(p_);
  // tag=1010
  fromPtr(thisObj)->translate(p);
}

// tag=1050
// translate(int dx, int dy)
void c_QLine__translate_int_int(void *thisObj, int dx, int dy) {
  // tag=1010
  fromPtr(thisObj)->translate(dx, dy);
}

// tag=1050
// translated(const QPoint & p) const
void *c_QLine__translated_QPoint(void *thisObj, void *p_) {
  auto &p = *reinterpret_cast<QPoint *>(p_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QLine>{fromPtr(thisObj)->translated(p)};
}

// tag=1050
// translated(int dx, int dy) const
void *c_QLine__translated_int_int(void *thisObj, int dx, int dy) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QLine>{fromPtr(thisObj)->translated(dx, dy)};
}

// tag=1050
// x1() const
int c_QLine__x1(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->x1();
}

// tag=1050
// x2() const
int c_QLine__x2(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->x2();
}

// tag=1050
// y1() const
int c_QLine__y1(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->y1();
}

// tag=1050
// y2() const
int c_QLine__y2(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->y2();
}
void c_QLine__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
}
