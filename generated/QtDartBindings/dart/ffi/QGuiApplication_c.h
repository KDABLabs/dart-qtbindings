/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
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
class QGuiApplication_wrapper : public ::QGuiApplication {
public:
  ~QGuiApplication_wrapper();
  static QList<QWindow *> allWindows();
  static QString applicationDisplayName();
  void applicationDisplayNameChanged();
  virtual void customEvent(QEvent *event);
  virtual void customEvent_nocallback(QEvent *event);
  static QString desktopFileName();
  static bool desktopSettingsAware();
  qreal devicePixelRatio() const;
  virtual bool event(QEvent *arg__1);
  virtual bool event_nocallback(QEvent *arg__1);
  virtual bool eventFilter(QObject *watched, QEvent *event);
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  static int exec();
  static QObject *focusObject();
  void focusObjectChanged(QObject *focusObject);
  static QWindow *focusWindow();
  void focusWindowChanged(QWindow *focusWindow);
  static QFont font();
  void fontDatabaseChanged();
  static bool isLeftToRight();
  static bool isRightToLeft();
  bool isSavingSession() const;
  bool isSessionRestored() const;
  static QFlags<Qt::KeyboardModifier> keyboardModifiers();
  void lastWindowClosed();
  static Qt::LayoutDirection layoutDirection();
  void layoutDirectionChanged(Qt::LayoutDirection direction);
  static QWindow *modalWindow();
  virtual bool notify(QObject *arg__1, QEvent *arg__2);
  virtual bool notify_nocallback(QObject *arg__1, QEvent *arg__2);
  static QPalette palette();
  static QString platformName();
  static QFlags<Qt::KeyboardModifier> queryKeyboardModifiers();
  static bool quitOnLastWindowClosed();
  static void restoreOverrideCursor();
  QString sessionId() const;
  QString sessionKey() const;
  static void setApplicationDisplayName(const QString &name);
  static void setDesktopFileName(const QString &name);
  static void setDesktopSettingsAware(bool on);
  static void setFont(const QFont &arg__1);
  static void setLayoutDirection(Qt::LayoutDirection direction);
  static void setPalette(const QPalette &pal);
  static void setQuitOnLastWindowClosed(bool quit);
  static void setWindowIcon(const QIcon &icon);
  static void sync();
  static QWindow *topLevelAt(const QPoint &pos);
  static QList<QWindow *> topLevelWindows();
  static QString tr(const char *s, const char *c, int n);
  static QIcon windowIcon();
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  typedef bool (*Callback_event)(void *, QEvent *arg__1);
  Callback_event m_eventCallback = nullptr;
  typedef bool (*Callback_eventFilter)(void *, QObject *watched, QEvent *event);
  Callback_eventFilter m_eventFilterCallback = nullptr;
  typedef bool (*Callback_notify)(void *, QObject *arg__1, QEvent *arg__2);
  Callback_notify m_notifyCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QGuiApplication::allWindows()
QtDartBindings_EXPORT void *c_static_QGuiApplication__allWindows();
// QGuiApplication::applicationDisplayName()
QtDartBindings_EXPORT void *c_static_QGuiApplication__applicationDisplayName();
// QGuiApplication::applicationDisplayNameChanged()
QtDartBindings_EXPORT void
c_QGuiApplication__applicationDisplayNameChanged(void *thisObj);
QtDartBindings_EXPORT void c_QGuiApplication__onApplicationDisplayNameChanged(
    void *thisObj, void *contextQObject,
    void *callback); // QGuiApplication::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QGuiApplication__customEvent_QEvent(void *thisObj,
                                                                 void *event_);
// QGuiApplication::desktopFileName()
QtDartBindings_EXPORT void *c_static_QGuiApplication__desktopFileName();
// QGuiApplication::desktopSettingsAware()
QtDartBindings_EXPORT bool c_static_QGuiApplication__desktopSettingsAware();
// QGuiApplication::devicePixelRatio() const
QtDartBindings_EXPORT qreal c_QGuiApplication__devicePixelRatio(void *thisObj);
// QGuiApplication::event(QEvent * arg__1)
QtDartBindings_EXPORT bool c_QGuiApplication__event_QEvent(void *thisObj,
                                                           void *arg__1_);
// QGuiApplication::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QGuiApplication__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                              void *event_);
// QGuiApplication::exec()
QtDartBindings_EXPORT int c_static_QGuiApplication__exec();
// QGuiApplication::focusObject()
QtDartBindings_EXPORT void *c_static_QGuiApplication__focusObject();
// QGuiApplication::focusObjectChanged(QObject * focusObject)
QtDartBindings_EXPORT void
c_QGuiApplication__focusObjectChanged_QObject(void *thisObj,
                                              void *focusObject_);
QtDartBindings_EXPORT void c_QGuiApplication__onFocusObjectChanged_QObject(
    void *thisObj, void *contextQObject,
    void *callback); // QGuiApplication::focusWindow()
QtDartBindings_EXPORT void *c_static_QGuiApplication__focusWindow();
// QGuiApplication::focusWindowChanged(QWindow * focusWindow)
QtDartBindings_EXPORT void
c_QGuiApplication__focusWindowChanged_QWindow(void *thisObj,
                                              void *focusWindow_);
QtDartBindings_EXPORT void c_QGuiApplication__onFocusWindowChanged_QWindow(
    void *thisObj, void *contextQObject,
    void *callback); // QGuiApplication::font()
QtDartBindings_EXPORT void *c_static_QGuiApplication__font();
// QGuiApplication::fontDatabaseChanged()
QtDartBindings_EXPORT void
c_QGuiApplication__fontDatabaseChanged(void *thisObj);
QtDartBindings_EXPORT void c_QGuiApplication__onFontDatabaseChanged(
    void *thisObj, void *contextQObject,
    void *callback); // QGuiApplication::isLeftToRight()
QtDartBindings_EXPORT bool c_static_QGuiApplication__isLeftToRight();
// QGuiApplication::isRightToLeft()
QtDartBindings_EXPORT bool c_static_QGuiApplication__isRightToLeft();
// QGuiApplication::isSavingSession() const
QtDartBindings_EXPORT bool c_QGuiApplication__isSavingSession(void *thisObj);
// QGuiApplication::isSessionRestored() const
QtDartBindings_EXPORT bool c_QGuiApplication__isSessionRestored(void *thisObj);
// QGuiApplication::keyboardModifiers()
QtDartBindings_EXPORT int c_static_QGuiApplication__keyboardModifiers();
// QGuiApplication::lastWindowClosed()
QtDartBindings_EXPORT void c_QGuiApplication__lastWindowClosed(void *thisObj);
QtDartBindings_EXPORT void c_QGuiApplication__onLastWindowClosed(
    void *thisObj, void *contextQObject,
    void *callback); // QGuiApplication::layoutDirection()
QtDartBindings_EXPORT int c_static_QGuiApplication__layoutDirection();
// QGuiApplication::layoutDirectionChanged(Qt::LayoutDirection direction)
QtDartBindings_EXPORT void
c_QGuiApplication__layoutDirectionChanged_LayoutDirection(void *thisObj,
                                                          int direction);
QtDartBindings_EXPORT void
c_QGuiApplication__onLayoutDirectionChanged_LayoutDirection(
    void *thisObj, void *contextQObject,
    void *callback); // QGuiApplication::modalWindow()
QtDartBindings_EXPORT void *c_static_QGuiApplication__modalWindow();
// QGuiApplication::notify(QObject * arg__1, QEvent * arg__2)
QtDartBindings_EXPORT bool
c_QGuiApplication__notify_QObject_QEvent(void *thisObj, void *arg__1_,
                                         void *arg__2_);
// QGuiApplication::palette()
QtDartBindings_EXPORT void *c_static_QGuiApplication__palette();
// QGuiApplication::platformName()
QtDartBindings_EXPORT void *c_static_QGuiApplication__platformName();
// QGuiApplication::queryKeyboardModifiers()
QtDartBindings_EXPORT int c_static_QGuiApplication__queryKeyboardModifiers();
// QGuiApplication::quitOnLastWindowClosed()
QtDartBindings_EXPORT bool c_static_QGuiApplication__quitOnLastWindowClosed();
// QGuiApplication::restoreOverrideCursor()
QtDartBindings_EXPORT void c_static_QGuiApplication__restoreOverrideCursor();
// QGuiApplication::sessionId() const
QtDartBindings_EXPORT void *c_QGuiApplication__sessionId(void *thisObj);
// QGuiApplication::sessionKey() const
QtDartBindings_EXPORT void *c_QGuiApplication__sessionKey(void *thisObj);
// QGuiApplication::setApplicationDisplayName(const QString & name)
QtDartBindings_EXPORT void
c_static_QGuiApplication__setApplicationDisplayName_QString(const char *name_);
// QGuiApplication::setDesktopFileName(const QString & name)
QtDartBindings_EXPORT void
c_static_QGuiApplication__setDesktopFileName_QString(const char *name_);
// QGuiApplication::setDesktopSettingsAware(bool on)
QtDartBindings_EXPORT void
c_static_QGuiApplication__setDesktopSettingsAware_bool(bool on);
// QGuiApplication::setFont(const QFont & arg__1)
QtDartBindings_EXPORT void
c_static_QGuiApplication__setFont_QFont(void *arg__1_);
// QGuiApplication::setLayoutDirection(Qt::LayoutDirection direction)
QtDartBindings_EXPORT void
c_static_QGuiApplication__setLayoutDirection_LayoutDirection(int direction);
// QGuiApplication::setPalette(const QPalette & pal)
QtDartBindings_EXPORT void
c_static_QGuiApplication__setPalette_QPalette(void *pal_);
// QGuiApplication::setQuitOnLastWindowClosed(bool quit)
QtDartBindings_EXPORT void
c_static_QGuiApplication__setQuitOnLastWindowClosed_bool(bool quit);
// QGuiApplication::setWindowIcon(const QIcon & icon)
QtDartBindings_EXPORT void
c_static_QGuiApplication__setWindowIcon_QIcon(void *icon_);
// QGuiApplication::sync()
QtDartBindings_EXPORT void c_static_QGuiApplication__sync();
// QGuiApplication::topLevelAt(const QPoint & pos)
QtDartBindings_EXPORT void *
c_static_QGuiApplication__topLevelWindowAtPos_QPoint(void *pos_);
// QGuiApplication::topLevelWindows()
QtDartBindings_EXPORT void *c_static_QGuiApplication__topLevelWindows();
// QGuiApplication::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QGuiApplication__tr_char_char_int(const char *s, const char *c, int n);
// QGuiApplication::windowIcon()
QtDartBindings_EXPORT void *c_static_QGuiApplication__windowIcon();
QtDartBindings_EXPORT void c_QGuiApplication__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QGuiApplication__registerVirtualMethodCallback(void *ptr, void *callback,
                                                 int methodId);
QtDartBindings_EXPORT void c_QGuiApplication_Finalizer(void *cppObj);
}
