
// tag=1040
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
// tag=1017
class QScrollArea_wrapper : public ::QScrollArea {
public:
  ~QScrollArea_wrapper();
  // tag=1041
  QScrollArea_wrapper(QWidget *parent = nullptr);
  // tag=1041
  virtual void changeEvent(QEvent *arg__1);
  // tag=1008
  virtual void changeEvent_nocallback(QEvent *arg__1);
  // tag=1041
  virtual void customEvent(QEvent *event);
  // tag=1008
  virtual void customEvent_nocallback(QEvent *event);
  // tag=1041
  virtual int devType() const;
  // tag=1008
  virtual int devType_nocallback() const;
  // tag=1041
  void ensureVisible(int x, int y, int xmargin = 50, int ymargin = 50);
  // tag=1041
  void ensureWidgetVisible(QWidget *childWidget, int xmargin = 50,
                           int ymargin = 50);
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
  virtual void setVisible(bool visible);
  // tag=1008
  virtual void setVisible_nocallback(bool visible);
  // tag=1041
  void setWidget(QWidget *widget);
  // tag=1041
  void setWidgetResizable(bool resizable);
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
  QWidget *takeWidget();
  // tag=1041
  static QString tr(const char *s, const char *c, int n);
  // tag=1041
  virtual bool viewportEvent(QEvent *arg__1);
  // tag=1008
  virtual bool viewportEvent_nocallback(QEvent *arg__1);
  // tag=1041
  virtual QSize viewportSizeHint() const;
  // tag=1008
  virtual QSize viewportSizeHint_nocallback() const;
  // tag=1041
  QWidget *widget() const;
  // tag=1041
  bool widgetResizable() const;
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
//  QScrollArea::QScrollArea(QWidget * parent)
QtDartBindings_EXPORT void *c_QScrollArea__constructor_QWidget(void *parent_);

// tag=1067
//  QScrollArea::changeEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QScrollArea__changeEvent_QEvent(void *thisObj,
                                                             void *arg__1_);

// tag=1067
//  QScrollArea::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QScrollArea__customEvent_QEvent(void *thisObj,
                                                             void *event_);

// tag=1067
//  QScrollArea::devType() const
QtDartBindings_EXPORT int c_QScrollArea__devType(void *thisObj);

// tag=1067
//  QScrollArea::ensureVisible(int x, int y, int xmargin, int ymargin)
QtDartBindings_EXPORT void
c_QScrollArea__ensureVisible_int_int_int_int(void *thisObj, int x, int y,
                                             int xmargin, int ymargin);

// tag=1067
//  QScrollArea::ensureWidgetVisible(QWidget * childWidget, int xmargin, int
//  ymargin)
QtDartBindings_EXPORT void c_QScrollArea__ensureWidgetVisible_QWidget_int_int(
    void *thisObj, void *childWidget_, int xmargin, int ymargin);

// tag=1067
//  QScrollArea::event(QEvent * arg__1)
QtDartBindings_EXPORT bool c_QScrollArea__event_QEvent(void *thisObj,
                                                       void *arg__1_);

// tag=1067
//  QScrollArea::eventFilter(QObject * arg__1, QEvent * arg__2)
QtDartBindings_EXPORT bool
c_QScrollArea__eventFilter_QObject_QEvent(void *thisObj, void *arg__1_,
                                          void *arg__2_);

// tag=1067
//  QScrollArea::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QScrollArea__focusNextPrevChild_bool(void *thisObj,
                                                                  bool next);

// tag=1067
//  QScrollArea::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QScrollArea__hasHeightForWidth(void *thisObj);

// tag=1067
//  QScrollArea::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QScrollArea__heightForWidth_int(void *thisObj,
                                                            int arg__1);

// tag=1067
//  QScrollArea::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QScrollArea__initPainter_QPainter(void *thisObj,
                                                               void *painter_);

// tag=1067
//  QScrollArea::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QScrollArea__leaveEvent_QEvent(void *thisObj,
                                                            void *event_);

// tag=1067
//  QScrollArea::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QScrollArea__minimumSizeHint(void *thisObj);

// tag=1067
//  QScrollArea::mouseDoubleClickEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QScrollArea__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *arg__1_);

// tag=1067
//  QScrollArea::mouseMoveEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QScrollArea__mouseMoveEvent_QMouseEvent(void *thisObj, void *arg__1_);

// tag=1067
//  QScrollArea::mousePressEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QScrollArea__mousePressEvent_QMouseEvent(void *thisObj, void *arg__1_);

// tag=1067
//  QScrollArea::mouseReleaseEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QScrollArea__mouseReleaseEvent_QMouseEvent(void *thisObj, void *arg__1_);

// tag=1067
//  QScrollArea::paintEvent(QPaintEvent * arg__1)
QtDartBindings_EXPORT void c_QScrollArea__paintEvent_QPaintEvent(void *thisObj,
                                                                 void *arg__1_);

// tag=1067
//  QScrollArea::scrollContentsBy(int dx, int dy)
QtDartBindings_EXPORT void
c_QScrollArea__scrollContentsBy_int_int(void *thisObj, int dx, int dy);

// tag=1067
//  QScrollArea::setVisible(bool visible)
QtDartBindings_EXPORT void c_QScrollArea__setVisible_bool(void *thisObj,
                                                          bool visible);

// tag=1067
//  QScrollArea::setWidget(QWidget * widget)
QtDartBindings_EXPORT void c_QScrollArea__setWidget_QWidget(void *thisObj,
                                                            void *widget_);

// tag=1067
//  QScrollArea::setWidgetResizable(bool resizable)
QtDartBindings_EXPORT void
c_QScrollArea__setWidgetResizable_bool(void *thisObj, bool resizable);

// tag=1067
//  QScrollArea::setupViewport(QWidget * viewport)
QtDartBindings_EXPORT void
c_QScrollArea__setupViewport_QWidget(void *thisObj, void *viewport_);

// tag=1067
//  QScrollArea::sharedPainter() const
QtDartBindings_EXPORT void *c_QScrollArea__sharedPainter(void *thisObj);

// tag=1067
//  QScrollArea::sizeHint() const
QtDartBindings_EXPORT void *c_QScrollArea__sizeHint(void *thisObj);

// tag=1067
//  QScrollArea::takeWidget()
QtDartBindings_EXPORT void *c_QScrollArea__takeWidget(void *thisObj);

// tag=1067
//  QScrollArea::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QScrollArea__tr_char_char_int(const char *s, const char *c, int n);

// tag=1067
//  QScrollArea::viewportEvent(QEvent * arg__1)
QtDartBindings_EXPORT bool c_QScrollArea__viewportEvent_QEvent(void *thisObj,
                                                               void *arg__1_);

// tag=1067
//  QScrollArea::viewportSizeHint() const
QtDartBindings_EXPORT void *c_QScrollArea__viewportSizeHint(void *thisObj);

// tag=1067
//  QScrollArea::widget() const
QtDartBindings_EXPORT void *c_QScrollArea__widget(void *thisObj);

// tag=1067
//  QScrollArea::widgetResizable() const
QtDartBindings_EXPORT bool c_QScrollArea__widgetResizable(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QScrollArea__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QScrollArea__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QScrollArea_Finalizer(void *, void *cppObj,
                                                   void *);
}
