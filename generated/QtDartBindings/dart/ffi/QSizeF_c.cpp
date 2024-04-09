/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QSizeF_c.h"

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
QSizeF_wrapper::QSizeF_wrapper() : ::QSizeF() {}
QSizeF_wrapper::QSizeF_wrapper(const QSize &sz) : ::QSizeF(sz) {}
QSizeF_wrapper::QSizeF_wrapper(qreal w, qreal h) : ::QSizeF(w, h) {}
QSizeF QSizeF_wrapper::boundedTo(const QSizeF &arg__1) const {
  return ::QSizeF::boundedTo(arg__1);
}
QSizeF QSizeF_wrapper::expandedTo(const QSizeF &arg__1) const {
  return ::QSizeF::expandedTo(arg__1);
}
qreal QSizeF_wrapper::height() const { return ::QSizeF::height(); }
bool QSizeF_wrapper::isEmpty() const { return ::QSizeF::isEmpty(); }
bool QSizeF_wrapper::isNull() const { return ::QSizeF::isNull(); }
bool QSizeF_wrapper::isValid() const { return ::QSizeF::isValid(); }
void QSizeF_wrapper::setHeight(qreal h) { ::QSizeF::setHeight(h); }
void QSizeF_wrapper::setWidth(qreal w) { ::QSizeF::setWidth(w); }
QSize QSizeF_wrapper::toSize() const { return ::QSizeF::toSize(); }
void QSizeF_wrapper::transpose() { ::QSizeF::transpose(); }
QSizeF QSizeF_wrapper::transposed() const { return ::QSizeF::transposed(); }
qreal QSizeF_wrapper::width() const { return ::QSizeF::width(); }
QSizeF_wrapper::~QSizeF_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QSizeF *fromPtr(void *ptr) { return reinterpret_cast<QSizeF *>(ptr); }
static QtDartBindings_wrappersNS::QSizeF_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QSizeF_wrapper *>(ptr);
}
extern "C" {
void c_QSizeF_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QSizeF_wrapper *>(cppObj);
}
void *c_QSizeF__constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QSizeF_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QSizeF__constructor_QSize(void *sz_) {
  assert(sz_);
  auto &sz = *reinterpret_cast<QSize *>(sz_);
  auto ptr = new QtDartBindings_wrappersNS::QSizeF_wrapper(sz);
  return reinterpret_cast<void *>(ptr);
}
void *c_QSizeF__constructor_qreal_qreal(qreal w, qreal h) {
  auto ptr = new QtDartBindings_wrappersNS::QSizeF_wrapper(w, h);
  return reinterpret_cast<void *>(ptr);
}
// boundedTo(const QSizeF & arg__1) const
void *c_QSizeF__boundedTo_QSizeF(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QSizeF *>(arg__1_);
  const auto &result =
      new Dartagnan::ValueWrapper<QSizeF>{fromPtr(thisObj)->boundedTo(arg__1)};
  return result;
}
// expandedTo(const QSizeF & arg__1) const
void *c_QSizeF__expandedTo_QSizeF(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QSizeF *>(arg__1_);
  const auto &result =
      new Dartagnan::ValueWrapper<QSizeF>{fromPtr(thisObj)->expandedTo(arg__1)};
  return result;
}
// height() const
qreal c_QSizeF__height(void *thisObj) {
  const auto &result = fromPtr(thisObj)->height();
  return result;
}
// isEmpty() const
bool c_QSizeF__isEmpty(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isEmpty();
  return result;
}
// isNull() const
bool c_QSizeF__isNull(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isNull();
  return result;
}
// isValid() const
bool c_QSizeF__isValid(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isValid();
  return result;
}
// setHeight(qreal h)
void c_QSizeF__setHeight_qreal(void *thisObj, qreal h) {
  fromPtr(thisObj)->setHeight(h);
}
// setWidth(qreal w)
void c_QSizeF__setWidth_qreal(void *thisObj, qreal w) {
  fromPtr(thisObj)->setWidth(w);
}
// toSize() const
void *c_QSizeF__toSize(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->toSize()};
  return result;
}
// transpose()
void c_QSizeF__transpose(void *thisObj) { fromPtr(thisObj)->transpose(); }
// transposed() const
void *c_QSizeF__transposed(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSizeF>{fromPtr(thisObj)->transposed()};
  return result;
}
// width() const
qreal c_QSizeF__width(void *thisObj) {
  const auto &result = fromPtr(thisObj)->width();
  return result;
}
void c_QSizeF__destructor(void *thisObj) { delete fromPtr(thisObj); }
}
