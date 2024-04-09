/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qapplication.h>
#include <qcoreevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qlist.h>
#include <qobject.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qstring.h>
#include <qstyle.h>
#include <qwidget.h>
#include <qwindow.h>

namespace QtDartBindings_wrappersNS {
class QApplication_wrapper : public ::QApplication {
public:
  ~QApplication_wrapper();
  QApplication_wrapper();
  static void aboutQt();
  static QWidget *activeModalWidget();
  static QWidget *activePopupWidget();
  static QWidget *activeWindow();
  static void alert(QWidget *widget, int duration = 0);
  static QList<QWidget *> allWidgets();
  bool autoSipEnabled() const;
  static void beep();
  static void closeAllWindows();
  static int cursorFlashTime();
  virtual void customEvent(QEvent *event);
  virtual void customEvent_nocallback(QEvent *event);
  static int doubleClickInterval();
  virtual bool event(QEvent *arg__1);
  virtual bool event_nocallback(QEvent *arg__1);
  virtual bool eventFilter(QObject *watched, QEvent *event);
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  static int exec();
  void focusChanged(QWidget *old, QWidget *now);
  static QWidget *focusWidget();
  static QFont font();
  static QFont font(const QWidget *arg__1);
  static QFont font(const char *className);
  static int keyboardInputInterval();
  virtual bool notify(QObject *arg__1, QEvent *arg__2);
  virtual bool notify_nocallback(QObject *arg__1, QEvent *arg__2);
  static QPalette palette(const QWidget *arg__1);
  static QPalette palette(const char *className);
  static void setActiveWindow(QWidget *act);
  void setAutoSipEnabled(const bool enabled);
  static void setCursorFlashTime(int arg__1);
  static void setDoubleClickInterval(int arg__1);
  static void setFont(const QFont &arg__1, const char *className = nullptr);
  static void setKeyboardInputInterval(int arg__1);
  static void setPalette(const QPalette &arg__1,
                         const char *className = nullptr);
  static void setStartDragDistance(int l);
  static void setStartDragTime(int ms);
  static void setStyle(QStyle *arg__1);
  static QStyle *setStyle(const QString &arg__1);
  void setStyleSheet(const QString &sheet);
  static void setWheelScrollLines(int arg__1);
  static int startDragDistance();
  static int startDragTime();
  static QStyle *style();
  QString styleSheet() const;
  static QWidget *topLevelAt(const QPoint &p);
  static QWidget *topLevelAt(int x, int y);
  static QList<QWidget *> topLevelWidgets();
  static QString tr(const char *s, const char *c, int n);
  static int wheelScrollLines();
  static QWidget *widgetAt(const QPoint &p);
  static QWidget *widgetAt(int x, int y);
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
// QApplication::QApplication()
QtDartBindings_EXPORT void *c_QApplication__constructor();
// QApplication::aboutQt()
QtDartBindings_EXPORT void c_static_QApplication__aboutQt();
// QApplication::activeModalWidget()
QtDartBindings_EXPORT void *c_static_QApplication__activeModalWidget();
// QApplication::activePopupWidget()
QtDartBindings_EXPORT void *c_static_QApplication__activePopupWidget();
// QApplication::activeWindow()
QtDartBindings_EXPORT void *c_static_QApplication__activeWindow();
// QApplication::alert(QWidget * widget, int duration)
QtDartBindings_EXPORT void
c_static_QApplication__alert_QWidget_int(void *widget_, int duration);
// QApplication::allWidgets()
QtDartBindings_EXPORT void *c_static_QApplication__allWidgets();
// QApplication::autoSipEnabled() const
QtDartBindings_EXPORT bool c_QApplication__autoSipEnabled(void *thisObj);
// QApplication::beep()
QtDartBindings_EXPORT void c_static_QApplication__beep();
// QApplication::closeAllWindows()
QtDartBindings_EXPORT void c_static_QApplication__closeAllWindows();
// QApplication::cursorFlashTime()
QtDartBindings_EXPORT int c_static_QApplication__cursorFlashTime();
// QApplication::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QApplication__customEvent_QEvent(void *thisObj,
                                                              void *event_);
// QApplication::doubleClickInterval()
QtDartBindings_EXPORT int c_static_QApplication__doubleClickInterval();
// QApplication::event(QEvent * arg__1)
QtDartBindings_EXPORT bool c_QApplication__event_QEvent(void *thisObj,
                                                        void *arg__1_);
// QApplication::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QApplication__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                           void *event_);
// QApplication::exec()
QtDartBindings_EXPORT int c_static_QApplication__exec();
// QApplication::focusChanged(QWidget * old, QWidget * now)
QtDartBindings_EXPORT void
c_QApplication__focusChanged_QWidget_QWidget(void *thisObj, void *old_,
                                             void *now_);
QtDartBindings_EXPORT void c_QApplication__onFocusChanged_QWidget_QWidget(
    void *thisObj, void *contextQObject,
    void *callback); // QApplication::focusWidget()
QtDartBindings_EXPORT void *c_static_QApplication__focusWidget();
// QApplication::font()
QtDartBindings_EXPORT void *c_static_QApplication__font();
// QApplication::font(const QWidget * arg__1)
QtDartBindings_EXPORT void *
c_static_QApplication__fontForWidget_QWidget(void *arg__1_);
// QApplication::font(const char * className)
QtDartBindings_EXPORT void *
c_static_QApplication__fontForClassName_char(const char *className);
// QApplication::keyboardInputInterval()
QtDartBindings_EXPORT int c_static_QApplication__keyboardInputInterval();
// QApplication::notify(QObject * arg__1, QEvent * arg__2)
QtDartBindings_EXPORT bool c_QApplication__notify_QObject_QEvent(void *thisObj,
                                                                 void *arg__1_,
                                                                 void *arg__2_);
// QApplication::palette(const QWidget * arg__1)
QtDartBindings_EXPORT void *
c_static_QApplication__palette_QWidget(void *arg__1_);
// QApplication::palette(const char * className)
QtDartBindings_EXPORT void *
c_static_QApplication__palette_char(const char *className);
// QApplication::setActiveWindow(QWidget * act)
QtDartBindings_EXPORT void
c_static_QApplication__setActiveWindow_QWidget(void *act_);
// QApplication::setAutoSipEnabled(const bool enabled)
QtDartBindings_EXPORT void c_QApplication__setAutoSipEnabled_bool(void *thisObj,
                                                                  bool enabled);
// QApplication::setCursorFlashTime(int arg__1)
QtDartBindings_EXPORT void
c_static_QApplication__setCursorFlashTime_int(int arg__1);
// QApplication::setDoubleClickInterval(int arg__1)
QtDartBindings_EXPORT void
c_static_QApplication__setDoubleClickInterval_int(int arg__1);
// QApplication::setFont(const QFont & arg__1, const char * className)
QtDartBindings_EXPORT void
c_static_QApplication__setFont_QFont_char(void *arg__1_, const char *className);
// QApplication::setKeyboardInputInterval(int arg__1)
QtDartBindings_EXPORT void
c_static_QApplication__setKeyboardInputInterval_int(int arg__1);
// QApplication::setPalette(const QPalette & arg__1, const char * className)
QtDartBindings_EXPORT void
c_static_QApplication__setPalette_QPalette_char(void *arg__1_,
                                                const char *className);
// QApplication::setStartDragDistance(int l)
QtDartBindings_EXPORT void
c_static_QApplication__setStartDragDistance_int(int l);
// QApplication::setStartDragTime(int ms)
QtDartBindings_EXPORT void c_static_QApplication__setStartDragTime_int(int ms);
// QApplication::setStyle(QStyle * arg__1)
QtDartBindings_EXPORT void
c_static_QApplication__setStyle_QStyle(void *arg__1_);
// QApplication::setStyle(const QString & arg__1)
QtDartBindings_EXPORT void *
c_static_QApplication__setStyle_QString(const char *arg__1_);
// QApplication::setStyleSheet(const QString & sheet)
QtDartBindings_EXPORT void
c_QApplication__setStyleSheet_QString(void *thisObj, const char *sheet_);
// QApplication::setWheelScrollLines(int arg__1)
QtDartBindings_EXPORT void
c_static_QApplication__setWheelScrollLines_int(int arg__1);
// QApplication::startDragDistance()
QtDartBindings_EXPORT int c_static_QApplication__startDragDistance();
// QApplication::startDragTime()
QtDartBindings_EXPORT int c_static_QApplication__startDragTime();
// QApplication::style()
QtDartBindings_EXPORT void *c_static_QApplication__style();
// QApplication::styleSheet() const
QtDartBindings_EXPORT void *c_QApplication__styleSheet(void *thisObj);
// QApplication::topLevelAt(const QPoint & p)
QtDartBindings_EXPORT void *
c_static_QApplication__topLevelWidgetAtPos_QPoint(void *p_);
// QApplication::topLevelAt(int x, int y)
QtDartBindings_EXPORT void *
c_static_QApplication__topLevelWidgetAt_int_int(int x, int y);
// QApplication::topLevelWidgets()
QtDartBindings_EXPORT void *c_static_QApplication__topLevelWidgets();
// QApplication::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QApplication__tr_char_char_int(const char *s, const char *c, int n);
// QApplication::wheelScrollLines()
QtDartBindings_EXPORT int c_static_QApplication__wheelScrollLines();
// QApplication::widgetAt(const QPoint & p)
QtDartBindings_EXPORT void *c_static_QApplication__widgetAt_QPoint(void *p_);
// QApplication::widgetAt(int x, int y)
QtDartBindings_EXPORT void *c_static_QApplication__widgetAt_int_int(int x,
                                                                    int y);
QtDartBindings_EXPORT void c_QApplication__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QApplication__registerVirtualMethodCallback(void *ptr, void *callback,
                                              int methodId);
QtDartBindings_EXPORT void c_QApplication_Finalizer(void *cppObj);
}
