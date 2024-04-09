/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QMouseEvent_c.h"

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
QMouseEvent *QMouseEvent_wrapper::clone() const {
  if (m_cloneCallback) {
    const void *thisPtr = this;
    return m_cloneCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QMouseEvent::clone();
  }
}
QMouseEvent *QMouseEvent_wrapper::clone_nocallback() const {
  return ::QMouseEvent::clone();
}
bool QMouseEvent_wrapper::isBeginEvent() const {
  if (m_isBeginEventCallback) {
    const void *thisPtr = this;
    return m_isBeginEventCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QMouseEvent::isBeginEvent();
  }
}
bool QMouseEvent_wrapper::isBeginEvent_nocallback() const {
  return ::QMouseEvent::isBeginEvent();
}
bool QMouseEvent_wrapper::isEndEvent() const {
  if (m_isEndEventCallback) {
    const void *thisPtr = this;
    return m_isEndEventCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QMouseEvent::isEndEvent();
  }
}
bool QMouseEvent_wrapper::isEndEvent_nocallback() const {
  return ::QMouseEvent::isEndEvent();
}
bool QMouseEvent_wrapper::isUpdateEvent() const {
  if (m_isUpdateEventCallback) {
    const void *thisPtr = this;
    return m_isUpdateEventCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QMouseEvent::isUpdateEvent();
  }
}
bool QMouseEvent_wrapper::isUpdateEvent_nocallback() const {
  return ::QMouseEvent::isUpdateEvent();
}
QPoint QMouseEvent_wrapper::pos() const { return ::QMouseEvent::pos(); }
void QMouseEvent_wrapper::setAccepted(bool accepted) {
  if (m_setAcceptedCallback) {
    const void *thisPtr = this;
    m_setAcceptedCallback(const_cast<void *>(thisPtr), accepted);
  } else {
    ::QMouseEvent::setAccepted(accepted);
  }
}
void QMouseEvent_wrapper::setAccepted_nocallback(bool accepted) {
  ::QMouseEvent::setAccepted(accepted);
}
QMouseEvent_wrapper::~QMouseEvent_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QMouseEvent *fromPtr(void *ptr) {
  return reinterpret_cast<QMouseEvent *>(ptr);
}
static QtDartBindings_wrappersNS::QMouseEvent_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QMouseEvent_wrapper *>(
      ptr);
}
extern "C" {
void c_QMouseEvent_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QMouseEvent_wrapper *>(
      cppObj);
} // clone() const
void *c_QMouseEvent__clone(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QMouseEvent_wrapper *>(
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
bool c_QMouseEvent__isBeginEvent(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QMouseEvent_wrapper *>(
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
bool c_QMouseEvent__isEndEvent(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QMouseEvent_wrapper *>(
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
bool c_QMouseEvent__isUpdateEvent(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QMouseEvent_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->isUpdateEvent_nocallback();
    } else {
      return targetPtr->isUpdateEvent();
    }
  }();
  return result;
}
// pos() const
void *c_QMouseEvent__pos(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QPoint>{fromPtr(thisObj)->pos()};
  return result;
}
// setAccepted(bool accepted)
void c_QMouseEvent__setAccepted_bool(void *thisObj, bool accepted) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QMouseEvent_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setAccepted_nocallback(accepted);
    } else {
      return targetPtr->setAccepted(accepted);
    }
  }();
}
void c_QMouseEvent__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QMouseEvent__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 4164:
    wrapper->m_cloneCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMouseEvent_wrapper::Callback_clone>(
        callback);
    break;
  case 4208:
    wrapper->m_isBeginEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMouseEvent_wrapper::Callback_isBeginEvent>(
        callback);
    break;
  case 4209:
    wrapper->m_isEndEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMouseEvent_wrapper::Callback_isEndEvent>(
        callback);
    break;
  case 4210:
    wrapper->m_isUpdateEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMouseEvent_wrapper::Callback_isUpdateEvent>(
        callback);
    break;
  case 4172:
    wrapper->m_setAcceptedCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMouseEvent_wrapper::Callback_setAccepted>(
        callback);
    break;
  }
}
}
