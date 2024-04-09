/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QBrush_c.h"

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
QBrush_wrapper::QBrush_wrapper() : ::QBrush() {}
QBrush_wrapper::QBrush_wrapper(const QColor &color) : ::QBrush(color) {}
QBrush_wrapper::QBrush_wrapper(const QColor &color, const QPixmap &pixmap)
    : ::QBrush(color, pixmap) {}
QBrush_wrapper::QBrush_wrapper(const QPixmap &pixmap) : ::QBrush(pixmap) {}
const QColor &QBrush_wrapper::color() const { return ::QBrush::color(); }
bool QBrush_wrapper::isDetached() const { return ::QBrush::isDetached(); }
bool QBrush_wrapper::isOpaque() const { return ::QBrush::isOpaque(); }
void QBrush_wrapper::setColor(const QColor &color) {
  ::QBrush::setColor(color);
}
void QBrush_wrapper::setTexture(const QPixmap &pixmap) {
  ::QBrush::setTexture(pixmap);
}
QPixmap QBrush_wrapper::texture() const { return ::QBrush::texture(); }
QBrush_wrapper::~QBrush_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QBrush *fromPtr(void *ptr) { return reinterpret_cast<QBrush *>(ptr); }
static QtDartBindings_wrappersNS::QBrush_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QBrush_wrapper *>(ptr);
}
extern "C" {
void c_QBrush_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QBrush_wrapper *>(cppObj);
}
void *c_QBrush__constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QBrush_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QBrush__constructor_QColor(void *color_) {
  assert(color_);
  auto &color = *reinterpret_cast<QColor *>(color_);
  auto ptr = new QtDartBindings_wrappersNS::QBrush_wrapper(color);
  return reinterpret_cast<void *>(ptr);
}
void *c_QBrush__constructor_QColor_QPixmap(void *color_, void *pixmap_) {
  assert(color_);
  auto &color = *reinterpret_cast<QColor *>(color_);
  assert(pixmap_);
  auto &pixmap = *reinterpret_cast<QPixmap *>(pixmap_);
  auto ptr = new QtDartBindings_wrappersNS::QBrush_wrapper(color, pixmap);
  return reinterpret_cast<void *>(ptr);
}
void *c_QBrush__constructor_QPixmap(void *pixmap_) {
  assert(pixmap_);
  auto &pixmap = *reinterpret_cast<QPixmap *>(pixmap_);
  auto ptr = new QtDartBindings_wrappersNS::QBrush_wrapper(pixmap);
  return reinterpret_cast<void *>(ptr);
}
// color() const
void *c_QBrush__color(void *thisObj) {
  const auto &result =
      const_cast<void *>(static_cast<const void *>(&fromPtr(thisObj)->color()));
  return result;
}
// isDetached() const
bool c_QBrush__isDetached(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isDetached();
  return result;
}
// isOpaque() const
bool c_QBrush__isOpaque(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isOpaque();
  return result;
}
// setColor(const QColor & color)
void c_QBrush__setColor_QColor(void *thisObj, void *color_) {
  assert(color_);
  auto &color = *reinterpret_cast<QColor *>(color_);
  fromPtr(thisObj)->setColor(color);
}
// setTexture(const QPixmap & pixmap)
void c_QBrush__setTexture_QPixmap(void *thisObj, void *pixmap_) {
  assert(pixmap_);
  auto &pixmap = *reinterpret_cast<QPixmap *>(pixmap_);
  fromPtr(thisObj)->setTexture(pixmap);
}
// texture() const
void *c_QBrush__texture(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QPixmap>{fromPtr(thisObj)->texture()};
  return result;
}
void c_QBrush__destructor(void *thisObj) { delete fromPtr(thisObj); }
}
