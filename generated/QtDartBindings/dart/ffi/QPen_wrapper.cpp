#include "QPen_wrapper.h"

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
QPen_wrapper::QPen_wrapper() : ::QPen() {}

// tag=1006
QPen_wrapper::QPen_wrapper(const QBrush &brush, qreal width)
    : ::QPen(brush, width) {}

// tag=1006
QPen_wrapper::QPen_wrapper(const QColor &color) : ::QPen(color) {}
QBrush QPen_wrapper::brush() const {
  // tag=1000

  // tag=1004
  return ::QPen::brush();
}
QColor QPen_wrapper::color() const {
  // tag=1000

  // tag=1004
  return ::QPen::color();
}
qreal QPen_wrapper::dashOffset() const {
  // tag=1000

  // tag=1004
  return ::QPen::dashOffset();
}
QList<qreal> QPen_wrapper::dashPattern() const {
  // tag=1000

  // tag=1004
  return ::QPen::dashPattern();
}
bool QPen_wrapper::isCosmetic() const {
  // tag=1000

  // tag=1004
  return ::QPen::isCosmetic();
}
bool QPen_wrapper::isDetached() {
  // tag=1000

  // tag=1004
  return ::QPen::isDetached();
}
bool QPen_wrapper::isSolid() const {
  // tag=1000

  // tag=1004
  return ::QPen::isSolid();
}
qreal QPen_wrapper::miterLimit() const {
  // tag=1000

  // tag=1004
  return ::QPen::miterLimit();
}
void QPen_wrapper::setBrush(const QBrush &brush) {
  // tag=1000

  // tag=1004
  ::QPen::setBrush(brush);
}
void QPen_wrapper::setColor(const QColor &color) {
  // tag=1000

  // tag=1004
  ::QPen::setColor(color);
}
void QPen_wrapper::setCosmetic(bool cosmetic) {
  // tag=1000

  // tag=1004
  ::QPen::setCosmetic(cosmetic);
}
void QPen_wrapper::setDashOffset(qreal doffset) {
  // tag=1000

  // tag=1004
  ::QPen::setDashOffset(doffset);
}
void QPen_wrapper::setDashPattern(const QList<qreal> &pattern) {
  // tag=1000

  // tag=1004
  ::QPen::setDashPattern(pattern);
}
void QPen_wrapper::setMiterLimit(qreal limit) {
  // tag=1000

  // tag=1004
  ::QPen::setMiterLimit(limit);
}
void QPen_wrapper::setWidth(int width) {
  // tag=1000

  // tag=1004
  ::QPen::setWidth(width);
}
void QPen_wrapper::setWidthF(qreal width) {
  // tag=1000

  // tag=1004
  ::QPen::setWidthF(width);
}
int QPen_wrapper::width() const {
  // tag=1000

  // tag=1004
  return ::QPen::width();
}
qreal QPen_wrapper::widthF() const {
  // tag=1000

  // tag=1004
  return ::QPen::widthF();
}

// tag=1005
QPen_wrapper::~QPen_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QPen *fromPtr(void *ptr) { return reinterpret_cast<QPen *>(ptr); }
// tag=1014
static QtDartBindings_wrappersNS::QPen_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QPen_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QPen_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QPen_wrapper *>(cppObj);
}
void *c_QPen__constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QPen_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QPen__constructor_QBrush_qreal(void *brush_, qreal width) {
  auto &brush = *reinterpret_cast<QBrush *>(brush_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QPen_wrapper(brush, width);
  return reinterpret_cast<void *>(ptr);
}
void *c_QPen__constructor_QColor(void *color_) {
  auto &color = *reinterpret_cast<QColor *>(color_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QPen_wrapper(color);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// brush() const
void *c_QPen__brush(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QBrush>{fromPtr(thisObj)->brush()};
}

// tag=1050
// color() const
void *c_QPen__color(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QColor>{fromPtr(thisObj)->color()};
}

// tag=1050
// dashOffset() const
qreal c_QPen__dashOffset(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->dashOffset();
}

// tag=1050
// dashPattern() const
void *c_QPen__dashPattern(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<qreal>>{
          fromPtr(thisObj)->dashPattern()};
}

// tag=1050
// isCosmetic() const
bool c_QPen__isCosmetic(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isCosmetic();
}

// tag=1050
// isDetached()
bool c_QPen__isDetached(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isDetached();
}

// tag=1050
// isSolid() const
bool c_QPen__isSolid(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isSolid();
}

// tag=1050
// miterLimit() const
qreal c_QPen__miterLimit(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->miterLimit();
}

// tag=1050
// setBrush(const QBrush & brush)
void c_QPen__setBrush_QBrush(void *thisObj, void *brush_) {
  auto &brush = *reinterpret_cast<QBrush *>(brush_);
  // tag=1010
  fromPtr(thisObj)->setBrush(brush);
}

// tag=1050
// setColor(const QColor & color)
void c_QPen__setColor_QColor(void *thisObj, void *color_) {
  auto &color = *reinterpret_cast<QColor *>(color_);
  // tag=1010
  fromPtr(thisObj)->setColor(color);
}

// tag=1050
// setCosmetic(bool cosmetic)
void c_QPen__setCosmetic_bool(void *thisObj, bool cosmetic) {
  // tag=1010
  fromPtr(thisObj)->setCosmetic(cosmetic);
}

// tag=1050
// setDashOffset(qreal doffset)
void c_QPen__setDashOffset_qreal(void *thisObj, qreal doffset) {
  // tag=1010
  fromPtr(thisObj)->setDashOffset(doffset);
}

// tag=1050
// setDashPattern(const QList<qreal > & pattern)
void c_QPen__setDashPattern_QList_qreal(void *thisObj, void *pattern_) {
  auto &pattern = *reinterpret_cast<QList<qreal> *>(pattern_);
  // tag=1010
  fromPtr(thisObj)->setDashPattern(pattern);
}

// tag=1050
// setMiterLimit(qreal limit)
void c_QPen__setMiterLimit_qreal(void *thisObj, qreal limit) {
  // tag=1010
  fromPtr(thisObj)->setMiterLimit(limit);
}

// tag=1050
// setWidth(int width)
void c_QPen__setWidth_int(void *thisObj, int width) {
  // tag=1010
  fromPtr(thisObj)->setWidth(width);
}

// tag=1050
// setWidthF(qreal width)
void c_QPen__setWidthF_qreal(void *thisObj, qreal width) {
  // tag=1010
  fromPtr(thisObj)->setWidthF(width);
}

// tag=1050
// width() const
int c_QPen__width(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->width();
}

// tag=1050
// widthF() const
qreal c_QPen__widthF(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->widthF();
}
void c_QPen__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
}
