#include "QBrush_wrapper.h"

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
QBrush_wrapper::QBrush_wrapper() : ::QBrush() {}

// tag=1006
QBrush_wrapper::QBrush_wrapper(const QColor &color) : ::QBrush(color) {}

// tag=1006
QBrush_wrapper::QBrush_wrapper(const QColor &color, const QPixmap &pixmap)
    : ::QBrush(color, pixmap) {}

// tag=1006
QBrush_wrapper::QBrush_wrapper(const QPixmap &pixmap) : ::QBrush(pixmap) {}
const QColor &QBrush_wrapper::color() const {
  // tag=1000

  // tag=1004
  return ::QBrush::color();
}
bool QBrush_wrapper::isDetached() const {
  // tag=1000

  // tag=1004
  return ::QBrush::isDetached();
}
bool QBrush_wrapper::isOpaque() const {
  // tag=1000

  // tag=1004
  return ::QBrush::isOpaque();
}
void QBrush_wrapper::setColor(const QColor &color) {
  // tag=1000

  // tag=1004
  ::QBrush::setColor(color);
}
void QBrush_wrapper::setTexture(const QPixmap &pixmap) {
  // tag=1000

  // tag=1004
  ::QBrush::setTexture(pixmap);
}
QPixmap QBrush_wrapper::texture() const {
  // tag=1000

  // tag=1004
  return ::QBrush::texture();
}

// tag=1005
QBrush_wrapper::~QBrush_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QBrush *fromPtr(void *ptr) { return reinterpret_cast<QBrush *>(ptr); }
// tag=1014
static QtDartBindings_wrappersNS::QBrush_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QBrush_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QBrush_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QBrush_wrapper *>(cppObj);
}
void *c_QBrush__constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QBrush_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QBrush__constructor_QColor(void *color_) {
  auto &color = *reinterpret_cast<QColor *>(color_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QBrush_wrapper(color);
  return reinterpret_cast<void *>(ptr);
}
void *c_QBrush__constructor_QColor_QPixmap(void *color_, void *pixmap_) {
  auto &color = *reinterpret_cast<QColor *>(color_);
  auto &pixmap = *reinterpret_cast<QPixmap *>(pixmap_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QBrush_wrapper(color, pixmap);
  return reinterpret_cast<void *>(ptr);
}
void *c_QBrush__constructor_QPixmap(void *pixmap_) {
  auto &pixmap = *reinterpret_cast<QPixmap *>(pixmap_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QBrush_wrapper(pixmap);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// color() const
void *c_QBrush__color(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(static_cast<const void *>(&fromPtr(thisObj)->color()));
}

// tag=1050
// isDetached() const
bool c_QBrush__isDetached(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isDetached();
}

// tag=1050
// isOpaque() const
bool c_QBrush__isOpaque(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isOpaque();
}

// tag=1050
// setColor(const QColor & color)
void c_QBrush__setColor_QColor(void *thisObj, void *color_) {
  auto &color = *reinterpret_cast<QColor *>(color_);
  // tag=1010
  fromPtr(thisObj)->setColor(color);
}

// tag=1050
// setTexture(const QPixmap & pixmap)
void c_QBrush__setTexture_QPixmap(void *thisObj, void *pixmap_) {
  auto &pixmap = *reinterpret_cast<QPixmap *>(pixmap_);
  // tag=1010
  fromPtr(thisObj)->setTexture(pixmap);
}

// tag=1050
// texture() const
void *c_QBrush__texture(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPixmap>{fromPtr(thisObj)->texture()};
}
void c_QBrush__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
}
