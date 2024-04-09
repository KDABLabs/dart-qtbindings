#include "QRegion_wrapper.h"

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
QRegion_wrapper::QRegion_wrapper() : ::QRegion() {}

// tag=1006
QRegion_wrapper::QRegion_wrapper(const QRect &r) : ::QRegion(r) {}

// tag=1006
QRegion_wrapper::QRegion_wrapper(int x, int y, int w, int h)
    : ::QRegion(x, y, w, h) {}
const QRect *QRegion_wrapper::begin() const {
  // tag=1000

  // tag=1004
  return ::QRegion::begin();
}
QRect QRegion_wrapper::boundingRect() const {
  // tag=1000

  // tag=1004
  return ::QRegion::boundingRect();
}
const QRect *QRegion_wrapper::cbegin() const {
  // tag=1000

  // tag=1004
  return ::QRegion::cbegin();
}
const QRect *QRegion_wrapper::cend() const {
  // tag=1000

  // tag=1004
  return ::QRegion::cend();
}
bool QRegion_wrapper::contains(const QPoint &p) const {
  // tag=1000

  // tag=1004
  return ::QRegion::contains(p);
}
bool QRegion_wrapper::contains(const QRect &r) const {
  // tag=1000

  // tag=1004
  return ::QRegion::contains(r);
}
const QRect *QRegion_wrapper::end() const {
  // tag=1000

  // tag=1004
  return ::QRegion::end();
}
QRegion QRegion_wrapper::intersected(const QRect &r) const {
  // tag=1000

  // tag=1004
  return ::QRegion::intersected(r);
}
QRegion QRegion_wrapper::intersected(const QRegion &r) const {
  // tag=1000

  // tag=1004
  return ::QRegion::intersected(r);
}
bool QRegion_wrapper::intersects(const QRect &r) const {
  // tag=1000

  // tag=1004
  return ::QRegion::intersects(r);
}
bool QRegion_wrapper::intersects(const QRegion &r) const {
  // tag=1000

  // tag=1004
  return ::QRegion::intersects(r);
}
bool QRegion_wrapper::isEmpty() const {
  // tag=1000

  // tag=1004
  return ::QRegion::isEmpty();
}
bool QRegion_wrapper::isNull() const {
  // tag=1000

  // tag=1004
  return ::QRegion::isNull();
}
int QRegion_wrapper::rectCount() const {
  // tag=1000

  // tag=1004
  return ::QRegion::rectCount();
}
void QRegion_wrapper::setRects(const QRect *rect, int num) {
  // tag=1000

  // tag=1004
  ::QRegion::setRects(rect, num);
}
QRegion QRegion_wrapper::subtracted(const QRegion &r) const {
  // tag=1000

  // tag=1004
  return ::QRegion::subtracted(r);
}
void QRegion_wrapper::translate(const QPoint &p) {
  // tag=1000

  // tag=1004
  ::QRegion::translate(p);
}
void QRegion_wrapper::translate(int dx, int dy) {
  // tag=1000

  // tag=1004
  ::QRegion::translate(dx, dy);
}
QRegion QRegion_wrapper::translated(const QPoint &p) const {
  // tag=1000

  // tag=1004
  return ::QRegion::translated(p);
}
QRegion QRegion_wrapper::translated(int dx, int dy) const {
  // tag=1000

  // tag=1004
  return ::QRegion::translated(dx, dy);
}
QRegion QRegion_wrapper::united(const QRect &r) const {
  // tag=1000

  // tag=1004
  return ::QRegion::united(r);
}
QRegion QRegion_wrapper::united(const QRegion &r) const {
  // tag=1000

  // tag=1004
  return ::QRegion::united(r);
}
QRegion QRegion_wrapper::xored(const QRegion &r) const {
  // tag=1000

  // tag=1004
  return ::QRegion::xored(r);
}

// tag=1005
QRegion_wrapper::~QRegion_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QRegion *fromPtr(void *ptr) { return reinterpret_cast<QRegion *>(ptr); }
// tag=1014
static QtDartBindings_wrappersNS::QRegion_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QRegion_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QRegion_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QRegion_wrapper *>(cppObj);
}
void *c_QRegion__constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QRegion_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QRegion__constructor_QRect(void *r_) {
  auto &r = *reinterpret_cast<QRect *>(r_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QRegion_wrapper(r);
  return reinterpret_cast<void *>(ptr);
}
void *c_QRegion__constructor_int_int_int_int(int x, int y, int w, int h) {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QRegion_wrapper(x, y, w, h);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// begin() const
void *c_QRegion__begin(void *thisObj) {
  return
      // tag=1010

      // tag=1069
      const_cast<void *>(static_cast<const void *>(fromPtr(thisObj)->begin()));
}

// tag=1050
// boundingRect() const
void *c_QRegion__boundingRect(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->boundingRect()};
}

// tag=1050
// cbegin() const
void *c_QRegion__cbegin(void *thisObj) {
  return
      // tag=1010

      // tag=1069
      const_cast<void *>(static_cast<const void *>(fromPtr(thisObj)->cbegin()));
}

// tag=1050
// cend() const
void *c_QRegion__cend(void *thisObj) {
  return
      // tag=1010

      // tag=1069
      const_cast<void *>(static_cast<const void *>(fromPtr(thisObj)->cend()));
}

// tag=1050
// contains(const QPoint & p) const
bool c_QRegion__contains_QPoint(void *thisObj, void *p_) {
  auto &p = *reinterpret_cast<QPoint *>(p_);
  return
      // tag=1010
      fromPtr(thisObj)->contains(p);
}

// tag=1050
// contains(const QRect & r) const
bool c_QRegion__contains_QRect(void *thisObj, void *r_) {
  auto &r = *reinterpret_cast<QRect *>(r_);
  return
      // tag=1010
      fromPtr(thisObj)->contains(r);
}

// tag=1050
// end() const
void *c_QRegion__end(void *thisObj) {
  return
      // tag=1010

      // tag=1069
      const_cast<void *>(static_cast<const void *>(fromPtr(thisObj)->end()));
}

// tag=1050
// intersected(const QRect & r) const
void *c_QRegion__intersected_QRect(void *thisObj, void *r_) {
  auto &r = *reinterpret_cast<QRect *>(r_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRegion>{fromPtr(thisObj)->intersected(r)};
}

// tag=1050
// intersected(const QRegion & r) const
void *c_QRegion__intersected_QRegion(void *thisObj, void *r_) {
  auto &r = *reinterpret_cast<QRegion *>(r_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRegion>{fromPtr(thisObj)->intersected(r)};
}

// tag=1050
// intersects(const QRect & r) const
bool c_QRegion__intersects_QRect(void *thisObj, void *r_) {
  auto &r = *reinterpret_cast<QRect *>(r_);
  return
      // tag=1010
      fromPtr(thisObj)->intersects(r);
}

// tag=1050
// intersects(const QRegion & r) const
bool c_QRegion__intersects_QRegion(void *thisObj, void *r_) {
  auto &r = *reinterpret_cast<QRegion *>(r_);
  return
      // tag=1010
      fromPtr(thisObj)->intersects(r);
}

// tag=1050
// isEmpty() const
bool c_QRegion__isEmpty(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isEmpty();
}

// tag=1050
// isNull() const
bool c_QRegion__isNull(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isNull();
}

// tag=1050
// rectCount() const
int c_QRegion__rectCount(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->rectCount();
}

// tag=1050
// setRects(const QRect * rect, int num)
void c_QRegion__setRects_QRect_int(void *thisObj, void *rect_, int num) {
  auto rect = reinterpret_cast<QRect *>(rect_);
  // tag=1010
  fromPtr(thisObj)->setRects(rect, num);
}

// tag=1050
// subtracted(const QRegion & r) const
void *c_QRegion__subtracted_QRegion(void *thisObj, void *r_) {
  auto &r = *reinterpret_cast<QRegion *>(r_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRegion>{fromPtr(thisObj)->subtracted(r)};
}

// tag=1050
// translate(const QPoint & p)
void c_QRegion__translate_QPoint(void *thisObj, void *p_) {
  auto &p = *reinterpret_cast<QPoint *>(p_);
  // tag=1010
  fromPtr(thisObj)->translate(p);
}

// tag=1050
// translate(int dx, int dy)
void c_QRegion__translate_int_int(void *thisObj, int dx, int dy) {
  // tag=1010
  fromPtr(thisObj)->translate(dx, dy);
}

// tag=1050
// translated(const QPoint & p) const
void *c_QRegion__translated_QPoint(void *thisObj, void *p_) {
  auto &p = *reinterpret_cast<QPoint *>(p_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRegion>{fromPtr(thisObj)->translated(p)};
}

// tag=1050
// translated(int dx, int dy) const
void *c_QRegion__translated_int_int(void *thisObj, int dx, int dy) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRegion>{
          fromPtr(thisObj)->translated(dx, dy)};
}

// tag=1050
// united(const QRect & r) const
void *c_QRegion__united_QRect(void *thisObj, void *r_) {
  auto &r = *reinterpret_cast<QRect *>(r_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRegion>{fromPtr(thisObj)->united(r)};
}

// tag=1050
// united(const QRegion & r) const
void *c_QRegion__united_QRegion(void *thisObj, void *r_) {
  auto &r = *reinterpret_cast<QRegion *>(r_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRegion>{fromPtr(thisObj)->united(r)};
}

// tag=1050
// xored(const QRegion & r) const
void *c_QRegion__xored_QRegion(void *thisObj, void *r_) {
  auto &r = *reinterpret_cast<QRegion *>(r_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRegion>{fromPtr(thisObj)->xored(r)};
}
void c_QRegion__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
}
