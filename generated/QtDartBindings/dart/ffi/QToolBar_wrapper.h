
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
// tag=1017
class QToolBar_wrapper : public ::QToolBar {
public:
  ~QToolBar_wrapper();
  // tag=1041
  QToolBar_wrapper(QWidget *parent = nullptr);
  // tag=1041
  QToolBar_wrapper(const QString &title, QWidget *parent = nullptr);
  // tag=1041
  QAction *actionAt(const QPoint &p) const;
  // tag=1041
  QAction *actionAt(int x, int y) const;
  // tag=1041
  QRect actionGeometry(QAction *action) const;
  // tag=1041
  void actionTriggered(QAction *action);
  // tag=1041
  QAction *addSeparator();
  // tag=1041
  QAction *addWidget(QWidget *widget);
  // tag=1041
  virtual void changeEvent(QEvent *event);
  // tag=1008
  virtual void changeEvent_nocallback(QEvent *event);
  // tag=1041
  void clear();
  // tag=1041
  virtual void customEvent(QEvent *event);
  // tag=1008
  virtual void customEvent_nocallback(QEvent *event);
  // tag=1041
  virtual int devType() const;
  // tag=1008
  virtual int devType_nocallback() const;
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
  QAction *insertSeparator(QAction *before);
  // tag=1041
  QAction *insertWidget(QAction *before, QWidget *widget);
  // tag=1041
  bool isFloatable() const;
  // tag=1041
  bool isFloating() const;
  // tag=1041
  bool isMovable() const;
  // tag=1041
  virtual void leaveEvent(QEvent *event);
  // tag=1008
  virtual void leaveEvent_nocallback(QEvent *event);
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
  void movableChanged(bool movable);
  // tag=1041
  Qt::Orientation orientation() const;
  // tag=1041
  void orientationChanged(Qt::Orientation orientation);
  // tag=1041
  virtual void paintEvent(QPaintEvent *event);
  // tag=1008
  virtual void paintEvent_nocallback(QPaintEvent *event);
  // tag=1041
  void setFloatable(bool floatable);
  // tag=1041
  void setIconSize(const QSize &iconSize);
  // tag=1041
  void setMovable(bool movable);
  // tag=1041
  void setOrientation(Qt::Orientation orientation);
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
  QAction *toggleViewAction() const;
  // tag=1041
  void topLevelChanged(bool topLevel);
  // tag=1041
  static QString tr(const char *s, const char *c, int n);
  // tag=1041
  void visibilityChanged(bool visible);
  // tag=1041
  QWidget *widgetForAction(QAction *action) const;
  // tag=1042
  typedef void (*Callback_changeEvent)(void *, QEvent *event);
  Callback_changeEvent m_changeEventCallback = nullptr;
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
//  QToolBar::QToolBar(QWidget * parent)
QtDartBindings_EXPORT void *c_QToolBar__constructor_QWidget(void *parent_);

// tag=1067
//  QToolBar::QToolBar(const QString & title, QWidget * parent)
QtDartBindings_EXPORT void *
c_QToolBar__constructor_QString_QWidget(const char *title_, void *parent_);

// tag=1067
//  QToolBar::actionAt(const QPoint & p) const
QtDartBindings_EXPORT void *c_QToolBar__actionAt_QPoint(void *thisObj,
                                                        void *p_);

// tag=1067
//  QToolBar::actionAt(int x, int y) const
QtDartBindings_EXPORT void *c_QToolBar__actionAt_int_int(void *thisObj, int x,
                                                         int y);

// tag=1067
//  QToolBar::actionGeometry(QAction * action) const
QtDartBindings_EXPORT void *c_QToolBar__actionGeometry_QAction(void *thisObj,
                                                               void *action_);

// tag=1067
//  QToolBar::actionTriggered(QAction * action)
QtDartBindings_EXPORT void c_QToolBar__actionTriggered_QAction(void *thisObj,
                                                               void *action_);

// tag=1078
QtDartBindings_EXPORT void
c_QToolBar__onActionTriggered_QAction(void *thisObj, void *contextQObject,
                                      void *callback);
// tag=1067
//  QToolBar::addSeparator()
QtDartBindings_EXPORT void *c_QToolBar__addSeparator(void *thisObj);

// tag=1067
//  QToolBar::addWidget(QWidget * widget)
QtDartBindings_EXPORT void *c_QToolBar__addWidget_QWidget(void *thisObj,
                                                          void *widget_);

// tag=1067
//  QToolBar::changeEvent(QEvent * event)
QtDartBindings_EXPORT void c_QToolBar__changeEvent_QEvent(void *thisObj,
                                                          void *event_);

// tag=1067
//  QToolBar::clear()
QtDartBindings_EXPORT void c_QToolBar__clear(void *thisObj);

// tag=1067
//  QToolBar::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QToolBar__customEvent_QEvent(void *thisObj,
                                                          void *event_);

// tag=1067
//  QToolBar::devType() const
QtDartBindings_EXPORT int c_QToolBar__devType(void *thisObj);

// tag=1067
//  QToolBar::event(QEvent * event)
QtDartBindings_EXPORT bool c_QToolBar__event_QEvent(void *thisObj,
                                                    void *event_);

// tag=1067
//  QToolBar::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QToolBar__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                       void *event_);

// tag=1067
//  QToolBar::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QToolBar__focusNextPrevChild_bool(void *thisObj,
                                                               bool next);

// tag=1067
//  QToolBar::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QToolBar__hasHeightForWidth(void *thisObj);

// tag=1067
//  QToolBar::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QToolBar__heightForWidth_int(void *thisObj,
                                                         int arg__1);

// tag=1067
//  QToolBar::iconSize() const
QtDartBindings_EXPORT void *c_QToolBar__iconSize(void *thisObj);

// tag=1067
//  QToolBar::iconSizeChanged(const QSize & iconSize)
QtDartBindings_EXPORT void c_QToolBar__iconSizeChanged_QSize(void *thisObj,
                                                             void *iconSize_);

// tag=1078
QtDartBindings_EXPORT void
c_QToolBar__onIconSizeChanged_QSize(void *thisObj, void *contextQObject,
                                    void *callback);
// tag=1067
//  QToolBar::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QToolBar__initPainter_QPainter(void *thisObj,
                                                            void *painter_);

// tag=1067
//  QToolBar::insertSeparator(QAction * before)
QtDartBindings_EXPORT void *c_QToolBar__insertSeparator_QAction(void *thisObj,
                                                                void *before_);

// tag=1067
//  QToolBar::insertWidget(QAction * before, QWidget * widget)
QtDartBindings_EXPORT void *
c_QToolBar__insertWidget_QAction_QWidget(void *thisObj, void *before_,
                                         void *widget_);

// tag=1067
//  QToolBar::isFloatable() const
QtDartBindings_EXPORT bool c_QToolBar__isFloatable(void *thisObj);

// tag=1067
//  QToolBar::isFloating() const
QtDartBindings_EXPORT bool c_QToolBar__isFloating(void *thisObj);

// tag=1067
//  QToolBar::isMovable() const
QtDartBindings_EXPORT bool c_QToolBar__isMovable(void *thisObj);

// tag=1067
//  QToolBar::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QToolBar__leaveEvent_QEvent(void *thisObj,
                                                         void *event_);

// tag=1067
//  QToolBar::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QToolBar__minimumSizeHint(void *thisObj);

// tag=1067
//  QToolBar::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QToolBar__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QToolBar::mouseMoveEvent(QMouseEvent * event)
QtDartBindings_EXPORT void c_QToolBar__mouseMoveEvent_QMouseEvent(void *thisObj,
                                                                  void *event_);

// tag=1067
//  QToolBar::mousePressEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QToolBar__mousePressEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QToolBar::mouseReleaseEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QToolBar__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QToolBar::movableChanged(bool movable)
QtDartBindings_EXPORT void c_QToolBar__movableChanged_bool(void *thisObj,
                                                           bool movable);

// tag=1078
QtDartBindings_EXPORT void
c_QToolBar__onMovableChanged_bool(void *thisObj, void *contextQObject,
                                  void *callback);
// tag=1067
//  QToolBar::orientation() const
QtDartBindings_EXPORT int c_QToolBar__orientation(void *thisObj);

// tag=1067
//  QToolBar::orientationChanged(Qt::Orientation orientation)
QtDartBindings_EXPORT void
c_QToolBar__orientationChanged_Orientation(void *thisObj, int orientation);

// tag=1078
QtDartBindings_EXPORT void c_QToolBar__onOrientationChanged_Orientation(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QToolBar::paintEvent(QPaintEvent * event)
QtDartBindings_EXPORT void c_QToolBar__paintEvent_QPaintEvent(void *thisObj,
                                                              void *event_);

// tag=1067
//  QToolBar::setFloatable(bool floatable)
QtDartBindings_EXPORT void c_QToolBar__setFloatable_bool(void *thisObj,
                                                         bool floatable);

// tag=1067
//  QToolBar::setIconSize(const QSize & iconSize)
QtDartBindings_EXPORT void c_QToolBar__setIconSize_QSize(void *thisObj,
                                                         void *iconSize_);

// tag=1067
//  QToolBar::setMovable(bool movable)
QtDartBindings_EXPORT void c_QToolBar__setMovable_bool(void *thisObj,
                                                       bool movable);

// tag=1067
//  QToolBar::setOrientation(Qt::Orientation orientation)
QtDartBindings_EXPORT void
c_QToolBar__setOrientation_Orientation(void *thisObj, int orientation);

// tag=1067
//  QToolBar::setVisible(bool visible)
QtDartBindings_EXPORT void c_QToolBar__setVisible_bool(void *thisObj,
                                                       bool visible);

// tag=1067
//  QToolBar::sharedPainter() const
QtDartBindings_EXPORT void *c_QToolBar__sharedPainter(void *thisObj);

// tag=1067
//  QToolBar::sizeHint() const
QtDartBindings_EXPORT void *c_QToolBar__sizeHint(void *thisObj);

// tag=1067
//  QToolBar::toggleViewAction() const
QtDartBindings_EXPORT void *c_QToolBar__toggleViewAction(void *thisObj);

// tag=1067
//  QToolBar::topLevelChanged(bool topLevel)
QtDartBindings_EXPORT void c_QToolBar__topLevelChanged_bool(void *thisObj,
                                                            bool topLevel);

// tag=1078
QtDartBindings_EXPORT void
c_QToolBar__onTopLevelChanged_bool(void *thisObj, void *contextQObject,
                                   void *callback);
// tag=1067
//  QToolBar::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QToolBar__tr_char_char_int(const char *s, const char *c, int n);

// tag=1067
//  QToolBar::visibilityChanged(bool visible)
QtDartBindings_EXPORT void c_QToolBar__visibilityChanged_bool(void *thisObj,
                                                              bool visible);

// tag=1078
QtDartBindings_EXPORT void
c_QToolBar__onVisibilityChanged_bool(void *thisObj, void *contextQObject,
                                     void *callback);
// tag=1067
//  QToolBar::widgetForAction(QAction * action) const
QtDartBindings_EXPORT void *c_QToolBar__widgetForAction_QAction(void *thisObj,
                                                                void *action_);

// tag=1066
QtDartBindings_EXPORT void c_QToolBar__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QToolBar__registerVirtualMethodCallback(void *ptr, void *callback,
                                          int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QToolBar_Finalizer(void *, void *cppObj, void *);
}
