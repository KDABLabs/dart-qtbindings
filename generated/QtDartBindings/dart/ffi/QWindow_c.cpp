/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QWindow_c.h"

#include <iostream>

#include <cassert>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
QWindow_wrapper::QWindow_wrapper() : ::QWindow() {}
QWindow_wrapper::QWindow_wrapper(QWindow *parent) : ::QWindow(parent) {}
void QWindow_wrapper::activeChanged() { ::QWindow::activeChanged(); }
void QWindow_wrapper::alert(int msec) { ::QWindow::alert(msec); }
QSize QWindow_wrapper::baseSize() const { return ::QWindow::baseSize(); }
bool QWindow_wrapper::close() { return ::QWindow::close(); }
void QWindow_wrapper::create() { ::QWindow::create(); }
void QWindow_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QWindow::customEvent(event);
  }
}
void QWindow_wrapper::customEvent_nocallback(QEvent *event) {
  ::QWindow::customEvent(event);
}
void QWindow_wrapper::destroy() { ::QWindow::destroy(); }
qreal QWindow_wrapper::devicePixelRatio() const {
  return ::QWindow::devicePixelRatio();
}
bool QWindow_wrapper::event(QEvent *arg__1) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QWindow::event(arg__1);
  }
}
bool QWindow_wrapper::event_nocallback(QEvent *arg__1) {
  return ::QWindow::event(arg__1);
}
bool QWindow_wrapper::eventFilter(QObject *watched, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QWindow::eventFilter(watched, event);
  }
}
bool QWindow_wrapper::eventFilter_nocallback(QObject *watched, QEvent *event) {
  return ::QWindow::eventFilter(watched, event);
}
QString QWindow_wrapper::filePath() const { return ::QWindow::filePath(); }
QObject *QWindow_wrapper::focusObject() const {
  if (m_focusObjectCallback) {
    const void *thisPtr = this;
    return m_focusObjectCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QWindow::focusObject();
  }
}
QObject *QWindow_wrapper::focusObject_nocallback() const {
  return ::QWindow::focusObject();
}
void QWindow_wrapper::focusObjectChanged(QObject *object) {
  ::QWindow::focusObjectChanged(object);
}
QRect QWindow_wrapper::frameGeometry() const {
  return ::QWindow::frameGeometry();
}
QPoint QWindow_wrapper::framePosition() const {
  return ::QWindow::framePosition();
}
QRect QWindow_wrapper::geometry() const { return ::QWindow::geometry(); }
int QWindow_wrapper::height() const { return ::QWindow::height(); }
void QWindow_wrapper::heightChanged(int arg) { ::QWindow::heightChanged(arg); }
void QWindow_wrapper::hide() { ::QWindow::hide(); }
QIcon QWindow_wrapper::icon() const { return ::QWindow::icon(); }
bool QWindow_wrapper::isActive() const { return ::QWindow::isActive(); }
bool QWindow_wrapper::isAncestorOf(const QWindow *child) const {
  return ::QWindow::isAncestorOf(child);
}
bool QWindow_wrapper::isExposed() const { return ::QWindow::isExposed(); }
bool QWindow_wrapper::isModal() const { return ::QWindow::isModal(); }
bool QWindow_wrapper::isTopLevel() const { return ::QWindow::isTopLevel(); }
bool QWindow_wrapper::isVisible() const { return ::QWindow::isVisible(); }
void QWindow_wrapper::lower() { ::QWindow::lower(); }
QPoint QWindow_wrapper::mapFromGlobal(const QPoint &pos) const {
  return ::QWindow::mapFromGlobal(pos);
}
QPointF QWindow_wrapper::mapFromGlobal(const QPointF &pos) const {
  return ::QWindow::mapFromGlobal(pos);
}
QPoint QWindow_wrapper::mapToGlobal(const QPoint &pos) const {
  return ::QWindow::mapToGlobal(pos);
}
QPointF QWindow_wrapper::mapToGlobal(const QPointF &pos) const {
  return ::QWindow::mapToGlobal(pos);
}
QRegion QWindow_wrapper::mask() const { return ::QWindow::mask(); }
int QWindow_wrapper::maximumHeight() const {
  return ::QWindow::maximumHeight();
}
void QWindow_wrapper::maximumHeightChanged(int arg) {
  ::QWindow::maximumHeightChanged(arg);
}
QSize QWindow_wrapper::maximumSize() const { return ::QWindow::maximumSize(); }
int QWindow_wrapper::maximumWidth() const { return ::QWindow::maximumWidth(); }
void QWindow_wrapper::maximumWidthChanged(int arg) {
  ::QWindow::maximumWidthChanged(arg);
}
int QWindow_wrapper::minimumHeight() const {
  return ::QWindow::minimumHeight();
}
void QWindow_wrapper::minimumHeightChanged(int arg) {
  ::QWindow::minimumHeightChanged(arg);
}
QSize QWindow_wrapper::minimumSize() const { return ::QWindow::minimumSize(); }
int QWindow_wrapper::minimumWidth() const { return ::QWindow::minimumWidth(); }
void QWindow_wrapper::minimumWidthChanged(int arg) {
  ::QWindow::minimumWidthChanged(arg);
}
void QWindow_wrapper::mouseDoubleClickEvent(QMouseEvent *arg__1) {
  if (m_mouseDoubleClickEventCallback) {
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QWindow::mouseDoubleClickEvent(arg__1);
  }
}
void QWindow_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *arg__1) {
  ::QWindow::mouseDoubleClickEvent(arg__1);
}
void QWindow_wrapper::mouseMoveEvent(QMouseEvent *arg__1) {
  if (m_mouseMoveEventCallback) {
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QWindow::mouseMoveEvent(arg__1);
  }
}
void QWindow_wrapper::mouseMoveEvent_nocallback(QMouseEvent *arg__1) {
  ::QWindow::mouseMoveEvent(arg__1);
}
void QWindow_wrapper::mousePressEvent(QMouseEvent *arg__1) {
  if (m_mousePressEventCallback) {
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QWindow::mousePressEvent(arg__1);
  }
}
void QWindow_wrapper::mousePressEvent_nocallback(QMouseEvent *arg__1) {
  ::QWindow::mousePressEvent(arg__1);
}
void QWindow_wrapper::mouseReleaseEvent(QMouseEvent *arg__1) {
  if (m_mouseReleaseEventCallback) {
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QWindow::mouseReleaseEvent(arg__1);
  }
}
void QWindow_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *arg__1) {
  ::QWindow::mouseReleaseEvent(arg__1);
}
qreal QWindow_wrapper::opacity() const { return ::QWindow::opacity(); }
void QWindow_wrapper::opacityChanged(qreal opacity) {
  ::QWindow::opacityChanged(opacity);
}
void QWindow_wrapper::paintEvent(QPaintEvent *arg__1) {
  if (m_paintEventCallback) {
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QWindow::paintEvent(arg__1);
  }
}
void QWindow_wrapper::paintEvent_nocallback(QPaintEvent *arg__1) {
  ::QWindow::paintEvent(arg__1);
}
QWindow *QWindow_wrapper::parent() const { return ::QWindow::parent(); }
QPoint QWindow_wrapper::position() const { return ::QWindow::position(); }
void QWindow_wrapper::raise() { ::QWindow::raise(); }
void QWindow_wrapper::requestActivate() { ::QWindow::requestActivate(); }
void QWindow_wrapper::requestUpdate() { ::QWindow::requestUpdate(); }
void QWindow_wrapper::resize(const QSize &newSize) {
  ::QWindow::resize(newSize);
}
void QWindow_wrapper::resize(int w, int h) { ::QWindow::resize(w, h); }
void QWindow_wrapper::setBaseSize(const QSize &size) {
  ::QWindow::setBaseSize(size);
}
void QWindow_wrapper::setFilePath(const QString &filePath) {
  ::QWindow::setFilePath(filePath);
}
void QWindow_wrapper::setFramePosition(const QPoint &point) {
  ::QWindow::setFramePosition(point);
}
void QWindow_wrapper::setGeometry(const QRect &rect) {
  ::QWindow::setGeometry(rect);
}
void QWindow_wrapper::setGeometry(int posx, int posy, int w, int h) {
  ::QWindow::setGeometry(posx, posy, w, h);
}
void QWindow_wrapper::setHeight(int arg) { ::QWindow::setHeight(arg); }
void QWindow_wrapper::setIcon(const QIcon &icon) { ::QWindow::setIcon(icon); }
bool QWindow_wrapper::setKeyboardGrabEnabled(bool grab) {
  return ::QWindow::setKeyboardGrabEnabled(grab);
}
void QWindow_wrapper::setMask(const QRegion &region) {
  ::QWindow::setMask(region);
}
void QWindow_wrapper::setMaximumHeight(int h) {
  ::QWindow::setMaximumHeight(h);
}
void QWindow_wrapper::setMaximumSize(const QSize &size) {
  ::QWindow::setMaximumSize(size);
}
void QWindow_wrapper::setMaximumWidth(int w) { ::QWindow::setMaximumWidth(w); }
void QWindow_wrapper::setMinimumHeight(int h) {
  ::QWindow::setMinimumHeight(h);
}
void QWindow_wrapper::setMinimumSize(const QSize &size) {
  ::QWindow::setMinimumSize(size);
}
void QWindow_wrapper::setMinimumWidth(int w) { ::QWindow::setMinimumWidth(w); }
bool QWindow_wrapper::setMouseGrabEnabled(bool grab) {
  return ::QWindow::setMouseGrabEnabled(grab);
}
void QWindow_wrapper::setOpacity(qreal level) { ::QWindow::setOpacity(level); }
void QWindow_wrapper::setPosition(const QPoint &pt) {
  ::QWindow::setPosition(pt);
}
void QWindow_wrapper::setPosition(int posx, int posy) {
  ::QWindow::setPosition(posx, posy);
}
void QWindow_wrapper::setSizeIncrement(const QSize &size) {
  ::QWindow::setSizeIncrement(size);
}
void QWindow_wrapper::setTitle(const QString &arg__1) {
  ::QWindow::setTitle(arg__1);
}
void QWindow_wrapper::setTransientParent(QWindow *parent) {
  ::QWindow::setTransientParent(parent);
}
void QWindow_wrapper::setVisible(bool visible) {
  ::QWindow::setVisible(visible);
}
void QWindow_wrapper::setWidth(int arg) { ::QWindow::setWidth(arg); }
void QWindow_wrapper::setX(int arg) { ::QWindow::setX(arg); }
void QWindow_wrapper::setY(int arg) { ::QWindow::setY(arg); }
void QWindow_wrapper::show() { ::QWindow::show(); }
void QWindow_wrapper::showFullScreen() { ::QWindow::showFullScreen(); }
void QWindow_wrapper::showMaximized() { ::QWindow::showMaximized(); }
void QWindow_wrapper::showMinimized() { ::QWindow::showMinimized(); }
void QWindow_wrapper::showNormal() { ::QWindow::showNormal(); }
QSize QWindow_wrapper::size() const {
  if (m_sizeCallback) {
    const void *thisPtr = this;
    return *m_sizeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QWindow::size();
  }
}
QSize QWindow_wrapper::size_nocallback() const { return ::QWindow::size(); }
QSize QWindow_wrapper::sizeIncrement() const {
  return ::QWindow::sizeIncrement();
}
bool QWindow_wrapper::startSystemMove() { return ::QWindow::startSystemMove(); }
QString QWindow_wrapper::title() const { return ::QWindow::title(); }
QString QWindow_wrapper::tr(const char *s, const char *c, int n) {
  return ::QWindow::tr(s, c, n);
}
QWindow *QWindow_wrapper::transientParent() const {
  return ::QWindow::transientParent();
}
void QWindow_wrapper::transientParentChanged(QWindow *transientParent) {
  ::QWindow::transientParentChanged(transientParent);
}
void QWindow_wrapper::unsetCursor() { ::QWindow::unsetCursor(); }
void QWindow_wrapper::visibleChanged(bool arg) {
  ::QWindow::visibleChanged(arg);
}
int QWindow_wrapper::width() const { return ::QWindow::width(); }
void QWindow_wrapper::widthChanged(int arg) { ::QWindow::widthChanged(arg); }
void QWindow_wrapper::windowTitleChanged(const QString &title) {
  ::QWindow::windowTitleChanged(title);
}
int QWindow_wrapper::x() const { return ::QWindow::x(); }
void QWindow_wrapper::xChanged(int arg) { ::QWindow::xChanged(arg); }
int QWindow_wrapper::y() const { return ::QWindow::y(); }
void QWindow_wrapper::yChanged(int arg) { ::QWindow::yChanged(arg); }
QWindow_wrapper::~QWindow_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QWindow *fromPtr(void *ptr) { return reinterpret_cast<QWindow *>(ptr); }
static QtDartBindings_wrappersNS::QWindow_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QWindow_wrapper *>(ptr);
}
extern "C" {
void c_QWindow_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QWindow_wrapper *>(cppObj);
}
void *c_QWindow__constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QWindow_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QWindow__constructor_QWindow(void *parent_) {
  auto parent = reinterpret_cast<QWindow *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QWindow_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
// activeChanged()
void c_QWindow__activeChanged(void *thisObj) {
  fromPtr(thisObj)->activeChanged();
}
void c_QWindow__onActiveChanged(void *thisObj, void *contextQObject,
                                void *callback) {
  auto instance = reinterpret_cast<QWindow *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QWindow::activeChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// alert(int msec)
void c_QWindow__alert_int(void *thisObj, int msec) {
  fromPtr(thisObj)->alert(msec);
}
// baseSize() const
void *c_QWindow__baseSize(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->baseSize()};
  return result;
}
// close()
bool c_QWindow__close(void *thisObj) {
  const auto &result = fromPtr(thisObj)->close();
  return result;
}
// create()
void c_QWindow__create(void *thisObj) { fromPtr(thisObj)->create(); }
// customEvent(QEvent * event)
void c_QWindow__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// destroy()
void c_QWindow__destroy(void *thisObj) { fromPtr(thisObj)->destroy(); }
void c_QWindow__onDestroyed_QObject(void *thisObj, void *contextQObject,
                                    void *callback) {
  auto instance = reinterpret_cast<QWindow *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QWindow::destroyed, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// devicePixelRatio() const
qreal c_QWindow__devicePixelRatio(void *thisObj) {
  const auto &result = fromPtr(thisObj)->devicePixelRatio();
  return result;
}
// event(QEvent * arg__1)
bool c_QWindow__event_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  const auto &result = fromWrapperPtr(thisObj)->event_nocallback(arg__1);
  return result;
}
// eventFilter(QObject * watched, QEvent * event)
bool c_QWindow__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                           void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QWindow_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->eventFilter_nocallback(watched, event);
    } else {
      return targetPtr->eventFilter(watched, event);
    }
  }();
  return result;
}
// filePath() const
void *c_QWindow__filePath(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->filePath()};
  return result;
}
// focusObject() const
void *c_QWindow__focusObject(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QWindow_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->focusObject_nocallback();
    } else {
      return targetPtr->focusObject();
    }
  }();
  return result;
}
// focusObjectChanged(QObject * object)
void c_QWindow__focusObjectChanged_QObject(void *thisObj, void *object_) {
  auto object = reinterpret_cast<QObject *>(object_);
  fromPtr(thisObj)->focusObjectChanged(object);
}
void c_QWindow__onFocusObjectChanged_QObject(void *thisObj,
                                             void *contextQObject,
                                             void *callback) {
  auto instance = reinterpret_cast<QWindow *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QWindow::focusObjectChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// frameGeometry() const
void *c_QWindow__frameGeometry(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->frameGeometry()};
  return result;
}
// framePosition() const
void *c_QWindow__framePosition(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QPoint>{fromPtr(thisObj)->framePosition()};
  return result;
}
// geometry() const
void *c_QWindow__geometry(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->geometry()};
  return result;
}
// height() const
int c_QWindow__height(void *thisObj) {
  const auto &result = fromPtr(thisObj)->height();
  return result;
}
// heightChanged(int arg)
void c_QWindow__heightChanged_int(void *thisObj, int arg) {
  fromPtr(thisObj)->heightChanged(arg);
}
void c_QWindow__onHeightChanged_int(void *thisObj, void *contextQObject,
                                    void *callback) {
  auto instance = reinterpret_cast<QWindow *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QWindow::heightChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// hide()
void c_QWindow__hide(void *thisObj) { fromPtr(thisObj)->hide(); }
// icon() const
void *c_QWindow__icon(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QIcon>{fromPtr(thisObj)->icon()};
  return result;
}
// isActive() const
bool c_QWindow__isActive(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isActive();
  return result;
}
// isAncestorOf(const QWindow * child) const
bool c_QWindow__isAncestorOf_QWindow(void *thisObj, void *child_) {
  auto child = reinterpret_cast<QWindow *>(child_);
  const auto &result = fromPtr(thisObj)->isAncestorOf(child);
  return result;
}
// isExposed() const
bool c_QWindow__isExposed(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isExposed();
  return result;
}
// isModal() const
bool c_QWindow__isModal(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isModal();
  return result;
}
// isTopLevel() const
bool c_QWindow__isTopLevel(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isTopLevel();
  return result;
}
// isVisible() const
bool c_QWindow__isVisible(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isVisible();
  return result;
}
// lower()
void c_QWindow__lower(void *thisObj) { fromPtr(thisObj)->lower(); }
// mapFromGlobal(const QPoint & pos) const
void *c_QWindow__mapFromGlobal_QPoint(void *thisObj, void *pos_) {
  assert(pos_);
  auto &pos = *reinterpret_cast<QPoint *>(pos_);
  const auto &result =
      new Dartagnan::ValueWrapper<QPoint>{fromPtr(thisObj)->mapFromGlobal(pos)};
  return result;
}
// mapFromGlobal(const QPointF & pos) const
void *c_QWindow__mapFromGlobal_QPointF(void *thisObj, void *pos_) {
  assert(pos_);
  auto &pos = *reinterpret_cast<QPointF *>(pos_);
  const auto &result = new Dartagnan::ValueWrapper<QPointF>{
      fromPtr(thisObj)->mapFromGlobal(pos)};
  return result;
}
// mapToGlobal(const QPoint & pos) const
void *c_QWindow__mapToGlobal_QPoint(void *thisObj, void *pos_) {
  assert(pos_);
  auto &pos = *reinterpret_cast<QPoint *>(pos_);
  const auto &result =
      new Dartagnan::ValueWrapper<QPoint>{fromPtr(thisObj)->mapToGlobal(pos)};
  return result;
}
// mapToGlobal(const QPointF & pos) const
void *c_QWindow__mapToGlobal_QPointF(void *thisObj, void *pos_) {
  assert(pos_);
  auto &pos = *reinterpret_cast<QPointF *>(pos_);
  const auto &result =
      new Dartagnan::ValueWrapper<QPointF>{fromPtr(thisObj)->mapToGlobal(pos)};
  return result;
}
// mask() const
void *c_QWindow__mask(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QRegion>{fromPtr(thisObj)->mask()};
  return result;
}
// maximumHeight() const
int c_QWindow__maximumHeight(void *thisObj) {
  const auto &result = fromPtr(thisObj)->maximumHeight();
  return result;
}
// maximumHeightChanged(int arg)
void c_QWindow__maximumHeightChanged_int(void *thisObj, int arg) {
  fromPtr(thisObj)->maximumHeightChanged(arg);
}
void c_QWindow__onMaximumHeightChanged_int(void *thisObj, void *contextQObject,
                                           void *callback) {
  auto instance = reinterpret_cast<QWindow *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QWindow::maximumHeightChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// maximumSize() const
void *c_QWindow__maximumSize(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->maximumSize()};
  return result;
}
// maximumWidth() const
int c_QWindow__maximumWidth(void *thisObj) {
  const auto &result = fromPtr(thisObj)->maximumWidth();
  return result;
}
// maximumWidthChanged(int arg)
void c_QWindow__maximumWidthChanged_int(void *thisObj, int arg) {
  fromPtr(thisObj)->maximumWidthChanged(arg);
}
void c_QWindow__onMaximumWidthChanged_int(void *thisObj, void *contextQObject,
                                          void *callback) {
  auto instance = reinterpret_cast<QWindow *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QWindow::maximumWidthChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// minimumHeight() const
int c_QWindow__minimumHeight(void *thisObj) {
  const auto &result = fromPtr(thisObj)->minimumHeight();
  return result;
}
// minimumHeightChanged(int arg)
void c_QWindow__minimumHeightChanged_int(void *thisObj, int arg) {
  fromPtr(thisObj)->minimumHeightChanged(arg);
}
void c_QWindow__onMinimumHeightChanged_int(void *thisObj, void *contextQObject,
                                           void *callback) {
  auto instance = reinterpret_cast<QWindow *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QWindow::minimumHeightChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// minimumSize() const
void *c_QWindow__minimumSize(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->minimumSize()};
  return result;
}
// minimumWidth() const
int c_QWindow__minimumWidth(void *thisObj) {
  const auto &result = fromPtr(thisObj)->minimumWidth();
  return result;
}
// minimumWidthChanged(int arg)
void c_QWindow__minimumWidthChanged_int(void *thisObj, int arg) {
  fromPtr(thisObj)->minimumWidthChanged(arg);
}
void c_QWindow__onMinimumWidthChanged_int(void *thisObj, void *contextQObject,
                                          void *callback) {
  auto instance = reinterpret_cast<QWindow *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QWindow::minimumWidthChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// mouseDoubleClickEvent(QMouseEvent * arg__1)
void c_QWindow__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                  void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(arg__1);
}
// mouseMoveEvent(QMouseEvent * arg__1)
void c_QWindow__mouseMoveEvent_QMouseEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(arg__1);
}
// mousePressEvent(QMouseEvent * arg__1)
void c_QWindow__mousePressEvent_QMouseEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(arg__1);
}
// mouseReleaseEvent(QMouseEvent * arg__1)
void c_QWindow__mouseReleaseEvent_QMouseEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(arg__1);
}
// opacity() const
qreal c_QWindow__opacity(void *thisObj) {
  const auto &result = fromPtr(thisObj)->opacity();
  return result;
}
// opacityChanged(qreal opacity)
void c_QWindow__opacityChanged_qreal(void *thisObj, qreal opacity) {
  fromPtr(thisObj)->opacityChanged(opacity);
}
void c_QWindow__onOpacityChanged_qreal(void *thisObj, void *contextQObject,
                                       void *callback) {
  auto instance = reinterpret_cast<QWindow *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QWindow::opacityChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// paintEvent(QPaintEvent * arg__1)
void c_QWindow__paintEvent_QPaintEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QPaintEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->paintEvent_nocallback(arg__1);
}
// parent() const
void *c_QWindow__parent(void *thisObj) {
  const auto &result = fromPtr(thisObj)->parent();
  return result;
}
// position() const
void *c_QWindow__position(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QPoint>{fromPtr(thisObj)->position()};
  return result;
}
// raise()
void c_QWindow__raise(void *thisObj) { fromPtr(thisObj)->raise(); }
// requestActivate()
void c_QWindow__requestActivate(void *thisObj) {
  fromPtr(thisObj)->requestActivate();
}
// requestUpdate()
void c_QWindow__requestUpdate(void *thisObj) {
  fromPtr(thisObj)->requestUpdate();
}
// resize(const QSize & newSize)
void c_QWindow__resize_QSize(void *thisObj, void *newSize_) {
  assert(newSize_);
  auto &newSize = *reinterpret_cast<QSize *>(newSize_);
  fromPtr(thisObj)->resize(newSize);
}
// resize(int w, int h)
void c_QWindow__resize_int_int(void *thisObj, int w, int h) {
  fromPtr(thisObj)->resize(w, h);
}
// setBaseSize(const QSize & size)
void c_QWindow__setBaseSize_QSize(void *thisObj, void *size_) {
  assert(size_);
  auto &size = *reinterpret_cast<QSize *>(size_);
  fromPtr(thisObj)->setBaseSize(size);
}
// setFilePath(const QString & filePath)
void c_QWindow__setFilePath_QString(void *thisObj, const char *filePath_) {
  const auto filePath = QString::fromUtf8(filePath_);
  fromPtr(thisObj)->setFilePath(filePath);
  free((char *)filePath_);
}
// setFramePosition(const QPoint & point)
void c_QWindow__setFramePosition_QPoint(void *thisObj, void *point_) {
  assert(point_);
  auto &point = *reinterpret_cast<QPoint *>(point_);
  fromPtr(thisObj)->setFramePosition(point);
}
// setGeometry(const QRect & rect)
void c_QWindow__setGeometry_QRect(void *thisObj, void *rect_) {
  assert(rect_);
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  fromPtr(thisObj)->setGeometry(rect);
}
// setGeometry(int posx, int posy, int w, int h)
void c_QWindow__setGeometry_int_int_int_int(void *thisObj, int posx, int posy,
                                            int w, int h) {
  fromPtr(thisObj)->setGeometry(posx, posy, w, h);
}
// setHeight(int arg)
void c_QWindow__setHeight_int(void *thisObj, int arg) {
  fromPtr(thisObj)->setHeight(arg);
}
// setIcon(const QIcon & icon)
void c_QWindow__setIcon_QIcon(void *thisObj, void *icon_) {
  assert(icon_);
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  fromPtr(thisObj)->setIcon(icon);
}
// setKeyboardGrabEnabled(bool grab)
bool c_QWindow__setKeyboardGrabEnabled_bool(void *thisObj, bool grab) {
  const auto &result = fromPtr(thisObj)->setKeyboardGrabEnabled(grab);
  return result;
}
// setMask(const QRegion & region)
void c_QWindow__setMask_QRegion(void *thisObj, void *region_) {
  assert(region_);
  auto &region = *reinterpret_cast<QRegion *>(region_);
  fromPtr(thisObj)->setMask(region);
}
// setMaximumHeight(int h)
void c_QWindow__setMaximumHeight_int(void *thisObj, int h) {
  fromPtr(thisObj)->setMaximumHeight(h);
}
// setMaximumSize(const QSize & size)
void c_QWindow__setMaximumSize_QSize(void *thisObj, void *size_) {
  assert(size_);
  auto &size = *reinterpret_cast<QSize *>(size_);
  fromPtr(thisObj)->setMaximumSize(size);
}
// setMaximumWidth(int w)
void c_QWindow__setMaximumWidth_int(void *thisObj, int w) {
  fromPtr(thisObj)->setMaximumWidth(w);
}
// setMinimumHeight(int h)
void c_QWindow__setMinimumHeight_int(void *thisObj, int h) {
  fromPtr(thisObj)->setMinimumHeight(h);
}
// setMinimumSize(const QSize & size)
void c_QWindow__setMinimumSize_QSize(void *thisObj, void *size_) {
  assert(size_);
  auto &size = *reinterpret_cast<QSize *>(size_);
  fromPtr(thisObj)->setMinimumSize(size);
}
// setMinimumWidth(int w)
void c_QWindow__setMinimumWidth_int(void *thisObj, int w) {
  fromPtr(thisObj)->setMinimumWidth(w);
}
// setMouseGrabEnabled(bool grab)
bool c_QWindow__setMouseGrabEnabled_bool(void *thisObj, bool grab) {
  const auto &result = fromPtr(thisObj)->setMouseGrabEnabled(grab);
  return result;
}
// setOpacity(qreal level)
void c_QWindow__setOpacity_qreal(void *thisObj, qreal level) {
  fromPtr(thisObj)->setOpacity(level);
}
// setPosition(const QPoint & pt)
void c_QWindow__setPosition_QPoint(void *thisObj, void *pt_) {
  assert(pt_);
  auto &pt = *reinterpret_cast<QPoint *>(pt_);
  fromPtr(thisObj)->setPosition(pt);
}
// setPosition(int posx, int posy)
void c_QWindow__setPosition_int_int(void *thisObj, int posx, int posy) {
  fromPtr(thisObj)->setPosition(posx, posy);
}
// setSizeIncrement(const QSize & size)
void c_QWindow__setSizeIncrement_QSize(void *thisObj, void *size_) {
  assert(size_);
  auto &size = *reinterpret_cast<QSize *>(size_);
  fromPtr(thisObj)->setSizeIncrement(size);
}
// setTitle(const QString & arg__1)
void c_QWindow__setTitle_QString(void *thisObj, const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  fromPtr(thisObj)->setTitle(arg__1);
  free((char *)arg__1_);
}
// setTransientParent(QWindow * parent)
void c_QWindow__setTransientParent_QWindow(void *thisObj, void *parent_) {
  auto parent = reinterpret_cast<QWindow *>(parent_);
  fromPtr(thisObj)->setTransientParent(parent);
}
// setVisible(bool visible)
void c_QWindow__setVisible_bool(void *thisObj, bool visible) {
  fromPtr(thisObj)->setVisible(visible);
}
// setWidth(int arg)
void c_QWindow__setWidth_int(void *thisObj, int arg) {
  fromPtr(thisObj)->setWidth(arg);
}
// setX(int arg)
void c_QWindow__setX_int(void *thisObj, int arg) {
  fromPtr(thisObj)->setX(arg);
}
// setY(int arg)
void c_QWindow__setY_int(void *thisObj, int arg) {
  fromPtr(thisObj)->setY(arg);
}
// show()
void c_QWindow__show(void *thisObj) { fromPtr(thisObj)->show(); }
// showFullScreen()
void c_QWindow__showFullScreen(void *thisObj) {
  fromPtr(thisObj)->showFullScreen();
}
// showMaximized()
void c_QWindow__showMaximized(void *thisObj) {
  fromPtr(thisObj)->showMaximized();
}
// showMinimized()
void c_QWindow__showMinimized(void *thisObj) {
  fromPtr(thisObj)->showMinimized();
}
// showNormal()
void c_QWindow__showNormal(void *thisObj) { fromPtr(thisObj)->showNormal(); }
// size() const
void *c_QWindow__size(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QWindow_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->size_nocallback();
    } else {
      return targetPtr->size();
    }
  }()};
  return result;
}
// sizeIncrement() const
void *c_QWindow__sizeIncrement(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->sizeIncrement()};
  return result;
}
// startSystemMove()
bool c_QWindow__startSystemMove(void *thisObj) {
  const auto &result = fromPtr(thisObj)->startSystemMove();
  return result;
}
// title() const
void *c_QWindow__title(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->title()};
  return result;
}
// tr(const char * s, const char * c, int n)
void *c_static_QWindow__tr_char_char_int(const char *s, const char *c, int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QWindow_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
// transientParent() const
void *c_QWindow__transientParent(void *thisObj) {
  const auto &result = fromPtr(thisObj)->transientParent();
  return result;
}
// transientParentChanged(QWindow * transientParent)
void c_QWindow__transientParentChanged_QWindow(void *thisObj,
                                               void *transientParent_) {
  auto transientParent = reinterpret_cast<QWindow *>(transientParent_);
  fromPtr(thisObj)->transientParentChanged(transientParent);
}
void c_QWindow__onTransientParentChanged_QWindow(void *thisObj,
                                                 void *contextQObject,
                                                 void *callback) {
  auto instance = reinterpret_cast<QWindow *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QWindow::transientParentChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// unsetCursor()
void c_QWindow__unsetCursor(void *thisObj) { fromPtr(thisObj)->unsetCursor(); }
// visibleChanged(bool arg)
void c_QWindow__visibleChanged_bool(void *thisObj, bool arg) {
  fromPtr(thisObj)->visibleChanged(arg);
}
void c_QWindow__onVisibleChanged_bool(void *thisObj, void *contextQObject,
                                      void *callback) {
  auto instance = reinterpret_cast<QWindow *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QWindow::visibleChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// width() const
int c_QWindow__width(void *thisObj) {
  const auto &result = fromPtr(thisObj)->width();
  return result;
}
// widthChanged(int arg)
void c_QWindow__widthChanged_int(void *thisObj, int arg) {
  fromPtr(thisObj)->widthChanged(arg);
}
void c_QWindow__onWidthChanged_int(void *thisObj, void *contextQObject,
                                   void *callback) {
  auto instance = reinterpret_cast<QWindow *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QWindow::widthChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// windowTitleChanged(const QString & title)
void c_QWindow__windowTitleChanged_QString(void *thisObj, const char *title_) {
  const auto title = QString::fromUtf8(title_);
  fromPtr(thisObj)->windowTitleChanged(title);
  free((char *)title_);
}
void c_QWindow__onWindowTitleChanged_QString(void *thisObj,
                                             void *contextQObject,
                                             void *callback) {
  auto instance = reinterpret_cast<QWindow *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QWindow::windowTitleChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// x() const
int c_QWindow__x(void *thisObj) {
  const auto &result = fromPtr(thisObj)->x();
  return result;
}
// xChanged(int arg)
void c_QWindow__xChanged_int(void *thisObj, int arg) {
  fromPtr(thisObj)->xChanged(arg);
}
void c_QWindow__onXChanged_int(void *thisObj, void *contextQObject,
                               void *callback) {
  auto instance = reinterpret_cast<QWindow *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QWindow::xChanged, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// y() const
int c_QWindow__y(void *thisObj) {
  const auto &result = fromPtr(thisObj)->y();
  return result;
}
// yChanged(int arg)
void c_QWindow__yChanged_int(void *thisObj, int arg) {
  fromPtr(thisObj)->yChanged(arg);
}
void c_QWindow__onYChanged_int(void *thisObj, void *contextQObject,
                               void *callback) {
  auto instance = reinterpret_cast<QWindow *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QWindow::yChanged, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QWindow__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QWindow__registerVirtualMethodCallback(void *ptr, void *callback,
                                              int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWindow_wrapper::Callback_customEvent>(
        callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWindow_wrapper::Callback_event>(callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWindow_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 997:
    wrapper->m_focusObjectCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWindow_wrapper::Callback_focusObject>(
        callback);
    break;
  case 1034:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QWindow_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1035:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWindow_wrapper::Callback_mouseMoveEvent>(
        callback);
    break;
  case 1036:
    wrapper->m_mousePressEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWindow_wrapper::Callback_mousePressEvent>(
        callback);
    break;
  case 1037:
    wrapper->m_mouseReleaseEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWindow_wrapper::Callback_mouseReleaseEvent>(
        callback);
    break;
  case 1041:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWindow_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 1090:
    wrapper->m_sizeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWindow_wrapper::Callback_size>(callback);
    break;
  }
}
}
