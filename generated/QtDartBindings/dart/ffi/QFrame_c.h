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
#include <qframe.h>
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
class QFrame_wrapper : public ::QFrame {
public:
  ~QFrame_wrapper();
  QFrame_wrapper(QWidget *parent = nullptr);
  virtual void changeEvent(QEvent *arg__1);
  virtual void changeEvent_nocallback(QEvent *arg__1);
  virtual void customEvent(QEvent *event);
  virtual void customEvent_nocallback(QEvent *event);
  virtual int devType() const;
  virtual int devType_nocallback() const;
  void drawFrame(QPainter *arg__1);
  virtual bool event(QEvent *e);
  virtual bool event_nocallback(QEvent *e);
  virtual bool eventFilter(QObject *watched, QEvent *event);
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  virtual bool focusNextPrevChild(bool next);
  virtual bool focusNextPrevChild_nocallback(bool next);
  QRect frameRect() const;
  int frameStyle() const;
  int frameWidth() const;
  virtual bool hasHeightForWidth() const;
  virtual bool hasHeightForWidth_nocallback() const;
  virtual int heightForWidth(int arg__1) const;
  virtual int heightForWidth_nocallback(int arg__1) const;
  virtual void initPainter(QPainter *painter) const;
  virtual void initPainter_nocallback(QPainter *painter) const;
  virtual void leaveEvent(QEvent *event);
  virtual void leaveEvent_nocallback(QEvent *event);
  int lineWidth() const;
  int midLineWidth() const;
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
  void setFrameRect(const QRect &arg__1);
  void setFrameStyle(int arg__1);
  void setLineWidth(int arg__1);
  void setMidLineWidth(int arg__1);
  virtual void setVisible(bool visible);
  virtual void setVisible_nocallback(bool visible);
  virtual QPainter *sharedPainter() const;
  virtual QPainter *sharedPainter_nocallback() const;
  virtual QSize sizeHint() const;
  virtual QSize sizeHint_nocallback() const;
  static QString tr(const char *s, const char *c, int n);
  typedef void (*Callback_changeEvent)(void *, QEvent *arg__1);
  Callback_changeEvent m_changeEventCallback = nullptr;
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
// QFrame::QFrame(QWidget * parent)
QtDartBindings_EXPORT void *c_QFrame__constructor_QWidget(void *parent_);
// QFrame::changeEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QFrame__changeEvent_QEvent(void *thisObj,
                                                        void *arg__1_);
// QFrame::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QFrame__customEvent_QEvent(void *thisObj,
                                                        void *event_);
// QFrame::devType() const
QtDartBindings_EXPORT int c_QFrame__devType(void *thisObj);
// QFrame::drawFrame(QPainter * arg__1)
QtDartBindings_EXPORT void c_QFrame__drawFrame_QPainter(void *thisObj,
                                                        void *arg__1_);
// QFrame::event(QEvent * e)
QtDartBindings_EXPORT bool c_QFrame__event_QEvent(void *thisObj, void *e_);
// QFrame::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool c_QFrame__eventFilter_QObject_QEvent(void *thisObj,
                                                                void *watched_,
                                                                void *event_);
// QFrame::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QFrame__focusNextPrevChild_bool(void *thisObj,
                                                             bool next);
// QFrame::frameRect() const
QtDartBindings_EXPORT void *c_QFrame__frameRect(void *thisObj);
// QFrame::frameStyle() const
QtDartBindings_EXPORT int c_QFrame__frameStyle(void *thisObj);
// QFrame::frameWidth() const
QtDartBindings_EXPORT int c_QFrame__frameWidth(void *thisObj);
// QFrame::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QFrame__hasHeightForWidth(void *thisObj);
// QFrame::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QFrame__heightForWidth_int(void *thisObj,
                                                       int arg__1);
// QFrame::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QFrame__initPainter_QPainter(void *thisObj,
                                                          void *painter_);
// QFrame::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QFrame__leaveEvent_QEvent(void *thisObj,
                                                       void *event_);
// QFrame::lineWidth() const
QtDartBindings_EXPORT int c_QFrame__lineWidth(void *thisObj);
// QFrame::midLineWidth() const
QtDartBindings_EXPORT int c_QFrame__midLineWidth(void *thisObj);
// QFrame::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QFrame__minimumSizeHint(void *thisObj);
// QFrame::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QFrame__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);
// QFrame::mouseMoveEvent(QMouseEvent * event)
QtDartBindings_EXPORT void c_QFrame__mouseMoveEvent_QMouseEvent(void *thisObj,
                                                                void *event_);
// QFrame::mousePressEvent(QMouseEvent * event)
QtDartBindings_EXPORT void c_QFrame__mousePressEvent_QMouseEvent(void *thisObj,
                                                                 void *event_);
// QFrame::mouseReleaseEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QFrame__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_);
// QFrame::paintEvent(QPaintEvent * arg__1)
QtDartBindings_EXPORT void c_QFrame__paintEvent_QPaintEvent(void *thisObj,
                                                            void *arg__1_);
// QFrame::setFrameRect(const QRect & arg__1)
QtDartBindings_EXPORT void c_QFrame__setFrameRect_QRect(void *thisObj,
                                                        void *arg__1_);
// QFrame::setFrameStyle(int arg__1)
QtDartBindings_EXPORT void c_QFrame__setFrameStyle_int(void *thisObj,
                                                       int arg__1);
// QFrame::setLineWidth(int arg__1)
QtDartBindings_EXPORT void c_QFrame__setLineWidth_int(void *thisObj,
                                                      int arg__1);
// QFrame::setMidLineWidth(int arg__1)
QtDartBindings_EXPORT void c_QFrame__setMidLineWidth_int(void *thisObj,
                                                         int arg__1);
// QFrame::setVisible(bool visible)
QtDartBindings_EXPORT void c_QFrame__setVisible_bool(void *thisObj,
                                                     bool visible);
// QFrame::sharedPainter() const
QtDartBindings_EXPORT void *c_QFrame__sharedPainter(void *thisObj);
// QFrame::sizeHint() const
QtDartBindings_EXPORT void *c_QFrame__sizeHint(void *thisObj);
// QFrame::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QFrame__tr_char_char_int(const char *s, const char *c, int n);
QtDartBindings_EXPORT void c_QFrame__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QFrame__registerVirtualMethodCallback(void *ptr, void *callback,
                                        int methodId);
QtDartBindings_EXPORT void c_QFrame_Finalizer(void *cppObj);
}
