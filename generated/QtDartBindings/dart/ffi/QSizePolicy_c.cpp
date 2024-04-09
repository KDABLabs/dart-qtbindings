/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QSizePolicy_c.h"

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
QSizePolicy_wrapper::QSizePolicy_wrapper() : ::QSizePolicy() {}
QSizePolicy_wrapper::QSizePolicy_wrapper(QSizePolicy::Policy horizontal,
                                         QSizePolicy::Policy vertical,
                                         QSizePolicy::ControlType type)
    : ::QSizePolicy(horizontal, vertical, type) {}
QSizePolicy::ControlType QSizePolicy_wrapper::controlType() const {
  return ::QSizePolicy::controlType();
}
QFlags<Qt::Orientation> QSizePolicy_wrapper::expandingDirections() const {
  return ::QSizePolicy::expandingDirections();
}
bool QSizePolicy_wrapper::hasHeightForWidth() const {
  return ::QSizePolicy::hasHeightForWidth();
}
bool QSizePolicy_wrapper::hasWidthForHeight() const {
  return ::QSizePolicy::hasWidthForHeight();
}
QSizePolicy::Policy QSizePolicy_wrapper::horizontalPolicy() const {
  return ::QSizePolicy::horizontalPolicy();
}
int QSizePolicy_wrapper::horizontalStretch() const {
  return ::QSizePolicy::horizontalStretch();
}
bool QSizePolicy_wrapper::retainSizeWhenHidden() const {
  return ::QSizePolicy::retainSizeWhenHidden();
}
void QSizePolicy_wrapper::setControlType(QSizePolicy::ControlType type) {
  ::QSizePolicy::setControlType(type);
}
void QSizePolicy_wrapper::setHeightForWidth(bool b) {
  ::QSizePolicy::setHeightForWidth(b);
}
void QSizePolicy_wrapper::setHorizontalPolicy(QSizePolicy::Policy d) {
  ::QSizePolicy::setHorizontalPolicy(d);
}
void QSizePolicy_wrapper::setHorizontalStretch(int stretchFactor) {
  ::QSizePolicy::setHorizontalStretch(stretchFactor);
}
void QSizePolicy_wrapper::setRetainSizeWhenHidden(bool retainSize) {
  ::QSizePolicy::setRetainSizeWhenHidden(retainSize);
}
void QSizePolicy_wrapper::setVerticalPolicy(QSizePolicy::Policy d) {
  ::QSizePolicy::setVerticalPolicy(d);
}
void QSizePolicy_wrapper::setVerticalStretch(int stretchFactor) {
  ::QSizePolicy::setVerticalStretch(stretchFactor);
}
void QSizePolicy_wrapper::setWidthForHeight(bool b) {
  ::QSizePolicy::setWidthForHeight(b);
}
void QSizePolicy_wrapper::transpose() { ::QSizePolicy::transpose(); }
QSizePolicy QSizePolicy_wrapper::transposed() const {
  return ::QSizePolicy::transposed();
}
QSizePolicy::Policy QSizePolicy_wrapper::verticalPolicy() const {
  return ::QSizePolicy::verticalPolicy();
}
int QSizePolicy_wrapper::verticalStretch() const {
  return ::QSizePolicy::verticalStretch();
}
QSizePolicy_wrapper::~QSizePolicy_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QSizePolicy *fromPtr(void *ptr) {
  return reinterpret_cast<QSizePolicy *>(ptr);
}
static QtDartBindings_wrappersNS::QSizePolicy_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QSizePolicy_wrapper *>(
      ptr);
}
extern "C" {
void c_QSizePolicy_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QSizePolicy_wrapper *>(
      cppObj);
}
void *c_QSizePolicy__constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QSizePolicy_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QSizePolicy__constructor_Policy_Policy_ControlType(int horizontal,
                                                           int vertical,
                                                           int type) {
  auto ptr = new QtDartBindings_wrappersNS::QSizePolicy_wrapper(
      static_cast<QSizePolicy::Policy>(horizontal),
      static_cast<QSizePolicy::Policy>(vertical),
      static_cast<QSizePolicy::ControlType>(type));
  return reinterpret_cast<void *>(ptr);
}
// controlType() const
int c_QSizePolicy__controlType(void *thisObj) {
  const auto &result = int(fromPtr(thisObj)->controlType());
  return result;
}
// expandingDirections() const
int c_QSizePolicy__expandingDirections(void *thisObj) {
  const auto &result = fromPtr(thisObj)->expandingDirections();
  return result;
}
// hasHeightForWidth() const
bool c_QSizePolicy__hasHeightForWidth(void *thisObj) {
  const auto &result = fromPtr(thisObj)->hasHeightForWidth();
  return result;
}
// hasWidthForHeight() const
bool c_QSizePolicy__hasWidthForHeight(void *thisObj) {
  const auto &result = fromPtr(thisObj)->hasWidthForHeight();
  return result;
}
// horizontalPolicy() const
int c_QSizePolicy__horizontalPolicy(void *thisObj) {
  const auto &result = int(fromPtr(thisObj)->horizontalPolicy());
  return result;
}
// horizontalStretch() const
int c_QSizePolicy__horizontalStretch(void *thisObj) {
  const auto &result = fromPtr(thisObj)->horizontalStretch();
  return result;
}
// retainSizeWhenHidden() const
bool c_QSizePolicy__retainSizeWhenHidden(void *thisObj) {
  const auto &result = fromPtr(thisObj)->retainSizeWhenHidden();
  return result;
}
// setControlType(QSizePolicy::ControlType type)
void c_QSizePolicy__setControlType_ControlType(void *thisObj, int type) {
  fromPtr(thisObj)->setControlType(static_cast<QSizePolicy::ControlType>(type));
}
// setHeightForWidth(bool b)
void c_QSizePolicy__setHeightForWidth_bool(void *thisObj, bool b) {
  fromPtr(thisObj)->setHeightForWidth(b);
}
// setHorizontalPolicy(QSizePolicy::Policy d)
void c_QSizePolicy__setHorizontalPolicy_Policy(void *thisObj, int d) {
  fromPtr(thisObj)->setHorizontalPolicy(static_cast<QSizePolicy::Policy>(d));
}
// setHorizontalStretch(int stretchFactor)
void c_QSizePolicy__setHorizontalStretch_int(void *thisObj, int stretchFactor) {
  fromPtr(thisObj)->setHorizontalStretch(stretchFactor);
}
// setRetainSizeWhenHidden(bool retainSize)
void c_QSizePolicy__setRetainSizeWhenHidden_bool(void *thisObj,
                                                 bool retainSize) {
  fromPtr(thisObj)->setRetainSizeWhenHidden(retainSize);
}
// setVerticalPolicy(QSizePolicy::Policy d)
void c_QSizePolicy__setVerticalPolicy_Policy(void *thisObj, int d) {
  fromPtr(thisObj)->setVerticalPolicy(static_cast<QSizePolicy::Policy>(d));
}
// setVerticalStretch(int stretchFactor)
void c_QSizePolicy__setVerticalStretch_int(void *thisObj, int stretchFactor) {
  fromPtr(thisObj)->setVerticalStretch(stretchFactor);
}
// setWidthForHeight(bool b)
void c_QSizePolicy__setWidthForHeight_bool(void *thisObj, bool b) {
  fromPtr(thisObj)->setWidthForHeight(b);
}
// transpose()
void c_QSizePolicy__transpose(void *thisObj) { fromPtr(thisObj)->transpose(); }
// transposed() const
void *c_QSizePolicy__transposed(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSizePolicy>{fromPtr(thisObj)->transposed()};
  return result;
}
// verticalPolicy() const
int c_QSizePolicy__verticalPolicy(void *thisObj) {
  const auto &result = int(fromPtr(thisObj)->verticalPolicy());
  return result;
}
// verticalStretch() const
int c_QSizePolicy__verticalStretch(void *thisObj) {
  const auto &result = fromPtr(thisObj)->verticalStretch();
  return result;
}
void c_QSizePolicy__destructor(void *thisObj) { delete fromPtr(thisObj); }
}
