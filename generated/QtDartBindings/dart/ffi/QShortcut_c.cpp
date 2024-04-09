/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QShortcut_c.h"

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
QShortcut_wrapper::QShortcut_wrapper(QKeySequence::StandardKey key,
                                     QObject *parent, const char *member,
                                     const char *ambiguousMember)
    : ::QShortcut(key, parent, member, ambiguousMember) {}
QShortcut_wrapper::QShortcut_wrapper(QObject *parent) : ::QShortcut(parent) {}
QShortcut_wrapper::QShortcut_wrapper(const QKeySequence &key, QObject *parent,
                                     const char *member,
                                     const char *ambiguousMember)
    : ::QShortcut(key, parent, member, ambiguousMember) {}
void QShortcut_wrapper::activated() { ::QShortcut::activated(); }
void QShortcut_wrapper::activatedAmbiguously() {
  ::QShortcut::activatedAmbiguously();
}
bool QShortcut_wrapper::autoRepeat() const { return ::QShortcut::autoRepeat(); }
void QShortcut_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QShortcut::customEvent(event);
  }
}
void QShortcut_wrapper::customEvent_nocallback(QEvent *event) {
  ::QShortcut::customEvent(event);
}
bool QShortcut_wrapper::event(QEvent *e) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), e);
  } else {
    return ::QShortcut::event(e);
  }
}
bool QShortcut_wrapper::event_nocallback(QEvent *e) {
  return ::QShortcut::event(e);
}
bool QShortcut_wrapper::eventFilter(QObject *watched, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QShortcut::eventFilter(watched, event);
  }
}
bool QShortcut_wrapper::eventFilter_nocallback(QObject *watched,
                                               QEvent *event) {
  return ::QShortcut::eventFilter(watched, event);
}
bool QShortcut_wrapper::isEnabled() const { return ::QShortcut::isEnabled(); }
QKeySequence QShortcut_wrapper::key() const { return ::QShortcut::key(); }
QList<QKeySequence> QShortcut_wrapper::keys() const {
  return ::QShortcut::keys();
}
void QShortcut_wrapper::setAutoRepeat(bool on) {
  ::QShortcut::setAutoRepeat(on);
}
void QShortcut_wrapper::setEnabled(bool enable) {
  ::QShortcut::setEnabled(enable);
}
void QShortcut_wrapper::setKey(const QKeySequence &key) {
  ::QShortcut::setKey(key);
}
void QShortcut_wrapper::setKeys(QKeySequence::StandardKey key) {
  ::QShortcut::setKeys(key);
}
void QShortcut_wrapper::setKeys(const QList<QKeySequence> &keys) {
  ::QShortcut::setKeys(keys);
}
void QShortcut_wrapper::setWhatsThis(const QString &text) {
  ::QShortcut::setWhatsThis(text);
}
QString QShortcut_wrapper::tr(const char *s, const char *c, int n) {
  return ::QShortcut::tr(s, c, n);
}
QString QShortcut_wrapper::whatsThis() const {
  return ::QShortcut::whatsThis();
}
QShortcut_wrapper::~QShortcut_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QShortcut *fromPtr(void *ptr) {
  return reinterpret_cast<QShortcut *>(ptr);
}
static QtDartBindings_wrappersNS::QShortcut_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QShortcut_wrapper *>(ptr);
}
extern "C" {
void c_QShortcut_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QShortcut_wrapper *>(
      cppObj);
}
void *c_QShortcut__constructor_StandardKey_QObject_char_char(
    int key, void *parent_, const char *member, const char *ambiguousMember) {
  auto parent = reinterpret_cast<QObject *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QShortcut_wrapper(
      static_cast<QKeySequence::StandardKey>(key), parent, member,
      ambiguousMember);
  return reinterpret_cast<void *>(ptr);
}
void *c_QShortcut__constructor_QObject(void *parent_) {
  auto parent = reinterpret_cast<QObject *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QShortcut_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
void *c_QShortcut__constructor_QKeySequence_QObject_char_char(
    void *key_, void *parent_, const char *member,
    const char *ambiguousMember) {
  assert(key_);
  auto &key = *reinterpret_cast<QKeySequence *>(key_);
  auto parent = reinterpret_cast<QObject *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QShortcut_wrapper(
      key, parent, member, ambiguousMember);
  return reinterpret_cast<void *>(ptr);
}
// activated()
void c_QShortcut__activated(void *thisObj) { fromPtr(thisObj)->activated(); }
void c_QShortcut__onActivated(void *thisObj, void *contextQObject,
                              void *callback) {
  auto instance = reinterpret_cast<QShortcut *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QShortcut::activated,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// activatedAmbiguously()
void c_QShortcut__activatedAmbiguously(void *thisObj) {
  fromPtr(thisObj)->activatedAmbiguously();
}
void c_QShortcut__onActivatedAmbiguously(void *thisObj, void *contextQObject,
                                         void *callback) {
  auto instance = reinterpret_cast<QShortcut *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QShortcut::activatedAmbiguously,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// autoRepeat() const
bool c_QShortcut__autoRepeat(void *thisObj) {
  const auto &result = fromPtr(thisObj)->autoRepeat();
  return result;
}
// customEvent(QEvent * event)
void c_QShortcut__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
void c_QShortcut__onDestroyed_QObject(void *thisObj, void *contextQObject,
                                      void *callback) {
  auto instance = reinterpret_cast<QShortcut *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QShortcut::destroyed,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// event(QEvent * e)
bool c_QShortcut__event_QEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QEvent *>(e_);
  const auto &result = fromWrapperPtr(thisObj)->event_nocallback(e);
  return result;
}
// eventFilter(QObject * watched, QEvent * event)
bool c_QShortcut__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                             void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QShortcut_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->eventFilter_nocallback(watched, event);
    } else {
      return targetPtr->eventFilter(watched, event);
    }
  }();
  return result;
}
// isEnabled() const
bool c_QShortcut__isEnabled(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isEnabled();
  return result;
}
// key() const
void *c_QShortcut__key(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QKeySequence>{fromPtr(thisObj)->key()};
  return result;
}
// keys() const
void *c_QShortcut__keys(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QKeySequence>>{
      fromPtr(thisObj)->keys()};
  return result;
}
// setAutoRepeat(bool on)
void c_QShortcut__setAutoRepeat_bool(void *thisObj, bool on) {
  fromPtr(thisObj)->setAutoRepeat(on);
}
// setEnabled(bool enable)
void c_QShortcut__setEnabled_bool(void *thisObj, bool enable) {
  fromPtr(thisObj)->setEnabled(enable);
}
// setKey(const QKeySequence & key)
void c_QShortcut__setKey_QKeySequence(void *thisObj, void *key_) {
  assert(key_);
  auto &key = *reinterpret_cast<QKeySequence *>(key_);
  fromPtr(thisObj)->setKey(key);
}
// setKeys(QKeySequence::StandardKey key)
void c_QShortcut__setKeys_StandardKey(void *thisObj, int key) {
  fromPtr(thisObj)->setKeys(static_cast<QKeySequence::StandardKey>(key));
}
// setKeys(const QList<QKeySequence > & keys)
void c_QShortcut__setKeys_QList_QKeySequence(void *thisObj, void *keys_) {
  assert(keys_);
  auto &keys = *reinterpret_cast<QList<QKeySequence> *>(keys_);
  fromPtr(thisObj)->setKeys(keys);
}
// setWhatsThis(const QString & text)
void c_QShortcut__setWhatsThis_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  fromPtr(thisObj)->setWhatsThis(text);
  free((char *)text_);
}
// tr(const char * s, const char * c, int n)
void *c_static_QShortcut__tr_char_char_int(const char *s, const char *c,
                                           int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QShortcut_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
// whatsThis() const
void *c_QShortcut__whatsThis(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->whatsThis()};
  return result;
}
void c_QShortcut__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QShortcut__registerVirtualMethodCallback(void *ptr, void *callback,
                                                int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QShortcut_wrapper::Callback_customEvent>(
        callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QShortcut_wrapper::Callback_event>(callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QShortcut_wrapper::Callback_eventFilter>(
        callback);
    break;
  }
}
}
