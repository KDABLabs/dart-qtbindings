
// tag=1040
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
// tag=1017
class QApplication_wrapper : public ::QApplication {
public:
  ~QApplication_wrapper();
  // tag=1041
  QApplication_wrapper();
  // tag=1041
  static void aboutQt();
  // tag=1041
  static QWidget *activeModalWidget();
  // tag=1041
  static QWidget *activePopupWidget();
  // tag=1041
  static QWidget *activeWindow();
  // tag=1041
  static void alert(QWidget *widget, int duration = 0);
  // tag=1041
  static QList<QWidget *> allWidgets();
  // tag=1041
  bool autoSipEnabled() const;
  // tag=1041
  static void beep();
  // tag=1041
  static void closeAllWindows();
  // tag=1041
  static int cursorFlashTime();
  // tag=1041
  virtual void customEvent(QEvent *event);
  // tag=1008
  virtual void customEvent_nocallback(QEvent *event);
  // tag=1041
  static int doubleClickInterval();
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
  void focusChanged(QWidget *old, QWidget *now);
  // tag=1041
  static QWidget *focusWidget();
  // tag=1041
  static QFont font();
  // tag=1041
  static QFont font(const QWidget *arg__1);
  // tag=1041
  static QFont font(const char *className);
  // tag=1041
  static int keyboardInputInterval();
  // tag=1041
  virtual bool notify(QObject *arg__1, QEvent *arg__2);
  // tag=1008
  virtual bool notify_nocallback(QObject *arg__1, QEvent *arg__2);
  // tag=1041
  static QPalette palette(const QWidget *arg__1);
  // tag=1041
  static QPalette palette(const char *className);
  // tag=1041
  static void setActiveWindow(QWidget *act);
  // tag=1041
  void setAutoSipEnabled(const bool enabled);
  // tag=1041
  static void setCursorFlashTime(int arg__1);
  // tag=1041
  static void setDoubleClickInterval(int arg__1);
  // tag=1041
  static void setFont(const QFont &arg__1, const char *className = nullptr);
  // tag=1041
  static void setKeyboardInputInterval(int arg__1);
  // tag=1041
  static void setPalette(const QPalette &arg__1,
                         const char *className = nullptr);
  // tag=1041
  static void setStartDragDistance(int l);
  // tag=1041
  static void setStartDragTime(int ms);
  // tag=1041
  static void setStyle(QStyle *arg__1);
  // tag=1041
  static QStyle *setStyle(const QString &arg__1);
  // tag=1041
  void setStyleSheet(const QString &sheet);
  // tag=1041
  static void setWheelScrollLines(int arg__1);
  // tag=1041
  static int startDragDistance();
  // tag=1041
  static int startDragTime();
  // tag=1041
  static QStyle *style();
  // tag=1041
  QString styleSheet() const;
  // tag=1041
  static QWidget *topLevelAt(const QPoint &p);
  // tag=1041
  static QWidget *topLevelAt(int x, int y);
  // tag=1041
  static QList<QWidget *> topLevelWidgets();
  // tag=1041
  static QString tr(const char *s, const char *c, int n);
  // tag=1041
  static int wheelScrollLines();
  // tag=1041
  static QWidget *widgetAt(const QPoint &p);
  // tag=1041
  static QWidget *widgetAt(int x, int y);
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
//  QApplication::QApplication()
QtDartBindings_EXPORT void *c_QApplication__constructor();

// tag=1067
//  QApplication::aboutQt()
QtDartBindings_EXPORT void c_static_QApplication__aboutQt();

// tag=1067
//  QApplication::activeModalWidget()
QtDartBindings_EXPORT void *c_static_QApplication__activeModalWidget();

// tag=1067
//  QApplication::activePopupWidget()
QtDartBindings_EXPORT void *c_static_QApplication__activePopupWidget();

// tag=1067
//  QApplication::activeWindow()
QtDartBindings_EXPORT void *c_static_QApplication__activeWindow();

// tag=1067
//  QApplication::alert(QWidget * widget, int duration)
QtDartBindings_EXPORT void
c_static_QApplication__alert_QWidget_int(void *widget_, int duration);

// tag=1067
//  QApplication::allWidgets()
QtDartBindings_EXPORT void *c_static_QApplication__allWidgets();

// tag=1067
//  QApplication::autoSipEnabled() const
QtDartBindings_EXPORT bool c_QApplication__autoSipEnabled(void *thisObj);

// tag=1067
//  QApplication::beep()
QtDartBindings_EXPORT void c_static_QApplication__beep();

// tag=1067
//  QApplication::closeAllWindows()
QtDartBindings_EXPORT void c_static_QApplication__closeAllWindows();

// tag=1067
//  QApplication::cursorFlashTime()
QtDartBindings_EXPORT int c_static_QApplication__cursorFlashTime();

// tag=1067
//  QApplication::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QApplication__customEvent_QEvent(void *thisObj,
                                                              void *event_);

// tag=1067
//  QApplication::doubleClickInterval()
QtDartBindings_EXPORT int c_static_QApplication__doubleClickInterval();

// tag=1067
//  QApplication::event(QEvent * arg__1)
QtDartBindings_EXPORT bool c_QApplication__event_QEvent(void *thisObj,
                                                        void *arg__1_);

// tag=1067
//  QApplication::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QApplication__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                           void *event_);

// tag=1067
//  QApplication::exec()
QtDartBindings_EXPORT int c_static_QApplication__exec();

// tag=1067
//  QApplication::focusChanged(QWidget * old, QWidget * now)
QtDartBindings_EXPORT void
c_QApplication__focusChanged_QWidget_QWidget(void *thisObj, void *old_,
                                             void *now_);

// tag=1078
QtDartBindings_EXPORT void c_QApplication__onFocusChanged_QWidget_QWidget(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QApplication::focusWidget()
QtDartBindings_EXPORT void *c_static_QApplication__focusWidget();

// tag=1067
//  QApplication::font()
QtDartBindings_EXPORT void *c_static_QApplication__font();

// tag=1067
//  QApplication::font(const QWidget * arg__1)
QtDartBindings_EXPORT void *
c_static_QApplication__fontForWidget_QWidget(void *arg__1_);

// tag=1067
//  QApplication::font(const char * className)
QtDartBindings_EXPORT void *
c_static_QApplication__fontForClassName_char(const char *className);

// tag=1067
//  QApplication::keyboardInputInterval()
QtDartBindings_EXPORT int c_static_QApplication__keyboardInputInterval();

// tag=1067
//  QApplication::notify(QObject * arg__1, QEvent * arg__2)
QtDartBindings_EXPORT bool c_QApplication__notify_QObject_QEvent(void *thisObj,
                                                                 void *arg__1_,
                                                                 void *arg__2_);

// tag=1067
//  QApplication::palette(const QWidget * arg__1)
QtDartBindings_EXPORT void *
c_static_QApplication__palette_QWidget(void *arg__1_);

// tag=1067
//  QApplication::palette(const char * className)
QtDartBindings_EXPORT void *
c_static_QApplication__palette_char(const char *className);

// tag=1067
//  QApplication::setActiveWindow(QWidget * act)
QtDartBindings_EXPORT void
c_static_QApplication__setActiveWindow_QWidget(void *act_);

// tag=1067
//  QApplication::setAutoSipEnabled(const bool enabled)
QtDartBindings_EXPORT void c_QApplication__setAutoSipEnabled_bool(void *thisObj,
                                                                  bool enabled);

// tag=1067
//  QApplication::setCursorFlashTime(int arg__1)
QtDartBindings_EXPORT void
c_static_QApplication__setCursorFlashTime_int(int arg__1);

// tag=1067
//  QApplication::setDoubleClickInterval(int arg__1)
QtDartBindings_EXPORT void
c_static_QApplication__setDoubleClickInterval_int(int arg__1);

// tag=1067
//  QApplication::setFont(const QFont & arg__1, const char * className)
QtDartBindings_EXPORT void
c_static_QApplication__setFont_QFont_char(void *arg__1_, const char *className);

// tag=1067
//  QApplication::setKeyboardInputInterval(int arg__1)
QtDartBindings_EXPORT void
c_static_QApplication__setKeyboardInputInterval_int(int arg__1);

// tag=1067
//  QApplication::setPalette(const QPalette & arg__1, const char * className)
QtDartBindings_EXPORT void
c_static_QApplication__setPalette_QPalette_char(void *arg__1_,
                                                const char *className);

// tag=1067
//  QApplication::setStartDragDistance(int l)
QtDartBindings_EXPORT void
c_static_QApplication__setStartDragDistance_int(int l);

// tag=1067
//  QApplication::setStartDragTime(int ms)
QtDartBindings_EXPORT void c_static_QApplication__setStartDragTime_int(int ms);

// tag=1067
//  QApplication::setStyle(QStyle * arg__1)
QtDartBindings_EXPORT void
c_static_QApplication__setStyle_QStyle(void *arg__1_);

// tag=1067
//  QApplication::setStyle(const QString & arg__1)
QtDartBindings_EXPORT void *
c_static_QApplication__setStyle_QString(const char *arg__1_);

// tag=1067
//  QApplication::setStyleSheet(const QString & sheet)
QtDartBindings_EXPORT void
c_QApplication__setStyleSheet_QString(void *thisObj, const char *sheet_);

// tag=1067
//  QApplication::setWheelScrollLines(int arg__1)
QtDartBindings_EXPORT void
c_static_QApplication__setWheelScrollLines_int(int arg__1);

// tag=1067
//  QApplication::startDragDistance()
QtDartBindings_EXPORT int c_static_QApplication__startDragDistance();

// tag=1067
//  QApplication::startDragTime()
QtDartBindings_EXPORT int c_static_QApplication__startDragTime();

// tag=1067
//  QApplication::style()
QtDartBindings_EXPORT void *c_static_QApplication__style();

// tag=1067
//  QApplication::styleSheet() const
QtDartBindings_EXPORT void *c_QApplication__styleSheet(void *thisObj);

// tag=1067
//  QApplication::topLevelAt(const QPoint & p)
QtDartBindings_EXPORT void *
c_static_QApplication__topLevelWidgetAtPos_QPoint(void *p_);

// tag=1067
//  QApplication::topLevelAt(int x, int y)
QtDartBindings_EXPORT void *
c_static_QApplication__topLevelWidgetAt_int_int(int x, int y);

// tag=1067
//  QApplication::topLevelWidgets()
QtDartBindings_EXPORT void *c_static_QApplication__topLevelWidgets();

// tag=1067
//  QApplication::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QApplication__tr_char_char_int(const char *s, const char *c, int n);

// tag=1067
//  QApplication::wheelScrollLines()
QtDartBindings_EXPORT int c_static_QApplication__wheelScrollLines();

// tag=1067
//  QApplication::widgetAt(const QPoint & p)
QtDartBindings_EXPORT void *c_static_QApplication__widgetAt_QPoint(void *p_);

// tag=1067
//  QApplication::widgetAt(int x, int y)
QtDartBindings_EXPORT void *c_static_QApplication__widgetAt_int_int(int x,
                                                                    int y);

// tag=1066
QtDartBindings_EXPORT void c_QApplication__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QApplication__registerVirtualMethodCallback(void *ptr, void *callback,
                                              int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QApplication_Finalizer(void *, void *cppObj,
                                                    void *);
}
