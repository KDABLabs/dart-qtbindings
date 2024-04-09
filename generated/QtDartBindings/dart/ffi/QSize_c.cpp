/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QSize_c.h"

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
QSize_wrapper::QSize_wrapper() : ::QSize() {}
QSize_wrapper::QSize_wrapper(int w, int h) : ::QSize(w, h) {}
QSize QSize_wrapper::boundedTo(const QSize &arg__1) const {
  return ::QSize::boundedTo(arg__1);
}
QSize QSize_wrapper::expandedTo(const QSize &arg__1) const {
  return ::QSize::expandedTo(arg__1);
}
int QSize_wrapper::height() const { return ::QSize::height(); }
bool QSize_wrapper::isEmpty() const { return ::QSize::isEmpty(); }
bool QSize_wrapper::isNull() const { return ::QSize::isNull(); }
bool QSize_wrapper::isValid() const { return ::QSize::isValid(); }
void QSize_wrapper::setHeight(int h) { ::QSize::setHeight(h); }
void QSize_wrapper::setWidth(int w) { ::QSize::setWidth(w); }
QSizeF QSize_wrapper::toSizeF() const { return ::QSize::toSizeF(); }
void QSize_wrapper::transpose() { ::QSize::transpose(); }
QSize QSize_wrapper::transposed() const { return ::QSize::transposed(); }
int QSize_wrapper::width() const { return ::QSize::width(); }
QSize_wrapper::~QSize_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QSize *fromPtr(void *ptr) { return reinterpret_cast<QSize *>(ptr); }
static QtDartBindings_wrappersNS::QSize_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QSize_wrapper *>(ptr);
}
extern "C" {
void c_QSize_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QSize_wrapper *>(cppObj);
}
void *c_QSize__constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QSize_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QSize__constructor_int_int(int w, int h) {
  auto ptr = new QtDartBindings_wrappersNS::QSize_wrapper(w, h);
  return reinterpret_cast<void *>(ptr);
}
// boundedTo(const QSize & arg__1) const
void *c_QSize__boundedTo_QSize(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QSize *>(arg__1_);
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->boundedTo(arg__1)};
  return result;
}
// expandedTo(const QSize & arg__1) const
void *c_QSize__expandedTo_QSize(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QSize *>(arg__1_);
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->expandedTo(arg__1)};
  return result;
}
// height() const
int c_QSize__height(void *thisObj) {
  const auto &result = fromPtr(thisObj)->height();
  return result;
}
// isEmpty() const
bool c_QSize__isEmpty(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isEmpty();
  return result;
}
// isNull() const
bool c_QSize__isNull(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isNull();
  return result;
}
// isValid() const
bool c_QSize__isValid(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isValid();
  return result;
}
// setHeight(int h)
void c_QSize__setHeight_int(void *thisObj, int h) {
  fromPtr(thisObj)->setHeight(h);
}
// setWidth(int w)
void c_QSize__setWidth_int(void *thisObj, int w) {
  fromPtr(thisObj)->setWidth(w);
}
// toSizeF() const
void *c_QSize__toSizeF(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSizeF>{fromPtr(thisObj)->toSizeF()};
  return result;
}
// transpose()
void c_QSize__transpose(void *thisObj) { fromPtr(thisObj)->transpose(); }
// transposed() const
void *c_QSize__transposed(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->transposed()};
  return result;
}
// width() const
int c_QSize__width(void *thisObj) {
  const auto &result = fromPtr(thisObj)->width();
  return result;
}
void c_QSize__destructor(void *thisObj) { delete fromPtr(thisObj); }
}
