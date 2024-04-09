
// tag=1040
#include "QtDartBindings_exports.h"
#include <qcoreevent.h>
#include <qevent.h>
#include <qlabel.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpixmap.h>
#include <qrect.h>
#include <qsize.h>
#include <qstring.h>
#include <qwidget.h>

namespace QtDartBindings_wrappersNS {
// tag=1017
class QLabel_wrapper : public ::QLabel {
public:
  ~QLabel_wrapper();
  // tag=1041
  QLabel_wrapper(QWidget *parent = nullptr);
  // tag=1041
  QLabel_wrapper(const QString &text, QWidget *parent = nullptr);
  // tag=1041
  QWidget *buddy() const;
  // tag=1041
  virtual void changeEvent(QEvent *arg__1);
  // tag=1008
  virtual void changeEvent_nocallback(QEvent *arg__1);
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
  bool hasScaledContents() const;
  // tag=1041
  bool hasSelectedText() const;
  // tag=1041
  virtual int heightForWidth(int arg__1) const;
  // tag=1008
  virtual int heightForWidth_nocallback(int arg__1) const;
  // tag=1041
  int indent() const;
  // tag=1041
  virtual void initPainter(QPainter *painter) const;
  // tag=1008
  virtual void initPainter_nocallback(QPainter *painter) const;
  // tag=1041
  virtual void leaveEvent(QEvent *event);
  // tag=1008
  virtual void leaveEvent_nocallback(QEvent *event);
  // tag=1041
  void linkActivated(const QString &link);
  // tag=1041
  void linkHovered(const QString &link);
  // tag=1041
  int margin() const;
  // tag=1041
  virtual QSize minimumSizeHint() const;
  // tag=1008
  virtual QSize minimumSizeHint_nocallback() const;
  // tag=1041
  virtual void mouseDoubleClickEvent(QMouseEvent *event);
  // tag=1008
  virtual void mouseDoubleClickEvent_nocallback(QMouseEvent *event);
  // tag=1041
  virtual void mouseMoveEvent(QMouseEvent *ev);
  // tag=1008
  virtual void mouseMoveEvent_nocallback(QMouseEvent *ev);
  // tag=1041
  virtual void mousePressEvent(QMouseEvent *ev);
  // tag=1008
  virtual void mousePressEvent_nocallback(QMouseEvent *ev);
  // tag=1041
  virtual void mouseReleaseEvent(QMouseEvent *ev);
  // tag=1008
  virtual void mouseReleaseEvent_nocallback(QMouseEvent *ev);
  // tag=1041
  bool openExternalLinks() const;
  // tag=1041
  virtual void paintEvent(QPaintEvent *arg__1);
  // tag=1008
  virtual void paintEvent_nocallback(QPaintEvent *arg__1);
  // tag=1041
  QPixmap pixmap() const;
  // tag=1041
  QString selectedText() const;
  // tag=1041
  int selectionStart() const;
  // tag=1041
  void setBuddy(QWidget *arg__1);
  // tag=1041
  void setIndent(int arg__1);
  // tag=1041
  void setMargin(int arg__1);
  // tag=1041
  void setNum(double arg__1);
  // tag=1041
  void setNum(int arg__1);
  // tag=1041
  void setOpenExternalLinks(bool open);
  // tag=1041
  void setPixmap(const QPixmap &arg__1);
  // tag=1041
  void setScaledContents(bool arg__1);
  // tag=1041
  void setSelection(int arg__1, int arg__2);
  // tag=1041
  void setText(const QString &arg__1);
  // tag=1041
  virtual void setVisible(bool visible);
  // tag=1008
  virtual void setVisible_nocallback(bool visible);
  // tag=1041
  void setWordWrap(bool on);
  // tag=1041
  virtual QPainter *sharedPainter() const;
  // tag=1008
  virtual QPainter *sharedPainter_nocallback() const;
  // tag=1041
  virtual QSize sizeHint() const;
  // tag=1008
  virtual QSize sizeHint_nocallback() const;
  // tag=1041
  QString text() const;
  // tag=1041
  static QString tr(const char *s, const char *c, int n);
  // tag=1041
  bool wordWrap() const;
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
  typedef void (*Callback_mouseMoveEvent)(void *, QMouseEvent *ev);
  Callback_mouseMoveEvent m_mouseMoveEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mousePressEvent)(void *, QMouseEvent *ev);
  Callback_mousePressEvent m_mousePressEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mouseReleaseEvent)(void *, QMouseEvent *ev);
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
//  QLabel::QLabel(QWidget * parent)
QtDartBindings_EXPORT void *c_QLabel__constructor_QWidget(void *parent_);

// tag=1067
//  QLabel::QLabel(const QString & text, QWidget * parent)
QtDartBindings_EXPORT void *
c_QLabel__constructor_QString_QWidget(const char *text_, void *parent_);

// tag=1067
//  QLabel::buddy() const
QtDartBindings_EXPORT void *c_QLabel__buddy(void *thisObj);

// tag=1067
//  QLabel::changeEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QLabel__changeEvent_QEvent(void *thisObj,
                                                        void *arg__1_);

// tag=1067
//  QLabel::clear()
QtDartBindings_EXPORT void c_QLabel__clear(void *thisObj);

// tag=1067
//  QLabel::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QLabel__customEvent_QEvent(void *thisObj,
                                                        void *event_);

// tag=1067
//  QLabel::devType() const
QtDartBindings_EXPORT int c_QLabel__devType(void *thisObj);

// tag=1067
//  QLabel::event(QEvent * e)
QtDartBindings_EXPORT bool c_QLabel__event_QEvent(void *thisObj, void *e_);

// tag=1067
//  QLabel::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool c_QLabel__eventFilter_QObject_QEvent(void *thisObj,
                                                                void *watched_,
                                                                void *event_);

// tag=1067
//  QLabel::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QLabel__focusNextPrevChild_bool(void *thisObj,
                                                             bool next);

// tag=1067
//  QLabel::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QLabel__hasHeightForWidth(void *thisObj);

// tag=1067
//  QLabel::hasScaledContents() const
QtDartBindings_EXPORT bool c_QLabel__hasScaledContents(void *thisObj);

// tag=1067
//  QLabel::hasSelectedText() const
QtDartBindings_EXPORT bool c_QLabel__hasSelectedText(void *thisObj);

// tag=1067
//  QLabel::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QLabel__heightForWidth_int(void *thisObj,
                                                       int arg__1);

// tag=1067
//  QLabel::indent() const
QtDartBindings_EXPORT int c_QLabel__indent(void *thisObj);

// tag=1067
//  QLabel::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QLabel__initPainter_QPainter(void *thisObj,
                                                          void *painter_);

// tag=1067
//  QLabel::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QLabel__leaveEvent_QEvent(void *thisObj,
                                                       void *event_);

// tag=1067
//  QLabel::linkActivated(const QString & link)
QtDartBindings_EXPORT void c_QLabel__linkActivated_QString(void *thisObj,
                                                           const char *link_);

// tag=1078
QtDartBindings_EXPORT void
c_QLabel__onLinkActivated_QString(void *thisObj, void *contextQObject,
                                  void *callback);
// tag=1067
//  QLabel::linkHovered(const QString & link)
QtDartBindings_EXPORT void c_QLabel__linkHovered_QString(void *thisObj,
                                                         const char *link_);

// tag=1078
QtDartBindings_EXPORT void c_QLabel__onLinkHovered_QString(void *thisObj,
                                                           void *contextQObject,
                                                           void *callback);
// tag=1067
//  QLabel::margin() const
QtDartBindings_EXPORT int c_QLabel__margin(void *thisObj);

// tag=1067
//  QLabel::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QLabel__minimumSizeHint(void *thisObj);

// tag=1067
//  QLabel::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QLabel__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QLabel::mouseMoveEvent(QMouseEvent * ev)
QtDartBindings_EXPORT void c_QLabel__mouseMoveEvent_QMouseEvent(void *thisObj,
                                                                void *ev_);

// tag=1067
//  QLabel::mousePressEvent(QMouseEvent * ev)
QtDartBindings_EXPORT void c_QLabel__mousePressEvent_QMouseEvent(void *thisObj,
                                                                 void *ev_);

// tag=1067
//  QLabel::mouseReleaseEvent(QMouseEvent * ev)
QtDartBindings_EXPORT void
c_QLabel__mouseReleaseEvent_QMouseEvent(void *thisObj, void *ev_);

// tag=1067
//  QLabel::openExternalLinks() const
QtDartBindings_EXPORT bool c_QLabel__openExternalLinks(void *thisObj);

// tag=1067
//  QLabel::paintEvent(QPaintEvent * arg__1)
QtDartBindings_EXPORT void c_QLabel__paintEvent_QPaintEvent(void *thisObj,
                                                            void *arg__1_);

// tag=1067
//  QLabel::pixmap() const
QtDartBindings_EXPORT void *c_QLabel__pixmap(void *thisObj);

// tag=1067
//  QLabel::selectedText() const
QtDartBindings_EXPORT void *c_QLabel__selectedText(void *thisObj);

// tag=1067
//  QLabel::selectionStart() const
QtDartBindings_EXPORT int c_QLabel__selectionStart(void *thisObj);

// tag=1067
//  QLabel::setBuddy(QWidget * arg__1)
QtDartBindings_EXPORT void c_QLabel__setBuddy_QWidget(void *thisObj,
                                                      void *arg__1_);

// tag=1067
//  QLabel::setIndent(int arg__1)
QtDartBindings_EXPORT void c_QLabel__setIndent_int(void *thisObj, int arg__1);

// tag=1067
//  QLabel::setMargin(int arg__1)
QtDartBindings_EXPORT void c_QLabel__setMargin_int(void *thisObj, int arg__1);

// tag=1067
//  QLabel::setNum(double arg__1)
QtDartBindings_EXPORT void c_QLabel__setNum_double(void *thisObj,
                                                   double arg__1);

// tag=1067
//  QLabel::setNum(int arg__1)
QtDartBindings_EXPORT void c_QLabel__setNum_int(void *thisObj, int arg__1);

// tag=1067
//  QLabel::setOpenExternalLinks(bool open)
QtDartBindings_EXPORT void c_QLabel__setOpenExternalLinks_bool(void *thisObj,
                                                               bool open);

// tag=1067
//  QLabel::setPixmap(const QPixmap & arg__1)
QtDartBindings_EXPORT void c_QLabel__setPixmap_QPixmap(void *thisObj,
                                                       void *arg__1_);

// tag=1067
//  QLabel::setScaledContents(bool arg__1)
QtDartBindings_EXPORT void c_QLabel__setScaledContents_bool(void *thisObj,
                                                            bool arg__1);

// tag=1067
//  QLabel::setSelection(int arg__1, int arg__2)
QtDartBindings_EXPORT void
c_QLabel__setSelection_int_int(void *thisObj, int arg__1, int arg__2);

// tag=1067
//  QLabel::setText(const QString & arg__1)
QtDartBindings_EXPORT void c_QLabel__setText_QString(void *thisObj,
                                                     const char *arg__1_);

// tag=1067
//  QLabel::setVisible(bool visible)
QtDartBindings_EXPORT void c_QLabel__setVisible_bool(void *thisObj,
                                                     bool visible);

// tag=1067
//  QLabel::setWordWrap(bool on)
QtDartBindings_EXPORT void c_QLabel__setWordWrap_bool(void *thisObj, bool on);

// tag=1067
//  QLabel::sharedPainter() const
QtDartBindings_EXPORT void *c_QLabel__sharedPainter(void *thisObj);

// tag=1067
//  QLabel::sizeHint() const
QtDartBindings_EXPORT void *c_QLabel__sizeHint(void *thisObj);

// tag=1067
//  QLabel::text() const
QtDartBindings_EXPORT void *c_QLabel__text(void *thisObj);

// tag=1067
//  QLabel::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QLabel__tr_char_char_int(const char *s, const char *c, int n);

// tag=1067
//  QLabel::wordWrap() const
QtDartBindings_EXPORT bool c_QLabel__wordWrap(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QLabel__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QLabel__registerVirtualMethodCallback(void *ptr, void *callback,
                                        int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QLabel_Finalizer(void *, void *cppObj, void *);
}
