/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qcoreevent.h>
#include <qevent.h>
#include <qobject.h>
#include <qpainter.h>
#include <qscrollarea.h>
#include <qsize.h>
#include <qstring.h>
#include <qwidget.h>

namespace QtDartBindings_wrappersNS {
class QScrollArea_wrapper : public ::QScrollArea {
public:
  ~QScrollArea_wrapper();
  QScrollArea_wrapper(QWidget *parent = nullptr);
  virtual void changeEvent(QEvent *arg__1);
  virtual void changeEvent_nocallback(QEvent *arg__1);
  virtual void customEvent(QEvent *event);
  virtual void customEvent_nocallback(QEvent *event);
  virtual int devType() const;
  virtual int devType_nocallback() const;
  void ensureVisible(int x, int y, int xmargin = 50, int ymargin = 50);
  void ensureWidgetVisible(QWidget *childWidget, int xmargin = 50,
                           int ymargin = 50);
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
  virtual void setVisible(bool visible);
  virtual void setVisible_nocallback(bool visible);
  void setWidget(QWidget *widget);
  void setWidgetResizable(bool resizable);
  virtual void setupViewport(QWidget *viewport);
  virtual void setupViewport_nocallback(QWidget *viewport);
  virtual QPainter *sharedPainter() const;
  virtual QPainter *sharedPainter_nocallback() const;
  virtual QSize sizeHint() const;
  virtual QSize sizeHint_nocallback() const;
  QWidget *takeWidget();
  static QString tr(const char *s, const char *c, int n);
  virtual bool viewportEvent(QEvent *arg__1);
  virtual bool viewportEvent_nocallback(QEvent *arg__1);
  virtual QSize viewportSizeHint() const;
  virtual QSize viewportSizeHint_nocallback() const;
  QWidget *widget() const;
  bool widgetResizable() const;
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
// QScrollArea::QScrollArea(QWidget * parent)
QtDartBindings_EXPORT void *c_QScrollArea__constructor_QWidget(void *parent_);
// QScrollArea::changeEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QScrollArea__changeEvent_QEvent(void *thisObj,
                                                             void *arg__1_);
// QScrollArea::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QScrollArea__customEvent_QEvent(void *thisObj,
                                                             void *event_);
// QScrollArea::devType() const
QtDartBindings_EXPORT int c_QScrollArea__devType(void *thisObj);
// QScrollArea::ensureVisible(int x, int y, int xmargin, int ymargin)
QtDartBindings_EXPORT void
c_QScrollArea__ensureVisible_int_int_int_int(void *thisObj, int x, int y,
                                             int xmargin, int ymargin);
// QScrollArea::ensureWidgetVisible(QWidget * childWidget, int xmargin, int
// ymargin)
QtDartBindings_EXPORT void c_QScrollArea__ensureWidgetVisible_QWidget_int_int(
    void *thisObj, void *childWidget_, int xmargin, int ymargin);
// QScrollArea::event(QEvent * arg__1)
QtDartBindings_EXPORT bool c_QScrollArea__event_QEvent(void *thisObj,
                                                       void *arg__1_);
// QScrollArea::eventFilter(QObject * arg__1, QEvent * arg__2)
QtDartBindings_EXPORT bool
c_QScrollArea__eventFilter_QObject_QEvent(void *thisObj, void *arg__1_,
                                          void *arg__2_);
// QScrollArea::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QScrollArea__focusNextPrevChild_bool(void *thisObj,
                                                                  bool next);
// QScrollArea::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QScrollArea__hasHeightForWidth(void *thisObj);
// QScrollArea::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QScrollArea__heightForWidth_int(void *thisObj,
                                                            int arg__1);
// QScrollArea::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QScrollArea__initPainter_QPainter(void *thisObj,
                                                               void *painter_);
// QScrollArea::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QScrollArea__leaveEvent_QEvent(void *thisObj,
                                                            void *event_);
// QScrollArea::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QScrollArea__minimumSizeHint(void *thisObj);
// QScrollArea::mouseDoubleClickEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QScrollArea__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QScrollArea::mouseMoveEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QScrollArea__mouseMoveEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QScrollArea::mousePressEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QScrollArea__mousePressEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QScrollArea::mouseReleaseEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QScrollArea__mouseReleaseEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QScrollArea::paintEvent(QPaintEvent * arg__1)
QtDartBindings_EXPORT void c_QScrollArea__paintEvent_QPaintEvent(void *thisObj,
                                                                 void *arg__1_);
// QScrollArea::scrollContentsBy(int dx, int dy)
QtDartBindings_EXPORT void
c_QScrollArea__scrollContentsBy_int_int(void *thisObj, int dx, int dy);
// QScrollArea::setVisible(bool visible)
QtDartBindings_EXPORT void c_QScrollArea__setVisible_bool(void *thisObj,
                                                          bool visible);
// QScrollArea::setWidget(QWidget * widget)
QtDartBindings_EXPORT void c_QScrollArea__setWidget_QWidget(void *thisObj,
                                                            void *widget_);
// QScrollArea::setWidgetResizable(bool resizable)
QtDartBindings_EXPORT void
c_QScrollArea__setWidgetResizable_bool(void *thisObj, bool resizable);
// QScrollArea::setupViewport(QWidget * viewport)
QtDartBindings_EXPORT void
c_QScrollArea__setupViewport_QWidget(void *thisObj, void *viewport_);
// QScrollArea::sharedPainter() const
QtDartBindings_EXPORT void *c_QScrollArea__sharedPainter(void *thisObj);
// QScrollArea::sizeHint() const
QtDartBindings_EXPORT void *c_QScrollArea__sizeHint(void *thisObj);
// QScrollArea::takeWidget()
QtDartBindings_EXPORT void *c_QScrollArea__takeWidget(void *thisObj);
// QScrollArea::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QScrollArea__tr_char_char_int(const char *s, const char *c, int n);
// QScrollArea::viewportEvent(QEvent * arg__1)
QtDartBindings_EXPORT bool c_QScrollArea__viewportEvent_QEvent(void *thisObj,
                                                               void *arg__1_);
// QScrollArea::viewportSizeHint() const
QtDartBindings_EXPORT void *c_QScrollArea__viewportSizeHint(void *thisObj);
// QScrollArea::widget() const
QtDartBindings_EXPORT void *c_QScrollArea__widget(void *thisObj);
// QScrollArea::widgetResizable() const
QtDartBindings_EXPORT bool c_QScrollArea__widgetResizable(void *thisObj);
QtDartBindings_EXPORT void c_QScrollArea__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QScrollArea__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId);
QtDartBindings_EXPORT void c_QScrollArea_Finalizer(void *cppObj);
}
