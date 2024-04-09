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
#include <qmainwindow.h>
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
#include <qstatusbar.h>
#include <qstring.h>
#include <qstyle.h>
#include <qtoolbar.h>
#include <qwidget.h>
#include <qwindow.h>

namespace QtDartBindings_wrappersNS {
class QMainWindow_wrapper : public ::QMainWindow {
public:
  ~QMainWindow_wrapper();
  QMainWindow_wrapper(QWidget *parent = nullptr);
  void addToolBar(QToolBar *toolbar);
  QToolBar *addToolBar(const QString &title);
  void addToolBarBreak();
  QWidget *centralWidget() const;
  virtual void changeEvent(QEvent *arg__1);
  virtual void changeEvent_nocallback(QEvent *arg__1);
  virtual QMenu *createPopupMenu();
  virtual QMenu *createPopupMenu_nocallback();
  virtual void customEvent(QEvent *event);
  virtual void customEvent_nocallback(QEvent *event);
  virtual int devType() const;
  virtual int devType_nocallback() const;
  bool documentMode() const;
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
  void insertToolBar(QToolBar *before, QToolBar *toolbar);
  void insertToolBarBreak(QToolBar *before);
  bool isAnimated() const;
  bool isDockNestingEnabled() const;
  bool isSeparator(const QPoint &pos) const;
  virtual void leaveEvent(QEvent *event);
  virtual void leaveEvent_nocallback(QEvent *event);
  QMenuBar *menuBar() const;
  QWidget *menuWidget() const;
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
  virtual void paintEvent(QPaintEvent *event);
  virtual void paintEvent_nocallback(QPaintEvent *event);
  void removeToolBar(QToolBar *toolbar);
  void removeToolBarBreak(QToolBar *before);
  bool restoreState(const QByteArray &state, int version = 0);
  QByteArray saveState(int version = 0) const;
  void setAnimated(bool enabled);
  void setCentralWidget(QWidget *widget);
  void setDockNestingEnabled(bool enabled);
  void setDocumentMode(bool enabled);
  void setIconSize(const QSize &iconSize);
  void setMenuBar(QMenuBar *menubar);
  void setMenuWidget(QWidget *menubar);
  void setStatusBar(QStatusBar *statusbar);
  void setUnifiedTitleAndToolBarOnMac(bool set);
  virtual void setVisible(bool visible);
  virtual void setVisible_nocallback(bool visible);
  virtual QPainter *sharedPainter() const;
  virtual QPainter *sharedPainter_nocallback() const;
  virtual QSize sizeHint() const;
  virtual QSize sizeHint_nocallback() const;
  QStatusBar *statusBar() const;
  QWidget *takeCentralWidget();
  bool toolBarBreak(QToolBar *toolbar) const;
  static QString tr(const char *s, const char *c, int n);
  bool unifiedTitleAndToolBarOnMac() const;
  typedef void (*Callback_changeEvent)(void *, QEvent *arg__1);
  Callback_changeEvent m_changeEventCallback = nullptr;
  typedef QMenu *(*Callback_createPopupMenu)(void *);
  Callback_createPopupMenu m_createPopupMenuCallback = nullptr;
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
// QMainWindow::QMainWindow(QWidget * parent)
QtDartBindings_EXPORT void *c_QMainWindow__constructor_QWidget(void *parent_);
// QMainWindow::addToolBar(QToolBar * toolbar)
QtDartBindings_EXPORT void c_QMainWindow__addToolBar_QToolBar(void *thisObj,
                                                              void *toolbar_);
// QMainWindow::addToolBar(const QString & title)
QtDartBindings_EXPORT void *
c_QMainWindow__addToolBar_QString(void *thisObj, const char *title_);
// QMainWindow::addToolBarBreak()
QtDartBindings_EXPORT void c_QMainWindow__addToolBarBreak(void *thisObj);
// QMainWindow::centralWidget() const
QtDartBindings_EXPORT void *c_QMainWindow__centralWidget(void *thisObj);
// QMainWindow::changeEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QMainWindow__changeEvent_QEvent(void *thisObj,
                                                             void *arg__1_);
// QMainWindow::createPopupMenu()
QtDartBindings_EXPORT void *c_QMainWindow__createPopupMenu(void *thisObj);
// QMainWindow::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QMainWindow__customEvent_QEvent(void *thisObj,
                                                             void *event_);
// QMainWindow::devType() const
QtDartBindings_EXPORT int c_QMainWindow__devType(void *thisObj);
// QMainWindow::documentMode() const
QtDartBindings_EXPORT bool c_QMainWindow__documentMode(void *thisObj);
// QMainWindow::event(QEvent * event)
QtDartBindings_EXPORT bool c_QMainWindow__event_QEvent(void *thisObj,
                                                       void *event_);
// QMainWindow::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QMainWindow__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                          void *event_);
// QMainWindow::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QMainWindow__focusNextPrevChild_bool(void *thisObj,
                                                                  bool next);
// QMainWindow::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QMainWindow__hasHeightForWidth(void *thisObj);
// QMainWindow::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QMainWindow__heightForWidth_int(void *thisObj,
                                                            int arg__1);
// QMainWindow::iconSize() const
QtDartBindings_EXPORT void *c_QMainWindow__iconSize(void *thisObj);
// QMainWindow::iconSizeChanged(const QSize & iconSize)
QtDartBindings_EXPORT void
c_QMainWindow__iconSizeChanged_QSize(void *thisObj, void *iconSize_);
QtDartBindings_EXPORT void c_QMainWindow__onIconSizeChanged_QSize(
    void *thisObj, void *contextQObject,
    void *callback); // QMainWindow::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QMainWindow__initPainter_QPainter(void *thisObj,
                                                               void *painter_);
// QMainWindow::insertToolBar(QToolBar * before, QToolBar * toolbar)
QtDartBindings_EXPORT void
c_QMainWindow__insertToolBar_QToolBar_QToolBar(void *thisObj, void *before_,
                                               void *toolbar_);
// QMainWindow::insertToolBarBreak(QToolBar * before)
QtDartBindings_EXPORT void
c_QMainWindow__insertToolBarBreak_QToolBar(void *thisObj, void *before_);
// QMainWindow::isAnimated() const
QtDartBindings_EXPORT bool c_QMainWindow__isAnimated(void *thisObj);
// QMainWindow::isDockNestingEnabled() const
QtDartBindings_EXPORT bool c_QMainWindow__isDockNestingEnabled(void *thisObj);
// QMainWindow::isSeparator(const QPoint & pos) const
QtDartBindings_EXPORT bool c_QMainWindow__isSeparator_QPoint(void *thisObj,
                                                             void *pos_);
// QMainWindow::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QMainWindow__leaveEvent_QEvent(void *thisObj,
                                                            void *event_);
// QMainWindow::menuBar() const
QtDartBindings_EXPORT void *c_QMainWindow__menuBar(void *thisObj);
// QMainWindow::menuWidget() const
QtDartBindings_EXPORT void *c_QMainWindow__menuWidget(void *thisObj);
// QMainWindow::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QMainWindow__minimumSizeHint(void *thisObj);
// QMainWindow::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QMainWindow__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);
// QMainWindow::mouseMoveEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QMainWindow__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_);
// QMainWindow::mousePressEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QMainWindow__mousePressEvent_QMouseEvent(void *thisObj, void *event_);
// QMainWindow::mouseReleaseEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QMainWindow__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_);
// QMainWindow::paintEvent(QPaintEvent * event)
QtDartBindings_EXPORT void c_QMainWindow__paintEvent_QPaintEvent(void *thisObj,
                                                                 void *event_);
// QMainWindow::removeToolBar(QToolBar * toolbar)
QtDartBindings_EXPORT void
c_QMainWindow__removeToolBar_QToolBar(void *thisObj, void *toolbar_);
// QMainWindow::removeToolBarBreak(QToolBar * before)
QtDartBindings_EXPORT void
c_QMainWindow__removeToolBarBreak_QToolBar(void *thisObj, void *before_);
// QMainWindow::restoreState(const QByteArray & state, int version)
QtDartBindings_EXPORT bool
c_QMainWindow__restoreState_QByteArray_int(void *thisObj, void *state_,
                                           int version);
// QMainWindow::saveState(int version) const
QtDartBindings_EXPORT void *c_QMainWindow__saveState_int(void *thisObj,
                                                         int version);
// QMainWindow::setAnimated(bool enabled)
QtDartBindings_EXPORT void c_QMainWindow__setAnimated_bool(void *thisObj,
                                                           bool enabled);
// QMainWindow::setCentralWidget(QWidget * widget)
QtDartBindings_EXPORT void
c_QMainWindow__setCentralWidget_QWidget(void *thisObj, void *widget_);
// QMainWindow::setDockNestingEnabled(bool enabled)
QtDartBindings_EXPORT void
c_QMainWindow__setDockNestingEnabled_bool(void *thisObj, bool enabled);
// QMainWindow::setDocumentMode(bool enabled)
QtDartBindings_EXPORT void c_QMainWindow__setDocumentMode_bool(void *thisObj,
                                                               bool enabled);
// QMainWindow::setIconSize(const QSize & iconSize)
QtDartBindings_EXPORT void c_QMainWindow__setIconSize_QSize(void *thisObj,
                                                            void *iconSize_);
// QMainWindow::setMenuBar(QMenuBar * menubar)
QtDartBindings_EXPORT void c_QMainWindow__setMenuBar_QMenuBar(void *thisObj,
                                                              void *menubar_);
// QMainWindow::setMenuWidget(QWidget * menubar)
QtDartBindings_EXPORT void c_QMainWindow__setMenuWidget_QWidget(void *thisObj,
                                                                void *menubar_);
// QMainWindow::setStatusBar(QStatusBar * statusbar)
QtDartBindings_EXPORT void
c_QMainWindow__setStatusBar_QStatusBar(void *thisObj, void *statusbar_);
// QMainWindow::setUnifiedTitleAndToolBarOnMac(bool set)
QtDartBindings_EXPORT void
c_QMainWindow__setUnifiedTitleAndToolBarOnMac_bool(void *thisObj, bool set);
// QMainWindow::setVisible(bool visible)
QtDartBindings_EXPORT void c_QMainWindow__setVisible_bool(void *thisObj,
                                                          bool visible);
// QMainWindow::sharedPainter() const
QtDartBindings_EXPORT void *c_QMainWindow__sharedPainter(void *thisObj);
// QMainWindow::sizeHint() const
QtDartBindings_EXPORT void *c_QMainWindow__sizeHint(void *thisObj);
// QMainWindow::statusBar() const
QtDartBindings_EXPORT void *c_QMainWindow__statusBar(void *thisObj);
// QMainWindow::takeCentralWidget()
QtDartBindings_EXPORT void *c_QMainWindow__takeCentralWidget(void *thisObj);
// QMainWindow::toolBarBreak(QToolBar * toolbar) const
QtDartBindings_EXPORT bool c_QMainWindow__toolBarBreak_QToolBar(void *thisObj,
                                                                void *toolbar_);
// QMainWindow::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QMainWindow__tr_char_char_int(const char *s, const char *c, int n);
// QMainWindow::unifiedTitleAndToolBarOnMac() const
QtDartBindings_EXPORT bool
c_QMainWindow__unifiedTitleAndToolBarOnMac(void *thisObj);
QtDartBindings_EXPORT void c_QMainWindow__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QMainWindow__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId);
QtDartBindings_EXPORT void c_QMainWindow_Finalizer(void *cppObj);
}
