/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QPoint_c.h"

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
QPoint_wrapper::QPoint_wrapper() : ::QPoint() {}
QPoint_wrapper::QPoint_wrapper(int xpos, int ypos) : ::QPoint(xpos, ypos) {}
int QPoint_wrapper::dotProduct(const QPoint &p1, const QPoint &p2) {
  return ::QPoint::dotProduct(p1, p2);
}
bool QPoint_wrapper::isNull() const { return ::QPoint::isNull(); }
int QPoint_wrapper::manhattanLength() const {
  return ::QPoint::manhattanLength();
}
void QPoint_wrapper::setX(int x) { ::QPoint::setX(x); }
void QPoint_wrapper::setY(int y) { ::QPoint::setY(y); }
QPointF QPoint_wrapper::toPointF() const { return ::QPoint::toPointF(); }
QPoint QPoint_wrapper::transposed() const { return ::QPoint::transposed(); }
int QPoint_wrapper::x() const { return ::QPoint::x(); }
int QPoint_wrapper::y() const { return ::QPoint::y(); }
QPoint_wrapper::~QPoint_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QPoint *fromPtr(void *ptr) { return reinterpret_cast<QPoint *>(ptr); }
static QtDartBindings_wrappersNS::QPoint_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QPoint_wrapper *>(ptr);
}
extern "C" {
void c_QPoint_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QPoint_wrapper *>(cppObj);
}
void *c_QPoint__constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QPoint_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QPoint__constructor_int_int(int xpos, int ypos) {
  auto ptr = new QtDartBindings_wrappersNS::QPoint_wrapper(xpos, ypos);
  return reinterpret_cast<void *>(ptr);
}
// dotProduct(const QPoint & p1, const QPoint & p2)
int c_static_QPoint__dotProduct_QPoint_QPoint(void *p1_, void *p2_) {
  assert(p1_);
  auto &p1 = *reinterpret_cast<QPoint *>(p1_);
  assert(p2_);
  auto &p2 = *reinterpret_cast<QPoint *>(p2_);
  const auto &result =
      QtDartBindings_wrappersNS::QPoint_wrapper::dotProduct(p1, p2);
  return result;
}
// isNull() const
bool c_QPoint__isNull(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isNull();
  return result;
}
// manhattanLength() const
int c_QPoint__manhattanLength(void *thisObj) {
  const auto &result = fromPtr(thisObj)->manhattanLength();
  return result;
}
// setX(int x)
void c_QPoint__setX_int(void *thisObj, int x) { fromPtr(thisObj)->setX(x); }
// setY(int y)
void c_QPoint__setY_int(void *thisObj, int y) { fromPtr(thisObj)->setY(y); }
// toPointF() const
void *c_QPoint__toPointF(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QPointF>{fromPtr(thisObj)->toPointF()};
  return result;
}
// transposed() const
void *c_QPoint__transposed(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QPoint>{fromPtr(thisObj)->transposed()};
  return result;
}
// x() const
int c_QPoint__x(void *thisObj) {
  const auto &result = fromPtr(thisObj)->x();
  return result;
}
// y() const
int c_QPoint__y(void *thisObj) {
  const auto &result = fromPtr(thisObj)->y();
  return result;
}
void c_QPoint__destructor(void *thisObj) { delete fromPtr(thisObj); }
}
