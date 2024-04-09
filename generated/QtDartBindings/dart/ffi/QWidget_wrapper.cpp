#include "QWidget_wrapper.h"

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
QWidget_wrapper::QWidget_wrapper(QWidget *parent) : ::QWidget(parent) {}
bool QWidget_wrapper::acceptDrops() const {
  // tag=1000

  // tag=1004
  return ::QWidget::acceptDrops();
}
QString QWidget_wrapper::accessibleDescription() const {
  // tag=1000

  // tag=1004
  return ::QWidget::accessibleDescription();
}
QString QWidget_wrapper::accessibleName() const {
  // tag=1000

  // tag=1004
  return ::QWidget::accessibleName();
}
QList<QAction *> QWidget_wrapper::actions() const {
  // tag=1000

  // tag=1004
  return ::QWidget::actions();
}
void QWidget_wrapper::activateWindow() {
  // tag=1000

  // tag=1004
  ::QWidget::activateWindow();
}
void QWidget_wrapper::addAction(QAction *action) {
  // tag=1000

  // tag=1004
  ::QWidget::addAction(action);
}
QAction *QWidget_wrapper::addAction(const QIcon &icon, const QString &text) {
  // tag=1000

  // tag=1004
  return ::QWidget::addAction(icon, text);
}
QAction *QWidget_wrapper::addAction(const QIcon &icon, const QString &text,
                                    const QKeySequence &shortcut) {
  // tag=1000

  // tag=1004
  return ::QWidget::addAction(icon, text, shortcut);
}
QAction *QWidget_wrapper::addAction(const QIcon &icon, const QString &text,
                                    const QKeySequence &shortcut,
                                    const QObject *receiver,
                                    const char *member) {
  // tag=1000

  // tag=1004
  return ::QWidget::addAction(icon, text, shortcut, receiver, member);
}
QAction *QWidget_wrapper::addAction(const QIcon &icon, const QString &text,
                                    const QObject *receiver,
                                    const char *member) {
  // tag=1000

  // tag=1004
  return ::QWidget::addAction(icon, text, receiver, member);
}
QAction *QWidget_wrapper::addAction(const QString &text) {
  // tag=1000

  // tag=1004
  return ::QWidget::addAction(text);
}
QAction *QWidget_wrapper::addAction(const QString &text,
                                    const QKeySequence &shortcut) {
  // tag=1000

  // tag=1004
  return ::QWidget::addAction(text, shortcut);
}
QAction *QWidget_wrapper::addAction(const QString &text,
                                    const QKeySequence &shortcut,
                                    const QObject *receiver,
                                    const char *member) {
  // tag=1000

  // tag=1004
  return ::QWidget::addAction(text, shortcut, receiver, member);
}
QAction *QWidget_wrapper::addAction(const QString &text,
                                    const QObject *receiver,
                                    const char *member) {
  // tag=1000

  // tag=1004
  return ::QWidget::addAction(text, receiver, member);
}
void QWidget_wrapper::addActions(const QList<QAction *> &actions) {
  // tag=1000

  // tag=1004
  ::QWidget::addActions(actions);
}
void QWidget_wrapper::adjustSize() {
  // tag=1000

  // tag=1004
  ::QWidget::adjustSize();
}
bool QWidget_wrapper::autoFillBackground() const {
  // tag=1000

  // tag=1004
  return ::QWidget::autoFillBackground();
}
QPalette::ColorRole QWidget_wrapper::backgroundRole() const {
  // tag=1000

  // tag=1004
  return ::QWidget::backgroundRole();
}
QSize QWidget_wrapper::baseSize() const {
  // tag=1000

  // tag=1004
  return ::QWidget::baseSize();
}
void QWidget_wrapper::changeEvent(QEvent *arg__1) {
  // tag=1000
  if (m_changeEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QWidget::changeEvent(arg__1);
  }
}
// tag=1009
void QWidget_wrapper::changeEvent_nocallback(QEvent *arg__1) {
  // tag=1003
  ::QWidget::changeEvent(arg__1);
}
QWidget *QWidget_wrapper::childAt(const QPoint &p) const {
  // tag=1000

  // tag=1004
  return ::QWidget::childAt(p);
}
QWidget *QWidget_wrapper::childAt(int x, int y) const {
  // tag=1000

  // tag=1004
  return ::QWidget::childAt(x, y);
}
QRect QWidget_wrapper::childrenRect() const {
  // tag=1000

  // tag=1004
  return ::QWidget::childrenRect();
}
QRegion QWidget_wrapper::childrenRegion() const {
  // tag=1000

  // tag=1004
  return ::QWidget::childrenRegion();
}
void QWidget_wrapper::clearFocus() {
  // tag=1000

  // tag=1004
  ::QWidget::clearFocus();
}
void QWidget_wrapper::clearMask() {
  // tag=1000

  // tag=1004
  ::QWidget::clearMask();
}
bool QWidget_wrapper::close() {
  // tag=1000

  // tag=1004
  return ::QWidget::close();
}
QRect QWidget_wrapper::contentsRect() const {
  // tag=1000

  // tag=1004
  return ::QWidget::contentsRect();
}
void QWidget_wrapper::create() {
  // tag=1000

  // tag=1004
  ::QWidget::create();
}
void QWidget_wrapper::createWinId() {
  // tag=1000

  // tag=1004
  ::QWidget::createWinId();
}
QWidget *QWidget_wrapper::createWindowContainer(QWindow *window,
                                                QWidget *parent) {
  // tag=1000

  // tag=1004
  return ::QWidget::createWindowContainer(window, parent);
}
void QWidget_wrapper::customContextMenuRequested(const QPoint &pos) {
  // tag=1000

  // tag=1004
  ::QWidget::customContextMenuRequested(pos);
}
void QWidget_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QWidget::customEvent(event);
  }
}
// tag=1009
void QWidget_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QWidget::customEvent(event);
}
void QWidget_wrapper::destroy(bool destroyWindow, bool destroySubWindows) {
  // tag=1000

  // tag=1004
  ::QWidget::destroy(destroyWindow, destroySubWindows);
}
int QWidget_wrapper::devType() const {
  // tag=1000
  if (m_devTypeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QWidget::devType();
  }
}
// tag=1009
int QWidget_wrapper::devType_nocallback() const {
  // tag=1003
  return ::QWidget::devType();
}
void QWidget_wrapper::ensurePolished() const {
  // tag=1000

  // tag=1004
  ::QWidget::ensurePolished();
}
bool QWidget_wrapper::event(QEvent *event) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    return ::QWidget::event(event);
  }
}
// tag=1009
bool QWidget_wrapper::event_nocallback(QEvent *event) {
  // tag=1003
  return ::QWidget::event(event);
}
bool QWidget_wrapper::eventFilter(QObject *watched, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    // tag=1002
    return ::QWidget::eventFilter(watched, event);
  }
}
// tag=1009
bool QWidget_wrapper::eventFilter_nocallback(QObject *watched, QEvent *event) {
  // tag=1003
  return ::QWidget::eventFilter(watched, event);
}
bool QWidget_wrapper::focusNextChild() {
  // tag=1000

  // tag=1004
  return ::QWidget::focusNextChild();
}
bool QWidget_wrapper::focusNextPrevChild(bool next) {
  // tag=1000
  if (m_focusNextPrevChildCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    // tag=1002
    return ::QWidget::focusNextPrevChild(next);
  }
}
// tag=1009
bool QWidget_wrapper::focusNextPrevChild_nocallback(bool next) {
  // tag=1003
  return ::QWidget::focusNextPrevChild(next);
}
bool QWidget_wrapper::focusPreviousChild() {
  // tag=1000

  // tag=1004
  return ::QWidget::focusPreviousChild();
}
QWidget *QWidget_wrapper::focusProxy() const {
  // tag=1000

  // tag=1004
  return ::QWidget::focusProxy();
}
QWidget *QWidget_wrapper::focusWidget() const {
  // tag=1000

  // tag=1004
  return ::QWidget::focusWidget();
}
const QFont &QWidget_wrapper::font() const {
  // tag=1000

  // tag=1004
  return ::QWidget::font();
}
QPalette::ColorRole QWidget_wrapper::foregroundRole() const {
  // tag=1000

  // tag=1004
  return ::QWidget::foregroundRole();
}
QRect QWidget_wrapper::frameGeometry() const {
  // tag=1000

  // tag=1004
  return ::QWidget::frameGeometry();
}
QSize QWidget_wrapper::frameSize() const {
  // tag=1000

  // tag=1004
  return ::QWidget::frameSize();
}
const QRect &QWidget_wrapper::geometry() const {
  // tag=1000

  // tag=1004
  return ::QWidget::geometry();
}
QPixmap QWidget_wrapper::grab(const QRect &rectangle) {
  // tag=1000

  // tag=1004
  return ::QWidget::grab(rectangle);
}
void QWidget_wrapper::grabKeyboard() {
  // tag=1000

  // tag=1004
  ::QWidget::grabKeyboard();
}
void QWidget_wrapper::grabMouse() {
  // tag=1000

  // tag=1004
  ::QWidget::grabMouse();
}
int QWidget_wrapper::grabShortcut(const QKeySequence &key) {
  // tag=1000

  // tag=1004
  return ::QWidget::grabShortcut(key);
}
bool QWidget_wrapper::hasFocus() const {
  // tag=1000

  // tag=1004
  return ::QWidget::hasFocus();
}
bool QWidget_wrapper::hasHeightForWidth() const {
  // tag=1000
  if (m_hasHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QWidget::hasHeightForWidth();
  }
}
// tag=1009
bool QWidget_wrapper::hasHeightForWidth_nocallback() const {
  // tag=1003
  return ::QWidget::hasHeightForWidth();
}
bool QWidget_wrapper::hasMouseTracking() const {
  // tag=1000

  // tag=1004
  return ::QWidget::hasMouseTracking();
}
bool QWidget_wrapper::hasTabletTracking() const {
  // tag=1000

  // tag=1004
  return ::QWidget::hasTabletTracking();
}
int QWidget_wrapper::height() const {
  // tag=1000

  // tag=1004
  return ::QWidget::height();
}
int QWidget_wrapper::heightForWidth(int arg__1) const {
  // tag=1000
  if (m_heightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QWidget::heightForWidth(arg__1);
  }
}
// tag=1009
int QWidget_wrapper::heightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QWidget::heightForWidth(arg__1);
}
void QWidget_wrapper::hide() {
  // tag=1000

  // tag=1004
  ::QWidget::hide();
}
void QWidget_wrapper::initPainter(QPainter *painter) const {
  // tag=1000
  if (m_initPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    // tag=1002
    ::QWidget::initPainter(painter);
  }
}
// tag=1009
void QWidget_wrapper::initPainter_nocallback(QPainter *painter) const {
  // tag=1003
  ::QWidget::initPainter(painter);
}
void QWidget_wrapper::insertAction(QAction *before, QAction *action) {
  // tag=1000

  // tag=1004
  ::QWidget::insertAction(before, action);
}
void QWidget_wrapper::insertActions(QAction *before,
                                    const QList<QAction *> &actions) {
  // tag=1000

  // tag=1004
  ::QWidget::insertActions(before, actions);
}
bool QWidget_wrapper::isActiveWindow() const {
  // tag=1000

  // tag=1004
  return ::QWidget::isActiveWindow();
}
bool QWidget_wrapper::isAncestorOf(const QWidget *child) const {
  // tag=1000

  // tag=1004
  return ::QWidget::isAncestorOf(child);
}
bool QWidget_wrapper::isEnabled() const {
  // tag=1000

  // tag=1004
  return ::QWidget::isEnabled();
}
bool QWidget_wrapper::isEnabledTo(const QWidget *arg__1) const {
  // tag=1000

  // tag=1004
  return ::QWidget::isEnabledTo(arg__1);
}
bool QWidget_wrapper::isFullScreen() const {
  // tag=1000

  // tag=1004
  return ::QWidget::isFullScreen();
}
bool QWidget_wrapper::isHidden() const {
  // tag=1000

  // tag=1004
  return ::QWidget::isHidden();
}
bool QWidget_wrapper::isLeftToRight() const {
  // tag=1000

  // tag=1004
  return ::QWidget::isLeftToRight();
}
bool QWidget_wrapper::isMaximized() const {
  // tag=1000

  // tag=1004
  return ::QWidget::isMaximized();
}
bool QWidget_wrapper::isMinimized() const {
  // tag=1000

  // tag=1004
  return ::QWidget::isMinimized();
}
bool QWidget_wrapper::isModal() const {
  // tag=1000

  // tag=1004
  return ::QWidget::isModal();
}
bool QWidget_wrapper::isRightToLeft() const {
  // tag=1000

  // tag=1004
  return ::QWidget::isRightToLeft();
}
bool QWidget_wrapper::isVisible() const {
  // tag=1000

  // tag=1004
  return ::QWidget::isVisible();
}
bool QWidget_wrapper::isVisibleTo(const QWidget *arg__1) const {
  // tag=1000

  // tag=1004
  return ::QWidget::isVisibleTo(arg__1);
}
bool QWidget_wrapper::isWindow() const {
  // tag=1000

  // tag=1004
  return ::QWidget::isWindow();
}
bool QWidget_wrapper::isWindowModified() const {
  // tag=1000

  // tag=1004
  return ::QWidget::isWindowModified();
}
QWidget *QWidget_wrapper::keyboardGrabber() {
  // tag=1000

  // tag=1004
  return ::QWidget::keyboardGrabber();
}
QLayout *QWidget_wrapper::layout() const {
  // tag=1000

  // tag=1004
  return ::QWidget::layout();
}
Qt::LayoutDirection QWidget_wrapper::layoutDirection() const {
  // tag=1000

  // tag=1004
  return ::QWidget::layoutDirection();
}
void QWidget_wrapper::leaveEvent(QEvent *event) {
  // tag=1000
  if (m_leaveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QWidget::leaveEvent(event);
  }
}
// tag=1009
void QWidget_wrapper::leaveEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QWidget::leaveEvent(event);
}
void QWidget_wrapper::lower() {
  // tag=1000

  // tag=1004
  ::QWidget::lower();
}
QPoint QWidget_wrapper::mapFrom(const QWidget *arg__1,
                                const QPoint &arg__2) const {
  // tag=1000

  // tag=1004
  return ::QWidget::mapFrom(arg__1, arg__2);
}
QPointF QWidget_wrapper::mapFrom(const QWidget *arg__1,
                                 const QPointF &arg__2) const {
  // tag=1000

  // tag=1004
  return ::QWidget::mapFrom(arg__1, arg__2);
}
QPoint QWidget_wrapper::mapFromGlobal(const QPoint &arg__1) const {
  // tag=1000

  // tag=1004
  return ::QWidget::mapFromGlobal(arg__1);
}
QPointF QWidget_wrapper::mapFromGlobal(const QPointF &arg__1) const {
  // tag=1000

  // tag=1004
  return ::QWidget::mapFromGlobal(arg__1);
}
QPoint QWidget_wrapper::mapFromParent(const QPoint &arg__1) const {
  // tag=1000

  // tag=1004
  return ::QWidget::mapFromParent(arg__1);
}
QPointF QWidget_wrapper::mapFromParent(const QPointF &arg__1) const {
  // tag=1000

  // tag=1004
  return ::QWidget::mapFromParent(arg__1);
}
QPoint QWidget_wrapper::mapTo(const QWidget *arg__1,
                              const QPoint &arg__2) const {
  // tag=1000

  // tag=1004
  return ::QWidget::mapTo(arg__1, arg__2);
}
QPointF QWidget_wrapper::mapTo(const QWidget *arg__1,
                               const QPointF &arg__2) const {
  // tag=1000

  // tag=1004
  return ::QWidget::mapTo(arg__1, arg__2);
}
QPoint QWidget_wrapper::mapToGlobal(const QPoint &arg__1) const {
  // tag=1000

  // tag=1004
  return ::QWidget::mapToGlobal(arg__1);
}
QPointF QWidget_wrapper::mapToGlobal(const QPointF &arg__1) const {
  // tag=1000

  // tag=1004
  return ::QWidget::mapToGlobal(arg__1);
}
QPoint QWidget_wrapper::mapToParent(const QPoint &arg__1) const {
  // tag=1000

  // tag=1004
  return ::QWidget::mapToParent(arg__1);
}
QPointF QWidget_wrapper::mapToParent(const QPointF &arg__1) const {
  // tag=1000

  // tag=1004
  return ::QWidget::mapToParent(arg__1);
}
QRegion QWidget_wrapper::mask() const {
  // tag=1000

  // tag=1004
  return ::QWidget::mask();
}
int QWidget_wrapper::maximumHeight() const {
  // tag=1000

  // tag=1004
  return ::QWidget::maximumHeight();
}
QSize QWidget_wrapper::maximumSize() const {
  // tag=1000

  // tag=1004
  return ::QWidget::maximumSize();
}
int QWidget_wrapper::maximumWidth() const {
  // tag=1000

  // tag=1004
  return ::QWidget::maximumWidth();
}
int QWidget_wrapper::minimumHeight() const {
  // tag=1000

  // tag=1004
  return ::QWidget::minimumHeight();
}
QSize QWidget_wrapper::minimumSize() const {
  // tag=1000

  // tag=1004
  return ::QWidget::minimumSize();
}
QSize QWidget_wrapper::minimumSizeHint() const {
  // tag=1000
  if (m_minimumSizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QWidget::minimumSizeHint();
  }
}
// tag=1009
QSize QWidget_wrapper::minimumSizeHint_nocallback() const {
  // tag=1003
  return ::QWidget::minimumSizeHint();
}
int QWidget_wrapper::minimumWidth() const {
  // tag=1000

  // tag=1004
  return ::QWidget::minimumWidth();
}
void QWidget_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseDoubleClickEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QWidget::mouseDoubleClickEvent(event);
  }
}
// tag=1009
void QWidget_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QWidget::mouseDoubleClickEvent(event);
}
QWidget *QWidget_wrapper::mouseGrabber() {
  // tag=1000

  // tag=1004
  return ::QWidget::mouseGrabber();
}
void QWidget_wrapper::mouseMoveEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseMoveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QWidget::mouseMoveEvent(event);
  }
}
// tag=1009
void QWidget_wrapper::mouseMoveEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QWidget::mouseMoveEvent(event);
}
void QWidget_wrapper::mousePressEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mousePressEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QWidget::mousePressEvent(event);
  }
}
// tag=1009
void QWidget_wrapper::mousePressEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QWidget::mousePressEvent(event);
}
void QWidget_wrapper::mouseReleaseEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseReleaseEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QWidget::mouseReleaseEvent(event);
  }
}
// tag=1009
void QWidget_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QWidget::mouseReleaseEvent(event);
}
void QWidget_wrapper::move(const QPoint &arg__1) {
  // tag=1000

  // tag=1004
  ::QWidget::move(arg__1);
}
void QWidget_wrapper::move(int x, int y) {
  // tag=1000

  // tag=1004
  ::QWidget::move(x, y);
}
QWidget *QWidget_wrapper::nativeParentWidget() const {
  // tag=1000

  // tag=1004
  return ::QWidget::nativeParentWidget();
}
QWidget *QWidget_wrapper::nextInFocusChain() const {
  // tag=1000

  // tag=1004
  return ::QWidget::nextInFocusChain();
}
QRect QWidget_wrapper::normalGeometry() const {
  // tag=1000

  // tag=1004
  return ::QWidget::normalGeometry();
}
void QWidget_wrapper::paintEvent(QPaintEvent *event) {
  // tag=1000
  if (m_paintEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QWidget::paintEvent(event);
  }
}
// tag=1009
void QWidget_wrapper::paintEvent_nocallback(QPaintEvent *event) {
  // tag=1003
  ::QWidget::paintEvent(event);
}
const QPalette &QWidget_wrapper::palette() const {
  // tag=1000

  // tag=1004
  return ::QWidget::palette();
}
QWidget *QWidget_wrapper::parentWidget() const {
  // tag=1000

  // tag=1004
  return ::QWidget::parentWidget();
}
QPoint QWidget_wrapper::pos() const {
  // tag=1000

  // tag=1004
  return ::QWidget::pos();
}
QWidget *QWidget_wrapper::previousInFocusChain() const {
  // tag=1000

  // tag=1004
  return ::QWidget::previousInFocusChain();
}
void QWidget_wrapper::raise() {
  // tag=1000

  // tag=1004
  ::QWidget::raise();
}
QRect QWidget_wrapper::rect() const {
  // tag=1000

  // tag=1004
  return ::QWidget::rect();
}
void QWidget_wrapper::releaseKeyboard() {
  // tag=1000

  // tag=1004
  ::QWidget::releaseKeyboard();
}
void QWidget_wrapper::releaseMouse() {
  // tag=1000

  // tag=1004
  ::QWidget::releaseMouse();
}
void QWidget_wrapper::releaseShortcut(int id) {
  // tag=1000

  // tag=1004
  ::QWidget::releaseShortcut(id);
}
void QWidget_wrapper::removeAction(QAction *action) {
  // tag=1000

  // tag=1004
  ::QWidget::removeAction(action);
}
void QWidget_wrapper::render(QPainter *painter, const QPoint &targetOffset,
                             const QRegion &sourceRegion) {
  // tag=1000

  // tag=1004
  ::QWidget::render(painter, targetOffset, sourceRegion);
}
void QWidget_wrapper::repaint() {
  // tag=1000

  // tag=1004
  ::QWidget::repaint();
}
void QWidget_wrapper::repaint(const QRect &arg__1) {
  // tag=1000

  // tag=1004
  ::QWidget::repaint(arg__1);
}
void QWidget_wrapper::repaint(const QRegion &arg__1) {
  // tag=1000

  // tag=1004
  ::QWidget::repaint(arg__1);
}
void QWidget_wrapper::repaint(int x, int y, int w, int h) {
  // tag=1000

  // tag=1004
  ::QWidget::repaint(x, y, w, h);
}
void QWidget_wrapper::resize(const QSize &arg__1) {
  // tag=1000

  // tag=1004
  ::QWidget::resize(arg__1);
}
void QWidget_wrapper::resize(int w, int h) {
  // tag=1000

  // tag=1004
  ::QWidget::resize(w, h);
}
bool QWidget_wrapper::restoreGeometry(const QByteArray &geometry) {
  // tag=1000

  // tag=1004
  return ::QWidget::restoreGeometry(geometry);
}
QByteArray QWidget_wrapper::saveGeometry() const {
  // tag=1000

  // tag=1004
  return ::QWidget::saveGeometry();
}
void QWidget_wrapper::scroll(int dx, int dy) {
  // tag=1000

  // tag=1004
  ::QWidget::scroll(dx, dy);
}
void QWidget_wrapper::scroll(int dx, int dy, const QRect &arg__3) {
  // tag=1000

  // tag=1004
  ::QWidget::scroll(dx, dy, arg__3);
}
void QWidget_wrapper::setAcceptDrops(bool on) {
  // tag=1000

  // tag=1004
  ::QWidget::setAcceptDrops(on);
}
void QWidget_wrapper::setAccessibleDescription(const QString &description) {
  // tag=1000

  // tag=1004
  ::QWidget::setAccessibleDescription(description);
}
void QWidget_wrapper::setAccessibleName(const QString &name) {
  // tag=1000

  // tag=1004
  ::QWidget::setAccessibleName(name);
}
void QWidget_wrapper::setAutoFillBackground(bool enabled) {
  // tag=1000

  // tag=1004
  ::QWidget::setAutoFillBackground(enabled);
}
void QWidget_wrapper::setBackgroundRole(QPalette::ColorRole arg__1) {
  // tag=1000

  // tag=1004
  ::QWidget::setBackgroundRole(arg__1);
}
void QWidget_wrapper::setBaseSize(const QSize &arg__1) {
  // tag=1000

  // tag=1004
  ::QWidget::setBaseSize(arg__1);
}
void QWidget_wrapper::setBaseSize(int basew, int baseh) {
  // tag=1000

  // tag=1004
  ::QWidget::setBaseSize(basew, baseh);
}
void QWidget_wrapper::setContentsMargins(int left, int top, int right,
                                         int bottom) {
  // tag=1000

  // tag=1004
  ::QWidget::setContentsMargins(left, top, right, bottom);
}
void QWidget_wrapper::setDisabled(bool arg__1) {
  // tag=1000

  // tag=1004
  ::QWidget::setDisabled(arg__1);
}
void QWidget_wrapper::setEnabled(bool arg__1) {
  // tag=1000

  // tag=1004
  ::QWidget::setEnabled(arg__1);
}
void QWidget_wrapper::setFixedHeight(int h) {
  // tag=1000

  // tag=1004
  ::QWidget::setFixedHeight(h);
}
void QWidget_wrapper::setFixedSize(const QSize &arg__1) {
  // tag=1000

  // tag=1004
  ::QWidget::setFixedSize(arg__1);
}
void QWidget_wrapper::setFixedSize(int w, int h) {
  // tag=1000

  // tag=1004
  ::QWidget::setFixedSize(w, h);
}
void QWidget_wrapper::setFixedWidth(int w) {
  // tag=1000

  // tag=1004
  ::QWidget::setFixedWidth(w);
}
void QWidget_wrapper::setFocus() {
  // tag=1000

  // tag=1004
  ::QWidget::setFocus();
}
void QWidget_wrapper::setFocusProxy(QWidget *arg__1) {
  // tag=1000

  // tag=1004
  ::QWidget::setFocusProxy(arg__1);
}
void QWidget_wrapper::setFont(const QFont &arg__1) {
  // tag=1000

  // tag=1004
  ::QWidget::setFont(arg__1);
}
void QWidget_wrapper::setForegroundRole(QPalette::ColorRole arg__1) {
  // tag=1000

  // tag=1004
  ::QWidget::setForegroundRole(arg__1);
}
void QWidget_wrapper::setGeometry(const QRect &arg__1) {
  // tag=1000

  // tag=1004
  ::QWidget::setGeometry(arg__1);
}
void QWidget_wrapper::setGeometry(int x, int y, int w, int h) {
  // tag=1000

  // tag=1004
  ::QWidget::setGeometry(x, y, w, h);
}
void QWidget_wrapper::setHidden(bool hidden) {
  // tag=1000

  // tag=1004
  ::QWidget::setHidden(hidden);
}
void QWidget_wrapper::setLayout(QLayout *arg__1) {
  // tag=1000

  // tag=1004
  ::QWidget::setLayout(arg__1);
}
void QWidget_wrapper::setLayoutDirection(Qt::LayoutDirection direction) {
  // tag=1000

  // tag=1004
  ::QWidget::setLayoutDirection(direction);
}
void QWidget_wrapper::setMask(const QRegion &arg__1) {
  // tag=1000

  // tag=1004
  ::QWidget::setMask(arg__1);
}
void QWidget_wrapper::setMaximumHeight(int maxh) {
  // tag=1000

  // tag=1004
  ::QWidget::setMaximumHeight(maxh);
}
void QWidget_wrapper::setMaximumSize(const QSize &arg__1) {
  // tag=1000

  // tag=1004
  ::QWidget::setMaximumSize(arg__1);
}
void QWidget_wrapper::setMaximumSize(int maxw, int maxh) {
  // tag=1000

  // tag=1004
  ::QWidget::setMaximumSize(maxw, maxh);
}
void QWidget_wrapper::setMaximumWidth(int maxw) {
  // tag=1000

  // tag=1004
  ::QWidget::setMaximumWidth(maxw);
}
void QWidget_wrapper::setMinimumHeight(int minh) {
  // tag=1000

  // tag=1004
  ::QWidget::setMinimumHeight(minh);
}
void QWidget_wrapper::setMinimumSize(const QSize &arg__1) {
  // tag=1000

  // tag=1004
  ::QWidget::setMinimumSize(arg__1);
}
void QWidget_wrapper::setMinimumSize(int minw, int minh) {
  // tag=1000

  // tag=1004
  ::QWidget::setMinimumSize(minw, minh);
}
void QWidget_wrapper::setMinimumWidth(int minw) {
  // tag=1000

  // tag=1004
  ::QWidget::setMinimumWidth(minw);
}
void QWidget_wrapper::setMouseTracking(bool enable) {
  // tag=1000

  // tag=1004
  ::QWidget::setMouseTracking(enable);
}
void QWidget_wrapper::setPalette(const QPalette &arg__1) {
  // tag=1000

  // tag=1004
  ::QWidget::setPalette(arg__1);
}
void QWidget_wrapper::setShortcutAutoRepeat(int id, bool enable) {
  // tag=1000

  // tag=1004
  ::QWidget::setShortcutAutoRepeat(id, enable);
}
void QWidget_wrapper::setShortcutEnabled(int id, bool enable) {
  // tag=1000

  // tag=1004
  ::QWidget::setShortcutEnabled(id, enable);
}
void QWidget_wrapper::setSizeIncrement(const QSize &arg__1) {
  // tag=1000

  // tag=1004
  ::QWidget::setSizeIncrement(arg__1);
}
void QWidget_wrapper::setSizeIncrement(int w, int h) {
  // tag=1000

  // tag=1004
  ::QWidget::setSizeIncrement(w, h);
}
void QWidget_wrapper::setSizePolicy(QSizePolicy arg__1) {
  // tag=1000

  // tag=1004
  ::QWidget::setSizePolicy(arg__1);
}
void QWidget_wrapper::setSizePolicy(QSizePolicy::Policy horizontal,
                                    QSizePolicy::Policy vertical) {
  // tag=1000

  // tag=1004
  ::QWidget::setSizePolicy(horizontal, vertical);
}
void QWidget_wrapper::setStatusTip(const QString &arg__1) {
  // tag=1000

  // tag=1004
  ::QWidget::setStatusTip(arg__1);
}
void QWidget_wrapper::setStyle(QStyle *arg__1) {
  // tag=1000

  // tag=1004
  ::QWidget::setStyle(arg__1);
}
void QWidget_wrapper::setStyleSheet(const QString &styleSheet) {
  // tag=1000

  // tag=1004
  ::QWidget::setStyleSheet(styleSheet);
}
void QWidget_wrapper::setTabOrder(QWidget *arg__1, QWidget *arg__2) {
  // tag=1000

  // tag=1004
  ::QWidget::setTabOrder(arg__1, arg__2);
}
void QWidget_wrapper::setTabletTracking(bool enable) {
  // tag=1000

  // tag=1004
  ::QWidget::setTabletTracking(enable);
}
void QWidget_wrapper::setToolTip(const QString &arg__1) {
  // tag=1000

  // tag=1004
  ::QWidget::setToolTip(arg__1);
}
void QWidget_wrapper::setToolTipDuration(int msec) {
  // tag=1000

  // tag=1004
  ::QWidget::setToolTipDuration(msec);
}
void QWidget_wrapper::setUpdatesEnabled(bool enable) {
  // tag=1000

  // tag=1004
  ::QWidget::setUpdatesEnabled(enable);
}
void QWidget_wrapper::setVisible(bool visible) {
  // tag=1000
  if (m_setVisibleCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    // tag=1002
    ::QWidget::setVisible(visible);
  }
}
// tag=1009
void QWidget_wrapper::setVisible_nocallback(bool visible) {
  // tag=1003
  ::QWidget::setVisible(visible);
}
void QWidget_wrapper::setWhatsThis(const QString &arg__1) {
  // tag=1000

  // tag=1004
  ::QWidget::setWhatsThis(arg__1);
}
void QWidget_wrapper::setWindowFilePath(const QString &filePath) {
  // tag=1000

  // tag=1004
  ::QWidget::setWindowFilePath(filePath);
}
void QWidget_wrapper::setWindowIcon(const QIcon &icon) {
  // tag=1000

  // tag=1004
  ::QWidget::setWindowIcon(icon);
}
void QWidget_wrapper::setWindowIconText(const QString &arg__1) {
  // tag=1000

  // tag=1004
  ::QWidget::setWindowIconText(arg__1);
}
void QWidget_wrapper::setWindowModified(bool arg__1) {
  // tag=1000

  // tag=1004
  ::QWidget::setWindowModified(arg__1);
}
void QWidget_wrapper::setWindowOpacity(qreal level) {
  // tag=1000

  // tag=1004
  ::QWidget::setWindowOpacity(level);
}
void QWidget_wrapper::setWindowRole(const QString &arg__1) {
  // tag=1000

  // tag=1004
  ::QWidget::setWindowRole(arg__1);
}
void QWidget_wrapper::setWindowTitle(const QString &arg__1) {
  // tag=1000

  // tag=1004
  ::QWidget::setWindowTitle(arg__1);
}
QPainter *QWidget_wrapper::sharedPainter() const {
  // tag=1000
  if (m_sharedPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QWidget::sharedPainter();
  }
}
// tag=1009
QPainter *QWidget_wrapper::sharedPainter_nocallback() const {
  // tag=1003
  return ::QWidget::sharedPainter();
}
void QWidget_wrapper::show() {
  // tag=1000

  // tag=1004
  ::QWidget::show();
}
void QWidget_wrapper::showFullScreen() {
  // tag=1000

  // tag=1004
  ::QWidget::showFullScreen();
}
void QWidget_wrapper::showMaximized() {
  // tag=1000

  // tag=1004
  ::QWidget::showMaximized();
}
void QWidget_wrapper::showMinimized() {
  // tag=1000

  // tag=1004
  ::QWidget::showMinimized();
}
void QWidget_wrapper::showNormal() {
  // tag=1000

  // tag=1004
  ::QWidget::showNormal();
}
QSize QWidget_wrapper::size() const {
  // tag=1000

  // tag=1004
  return ::QWidget::size();
}
QSize QWidget_wrapper::sizeHint() const {
  // tag=1000
  if (m_sizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QWidget::sizeHint();
  }
}
// tag=1009
QSize QWidget_wrapper::sizeHint_nocallback() const {
  // tag=1003
  return ::QWidget::sizeHint();
}
QSize QWidget_wrapper::sizeIncrement() const {
  // tag=1000

  // tag=1004
  return ::QWidget::sizeIncrement();
}
QSizePolicy QWidget_wrapper::sizePolicy() const {
  // tag=1000

  // tag=1004
  return ::QWidget::sizePolicy();
}
void QWidget_wrapper::stackUnder(QWidget *arg__1) {
  // tag=1000

  // tag=1004
  ::QWidget::stackUnder(arg__1);
}
QString QWidget_wrapper::statusTip() const {
  // tag=1000

  // tag=1004
  return ::QWidget::statusTip();
}
QStyle *QWidget_wrapper::style() const {
  // tag=1000

  // tag=1004
  return ::QWidget::style();
}
QString QWidget_wrapper::styleSheet() const {
  // tag=1000

  // tag=1004
  return ::QWidget::styleSheet();
}
QString QWidget_wrapper::toolTip() const {
  // tag=1000

  // tag=1004
  return ::QWidget::toolTip();
}
int QWidget_wrapper::toolTipDuration() const {
  // tag=1000

  // tag=1004
  return ::QWidget::toolTipDuration();
}
QWidget *QWidget_wrapper::topLevelWidget() const {
  // tag=1000

  // tag=1004
  return ::QWidget::topLevelWidget();
}
QString QWidget_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QWidget::tr(s, c, n);
}
bool QWidget_wrapper::underMouse() const {
  // tag=1000

  // tag=1004
  return ::QWidget::underMouse();
}
void QWidget_wrapper::unsetCursor() {
  // tag=1000

  // tag=1004
  ::QWidget::unsetCursor();
}
void QWidget_wrapper::unsetLayoutDirection() {
  // tag=1000

  // tag=1004
  ::QWidget::unsetLayoutDirection();
}
void QWidget_wrapper::unsetLocale() {
  // tag=1000

  // tag=1004
  ::QWidget::unsetLocale();
}
void QWidget_wrapper::update() {
  // tag=1000

  // tag=1004
  ::QWidget::update();
}
void QWidget_wrapper::update(const QRect &arg__1) {
  // tag=1000

  // tag=1004
  ::QWidget::update(arg__1);
}
void QWidget_wrapper::update(const QRegion &arg__1) {
  // tag=1000

  // tag=1004
  ::QWidget::update(arg__1);
}
void QWidget_wrapper::update(int x, int y, int w, int h) {
  // tag=1000

  // tag=1004
  ::QWidget::update(x, y, w, h);
}
void QWidget_wrapper::updateGeometry() {
  // tag=1000

  // tag=1004
  ::QWidget::updateGeometry();
}
void QWidget_wrapper::updateMicroFocus() {
  // tag=1000

  // tag=1004
  ::QWidget::updateMicroFocus();
}
bool QWidget_wrapper::updatesEnabled() const {
  // tag=1000

  // tag=1004
  return ::QWidget::updatesEnabled();
}
QRegion QWidget_wrapper::visibleRegion() const {
  // tag=1000

  // tag=1004
  return ::QWidget::visibleRegion();
}
QString QWidget_wrapper::whatsThis() const {
  // tag=1000

  // tag=1004
  return ::QWidget::whatsThis();
}
int QWidget_wrapper::width() const {
  // tag=1000

  // tag=1004
  return ::QWidget::width();
}
QWidget *QWidget_wrapper::window() const {
  // tag=1000

  // tag=1004
  return ::QWidget::window();
}
QString QWidget_wrapper::windowFilePath() const {
  // tag=1000

  // tag=1004
  return ::QWidget::windowFilePath();
}
QWindow *QWidget_wrapper::windowHandle() const {
  // tag=1000

  // tag=1004
  return ::QWidget::windowHandle();
}
QIcon QWidget_wrapper::windowIcon() const {
  // tag=1000

  // tag=1004
  return ::QWidget::windowIcon();
}
void QWidget_wrapper::windowIconChanged(const QIcon &icon) {
  // tag=1000

  // tag=1004
  ::QWidget::windowIconChanged(icon);
}
QString QWidget_wrapper::windowIconText() const {
  // tag=1000

  // tag=1004
  return ::QWidget::windowIconText();
}
void QWidget_wrapper::windowIconTextChanged(const QString &iconText) {
  // tag=1000

  // tag=1004
  ::QWidget::windowIconTextChanged(iconText);
}
qreal QWidget_wrapper::windowOpacity() const {
  // tag=1000

  // tag=1004
  return ::QWidget::windowOpacity();
}
QString QWidget_wrapper::windowRole() const {
  // tag=1000

  // tag=1004
  return ::QWidget::windowRole();
}
QString QWidget_wrapper::windowTitle() const {
  // tag=1000

  // tag=1004
  return ::QWidget::windowTitle();
}
void QWidget_wrapper::windowTitleChanged(const QString &title) {
  // tag=1000

  // tag=1004
  ::QWidget::windowTitleChanged(title);
}
int QWidget_wrapper::x() const {
  // tag=1000

  // tag=1004
  return ::QWidget::x();
}
int QWidget_wrapper::y() const {
  // tag=1000

  // tag=1004
  return ::QWidget::y();
}

// tag=1005
QWidget_wrapper::~QWidget_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QWidget *fromPtr(void *ptr) { return reinterpret_cast<QWidget *>(ptr); }
// tag=1014
static QtDartBindings_wrappersNS::QWidget_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QWidget_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QWidget_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QWidget_wrapper *>(cppObj);
}
void *c_QWidget__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QWidget_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// acceptDrops() const
bool c_QWidget__acceptDrops(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->acceptDrops();
}

// tag=1050
// accessibleDescription() const
void *c_QWidget__accessibleDescription(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          fromPtr(thisObj)->accessibleDescription()};
}

// tag=1050
// accessibleName() const
void *c_QWidget__accessibleName(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->accessibleName()};
}

// tag=1050
// actions() const
void *c_QWidget__actions(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QAction *>>{
          fromPtr(thisObj)->actions()};
}

// tag=1050
// activateWindow()
void c_QWidget__activateWindow(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->activateWindow();
}

// tag=1050
// addAction(QAction * action)
void c_QWidget__addAction_QAction(void *thisObj, void *action_) {
  auto action = reinterpret_cast<QAction *>(action_);
  // tag=1010
  fromPtr(thisObj)->addAction(action);
}

// tag=1050
// addAction(const QIcon & icon, const QString & text)
void *c_QWidget__addAction_QIcon_QString(void *thisObj, void *icon_,
                                         const char *text_) {
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  const auto text = QString::fromUtf8(text_);
  return
      // tag=1010
      fromPtr(thisObj)->addAction(icon, text);
}

// tag=1050
// addAction(const QIcon & icon, const QString & text, const QKeySequence &
// shortcut)
void *c_QWidget__addAction_QIcon_QString_QKeySequence(void *thisObj,
                                                      void *icon_,
                                                      const char *text_,
                                                      void *shortcut_) {
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  const auto text = QString::fromUtf8(text_);
  auto &shortcut = *reinterpret_cast<QKeySequence *>(shortcut_);
  return
      // tag=1010
      fromPtr(thisObj)->addAction(icon, text, shortcut);
}

// tag=1050
// addAction(const QIcon & icon, const QString & text, const QKeySequence &
// shortcut, const QObject * receiver, const char * member)
void *c_QWidget__addAction_QIcon_QString_QKeySequence_QObject_char(
    void *thisObj, void *icon_, const char *text_, void *shortcut_,
    void *receiver_, const char *member) {
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  const auto text = QString::fromUtf8(text_);
  auto &shortcut = *reinterpret_cast<QKeySequence *>(shortcut_);
  auto receiver = reinterpret_cast<QObject *>(receiver_);
  return
      // tag=1010
      fromPtr(thisObj)->addAction(icon, text, shortcut, receiver, member);
}

// tag=1050
// addAction(const QIcon & icon, const QString & text, const QObject * receiver,
// const char * member)
void *c_QWidget__addAction_QIcon_QString_QObject_char(void *thisObj,
                                                      void *icon_,
                                                      const char *text_,
                                                      void *receiver_,
                                                      const char *member) {
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  const auto text = QString::fromUtf8(text_);
  auto receiver = reinterpret_cast<QObject *>(receiver_);
  return
      // tag=1010
      fromPtr(thisObj)->addAction(icon, text, receiver, member);
}

// tag=1050
// addAction(const QString & text)
void *c_QWidget__addAction_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  return
      // tag=1010
      fromPtr(thisObj)->addAction(text);
}

// tag=1050
// addAction(const QString & text, const QKeySequence & shortcut)
void *c_QWidget__addAction_QString_QKeySequence(void *thisObj,
                                                const char *text_,
                                                void *shortcut_) {
  const auto text = QString::fromUtf8(text_);
  auto &shortcut = *reinterpret_cast<QKeySequence *>(shortcut_);
  return
      // tag=1010
      fromPtr(thisObj)->addAction(text, shortcut);
}

// tag=1050
// addAction(const QString & text, const QKeySequence & shortcut, const QObject
// * receiver, const char * member)
void *c_QWidget__addAction_QString_QKeySequence_QObject_char(
    void *thisObj, const char *text_, void *shortcut_, void *receiver_,
    const char *member) {
  const auto text = QString::fromUtf8(text_);
  auto &shortcut = *reinterpret_cast<QKeySequence *>(shortcut_);
  auto receiver = reinterpret_cast<QObject *>(receiver_);
  return
      // tag=1010
      fromPtr(thisObj)->addAction(text, shortcut, receiver, member);
}

// tag=1050
// addAction(const QString & text, const QObject * receiver, const char *
// member)
void *c_QWidget__addAction_QString_QObject_char(void *thisObj,
                                                const char *text_,
                                                void *receiver_,
                                                const char *member) {
  const auto text = QString::fromUtf8(text_);
  auto receiver = reinterpret_cast<QObject *>(receiver_);
  return
      // tag=1010
      fromPtr(thisObj)->addAction(text, receiver, member);
}

// tag=1050
// addActions(const QList<QAction* > & actions)
void c_QWidget__addActions_QList_QAction(void *thisObj, void *actions_) {
  auto &actions = *reinterpret_cast<QList<QAction *> *>(actions_);
  // tag=1010
  fromPtr(thisObj)->addActions(actions);
}

// tag=1050
// adjustSize()
void c_QWidget__adjustSize(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->adjustSize();
}

// tag=1050
// autoFillBackground() const
bool c_QWidget__autoFillBackground(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->autoFillBackground();
}

// tag=1050
// backgroundRole() const
int c_QWidget__backgroundRole(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->backgroundRole();
}

// tag=1050
// baseSize() const
void *c_QWidget__baseSize(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->baseSize()};
}

// tag=1050
// changeEvent(QEvent * arg__1)
void c_QWidget__changeEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->changeEvent_nocallback(arg__1);
}

// tag=1050
// childAt(const QPoint & p) const
void *c_QWidget__childAt_QPoint(void *thisObj, void *p_) {
  auto &p = *reinterpret_cast<QPoint *>(p_);
  return
      // tag=1010
      fromPtr(thisObj)->childAt(p);
}

// tag=1050
// childAt(int x, int y) const
void *c_QWidget__childAt_int_int(void *thisObj, int x, int y) {
  return
      // tag=1010
      fromPtr(thisObj)->childAt(x, y);
}

// tag=1050
// childrenRect() const
void *c_QWidget__childrenRect(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->childrenRect()};
}

// tag=1050
// childrenRegion() const
void *c_QWidget__childrenRegion(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRegion>{fromPtr(thisObj)->childrenRegion()};
}

// tag=1050
// clearFocus()
void c_QWidget__clearFocus(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->clearFocus();
}

// tag=1050
// clearMask()
void c_QWidget__clearMask(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->clearMask();
}

// tag=1050
// close()
bool c_QWidget__close(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->close();
}

// tag=1050
// contentsRect() const
void *c_QWidget__contentsRect(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->contentsRect()};
}

// tag=1050
// create()
void c_QWidget__create(void *thisObj) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->create();
}

// tag=1050
// createWinId()
void c_QWidget__createWinId(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->createWinId();
}

// tag=1050
// createWindowContainer(QWindow * window, QWidget * parent)
void *c_static_QWidget__createWindowContainer_QWindow_QWidget(void *window_,
                                                              void *parent_) {
  auto window = reinterpret_cast<QWindow *>(window_);
  auto parent = reinterpret_cast<QWidget *>(parent_);
  return
      // tag=1068
      QtDartBindings_wrappersNS::QWidget_wrapper::createWindowContainer(window,
                                                                        parent);
}

// tag=1050
// customContextMenuRequested(const QPoint & pos)
void c_QWidget__customContextMenuRequested_QPoint(void *thisObj, void *pos_) {
  auto &pos = *reinterpret_cast<QPoint *>(pos_);
  // tag=1010
  fromPtr(thisObj)->customContextMenuRequested(pos);
}

// tag=1079
void c_QWidget__onCustomContextMenuRequested_QPoint(void *thisObj,
                                                    void *contextQObject,
                                                    void *callback) {
  auto instance = reinterpret_cast<QWidget *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QWidget::customContextMenuRequested,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// customEvent(QEvent * event)
void c_QWidget__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// destroy(bool destroyWindow, bool destroySubWindows)
void c_QWidget__destroy_bool_bool(void *thisObj, bool destroyWindow,
                                  bool destroySubWindows) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->destroy(destroyWindow, destroySubWindows);
}

// tag=1079
void c_QWidget__onDestroyed_QObject(void *thisObj, void *contextQObject,
                                    void *callback) {
  auto instance = reinterpret_cast<QWidget *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QWidget::destroyed, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// devType() const
int c_QWidget__devType(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QWidget_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->devType_nocallback();
        } else {
          return targetPtr->devType();
        }
      }();
}

// tag=1050
// ensurePolished() const
void c_QWidget__ensurePolished(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->ensurePolished();
}

// tag=1050
// event(QEvent * event)
bool c_QWidget__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->event_nocallback(event);
}

// tag=1050
// eventFilter(QObject * watched, QEvent * event)
bool c_QWidget__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                           void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QWidget_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->eventFilter_nocallback(watched, event);
        } else {
          return targetPtr->eventFilter(watched, event);
        }
      }();
}

// tag=1050
// focusNextChild()
bool c_QWidget__focusNextChild(void *thisObj) {
  return
      // tag=1011

      // tag=1073
      fromWrapperPtr(thisObj)->focusNextChild();
}

// tag=1050
// focusNextPrevChild(bool next)
bool c_QWidget__focusNextPrevChild_bool(void *thisObj, bool next) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
}

// tag=1050
// focusPreviousChild()
bool c_QWidget__focusPreviousChild(void *thisObj) {
  return
      // tag=1011

      // tag=1073
      fromWrapperPtr(thisObj)->focusPreviousChild();
}

// tag=1050
// focusProxy() const
void *c_QWidget__focusProxy(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->focusProxy();
}

// tag=1050
// focusWidget() const
void *c_QWidget__focusWidget(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->focusWidget();
}

// tag=1050
// font() const
void *c_QWidget__font(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(static_cast<const void *>(&fromPtr(thisObj)->font()));
}

// tag=1050
// foregroundRole() const
int c_QWidget__foregroundRole(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->foregroundRole();
}

// tag=1050
// frameGeometry() const
void *c_QWidget__frameGeometry(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->frameGeometry()};
}

// tag=1050
// frameSize() const
void *c_QWidget__frameSize(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->frameSize()};
}

// tag=1050
// geometry() const
void *c_QWidget__geometry(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(
          static_cast<const void *>(&fromPtr(thisObj)->geometry()));
}

// tag=1050
// grab(const QRect & rectangle)
void *c_QWidget__grab_QRect(void *thisObj, void *rectangle_) {
  auto &rectangle = *reinterpret_cast<QRect *>(rectangle_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPixmap>{fromPtr(thisObj)->grab(rectangle)};
}

// tag=1050
// grabKeyboard()
void c_QWidget__grabKeyboard(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->grabKeyboard();
}

// tag=1050
// grabMouse()
void c_QWidget__grabMouse(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->grabMouse();
}

// tag=1050
// grabShortcut(const QKeySequence & key)
int c_QWidget__grabShortcut_QKeySequence(void *thisObj, void *key_) {
  auto &key = *reinterpret_cast<QKeySequence *>(key_);
  return
      // tag=1010
      fromPtr(thisObj)->grabShortcut(key);
}

// tag=1050
// hasFocus() const
bool c_QWidget__hasFocus(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->hasFocus();
}

// tag=1050
// hasHeightForWidth() const
bool c_QWidget__hasHeightForWidth(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QWidget_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->hasHeightForWidth_nocallback();
        } else {
          return targetPtr->hasHeightForWidth();
        }
      }();
}

// tag=1050
// hasMouseTracking() const
bool c_QWidget__hasMouseTracking(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->hasMouseTracking();
}

// tag=1050
// hasTabletTracking() const
bool c_QWidget__hasTabletTracking(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->hasTabletTracking();
}

// tag=1050
// height() const
int c_QWidget__height(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->height();
}

// tag=1050
// heightForWidth(int arg__1) const
int c_QWidget__heightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QWidget_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->heightForWidth_nocallback(arg__1);
        } else {
          return targetPtr->heightForWidth(arg__1);
        }
      }();
}

// tag=1050
// hide()
void c_QWidget__hide(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->hide();
}

// tag=1050
// initPainter(QPainter * painter) const
void c_QWidget__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}

// tag=1050
// insertAction(QAction * before, QAction * action)
void c_QWidget__insertAction_QAction_QAction(void *thisObj, void *before_,
                                             void *action_) {
  auto before = reinterpret_cast<QAction *>(before_);
  auto action = reinterpret_cast<QAction *>(action_);
  // tag=1010
  fromPtr(thisObj)->insertAction(before, action);
}

// tag=1050
// insertActions(QAction * before, const QList<QAction* > & actions)
void c_QWidget__insertActions_QAction_QList_QAction(void *thisObj,
                                                    void *before_,
                                                    void *actions_) {
  auto before = reinterpret_cast<QAction *>(before_);
  auto &actions = *reinterpret_cast<QList<QAction *> *>(actions_);
  // tag=1010
  fromPtr(thisObj)->insertActions(before, actions);
}

// tag=1050
// isActiveWindow() const
bool c_QWidget__isActiveWindow(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isActiveWindow();
}

// tag=1050
// isAncestorOf(const QWidget * child) const
bool c_QWidget__isAncestorOf_QWidget(void *thisObj, void *child_) {
  auto child = reinterpret_cast<QWidget *>(child_);
  return
      // tag=1010
      fromPtr(thisObj)->isAncestorOf(child);
}

// tag=1050
// isEnabled() const
bool c_QWidget__isEnabled(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isEnabled();
}

// tag=1050
// isEnabledTo(const QWidget * arg__1) const
bool c_QWidget__isEnabledTo_QWidget(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  return
      // tag=1010
      fromPtr(thisObj)->isEnabledTo(arg__1);
}

// tag=1050
// isFullScreen() const
bool c_QWidget__isFullScreen(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isFullScreen();
}

// tag=1050
// isHidden() const
bool c_QWidget__isHidden(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isHidden();
}

// tag=1050
// isLeftToRight() const
bool c_QWidget__isLeftToRight(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isLeftToRight();
}

// tag=1050
// isMaximized() const
bool c_QWidget__isMaximized(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isMaximized();
}

// tag=1050
// isMinimized() const
bool c_QWidget__isMinimized(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isMinimized();
}

// tag=1050
// isModal() const
bool c_QWidget__isModal(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isModal();
}

// tag=1050
// isRightToLeft() const
bool c_QWidget__isRightToLeft(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isRightToLeft();
}

// tag=1050
// isVisible() const
bool c_QWidget__isVisible(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isVisible();
}

// tag=1050
// isVisibleTo(const QWidget * arg__1) const
bool c_QWidget__isVisibleTo_QWidget(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  return
      // tag=1010
      fromPtr(thisObj)->isVisibleTo(arg__1);
}

// tag=1050
// isWindow() const
bool c_QWidget__isWindow(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isWindow();
}

// tag=1050
// isWindowModified() const
bool c_QWidget__isWindowModified(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isWindowModified();
}

// tag=1050
// keyboardGrabber()
void *c_static_QWidget__keyboardGrabber() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QWidget_wrapper::keyboardGrabber();
}

// tag=1050
// layout() const
void *c_QWidget__layout(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->layout();
}

// tag=1050
// layoutDirection() const
int c_QWidget__layoutDirection(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->layoutDirection();
}

// tag=1050
// leaveEvent(QEvent * event)
void c_QWidget__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}

// tag=1050
// lower()
void c_QWidget__lower(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->lower();
}

// tag=1050
// mapFrom(const QWidget * arg__1, const QPoint & arg__2) const
void *c_QWidget__mapFrom_QWidget_QPoint(void *thisObj, void *arg__1_,
                                        void *arg__2_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  auto &arg__2 = *reinterpret_cast<QPoint *>(arg__2_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPoint>{
          fromPtr(thisObj)->mapFrom(arg__1, arg__2)};
}

// tag=1050
// mapFrom(const QWidget * arg__1, const QPointF & arg__2) const
void *c_QWidget__mapFrom_QWidget_QPointF(void *thisObj, void *arg__1_,
                                         void *arg__2_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  auto &arg__2 = *reinterpret_cast<QPointF *>(arg__2_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPointF>{
          fromPtr(thisObj)->mapFrom(arg__1, arg__2)};
}

// tag=1050
// mapFromGlobal(const QPoint & arg__1) const
void *c_QWidget__mapFromGlobal_QPoint(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QPoint *>(arg__1_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPoint>{
          fromPtr(thisObj)->mapFromGlobal(arg__1)};
}

// tag=1050
// mapFromGlobal(const QPointF & arg__1) const
void *c_QWidget__mapFromGlobal_QPointF(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QPointF *>(arg__1_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPointF>{
          fromPtr(thisObj)->mapFromGlobal(arg__1)};
}

// tag=1050
// mapFromParent(const QPoint & arg__1) const
void *c_QWidget__mapFromParent_QPoint(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QPoint *>(arg__1_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPoint>{
          fromPtr(thisObj)->mapFromParent(arg__1)};
}

// tag=1050
// mapFromParent(const QPointF & arg__1) const
void *c_QWidget__mapFromParent_QPointF(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QPointF *>(arg__1_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPointF>{
          fromPtr(thisObj)->mapFromParent(arg__1)};
}

// tag=1050
// mapTo(const QWidget * arg__1, const QPoint & arg__2) const
void *c_QWidget__mapTo_QWidget_QPoint(void *thisObj, void *arg__1_,
                                      void *arg__2_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  auto &arg__2 = *reinterpret_cast<QPoint *>(arg__2_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPoint>{
          fromPtr(thisObj)->mapTo(arg__1, arg__2)};
}

// tag=1050
// mapTo(const QWidget * arg__1, const QPointF & arg__2) const
void *c_QWidget__mapTo_QWidget_QPointF(void *thisObj, void *arg__1_,
                                       void *arg__2_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  auto &arg__2 = *reinterpret_cast<QPointF *>(arg__2_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPointF>{
          fromPtr(thisObj)->mapTo(arg__1, arg__2)};
}

// tag=1050
// mapToGlobal(const QPoint & arg__1) const
void *c_QWidget__mapToGlobal_QPoint(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QPoint *>(arg__1_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPoint>{
          fromPtr(thisObj)->mapToGlobal(arg__1)};
}

// tag=1050
// mapToGlobal(const QPointF & arg__1) const
void *c_QWidget__mapToGlobal_QPointF(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QPointF *>(arg__1_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPointF>{
          fromPtr(thisObj)->mapToGlobal(arg__1)};
}

// tag=1050
// mapToParent(const QPoint & arg__1) const
void *c_QWidget__mapToParent_QPoint(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QPoint *>(arg__1_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPoint>{
          fromPtr(thisObj)->mapToParent(arg__1)};
}

// tag=1050
// mapToParent(const QPointF & arg__1) const
void *c_QWidget__mapToParent_QPointF(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QPointF *>(arg__1_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPointF>{
          fromPtr(thisObj)->mapToParent(arg__1)};
}

// tag=1050
// mask() const
void *c_QWidget__mask(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRegion>{fromPtr(thisObj)->mask()};
}

// tag=1050
// maximumHeight() const
int c_QWidget__maximumHeight(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->maximumHeight();
}

// tag=1050
// maximumSize() const
void *c_QWidget__maximumSize(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->maximumSize()};
}

// tag=1050
// maximumWidth() const
int c_QWidget__maximumWidth(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->maximumWidth();
}

// tag=1050
// minimumHeight() const
int c_QWidget__minimumHeight(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->minimumHeight();
}

// tag=1050
// minimumSize() const
void *c_QWidget__minimumSize(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->minimumSize()};
}

// tag=1050
// minimumSizeHint() const
void *c_QWidget__minimumSizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QWidget_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->minimumSizeHint_nocallback();
        } else {
          return targetPtr->minimumSizeHint();
        }
      }()};
}

// tag=1050
// minimumWidth() const
int c_QWidget__minimumWidth(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->minimumWidth();
}

// tag=1050
// mouseDoubleClickEvent(QMouseEvent * event)
void c_QWidget__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}

// tag=1050
// mouseGrabber()
void *c_static_QWidget__mouseGrabber() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QWidget_wrapper::mouseGrabber();
}

// tag=1050
// mouseMoveEvent(QMouseEvent * event)
void c_QWidget__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(event);
}

// tag=1050
// mousePressEvent(QMouseEvent * event)
void c_QWidget__mousePressEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(event);
}

// tag=1050
// mouseReleaseEvent(QMouseEvent * event)
void c_QWidget__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(event);
}

// tag=1050
// move(const QPoint & arg__1)
void c_QWidget__move_QPoint(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QPoint *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->move(arg__1);
}

// tag=1050
// move(int x, int y)
void c_QWidget__move_int_int(void *thisObj, int x, int y) {
  // tag=1010
  fromPtr(thisObj)->move(x, y);
}

// tag=1050
// nativeParentWidget() const
void *c_QWidget__nativeParentWidget(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->nativeParentWidget();
}

// tag=1050
// nextInFocusChain() const
void *c_QWidget__nextInFocusChain(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->nextInFocusChain();
}

// tag=1050
// normalGeometry() const
void *c_QWidget__normalGeometry(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->normalGeometry()};
}

// tag=1050
// paintEvent(QPaintEvent * event)
void c_QWidget__paintEvent_QPaintEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QPaintEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->paintEvent_nocallback(event);
}

// tag=1050
// palette() const
void *c_QWidget__palette(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(
          static_cast<const void *>(&fromPtr(thisObj)->palette()));
}

// tag=1050
// parentWidget() const
void *c_QWidget__parentWidget(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->parentWidget();
}

// tag=1050
// pos() const
void *c_QWidget__pos(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPoint>{fromPtr(thisObj)->pos()};
}

// tag=1050
// previousInFocusChain() const
void *c_QWidget__previousInFocusChain(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->previousInFocusChain();
}

// tag=1050
// raise()
void c_QWidget__raise(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->raise();
}

// tag=1050
// rect() const
void *c_QWidget__rect(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->rect()};
}

// tag=1050
// releaseKeyboard()
void c_QWidget__releaseKeyboard(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->releaseKeyboard();
}

// tag=1050
// releaseMouse()
void c_QWidget__releaseMouse(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->releaseMouse();
}

// tag=1050
// releaseShortcut(int id)
void c_QWidget__releaseShortcut_int(void *thisObj, int id) {
  // tag=1010
  fromPtr(thisObj)->releaseShortcut(id);
}

// tag=1050
// removeAction(QAction * action)
void c_QWidget__removeAction_QAction(void *thisObj, void *action_) {
  auto action = reinterpret_cast<QAction *>(action_);
  // tag=1010
  fromPtr(thisObj)->removeAction(action);
}

// tag=1050
// render(QPainter * painter, const QPoint & targetOffset, const QRegion &
// sourceRegion)
void c_QWidget__render_QPainter_QPoint_QRegion(void *thisObj, void *painter_,
                                               void *targetOffset_,
                                               void *sourceRegion_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  auto &targetOffset = *reinterpret_cast<QPoint *>(targetOffset_);
  auto &sourceRegion = *reinterpret_cast<QRegion *>(sourceRegion_);
  // tag=1010
  fromPtr(thisObj)->render(painter, targetOffset, sourceRegion);
}

// tag=1050
// repaint()
void c_QWidget__repaint(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->repaint();
}

// tag=1050
// repaint(const QRect & arg__1)
void c_QWidget__repaint_QRect(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->repaint(arg__1);
}

// tag=1050
// repaint(const QRegion & arg__1)
void c_QWidget__repaint_QRegion(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QRegion *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->repaint(arg__1);
}

// tag=1050
// repaint(int x, int y, int w, int h)
void c_QWidget__repaint_int_int_int_int(void *thisObj, int x, int y, int w,
                                        int h) {
  // tag=1010
  fromPtr(thisObj)->repaint(x, y, w, h);
}

// tag=1050
// resize(const QSize & arg__1)
void c_QWidget__resize_QSize(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QSize *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->resize(arg__1);
}

// tag=1050
// resize(int w, int h)
void c_QWidget__resize_int_int(void *thisObj, int w, int h) {
  // tag=1010
  fromPtr(thisObj)->resize(w, h);
}

// tag=1050
// restoreGeometry(const QByteArray & geometry)
bool c_QWidget__restoreGeometry_QByteArray(void *thisObj, void *geometry_) {
  auto &geometry = *reinterpret_cast<QByteArray *>(geometry_);
  return
      // tag=1010
      fromPtr(thisObj)->restoreGeometry(geometry);
}

// tag=1050
// saveGeometry() const
void *c_QWidget__saveGeometry(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->saveGeometry()};
}

// tag=1050
// scroll(int dx, int dy)
void c_QWidget__scroll_int_int(void *thisObj, int dx, int dy) {
  // tag=1010
  fromPtr(thisObj)->scroll(dx, dy);
}

// tag=1050
// scroll(int dx, int dy, const QRect & arg__3)
void c_QWidget__scroll_int_int_QRect(void *thisObj, int dx, int dy,
                                     void *arg__3_) {
  auto &arg__3 = *reinterpret_cast<QRect *>(arg__3_);
  // tag=1010
  fromPtr(thisObj)->scroll(dx, dy, arg__3);
}

// tag=1050
// setAcceptDrops(bool on)
void c_QWidget__setAcceptDrops_bool(void *thisObj, bool on) {
  // tag=1010
  fromPtr(thisObj)->setAcceptDrops(on);
}

// tag=1050
// setAccessibleDescription(const QString & description)
void c_QWidget__setAccessibleDescription_QString(void *thisObj,
                                                 const char *description_) {
  const auto description = QString::fromUtf8(description_);
  // tag=1010
  fromPtr(thisObj)->setAccessibleDescription(description);
}

// tag=1050
// setAccessibleName(const QString & name)
void c_QWidget__setAccessibleName_QString(void *thisObj, const char *name_) {
  const auto name = QString::fromUtf8(name_);
  // tag=1010
  fromPtr(thisObj)->setAccessibleName(name);
}

// tag=1050
// setAutoFillBackground(bool enabled)
void c_QWidget__setAutoFillBackground_bool(void *thisObj, bool enabled) {
  // tag=1010
  fromPtr(thisObj)->setAutoFillBackground(enabled);
}

// tag=1050
// setBackgroundRole(QPalette::ColorRole arg__1)
void c_QWidget__setBackgroundRole_ColorRole(void *thisObj, int arg__1) {
  // tag=1010
  fromPtr(thisObj)->setBackgroundRole(static_cast<QPalette::ColorRole>(arg__1));
}

// tag=1050
// setBaseSize(const QSize & arg__1)
void c_QWidget__setBaseSize_QSize(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QSize *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setBaseSize(arg__1);
}

// tag=1050
// setBaseSize(int basew, int baseh)
void c_QWidget__setBaseSize_int_int(void *thisObj, int basew, int baseh) {
  // tag=1010
  fromPtr(thisObj)->setBaseSize(basew, baseh);
}

// tag=1050
// setContentsMargins(int left, int top, int right, int bottom)
void c_QWidget__setContentsMargins_int_int_int_int(void *thisObj, int left,
                                                   int top, int right,
                                                   int bottom) {
  // tag=1010
  fromPtr(thisObj)->setContentsMargins(left, top, right, bottom);
}

// tag=1050
// setDisabled(bool arg__1)
void c_QWidget__setDisabled_bool(void *thisObj, bool arg__1) {
  // tag=1010
  fromPtr(thisObj)->setDisabled(arg__1);
}

// tag=1050
// setEnabled(bool arg__1)
void c_QWidget__setEnabled_bool(void *thisObj, bool arg__1) {
  // tag=1010
  fromPtr(thisObj)->setEnabled(arg__1);
}

// tag=1050
// setFixedHeight(int h)
void c_QWidget__setFixedHeight_int(void *thisObj, int h) {
  // tag=1010
  fromPtr(thisObj)->setFixedHeight(h);
}

// tag=1050
// setFixedSize(const QSize & arg__1)
void c_QWidget__setFixedSize_QSize(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QSize *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setFixedSize(arg__1);
}

// tag=1050
// setFixedSize(int w, int h)
void c_QWidget__setFixedSize_int_int(void *thisObj, int w, int h) {
  // tag=1010
  fromPtr(thisObj)->setFixedSize(w, h);
}

// tag=1050
// setFixedWidth(int w)
void c_QWidget__setFixedWidth_int(void *thisObj, int w) {
  // tag=1010
  fromPtr(thisObj)->setFixedWidth(w);
}

// tag=1050
// setFocus()
void c_QWidget__setFocus(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->setFocus();
}

// tag=1050
// setFocusProxy(QWidget * arg__1)
void c_QWidget__setFocusProxy_QWidget(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setFocusProxy(arg__1);
}

// tag=1050
// setFont(const QFont & arg__1)
void c_QWidget__setFont_QFont(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QFont *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setFont(arg__1);
}

// tag=1050
// setForegroundRole(QPalette::ColorRole arg__1)
void c_QWidget__setForegroundRole_ColorRole(void *thisObj, int arg__1) {
  // tag=1010
  fromPtr(thisObj)->setForegroundRole(static_cast<QPalette::ColorRole>(arg__1));
}

// tag=1050
// setGeometry(const QRect & arg__1)
void c_QWidget__setGeometry_QRect(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setGeometry(arg__1);
}

// tag=1050
// setGeometry(int x, int y, int w, int h)
void c_QWidget__setGeometry_int_int_int_int(void *thisObj, int x, int y, int w,
                                            int h) {
  // tag=1010
  fromPtr(thisObj)->setGeometry(x, y, w, h);
}

// tag=1050
// setHidden(bool hidden)
void c_QWidget__setHidden_bool(void *thisObj, bool hidden) {
  // tag=1010
  fromPtr(thisObj)->setHidden(hidden);
}

// tag=1050
// setLayout(QLayout * arg__1)
void c_QWidget__setLayout_QLayout(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QLayout *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setLayout(arg__1);
}

// tag=1050
// setLayoutDirection(Qt::LayoutDirection direction)
void c_QWidget__setLayoutDirection_LayoutDirection(void *thisObj,
                                                   int direction) {
  // tag=1010
  fromPtr(thisObj)->setLayoutDirection(
      static_cast<Qt::LayoutDirection>(direction));
}

// tag=1050
// setMask(const QRegion & arg__1)
void c_QWidget__setMask_QRegion(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QRegion *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setMask(arg__1);
}

// tag=1050
// setMaximumHeight(int maxh)
void c_QWidget__setMaximumHeight_int(void *thisObj, int maxh) {
  // tag=1010
  fromPtr(thisObj)->setMaximumHeight(maxh);
}

// tag=1050
// setMaximumSize(const QSize & arg__1)
void c_QWidget__setMaximumSize_QSize(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QSize *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setMaximumSize(arg__1);
}

// tag=1050
// setMaximumSize(int maxw, int maxh)
void c_QWidget__setMaximumSize_int_int(void *thisObj, int maxw, int maxh) {
  // tag=1010
  fromPtr(thisObj)->setMaximumSize(maxw, maxh);
}

// tag=1050
// setMaximumWidth(int maxw)
void c_QWidget__setMaximumWidth_int(void *thisObj, int maxw) {
  // tag=1010
  fromPtr(thisObj)->setMaximumWidth(maxw);
}

// tag=1050
// setMinimumHeight(int minh)
void c_QWidget__setMinimumHeight_int(void *thisObj, int minh) {
  // tag=1010
  fromPtr(thisObj)->setMinimumHeight(minh);
}

// tag=1050
// setMinimumSize(const QSize & arg__1)
void c_QWidget__setMinimumSize_QSize(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QSize *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setMinimumSize(arg__1);
}

// tag=1050
// setMinimumSize(int minw, int minh)
void c_QWidget__setMinimumSize_int_int(void *thisObj, int minw, int minh) {
  // tag=1010
  fromPtr(thisObj)->setMinimumSize(minw, minh);
}

// tag=1050
// setMinimumWidth(int minw)
void c_QWidget__setMinimumWidth_int(void *thisObj, int minw) {
  // tag=1010
  fromPtr(thisObj)->setMinimumWidth(minw);
}

// tag=1050
// setMouseTracking(bool enable)
void c_QWidget__setMouseTracking_bool(void *thisObj, bool enable) {
  // tag=1010
  fromPtr(thisObj)->setMouseTracking(enable);
}

// tag=1050
// setPalette(const QPalette & arg__1)
void c_QWidget__setPalette_QPalette(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QPalette *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setPalette(arg__1);
}

// tag=1050
// setShortcutAutoRepeat(int id, bool enable)
void c_QWidget__setShortcutAutoRepeat_int_bool(void *thisObj, int id,
                                               bool enable) {
  // tag=1010
  fromPtr(thisObj)->setShortcutAutoRepeat(id, enable);
}

// tag=1050
// setShortcutEnabled(int id, bool enable)
void c_QWidget__setShortcutEnabled_int_bool(void *thisObj, int id,
                                            bool enable) {
  // tag=1010
  fromPtr(thisObj)->setShortcutEnabled(id, enable);
}

// tag=1050
// setSizeIncrement(const QSize & arg__1)
void c_QWidget__setSizeIncrement_QSize(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QSize *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setSizeIncrement(arg__1);
}

// tag=1050
// setSizeIncrement(int w, int h)
void c_QWidget__setSizeIncrement_int_int(void *thisObj, int w, int h) {
  // tag=1010
  fromPtr(thisObj)->setSizeIncrement(w, h);
}

// tag=1050
// setSizePolicy(QSizePolicy arg__1)
void c_QWidget__setSizePolicy_QSizePolicy(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QSizePolicy *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setSizePolicy(arg__1);
}

// tag=1050
// setSizePolicy(QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical)
void c_QWidget__setSizePolicy_Policy_Policy(void *thisObj, int horizontal,
                                            int vertical) {
  // tag=1010
  fromPtr(thisObj)->setSizePolicy(static_cast<QSizePolicy::Policy>(horizontal),
                                  static_cast<QSizePolicy::Policy>(vertical));
}

// tag=1050
// setStatusTip(const QString & arg__1)
void c_QWidget__setStatusTip_QString(void *thisObj, const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setStatusTip(arg__1);
}

// tag=1050
// setStyle(QStyle * arg__1)
void c_QWidget__setStyle_QStyle(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QStyle *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setStyle(arg__1);
}

// tag=1050
// setStyleSheet(const QString & styleSheet)
void c_QWidget__setStyleSheet_QString(void *thisObj, const char *styleSheet_) {
  const auto styleSheet = QString::fromUtf8(styleSheet_);
  // tag=1010
  fromPtr(thisObj)->setStyleSheet(styleSheet);
}

// tag=1050
// setTabOrder(QWidget * arg__1, QWidget * arg__2)
void c_static_QWidget__setTabOrder_QWidget_QWidget(void *arg__1_,
                                                   void *arg__2_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  auto arg__2 = reinterpret_cast<QWidget *>(arg__2_);
  // tag=1068
  QtDartBindings_wrappersNS::QWidget_wrapper::setTabOrder(arg__1, arg__2);
}

// tag=1050
// setTabletTracking(bool enable)
void c_QWidget__setTabletTracking_bool(void *thisObj, bool enable) {
  // tag=1010
  fromPtr(thisObj)->setTabletTracking(enable);
}

// tag=1050
// setToolTip(const QString & arg__1)
void c_QWidget__setToolTip_QString(void *thisObj, const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setToolTip(arg__1);
}

// tag=1050
// setToolTipDuration(int msec)
void c_QWidget__setToolTipDuration_int(void *thisObj, int msec) {
  // tag=1010
  fromPtr(thisObj)->setToolTipDuration(msec);
}

// tag=1050
// setUpdatesEnabled(bool enable)
void c_QWidget__setUpdatesEnabled_bool(void *thisObj, bool enable) {
  // tag=1010
  fromPtr(thisObj)->setUpdatesEnabled(enable);
}

// tag=1050
// setVisible(bool visible)
void c_QWidget__setVisible_bool(void *thisObj, bool visible) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QWidget_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}

// tag=1050
// setWhatsThis(const QString & arg__1)
void c_QWidget__setWhatsThis_QString(void *thisObj, const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setWhatsThis(arg__1);
}

// tag=1050
// setWindowFilePath(const QString & filePath)
void c_QWidget__setWindowFilePath_QString(void *thisObj,
                                          const char *filePath_) {
  const auto filePath = QString::fromUtf8(filePath_);
  // tag=1010
  fromPtr(thisObj)->setWindowFilePath(filePath);
}

// tag=1050
// setWindowIcon(const QIcon & icon)
void c_QWidget__setWindowIcon_QIcon(void *thisObj, void *icon_) {
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  // tag=1010
  fromPtr(thisObj)->setWindowIcon(icon);
}

// tag=1050
// setWindowIconText(const QString & arg__1)
void c_QWidget__setWindowIconText_QString(void *thisObj, const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setWindowIconText(arg__1);
}

// tag=1050
// setWindowModified(bool arg__1)
void c_QWidget__setWindowModified_bool(void *thisObj, bool arg__1) {
  // tag=1010
  fromPtr(thisObj)->setWindowModified(arg__1);
}

// tag=1050
// setWindowOpacity(qreal level)
void c_QWidget__setWindowOpacity_qreal(void *thisObj, qreal level) {
  // tag=1010
  fromPtr(thisObj)->setWindowOpacity(level);
}

// tag=1050
// setWindowRole(const QString & arg__1)
void c_QWidget__setWindowRole_QString(void *thisObj, const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setWindowRole(arg__1);
}

// tag=1050
// setWindowTitle(const QString & arg__1)
void c_QWidget__setWindowTitle_QString(void *thisObj, const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setWindowTitle(arg__1);
}

// tag=1050
// sharedPainter() const
void *c_QWidget__sharedPainter(void *thisObj) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->sharedPainter_nocallback();
}

// tag=1050
// show()
void c_QWidget__show(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->show();
}

// tag=1050
// showFullScreen()
void c_QWidget__showFullScreen(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->showFullScreen();
}

// tag=1050
// showMaximized()
void c_QWidget__showMaximized(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->showMaximized();
}

// tag=1050
// showMinimized()
void c_QWidget__showMinimized(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->showMinimized();
}

// tag=1050
// showNormal()
void c_QWidget__showNormal(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->showNormal();
}

// tag=1050
// size() const
void *c_QWidget__size(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->size()};
}

// tag=1050
// sizeHint() const
void *c_QWidget__sizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QWidget_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->sizeHint_nocallback();
        } else {
          return targetPtr->sizeHint();
        }
      }()};
}

// tag=1050
// sizeIncrement() const
void *c_QWidget__sizeIncrement(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->sizeIncrement()};
}

// tag=1050
// sizePolicy() const
void *c_QWidget__sizePolicy(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSizePolicy>{fromPtr(thisObj)->sizePolicy()};
}

// tag=1050
// stackUnder(QWidget * arg__1)
void c_QWidget__stackUnder_QWidget(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->stackUnder(arg__1);
}

// tag=1050
// statusTip() const
void *c_QWidget__statusTip(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->statusTip()};
}

// tag=1050
// style() const
void *c_QWidget__style(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->style();
}

// tag=1050
// styleSheet() const
void *c_QWidget__styleSheet(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->styleSheet()};
}

// tag=1050
// toolTip() const
void *c_QWidget__toolTip(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->toolTip()};
}

// tag=1050
// toolTipDuration() const
int c_QWidget__toolTipDuration(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->toolTipDuration();
}

// tag=1050
// topLevelWidget() const
void *c_QWidget__topLevelWidget(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->topLevelWidget();
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QWidget__tr_char_char_int(const char *s, const char *c, int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QWidget_wrapper::tr(s, c, n)};
}

// tag=1050
// underMouse() const
bool c_QWidget__underMouse(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->underMouse();
}

// tag=1050
// unsetCursor()
void c_QWidget__unsetCursor(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->unsetCursor();
}

// tag=1050
// unsetLayoutDirection()
void c_QWidget__unsetLayoutDirection(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->unsetLayoutDirection();
}

// tag=1050
// unsetLocale()
void c_QWidget__unsetLocale(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->unsetLocale();
}

// tag=1050
// update()
void c_QWidget__update(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->update();
}

// tag=1050
// update(const QRect & arg__1)
void c_QWidget__update_QRect(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->update(arg__1);
}

// tag=1050
// update(const QRegion & arg__1)
void c_QWidget__update_QRegion(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QRegion *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->update(arg__1);
}

// tag=1050
// update(int x, int y, int w, int h)
void c_QWidget__update_int_int_int_int(void *thisObj, int x, int y, int w,
                                       int h) {
  // tag=1010
  fromPtr(thisObj)->update(x, y, w, h);
}

// tag=1050
// updateGeometry()
void c_QWidget__updateGeometry(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->updateGeometry();
}

// tag=1050
// updateMicroFocus()
void c_QWidget__updateMicroFocus(void *thisObj) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->updateMicroFocus();
}

// tag=1050
// updatesEnabled() const
bool c_QWidget__updatesEnabled(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->updatesEnabled();
}

// tag=1050
// visibleRegion() const
void *c_QWidget__visibleRegion(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRegion>{fromPtr(thisObj)->visibleRegion()};
}

// tag=1050
// whatsThis() const
void *c_QWidget__whatsThis(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->whatsThis()};
}

// tag=1050
// width() const
int c_QWidget__width(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->width();
}

// tag=1050
// window() const
void *c_QWidget__window(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->window();
}

// tag=1050
// windowFilePath() const
void *c_QWidget__windowFilePath(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->windowFilePath()};
}

// tag=1050
// windowHandle() const
void *c_QWidget__windowHandle(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->windowHandle();
}

// tag=1050
// windowIcon() const
void *c_QWidget__windowIcon(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QIcon>{fromPtr(thisObj)->windowIcon()};
}

// tag=1050
// windowIconChanged(const QIcon & icon)
void c_QWidget__windowIconChanged_QIcon(void *thisObj, void *icon_) {
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  // tag=1010
  fromPtr(thisObj)->windowIconChanged(icon);
}

// tag=1079
void c_QWidget__onWindowIconChanged_QIcon(void *thisObj, void *contextQObject,
                                          void *callback) {
  auto instance = reinterpret_cast<QWidget *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QWidget::windowIconChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// windowIconText() const
void *c_QWidget__windowIconText(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->windowIconText()};
}

// tag=1050
// windowIconTextChanged(const QString & iconText)
void c_QWidget__windowIconTextChanged_QString(void *thisObj,
                                              const char *iconText_) {
  const auto iconText = QString::fromUtf8(iconText_);
  // tag=1010
  fromPtr(thisObj)->windowIconTextChanged(iconText);
}

// tag=1079
void c_QWidget__onWindowIconTextChanged_QString(void *thisObj,
                                                void *contextQObject,
                                                void *callback) {
  auto instance = reinterpret_cast<QWidget *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QWidget::windowIconTextChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// windowOpacity() const
qreal c_QWidget__windowOpacity(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->windowOpacity();
}

// tag=1050
// windowRole() const
void *c_QWidget__windowRole(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->windowRole()};
}

// tag=1050
// windowTitle() const
void *c_QWidget__windowTitle(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->windowTitle()};
}

// tag=1050
// windowTitleChanged(const QString & title)
void c_QWidget__windowTitleChanged_QString(void *thisObj, const char *title_) {
  const auto title = QString::fromUtf8(title_);
  // tag=1010
  fromPtr(thisObj)->windowTitleChanged(title);
}

// tag=1079
void c_QWidget__onWindowTitleChanged_QString(void *thisObj,
                                             void *contextQObject,
                                             void *callback) {
  auto instance = reinterpret_cast<QWidget *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QWidget::windowTitleChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// x() const
int c_QWidget__x(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->x();
}

// tag=1050
// y() const
int c_QWidget__y(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->y();
}
void c_QWidget__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QWidget__registerVirtualMethodCallback(void *ptr, void *callback,
                                              int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1124:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 944:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_customEvent>(
        callback);
    break;
  case 1141:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_devType>(callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_event>(callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1150:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QWidget_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1164:
    wrapper->m_hasHeightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_hasHeightForWidth>(
        callback);
    break;
  case 1168:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 1171:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_initPainter>(
        callback);
    break;
  case 1196:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1216:
    wrapper->m_minimumSizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_minimumSizeHint>(
        callback);
    break;
  case 1218:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QWidget_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1220:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_mouseMoveEvent>(
        callback);
    break;
  case 1221:
    wrapper->m_mousePressEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_mousePressEvent>(
        callback);
    break;
  case 1222:
    wrapper->m_mouseReleaseEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_mouseReleaseEvent>(
        callback);
    break;
  case 1229:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 1309:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_setVisible>(
        callback);
    break;
  case 1318:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1326:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_sizeHint>(
        callback);
    break;
  }
}
}
