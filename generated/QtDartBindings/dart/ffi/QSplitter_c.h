/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qrect.h>
#include <qsize.h>
#include <qsplitter.h>
#include <qstring.h>
#include <qwidget.h>

namespace QtDartBindings_wrappersNS {
class QSplitter_wrapper : public ::QSplitter {
public:
  ~QSplitter_wrapper();
  QSplitter_wrapper(QWidget *parent = nullptr);
  QSplitter_wrapper(Qt::Orientation arg__1, QWidget *parent = nullptr);
  void addWidget(QWidget *widget);
  virtual void changeEvent(QEvent *arg__1);
  virtual void changeEvent_nocallback(QEvent *arg__1);
  bool childrenCollapsible() const;
  int closestLegalPosition(int arg__1, int arg__2);
  int count() const;
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
  int handleWidth() const;
  virtual bool hasHeightForWidth() const;
  virtual bool hasHeightForWidth_nocallback() const;
  virtual int heightForWidth(int arg__1) const;
  virtual int heightForWidth_nocallback(int arg__1) const;
  int indexOf(QWidget *w) const;
  virtual void initPainter(QPainter *painter) const;
  virtual void initPainter_nocallback(QPainter *painter) const;
  void insertWidget(int index, QWidget *widget);
  bool isCollapsible(int index) const;
  virtual void leaveEvent(QEvent *event);
  virtual void leaveEvent_nocallback(QEvent *event);
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
  void moveSplitter(int pos, int index);
  bool opaqueResize() const;
  Qt::Orientation orientation() const;
  virtual void paintEvent(QPaintEvent *arg__1);
  virtual void paintEvent_nocallback(QPaintEvent *arg__1);
  void refresh();
  QWidget *replaceWidget(int index, QWidget *widget);
  bool restoreState(const QByteArray &state);
  QByteArray saveState() const;
  void setChildrenCollapsible(bool arg__1);
  void setCollapsible(int index, bool arg__2);
  void setHandleWidth(int arg__1);
  void setOpaqueResize(bool opaque = true);
  void setOrientation(Qt::Orientation arg__1);
  void setRubberBand(int position);
  void setSizes(const QList<int> &list);
  void setStretchFactor(int index, int stretch);
  virtual void setVisible(bool visible);
  virtual void setVisible_nocallback(bool visible);
  virtual QPainter *sharedPainter() const;
  virtual QPainter *sharedPainter_nocallback() const;
  virtual QSize sizeHint() const;
  virtual QSize sizeHint_nocallback() const;
  QList<int> sizes() const;
  void splitterMoved(int pos, int index);
  static QString tr(const char *s, const char *c, int n);
  QWidget *widget(int index) const;
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
// QSplitter::QSplitter(QWidget * parent)
QtDartBindings_EXPORT void *c_QSplitter__constructor_QWidget(void *parent_);
// QSplitter::QSplitter(Qt::Orientation arg__1, QWidget * parent)
QtDartBindings_EXPORT void *
c_QSplitter__constructor_Orientation_QWidget(int arg__1, void *parent_);
// QSplitter::addWidget(QWidget * widget)
QtDartBindings_EXPORT void c_QSplitter__addWidget_QWidget(void *thisObj,
                                                          void *widget_);
// QSplitter::changeEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QSplitter__changeEvent_QEvent(void *thisObj,
                                                           void *arg__1_);
// QSplitter::childrenCollapsible() const
QtDartBindings_EXPORT bool c_QSplitter__childrenCollapsible(void *thisObj);
// QSplitter::closestLegalPosition(int arg__1, int arg__2)
QtDartBindings_EXPORT int
c_QSplitter__closestLegalPosition_int_int(void *thisObj, int arg__1,
                                          int arg__2);
// QSplitter::count() const
QtDartBindings_EXPORT int c_QSplitter__count(void *thisObj);
// QSplitter::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QSplitter__customEvent_QEvent(void *thisObj,
                                                           void *event_);
// QSplitter::devType() const
QtDartBindings_EXPORT int c_QSplitter__devType(void *thisObj);
// QSplitter::event(QEvent * arg__1)
QtDartBindings_EXPORT bool c_QSplitter__event_QEvent(void *thisObj,
                                                     void *arg__1_);
// QSplitter::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QSplitter__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                        void *event_);
// QSplitter::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QSplitter__focusNextPrevChild_bool(void *thisObj,
                                                                bool next);
// QSplitter::handleWidth() const
QtDartBindings_EXPORT int c_QSplitter__handleWidth(void *thisObj);
// QSplitter::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QSplitter__hasHeightForWidth(void *thisObj);
// QSplitter::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QSplitter__heightForWidth_int(void *thisObj,
                                                          int arg__1);
// QSplitter::indexOf(QWidget * w) const
QtDartBindings_EXPORT int c_QSplitter__indexOf_QWidget(void *thisObj, void *w_);
// QSplitter::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QSplitter__initPainter_QPainter(void *thisObj,
                                                             void *painter_);
// QSplitter::insertWidget(int index, QWidget * widget)
QtDartBindings_EXPORT void
c_QSplitter__insertWidget_int_QWidget(void *thisObj, int index, void *widget_);
// QSplitter::isCollapsible(int index) const
QtDartBindings_EXPORT bool c_QSplitter__isCollapsible_int(void *thisObj,
                                                          int index);
// QSplitter::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QSplitter__leaveEvent_QEvent(void *thisObj,
                                                          void *event_);
// QSplitter::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QSplitter__minimumSizeHint(void *thisObj);
// QSplitter::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QSplitter__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);
// QSplitter::mouseMoveEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QSplitter__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_);
// QSplitter::mousePressEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QSplitter__mousePressEvent_QMouseEvent(void *thisObj, void *event_);
// QSplitter::mouseReleaseEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QSplitter__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_);
// QSplitter::moveSplitter(int pos, int index)
QtDartBindings_EXPORT void
c_QSplitter__moveSplitter_int_int(void *thisObj, int pos, int index);
// QSplitter::opaqueResize() const
QtDartBindings_EXPORT bool c_QSplitter__opaqueResize(void *thisObj);
// QSplitter::orientation() const
QtDartBindings_EXPORT int c_QSplitter__orientation(void *thisObj);
// QSplitter::paintEvent(QPaintEvent * arg__1)
QtDartBindings_EXPORT void c_QSplitter__paintEvent_QPaintEvent(void *thisObj,
                                                               void *arg__1_);
// QSplitter::refresh()
QtDartBindings_EXPORT void c_QSplitter__refresh(void *thisObj);
// QSplitter::replaceWidget(int index, QWidget * widget)
QtDartBindings_EXPORT void *
c_QSplitter__replaceWidget_int_QWidget(void *thisObj, int index, void *widget_);
// QSplitter::restoreState(const QByteArray & state)
QtDartBindings_EXPORT bool c_QSplitter__restoreState_QByteArray(void *thisObj,
                                                                void *state_);
// QSplitter::saveState() const
QtDartBindings_EXPORT void *c_QSplitter__saveState(void *thisObj);
// QSplitter::setChildrenCollapsible(bool arg__1)
QtDartBindings_EXPORT void
c_QSplitter__setChildrenCollapsible_bool(void *thisObj, bool arg__1);
// QSplitter::setCollapsible(int index, bool arg__2)
QtDartBindings_EXPORT void
c_QSplitter__setCollapsible_int_bool(void *thisObj, int index, bool arg__2);
// QSplitter::setHandleWidth(int arg__1)
QtDartBindings_EXPORT void c_QSplitter__setHandleWidth_int(void *thisObj,
                                                           int arg__1);
// QSplitter::setOpaqueResize(bool opaque)
QtDartBindings_EXPORT void c_QSplitter__setOpaqueResize_bool(void *thisObj,
                                                             bool opaque);
// QSplitter::setOrientation(Qt::Orientation arg__1)
QtDartBindings_EXPORT void
c_QSplitter__setOrientation_Orientation(void *thisObj, int arg__1);
// QSplitter::setRubberBand(int position)
QtDartBindings_EXPORT void c_QSplitter__setRubberBand_int(void *thisObj,
                                                          int position);
// QSplitter::setSizes(const QList<int > & list)
QtDartBindings_EXPORT void c_QSplitter__setSizes_QList_int(void *thisObj,
                                                           void *list_);
// QSplitter::setStretchFactor(int index, int stretch)
QtDartBindings_EXPORT void
c_QSplitter__setStretchFactor_int_int(void *thisObj, int index, int stretch);
// QSplitter::setVisible(bool visible)
QtDartBindings_EXPORT void c_QSplitter__setVisible_bool(void *thisObj,
                                                        bool visible);
// QSplitter::sharedPainter() const
QtDartBindings_EXPORT void *c_QSplitter__sharedPainter(void *thisObj);
// QSplitter::sizeHint() const
QtDartBindings_EXPORT void *c_QSplitter__sizeHint(void *thisObj);
// QSplitter::sizes() const
QtDartBindings_EXPORT void *c_QSplitter__sizes(void *thisObj);
// QSplitter::splitterMoved(int pos, int index)
QtDartBindings_EXPORT void
c_QSplitter__splitterMoved_int_int(void *thisObj, int pos, int index);
QtDartBindings_EXPORT void c_QSplitter__onSplitterMoved_int_int(
    void *thisObj, void *contextQObject,
    void *callback); // QSplitter::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QSplitter__tr_char_char_int(const char *s, const char *c, int n);
// QSplitter::widget(int index) const
QtDartBindings_EXPORT void *c_QSplitter__widget_int(void *thisObj, int index);
QtDartBindings_EXPORT void c_QSplitter__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QSplitter__registerVirtualMethodCallback(void *ptr, void *callback,
                                           int methodId);
QtDartBindings_EXPORT void c_QSplitter_Finalizer(void *cppObj);
}
