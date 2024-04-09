#include "QApplication_wrapper.h"

#include <QDebug>

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

void QApplication_wrapper::aboutQt() {
  // tag=1000

  // tag=1004
  ::QApplication::aboutQt();
}
QWidget *QApplication_wrapper::activeModalWidget() {
  // tag=1000

  // tag=1004
  return ::QApplication::activeModalWidget();
}
QWidget *QApplication_wrapper::activePopupWidget() {
  // tag=1000

  // tag=1004
  return ::QApplication::activePopupWidget();
}
QWidget *QApplication_wrapper::activeWindow() {
  // tag=1000

  // tag=1004
  return ::QApplication::activeWindow();
}
void QApplication_wrapper::alert(QWidget *widget, int duration) {
  // tag=1000

  // tag=1004
  ::QApplication::alert(widget, duration);
}
QList<QWidget *> QApplication_wrapper::allWidgets() {
  // tag=1000

  // tag=1004
  return ::QApplication::allWidgets();
}
bool QApplication_wrapper::autoSipEnabled() const {
  // tag=1000

  // tag=1004
  return ::QApplication::autoSipEnabled();
}
void QApplication_wrapper::beep() {
  // tag=1000

  // tag=1004
  ::QApplication::beep();
}
void QApplication_wrapper::closeAllWindows() {
  // tag=1000

  // tag=1004
  ::QApplication::closeAllWindows();
}
int QApplication_wrapper::cursorFlashTime() {
  // tag=1000

  // tag=1004
  return ::QApplication::cursorFlashTime();
}
void QApplication_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QApplication::customEvent(event);
  }
}
// tag=1009
void QApplication_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QApplication::customEvent(event);
}
int QApplication_wrapper::doubleClickInterval() {
  // tag=1000

  // tag=1004
  return ::QApplication::doubleClickInterval();
}
bool QApplication_wrapper::event(QEvent *arg__1) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QApplication::event(arg__1);
  }
}
// tag=1009
bool QApplication_wrapper::event_nocallback(QEvent *arg__1) {
  // tag=1003
  return ::QApplication::event(arg__1);
}
bool QApplication_wrapper::eventFilter(QObject *watched, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    // tag=1002
    return ::QApplication::eventFilter(watched, event);
  }
}
// tag=1009
bool QApplication_wrapper::eventFilter_nocallback(QObject *watched,
                                                  QEvent *event) {
  // tag=1003
  return ::QApplication::eventFilter(watched, event);
}
int QApplication_wrapper::exec() {
  // tag=1000

  // tag=1004
  return ::QApplication::exec();
}
void QApplication_wrapper::focusChanged(QWidget *old, QWidget *now) {
  // tag=1000

  // tag=1004
  ::QApplication::focusChanged(old, now);
}
QWidget *QApplication_wrapper::focusWidget() {
  // tag=1000

  // tag=1004
  return ::QApplication::focusWidget();
}
QFont QApplication_wrapper::font() {
  // tag=1000

  // tag=1004
  return ::QApplication::font();
}
QFont QApplication_wrapper::font(const QWidget *arg__1) {
  // tag=1000

  // tag=1004
  return ::QApplication::font(arg__1);
}
QFont QApplication_wrapper::font(const char *className) {
  // tag=1000

  // tag=1004
  return ::QApplication::font(className);
}
int QApplication_wrapper::keyboardInputInterval() {
  // tag=1000

  // tag=1004
  return ::QApplication::keyboardInputInterval();
}
bool QApplication_wrapper::notify(QObject *arg__1, QEvent *arg__2) {
  // tag=1000
  if (m_notifyCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_notifyCallback(const_cast<void *>(thisPtr), arg__1, arg__2);
  } else {
    // tag=1002
    return ::QApplication::notify(arg__1, arg__2);
  }
}
// tag=1009
bool QApplication_wrapper::notify_nocallback(QObject *arg__1, QEvent *arg__2) {
  // tag=1003
  return ::QApplication::notify(arg__1, arg__2);
}
QPalette QApplication_wrapper::palette(const QWidget *arg__1) {
  // tag=1000

  // tag=1004
  return ::QApplication::palette(arg__1);
}
QPalette QApplication_wrapper::palette(const char *className) {
  // tag=1000

  // tag=1004
  return ::QApplication::palette(className);
}
void QApplication_wrapper::setActiveWindow(QWidget *act) {
  // tag=1000

  // tag=1004
  ::QApplication::setActiveWindow(act);
}
void QApplication_wrapper::setAutoSipEnabled(const bool enabled) {
  // tag=1000

  // tag=1004
  ::QApplication::setAutoSipEnabled(enabled);
}
void QApplication_wrapper::setCursorFlashTime(int arg__1) {
  // tag=1000

  // tag=1004
  ::QApplication::setCursorFlashTime(arg__1);
}
void QApplication_wrapper::setDoubleClickInterval(int arg__1) {
  // tag=1000

  // tag=1004
  ::QApplication::setDoubleClickInterval(arg__1);
}
void QApplication_wrapper::setFont(const QFont &arg__1, const char *className) {
  // tag=1000

  // tag=1004
  ::QApplication::setFont(arg__1, className);
}
void QApplication_wrapper::setKeyboardInputInterval(int arg__1) {
  // tag=1000

  // tag=1004
  ::QApplication::setKeyboardInputInterval(arg__1);
}
void QApplication_wrapper::setPalette(const QPalette &arg__1,
                                      const char *className) {
  // tag=1000

  // tag=1004
  ::QApplication::setPalette(arg__1, className);
}
void QApplication_wrapper::setStartDragDistance(int l) {
  // tag=1000

  // tag=1004
  ::QApplication::setStartDragDistance(l);
}
void QApplication_wrapper::setStartDragTime(int ms) {
  // tag=1000

  // tag=1004
  ::QApplication::setStartDragTime(ms);
}
void QApplication_wrapper::setStyle(QStyle *arg__1) {
  // tag=1000

  // tag=1004
  ::QApplication::setStyle(arg__1);
}
QStyle *QApplication_wrapper::setStyle(const QString &arg__1) {
  // tag=1000

  // tag=1004
  return ::QApplication::setStyle(arg__1);
}
void QApplication_wrapper::setStyleSheet(const QString &sheet) {
  // tag=1000

  // tag=1004
  ::QApplication::setStyleSheet(sheet);
}
void QApplication_wrapper::setWheelScrollLines(int arg__1) {
  // tag=1000

  // tag=1004
  ::QApplication::setWheelScrollLines(arg__1);
}
int QApplication_wrapper::startDragDistance() {
  // tag=1000

  // tag=1004
  return ::QApplication::startDragDistance();
}
int QApplication_wrapper::startDragTime() {
  // tag=1000

  // tag=1004
  return ::QApplication::startDragTime();
}
QStyle *QApplication_wrapper::style() {
  // tag=1000

  // tag=1004
  return ::QApplication::style();
}
QString QApplication_wrapper::styleSheet() const {
  // tag=1000

  // tag=1004
  return ::QApplication::styleSheet();
}
QWidget *QApplication_wrapper::topLevelAt(const QPoint &p) {
  // tag=1000

  // tag=1004
  return ::QApplication::topLevelAt(p);
}
QWidget *QApplication_wrapper::topLevelAt(int x, int y) {
  // tag=1000

  // tag=1004
  return ::QApplication::topLevelAt(x, y);
}
QList<QWidget *> QApplication_wrapper::topLevelWidgets() {
  // tag=1000

  // tag=1004
  return ::QApplication::topLevelWidgets();
}
QString QApplication_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QApplication::tr(s, c, n);
}
int QApplication_wrapper::wheelScrollLines() {
  // tag=1000

  // tag=1004
  return ::QApplication::wheelScrollLines();
}
QWidget *QApplication_wrapper::widgetAt(const QPoint &p) {
  // tag=1000

  // tag=1004
  return ::QApplication::widgetAt(p);
}
QWidget *QApplication_wrapper::widgetAt(int x, int y) {
  // tag=1000

  // tag=1004
  return ::QApplication::widgetAt(x, y);
}

// tag=1005
QApplication_wrapper::~QApplication_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QApplication *fromPtr(void *ptr) {
  return reinterpret_cast<QApplication *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QApplication_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QApplication_wrapper *>(
      ptr);
}
extern "C" {

// tag=1049
void c_QApplication_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QApplication_wrapper *>(
      cppObj);
}
void *c_QApplication__constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QApplication_wrapper();
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// aboutQt()
void c_static_QApplication__aboutQt() {
  // tag=1068
  QtDartBindings_wrappersNS::QApplication_wrapper::aboutQt();
}

// tag=1050
// activeModalWidget()
void *c_static_QApplication__activeModalWidget() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QApplication_wrapper::activeModalWidget();
}

// tag=1050
// activePopupWidget()
void *c_static_QApplication__activePopupWidget() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QApplication_wrapper::activePopupWidget();
}

// tag=1050
// activeWindow()
void *c_static_QApplication__activeWindow() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QApplication_wrapper::activeWindow();
}

// tag=1050
// alert(QWidget * widget, int duration)
void c_static_QApplication__alert_QWidget_int(void *widget_, int duration) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  // tag=1068
  QtDartBindings_wrappersNS::QApplication_wrapper::alert(widget, duration);
}

// tag=1050
// allWidgets()
void *c_static_QApplication__allWidgets() {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QWidget *>>{
          QtDartBindings_wrappersNS::QApplication_wrapper::allWidgets()};
}

// tag=1079
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

// tag=1050
// autoSipEnabled() const
bool c_QApplication__autoSipEnabled(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->autoSipEnabled();
}

// tag=1050
// beep()
void c_static_QApplication__beep() {
  // tag=1068
  QtDartBindings_wrappersNS::QApplication_wrapper::beep();
}

// tag=1050
// closeAllWindows()
void c_static_QApplication__closeAllWindows() {
  // tag=1068
  QtDartBindings_wrappersNS::QApplication_wrapper::closeAllWindows();
}

// tag=1050
// cursorFlashTime()
int c_static_QApplication__cursorFlashTime() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QApplication_wrapper::cursorFlashTime();
}

// tag=1050
// customEvent(QEvent * event)
void c_QApplication__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// doubleClickInterval()
int c_static_QApplication__doubleClickInterval() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QApplication_wrapper::doubleClickInterval();
}

// tag=1050
// event(QEvent * arg__1)
bool c_QApplication__event_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->event_nocallback(arg__1);
}

// tag=1050
// eventFilter(QObject * watched, QEvent * event)
bool c_QApplication__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                                void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
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
}

// tag=1050
// exec()
int c_static_QApplication__exec() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QApplication_wrapper::exec();
}

// tag=1050
// focusChanged(QWidget * old, QWidget * now)
void c_QApplication__focusChanged_QWidget_QWidget(void *thisObj, void *old_,
                                                  void *now_) {
  auto old = reinterpret_cast<QWidget *>(old_);
  auto now = reinterpret_cast<QWidget *>(now_);
  // tag=1010
  fromPtr(thisObj)->focusChanged(old, now);
}

// tag=1079
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

// tag=1079
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

// tag=1050
// focusWidget()
void *c_static_QApplication__focusWidget() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QApplication_wrapper::focusWidget();
}

// tag=1079
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

// tag=1050
// font()
void *c_static_QApplication__font() {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QFont>{
          QtDartBindings_wrappersNS::QApplication_wrapper::font()};
}

// tag=1050
// font(const QWidget * arg__1)
void *c_static_QApplication__fontForWidget_QWidget(void *arg__1_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QFont>{
          QtDartBindings_wrappersNS::QApplication_wrapper::font(arg__1)};
}

// tag=1050
// font(const char * className)
void *c_static_QApplication__fontForClassName_char(const char *className) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QFont>{
          QtDartBindings_wrappersNS::QApplication_wrapper::font(className)};
}

// tag=1079
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

// tag=1050
// keyboardInputInterval()
int c_static_QApplication__keyboardInputInterval() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QApplication_wrapper::keyboardInputInterval();
}

// tag=1079
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

// tag=1079
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

// tag=1050
// notify(QObject * arg__1, QEvent * arg__2)
bool c_QApplication__notify_QObject_QEvent(void *thisObj, void *arg__1_,
                                           void *arg__2_) {
  auto arg__1 = reinterpret_cast<QObject *>(arg__1_);
  auto arg__2 = reinterpret_cast<QEvent *>(arg__2_);
  return
      // tag=1016
      [&] {
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
}

// tag=1050
// palette(const QWidget * arg__1)
void *c_static_QApplication__palette_QWidget(void *arg__1_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QPalette>{
          QtDartBindings_wrappersNS::QApplication_wrapper::palette(arg__1)};
}

// tag=1050
// palette(const char * className)
void *c_static_QApplication__palette_char(const char *className) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QPalette>{
          QtDartBindings_wrappersNS::QApplication_wrapper::palette(className)};
}

// tag=1050
// setActiveWindow(QWidget * act)
void c_static_QApplication__setActiveWindow_QWidget(void *act_) {
  auto act = reinterpret_cast<QWidget *>(act_);
  // tag=1068
  QtDartBindings_wrappersNS::QApplication_wrapper::setActiveWindow(act);
}

// tag=1050
// setAutoSipEnabled(const bool enabled)
void c_QApplication__setAutoSipEnabled_bool(void *thisObj, bool enabled) {
  // tag=1010
  fromPtr(thisObj)->setAutoSipEnabled(enabled);
}

// tag=1050
// setCursorFlashTime(int arg__1)
void c_static_QApplication__setCursorFlashTime_int(int arg__1) {
  // tag=1068
  QtDartBindings_wrappersNS::QApplication_wrapper::setCursorFlashTime(arg__1);
}

// tag=1050
// setDoubleClickInterval(int arg__1)
void c_static_QApplication__setDoubleClickInterval_int(int arg__1) {
  // tag=1068
  QtDartBindings_wrappersNS::QApplication_wrapper::setDoubleClickInterval(
      arg__1);
}

// tag=1050
// setFont(const QFont & arg__1, const char * className)
void c_static_QApplication__setFont_QFont_char(void *arg__1_,
                                               const char *className) {
  auto &arg__1 = *reinterpret_cast<QFont *>(arg__1_);
  // tag=1068
  QtDartBindings_wrappersNS::QApplication_wrapper::setFont(arg__1, className);
}

// tag=1050
// setKeyboardInputInterval(int arg__1)
void c_static_QApplication__setKeyboardInputInterval_int(int arg__1) {
  // tag=1068
  QtDartBindings_wrappersNS::QApplication_wrapper::setKeyboardInputInterval(
      arg__1);
}

// tag=1050
// setPalette(const QPalette & arg__1, const char * className)
void c_static_QApplication__setPalette_QPalette_char(void *arg__1_,
                                                     const char *className) {
  auto &arg__1 = *reinterpret_cast<QPalette *>(arg__1_);
  // tag=1068
  QtDartBindings_wrappersNS::QApplication_wrapper::setPalette(arg__1,
                                                              className);
}

// tag=1050
// setStartDragDistance(int l)
void c_static_QApplication__setStartDragDistance_int(int l) {
  // tag=1068
  QtDartBindings_wrappersNS::QApplication_wrapper::setStartDragDistance(l);
}

// tag=1050
// setStartDragTime(int ms)
void c_static_QApplication__setStartDragTime_int(int ms) {
  // tag=1068
  QtDartBindings_wrappersNS::QApplication_wrapper::setStartDragTime(ms);
}

// tag=1050
// setStyle(QStyle * arg__1)
void c_static_QApplication__setStyle_QStyle(void *arg__1_) {
  auto arg__1 = reinterpret_cast<QStyle *>(arg__1_);
  // tag=1068
  QtDartBindings_wrappersNS::QApplication_wrapper::setStyle(arg__1);
}

// tag=1050
// setStyle(const QString & arg__1)
void *c_static_QApplication__setStyle_QString(const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  return
      // tag=1068
      QtDartBindings_wrappersNS::QApplication_wrapper::setStyle(arg__1);
}

// tag=1050
// setStyleSheet(const QString & sheet)
void c_QApplication__setStyleSheet_QString(void *thisObj, const char *sheet_) {
  const auto sheet = QString::fromUtf8(sheet_);
  // tag=1010
  fromPtr(thisObj)->setStyleSheet(sheet);
}

// tag=1050
// setWheelScrollLines(int arg__1)
void c_static_QApplication__setWheelScrollLines_int(int arg__1) {
  // tag=1068
  QtDartBindings_wrappersNS::QApplication_wrapper::setWheelScrollLines(arg__1);
}

// tag=1050
// startDragDistance()
int c_static_QApplication__startDragDistance() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QApplication_wrapper::startDragDistance();
}

// tag=1050
// startDragTime()
int c_static_QApplication__startDragTime() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QApplication_wrapper::startDragTime();
}

// tag=1050
// style()
void *c_static_QApplication__style() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QApplication_wrapper::style();
}

// tag=1050
// styleSheet() const
void *c_QApplication__styleSheet(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->styleSheet()};
}

// tag=1050
// topLevelAt(const QPoint & p)
void *c_static_QApplication__topLevelWidgetAtPos_QPoint(void *p_) {
  auto &p = *reinterpret_cast<QPoint *>(p_);
  return
      // tag=1068
      QtDartBindings_wrappersNS::QApplication_wrapper::topLevelAt(p);
}

// tag=1050
// topLevelAt(int x, int y)
void *c_static_QApplication__topLevelWidgetAt_int_int(int x, int y) {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QApplication_wrapper::topLevelAt(x, y);
}

// tag=1050
// topLevelWidgets()
void *c_static_QApplication__topLevelWidgets() {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QWidget *>>{
          QtDartBindings_wrappersNS::QApplication_wrapper::topLevelWidgets()};
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QApplication__tr_char_char_int(const char *s, const char *c,
                                              int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QApplication_wrapper::tr(s, c, n)};
}

// tag=1050
// wheelScrollLines()
int c_static_QApplication__wheelScrollLines() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QApplication_wrapper::wheelScrollLines();
}

// tag=1050
// widgetAt(const QPoint & p)
void *c_static_QApplication__widgetAt_QPoint(void *p_) {
  auto &p = *reinterpret_cast<QPoint *>(p_);
  return
      // tag=1068
      QtDartBindings_wrappersNS::QApplication_wrapper::widgetAt(p);
}

// tag=1050
// widgetAt(int x, int y)
void *c_static_QApplication__widgetAt_int_int(int x, int y) {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QApplication_wrapper::widgetAt(x, y);
}
void c_QApplication__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QApplication__registerVirtualMethodCallback(void *ptr, void *callback,
                                                   int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 944:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QApplication_wrapper::Callback_customEvent>(
        callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QApplication_wrapper::Callback_event>(
        callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QApplication_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 4539:
    wrapper->m_notifyCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QApplication_wrapper::Callback_notify>(
        callback);
    break;
  }
}
}
