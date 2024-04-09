/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QWidget_c.h"

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
QWidget_wrapper::QWidget_wrapper(QWidget *parent) : ::QWidget(parent) {}
bool QWidget_wrapper::acceptDrops() const { return ::QWidget::acceptDrops(); }
QString QWidget_wrapper::accessibleDescription() const {
  return ::QWidget::accessibleDescription();
}
QString QWidget_wrapper::accessibleName() const {
  return ::QWidget::accessibleName();
}
QList<QAction *> QWidget_wrapper::actions() const {
  return ::QWidget::actions();
}
void QWidget_wrapper::activateWindow() { ::QWidget::activateWindow(); }
void QWidget_wrapper::addAction(QAction *action) {
  ::QWidget::addAction(action);
}
QAction *QWidget_wrapper::addAction(const QIcon &icon, const QString &text) {
  return ::QWidget::addAction(icon, text);
}
QAction *QWidget_wrapper::addAction(const QIcon &icon, const QString &text,
                                    const QKeySequence &shortcut) {
  return ::QWidget::addAction(icon, text, shortcut);
}
QAction *QWidget_wrapper::addAction(const QIcon &icon, const QString &text,
                                    const QKeySequence &shortcut,
                                    const QObject *receiver,
                                    const char *member) {
  return ::QWidget::addAction(icon, text, shortcut, receiver, member);
}
QAction *QWidget_wrapper::addAction(const QIcon &icon, const QString &text,
                                    const QObject *receiver,
                                    const char *member) {
  return ::QWidget::addAction(icon, text, receiver, member);
}
QAction *QWidget_wrapper::addAction(const QString &text) {
  return ::QWidget::addAction(text);
}
QAction *QWidget_wrapper::addAction(const QString &text,
                                    const QKeySequence &shortcut) {
  return ::QWidget::addAction(text, shortcut);
}
QAction *QWidget_wrapper::addAction(const QString &text,
                                    const QKeySequence &shortcut,
                                    const QObject *receiver,
                                    const char *member) {
  return ::QWidget::addAction(text, shortcut, receiver, member);
}
QAction *QWidget_wrapper::addAction(const QString &text,
                                    const QObject *receiver,
                                    const char *member) {
  return ::QWidget::addAction(text, receiver, member);
}
void QWidget_wrapper::addActions(const QList<QAction *> &actions) {
  ::QWidget::addActions(actions);
}
void QWidget_wrapper::adjustSize() { ::QWidget::adjustSize(); }
bool QWidget_wrapper::autoFillBackground() const {
  return ::QWidget::autoFillBackground();
}
QPalette::ColorRole QWidget_wrapper::backgroundRole() const {
  return ::QWidget::backgroundRole();
}
QSize QWidget_wrapper::baseSize() const { return ::QWidget::baseSize(); }
void QWidget_wrapper::changeEvent(QEvent *arg__1) {
  if (m_changeEventCallback) {
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QWidget::changeEvent(arg__1);
  }
}
void QWidget_wrapper::changeEvent_nocallback(QEvent *arg__1) {
  ::QWidget::changeEvent(arg__1);
}
QWidget *QWidget_wrapper::childAt(const QPoint &p) const {
  return ::QWidget::childAt(p);
}
QWidget *QWidget_wrapper::childAt(int x, int y) const {
  return ::QWidget::childAt(x, y);
}
QRect QWidget_wrapper::childrenRect() const {
  return ::QWidget::childrenRect();
}
QRegion QWidget_wrapper::childrenRegion() const {
  return ::QWidget::childrenRegion();
}
void QWidget_wrapper::clearFocus() { ::QWidget::clearFocus(); }
void QWidget_wrapper::clearMask() { ::QWidget::clearMask(); }
bool QWidget_wrapper::close() { return ::QWidget::close(); }
QRect QWidget_wrapper::contentsRect() const {
  return ::QWidget::contentsRect();
}
void QWidget_wrapper::create() { ::QWidget::create(); }
void QWidget_wrapper::createWinId() { ::QWidget::createWinId(); }
QWidget *QWidget_wrapper::createWindowContainer(QWindow *window,
                                                QWidget *parent) {
  return ::QWidget::createWindowContainer(window, parent);
}
void QWidget_wrapper::customContextMenuRequested(const QPoint &pos) {
  ::QWidget::customContextMenuRequested(pos);
}
void QWidget_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QWidget::customEvent(event);
  }
}
void QWidget_wrapper::customEvent_nocallback(QEvent *event) {
  ::QWidget::customEvent(event);
}
void QWidget_wrapper::destroy(bool destroyWindow, bool destroySubWindows) {
  ::QWidget::destroy(destroyWindow, destroySubWindows);
}
int QWidget_wrapper::devType() const {
  if (m_devTypeCallback) {
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QWidget::devType();
  }
}
int QWidget_wrapper::devType_nocallback() const { return ::QWidget::devType(); }
void QWidget_wrapper::ensurePolished() const { ::QWidget::ensurePolished(); }
bool QWidget_wrapper::event(QEvent *event) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    return ::QWidget::event(event);
  }
}
bool QWidget_wrapper::event_nocallback(QEvent *event) {
  return ::QWidget::event(event);
}
bool QWidget_wrapper::eventFilter(QObject *watched, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QWidget::eventFilter(watched, event);
  }
}
bool QWidget_wrapper::eventFilter_nocallback(QObject *watched, QEvent *event) {
  return ::QWidget::eventFilter(watched, event);
}
bool QWidget_wrapper::focusNextChild() { return ::QWidget::focusNextChild(); }
bool QWidget_wrapper::focusNextPrevChild(bool next) {
  if (m_focusNextPrevChildCallback) {
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    return ::QWidget::focusNextPrevChild(next);
  }
}
bool QWidget_wrapper::focusNextPrevChild_nocallback(bool next) {
  return ::QWidget::focusNextPrevChild(next);
}
bool QWidget_wrapper::focusPreviousChild() {
  return ::QWidget::focusPreviousChild();
}
QWidget *QWidget_wrapper::focusProxy() const { return ::QWidget::focusProxy(); }
QWidget *QWidget_wrapper::focusWidget() const {
  return ::QWidget::focusWidget();
}
const QFont &QWidget_wrapper::font() const { return ::QWidget::font(); }
QPalette::ColorRole QWidget_wrapper::foregroundRole() const {
  return ::QWidget::foregroundRole();
}
QRect QWidget_wrapper::frameGeometry() const {
  return ::QWidget::frameGeometry();
}
QSize QWidget_wrapper::frameSize() const { return ::QWidget::frameSize(); }
const QRect &QWidget_wrapper::geometry() const { return ::QWidget::geometry(); }
QPixmap QWidget_wrapper::grab(const QRect &rectangle) {
  return ::QWidget::grab(rectangle);
}
void QWidget_wrapper::grabKeyboard() { ::QWidget::grabKeyboard(); }
void QWidget_wrapper::grabMouse() { ::QWidget::grabMouse(); }
int QWidget_wrapper::grabShortcut(const QKeySequence &key) {
  return ::QWidget::grabShortcut(key);
}
bool QWidget_wrapper::hasFocus() const { return ::QWidget::hasFocus(); }
bool QWidget_wrapper::hasHeightForWidth() const {
  if (m_hasHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QWidget::hasHeightForWidth();
  }
}
bool QWidget_wrapper::hasHeightForWidth_nocallback() const {
  return ::QWidget::hasHeightForWidth();
}
bool QWidget_wrapper::hasMouseTracking() const {
  return ::QWidget::hasMouseTracking();
}
bool QWidget_wrapper::hasTabletTracking() const {
  return ::QWidget::hasTabletTracking();
}
int QWidget_wrapper::height() const { return ::QWidget::height(); }
int QWidget_wrapper::heightForWidth(int arg__1) const {
  if (m_heightForWidthCallback) {
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QWidget::heightForWidth(arg__1);
  }
}
int QWidget_wrapper::heightForWidth_nocallback(int arg__1) const {
  return ::QWidget::heightForWidth(arg__1);
}
void QWidget_wrapper::hide() { ::QWidget::hide(); }
void QWidget_wrapper::initPainter(QPainter *painter) const {
  if (m_initPainterCallback) {
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    ::QWidget::initPainter(painter);
  }
}
void QWidget_wrapper::initPainter_nocallback(QPainter *painter) const {
  ::QWidget::initPainter(painter);
}
void QWidget_wrapper::insertAction(QAction *before, QAction *action) {
  ::QWidget::insertAction(before, action);
}
void QWidget_wrapper::insertActions(QAction *before,
                                    const QList<QAction *> &actions) {
  ::QWidget::insertActions(before, actions);
}
bool QWidget_wrapper::isActiveWindow() const {
  return ::QWidget::isActiveWindow();
}
bool QWidget_wrapper::isAncestorOf(const QWidget *child) const {
  return ::QWidget::isAncestorOf(child);
}
bool QWidget_wrapper::isEnabled() const { return ::QWidget::isEnabled(); }
bool QWidget_wrapper::isEnabledTo(const QWidget *arg__1) const {
  return ::QWidget::isEnabledTo(arg__1);
}
bool QWidget_wrapper::isFullScreen() const { return ::QWidget::isFullScreen(); }
bool QWidget_wrapper::isHidden() const { return ::QWidget::isHidden(); }
bool QWidget_wrapper::isLeftToRight() const {
  return ::QWidget::isLeftToRight();
}
bool QWidget_wrapper::isMaximized() const { return ::QWidget::isMaximized(); }
bool QWidget_wrapper::isMinimized() const { return ::QWidget::isMinimized(); }
bool QWidget_wrapper::isModal() const { return ::QWidget::isModal(); }
bool QWidget_wrapper::isRightToLeft() const {
  return ::QWidget::isRightToLeft();
}
bool QWidget_wrapper::isVisible() const { return ::QWidget::isVisible(); }
bool QWidget_wrapper::isVisibleTo(const QWidget *arg__1) const {
  return ::QWidget::isVisibleTo(arg__1);
}
bool QWidget_wrapper::isWindow() const { return ::QWidget::isWindow(); }
bool QWidget_wrapper::isWindowModified() const {
  return ::QWidget::isWindowModified();
}
QWidget *QWidget_wrapper::keyboardGrabber() {
  return ::QWidget::keyboardGrabber();
}
QLayout *QWidget_wrapper::layout() const { return ::QWidget::layout(); }
Qt::LayoutDirection QWidget_wrapper::layoutDirection() const {
  return ::QWidget::layoutDirection();
}
void QWidget_wrapper::leaveEvent(QEvent *event) {
  if (m_leaveEventCallback) {
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QWidget::leaveEvent(event);
  }
}
void QWidget_wrapper::leaveEvent_nocallback(QEvent *event) {
  ::QWidget::leaveEvent(event);
}
void QWidget_wrapper::lower() { ::QWidget::lower(); }
QPoint QWidget_wrapper::mapFrom(const QWidget *arg__1,
                                const QPoint &arg__2) const {
  return ::QWidget::mapFrom(arg__1, arg__2);
}
QPointF QWidget_wrapper::mapFrom(const QWidget *arg__1,
                                 const QPointF &arg__2) const {
  return ::QWidget::mapFrom(arg__1, arg__2);
}
QPoint QWidget_wrapper::mapFromGlobal(const QPoint &arg__1) const {
  return ::QWidget::mapFromGlobal(arg__1);
}
QPointF QWidget_wrapper::mapFromGlobal(const QPointF &arg__1) const {
  return ::QWidget::mapFromGlobal(arg__1);
}
QPoint QWidget_wrapper::mapFromParent(const QPoint &arg__1) const {
  return ::QWidget::mapFromParent(arg__1);
}
QPointF QWidget_wrapper::mapFromParent(const QPointF &arg__1) const {
  return ::QWidget::mapFromParent(arg__1);
}
QPoint QWidget_wrapper::mapTo(const QWidget *arg__1,
                              const QPoint &arg__2) const {
  return ::QWidget::mapTo(arg__1, arg__2);
}
QPointF QWidget_wrapper::mapTo(const QWidget *arg__1,
                               const QPointF &arg__2) const {
  return ::QWidget::mapTo(arg__1, arg__2);
}
QPoint QWidget_wrapper::mapToGlobal(const QPoint &arg__1) const {
  return ::QWidget::mapToGlobal(arg__1);
}
QPointF QWidget_wrapper::mapToGlobal(const QPointF &arg__1) const {
  return ::QWidget::mapToGlobal(arg__1);
}
QPoint QWidget_wrapper::mapToParent(const QPoint &arg__1) const {
  return ::QWidget::mapToParent(arg__1);
}
QPointF QWidget_wrapper::mapToParent(const QPointF &arg__1) const {
  return ::QWidget::mapToParent(arg__1);
}
QRegion QWidget_wrapper::mask() const { return ::QWidget::mask(); }
int QWidget_wrapper::maximumHeight() const {
  return ::QWidget::maximumHeight();
}
QSize QWidget_wrapper::maximumSize() const { return ::QWidget::maximumSize(); }
int QWidget_wrapper::maximumWidth() const { return ::QWidget::maximumWidth(); }
int QWidget_wrapper::minimumHeight() const {
  return ::QWidget::minimumHeight();
}
QSize QWidget_wrapper::minimumSize() const { return ::QWidget::minimumSize(); }
QSize QWidget_wrapper::minimumSizeHint() const {
  if (m_minimumSizeHintCallback) {
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QWidget::minimumSizeHint();
  }
}
QSize QWidget_wrapper::minimumSizeHint_nocallback() const {
  return ::QWidget::minimumSizeHint();
}
int QWidget_wrapper::minimumWidth() const { return ::QWidget::minimumWidth(); }
void QWidget_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  if (m_mouseDoubleClickEventCallback) {
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QWidget::mouseDoubleClickEvent(event);
  }
}
void QWidget_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *event) {
  ::QWidget::mouseDoubleClickEvent(event);
}
QWidget *QWidget_wrapper::mouseGrabber() { return ::QWidget::mouseGrabber(); }
void QWidget_wrapper::mouseMoveEvent(QMouseEvent *event) {
  if (m_mouseMoveEventCallback) {
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QWidget::mouseMoveEvent(event);
  }
}
void QWidget_wrapper::mouseMoveEvent_nocallback(QMouseEvent *event) {
  ::QWidget::mouseMoveEvent(event);
}
void QWidget_wrapper::mousePressEvent(QMouseEvent *event) {
  if (m_mousePressEventCallback) {
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QWidget::mousePressEvent(event);
  }
}
void QWidget_wrapper::mousePressEvent_nocallback(QMouseEvent *event) {
  ::QWidget::mousePressEvent(event);
}
void QWidget_wrapper::mouseReleaseEvent(QMouseEvent *event) {
  if (m_mouseReleaseEventCallback) {
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QWidget::mouseReleaseEvent(event);
  }
}
void QWidget_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *event) {
  ::QWidget::mouseReleaseEvent(event);
}
void QWidget_wrapper::move(const QPoint &arg__1) { ::QWidget::move(arg__1); }
void QWidget_wrapper::move(int x, int y) { ::QWidget::move(x, y); }
QWidget *QWidget_wrapper::nativeParentWidget() const {
  return ::QWidget::nativeParentWidget();
}
QWidget *QWidget_wrapper::nextInFocusChain() const {
  return ::QWidget::nextInFocusChain();
}
QRect QWidget_wrapper::normalGeometry() const {
  return ::QWidget::normalGeometry();
}
void QWidget_wrapper::paintEvent(QPaintEvent *event) {
  if (m_paintEventCallback) {
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QWidget::paintEvent(event);
  }
}
void QWidget_wrapper::paintEvent_nocallback(QPaintEvent *event) {
  ::QWidget::paintEvent(event);
}
const QPalette &QWidget_wrapper::palette() const {
  return ::QWidget::palette();
}
QWidget *QWidget_wrapper::parentWidget() const {
  return ::QWidget::parentWidget();
}
QPoint QWidget_wrapper::pos() const { return ::QWidget::pos(); }
QWidget *QWidget_wrapper::previousInFocusChain() const {
  return ::QWidget::previousInFocusChain();
}
void QWidget_wrapper::raise() { ::QWidget::raise(); }
QRect QWidget_wrapper::rect() const { return ::QWidget::rect(); }
void QWidget_wrapper::releaseKeyboard() { ::QWidget::releaseKeyboard(); }
void QWidget_wrapper::releaseMouse() { ::QWidget::releaseMouse(); }
void QWidget_wrapper::releaseShortcut(int id) {
  ::QWidget::releaseShortcut(id);
}
void QWidget_wrapper::removeAction(QAction *action) {
  ::QWidget::removeAction(action);
}
void QWidget_wrapper::render(QPainter *painter, const QPoint &targetOffset,
                             const QRegion &sourceRegion) {
  ::QWidget::render(painter, targetOffset, sourceRegion);
}
void QWidget_wrapper::repaint() { ::QWidget::repaint(); }
void QWidget_wrapper::repaint(const QRect &arg__1) {
  ::QWidget::repaint(arg__1);
}
void QWidget_wrapper::repaint(const QRegion &arg__1) {
  ::QWidget::repaint(arg__1);
}
void QWidget_wrapper::repaint(int x, int y, int w, int h) {
  ::QWidget::repaint(x, y, w, h);
}
void QWidget_wrapper::resize(const QSize &arg__1) { ::QWidget::resize(arg__1); }
void QWidget_wrapper::resize(int w, int h) { ::QWidget::resize(w, h); }
bool QWidget_wrapper::restoreGeometry(const QByteArray &geometry) {
  return ::QWidget::restoreGeometry(geometry);
}
QByteArray QWidget_wrapper::saveGeometry() const {
  return ::QWidget::saveGeometry();
}
void QWidget_wrapper::scroll(int dx, int dy) { ::QWidget::scroll(dx, dy); }
void QWidget_wrapper::scroll(int dx, int dy, const QRect &arg__3) {
  ::QWidget::scroll(dx, dy, arg__3);
}
void QWidget_wrapper::setAcceptDrops(bool on) { ::QWidget::setAcceptDrops(on); }
void QWidget_wrapper::setAccessibleDescription(const QString &description) {
  ::QWidget::setAccessibleDescription(description);
}
void QWidget_wrapper::setAccessibleName(const QString &name) {
  ::QWidget::setAccessibleName(name);
}
void QWidget_wrapper::setAutoFillBackground(bool enabled) {
  ::QWidget::setAutoFillBackground(enabled);
}
void QWidget_wrapper::setBackgroundRole(QPalette::ColorRole arg__1) {
  ::QWidget::setBackgroundRole(arg__1);
}
void QWidget_wrapper::setBaseSize(const QSize &arg__1) {
  ::QWidget::setBaseSize(arg__1);
}
void QWidget_wrapper::setBaseSize(int basew, int baseh) {
  ::QWidget::setBaseSize(basew, baseh);
}
void QWidget_wrapper::setContentsMargins(int left, int top, int right,
                                         int bottom) {
  ::QWidget::setContentsMargins(left, top, right, bottom);
}
void QWidget_wrapper::setDisabled(bool arg__1) {
  ::QWidget::setDisabled(arg__1);
}
void QWidget_wrapper::setEnabled(bool arg__1) { ::QWidget::setEnabled(arg__1); }
void QWidget_wrapper::setFixedHeight(int h) { ::QWidget::setFixedHeight(h); }
void QWidget_wrapper::setFixedSize(const QSize &arg__1) {
  ::QWidget::setFixedSize(arg__1);
}
void QWidget_wrapper::setFixedSize(int w, int h) {
  ::QWidget::setFixedSize(w, h);
}
void QWidget_wrapper::setFixedWidth(int w) { ::QWidget::setFixedWidth(w); }
void QWidget_wrapper::setFocus() { ::QWidget::setFocus(); }
void QWidget_wrapper::setFocusProxy(QWidget *arg__1) {
  ::QWidget::setFocusProxy(arg__1);
}
void QWidget_wrapper::setFont(const QFont &arg__1) {
  ::QWidget::setFont(arg__1);
}
void QWidget_wrapper::setForegroundRole(QPalette::ColorRole arg__1) {
  ::QWidget::setForegroundRole(arg__1);
}
void QWidget_wrapper::setGeometry(const QRect &arg__1) {
  ::QWidget::setGeometry(arg__1);
}
void QWidget_wrapper::setGeometry(int x, int y, int w, int h) {
  ::QWidget::setGeometry(x, y, w, h);
}
void QWidget_wrapper::setHidden(bool hidden) { ::QWidget::setHidden(hidden); }
void QWidget_wrapper::setLayout(QLayout *arg__1) {
  ::QWidget::setLayout(arg__1);
}
void QWidget_wrapper::setLayoutDirection(Qt::LayoutDirection direction) {
  ::QWidget::setLayoutDirection(direction);
}
void QWidget_wrapper::setMask(const QRegion &arg__1) {
  ::QWidget::setMask(arg__1);
}
void QWidget_wrapper::setMaximumHeight(int maxh) {
  ::QWidget::setMaximumHeight(maxh);
}
void QWidget_wrapper::setMaximumSize(const QSize &arg__1) {
  ::QWidget::setMaximumSize(arg__1);
}
void QWidget_wrapper::setMaximumSize(int maxw, int maxh) {
  ::QWidget::setMaximumSize(maxw, maxh);
}
void QWidget_wrapper::setMaximumWidth(int maxw) {
  ::QWidget::setMaximumWidth(maxw);
}
void QWidget_wrapper::setMinimumHeight(int minh) {
  ::QWidget::setMinimumHeight(minh);
}
void QWidget_wrapper::setMinimumSize(const QSize &arg__1) {
  ::QWidget::setMinimumSize(arg__1);
}
void QWidget_wrapper::setMinimumSize(int minw, int minh) {
  ::QWidget::setMinimumSize(minw, minh);
}
void QWidget_wrapper::setMinimumWidth(int minw) {
  ::QWidget::setMinimumWidth(minw);
}
void QWidget_wrapper::setMouseTracking(bool enable) {
  ::QWidget::setMouseTracking(enable);
}
void QWidget_wrapper::setPalette(const QPalette &arg__1) {
  ::QWidget::setPalette(arg__1);
}
void QWidget_wrapper::setShortcutAutoRepeat(int id, bool enable) {
  ::QWidget::setShortcutAutoRepeat(id, enable);
}
void QWidget_wrapper::setShortcutEnabled(int id, bool enable) {
  ::QWidget::setShortcutEnabled(id, enable);
}
void QWidget_wrapper::setSizeIncrement(const QSize &arg__1) {
  ::QWidget::setSizeIncrement(arg__1);
}
void QWidget_wrapper::setSizeIncrement(int w, int h) {
  ::QWidget::setSizeIncrement(w, h);
}
void QWidget_wrapper::setSizePolicy(QSizePolicy arg__1) {
  ::QWidget::setSizePolicy(arg__1);
}
void QWidget_wrapper::setSizePolicy(QSizePolicy::Policy horizontal,
                                    QSizePolicy::Policy vertical) {
  ::QWidget::setSizePolicy(horizontal, vertical);
}
void QWidget_wrapper::setStatusTip(const QString &arg__1) {
  ::QWidget::setStatusTip(arg__1);
}
void QWidget_wrapper::setStyle(QStyle *arg__1) { ::QWidget::setStyle(arg__1); }
void QWidget_wrapper::setStyleSheet(const QString &styleSheet) {
  ::QWidget::setStyleSheet(styleSheet);
}
void QWidget_wrapper::setTabOrder(QWidget *arg__1, QWidget *arg__2) {
  ::QWidget::setTabOrder(arg__1, arg__2);
}
void QWidget_wrapper::setTabletTracking(bool enable) {
  ::QWidget::setTabletTracking(enable);
}
void QWidget_wrapper::setToolTip(const QString &arg__1) {
  ::QWidget::setToolTip(arg__1);
}
void QWidget_wrapper::setToolTipDuration(int msec) {
  ::QWidget::setToolTipDuration(msec);
}
void QWidget_wrapper::setUpdatesEnabled(bool enable) {
  ::QWidget::setUpdatesEnabled(enable);
}
void QWidget_wrapper::setVisible(bool visible) {
  if (m_setVisibleCallback) {
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    ::QWidget::setVisible(visible);
  }
}
void QWidget_wrapper::setVisible_nocallback(bool visible) {
  ::QWidget::setVisible(visible);
}
void QWidget_wrapper::setWhatsThis(const QString &arg__1) {
  ::QWidget::setWhatsThis(arg__1);
}
void QWidget_wrapper::setWindowFilePath(const QString &filePath) {
  ::QWidget::setWindowFilePath(filePath);
}
void QWidget_wrapper::setWindowIcon(const QIcon &icon) {
  ::QWidget::setWindowIcon(icon);
}
void QWidget_wrapper::setWindowIconText(const QString &arg__1) {
  ::QWidget::setWindowIconText(arg__1);
}
void QWidget_wrapper::setWindowModified(bool arg__1) {
  ::QWidget::setWindowModified(arg__1);
}
void QWidget_wrapper::setWindowOpacity(qreal level) {
  ::QWidget::setWindowOpacity(level);
}
void QWidget_wrapper::setWindowRole(const QString &arg__1) {
  ::QWidget::setWindowRole(arg__1);
}
void QWidget_wrapper::setWindowTitle(const QString &arg__1) {
  ::QWidget::setWindowTitle(arg__1);
}
QPainter *QWidget_wrapper::sharedPainter() const {
  if (m_sharedPainterCallback) {
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QWidget::sharedPainter();
  }
}
QPainter *QWidget_wrapper::sharedPainter_nocallback() const {
  return ::QWidget::sharedPainter();
}
void QWidget_wrapper::show() { ::QWidget::show(); }
void QWidget_wrapper::showFullScreen() { ::QWidget::showFullScreen(); }
void QWidget_wrapper::showMaximized() { ::QWidget::showMaximized(); }
void QWidget_wrapper::showMinimized() { ::QWidget::showMinimized(); }
void QWidget_wrapper::showNormal() { ::QWidget::showNormal(); }
QSize QWidget_wrapper::size() const { return ::QWidget::size(); }
QSize QWidget_wrapper::sizeHint() const {
  if (m_sizeHintCallback) {
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QWidget::sizeHint();
  }
}
QSize QWidget_wrapper::sizeHint_nocallback() const {
  return ::QWidget::sizeHint();
}
QSize QWidget_wrapper::sizeIncrement() const {
  return ::QWidget::sizeIncrement();
}
QSizePolicy QWidget_wrapper::sizePolicy() const {
  return ::QWidget::sizePolicy();
}
void QWidget_wrapper::stackUnder(QWidget *arg__1) {
  ::QWidget::stackUnder(arg__1);
}
QString QWidget_wrapper::statusTip() const { return ::QWidget::statusTip(); }
QStyle *QWidget_wrapper::style() const { return ::QWidget::style(); }
QString QWidget_wrapper::styleSheet() const { return ::QWidget::styleSheet(); }
QString QWidget_wrapper::toolTip() const { return ::QWidget::toolTip(); }
int QWidget_wrapper::toolTipDuration() const {
  return ::QWidget::toolTipDuration();
}
QWidget *QWidget_wrapper::topLevelWidget() const {
  return ::QWidget::topLevelWidget();
}
QString QWidget_wrapper::tr(const char *s, const char *c, int n) {
  return ::QWidget::tr(s, c, n);
}
bool QWidget_wrapper::underMouse() const { return ::QWidget::underMouse(); }
void QWidget_wrapper::unsetCursor() { ::QWidget::unsetCursor(); }
void QWidget_wrapper::unsetLayoutDirection() {
  ::QWidget::unsetLayoutDirection();
}
void QWidget_wrapper::unsetLocale() { ::QWidget::unsetLocale(); }
void QWidget_wrapper::update() { ::QWidget::update(); }
void QWidget_wrapper::update(const QRect &arg__1) { ::QWidget::update(arg__1); }
void QWidget_wrapper::update(const QRegion &arg__1) {
  ::QWidget::update(arg__1);
}
void QWidget_wrapper::update(int x, int y, int w, int h) {
  ::QWidget::update(x, y, w, h);
}
void QWidget_wrapper::updateGeometry() { ::QWidget::updateGeometry(); }
void QWidget_wrapper::updateMicroFocus() { ::QWidget::updateMicroFocus(); }
bool QWidget_wrapper::updatesEnabled() const {
  return ::QWidget::updatesEnabled();
}
QRegion QWidget_wrapper::visibleRegion() const {
  return ::QWidget::visibleRegion();
}
QString QWidget_wrapper::whatsThis() const { return ::QWidget::whatsThis(); }
int QWidget_wrapper::width() const { return ::QWidget::width(); }
QWidget *QWidget_wrapper::window() const { return ::QWidget::window(); }
QString QWidget_wrapper::windowFilePath() const {
  return ::QWidget::windowFilePath();
}
QWindow *QWidget_wrapper::windowHandle() const {
  return ::QWidget::windowHandle();
}
QIcon QWidget_wrapper::windowIcon() const { return ::QWidget::windowIcon(); }
void QWidget_wrapper::windowIconChanged(const QIcon &icon) {
  ::QWidget::windowIconChanged(icon);
}
QString QWidget_wrapper::windowIconText() const {
  return ::QWidget::windowIconText();
}
void QWidget_wrapper::windowIconTextChanged(const QString &iconText) {
  ::QWidget::windowIconTextChanged(iconText);
}
qreal QWidget_wrapper::windowOpacity() const {
  return ::QWidget::windowOpacity();
}
QString QWidget_wrapper::windowRole() const { return ::QWidget::windowRole(); }
QString QWidget_wrapper::windowTitle() const {
  return ::QWidget::windowTitle();
}
void QWidget_wrapper::windowTitleChanged(const QString &title) {
  ::QWidget::windowTitleChanged(title);
}
int QWidget_wrapper::x() const { return ::QWidget::x(); }
int QWidget_wrapper::y() const { return ::QWidget::y(); }
QWidget_wrapper::~QWidget_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QWidget *fromPtr(void *ptr) { return reinterpret_cast<QWidget *>(ptr); }
static QtDartBindings_wrappersNS::QWidget_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QWidget_wrapper *>(ptr);
}
extern "C" {
void c_QWidget_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QWidget_wrapper *>(cppObj);
}
void *c_QWidget__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QWidget_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
// acceptDrops() const
bool c_QWidget__acceptDrops(void *thisObj) {
  const auto &result = fromPtr(thisObj)->acceptDrops();
  return result;
}
// accessibleDescription() const
void *c_QWidget__accessibleDescription(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      fromPtr(thisObj)->accessibleDescription()};
  return result;
}
// accessibleName() const
void *c_QWidget__accessibleName(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->accessibleName()};
  return result;
}
// actions() const
void *c_QWidget__actions(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QAction *>>{
      fromPtr(thisObj)->actions()};
  return result;
}
// activateWindow()
void c_QWidget__activateWindow(void *thisObj) {
  fromPtr(thisObj)->activateWindow();
}
// addAction(QAction * action)
void c_QWidget__addAction_QAction(void *thisObj, void *action_) {
  auto action = reinterpret_cast<QAction *>(action_);
  fromPtr(thisObj)->addAction(action);
}
// addAction(const QIcon & icon, const QString & text)
void *c_QWidget__addAction_QIcon_QString(void *thisObj, void *icon_,
                                         const char *text_) {
  assert(icon_);
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  const auto text = QString::fromUtf8(text_);
  const auto &result = fromPtr(thisObj)->addAction(icon, text);
  free((char *)text_);
  return result;
}
// addAction(const QIcon & icon, const QString & text, const QKeySequence &
// shortcut)
void *c_QWidget__addAction_QIcon_QString_QKeySequence(void *thisObj,
                                                      void *icon_,
                                                      const char *text_,
                                                      void *shortcut_) {
  assert(icon_);
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  const auto text = QString::fromUtf8(text_);
  assert(shortcut_);
  auto &shortcut = *reinterpret_cast<QKeySequence *>(shortcut_);
  const auto &result = fromPtr(thisObj)->addAction(icon, text, shortcut);
  free((char *)text_);
  return result;
}
// addAction(const QIcon & icon, const QString & text, const QKeySequence &
// shortcut, const QObject * receiver, const char * member)
void *c_QWidget__addAction_QIcon_QString_QKeySequence_QObject_char(
    void *thisObj, void *icon_, const char *text_, void *shortcut_,
    void *receiver_, const char *member) {
  assert(icon_);
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  const auto text = QString::fromUtf8(text_);
  assert(shortcut_);
  auto &shortcut = *reinterpret_cast<QKeySequence *>(shortcut_);
  auto receiver = reinterpret_cast<QObject *>(receiver_);
  const auto &result =
      fromPtr(thisObj)->addAction(icon, text, shortcut, receiver, member);
  free((char *)text_);
  free((char *)member);
  return result;
}
// addAction(const QIcon & icon, const QString & text, const QObject * receiver,
// const char * member)
void *c_QWidget__addAction_QIcon_QString_QObject_char(void *thisObj,
                                                      void *icon_,
                                                      const char *text_,
                                                      void *receiver_,
                                                      const char *member) {
  assert(icon_);
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  const auto text = QString::fromUtf8(text_);
  auto receiver = reinterpret_cast<QObject *>(receiver_);
  const auto &result =
      fromPtr(thisObj)->addAction(icon, text, receiver, member);
  free((char *)text_);
  free((char *)member);
  return result;
}
// addAction(const QString & text)
void *c_QWidget__addAction_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  const auto &result = fromPtr(thisObj)->addAction(text);
  free((char *)text_);
  return result;
}
// addAction(const QString & text, const QKeySequence & shortcut)
void *c_QWidget__addAction_QString_QKeySequence(void *thisObj,
                                                const char *text_,
                                                void *shortcut_) {
  const auto text = QString::fromUtf8(text_);
  assert(shortcut_);
  auto &shortcut = *reinterpret_cast<QKeySequence *>(shortcut_);
  const auto &result = fromPtr(thisObj)->addAction(text, shortcut);
  free((char *)text_);
  return result;
}
// addAction(const QString & text, const QKeySequence & shortcut, const QObject
// * receiver, const char * member)
void *c_QWidget__addAction_QString_QKeySequence_QObject_char(
    void *thisObj, const char *text_, void *shortcut_, void *receiver_,
    const char *member) {
  const auto text = QString::fromUtf8(text_);
  assert(shortcut_);
  auto &shortcut = *reinterpret_cast<QKeySequence *>(shortcut_);
  auto receiver = reinterpret_cast<QObject *>(receiver_);
  const auto &result =
      fromPtr(thisObj)->addAction(text, shortcut, receiver, member);
  free((char *)text_);
  free((char *)member);
  return result;
}
// addAction(const QString & text, const QObject * receiver, const char *
// member)
void *c_QWidget__addAction_QString_QObject_char(void *thisObj,
                                                const char *text_,
                                                void *receiver_,
                                                const char *member) {
  const auto text = QString::fromUtf8(text_);
  auto receiver = reinterpret_cast<QObject *>(receiver_);
  const auto &result = fromPtr(thisObj)->addAction(text, receiver, member);
  free((char *)text_);
  free((char *)member);
  return result;
}
// addActions(const QList<QAction* > & actions)
void c_QWidget__addActions_QList_QAction(void *thisObj, void *actions_) {
  assert(actions_);
  auto &actions = *reinterpret_cast<QList<QAction *> *>(actions_);
  fromPtr(thisObj)->addActions(actions);
}
// adjustSize()
void c_QWidget__adjustSize(void *thisObj) { fromPtr(thisObj)->adjustSize(); }
// autoFillBackground() const
bool c_QWidget__autoFillBackground(void *thisObj) {
  const auto &result = fromPtr(thisObj)->autoFillBackground();
  return result;
}
// backgroundRole() const
int c_QWidget__backgroundRole(void *thisObj) {
  const auto &result = int(fromPtr(thisObj)->backgroundRole());
  return result;
}
// baseSize() const
void *c_QWidget__baseSize(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->baseSize()};
  return result;
}
// changeEvent(QEvent * arg__1)
void c_QWidget__changeEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->changeEvent_nocallback(arg__1);
}
// childAt(const QPoint & p) const
void *c_QWidget__childAt_QPoint(void *thisObj, void *p_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPoint *>(p_);
  const auto &result = fromPtr(thisObj)->childAt(p);
  return result;
}
// childAt(int x, int y) const
void *c_QWidget__childAt_int_int(void *thisObj, int x, int y) {
  const auto &result = fromPtr(thisObj)->childAt(x, y);
  return result;
}
// childrenRect() const
void *c_QWidget__childrenRect(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->childrenRect()};
  return result;
}
// childrenRegion() const
void *c_QWidget__childrenRegion(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QRegion>{fromPtr(thisObj)->childrenRegion()};
  return result;
}
// clearFocus()
void c_QWidget__clearFocus(void *thisObj) { fromPtr(thisObj)->clearFocus(); }
// clearMask()
void c_QWidget__clearMask(void *thisObj) { fromPtr(thisObj)->clearMask(); }
// close()
bool c_QWidget__close(void *thisObj) {
  const auto &result = fromPtr(thisObj)->close();
  return result;
}
// contentsRect() const
void *c_QWidget__contentsRect(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->contentsRect()};
  return result;
}
// create()
void c_QWidget__create(void *thisObj) { fromWrapperPtr(thisObj)->create(); }
// createWinId()
void c_QWidget__createWinId(void *thisObj) { fromPtr(thisObj)->createWinId(); }
// createWindowContainer(QWindow * window, QWidget * parent)
void *c_static_QWidget__createWindowContainer_QWindow_QWidget(void *window_,
                                                              void *parent_) {
  auto window = reinterpret_cast<QWindow *>(window_);
  auto parent = reinterpret_cast<QWidget *>(parent_);
  const auto &result =
      QtDartBindings_wrappersNS::QWidget_wrapper::createWindowContainer(window,
                                                                        parent);
  return result;
}
// customContextMenuRequested(const QPoint & pos)
void c_QWidget__customContextMenuRequested_QPoint(void *thisObj, void *pos_) {
  assert(pos_);
  auto &pos = *reinterpret_cast<QPoint *>(pos_);
  fromPtr(thisObj)->customContextMenuRequested(pos);
}
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
// customEvent(QEvent * event)
void c_QWidget__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// destroy(bool destroyWindow, bool destroySubWindows)
void c_QWidget__destroy_bool_bool(void *thisObj, bool destroyWindow,
                                  bool destroySubWindows) {
  fromWrapperPtr(thisObj)->destroy(destroyWindow, destroySubWindows);
}
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
// devType() const
int c_QWidget__devType(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QWidget_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->devType_nocallback();
    } else {
      return targetPtr->devType();
    }
  }();
  return result;
}
// ensurePolished() const
void c_QWidget__ensurePolished(void *thisObj) {
  fromPtr(thisObj)->ensurePolished();
}
// event(QEvent * event)
bool c_QWidget__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = fromWrapperPtr(thisObj)->event_nocallback(event);
  return result;
}
// eventFilter(QObject * watched, QEvent * event)
bool c_QWidget__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                           void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QWidget_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->eventFilter_nocallback(watched, event);
    } else {
      return targetPtr->eventFilter(watched, event);
    }
  }();
  return result;
}
// focusNextChild()
bool c_QWidget__focusNextChild(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->focusNextChild();
  return result;
}
// focusNextPrevChild(bool next)
bool c_QWidget__focusNextPrevChild_bool(void *thisObj, bool next) {
  const auto &result =
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
  return result;
}
// focusPreviousChild()
bool c_QWidget__focusPreviousChild(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->focusPreviousChild();
  return result;
}
// focusProxy() const
void *c_QWidget__focusProxy(void *thisObj) {
  const auto &result = fromPtr(thisObj)->focusProxy();
  return result;
}
// focusWidget() const
void *c_QWidget__focusWidget(void *thisObj) {
  const auto &result = fromPtr(thisObj)->focusWidget();
  return result;
}
// font() const
void *c_QWidget__font(void *thisObj) {
  const auto &result =
      const_cast<void *>(static_cast<const void *>(&fromPtr(thisObj)->font()));
  return result;
}
// foregroundRole() const
int c_QWidget__foregroundRole(void *thisObj) {
  const auto &result = int(fromPtr(thisObj)->foregroundRole());
  return result;
}
// frameGeometry() const
void *c_QWidget__frameGeometry(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->frameGeometry()};
  return result;
}
// frameSize() const
void *c_QWidget__frameSize(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->frameSize()};
  return result;
}
// geometry() const
void *c_QWidget__geometry(void *thisObj) {
  const auto &result = const_cast<void *>(
      static_cast<const void *>(&fromPtr(thisObj)->geometry()));
  return result;
}
// grab(const QRect & rectangle)
void *c_QWidget__grab_QRect(void *thisObj, void *rectangle_) {
  assert(rectangle_);
  auto &rectangle = *reinterpret_cast<QRect *>(rectangle_);
  const auto &result =
      new Dartagnan::ValueWrapper<QPixmap>{fromPtr(thisObj)->grab(rectangle)};
  return result;
}
// grabKeyboard()
void c_QWidget__grabKeyboard(void *thisObj) {
  fromPtr(thisObj)->grabKeyboard();
}
// grabMouse()
void c_QWidget__grabMouse(void *thisObj) { fromPtr(thisObj)->grabMouse(); }
// grabShortcut(const QKeySequence & key)
int c_QWidget__grabShortcut_QKeySequence(void *thisObj, void *key_) {
  assert(key_);
  auto &key = *reinterpret_cast<QKeySequence *>(key_);
  const auto &result = fromPtr(thisObj)->grabShortcut(key);
  return result;
}
// hasFocus() const
bool c_QWidget__hasFocus(void *thisObj) {
  const auto &result = fromPtr(thisObj)->hasFocus();
  return result;
}
// hasHeightForWidth() const
bool c_QWidget__hasHeightForWidth(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QWidget_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->hasHeightForWidth_nocallback();
    } else {
      return targetPtr->hasHeightForWidth();
    }
  }();
  return result;
}
// hasMouseTracking() const
bool c_QWidget__hasMouseTracking(void *thisObj) {
  const auto &result = fromPtr(thisObj)->hasMouseTracking();
  return result;
}
// hasTabletTracking() const
bool c_QWidget__hasTabletTracking(void *thisObj) {
  const auto &result = fromPtr(thisObj)->hasTabletTracking();
  return result;
}
// height() const
int c_QWidget__height(void *thisObj) {
  const auto &result = fromPtr(thisObj)->height();
  return result;
}
// heightForWidth(int arg__1) const
int c_QWidget__heightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QWidget_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->heightForWidth_nocallback(arg__1);
    } else {
      return targetPtr->heightForWidth(arg__1);
    }
  }();
  return result;
}
// hide()
void c_QWidget__hide(void *thisObj) { fromPtr(thisObj)->hide(); }
// initPainter(QPainter * painter) const
void c_QWidget__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}
// insertAction(QAction * before, QAction * action)
void c_QWidget__insertAction_QAction_QAction(void *thisObj, void *before_,
                                             void *action_) {
  auto before = reinterpret_cast<QAction *>(before_);
  auto action = reinterpret_cast<QAction *>(action_);
  fromPtr(thisObj)->insertAction(before, action);
}
// insertActions(QAction * before, const QList<QAction* > & actions)
void c_QWidget__insertActions_QAction_QList_QAction(void *thisObj,
                                                    void *before_,
                                                    void *actions_) {
  auto before = reinterpret_cast<QAction *>(before_);
  assert(actions_);
  auto &actions = *reinterpret_cast<QList<QAction *> *>(actions_);
  fromPtr(thisObj)->insertActions(before, actions);
}
// isActiveWindow() const
bool c_QWidget__isActiveWindow(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isActiveWindow();
  return result;
}
// isAncestorOf(const QWidget * child) const
bool c_QWidget__isAncestorOf_QWidget(void *thisObj, void *child_) {
  auto child = reinterpret_cast<QWidget *>(child_);
  const auto &result = fromPtr(thisObj)->isAncestorOf(child);
  return result;
}
// isEnabled() const
bool c_QWidget__isEnabled(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isEnabled();
  return result;
}
// isEnabledTo(const QWidget * arg__1) const
bool c_QWidget__isEnabledTo_QWidget(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  const auto &result = fromPtr(thisObj)->isEnabledTo(arg__1);
  return result;
}
// isFullScreen() const
bool c_QWidget__isFullScreen(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isFullScreen();
  return result;
}
// isHidden() const
bool c_QWidget__isHidden(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isHidden();
  return result;
}
// isLeftToRight() const
bool c_QWidget__isLeftToRight(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isLeftToRight();
  return result;
}
// isMaximized() const
bool c_QWidget__isMaximized(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isMaximized();
  return result;
}
// isMinimized() const
bool c_QWidget__isMinimized(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isMinimized();
  return result;
}
// isModal() const
bool c_QWidget__isModal(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isModal();
  return result;
}
// isRightToLeft() const
bool c_QWidget__isRightToLeft(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isRightToLeft();
  return result;
}
// isVisible() const
bool c_QWidget__isVisible(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isVisible();
  return result;
}
// isVisibleTo(const QWidget * arg__1) const
bool c_QWidget__isVisibleTo_QWidget(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  const auto &result = fromPtr(thisObj)->isVisibleTo(arg__1);
  return result;
}
// isWindow() const
bool c_QWidget__isWindow(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isWindow();
  return result;
}
// isWindowModified() const
bool c_QWidget__isWindowModified(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isWindowModified();
  return result;
}
// keyboardGrabber()
void *c_static_QWidget__keyboardGrabber() {
  const auto &result =
      QtDartBindings_wrappersNS::QWidget_wrapper::keyboardGrabber();
  return result;
}
// layout() const
void *c_QWidget__layout(void *thisObj) {
  const auto &result = fromPtr(thisObj)->layout();
  return result;
}
// layoutDirection() const
int c_QWidget__layoutDirection(void *thisObj) {
  const auto &result = int(fromPtr(thisObj)->layoutDirection());
  return result;
}
// leaveEvent(QEvent * event)
void c_QWidget__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}
// lower()
void c_QWidget__lower(void *thisObj) { fromPtr(thisObj)->lower(); }
// mapFrom(const QWidget * arg__1, const QPoint & arg__2) const
void *c_QWidget__mapFrom_QWidget_QPoint(void *thisObj, void *arg__1_,
                                        void *arg__2_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  assert(arg__2_);
  auto &arg__2 = *reinterpret_cast<QPoint *>(arg__2_);
  const auto &result = new Dartagnan::ValueWrapper<QPoint>{
      fromPtr(thisObj)->mapFrom(arg__1, arg__2)};
  return result;
}
// mapFrom(const QWidget * arg__1, const QPointF & arg__2) const
void *c_QWidget__mapFrom_QWidget_QPointF(void *thisObj, void *arg__1_,
                                         void *arg__2_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  assert(arg__2_);
  auto &arg__2 = *reinterpret_cast<QPointF *>(arg__2_);
  const auto &result = new Dartagnan::ValueWrapper<QPointF>{
      fromPtr(thisObj)->mapFrom(arg__1, arg__2)};
  return result;
}
// mapFromGlobal(const QPoint & arg__1) const
void *c_QWidget__mapFromGlobal_QPoint(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QPoint *>(arg__1_);
  const auto &result = new Dartagnan::ValueWrapper<QPoint>{
      fromPtr(thisObj)->mapFromGlobal(arg__1)};
  return result;
}
// mapFromGlobal(const QPointF & arg__1) const
void *c_QWidget__mapFromGlobal_QPointF(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QPointF *>(arg__1_);
  const auto &result = new Dartagnan::ValueWrapper<QPointF>{
      fromPtr(thisObj)->mapFromGlobal(arg__1)};
  return result;
}
// mapFromParent(const QPoint & arg__1) const
void *c_QWidget__mapFromParent_QPoint(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QPoint *>(arg__1_);
  const auto &result = new Dartagnan::ValueWrapper<QPoint>{
      fromPtr(thisObj)->mapFromParent(arg__1)};
  return result;
}
// mapFromParent(const QPointF & arg__1) const
void *c_QWidget__mapFromParent_QPointF(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QPointF *>(arg__1_);
  const auto &result = new Dartagnan::ValueWrapper<QPointF>{
      fromPtr(thisObj)->mapFromParent(arg__1)};
  return result;
}
// mapTo(const QWidget * arg__1, const QPoint & arg__2) const
void *c_QWidget__mapTo_QWidget_QPoint(void *thisObj, void *arg__1_,
                                      void *arg__2_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  assert(arg__2_);
  auto &arg__2 = *reinterpret_cast<QPoint *>(arg__2_);
  const auto &result = new Dartagnan::ValueWrapper<QPoint>{
      fromPtr(thisObj)->mapTo(arg__1, arg__2)};
  return result;
}
// mapTo(const QWidget * arg__1, const QPointF & arg__2) const
void *c_QWidget__mapTo_QWidget_QPointF(void *thisObj, void *arg__1_,
                                       void *arg__2_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  assert(arg__2_);
  auto &arg__2 = *reinterpret_cast<QPointF *>(arg__2_);
  const auto &result = new Dartagnan::ValueWrapper<QPointF>{
      fromPtr(thisObj)->mapTo(arg__1, arg__2)};
  return result;
}
// mapToGlobal(const QPoint & arg__1) const
void *c_QWidget__mapToGlobal_QPoint(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QPoint *>(arg__1_);
  const auto &result = new Dartagnan::ValueWrapper<QPoint>{
      fromPtr(thisObj)->mapToGlobal(arg__1)};
  return result;
}
// mapToGlobal(const QPointF & arg__1) const
void *c_QWidget__mapToGlobal_QPointF(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QPointF *>(arg__1_);
  const auto &result = new Dartagnan::ValueWrapper<QPointF>{
      fromPtr(thisObj)->mapToGlobal(arg__1)};
  return result;
}
// mapToParent(const QPoint & arg__1) const
void *c_QWidget__mapToParent_QPoint(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QPoint *>(arg__1_);
  const auto &result = new Dartagnan::ValueWrapper<QPoint>{
      fromPtr(thisObj)->mapToParent(arg__1)};
  return result;
}
// mapToParent(const QPointF & arg__1) const
void *c_QWidget__mapToParent_QPointF(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QPointF *>(arg__1_);
  const auto &result = new Dartagnan::ValueWrapper<QPointF>{
      fromPtr(thisObj)->mapToParent(arg__1)};
  return result;
}
// mask() const
void *c_QWidget__mask(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QRegion>{fromPtr(thisObj)->mask()};
  return result;
}
// maximumHeight() const
int c_QWidget__maximumHeight(void *thisObj) {
  const auto &result = fromPtr(thisObj)->maximumHeight();
  return result;
}
// maximumSize() const
void *c_QWidget__maximumSize(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->maximumSize()};
  return result;
}
// maximumWidth() const
int c_QWidget__maximumWidth(void *thisObj) {
  const auto &result = fromPtr(thisObj)->maximumWidth();
  return result;
}
// minimumHeight() const
int c_QWidget__minimumHeight(void *thisObj) {
  const auto &result = fromPtr(thisObj)->minimumHeight();
  return result;
}
// minimumSize() const
void *c_QWidget__minimumSize(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->minimumSize()};
  return result;
}
// minimumSizeHint() const
void *c_QWidget__minimumSizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QWidget_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->minimumSizeHint_nocallback();
    } else {
      return targetPtr->minimumSizeHint();
    }
  }()};
  return result;
}
// minimumWidth() const
int c_QWidget__minimumWidth(void *thisObj) {
  const auto &result = fromPtr(thisObj)->minimumWidth();
  return result;
}
// mouseDoubleClickEvent(QMouseEvent * event)
void c_QWidget__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}
// mouseGrabber()
void *c_static_QWidget__mouseGrabber() {
  const auto &result =
      QtDartBindings_wrappersNS::QWidget_wrapper::mouseGrabber();
  return result;
}
// mouseMoveEvent(QMouseEvent * event)
void c_QWidget__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(event);
}
// mousePressEvent(QMouseEvent * event)
void c_QWidget__mousePressEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(event);
}
// mouseReleaseEvent(QMouseEvent * event)
void c_QWidget__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(event);
}
// move(const QPoint & arg__1)
void c_QWidget__move_QPoint(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QPoint *>(arg__1_);
  fromPtr(thisObj)->move(arg__1);
}
// move(int x, int y)
void c_QWidget__move_int_int(void *thisObj, int x, int y) {
  fromPtr(thisObj)->move(x, y);
}
// nativeParentWidget() const
void *c_QWidget__nativeParentWidget(void *thisObj) {
  const auto &result = fromPtr(thisObj)->nativeParentWidget();
  return result;
}
// nextInFocusChain() const
void *c_QWidget__nextInFocusChain(void *thisObj) {
  const auto &result = fromPtr(thisObj)->nextInFocusChain();
  return result;
}
// normalGeometry() const
void *c_QWidget__normalGeometry(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->normalGeometry()};
  return result;
}
// paintEvent(QPaintEvent * event)
void c_QWidget__paintEvent_QPaintEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QPaintEvent *>(event_);
  fromWrapperPtr(thisObj)->paintEvent_nocallback(event);
}
// palette() const
void *c_QWidget__palette(void *thisObj) {
  const auto &result = const_cast<void *>(
      static_cast<const void *>(&fromPtr(thisObj)->palette()));
  return result;
}
// parentWidget() const
void *c_QWidget__parentWidget(void *thisObj) {
  const auto &result = fromPtr(thisObj)->parentWidget();
  return result;
}
// pos() const
void *c_QWidget__pos(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QPoint>{fromPtr(thisObj)->pos()};
  return result;
}
// previousInFocusChain() const
void *c_QWidget__previousInFocusChain(void *thisObj) {
  const auto &result = fromPtr(thisObj)->previousInFocusChain();
  return result;
}
// raise()
void c_QWidget__raise(void *thisObj) { fromPtr(thisObj)->raise(); }
// rect() const
void *c_QWidget__rect(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->rect()};
  return result;
}
// releaseKeyboard()
void c_QWidget__releaseKeyboard(void *thisObj) {
  fromPtr(thisObj)->releaseKeyboard();
}
// releaseMouse()
void c_QWidget__releaseMouse(void *thisObj) {
  fromPtr(thisObj)->releaseMouse();
}
// releaseShortcut(int id)
void c_QWidget__releaseShortcut_int(void *thisObj, int id) {
  fromPtr(thisObj)->releaseShortcut(id);
}
// removeAction(QAction * action)
void c_QWidget__removeAction_QAction(void *thisObj, void *action_) {
  auto action = reinterpret_cast<QAction *>(action_);
  fromPtr(thisObj)->removeAction(action);
}
// render(QPainter * painter, const QPoint & targetOffset, const QRegion &
// sourceRegion)
void c_QWidget__render_QPainter_QPoint_QRegion(void *thisObj, void *painter_,
                                               void *targetOffset_,
                                               void *sourceRegion_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  assert(targetOffset_);
  auto &targetOffset = *reinterpret_cast<QPoint *>(targetOffset_);
  assert(sourceRegion_);
  auto &sourceRegion = *reinterpret_cast<QRegion *>(sourceRegion_);
  fromPtr(thisObj)->render(painter, targetOffset, sourceRegion);
}
// repaint()
void c_QWidget__repaint(void *thisObj) { fromPtr(thisObj)->repaint(); }
// repaint(const QRect & arg__1)
void c_QWidget__repaint_QRect(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  fromPtr(thisObj)->repaint(arg__1);
}
// repaint(const QRegion & arg__1)
void c_QWidget__repaint_QRegion(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QRegion *>(arg__1_);
  fromPtr(thisObj)->repaint(arg__1);
}
// repaint(int x, int y, int w, int h)
void c_QWidget__repaint_int_int_int_int(void *thisObj, int x, int y, int w,
                                        int h) {
  fromPtr(thisObj)->repaint(x, y, w, h);
}
// resize(const QSize & arg__1)
void c_QWidget__resize_QSize(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QSize *>(arg__1_);
  fromPtr(thisObj)->resize(arg__1);
}
// resize(int w, int h)
void c_QWidget__resize_int_int(void *thisObj, int w, int h) {
  fromPtr(thisObj)->resize(w, h);
}
// restoreGeometry(const QByteArray & geometry)
bool c_QWidget__restoreGeometry_QByteArray(void *thisObj, void *geometry_) {
  assert(geometry_);
  auto &geometry = *reinterpret_cast<QByteArray *>(geometry_);
  const auto &result = fromPtr(thisObj)->restoreGeometry(geometry);
  return result;
}
// saveGeometry() const
void *c_QWidget__saveGeometry(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->saveGeometry()};
  return result;
}
// scroll(int dx, int dy)
void c_QWidget__scroll_int_int(void *thisObj, int dx, int dy) {
  fromPtr(thisObj)->scroll(dx, dy);
}
// scroll(int dx, int dy, const QRect & arg__3)
void c_QWidget__scroll_int_int_QRect(void *thisObj, int dx, int dy,
                                     void *arg__3_) {
  assert(arg__3_);
  auto &arg__3 = *reinterpret_cast<QRect *>(arg__3_);
  fromPtr(thisObj)->scroll(dx, dy, arg__3);
}
// setAcceptDrops(bool on)
void c_QWidget__setAcceptDrops_bool(void *thisObj, bool on) {
  fromPtr(thisObj)->setAcceptDrops(on);
}
// setAccessibleDescription(const QString & description)
void c_QWidget__setAccessibleDescription_QString(void *thisObj,
                                                 const char *description_) {
  const auto description = QString::fromUtf8(description_);
  fromPtr(thisObj)->setAccessibleDescription(description);
  free((char *)description_);
}
// setAccessibleName(const QString & name)
void c_QWidget__setAccessibleName_QString(void *thisObj, const char *name_) {
  const auto name = QString::fromUtf8(name_);
  fromPtr(thisObj)->setAccessibleName(name);
  free((char *)name_);
}
// setAutoFillBackground(bool enabled)
void c_QWidget__setAutoFillBackground_bool(void *thisObj, bool enabled) {
  fromPtr(thisObj)->setAutoFillBackground(enabled);
}
// setBackgroundRole(QPalette::ColorRole arg__1)
void c_QWidget__setBackgroundRole_ColorRole(void *thisObj, int arg__1) {
  fromPtr(thisObj)->setBackgroundRole(static_cast<QPalette::ColorRole>(arg__1));
}
// setBaseSize(const QSize & arg__1)
void c_QWidget__setBaseSize_QSize(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QSize *>(arg__1_);
  fromPtr(thisObj)->setBaseSize(arg__1);
}
// setBaseSize(int basew, int baseh)
void c_QWidget__setBaseSize_int_int(void *thisObj, int basew, int baseh) {
  fromPtr(thisObj)->setBaseSize(basew, baseh);
}
// setContentsMargins(int left, int top, int right, int bottom)
void c_QWidget__setContentsMargins_int_int_int_int(void *thisObj, int left,
                                                   int top, int right,
                                                   int bottom) {
  fromPtr(thisObj)->setContentsMargins(left, top, right, bottom);
}
// setDisabled(bool arg__1)
void c_QWidget__setDisabled_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->setDisabled(arg__1);
}
// setEnabled(bool arg__1)
void c_QWidget__setEnabled_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->setEnabled(arg__1);
}
// setFixedHeight(int h)
void c_QWidget__setFixedHeight_int(void *thisObj, int h) {
  fromPtr(thisObj)->setFixedHeight(h);
}
// setFixedSize(const QSize & arg__1)
void c_QWidget__setFixedSize_QSize(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QSize *>(arg__1_);
  fromPtr(thisObj)->setFixedSize(arg__1);
}
// setFixedSize(int w, int h)
void c_QWidget__setFixedSize_int_int(void *thisObj, int w, int h) {
  fromPtr(thisObj)->setFixedSize(w, h);
}
// setFixedWidth(int w)
void c_QWidget__setFixedWidth_int(void *thisObj, int w) {
  fromPtr(thisObj)->setFixedWidth(w);
}
// setFocus()
void c_QWidget__setFocus(void *thisObj) { fromPtr(thisObj)->setFocus(); }
// setFocusProxy(QWidget * arg__1)
void c_QWidget__setFocusProxy_QWidget(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  fromPtr(thisObj)->setFocusProxy(arg__1);
}
// setFont(const QFont & arg__1)
void c_QWidget__setFont_QFont(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QFont *>(arg__1_);
  fromPtr(thisObj)->setFont(arg__1);
}
// setForegroundRole(QPalette::ColorRole arg__1)
void c_QWidget__setForegroundRole_ColorRole(void *thisObj, int arg__1) {
  fromPtr(thisObj)->setForegroundRole(static_cast<QPalette::ColorRole>(arg__1));
}
// setGeometry(const QRect & arg__1)
void c_QWidget__setGeometry_QRect(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  fromPtr(thisObj)->setGeometry(arg__1);
}
// setGeometry(int x, int y, int w, int h)
void c_QWidget__setGeometry_int_int_int_int(void *thisObj, int x, int y, int w,
                                            int h) {
  fromPtr(thisObj)->setGeometry(x, y, w, h);
}
// setHidden(bool hidden)
void c_QWidget__setHidden_bool(void *thisObj, bool hidden) {
  fromPtr(thisObj)->setHidden(hidden);
}
// setLayout(QLayout * arg__1)
void c_QWidget__setLayout_QLayout(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QLayout *>(arg__1_);
  fromPtr(thisObj)->setLayout(arg__1);
}
// setLayoutDirection(Qt::LayoutDirection direction)
void c_QWidget__setLayoutDirection_LayoutDirection(void *thisObj,
                                                   int direction) {
  fromPtr(thisObj)->setLayoutDirection(
      static_cast<Qt::LayoutDirection>(direction));
}
// setMask(const QRegion & arg__1)
void c_QWidget__setMask_QRegion(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QRegion *>(arg__1_);
  fromPtr(thisObj)->setMask(arg__1);
}
// setMaximumHeight(int maxh)
void c_QWidget__setMaximumHeight_int(void *thisObj, int maxh) {
  fromPtr(thisObj)->setMaximumHeight(maxh);
}
// setMaximumSize(const QSize & arg__1)
void c_QWidget__setMaximumSize_QSize(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QSize *>(arg__1_);
  fromPtr(thisObj)->setMaximumSize(arg__1);
}
// setMaximumSize(int maxw, int maxh)
void c_QWidget__setMaximumSize_int_int(void *thisObj, int maxw, int maxh) {
  fromPtr(thisObj)->setMaximumSize(maxw, maxh);
}
// setMaximumWidth(int maxw)
void c_QWidget__setMaximumWidth_int(void *thisObj, int maxw) {
  fromPtr(thisObj)->setMaximumWidth(maxw);
}
// setMinimumHeight(int minh)
void c_QWidget__setMinimumHeight_int(void *thisObj, int minh) {
  fromPtr(thisObj)->setMinimumHeight(minh);
}
// setMinimumSize(const QSize & arg__1)
void c_QWidget__setMinimumSize_QSize(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QSize *>(arg__1_);
  fromPtr(thisObj)->setMinimumSize(arg__1);
}
// setMinimumSize(int minw, int minh)
void c_QWidget__setMinimumSize_int_int(void *thisObj, int minw, int minh) {
  fromPtr(thisObj)->setMinimumSize(minw, minh);
}
// setMinimumWidth(int minw)
void c_QWidget__setMinimumWidth_int(void *thisObj, int minw) {
  fromPtr(thisObj)->setMinimumWidth(minw);
}
// setMouseTracking(bool enable)
void c_QWidget__setMouseTracking_bool(void *thisObj, bool enable) {
  fromPtr(thisObj)->setMouseTracking(enable);
}
// setPalette(const QPalette & arg__1)
void c_QWidget__setPalette_QPalette(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QPalette *>(arg__1_);
  fromPtr(thisObj)->setPalette(arg__1);
}
// setShortcutAutoRepeat(int id, bool enable)
void c_QWidget__setShortcutAutoRepeat_int_bool(void *thisObj, int id,
                                               bool enable) {
  fromPtr(thisObj)->setShortcutAutoRepeat(id, enable);
}
// setShortcutEnabled(int id, bool enable)
void c_QWidget__setShortcutEnabled_int_bool(void *thisObj, int id,
                                            bool enable) {
  fromPtr(thisObj)->setShortcutEnabled(id, enable);
}
// setSizeIncrement(const QSize & arg__1)
void c_QWidget__setSizeIncrement_QSize(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QSize *>(arg__1_);
  fromPtr(thisObj)->setSizeIncrement(arg__1);
}
// setSizeIncrement(int w, int h)
void c_QWidget__setSizeIncrement_int_int(void *thisObj, int w, int h) {
  fromPtr(thisObj)->setSizeIncrement(w, h);
}
// setSizePolicy(QSizePolicy arg__1)
void c_QWidget__setSizePolicy_QSizePolicy(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QSizePolicy *>(arg__1_);
  fromPtr(thisObj)->setSizePolicy(arg__1);
}
// setSizePolicy(QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical)
void c_QWidget__setSizePolicy_Policy_Policy(void *thisObj, int horizontal,
                                            int vertical) {
  fromPtr(thisObj)->setSizePolicy(static_cast<QSizePolicy::Policy>(horizontal),
                                  static_cast<QSizePolicy::Policy>(vertical));
}
// setStatusTip(const QString & arg__1)
void c_QWidget__setStatusTip_QString(void *thisObj, const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  fromPtr(thisObj)->setStatusTip(arg__1);
  free((char *)arg__1_);
}
// setStyle(QStyle * arg__1)
void c_QWidget__setStyle_QStyle(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QStyle *>(arg__1_);
  fromPtr(thisObj)->setStyle(arg__1);
}
// setStyleSheet(const QString & styleSheet)
void c_QWidget__setStyleSheet_QString(void *thisObj, const char *styleSheet_) {
  const auto styleSheet = QString::fromUtf8(styleSheet_);
  fromPtr(thisObj)->setStyleSheet(styleSheet);
  free((char *)styleSheet_);
}
// setTabOrder(QWidget * arg__1, QWidget * arg__2)
void c_static_QWidget__setTabOrder_QWidget_QWidget(void *arg__1_,
                                                   void *arg__2_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  auto arg__2 = reinterpret_cast<QWidget *>(arg__2_);
  QtDartBindings_wrappersNS::QWidget_wrapper::setTabOrder(arg__1, arg__2);
}
// setTabletTracking(bool enable)
void c_QWidget__setTabletTracking_bool(void *thisObj, bool enable) {
  fromPtr(thisObj)->setTabletTracking(enable);
}
// setToolTip(const QString & arg__1)
void c_QWidget__setToolTip_QString(void *thisObj, const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  fromPtr(thisObj)->setToolTip(arg__1);
  free((char *)arg__1_);
}
// setToolTipDuration(int msec)
void c_QWidget__setToolTipDuration_int(void *thisObj, int msec) {
  fromPtr(thisObj)->setToolTipDuration(msec);
}
// setUpdatesEnabled(bool enable)
void c_QWidget__setUpdatesEnabled_bool(void *thisObj, bool enable) {
  fromPtr(thisObj)->setUpdatesEnabled(enable);
}
// setVisible(bool visible)
void c_QWidget__setVisible_bool(void *thisObj, bool visible) {
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
// setWhatsThis(const QString & arg__1)
void c_QWidget__setWhatsThis_QString(void *thisObj, const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  fromPtr(thisObj)->setWhatsThis(arg__1);
  free((char *)arg__1_);
}
// setWindowFilePath(const QString & filePath)
void c_QWidget__setWindowFilePath_QString(void *thisObj,
                                          const char *filePath_) {
  const auto filePath = QString::fromUtf8(filePath_);
  fromPtr(thisObj)->setWindowFilePath(filePath);
  free((char *)filePath_);
}
// setWindowIcon(const QIcon & icon)
void c_QWidget__setWindowIcon_QIcon(void *thisObj, void *icon_) {
  assert(icon_);
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  fromPtr(thisObj)->setWindowIcon(icon);
}
// setWindowIconText(const QString & arg__1)
void c_QWidget__setWindowIconText_QString(void *thisObj, const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  fromPtr(thisObj)->setWindowIconText(arg__1);
  free((char *)arg__1_);
}
// setWindowModified(bool arg__1)
void c_QWidget__setWindowModified_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->setWindowModified(arg__1);
}
// setWindowOpacity(qreal level)
void c_QWidget__setWindowOpacity_qreal(void *thisObj, qreal level) {
  fromPtr(thisObj)->setWindowOpacity(level);
}
// setWindowRole(const QString & arg__1)
void c_QWidget__setWindowRole_QString(void *thisObj, const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  fromPtr(thisObj)->setWindowRole(arg__1);
  free((char *)arg__1_);
}
// setWindowTitle(const QString & arg__1)
void c_QWidget__setWindowTitle_QString(void *thisObj, const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  fromPtr(thisObj)->setWindowTitle(arg__1);
  free((char *)arg__1_);
}
// sharedPainter() const
void *c_QWidget__sharedPainter(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->sharedPainter_nocallback();
  return result;
}
// show()
void c_QWidget__show(void *thisObj) { fromPtr(thisObj)->show(); }
// showFullScreen()
void c_QWidget__showFullScreen(void *thisObj) {
  fromPtr(thisObj)->showFullScreen();
}
// showMaximized()
void c_QWidget__showMaximized(void *thisObj) {
  fromPtr(thisObj)->showMaximized();
}
// showMinimized()
void c_QWidget__showMinimized(void *thisObj) {
  fromPtr(thisObj)->showMinimized();
}
// showNormal()
void c_QWidget__showNormal(void *thisObj) { fromPtr(thisObj)->showNormal(); }
// size() const
void *c_QWidget__size(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->size()};
  return result;
}
// sizeHint() const
void *c_QWidget__sizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QWidget_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->sizeHint_nocallback();
    } else {
      return targetPtr->sizeHint();
    }
  }()};
  return result;
}
// sizeIncrement() const
void *c_QWidget__sizeIncrement(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->sizeIncrement()};
  return result;
}
// sizePolicy() const
void *c_QWidget__sizePolicy(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSizePolicy>{fromPtr(thisObj)->sizePolicy()};
  return result;
}
// stackUnder(QWidget * arg__1)
void c_QWidget__stackUnder_QWidget(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  fromPtr(thisObj)->stackUnder(arg__1);
}
// statusTip() const
void *c_QWidget__statusTip(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->statusTip()};
  return result;
}
// style() const
void *c_QWidget__style(void *thisObj) {
  const auto &result = fromPtr(thisObj)->style();
  return result;
}
// styleSheet() const
void *c_QWidget__styleSheet(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->styleSheet()};
  return result;
}
// toolTip() const
void *c_QWidget__toolTip(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->toolTip()};
  return result;
}
// toolTipDuration() const
int c_QWidget__toolTipDuration(void *thisObj) {
  const auto &result = fromPtr(thisObj)->toolTipDuration();
  return result;
}
// topLevelWidget() const
void *c_QWidget__topLevelWidget(void *thisObj) {
  const auto &result = fromPtr(thisObj)->topLevelWidget();
  return result;
}
// tr(const char * s, const char * c, int n)
void *c_static_QWidget__tr_char_char_int(const char *s, const char *c, int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QWidget_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
// underMouse() const
bool c_QWidget__underMouse(void *thisObj) {
  const auto &result = fromPtr(thisObj)->underMouse();
  return result;
}
// unsetCursor()
void c_QWidget__unsetCursor(void *thisObj) { fromPtr(thisObj)->unsetCursor(); }
// unsetLayoutDirection()
void c_QWidget__unsetLayoutDirection(void *thisObj) {
  fromPtr(thisObj)->unsetLayoutDirection();
}
// unsetLocale()
void c_QWidget__unsetLocale(void *thisObj) { fromPtr(thisObj)->unsetLocale(); }
// update()
void c_QWidget__update(void *thisObj) { fromPtr(thisObj)->update(); }
// update(const QRect & arg__1)
void c_QWidget__update_QRect(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  fromPtr(thisObj)->update(arg__1);
}
// update(const QRegion & arg__1)
void c_QWidget__update_QRegion(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QRegion *>(arg__1_);
  fromPtr(thisObj)->update(arg__1);
}
// update(int x, int y, int w, int h)
void c_QWidget__update_int_int_int_int(void *thisObj, int x, int y, int w,
                                       int h) {
  fromPtr(thisObj)->update(x, y, w, h);
}
// updateGeometry()
void c_QWidget__updateGeometry(void *thisObj) {
  fromPtr(thisObj)->updateGeometry();
}
// updateMicroFocus()
void c_QWidget__updateMicroFocus(void *thisObj) {
  fromWrapperPtr(thisObj)->updateMicroFocus();
}
// updatesEnabled() const
bool c_QWidget__updatesEnabled(void *thisObj) {
  const auto &result = fromPtr(thisObj)->updatesEnabled();
  return result;
}
// visibleRegion() const
void *c_QWidget__visibleRegion(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QRegion>{fromPtr(thisObj)->visibleRegion()};
  return result;
}
// whatsThis() const
void *c_QWidget__whatsThis(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->whatsThis()};
  return result;
}
// width() const
int c_QWidget__width(void *thisObj) {
  const auto &result = fromPtr(thisObj)->width();
  return result;
}
// window() const
void *c_QWidget__window(void *thisObj) {
  const auto &result = fromPtr(thisObj)->window();
  return result;
}
// windowFilePath() const
void *c_QWidget__windowFilePath(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->windowFilePath()};
  return result;
}
// windowHandle() const
void *c_QWidget__windowHandle(void *thisObj) {
  const auto &result = fromPtr(thisObj)->windowHandle();
  return result;
}
// windowIcon() const
void *c_QWidget__windowIcon(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QIcon>{fromPtr(thisObj)->windowIcon()};
  return result;
}
// windowIconChanged(const QIcon & icon)
void c_QWidget__windowIconChanged_QIcon(void *thisObj, void *icon_) {
  assert(icon_);
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  fromPtr(thisObj)->windowIconChanged(icon);
}
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
// windowIconText() const
void *c_QWidget__windowIconText(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->windowIconText()};
  return result;
}
// windowIconTextChanged(const QString & iconText)
void c_QWidget__windowIconTextChanged_QString(void *thisObj,
                                              const char *iconText_) {
  const auto iconText = QString::fromUtf8(iconText_);
  fromPtr(thisObj)->windowIconTextChanged(iconText);
  free((char *)iconText_);
}
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
// windowOpacity() const
qreal c_QWidget__windowOpacity(void *thisObj) {
  const auto &result = fromPtr(thisObj)->windowOpacity();
  return result;
}
// windowRole() const
void *c_QWidget__windowRole(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->windowRole()};
  return result;
}
// windowTitle() const
void *c_QWidget__windowTitle(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->windowTitle()};
  return result;
}
// windowTitleChanged(const QString & title)
void c_QWidget__windowTitleChanged_QString(void *thisObj, const char *title_) {
  const auto title = QString::fromUtf8(title_);
  fromPtr(thisObj)->windowTitleChanged(title);
  free((char *)title_);
}
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
// x() const
int c_QWidget__x(void *thisObj) {
  const auto &result = fromPtr(thisObj)->x();
  return result;
}
// y() const
int c_QWidget__y(void *thisObj) {
  const auto &result = fromPtr(thisObj)->y();
  return result;
}
void c_QWidget__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QWidget__registerVirtualMethodCallback(void *ptr, void *callback,
                                              int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1128:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_customEvent>(
        callback);
    break;
  case 1145:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_devType>(callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_event>(callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1155:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QWidget_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1169:
    wrapper->m_hasHeightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_hasHeightForWidth>(
        callback);
    break;
  case 1173:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 1176:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_initPainter>(
        callback);
    break;
  case 1202:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1222:
    wrapper->m_minimumSizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_minimumSizeHint>(
        callback);
    break;
  case 1224:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QWidget_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1226:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_mouseMoveEvent>(
        callback);
    break;
  case 1227:
    wrapper->m_mousePressEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_mousePressEvent>(
        callback);
    break;
  case 1228:
    wrapper->m_mouseReleaseEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_mouseReleaseEvent>(
        callback);
    break;
  case 1235:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 1314:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_setVisible>(
        callback);
    break;
  case 1323:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1331:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QWidget_wrapper::Callback_sizeHint>(
        callback);
    break;
  }
}
}
