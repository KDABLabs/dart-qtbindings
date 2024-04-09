
// tag=1040
#include "QtDartBindings_exports.h"
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qicon.h>
#include <qlist.h>
#include <qobject.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qstring.h>
#include <qvariant.h>
#include <qwindow.h>

namespace QtDartBindings_wrappersNS {
// tag=1017
class QWindow_wrapper : public ::QWindow {
public:
  ~QWindow_wrapper();
  // tag=1041
  QWindow_wrapper();
  // tag=1041
  QWindow_wrapper(QWindow *parent);
  // tag=1041
  void activeChanged();
  // tag=1041
  void alert(int msec);
  // tag=1041
  QSize baseSize() const;
  // tag=1041
  bool close();
  // tag=1041
  void create();
  // tag=1041
  virtual void customEvent(QEvent *event);
  // tag=1008
  virtual void customEvent_nocallback(QEvent *event);
  // tag=1041
  void destroy();
  // tag=1041
  qreal devicePixelRatio() const;
  // tag=1041
  virtual bool event(QEvent *arg__1);
  // tag=1008
  virtual bool event_nocallback(QEvent *arg__1);
  // tag=1041
  virtual bool eventFilter(QObject *watched, QEvent *event);
  // tag=1008
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  // tag=1041
  QString filePath() const;
  // tag=1041
  virtual QObject *focusObject() const;
  // tag=1008
  virtual QObject *focusObject_nocallback() const;
  // tag=1041
  void focusObjectChanged(QObject *object);
  // tag=1041
  QRect frameGeometry() const;
  // tag=1041
  QPoint framePosition() const;
  // tag=1041
  QRect geometry() const;
  // tag=1041
  int height() const;
  // tag=1041
  void heightChanged(int arg);
  // tag=1041
  void hide();
  // tag=1041
  QIcon icon() const;
  // tag=1041
  bool isActive() const;
  // tag=1041
  bool isAncestorOf(const QWindow *child) const;
  // tag=1041
  bool isExposed() const;
  // tag=1041
  bool isModal() const;
  // tag=1041
  bool isTopLevel() const;
  // tag=1041
  bool isVisible() const;
  // tag=1041
  void lower();
  // tag=1041
  QPoint mapFromGlobal(const QPoint &pos) const;
  // tag=1041
  QPointF mapFromGlobal(const QPointF &pos) const;
  // tag=1041
  QPoint mapToGlobal(const QPoint &pos) const;
  // tag=1041
  QPointF mapToGlobal(const QPointF &pos) const;
  // tag=1041
  QRegion mask() const;
  // tag=1041
  int maximumHeight() const;
  // tag=1041
  void maximumHeightChanged(int arg);
  // tag=1041
  QSize maximumSize() const;
  // tag=1041
  int maximumWidth() const;
  // tag=1041
  void maximumWidthChanged(int arg);
  // tag=1041
  int minimumHeight() const;
  // tag=1041
  void minimumHeightChanged(int arg);
  // tag=1041
  QSize minimumSize() const;
  // tag=1041
  int minimumWidth() const;
  // tag=1041
  void minimumWidthChanged(int arg);
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
  qreal opacity() const;
  // tag=1041
  void opacityChanged(qreal opacity);
  // tag=1041
  virtual void paintEvent(QPaintEvent *arg__1);
  // tag=1008
  virtual void paintEvent_nocallback(QPaintEvent *arg__1);
  // tag=1041
  QWindow *parent() const;
  // tag=1041
  QPoint position() const;
  // tag=1041
  void raise();
  // tag=1041
  void requestActivate();
  // tag=1041
  void requestUpdate();
  // tag=1041
  void resize(const QSize &newSize);
  // tag=1041
  void resize(int w, int h);
  // tag=1041
  void setBaseSize(const QSize &size);
  // tag=1041
  void setFilePath(const QString &filePath);
  // tag=1041
  void setFramePosition(const QPoint &point);
  // tag=1041
  void setGeometry(const QRect &rect);
  // tag=1041
  void setGeometry(int posx, int posy, int w, int h);
  // tag=1041
  void setHeight(int arg);
  // tag=1041
  void setIcon(const QIcon &icon);
  // tag=1041
  bool setKeyboardGrabEnabled(bool grab);
  // tag=1041
  void setMask(const QRegion &region);
  // tag=1041
  void setMaximumHeight(int h);
  // tag=1041
  void setMaximumSize(const QSize &size);
  // tag=1041
  void setMaximumWidth(int w);
  // tag=1041
  void setMinimumHeight(int h);
  // tag=1041
  void setMinimumSize(const QSize &size);
  // tag=1041
  void setMinimumWidth(int w);
  // tag=1041
  bool setMouseGrabEnabled(bool grab);
  // tag=1041
  void setOpacity(qreal level);
  // tag=1041
  void setPosition(const QPoint &pt);
  // tag=1041
  void setPosition(int posx, int posy);
  // tag=1041
  void setSizeIncrement(const QSize &size);
  // tag=1041
  void setTitle(const QString &arg__1);
  // tag=1041
  void setTransientParent(QWindow *parent);
  // tag=1041
  void setVisible(bool visible);
  // tag=1041
  void setWidth(int arg);
  // tag=1041
  void setX(int arg);
  // tag=1041
  void setY(int arg);
  // tag=1041
  void show();
  // tag=1041
  void showFullScreen();
  // tag=1041
  void showMaximized();
  // tag=1041
  void showMinimized();
  // tag=1041
  void showNormal();
  // tag=1041
  virtual QSize size() const;
  // tag=1008
  virtual QSize size_nocallback() const;
  // tag=1041
  QSize sizeIncrement() const;
  // tag=1041
  bool startSystemMove();
  // tag=1041
  QString title() const;
  // tag=1041
  static QString tr(const char *s, const char *c, int n);
  // tag=1041
  QWindow *transientParent() const;
  // tag=1041
  void transientParentChanged(QWindow *transientParent);
  // tag=1041
  void unsetCursor();
  // tag=1041
  void visibleChanged(bool arg);
  // tag=1041
  int width() const;
  // tag=1041
  void widthChanged(int arg);
  // tag=1041
  void windowTitleChanged(const QString &title);
  // tag=1041
  int x() const;
  // tag=1041
  void xChanged(int arg);
  // tag=1041
  int y() const;
  // tag=1041
  void yChanged(int arg);
  // tag=1042
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_event)(void *, QEvent *arg__1);
  Callback_event m_eventCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_eventFilter)(void *, QObject *watched, QEvent *event);
  Callback_eventFilter m_eventFilterCallback = nullptr;
  // tag=1042
  typedef QObject *(*Callback_focusObject)(void *);
  Callback_focusObject m_focusObjectCallback = nullptr;
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
  typedef QSize *(*Callback_size)(void *);
  Callback_size m_sizeCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QWindow::QWindow()
QtDartBindings_EXPORT void *c_QWindow__constructor();

// tag=1067
//  QWindow::QWindow(QWindow * parent)
QtDartBindings_EXPORT void *c_QWindow__constructor_QWindow(void *parent_);

// tag=1067
//  QWindow::activeChanged()
QtDartBindings_EXPORT void c_QWindow__activeChanged(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void
c_QWindow__onActiveChanged(void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QWindow::alert(int msec)
QtDartBindings_EXPORT void c_QWindow__alert_int(void *thisObj, int msec);

// tag=1067
//  QWindow::baseSize() const
QtDartBindings_EXPORT void *c_QWindow__baseSize(void *thisObj);

// tag=1067
//  QWindow::close()
QtDartBindings_EXPORT bool c_QWindow__close(void *thisObj);

// tag=1067
//  QWindow::create()
QtDartBindings_EXPORT void c_QWindow__create(void *thisObj);

// tag=1067
//  QWindow::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QWindow__customEvent_QEvent(void *thisObj,
                                                         void *event_);

// tag=1067
//  QWindow::destroy()
QtDartBindings_EXPORT void c_QWindow__destroy(void *thisObj);

// tag=1067
//  QWindow::devicePixelRatio() const
QtDartBindings_EXPORT qreal c_QWindow__devicePixelRatio(void *thisObj);

// tag=1067
//  QWindow::event(QEvent * arg__1)
QtDartBindings_EXPORT bool c_QWindow__event_QEvent(void *thisObj,
                                                   void *arg__1_);

// tag=1067
//  QWindow::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool c_QWindow__eventFilter_QObject_QEvent(void *thisObj,
                                                                 void *watched_,
                                                                 void *event_);

// tag=1067
//  QWindow::filePath() const
QtDartBindings_EXPORT void *c_QWindow__filePath(void *thisObj);

// tag=1067
//  QWindow::focusObject() const
QtDartBindings_EXPORT void *c_QWindow__focusObject(void *thisObj);

// tag=1067
//  QWindow::focusObjectChanged(QObject * object)
QtDartBindings_EXPORT void c_QWindow__focusObjectChanged_QObject(void *thisObj,
                                                                 void *object_);

// tag=1078
QtDartBindings_EXPORT void
c_QWindow__onFocusObjectChanged_QObject(void *thisObj, void *contextQObject,
                                        void *callback);
// tag=1067
//  QWindow::frameGeometry() const
QtDartBindings_EXPORT void *c_QWindow__frameGeometry(void *thisObj);

// tag=1067
//  QWindow::framePosition() const
QtDartBindings_EXPORT void *c_QWindow__framePosition(void *thisObj);

// tag=1067
//  QWindow::geometry() const
QtDartBindings_EXPORT void *c_QWindow__geometry(void *thisObj);

// tag=1067
//  QWindow::height() const
QtDartBindings_EXPORT int c_QWindow__height(void *thisObj);

// tag=1067
//  QWindow::heightChanged(int arg)
QtDartBindings_EXPORT void c_QWindow__heightChanged_int(void *thisObj, int arg);

// tag=1078
QtDartBindings_EXPORT void c_QWindow__onHeightChanged_int(void *thisObj,
                                                          void *contextQObject,
                                                          void *callback);
// tag=1067
//  QWindow::hide()
QtDartBindings_EXPORT void c_QWindow__hide(void *thisObj);

// tag=1067
//  QWindow::icon() const
QtDartBindings_EXPORT void *c_QWindow__icon(void *thisObj);

// tag=1067
//  QWindow::isActive() const
QtDartBindings_EXPORT bool c_QWindow__isActive(void *thisObj);

// tag=1067
//  QWindow::isAncestorOf(const QWindow * child) const
QtDartBindings_EXPORT bool c_QWindow__isAncestorOf_QWindow(void *thisObj,
                                                           void *child_);

// tag=1067
//  QWindow::isExposed() const
QtDartBindings_EXPORT bool c_QWindow__isExposed(void *thisObj);

// tag=1067
//  QWindow::isModal() const
QtDartBindings_EXPORT bool c_QWindow__isModal(void *thisObj);

// tag=1067
//  QWindow::isTopLevel() const
QtDartBindings_EXPORT bool c_QWindow__isTopLevel(void *thisObj);

// tag=1067
//  QWindow::isVisible() const
QtDartBindings_EXPORT bool c_QWindow__isVisible(void *thisObj);

// tag=1067
//  QWindow::lower()
QtDartBindings_EXPORT void c_QWindow__lower(void *thisObj);

// tag=1067
//  QWindow::mapFromGlobal(const QPoint & pos) const
QtDartBindings_EXPORT void *c_QWindow__mapFromGlobal_QPoint(void *thisObj,
                                                            void *pos_);

// tag=1067
//  QWindow::mapFromGlobal(const QPointF & pos) const
QtDartBindings_EXPORT void *c_QWindow__mapFromGlobal_QPointF(void *thisObj,
                                                             void *pos_);

// tag=1067
//  QWindow::mapToGlobal(const QPoint & pos) const
QtDartBindings_EXPORT void *c_QWindow__mapToGlobal_QPoint(void *thisObj,
                                                          void *pos_);

// tag=1067
//  QWindow::mapToGlobal(const QPointF & pos) const
QtDartBindings_EXPORT void *c_QWindow__mapToGlobal_QPointF(void *thisObj,
                                                           void *pos_);

// tag=1067
//  QWindow::mask() const
QtDartBindings_EXPORT void *c_QWindow__mask(void *thisObj);

// tag=1067
//  QWindow::maximumHeight() const
QtDartBindings_EXPORT int c_QWindow__maximumHeight(void *thisObj);

// tag=1067
//  QWindow::maximumHeightChanged(int arg)
QtDartBindings_EXPORT void c_QWindow__maximumHeightChanged_int(void *thisObj,
                                                               int arg);

// tag=1078
QtDartBindings_EXPORT void
c_QWindow__onMaximumHeightChanged_int(void *thisObj, void *contextQObject,
                                      void *callback);
// tag=1067
//  QWindow::maximumSize() const
QtDartBindings_EXPORT void *c_QWindow__maximumSize(void *thisObj);

// tag=1067
//  QWindow::maximumWidth() const
QtDartBindings_EXPORT int c_QWindow__maximumWidth(void *thisObj);

// tag=1067
//  QWindow::maximumWidthChanged(int arg)
QtDartBindings_EXPORT void c_QWindow__maximumWidthChanged_int(void *thisObj,
                                                              int arg);

// tag=1078
QtDartBindings_EXPORT void
c_QWindow__onMaximumWidthChanged_int(void *thisObj, void *contextQObject,
                                     void *callback);
// tag=1067
//  QWindow::minimumHeight() const
QtDartBindings_EXPORT int c_QWindow__minimumHeight(void *thisObj);

// tag=1067
//  QWindow::minimumHeightChanged(int arg)
QtDartBindings_EXPORT void c_QWindow__minimumHeightChanged_int(void *thisObj,
                                                               int arg);

// tag=1078
QtDartBindings_EXPORT void
c_QWindow__onMinimumHeightChanged_int(void *thisObj, void *contextQObject,
                                      void *callback);
// tag=1067
//  QWindow::minimumSize() const
QtDartBindings_EXPORT void *c_QWindow__minimumSize(void *thisObj);

// tag=1067
//  QWindow::minimumWidth() const
QtDartBindings_EXPORT int c_QWindow__minimumWidth(void *thisObj);

// tag=1067
//  QWindow::minimumWidthChanged(int arg)
QtDartBindings_EXPORT void c_QWindow__minimumWidthChanged_int(void *thisObj,
                                                              int arg);

// tag=1078
QtDartBindings_EXPORT void
c_QWindow__onMinimumWidthChanged_int(void *thisObj, void *contextQObject,
                                     void *callback);
// tag=1067
//  QWindow::mouseDoubleClickEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QWindow__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *arg__1_);

// tag=1067
//  QWindow::mouseMoveEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void c_QWindow__mouseMoveEvent_QMouseEvent(void *thisObj,
                                                                 void *arg__1_);

// tag=1067
//  QWindow::mousePressEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QWindow__mousePressEvent_QMouseEvent(void *thisObj, void *arg__1_);

// tag=1067
//  QWindow::mouseReleaseEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QWindow__mouseReleaseEvent_QMouseEvent(void *thisObj, void *arg__1_);

// tag=1067
//  QWindow::opacity() const
QtDartBindings_EXPORT qreal c_QWindow__opacity(void *thisObj);

// tag=1067
//  QWindow::opacityChanged(qreal opacity)
QtDartBindings_EXPORT void c_QWindow__opacityChanged_qreal(void *thisObj,
                                                           qreal opacity);

// tag=1078
QtDartBindings_EXPORT void
c_QWindow__onOpacityChanged_qreal(void *thisObj, void *contextQObject,
                                  void *callback);
// tag=1067
//  QWindow::paintEvent(QPaintEvent * arg__1)
QtDartBindings_EXPORT void c_QWindow__paintEvent_QPaintEvent(void *thisObj,
                                                             void *arg__1_);

// tag=1067
//  QWindow::parent() const
QtDartBindings_EXPORT void *c_QWindow__parent(void *thisObj);

// tag=1067
//  QWindow::position() const
QtDartBindings_EXPORT void *c_QWindow__position(void *thisObj);

// tag=1067
//  QWindow::raise()
QtDartBindings_EXPORT void c_QWindow__raise(void *thisObj);

// tag=1067
//  QWindow::requestActivate()
QtDartBindings_EXPORT void c_QWindow__requestActivate(void *thisObj);

// tag=1067
//  QWindow::requestUpdate()
QtDartBindings_EXPORT void c_QWindow__requestUpdate(void *thisObj);

// tag=1067
//  QWindow::resize(const QSize & newSize)
QtDartBindings_EXPORT void c_QWindow__resize_QSize(void *thisObj,
                                                   void *newSize_);

// tag=1067
//  QWindow::resize(int w, int h)
QtDartBindings_EXPORT void c_QWindow__resize_int_int(void *thisObj, int w,
                                                     int h);

// tag=1067
//  QWindow::setBaseSize(const QSize & size)
QtDartBindings_EXPORT void c_QWindow__setBaseSize_QSize(void *thisObj,
                                                        void *size_);

// tag=1067
//  QWindow::setFilePath(const QString & filePath)
QtDartBindings_EXPORT void
c_QWindow__setFilePath_QString(void *thisObj, const char *filePath_);

// tag=1067
//  QWindow::setFramePosition(const QPoint & point)
QtDartBindings_EXPORT void c_QWindow__setFramePosition_QPoint(void *thisObj,
                                                              void *point_);

// tag=1067
//  QWindow::setGeometry(const QRect & rect)
QtDartBindings_EXPORT void c_QWindow__setGeometry_QRect(void *thisObj,
                                                        void *rect_);

// tag=1067
//  QWindow::setGeometry(int posx, int posy, int w, int h)
QtDartBindings_EXPORT void c_QWindow__setGeometry_int_int_int_int(void *thisObj,
                                                                  int posx,
                                                                  int posy,
                                                                  int w, int h);

// tag=1067
//  QWindow::setHeight(int arg)
QtDartBindings_EXPORT void c_QWindow__setHeight_int(void *thisObj, int arg);

// tag=1067
//  QWindow::setIcon(const QIcon & icon)
QtDartBindings_EXPORT void c_QWindow__setIcon_QIcon(void *thisObj, void *icon_);

// tag=1067
//  QWindow::setKeyboardGrabEnabled(bool grab)
QtDartBindings_EXPORT bool c_QWindow__setKeyboardGrabEnabled_bool(void *thisObj,
                                                                  bool grab);

// tag=1067
//  QWindow::setMask(const QRegion & region)
QtDartBindings_EXPORT void c_QWindow__setMask_QRegion(void *thisObj,
                                                      void *region_);

// tag=1067
//  QWindow::setMaximumHeight(int h)
QtDartBindings_EXPORT void c_QWindow__setMaximumHeight_int(void *thisObj,
                                                           int h);

// tag=1067
//  QWindow::setMaximumSize(const QSize & size)
QtDartBindings_EXPORT void c_QWindow__setMaximumSize_QSize(void *thisObj,
                                                           void *size_);

// tag=1067
//  QWindow::setMaximumWidth(int w)
QtDartBindings_EXPORT void c_QWindow__setMaximumWidth_int(void *thisObj, int w);

// tag=1067
//  QWindow::setMinimumHeight(int h)
QtDartBindings_EXPORT void c_QWindow__setMinimumHeight_int(void *thisObj,
                                                           int h);

// tag=1067
//  QWindow::setMinimumSize(const QSize & size)
QtDartBindings_EXPORT void c_QWindow__setMinimumSize_QSize(void *thisObj,
                                                           void *size_);

// tag=1067
//  QWindow::setMinimumWidth(int w)
QtDartBindings_EXPORT void c_QWindow__setMinimumWidth_int(void *thisObj, int w);

// tag=1067
//  QWindow::setMouseGrabEnabled(bool grab)
QtDartBindings_EXPORT bool c_QWindow__setMouseGrabEnabled_bool(void *thisObj,
                                                               bool grab);

// tag=1067
//  QWindow::setOpacity(qreal level)
QtDartBindings_EXPORT void c_QWindow__setOpacity_qreal(void *thisObj,
                                                       qreal level);

// tag=1067
//  QWindow::setPosition(const QPoint & pt)
QtDartBindings_EXPORT void c_QWindow__setPosition_QPoint(void *thisObj,
                                                         void *pt_);

// tag=1067
//  QWindow::setPosition(int posx, int posy)
QtDartBindings_EXPORT void c_QWindow__setPosition_int_int(void *thisObj,
                                                          int posx, int posy);

// tag=1067
//  QWindow::setSizeIncrement(const QSize & size)
QtDartBindings_EXPORT void c_QWindow__setSizeIncrement_QSize(void *thisObj,
                                                             void *size_);

// tag=1067
//  QWindow::setTitle(const QString & arg__1)
QtDartBindings_EXPORT void c_QWindow__setTitle_QString(void *thisObj,
                                                       const char *arg__1_);

// tag=1067
//  QWindow::setTransientParent(QWindow * parent)
QtDartBindings_EXPORT void c_QWindow__setTransientParent_QWindow(void *thisObj,
                                                                 void *parent_);

// tag=1067
//  QWindow::setVisible(bool visible)
QtDartBindings_EXPORT void c_QWindow__setVisible_bool(void *thisObj,
                                                      bool visible);

// tag=1067
//  QWindow::setWidth(int arg)
QtDartBindings_EXPORT void c_QWindow__setWidth_int(void *thisObj, int arg);

// tag=1067
//  QWindow::setX(int arg)
QtDartBindings_EXPORT void c_QWindow__setX_int(void *thisObj, int arg);

// tag=1067
//  QWindow::setY(int arg)
QtDartBindings_EXPORT void c_QWindow__setY_int(void *thisObj, int arg);

// tag=1067
//  QWindow::show()
QtDartBindings_EXPORT void c_QWindow__show(void *thisObj);

// tag=1067
//  QWindow::showFullScreen()
QtDartBindings_EXPORT void c_QWindow__showFullScreen(void *thisObj);

// tag=1067
//  QWindow::showMaximized()
QtDartBindings_EXPORT void c_QWindow__showMaximized(void *thisObj);

// tag=1067
//  QWindow::showMinimized()
QtDartBindings_EXPORT void c_QWindow__showMinimized(void *thisObj);

// tag=1067
//  QWindow::showNormal()
QtDartBindings_EXPORT void c_QWindow__showNormal(void *thisObj);

// tag=1067
//  QWindow::size() const
QtDartBindings_EXPORT void *c_QWindow__size(void *thisObj);

// tag=1067
//  QWindow::sizeIncrement() const
QtDartBindings_EXPORT void *c_QWindow__sizeIncrement(void *thisObj);

// tag=1067
//  QWindow::startSystemMove()
QtDartBindings_EXPORT bool c_QWindow__startSystemMove(void *thisObj);

// tag=1067
//  QWindow::title() const
QtDartBindings_EXPORT void *c_QWindow__title(void *thisObj);

// tag=1067
//  QWindow::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QWindow__tr_char_char_int(const char *s, const char *c, int n);

// tag=1067
//  QWindow::transientParent() const
QtDartBindings_EXPORT void *c_QWindow__transientParent(void *thisObj);

// tag=1067
//  QWindow::transientParentChanged(QWindow * transientParent)
QtDartBindings_EXPORT void
c_QWindow__transientParentChanged_QWindow(void *thisObj,
                                          void *transientParent_);

// tag=1078
QtDartBindings_EXPORT void
c_QWindow__onTransientParentChanged_QWindow(void *thisObj, void *contextQObject,
                                            void *callback);
// tag=1067
//  QWindow::unsetCursor()
QtDartBindings_EXPORT void c_QWindow__unsetCursor(void *thisObj);

// tag=1067
//  QWindow::visibleChanged(bool arg)
QtDartBindings_EXPORT void c_QWindow__visibleChanged_bool(void *thisObj,
                                                          bool arg);

// tag=1078
QtDartBindings_EXPORT void
c_QWindow__onVisibleChanged_bool(void *thisObj, void *contextQObject,
                                 void *callback);
// tag=1067
//  QWindow::width() const
QtDartBindings_EXPORT int c_QWindow__width(void *thisObj);

// tag=1067
//  QWindow::widthChanged(int arg)
QtDartBindings_EXPORT void c_QWindow__widthChanged_int(void *thisObj, int arg);

// tag=1078
QtDartBindings_EXPORT void c_QWindow__onWidthChanged_int(void *thisObj,
                                                         void *contextQObject,
                                                         void *callback);
// tag=1067
//  QWindow::windowTitleChanged(const QString & title)
QtDartBindings_EXPORT void
c_QWindow__windowTitleChanged_QString(void *thisObj, const char *title_);

// tag=1078
QtDartBindings_EXPORT void
c_QWindow__onWindowTitleChanged_QString(void *thisObj, void *contextQObject,
                                        void *callback);
// tag=1067
//  QWindow::x() const
QtDartBindings_EXPORT int c_QWindow__x(void *thisObj);

// tag=1067
//  QWindow::xChanged(int arg)
QtDartBindings_EXPORT void c_QWindow__xChanged_int(void *thisObj, int arg);

// tag=1078
QtDartBindings_EXPORT void
c_QWindow__onXChanged_int(void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QWindow::y() const
QtDartBindings_EXPORT int c_QWindow__y(void *thisObj);

// tag=1067
//  QWindow::yChanged(int arg)
QtDartBindings_EXPORT void c_QWindow__yChanged_int(void *thisObj, int arg);

// tag=1078
QtDartBindings_EXPORT void
c_QWindow__onYChanged_int(void *thisObj, void *contextQObject, void *callback);
// tag=1066
QtDartBindings_EXPORT void c_QWindow__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QWindow__registerVirtualMethodCallback(void *ptr, void *callback,
                                         int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QWindow_Finalizer(void *, void *cppObj, void *);
}
