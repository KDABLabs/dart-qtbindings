/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QApplication_c.h"

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
// ========================================================================
// START of custom code block [file: shiboken_snippets/qtwidgets.cpp
// (qapplication-2)]
static const char *s_argv[1] = {
    "foo"};            // TODO: This is just a hack for testing purposes
static int s_argc = 1; // TODO: This is just a hack for testing purposes

QApplication_wrapper::QApplication_wrapper()
    : ::QApplication(s_argc, (char **)s_argv) {}
// END of custom code block [file: shiboken_snippets/qtwidgets.cpp
// (qapplication-2)]
// ========================================================================

void QApplication_wrapper::aboutQt() { ::QApplication::aboutQt(); }
QWidget *QApplication_wrapper::activeModalWidget() {
  return ::QApplication::activeModalWidget();
}
QWidget *QApplication_wrapper::activePopupWidget() {
  return ::QApplication::activePopupWidget();
}
QWidget *QApplication_wrapper::activeWindow() {
  return ::QApplication::activeWindow();
}
void QApplication_wrapper::alert(QWidget *widget, int duration) {
  ::QApplication::alert(widget, duration);
}
QList<QWidget *> QApplication_wrapper::allWidgets() {
  return ::QApplication::allWidgets();
}
bool QApplication_wrapper::autoSipEnabled() const {
  return ::QApplication::autoSipEnabled();
}
void QApplication_wrapper::beep() { ::QApplication::beep(); }
void QApplication_wrapper::closeAllWindows() {
  ::QApplication::closeAllWindows();
}
int QApplication_wrapper::cursorFlashTime() {
  return ::QApplication::cursorFlashTime();
}
void QApplication_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QApplication::customEvent(event);
  }
}
void QApplication_wrapper::customEvent_nocallback(QEvent *event) {
  ::QApplication::customEvent(event);
}
int QApplication_wrapper::doubleClickInterval() {
  return ::QApplication::doubleClickInterval();
}
bool QApplication_wrapper::event(QEvent *arg__1) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QApplication::event(arg__1);
  }
}
bool QApplication_wrapper::event_nocallback(QEvent *arg__1) {
  return ::QApplication::event(arg__1);
}
bool QApplication_wrapper::eventFilter(QObject *watched, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QApplication::eventFilter(watched, event);
  }
}
bool QApplication_wrapper::eventFilter_nocallback(QObject *watched,
                                                  QEvent *event) {
  return ::QApplication::eventFilter(watched, event);
}
int QApplication_wrapper::exec() { return ::QApplication::exec(); }
void QApplication_wrapper::focusChanged(QWidget *old, QWidget *now) {
  ::QApplication::focusChanged(old, now);
}
QWidget *QApplication_wrapper::focusWidget() {
  return ::QApplication::focusWidget();
}
QFont QApplication_wrapper::font() { return ::QApplication::font(); }
QFont QApplication_wrapper::font(const QWidget *arg__1) {
  return ::QApplication::font(arg__1);
}
QFont QApplication_wrapper::font(const char *className) {
  return ::QApplication::font(className);
}
int QApplication_wrapper::keyboardInputInterval() {
  return ::QApplication::keyboardInputInterval();
}
bool QApplication_wrapper::notify(QObject *arg__1, QEvent *arg__2) {
  if (m_notifyCallback) {
    const void *thisPtr = this;
    return m_notifyCallback(const_cast<void *>(thisPtr), arg__1, arg__2);
  } else {
    return ::QApplication::notify(arg__1, arg__2);
  }
}
bool QApplication_wrapper::notify_nocallback(QObject *arg__1, QEvent *arg__2) {
  return ::QApplication::notify(arg__1, arg__2);
}
QPalette QApplication_wrapper::palette(const QWidget *arg__1) {
  return ::QApplication::palette(arg__1);
}
QPalette QApplication_wrapper::palette(const char *className) {
  return ::QApplication::palette(className);
}
void QApplication_wrapper::setActiveWindow(QWidget *act) {
  ::QApplication::setActiveWindow(act);
}
void QApplication_wrapper::setAutoSipEnabled(const bool enabled) {
  ::QApplication::setAutoSipEnabled(enabled);
}
void QApplication_wrapper::setCursorFlashTime(int arg__1) {
  ::QApplication::setCursorFlashTime(arg__1);
}
void QApplication_wrapper::setDoubleClickInterval(int arg__1) {
  ::QApplication::setDoubleClickInterval(arg__1);
}
void QApplication_wrapper::setFont(const QFont &arg__1, const char *className) {
  ::QApplication::setFont(arg__1, className);
}
void QApplication_wrapper::setKeyboardInputInterval(int arg__1) {
  ::QApplication::setKeyboardInputInterval(arg__1);
}
void QApplication_wrapper::setPalette(const QPalette &arg__1,
                                      const char *className) {
  ::QApplication::setPalette(arg__1, className);
}
void QApplication_wrapper::setStartDragDistance(int l) {
  ::QApplication::setStartDragDistance(l);
}
void QApplication_wrapper::setStartDragTime(int ms) {
  ::QApplication::setStartDragTime(ms);
}
void QApplication_wrapper::setStyle(QStyle *arg__1) {
  ::QApplication::setStyle(arg__1);
}
QStyle *QApplication_wrapper::setStyle(const QString &arg__1) {
  return ::QApplication::setStyle(arg__1);
}
void QApplication_wrapper::setStyleSheet(const QString &sheet) {
  ::QApplication::setStyleSheet(sheet);
}
void QApplication_wrapper::setWheelScrollLines(int arg__1) {
  ::QApplication::setWheelScrollLines(arg__1);
}
int QApplication_wrapper::startDragDistance() {
  return ::QApplication::startDragDistance();
}
int QApplication_wrapper::startDragTime() {
  return ::QApplication::startDragTime();
}
QStyle *QApplication_wrapper::style() { return ::QApplication::style(); }
QString QApplication_wrapper::styleSheet() const {
  return ::QApplication::styleSheet();
}
QWidget *QApplication_wrapper::topLevelAt(const QPoint &p) {
  return ::QApplication::topLevelAt(p);
}
QWidget *QApplication_wrapper::topLevelAt(int x, int y) {
  return ::QApplication::topLevelAt(x, y);
}
QList<QWidget *> QApplication_wrapper::topLevelWidgets() {
  return ::QApplication::topLevelWidgets();
}
QString QApplication_wrapper::tr(const char *s, const char *c, int n) {
  return ::QApplication::tr(s, c, n);
}
int QApplication_wrapper::wheelScrollLines() {
  return ::QApplication::wheelScrollLines();
}
QWidget *QApplication_wrapper::widgetAt(const QPoint &p) {
  return ::QApplication::widgetAt(p);
}
QWidget *QApplication_wrapper::widgetAt(int x, int y) {
  return ::QApplication::widgetAt(x, y);
}
QApplication_wrapper::~QApplication_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QApplication *fromPtr(void *ptr) {
  return reinterpret_cast<QApplication *>(ptr);
}
static QtDartBindings_wrappersNS::QApplication_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QApplication_wrapper *>(
      ptr);
}
extern "C" {
void c_QApplication_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QApplication_wrapper *>(
      cppObj);
}
void *c_QApplication__constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QApplication_wrapper();
  return reinterpret_cast<void *>(ptr);
}
// aboutQt()
void c_static_QApplication__aboutQt() {
  QtDartBindings_wrappersNS::QApplication_wrapper::aboutQt();
}
// activeModalWidget()
void *c_static_QApplication__activeModalWidget() {
  const auto &result =
      QtDartBindings_wrappersNS::QApplication_wrapper::activeModalWidget();
  return result;
}
// activePopupWidget()
void *c_static_QApplication__activePopupWidget() {
  const auto &result =
      QtDartBindings_wrappersNS::QApplication_wrapper::activePopupWidget();
  return result;
}
// activeWindow()
void *c_static_QApplication__activeWindow() {
  const auto &result =
      QtDartBindings_wrappersNS::QApplication_wrapper::activeWindow();
  return result;
}
// alert(QWidget * widget, int duration)
void c_static_QApplication__alert_QWidget_int(void *widget_, int duration) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  QtDartBindings_wrappersNS::QApplication_wrapper::alert(widget, duration);
}
// allWidgets()
void *c_static_QApplication__allWidgets() {
  const auto &result = new Dartagnan::ValueWrapper<QList<QWidget *>>{
      QtDartBindings_wrappersNS::QApplication_wrapper::allWidgets()};
  return result;
}
void c_QApplication__onApplicationDisplayNameChanged(void *thisObj,
                                                     void *contextQObject,
                                                     void *callback) {
  auto instance = reinterpret_cast<QApplication *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QApplication::applicationDisplayNameChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// autoSipEnabled() const
bool c_QApplication__autoSipEnabled(void *thisObj) {
  const auto &result = fromPtr(thisObj)->autoSipEnabled();
  return result;
}
// beep()
void c_static_QApplication__beep() {
  QtDartBindings_wrappersNS::QApplication_wrapper::beep();
}
// closeAllWindows()
void c_static_QApplication__closeAllWindows() {
  QtDartBindings_wrappersNS::QApplication_wrapper::closeAllWindows();
}
// cursorFlashTime()
int c_static_QApplication__cursorFlashTime() {
  const auto &result =
      QtDartBindings_wrappersNS::QApplication_wrapper::cursorFlashTime();
  return result;
}
// customEvent(QEvent * event)
void c_QApplication__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// doubleClickInterval()
int c_static_QApplication__doubleClickInterval() {
  const auto &result =
      QtDartBindings_wrappersNS::QApplication_wrapper::doubleClickInterval();
  return result;
}
// event(QEvent * arg__1)
bool c_QApplication__event_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  const auto &result = fromWrapperPtr(thisObj)->event_nocallback(arg__1);
  return result;
}
// eventFilter(QObject * watched, QEvent * event)
bool c_QApplication__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                                void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QApplication_wrapper *>(
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
int c_static_QApplication__exec() {
  const auto &result = QtDartBindings_wrappersNS::QApplication_wrapper::exec();
  return result;
}
// focusChanged(QWidget * old, QWidget * now)
void c_QApplication__focusChanged_QWidget_QWidget(void *thisObj, void *old_,
                                                  void *now_) {
  auto old = reinterpret_cast<QWidget *>(old_);
  auto now = reinterpret_cast<QWidget *>(now_);
  fromPtr(thisObj)->focusChanged(old, now);
}
void c_QApplication__onFocusChanged_QWidget_QWidget(void *thisObj,
                                                    void *contextQObject,
                                                    void *callback) {
  auto instance = reinterpret_cast<QApplication *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QApplication::focusChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QApplication__onFocusObjectChanged_QObject(void *thisObj,
                                                  void *contextQObject,
                                                  void *callback) {
  auto instance = reinterpret_cast<QApplication *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QApplication::focusObjectChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// focusWidget()
void *c_static_QApplication__focusWidget() {
  const auto &result =
      QtDartBindings_wrappersNS::QApplication_wrapper::focusWidget();
  return result;
}
void c_QApplication__onFocusWindowChanged_QWindow(void *thisObj,
                                                  void *contextQObject,
                                                  void *callback) {
  auto instance = reinterpret_cast<QApplication *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QApplication::focusWindowChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// font()
void *c_static_QApplication__font() {
  const auto &result = new Dartagnan::ValueWrapper<QFont>{
      QtDartBindings_wrappersNS::QApplication_wrapper::font()};
  return result;
}
// font(const QWidget * arg__1)
void *c_static_QApplication__fontForWidget_QWidget(void *arg__1_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  const auto &result = new Dartagnan::ValueWrapper<QFont>{
      QtDartBindings_wrappersNS::QApplication_wrapper::font(arg__1)};
  return result;
}
// font(const char * className)
void *c_static_QApplication__fontForClassName_char(const char *className) {
  const auto &result = new Dartagnan::ValueWrapper<QFont>{
      QtDartBindings_wrappersNS::QApplication_wrapper::font(className)};
  free((char *)className);
  return result;
}
void c_QApplication__onFontDatabaseChanged(void *thisObj, void *contextQObject,
                                           void *callback) {
  auto instance = reinterpret_cast<QApplication *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QApplication::fontDatabaseChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// keyboardInputInterval()
int c_static_QApplication__keyboardInputInterval() {
  const auto &result =
      QtDartBindings_wrappersNS::QApplication_wrapper::keyboardInputInterval();
  return result;
}
void c_QApplication__onLastWindowClosed(void *thisObj, void *contextQObject,
                                        void *callback) {
  auto instance = reinterpret_cast<QApplication *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QApplication::lastWindowClosed,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QApplication__onLayoutDirectionChanged_LayoutDirection(
    void *thisObj, void *contextQObject, void *callback) {
  auto instance = reinterpret_cast<QApplication *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QApplication::layoutDirectionChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// notify(QObject * arg__1, QEvent * arg__2)
bool c_QApplication__notify_QObject_QEvent(void *thisObj, void *arg__1_,
                                           void *arg__2_) {
  auto arg__1 = reinterpret_cast<QObject *>(arg__1_);
  auto arg__2 = reinterpret_cast<QEvent *>(arg__2_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QApplication_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->notify_nocallback(arg__1, arg__2);
    } else {
      return targetPtr->notify(arg__1, arg__2);
    }
  }();
  return result;
}
// palette(const QWidget * arg__1)
void *c_static_QApplication__palette_QWidget(void *arg__1_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  const auto &result = new Dartagnan::ValueWrapper<QPalette>{
      QtDartBindings_wrappersNS::QApplication_wrapper::palette(arg__1)};
  return result;
}
// palette(const char * className)
void *c_static_QApplication__palette_char(const char *className) {
  const auto &result = new Dartagnan::ValueWrapper<QPalette>{
      QtDartBindings_wrappersNS::QApplication_wrapper::palette(className)};
  free((char *)className);
  return result;
}
// setActiveWindow(QWidget * act)
void c_static_QApplication__setActiveWindow_QWidget(void *act_) {
  auto act = reinterpret_cast<QWidget *>(act_);
  QtDartBindings_wrappersNS::QApplication_wrapper::setActiveWindow(act);
}
// setAutoSipEnabled(const bool enabled)
void c_QApplication__setAutoSipEnabled_bool(void *thisObj, bool enabled) {
  fromPtr(thisObj)->setAutoSipEnabled(enabled);
}
// setCursorFlashTime(int arg__1)
void c_static_QApplication__setCursorFlashTime_int(int arg__1) {
  QtDartBindings_wrappersNS::QApplication_wrapper::setCursorFlashTime(arg__1);
}
// setDoubleClickInterval(int arg__1)
void c_static_QApplication__setDoubleClickInterval_int(int arg__1) {
  QtDartBindings_wrappersNS::QApplication_wrapper::setDoubleClickInterval(
      arg__1);
}
// setFont(const QFont & arg__1, const char * className)
void c_static_QApplication__setFont_QFont_char(void *arg__1_,
                                               const char *className) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QFont *>(arg__1_);
  QtDartBindings_wrappersNS::QApplication_wrapper::setFont(arg__1, className);
  free((char *)className);
}
// setKeyboardInputInterval(int arg__1)
void c_static_QApplication__setKeyboardInputInterval_int(int arg__1) {
  QtDartBindings_wrappersNS::QApplication_wrapper::setKeyboardInputInterval(
      arg__1);
}
// setPalette(const QPalette & arg__1, const char * className)
void c_static_QApplication__setPalette_QPalette_char(void *arg__1_,
                                                     const char *className) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QPalette *>(arg__1_);
  QtDartBindings_wrappersNS::QApplication_wrapper::setPalette(arg__1,
                                                              className);
  free((char *)className);
}
// setStartDragDistance(int l)
void c_static_QApplication__setStartDragDistance_int(int l) {
  QtDartBindings_wrappersNS::QApplication_wrapper::setStartDragDistance(l);
}
// setStartDragTime(int ms)
void c_static_QApplication__setStartDragTime_int(int ms) {
  QtDartBindings_wrappersNS::QApplication_wrapper::setStartDragTime(ms);
}
// setStyle(QStyle * arg__1)
void c_static_QApplication__setStyle_QStyle(void *arg__1_) {
  auto arg__1 = reinterpret_cast<QStyle *>(arg__1_);
  QtDartBindings_wrappersNS::QApplication_wrapper::setStyle(arg__1);
}
// setStyle(const QString & arg__1)
void *c_static_QApplication__setStyle_QString(const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  const auto &result =
      QtDartBindings_wrappersNS::QApplication_wrapper::setStyle(arg__1);
  free((char *)arg__1_);
  return result;
}
// setStyleSheet(const QString & sheet)
void c_QApplication__setStyleSheet_QString(void *thisObj, const char *sheet_) {
  const auto sheet = QString::fromUtf8(sheet_);
  fromPtr(thisObj)->setStyleSheet(sheet);
  free((char *)sheet_);
}
// setWheelScrollLines(int arg__1)
void c_static_QApplication__setWheelScrollLines_int(int arg__1) {
  QtDartBindings_wrappersNS::QApplication_wrapper::setWheelScrollLines(arg__1);
}
// startDragDistance()
int c_static_QApplication__startDragDistance() {
  const auto &result =
      QtDartBindings_wrappersNS::QApplication_wrapper::startDragDistance();
  return result;
}
// startDragTime()
int c_static_QApplication__startDragTime() {
  const auto &result =
      QtDartBindings_wrappersNS::QApplication_wrapper::startDragTime();
  return result;
}
// style()
void *c_static_QApplication__style() {
  const auto &result = QtDartBindings_wrappersNS::QApplication_wrapper::style();
  return result;
}
// styleSheet() const
void *c_QApplication__styleSheet(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->styleSheet()};
  return result;
}
// topLevelAt(const QPoint & p)
void *c_static_QApplication__topLevelWidgetAtPos_QPoint(void *p_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPoint *>(p_);
  const auto &result =
      QtDartBindings_wrappersNS::QApplication_wrapper::topLevelAt(p);
  return result;
}
// topLevelAt(int x, int y)
void *c_static_QApplication__topLevelWidgetAt_int_int(int x, int y) {
  const auto &result =
      QtDartBindings_wrappersNS::QApplication_wrapper::topLevelAt(x, y);
  return result;
}
// topLevelWidgets()
void *c_static_QApplication__topLevelWidgets() {
  const auto &result = new Dartagnan::ValueWrapper<QList<QWidget *>>{
      QtDartBindings_wrappersNS::QApplication_wrapper::topLevelWidgets()};
  return result;
}
// tr(const char * s, const char * c, int n)
void *c_static_QApplication__tr_char_char_int(const char *s, const char *c,
                                              int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QApplication_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
// wheelScrollLines()
int c_static_QApplication__wheelScrollLines() {
  const auto &result =
      QtDartBindings_wrappersNS::QApplication_wrapper::wheelScrollLines();
  return result;
}
// widgetAt(const QPoint & p)
void *c_static_QApplication__widgetAt_QPoint(void *p_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPoint *>(p_);
  const auto &result =
      QtDartBindings_wrappersNS::QApplication_wrapper::widgetAt(p);
  return result;
}
// widgetAt(int x, int y)
void *c_static_QApplication__widgetAt_int_int(int x, int y) {
  const auto &result =
      QtDartBindings_wrappersNS::QApplication_wrapper::widgetAt(x, y);
  return result;
}
void c_QApplication__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QApplication__registerVirtualMethodCallback(void *ptr, void *callback,
                                                   int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QApplication_wrapper::Callback_customEvent>(
        callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QApplication_wrapper::Callback_event>(
        callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QApplication_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 4558:
    wrapper->m_notifyCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QApplication_wrapper::Callback_notify>(
        callback);
    break;
  }
}
}
