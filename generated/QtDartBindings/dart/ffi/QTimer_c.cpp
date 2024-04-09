/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QTimer_c.h"

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
QTimer_wrapper::QTimer_wrapper(QObject *parent) : ::QTimer(parent) {}
void QTimer_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QTimer::customEvent(event);
  }
}
void QTimer_wrapper::customEvent_nocallback(QEvent *event) {
  ::QTimer::customEvent(event);
}
bool QTimer_wrapper::event(QEvent *event) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    return ::QTimer::event(event);
  }
}
bool QTimer_wrapper::event_nocallback(QEvent *event) {
  return ::QTimer::event(event);
}
bool QTimer_wrapper::eventFilter(QObject *watched, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QTimer::eventFilter(watched, event);
  }
}
bool QTimer_wrapper::eventFilter_nocallback(QObject *watched, QEvent *event) {
  return ::QTimer::eventFilter(watched, event);
}
int QTimer_wrapper::interval() const { return ::QTimer::interval(); }
bool QTimer_wrapper::isActive() const { return ::QTimer::isActive(); }
bool QTimer_wrapper::isSingleShot() const { return ::QTimer::isSingleShot(); }
int QTimer_wrapper::remainingTime() const { return ::QTimer::remainingTime(); }
void QTimer_wrapper::setInterval(int msec) { ::QTimer::setInterval(msec); }
void QTimer_wrapper::setSingleShot(bool singleShot) {
  ::QTimer::setSingleShot(singleShot);
}
void QTimer_wrapper::singleShot(int msec, const QObject *receiver,
                                const char *member) {
  ::QTimer::singleShot(msec, receiver, member);
}
void QTimer_wrapper::start() { ::QTimer::start(); }
void QTimer_wrapper::start(int msec) { ::QTimer::start(msec); }
void QTimer_wrapper::stop() { ::QTimer::stop(); }
int QTimer_wrapper::timerId() const { return ::QTimer::timerId(); }
QString QTimer_wrapper::tr(const char *s, const char *c, int n) {
  return ::QTimer::tr(s, c, n);
}
QTimer_wrapper::~QTimer_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QTimer *fromPtr(void *ptr) { return reinterpret_cast<QTimer *>(ptr); }
static QtDartBindings_wrappersNS::QTimer_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QTimer_wrapper *>(ptr);
}
extern "C" {
void c_QTimer_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QTimer_wrapper *>(cppObj);
}
void *c_QTimer__constructor_QObject(void *parent_) {
  auto parent = reinterpret_cast<QObject *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QTimer_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
// customEvent(QEvent * event)
void c_QTimer__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
void c_QTimer__onDestroyed_QObject(void *thisObj, void *contextQObject,
                                   void *callback) {
  auto instance = reinterpret_cast<QTimer *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QTimer::destroyed, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// event(QEvent * event)
bool c_QTimer__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTimer_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->event_nocallback(event);
    } else {
      return targetPtr->event(event);
    }
  }();
  return result;
}
// eventFilter(QObject * watched, QEvent * event)
bool c_QTimer__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                          void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTimer_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->eventFilter_nocallback(watched, event);
    } else {
      return targetPtr->eventFilter(watched, event);
    }
  }();
  return result;
}
// interval() const
int c_QTimer__interval(void *thisObj) {
  const auto &result = fromPtr(thisObj)->interval();
  return result;
}
// isActive() const
bool c_QTimer__isActive(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isActive();
  return result;
}
// isSingleShot() const
bool c_QTimer__isSingleShot(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isSingleShot();
  return result;
}
// remainingTime() const
int c_QTimer__remainingTime(void *thisObj) {
  const auto &result = fromPtr(thisObj)->remainingTime();
  return result;
}
// setInterval(int msec)
void c_QTimer__setInterval_int(void *thisObj, int msec) {
  fromPtr(thisObj)->setInterval(msec);
}
// setSingleShot(bool singleShot)
void c_QTimer__setSingleShot_bool(void *thisObj, bool singleShot) {
  fromPtr(thisObj)->setSingleShot(singleShot);
}
// singleShot(int msec, const QObject * receiver, const char * member)
void c_static_QTimer__singleShot_int_QObject_char(int msec, void *receiver_,
                                                  const char *member) {
  auto receiver = reinterpret_cast<QObject *>(receiver_);
  QtDartBindings_wrappersNS::QTimer_wrapper::singleShot(msec, receiver, member);
  free((char *)member);
}
// start()
void c_QTimer__start(void *thisObj) { fromPtr(thisObj)->start(); }
// start(int msec)
void c_QTimer__start_int(void *thisObj, int msec) {
  fromPtr(thisObj)->start(msec);
}
// stop()
void c_QTimer__stop(void *thisObj) { fromPtr(thisObj)->stop(); }
// timerId() const
int c_QTimer__timerId(void *thisObj) {
  const auto &result = fromPtr(thisObj)->timerId();
  return result;
}
// tr(const char * s, const char * c, int n)
void *c_static_QTimer__tr_char_char_int(const char *s, const char *c, int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QTimer_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
void c_QTimer__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QTimer__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTimer_wrapper::Callback_customEvent>(
        callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTimer_wrapper::Callback_event>(callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTimer_wrapper::Callback_eventFilter>(
        callback);
    break;
  }
}
}
