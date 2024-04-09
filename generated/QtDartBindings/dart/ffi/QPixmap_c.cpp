/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QPixmap_c.h"

#include <iostream>

#include <cassert>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
QPixmap_wrapper::QPixmap_wrapper() : ::QPixmap() {}
QPixmap_wrapper::QPixmap_wrapper(const QSize &arg__1) : ::QPixmap(arg__1) {}
QPixmap_wrapper::QPixmap_wrapper(const QString &fileName, const char *format)
    : ::QPixmap(fileName, format) {}
QPixmap_wrapper::QPixmap_wrapper(int w, int h) : ::QPixmap(w, h) {}
qint64 QPixmap_wrapper::cacheKey() const { return ::QPixmap::cacheKey(); }
QPixmap QPixmap_wrapper::copy(const QRect &rect) const {
  return ::QPixmap::copy(rect);
}
QPixmap QPixmap_wrapper::copy(int x, int y, int width, int height) const {
  return ::QPixmap::copy(x, y, width, height);
}
int QPixmap_wrapper::defaultDepth() { return ::QPixmap::defaultDepth(); }
int QPixmap_wrapper::depth() const { return ::QPixmap::depth(); }
void QPixmap_wrapper::detach() { ::QPixmap::detach(); }
int QPixmap_wrapper::devType() const {
  if (m_devTypeCallback) {
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QPixmap::devType();
  }
}
int QPixmap_wrapper::devType_nocallback() const { return ::QPixmap::devType(); }
QSizeF QPixmap_wrapper::deviceIndependentSize() const {
  return ::QPixmap::deviceIndependentSize();
}
qreal QPixmap_wrapper::devicePixelRatio() const {
  return ::QPixmap::devicePixelRatio();
}
void QPixmap_wrapper::fill(const QColor &fillColor) {
  ::QPixmap::fill(fillColor);
}
bool QPixmap_wrapper::hasAlpha() const { return ::QPixmap::hasAlpha(); }
bool QPixmap_wrapper::hasAlphaChannel() const {
  return ::QPixmap::hasAlphaChannel();
}
int QPixmap_wrapper::height() const { return ::QPixmap::height(); }
bool QPixmap_wrapper::isDetached() const { return ::QPixmap::isDetached(); }
bool QPixmap_wrapper::isNull() const { return ::QPixmap::isNull(); }
bool QPixmap_wrapper::isQBitmap() const { return ::QPixmap::isQBitmap(); }
bool QPixmap_wrapper::load(const QString &fileName, const char *format) {
  return ::QPixmap::load(fileName, format);
}
bool QPixmap_wrapper::loadFromData(const QByteArray &data, const char *format) {
  return ::QPixmap::loadFromData(data, format);
}
QRect QPixmap_wrapper::rect() const { return ::QPixmap::rect(); }
bool QPixmap_wrapper::save(QIODevice *device, const char *format,
                           int quality) const {
  return ::QPixmap::save(device, format, quality);
}
bool QPixmap_wrapper::save(const QString &fileName, const char *format,
                           int quality) const {
  return ::QPixmap::save(fileName, format, quality);
}
QPixmap QPixmap_wrapper::scaled(const QSize &s) const {
  return ::QPixmap::scaled(s);
}
QPixmap QPixmap_wrapper::scaled(int w, int h) const {
  return ::QPixmap::scaled(w, h);
}
QPixmap QPixmap_wrapper::scaledToHeight(int h) const {
  return ::QPixmap::scaledToHeight(h);
}
QPixmap QPixmap_wrapper::scaledToWidth(int w) const {
  return ::QPixmap::scaledToWidth(w);
}
void QPixmap_wrapper::scroll(int dx, int dy, const QRect &rect,
                             QRegion *exposed) {
  ::QPixmap::scroll(dx, dy, rect, exposed);
}
void QPixmap_wrapper::scroll(int dx, int dy, int x, int y, int width,
                             int height, QRegion *exposed) {
  ::QPixmap::scroll(dx, dy, x, y, width, height, exposed);
}
void QPixmap_wrapper::setDevicePixelRatio(qreal scaleFactor) {
  ::QPixmap::setDevicePixelRatio(scaleFactor);
}
QSize QPixmap_wrapper::size() const { return ::QPixmap::size(); }
int QPixmap_wrapper::width() const { return ::QPixmap::width(); }
QPixmap_wrapper::~QPixmap_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QPixmap *fromPtr(void *ptr) { return reinterpret_cast<QPixmap *>(ptr); }
static QtDartBindings_wrappersNS::QPixmap_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QPixmap_wrapper *>(ptr);
}
extern "C" {
void c_QPixmap_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QPixmap_wrapper *>(cppObj);
}
void *c_QPixmap__constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QPixmap_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QPixmap__constructor_QSize(void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QSize *>(arg__1_);
  auto ptr = new QtDartBindings_wrappersNS::QPixmap_wrapper(arg__1);
  return reinterpret_cast<void *>(ptr);
}
void *c_QPixmap__constructor_QString_char(const char *fileName_,
                                          const char *format) {
  const auto fileName = QString::fromUtf8(fileName_);
  auto ptr = new QtDartBindings_wrappersNS::QPixmap_wrapper(fileName, format);
  return reinterpret_cast<void *>(ptr);
}
void *c_QPixmap__constructor_int_int(int w, int h) {
  auto ptr = new QtDartBindings_wrappersNS::QPixmap_wrapper(w, h);
  return reinterpret_cast<void *>(ptr);
}
// cacheKey() const
qint64 c_QPixmap__cacheKey(void *thisObj) {
  const auto &result = fromPtr(thisObj)->cacheKey();
  return result;
}
// copy(const QRect & rect) const
void *c_QPixmap__copy_QRect(void *thisObj, void *rect_) {
  assert(rect_);
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  const auto &result =
      new Dartagnan::ValueWrapper<QPixmap>{fromPtr(thisObj)->copy(rect)};
  return result;
}
// copy(int x, int y, int width, int height) const
void *c_QPixmap__copy_int_int_int_int(void *thisObj, int x, int y, int width,
                                      int height) {
  const auto &result = new Dartagnan::ValueWrapper<QPixmap>{
      fromPtr(thisObj)->copy(x, y, width, height)};
  return result;
}
// defaultDepth()
int c_static_QPixmap__defaultDepth() {
  const auto &result =
      QtDartBindings_wrappersNS::QPixmap_wrapper::defaultDepth();
  return result;
}
// depth() const
int c_QPixmap__depth(void *thisObj) {
  const auto &result = fromPtr(thisObj)->depth();
  return result;
}
// detach()
void c_QPixmap__detach(void *thisObj) { fromPtr(thisObj)->detach(); }
// devType() const
int c_QPixmap__devType(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QPixmap_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->devType_nocallback();
    } else {
      return targetPtr->devType();
    }
  }();
  return result;
}
// deviceIndependentSize() const
void *c_QPixmap__deviceIndependentSize(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSizeF>{
      fromPtr(thisObj)->deviceIndependentSize()};
  return result;
}
// devicePixelRatio() const
qreal c_QPixmap__devicePixelRatio(void *thisObj) {
  const auto &result = fromPtr(thisObj)->devicePixelRatio();
  return result;
}
// fill(const QColor & fillColor)
void c_QPixmap__fill_QColor(void *thisObj, void *fillColor_) {
  assert(fillColor_);
  auto &fillColor = *reinterpret_cast<QColor *>(fillColor_);
  fromPtr(thisObj)->fill(fillColor);
}
// hasAlpha() const
bool c_QPixmap__hasAlpha(void *thisObj) {
  const auto &result = fromPtr(thisObj)->hasAlpha();
  return result;
}
// hasAlphaChannel() const
bool c_QPixmap__hasAlphaChannel(void *thisObj) {
  const auto &result = fromPtr(thisObj)->hasAlphaChannel();
  return result;
}
// height() const
int c_QPixmap__height(void *thisObj) {
  const auto &result = fromPtr(thisObj)->height();
  return result;
}
// isDetached() const
bool c_QPixmap__isDetached(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isDetached();
  return result;
}
// isNull() const
bool c_QPixmap__isNull(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isNull();
  return result;
}
// isQBitmap() const
bool c_QPixmap__isQBitmap(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isQBitmap();
  return result;
}
// load(const QString & fileName, const char * format)
bool c_QPixmap__load_QString_char(void *thisObj, const char *fileName_,
                                  const char *format) {
  const auto fileName = QString::fromUtf8(fileName_);
  const auto &result = fromPtr(thisObj)->load(fileName, format);
  free((char *)fileName_);
  free((char *)format);
  return result;
}
// loadFromData(const QByteArray & data, const char * format)
bool c_QPixmap__loadFromData_QByteArray_char(void *thisObj, void *data_,
                                             const char *format) {
  assert(data_);
  auto &data = *reinterpret_cast<QByteArray *>(data_);
  const auto &result = fromPtr(thisObj)->loadFromData(data, format);
  free((char *)format);
  return result;
}
// rect() const
void *c_QPixmap__rect(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->rect()};
  return result;
}
// save(QIODevice * device, const char * format, int quality) const
bool c_QPixmap__save_QIODevice_char_int(void *thisObj, void *device_,
                                        const char *format, int quality) {
  auto device = reinterpret_cast<QIODevice *>(device_);
  const auto &result = fromPtr(thisObj)->save(device, format, quality);
  free((char *)format);
  return result;
}
// save(const QString & fileName, const char * format, int quality) const
bool c_QPixmap__save_QString_char_int(void *thisObj, const char *fileName_,
                                      const char *format, int quality) {
  const auto fileName = QString::fromUtf8(fileName_);
  const auto &result = fromPtr(thisObj)->save(fileName, format, quality);
  free((char *)fileName_);
  free((char *)format);
  return result;
}
// scaled(const QSize & s) const
void *c_QPixmap__scaled_QSize(void *thisObj, void *s_) {
  assert(s_);
  auto &s = *reinterpret_cast<QSize *>(s_);
  const auto &result =
      new Dartagnan::ValueWrapper<QPixmap>{fromPtr(thisObj)->scaled(s)};
  return result;
}
// scaled(int w, int h) const
void *c_QPixmap__scaled_int_int(void *thisObj, int w, int h) {
  const auto &result =
      new Dartagnan::ValueWrapper<QPixmap>{fromPtr(thisObj)->scaled(w, h)};
  return result;
}
// scaledToHeight(int h) const
void *c_QPixmap__scaledToHeight_int(void *thisObj, int h) {
  const auto &result =
      new Dartagnan::ValueWrapper<QPixmap>{fromPtr(thisObj)->scaledToHeight(h)};
  return result;
}
// scaledToWidth(int w) const
void *c_QPixmap__scaledToWidth_int(void *thisObj, int w) {
  const auto &result =
      new Dartagnan::ValueWrapper<QPixmap>{fromPtr(thisObj)->scaledToWidth(w)};
  return result;
}
// scroll(int dx, int dy, const QRect & rect, QRegion * exposed)
void c_QPixmap__scroll_int_int_QRect_QRegion(void *thisObj, int dx, int dy,
                                             void *rect_, void *exposed_) {
  assert(rect_);
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  auto exposed = reinterpret_cast<QRegion *>(exposed_);
  fromPtr(thisObj)->scroll(dx, dy, rect, exposed);
}
// scroll(int dx, int dy, int x, int y, int width, int height, QRegion *
// exposed)
void c_QPixmap__scroll_int_int_int_int_int_int_QRegion(void *thisObj, int dx,
                                                       int dy, int x, int y,
                                                       int width, int height,
                                                       void *exposed_) {
  auto exposed = reinterpret_cast<QRegion *>(exposed_);
  fromPtr(thisObj)->scroll(dx, dy, x, y, width, height, exposed);
}
// setDevicePixelRatio(qreal scaleFactor)
void c_QPixmap__setDevicePixelRatio_qreal(void *thisObj, qreal scaleFactor) {
  fromPtr(thisObj)->setDevicePixelRatio(scaleFactor);
}
// size() const
void *c_QPixmap__size(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->size()};
  return result;
}
// width() const
int c_QPixmap__width(void *thisObj) {
  const auto &result = fromPtr(thisObj)->width();
  return result;
}
void c_QPixmap__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QPixmap__registerVirtualMethodCallback(void *ptr, void *callback,
                                              int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 695:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPixmap_wrapper::Callback_devType>(callback);
    break;
  }
}
}
