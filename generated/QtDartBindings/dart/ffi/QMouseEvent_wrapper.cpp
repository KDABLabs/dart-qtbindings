#include "QMouseEvent_wrapper.h"

#include <QDebug>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
QMouseEvent *QMouseEvent_wrapper::clone() const {
  // tag=1000
  if (m_cloneCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_cloneCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QMouseEvent::clone();
  }
}
// tag=1009
QMouseEvent *QMouseEvent_wrapper::clone_nocallback() const {
  // tag=1003
  return ::QMouseEvent::clone();
}
bool QMouseEvent_wrapper::isBeginEvent() const {
  // tag=1000
  if (m_isBeginEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_isBeginEventCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QMouseEvent::isBeginEvent();
  }
}
// tag=1009
bool QMouseEvent_wrapper::isBeginEvent_nocallback() const {
  // tag=1003
  return ::QMouseEvent::isBeginEvent();
}
bool QMouseEvent_wrapper::isEndEvent() const {
  // tag=1000
  if (m_isEndEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_isEndEventCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QMouseEvent::isEndEvent();
  }
}
// tag=1009
bool QMouseEvent_wrapper::isEndEvent_nocallback() const {
  // tag=1003
  return ::QMouseEvent::isEndEvent();
}
bool QMouseEvent_wrapper::isUpdateEvent() const {
  // tag=1000
  if (m_isUpdateEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_isUpdateEventCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QMouseEvent::isUpdateEvent();
  }
}
// tag=1009
bool QMouseEvent_wrapper::isUpdateEvent_nocallback() const {
  // tag=1003
  return ::QMouseEvent::isUpdateEvent();
}
QPoint QMouseEvent_wrapper::pos() const {
  // tag=1000

  // tag=1004
  return ::QMouseEvent::pos();
}
void QMouseEvent_wrapper::setAccepted(bool accepted) {
  // tag=1000
  if (m_setAcceptedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setAcceptedCallback(const_cast<void *>(thisPtr), accepted);
  } else {
    // tag=1002
    ::QMouseEvent::setAccepted(accepted);
  }
}
// tag=1009
void QMouseEvent_wrapper::setAccepted_nocallback(bool accepted) {
  // tag=1003
  ::QMouseEvent::setAccepted(accepted);
}

// tag=1005
QMouseEvent_wrapper::~QMouseEvent_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QMouseEvent *fromPtr(void *ptr) {
  return reinterpret_cast<QMouseEvent *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QMouseEvent_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QMouseEvent_wrapper *>(
      ptr);
}
extern "C" {

// tag=1049
void c_QMouseEvent_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QMouseEvent_wrapper *>(
      cppObj);
}
// tag=1050
// clone() const
void *c_QMouseEvent__clone(void *thisObj) {
  return
      // tag=1016
      [&] {
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
}

// tag=1050
// isBeginEvent() const
bool c_QMouseEvent__isBeginEvent(void *thisObj) {
  return
      // tag=1016
      [&] {
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
}

// tag=1050
// isEndEvent() const
bool c_QMouseEvent__isEndEvent(void *thisObj) {
  return
      // tag=1016
      [&] {
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
}

// tag=1050
// isUpdateEvent() const
bool c_QMouseEvent__isUpdateEvent(void *thisObj) {
  return
      // tag=1016
      [&] {
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
}

// tag=1050
// pos() const
void *c_QMouseEvent__pos(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPoint>{fromPtr(thisObj)->pos()};
}

// tag=1050
// setAccepted(bool accepted)
void c_QMouseEvent__setAccepted_bool(void *thisObj, bool accepted) {
  // tag=1016
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
void c_QMouseEvent__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QMouseEvent__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 4147:
    wrapper->m_cloneCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMouseEvent_wrapper::Callback_clone>(
        callback);
    break;
  case 4191:
    wrapper->m_isBeginEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMouseEvent_wrapper::Callback_isBeginEvent>(
        callback);
    break;
  case 4192:
    wrapper->m_isEndEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMouseEvent_wrapper::Callback_isEndEvent>(
        callback);
    break;
  case 4193:
    wrapper->m_isUpdateEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMouseEvent_wrapper::Callback_isUpdateEvent>(
        callback);
    break;
  case 4155:
    wrapper->m_setAcceptedCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMouseEvent_wrapper::Callback_setAccepted>(
        callback);
    break;
  }
}
}
