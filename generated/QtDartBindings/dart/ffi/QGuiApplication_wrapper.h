
// tag=1040
#include "QtDartBindings_exports.h"
#include <qcoreapplication.h>
#include <qcoreevent.h>
#include <qfont.h>
#include <qguiapplication.h>
#include <qicon.h>
#include <qlist.h>
#include <qobject.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qstring.h>
#include <qwindow.h>

namespace QtDartBindings_wrappersNS {
// tag=1017
class QGuiApplication_wrapper : public ::QGuiApplication {
public:
  ~QGuiApplication_wrapper();
  // tag=1041
  static QList<QWindow *> allWindows();
  // tag=1041
  static QString applicationDisplayName();
  // tag=1041
  void applicationDisplayNameChanged();
  // tag=1041
  virtual void customEvent(QEvent *event);
  // tag=1008
  virtual void customEvent_nocallback(QEvent *event);
  // tag=1041
  static QString desktopFileName();
  // tag=1041
  static bool desktopSettingsAware();
  // tag=1041
  qreal devicePixelRatio() const;
  // tag=1041
  virtual bool event(QEvent *arg__1);
  // tag=1008
  virtual bool event_nocallback(QEvent *arg__1);
  // tag=1041
  virtual bool eventFilter(QObject *watched, QEvent *event);
  // tag=1008
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  // tag=1041
  static int exec();
  // tag=1041
  static QObject *focusObject();
  // tag=1041
  void focusObjectChanged(QObject *focusObject);
  // tag=1041
  static QWindow *focusWindow();
  // tag=1041
  void focusWindowChanged(QWindow *focusWindow);
  // tag=1041
  static QFont font();
  // tag=1041
  void fontDatabaseChanged();
  // tag=1041
  static bool isLeftToRight();
  // tag=1041
  static bool isRightToLeft();
  // tag=1041
  bool isSavingSession() const;
  // tag=1041
  bool isSessionRestored() const;
  // tag=1041
  static QFlags<Qt::KeyboardModifier> keyboardModifiers();
  // tag=1041
  void lastWindowClosed();
  // tag=1041
  static Qt::LayoutDirection layoutDirection();
  // tag=1041
  void layoutDirectionChanged(Qt::LayoutDirection direction);
  // tag=1041
  static QWindow *modalWindow();
  // tag=1041
  virtual bool notify(QObject *arg__1, QEvent *arg__2);
  // tag=1008
  virtual bool notify_nocallback(QObject *arg__1, QEvent *arg__2);
  // tag=1041
  static QPalette palette();
  // tag=1041
  static QString platformName();
  // tag=1041
  static QFlags<Qt::KeyboardModifier> queryKeyboardModifiers();
  // tag=1041
  static bool quitOnLastWindowClosed();
  // tag=1041
  static void restoreOverrideCursor();
  // tag=1041
  QString sessionId() const;
  // tag=1041
  QString sessionKey() const;
  // tag=1041
  static void setApplicationDisplayName(const QString &name);
  // tag=1041
  static void setDesktopFileName(const QString &name);
  // tag=1041
  static void setDesktopSettingsAware(bool on);
  // tag=1041
  static void setFont(const QFont &arg__1);
  // tag=1041
  static void setLayoutDirection(Qt::LayoutDirection direction);
  // tag=1041
  static void setPalette(const QPalette &pal);
  // tag=1041
  static void setQuitOnLastWindowClosed(bool quit);
  // tag=1041
  static void setWindowIcon(const QIcon &icon);
  // tag=1041
  static void sync();
  // tag=1041
  static QWindow *topLevelAt(const QPoint &pos);
  // tag=1041
  static QList<QWindow *> topLevelWindows();
  // tag=1041
  static QString tr(const char *s, const char *c, int n);
  // tag=1041
  static QIcon windowIcon();
  // tag=1042
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_event)(void *, QEvent *arg__1);
  Callback_event m_eventCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_eventFilter)(void *, QObject *watched, QEvent *event);
  Callback_eventFilter m_eventFilterCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_notify)(void *, QObject *arg__1, QEvent *arg__2);
  Callback_notify m_notifyCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QGuiApplication::allWindows()
QtDartBindings_EXPORT void *c_static_QGuiApplication__allWindows();

// tag=1067
//  QGuiApplication::applicationDisplayName()
QtDartBindings_EXPORT void *c_static_QGuiApplication__applicationDisplayName();

// tag=1067
//  QGuiApplication::applicationDisplayNameChanged()
QtDartBindings_EXPORT void
c_QGuiApplication__applicationDisplayNameChanged(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void c_QGuiApplication__onApplicationDisplayNameChanged(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QGuiApplication::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QGuiApplication__customEvent_QEvent(void *thisObj,
                                                                 void *event_);

// tag=1067
//  QGuiApplication::desktopFileName()
QtDartBindings_EXPORT void *c_static_QGuiApplication__desktopFileName();

// tag=1067
//  QGuiApplication::desktopSettingsAware()
QtDartBindings_EXPORT bool c_static_QGuiApplication__desktopSettingsAware();

// tag=1067
//  QGuiApplication::devicePixelRatio() const
QtDartBindings_EXPORT qreal c_QGuiApplication__devicePixelRatio(void *thisObj);

// tag=1067
//  QGuiApplication::event(QEvent * arg__1)
QtDartBindings_EXPORT bool c_QGuiApplication__event_QEvent(void *thisObj,
                                                           void *arg__1_);

// tag=1067
//  QGuiApplication::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QGuiApplication__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                              void *event_);

// tag=1067
//  QGuiApplication::exec()
QtDartBindings_EXPORT int c_static_QGuiApplication__exec();

// tag=1067
//  QGuiApplication::focusObject()
QtDartBindings_EXPORT void *c_static_QGuiApplication__focusObject();

// tag=1067
//  QGuiApplication::focusObjectChanged(QObject * focusObject)
QtDartBindings_EXPORT void
c_QGuiApplication__focusObjectChanged_QObject(void *thisObj,
                                              void *focusObject_);

// tag=1078
QtDartBindings_EXPORT void c_QGuiApplication__onFocusObjectChanged_QObject(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QGuiApplication::focusWindow()
QtDartBindings_EXPORT void *c_static_QGuiApplication__focusWindow();

// tag=1067
//  QGuiApplication::focusWindowChanged(QWindow * focusWindow)
QtDartBindings_EXPORT void
c_QGuiApplication__focusWindowChanged_QWindow(void *thisObj,
                                              void *focusWindow_);

// tag=1078
QtDartBindings_EXPORT void c_QGuiApplication__onFocusWindowChanged_QWindow(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QGuiApplication::font()
QtDartBindings_EXPORT void *c_static_QGuiApplication__font();

// tag=1067
//  QGuiApplication::fontDatabaseChanged()
QtDartBindings_EXPORT void
c_QGuiApplication__fontDatabaseChanged(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void
c_QGuiApplication__onFontDatabaseChanged(void *thisObj, void *contextQObject,
                                         void *callback);
// tag=1067
//  QGuiApplication::isLeftToRight()
QtDartBindings_EXPORT bool c_static_QGuiApplication__isLeftToRight();

// tag=1067
//  QGuiApplication::isRightToLeft()
QtDartBindings_EXPORT bool c_static_QGuiApplication__isRightToLeft();

// tag=1067
//  QGuiApplication::isSavingSession() const
QtDartBindings_EXPORT bool c_QGuiApplication__isSavingSession(void *thisObj);

// tag=1067
//  QGuiApplication::isSessionRestored() const
QtDartBindings_EXPORT bool c_QGuiApplication__isSessionRestored(void *thisObj);

// tag=1067
//  QGuiApplication::keyboardModifiers()
QtDartBindings_EXPORT int c_static_QGuiApplication__keyboardModifiers();

// tag=1067
//  QGuiApplication::lastWindowClosed()
QtDartBindings_EXPORT void c_QGuiApplication__lastWindowClosed(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void
c_QGuiApplication__onLastWindowClosed(void *thisObj, void *contextQObject,
                                      void *callback);
// tag=1067
//  QGuiApplication::layoutDirection()
QtDartBindings_EXPORT int c_static_QGuiApplication__layoutDirection();

// tag=1067
//  QGuiApplication::layoutDirectionChanged(Qt::LayoutDirection direction)
QtDartBindings_EXPORT void
c_QGuiApplication__layoutDirectionChanged_LayoutDirection(void *thisObj,
                                                          int direction);

// tag=1078
QtDartBindings_EXPORT void
c_QGuiApplication__onLayoutDirectionChanged_LayoutDirection(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QGuiApplication::modalWindow()
QtDartBindings_EXPORT void *c_static_QGuiApplication__modalWindow();

// tag=1067
//  QGuiApplication::notify(QObject * arg__1, QEvent * arg__2)
QtDartBindings_EXPORT bool
c_QGuiApplication__notify_QObject_QEvent(void *thisObj, void *arg__1_,
                                         void *arg__2_);

// tag=1067
//  QGuiApplication::palette()
QtDartBindings_EXPORT void *c_static_QGuiApplication__palette();

// tag=1067
//  QGuiApplication::platformName()
QtDartBindings_EXPORT void *c_static_QGuiApplication__platformName();

// tag=1067
//  QGuiApplication::queryKeyboardModifiers()
QtDartBindings_EXPORT int c_static_QGuiApplication__queryKeyboardModifiers();

// tag=1067
//  QGuiApplication::quitOnLastWindowClosed()
QtDartBindings_EXPORT bool c_static_QGuiApplication__quitOnLastWindowClosed();

// tag=1067
//  QGuiApplication::restoreOverrideCursor()
QtDartBindings_EXPORT void c_static_QGuiApplication__restoreOverrideCursor();

// tag=1067
//  QGuiApplication::sessionId() const
QtDartBindings_EXPORT void *c_QGuiApplication__sessionId(void *thisObj);

// tag=1067
//  QGuiApplication::sessionKey() const
QtDartBindings_EXPORT void *c_QGuiApplication__sessionKey(void *thisObj);

// tag=1067
//  QGuiApplication::setApplicationDisplayName(const QString & name)
QtDartBindings_EXPORT void
c_static_QGuiApplication__setApplicationDisplayName_QString(const char *name_);

// tag=1067
//  QGuiApplication::setDesktopFileName(const QString & name)
QtDartBindings_EXPORT void
c_static_QGuiApplication__setDesktopFileName_QString(const char *name_);

// tag=1067
//  QGuiApplication::setDesktopSettingsAware(bool on)
QtDartBindings_EXPORT void
c_static_QGuiApplication__setDesktopSettingsAware_bool(bool on);

// tag=1067
//  QGuiApplication::setFont(const QFont & arg__1)
QtDartBindings_EXPORT void
c_static_QGuiApplication__setFont_QFont(void *arg__1_);

// tag=1067
//  QGuiApplication::setLayoutDirection(Qt::LayoutDirection direction)
QtDartBindings_EXPORT void
c_static_QGuiApplication__setLayoutDirection_LayoutDirection(int direction);

// tag=1067
//  QGuiApplication::setPalette(const QPalette & pal)
QtDartBindings_EXPORT void
c_static_QGuiApplication__setPalette_QPalette(void *pal_);

// tag=1067
//  QGuiApplication::setQuitOnLastWindowClosed(bool quit)
QtDartBindings_EXPORT void
c_static_QGuiApplication__setQuitOnLastWindowClosed_bool(bool quit);

// tag=1067
//  QGuiApplication::setWindowIcon(const QIcon & icon)
QtDartBindings_EXPORT void
c_static_QGuiApplication__setWindowIcon_QIcon(void *icon_);

// tag=1067
//  QGuiApplication::sync()
QtDartBindings_EXPORT void c_static_QGuiApplication__sync();

// tag=1067
//  QGuiApplication::topLevelAt(const QPoint & pos)
QtDartBindings_EXPORT void *
c_static_QGuiApplication__topLevelWindowAtPos_QPoint(void *pos_);

// tag=1067
//  QGuiApplication::topLevelWindows()
QtDartBindings_EXPORT void *c_static_QGuiApplication__topLevelWindows();

// tag=1067
//  QGuiApplication::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QGuiApplication__tr_char_char_int(const char *s, const char *c, int n);

// tag=1067
//  QGuiApplication::windowIcon()
QtDartBindings_EXPORT void *c_static_QGuiApplication__windowIcon();

// tag=1066
QtDartBindings_EXPORT void c_QGuiApplication__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QGuiApplication__registerVirtualMethodCallback(void *ptr, void *callback,
                                                 int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QGuiApplication_Finalizer(void *, void *cppObj,
                                                       void *);
}
