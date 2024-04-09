
// tag=1040
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
// tag=1017
class QSplitter_wrapper : public ::QSplitter {
public:
  ~QSplitter_wrapper();
  // tag=1041
  QSplitter_wrapper(QWidget *parent = nullptr);
  // tag=1041
  QSplitter_wrapper(Qt::Orientation arg__1, QWidget *parent = nullptr);
  // tag=1041
  void addWidget(QWidget *widget);
  // tag=1041
  virtual void changeEvent(QEvent *arg__1);
  // tag=1008
  virtual void changeEvent_nocallback(QEvent *arg__1);
  // tag=1041
  bool childrenCollapsible() const;
  // tag=1041
  int closestLegalPosition(int arg__1, int arg__2);
  // tag=1041
  int count() const;
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
  virtual bool eventFilter(QObject *watched, QEvent *event);
  // tag=1008
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  // tag=1041
  virtual bool focusNextPrevChild(bool next);
  // tag=1008
  virtual bool focusNextPrevChild_nocallback(bool next);
  // tag=1041
  int handleWidth() const;
  // tag=1041
  virtual bool hasHeightForWidth() const;
  // tag=1008
  virtual bool hasHeightForWidth_nocallback() const;
  // tag=1041
  virtual int heightForWidth(int arg__1) const;
  // tag=1008
  virtual int heightForWidth_nocallback(int arg__1) const;
  // tag=1041
  int indexOf(QWidget *w) const;
  // tag=1041
  virtual void initPainter(QPainter *painter) const;
  // tag=1008
  virtual void initPainter_nocallback(QPainter *painter) const;
  // tag=1041
  void insertWidget(int index, QWidget *widget);
  // tag=1041
  bool isCollapsible(int index) const;
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
  void moveSplitter(int pos, int index);
  // tag=1041
  bool opaqueResize() const;
  // tag=1041
  Qt::Orientation orientation() const;
  // tag=1041
  virtual void paintEvent(QPaintEvent *arg__1);
  // tag=1008
  virtual void paintEvent_nocallback(QPaintEvent *arg__1);
  // tag=1041
  void refresh();
  // tag=1041
  QWidget *replaceWidget(int index, QWidget *widget);
  // tag=1041
  bool restoreState(const QByteArray &state);
  // tag=1041
  QByteArray saveState() const;
  // tag=1041
  void setChildrenCollapsible(bool arg__1);
  // tag=1041
  void setCollapsible(int index, bool arg__2);
  // tag=1041
  void setHandleWidth(int arg__1);
  // tag=1041
  void setOpaqueResize(bool opaque = true);
  // tag=1041
  void setOrientation(Qt::Orientation arg__1);
  // tag=1041
  void setRubberBand(int position);
  // tag=1041
  void setSizes(const QList<int> &list);
  // tag=1041
  void setStretchFactor(int index, int stretch);
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
  QList<int> sizes() const;
  // tag=1041
  void splitterMoved(int pos, int index);
  // tag=1041
  static QString tr(const char *s, const char *c, int n);
  // tag=1041
  QWidget *widget(int index) const;
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
//  QSplitter::QSplitter(QWidget * parent)
QtDartBindings_EXPORT void *c_QSplitter__constructor_QWidget(void *parent_);

// tag=1067
//  QSplitter::QSplitter(Qt::Orientation arg__1, QWidget * parent)
QtDartBindings_EXPORT void *
c_QSplitter__constructor_Orientation_QWidget(int arg__1, void *parent_);

// tag=1067
//  QSplitter::addWidget(QWidget * widget)
QtDartBindings_EXPORT void c_QSplitter__addWidget_QWidget(void *thisObj,
                                                          void *widget_);

// tag=1067
//  QSplitter::changeEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QSplitter__changeEvent_QEvent(void *thisObj,
                                                           void *arg__1_);

// tag=1067
//  QSplitter::childrenCollapsible() const
QtDartBindings_EXPORT bool c_QSplitter__childrenCollapsible(void *thisObj);

// tag=1067
//  QSplitter::closestLegalPosition(int arg__1, int arg__2)
QtDartBindings_EXPORT int
c_QSplitter__closestLegalPosition_int_int(void *thisObj, int arg__1,
                                          int arg__2);

// tag=1067
//  QSplitter::count() const
QtDartBindings_EXPORT int c_QSplitter__count(void *thisObj);

// tag=1067
//  QSplitter::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QSplitter__customEvent_QEvent(void *thisObj,
                                                           void *event_);

// tag=1067
//  QSplitter::devType() const
QtDartBindings_EXPORT int c_QSplitter__devType(void *thisObj);

// tag=1067
//  QSplitter::event(QEvent * arg__1)
QtDartBindings_EXPORT bool c_QSplitter__event_QEvent(void *thisObj,
                                                     void *arg__1_);

// tag=1067
//  QSplitter::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QSplitter__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                        void *event_);

// tag=1067
//  QSplitter::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QSplitter__focusNextPrevChild_bool(void *thisObj,
                                                                bool next);

// tag=1067
//  QSplitter::handleWidth() const
QtDartBindings_EXPORT int c_QSplitter__handleWidth(void *thisObj);

// tag=1067
//  QSplitter::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QSplitter__hasHeightForWidth(void *thisObj);

// tag=1067
//  QSplitter::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QSplitter__heightForWidth_int(void *thisObj,
                                                          int arg__1);

// tag=1067
//  QSplitter::indexOf(QWidget * w) const
QtDartBindings_EXPORT int c_QSplitter__indexOf_QWidget(void *thisObj, void *w_);

// tag=1067
//  QSplitter::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QSplitter__initPainter_QPainter(void *thisObj,
                                                             void *painter_);

// tag=1067
//  QSplitter::insertWidget(int index, QWidget * widget)
QtDartBindings_EXPORT void
c_QSplitter__insertWidget_int_QWidget(void *thisObj, int index, void *widget_);

// tag=1067
//  QSplitter::isCollapsible(int index) const
QtDartBindings_EXPORT bool c_QSplitter__isCollapsible_int(void *thisObj,
                                                          int index);

// tag=1067
//  QSplitter::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QSplitter__leaveEvent_QEvent(void *thisObj,
                                                          void *event_);

// tag=1067
//  QSplitter::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QSplitter__minimumSizeHint(void *thisObj);

// tag=1067
//  QSplitter::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QSplitter__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QSplitter::mouseMoveEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QSplitter__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QSplitter::mousePressEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QSplitter__mousePressEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QSplitter::mouseReleaseEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QSplitter__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QSplitter::moveSplitter(int pos, int index)
QtDartBindings_EXPORT void
c_QSplitter__moveSplitter_int_int(void *thisObj, int pos, int index);

// tag=1067
//  QSplitter::opaqueResize() const
QtDartBindings_EXPORT bool c_QSplitter__opaqueResize(void *thisObj);

// tag=1067
//  QSplitter::orientation() const
QtDartBindings_EXPORT int c_QSplitter__orientation(void *thisObj);

// tag=1067
//  QSplitter::paintEvent(QPaintEvent * arg__1)
QtDartBindings_EXPORT void c_QSplitter__paintEvent_QPaintEvent(void *thisObj,
                                                               void *arg__1_);

// tag=1067
//  QSplitter::refresh()
QtDartBindings_EXPORT void c_QSplitter__refresh(void *thisObj);

// tag=1067
//  QSplitter::replaceWidget(int index, QWidget * widget)
QtDartBindings_EXPORT void *
c_QSplitter__replaceWidget_int_QWidget(void *thisObj, int index, void *widget_);

// tag=1067
//  QSplitter::restoreState(const QByteArray & state)
QtDartBindings_EXPORT bool c_QSplitter__restoreState_QByteArray(void *thisObj,
                                                                void *state_);

// tag=1067
//  QSplitter::saveState() const
QtDartBindings_EXPORT void *c_QSplitter__saveState(void *thisObj);

// tag=1067
//  QSplitter::setChildrenCollapsible(bool arg__1)
QtDartBindings_EXPORT void
c_QSplitter__setChildrenCollapsible_bool(void *thisObj, bool arg__1);

// tag=1067
//  QSplitter::setCollapsible(int index, bool arg__2)
QtDartBindings_EXPORT void
c_QSplitter__setCollapsible_int_bool(void *thisObj, int index, bool arg__2);

// tag=1067
//  QSplitter::setHandleWidth(int arg__1)
QtDartBindings_EXPORT void c_QSplitter__setHandleWidth_int(void *thisObj,
                                                           int arg__1);

// tag=1067
//  QSplitter::setOpaqueResize(bool opaque)
QtDartBindings_EXPORT void c_QSplitter__setOpaqueResize_bool(void *thisObj,
                                                             bool opaque);

// tag=1067
//  QSplitter::setOrientation(Qt::Orientation arg__1)
QtDartBindings_EXPORT void
c_QSplitter__setOrientation_Orientation(void *thisObj, int arg__1);

// tag=1067
//  QSplitter::setRubberBand(int position)
QtDartBindings_EXPORT void c_QSplitter__setRubberBand_int(void *thisObj,
                                                          int position);

// tag=1067
//  QSplitter::setSizes(const QList<int > & list)
QtDartBindings_EXPORT void c_QSplitter__setSizes_QList_int(void *thisObj,
                                                           void *list_);

// tag=1067
//  QSplitter::setStretchFactor(int index, int stretch)
QtDartBindings_EXPORT void
c_QSplitter__setStretchFactor_int_int(void *thisObj, int index, int stretch);

// tag=1067
//  QSplitter::setVisible(bool visible)
QtDartBindings_EXPORT void c_QSplitter__setVisible_bool(void *thisObj,
                                                        bool visible);

// tag=1067
//  QSplitter::sharedPainter() const
QtDartBindings_EXPORT void *c_QSplitter__sharedPainter(void *thisObj);

// tag=1067
//  QSplitter::sizeHint() const
QtDartBindings_EXPORT void *c_QSplitter__sizeHint(void *thisObj);

// tag=1067
//  QSplitter::sizes() const
QtDartBindings_EXPORT void *c_QSplitter__sizes(void *thisObj);

// tag=1067
//  QSplitter::splitterMoved(int pos, int index)
QtDartBindings_EXPORT void
c_QSplitter__splitterMoved_int_int(void *thisObj, int pos, int index);

// tag=1078
QtDartBindings_EXPORT void
c_QSplitter__onSplitterMoved_int_int(void *thisObj, void *contextQObject,
                                     void *callback);
// tag=1067
//  QSplitter::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QSplitter__tr_char_char_int(const char *s, const char *c, int n);

// tag=1067
//  QSplitter::widget(int index) const
QtDartBindings_EXPORT void *c_QSplitter__widget_int(void *thisObj, int index);

// tag=1066
QtDartBindings_EXPORT void c_QSplitter__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QSplitter__registerVirtualMethodCallback(void *ptr, void *callback,
                                           int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QSplitter_Finalizer(void *, void *cppObj, void *);
}
