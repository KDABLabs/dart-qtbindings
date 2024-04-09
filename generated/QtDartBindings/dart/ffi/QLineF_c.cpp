/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QLineF_c.h"

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
QLineF_wrapper::QLineF_wrapper() : ::QLineF() {}
QLineF_wrapper::QLineF_wrapper(const QLine &line) : ::QLineF(line) {}
QLineF_wrapper::QLineF_wrapper(const QPointF &pt1, const QPointF &pt2)
    : ::QLineF(pt1, pt2) {}
QLineF_wrapper::QLineF_wrapper(qreal x1, qreal y1, qreal x2, qreal y2)
    : ::QLineF(x1, y1, x2, y2) {}
qreal QLineF_wrapper::angle() const { return ::QLineF::angle(); }
qreal QLineF_wrapper::angleTo(const QLineF &l) const {
  return ::QLineF::angleTo(l);
}
QPointF QLineF_wrapper::center() const { return ::QLineF::center(); }
qreal QLineF_wrapper::dx() const { return ::QLineF::dx(); }
qreal QLineF_wrapper::dy() const { return ::QLineF::dy(); }
QLineF QLineF_wrapper::fromPolar(qreal length, qreal angle) {
  return ::QLineF::fromPolar(length, angle);
}
bool QLineF_wrapper::isNull() const { return ::QLineF::isNull(); }
qreal QLineF_wrapper::length() const { return ::QLineF::length(); }
QLineF QLineF_wrapper::normalVector() const { return ::QLineF::normalVector(); }
QPointF QLineF_wrapper::p1() const { return ::QLineF::p1(); }
QPointF QLineF_wrapper::p2() const { return ::QLineF::p2(); }
QPointF QLineF_wrapper::pointAt(qreal t) const { return ::QLineF::pointAt(t); }
void QLineF_wrapper::setAngle(qreal angle) { ::QLineF::setAngle(angle); }
void QLineF_wrapper::setLength(qreal len) { ::QLineF::setLength(len); }
void QLineF_wrapper::setLine(qreal x1, qreal y1, qreal x2, qreal y2) {
  ::QLineF::setLine(x1, y1, x2, y2);
}
void QLineF_wrapper::setP1(const QPointF &p1) { ::QLineF::setP1(p1); }
void QLineF_wrapper::setP2(const QPointF &p2) { ::QLineF::setP2(p2); }
void QLineF_wrapper::setPoints(const QPointF &p1, const QPointF &p2) {
  ::QLineF::setPoints(p1, p2);
}
QLine QLineF_wrapper::toLine() const { return ::QLineF::toLine(); }
void QLineF_wrapper::translate(const QPointF &p) { ::QLineF::translate(p); }
void QLineF_wrapper::translate(qreal dx, qreal dy) {
  ::QLineF::translate(dx, dy);
}
QLineF QLineF_wrapper::translated(const QPointF &p) const {
  return ::QLineF::translated(p);
}
QLineF QLineF_wrapper::translated(qreal dx, qreal dy) const {
  return ::QLineF::translated(dx, dy);
}
QLineF QLineF_wrapper::unitVector() const { return ::QLineF::unitVector(); }
qreal QLineF_wrapper::x1() const { return ::QLineF::x1(); }
qreal QLineF_wrapper::x2() const { return ::QLineF::x2(); }
qreal QLineF_wrapper::y1() const { return ::QLineF::y1(); }
qreal QLineF_wrapper::y2() const { return ::QLineF::y2(); }
QLineF_wrapper::~QLineF_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QLineF *fromPtr(void *ptr) { return reinterpret_cast<QLineF *>(ptr); }
static QtDartBindings_wrappersNS::QLineF_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QLineF_wrapper *>(ptr);
}
extern "C" {
void c_QLineF_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QLineF_wrapper *>(cppObj);
}
void *c_QLineF__constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QLineF_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QLineF__constructor_QLine(void *line_) {
  assert(line_);
  auto &line = *reinterpret_cast<QLine *>(line_);
  auto ptr = new QtDartBindings_wrappersNS::QLineF_wrapper(line);
  return reinterpret_cast<void *>(ptr);
}
void *c_QLineF__constructor_QPointF_QPointF(void *pt1_, void *pt2_) {
  assert(pt1_);
  auto &pt1 = *reinterpret_cast<QPointF *>(pt1_);
  assert(pt2_);
  auto &pt2 = *reinterpret_cast<QPointF *>(pt2_);
  auto ptr = new QtDartBindings_wrappersNS::QLineF_wrapper(pt1, pt2);
  return reinterpret_cast<void *>(ptr);
}
void *c_QLineF__constructor_qreal_qreal_qreal_qreal(qreal x1, qreal y1,
                                                    qreal x2, qreal y2) {
  auto ptr = new QtDartBindings_wrappersNS::QLineF_wrapper(x1, y1, x2, y2);
  return reinterpret_cast<void *>(ptr);
}
// angle() const
qreal c_QLineF__angle(void *thisObj) {
  const auto &result = fromPtr(thisObj)->angle();
  return result;
}
// angleTo(const QLineF & l) const
qreal c_QLineF__angleTo_QLineF(void *thisObj, void *l_) {
  assert(l_);
  auto &l = *reinterpret_cast<QLineF *>(l_);
  const auto &result = fromPtr(thisObj)->angleTo(l);
  return result;
}
// center() const
void *c_QLineF__center(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QPointF>{fromPtr(thisObj)->center()};
  return result;
}
// dx() const
qreal c_QLineF__dx(void *thisObj) {
  const auto &result = fromPtr(thisObj)->dx();
  return result;
}
// dy() const
qreal c_QLineF__dy(void *thisObj) {
  const auto &result = fromPtr(thisObj)->dy();
  return result;
}
// fromPolar(qreal length, qreal angle)
void *c_static_QLineF__fromPolar_qreal_qreal(qreal length, qreal angle) {
  const auto &result = new Dartagnan::ValueWrapper<QLineF>{
      QtDartBindings_wrappersNS::QLineF_wrapper::fromPolar(length, angle)};
  return result;
}
// isNull() const
bool c_QLineF__isNull(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isNull();
  return result;
}
// length() const
qreal c_QLineF__length(void *thisObj) {
  const auto &result = fromPtr(thisObj)->length();
  return result;
}
// normalVector() const
void *c_QLineF__normalVector(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QLineF>{fromPtr(thisObj)->normalVector()};
  return result;
}
// p1() const
void *c_QLineF__p1(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QPointF>{fromPtr(thisObj)->p1()};
  return result;
}
// p2() const
void *c_QLineF__p2(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QPointF>{fromPtr(thisObj)->p2()};
  return result;
}
// pointAt(qreal t) const
void *c_QLineF__pointAt_qreal(void *thisObj, qreal t) {
  const auto &result =
      new Dartagnan::ValueWrapper<QPointF>{fromPtr(thisObj)->pointAt(t)};
  return result;
}
// setAngle(qreal angle)
void c_QLineF__setAngle_qreal(void *thisObj, qreal angle) {
  fromPtr(thisObj)->setAngle(angle);
}
// setLength(qreal len)
void c_QLineF__setLength_qreal(void *thisObj, qreal len) {
  fromPtr(thisObj)->setLength(len);
}
// setLine(qreal x1, qreal y1, qreal x2, qreal y2)
void c_QLineF__setLine_qreal_qreal_qreal_qreal(void *thisObj, qreal x1,
                                               qreal y1, qreal x2, qreal y2) {
  fromPtr(thisObj)->setLine(x1, y1, x2, y2);
}
// setP1(const QPointF & p1)
void c_QLineF__setP1_QPointF(void *thisObj, void *p1_) {
  assert(p1_);
  auto &p1 = *reinterpret_cast<QPointF *>(p1_);
  fromPtr(thisObj)->setP1(p1);
}
// setP2(const QPointF & p2)
void c_QLineF__setP2_QPointF(void *thisObj, void *p2_) {
  assert(p2_);
  auto &p2 = *reinterpret_cast<QPointF *>(p2_);
  fromPtr(thisObj)->setP2(p2);
}
// setPoints(const QPointF & p1, const QPointF & p2)
void c_QLineF__setPoints_QPointF_QPointF(void *thisObj, void *p1_, void *p2_) {
  assert(p1_);
  auto &p1 = *reinterpret_cast<QPointF *>(p1_);
  assert(p2_);
  auto &p2 = *reinterpret_cast<QPointF *>(p2_);
  fromPtr(thisObj)->setPoints(p1, p2);
}
// toLine() const
void *c_QLineF__toLine(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QLine>{fromPtr(thisObj)->toLine()};
  return result;
}
// translate(const QPointF & p)
void c_QLineF__translate_QPointF(void *thisObj, void *p_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPointF *>(p_);
  fromPtr(thisObj)->translate(p);
}
// translate(qreal dx, qreal dy)
void c_QLineF__translate_qreal_qreal(void *thisObj, qreal dx, qreal dy) {
  fromPtr(thisObj)->translate(dx, dy);
}
// translated(const QPointF & p) const
void *c_QLineF__translated_QPointF(void *thisObj, void *p_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPointF *>(p_);
  const auto &result =
      new Dartagnan::ValueWrapper<QLineF>{fromPtr(thisObj)->translated(p)};
  return result;
}
// translated(qreal dx, qreal dy) const
void *c_QLineF__translated_qreal_qreal(void *thisObj, qreal dx, qreal dy) {
  const auto &result =
      new Dartagnan::ValueWrapper<QLineF>{fromPtr(thisObj)->translated(dx, dy)};
  return result;
}
// unitVector() const
void *c_QLineF__unitVector(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QLineF>{fromPtr(thisObj)->unitVector()};
  return result;
}
// x1() const
qreal c_QLineF__x1(void *thisObj) {
  const auto &result = fromPtr(thisObj)->x1();
  return result;
}
// x2() const
qreal c_QLineF__x2(void *thisObj) {
  const auto &result = fromPtr(thisObj)->x2();
  return result;
}
// y1() const
qreal c_QLineF__y1(void *thisObj) {
  const auto &result = fromPtr(thisObj)->y1();
  return result;
}
// y2() const
qreal c_QLineF__y2(void *thisObj) {
  const auto &result = fromPtr(thisObj)->y2();
  return result;
}
void c_QLineF__destructor(void *thisObj) { delete fromPtr(thisObj); }
}
