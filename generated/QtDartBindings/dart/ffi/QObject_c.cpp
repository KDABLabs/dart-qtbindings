/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QObject_c.h"

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
QObject_wrapper::QObject_wrapper(QObject *parent) : ::QObject(parent) {}
bool QObject_wrapper::blockSignals(bool b) {
  return ::QObject::blockSignals(b);
}
const QList<QObject *> &QObject_wrapper::children() const {
  return ::QObject::children();
}
void QObject_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QObject::customEvent(event);
  }
}
void QObject_wrapper::customEvent_nocallback(QEvent *event) {
  ::QObject::customEvent(event);
}
void QObject_wrapper::deleteLater() { ::QObject::deleteLater(); }
void QObject_wrapper::destroyed(QObject *arg__1) {
  ::QObject::destroyed(arg__1);
}
bool QObject_wrapper::disconnect(const QObject *receiver,
                                 const char *member) const {
  return ::QObject::disconnect(receiver, member);
}
bool QObject_wrapper::disconnect(const QObject *sender, const char *signal,
                                 const QObject *receiver, const char *member) {
  return ::QObject::disconnect(sender, signal, receiver, member);
}
bool QObject_wrapper::disconnect(const char *signal, const QObject *receiver,
                                 const char *member) const {
  return ::QObject::disconnect(signal, receiver, member);
}
void QObject_wrapper::dumpObjectInfo() const { ::QObject::dumpObjectInfo(); }
void QObject_wrapper::dumpObjectTree() const { ::QObject::dumpObjectTree(); }
QList<QByteArray> QObject_wrapper::dynamicPropertyNames() const {
  return ::QObject::dynamicPropertyNames();
}
bool QObject_wrapper::event(QEvent *event) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    return ::QObject::event(event);
  }
}
bool QObject_wrapper::event_nocallback(QEvent *event) {
  return ::QObject::event(event);
}
bool QObject_wrapper::eventFilter(QObject *watched, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QObject::eventFilter(watched, event);
  }
}
bool QObject_wrapper::eventFilter_nocallback(QObject *watched, QEvent *event) {
  return ::QObject::eventFilter(watched, event);
}
bool QObject_wrapper::inherits(const char *classname) const {
  return ::QObject::inherits(classname);
}
void QObject_wrapper::installEventFilter(QObject *filterObj) {
  ::QObject::installEventFilter(filterObj);
}
bool QObject_wrapper::isQuickItemType() const {
  return ::QObject::isQuickItemType();
}
bool QObject_wrapper::isWidgetType() const { return ::QObject::isWidgetType(); }
bool QObject_wrapper::isWindowType() const { return ::QObject::isWindowType(); }
void QObject_wrapper::killTimer(int id) { ::QObject::killTimer(id); }
QString QObject_wrapper::objectName() const { return ::QObject::objectName(); }
QObject *QObject_wrapper::parent() const { return ::QObject::parent(); }
QVariant QObject_wrapper::property(const char *name) const {
  return ::QObject::property(name);
}
int QObject_wrapper::receivers(const char *signal) const {
  return ::QObject::receivers(signal);
}
void QObject_wrapper::removeEventFilter(QObject *obj) {
  ::QObject::removeEventFilter(obj);
}
QObject *QObject_wrapper::sender() const { return ::QObject::sender(); }
int QObject_wrapper::senderSignalIndex() const {
  return ::QObject::senderSignalIndex();
}
void QObject_wrapper::setParent(QObject *parent) {
  ::QObject::setParent(parent);
}
bool QObject_wrapper::setProperty(const char *name, const QVariant &value) {
  return ::QObject::setProperty(name, value);
}
bool QObject_wrapper::signalsBlocked() const {
  return ::QObject::signalsBlocked();
}
int QObject_wrapper::startTimer(int interval) {
  return ::QObject::startTimer(interval);
}
QString QObject_wrapper::tr(const char *s, const char *c, int n) {
  return ::QObject::tr(s, c, n);
}
QObject_wrapper::~QObject_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QObject *fromPtr(void *ptr) { return reinterpret_cast<QObject *>(ptr); }
static QtDartBindings_wrappersNS::QObject_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QObject_wrapper *>(ptr);
}
extern "C" {
void c_QObject_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QObject_wrapper *>(cppObj);
}
void *c_QObject__constructor_QObject(void *parent_) {
  auto parent = reinterpret_cast<QObject *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QObject_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
// blockSignals(bool b)
bool c_QObject__blockSignals_bool(void *thisObj, bool b) {
  const auto &result = fromPtr(thisObj)->blockSignals(b);
  return result;
}
// children() const
void *c_QObject__children(void *thisObj) {
  const auto &result = const_cast<void *>(
      static_cast<const void *>(&fromPtr(thisObj)->children()));
  return result;
}
// customEvent(QEvent * event)
void c_QObject__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// deleteLater()
void c_QObject__deleteLater(void *thisObj) { fromPtr(thisObj)->deleteLater(); }
// destroyed(QObject * arg__1)
void c_QObject__destroyed_QObject(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QObject *>(arg__1_);
  fromPtr(thisObj)->destroyed(arg__1);
}
void c_QObject__onDestroyed_QObject(void *thisObj, void *contextQObject,
                                    void *callback) {
  auto instance = reinterpret_cast<QObject *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QObject::destroyed, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// disconnect(const QObject * receiver, const char * member) const
bool c_QObject__disconnect_QObject_char(void *thisObj, void *receiver_,
                                        const char *member) {
  auto receiver = reinterpret_cast<QObject *>(receiver_);
  const auto &result = fromPtr(thisObj)->disconnect(receiver, member);
  free((char *)member);
  return result;
}
// disconnect(const QObject * sender, const char * signal, const QObject *
// receiver, const char * member)
bool c_static_QObject__disconnect_QObject_char_QObject_char(
    void *sender_, const char *signal, void *receiver_, const char *member) {
  auto sender = reinterpret_cast<QObject *>(sender_);
  auto receiver = reinterpret_cast<QObject *>(receiver_);
  const auto &result = QtDartBindings_wrappersNS::QObject_wrapper::disconnect(
      sender, signal, receiver, member);
  free((char *)signal);
  free((char *)member);
  return result;
}
// disconnect(const char * signal, const QObject * receiver, const char *
// member) const
bool c_QObject__disconnect_char_QObject_char(void *thisObj, const char *signal,
                                             void *receiver_,
                                             const char *member) {
  auto receiver = reinterpret_cast<QObject *>(receiver_);
  const auto &result = fromPtr(thisObj)->disconnect(signal, receiver, member);
  free((char *)signal);
  free((char *)member);
  return result;
}
// dumpObjectInfo() const
void c_QObject__dumpObjectInfo(void *thisObj) {
  fromPtr(thisObj)->dumpObjectInfo();
}
// dumpObjectTree() const
void c_QObject__dumpObjectTree(void *thisObj) {
  fromPtr(thisObj)->dumpObjectTree();
}
// dynamicPropertyNames() const
void *c_QObject__dynamicPropertyNames(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QByteArray>>{
      fromPtr(thisObj)->dynamicPropertyNames()};
  return result;
}
// event(QEvent * event)
bool c_QObject__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QObject_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->event_nocallback(event);
    } else {
      return targetPtr->event(event);
    }
  }();
  return result;
}
// eventFilter(QObject * watched, QEvent * event)
bool c_QObject__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                           void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QObject_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->eventFilter_nocallback(watched, event);
    } else {
      return targetPtr->eventFilter(watched, event);
    }
  }();
  return result;
}
// inherits(const char * classname) const
bool c_QObject__inherits_char(void *thisObj, const char *classname) {
  const auto &result = fromPtr(thisObj)->inherits(classname);
  free((char *)classname);
  return result;
}
// installEventFilter(QObject * filterObj)
void c_QObject__installEventFilter_QObject(void *thisObj, void *filterObj_) {
  auto filterObj = reinterpret_cast<QObject *>(filterObj_);
  fromPtr(thisObj)->installEventFilter(filterObj);
}
// isQuickItemType() const
bool c_QObject__isQuickItemType(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isQuickItemType();
  return result;
}
// isWidgetType() const
bool c_QObject__isWidgetType(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isWidgetType();
  return result;
}
// isWindowType() const
bool c_QObject__isWindowType(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isWindowType();
  return result;
}
// killTimer(int id)
void c_QObject__killTimer_int(void *thisObj, int id) {
  fromPtr(thisObj)->killTimer(id);
}
// objectName() const
void *c_QObject__objectName(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->objectName()};
  return result;
}
// parent() const
void *c_QObject__parent(void *thisObj) {
  const auto &result = fromPtr(thisObj)->parent();
  return result;
}
// property(const char * name) const
void *c_QObject__property_char(void *thisObj, const char *name) {
  const auto &result =
      new Dartagnan::ValueWrapper<QVariant>{fromPtr(thisObj)->property(name)};
  free((char *)name);
  return result;
}
// receivers(const char * signal) const
int c_QObject__receivers_char(void *thisObj, const char *signal) {
  const auto &result = fromWrapperPtr(thisObj)->receivers(signal);
  free((char *)signal);
  return result;
}
// removeEventFilter(QObject * obj)
void c_QObject__removeEventFilter_QObject(void *thisObj, void *obj_) {
  auto obj = reinterpret_cast<QObject *>(obj_);
  fromPtr(thisObj)->removeEventFilter(obj);
}
// sender() const
void *c_QObject__sender(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->sender();
  return result;
}
// senderSignalIndex() const
int c_QObject__senderSignalIndex(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->senderSignalIndex();
  return result;
}
// setParent(QObject * parent)
void c_QObject__setParent_QObject(void *thisObj, void *parent_) {
  auto parent = reinterpret_cast<QObject *>(parent_);
  fromPtr(thisObj)->setParent(parent);
}
// setProperty(const char * name, const QVariant & value)
bool c_QObject__setProperty_char_QVariant(void *thisObj, const char *name,
                                          void *value_) {
  assert(value_);
  auto &value = *reinterpret_cast<QVariant *>(value_);
  const auto &result = fromPtr(thisObj)->setProperty(name, value);
  free((char *)name);
  return result;
}
// signalsBlocked() const
bool c_QObject__signalsBlocked(void *thisObj) {
  const auto &result = fromPtr(thisObj)->signalsBlocked();
  return result;
}
// startTimer(int interval)
int c_QObject__startTimer_int(void *thisObj, int interval) {
  const auto &result = fromPtr(thisObj)->startTimer(interval);
  return result;
}
// tr(const char * s, const char * c, int n)
void *c_static_QObject__tr_char_char_int(const char *s, const char *c, int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QObject_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
void c_QObject__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QObject__registerVirtualMethodCallback(void *ptr, void *callback,
                                              int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QObject_wrapper::Callback_customEvent>(
        callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QObject_wrapper::Callback_event>(callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QObject_wrapper::Callback_eventFilter>(
        callback);
    break;
  }
}
}
