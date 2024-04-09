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
#include <qstring.h>
#include <qstyle.h>
#include <qtoolbar.h>
#include <qwidget.h>
#include <qwindow.h>

namespace QtDartBindings_wrappersNS {
class QToolBar_wrapper : public ::QToolBar {
public:
  ~QToolBar_wrapper();
  QToolBar_wrapper(QWidget *parent = nullptr);
  QToolBar_wrapper(const QString &title, QWidget *parent = nullptr);
  QAction *actionAt(const QPoint &p) const;
  QAction *actionAt(int x, int y) const;
  QRect actionGeometry(QAction *action) const;
  void actionTriggered(QAction *action);
  QAction *addSeparator();
  QAction *addWidget(QWidget *widget);
  virtual void changeEvent(QEvent *event);
  virtual void changeEvent_nocallback(QEvent *event);
  void clear();
  virtual void customEvent(QEvent *event);
  virtual void customEvent_nocallback(QEvent *event);
  virtual int devType() const;
  virtual int devType_nocallback() const;
  virtual bool event(QEvent *event);
  virtual bool event_nocallback(QEvent *event);
  virtual bool eventFilter(QObject *watched, QEvent *event);
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  virtual bool focusNextPrevChild(bool next);
  virtual bool focusNextPrevChild_nocallback(bool next);
  virtual bool hasHeightForWidth() const;
  virtual bool hasHeightForWidth_nocallback() const;
  virtual int heightForWidth(int arg__1) const;
  virtual int heightForWidth_nocallback(int arg__1) const;
  QSize iconSize() const;
  void iconSizeChanged(const QSize &iconSize);
  virtual void initPainter(QPainter *painter) const;
  virtual void initPainter_nocallback(QPainter *painter) const;
  QAction *insertSeparator(QAction *before);
  QAction *insertWidget(QAction *before, QWidget *widget);
  bool isFloatable() const;
  bool isFloating() const;
  bool isMovable() const;
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
  void movableChanged(bool movable);
  Qt::Orientation orientation() const;
  void orientationChanged(Qt::Orientation orientation);
  virtual void paintEvent(QPaintEvent *event);
  virtual void paintEvent_nocallback(QPaintEvent *event);
  void setFloatable(bool floatable);
  void setIconSize(const QSize &iconSize);
  void setMovable(bool movable);
  void setOrientation(Qt::Orientation orientation);
  virtual void setVisible(bool visible);
  virtual void setVisible_nocallback(bool visible);
  virtual QPainter *sharedPainter() const;
  virtual QPainter *sharedPainter_nocallback() const;
  virtual QSize sizeHint() const;
  virtual QSize sizeHint_nocallback() const;
  QAction *toggleViewAction() const;
  void topLevelChanged(bool topLevel);
  static QString tr(const char *s, const char *c, int n);
  void visibilityChanged(bool visible);
  QWidget *widgetForAction(QAction *action) const;
  typedef void (*Callback_changeEvent)(void *, QEvent *event);
  Callback_changeEvent m_changeEventCallback = nullptr;
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  typedef int (*Callback_devType)(void *);
  Callback_devType m_devTypeCallback = nullptr;
  typedef bool (*Callback_event)(void *, QEvent *event);
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
  typedef void (*Callback_paintEvent)(void *, QPaintEvent *event);
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
// QToolBar::QToolBar(QWidget * parent)
QtDartBindings_EXPORT void *c_QToolBar__constructor_QWidget(void *parent_);
// QToolBar::QToolBar(const QString & title, QWidget * parent)
QtDartBindings_EXPORT void *
c_QToolBar__constructor_QString_QWidget(const char *title_, void *parent_);
// QToolBar::actionAt(const QPoint & p) const
QtDartBindings_EXPORT void *c_QToolBar__actionAt_QPoint(void *thisObj,
                                                        void *p_);
// QToolBar::actionAt(int x, int y) const
QtDartBindings_EXPORT void *c_QToolBar__actionAt_int_int(void *thisObj, int x,
                                                         int y);
// QToolBar::actionGeometry(QAction * action) const
QtDartBindings_EXPORT void *c_QToolBar__actionGeometry_QAction(void *thisObj,
                                                               void *action_);
// QToolBar::actionTriggered(QAction * action)
QtDartBindings_EXPORT void c_QToolBar__actionTriggered_QAction(void *thisObj,
                                                               void *action_);
QtDartBindings_EXPORT void c_QToolBar__onActionTriggered_QAction(
    void *thisObj, void *contextQObject,
    void *callback); // QToolBar::addSeparator()
QtDartBindings_EXPORT void *c_QToolBar__addSeparator(void *thisObj);
// QToolBar::addWidget(QWidget * widget)
QtDartBindings_EXPORT void *c_QToolBar__addWidget_QWidget(void *thisObj,
                                                          void *widget_);
// QToolBar::changeEvent(QEvent * event)
QtDartBindings_EXPORT void c_QToolBar__changeEvent_QEvent(void *thisObj,
                                                          void *event_);
// QToolBar::clear()
QtDartBindings_EXPORT void c_QToolBar__clear(void *thisObj);
// QToolBar::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QToolBar__customEvent_QEvent(void *thisObj,
                                                          void *event_);
// QToolBar::devType() const
QtDartBindings_EXPORT int c_QToolBar__devType(void *thisObj);
// QToolBar::event(QEvent * event)
QtDartBindings_EXPORT bool c_QToolBar__event_QEvent(void *thisObj,
                                                    void *event_);
// QToolBar::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QToolBar__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                       void *event_);
// QToolBar::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QToolBar__focusNextPrevChild_bool(void *thisObj,
                                                               bool next);
// QToolBar::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QToolBar__hasHeightForWidth(void *thisObj);
// QToolBar::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QToolBar__heightForWidth_int(void *thisObj,
                                                         int arg__1);
// QToolBar::iconSize() const
QtDartBindings_EXPORT void *c_QToolBar__iconSize(void *thisObj);
// QToolBar::iconSizeChanged(const QSize & iconSize)
QtDartBindings_EXPORT void c_QToolBar__iconSizeChanged_QSize(void *thisObj,
                                                             void *iconSize_);
QtDartBindings_EXPORT void c_QToolBar__onIconSizeChanged_QSize(
    void *thisObj, void *contextQObject,
    void *callback); // QToolBar::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QToolBar__initPainter_QPainter(void *thisObj,
                                                            void *painter_);
// QToolBar::insertSeparator(QAction * before)
QtDartBindings_EXPORT void *c_QToolBar__insertSeparator_QAction(void *thisObj,
                                                                void *before_);
// QToolBar::insertWidget(QAction * before, QWidget * widget)
QtDartBindings_EXPORT void *
c_QToolBar__insertWidget_QAction_QWidget(void *thisObj, void *before_,
                                         void *widget_);
// QToolBar::isFloatable() const
QtDartBindings_EXPORT bool c_QToolBar__isFloatable(void *thisObj);
// QToolBar::isFloating() const
QtDartBindings_EXPORT bool c_QToolBar__isFloating(void *thisObj);
// QToolBar::isMovable() const
QtDartBindings_EXPORT bool c_QToolBar__isMovable(void *thisObj);
// QToolBar::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QToolBar__leaveEvent_QEvent(void *thisObj,
                                                         void *event_);
// QToolBar::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QToolBar__minimumSizeHint(void *thisObj);
// QToolBar::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QToolBar__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);
// QToolBar::mouseMoveEvent(QMouseEvent * event)
QtDartBindings_EXPORT void c_QToolBar__mouseMoveEvent_QMouseEvent(void *thisObj,
                                                                  void *event_);
// QToolBar::mousePressEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QToolBar__mousePressEvent_QMouseEvent(void *thisObj, void *event_);
// QToolBar::mouseReleaseEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QToolBar__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_);
// QToolBar::movableChanged(bool movable)
QtDartBindings_EXPORT void c_QToolBar__movableChanged_bool(void *thisObj,
                                                           bool movable);
QtDartBindings_EXPORT void c_QToolBar__onMovableChanged_bool(
    void *thisObj, void *contextQObject,
    void *callback); // QToolBar::orientation() const
QtDartBindings_EXPORT int c_QToolBar__orientation(void *thisObj);
// QToolBar::orientationChanged(Qt::Orientation orientation)
QtDartBindings_EXPORT void
c_QToolBar__orientationChanged_Orientation(void *thisObj, int orientation);
QtDartBindings_EXPORT void c_QToolBar__onOrientationChanged_Orientation(
    void *thisObj, void *contextQObject,
    void *callback); // QToolBar::paintEvent(QPaintEvent * event)
QtDartBindings_EXPORT void c_QToolBar__paintEvent_QPaintEvent(void *thisObj,
                                                              void *event_);
// QToolBar::setFloatable(bool floatable)
QtDartBindings_EXPORT void c_QToolBar__setFloatable_bool(void *thisObj,
                                                         bool floatable);
// QToolBar::setIconSize(const QSize & iconSize)
QtDartBindings_EXPORT void c_QToolBar__setIconSize_QSize(void *thisObj,
                                                         void *iconSize_);
// QToolBar::setMovable(bool movable)
QtDartBindings_EXPORT void c_QToolBar__setMovable_bool(void *thisObj,
                                                       bool movable);
// QToolBar::setOrientation(Qt::Orientation orientation)
QtDartBindings_EXPORT void
c_QToolBar__setOrientation_Orientation(void *thisObj, int orientation);
// QToolBar::setVisible(bool visible)
QtDartBindings_EXPORT void c_QToolBar__setVisible_bool(void *thisObj,
                                                       bool visible);
// QToolBar::sharedPainter() const
QtDartBindings_EXPORT void *c_QToolBar__sharedPainter(void *thisObj);
// QToolBar::sizeHint() const
QtDartBindings_EXPORT void *c_QToolBar__sizeHint(void *thisObj);
// QToolBar::toggleViewAction() const
QtDartBindings_EXPORT void *c_QToolBar__toggleViewAction(void *thisObj);
// QToolBar::topLevelChanged(bool topLevel)
QtDartBindings_EXPORT void c_QToolBar__topLevelChanged_bool(void *thisObj,
                                                            bool topLevel);
QtDartBindings_EXPORT void c_QToolBar__onTopLevelChanged_bool(
    void *thisObj, void *contextQObject,
    void *callback); // QToolBar::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QToolBar__tr_char_char_int(const char *s, const char *c, int n);
// QToolBar::visibilityChanged(bool visible)
QtDartBindings_EXPORT void c_QToolBar__visibilityChanged_bool(void *thisObj,
                                                              bool visible);
QtDartBindings_EXPORT void c_QToolBar__onVisibilityChanged_bool(
    void *thisObj, void *contextQObject,
    void *callback); // QToolBar::widgetForAction(QAction * action) const
QtDartBindings_EXPORT void *c_QToolBar__widgetForAction_QAction(void *thisObj,
                                                                void *action_);
QtDartBindings_EXPORT void c_QToolBar__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QToolBar__registerVirtualMethodCallback(void *ptr, void *callback,
                                          int methodId);
QtDartBindings_EXPORT void c_QToolBar_Finalizer(void *cppObj);
}
