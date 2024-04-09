/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QPointF_c.h"

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
QPointF_wrapper::QPointF_wrapper() : ::QPointF() {}
QPointF_wrapper::QPointF_wrapper(const QPoint &p) : ::QPointF(p) {}
QPointF_wrapper::QPointF_wrapper(qreal xpos, qreal ypos)
    : ::QPointF(xpos, ypos) {}
qreal QPointF_wrapper::dotProduct(const QPointF &p1, const QPointF &p2) {
  return ::QPointF::dotProduct(p1, p2);
}
bool QPointF_wrapper::isNull() const { return ::QPointF::isNull(); }
qreal QPointF_wrapper::manhattanLength() const {
  return ::QPointF::manhattanLength();
}
void QPointF_wrapper::setX(qreal x) { ::QPointF::setX(x); }
void QPointF_wrapper::setY(qreal y) { ::QPointF::setY(y); }
QPoint QPointF_wrapper::toPoint() const { return ::QPointF::toPoint(); }
QPointF QPointF_wrapper::transposed() const { return ::QPointF::transposed(); }
qreal QPointF_wrapper::x() const { return ::QPointF::x(); }
qreal QPointF_wrapper::y() const { return ::QPointF::y(); }
QPointF_wrapper::~QPointF_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QPointF *fromPtr(void *ptr) { return reinterpret_cast<QPointF *>(ptr); }
static QtDartBindings_wrappersNS::QPointF_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QPointF_wrapper *>(ptr);
}
extern "C" {
void c_QPointF_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QPointF_wrapper *>(cppObj);
}
void *c_QPointF__constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QPointF_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QPointF__constructor_QPoint(void *p_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPoint *>(p_);
  auto ptr = new QtDartBindings_wrappersNS::QPointF_wrapper(p);
  return reinterpret_cast<void *>(ptr);
}
void *c_QPointF__constructor_qreal_qreal(qreal xpos, qreal ypos) {
  auto ptr = new QtDartBindings_wrappersNS::QPointF_wrapper(xpos, ypos);
  return reinterpret_cast<void *>(ptr);
}
// dotProduct(const QPointF & p1, const QPointF & p2)
qreal c_static_QPointF__dotProduct_QPointF_QPointF(void *p1_, void *p2_) {
  assert(p1_);
  auto &p1 = *reinterpret_cast<QPointF *>(p1_);
  assert(p2_);
  auto &p2 = *reinterpret_cast<QPointF *>(p2_);
  const auto &result =
      QtDartBindings_wrappersNS::QPointF_wrapper::dotProduct(p1, p2);
  return result;
}
// isNull() const
bool c_QPointF__isNull(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isNull();
  return result;
}
// manhattanLength() const
qreal c_QPointF__manhattanLength(void *thisObj) {
  const auto &result = fromPtr(thisObj)->manhattanLength();
  return result;
}
// setX(qreal x)
void c_QPointF__setX_qreal(void *thisObj, qreal x) {
  fromPtr(thisObj)->setX(x);
}
// setY(qreal y)
void c_QPointF__setY_qreal(void *thisObj, qreal y) {
  fromPtr(thisObj)->setY(y);
}
// toPoint() const
void *c_QPointF__toPoint(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QPoint>{fromPtr(thisObj)->toPoint()};
  return result;
}
// transposed() const
void *c_QPointF__transposed(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QPointF>{fromPtr(thisObj)->transposed()};
  return result;
}
// x() const
qreal c_QPointF__x(void *thisObj) {
  const auto &result = fromPtr(thisObj)->x();
  return result;
}
// y() const
qreal c_QPointF__y(void *thisObj) {
  const auto &result = fromPtr(thisObj)->y();
  return result;
}
void c_QPointF__destructor(void *thisObj) { delete fromPtr(thisObj); }
}
