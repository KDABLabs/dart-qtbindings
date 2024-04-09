
// tag=1040
#include "QtDartBindings_exports.h"
#include <qaction.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qfont.h>
#include <qframe.h>
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
#include <qwidget.h>
#include <qwindow.h>

namespace QtDartBindings_wrappersNS {
// tag=1017
class QFrame_wrapper : public ::QFrame {
public:
  ~QFrame_wrapper();
  // tag=1041
  QFrame_wrapper(QWidget *parent = nullptr);
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
  void drawFrame(QPainter *arg__1);
  // tag=1041
  virtual bool event(QEvent *e);
  // tag=1008
  virtual bool event_nocallback(QEvent *e);
  // tag=1041
  virtual bool eventFilter(QObject *watched, QEvent *event);
  // tag=1008
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  // tag=1041
  virtual bool focusNextPrevChild(bool next);
  // tag=1008
  virtual bool focusNextPrevChild_nocallback(bool next);
  // tag=1041
  QRect frameRect() const;
  // tag=1041
  int frameStyle() const;
  // tag=1041
  int frameWidth() const;
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
  int lineWidth() const;
  // tag=1041
  int midLineWidth() const;
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
  virtual void paintEvent(QPaintEvent *arg__1);
  // tag=1008
  virtual void paintEvent_nocallback(QPaintEvent *arg__1);
  // tag=1041
  void setFrameRect(const QRect &arg__1);
  // tag=1041
  void setFrameStyle(int arg__1);
  // tag=1041
  void setLineWidth(int arg__1);
  // tag=1041
  void setMidLineWidth(int arg__1);
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
  typedef bool (*Callback_event)(void *, QEvent *e);
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
//  QFrame::QFrame(QWidget * parent)
QtDartBindings_EXPORT void *c_QFrame__constructor_QWidget(void *parent_);

// tag=1067
//  QFrame::changeEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QFrame__changeEvent_QEvent(void *thisObj,
                                                        void *arg__1_);

// tag=1067
//  QFrame::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QFrame__customEvent_QEvent(void *thisObj,
                                                        void *event_);

// tag=1067
//  QFrame::devType() const
QtDartBindings_EXPORT int c_QFrame__devType(void *thisObj);

// tag=1067
//  QFrame::drawFrame(QPainter * arg__1)
QtDartBindings_EXPORT void c_QFrame__drawFrame_QPainter(void *thisObj,
                                                        void *arg__1_);

// tag=1067
//  QFrame::event(QEvent * e)
QtDartBindings_EXPORT bool c_QFrame__event_QEvent(void *thisObj, void *e_);

// tag=1067
//  QFrame::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool c_QFrame__eventFilter_QObject_QEvent(void *thisObj,
                                                                void *watched_,
                                                                void *event_);

// tag=1067
//  QFrame::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QFrame__focusNextPrevChild_bool(void *thisObj,
                                                             bool next);

// tag=1067
//  QFrame::frameRect() const
QtDartBindings_EXPORT void *c_QFrame__frameRect(void *thisObj);

// tag=1067
//  QFrame::frameStyle() const
QtDartBindings_EXPORT int c_QFrame__frameStyle(void *thisObj);

// tag=1067
//  QFrame::frameWidth() const
QtDartBindings_EXPORT int c_QFrame__frameWidth(void *thisObj);

// tag=1067
//  QFrame::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QFrame__hasHeightForWidth(void *thisObj);

// tag=1067
//  QFrame::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QFrame__heightForWidth_int(void *thisObj,
                                                       int arg__1);

// tag=1067
//  QFrame::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QFrame__initPainter_QPainter(void *thisObj,
                                                          void *painter_);

// tag=1067
//  QFrame::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QFrame__leaveEvent_QEvent(void *thisObj,
                                                       void *event_);

// tag=1067
//  QFrame::lineWidth() const
QtDartBindings_EXPORT int c_QFrame__lineWidth(void *thisObj);

// tag=1067
//  QFrame::midLineWidth() const
QtDartBindings_EXPORT int c_QFrame__midLineWidth(void *thisObj);

// tag=1067
//  QFrame::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QFrame__minimumSizeHint(void *thisObj);

// tag=1067
//  QFrame::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QFrame__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QFrame::mouseMoveEvent(QMouseEvent * event)
QtDartBindings_EXPORT void c_QFrame__mouseMoveEvent_QMouseEvent(void *thisObj,
                                                                void *event_);

// tag=1067
//  QFrame::mousePressEvent(QMouseEvent * event)
QtDartBindings_EXPORT void c_QFrame__mousePressEvent_QMouseEvent(void *thisObj,
                                                                 void *event_);

// tag=1067
//  QFrame::mouseReleaseEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QFrame__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QFrame::paintEvent(QPaintEvent * arg__1)
QtDartBindings_EXPORT void c_QFrame__paintEvent_QPaintEvent(void *thisObj,
                                                            void *arg__1_);

// tag=1067
//  QFrame::setFrameRect(const QRect & arg__1)
QtDartBindings_EXPORT void c_QFrame__setFrameRect_QRect(void *thisObj,
                                                        void *arg__1_);

// tag=1067
//  QFrame::setFrameStyle(int arg__1)
QtDartBindings_EXPORT void c_QFrame__setFrameStyle_int(void *thisObj,
                                                       int arg__1);

// tag=1067
//  QFrame::setLineWidth(int arg__1)
QtDartBindings_EXPORT void c_QFrame__setLineWidth_int(void *thisObj,
                                                      int arg__1);

// tag=1067
//  QFrame::setMidLineWidth(int arg__1)
QtDartBindings_EXPORT void c_QFrame__setMidLineWidth_int(void *thisObj,
                                                         int arg__1);

// tag=1067
//  QFrame::setVisible(bool visible)
QtDartBindings_EXPORT void c_QFrame__setVisible_bool(void *thisObj,
                                                     bool visible);

// tag=1067
//  QFrame::sharedPainter() const
QtDartBindings_EXPORT void *c_QFrame__sharedPainter(void *thisObj);

// tag=1067
//  QFrame::sizeHint() const
QtDartBindings_EXPORT void *c_QFrame__sizeHint(void *thisObj);

// tag=1067
//  QFrame::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QFrame__tr_char_char_int(const char *s, const char *c, int n);

// tag=1066
QtDartBindings_EXPORT void c_QFrame__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QFrame__registerVirtualMethodCallback(void *ptr, void *callback,
                                        int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QFrame_Finalizer(void *, void *cppObj, void *);
}
