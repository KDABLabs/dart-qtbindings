#include "QEvent_wrapper.h"

#include <QDebug>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
void QEvent_wrapper::accept() {
  // tag=1000

  // tag=1004
  ::QEvent::accept();
}
QEvent *QEvent_wrapper::clone() const {
  // tag=1000
  if (m_cloneCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_cloneCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QEvent::clone();
  }
}
// tag=1009
QEvent *QEvent_wrapper::clone_nocallback() const {
  // tag=1003
  return ::QEvent::clone();
}
void QEvent_wrapper::ignore() {
  // tag=1000

  // tag=1004
  ::QEvent::ignore();
}
bool QEvent_wrapper::isAccepted() const {
  // tag=1000

  // tag=1004
  return ::QEvent::isAccepted();
}
bool QEvent_wrapper::isInputEvent() const {
  // tag=1000

  // tag=1004
  return ::QEvent::isInputEvent();
}
bool QEvent_wrapper::isPointerEvent() const {
  // tag=1000

  // tag=1004
  return ::QEvent::isPointerEvent();
}
bool QEvent_wrapper::isSinglePointEvent() const {
  // tag=1000

  // tag=1004
  return ::QEvent::isSinglePointEvent();
}
int QEvent_wrapper::registerEventType(int hint) {
  // tag=1000

  // tag=1004
  return ::QEvent::registerEventType(hint);
}
void QEvent_wrapper::setAccepted(bool accepted) {
  // tag=1000
  if (m_setAcceptedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setAcceptedCallback(const_cast<void *>(thisPtr), accepted);
  } else {
    // tag=1002
    ::QEvent::setAccepted(accepted);
  }
}
// tag=1009
void QEvent_wrapper::setAccepted_nocallback(bool accepted) {
  // tag=1003
  ::QEvent::setAccepted(accepted);
}
bool QEvent_wrapper::spontaneous() const {
  // tag=1000

  // tag=1004
  return ::QEvent::spontaneous();
}

// tag=1005
QEvent_wrapper::~QEvent_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QEvent *fromPtr(void *ptr) { return reinterpret_cast<QEvent *>(ptr); }
// tag=1014
static QtDartBindings_wrappersNS::QEvent_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QEvent_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QEvent_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QEvent_wrapper *>(cppObj);
}
// tag=1050
// accept()
void c_QEvent__accept(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->accept();
}

// tag=1050
// clone() const
void *c_QEvent__clone(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QEvent_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->clone_nocallback();
        } else {
          return targetPtr->clone();
        }
      }();
}

// tag=1050
// ignore()
void c_QEvent__ignore(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->ignore();
}

// tag=1050
// isAccepted() const
bool c_QEvent__isAccepted(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isAccepted();
}

// tag=1050
// isInputEvent() const
bool c_QEvent__isInputEvent(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isInputEvent();
}

// tag=1050
// isPointerEvent() const
bool c_QEvent__isPointerEvent(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isPointerEvent();
}

// tag=1050
// isSinglePointEvent() const
bool c_QEvent__isSinglePointEvent(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isSinglePointEvent();
}

// tag=1050
// registerEventType(int hint)
int c_static_QEvent__registerEventType_int(int hint) {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QEvent_wrapper::registerEventType(hint);
}

// tag=1050
// setAccepted(bool accepted)
void c_QEvent__setAccepted_bool(void *thisObj, bool accepted) {
  // tag=1016
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

// tag=1050
// spontaneous() const
bool c_QEvent__spontaneous(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->spontaneous();
}
void c_QEvent__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QEvent__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 4147:
    wrapper->m_cloneCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QEvent_wrapper::Callback_clone>(callback);
    break;
  case 4155:
    wrapper->m_setAcceptedCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QEvent_wrapper::Callback_setAccepted>(
        callback);
    break;
  }
}
}
