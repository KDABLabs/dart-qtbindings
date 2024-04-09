/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qabstractscrollarea.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qobject.h>
#include <qpainter.h>
#include <qrect.h>
#include <qsize.h>
#include <qstring.h>
#include <qwidget.h>

namespace QtDartBindings_wrappersNS {
class QAbstractScrollArea_wrapper : public ::QAbstractScrollArea {
public:
  ~QAbstractScrollArea_wrapper();
  QAbstractScrollArea_wrapper(QWidget *parent = nullptr);
  virtual void changeEvent(QEvent *arg__1);
  virtual void changeEvent_nocallback(QEvent *arg__1);
  QWidget *cornerWidget() const;
  virtual void customEvent(QEvent *event);
  virtual void customEvent_nocallback(QEvent *event);
  virtual int devType() const;
  virtual int devType_nocallback() const;
  virtual bool event(QEvent *arg__1);
  virtual bool event_nocallback(QEvent *arg__1);
  virtual bool eventFilter(QObject *arg__1, QEvent *arg__2);
  virtual bool eventFilter_nocallback(QObject *arg__1, QEvent *arg__2);
  virtual bool focusNextPrevChild(bool next);
  virtual bool focusNextPrevChild_nocallback(bool next);
  virtual bool hasHeightForWidth() const;
  virtual bool hasHeightForWidth_nocallback() const;
  virtual int heightForWidth(int arg__1) const;
  virtual int heightForWidth_nocallback(int arg__1) const;
  virtual void initPainter(QPainter *painter) const;
  virtual void initPainter_nocallback(QPainter *painter) const;
  virtual void leaveEvent(QEvent *event);
  virtual void leaveEvent_nocallback(QEvent *event);
  QSize maximumViewportSize() const;
  virtual QSize minimumSizeHint() const;
  virtual QSize minimumSizeHint_nocallback() const;
  virtual void mouseDoubleClickEvent(QMouseEvent *arg__1);
  virtual void mouseDoubleClickEvent_nocallback(QMouseEvent *arg__1);
  virtual void mouseMoveEvent(QMouseEvent *arg__1);
  virtual void mouseMoveEvent_nocallback(QMouseEvent *arg__1);
  virtual void mousePressEvent(QMouseEvent *arg__1);
  virtual void mousePressEvent_nocallback(QMouseEvent *arg__1);
  virtual void mouseReleaseEvent(QMouseEvent *arg__1);
  virtual void mouseReleaseEvent_nocallback(QMouseEvent *arg__1);
  virtual void paintEvent(QPaintEvent *arg__1);
  virtual void paintEvent_nocallback(QPaintEvent *arg__1);
  virtual void scrollContentsBy(int dx, int dy);
  virtual void scrollContentsBy_nocallback(int dx, int dy);
  void setCornerWidget(QWidget *widget);
  void setViewport(QWidget *widget);
  void setViewportMargins(int left, int top, int right, int bottom);
  virtual void setVisible(bool visible);
  virtual void setVisible_nocallback(bool visible);
  virtual void setupViewport(QWidget *viewport);
  virtual void setupViewport_nocallback(QWidget *viewport);
  virtual QPainter *sharedPainter() const;
  virtual QPainter *sharedPainter_nocallback() const;
  virtual QSize sizeHint() const;
  virtual QSize sizeHint_nocallback() const;
  static QString tr(const char *s, const char *c, int n);
  QWidget *viewport() const;
  virtual bool viewportEvent(QEvent *arg__1);
  virtual bool viewportEvent_nocallback(QEvent *arg__1);
  virtual QSize viewportSizeHint() const;
  virtual QSize viewportSizeHint_nocallback() const;
  typedef void (*Callback_changeEvent)(void *, QEvent *arg__1);
  Callback_changeEvent m_changeEventCallback = nullptr;
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  typedef int (*Callback_devType)(void *);
  Callback_devType m_devTypeCallback = nullptr;
  typedef bool (*Callback_event)(void *, QEvent *arg__1);
  Callback_event m_eventCallback = nullptr;
  typedef bool (*Callback_eventFilter)(void *, QObject *arg__1, QEvent *arg__2);
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
  typedef void (*Callback_mouseDoubleClickEvent)(void *, QMouseEvent *arg__1);
  Callback_mouseDoubleClickEvent m_mouseDoubleClickEventCallback = nullptr;
  typedef void (*Callback_mouseMoveEvent)(void *, QMouseEvent *arg__1);
  Callback_mouseMoveEvent m_mouseMoveEventCallback = nullptr;
  typedef void (*Callback_mousePressEvent)(void *, QMouseEvent *arg__1);
  Callback_mousePressEvent m_mousePressEventCallback = nullptr;
  typedef void (*Callback_mouseReleaseEvent)(void *, QMouseEvent *arg__1);
  Callback_mouseReleaseEvent m_mouseReleaseEventCallback = nullptr;
  typedef void (*Callback_paintEvent)(void *, QPaintEvent *arg__1);
  Callback_paintEvent m_paintEventCallback = nullptr;
  typedef void (*Callback_scrollContentsBy)(void *, int dx, int dy);
  Callback_scrollContentsBy m_scrollContentsByCallback = nullptr;
  typedef void (*Callback_setVisible)(void *, bool visible);
  Callback_setVisible m_setVisibleCallback = nullptr;
  typedef void (*Callback_setupViewport)(void *, QWidget *viewport);
  Callback_setupViewport m_setupViewportCallback = nullptr;
  typedef QPainter *(*Callback_sharedPainter)(void *);
  Callback_sharedPainter m_sharedPainterCallback = nullptr;
  typedef QSize *(*Callback_sizeHint)(void *);
  Callback_sizeHint m_sizeHintCallback = nullptr;
  typedef bool (*Callback_viewportEvent)(void *, QEvent *arg__1);
  Callback_viewportEvent m_viewportEventCallback = nullptr;
  typedef QSize *(*Callback_viewportSizeHint)(void *);
  Callback_viewportSizeHint m_viewportSizeHintCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QAbstractScrollArea::QAbstractScrollArea(QWidget * parent)
QtDartBindings_EXPORT void *
c_QAbstractScrollArea__constructor_QWidget(void *parent_);
// QAbstractScrollArea::changeEvent(QEvent * arg__1)
QtDartBindings_EXPORT void
c_QAbstractScrollArea__changeEvent_QEvent(void *thisObj, void *arg__1_);
// QAbstractScrollArea::cornerWidget() const
QtDartBindings_EXPORT void *c_QAbstractScrollArea__cornerWidget(void *thisObj);
// QAbstractScrollArea::customEvent(QEvent * event)
QtDartBindings_EXPORT void
c_QAbstractScrollArea__customEvent_QEvent(void *thisObj, void *event_);
// QAbstractScrollArea::devType() const
QtDartBindings_EXPORT int c_QAbstractScrollArea__devType(void *thisObj);
// QAbstractScrollArea::event(QEvent * arg__1)
QtDartBindings_EXPORT bool c_QAbstractScrollArea__event_QEvent(void *thisObj,
                                                               void *arg__1_);
// QAbstractScrollArea::eventFilter(QObject * arg__1, QEvent * arg__2)
QtDartBindings_EXPORT bool
c_QAbstractScrollArea__eventFilter_QObject_QEvent(void *thisObj, void *arg__1_,
                                                  void *arg__2_);
// QAbstractScrollArea::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool
c_QAbstractScrollArea__focusNextPrevChild_bool(void *thisObj, bool next);
// QAbstractScrollArea::hasHeightForWidth() const
QtDartBindings_EXPORT bool
c_QAbstractScrollArea__hasHeightForWidth(void *thisObj);
// QAbstractScrollArea::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int
c_QAbstractScrollArea__heightForWidth_int(void *thisObj, int arg__1);
// QAbstractScrollArea::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void
c_QAbstractScrollArea__initPainter_QPainter(void *thisObj, void *painter_);
// QAbstractScrollArea::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void
c_QAbstractScrollArea__leaveEvent_QEvent(void *thisObj, void *event_);
// QAbstractScrollArea::maximumViewportSize() const
QtDartBindings_EXPORT void *
c_QAbstractScrollArea__maximumViewportSize(void *thisObj);
// QAbstractScrollArea::minimumSizeHint() const
QtDartBindings_EXPORT void *
c_QAbstractScrollArea__minimumSizeHint(void *thisObj);
// QAbstractScrollArea::mouseDoubleClickEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QAbstractScrollArea__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                         void *arg__1_);
// QAbstractScrollArea::mouseMoveEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QAbstractScrollArea__mouseMoveEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QAbstractScrollArea::mousePressEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QAbstractScrollArea__mousePressEvent_QMouseEvent(void *thisObj,
                                                   void *arg__1_);
// QAbstractScrollArea::mouseReleaseEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QAbstractScrollArea__mouseReleaseEvent_QMouseEvent(void *thisObj,
                                                     void *arg__1_);
// QAbstractScrollArea::paintEvent(QPaintEvent * arg__1)
QtDartBindings_EXPORT void
c_QAbstractScrollArea__paintEvent_QPaintEvent(void *thisObj, void *arg__1_);
// QAbstractScrollArea::scrollContentsBy(int dx, int dy)
QtDartBindings_EXPORT void
c_QAbstractScrollArea__scrollContentsBy_int_int(void *thisObj, int dx, int dy);
// QAbstractScrollArea::setCornerWidget(QWidget * widget)
QtDartBindings_EXPORT void
c_QAbstractScrollArea__setCornerWidget_QWidget(void *thisObj, void *widget_);
// QAbstractScrollArea::setViewport(QWidget * widget)
QtDartBindings_EXPORT void
c_QAbstractScrollArea__setViewport_QWidget(void *thisObj, void *widget_);
// QAbstractScrollArea::setViewportMargins(int left, int top, int right, int
// bottom)
QtDartBindings_EXPORT void
c_QAbstractScrollArea__setViewportMargins_int_int_int_int(void *thisObj,
                                                          int left, int top,
                                                          int right,
                                                          int bottom);
// QAbstractScrollArea::setVisible(bool visible)
QtDartBindings_EXPORT void c_QAbstractScrollArea__setVisible_bool(void *thisObj,
                                                                  bool visible);
// QAbstractScrollArea::setupViewport(QWidget * viewport)
QtDartBindings_EXPORT void
c_QAbstractScrollArea__setupViewport_QWidget(void *thisObj, void *viewport_);
// QAbstractScrollArea::sharedPainter() const
QtDartBindings_EXPORT void *c_QAbstractScrollArea__sharedPainter(void *thisObj);
// QAbstractScrollArea::sizeHint() const
QtDartBindings_EXPORT void *c_QAbstractScrollArea__sizeHint(void *thisObj);
// QAbstractScrollArea::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QAbstractScrollArea__tr_char_char_int(const char *s, const char *c,
                                               int n);
// QAbstractScrollArea::viewport() const
QtDartBindings_EXPORT void *c_QAbstractScrollArea__viewport(void *thisObj);
// QAbstractScrollArea::viewportEvent(QEvent * arg__1)
QtDartBindings_EXPORT bool
c_QAbstractScrollArea__viewportEvent_QEvent(void *thisObj, void *arg__1_);
// QAbstractScrollArea::viewportSizeHint() const
QtDartBindings_EXPORT void *
c_QAbstractScrollArea__viewportSizeHint(void *thisObj);
QtDartBindings_EXPORT void c_QAbstractScrollArea__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QAbstractScrollArea__registerVirtualMethodCallback(void *ptr, void *callback,
                                                     int methodId);
QtDartBindings_EXPORT void c_QAbstractScrollArea_Finalizer(void *cppObj);
}
