/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QPointerEvent_c.h"

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
bool QPointerEvent_wrapper::allPointsAccepted() const {
  return ::QPointerEvent::allPointsAccepted();
}
bool QPointerEvent_wrapper::allPointsGrabbed() const {
  return ::QPointerEvent::allPointsGrabbed();
}
QPointerEvent *QPointerEvent_wrapper::clone() const {
  if (m_cloneCallback) {
    const void *thisPtr = this;
    return m_cloneCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QPointerEvent::clone();
  }
}
QPointerEvent *QPointerEvent_wrapper::clone_nocallback() const {
  return ::QPointerEvent::clone();
}
bool QPointerEvent_wrapper::isBeginEvent() const {
  if (m_isBeginEventCallback) {
    const void *thisPtr = this;
    return m_isBeginEventCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QPointerEvent::isBeginEvent();
  }
}
bool QPointerEvent_wrapper::isBeginEvent_nocallback() const {
  return ::QPointerEvent::isBeginEvent();
}
bool QPointerEvent_wrapper::isEndEvent() const {
  if (m_isEndEventCallback) {
    const void *thisPtr = this;
    return m_isEndEventCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QPointerEvent::isEndEvent();
  }
}
bool QPointerEvent_wrapper::isEndEvent_nocallback() const {
  return ::QPointerEvent::isEndEvent();
}
bool QPointerEvent_wrapper::isUpdateEvent() const {
  if (m_isUpdateEventCallback) {
    const void *thisPtr = this;
    return m_isUpdateEventCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QPointerEvent::isUpdateEvent();
  }
}
bool QPointerEvent_wrapper::isUpdateEvent_nocallback() const {
  return ::QPointerEvent::isUpdateEvent();
}
qsizetype QPointerEvent_wrapper::pointCount() const {
  return ::QPointerEvent::pointCount();
}
void QPointerEvent_wrapper::setAccepted(bool accepted) {
  if (m_setAcceptedCallback) {
    const void *thisPtr = this;
    m_setAcceptedCallback(const_cast<void *>(thisPtr), accepted);
  } else {
    ::QPointerEvent::setAccepted(accepted);
  }
}
void QPointerEvent_wrapper::setAccepted_nocallback(bool accepted) {
  ::QPointerEvent::setAccepted(accepted);
}
QPointerEvent_wrapper::~QPointerEvent_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QPointerEvent *fromPtr(void *ptr) {
  return reinterpret_cast<QPointerEvent *>(ptr);
}
static QtDartBindings_wrappersNS::QPointerEvent_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QPointerEvent_wrapper *>(
      ptr);
}
extern "C" {
void c_QPointerEvent_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QPointerEvent_wrapper *>(
      cppObj);
} // allPointsAccepted() const
bool c_QPointerEvent__allPointsAccepted(void *thisObj) {
  const auto &result = fromPtr(thisObj)->allPointsAccepted();
  return result;
}
// allPointsGrabbed() const
bool c_QPointerEvent__allPointsGrabbed(void *thisObj) {
  const auto &result = fromPtr(thisObj)->allPointsGrabbed();
  return result;
}
// clone() const
void *c_QPointerEvent__clone(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QPointerEvent_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->clone_nocallback();
    } else {
      return targetPtr->clone();
    }
  }();
  return result;
}
// isBeginEvent() const
bool c_QPointerEvent__isBeginEvent(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QPointerEvent_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->isBeginEvent_nocallback();
    } else {
      return targetPtr->isBeginEvent();
    }
  }();
  return result;
}
// isEndEvent() const
bool c_QPointerEvent__isEndEvent(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QPointerEvent_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->isEndEvent_nocallback();
    } else {
      return targetPtr->isEndEvent();
    }
  }();
  return result;
}
// isUpdateEvent() const
bool c_QPointerEvent__isUpdateEvent(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QPointerEvent_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->isUpdateEvent_nocallback();
    } else {
      return targetPtr->isUpdateEvent();
    }
  }();
  return result;
}
// pointCount() const
qsizetype c_QPointerEvent__pointCount(void *thisObj) {
  const auto &result = fromPtr(thisObj)->pointCount();
  return result;
}
// setAccepted(bool accepted)
void c_QPointerEvent__setAccepted_bool(void *thisObj, bool accepted) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QPointerEvent_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setAccepted_nocallback(accepted);
    } else {
      return targetPtr->setAccepted(accepted);
    }
  }();
}
void c_QPointerEvent__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QPointerEvent__registerVirtualMethodCallback(void *ptr, void *callback,
                                                    int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 4164:
    wrapper->m_cloneCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPointerEvent_wrapper::Callback_clone>(
        callback);
    break;
  case 4208:
    wrapper->m_isBeginEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPointerEvent_wrapper::
                             Callback_isBeginEvent>(callback);
    break;
  case 4209:
    wrapper->m_isEndEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPointerEvent_wrapper::Callback_isEndEvent>(
        callback);
    break;
  case 4210:
    wrapper->m_isUpdateEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPointerEvent_wrapper::
                             Callback_isUpdateEvent>(callback);
    break;
  case 4172:
    wrapper->m_setAcceptedCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPointerEvent_wrapper::Callback_setAccepted>(
        callback);
    break;
  }
}
}
