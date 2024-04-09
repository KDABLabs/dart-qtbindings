#include "QPointerEvent_wrapper.h"

#include <QDebug>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
bool QPointerEvent_wrapper::allPointsAccepted() const {
  // tag=1000

  // tag=1004
  return ::QPointerEvent::allPointsAccepted();
}
bool QPointerEvent_wrapper::allPointsGrabbed() const {
  // tag=1000

  // tag=1004
  return ::QPointerEvent::allPointsGrabbed();
}
QPointerEvent *QPointerEvent_wrapper::clone() const {
  // tag=1000
  if (m_cloneCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_cloneCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QPointerEvent::clone();
  }
}
// tag=1009
QPointerEvent *QPointerEvent_wrapper::clone_nocallback() const {
  // tag=1003
  return ::QPointerEvent::clone();
}
bool QPointerEvent_wrapper::isBeginEvent() const {
  // tag=1000
  if (m_isBeginEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_isBeginEventCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QPointerEvent::isBeginEvent();
  }
}
// tag=1009
bool QPointerEvent_wrapper::isBeginEvent_nocallback() const {
  // tag=1003
  return ::QPointerEvent::isBeginEvent();
}
bool QPointerEvent_wrapper::isEndEvent() const {
  // tag=1000
  if (m_isEndEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_isEndEventCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QPointerEvent::isEndEvent();
  }
}
// tag=1009
bool QPointerEvent_wrapper::isEndEvent_nocallback() const {
  // tag=1003
  return ::QPointerEvent::isEndEvent();
}
bool QPointerEvent_wrapper::isUpdateEvent() const {
  // tag=1000
  if (m_isUpdateEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_isUpdateEventCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QPointerEvent::isUpdateEvent();
  }
}
// tag=1009
bool QPointerEvent_wrapper::isUpdateEvent_nocallback() const {
  // tag=1003
  return ::QPointerEvent::isUpdateEvent();
}
qsizetype QPointerEvent_wrapper::pointCount() const {
  // tag=1000

  // tag=1004
  return ::QPointerEvent::pointCount();
}
void QPointerEvent_wrapper::setAccepted(bool accepted) {
  // tag=1000
  if (m_setAcceptedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setAcceptedCallback(const_cast<void *>(thisPtr), accepted);
  } else {
    // tag=1002
    ::QPointerEvent::setAccepted(accepted);
  }
}
// tag=1009
void QPointerEvent_wrapper::setAccepted_nocallback(bool accepted) {
  // tag=1003
  ::QPointerEvent::setAccepted(accepted);
}

// tag=1005
QPointerEvent_wrapper::~QPointerEvent_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QPointerEvent *fromPtr(void *ptr) {
  return reinterpret_cast<QPointerEvent *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QPointerEvent_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QPointerEvent_wrapper *>(
      ptr);
}
extern "C" {

// tag=1049
void c_QPointerEvent_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QPointerEvent_wrapper *>(
      cppObj);
}
// tag=1050
// allPointsAccepted() const
bool c_QPointerEvent__allPointsAccepted(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->allPointsAccepted();
}

// tag=1050
// allPointsGrabbed() const
bool c_QPointerEvent__allPointsGrabbed(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->allPointsGrabbed();
}

// tag=1050
// clone() const
void *c_QPointerEvent__clone(void *thisObj) {
  return
      // tag=1016
      [&] {
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
}

// tag=1050
// isBeginEvent() const
bool c_QPointerEvent__isBeginEvent(void *thisObj) {
  return
      // tag=1016
      [&] {
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
}

// tag=1050
// isEndEvent() const
bool c_QPointerEvent__isEndEvent(void *thisObj) {
  return
      // tag=1016
      [&] {
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
}

// tag=1050
// isUpdateEvent() const
bool c_QPointerEvent__isUpdateEvent(void *thisObj) {
  return
      // tag=1016
      [&] {
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
}

// tag=1050
// pointCount() const
qsizetype c_QPointerEvent__pointCount(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->pointCount();
}

// tag=1050
// setAccepted(bool accepted)
void c_QPointerEvent__setAccepted_bool(void *thisObj, bool accepted) {
  // tag=1016
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
void c_QPointerEvent__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QPointerEvent__registerVirtualMethodCallback(void *ptr, void *callback,
                                                    int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 4147:
    wrapper->m_cloneCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPointerEvent_wrapper::Callback_clone>(
        callback);
    break;
  case 4191:
    wrapper->m_isBeginEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPointerEvent_wrapper::
                             Callback_isBeginEvent>(callback);
    break;
  case 4192:
    wrapper->m_isEndEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPointerEvent_wrapper::Callback_isEndEvent>(
        callback);
    break;
  case 4193:
    wrapper->m_isUpdateEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPointerEvent_wrapper::
                             Callback_isUpdateEvent>(callback);
    break;
  case 4155:
    wrapper->m_setAcceptedCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPointerEvent_wrapper::Callback_setAccepted>(
        callback);
    break;
  }
}
}
