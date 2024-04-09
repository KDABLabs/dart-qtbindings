/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QLine_c.h"

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
QLine_wrapper::QLine_wrapper() : ::QLine() {}
QLine_wrapper::QLine_wrapper(const QPoint &pt1, const QPoint &pt2)
    : ::QLine(pt1, pt2) {}
QLine_wrapper::QLine_wrapper(int x1, int y1, int x2, int y2)
    : ::QLine(x1, y1, x2, y2) {}
QPoint QLine_wrapper::center() const { return ::QLine::center(); }
int QLine_wrapper::dx() const { return ::QLine::dx(); }
int QLine_wrapper::dy() const { return ::QLine::dy(); }
bool QLine_wrapper::isNull() const { return ::QLine::isNull(); }
QPoint QLine_wrapper::p1() const { return ::QLine::p1(); }
QPoint QLine_wrapper::p2() const { return ::QLine::p2(); }
void QLine_wrapper::setLine(int x1, int y1, int x2, int y2) {
  ::QLine::setLine(x1, y1, x2, y2);
}
void QLine_wrapper::setP1(const QPoint &p1) { ::QLine::setP1(p1); }
void QLine_wrapper::setP2(const QPoint &p2) { ::QLine::setP2(p2); }
void QLine_wrapper::setPoints(const QPoint &p1, const QPoint &p2) {
  ::QLine::setPoints(p1, p2);
}
QLineF QLine_wrapper::toLineF() const { return ::QLine::toLineF(); }
void QLine_wrapper::translate(const QPoint &p) { ::QLine::translate(p); }
void QLine_wrapper::translate(int dx, int dy) { ::QLine::translate(dx, dy); }
QLine QLine_wrapper::translated(const QPoint &p) const {
  return ::QLine::translated(p);
}
QLine QLine_wrapper::translated(int dx, int dy) const {
  return ::QLine::translated(dx, dy);
}
int QLine_wrapper::x1() const { return ::QLine::x1(); }
int QLine_wrapper::x2() const { return ::QLine::x2(); }
int QLine_wrapper::y1() const { return ::QLine::y1(); }
int QLine_wrapper::y2() const { return ::QLine::y2(); }
QLine_wrapper::~QLine_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QLine *fromPtr(void *ptr) { return reinterpret_cast<QLine *>(ptr); }
static QtDartBindings_wrappersNS::QLine_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QLine_wrapper *>(ptr);
}
extern "C" {
void c_QLine_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QLine_wrapper *>(cppObj);
}
void *c_QLine__constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QLine_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QLine__constructor_QPoint_QPoint(void *pt1_, void *pt2_) {
  assert(pt1_);
  auto &pt1 = *reinterpret_cast<QPoint *>(pt1_);
  assert(pt2_);
  auto &pt2 = *reinterpret_cast<QPoint *>(pt2_);
  auto ptr = new QtDartBindings_wrappersNS::QLine_wrapper(pt1, pt2);
  return reinterpret_cast<void *>(ptr);
}
void *c_QLine__constructor_int_int_int_int(int x1, int y1, int x2, int y2) {
  auto ptr = new QtDartBindings_wrappersNS::QLine_wrapper(x1, y1, x2, y2);
  return reinterpret_cast<void *>(ptr);
}
// center() const
void *c_QLine__center(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QPoint>{fromPtr(thisObj)->center()};
  return result;
}
// dx() const
int c_QLine__dx(void *thisObj) {
  const auto &result = fromPtr(thisObj)->dx();
  return result;
}
// dy() const
int c_QLine__dy(void *thisObj) {
  const auto &result = fromPtr(thisObj)->dy();
  return result;
}
// isNull() const
bool c_QLine__isNull(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isNull();
  return result;
}
// p1() const
void *c_QLine__p1(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QPoint>{fromPtr(thisObj)->p1()};
  return result;
}
// p2() const
void *c_QLine__p2(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QPoint>{fromPtr(thisObj)->p2()};
  return result;
}
// setLine(int x1, int y1, int x2, int y2)
void c_QLine__setLine_int_int_int_int(void *thisObj, int x1, int y1, int x2,
                                      int y2) {
  fromPtr(thisObj)->setLine(x1, y1, x2, y2);
}
// setP1(const QPoint & p1)
void c_QLine__setP1_QPoint(void *thisObj, void *p1_) {
  assert(p1_);
  auto &p1 = *reinterpret_cast<QPoint *>(p1_);
  fromPtr(thisObj)->setP1(p1);
}
// setP2(const QPoint & p2)
void c_QLine__setP2_QPoint(void *thisObj, void *p2_) {
  assert(p2_);
  auto &p2 = *reinterpret_cast<QPoint *>(p2_);
  fromPtr(thisObj)->setP2(p2);
}
// setPoints(const QPoint & p1, const QPoint & p2)
void c_QLine__setPoints_QPoint_QPoint(void *thisObj, void *p1_, void *p2_) {
  assert(p1_);
  auto &p1 = *reinterpret_cast<QPoint *>(p1_);
  assert(p2_);
  auto &p2 = *reinterpret_cast<QPoint *>(p2_);
  fromPtr(thisObj)->setPoints(p1, p2);
}
// toLineF() const
void *c_QLine__toLineF(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QLineF>{fromPtr(thisObj)->toLineF()};
  return result;
}
// translate(const QPoint & p)
void c_QLine__translate_QPoint(void *thisObj, void *p_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPoint *>(p_);
  fromPtr(thisObj)->translate(p);
}
// translate(int dx, int dy)
void c_QLine__translate_int_int(void *thisObj, int dx, int dy) {
  fromPtr(thisObj)->translate(dx, dy);
}
// translated(const QPoint & p) const
void *c_QLine__translated_QPoint(void *thisObj, void *p_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPoint *>(p_);
  const auto &result =
      new Dartagnan::ValueWrapper<QLine>{fromPtr(thisObj)->translated(p)};
  return result;
}
// translated(int dx, int dy) const
void *c_QLine__translated_int_int(void *thisObj, int dx, int dy) {
  const auto &result =
      new Dartagnan::ValueWrapper<QLine>{fromPtr(thisObj)->translated(dx, dy)};
  return result;
}
// x1() const
int c_QLine__x1(void *thisObj) {
  const auto &result = fromPtr(thisObj)->x1();
  return result;
}
// x2() const
int c_QLine__x2(void *thisObj) {
  const auto &result = fromPtr(thisObj)->x2();
  return result;
}
// y1() const
int c_QLine__y1(void *thisObj) {
  const auto &result = fromPtr(thisObj)->y1();
  return result;
}
// y2() const
int c_QLine__y2(void *thisObj) {
  const auto &result = fromPtr(thisObj)->y2();
  return result;
}
void c_QLine__destructor(void *thisObj) { delete fromPtr(thisObj); }
}
