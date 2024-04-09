/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QGuiApplication_c.h"

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
QList<QWindow *> QGuiApplication_wrapper::allWindows() {
  return ::QGuiApplication::allWindows();
}
QString QGuiApplication_wrapper::applicationDisplayName() {
  return ::QGuiApplication::applicationDisplayName();
}
void QGuiApplication_wrapper::applicationDisplayNameChanged() {
  ::QGuiApplication::applicationDisplayNameChanged();
}
void QGuiApplication_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QGuiApplication::customEvent(event);
  }
}
void QGuiApplication_wrapper::customEvent_nocallback(QEvent *event) {
  ::QGuiApplication::customEvent(event);
}
QString QGuiApplication_wrapper::desktopFileName() {
  return ::QGuiApplication::desktopFileName();
}
bool QGuiApplication_wrapper::desktopSettingsAware() {
  return ::QGuiApplication::desktopSettingsAware();
}
qreal QGuiApplication_wrapper::devicePixelRatio() const {
  return ::QGuiApplication::devicePixelRatio();
}
bool QGuiApplication_wrapper::event(QEvent *arg__1) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QGuiApplication::event(arg__1);
  }
}
bool QGuiApplication_wrapper::event_nocallback(QEvent *arg__1) {
  return ::QGuiApplication::event(arg__1);
}
bool QGuiApplication_wrapper::eventFilter(QObject *watched, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QGuiApplication::eventFilter(watched, event);
  }
}
bool QGuiApplication_wrapper::eventFilter_nocallback(QObject *watched,
                                                     QEvent *event) {
  return ::QGuiApplication::eventFilter(watched, event);
}
int QGuiApplication_wrapper::exec() { return ::QGuiApplication::exec(); }
QObject *QGuiApplication_wrapper::focusObject() {
  return ::QGuiApplication::focusObject();
}
void QGuiApplication_wrapper::focusObjectChanged(QObject *focusObject) {
  ::QGuiApplication::focusObjectChanged(focusObject);
}
QWindow *QGuiApplication_wrapper::focusWindow() {
  return ::QGuiApplication::focusWindow();
}
void QGuiApplication_wrapper::focusWindowChanged(QWindow *focusWindow) {
  ::QGuiApplication::focusWindowChanged(focusWindow);
}
QFont QGuiApplication_wrapper::font() { return ::QGuiApplication::font(); }
void QGuiApplication_wrapper::fontDatabaseChanged() {
  ::QGuiApplication::fontDatabaseChanged();
}
bool QGuiApplication_wrapper::isLeftToRight() {
  return ::QGuiApplication::isLeftToRight();
}
bool QGuiApplication_wrapper::isRightToLeft() {
  return ::QGuiApplication::isRightToLeft();
}
bool QGuiApplication_wrapper::isSavingSession() const {
  return ::QGuiApplication::isSavingSession();
}
bool QGuiApplication_wrapper::isSessionRestored() const {
  return ::QGuiApplication::isSessionRestored();
}
QFlags<Qt::KeyboardModifier> QGuiApplication_wrapper::keyboardModifiers() {
  return ::QGuiApplication::keyboardModifiers();
}
void QGuiApplication_wrapper::lastWindowClosed() {
  ::QGuiApplication::lastWindowClosed();
}
Qt::LayoutDirection QGuiApplication_wrapper::layoutDirection() {
  return ::QGuiApplication::layoutDirection();
}
void QGuiApplication_wrapper::layoutDirectionChanged(
    Qt::LayoutDirection direction) {
  ::QGuiApplication::layoutDirectionChanged(direction);
}
QWindow *QGuiApplication_wrapper::modalWindow() {
  return ::QGuiApplication::modalWindow();
}
bool QGuiApplication_wrapper::notify(QObject *arg__1, QEvent *arg__2) {
  if (m_notifyCallback) {
    const void *thisPtr = this;
    return m_notifyCallback(const_cast<void *>(thisPtr), arg__1, arg__2);
  } else {
    return ::QGuiApplication::notify(arg__1, arg__2);
  }
}
bool QGuiApplication_wrapper::notify_nocallback(QObject *arg__1,
                                                QEvent *arg__2) {
  return ::QGuiApplication::notify(arg__1, arg__2);
}
QPalette QGuiApplication_wrapper::palette() {
  return ::QGuiApplication::palette();
}
QString QGuiApplication_wrapper::platformName() {
  return ::QGuiApplication::platformName();
}
QFlags<Qt::KeyboardModifier> QGuiApplication_wrapper::queryKeyboardModifiers() {
  return ::QGuiApplication::queryKeyboardModifiers();
}
bool QGuiApplication_wrapper::quitOnLastWindowClosed() {
  return ::QGuiApplication::quitOnLastWindowClosed();
}
void QGuiApplication_wrapper::restoreOverrideCursor() {
  ::QGuiApplication::restoreOverrideCursor();
}
QString QGuiApplication_wrapper::sessionId() const {
  return ::QGuiApplication::sessionId();
}
QString QGuiApplication_wrapper::sessionKey() const {
  return ::QGuiApplication::sessionKey();
}
void QGuiApplication_wrapper::setApplicationDisplayName(const QString &name) {
  ::QGuiApplication::setApplicationDisplayName(name);
}
void QGuiApplication_wrapper::setDesktopFileName(const QString &name) {
  ::QGuiApplication::setDesktopFileName(name);
}
void QGuiApplication_wrapper::setDesktopSettingsAware(bool on) {
  ::QGuiApplication::setDesktopSettingsAware(on);
}
void QGuiApplication_wrapper::setFont(const QFont &arg__1) {
  ::QGuiApplication::setFont(arg__1);
}
void QGuiApplication_wrapper::setLayoutDirection(
    Qt::LayoutDirection direction) {
  ::QGuiApplication::setLayoutDirection(direction);
}
void QGuiApplication_wrapper::setPalette(const QPalette &pal) {
  ::QGuiApplication::setPalette(pal);
}
void QGuiApplication_wrapper::setQuitOnLastWindowClosed(bool quit) {
  ::QGuiApplication::setQuitOnLastWindowClosed(quit);
}
void QGuiApplication_wrapper::setWindowIcon(const QIcon &icon) {
  ::QGuiApplication::setWindowIcon(icon);
}
void QGuiApplication_wrapper::sync() { ::QGuiApplication::sync(); }
QWindow *QGuiApplication_wrapper::topLevelAt(const QPoint &pos) {
  return ::QGuiApplication::topLevelAt(pos);
}
QList<QWindow *> QGuiApplication_wrapper::topLevelWindows() {
  return ::QGuiApplication::topLevelWindows();
}
QString QGuiApplication_wrapper::tr(const char *s, const char *c, int n) {
  return ::QGuiApplication::tr(s, c, n);
}
QIcon QGuiApplication_wrapper::windowIcon() {
  return ::QGuiApplication::windowIcon();
}
QGuiApplication_wrapper::~QGuiApplication_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QGuiApplication *fromPtr(void *ptr) {
  return reinterpret_cast<QGuiApplication *>(ptr);
}
static QtDartBindings_wrappersNS::QGuiApplication_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QGuiApplication_wrapper *>(
      ptr);
}
extern "C" {
void c_QGuiApplication_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QGuiApplication_wrapper *>(
      cppObj);
} // allWindows()
void *c_static_QGuiApplication__allWindows() {
  const auto &result = new Dartagnan::ValueWrapper<QList<QWindow *>>{
      QtDartBindings_wrappersNS::QGuiApplication_wrapper::allWindows()};
  return result;
}
// applicationDisplayName()
void *c_static_QGuiApplication__applicationDisplayName() {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QGuiApplication_wrapper::
          applicationDisplayName()};
  return result;
}
// applicationDisplayNameChanged()
void c_QGuiApplication__applicationDisplayNameChanged(void *thisObj) {
  fromPtr(thisObj)->applicationDisplayNameChanged();
}
void c_QGuiApplication__onApplicationDisplayNameChanged(void *thisObj,
                                                        void *contextQObject,
                                                        void *callback) {
  auto instance = reinterpret_cast<QGuiApplication *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QGuiApplication::applicationDisplayNameChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QGuiApplication__onApplicationNameChanged(void *thisObj,
                                                 void *contextQObject,
                                                 void *callback) {
  auto instance = reinterpret_cast<QGuiApplication *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QGuiApplication::applicationNameChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QGuiApplication__onApplicationVersionChanged(void *thisObj,
                                                    void *contextQObject,
                                                    void *callback) {
  auto instance = reinterpret_cast<QGuiApplication *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QGuiApplication::applicationVersionChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// customEvent(QEvent * event)
void c_QGuiApplication__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// desktopFileName()
void *c_static_QGuiApplication__desktopFileName() {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QGuiApplication_wrapper::desktopFileName()};
  return result;
}
// desktopSettingsAware()
bool c_static_QGuiApplication__desktopSettingsAware() {
  const auto &result = QtDartBindings_wrappersNS::QGuiApplication_wrapper::
      desktopSettingsAware();
  return result;
}
// devicePixelRatio() const
qreal c_QGuiApplication__devicePixelRatio(void *thisObj) {
  const auto &result = fromPtr(thisObj)->devicePixelRatio();
  return result;
}
// event(QEvent * arg__1)
bool c_QGuiApplication__event_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  const auto &result = fromWrapperPtr(thisObj)->event_nocallback(arg__1);
  return result;
}
// eventFilter(QObject * watched, QEvent * event)
bool c_QGuiApplication__eventFilter_QObject_QEvent(void *thisObj,
                                                   void *watched_,
                                                   void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QGuiApplication_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->eventFilter_nocallback(watched, event);
    } else {
      return targetPtr->eventFilter(watched, event);
    }
  }();
  return result;
}
// exec()
int c_static_QGuiApplication__exec() {
  const auto &result =
      QtDartBindings_wrappersNS::QGuiApplication_wrapper::exec();
  return result;
}
// focusObject()
void *c_static_QGuiApplication__focusObject() {
  const auto &result =
      QtDartBindings_wrappersNS::QGuiApplication_wrapper::focusObject();
  return result;
}
// focusObjectChanged(QObject * focusObject)
void c_QGuiApplication__focusObjectChanged_QObject(void *thisObj,
                                                   void *focusObject_) {
  auto focusObject = reinterpret_cast<QObject *>(focusObject_);
  fromPtr(thisObj)->focusObjectChanged(focusObject);
}
void c_QGuiApplication__onFocusObjectChanged_QObject(void *thisObj,
                                                     void *contextQObject,
                                                     void *callback) {
  auto instance = reinterpret_cast<QGuiApplication *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QGuiApplication::focusObjectChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// focusWindow()
void *c_static_QGuiApplication__focusWindow() {
  const auto &result =
      QtDartBindings_wrappersNS::QGuiApplication_wrapper::focusWindow();
  return result;
}
// focusWindowChanged(QWindow * focusWindow)
void c_QGuiApplication__focusWindowChanged_QWindow(void *thisObj,
                                                   void *focusWindow_) {
  auto focusWindow = reinterpret_cast<QWindow *>(focusWindow_);
  fromPtr(thisObj)->focusWindowChanged(focusWindow);
}
void c_QGuiApplication__onFocusWindowChanged_QWindow(void *thisObj,
                                                     void *contextQObject,
                                                     void *callback) {
  auto instance = reinterpret_cast<QGuiApplication *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QGuiApplication::focusWindowChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// font()
void *c_static_QGuiApplication__font() {
  const auto &result = new Dartagnan::ValueWrapper<QFont>{
      QtDartBindings_wrappersNS::QGuiApplication_wrapper::font()};
  return result;
}
// fontDatabaseChanged()
void c_QGuiApplication__fontDatabaseChanged(void *thisObj) {
  fromPtr(thisObj)->fontDatabaseChanged();
}
void c_QGuiApplication__onFontDatabaseChanged(void *thisObj,
                                              void *contextQObject,
                                              void *callback) {
  auto instance = reinterpret_cast<QGuiApplication *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QGuiApplication::fontDatabaseChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// isLeftToRight()
bool c_static_QGuiApplication__isLeftToRight() {
  const auto &result =
      QtDartBindings_wrappersNS::QGuiApplication_wrapper::isLeftToRight();
  return result;
}
// isRightToLeft()
bool c_static_QGuiApplication__isRightToLeft() {
  const auto &result =
      QtDartBindings_wrappersNS::QGuiApplication_wrapper::isRightToLeft();
  return result;
}
// isSavingSession() const
bool c_QGuiApplication__isSavingSession(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isSavingSession();
  return result;
}
// isSessionRestored() const
bool c_QGuiApplication__isSessionRestored(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isSessionRestored();
  return result;
}
// keyboardModifiers()
int c_static_QGuiApplication__keyboardModifiers() {
  const auto &result =
      QtDartBindings_wrappersNS::QGuiApplication_wrapper::keyboardModifiers();
  return result;
}
// lastWindowClosed()
void c_QGuiApplication__lastWindowClosed(void *thisObj) {
  fromPtr(thisObj)->lastWindowClosed();
}
void c_QGuiApplication__onLastWindowClosed(void *thisObj, void *contextQObject,
                                           void *callback) {
  auto instance = reinterpret_cast<QGuiApplication *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QGuiApplication::lastWindowClosed,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// layoutDirection()
int c_static_QGuiApplication__layoutDirection() {
  const auto &result =
      QtDartBindings_wrappersNS::QGuiApplication_wrapper::layoutDirection();
  return result;
}
// layoutDirectionChanged(Qt::LayoutDirection direction)
void c_QGuiApplication__layoutDirectionChanged_LayoutDirection(void *thisObj,
                                                               int direction) {
  fromPtr(thisObj)->layoutDirectionChanged(
      static_cast<Qt::LayoutDirection>(direction));
}
void c_QGuiApplication__onLayoutDirectionChanged_LayoutDirection(
    void *thisObj, void *contextQObject, void *callback) {
  auto instance = reinterpret_cast<QGuiApplication *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QGuiApplication::layoutDirectionChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// modalWindow()
void *c_static_QGuiApplication__modalWindow() {
  const auto &result =
      QtDartBindings_wrappersNS::QGuiApplication_wrapper::modalWindow();
  return result;
}
// notify(QObject * arg__1, QEvent * arg__2)
bool c_QGuiApplication__notify_QObject_QEvent(void *thisObj, void *arg__1_,
                                              void *arg__2_) {
  auto arg__1 = reinterpret_cast<QObject *>(arg__1_);
  auto arg__2 = reinterpret_cast<QEvent *>(arg__2_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QGuiApplication_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->notify_nocallback(arg__1, arg__2);
    } else {
      return targetPtr->notify(arg__1, arg__2);
    }
  }();
  return result;
}
void c_QGuiApplication__onOrganizationDomainChanged(void *thisObj,
                                                    void *contextQObject,
                                                    void *callback) {
  auto instance = reinterpret_cast<QGuiApplication *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QGuiApplication::organizationDomainChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QGuiApplication__onOrganizationNameChanged(void *thisObj,
                                                  void *contextQObject,
                                                  void *callback) {
  auto instance = reinterpret_cast<QGuiApplication *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QGuiApplication::organizationNameChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// palette()
void *c_static_QGuiApplication__palette() {
  const auto &result = new Dartagnan::ValueWrapper<QPalette>{
      QtDartBindings_wrappersNS::QGuiApplication_wrapper::palette()};
  return result;
}
// platformName()
void *c_static_QGuiApplication__platformName() {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QGuiApplication_wrapper::platformName()};
  return result;
}
// queryKeyboardModifiers()
int c_static_QGuiApplication__queryKeyboardModifiers() {
  const auto &result = QtDartBindings_wrappersNS::QGuiApplication_wrapper::
      queryKeyboardModifiers();
  return result;
}
// quitOnLastWindowClosed()
bool c_static_QGuiApplication__quitOnLastWindowClosed() {
  const auto &result = QtDartBindings_wrappersNS::QGuiApplication_wrapper::
      quitOnLastWindowClosed();
  return result;
}
// restoreOverrideCursor()
void c_static_QGuiApplication__restoreOverrideCursor() {
  QtDartBindings_wrappersNS::QGuiApplication_wrapper::restoreOverrideCursor();
}
// sessionId() const
void *c_QGuiApplication__sessionId(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->sessionId()};
  return result;
}
// sessionKey() const
void *c_QGuiApplication__sessionKey(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->sessionKey()};
  return result;
}
// setApplicationDisplayName(const QString & name)
void c_static_QGuiApplication__setApplicationDisplayName_QString(
    const char *name_) {
  const auto name = QString::fromUtf8(name_);
  QtDartBindings_wrappersNS::QGuiApplication_wrapper::setApplicationDisplayName(
      name);
  free((char *)name_);
}
// setDesktopFileName(const QString & name)
void c_static_QGuiApplication__setDesktopFileName_QString(const char *name_) {
  const auto name = QString::fromUtf8(name_);
  QtDartBindings_wrappersNS::QGuiApplication_wrapper::setDesktopFileName(name);
  free((char *)name_);
}
// setDesktopSettingsAware(bool on)
void c_static_QGuiApplication__setDesktopSettingsAware_bool(bool on) {
  QtDartBindings_wrappersNS::QGuiApplication_wrapper::setDesktopSettingsAware(
      on);
}
// setFont(const QFont & arg__1)
void c_static_QGuiApplication__setFont_QFont(void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QFont *>(arg__1_);
  QtDartBindings_wrappersNS::QGuiApplication_wrapper::setFont(arg__1);
}
// setLayoutDirection(Qt::LayoutDirection direction)
void c_static_QGuiApplication__setLayoutDirection_LayoutDirection(
    int direction) {
  QtDartBindings_wrappersNS::QGuiApplication_wrapper::setLayoutDirection(
      static_cast<Qt::LayoutDirection>(direction));
}
// setPalette(const QPalette & pal)
void c_static_QGuiApplication__setPalette_QPalette(void *pal_) {
  assert(pal_);
  auto &pal = *reinterpret_cast<QPalette *>(pal_);
  QtDartBindings_wrappersNS::QGuiApplication_wrapper::setPalette(pal);
}
// setQuitOnLastWindowClosed(bool quit)
void c_static_QGuiApplication__setQuitOnLastWindowClosed_bool(bool quit) {
  QtDartBindings_wrappersNS::QGuiApplication_wrapper::setQuitOnLastWindowClosed(
      quit);
}
// setWindowIcon(const QIcon & icon)
void c_static_QGuiApplication__setWindowIcon_QIcon(void *icon_) {
  assert(icon_);
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  QtDartBindings_wrappersNS::QGuiApplication_wrapper::setWindowIcon(icon);
}
// sync()
void c_static_QGuiApplication__sync() {
  QtDartBindings_wrappersNS::QGuiApplication_wrapper::sync();
}
// topLevelAt(const QPoint & pos)
void *c_static_QGuiApplication__topLevelWindowAtPos_QPoint(void *pos_) {
  assert(pos_);
  auto &pos = *reinterpret_cast<QPoint *>(pos_);
  const auto &result =
      QtDartBindings_wrappersNS::QGuiApplication_wrapper::topLevelAt(pos);
  return result;
}
// topLevelWindows()
void *c_static_QGuiApplication__topLevelWindows() {
  const auto &result = new Dartagnan::ValueWrapper<QList<QWindow *>>{
      QtDartBindings_wrappersNS::QGuiApplication_wrapper::topLevelWindows()};
  return result;
}
// tr(const char * s, const char * c, int n)
void *c_static_QGuiApplication__tr_char_char_int(const char *s, const char *c,
                                                 int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QGuiApplication_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
// windowIcon()
void *c_static_QGuiApplication__windowIcon() {
  const auto &result = new Dartagnan::ValueWrapper<QIcon>{
      QtDartBindings_wrappersNS::QGuiApplication_wrapper::windowIcon()};
  return result;
}
void c_QGuiApplication__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QGuiApplication__registerVirtualMethodCallback(void *ptr, void *callback,
                                                      int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 946:
    wrapper->m_customEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QGuiApplication_wrapper::
                             Callback_customEvent>(callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGuiApplication_wrapper::Callback_event>(
        callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QGuiApplication_wrapper::
                             Callback_eventFilter>(callback);
    break;
  case 4558:
    wrapper->m_notifyCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGuiApplication_wrapper::Callback_notify>(
        callback);
    break;
  }
}
}
