
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
#include <qstatusbar.h>
#include <qstring.h>
#include <qstyle.h>
#include <qwidget.h>
#include <qwindow.h>

namespace QtDartBindings_wrappersNS {
// tag=1017
class QStatusBar_wrapper : public ::QStatusBar {
public:
  ~QStatusBar_wrapper();
  // tag=1041
  QStatusBar_wrapper(QWidget *parent = nullptr);
  // tag=1041
  void addPermanentWidget(QWidget *widget, int stretch = 0);
  // tag=1041
  void addWidget(QWidget *widget, int stretch = 0);
  // tag=1041
  virtual void changeEvent(QEvent *arg__1);
  // tag=1008
  virtual void changeEvent_nocallback(QEvent *arg__1);
  // tag=1041
  void clearMessage();
  // tag=1041
  QString currentMessage() const;
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
  virtual bool hasHeightForWidth() const;
  // tag=1008
  virtual bool hasHeightForWidth_nocallback() const;
  // tag=1041
  virtual int heightForWidth(int arg__1) const;
  // tag=1008
  virtual int heightForWidth_nocallback(int arg__1) const;
  // tag=1041
  void hideOrShow();
  // tag=1041
  virtual void initPainter(QPainter *painter) const;
  // tag=1008
  virtual void initPainter_nocallback(QPainter *painter) const;
  // tag=1041
  int insertPermanentWidget(int index, QWidget *widget, int stretch = 0);
  // tag=1041
  int insertWidget(int index, QWidget *widget, int stretch = 0);
  // tag=1041
  bool isSizeGripEnabled() const;
  // tag=1041
  virtual void leaveEvent(QEvent *event);
  // tag=1008
  virtual void leaveEvent_nocallback(QEvent *event);
  // tag=1041
  void messageChanged(const QString &text);
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
  void reformat();
  // tag=1041
  void removeWidget(QWidget *widget);
  // tag=1041
  void setSizeGripEnabled(bool arg__1);
  // tag=1041
  virtual void setVisible(bool visible);
  // tag=1008
  virtual void setVisible_nocallback(bool visible);
  // tag=1041
  virtual QPainter *sharedPainter() const;
  // tag=1008
  virtual QPainter *sharedPainter_nocallback() const;
  // tag=1041
  void showMessage(const QString &text, int timeout = 0);
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
//  QStatusBar::QStatusBar(QWidget * parent)
QtDartBindings_EXPORT void *c_QStatusBar__constructor_QWidget(void *parent_);

// tag=1067
//  QStatusBar::addPermanentWidget(QWidget * widget, int stretch)
QtDartBindings_EXPORT void
c_QStatusBar__addPermanentWidget_QWidget_int(void *thisObj, void *widget_,
                                             int stretch);

// tag=1067
//  QStatusBar::addWidget(QWidget * widget, int stretch)
QtDartBindings_EXPORT void
c_QStatusBar__addWidget_QWidget_int(void *thisObj, void *widget_, int stretch);

// tag=1067
//  QStatusBar::changeEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QStatusBar__changeEvent_QEvent(void *thisObj,
                                                            void *arg__1_);

// tag=1067
//  QStatusBar::clearMessage()
QtDartBindings_EXPORT void c_QStatusBar__clearMessage(void *thisObj);

// tag=1067
//  QStatusBar::currentMessage() const
QtDartBindings_EXPORT void *c_QStatusBar__currentMessage(void *thisObj);

// tag=1067
//  QStatusBar::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QStatusBar__customEvent_QEvent(void *thisObj,
                                                            void *event_);

// tag=1067
//  QStatusBar::devType() const
QtDartBindings_EXPORT int c_QStatusBar__devType(void *thisObj);

// tag=1067
//  QStatusBar::event(QEvent * arg__1)
QtDartBindings_EXPORT bool c_QStatusBar__event_QEvent(void *thisObj,
                                                      void *arg__1_);

// tag=1067
//  QStatusBar::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QStatusBar__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                         void *event_);

// tag=1067
//  QStatusBar::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QStatusBar__focusNextPrevChild_bool(void *thisObj,
                                                                 bool next);

// tag=1067
//  QStatusBar::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QStatusBar__hasHeightForWidth(void *thisObj);

// tag=1067
//  QStatusBar::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QStatusBar__heightForWidth_int(void *thisObj,
                                                           int arg__1);

// tag=1067
//  QStatusBar::hideOrShow()
QtDartBindings_EXPORT void c_QStatusBar__hideOrShow(void *thisObj);

// tag=1067
//  QStatusBar::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QStatusBar__initPainter_QPainter(void *thisObj,
                                                              void *painter_);

// tag=1067
//  QStatusBar::insertPermanentWidget(int index, QWidget * widget, int stretch)
QtDartBindings_EXPORT int
c_QStatusBar__insertPermanentWidget_int_QWidget_int(void *thisObj, int index,
                                                    void *widget_, int stretch);

// tag=1067
//  QStatusBar::insertWidget(int index, QWidget * widget, int stretch)
QtDartBindings_EXPORT int
c_QStatusBar__insertWidget_int_QWidget_int(void *thisObj, int index,
                                           void *widget_, int stretch);

// tag=1067
//  QStatusBar::isSizeGripEnabled() const
QtDartBindings_EXPORT bool c_QStatusBar__isSizeGripEnabled(void *thisObj);

// tag=1067
//  QStatusBar::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QStatusBar__leaveEvent_QEvent(void *thisObj,
                                                           void *event_);

// tag=1067
//  QStatusBar::messageChanged(const QString & text)
QtDartBindings_EXPORT void
c_QStatusBar__messageChanged_QString(void *thisObj, const char *text_);

// tag=1078
QtDartBindings_EXPORT void
c_QStatusBar__onMessageChanged_QString(void *thisObj, void *contextQObject,
                                       void *callback);
// tag=1067
//  QStatusBar::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QStatusBar__minimumSizeHint(void *thisObj);

// tag=1067
//  QStatusBar::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QStatusBar__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QStatusBar::mouseMoveEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QStatusBar__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QStatusBar::mousePressEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QStatusBar__mousePressEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QStatusBar::mouseReleaseEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QStatusBar__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QStatusBar::paintEvent(QPaintEvent * arg__1)
QtDartBindings_EXPORT void c_QStatusBar__paintEvent_QPaintEvent(void *thisObj,
                                                                void *arg__1_);

// tag=1067
//  QStatusBar::reformat()
QtDartBindings_EXPORT void c_QStatusBar__reformat(void *thisObj);

// tag=1067
//  QStatusBar::removeWidget(QWidget * widget)
QtDartBindings_EXPORT void c_QStatusBar__removeWidget_QWidget(void *thisObj,
                                                              void *widget_);

// tag=1067
//  QStatusBar::setSizeGripEnabled(bool arg__1)
QtDartBindings_EXPORT void c_QStatusBar__setSizeGripEnabled_bool(void *thisObj,
                                                                 bool arg__1);

// tag=1067
//  QStatusBar::setVisible(bool visible)
QtDartBindings_EXPORT void c_QStatusBar__setVisible_bool(void *thisObj,
                                                         bool visible);

// tag=1067
//  QStatusBar::sharedPainter() const
QtDartBindings_EXPORT void *c_QStatusBar__sharedPainter(void *thisObj);

// tag=1067
//  QStatusBar::showMessage(const QString & text, int timeout)
QtDartBindings_EXPORT void
c_QStatusBar__showMessage_QString_int(void *thisObj, const char *text_,
                                      int timeout);

// tag=1067
//  QStatusBar::sizeHint() const
QtDartBindings_EXPORT void *c_QStatusBar__sizeHint(void *thisObj);

// tag=1067
//  QStatusBar::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QStatusBar__tr_char_char_int(const char *s, const char *c, int n);

// tag=1066
QtDartBindings_EXPORT void c_QStatusBar__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QStatusBar__registerVirtualMethodCallback(void *ptr, void *callback,
                                            int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QStatusBar_Finalizer(void *, void *cppObj, void *);
}
