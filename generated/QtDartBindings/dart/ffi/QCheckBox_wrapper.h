
// tag=1040
#include "QtDartBindings_exports.h"
#include <qcheckbox.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qicon.h>
#include <qkeysequence.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpoint.h>
#include <qsize.h>
#include <qstring.h>
#include <qwidget.h>

namespace QtDartBindings_wrappersNS {
// tag=1017
class QCheckBox_wrapper : public ::QCheckBox {
public:
  ~QCheckBox_wrapper();
  // tag=1041
  QCheckBox_wrapper(QWidget *parent = nullptr);
  // tag=1041
  QCheckBox_wrapper(const QString &text, QWidget *parent = nullptr);
  // tag=1041
  virtual void changeEvent(QEvent *e);
  // tag=1008
  virtual void changeEvent_nocallback(QEvent *e);
  // tag=1041
  virtual void checkStateSet();
  // tag=1008
  virtual void checkStateSet_nocallback();
  // tag=1041
  virtual void customEvent(QEvent *event);
  // tag=1008
  virtual void customEvent_nocallback(QEvent *event);
  // tag=1041
  virtual int devType() const;
  // tag=1008
  virtual int devType_nocallback() const;
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
  virtual bool hasHeightForWidth() const;
  // tag=1008
  virtual bool hasHeightForWidth_nocallback() const;
  // tag=1041
  virtual int heightForWidth(int arg__1) const;
  // tag=1008
  virtual int heightForWidth_nocallback(int arg__1) const;
  // tag=1041
  virtual bool hitButton(const QPoint &pos) const;
  // tag=1008
  virtual bool hitButton_nocallback(const QPoint &pos) const;
  // tag=1041
  virtual void initPainter(QPainter *painter) const;
  // tag=1008
  virtual void initPainter_nocallback(QPainter *painter) const;
  // tag=1041
  bool isTristate() const;
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
  virtual void mouseMoveEvent(QMouseEvent *arg__1);
  // tag=1008
  virtual void mouseMoveEvent_nocallback(QMouseEvent *arg__1);
  // tag=1041
  virtual void mousePressEvent(QMouseEvent *e);
  // tag=1008
  virtual void mousePressEvent_nocallback(QMouseEvent *e);
  // tag=1041
  virtual void mouseReleaseEvent(QMouseEvent *e);
  // tag=1008
  virtual void mouseReleaseEvent_nocallback(QMouseEvent *e);
  // tag=1041
  virtual void nextCheckState();
  // tag=1008
  virtual void nextCheckState_nocallback();
  // tag=1041
  virtual void paintEvent(QPaintEvent *arg__1);
  // tag=1008
  virtual void paintEvent_nocallback(QPaintEvent *arg__1);
  // tag=1041
  void setTristate(bool y = true);
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
  void stateChanged(int arg__1);
  // tag=1041
  static QString tr(const char *s, const char *c, int n);
  // tag=1042
  typedef void (*Callback_changeEvent)(void *, QEvent *e);
  Callback_changeEvent m_changeEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_checkStateSet)(void *);
  Callback_checkStateSet m_checkStateSetCallback = nullptr;
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
  typedef bool (*Callback_hitButton)(void *, const QPoint &pos);
  Callback_hitButton m_hitButtonCallback = nullptr;
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
  typedef void (*Callback_mouseMoveEvent)(void *, QMouseEvent *arg__1);
  Callback_mouseMoveEvent m_mouseMoveEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mousePressEvent)(void *, QMouseEvent *e);
  Callback_mousePressEvent m_mousePressEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mouseReleaseEvent)(void *, QMouseEvent *e);
  Callback_mouseReleaseEvent m_mouseReleaseEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_nextCheckState)(void *);
  Callback_nextCheckState m_nextCheckStateCallback = nullptr;
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
//  QCheckBox::QCheckBox(QWidget * parent)
QtDartBindings_EXPORT void *c_QCheckBox__constructor_QWidget(void *parent_);

// tag=1067
//  QCheckBox::QCheckBox(const QString & text, QWidget * parent)
QtDartBindings_EXPORT void *
c_QCheckBox__constructor_QString_QWidget(const char *text_, void *parent_);

// tag=1067
//  QCheckBox::changeEvent(QEvent * e)
QtDartBindings_EXPORT void c_QCheckBox__changeEvent_QEvent(void *thisObj,
                                                           void *e_);

// tag=1067
//  QCheckBox::checkStateSet()
QtDartBindings_EXPORT void c_QCheckBox__checkStateSet(void *thisObj);

// tag=1067
//  QCheckBox::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QCheckBox__customEvent_QEvent(void *thisObj,
                                                           void *event_);

// tag=1067
//  QCheckBox::devType() const
QtDartBindings_EXPORT int c_QCheckBox__devType(void *thisObj);

// tag=1067
//  QCheckBox::event(QEvent * e)
QtDartBindings_EXPORT bool c_QCheckBox__event_QEvent(void *thisObj, void *e_);

// tag=1067
//  QCheckBox::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QCheckBox__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                        void *event_);

// tag=1067
//  QCheckBox::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QCheckBox__focusNextPrevChild_bool(void *thisObj,
                                                                bool next);

// tag=1067
//  QCheckBox::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QCheckBox__hasHeightForWidth(void *thisObj);

// tag=1067
//  QCheckBox::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QCheckBox__heightForWidth_int(void *thisObj,
                                                          int arg__1);

// tag=1067
//  QCheckBox::hitButton(const QPoint & pos) const
QtDartBindings_EXPORT bool c_QCheckBox__hitButton_QPoint(void *thisObj,
                                                         void *pos_);

// tag=1067
//  QCheckBox::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QCheckBox__initPainter_QPainter(void *thisObj,
                                                             void *painter_);

// tag=1067
//  QCheckBox::isTristate() const
QtDartBindings_EXPORT bool c_QCheckBox__isTristate(void *thisObj);

// tag=1067
//  QCheckBox::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QCheckBox__leaveEvent_QEvent(void *thisObj,
                                                          void *event_);

// tag=1067
//  QCheckBox::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QCheckBox__minimumSizeHint(void *thisObj);

// tag=1067
//  QCheckBox::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QCheckBox__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QCheckBox::mouseMoveEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QCheckBox__mouseMoveEvent_QMouseEvent(void *thisObj, void *arg__1_);

// tag=1067
//  QCheckBox::mousePressEvent(QMouseEvent * e)
QtDartBindings_EXPORT void
c_QCheckBox__mousePressEvent_QMouseEvent(void *thisObj, void *e_);

// tag=1067
//  QCheckBox::mouseReleaseEvent(QMouseEvent * e)
QtDartBindings_EXPORT void
c_QCheckBox__mouseReleaseEvent_QMouseEvent(void *thisObj, void *e_);

// tag=1067
//  QCheckBox::nextCheckState()
QtDartBindings_EXPORT void c_QCheckBox__nextCheckState(void *thisObj);

// tag=1067
//  QCheckBox::paintEvent(QPaintEvent * arg__1)
QtDartBindings_EXPORT void c_QCheckBox__paintEvent_QPaintEvent(void *thisObj,
                                                               void *arg__1_);

// tag=1067
//  QCheckBox::setTristate(bool y)
QtDartBindings_EXPORT void c_QCheckBox__setTristate_bool(void *thisObj, bool y);

// tag=1067
//  QCheckBox::setVisible(bool visible)
QtDartBindings_EXPORT void c_QCheckBox__setVisible_bool(void *thisObj,
                                                        bool visible);

// tag=1067
//  QCheckBox::sharedPainter() const
QtDartBindings_EXPORT void *c_QCheckBox__sharedPainter(void *thisObj);

// tag=1067
//  QCheckBox::sizeHint() const
QtDartBindings_EXPORT void *c_QCheckBox__sizeHint(void *thisObj);

// tag=1067
//  QCheckBox::stateChanged(int arg__1)
QtDartBindings_EXPORT void c_QCheckBox__stateChanged_int(void *thisObj,
                                                         int arg__1);

// tag=1078
QtDartBindings_EXPORT void c_QCheckBox__onStateChanged_int(void *thisObj,
                                                           void *contextQObject,
                                                           void *callback);
// tag=1067
//  QCheckBox::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QCheckBox__tr_char_char_int(const char *s, const char *c, int n);

// tag=1066
QtDartBindings_EXPORT void c_QCheckBox__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QCheckBox__registerVirtualMethodCallback(void *ptr, void *callback,
                                           int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QCheckBox_Finalizer(void *, void *cppObj, void *);
}
