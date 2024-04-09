#include "QInputEvent_wrapper.h"

#include <QDebug>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
QInputEvent *QInputEvent_wrapper::clone() const {
  // tag=1000
  if (m_cloneCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_cloneCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QInputEvent::clone();
  }
}
// tag=1009
QInputEvent *QInputEvent_wrapper::clone_nocallback() const {
  // tag=1003
  return ::QInputEvent::clone();
}
QFlags<Qt::KeyboardModifier> QInputEvent_wrapper::modifiers() const {
  // tag=1000

  // tag=1004
  return ::QInputEvent::modifiers();
}
void QInputEvent_wrapper::setAccepted(bool accepted) {
  // tag=1000
  if (m_setAcceptedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setAcceptedCallback(const_cast<void *>(thisPtr), accepted);
  } else {
    // tag=1002
    ::QInputEvent::setAccepted(accepted);
  }
}
// tag=1009
void QInputEvent_wrapper::setAccepted_nocallback(bool accepted) {
  // tag=1003
  ::QInputEvent::setAccepted(accepted);
}
void QInputEvent_wrapper::setModifiers(QFlags<Qt::KeyboardModifier> modifiers) {
  // tag=1000

  // tag=1004
  ::QInputEvent::setModifiers(modifiers);
}

// tag=1005
QInputEvent_wrapper::~QInputEvent_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QInputEvent *fromPtr(void *ptr) {
  return reinterpret_cast<QInputEvent *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QInputEvent_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QInputEvent_wrapper *>(
      ptr);
}
extern "C" {

// tag=1049
void c_QInputEvent_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QInputEvent_wrapper *>(
      cppObj);
}
// tag=1050
// clone() const
void *c_QInputEvent__clone(void *thisObj) {
  return
      // tag=1016
      [&] {
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
}

// tag=1050
// modifiers() const
int c_QInputEvent__modifiers(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->modifiers();
}

// tag=1050
// setAccepted(bool accepted)
void c_QInputEvent__setAccepted_bool(void *thisObj, bool accepted) {
  // tag=1016
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

// tag=1050
// setModifiers(QFlags<Qt::KeyboardModifier> modifiers)
void c_QInputEvent__setModifiers_KeyboardModifiers(void *thisObj,
                                                   int modifiers_) {
  auto modifiers = static_cast<QFlags<Qt::KeyboardModifier>>(modifiers_);
  // tag=1010
  fromPtr(thisObj)->setModifiers(modifiers);
}
void c_QInputEvent__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QInputEvent__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 4147:
    wrapper->m_cloneCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputEvent_wrapper::Callback_clone>(
        callback);
    break;
  case 4155:
    wrapper->m_setAcceptedCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputEvent_wrapper::Callback_setAccepted>(
        callback);
    break;
  }
}
}
