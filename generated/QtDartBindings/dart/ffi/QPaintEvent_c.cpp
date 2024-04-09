/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QPaintEvent_c.h"

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
QPaintEvent_wrapper::QPaintEvent_wrapper(const QRect &paintRect)
    : ::QPaintEvent(paintRect) {}
QPaintEvent_wrapper::QPaintEvent_wrapper(const QRegion &paintRegion)
    : ::QPaintEvent(paintRegion) {}
QPaintEvent *QPaintEvent_wrapper::clone() const {
  if (m_cloneCallback) {
    const void *thisPtr = this;
    return m_cloneCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QPaintEvent::clone();
  }
}
QPaintEvent *QPaintEvent_wrapper::clone_nocallback() const {
  return ::QPaintEvent::clone();
}
const QRect &QPaintEvent_wrapper::rect() const { return ::QPaintEvent::rect(); }
const QRegion &QPaintEvent_wrapper::region() const {
  return ::QPaintEvent::region();
}
void QPaintEvent_wrapper::setAccepted(bool accepted) {
  if (m_setAcceptedCallback) {
    const void *thisPtr = this;
    m_setAcceptedCallback(const_cast<void *>(thisPtr), accepted);
  } else {
    ::QPaintEvent::setAccepted(accepted);
  }
}
void QPaintEvent_wrapper::setAccepted_nocallback(bool accepted) {
  ::QPaintEvent::setAccepted(accepted);
}
QPaintEvent_wrapper::~QPaintEvent_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QPaintEvent *fromPtr(void *ptr) {
  return reinterpret_cast<QPaintEvent *>(ptr);
}
static QtDartBindings_wrappersNS::QPaintEvent_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QPaintEvent_wrapper *>(
      ptr);
}
extern "C" {
void c_QPaintEvent_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QPaintEvent_wrapper *>(
      cppObj);
}
void *c_QPaintEvent__constructor_QRect(void *paintRect_) {
  assert(paintRect_);
  auto &paintRect = *reinterpret_cast<QRect *>(paintRect_);
  auto ptr = new QtDartBindings_wrappersNS::QPaintEvent_wrapper(paintRect);
  return reinterpret_cast<void *>(ptr);
}
void *c_QPaintEvent__constructor_QRegion(void *paintRegion_) {
  assert(paintRegion_);
  auto &paintRegion = *reinterpret_cast<QRegion *>(paintRegion_);
  auto ptr = new QtDartBindings_wrappersNS::QPaintEvent_wrapper(paintRegion);
  return reinterpret_cast<void *>(ptr);
}
// clone() const
void *c_QPaintEvent__clone(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QPaintEvent_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->clone_nocallback();
    } else {
      return targetPtr->clone();
    }
  }();
  return result;
}
// rect() const
void *c_QPaintEvent__rect(void *thisObj) {
  const auto &result =
      const_cast<void *>(static_cast<const void *>(&fromPtr(thisObj)->rect()));
  return result;
}
// region() const
void *c_QPaintEvent__region(void *thisObj) {
  const auto &result = const_cast<void *>(
      static_cast<const void *>(&fromPtr(thisObj)->region()));
  return result;
}
// setAccepted(bool accepted)
void c_QPaintEvent__setAccepted_bool(void *thisObj, bool accepted) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QPaintEvent_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setAccepted_nocallback(accepted);
    } else {
      return targetPtr->setAccepted(accepted);
    }
  }();
}
void c_QPaintEvent__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QPaintEvent__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 4164:
    wrapper->m_cloneCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPaintEvent_wrapper::Callback_clone>(
        callback);
    break;
  case 4172:
    wrapper->m_setAcceptedCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPaintEvent_wrapper::Callback_setAccepted>(
        callback);
    break;
  }
}
}
