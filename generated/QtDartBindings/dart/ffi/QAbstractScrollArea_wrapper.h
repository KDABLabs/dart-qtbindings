
// tag=1040
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
// tag=1017
class QAbstractScrollArea_wrapper : public ::QAbstractScrollArea {
public:
  ~QAbstractScrollArea_wrapper();
  // tag=1041
  QAbstractScrollArea_wrapper(QWidget *parent = nullptr);
  // tag=1041
  virtual void changeEvent(QEvent *arg__1);
  // tag=1008
  virtual void changeEvent_nocallback(QEvent *arg__1);
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
  virtual void initPainter(QPainter *painter) const;
  // tag=1008
  virtual void initPainter_nocallback(QPainter *painter) const;
  // tag=1041
  virtual void leaveEvent(QEvent *event);
  // tag=1008
  virtual void leaveEvent_nocallback(QEvent *event);
  // tag=1041
  QSize maximumViewportSize() const;
  // tag=1041
  virtual QSize minimumSizeHint() const;
  // tag=1008
  virtual QSize minimumSizeHint_nocallback() const;
  // tag=1041
  virtual void mouseDoubleClickEvent(QMouseEvent *arg__1);
  // tag=1008
  virtual void mouseDoubleClickEvent_nocallback(QMouseEvent *arg__1);
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
  virtual void scrollContentsBy(int dx, int dy);
  // tag=1008
  virtual void scrollContentsBy_nocallback(int dx, int dy);
  // tag=1041
  void setCornerWidget(QWidget *widget);
  // tag=1041
  void setViewport(QWidget *widget);
  // tag=1041
  void setViewportMargins(int left, int top, int right, int bottom);
  // tag=1041
  virtual void setVisible(bool visible);
  // tag=1008
  virtual void setVisible_nocallback(bool visible);
  // tag=1041
  virtual void setupViewport(QWidget *viewport);
  // tag=1008
  virtual void setupViewport_nocallback(QWidget *viewport);
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
  QWidget *viewport() const;
  // tag=1041
  virtual bool viewportEvent(QEvent *arg__1);
  // tag=1008
  virtual bool viewportEvent_nocallback(QEvent *arg__1);
  // tag=1041
  virtual QSize viewportSizeHint() const;
  // tag=1008
  virtual QSize viewportSizeHint_nocallback() const;
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
  typedef void (*Callback_leaveEvent)(void *, QEvent *event);
  Callback_leaveEvent m_leaveEventCallback = nullptr;
  // tag=1042
  typedef QSize *(*Callback_minimumSizeHint)(void *);
  Callback_minimumSizeHint m_minimumSizeHintCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mouseDoubleClickEvent)(void *, QMouseEvent *arg__1);
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
  typedef void (*Callback_scrollContentsBy)(void *, int dx, int dy);
  Callback_scrollContentsBy m_scrollContentsByCallback = nullptr;
  // tag=1042
  typedef void (*Callback_setVisible)(void *, bool visible);
  Callback_setVisible m_setVisibleCallback = nullptr;
  // tag=1042
  typedef void (*Callback_setupViewport)(void *, QWidget *viewport);
  Callback_setupViewport m_setupViewportCallback = nullptr;
  // tag=1042
  typedef QPainter *(*Callback_sharedPainter)(void *);
  Callback_sharedPainter m_sharedPainterCallback = nullptr;
  // tag=1042
  typedef QSize *(*Callback_sizeHint)(void *);
  Callback_sizeHint m_sizeHintCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_viewportEvent)(void *, QEvent *arg__1);
  Callback_viewportEvent m_viewportEventCallback = nullptr;
  // tag=1042
  typedef QSize *(*Callback_viewportSizeHint)(void *);
  Callback_viewportSizeHint m_viewportSizeHintCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QAbstractScrollArea::QAbstractScrollArea(QWidget * parent)
QtDartBindings_EXPORT void *
c_QAbstractScrollArea__constructor_QWidget(void *parent_);

// tag=1067
//  QAbstractScrollArea::changeEvent(QEvent * arg__1)
QtDartBindings_EXPORT void
c_QAbstractScrollArea__changeEvent_QEvent(void *thisObj, void *arg__1_);

// tag=1067
//  QAbstractScrollArea::cornerWidget() const
QtDartBindings_EXPORT void *c_QAbstractScrollArea__cornerWidget(void *thisObj);

// tag=1067
//  QAbstractScrollArea::customEvent(QEvent * event)
QtDartBindings_EXPORT void
c_QAbstractScrollArea__customEvent_QEvent(void *thisObj, void *event_);

// tag=1067
//  QAbstractScrollArea::devType() const
QtDartBindings_EXPORT int c_QAbstractScrollArea__devType(void *thisObj);

// tag=1067
//  QAbstractScrollArea::event(QEvent * arg__1)
QtDartBindings_EXPORT bool c_QAbstractScrollArea__event_QEvent(void *thisObj,
                                                               void *arg__1_);

// tag=1067
//  QAbstractScrollArea::eventFilter(QObject * arg__1, QEvent * arg__2)
QtDartBindings_EXPORT bool
c_QAbstractScrollArea__eventFilter_QObject_QEvent(void *thisObj, void *arg__1_,
                                                  void *arg__2_);

// tag=1067
//  QAbstractScrollArea::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool
c_QAbstractScrollArea__focusNextPrevChild_bool(void *thisObj, bool next);

// tag=1067
//  QAbstractScrollArea::hasHeightForWidth() const
QtDartBindings_EXPORT bool
c_QAbstractScrollArea__hasHeightForWidth(void *thisObj);

// tag=1067
//  QAbstractScrollArea::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int
c_QAbstractScrollArea__heightForWidth_int(void *thisObj, int arg__1);

// tag=1067
//  QAbstractScrollArea::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void
c_QAbstractScrollArea__initPainter_QPainter(void *thisObj, void *painter_);

// tag=1067
//  QAbstractScrollArea::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void
c_QAbstractScrollArea__leaveEvent_QEvent(void *thisObj, void *event_);

// tag=1067
//  QAbstractScrollArea::maximumViewportSize() const
QtDartBindings_EXPORT void *
c_QAbstractScrollArea__maximumViewportSize(void *thisObj);

// tag=1067
//  QAbstractScrollArea::minimumSizeHint() const
QtDartBindings_EXPORT void *
c_QAbstractScrollArea__minimumSizeHint(void *thisObj);

// tag=1067
//  QAbstractScrollArea::mouseDoubleClickEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QAbstractScrollArea__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                         void *arg__1_);

// tag=1067
//  QAbstractScrollArea::mouseMoveEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QAbstractScrollArea__mouseMoveEvent_QMouseEvent(void *thisObj, void *arg__1_);

// tag=1067
//  QAbstractScrollArea::mousePressEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QAbstractScrollArea__mousePressEvent_QMouseEvent(void *thisObj,
                                                   void *arg__1_);

// tag=1067
//  QAbstractScrollArea::mouseReleaseEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QAbstractScrollArea__mouseReleaseEvent_QMouseEvent(void *thisObj,
                                                     void *arg__1_);

// tag=1067
//  QAbstractScrollArea::paintEvent(QPaintEvent * arg__1)
QtDartBindings_EXPORT void
c_QAbstractScrollArea__paintEvent_QPaintEvent(void *thisObj, void *arg__1_);

// tag=1067
//  QAbstractScrollArea::scrollContentsBy(int dx, int dy)
QtDartBindings_EXPORT void
c_QAbstractScrollArea__scrollContentsBy_int_int(void *thisObj, int dx, int dy);

// tag=1067
//  QAbstractScrollArea::setCornerWidget(QWidget * widget)
QtDartBindings_EXPORT void
c_QAbstractScrollArea__setCornerWidget_QWidget(void *thisObj, void *widget_);

// tag=1067
//  QAbstractScrollArea::setViewport(QWidget * widget)
QtDartBindings_EXPORT void
c_QAbstractScrollArea__setViewport_QWidget(void *thisObj, void *widget_);

// tag=1067
//  QAbstractScrollArea::setViewportMargins(int left, int top, int right, int
//  bottom)
QtDartBindings_EXPORT void
c_QAbstractScrollArea__setViewportMargins_int_int_int_int(void *thisObj,
                                                          int left, int top,
                                                          int right,
                                                          int bottom);

// tag=1067
//  QAbstractScrollArea::setVisible(bool visible)
QtDartBindings_EXPORT void c_QAbstractScrollArea__setVisible_bool(void *thisObj,
                                                                  bool visible);

// tag=1067
//  QAbstractScrollArea::setupViewport(QWidget * viewport)
QtDartBindings_EXPORT void
c_QAbstractScrollArea__setupViewport_QWidget(void *thisObj, void *viewport_);

// tag=1067
//  QAbstractScrollArea::sharedPainter() const
QtDartBindings_EXPORT void *c_QAbstractScrollArea__sharedPainter(void *thisObj);

// tag=1067
//  QAbstractScrollArea::sizeHint() const
QtDartBindings_EXPORT void *c_QAbstractScrollArea__sizeHint(void *thisObj);

// tag=1067
//  QAbstractScrollArea::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QAbstractScrollArea__tr_char_char_int(const char *s, const char *c,
                                               int n);

// tag=1067
//  QAbstractScrollArea::viewport() const
QtDartBindings_EXPORT void *c_QAbstractScrollArea__viewport(void *thisObj);

// tag=1067
//  QAbstractScrollArea::viewportEvent(QEvent * arg__1)
QtDartBindings_EXPORT bool
c_QAbstractScrollArea__viewportEvent_QEvent(void *thisObj, void *arg__1_);

// tag=1067
//  QAbstractScrollArea::viewportSizeHint() const
QtDartBindings_EXPORT void *
c_QAbstractScrollArea__viewportSizeHint(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QAbstractScrollArea__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QAbstractScrollArea__registerVirtualMethodCallback(void *ptr, void *callback,
                                                     int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QAbstractScrollArea_Finalizer(void *, void *cppObj,
                                                           void *);
}
