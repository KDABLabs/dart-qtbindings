/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QSinglePointEvent_c.h"

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
QSinglePointEvent *QSinglePointEvent_wrapper::clone() const {
  if (m_cloneCallback) {
    const void *thisPtr = this;
    return m_cloneCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QSinglePointEvent::clone();
  }
}
QSinglePointEvent *QSinglePointEvent_wrapper::clone_nocallback() const {
  return ::QSinglePointEvent::clone();
}
QObject *QSinglePointEvent_wrapper::exclusivePointGrabber() const {
  return ::QSinglePointEvent::exclusivePointGrabber();
}
QPointF QSinglePointEvent_wrapper::globalPosition() const {
  return ::QSinglePointEvent::globalPosition();
}
bool QSinglePointEvent_wrapper::isBeginEvent() const {
  if (m_isBeginEventCallback) {
    const void *thisPtr = this;
    return m_isBeginEventCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QSinglePointEvent::isBeginEvent();
  }
}
bool QSinglePointEvent_wrapper::isBeginEvent_nocallback() const {
  return ::QSinglePointEvent::isBeginEvent();
}
bool QSinglePointEvent_wrapper::isEndEvent() const {
  if (m_isEndEventCallback) {
    const void *thisPtr = this;
    return m_isEndEventCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QSinglePointEvent::isEndEvent();
  }
}
bool QSinglePointEvent_wrapper::isEndEvent_nocallback() const {
  return ::QSinglePointEvent::isEndEvent();
}
bool QSinglePointEvent_wrapper::isUpdateEvent() const {
  if (m_isUpdateEventCallback) {
    const void *thisPtr = this;
    return m_isUpdateEventCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QSinglePointEvent::isUpdateEvent();
  }
}
bool QSinglePointEvent_wrapper::isUpdateEvent_nocallback() const {
  return ::QSinglePointEvent::isUpdateEvent();
}
QPointF QSinglePointEvent_wrapper::position() const {
  return ::QSinglePointEvent::position();
}
QPointF QSinglePointEvent_wrapper::scenePosition() const {
  return ::QSinglePointEvent::scenePosition();
}
void QSinglePointEvent_wrapper::setAccepted(bool accepted) {
  if (m_setAcceptedCallback) {
    const void *thisPtr = this;
    m_setAcceptedCallback(const_cast<void *>(thisPtr), accepted);
  } else {
    ::QSinglePointEvent::setAccepted(accepted);
  }
}
void QSinglePointEvent_wrapper::setAccepted_nocallback(bool accepted) {
  ::QSinglePointEvent::setAccepted(accepted);
}
void QSinglePointEvent_wrapper::setExclusivePointGrabber(
    QObject *exclusiveGrabber) {
  ::QSinglePointEvent::setExclusivePointGrabber(exclusiveGrabber);
}
QSinglePointEvent_wrapper::~QSinglePointEvent_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QSinglePointEvent *fromPtr(void *ptr) {
  return reinterpret_cast<QSinglePointEvent *>(ptr);
}
static QtDartBindings_wrappersNS::QSinglePointEvent_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<
      QtDartBindings_wrappersNS::QSinglePointEvent_wrapper *>(ptr);
}
extern "C" {
void c_QSinglePointEvent_Finalizer(void *cppObj) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QSinglePointEvent_wrapper *>(cppObj);
} // clone() const
void *c_QSinglePointEvent__clone(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QSinglePointEvent_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->clone_nocallback();
    } else {
      return targetPtr->clone();
    }
  }();
  return result;
}
// exclusivePointGrabber() const
void *c_QSinglePointEvent__exclusivePointGrabber(void *thisObj) {
  const auto &result = fromPtr(thisObj)->exclusivePointGrabber();
  return result;
}
// globalPosition() const
void *c_QSinglePointEvent__globalPosition(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QPointF>{fromPtr(thisObj)->globalPosition()};
  return result;
}
// isBeginEvent() const
bool c_QSinglePointEvent__isBeginEvent(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QSinglePointEvent_wrapper *>(
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
bool c_QSinglePointEvent__isEndEvent(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QSinglePointEvent_wrapper *>(
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
bool c_QSinglePointEvent__isUpdateEvent(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QSinglePointEvent_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->isUpdateEvent_nocallback();
    } else {
      return targetPtr->isUpdateEvent();
    }
  }();
  return result;
}
// position() const
void *c_QSinglePointEvent__position(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QPointF>{fromPtr(thisObj)->position()};
  return result;
}
// scenePosition() const
void *c_QSinglePointEvent__scenePosition(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QPointF>{fromPtr(thisObj)->scenePosition()};
  return result;
}
// setAccepted(bool accepted)
void c_QSinglePointEvent__setAccepted_bool(void *thisObj, bool accepted) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QSinglePointEvent_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setAccepted_nocallback(accepted);
    } else {
      return targetPtr->setAccepted(accepted);
    }
  }();
}
// setExclusivePointGrabber(QObject * exclusiveGrabber)
void c_QSinglePointEvent__setExclusivePointGrabber_QObject(
    void *thisObj, void *exclusiveGrabber_) {
  auto exclusiveGrabber = reinterpret_cast<QObject *>(exclusiveGrabber_);
  fromPtr(thisObj)->setExclusivePointGrabber(exclusiveGrabber);
}
void c_QSinglePointEvent__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QSinglePointEvent__registerVirtualMethodCallback(void *ptr,
                                                        void *callback,
                                                        int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 4164:
    wrapper->m_cloneCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSinglePointEvent_wrapper::Callback_clone>(
        callback);
    break;
  case 4208:
    wrapper->m_isBeginEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QSinglePointEvent_wrapper::
                             Callback_isBeginEvent>(callback);
    break;
  case 4209:
    wrapper->m_isEndEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QSinglePointEvent_wrapper::
                             Callback_isEndEvent>(callback);
    break;
  case 4210:
    wrapper->m_isUpdateEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QSinglePointEvent_wrapper::
                             Callback_isUpdateEvent>(callback);
    break;
  case 4172:
    wrapper->m_setAcceptedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QSinglePointEvent_wrapper::
                             Callback_setAccepted>(callback);
    break;
  }
}
}
