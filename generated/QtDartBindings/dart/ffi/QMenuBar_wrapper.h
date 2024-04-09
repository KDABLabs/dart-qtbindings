
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
// tag=1017
class QMenuBar_wrapper : public ::QMenuBar {
public:
  ~QMenuBar_wrapper();
  // tag=1041
  QMenuBar_wrapper(QWidget *parent = nullptr);
  // tag=1041
  QAction *actionAt(const QPoint &arg__1) const;
  // tag=1041
  QRect actionGeometry(QAction *arg__1) const;
  // tag=1041
  QAction *activeAction() const;
  // tag=1041
  QAction *addMenu(QMenu *menu);
  // tag=1041
  QMenu *addMenu(const QIcon &icon, const QString &title);
  // tag=1041
  QMenu *addMenu(const QString &title);
  // tag=1041
  QAction *addSeparator();
  // tag=1041
  virtual void changeEvent(QEvent *arg__1);
  // tag=1008
  virtual void changeEvent_nocallback(QEvent *arg__1);
  // tag=1041
  void clear();
  // tag=1041
  QWidget *cornerWidget() const;
  // tag=1041
  virtual void customEvent(QEvent *event);
  // tag=1008
  virtual void customEvent_nocallback(QEvent *event);
  // tag=1041
  virtual int devType() const;
  // tag=1008
  virtual int devType_nocallback() const;
  // tag=1041
  virtual bool event(QEvent *arg__1);
  // tag=1008
  virtual bool event_nocallback(QEvent *arg__1);
  // tag=1041
  virtual bool eventFilter(QObject *arg__1, QEvent *arg__2);
  // tag=1008
  virtual bool eventFilter_nocallback(QObject *arg__1, QEvent *arg__2);
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
  void hovered(QAction *action);
  // tag=1041
  virtual void initPainter(QPainter *painter) const;
  // tag=1008
  virtual void initPainter_nocallback(QPainter *painter) const;
  // tag=1041
  QAction *insertMenu(QAction *before, QMenu *menu);
  // tag=1041
  QAction *insertSeparator(QAction *before);
  // tag=1041
  bool isDefaultUp() const;
  // tag=1041
  bool isNativeMenuBar() const;
  // tag=1041
  virtual void leaveEvent(QEvent *arg__1);
  // tag=1008
  virtual void leaveEvent_nocallback(QEvent *arg__1);
  // tag=1041
  virtual QSize minimumSizeHint() const;
  // tag=1008
  virtual QSize minimumSizeHint_nocallback() const;
  // tag=1041
  virtual void mouseDoubleClickEvent(QMouseEvent *event);
  // tag=1008
  virtual void mouseDoubleClickEvent_nocallback(QMouseEvent *event);
  // tag=1041
  virtual void mouseMoveEvent(QMouseEvent *arg__1);
  // tag=1008
  virtual void mouseMoveEvent_nocallback(QMouseEvent *arg__1);
  // tag=1041
  virtual void mousePressEvent(QMouseEvent *arg__1);
  // tag=1008
  virtual void mousePressEvent_nocallback(QMouseEvent *arg__1);
  // tag=1041
  virtual void mouseReleaseEvent(QMouseEvent *arg__1);
  // tag=1008
  virtual void mouseReleaseEvent_nocallback(QMouseEvent *arg__1);
  // tag=1041
  virtual void paintEvent(QPaintEvent *arg__1);
  // tag=1008
  virtual void paintEvent_nocallback(QPaintEvent *arg__1);
  // tag=1041
  void setActiveAction(QAction *action);
  // tag=1041
  void setCornerWidget(QWidget *w);
  // tag=1041
  void setDefaultUp(bool arg__1);
  // tag=1041
  void setNativeMenuBar(bool nativeMenuBar);
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
  static QString tr(const char *s, const char *c, int n);
  // tag=1041
  void triggered(QAction *action);
  // tag=1042
  typedef void (*Callback_changeEvent)(void *, QEvent *arg__1);
  Callback_changeEvent m_changeEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  // tag=1042
  typedef int (*Callback_devType)(void *);
  Callback_devType m_devTypeCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_event)(void *, QEvent *arg__1);
  Callback_event m_eventCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_eventFilter)(void *, QObject *arg__1, QEvent *arg__2);
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
  typedef void (*Callback_leaveEvent)(void *, QEvent *arg__1);
  Callback_leaveEvent m_leaveEventCallback = nullptr;
  // tag=1042
  typedef QSize *(*Callback_minimumSizeHint)(void *);
  Callback_minimumSizeHint m_minimumSizeHintCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mouseDoubleClickEvent)(void *, QMouseEvent *event);
  Callback_mouseDoubleClickEvent m_mouseDoubleClickEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mouseMoveEvent)(void *, QMouseEvent *arg__1);
  Callback_mouseMoveEvent m_mouseMoveEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mousePressEvent)(void *, QMouseEvent *arg__1);
  Callback_mousePressEvent m_mousePressEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mouseReleaseEvent)(void *, QMouseEvent *arg__1);
  Callback_mouseReleaseEvent m_mouseReleaseEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_paintEvent)(void *, QPaintEvent *arg__1);
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
//  QMenuBar::QMenuBar(QWidget * parent)
QtDartBindings_EXPORT void *c_QMenuBar__constructor_QWidget(void *parent_);

// tag=1067
//  QMenuBar::actionAt(const QPoint & arg__1) const
QtDartBindings_EXPORT void *c_QMenuBar__actionAt_QPoint(void *thisObj,
                                                        void *arg__1_);

// tag=1067
//  QMenuBar::actionGeometry(QAction * arg__1) const
QtDartBindings_EXPORT void *c_QMenuBar__actionGeometry_QAction(void *thisObj,
                                                               void *arg__1_);

// tag=1067
//  QMenuBar::activeAction() const
QtDartBindings_EXPORT void *c_QMenuBar__activeAction(void *thisObj);

// tag=1067
//  QMenuBar::addMenu(QMenu * menu)
QtDartBindings_EXPORT void *c_QMenuBar__addMenu_QMenu(void *thisObj,
                                                      void *menu_);

// tag=1067
//  QMenuBar::addMenu(const QIcon & icon, const QString & title)
QtDartBindings_EXPORT void *
c_QMenuBar__addMenu_QIcon_QString(void *thisObj, void *icon_,
                                  const char *title_);

// tag=1067
//  QMenuBar::addMenu(const QString & title)
QtDartBindings_EXPORT void *c_QMenuBar__addMenu_QString(void *thisObj,
                                                        const char *title_);

// tag=1067
//  QMenuBar::addSeparator()
QtDartBindings_EXPORT void *c_QMenuBar__addSeparator(void *thisObj);

// tag=1067
//  QMenuBar::changeEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QMenuBar__changeEvent_QEvent(void *thisObj,
                                                          void *arg__1_);

// tag=1067
//  QMenuBar::clear()
QtDartBindings_EXPORT void c_QMenuBar__clear(void *thisObj);

// tag=1067
//  QMenuBar::cornerWidget() const
QtDartBindings_EXPORT void *c_QMenuBar__cornerWidget(void *thisObj);

// tag=1067
//  QMenuBar::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QMenuBar__customEvent_QEvent(void *thisObj,
                                                          void *event_);

// tag=1067
//  QMenuBar::devType() const
QtDartBindings_EXPORT int c_QMenuBar__devType(void *thisObj);

// tag=1067
//  QMenuBar::event(QEvent * arg__1)
QtDartBindings_EXPORT bool c_QMenuBar__event_QEvent(void *thisObj,
                                                    void *arg__1_);

// tag=1067
//  QMenuBar::eventFilter(QObject * arg__1, QEvent * arg__2)
QtDartBindings_EXPORT bool
c_QMenuBar__eventFilter_QObject_QEvent(void *thisObj, void *arg__1_,
                                       void *arg__2_);

// tag=1067
//  QMenuBar::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QMenuBar__focusNextPrevChild_bool(void *thisObj,
                                                               bool next);

// tag=1067
//  QMenuBar::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QMenuBar__hasHeightForWidth(void *thisObj);

// tag=1067
//  QMenuBar::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QMenuBar__heightForWidth_int(void *thisObj,
                                                         int arg__1);

// tag=1067
//  QMenuBar::hovered(QAction * action)
QtDartBindings_EXPORT void c_QMenuBar__hovered_QAction(void *thisObj,
                                                       void *action_);

// tag=1078
QtDartBindings_EXPORT void c_QMenuBar__onHovered_QAction(void *thisObj,
                                                         void *contextQObject,
                                                         void *callback);
// tag=1067
//  QMenuBar::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QMenuBar__initPainter_QPainter(void *thisObj,
                                                            void *painter_);

// tag=1067
//  QMenuBar::insertMenu(QAction * before, QMenu * menu)
QtDartBindings_EXPORT void *
c_QMenuBar__insertMenu_QAction_QMenu(void *thisObj, void *before_, void *menu_);

// tag=1067
//  QMenuBar::insertSeparator(QAction * before)
QtDartBindings_EXPORT void *c_QMenuBar__insertSeparator_QAction(void *thisObj,
                                                                void *before_);

// tag=1067
//  QMenuBar::isDefaultUp() const
QtDartBindings_EXPORT bool c_QMenuBar__isDefaultUp(void *thisObj);

// tag=1067
//  QMenuBar::isNativeMenuBar() const
QtDartBindings_EXPORT bool c_QMenuBar__isNativeMenuBar(void *thisObj);

// tag=1067
//  QMenuBar::leaveEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QMenuBar__leaveEvent_QEvent(void *thisObj,
                                                         void *arg__1_);

// tag=1067
//  QMenuBar::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QMenuBar__minimumSizeHint(void *thisObj);

// tag=1067
//  QMenuBar::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QMenuBar__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QMenuBar::mouseMoveEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QMenuBar__mouseMoveEvent_QMouseEvent(void *thisObj, void *arg__1_);

// tag=1067
//  QMenuBar::mousePressEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QMenuBar__mousePressEvent_QMouseEvent(void *thisObj, void *arg__1_);

// tag=1067
//  QMenuBar::mouseReleaseEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QMenuBar__mouseReleaseEvent_QMouseEvent(void *thisObj, void *arg__1_);

// tag=1067
//  QMenuBar::paintEvent(QPaintEvent * arg__1)
QtDartBindings_EXPORT void c_QMenuBar__paintEvent_QPaintEvent(void *thisObj,
                                                              void *arg__1_);

// tag=1067
//  QMenuBar::setActiveAction(QAction * action)
QtDartBindings_EXPORT void c_QMenuBar__setActiveAction_QAction(void *thisObj,
                                                               void *action_);

// tag=1067
//  QMenuBar::setCornerWidget(QWidget * w)
QtDartBindings_EXPORT void c_QMenuBar__setCornerWidget_QWidget(void *thisObj,
                                                               void *w_);

// tag=1067
//  QMenuBar::setDefaultUp(bool arg__1)
QtDartBindings_EXPORT void c_QMenuBar__setDefaultUp_bool(void *thisObj,
                                                         bool arg__1);

// tag=1067
//  QMenuBar::setNativeMenuBar(bool nativeMenuBar)
QtDartBindings_EXPORT void
c_QMenuBar__setNativeMenuBar_bool(void *thisObj, bool nativeMenuBar);

// tag=1067
//  QMenuBar::setVisible(bool visible)
QtDartBindings_EXPORT void c_QMenuBar__setVisible_bool(void *thisObj,
                                                       bool visible);

// tag=1067
//  QMenuBar::sharedPainter() const
QtDartBindings_EXPORT void *c_QMenuBar__sharedPainter(void *thisObj);

// tag=1067
//  QMenuBar::sizeHint() const
QtDartBindings_EXPORT void *c_QMenuBar__sizeHint(void *thisObj);

// tag=1067
//  QMenuBar::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QMenuBar__tr_char_char_int(const char *s, const char *c, int n);

// tag=1067
//  QMenuBar::triggered(QAction * action)
QtDartBindings_EXPORT void c_QMenuBar__triggered_QAction(void *thisObj,
                                                         void *action_);

// tag=1078
QtDartBindings_EXPORT void c_QMenuBar__onTriggered_QAction(void *thisObj,
                                                           void *contextQObject,
                                                           void *callback);
// tag=1066
QtDartBindings_EXPORT void c_QMenuBar__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QMenuBar__registerVirtualMethodCallback(void *ptr, void *callback,
                                          int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QMenuBar_Finalizer(void *, void *cppObj, void *);
}
