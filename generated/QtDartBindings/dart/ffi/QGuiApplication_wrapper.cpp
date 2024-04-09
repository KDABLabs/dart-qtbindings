#include "QGuiApplication_wrapper.h"

#include <QDebug>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
QList<QWindow *> QGuiApplication_wrapper::allWindows() {
  // tag=1000

  // tag=1004
  return ::QGuiApplication::allWindows();
}
QString QGuiApplication_wrapper::applicationDisplayName() {
  // tag=1000

  // tag=1004
  return ::QGuiApplication::applicationDisplayName();
}
void QGuiApplication_wrapper::applicationDisplayNameChanged() {
  // tag=1000

  // tag=1004
  ::QGuiApplication::applicationDisplayNameChanged();
}
void QGuiApplication_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QGuiApplication::customEvent(event);
  }
}
// tag=1009
void QGuiApplication_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QGuiApplication::customEvent(event);
}
QString QGuiApplication_wrapper::desktopFileName() {
  // tag=1000

  // tag=1004
  return ::QGuiApplication::desktopFileName();
}
bool QGuiApplication_wrapper::desktopSettingsAware() {
  // tag=1000

  // tag=1004
  return ::QGuiApplication::desktopSettingsAware();
}
qreal QGuiApplication_wrapper::devicePixelRatio() const {
  // tag=1000

  // tag=1004
  return ::QGuiApplication::devicePixelRatio();
}
bool QGuiApplication_wrapper::event(QEvent *arg__1) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QGuiApplication::event(arg__1);
  }
}
// tag=1009
bool QGuiApplication_wrapper::event_nocallback(QEvent *arg__1) {
  // tag=1003
  return ::QGuiApplication::event(arg__1);
}
bool QGuiApplication_wrapper::eventFilter(QObject *watched, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    // tag=1002
    return ::QGuiApplication::eventFilter(watched, event);
  }
}
// tag=1009
bool QGuiApplication_wrapper::eventFilter_nocallback(QObject *watched,
                                                     QEvent *event) {
  // tag=1003
  return ::QGuiApplication::eventFilter(watched, event);
}
int QGuiApplication_wrapper::exec() {
  // tag=1000

  // tag=1004
  return ::QGuiApplication::exec();
}
QObject *QGuiApplication_wrapper::focusObject() {
  // tag=1000

  // tag=1004
  return ::QGuiApplication::focusObject();
}
void QGuiApplication_wrapper::focusObjectChanged(QObject *focusObject) {
  // tag=1000

  // tag=1004
  ::QGuiApplication::focusObjectChanged(focusObject);
}
QWindow *QGuiApplication_wrapper::focusWindow() {
  // tag=1000

  // tag=1004
  return ::QGuiApplication::focusWindow();
}
void QGuiApplication_wrapper::focusWindowChanged(QWindow *focusWindow) {
  // tag=1000

  // tag=1004
  ::QGuiApplication::focusWindowChanged(focusWindow);
}
QFont QGuiApplication_wrapper::font() {
  // tag=1000

  // tag=1004
  return ::QGuiApplication::font();
}
void QGuiApplication_wrapper::fontDatabaseChanged() {
  // tag=1000

  // tag=1004
  ::QGuiApplication::fontDatabaseChanged();
}
bool QGuiApplication_wrapper::isLeftToRight() {
  // tag=1000

  // tag=1004
  return ::QGuiApplication::isLeftToRight();
}
bool QGuiApplication_wrapper::isRightToLeft() {
  // tag=1000

  // tag=1004
  return ::QGuiApplication::isRightToLeft();
}
bool QGuiApplication_wrapper::isSavingSession() const {
  // tag=1000

  // tag=1004
  return ::QGuiApplication::isSavingSession();
}
bool QGuiApplication_wrapper::isSessionRestored() const {
  // tag=1000

  // tag=1004
  return ::QGuiApplication::isSessionRestored();
}
QFlags<Qt::KeyboardModifier> QGuiApplication_wrapper::keyboardModifiers() {
  // tag=1000

  // tag=1004
  return ::QGuiApplication::keyboardModifiers();
}
void QGuiApplication_wrapper::lastWindowClosed() {
  // tag=1000

  // tag=1004
  ::QGuiApplication::lastWindowClosed();
}
Qt::LayoutDirection QGuiApplication_wrapper::layoutDirection() {
  // tag=1000

  // tag=1004
  return ::QGuiApplication::layoutDirection();
}
void QGuiApplication_wrapper::layoutDirectionChanged(
    Qt::LayoutDirection direction) {
  // tag=1000

  // tag=1004
  ::QGuiApplication::layoutDirectionChanged(direction);
}
QWindow *QGuiApplication_wrapper::modalWindow() {
  // tag=1000

  // tag=1004
  return ::QGuiApplication::modalWindow();
}
bool QGuiApplication_wrapper::notify(QObject *arg__1, QEvent *arg__2) {
  // tag=1000
  if (m_notifyCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_notifyCallback(const_cast<void *>(thisPtr), arg__1, arg__2);
  } else {
    // tag=1002
    return ::QGuiApplication::notify(arg__1, arg__2);
  }
}
// tag=1009
bool QGuiApplication_wrapper::notify_nocallback(QObject *arg__1,
                                                QEvent *arg__2) {
  // tag=1003
  return ::QGuiApplication::notify(arg__1, arg__2);
}
QPalette QGuiApplication_wrapper::palette() {
  // tag=1000

  // tag=1004
  return ::QGuiApplication::palette();
}
QString QGuiApplication_wrapper::platformName() {
  // tag=1000

  // tag=1004
  return ::QGuiApplication::platformName();
}
QFlags<Qt::KeyboardModifier> QGuiApplication_wrapper::queryKeyboardModifiers() {
  // tag=1000

  // tag=1004
  return ::QGuiApplication::queryKeyboardModifiers();
}
bool QGuiApplication_wrapper::quitOnLastWindowClosed() {
  // tag=1000

  // tag=1004
  return ::QGuiApplication::quitOnLastWindowClosed();
}
void QGuiApplication_wrapper::restoreOverrideCursor() {
  // tag=1000

  // tag=1004
  ::QGuiApplication::restoreOverrideCursor();
}
QString QGuiApplication_wrapper::sessionId() const {
  // tag=1000

  // tag=1004
  return ::QGuiApplication::sessionId();
}
QString QGuiApplication_wrapper::sessionKey() const {
  // tag=1000

  // tag=1004
  return ::QGuiApplication::sessionKey();
}
void QGuiApplication_wrapper::setApplicationDisplayName(const QString &name) {
  // tag=1000

  // tag=1004
  ::QGuiApplication::setApplicationDisplayName(name);
}
void QGuiApplication_wrapper::setDesktopFileName(const QString &name) {
  // tag=1000

  // tag=1004
  ::QGuiApplication::setDesktopFileName(name);
}
void QGuiApplication_wrapper::setDesktopSettingsAware(bool on) {
  // tag=1000

  // tag=1004
  ::QGuiApplication::setDesktopSettingsAware(on);
}
void QGuiApplication_wrapper::setFont(const QFont &arg__1) {
  // tag=1000

  // tag=1004
  ::QGuiApplication::setFont(arg__1);
}
void QGuiApplication_wrapper::setLayoutDirection(
    Qt::LayoutDirection direction) {
  // tag=1000

  // tag=1004
  ::QGuiApplication::setLayoutDirection(direction);
}
void QGuiApplication_wrapper::setPalette(const QPalette &pal) {
  // tag=1000

  // tag=1004
  ::QGuiApplication::setPalette(pal);
}
void QGuiApplication_wrapper::setQuitOnLastWindowClosed(bool quit) {
  // tag=1000

  // tag=1004
  ::QGuiApplication::setQuitOnLastWindowClosed(quit);
}
void QGuiApplication_wrapper::setWindowIcon(const QIcon &icon) {
  // tag=1000

  // tag=1004
  ::QGuiApplication::setWindowIcon(icon);
}
void QGuiApplication_wrapper::sync() {
  // tag=1000

  // tag=1004
  ::QGuiApplication::sync();
}
QWindow *QGuiApplication_wrapper::topLevelAt(const QPoint &pos) {
  // tag=1000

  // tag=1004
  return ::QGuiApplication::topLevelAt(pos);
}
QList<QWindow *> QGuiApplication_wrapper::topLevelWindows() {
  // tag=1000

  // tag=1004
  return ::QGuiApplication::topLevelWindows();
}
QString QGuiApplication_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QGuiApplication::tr(s, c, n);
}
QIcon QGuiApplication_wrapper::windowIcon() {
  // tag=1000

  // tag=1004
  return ::QGuiApplication::windowIcon();
}

// tag=1005
QGuiApplication_wrapper::~QGuiApplication_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QGuiApplication *fromPtr(void *ptr) {
  return reinterpret_cast<QGuiApplication *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QGuiApplication_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QGuiApplication_wrapper *>(
      ptr);
}
extern "C" {

// tag=1049
void c_QGuiApplication_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QGuiApplication_wrapper *>(
      cppObj);
}
// tag=1050
// allWindows()
void *c_static_QGuiApplication__allWindows() {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QWindow *>>{
          QtDartBindings_wrappersNS::QGuiApplication_wrapper::allWindows()};
}

// tag=1050
// applicationDisplayName()
void *c_static_QGuiApplication__applicationDisplayName() {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QGuiApplication_wrapper::
              applicationDisplayName()};
}

// tag=1050
// applicationDisplayNameChanged()
void c_QGuiApplication__applicationDisplayNameChanged(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->applicationDisplayNameChanged();
}

// tag=1079
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

// tag=1079
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

// tag=1079
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

// tag=1050
// customEvent(QEvent * event)
void c_QGuiApplication__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// desktopFileName()
void *c_static_QGuiApplication__desktopFileName() {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QGuiApplication_wrapper::
              desktopFileName()};
}

// tag=1050
// desktopSettingsAware()
bool c_static_QGuiApplication__desktopSettingsAware() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QGuiApplication_wrapper::
          desktopSettingsAware();
}

// tag=1050
// devicePixelRatio() const
qreal c_QGuiApplication__devicePixelRatio(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->devicePixelRatio();
}

// tag=1050
// event(QEvent * arg__1)
bool c_QGuiApplication__event_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->event_nocallback(arg__1);
}

// tag=1050
// eventFilter(QObject * watched, QEvent * event)
bool c_QGuiApplication__eventFilter_QObject_QEvent(void *thisObj,
                                                   void *watched_,
                                                   void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
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
}

// tag=1050
// exec()
int c_static_QGuiApplication__exec() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QGuiApplication_wrapper::exec();
}

// tag=1050
// focusObject()
void *c_static_QGuiApplication__focusObject() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QGuiApplication_wrapper::focusObject();
}

// tag=1050
// focusObjectChanged(QObject * focusObject)
void c_QGuiApplication__focusObjectChanged_QObject(void *thisObj,
                                                   void *focusObject_) {
  auto focusObject = reinterpret_cast<QObject *>(focusObject_);
  // tag=1010
  fromPtr(thisObj)->focusObjectChanged(focusObject);
}

// tag=1079
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

// tag=1050
// focusWindow()
void *c_static_QGuiApplication__focusWindow() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QGuiApplication_wrapper::focusWindow();
}

// tag=1050
// focusWindowChanged(QWindow * focusWindow)
void c_QGuiApplication__focusWindowChanged_QWindow(void *thisObj,
                                                   void *focusWindow_) {
  auto focusWindow = reinterpret_cast<QWindow *>(focusWindow_);
  // tag=1010
  fromPtr(thisObj)->focusWindowChanged(focusWindow);
}

// tag=1079
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

// tag=1050
// font()
void *c_static_QGuiApplication__font() {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QFont>{
          QtDartBindings_wrappersNS::QGuiApplication_wrapper::font()};
}

// tag=1050
// fontDatabaseChanged()
void c_QGuiApplication__fontDatabaseChanged(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->fontDatabaseChanged();
}

// tag=1079
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

// tag=1050
// isLeftToRight()
bool c_static_QGuiApplication__isLeftToRight() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QGuiApplication_wrapper::isLeftToRight();
}

// tag=1050
// isRightToLeft()
bool c_static_QGuiApplication__isRightToLeft() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QGuiApplication_wrapper::isRightToLeft();
}

// tag=1050
// isSavingSession() const
bool c_QGuiApplication__isSavingSession(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isSavingSession();
}

// tag=1050
// isSessionRestored() const
bool c_QGuiApplication__isSessionRestored(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isSessionRestored();
}

// tag=1050
// keyboardModifiers()
int c_static_QGuiApplication__keyboardModifiers() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QGuiApplication_wrapper::keyboardModifiers();
}

// tag=1050
// lastWindowClosed()
void c_QGuiApplication__lastWindowClosed(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->lastWindowClosed();
}

// tag=1079
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

// tag=1050
// layoutDirection()
int c_static_QGuiApplication__layoutDirection() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QGuiApplication_wrapper::layoutDirection();
}

// tag=1050
// layoutDirectionChanged(Qt::LayoutDirection direction)
void c_QGuiApplication__layoutDirectionChanged_LayoutDirection(void *thisObj,
                                                               int direction) {
  // tag=1010
  fromPtr(thisObj)->layoutDirectionChanged(
      static_cast<Qt::LayoutDirection>(direction));
}

// tag=1079
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

// tag=1050
// modalWindow()
void *c_static_QGuiApplication__modalWindow() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QGuiApplication_wrapper::modalWindow();
}

// tag=1050
// notify(QObject * arg__1, QEvent * arg__2)
bool c_QGuiApplication__notify_QObject_QEvent(void *thisObj, void *arg__1_,
                                              void *arg__2_) {
  auto arg__1 = reinterpret_cast<QObject *>(arg__1_);
  auto arg__2 = reinterpret_cast<QEvent *>(arg__2_);
  return
      // tag=1016
      [&] {
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
}

// tag=1079
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

// tag=1079
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

// tag=1050
// palette()
void *c_static_QGuiApplication__palette() {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QPalette>{
          QtDartBindings_wrappersNS::QGuiApplication_wrapper::palette()};
}

// tag=1050
// platformName()
void *c_static_QGuiApplication__platformName() {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QGuiApplication_wrapper::platformName()};
}

// tag=1050
// queryKeyboardModifiers()
int c_static_QGuiApplication__queryKeyboardModifiers() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QGuiApplication_wrapper::
          queryKeyboardModifiers();
}

// tag=1050
// quitOnLastWindowClosed()
bool c_static_QGuiApplication__quitOnLastWindowClosed() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QGuiApplication_wrapper::
          quitOnLastWindowClosed();
}

// tag=1050
// restoreOverrideCursor()
void c_static_QGuiApplication__restoreOverrideCursor() {
  // tag=1068
  QtDartBindings_wrappersNS::QGuiApplication_wrapper::restoreOverrideCursor();
}

// tag=1050
// sessionId() const
void *c_QGuiApplication__sessionId(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->sessionId()};
}

// tag=1050
// sessionKey() const
void *c_QGuiApplication__sessionKey(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->sessionKey()};
}

// tag=1050
// setApplicationDisplayName(const QString & name)
void c_static_QGuiApplication__setApplicationDisplayName_QString(
    const char *name_) {
  const auto name = QString::fromUtf8(name_);
  // tag=1068
  QtDartBindings_wrappersNS::QGuiApplication_wrapper::setApplicationDisplayName(
      name);
}

// tag=1050
// setDesktopFileName(const QString & name)
void c_static_QGuiApplication__setDesktopFileName_QString(const char *name_) {
  const auto name = QString::fromUtf8(name_);
  // tag=1068
  QtDartBindings_wrappersNS::QGuiApplication_wrapper::setDesktopFileName(name);
}

// tag=1050
// setDesktopSettingsAware(bool on)
void c_static_QGuiApplication__setDesktopSettingsAware_bool(bool on) {
  // tag=1068
  QtDartBindings_wrappersNS::QGuiApplication_wrapper::setDesktopSettingsAware(
      on);
}

// tag=1050
// setFont(const QFont & arg__1)
void c_static_QGuiApplication__setFont_QFont(void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QFont *>(arg__1_);
  // tag=1068
  QtDartBindings_wrappersNS::QGuiApplication_wrapper::setFont(arg__1);
}

// tag=1050
// setLayoutDirection(Qt::LayoutDirection direction)
void c_static_QGuiApplication__setLayoutDirection_LayoutDirection(
    int direction) {
  // tag=1068
  QtDartBindings_wrappersNS::QGuiApplication_wrapper::setLayoutDirection(
      static_cast<Qt::LayoutDirection>(direction));
}

// tag=1050
// setPalette(const QPalette & pal)
void c_static_QGuiApplication__setPalette_QPalette(void *pal_) {
  auto &pal = *reinterpret_cast<QPalette *>(pal_);
  // tag=1068
  QtDartBindings_wrappersNS::QGuiApplication_wrapper::setPalette(pal);
}

// tag=1050
// setQuitOnLastWindowClosed(bool quit)
void c_static_QGuiApplication__setQuitOnLastWindowClosed_bool(bool quit) {
  // tag=1068
  QtDartBindings_wrappersNS::QGuiApplication_wrapper::setQuitOnLastWindowClosed(
      quit);
}

// tag=1050
// setWindowIcon(const QIcon & icon)
void c_static_QGuiApplication__setWindowIcon_QIcon(void *icon_) {
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  // tag=1068
  QtDartBindings_wrappersNS::QGuiApplication_wrapper::setWindowIcon(icon);
}

// tag=1050
// sync()
void c_static_QGuiApplication__sync() {
  // tag=1068
  QtDartBindings_wrappersNS::QGuiApplication_wrapper::sync();
}

// tag=1050
// topLevelAt(const QPoint & pos)
void *c_static_QGuiApplication__topLevelWindowAtPos_QPoint(void *pos_) {
  auto &pos = *reinterpret_cast<QPoint *>(pos_);
  return
      // tag=1068
      QtDartBindings_wrappersNS::QGuiApplication_wrapper::topLevelAt(pos);
}

// tag=1050
// topLevelWindows()
void *c_static_QGuiApplication__topLevelWindows() {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QWindow *>>{
          QtDartBindings_wrappersNS::QGuiApplication_wrapper::
              topLevelWindows()};
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QGuiApplication__tr_char_char_int(const char *s, const char *c,
                                                 int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QGuiApplication_wrapper::tr(s, c, n)};
}

// tag=1050
// windowIcon()
void *c_static_QGuiApplication__windowIcon() {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QIcon>{
          QtDartBindings_wrappersNS::QGuiApplication_wrapper::windowIcon()};
}
void c_QGuiApplication__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QGuiApplication__registerVirtualMethodCallback(void *ptr, void *callback,
                                                      int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 944:
    wrapper->m_customEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QGuiApplication_wrapper::
                             Callback_customEvent>(callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGuiApplication_wrapper::Callback_event>(
        callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QGuiApplication_wrapper::
                             Callback_eventFilter>(callback);
    break;
  case 4539:
    wrapper->m_notifyCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGuiApplication_wrapper::Callback_notify>(
        callback);
    break;
  }
}
}
