
// tag=1040
#include "QtDartBindings_exports.h"
#include <qabstractbutton.h>
#include <qaction.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstring.h>
#include <qstyle.h>
#include <qwidget.h>
#include <qwindow.h>

namespace QtDartBindings_wrappersNS {
// tag=1017
class QAbstractButton_wrapper : public ::QAbstractButton {
public:
  ~QAbstractButton_wrapper();
  // tag=1041
  QAbstractButton_wrapper(QWidget *parent = nullptr);
  // tag=1041
  void animateClick();
  // tag=1041
  bool autoExclusive() const;
  // tag=1041
  bool autoRepeat() const;
  // tag=1041
  int autoRepeatDelay() const;
  // tag=1041
  int autoRepeatInterval() const;
  // tag=1041
  virtual void changeEvent(QEvent *e);
  // tag=1008
  virtual void changeEvent_nocallback(QEvent *e);
  // tag=1041
  virtual void checkStateSet();
  // tag=1008
  virtual void checkStateSet_nocallback();
  // tag=1041
  void click();
  // tag=1041
  void clicked(bool checked = false);
  // tag=1041
  virtual void customEvent(QEvent *event);
  // tag=1008
  virtual void customEvent_nocallback(QEvent *event);
  // tag=1041
  virtual int devType() const;
  // tag=1008
  virtual int devType_nocallback() const;
  // tag=1041
  virtual bool event(QEvent *e);
  // tag=1008
  virtual bool event_nocallback(QEvent *e);
  // tag=1041
  virtual bool eventFilter(QObject *watched, QEvent *event);
  // tag=1008
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  // tag=1041
  virtual bool focusNextPrevChild(bool next);
  // tag=1008
  virtual bool focusNextPrevChild_nocallback(bool next);
  // tag=1041
  virtual bool hasHeightForWidth() const;
  // tag=1008
  virtual bool hasHeightForWidth_nocallback() const;
  // tag=1041
  virtual int heightForWidth(int arg__1) const;
  // tag=1008
  virtual int heightForWidth_nocallback(int arg__1) const;
  // tag=1041
  virtual bool hitButton(const QPoint &pos) const;
  // tag=1008
  virtual bool hitButton_nocallback(const QPoint &pos) const;
  // tag=1041
  QIcon icon() const;
  // tag=1041
  QSize iconSize() const;
  // tag=1041
  virtual void initPainter(QPainter *painter) const;
  // tag=1008
  virtual void initPainter_nocallback(QPainter *painter) const;
  // tag=1041
  bool isCheckable() const;
  // tag=1041
  bool isChecked() const;
  // tag=1041
  bool isDown() const;
  // tag=1041
  virtual void leaveEvent(QEvent *event);
  // tag=1008
  virtual void leaveEvent_nocallback(QEvent *event);
  // tag=1041
  virtual QSize minimumSizeHint() const;
  // tag=1008
  virtual QSize minimumSizeHint_nocallback() const;
  // tag=1041
  virtual void mouseDoubleClickEvent(QMouseEvent *event);
  // tag=1008
  virtual void mouseDoubleClickEvent_nocallback(QMouseEvent *event);
  // tag=1041
  virtual void mouseMoveEvent(QMouseEvent *e);
  // tag=1008
  virtual void mouseMoveEvent_nocallback(QMouseEvent *e);
  // tag=1041
  virtual void mousePressEvent(QMouseEvent *e);
  // tag=1008
  virtual void mousePressEvent_nocallback(QMouseEvent *e);
  // tag=1041
  virtual void mouseReleaseEvent(QMouseEvent *e);
  // tag=1008
  virtual void mouseReleaseEvent_nocallback(QMouseEvent *e);
  // tag=1041
  virtual void nextCheckState();
  // tag=1008
  virtual void nextCheckState_nocallback();
  // tag=1041
  virtual void paintEvent(QPaintEvent *e);
  // tag=1008
  virtual void paintEvent_nocallback(QPaintEvent *e);
  // tag=1041
  void pressed();
  // tag=1041
  void released();
  // tag=1041
  void setAutoExclusive(bool arg__1);
  // tag=1041
  void setAutoRepeat(bool arg__1);
  // tag=1041
  void setAutoRepeatDelay(int arg__1);
  // tag=1041
  void setAutoRepeatInterval(int arg__1);
  // tag=1041
  void setCheckable(bool arg__1);
  // tag=1041
  void setChecked(bool arg__1);
  // tag=1041
  void setDown(bool arg__1);
  // tag=1041
  void setIcon(const QIcon &icon);
  // tag=1041
  void setIconSize(const QSize &size);
  // tag=1041
  void setShortcut(const QKeySequence &key);
  // tag=1041
  void setText(const QString &text);
  // tag=1041
  virtual void setVisible(bool visible);
  // tag=1008
  virtual void setVisible_nocallback(bool visible);
  // tag=1041
  virtual QPainter *sharedPainter() const;
  // tag=1008
  virtual QPainter *sharedPainter_nocallback() const;
  // tag=1041
  QKeySequence shortcut() const;
  // tag=1041
  virtual QSize sizeHint() const;
  // tag=1008
  virtual QSize sizeHint_nocallback() const;
  // tag=1041
  QString text() const;
  // tag=1041
  void toggle();
  // tag=1041
  void toggled(bool checked);
  // tag=1041
  static QString tr(const char *s, const char *c, int n);
  // tag=1042
  typedef void (*Callback_changeEvent)(void *, QEvent *e);
  Callback_changeEvent m_changeEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_checkStateSet)(void *);
  Callback_checkStateSet m_checkStateSetCallback = nullptr;
  // tag=1042
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  // tag=1042
  typedef int (*Callback_devType)(void *);
  Callback_devType m_devTypeCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_event)(void *, QEvent *e);
  Callback_event m_eventCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_eventFilter)(void *, QObject *watched, QEvent *event);
  Callback_eventFilter m_eventFilterCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_focusNextPrevChild)(void *, bool next);
  Callback_focusNextPrevChild m_focusNextPrevChildCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_hasHeightForWidth)(void *);
  Callback_hasHeightForWidth m_hasHeightForWidthCallback = nullptr;
  // tag=1042
  typedef int (*Callback_heightForWidth)(void *, int arg__1);
  Callback_heightForWidth m_heightForWidthCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_hitButton)(void *, const QPoint &pos);
  Callback_hitButton m_hitButtonCallback = nullptr;
  // tag=1042
  typedef void (*Callback_initPainter)(void *, QPainter *painter);
  Callback_initPainter m_initPainterCallback = nullptr;
  // tag=1042
  typedef void (*Callback_leaveEvent)(void *, QEvent *event);
  Callback_leaveEvent m_leaveEventCallback = nullptr;
  // tag=1042
  typedef QSize *(*Callback_minimumSizeHint)(void *);
  Callback_minimumSizeHint m_minimumSizeHintCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mouseDoubleClickEvent)(void *, QMouseEvent *event);
  Callback_mouseDoubleClickEvent m_mouseDoubleClickEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mouseMoveEvent)(void *, QMouseEvent *e);
  Callback_mouseMoveEvent m_mouseMoveEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mousePressEvent)(void *, QMouseEvent *e);
  Callback_mousePressEvent m_mousePressEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mouseReleaseEvent)(void *, QMouseEvent *e);
  Callback_mouseReleaseEvent m_mouseReleaseEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_nextCheckState)(void *);
  Callback_nextCheckState m_nextCheckStateCallback = nullptr;
  // tag=1042
  typedef void (*Callback_paintEvent)(void *, QPaintEvent *e);
  Callback_paintEvent m_paintEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_setVisible)(void *, bool visible);
  Callback_setVisible m_setVisibleCallback = nullptr;
  // tag=1042
  typedef QPainter *(*Callback_sharedPainter)(void *);
  Callback_sharedPainter m_sharedPainterCallback = nullptr;
  // tag=1042
  typedef QSize *(*Callback_sizeHint)(void *);
  Callback_sizeHint m_sizeHintCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QAbstractButton::QAbstractButton(QWidget * parent)
QtDartBindings_EXPORT void *
c_QAbstractButton__constructor_QWidget(void *parent_);

// tag=1067
//  QAbstractButton::animateClick()
QtDartBindings_EXPORT void c_QAbstractButton__animateClick(void *thisObj);

// tag=1067
//  QAbstractButton::autoExclusive() const
QtDartBindings_EXPORT bool c_QAbstractButton__autoExclusive(void *thisObj);

// tag=1067
//  QAbstractButton::autoRepeat() const
QtDartBindings_EXPORT bool c_QAbstractButton__autoRepeat(void *thisObj);

// tag=1067
//  QAbstractButton::autoRepeatDelay() const
QtDartBindings_EXPORT int c_QAbstractButton__autoRepeatDelay(void *thisObj);

// tag=1067
//  QAbstractButton::autoRepeatInterval() const
QtDartBindings_EXPORT int c_QAbstractButton__autoRepeatInterval(void *thisObj);

// tag=1067
//  QAbstractButton::changeEvent(QEvent * e)
QtDartBindings_EXPORT void c_QAbstractButton__changeEvent_QEvent(void *thisObj,
                                                                 void *e_);

// tag=1067
//  QAbstractButton::checkStateSet()
QtDartBindings_EXPORT void c_QAbstractButton__checkStateSet(void *thisObj);

// tag=1067
//  QAbstractButton::click()
QtDartBindings_EXPORT void c_QAbstractButton__click(void *thisObj);

// tag=1067
//  QAbstractButton::clicked(bool checked)
QtDartBindings_EXPORT void c_QAbstractButton__clicked_bool(void *thisObj,
                                                           bool checked);

// tag=1078
QtDartBindings_EXPORT void
c_QAbstractButton__onClicked_bool(void *thisObj, void *contextQObject,
                                  void *callback);
// tag=1067
//  QAbstractButton::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QAbstractButton__customEvent_QEvent(void *thisObj,
                                                                 void *event_);

// tag=1067
//  QAbstractButton::devType() const
QtDartBindings_EXPORT int c_QAbstractButton__devType(void *thisObj);

// tag=1067
//  QAbstractButton::event(QEvent * e)
QtDartBindings_EXPORT bool c_QAbstractButton__event_QEvent(void *thisObj,
                                                           void *e_);

// tag=1067
//  QAbstractButton::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QAbstractButton__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                              void *event_);

// tag=1067
//  QAbstractButton::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool
c_QAbstractButton__focusNextPrevChild_bool(void *thisObj, bool next);

// tag=1067
//  QAbstractButton::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QAbstractButton__hasHeightForWidth(void *thisObj);

// tag=1067
//  QAbstractButton::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QAbstractButton__heightForWidth_int(void *thisObj,
                                                                int arg__1);

// tag=1067
//  QAbstractButton::hitButton(const QPoint & pos) const
QtDartBindings_EXPORT bool c_QAbstractButton__hitButton_QPoint(void *thisObj,
                                                               void *pos_);

// tag=1067
//  QAbstractButton::icon() const
QtDartBindings_EXPORT void *c_QAbstractButton__icon(void *thisObj);

// tag=1067
//  QAbstractButton::iconSize() const
QtDartBindings_EXPORT void *c_QAbstractButton__iconSize(void *thisObj);

// tag=1067
//  QAbstractButton::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void
c_QAbstractButton__initPainter_QPainter(void *thisObj, void *painter_);

// tag=1067
//  QAbstractButton::isCheckable() const
QtDartBindings_EXPORT bool c_QAbstractButton__isCheckable(void *thisObj);

// tag=1067
//  QAbstractButton::isChecked() const
QtDartBindings_EXPORT bool c_QAbstractButton__isChecked(void *thisObj);

// tag=1067
//  QAbstractButton::isDown() const
QtDartBindings_EXPORT bool c_QAbstractButton__isDown(void *thisObj);

// tag=1067
//  QAbstractButton::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QAbstractButton__leaveEvent_QEvent(void *thisObj,
                                                                void *event_);

// tag=1067
//  QAbstractButton::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QAbstractButton__minimumSizeHint(void *thisObj);

// tag=1067
//  QAbstractButton::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QAbstractButton__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                     void *event_);

// tag=1067
//  QAbstractButton::mouseMoveEvent(QMouseEvent * e)
QtDartBindings_EXPORT void
c_QAbstractButton__mouseMoveEvent_QMouseEvent(void *thisObj, void *e_);

// tag=1067
//  QAbstractButton::mousePressEvent(QMouseEvent * e)
QtDartBindings_EXPORT void
c_QAbstractButton__mousePressEvent_QMouseEvent(void *thisObj, void *e_);

// tag=1067
//  QAbstractButton::mouseReleaseEvent(QMouseEvent * e)
QtDartBindings_EXPORT void
c_QAbstractButton__mouseReleaseEvent_QMouseEvent(void *thisObj, void *e_);

// tag=1067
//  QAbstractButton::nextCheckState()
QtDartBindings_EXPORT void c_QAbstractButton__nextCheckState(void *thisObj);

// tag=1067
//  QAbstractButton::paintEvent(QPaintEvent * e)
QtDartBindings_EXPORT void
c_QAbstractButton__paintEvent_QPaintEvent(void *thisObj, void *e_);

// tag=1067
//  QAbstractButton::pressed()
QtDartBindings_EXPORT void c_QAbstractButton__pressed(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void c_QAbstractButton__onPressed(void *thisObj,
                                                        void *contextQObject,
                                                        void *callback);
// tag=1067
//  QAbstractButton::released()
QtDartBindings_EXPORT void c_QAbstractButton__released(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void c_QAbstractButton__onReleased(void *thisObj,
                                                         void *contextQObject,
                                                         void *callback);
// tag=1067
//  QAbstractButton::setAutoExclusive(bool arg__1)
QtDartBindings_EXPORT void
c_QAbstractButton__setAutoExclusive_bool(void *thisObj, bool arg__1);

// tag=1067
//  QAbstractButton::setAutoRepeat(bool arg__1)
QtDartBindings_EXPORT void c_QAbstractButton__setAutoRepeat_bool(void *thisObj,
                                                                 bool arg__1);

// tag=1067
//  QAbstractButton::setAutoRepeatDelay(int arg__1)
QtDartBindings_EXPORT void
c_QAbstractButton__setAutoRepeatDelay_int(void *thisObj, int arg__1);

// tag=1067
//  QAbstractButton::setAutoRepeatInterval(int arg__1)
QtDartBindings_EXPORT void
c_QAbstractButton__setAutoRepeatInterval_int(void *thisObj, int arg__1);

// tag=1067
//  QAbstractButton::setCheckable(bool arg__1)
QtDartBindings_EXPORT void c_QAbstractButton__setCheckable_bool(void *thisObj,
                                                                bool arg__1);

// tag=1067
//  QAbstractButton::setChecked(bool arg__1)
QtDartBindings_EXPORT void c_QAbstractButton__setChecked_bool(void *thisObj,
                                                              bool arg__1);

// tag=1067
//  QAbstractButton::setDown(bool arg__1)
QtDartBindings_EXPORT void c_QAbstractButton__setDown_bool(void *thisObj,
                                                           bool arg__1);

// tag=1067
//  QAbstractButton::setIcon(const QIcon & icon)
QtDartBindings_EXPORT void c_QAbstractButton__setIcon_QIcon(void *thisObj,
                                                            void *icon_);

// tag=1067
//  QAbstractButton::setIconSize(const QSize & size)
QtDartBindings_EXPORT void c_QAbstractButton__setIconSize_QSize(void *thisObj,
                                                                void *size_);

// tag=1067
//  QAbstractButton::setShortcut(const QKeySequence & key)
QtDartBindings_EXPORT void
c_QAbstractButton__setShortcut_QKeySequence(void *thisObj, void *key_);

// tag=1067
//  QAbstractButton::setText(const QString & text)
QtDartBindings_EXPORT void
c_QAbstractButton__setText_QString(void *thisObj, const char *text_);

// tag=1067
//  QAbstractButton::setVisible(bool visible)
QtDartBindings_EXPORT void c_QAbstractButton__setVisible_bool(void *thisObj,
                                                              bool visible);

// tag=1067
//  QAbstractButton::sharedPainter() const
QtDartBindings_EXPORT void *c_QAbstractButton__sharedPainter(void *thisObj);

// tag=1067
//  QAbstractButton::shortcut() const
QtDartBindings_EXPORT void *c_QAbstractButton__shortcut(void *thisObj);

// tag=1067
//  QAbstractButton::sizeHint() const
QtDartBindings_EXPORT void *c_QAbstractButton__sizeHint(void *thisObj);

// tag=1067
//  QAbstractButton::text() const
QtDartBindings_EXPORT void *c_QAbstractButton__text(void *thisObj);

// tag=1067
//  QAbstractButton::toggle()
QtDartBindings_EXPORT void c_QAbstractButton__toggle(void *thisObj);

// tag=1067
//  QAbstractButton::toggled(bool checked)
QtDartBindings_EXPORT void c_QAbstractButton__toggled_bool(void *thisObj,
                                                           bool checked);

// tag=1078
QtDartBindings_EXPORT void
c_QAbstractButton__onToggled_bool(void *thisObj, void *contextQObject,
                                  void *callback);
// tag=1067
//  QAbstractButton::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QAbstractButton__tr_char_char_int(const char *s, const char *c, int n);

// tag=1066
QtDartBindings_EXPORT void c_QAbstractButton__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QAbstractButton__registerVirtualMethodCallback(void *ptr, void *callback,
                                                 int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QAbstractButton_Finalizer(void *, void *cppObj,
                                                       void *);
}
