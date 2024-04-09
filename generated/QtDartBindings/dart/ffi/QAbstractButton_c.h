/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
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
class QAbstractButton_wrapper : public ::QAbstractButton {
public:
  ~QAbstractButton_wrapper();
  QAbstractButton_wrapper(QWidget *parent = nullptr);
  void animateClick();
  bool autoExclusive() const;
  bool autoRepeat() const;
  int autoRepeatDelay() const;
  int autoRepeatInterval() const;
  virtual void changeEvent(QEvent *e);
  virtual void changeEvent_nocallback(QEvent *e);
  virtual void checkStateSet();
  virtual void checkStateSet_nocallback();
  void click();
  void clicked(bool checked = false);
  virtual void customEvent(QEvent *event);
  virtual void customEvent_nocallback(QEvent *event);
  virtual int devType() const;
  virtual int devType_nocallback() const;
  virtual bool event(QEvent *e);
  virtual bool event_nocallback(QEvent *e);
  virtual bool eventFilter(QObject *watched, QEvent *event);
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  virtual bool focusNextPrevChild(bool next);
  virtual bool focusNextPrevChild_nocallback(bool next);
  virtual bool hasHeightForWidth() const;
  virtual bool hasHeightForWidth_nocallback() const;
  virtual int heightForWidth(int arg__1) const;
  virtual int heightForWidth_nocallback(int arg__1) const;
  virtual bool hitButton(const QPoint &pos) const;
  virtual bool hitButton_nocallback(const QPoint &pos) const;
  QIcon icon() const;
  QSize iconSize() const;
  virtual void initPainter(QPainter *painter) const;
  virtual void initPainter_nocallback(QPainter *painter) const;
  bool isCheckable() const;
  bool isChecked() const;
  bool isDown() const;
  virtual void leaveEvent(QEvent *event);
  virtual void leaveEvent_nocallback(QEvent *event);
  virtual QSize minimumSizeHint() const;
  virtual QSize minimumSizeHint_nocallback() const;
  virtual void mouseDoubleClickEvent(QMouseEvent *event);
  virtual void mouseDoubleClickEvent_nocallback(QMouseEvent *event);
  virtual void mouseMoveEvent(QMouseEvent *e);
  virtual void mouseMoveEvent_nocallback(QMouseEvent *e);
  virtual void mousePressEvent(QMouseEvent *e);
  virtual void mousePressEvent_nocallback(QMouseEvent *e);
  virtual void mouseReleaseEvent(QMouseEvent *e);
  virtual void mouseReleaseEvent_nocallback(QMouseEvent *e);
  virtual void nextCheckState();
  virtual void nextCheckState_nocallback();
  virtual void paintEvent(QPaintEvent *e);
  virtual void paintEvent_nocallback(QPaintEvent *e);
  void pressed();
  void released();
  void setAutoExclusive(bool arg__1);
  void setAutoRepeat(bool arg__1);
  void setAutoRepeatDelay(int arg__1);
  void setAutoRepeatInterval(int arg__1);
  void setCheckable(bool arg__1);
  void setChecked(bool arg__1);
  void setDown(bool arg__1);
  void setIcon(const QIcon &icon);
  void setIconSize(const QSize &size);
  void setShortcut(const QKeySequence &key);
  void setText(const QString &text);
  virtual void setVisible(bool visible);
  virtual void setVisible_nocallback(bool visible);
  virtual QPainter *sharedPainter() const;
  virtual QPainter *sharedPainter_nocallback() const;
  QKeySequence shortcut() const;
  virtual QSize sizeHint() const;
  virtual QSize sizeHint_nocallback() const;
  QString text() const;
  void toggle();
  void toggled(bool checked);
  static QString tr(const char *s, const char *c, int n);
  typedef void (*Callback_changeEvent)(void *, QEvent *e);
  Callback_changeEvent m_changeEventCallback = nullptr;
  typedef void (*Callback_checkStateSet)(void *);
  Callback_checkStateSet m_checkStateSetCallback = nullptr;
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  typedef int (*Callback_devType)(void *);
  Callback_devType m_devTypeCallback = nullptr;
  typedef bool (*Callback_event)(void *, QEvent *e);
  Callback_event m_eventCallback = nullptr;
  typedef bool (*Callback_eventFilter)(void *, QObject *watched, QEvent *event);
  Callback_eventFilter m_eventFilterCallback = nullptr;
  typedef bool (*Callback_focusNextPrevChild)(void *, bool next);
  Callback_focusNextPrevChild m_focusNextPrevChildCallback = nullptr;
  typedef bool (*Callback_hasHeightForWidth)(void *);
  Callback_hasHeightForWidth m_hasHeightForWidthCallback = nullptr;
  typedef int (*Callback_heightForWidth)(void *, int arg__1);
  Callback_heightForWidth m_heightForWidthCallback = nullptr;
  typedef bool (*Callback_hitButton)(void *, const QPoint &pos);
  Callback_hitButton m_hitButtonCallback = nullptr;
  typedef void (*Callback_initPainter)(void *, QPainter *painter);
  Callback_initPainter m_initPainterCallback = nullptr;
  typedef void (*Callback_leaveEvent)(void *, QEvent *event);
  Callback_leaveEvent m_leaveEventCallback = nullptr;
  typedef QSize *(*Callback_minimumSizeHint)(void *);
  Callback_minimumSizeHint m_minimumSizeHintCallback = nullptr;
  typedef void (*Callback_mouseDoubleClickEvent)(void *, QMouseEvent *event);
  Callback_mouseDoubleClickEvent m_mouseDoubleClickEventCallback = nullptr;
  typedef void (*Callback_mouseMoveEvent)(void *, QMouseEvent *e);
  Callback_mouseMoveEvent m_mouseMoveEventCallback = nullptr;
  typedef void (*Callback_mousePressEvent)(void *, QMouseEvent *e);
  Callback_mousePressEvent m_mousePressEventCallback = nullptr;
  typedef void (*Callback_mouseReleaseEvent)(void *, QMouseEvent *e);
  Callback_mouseReleaseEvent m_mouseReleaseEventCallback = nullptr;
  typedef void (*Callback_nextCheckState)(void *);
  Callback_nextCheckState m_nextCheckStateCallback = nullptr;
  typedef void (*Callback_paintEvent)(void *, QPaintEvent *e);
  Callback_paintEvent m_paintEventCallback = nullptr;
  typedef void (*Callback_setVisible)(void *, bool visible);
  Callback_setVisible m_setVisibleCallback = nullptr;
  typedef QPainter *(*Callback_sharedPainter)(void *);
  Callback_sharedPainter m_sharedPainterCallback = nullptr;
  typedef QSize *(*Callback_sizeHint)(void *);
  Callback_sizeHint m_sizeHintCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QAbstractButton::QAbstractButton(QWidget * parent)
QtDartBindings_EXPORT void *
c_QAbstractButton__constructor_QWidget(void *parent_);
// QAbstractButton::animateClick()
QtDartBindings_EXPORT void c_QAbstractButton__animateClick(void *thisObj);
// QAbstractButton::autoExclusive() const
QtDartBindings_EXPORT bool c_QAbstractButton__autoExclusive(void *thisObj);
// QAbstractButton::autoRepeat() const
QtDartBindings_EXPORT bool c_QAbstractButton__autoRepeat(void *thisObj);
// QAbstractButton::autoRepeatDelay() const
QtDartBindings_EXPORT int c_QAbstractButton__autoRepeatDelay(void *thisObj);
// QAbstractButton::autoRepeatInterval() const
QtDartBindings_EXPORT int c_QAbstractButton__autoRepeatInterval(void *thisObj);
// QAbstractButton::changeEvent(QEvent * e)
QtDartBindings_EXPORT void c_QAbstractButton__changeEvent_QEvent(void *thisObj,
                                                                 void *e_);
// QAbstractButton::checkStateSet()
QtDartBindings_EXPORT void c_QAbstractButton__checkStateSet(void *thisObj);
// QAbstractButton::click()
QtDartBindings_EXPORT void c_QAbstractButton__click(void *thisObj);
// QAbstractButton::clicked(bool checked)
QtDartBindings_EXPORT void c_QAbstractButton__clicked_bool(void *thisObj,
                                                           bool checked);
QtDartBindings_EXPORT void c_QAbstractButton__onClicked_bool(
    void *thisObj, void *contextQObject,
    void *callback); // QAbstractButton::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QAbstractButton__customEvent_QEvent(void *thisObj,
                                                                 void *event_);
// QAbstractButton::devType() const
QtDartBindings_EXPORT int c_QAbstractButton__devType(void *thisObj);
// QAbstractButton::event(QEvent * e)
QtDartBindings_EXPORT bool c_QAbstractButton__event_QEvent(void *thisObj,
                                                           void *e_);
// QAbstractButton::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QAbstractButton__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                              void *event_);
// QAbstractButton::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool
c_QAbstractButton__focusNextPrevChild_bool(void *thisObj, bool next);
// QAbstractButton::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QAbstractButton__hasHeightForWidth(void *thisObj);
// QAbstractButton::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QAbstractButton__heightForWidth_int(void *thisObj,
                                                                int arg__1);
// QAbstractButton::hitButton(const QPoint & pos) const
QtDartBindings_EXPORT bool c_QAbstractButton__hitButton_QPoint(void *thisObj,
                                                               void *pos_);
// QAbstractButton::icon() const
QtDartBindings_EXPORT void *c_QAbstractButton__icon(void *thisObj);
// QAbstractButton::iconSize() const
QtDartBindings_EXPORT void *c_QAbstractButton__iconSize(void *thisObj);
// QAbstractButton::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void
c_QAbstractButton__initPainter_QPainter(void *thisObj, void *painter_);
// QAbstractButton::isCheckable() const
QtDartBindings_EXPORT bool c_QAbstractButton__isCheckable(void *thisObj);
// QAbstractButton::isChecked() const
QtDartBindings_EXPORT bool c_QAbstractButton__isChecked(void *thisObj);
// QAbstractButton::isDown() const
QtDartBindings_EXPORT bool c_QAbstractButton__isDown(void *thisObj);
// QAbstractButton::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QAbstractButton__leaveEvent_QEvent(void *thisObj,
                                                                void *event_);
// QAbstractButton::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QAbstractButton__minimumSizeHint(void *thisObj);
// QAbstractButton::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QAbstractButton__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                     void *event_);
// QAbstractButton::mouseMoveEvent(QMouseEvent * e)
QtDartBindings_EXPORT void
c_QAbstractButton__mouseMoveEvent_QMouseEvent(void *thisObj, void *e_);
// QAbstractButton::mousePressEvent(QMouseEvent * e)
QtDartBindings_EXPORT void
c_QAbstractButton__mousePressEvent_QMouseEvent(void *thisObj, void *e_);
// QAbstractButton::mouseReleaseEvent(QMouseEvent * e)
QtDartBindings_EXPORT void
c_QAbstractButton__mouseReleaseEvent_QMouseEvent(void *thisObj, void *e_);
// QAbstractButton::nextCheckState()
QtDartBindings_EXPORT void c_QAbstractButton__nextCheckState(void *thisObj);
// QAbstractButton::paintEvent(QPaintEvent * e)
QtDartBindings_EXPORT void
c_QAbstractButton__paintEvent_QPaintEvent(void *thisObj, void *e_);
// QAbstractButton::pressed()
QtDartBindings_EXPORT void c_QAbstractButton__pressed(void *thisObj);
QtDartBindings_EXPORT void
c_QAbstractButton__onPressed(void *thisObj, void *contextQObject,
                             void *callback); // QAbstractButton::released()
QtDartBindings_EXPORT void c_QAbstractButton__released(void *thisObj);
QtDartBindings_EXPORT void c_QAbstractButton__onReleased(
    void *thisObj, void *contextQObject,
    void *callback); // QAbstractButton::setAutoExclusive(bool arg__1)
QtDartBindings_EXPORT void
c_QAbstractButton__setAutoExclusive_bool(void *thisObj, bool arg__1);
// QAbstractButton::setAutoRepeat(bool arg__1)
QtDartBindings_EXPORT void c_QAbstractButton__setAutoRepeat_bool(void *thisObj,
                                                                 bool arg__1);
// QAbstractButton::setAutoRepeatDelay(int arg__1)
QtDartBindings_EXPORT void
c_QAbstractButton__setAutoRepeatDelay_int(void *thisObj, int arg__1);
// QAbstractButton::setAutoRepeatInterval(int arg__1)
QtDartBindings_EXPORT void
c_QAbstractButton__setAutoRepeatInterval_int(void *thisObj, int arg__1);
// QAbstractButton::setCheckable(bool arg__1)
QtDartBindings_EXPORT void c_QAbstractButton__setCheckable_bool(void *thisObj,
                                                                bool arg__1);
// QAbstractButton::setChecked(bool arg__1)
QtDartBindings_EXPORT void c_QAbstractButton__setChecked_bool(void *thisObj,
                                                              bool arg__1);
// QAbstractButton::setDown(bool arg__1)
QtDartBindings_EXPORT void c_QAbstractButton__setDown_bool(void *thisObj,
                                                           bool arg__1);
// QAbstractButton::setIcon(const QIcon & icon)
QtDartBindings_EXPORT void c_QAbstractButton__setIcon_QIcon(void *thisObj,
                                                            void *icon_);
// QAbstractButton::setIconSize(const QSize & size)
QtDartBindings_EXPORT void c_QAbstractButton__setIconSize_QSize(void *thisObj,
                                                                void *size_);
// QAbstractButton::setShortcut(const QKeySequence & key)
QtDartBindings_EXPORT void
c_QAbstractButton__setShortcut_QKeySequence(void *thisObj, void *key_);
// QAbstractButton::setText(const QString & text)
QtDartBindings_EXPORT void
c_QAbstractButton__setText_QString(void *thisObj, const char *text_);
// QAbstractButton::setVisible(bool visible)
QtDartBindings_EXPORT void c_QAbstractButton__setVisible_bool(void *thisObj,
                                                              bool visible);
// QAbstractButton::sharedPainter() const
QtDartBindings_EXPORT void *c_QAbstractButton__sharedPainter(void *thisObj);
// QAbstractButton::shortcut() const
QtDartBindings_EXPORT void *c_QAbstractButton__shortcut(void *thisObj);
// QAbstractButton::sizeHint() const
QtDartBindings_EXPORT void *c_QAbstractButton__sizeHint(void *thisObj);
// QAbstractButton::text() const
QtDartBindings_EXPORT void *c_QAbstractButton__text(void *thisObj);
// QAbstractButton::toggle()
QtDartBindings_EXPORT void c_QAbstractButton__toggle(void *thisObj);
// QAbstractButton::toggled(bool checked)
QtDartBindings_EXPORT void c_QAbstractButton__toggled_bool(void *thisObj,
                                                           bool checked);
QtDartBindings_EXPORT void c_QAbstractButton__onToggled_bool(
    void *thisObj, void *contextQObject,
    void *
        callback); // QAbstractButton::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QAbstractButton__tr_char_char_int(const char *s, const char *c, int n);
QtDartBindings_EXPORT void c_QAbstractButton__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QAbstractButton__registerVirtualMethodCallback(void *ptr, void *callback,
                                                 int methodId);
QtDartBindings_EXPORT void c_QAbstractButton_Finalizer(void *cppObj);
}
