/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
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
#include <qstatusbar.h>
#include <qstring.h>
#include <qstyle.h>
#include <qwidget.h>
#include <qwindow.h>

namespace QtDartBindings_wrappersNS {
class QStatusBar_wrapper : public ::QStatusBar {
public:
  ~QStatusBar_wrapper();
  QStatusBar_wrapper(QWidget *parent = nullptr);
  void addPermanentWidget(QWidget *widget, int stretch = 0);
  void addWidget(QWidget *widget, int stretch = 0);
  virtual void changeEvent(QEvent *arg__1);
  virtual void changeEvent_nocallback(QEvent *arg__1);
  void clearMessage();
  QString currentMessage() const;
  virtual void customEvent(QEvent *event);
  virtual void customEvent_nocallback(QEvent *event);
  virtual int devType() const;
  virtual int devType_nocallback() const;
  virtual bool event(QEvent *arg__1);
  virtual bool event_nocallback(QEvent *arg__1);
  virtual bool eventFilter(QObject *watched, QEvent *event);
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  virtual bool focusNextPrevChild(bool next);
  virtual bool focusNextPrevChild_nocallback(bool next);
  virtual bool hasHeightForWidth() const;
  virtual bool hasHeightForWidth_nocallback() const;
  virtual int heightForWidth(int arg__1) const;
  virtual int heightForWidth_nocallback(int arg__1) const;
  void hideOrShow();
  virtual void initPainter(QPainter *painter) const;
  virtual void initPainter_nocallback(QPainter *painter) const;
  int insertPermanentWidget(int index, QWidget *widget, int stretch = 0);
  int insertWidget(int index, QWidget *widget, int stretch = 0);
  bool isSizeGripEnabled() const;
  virtual void leaveEvent(QEvent *event);
  virtual void leaveEvent_nocallback(QEvent *event);
  void messageChanged(const QString &text);
  virtual QSize minimumSizeHint() const;
  virtual QSize minimumSizeHint_nocallback() const;
  virtual void mouseDoubleClickEvent(QMouseEvent *event);
  virtual void mouseDoubleClickEvent_nocallback(QMouseEvent *event);
  virtual void mouseMoveEvent(QMouseEvent *event);
  virtual void mouseMoveEvent_nocallback(QMouseEvent *event);
  virtual void mousePressEvent(QMouseEvent *event);
  virtual void mousePressEvent_nocallback(QMouseEvent *event);
  virtual void mouseReleaseEvent(QMouseEvent *event);
  virtual void mouseReleaseEvent_nocallback(QMouseEvent *event);
  virtual void paintEvent(QPaintEvent *arg__1);
  virtual void paintEvent_nocallback(QPaintEvent *arg__1);
  void reformat();
  void removeWidget(QWidget *widget);
  void setSizeGripEnabled(bool arg__1);
  virtual void setVisible(bool visible);
  virtual void setVisible_nocallback(bool visible);
  virtual QPainter *sharedPainter() const;
  virtual QPainter *sharedPainter_nocallback() const;
  void showMessage(const QString &text, int timeout = 0);
  virtual QSize sizeHint() const;
  virtual QSize sizeHint_nocallback() const;
  static QString tr(const char *s, const char *c, int n);
  typedef void (*Callback_changeEvent)(void *, QEvent *arg__1);
  Callback_changeEvent m_changeEventCallback = nullptr;
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  typedef int (*Callback_devType)(void *);
  Callback_devType m_devTypeCallback = nullptr;
  typedef bool (*Callback_event)(void *, QEvent *arg__1);
  Callback_event m_eventCallback = nullptr;
  typedef bool (*Callback_eventFilter)(void *, QObject *watched, QEvent *event);
  Callback_eventFilter m_eventFilterCallback = nullptr;
  typedef bool (*Callback_focusNextPrevChild)(void *, bool next);
  Callback_focusNextPrevChild m_focusNextPrevChildCallback = nullptr;
  typedef bool (*Callback_hasHeightForWidth)(void *);
  Callback_hasHeightForWidth m_hasHeightForWidthCallback = nullptr;
  typedef int (*Callback_heightForWidth)(void *, int arg__1);
  Callback_heightForWidth m_heightForWidthCallback = nullptr;
  typedef void (*Callback_initPainter)(void *, QPainter *painter);
  Callback_initPainter m_initPainterCallback = nullptr;
  typedef void (*Callback_leaveEvent)(void *, QEvent *event);
  Callback_leaveEvent m_leaveEventCallback = nullptr;
  typedef QSize *(*Callback_minimumSizeHint)(void *);
  Callback_minimumSizeHint m_minimumSizeHintCallback = nullptr;
  typedef void (*Callback_mouseDoubleClickEvent)(void *, QMouseEvent *event);
  Callback_mouseDoubleClickEvent m_mouseDoubleClickEventCallback = nullptr;
  typedef void (*Callback_mouseMoveEvent)(void *, QMouseEvent *event);
  Callback_mouseMoveEvent m_mouseMoveEventCallback = nullptr;
  typedef void (*Callback_mousePressEvent)(void *, QMouseEvent *event);
  Callback_mousePressEvent m_mousePressEventCallback = nullptr;
  typedef void (*Callback_mouseReleaseEvent)(void *, QMouseEvent *event);
  Callback_mouseReleaseEvent m_mouseReleaseEventCallback = nullptr;
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
// QStatusBar::QStatusBar(QWidget * parent)
QtDartBindings_EXPORT void *c_QStatusBar__constructor_QWidget(void *parent_);
// QStatusBar::addPermanentWidget(QWidget * widget, int stretch)
QtDartBindings_EXPORT void
c_QStatusBar__addPermanentWidget_QWidget_int(void *thisObj, void *widget_,
                                             int stretch);
// QStatusBar::addWidget(QWidget * widget, int stretch)
QtDartBindings_EXPORT void
c_QStatusBar__addWidget_QWidget_int(void *thisObj, void *widget_, int stretch);
// QStatusBar::changeEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QStatusBar__changeEvent_QEvent(void *thisObj,
                                                            void *arg__1_);
// QStatusBar::clearMessage()
QtDartBindings_EXPORT void c_QStatusBar__clearMessage(void *thisObj);
// QStatusBar::currentMessage() const
QtDartBindings_EXPORT void *c_QStatusBar__currentMessage(void *thisObj);
// QStatusBar::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QStatusBar__customEvent_QEvent(void *thisObj,
                                                            void *event_);
// QStatusBar::devType() const
QtDartBindings_EXPORT int c_QStatusBar__devType(void *thisObj);
// QStatusBar::event(QEvent * arg__1)
QtDartBindings_EXPORT bool c_QStatusBar__event_QEvent(void *thisObj,
                                                      void *arg__1_);
// QStatusBar::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QStatusBar__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                         void *event_);
// QStatusBar::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QStatusBar__focusNextPrevChild_bool(void *thisObj,
                                                                 bool next);
// QStatusBar::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QStatusBar__hasHeightForWidth(void *thisObj);
// QStatusBar::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QStatusBar__heightForWidth_int(void *thisObj,
                                                           int arg__1);
// QStatusBar::hideOrShow()
QtDartBindings_EXPORT void c_QStatusBar__hideOrShow(void *thisObj);
// QStatusBar::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QStatusBar__initPainter_QPainter(void *thisObj,
                                                              void *painter_);
// QStatusBar::insertPermanentWidget(int index, QWidget * widget, int stretch)
QtDartBindings_EXPORT int
c_QStatusBar__insertPermanentWidget_int_QWidget_int(void *thisObj, int index,
                                                    void *widget_, int stretch);
// QStatusBar::insertWidget(int index, QWidget * widget, int stretch)
QtDartBindings_EXPORT int
c_QStatusBar__insertWidget_int_QWidget_int(void *thisObj, int index,
                                           void *widget_, int stretch);
// QStatusBar::isSizeGripEnabled() const
QtDartBindings_EXPORT bool c_QStatusBar__isSizeGripEnabled(void *thisObj);
// QStatusBar::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QStatusBar__leaveEvent_QEvent(void *thisObj,
                                                           void *event_);
// QStatusBar::messageChanged(const QString & text)
QtDartBindings_EXPORT void
c_QStatusBar__messageChanged_QString(void *thisObj, const char *text_);
QtDartBindings_EXPORT void c_QStatusBar__onMessageChanged_QString(
    void *thisObj, void *contextQObject,
    void *callback); // QStatusBar::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QStatusBar__minimumSizeHint(void *thisObj);
// QStatusBar::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QStatusBar__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);
// QStatusBar::mouseMoveEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QStatusBar__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_);
// QStatusBar::mousePressEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QStatusBar__mousePressEvent_QMouseEvent(void *thisObj, void *event_);
// QStatusBar::mouseReleaseEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QStatusBar__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_);
// QStatusBar::paintEvent(QPaintEvent * arg__1)
QtDartBindings_EXPORT void c_QStatusBar__paintEvent_QPaintEvent(void *thisObj,
                                                                void *arg__1_);
// QStatusBar::reformat()
QtDartBindings_EXPORT void c_QStatusBar__reformat(void *thisObj);
// QStatusBar::removeWidget(QWidget * widget)
QtDartBindings_EXPORT void c_QStatusBar__removeWidget_QWidget(void *thisObj,
                                                              void *widget_);
// QStatusBar::setSizeGripEnabled(bool arg__1)
QtDartBindings_EXPORT void c_QStatusBar__setSizeGripEnabled_bool(void *thisObj,
                                                                 bool arg__1);
// QStatusBar::setVisible(bool visible)
QtDartBindings_EXPORT void c_QStatusBar__setVisible_bool(void *thisObj,
                                                         bool visible);
// QStatusBar::sharedPainter() const
QtDartBindings_EXPORT void *c_QStatusBar__sharedPainter(void *thisObj);
// QStatusBar::showMessage(const QString & text, int timeout)
QtDartBindings_EXPORT void
c_QStatusBar__showMessage_QString_int(void *thisObj, const char *text_,
                                      int timeout);
// QStatusBar::sizeHint() const
QtDartBindings_EXPORT void *c_QStatusBar__sizeHint(void *thisObj);
// QStatusBar::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QStatusBar__tr_char_char_int(const char *s, const char *c, int n);
QtDartBindings_EXPORT void c_QStatusBar__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QStatusBar__registerVirtualMethodCallback(void *ptr, void *callback,
                                            int methodId);
QtDartBindings_EXPORT void c_QStatusBar_Finalizer(void *cppObj);
}
