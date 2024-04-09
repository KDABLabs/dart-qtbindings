/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qcoreevent.h>
#include <qevent.h>
#include <qicon.h>
#include <qkeysequence.h>
#include <qmenu.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpoint.h>
#include <qpushbutton.h>
#include <qsize.h>
#include <qstring.h>
#include <qwidget.h>

namespace QtDartBindings_wrappersNS {
class QPushButton_wrapper : public ::QPushButton {
public:
  ~QPushButton_wrapper();
  QPushButton_wrapper(QWidget *parent = nullptr);
  QPushButton_wrapper(const QIcon &icon, const QString &text,
                      QWidget *parent = nullptr);
  QPushButton_wrapper(const QString &text, QWidget *parent = nullptr);
  bool autoDefault() const;
  virtual void changeEvent(QEvent *e);
  virtual void changeEvent_nocallback(QEvent *e);
  virtual void checkStateSet();
  virtual void checkStateSet_nocallback();
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
  virtual void initPainter(QPainter *painter) const;
  virtual void initPainter_nocallback(QPainter *painter) const;
  bool isDefault() const;
  bool isFlat() const;
  virtual void leaveEvent(QEvent *event);
  virtual void leaveEvent_nocallback(QEvent *event);
  QMenu *menu() const;
  virtual QSize minimumSizeHint() const;
  virtual QSize minimumSizeHint_nocallback() const;
  virtual void mouseDoubleClickEvent(QMouseEvent *event);
  virtual void mouseDoubleClickEvent_nocallback(QMouseEvent *event);
  virtual void mouseMoveEvent(QMouseEvent *arg__1);
  virtual void mouseMoveEvent_nocallback(QMouseEvent *arg__1);
  virtual void mousePressEvent(QMouseEvent *e);
  virtual void mousePressEvent_nocallback(QMouseEvent *e);
  virtual void mouseReleaseEvent(QMouseEvent *e);
  virtual void mouseReleaseEvent_nocallback(QMouseEvent *e);
  virtual void nextCheckState();
  virtual void nextCheckState_nocallback();
  virtual void paintEvent(QPaintEvent *arg__1);
  virtual void paintEvent_nocallback(QPaintEvent *arg__1);
  void setAutoDefault(bool arg__1);
  void setDefault(bool arg__1);
  void setFlat(bool arg__1);
  void setMenu(QMenu *menu);
  virtual void setVisible(bool visible);
  virtual void setVisible_nocallback(bool visible);
  virtual QPainter *sharedPainter() const;
  virtual QPainter *sharedPainter_nocallback() const;
  void showMenu();
  virtual QSize sizeHint() const;
  virtual QSize sizeHint_nocallback() const;
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
  typedef void (*Callback_mouseMoveEvent)(void *, QMouseEvent *arg__1);
  Callback_mouseMoveEvent m_mouseMoveEventCallback = nullptr;
  typedef void (*Callback_mousePressEvent)(void *, QMouseEvent *e);
  Callback_mousePressEvent m_mousePressEventCallback = nullptr;
  typedef void (*Callback_mouseReleaseEvent)(void *, QMouseEvent *e);
  Callback_mouseReleaseEvent m_mouseReleaseEventCallback = nullptr;
  typedef void (*Callback_nextCheckState)(void *);
  Callback_nextCheckState m_nextCheckStateCallback = nullptr;
  typedef void (*Callback_paintEvent)(void *, QPaintEvent *arg__1);
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
// QPushButton::QPushButton(QWidget * parent)
QtDartBindings_EXPORT void *c_QPushButton__constructor_QWidget(void *parent_);
// QPushButton::QPushButton(const QIcon & icon, const QString & text, QWidget *
// parent)
QtDartBindings_EXPORT void *
c_QPushButton__constructor_QIcon_QString_QWidget(void *icon_, const char *text_,
                                                 void *parent_);
// QPushButton::QPushButton(const QString & text, QWidget * parent)
QtDartBindings_EXPORT void *
c_QPushButton__constructor_QString_QWidget(const char *text_, void *parent_);
// QPushButton::autoDefault() const
QtDartBindings_EXPORT bool c_QPushButton__autoDefault(void *thisObj);
// QPushButton::changeEvent(QEvent * e)
QtDartBindings_EXPORT void c_QPushButton__changeEvent_QEvent(void *thisObj,
                                                             void *e_);
// QPushButton::checkStateSet()
QtDartBindings_EXPORT void c_QPushButton__checkStateSet(void *thisObj);
// QPushButton::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QPushButton__customEvent_QEvent(void *thisObj,
                                                             void *event_);
// QPushButton::devType() const
QtDartBindings_EXPORT int c_QPushButton__devType(void *thisObj);
// QPushButton::event(QEvent * e)
QtDartBindings_EXPORT bool c_QPushButton__event_QEvent(void *thisObj, void *e_);
// QPushButton::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QPushButton__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                          void *event_);
// QPushButton::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QPushButton__focusNextPrevChild_bool(void *thisObj,
                                                                  bool next);
// QPushButton::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QPushButton__hasHeightForWidth(void *thisObj);
// QPushButton::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QPushButton__heightForWidth_int(void *thisObj,
                                                            int arg__1);
// QPushButton::hitButton(const QPoint & pos) const
QtDartBindings_EXPORT bool c_QPushButton__hitButton_QPoint(void *thisObj,
                                                           void *pos_);
// QPushButton::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QPushButton__initPainter_QPainter(void *thisObj,
                                                               void *painter_);
// QPushButton::isDefault() const
QtDartBindings_EXPORT bool c_QPushButton__isDefault(void *thisObj);
// QPushButton::isFlat() const
QtDartBindings_EXPORT bool c_QPushButton__isFlat(void *thisObj);
// QPushButton::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QPushButton__leaveEvent_QEvent(void *thisObj,
                                                            void *event_);
// QPushButton::menu() const
QtDartBindings_EXPORT void *c_QPushButton__menu(void *thisObj);
// QPushButton::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QPushButton__minimumSizeHint(void *thisObj);
// QPushButton::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QPushButton__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);
// QPushButton::mouseMoveEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QPushButton__mouseMoveEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QPushButton::mousePressEvent(QMouseEvent * e)
QtDartBindings_EXPORT void
c_QPushButton__mousePressEvent_QMouseEvent(void *thisObj, void *e_);
// QPushButton::mouseReleaseEvent(QMouseEvent * e)
QtDartBindings_EXPORT void
c_QPushButton__mouseReleaseEvent_QMouseEvent(void *thisObj, void *e_);
// QPushButton::nextCheckState()
QtDartBindings_EXPORT void c_QPushButton__nextCheckState(void *thisObj);
// QPushButton::paintEvent(QPaintEvent * arg__1)
QtDartBindings_EXPORT void c_QPushButton__paintEvent_QPaintEvent(void *thisObj,
                                                                 void *arg__1_);
// QPushButton::setAutoDefault(bool arg__1)
QtDartBindings_EXPORT void c_QPushButton__setAutoDefault_bool(void *thisObj,
                                                              bool arg__1);
// QPushButton::setDefault(bool arg__1)
QtDartBindings_EXPORT void c_QPushButton__setDefault_bool(void *thisObj,
                                                          bool arg__1);
// QPushButton::setFlat(bool arg__1)
QtDartBindings_EXPORT void c_QPushButton__setFlat_bool(void *thisObj,
                                                       bool arg__1);
// QPushButton::setMenu(QMenu * menu)
QtDartBindings_EXPORT void c_QPushButton__setMenu_QMenu(void *thisObj,
                                                        void *menu_);
// QPushButton::setVisible(bool visible)
QtDartBindings_EXPORT void c_QPushButton__setVisible_bool(void *thisObj,
                                                          bool visible);
// QPushButton::sharedPainter() const
QtDartBindings_EXPORT void *c_QPushButton__sharedPainter(void *thisObj);
// QPushButton::showMenu()
QtDartBindings_EXPORT void c_QPushButton__showMenu(void *thisObj);
// QPushButton::sizeHint() const
QtDartBindings_EXPORT void *c_QPushButton__sizeHint(void *thisObj);
// QPushButton::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QPushButton__tr_char_char_int(const char *s, const char *c, int n);
QtDartBindings_EXPORT void c_QPushButton__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QPushButton__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId);
QtDartBindings_EXPORT void c_QPushButton_Finalizer(void *cppObj);
}
