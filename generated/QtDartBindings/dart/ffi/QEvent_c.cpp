/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QEvent_c.h"

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
void QEvent_wrapper::accept() { ::QEvent::accept(); }
QEvent *QEvent_wrapper::clone() const {
  if (m_cloneCallback) {
    const void *thisPtr = this;
    return m_cloneCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QEvent::clone();
  }
}
QEvent *QEvent_wrapper::clone_nocallback() const { return ::QEvent::clone(); }
void QEvent_wrapper::ignore() { ::QEvent::ignore(); }
bool QEvent_wrapper::isAccepted() const { return ::QEvent::isAccepted(); }
bool QEvent_wrapper::isInputEvent() const { return ::QEvent::isInputEvent(); }
bool QEvent_wrapper::isPointerEvent() const {
  return ::QEvent::isPointerEvent();
}
bool QEvent_wrapper::isSinglePointEvent() const {
  return ::QEvent::isSinglePointEvent();
}
int QEvent_wrapper::registerEventType(int hint) {
  return ::QEvent::registerEventType(hint);
}
void QEvent_wrapper::setAccepted(bool accepted) {
  if (m_setAcceptedCallback) {
    const void *thisPtr = this;
    m_setAcceptedCallback(const_cast<void *>(thisPtr), accepted);
  } else {
    ::QEvent::setAccepted(accepted);
  }
}
void QEvent_wrapper::setAccepted_nocallback(bool accepted) {
  ::QEvent::setAccepted(accepted);
}
bool QEvent_wrapper::spontaneous() const { return ::QEvent::spontaneous(); }
QEvent_wrapper::~QEvent_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QEvent *fromPtr(void *ptr) { return reinterpret_cast<QEvent *>(ptr); }
static QtDartBindings_wrappersNS::QEvent_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QEvent_wrapper *>(ptr);
}
extern "C" {
void c_QEvent_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QEvent_wrapper *>(cppObj);
} // accept()
void c_QEvent__accept(void *thisObj) { fromPtr(thisObj)->accept(); }
// clone() const
void *c_QEvent__clone(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QEvent_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->clone_nocallback();
    } else {
      return targetPtr->clone();
    }
  }();
  return result;
}
// ignore()
void c_QEvent__ignore(void *thisObj) { fromPtr(thisObj)->ignore(); }
// isAccepted() const
bool c_QEvent__isAccepted(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isAccepted();
  return result;
}
// isInputEvent() const
bool c_QEvent__isInputEvent(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isInputEvent();
  return result;
}
// isPointerEvent() const
bool c_QEvent__isPointerEvent(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isPointerEvent();
  return result;
}
// isSinglePointEvent() const
bool c_QEvent__isSinglePointEvent(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isSinglePointEvent();
  return result;
}
// registerEventType(int hint)
int c_static_QEvent__registerEventType_int(int hint) {
  const auto &result =
      QtDartBindings_wrappersNS::QEvent_wrapper::registerEventType(hint);
  return result;
}
// setAccepted(bool accepted)
void c_QEvent__setAccepted_bool(void *thisObj, bool accepted) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QEvent_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setAccepted_nocallback(accepted);
    } else {
      return targetPtr->setAccepted(accepted);
    }
  }();
}
// spontaneous() const
bool c_QEvent__spontaneous(void *thisObj) {
  const auto &result = fromPtr(thisObj)->spontaneous();
  return result;
}
void c_QEvent__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QEvent__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 4164:
    wrapper->m_cloneCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QEvent_wrapper::Callback_clone>(callback);
    break;
  case 4172:
    wrapper->m_setAcceptedCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QEvent_wrapper::Callback_setAccepted>(
        callback);
    break;
  }
}
}
