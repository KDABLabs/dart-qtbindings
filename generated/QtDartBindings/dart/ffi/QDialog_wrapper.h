
// tag=1040
#include "QtDartBindings_exports.h"
#include <qaction.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdialog.h>
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
#include <qwidget.h>
#include <qwindow.h>

namespace QtDartBindings_wrappersNS {
// tag=1017
class QDialog_wrapper : public ::QDialog {
public:
  ~QDialog_wrapper();
  // tag=1041
  QDialog_wrapper(QWidget *parent = nullptr);
  // tag=1041
  virtual void accept();
  // tag=1008
  virtual void accept_nocallback();
  // tag=1041
  void accepted();
  // tag=1041
  void adjustPosition(QWidget *arg__1);
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
  virtual void done(int arg__1);
  // tag=1008
  virtual void done_nocallback(int arg__1);
  // tag=1041
  virtual bool event(QEvent *event);
  // tag=1008
  virtual bool event_nocallback(QEvent *event);
  // tag=1041
  virtual bool eventFilter(QObject *arg__1, QEvent *arg__2);
  // tag=1008
  virtual bool eventFilter_nocallback(QObject *arg__1, QEvent *arg__2);
  // tag=1041
  virtual int exec();
  // tag=1008
  virtual int exec_nocallback();
  // tag=1041
  void finished(int result);
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
  bool isSizeGripEnabled() const;
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
  virtual void open();
  // tag=1008
  virtual void open_nocallback();
  // tag=1041
  virtual void paintEvent(QPaintEvent *event);
  // tag=1008
  virtual void paintEvent_nocallback(QPaintEvent *event);
  // tag=1041
  virtual void reject();
  // tag=1008
  virtual void reject_nocallback();
  // tag=1041
  void rejected();
  // tag=1041
  int result() const;
  // tag=1041
  void setModal(bool modal);
  // tag=1041
  void setResult(int r);
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
  virtual QSize sizeHint() const;
  // tag=1008
  virtual QSize sizeHint_nocallback() const;
  // tag=1041
  static QString tr(const char *s, const char *c, int n);
  // tag=1042
  typedef void (*Callback_accept)(void *);
  Callback_accept m_acceptCallback = nullptr;
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
  typedef void (*Callback_done)(void *, int arg__1);
  Callback_done m_doneCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_event)(void *, QEvent *event);
  Callback_event m_eventCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_eventFilter)(void *, QObject *arg__1, QEvent *arg__2);
  Callback_eventFilter m_eventFilterCallback = nullptr;
  // tag=1042
  typedef int (*Callback_exec)(void *);
  Callback_exec m_execCallback = nullptr;
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
  typedef void (*Callback_open)(void *);
  Callback_open m_openCallback = nullptr;
  // tag=1042
  typedef void (*Callback_paintEvent)(void *, QPaintEvent *event);
  Callback_paintEvent m_paintEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_reject)(void *);
  Callback_reject m_rejectCallback = nullptr;
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
//  QDialog::QDialog(QWidget * parent)
QtDartBindings_EXPORT void *c_QDialog__constructor_QWidget(void *parent_);

// tag=1067
//  QDialog::accept()
QtDartBindings_EXPORT void c_QDialog__accept(void *thisObj);

// tag=1067
//  QDialog::accepted()
QtDartBindings_EXPORT void c_QDialog__accepted(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void
c_QDialog__onAccepted(void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QDialog::adjustPosition(QWidget * arg__1)
QtDartBindings_EXPORT void c_QDialog__adjustPosition_QWidget(void *thisObj,
                                                             void *arg__1_);

// tag=1067
//  QDialog::changeEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QDialog__changeEvent_QEvent(void *thisObj,
                                                         void *arg__1_);

// tag=1067
//  QDialog::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QDialog__customEvent_QEvent(void *thisObj,
                                                         void *event_);

// tag=1067
//  QDialog::devType() const
QtDartBindings_EXPORT int c_QDialog__devType(void *thisObj);

// tag=1067
//  QDialog::done(int arg__1)
QtDartBindings_EXPORT void c_QDialog__done_int(void *thisObj, int arg__1);

// tag=1067
//  QDialog::event(QEvent * event)
QtDartBindings_EXPORT bool c_QDialog__event_QEvent(void *thisObj, void *event_);

// tag=1067
//  QDialog::eventFilter(QObject * arg__1, QEvent * arg__2)
QtDartBindings_EXPORT bool c_QDialog__eventFilter_QObject_QEvent(void *thisObj,
                                                                 void *arg__1_,
                                                                 void *arg__2_);

// tag=1067
//  QDialog::exec()
QtDartBindings_EXPORT int c_QDialog__exec(void *thisObj);

// tag=1067
//  QDialog::finished(int result)
QtDartBindings_EXPORT void c_QDialog__finished_int(void *thisObj, int result);

// tag=1078
QtDartBindings_EXPORT void
c_QDialog__onFinished_int(void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QDialog::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QDialog__focusNextPrevChild_bool(void *thisObj,
                                                              bool next);

// tag=1067
//  QDialog::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QDialog__hasHeightForWidth(void *thisObj);

// tag=1067
//  QDialog::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QDialog__heightForWidth_int(void *thisObj,
                                                        int arg__1);

// tag=1067
//  QDialog::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QDialog__initPainter_QPainter(void *thisObj,
                                                           void *painter_);

// tag=1067
//  QDialog::isSizeGripEnabled() const
QtDartBindings_EXPORT bool c_QDialog__isSizeGripEnabled(void *thisObj);

// tag=1067
//  QDialog::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QDialog__leaveEvent_QEvent(void *thisObj,
                                                        void *event_);

// tag=1067
//  QDialog::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QDialog__minimumSizeHint(void *thisObj);

// tag=1067
//  QDialog::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QDialog__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QDialog::mouseMoveEvent(QMouseEvent * event)
QtDartBindings_EXPORT void c_QDialog__mouseMoveEvent_QMouseEvent(void *thisObj,
                                                                 void *event_);

// tag=1067
//  QDialog::mousePressEvent(QMouseEvent * event)
QtDartBindings_EXPORT void c_QDialog__mousePressEvent_QMouseEvent(void *thisObj,
                                                                  void *event_);

// tag=1067
//  QDialog::mouseReleaseEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QDialog__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QDialog::open()
QtDartBindings_EXPORT void c_QDialog__open(void *thisObj);

// tag=1067
//  QDialog::paintEvent(QPaintEvent * event)
QtDartBindings_EXPORT void c_QDialog__paintEvent_QPaintEvent(void *thisObj,
                                                             void *event_);

// tag=1067
//  QDialog::reject()
QtDartBindings_EXPORT void c_QDialog__reject(void *thisObj);

// tag=1067
//  QDialog::rejected()
QtDartBindings_EXPORT void c_QDialog__rejected(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void
c_QDialog__onRejected(void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QDialog::result() const
QtDartBindings_EXPORT int c_QDialog__result(void *thisObj);

// tag=1067
//  QDialog::setModal(bool modal)
QtDartBindings_EXPORT void c_QDialog__setModal_bool(void *thisObj, bool modal);

// tag=1067
//  QDialog::setResult(int r)
QtDartBindings_EXPORT void c_QDialog__setResult_int(void *thisObj, int r);

// tag=1067
//  QDialog::setSizeGripEnabled(bool arg__1)
QtDartBindings_EXPORT void c_QDialog__setSizeGripEnabled_bool(void *thisObj,
                                                              bool arg__1);

// tag=1067
//  QDialog::setVisible(bool visible)
QtDartBindings_EXPORT void c_QDialog__setVisible_bool(void *thisObj,
                                                      bool visible);

// tag=1067
//  QDialog::sharedPainter() const
QtDartBindings_EXPORT void *c_QDialog__sharedPainter(void *thisObj);

// tag=1067
//  QDialog::sizeHint() const
QtDartBindings_EXPORT void *c_QDialog__sizeHint(void *thisObj);

// tag=1067
//  QDialog::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QDialog__tr_char_char_int(const char *s, const char *c, int n);

// tag=1066
QtDartBindings_EXPORT void c_QDialog__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QDialog__registerVirtualMethodCallback(void *ptr, void *callback,
                                         int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QDialog_Finalizer(void *, void *cppObj, void *);
}
