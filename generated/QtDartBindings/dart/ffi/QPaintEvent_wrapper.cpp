#include "QPaintEvent_wrapper.h"

#include <QDebug>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
// tag=1006
QPaintEvent_wrapper::QPaintEvent_wrapper(const QRect &paintRect)
    : ::QPaintEvent(paintRect) {}

// tag=1006
QPaintEvent_wrapper::QPaintEvent_wrapper(const QRegion &paintRegion)
    : ::QPaintEvent(paintRegion) {}
QPaintEvent *QPaintEvent_wrapper::clone() const {
  // tag=1000
  if (m_cloneCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_cloneCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QPaintEvent::clone();
  }
}
// tag=1009
QPaintEvent *QPaintEvent_wrapper::clone_nocallback() const {
  // tag=1003
  return ::QPaintEvent::clone();
}
const QRect &QPaintEvent_wrapper::rect() const {
  // tag=1000

  // tag=1004
  return ::QPaintEvent::rect();
}
const QRegion &QPaintEvent_wrapper::region() const {
  // tag=1000

  // tag=1004
  return ::QPaintEvent::region();
}
void QPaintEvent_wrapper::setAccepted(bool accepted) {
  // tag=1000
  if (m_setAcceptedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setAcceptedCallback(const_cast<void *>(thisPtr), accepted);
  } else {
    // tag=1002
    ::QPaintEvent::setAccepted(accepted);
  }
}
// tag=1009
void QPaintEvent_wrapper::setAccepted_nocallback(bool accepted) {
  // tag=1003
  ::QPaintEvent::setAccepted(accepted);
}

// tag=1005
QPaintEvent_wrapper::~QPaintEvent_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QPaintEvent *fromPtr(void *ptr) {
  return reinterpret_cast<QPaintEvent *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QPaintEvent_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QPaintEvent_wrapper *>(
      ptr);
}
extern "C" {

// tag=1049
void c_QPaintEvent_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QPaintEvent_wrapper *>(
      cppObj);
}
void *c_QPaintEvent__constructor_QRect(void *paintRect_) {
  auto &paintRect = *reinterpret_cast<QRect *>(paintRect_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QPaintEvent_wrapper(paintRect);
  return reinterpret_cast<void *>(ptr);
}
void *c_QPaintEvent__constructor_QRegion(void *paintRegion_) {
  auto &paintRegion = *reinterpret_cast<QRegion *>(paintRegion_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QPaintEvent_wrapper(paintRegion);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// clone() const
void *c_QPaintEvent__clone(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QPaintEvent_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->clone_nocallback();
        } else {
          return targetPtr->clone();
        }
      }();
}

// tag=1050
// rect() const
void *c_QPaintEvent__rect(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(static_cast<const void *>(&fromPtr(thisObj)->rect()));
}

// tag=1050
// region() const
void *c_QPaintEvent__region(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(
          static_cast<const void *>(&fromPtr(thisObj)->region()));
}

// tag=1050
// setAccepted(bool accepted)
void c_QPaintEvent__setAccepted_bool(void *thisObj, bool accepted) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QPaintEvent_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setAccepted_nocallback(accepted);
    } else {
      return targetPtr->setAccepted(accepted);
    }
  }();
}
void c_QPaintEvent__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QPaintEvent__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 4147:
    wrapper->m_cloneCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPaintEvent_wrapper::Callback_clone>(
        callback);
    break;
  case 4155:
    wrapper->m_setAcceptedCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPaintEvent_wrapper::Callback_setAccepted>(
        callback);
    break;
  }
}
}
