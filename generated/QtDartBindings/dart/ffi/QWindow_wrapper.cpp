#include "QWindow_wrapper.h"

#include <QDebug>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
// tag=1006
QWindow_wrapper::QWindow_wrapper() : ::QWindow() {}

// tag=1006
QWindow_wrapper::QWindow_wrapper(QWindow *parent) : ::QWindow(parent) {}
void QWindow_wrapper::activeChanged() {
  // tag=1000

  // tag=1004
  ::QWindow::activeChanged();
}
void QWindow_wrapper::alert(int msec) {
  // tag=1000

  // tag=1004
  ::QWindow::alert(msec);
}
QSize QWindow_wrapper::baseSize() const {
  // tag=1000

  // tag=1004
  return ::QWindow::baseSize();
}
bool QWindow_wrapper::close() {
  // tag=1000

  // tag=1004
  return ::QWindow::close();
}
void QWindow_wrapper::create() {
  // tag=1000

  // tag=1004
  ::QWindow::create();
}
void QWindow_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QWindow::customEvent(event);
  }
}
// tag=1009
void QWindow_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QWindow::customEvent(event);
}
void QWindow_wrapper::destroy() {
  // tag=1000

  // tag=1004
  ::QWindow::destroy();
}
qreal QWindow_wrapper::devicePixelRatio() const {
  // tag=1000

  // tag=1004
  return ::QWindow::devicePixelRatio();
}
bool QWindow_wrapper::event(QEvent *arg__1) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QWindow::event(arg__1);
  }
}
// tag=1009
bool QWindow_wrapper::event_nocallback(QEvent *arg__1) {
  // tag=1003
  return ::QWindow::event(arg__1);
}
bool QWindow_wrapper::eventFilter(QObject *watched, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    // tag=1002
    return ::QWindow::eventFilter(watched, event);
  }
}
// tag=1009
bool QWindow_wrapper::eventFilter_nocallback(QObject *watched, QEvent *event) {
  // tag=1003
  return ::QWindow::eventFilter(watched, event);
}
QString QWindow_wrapper::filePath() const {
  // tag=1000

  // tag=1004
  return ::QWindow::filePath();
}
QObject *QWindow_wrapper::focusObject() const {
  // tag=1000
  if (m_focusObjectCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_focusObjectCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QWindow::focusObject();
  }
}
// tag=1009
QObject *QWindow_wrapper::focusObject_nocallback() const {
  // tag=1003
  return ::QWindow::focusObject();
}
void QWindow_wrapper::focusObjectChanged(QObject *object) {
  // tag=1000

  // tag=1004
  ::QWindow::focusObjectChanged(object);
}
QRect QWindow_wrapper::frameGeometry() const {
  // tag=1000

  // tag=1004
  return ::QWindow::frameGeometry();
}
QPoint QWindow_wrapper::framePosition() const {
  // tag=1000

  // tag=1004
  return ::QWindow::framePosition();
}
QRect QWindow_wrapper::geometry() const {
  // tag=1000

  // tag=1004
  return ::QWindow::geometry();
}
int QWindow_wrapper::height() const {
  // tag=1000

  // tag=1004
  return ::QWindow::height();
}
void QWindow_wrapper::heightChanged(int arg) {
  // tag=1000

  // tag=1004
  ::QWindow::heightChanged(arg);
}
void QWindow_wrapper::hide() {
  // tag=1000

  // tag=1004
  ::QWindow::hide();
}
QIcon QWindow_wrapper::icon() const {
  // tag=1000

  // tag=1004
  return ::QWindow::icon();
}
bool QWindow_wrapper::isActive() const {
  // tag=1000

  // tag=1004
  return ::QWindow::isActive();
}
bool QWindow_wrapper::isAncestorOf(const QWindow *child) const {
  // tag=1000

  // tag=1004
  return ::QWindow::isAncestorOf(child);
}
bool QWindow_wrapper::isExposed() const {
  // tag=1000

  // tag=1004
  return ::QWindow::isExposed();
}
bool QWindow_wrapper::isModal() const {
  // tag=1000

  // tag=1004
  return ::QWindow::isModal();
}
bool QWindow_wrapper::isTopLevel() const {
  // tag=1000

  // tag=1004
  return ::QWindow::isTopLevel();
}
bool QWindow_wrapper::isVisible() const {
  // tag=1000

  // tag=1004
  return ::QWindow::isVisible();
}
void QWindow_wrapper::lower() {
  // tag=1000

  // tag=1004
  ::QWindow::lower();
}
QPoint QWindow_wrapper::mapFromGlobal(const QPoint &pos) const {
  // tag=1000

  // tag=1004
  return ::QWindow::mapFromGlobal(pos);
}
QPointF QWindow_wrapper::mapFromGlobal(const QPointF &pos) const {
  // tag=1000

  // tag=1004
  return ::QWindow::mapFromGlobal(pos);
}
QPoint QWindow_wrapper::mapToGlobal(const QPoint &pos) const {
  // tag=1000

  // tag=1004
  return ::QWindow::mapToGlobal(pos);
}
QPointF QWindow_wrapper::mapToGlobal(const QPointF &pos) const {
  // tag=1000

  // tag=1004
  return ::QWindow::mapToGlobal(pos);
}
QRegion QWindow_wrapper::mask() const {
  // tag=1000

  // tag=1004
  return ::QWindow::mask();
}
int QWindow_wrapper::maximumHeight() const {
  // tag=1000

  // tag=1004
  return ::QWindow::maximumHeight();
}
void QWindow_wrapper::maximumHeightChanged(int arg) {
  // tag=1000

  // tag=1004
  ::QWindow::maximumHeightChanged(arg);
}
QSize QWindow_wrapper::maximumSize() const {
  // tag=1000

  // tag=1004
  return ::QWindow::maximumSize();
}
int QWindow_wrapper::maximumWidth() const {
  // tag=1000

  // tag=1004
  return ::QWindow::maximumWidth();
}
void QWindow_wrapper::maximumWidthChanged(int arg) {
  // tag=1000

  // tag=1004
  ::QWindow::maximumWidthChanged(arg);
}
int QWindow_wrapper::minimumHeight() const {
  // tag=1000

  // tag=1004
  return ::QWindow::minimumHeight();
}
void QWindow_wrapper::minimumHeightChanged(int arg) {
  // tag=1000

  // tag=1004
  ::QWindow::minimumHeightChanged(arg);
}
QSize QWindow_wrapper::minimumSize() const {
  // tag=1000

  // tag=1004
  return ::QWindow::minimumSize();
}
int QWindow_wrapper::minimumWidth() const {
  // tag=1000

  // tag=1004
  return ::QWindow::minimumWidth();
}
void QWindow_wrapper::minimumWidthChanged(int arg) {
  // tag=1000

  // tag=1004
  ::QWindow::minimumWidthChanged(arg);
}
void QWindow_wrapper::mouseDoubleClickEvent(QMouseEvent *arg__1) {
  // tag=1000
  if (m_mouseDoubleClickEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QWindow::mouseDoubleClickEvent(arg__1);
  }
}
// tag=1009
void QWindow_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *arg__1) {
  // tag=1003
  ::QWindow::mouseDoubleClickEvent(arg__1);
}
void QWindow_wrapper::mouseMoveEvent(QMouseEvent *arg__1) {
  // tag=1000
  if (m_mouseMoveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QWindow::mouseMoveEvent(arg__1);
  }
}
// tag=1009
void QWindow_wrapper::mouseMoveEvent_nocallback(QMouseEvent *arg__1) {
  // tag=1003
  ::QWindow::mouseMoveEvent(arg__1);
}
void QWindow_wrapper::mousePressEvent(QMouseEvent *arg__1) {
  // tag=1000
  if (m_mousePressEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QWindow::mousePressEvent(arg__1);
  }
}
// tag=1009
void QWindow_wrapper::mousePressEvent_nocallback(QMouseEvent *arg__1) {
  // tag=1003
  ::QWindow::mousePressEvent(arg__1);
}
void QWindow_wrapper::mouseReleaseEvent(QMouseEvent *arg__1) {
  // tag=1000
  if (m_mouseReleaseEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QWindow::mouseReleaseEvent(arg__1);
  }
}
// tag=1009
void QWindow_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *arg__1) {
  // tag=1003
  ::QWindow::mouseReleaseEvent(arg__1);
}
qreal QWindow_wrapper::opacity() const {
  // tag=1000

  // tag=1004
  return ::QWindow::opacity();
}
void QWindow_wrapper::opacityChanged(qreal opacity) {
  // tag=1000

  // tag=1004
  ::QWindow::opacityChanged(opacity);
}
void QWindow_wrapper::paintEvent(QPaintEvent *arg__1) {
  // tag=1000
  if (m_paintEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QWindow::paintEvent(arg__1);
  }
}
// tag=1009
void QWindow_wrapper::paintEvent_nocallback(QPaintEvent *arg__1) {
  // tag=1003
  ::QWindow::paintEvent(arg__1);
}
QWindow *QWindow_wrapper::parent() const {
  // tag=1000

  // tag=1004
  return ::QWindow::parent();
}
QPoint QWindow_wrapper::position() const {
  // tag=1000

  // tag=1004
  return ::QWindow::position();
}
void QWindow_wrapper::raise() {
  // tag=1000

  // tag=1004
  ::QWindow::raise();
}
void QWindow_wrapper::requestActivate() {
  // tag=1000

  // tag=1004
  ::QWindow::requestActivate();
}
void QWindow_wrapper::requestUpdate() {
  // tag=1000

  // tag=1004
  ::QWindow::requestUpdate();
}
void QWindow_wrapper::resize(const QSize &newSize) {
  // tag=1000

  // tag=1004
  ::QWindow::resize(newSize);
}
void QWindow_wrapper::resize(int w, int h) {
  // tag=1000

  // tag=1004
  ::QWindow::resize(w, h);
}
void QWindow_wrapper::setBaseSize(const QSize &size) {
  // tag=1000

  // tag=1004
  ::QWindow::setBaseSize(size);
}
void QWindow_wrapper::setFilePath(const QString &filePath) {
  // tag=1000

  // tag=1004
  ::QWindow::setFilePath(filePath);
}
void QWindow_wrapper::setFramePosition(const QPoint &point) {
  // tag=1000

  // tag=1004
  ::QWindow::setFramePosition(point);
}
void QWindow_wrapper::setGeometry(const QRect &rect) {
  // tag=1000

  // tag=1004
  ::QWindow::setGeometry(rect);
}
void QWindow_wrapper::setGeometry(int posx, int posy, int w, int h) {
  // tag=1000

  // tag=1004
  ::QWindow::setGeometry(posx, posy, w, h);
}
void QWindow_wrapper::setHeight(int arg) {
  // tag=1000

  // tag=1004
  ::QWindow::setHeight(arg);
}
void QWindow_wrapper::setIcon(const QIcon &icon) {
  // tag=1000

  // tag=1004
  ::QWindow::setIcon(icon);
}
bool QWindow_wrapper::setKeyboardGrabEnabled(bool grab) {
  // tag=1000

  // tag=1004
  return ::QWindow::setKeyboardGrabEnabled(grab);
}
void QWindow_wrapper::setMask(const QRegion &region) {
  // tag=1000

  // tag=1004
  ::QWindow::setMask(region);
}
void QWindow_wrapper::setMaximumHeight(int h) {
  // tag=1000

  // tag=1004
  ::QWindow::setMaximumHeight(h);
}
void QWindow_wrapper::setMaximumSize(const QSize &size) {
  // tag=1000

  // tag=1004
  ::QWindow::setMaximumSize(size);
}
void QWindow_wrapper::setMaximumWidth(int w) {
  // tag=1000

  // tag=1004
  ::QWindow::setMaximumWidth(w);
}
void QWindow_wrapper::setMinimumHeight(int h) {
  // tag=1000

  // tag=1004
  ::QWindow::setMinimumHeight(h);
}
void QWindow_wrapper::setMinimumSize(const QSize &size) {
  // tag=1000

  // tag=1004
  ::QWindow::setMinimumSize(size);
}
void QWindow_wrapper::setMinimumWidth(int w) {
  // tag=1000

  // tag=1004
  ::QWindow::setMinimumWidth(w);
}
bool QWindow_wrapper::setMouseGrabEnabled(bool grab) {
  // tag=1000

  // tag=1004
  return ::QWindow::setMouseGrabEnabled(grab);
}
void QWindow_wrapper::setOpacity(qreal level) {
  // tag=1000

  // tag=1004
  ::QWindow::setOpacity(level);
}
void QWindow_wrapper::setPosition(const QPoint &pt) {
  // tag=1000

  // tag=1004
  ::QWindow::setPosition(pt);
}
void QWindow_wrapper::setPosition(int posx, int posy) {
  // tag=1000

  // tag=1004
  ::QWindow::setPosition(posx, posy);
}
void QWindow_wrapper::setSizeIncrement(const QSize &size) {
  // tag=1000

  // tag=1004
  ::QWindow::setSizeIncrement(size);
}
void QWindow_wrapper::setTitle(const QString &arg__1) {
  // tag=1000

  // tag=1004
  ::QWindow::setTitle(arg__1);
}
void QWindow_wrapper::setTransientParent(QWindow *parent) {
  // tag=1000

  // tag=1004
  ::QWindow::setTransientParent(parent);
}
void QWindow_wrapper::setVisible(bool visible) {
  // tag=1000

  // tag=1004
  ::QWindow::setVisible(visible);
}
void QWindow_wrapper::setWidth(int arg) {
  // tag=1000

  // tag=1004
  ::QWindow::setWidth(arg);
}
void QWindow_wrapper::setX(int arg) {
  // tag=1000

  // tag=1004
  ::QWindow::setX(arg);
}
void QWindow_wrapper::setY(int arg) {
  // tag=1000

  // tag=1004
  ::QWindow::setY(arg);
}
void QWindow_wrapper::show() {
  // tag=1000

  // tag=1004
  ::QWindow::show();
}
void QWindow_wrapper::showFullScreen() {
  // tag=1000

  // tag=1004
  ::QWindow::showFullScreen();
}
void QWindow_wrapper::showMaximized() {
  // tag=1000

  // tag=1004
  ::QWindow::showMaximized();
}
void QWindow_wrapper::showMinimized() {
  // tag=1000

  // tag=1004
  ::QWindow::showMinimized();
}
void QWindow_wrapper::showNormal() {
  // tag=1000

  // tag=1004
  ::QWindow::showNormal();
}
QSize QWindow_wrapper::size() const {
  // tag=1000
  if (m_sizeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_sizeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QWindow::size();
  }
}
// tag=1009
QSize QWindow_wrapper::size_nocallback() const {
  // tag=1003
  return ::QWindow::size();
}
QSize QWindow_wrapper::sizeIncrement() const {
  // tag=1000

  // tag=1004
  return ::QWindow::sizeIncrement();
}
bool QWindow_wrapper::startSystemMove() {
  // tag=1000

  // tag=1004
  return ::QWindow::startSystemMove();
}
QString QWindow_wrapper::title() const {
  // tag=1000

  // tag=1004
  return ::QWindow::title();
}
QString QWindow_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QWindow::tr(s, c, n);
}
QWindow *QWindow_wrapper::transientParent() const {
  // tag=1000

  // tag=1004
  return ::QWindow::transientParent();
}
void QWindow_wrapper::transientParentChanged(QWindow *transientParent) {
  // tag=1000

  // tag=1004
  ::QWindow::transientParentChanged(transientParent);
}
void QWindow_wrapper::unsetCursor() {
  // tag=1000

  // tag=1004
  ::QWindow::unsetCursor();
}
void QWindow_wrapper::visibleChanged(bool arg) {
  // tag=1000

  // tag=1004
  ::QWindow::visibleChanged(arg);
}
int QWindow_wrapper::width() const {
  // tag=1000

  // tag=1004
  return ::QWindow::width();
}
void QWindow_wrapper::widthChanged(int arg) {
  // tag=1000

  // tag=1004
  ::QWindow::widthChanged(arg);
}
void QWindow_wrapper::windowTitleChanged(const QString &title) {
  // tag=1000

  // tag=1004
  ::QWindow::windowTitleChanged(title);
}
int QWindow_wrapper::x() const {
  // tag=1000

  // tag=1004
  return ::QWindow::x();
}
void QWindow_wrapper::xChanged(int arg) {
  // tag=1000

  // tag=1004
  ::QWindow::xChanged(arg);
}
int QWindow_wrapper::y() const {
  // tag=1000

  // tag=1004
  return ::QWindow::y();
}
void QWindow_wrapper::yChanged(int arg) {
  // tag=1000

  // tag=1004
  ::QWindow::yChanged(arg);
}

// tag=1005
QWindow_wrapper::~QWindow_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QWindow *fromPtr(void *ptr) { return reinterpret_cast<QWindow *>(ptr); }
// tag=1014
static QtDartBindings_wrappersNS::QWindow_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QWindow_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QWindow_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QWindow_wrapper *>(cppObj);
}
void *c_QWindow__constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QWindow_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QWindow__constructor_QWindow(void *parent_) {
  auto parent = reinterpret_cast<QWindow *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QWindow_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// activeChanged()
void c_QWindow__activeChanged(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->activeChanged();
}

// tag=1079
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

// tag=1050
// alert(int msec)
void c_QWindow__alert_int(void *thisObj, int msec) {
  // tag=1010
  fromPtr(thisObj)->alert(msec);
}

// tag=1050
// baseSize() const
void *c_QWindow__baseSize(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->baseSize()};
}

// tag=1050
// close()
bool c_QWindow__close(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->close();
}

// tag=1050
// create()
void c_QWindow__create(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->create();
}

// tag=1050
// customEvent(QEvent * event)
void c_QWindow__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// destroy()
void c_QWindow__destroy(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->destroy();
}

// tag=1079
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

// tag=1050
// devicePixelRatio() const
qreal c_QWindow__devicePixelRatio(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->devicePixelRatio();
}

// tag=1050
// event(QEvent * arg__1)
bool c_QWindow__event_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->event_nocallback(arg__1);
}

// tag=1050
// eventFilter(QObject * watched, QEvent * event)
bool c_QWindow__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                           void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QWindow_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->eventFilter_nocallback(watched, event);
        } else {
          return targetPtr->eventFilter(watched, event);
        }
      }();
}

// tag=1050
// filePath() const
void *c_QWindow__filePath(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->filePath()};
}

// tag=1050
// focusObject() const
void *c_QWindow__focusObject(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QWindow_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->focusObject_nocallback();
        } else {
          return targetPtr->focusObject();
        }
      }();
}

// tag=1050
// focusObjectChanged(QObject * object)
void c_QWindow__focusObjectChanged_QObject(void *thisObj, void *object_) {
  auto object = reinterpret_cast<QObject *>(object_);
  // tag=1010
  fromPtr(thisObj)->focusObjectChanged(object);
}

// tag=1079
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

// tag=1050
// frameGeometry() const
void *c_QWindow__frameGeometry(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->frameGeometry()};
}

// tag=1050
// framePosition() const
void *c_QWindow__framePosition(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPoint>{fromPtr(thisObj)->framePosition()};
}

// tag=1050
// geometry() const
void *c_QWindow__geometry(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->geometry()};
}

// tag=1050
// height() const
int c_QWindow__height(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->height();
}

// tag=1050
// heightChanged(int arg)
void c_QWindow__heightChanged_int(void *thisObj, int arg) {
  // tag=1010
  fromPtr(thisObj)->heightChanged(arg);
}

// tag=1079
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

// tag=1050
// hide()
void c_QWindow__hide(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->hide();
}

// tag=1050
// icon() const
void *c_QWindow__icon(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QIcon>{fromPtr(thisObj)->icon()};
}

// tag=1050
// isActive() const
bool c_QWindow__isActive(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isActive();
}

// tag=1050
// isAncestorOf(const QWindow * child) const
bool c_QWindow__isAncestorOf_QWindow(void *thisObj, void *child_) {
  auto child = reinterpret_cast<QWindow *>(child_);
  return
      // tag=1010
      fromPtr(thisObj)->isAncestorOf(child);
}

// tag=1050
// isExposed() const
bool c_QWindow__isExposed(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isExposed();
}

// tag=1050
// isModal() const
bool c_QWindow__isModal(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isModal();
}

// tag=1050
// isTopLevel() const
bool c_QWindow__isTopLevel(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isTopLevel();
}

// tag=1050
// isVisible() const
bool c_QWindow__isVisible(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isVisible();
}

// tag=1050
// lower()
void c_QWindow__lower(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->lower();
}

// tag=1050
// mapFromGlobal(const QPoint & pos) const
void *c_QWindow__mapFromGlobal_QPoint(void *thisObj, void *pos_) {
  auto &pos = *reinterpret_cast<QPoint *>(pos_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPoint>{fromPtr(thisObj)->mapFromGlobal(pos)};
}

// tag=1050
// mapFromGlobal(const QPointF & pos) const
void *c_QWindow__mapFromGlobal_QPointF(void *thisObj, void *pos_) {
  auto &pos = *reinterpret_cast<QPointF *>(pos_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPointF>{
          fromPtr(thisObj)->mapFromGlobal(pos)};
}

// tag=1050
// mapToGlobal(const QPoint & pos) const
void *c_QWindow__mapToGlobal_QPoint(void *thisObj, void *pos_) {
  auto &pos = *reinterpret_cast<QPoint *>(pos_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPoint>{fromPtr(thisObj)->mapToGlobal(pos)};
}

// tag=1050
// mapToGlobal(const QPointF & pos) const
void *c_QWindow__mapToGlobal_QPointF(void *thisObj, void *pos_) {
  auto &pos = *reinterpret_cast<QPointF *>(pos_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPointF>{fromPtr(thisObj)->mapToGlobal(pos)};
}

// tag=1050
// mask() const
void *c_QWindow__mask(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRegion>{fromPtr(thisObj)->mask()};
}

// tag=1050
// maximumHeight() const
int c_QWindow__maximumHeight(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->maximumHeight();
}

// tag=1050
// maximumHeightChanged(int arg)
void c_QWindow__maximumHeightChanged_int(void *thisObj, int arg) {
  // tag=1010
  fromPtr(thisObj)->maximumHeightChanged(arg);
}

// tag=1079
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

// tag=1050
// maximumSize() const
void *c_QWindow__maximumSize(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->maximumSize()};
}

// tag=1050
// maximumWidth() const
int c_QWindow__maximumWidth(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->maximumWidth();
}

// tag=1050
// maximumWidthChanged(int arg)
void c_QWindow__maximumWidthChanged_int(void *thisObj, int arg) {
  // tag=1010
  fromPtr(thisObj)->maximumWidthChanged(arg);
}

// tag=1079
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

// tag=1050
// minimumHeight() const
int c_QWindow__minimumHeight(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->minimumHeight();
}

// tag=1050
// minimumHeightChanged(int arg)
void c_QWindow__minimumHeightChanged_int(void *thisObj, int arg) {
  // tag=1010
  fromPtr(thisObj)->minimumHeightChanged(arg);
}

// tag=1079
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

// tag=1050
// minimumSize() const
void *c_QWindow__minimumSize(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->minimumSize()};
}

// tag=1050
// minimumWidth() const
int c_QWindow__minimumWidth(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->minimumWidth();
}

// tag=1050
// minimumWidthChanged(int arg)
void c_QWindow__minimumWidthChanged_int(void *thisObj, int arg) {
  // tag=1010
  fromPtr(thisObj)->minimumWidthChanged(arg);
}

// tag=1079
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

// tag=1050
// mouseDoubleClickEvent(QMouseEvent * arg__1)
void c_QWindow__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                  void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(arg__1);
}

// tag=1050
// mouseMoveEvent(QMouseEvent * arg__1)
void c_QWindow__mouseMoveEvent_QMouseEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(arg__1);
}

// tag=1050
// mousePressEvent(QMouseEvent * arg__1)
void c_QWindow__mousePressEvent_QMouseEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(arg__1);
}

// tag=1050
// mouseReleaseEvent(QMouseEvent * arg__1)
void c_QWindow__mouseReleaseEvent_QMouseEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(arg__1);
}

// tag=1050
// opacity() const
qreal c_QWindow__opacity(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->opacity();
}

// tag=1050
// opacityChanged(qreal opacity)
void c_QWindow__opacityChanged_qreal(void *thisObj, qreal opacity) {
  // tag=1010
  fromPtr(thisObj)->opacityChanged(opacity);
}

// tag=1079
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

// tag=1050
// paintEvent(QPaintEvent * arg__1)
void c_QWindow__paintEvent_QPaintEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QPaintEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->paintEvent_nocallback(arg__1);
}

// tag=1050
// parent() const
void *c_QWindow__parent(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->parent();
}

// tag=1050
// position() const
void *c_QWindow__position(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPoint>{fromPtr(thisObj)->position()};
}

// tag=1050
// raise()
void c_QWindow__raise(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->raise();
}

// tag=1050
// requestActivate()
void c_QWindow__requestActivate(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->requestActivate();
}

// tag=1050
// requestUpdate()
void c_QWindow__requestUpdate(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->requestUpdate();
}

// tag=1050
// resize(const QSize & newSize)
void c_QWindow__resize_QSize(void *thisObj, void *newSize_) {
  auto &newSize = *reinterpret_cast<QSize *>(newSize_);
  // tag=1010
  fromPtr(thisObj)->resize(newSize);
}

// tag=1050
// resize(int w, int h)
void c_QWindow__resize_int_int(void *thisObj, int w, int h) {
  // tag=1010
  fromPtr(thisObj)->resize(w, h);
}

// tag=1050
// setBaseSize(const QSize & size)
void c_QWindow__setBaseSize_QSize(void *thisObj, void *size_) {
  auto &size = *reinterpret_cast<QSize *>(size_);
  // tag=1010
  fromPtr(thisObj)->setBaseSize(size);
}

// tag=1050
// setFilePath(const QString & filePath)
void c_QWindow__setFilePath_QString(void *thisObj, const char *filePath_) {
  const auto filePath = QString::fromUtf8(filePath_);
  // tag=1010
  fromPtr(thisObj)->setFilePath(filePath);
}

// tag=1050
// setFramePosition(const QPoint & point)
void c_QWindow__setFramePosition_QPoint(void *thisObj, void *point_) {
  auto &point = *reinterpret_cast<QPoint *>(point_);
  // tag=1010
  fromPtr(thisObj)->setFramePosition(point);
}

// tag=1050
// setGeometry(const QRect & rect)
void c_QWindow__setGeometry_QRect(void *thisObj, void *rect_) {
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  // tag=1010
  fromPtr(thisObj)->setGeometry(rect);
}

// tag=1050
// setGeometry(int posx, int posy, int w, int h)
void c_QWindow__setGeometry_int_int_int_int(void *thisObj, int posx, int posy,
                                            int w, int h) {
  // tag=1010
  fromPtr(thisObj)->setGeometry(posx, posy, w, h);
}

// tag=1050
// setHeight(int arg)
void c_QWindow__setHeight_int(void *thisObj, int arg) {
  // tag=1010
  fromPtr(thisObj)->setHeight(arg);
}

// tag=1050
// setIcon(const QIcon & icon)
void c_QWindow__setIcon_QIcon(void *thisObj, void *icon_) {
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  // tag=1010
  fromPtr(thisObj)->setIcon(icon);
}

// tag=1050
// setKeyboardGrabEnabled(bool grab)
bool c_QWindow__setKeyboardGrabEnabled_bool(void *thisObj, bool grab) {
  return
      // tag=1010
      fromPtr(thisObj)->setKeyboardGrabEnabled(grab);
}

// tag=1050
// setMask(const QRegion & region)
void c_QWindow__setMask_QRegion(void *thisObj, void *region_) {
  auto &region = *reinterpret_cast<QRegion *>(region_);
  // tag=1010
  fromPtr(thisObj)->setMask(region);
}

// tag=1050
// setMaximumHeight(int h)
void c_QWindow__setMaximumHeight_int(void *thisObj, int h) {
  // tag=1010
  fromPtr(thisObj)->setMaximumHeight(h);
}

// tag=1050
// setMaximumSize(const QSize & size)
void c_QWindow__setMaximumSize_QSize(void *thisObj, void *size_) {
  auto &size = *reinterpret_cast<QSize *>(size_);
  // tag=1010
  fromPtr(thisObj)->setMaximumSize(size);
}

// tag=1050
// setMaximumWidth(int w)
void c_QWindow__setMaximumWidth_int(void *thisObj, int w) {
  // tag=1010
  fromPtr(thisObj)->setMaximumWidth(w);
}

// tag=1050
// setMinimumHeight(int h)
void c_QWindow__setMinimumHeight_int(void *thisObj, int h) {
  // tag=1010
  fromPtr(thisObj)->setMinimumHeight(h);
}

// tag=1050
// setMinimumSize(const QSize & size)
void c_QWindow__setMinimumSize_QSize(void *thisObj, void *size_) {
  auto &size = *reinterpret_cast<QSize *>(size_);
  // tag=1010
  fromPtr(thisObj)->setMinimumSize(size);
}

// tag=1050
// setMinimumWidth(int w)
void c_QWindow__setMinimumWidth_int(void *thisObj, int w) {
  // tag=1010
  fromPtr(thisObj)->setMinimumWidth(w);
}

// tag=1050
// setMouseGrabEnabled(bool grab)
bool c_QWindow__setMouseGrabEnabled_bool(void *thisObj, bool grab) {
  return
      // tag=1010
      fromPtr(thisObj)->setMouseGrabEnabled(grab);
}

// tag=1050
// setOpacity(qreal level)
void c_QWindow__setOpacity_qreal(void *thisObj, qreal level) {
  // tag=1010
  fromPtr(thisObj)->setOpacity(level);
}

// tag=1050
// setPosition(const QPoint & pt)
void c_QWindow__setPosition_QPoint(void *thisObj, void *pt_) {
  auto &pt = *reinterpret_cast<QPoint *>(pt_);
  // tag=1010
  fromPtr(thisObj)->setPosition(pt);
}

// tag=1050
// setPosition(int posx, int posy)
void c_QWindow__setPosition_int_int(void *thisObj, int posx, int posy) {
  // tag=1010
  fromPtr(thisObj)->setPosition(posx, posy);
}

// tag=1050
// setSizeIncrement(const QSize & size)
void c_QWindow__setSizeIncrement_QSize(void *thisObj, void *size_) {
  auto &size = *reinterpret_cast<QSize *>(size_);
  // tag=1010
  fromPtr(thisObj)->setSizeIncrement(size);
}

// tag=1050
// setTitle(const QString & arg__1)
void c_QWindow__setTitle_QString(void *thisObj, const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setTitle(arg__1);
}

// tag=1050
// setTransientParent(QWindow * parent)
void c_QWindow__setTransientParent_QWindow(void *thisObj, void *parent_) {
  auto parent = reinterpret_cast<QWindow *>(parent_);
  // tag=1010
  fromPtr(thisObj)->setTransientParent(parent);
}

// tag=1050
// setVisible(bool visible)
void c_QWindow__setVisible_bool(void *thisObj, bool visible) {
  // tag=1010
  fromPtr(thisObj)->setVisible(visible);
}

// tag=1050
// setWidth(int arg)
void c_QWindow__setWidth_int(void *thisObj, int arg) {
  // tag=1010
  fromPtr(thisObj)->setWidth(arg);
}

// tag=1050
// setX(int arg)
void c_QWindow__setX_int(void *thisObj, int arg) {
  // tag=1010
  fromPtr(thisObj)->setX(arg);
}

// tag=1050
// setY(int arg)
void c_QWindow__setY_int(void *thisObj, int arg) {
  // tag=1010
  fromPtr(thisObj)->setY(arg);
}

// tag=1050
// show()
void c_QWindow__show(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->show();
}

// tag=1050
// showFullScreen()
void c_QWindow__showFullScreen(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->showFullScreen();
}

// tag=1050
// showMaximized()
void c_QWindow__showMaximized(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->showMaximized();
}

// tag=1050
// showMinimized()
void c_QWindow__showMinimized(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->showMinimized();
}

// tag=1050
// showNormal()
void c_QWindow__showNormal(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->showNormal();
}

// tag=1050
// size() const
void *c_QWindow__size(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QWindow_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->size_nocallback();
        } else {
          return targetPtr->size();
        }
      }()};
}

// tag=1050
// sizeIncrement() const
void *c_QWindow__sizeIncrement(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->sizeIncrement()};
}

// tag=1050
// startSystemMove()
bool c_QWindow__startSystemMove(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->startSystemMove();
}

// tag=1050
// title() const
void *c_QWindow__title(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->title()};
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QWindow__tr_char_char_int(const char *s, const char *c, int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QWindow_wrapper::tr(s, c, n)};
}

// tag=1050
// transientParent() const
void *c_QWindow__transientParent(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->transientParent();
}

// tag=1050
// transientParentChanged(QWindow * transientParent)
void c_QWindow__transientParentChanged_QWindow(void *thisObj,
                                               void *transientParent_) {
  auto transientParent = reinterpret_cast<QWindow *>(transientParent_);
  // tag=1010
  fromPtr(thisObj)->transientParentChanged(transientParent);
}

// tag=1079
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

// tag=1050
// unsetCursor()
void c_QWindow__unsetCursor(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->unsetCursor();
}

// tag=1050
// visibleChanged(bool arg)
void c_QWindow__visibleChanged_bool(void *thisObj, bool arg) {
  // tag=1010
  fromPtr(thisObj)->visibleChanged(arg);
}

// tag=1079
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

// tag=1050
// width() const
int c_QWindow__width(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->width();
}

// tag=1050
// widthChanged(int arg)
void c_QWindow__widthChanged_int(void *thisObj, int arg) {
  // tag=1010
  fromPtr(thisObj)->widthChanged(arg);
}

// tag=1079
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

// tag=1050
// windowTitleChanged(const QString & title)
void c_QWindow__windowTitleChanged_QString(void *thisObj, const char *title_) {
  const auto title = QString::fromUtf8(title_);
  // tag=1010
  fromPtr(thisObj)->windowTitleChanged(title);
}

// tag=1079
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

// tag=1050
// x() const
int c_QWindow__x(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->x();
}

// tag=1050
// xChanged(int arg)
void c_QWindow__xChanged_int(void *thisObj, int arg) {
  // tag=1010
  fromPtr(thisObj)->xChanged(arg);
}

// tag=1079
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

// tag=1050
// y() const
int c_QWindow__y(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->y();
}

// tag=1050
// yChanged(int arg)
void c_QWindow__yChanged_int(void *thisObj, int arg) {
  // tag=1010
  fromPtr(thisObj)->yChanged(arg);
}

// tag=1079
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
void c_QWindow__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QWindow__registerVirtualMethodCallback(void *ptr, void *callback,
                                              int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 944:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWindow_wrapper::Callback_customEvent>(
        callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWindow_wrapper::Callback_event>(callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWindow_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 993:
    wrapper->m_focusObjectCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWindow_wrapper::Callback_focusObject>(
        callback);
    break;
  case 1029:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QWindow_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1030:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWindow_wrapper::Callback_mouseMoveEvent>(
        callback);
    break;
  case 1031:
    wrapper->m_mousePressEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWindow_wrapper::Callback_mousePressEvent>(
        callback);
    break;
  case 1032:
    wrapper->m_mouseReleaseEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWindow_wrapper::Callback_mouseReleaseEvent>(
        callback);
    break;
  case 1036:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWindow_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 1086:
    wrapper->m_sizeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWindow_wrapper::Callback_size>(callback);
    break;
  }
}
}
