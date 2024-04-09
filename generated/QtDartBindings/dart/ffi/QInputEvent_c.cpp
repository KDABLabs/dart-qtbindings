/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QInputEvent_c.h"

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
QInputEvent *QInputEvent_wrapper::clone() const {
  if (m_cloneCallback) {
    const void *thisPtr = this;
    return m_cloneCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QInputEvent::clone();
  }
}
QInputEvent *QInputEvent_wrapper::clone_nocallback() const {
  return ::QInputEvent::clone();
}
QFlags<Qt::KeyboardModifier> QInputEvent_wrapper::modifiers() const {
  return ::QInputEvent::modifiers();
}
void QInputEvent_wrapper::setAccepted(bool accepted) {
  if (m_setAcceptedCallback) {
    const void *thisPtr = this;
    m_setAcceptedCallback(const_cast<void *>(thisPtr), accepted);
  } else {
    ::QInputEvent::setAccepted(accepted);
  }
}
void QInputEvent_wrapper::setAccepted_nocallback(bool accepted) {
  ::QInputEvent::setAccepted(accepted);
}
void QInputEvent_wrapper::setModifiers(QFlags<Qt::KeyboardModifier> modifiers) {
  ::QInputEvent::setModifiers(modifiers);
}
QInputEvent_wrapper::~QInputEvent_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QInputEvent *fromPtr(void *ptr) {
  return reinterpret_cast<QInputEvent *>(ptr);
}
static QtDartBindings_wrappersNS::QInputEvent_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QInputEvent_wrapper *>(
      ptr);
}
extern "C" {
void c_QInputEvent_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QInputEvent_wrapper *>(
      cppObj);
} // clone() const
void *c_QInputEvent__clone(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QInputEvent_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->clone_nocallback();
    } else {
      return targetPtr->clone();
    }
  }();
  return result;
}
// modifiers() const
int c_QInputEvent__modifiers(void *thisObj) {
  const auto &result = fromPtr(thisObj)->modifiers();
  return result;
}
// setAccepted(bool accepted)
void c_QInputEvent__setAccepted_bool(void *thisObj, bool accepted) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QInputEvent_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setAccepted_nocallback(accepted);
    } else {
      return targetPtr->setAccepted(accepted);
    }
  }();
}
// setModifiers(QFlags<Qt::KeyboardModifier> modifiers)
void c_QInputEvent__setModifiers_KeyboardModifiers(void *thisObj,
                                                   int modifiers_) {
  auto modifiers = static_cast<QFlags<Qt::KeyboardModifier>>(modifiers_);
  fromPtr(thisObj)->setModifiers(modifiers);
}
void c_QInputEvent__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QInputEvent__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 4164:
    wrapper->m_cloneCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputEvent_wrapper::Callback_clone>(
        callback);
    break;
  case 4172:
    wrapper->m_setAcceptedCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputEvent_wrapper::Callback_setAccepted>(
        callback);
    break;
  }
}
}
