/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
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
class QWindow_wrapper : public ::QWindow {
public:
  ~QWindow_wrapper();
  QWindow_wrapper();
  QWindow_wrapper(QWindow *parent);
  void activeChanged();
  void alert(int msec);
  QSize baseSize() const;
  bool close();
  void create();
  virtual void customEvent(QEvent *event);
  virtual void customEvent_nocallback(QEvent *event);
  void destroy();
  qreal devicePixelRatio() const;
  virtual bool event(QEvent *arg__1);
  virtual bool event_nocallback(QEvent *arg__1);
  virtual bool eventFilter(QObject *watched, QEvent *event);
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  QString filePath() const;
  virtual QObject *focusObject() const;
  virtual QObject *focusObject_nocallback() const;
  void focusObjectChanged(QObject *object);
  QRect frameGeometry() const;
  QPoint framePosition() const;
  QRect geometry() const;
  int height() const;
  void heightChanged(int arg);
  void hide();
  QIcon icon() const;
  bool isActive() const;
  bool isAncestorOf(const QWindow *child) const;
  bool isExposed() const;
  bool isModal() const;
  bool isTopLevel() const;
  bool isVisible() const;
  void lower();
  QPoint mapFromGlobal(const QPoint &pos) const;
  QPointF mapFromGlobal(const QPointF &pos) const;
  QPoint mapToGlobal(const QPoint &pos) const;
  QPointF mapToGlobal(const QPointF &pos) const;
  QRegion mask() const;
  int maximumHeight() const;
  void maximumHeightChanged(int arg);
  QSize maximumSize() const;
  int maximumWidth() const;
  void maximumWidthChanged(int arg);
  int minimumHeight() const;
  void minimumHeightChanged(int arg);
  QSize minimumSize() const;
  int minimumWidth() const;
  void minimumWidthChanged(int arg);
  virtual void mouseDoubleClickEvent(QMouseEvent *arg__1);
  virtual void mouseDoubleClickEvent_nocallback(QMouseEvent *arg__1);
  virtual void mouseMoveEvent(QMouseEvent *arg__1);
  virtual void mouseMoveEvent_nocallback(QMouseEvent *arg__1);
  virtual void mousePressEvent(QMouseEvent *arg__1);
  virtual void mousePressEvent_nocallback(QMouseEvent *arg__1);
  virtual void mouseReleaseEvent(QMouseEvent *arg__1);
  virtual void mouseReleaseEvent_nocallback(QMouseEvent *arg__1);
  qreal opacity() const;
  void opacityChanged(qreal opacity);
  virtual void paintEvent(QPaintEvent *arg__1);
  virtual void paintEvent_nocallback(QPaintEvent *arg__1);
  QWindow *parent() const;
  QPoint position() const;
  void raise();
  void requestActivate();
  void requestUpdate();
  void resize(const QSize &newSize);
  void resize(int w, int h);
  void setBaseSize(const QSize &size);
  void setFilePath(const QString &filePath);
  void setFramePosition(const QPoint &point);
  void setGeometry(const QRect &rect);
  void setGeometry(int posx, int posy, int w, int h);
  void setHeight(int arg);
  void setIcon(const QIcon &icon);
  bool setKeyboardGrabEnabled(bool grab);
  void setMask(const QRegion &region);
  void setMaximumHeight(int h);
  void setMaximumSize(const QSize &size);
  void setMaximumWidth(int w);
  void setMinimumHeight(int h);
  void setMinimumSize(const QSize &size);
  void setMinimumWidth(int w);
  bool setMouseGrabEnabled(bool grab);
  void setOpacity(qreal level);
  void setPosition(const QPoint &pt);
  void setPosition(int posx, int posy);
  void setSizeIncrement(const QSize &size);
  void setTitle(const QString &arg__1);
  void setTransientParent(QWindow *parent);
  void setVisible(bool visible);
  void setWidth(int arg);
  void setX(int arg);
  void setY(int arg);
  void show();
  void showFullScreen();
  void showMaximized();
  void showMinimized();
  void showNormal();
  virtual QSize size() const;
  virtual QSize size_nocallback() const;
  QSize sizeIncrement() const;
  bool startSystemMove();
  QString title() const;
  static QString tr(const char *s, const char *c, int n);
  QWindow *transientParent() const;
  void transientParentChanged(QWindow *transientParent);
  void unsetCursor();
  void visibleChanged(bool arg);
  int width() const;
  void widthChanged(int arg);
  void windowTitleChanged(const QString &title);
  int x() const;
  void xChanged(int arg);
  int y() const;
  void yChanged(int arg);
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  typedef bool (*Callback_event)(void *, QEvent *arg__1);
  Callback_event m_eventCallback = nullptr;
  typedef bool (*Callback_eventFilter)(void *, QObject *watched, QEvent *event);
  Callback_eventFilter m_eventFilterCallback = nullptr;
  typedef QObject *(*Callback_focusObject)(void *);
  Callback_focusObject m_focusObjectCallback = nullptr;
  typedef void (*Callback_mouseDoubleClickEvent)(void *, QMouseEvent *arg__1);
  Callback_mouseDoubleClickEvent m_mouseDoubleClickEventCallback = nullptr;
  typedef void (*Callback_mouseMoveEvent)(void *, QMouseEvent *arg__1);
  Callback_mouseMoveEvent m_mouseMoveEventCallback = nullptr;
  typedef void (*Callback_mousePressEvent)(void *, QMouseEvent *arg__1);
  Callback_mousePressEvent m_mousePressEventCallback = nullptr;
  typedef void (*Callback_mouseReleaseEvent)(void *, QMouseEvent *arg__1);
  Callback_mouseReleaseEvent m_mouseReleaseEventCallback = nullptr;
  typedef void (*Callback_paintEvent)(void *, QPaintEvent *arg__1);
  Callback_paintEvent m_paintEventCallback = nullptr;
  typedef QSize *(*Callback_size)(void *);
  Callback_size m_sizeCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QWindow::QWindow()
QtDartBindings_EXPORT void *c_QWindow__constructor();
// QWindow::QWindow(QWindow * parent)
QtDartBindings_EXPORT void *c_QWindow__constructor_QWindow(void *parent_);
// QWindow::activeChanged()
QtDartBindings_EXPORT void c_QWindow__activeChanged(void *thisObj);
QtDartBindings_EXPORT void
c_QWindow__onActiveChanged(void *thisObj, void *contextQObject,
                           void *callback); // QWindow::alert(int msec)
QtDartBindings_EXPORT void c_QWindow__alert_int(void *thisObj, int msec);
// QWindow::baseSize() const
QtDartBindings_EXPORT void *c_QWindow__baseSize(void *thisObj);
// QWindow::close()
QtDartBindings_EXPORT bool c_QWindow__close(void *thisObj);
// QWindow::create()
QtDartBindings_EXPORT void c_QWindow__create(void *thisObj);
// QWindow::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QWindow__customEvent_QEvent(void *thisObj,
                                                         void *event_);
// QWindow::destroy()
QtDartBindings_EXPORT void c_QWindow__destroy(void *thisObj);
// QWindow::devicePixelRatio() const
QtDartBindings_EXPORT qreal c_QWindow__devicePixelRatio(void *thisObj);
// QWindow::event(QEvent * arg__1)
QtDartBindings_EXPORT bool c_QWindow__event_QEvent(void *thisObj,
                                                   void *arg__1_);
// QWindow::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool c_QWindow__eventFilter_QObject_QEvent(void *thisObj,
                                                                 void *watched_,
                                                                 void *event_);
// QWindow::filePath() const
QtDartBindings_EXPORT void *c_QWindow__filePath(void *thisObj);
// QWindow::focusObject() const
QtDartBindings_EXPORT void *c_QWindow__focusObject(void *thisObj);
// QWindow::focusObjectChanged(QObject * object)
QtDartBindings_EXPORT void c_QWindow__focusObjectChanged_QObject(void *thisObj,
                                                                 void *object_);
QtDartBindings_EXPORT void c_QWindow__onFocusObjectChanged_QObject(
    void *thisObj, void *contextQObject,
    void *callback); // QWindow::frameGeometry() const
QtDartBindings_EXPORT void *c_QWindow__frameGeometry(void *thisObj);
// QWindow::framePosition() const
QtDartBindings_EXPORT void *c_QWindow__framePosition(void *thisObj);
// QWindow::geometry() const
QtDartBindings_EXPORT void *c_QWindow__geometry(void *thisObj);
// QWindow::height() const
QtDartBindings_EXPORT int c_QWindow__height(void *thisObj);
// QWindow::heightChanged(int arg)
QtDartBindings_EXPORT void c_QWindow__heightChanged_int(void *thisObj, int arg);
QtDartBindings_EXPORT void
c_QWindow__onHeightChanged_int(void *thisObj, void *contextQObject,
                               void *callback); // QWindow::hide()
QtDartBindings_EXPORT void c_QWindow__hide(void *thisObj);
// QWindow::icon() const
QtDartBindings_EXPORT void *c_QWindow__icon(void *thisObj);
// QWindow::isActive() const
QtDartBindings_EXPORT bool c_QWindow__isActive(void *thisObj);
// QWindow::isAncestorOf(const QWindow * child) const
QtDartBindings_EXPORT bool c_QWindow__isAncestorOf_QWindow(void *thisObj,
                                                           void *child_);
// QWindow::isExposed() const
QtDartBindings_EXPORT bool c_QWindow__isExposed(void *thisObj);
// QWindow::isModal() const
QtDartBindings_EXPORT bool c_QWindow__isModal(void *thisObj);
// QWindow::isTopLevel() const
QtDartBindings_EXPORT bool c_QWindow__isTopLevel(void *thisObj);
// QWindow::isVisible() const
QtDartBindings_EXPORT bool c_QWindow__isVisible(void *thisObj);
// QWindow::lower()
QtDartBindings_EXPORT void c_QWindow__lower(void *thisObj);
// QWindow::mapFromGlobal(const QPoint & pos) const
QtDartBindings_EXPORT void *c_QWindow__mapFromGlobal_QPoint(void *thisObj,
                                                            void *pos_);
// QWindow::mapFromGlobal(const QPointF & pos) const
QtDartBindings_EXPORT void *c_QWindow__mapFromGlobal_QPointF(void *thisObj,
                                                             void *pos_);
// QWindow::mapToGlobal(const QPoint & pos) const
QtDartBindings_EXPORT void *c_QWindow__mapToGlobal_QPoint(void *thisObj,
                                                          void *pos_);
// QWindow::mapToGlobal(const QPointF & pos) const
QtDartBindings_EXPORT void *c_QWindow__mapToGlobal_QPointF(void *thisObj,
                                                           void *pos_);
// QWindow::mask() const
QtDartBindings_EXPORT void *c_QWindow__mask(void *thisObj);
// QWindow::maximumHeight() const
QtDartBindings_EXPORT int c_QWindow__maximumHeight(void *thisObj);
// QWindow::maximumHeightChanged(int arg)
QtDartBindings_EXPORT void c_QWindow__maximumHeightChanged_int(void *thisObj,
                                                               int arg);
QtDartBindings_EXPORT void c_QWindow__onMaximumHeightChanged_int(
    void *thisObj, void *contextQObject,
    void *callback); // QWindow::maximumSize() const
QtDartBindings_EXPORT void *c_QWindow__maximumSize(void *thisObj);
// QWindow::maximumWidth() const
QtDartBindings_EXPORT int c_QWindow__maximumWidth(void *thisObj);
// QWindow::maximumWidthChanged(int arg)
QtDartBindings_EXPORT void c_QWindow__maximumWidthChanged_int(void *thisObj,
                                                              int arg);
QtDartBindings_EXPORT void c_QWindow__onMaximumWidthChanged_int(
    void *thisObj, void *contextQObject,
    void *callback); // QWindow::minimumHeight() const
QtDartBindings_EXPORT int c_QWindow__minimumHeight(void *thisObj);
// QWindow::minimumHeightChanged(int arg)
QtDartBindings_EXPORT void c_QWindow__minimumHeightChanged_int(void *thisObj,
                                                               int arg);
QtDartBindings_EXPORT void c_QWindow__onMinimumHeightChanged_int(
    void *thisObj, void *contextQObject,
    void *callback); // QWindow::minimumSize() const
QtDartBindings_EXPORT void *c_QWindow__minimumSize(void *thisObj);
// QWindow::minimumWidth() const
QtDartBindings_EXPORT int c_QWindow__minimumWidth(void *thisObj);
// QWindow::minimumWidthChanged(int arg)
QtDartBindings_EXPORT void c_QWindow__minimumWidthChanged_int(void *thisObj,
                                                              int arg);
QtDartBindings_EXPORT void c_QWindow__onMinimumWidthChanged_int(
    void *thisObj, void *contextQObject,
    void *callback); // QWindow::mouseDoubleClickEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QWindow__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QWindow::mouseMoveEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void c_QWindow__mouseMoveEvent_QMouseEvent(void *thisObj,
                                                                 void *arg__1_);
// QWindow::mousePressEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QWindow__mousePressEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QWindow::mouseReleaseEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QWindow__mouseReleaseEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QWindow::opacity() const
QtDartBindings_EXPORT qreal c_QWindow__opacity(void *thisObj);
// QWindow::opacityChanged(qreal opacity)
QtDartBindings_EXPORT void c_QWindow__opacityChanged_qreal(void *thisObj,
                                                           qreal opacity);
QtDartBindings_EXPORT void c_QWindow__onOpacityChanged_qreal(
    void *thisObj, void *contextQObject,
    void *callback); // QWindow::paintEvent(QPaintEvent * arg__1)
QtDartBindings_EXPORT void c_QWindow__paintEvent_QPaintEvent(void *thisObj,
                                                             void *arg__1_);
// QWindow::parent() const
QtDartBindings_EXPORT void *c_QWindow__parent(void *thisObj);
// QWindow::position() const
QtDartBindings_EXPORT void *c_QWindow__position(void *thisObj);
// QWindow::raise()
QtDartBindings_EXPORT void c_QWindow__raise(void *thisObj);
// QWindow::requestActivate()
QtDartBindings_EXPORT void c_QWindow__requestActivate(void *thisObj);
// QWindow::requestUpdate()
QtDartBindings_EXPORT void c_QWindow__requestUpdate(void *thisObj);
// QWindow::resize(const QSize & newSize)
QtDartBindings_EXPORT void c_QWindow__resize_QSize(void *thisObj,
                                                   void *newSize_);
// QWindow::resize(int w, int h)
QtDartBindings_EXPORT void c_QWindow__resize_int_int(void *thisObj, int w,
                                                     int h);
// QWindow::setBaseSize(const QSize & size)
QtDartBindings_EXPORT void c_QWindow__setBaseSize_QSize(void *thisObj,
                                                        void *size_);
// QWindow::setFilePath(const QString & filePath)
QtDartBindings_EXPORT void
c_QWindow__setFilePath_QString(void *thisObj, const char *filePath_);
// QWindow::setFramePosition(const QPoint & point)
QtDartBindings_EXPORT void c_QWindow__setFramePosition_QPoint(void *thisObj,
                                                              void *point_);
// QWindow::setGeometry(const QRect & rect)
QtDartBindings_EXPORT void c_QWindow__setGeometry_QRect(void *thisObj,
                                                        void *rect_);
// QWindow::setGeometry(int posx, int posy, int w, int h)
QtDartBindings_EXPORT void c_QWindow__setGeometry_int_int_int_int(void *thisObj,
                                                                  int posx,
                                                                  int posy,
                                                                  int w, int h);
// QWindow::setHeight(int arg)
QtDartBindings_EXPORT void c_QWindow__setHeight_int(void *thisObj, int arg);
// QWindow::setIcon(const QIcon & icon)
QtDartBindings_EXPORT void c_QWindow__setIcon_QIcon(void *thisObj, void *icon_);
// QWindow::setKeyboardGrabEnabled(bool grab)
QtDartBindings_EXPORT bool c_QWindow__setKeyboardGrabEnabled_bool(void *thisObj,
                                                                  bool grab);
// QWindow::setMask(const QRegion & region)
QtDartBindings_EXPORT void c_QWindow__setMask_QRegion(void *thisObj,
                                                      void *region_);
// QWindow::setMaximumHeight(int h)
QtDartBindings_EXPORT void c_QWindow__setMaximumHeight_int(void *thisObj,
                                                           int h);
// QWindow::setMaximumSize(const QSize & size)
QtDartBindings_EXPORT void c_QWindow__setMaximumSize_QSize(void *thisObj,
                                                           void *size_);
// QWindow::setMaximumWidth(int w)
QtDartBindings_EXPORT void c_QWindow__setMaximumWidth_int(void *thisObj, int w);
// QWindow::setMinimumHeight(int h)
QtDartBindings_EXPORT void c_QWindow__setMinimumHeight_int(void *thisObj,
                                                           int h);
// QWindow::setMinimumSize(const QSize & size)
QtDartBindings_EXPORT void c_QWindow__setMinimumSize_QSize(void *thisObj,
                                                           void *size_);
// QWindow::setMinimumWidth(int w)
QtDartBindings_EXPORT void c_QWindow__setMinimumWidth_int(void *thisObj, int w);
// QWindow::setMouseGrabEnabled(bool grab)
QtDartBindings_EXPORT bool c_QWindow__setMouseGrabEnabled_bool(void *thisObj,
                                                               bool grab);
// QWindow::setOpacity(qreal level)
QtDartBindings_EXPORT void c_QWindow__setOpacity_qreal(void *thisObj,
                                                       qreal level);
// QWindow::setPosition(const QPoint & pt)
QtDartBindings_EXPORT void c_QWindow__setPosition_QPoint(void *thisObj,
                                                         void *pt_);
// QWindow::setPosition(int posx, int posy)
QtDartBindings_EXPORT void c_QWindow__setPosition_int_int(void *thisObj,
                                                          int posx, int posy);
// QWindow::setSizeIncrement(const QSize & size)
QtDartBindings_EXPORT void c_QWindow__setSizeIncrement_QSize(void *thisObj,
                                                             void *size_);
// QWindow::setTitle(const QString & arg__1)
QtDartBindings_EXPORT void c_QWindow__setTitle_QString(void *thisObj,
                                                       const char *arg__1_);
// QWindow::setTransientParent(QWindow * parent)
QtDartBindings_EXPORT void c_QWindow__setTransientParent_QWindow(void *thisObj,
                                                                 void *parent_);
// QWindow::setVisible(bool visible)
QtDartBindings_EXPORT void c_QWindow__setVisible_bool(void *thisObj,
                                                      bool visible);
// QWindow::setWidth(int arg)
QtDartBindings_EXPORT void c_QWindow__setWidth_int(void *thisObj, int arg);
// QWindow::setX(int arg)
QtDartBindings_EXPORT void c_QWindow__setX_int(void *thisObj, int arg);
// QWindow::setY(int arg)
QtDartBindings_EXPORT void c_QWindow__setY_int(void *thisObj, int arg);
// QWindow::show()
QtDartBindings_EXPORT void c_QWindow__show(void *thisObj);
// QWindow::showFullScreen()
QtDartBindings_EXPORT void c_QWindow__showFullScreen(void *thisObj);
// QWindow::showMaximized()
QtDartBindings_EXPORT void c_QWindow__showMaximized(void *thisObj);
// QWindow::showMinimized()
QtDartBindings_EXPORT void c_QWindow__showMinimized(void *thisObj);
// QWindow::showNormal()
QtDartBindings_EXPORT void c_QWindow__showNormal(void *thisObj);
// QWindow::size() const
QtDartBindings_EXPORT void *c_QWindow__size(void *thisObj);
// QWindow::sizeIncrement() const
QtDartBindings_EXPORT void *c_QWindow__sizeIncrement(void *thisObj);
// QWindow::startSystemMove()
QtDartBindings_EXPORT bool c_QWindow__startSystemMove(void *thisObj);
// QWindow::title() const
QtDartBindings_EXPORT void *c_QWindow__title(void *thisObj);
// QWindow::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QWindow__tr_char_char_int(const char *s, const char *c, int n);
// QWindow::transientParent() const
QtDartBindings_EXPORT void *c_QWindow__transientParent(void *thisObj);
// QWindow::transientParentChanged(QWindow * transientParent)
QtDartBindings_EXPORT void
c_QWindow__transientParentChanged_QWindow(void *thisObj,
                                          void *transientParent_);
QtDartBindings_EXPORT void c_QWindow__onTransientParentChanged_QWindow(
    void *thisObj, void *contextQObject,
    void *callback); // QWindow::unsetCursor()
QtDartBindings_EXPORT void c_QWindow__unsetCursor(void *thisObj);
// QWindow::visibleChanged(bool arg)
QtDartBindings_EXPORT void c_QWindow__visibleChanged_bool(void *thisObj,
                                                          bool arg);
QtDartBindings_EXPORT void
c_QWindow__onVisibleChanged_bool(void *thisObj, void *contextQObject,
                                 void *callback); // QWindow::width() const
QtDartBindings_EXPORT int c_QWindow__width(void *thisObj);
// QWindow::widthChanged(int arg)
QtDartBindings_EXPORT void c_QWindow__widthChanged_int(void *thisObj, int arg);
QtDartBindings_EXPORT void c_QWindow__onWidthChanged_int(
    void *thisObj, void *contextQObject,
    void *callback); // QWindow::windowTitleChanged(const QString & title)
QtDartBindings_EXPORT void
c_QWindow__windowTitleChanged_QString(void *thisObj, const char *title_);
QtDartBindings_EXPORT void
c_QWindow__onWindowTitleChanged_QString(void *thisObj, void *contextQObject,
                                        void *callback); // QWindow::x() const
QtDartBindings_EXPORT int c_QWindow__x(void *thisObj);
// QWindow::xChanged(int arg)
QtDartBindings_EXPORT void c_QWindow__xChanged_int(void *thisObj, int arg);
QtDartBindings_EXPORT void
c_QWindow__onXChanged_int(void *thisObj, void *contextQObject,
                          void *callback); // QWindow::y() const
QtDartBindings_EXPORT int c_QWindow__y(void *thisObj);
// QWindow::yChanged(int arg)
QtDartBindings_EXPORT void c_QWindow__yChanged_int(void *thisObj, int arg);
QtDartBindings_EXPORT void
c_QWindow__onYChanged_int(void *thisObj, void *contextQObject, void *callback);
QtDartBindings_EXPORT void c_QWindow__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QWindow__registerVirtualMethodCallback(void *ptr, void *callback,
                                         int methodId);
QtDartBindings_EXPORT void c_QWindow_Finalizer(void *cppObj);
}
