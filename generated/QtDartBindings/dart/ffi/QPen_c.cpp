/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QPen_c.h"

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
QPen_wrapper::QPen_wrapper() : ::QPen() {}
QPen_wrapper::QPen_wrapper(const QBrush &brush, qreal width)
    : ::QPen(brush, width) {}
QPen_wrapper::QPen_wrapper(const QColor &color) : ::QPen(color) {}
QBrush QPen_wrapper::brush() const { return ::QPen::brush(); }
QColor QPen_wrapper::color() const { return ::QPen::color(); }
qreal QPen_wrapper::dashOffset() const { return ::QPen::dashOffset(); }
QList<qreal> QPen_wrapper::dashPattern() const { return ::QPen::dashPattern(); }
bool QPen_wrapper::isCosmetic() const { return ::QPen::isCosmetic(); }
bool QPen_wrapper::isDetached() { return ::QPen::isDetached(); }
bool QPen_wrapper::isSolid() const { return ::QPen::isSolid(); }
qreal QPen_wrapper::miterLimit() const { return ::QPen::miterLimit(); }
void QPen_wrapper::setBrush(const QBrush &brush) { ::QPen::setBrush(brush); }
void QPen_wrapper::setColor(const QColor &color) { ::QPen::setColor(color); }
void QPen_wrapper::setCosmetic(bool cosmetic) { ::QPen::setCosmetic(cosmetic); }
void QPen_wrapper::setDashOffset(qreal doffset) {
  ::QPen::setDashOffset(doffset);
}
void QPen_wrapper::setDashPattern(const QList<qreal> &pattern) {
  ::QPen::setDashPattern(pattern);
}
void QPen_wrapper::setMiterLimit(qreal limit) { ::QPen::setMiterLimit(limit); }
void QPen_wrapper::setWidth(int width) { ::QPen::setWidth(width); }
void QPen_wrapper::setWidthF(qreal width) { ::QPen::setWidthF(width); }
int QPen_wrapper::width() const { return ::QPen::width(); }
qreal QPen_wrapper::widthF() const { return ::QPen::widthF(); }
QPen_wrapper::~QPen_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QPen *fromPtr(void *ptr) { return reinterpret_cast<QPen *>(ptr); }
static QtDartBindings_wrappersNS::QPen_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QPen_wrapper *>(ptr);
}
extern "C" {
void c_QPen_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QPen_wrapper *>(cppObj);
}
void *c_QPen__constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QPen_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QPen__constructor_QBrush_qreal(void *brush_, qreal width) {
  assert(brush_);
  auto &brush = *reinterpret_cast<QBrush *>(brush_);
  auto ptr = new QtDartBindings_wrappersNS::QPen_wrapper(brush, width);
  return reinterpret_cast<void *>(ptr);
}
void *c_QPen__constructor_QColor(void *color_) {
  assert(color_);
  auto &color = *reinterpret_cast<QColor *>(color_);
  auto ptr = new QtDartBindings_wrappersNS::QPen_wrapper(color);
  return reinterpret_cast<void *>(ptr);
}
// brush() const
void *c_QPen__brush(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QBrush>{fromPtr(thisObj)->brush()};
  return result;
}
// color() const
void *c_QPen__color(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QColor>{fromPtr(thisObj)->color()};
  return result;
}
// dashOffset() const
qreal c_QPen__dashOffset(void *thisObj) {
  const auto &result = fromPtr(thisObj)->dashOffset();
  return result;
}
// dashPattern() const
void *c_QPen__dashPattern(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<qreal>>{
      fromPtr(thisObj)->dashPattern()};
  return result;
}
// isCosmetic() const
bool c_QPen__isCosmetic(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isCosmetic();
  return result;
}
// isDetached()
bool c_QPen__isDetached(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isDetached();
  return result;
}
// isSolid() const
bool c_QPen__isSolid(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isSolid();
  return result;
}
// miterLimit() const
qreal c_QPen__miterLimit(void *thisObj) {
  const auto &result = fromPtr(thisObj)->miterLimit();
  return result;
}
// setBrush(const QBrush & brush)
void c_QPen__setBrush_QBrush(void *thisObj, void *brush_) {
  assert(brush_);
  auto &brush = *reinterpret_cast<QBrush *>(brush_);
  fromPtr(thisObj)->setBrush(brush);
}
// setColor(const QColor & color)
void c_QPen__setColor_QColor(void *thisObj, void *color_) {
  assert(color_);
  auto &color = *reinterpret_cast<QColor *>(color_);
  fromPtr(thisObj)->setColor(color);
}
// setCosmetic(bool cosmetic)
void c_QPen__setCosmetic_bool(void *thisObj, bool cosmetic) {
  fromPtr(thisObj)->setCosmetic(cosmetic);
}
// setDashOffset(qreal doffset)
void c_QPen__setDashOffset_qreal(void *thisObj, qreal doffset) {
  fromPtr(thisObj)->setDashOffset(doffset);
}
// setDashPattern(const QList<qreal > & pattern)
void c_QPen__setDashPattern_QList_qreal(void *thisObj, void *pattern_) {
  assert(pattern_);
  auto &pattern = *reinterpret_cast<QList<qreal> *>(pattern_);
  fromPtr(thisObj)->setDashPattern(pattern);
}
// setMiterLimit(qreal limit)
void c_QPen__setMiterLimit_qreal(void *thisObj, qreal limit) {
  fromPtr(thisObj)->setMiterLimit(limit);
}
// setWidth(int width)
void c_QPen__setWidth_int(void *thisObj, int width) {
  fromPtr(thisObj)->setWidth(width);
}
// setWidthF(qreal width)
void c_QPen__setWidthF_qreal(void *thisObj, qreal width) {
  fromPtr(thisObj)->setWidthF(width);
}
// width() const
int c_QPen__width(void *thisObj) {
  const auto &result = fromPtr(thisObj)->width();
  return result;
}
// widthF() const
qreal c_QPen__widthF(void *thisObj) {
  const auto &result = fromPtr(thisObj)->widthF();
  return result;
}
void c_QPen__destructor(void *thisObj) { delete fromPtr(thisObj); }
}
