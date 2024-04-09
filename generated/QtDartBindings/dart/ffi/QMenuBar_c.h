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
#include <qmenu.h>
#include <qmenubar.h>
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
class QMenuBar_wrapper : public ::QMenuBar {
public:
  ~QMenuBar_wrapper();
  QMenuBar_wrapper(QWidget *parent = nullptr);
  QAction *actionAt(const QPoint &arg__1) const;
  QRect actionGeometry(QAction *arg__1) const;
  QAction *activeAction() const;
  QAction *addMenu(QMenu *menu);
  QMenu *addMenu(const QIcon &icon, const QString &title);
  QMenu *addMenu(const QString &title);
  QAction *addSeparator();
  virtual void changeEvent(QEvent *arg__1);
  virtual void changeEvent_nocallback(QEvent *arg__1);
  void clear();
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
  void hovered(QAction *action);
  virtual void initPainter(QPainter *painter) const;
  virtual void initPainter_nocallback(QPainter *painter) const;
  QAction *insertMenu(QAction *before, QMenu *menu);
  QAction *insertSeparator(QAction *before);
  bool isDefaultUp() const;
  bool isNativeMenuBar() const;
  virtual void leaveEvent(QEvent *arg__1);
  virtual void leaveEvent_nocallback(QEvent *arg__1);
  virtual QSize minimumSizeHint() const;
  virtual QSize minimumSizeHint_nocallback() const;
  virtual void mouseDoubleClickEvent(QMouseEvent *event);
  virtual void mouseDoubleClickEvent_nocallback(QMouseEvent *event);
  virtual void mouseMoveEvent(QMouseEvent *arg__1);
  virtual void mouseMoveEvent_nocallback(QMouseEvent *arg__1);
  virtual void mousePressEvent(QMouseEvent *arg__1);
  virtual void mousePressEvent_nocallback(QMouseEvent *arg__1);
  virtual void mouseReleaseEvent(QMouseEvent *arg__1);
  virtual void mouseReleaseEvent_nocallback(QMouseEvent *arg__1);
  virtual void paintEvent(QPaintEvent *arg__1);
  virtual void paintEvent_nocallback(QPaintEvent *arg__1);
  void setActiveAction(QAction *action);
  void setCornerWidget(QWidget *w);
  void setDefaultUp(bool arg__1);
  void setNativeMenuBar(bool nativeMenuBar);
  virtual void setVisible(bool visible);
  virtual void setVisible_nocallback(bool visible);
  virtual QPainter *sharedPainter() const;
  virtual QPainter *sharedPainter_nocallback() const;
  virtual QSize sizeHint() const;
  virtual QSize sizeHint_nocallback() const;
  static QString tr(const char *s, const char *c, int n);
  void triggered(QAction *action);
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
  typedef void (*Callback_leaveEvent)(void *, QEvent *arg__1);
  Callback_leaveEvent m_leaveEventCallback = nullptr;
  typedef QSize *(*Callback_minimumSizeHint)(void *);
  Callback_minimumSizeHint m_minimumSizeHintCallback = nullptr;
  typedef void (*Callback_mouseDoubleClickEvent)(void *, QMouseEvent *event);
  Callback_mouseDoubleClickEvent m_mouseDoubleClickEventCallback = nullptr;
  typedef void (*Callback_mouseMoveEvent)(void *, QMouseEvent *arg__1);
  Callback_mouseMoveEvent m_mouseMoveEventCallback = nullptr;
  typedef void (*Callback_mousePressEvent)(void *, QMouseEvent *arg__1);
  Callback_mousePressEvent m_mousePressEventCallback = nullptr;
  typedef void (*Callback_mouseReleaseEvent)(void *, QMouseEvent *arg__1);
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
// QMenuBar::QMenuBar(QWidget * parent)
QtDartBindings_EXPORT void *c_QMenuBar__constructor_QWidget(void *parent_);
// QMenuBar::actionAt(const QPoint & arg__1) const
QtDartBindings_EXPORT void *c_QMenuBar__actionAt_QPoint(void *thisObj,
                                                        void *arg__1_);
// QMenuBar::actionGeometry(QAction * arg__1) const
QtDartBindings_EXPORT void *c_QMenuBar__actionGeometry_QAction(void *thisObj,
                                                               void *arg__1_);
// QMenuBar::activeAction() const
QtDartBindings_EXPORT void *c_QMenuBar__activeAction(void *thisObj);
// QMenuBar::addMenu(QMenu * menu)
QtDartBindings_EXPORT void *c_QMenuBar__addMenu_QMenu(void *thisObj,
                                                      void *menu_);
// QMenuBar::addMenu(const QIcon & icon, const QString & title)
QtDartBindings_EXPORT void *
c_QMenuBar__addMenu_QIcon_QString(void *thisObj, void *icon_,
                                  const char *title_);
// QMenuBar::addMenu(const QString & title)
QtDartBindings_EXPORT void *c_QMenuBar__addMenu_QString(void *thisObj,
                                                        const char *title_);
// QMenuBar::addSeparator()
QtDartBindings_EXPORT void *c_QMenuBar__addSeparator(void *thisObj);
// QMenuBar::changeEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QMenuBar__changeEvent_QEvent(void *thisObj,
                                                          void *arg__1_);
// QMenuBar::clear()
QtDartBindings_EXPORT void c_QMenuBar__clear(void *thisObj);
// QMenuBar::cornerWidget() const
QtDartBindings_EXPORT void *c_QMenuBar__cornerWidget(void *thisObj);
// QMenuBar::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QMenuBar__customEvent_QEvent(void *thisObj,
                                                          void *event_);
// QMenuBar::devType() const
QtDartBindings_EXPORT int c_QMenuBar__devType(void *thisObj);
// QMenuBar::event(QEvent * arg__1)
QtDartBindings_EXPORT bool c_QMenuBar__event_QEvent(void *thisObj,
                                                    void *arg__1_);
// QMenuBar::eventFilter(QObject * arg__1, QEvent * arg__2)
QtDartBindings_EXPORT bool
c_QMenuBar__eventFilter_QObject_QEvent(void *thisObj, void *arg__1_,
                                       void *arg__2_);
// QMenuBar::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QMenuBar__focusNextPrevChild_bool(void *thisObj,
                                                               bool next);
// QMenuBar::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QMenuBar__hasHeightForWidth(void *thisObj);
// QMenuBar::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QMenuBar__heightForWidth_int(void *thisObj,
                                                         int arg__1);
// QMenuBar::hovered(QAction * action)
QtDartBindings_EXPORT void c_QMenuBar__hovered_QAction(void *thisObj,
                                                       void *action_);
QtDartBindings_EXPORT void c_QMenuBar__onHovered_QAction(
    void *thisObj, void *contextQObject,
    void *callback); // QMenuBar::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QMenuBar__initPainter_QPainter(void *thisObj,
                                                            void *painter_);
// QMenuBar::insertMenu(QAction * before, QMenu * menu)
QtDartBindings_EXPORT void *
c_QMenuBar__insertMenu_QAction_QMenu(void *thisObj, void *before_, void *menu_);
// QMenuBar::insertSeparator(QAction * before)
QtDartBindings_EXPORT void *c_QMenuBar__insertSeparator_QAction(void *thisObj,
                                                                void *before_);
// QMenuBar::isDefaultUp() const
QtDartBindings_EXPORT bool c_QMenuBar__isDefaultUp(void *thisObj);
// QMenuBar::isNativeMenuBar() const
QtDartBindings_EXPORT bool c_QMenuBar__isNativeMenuBar(void *thisObj);
// QMenuBar::leaveEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QMenuBar__leaveEvent_QEvent(void *thisObj,
                                                         void *arg__1_);
// QMenuBar::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QMenuBar__minimumSizeHint(void *thisObj);
// QMenuBar::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QMenuBar__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);
// QMenuBar::mouseMoveEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QMenuBar__mouseMoveEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QMenuBar::mousePressEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QMenuBar__mousePressEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QMenuBar::mouseReleaseEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QMenuBar__mouseReleaseEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QMenuBar::paintEvent(QPaintEvent * arg__1)
QtDartBindings_EXPORT void c_QMenuBar__paintEvent_QPaintEvent(void *thisObj,
                                                              void *arg__1_);
// QMenuBar::setActiveAction(QAction * action)
QtDartBindings_EXPORT void c_QMenuBar__setActiveAction_QAction(void *thisObj,
                                                               void *action_);
// QMenuBar::setCornerWidget(QWidget * w)
QtDartBindings_EXPORT void c_QMenuBar__setCornerWidget_QWidget(void *thisObj,
                                                               void *w_);
// QMenuBar::setDefaultUp(bool arg__1)
QtDartBindings_EXPORT void c_QMenuBar__setDefaultUp_bool(void *thisObj,
                                                         bool arg__1);
// QMenuBar::setNativeMenuBar(bool nativeMenuBar)
QtDartBindings_EXPORT void
c_QMenuBar__setNativeMenuBar_bool(void *thisObj, bool nativeMenuBar);
// QMenuBar::setVisible(bool visible)
QtDartBindings_EXPORT void c_QMenuBar__setVisible_bool(void *thisObj,
                                                       bool visible);
// QMenuBar::sharedPainter() const
QtDartBindings_EXPORT void *c_QMenuBar__sharedPainter(void *thisObj);
// QMenuBar::sizeHint() const
QtDartBindings_EXPORT void *c_QMenuBar__sizeHint(void *thisObj);
// QMenuBar::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QMenuBar__tr_char_char_int(const char *s, const char *c, int n);
// QMenuBar::triggered(QAction * action)
QtDartBindings_EXPORT void c_QMenuBar__triggered_QAction(void *thisObj,
                                                         void *action_);
QtDartBindings_EXPORT void c_QMenuBar__onTriggered_QAction(void *thisObj,
                                                           void *contextQObject,
                                                           void *callback);
QtDartBindings_EXPORT void c_QMenuBar__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QMenuBar__registerVirtualMethodCallback(void *ptr, void *callback,
                                          int methodId);
QtDartBindings_EXPORT void c_QMenuBar_Finalizer(void *cppObj);
}
