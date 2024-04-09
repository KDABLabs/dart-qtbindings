#include "QSinglePointEvent_wrapper.h"

#include <QDebug>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
QSinglePointEvent *QSinglePointEvent_wrapper::clone() const {
  // tag=1000
  if (m_cloneCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_cloneCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QSinglePointEvent::clone();
  }
}
// tag=1009
QSinglePointEvent *QSinglePointEvent_wrapper::clone_nocallback() const {
  // tag=1003
  return ::QSinglePointEvent::clone();
}
QObject *QSinglePointEvent_wrapper::exclusivePointGrabber() const {
  // tag=1000

  // tag=1004
  return ::QSinglePointEvent::exclusivePointGrabber();
}
QPointF QSinglePointEvent_wrapper::globalPosition() const {
  // tag=1000

  // tag=1004
  return ::QSinglePointEvent::globalPosition();
}
bool QSinglePointEvent_wrapper::isBeginEvent() const {
  // tag=1000
  if (m_isBeginEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_isBeginEventCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QSinglePointEvent::isBeginEvent();
  }
}
// tag=1009
bool QSinglePointEvent_wrapper::isBeginEvent_nocallback() const {
  // tag=1003
  return ::QSinglePointEvent::isBeginEvent();
}
bool QSinglePointEvent_wrapper::isEndEvent() const {
  // tag=1000
  if (m_isEndEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_isEndEventCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QSinglePointEvent::isEndEvent();
  }
}
// tag=1009
bool QSinglePointEvent_wrapper::isEndEvent_nocallback() const {
  // tag=1003
  return ::QSinglePointEvent::isEndEvent();
}
bool QSinglePointEvent_wrapper::isUpdateEvent() const {
  // tag=1000
  if (m_isUpdateEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_isUpdateEventCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QSinglePointEvent::isUpdateEvent();
  }
}
// tag=1009
bool QSinglePointEvent_wrapper::isUpdateEvent_nocallback() const {
  // tag=1003
  return ::QSinglePointEvent::isUpdateEvent();
}
QPointF QSinglePointEvent_wrapper::position() const {
  // tag=1000

  // tag=1004
  return ::QSinglePointEvent::position();
}
QPointF QSinglePointEvent_wrapper::scenePosition() const {
  // tag=1000

  // tag=1004
  return ::QSinglePointEvent::scenePosition();
}
void QSinglePointEvent_wrapper::setAccepted(bool accepted) {
  // tag=1000
  if (m_setAcceptedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setAcceptedCallback(const_cast<void *>(thisPtr), accepted);
  } else {
    // tag=1002
    ::QSinglePointEvent::setAccepted(accepted);
  }
}
// tag=1009
void QSinglePointEvent_wrapper::setAccepted_nocallback(bool accepted) {
  // tag=1003
  ::QSinglePointEvent::setAccepted(accepted);
}
void QSinglePointEvent_wrapper::setExclusivePointGrabber(
    QObject *exclusiveGrabber) {
  // tag=1000

  // tag=1004
  ::QSinglePointEvent::setExclusivePointGrabber(exclusiveGrabber);
}

// tag=1005
QSinglePointEvent_wrapper::~QSinglePointEvent_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QSinglePointEvent *fromPtr(void *ptr) {
  return reinterpret_cast<QSinglePointEvent *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QSinglePointEvent_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<
      QtDartBindings_wrappersNS::QSinglePointEvent_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QSinglePointEvent_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QSinglePointEvent_wrapper *>(cppObj);
}
// tag=1050
// clone() const
void *c_QSinglePointEvent__clone(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QSinglePointEvent_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->clone_nocallback();
        } else {
          return targetPtr->clone();
        }
      }();
}

// tag=1050
// exclusivePointGrabber() const
void *c_QSinglePointEvent__exclusivePointGrabber(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->exclusivePointGrabber();
}

// tag=1050
// globalPosition() const
void *c_QSinglePointEvent__globalPosition(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPointF>{fromPtr(thisObj)->globalPosition()};
}

// tag=1050
// isBeginEvent() const
bool c_QSinglePointEvent__isBeginEvent(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QSinglePointEvent_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->isBeginEvent_nocallback();
        } else {
          return targetPtr->isBeginEvent();
        }
      }();
}

// tag=1050
// isEndEvent() const
bool c_QSinglePointEvent__isEndEvent(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QSinglePointEvent_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->isEndEvent_nocallback();
        } else {
          return targetPtr->isEndEvent();
        }
      }();
}

// tag=1050
// isUpdateEvent() const
bool c_QSinglePointEvent__isUpdateEvent(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QSinglePointEvent_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->isUpdateEvent_nocallback();
        } else {
          return targetPtr->isUpdateEvent();
        }
      }();
}

// tag=1050
// position() const
void *c_QSinglePointEvent__position(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPointF>{fromPtr(thisObj)->position()};
}

// tag=1050
// scenePosition() const
void *c_QSinglePointEvent__scenePosition(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPointF>{fromPtr(thisObj)->scenePosition()};
}

// tag=1050
// setAccepted(bool accepted)
void c_QSinglePointEvent__setAccepted_bool(void *thisObj, bool accepted) {
  // tag=1016
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

// tag=1050
// setExclusivePointGrabber(QObject * exclusiveGrabber)
void c_QSinglePointEvent__setExclusivePointGrabber_QObject(
    void *thisObj, void *exclusiveGrabber_) {
  auto exclusiveGrabber = reinterpret_cast<QObject *>(exclusiveGrabber_);
  // tag=1010
  fromPtr(thisObj)->setExclusivePointGrabber(exclusiveGrabber);
}
void c_QSinglePointEvent__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QSinglePointEvent__registerVirtualMethodCallback(void *ptr,
                                                        void *callback,
                                                        int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 4147:
    wrapper->m_cloneCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSinglePointEvent_wrapper::Callback_clone>(
        callback);
    break;
  case 4191:
    wrapper->m_isBeginEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QSinglePointEvent_wrapper::
                             Callback_isBeginEvent>(callback);
    break;
  case 4192:
    wrapper->m_isEndEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QSinglePointEvent_wrapper::
                             Callback_isEndEvent>(callback);
    break;
  case 4193:
    wrapper->m_isUpdateEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QSinglePointEvent_wrapper::
                             Callback_isUpdateEvent>(callback);
    break;
  case 4155:
    wrapper->m_setAcceptedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QSinglePointEvent_wrapper::
                             Callback_setAccepted>(callback);
    break;
  }
}
}
