
// tag=1040
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
// tag=1017
class QMainWindow_wrapper : public ::QMainWindow {
public:
  ~QMainWindow_wrapper();
  // tag=1041
  QMainWindow_wrapper(QWidget *parent = nullptr);
  // tag=1041
  void addToolBar(QToolBar *toolbar);
  // tag=1041
  QToolBar *addToolBar(const QString &title);
  // tag=1041
  void addToolBarBreak();
  // tag=1041
  QWidget *centralWidget() const;
  // tag=1041
  virtual void changeEvent(QEvent *arg__1);
  // tag=1008
  virtual void changeEvent_nocallback(QEvent *arg__1);
  // tag=1041
  virtual QMenu *createPopupMenu();
  // tag=1008
  virtual QMenu *createPopupMenu_nocallback();
  // tag=1041
  virtual void customEvent(QEvent *event);
  // tag=1008
  virtual void customEvent_nocallback(QEvent *event);
  // tag=1041
  virtual int devType() const;
  // tag=1008
  virtual int devType_nocallback() const;
  // tag=1041
  bool documentMode() const;
  // tag=1041
  virtual bool event(QEvent *event);
  // tag=1008
  virtual bool event_nocallback(QEvent *event);
  // tag=1041
  virtual bool eventFilter(QObject *watched, QEvent *event);
  // tag=1008
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  // tag=1041
  virtual bool focusNextPrevChild(bool next);
  // tag=1008
  virtual bool focusNextPrevChild_nocallback(bool next);
  // tag=1041
  virtual bool hasHeightForWidth() const;
  // tag=1008
  virtual bool hasHeightForWidth_nocallback() const;
  // tag=1041
  virtual int heightForWidth(int arg__1) const;
  // tag=1008
  virtual int heightForWidth_nocallback(int arg__1) const;
  // tag=1041
  QSize iconSize() const;
  // tag=1041
  void iconSizeChanged(const QSize &iconSize);
  // tag=1041
  virtual void initPainter(QPainter *painter) const;
  // tag=1008
  virtual void initPainter_nocallback(QPainter *painter) const;
  // tag=1041
  void insertToolBar(QToolBar *before, QToolBar *toolbar);
  // tag=1041
  void insertToolBarBreak(QToolBar *before);
  // tag=1041
  bool isAnimated() const;
  // tag=1041
  bool isDockNestingEnabled() const;
  // tag=1041
  bool isSeparator(const QPoint &pos) const;
  // tag=1041
  virtual void leaveEvent(QEvent *event);
  // tag=1008
  virtual void leaveEvent_nocallback(QEvent *event);
  // tag=1041
  QMenuBar *menuBar() const;
  // tag=1041
  QWidget *menuWidget() const;
  // tag=1041
  virtual QSize minimumSizeHint() const;
  // tag=1008
  virtual QSize minimumSizeHint_nocallback() const;
  // tag=1041
  virtual void mouseDoubleClickEvent(QMouseEvent *event);
  // tag=1008
  virtual void mouseDoubleClickEvent_nocallback(QMouseEvent *event);
  // tag=1041
  virtual void mouseMoveEvent(QMouseEvent *event);
  // tag=1008
  virtual void mouseMoveEvent_nocallback(QMouseEvent *event);
  // tag=1041
  virtual void mousePressEvent(QMouseEvent *event);
  // tag=1008
  virtual void mousePressEvent_nocallback(QMouseEvent *event);
  // tag=1041
  virtual void mouseReleaseEvent(QMouseEvent *event);
  // tag=1008
  virtual void mouseReleaseEvent_nocallback(QMouseEvent *event);
  // tag=1041
  virtual void paintEvent(QPaintEvent *event);
  // tag=1008
  virtual void paintEvent_nocallback(QPaintEvent *event);
  // tag=1041
  void removeToolBar(QToolBar *toolbar);
  // tag=1041
  void removeToolBarBreak(QToolBar *before);
  // tag=1041
  bool restoreState(const QByteArray &state, int version = 0);
  // tag=1041
  QByteArray saveState(int version = 0) const;
  // tag=1041
  void setAnimated(bool enabled);
  // tag=1041
  void setCentralWidget(QWidget *widget);
  // tag=1041
  void setDockNestingEnabled(bool enabled);
  // tag=1041
  void setDocumentMode(bool enabled);
  // tag=1041
  void setIconSize(const QSize &iconSize);
  // tag=1041
  void setMenuBar(QMenuBar *menubar);
  // tag=1041
  void setMenuWidget(QWidget *menubar);
  // tag=1041
  void setStatusBar(QStatusBar *statusbar);
  // tag=1041
  void setUnifiedTitleAndToolBarOnMac(bool set);
  // tag=1041
  virtual void setVisible(bool visible);
  // tag=1008
  virtual void setVisible_nocallback(bool visible);
  // tag=1041
  virtual QPainter *sharedPainter() const;
  // tag=1008
  virtual QPainter *sharedPainter_nocallback() const;
  // tag=1041
  virtual QSize sizeHint() const;
  // tag=1008
  virtual QSize sizeHint_nocallback() const;
  // tag=1041
  QStatusBar *statusBar() const;
  // tag=1041
  QWidget *takeCentralWidget();
  // tag=1041
  bool toolBarBreak(QToolBar *toolbar) const;
  // tag=1041
  static QString tr(const char *s, const char *c, int n);
  // tag=1041
  bool unifiedTitleAndToolBarOnMac() const;
  // tag=1042
  typedef void (*Callback_changeEvent)(void *, QEvent *arg__1);
  Callback_changeEvent m_changeEventCallback = nullptr;
  // tag=1042
  typedef QMenu *(*Callback_createPopupMenu)(void *);
  Callback_createPopupMenu m_createPopupMenuCallback = nullptr;
  // tag=1042
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  // tag=1042
  typedef int (*Callback_devType)(void *);
  Callback_devType m_devTypeCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_event)(void *, QEvent *event);
  Callback_event m_eventCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_eventFilter)(void *, QObject *watched, QEvent *event);
  Callback_eventFilter m_eventFilterCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_focusNextPrevChild)(void *, bool next);
  Callback_focusNextPrevChild m_focusNextPrevChildCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_hasHeightForWidth)(void *);
  Callback_hasHeightForWidth m_hasHeightForWidthCallback = nullptr;
  // tag=1042
  typedef int (*Callback_heightForWidth)(void *, int arg__1);
  Callback_heightForWidth m_heightForWidthCallback = nullptr;
  // tag=1042
  typedef void (*Callback_initPainter)(void *, QPainter *painter);
  Callback_initPainter m_initPainterCallback = nullptr;
  // tag=1042
  typedef void (*Callback_leaveEvent)(void *, QEvent *event);
  Callback_leaveEvent m_leaveEventCallback = nullptr;
  // tag=1042
  typedef QSize *(*Callback_minimumSizeHint)(void *);
  Callback_minimumSizeHint m_minimumSizeHintCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mouseDoubleClickEvent)(void *, QMouseEvent *event);
  Callback_mouseDoubleClickEvent m_mouseDoubleClickEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mouseMoveEvent)(void *, QMouseEvent *event);
  Callback_mouseMoveEvent m_mouseMoveEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mousePressEvent)(void *, QMouseEvent *event);
  Callback_mousePressEvent m_mousePressEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mouseReleaseEvent)(void *, QMouseEvent *event);
  Callback_mouseReleaseEvent m_mouseReleaseEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_paintEvent)(void *, QPaintEvent *event);
  Callback_paintEvent m_paintEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_setVisible)(void *, bool visible);
  Callback_setVisible m_setVisibleCallback = nullptr;
  // tag=1042
  typedef QPainter *(*Callback_sharedPainter)(void *);
  Callback_sharedPainter m_sharedPainterCallback = nullptr;
  // tag=1042
  typedef QSize *(*Callback_sizeHint)(void *);
  Callback_sizeHint m_sizeHintCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QMainWindow::QMainWindow(QWidget * parent)
QtDartBindings_EXPORT void *c_QMainWindow__constructor_QWidget(void *parent_);

// tag=1067
//  QMainWindow::addToolBar(QToolBar * toolbar)
QtDartBindings_EXPORT void c_QMainWindow__addToolBar_QToolBar(void *thisObj,
                                                              void *toolbar_);

// tag=1067
//  QMainWindow::addToolBar(const QString & title)
QtDartBindings_EXPORT void *
c_QMainWindow__addToolBar_QString(void *thisObj, const char *title_);

// tag=1067
//  QMainWindow::addToolBarBreak()
QtDartBindings_EXPORT void c_QMainWindow__addToolBarBreak(void *thisObj);

// tag=1067
//  QMainWindow::centralWidget() const
QtDartBindings_EXPORT void *c_QMainWindow__centralWidget(void *thisObj);

// tag=1067
//  QMainWindow::changeEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QMainWindow__changeEvent_QEvent(void *thisObj,
                                                             void *arg__1_);

// tag=1067
//  QMainWindow::createPopupMenu()
QtDartBindings_EXPORT void *c_QMainWindow__createPopupMenu(void *thisObj);

// tag=1067
//  QMainWindow::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QMainWindow__customEvent_QEvent(void *thisObj,
                                                             void *event_);

// tag=1067
//  QMainWindow::devType() const
QtDartBindings_EXPORT int c_QMainWindow__devType(void *thisObj);

// tag=1067
//  QMainWindow::documentMode() const
QtDartBindings_EXPORT bool c_QMainWindow__documentMode(void *thisObj);

// tag=1067
//  QMainWindow::event(QEvent * event)
QtDartBindings_EXPORT bool c_QMainWindow__event_QEvent(void *thisObj,
                                                       void *event_);

// tag=1067
//  QMainWindow::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QMainWindow__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                          void *event_);

// tag=1067
//  QMainWindow::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QMainWindow__focusNextPrevChild_bool(void *thisObj,
                                                                  bool next);

// tag=1067
//  QMainWindow::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QMainWindow__hasHeightForWidth(void *thisObj);

// tag=1067
//  QMainWindow::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QMainWindow__heightForWidth_int(void *thisObj,
                                                            int arg__1);

// tag=1067
//  QMainWindow::iconSize() const
QtDartBindings_EXPORT void *c_QMainWindow__iconSize(void *thisObj);

// tag=1067
//  QMainWindow::iconSizeChanged(const QSize & iconSize)
QtDartBindings_EXPORT void
c_QMainWindow__iconSizeChanged_QSize(void *thisObj, void *iconSize_);

// tag=1078
QtDartBindings_EXPORT void
c_QMainWindow__onIconSizeChanged_QSize(void *thisObj, void *contextQObject,
                                       void *callback);
// tag=1067
//  QMainWindow::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QMainWindow__initPainter_QPainter(void *thisObj,
                                                               void *painter_);

// tag=1067
//  QMainWindow::insertToolBar(QToolBar * before, QToolBar * toolbar)
QtDartBindings_EXPORT void
c_QMainWindow__insertToolBar_QToolBar_QToolBar(void *thisObj, void *before_,
                                               void *toolbar_);

// tag=1067
//  QMainWindow::insertToolBarBreak(QToolBar * before)
QtDartBindings_EXPORT void
c_QMainWindow__insertToolBarBreak_QToolBar(void *thisObj, void *before_);

// tag=1067
//  QMainWindow::isAnimated() const
QtDartBindings_EXPORT bool c_QMainWindow__isAnimated(void *thisObj);

// tag=1067
//  QMainWindow::isDockNestingEnabled() const
QtDartBindings_EXPORT bool c_QMainWindow__isDockNestingEnabled(void *thisObj);

// tag=1067
//  QMainWindow::isSeparator(const QPoint & pos) const
QtDartBindings_EXPORT bool c_QMainWindow__isSeparator_QPoint(void *thisObj,
                                                             void *pos_);

// tag=1067
//  QMainWindow::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QMainWindow__leaveEvent_QEvent(void *thisObj,
                                                            void *event_);

// tag=1067
//  QMainWindow::menuBar() const
QtDartBindings_EXPORT void *c_QMainWindow__menuBar(void *thisObj);

// tag=1067
//  QMainWindow::menuWidget() const
QtDartBindings_EXPORT void *c_QMainWindow__menuWidget(void *thisObj);

// tag=1067
//  QMainWindow::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QMainWindow__minimumSizeHint(void *thisObj);

// tag=1067
//  QMainWindow::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QMainWindow__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QMainWindow::mouseMoveEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QMainWindow__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QMainWindow::mousePressEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QMainWindow__mousePressEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QMainWindow::mouseReleaseEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QMainWindow__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QMainWindow::paintEvent(QPaintEvent * event)
QtDartBindings_EXPORT void c_QMainWindow__paintEvent_QPaintEvent(void *thisObj,
                                                                 void *event_);

// tag=1067
//  QMainWindow::removeToolBar(QToolBar * toolbar)
QtDartBindings_EXPORT void
c_QMainWindow__removeToolBar_QToolBar(void *thisObj, void *toolbar_);

// tag=1067
//  QMainWindow::removeToolBarBreak(QToolBar * before)
QtDartBindings_EXPORT void
c_QMainWindow__removeToolBarBreak_QToolBar(void *thisObj, void *before_);

// tag=1067
//  QMainWindow::restoreState(const QByteArray & state, int version)
QtDartBindings_EXPORT bool
c_QMainWindow__restoreState_QByteArray_int(void *thisObj, void *state_,
                                           int version);

// tag=1067
//  QMainWindow::saveState(int version) const
QtDartBindings_EXPORT void *c_QMainWindow__saveState_int(void *thisObj,
                                                         int version);

// tag=1067
//  QMainWindow::setAnimated(bool enabled)
QtDartBindings_EXPORT void c_QMainWindow__setAnimated_bool(void *thisObj,
                                                           bool enabled);

// tag=1067
//  QMainWindow::setCentralWidget(QWidget * widget)
QtDartBindings_EXPORT void
c_QMainWindow__setCentralWidget_QWidget(void *thisObj, void *widget_);

// tag=1067
//  QMainWindow::setDockNestingEnabled(bool enabled)
QtDartBindings_EXPORT void
c_QMainWindow__setDockNestingEnabled_bool(void *thisObj, bool enabled);

// tag=1067
//  QMainWindow::setDocumentMode(bool enabled)
QtDartBindings_EXPORT void c_QMainWindow__setDocumentMode_bool(void *thisObj,
                                                               bool enabled);

// tag=1067
//  QMainWindow::setIconSize(const QSize & iconSize)
QtDartBindings_EXPORT void c_QMainWindow__setIconSize_QSize(void *thisObj,
                                                            void *iconSize_);

// tag=1067
//  QMainWindow::setMenuBar(QMenuBar * menubar)
QtDartBindings_EXPORT void c_QMainWindow__setMenuBar_QMenuBar(void *thisObj,
                                                              void *menubar_);

// tag=1067
//  QMainWindow::setMenuWidget(QWidget * menubar)
QtDartBindings_EXPORT void c_QMainWindow__setMenuWidget_QWidget(void *thisObj,
                                                                void *menubar_);

// tag=1067
//  QMainWindow::setStatusBar(QStatusBar * statusbar)
QtDartBindings_EXPORT void
c_QMainWindow__setStatusBar_QStatusBar(void *thisObj, void *statusbar_);

// tag=1067
//  QMainWindow::setUnifiedTitleAndToolBarOnMac(bool set)
QtDartBindings_EXPORT void
c_QMainWindow__setUnifiedTitleAndToolBarOnMac_bool(void *thisObj, bool set);

// tag=1067
//  QMainWindow::setVisible(bool visible)
QtDartBindings_EXPORT void c_QMainWindow__setVisible_bool(void *thisObj,
                                                          bool visible);

// tag=1067
//  QMainWindow::sharedPainter() const
QtDartBindings_EXPORT void *c_QMainWindow__sharedPainter(void *thisObj);

// tag=1067
//  QMainWindow::sizeHint() const
QtDartBindings_EXPORT void *c_QMainWindow__sizeHint(void *thisObj);

// tag=1067
//  QMainWindow::statusBar() const
QtDartBindings_EXPORT void *c_QMainWindow__statusBar(void *thisObj);

// tag=1067
//  QMainWindow::takeCentralWidget()
QtDartBindings_EXPORT void *c_QMainWindow__takeCentralWidget(void *thisObj);

// tag=1067
//  QMainWindow::toolBarBreak(QToolBar * toolbar) const
QtDartBindings_EXPORT bool c_QMainWindow__toolBarBreak_QToolBar(void *thisObj,
                                                                void *toolbar_);

// tag=1067
//  QMainWindow::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QMainWindow__tr_char_char_int(const char *s, const char *c, int n);

// tag=1067
//  QMainWindow::unifiedTitleAndToolBarOnMac() const
QtDartBindings_EXPORT bool
c_QMainWindow__unifiedTitleAndToolBarOnMac(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QMainWindow__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QMainWindow__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QMainWindow_Finalizer(void *, void *cppObj,
                                                   void *);
}
