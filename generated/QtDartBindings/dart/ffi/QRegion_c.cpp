/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QRegion_c.h"

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
QRegion_wrapper::QRegion_wrapper() : ::QRegion() {}
QRegion_wrapper::QRegion_wrapper(const QRect &r) : ::QRegion(r) {}
QRegion_wrapper::QRegion_wrapper(int x, int y, int w, int h)
    : ::QRegion(x, y, w, h) {}
const QRect *QRegion_wrapper::begin() const { return ::QRegion::begin(); }
QRect QRegion_wrapper::boundingRect() const {
  return ::QRegion::boundingRect();
}
const QRect *QRegion_wrapper::cbegin() const { return ::QRegion::cbegin(); }
const QRect *QRegion_wrapper::cend() const { return ::QRegion::cend(); }
bool QRegion_wrapper::contains(const QPoint &p) const {
  return ::QRegion::contains(p);
}
bool QRegion_wrapper::contains(const QRect &r) const {
  return ::QRegion::contains(r);
}
const QRect *QRegion_wrapper::end() const { return ::QRegion::end(); }
QRegion QRegion_wrapper::intersected(const QRect &r) const {
  return ::QRegion::intersected(r);
}
QRegion QRegion_wrapper::intersected(const QRegion &r) const {
  return ::QRegion::intersected(r);
}
bool QRegion_wrapper::intersects(const QRect &r) const {
  return ::QRegion::intersects(r);
}
bool QRegion_wrapper::intersects(const QRegion &r) const {
  return ::QRegion::intersects(r);
}
bool QRegion_wrapper::isEmpty() const { return ::QRegion::isEmpty(); }
bool QRegion_wrapper::isNull() const { return ::QRegion::isNull(); }
int QRegion_wrapper::rectCount() const { return ::QRegion::rectCount(); }
void QRegion_wrapper::setRects(const QRect *rect, int num) {
  ::QRegion::setRects(rect, num);
}
QRegion QRegion_wrapper::subtracted(const QRegion &r) const {
  return ::QRegion::subtracted(r);
}
void QRegion_wrapper::translate(const QPoint &p) { ::QRegion::translate(p); }
void QRegion_wrapper::translate(int dx, int dy) {
  ::QRegion::translate(dx, dy);
}
QRegion QRegion_wrapper::translated(const QPoint &p) const {
  return ::QRegion::translated(p);
}
QRegion QRegion_wrapper::translated(int dx, int dy) const {
  return ::QRegion::translated(dx, dy);
}
QRegion QRegion_wrapper::united(const QRect &r) const {
  return ::QRegion::united(r);
}
QRegion QRegion_wrapper::united(const QRegion &r) const {
  return ::QRegion::united(r);
}
QRegion QRegion_wrapper::xored(const QRegion &r) const {
  return ::QRegion::xored(r);
}
QRegion_wrapper::~QRegion_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QRegion *fromPtr(void *ptr) { return reinterpret_cast<QRegion *>(ptr); }
static QtDartBindings_wrappersNS::QRegion_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QRegion_wrapper *>(ptr);
}
extern "C" {
void c_QRegion_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QRegion_wrapper *>(cppObj);
}
void *c_QRegion__constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QRegion_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QRegion__constructor_QRect(void *r_) {
  assert(r_);
  auto &r = *reinterpret_cast<QRect *>(r_);
  auto ptr = new QtDartBindings_wrappersNS::QRegion_wrapper(r);
  return reinterpret_cast<void *>(ptr);
}
void *c_QRegion__constructor_int_int_int_int(int x, int y, int w, int h) {
  auto ptr = new QtDartBindings_wrappersNS::QRegion_wrapper(x, y, w, h);
  return reinterpret_cast<void *>(ptr);
}
// begin() const
void *c_QRegion__begin(void *thisObj) {
  const auto &result =
      const_cast<void *>(static_cast<const void *>(fromPtr(thisObj)->begin()));
  return result;
}
// boundingRect() const
void *c_QRegion__boundingRect(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->boundingRect()};
  return result;
}
// cbegin() const
void *c_QRegion__cbegin(void *thisObj) {
  const auto &result =
      const_cast<void *>(static_cast<const void *>(fromPtr(thisObj)->cbegin()));
  return result;
}
// cend() const
void *c_QRegion__cend(void *thisObj) {
  const auto &result =
      const_cast<void *>(static_cast<const void *>(fromPtr(thisObj)->cend()));
  return result;
}
// contains(const QPoint & p) const
bool c_QRegion__contains_QPoint(void *thisObj, void *p_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPoint *>(p_);
  const auto &result = fromPtr(thisObj)->contains(p);
  return result;
}
// contains(const QRect & r) const
bool c_QRegion__contains_QRect(void *thisObj, void *r_) {
  assert(r_);
  auto &r = *reinterpret_cast<QRect *>(r_);
  const auto &result = fromPtr(thisObj)->contains(r);
  return result;
}
// end() const
void *c_QRegion__end(void *thisObj) {
  const auto &result =
      const_cast<void *>(static_cast<const void *>(fromPtr(thisObj)->end()));
  return result;
}
// intersected(const QRect & r) const
void *c_QRegion__intersected_QRect(void *thisObj, void *r_) {
  assert(r_);
  auto &r = *reinterpret_cast<QRect *>(r_);
  const auto &result =
      new Dartagnan::ValueWrapper<QRegion>{fromPtr(thisObj)->intersected(r)};
  return result;
}
// intersected(const QRegion & r) const
void *c_QRegion__intersected_QRegion(void *thisObj, void *r_) {
  assert(r_);
  auto &r = *reinterpret_cast<QRegion *>(r_);
  const auto &result =
      new Dartagnan::ValueWrapper<QRegion>{fromPtr(thisObj)->intersected(r)};
  return result;
}
// intersects(const QRect & r) const
bool c_QRegion__intersects_QRect(void *thisObj, void *r_) {
  assert(r_);
  auto &r = *reinterpret_cast<QRect *>(r_);
  const auto &result = fromPtr(thisObj)->intersects(r);
  return result;
}
// intersects(const QRegion & r) const
bool c_QRegion__intersects_QRegion(void *thisObj, void *r_) {
  assert(r_);
  auto &r = *reinterpret_cast<QRegion *>(r_);
  const auto &result = fromPtr(thisObj)->intersects(r);
  return result;
}
// isEmpty() const
bool c_QRegion__isEmpty(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isEmpty();
  return result;
}
// isNull() const
bool c_QRegion__isNull(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isNull();
  return result;
}
// rectCount() const
int c_QRegion__rectCount(void *thisObj) {
  const auto &result = fromPtr(thisObj)->rectCount();
  return result;
}
// setRects(const QRect * rect, int num)
void c_QRegion__setRects_QRect_int(void *thisObj, void *rect_, int num) {
  auto rect = reinterpret_cast<QRect *>(rect_);
  fromPtr(thisObj)->setRects(rect, num);
}
// subtracted(const QRegion & r) const
void *c_QRegion__subtracted_QRegion(void *thisObj, void *r_) {
  assert(r_);
  auto &r = *reinterpret_cast<QRegion *>(r_);
  const auto &result =
      new Dartagnan::ValueWrapper<QRegion>{fromPtr(thisObj)->subtracted(r)};
  return result;
}
// translate(const QPoint & p)
void c_QRegion__translate_QPoint(void *thisObj, void *p_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPoint *>(p_);
  fromPtr(thisObj)->translate(p);
}
// translate(int dx, int dy)
void c_QRegion__translate_int_int(void *thisObj, int dx, int dy) {
  fromPtr(thisObj)->translate(dx, dy);
}
// translated(const QPoint & p) const
void *c_QRegion__translated_QPoint(void *thisObj, void *p_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPoint *>(p_);
  const auto &result =
      new Dartagnan::ValueWrapper<QRegion>{fromPtr(thisObj)->translated(p)};
  return result;
}
// translated(int dx, int dy) const
void *c_QRegion__translated_int_int(void *thisObj, int dx, int dy) {
  const auto &result = new Dartagnan::ValueWrapper<QRegion>{
      fromPtr(thisObj)->translated(dx, dy)};
  return result;
}
// united(const QRect & r) const
void *c_QRegion__united_QRect(void *thisObj, void *r_) {
  assert(r_);
  auto &r = *reinterpret_cast<QRect *>(r_);
  const auto &result =
      new Dartagnan::ValueWrapper<QRegion>{fromPtr(thisObj)->united(r)};
  return result;
}
// united(const QRegion & r) const
void *c_QRegion__united_QRegion(void *thisObj, void *r_) {
  assert(r_);
  auto &r = *reinterpret_cast<QRegion *>(r_);
  const auto &result =
      new Dartagnan::ValueWrapper<QRegion>{fromPtr(thisObj)->united(r)};
  return result;
}
// xored(const QRegion & r) const
void *c_QRegion__xored_QRegion(void *thisObj, void *r_) {
  assert(r_);
  auto &r = *reinterpret_cast<QRegion *>(r_);
  const auto &result =
      new Dartagnan::ValueWrapper<QRegion>{fromPtr(thisObj)->xored(r)};
  return result;
}
void c_QRegion__destructor(void *thisObj) { delete fromPtr(thisObj); }
}
