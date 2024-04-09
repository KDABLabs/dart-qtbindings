#include "QComboBox_wrapper.h"

#include <QDebug>

namespace Dartagnan {

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
// tag=1006
QComboBox_wrapper::QComboBox_wrapper(QWidget *parent) : ::QComboBox(parent) {}
bool QComboBox_wrapper::acceptDrops() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::acceptDrops();
}
QString QComboBox_wrapper::accessibleDescription() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::accessibleDescription();
}
QString QComboBox_wrapper::accessibleName() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::accessibleName();
}
QList<QAction *> QComboBox_wrapper::actions() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::actions();
}
void QComboBox_wrapper::activateWindow() {
  // tag=1000

  // tag=1004
  return ::QComboBox::activateWindow();
}
void QComboBox_wrapper::activated(int index) {
  // tag=1000

  // tag=1004
  return ::QComboBox::activated(index);
}
void QComboBox_wrapper::addAction(QAction *action) {
  // tag=1000

  // tag=1004
  return ::QComboBox::addAction(action);
}
void QComboBox_wrapper::addActions(QList<QAction *> actions) {
  // tag=1000

  // tag=1004
  return ::QComboBox::addActions(actions);
}
void QComboBox_wrapper::addItem(const QIcon &icon, const QString &text,
                                const QVariant &userData) {
  // tag=1000

  // tag=1004
  return ::QComboBox::addItem(icon, text, userData);
}
void QComboBox_wrapper::addItem(const QString &text, const QVariant &userData) {
  // tag=1000

  // tag=1004
  return ::QComboBox::addItem(text, userData);
}
void QComboBox_wrapper::adjustSize() {
  // tag=1000

  // tag=1004
  return ::QComboBox::adjustSize();
}
bool QComboBox_wrapper::autoFillBackground() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::autoFillBackground();
}
QPalette::ColorRole QComboBox_wrapper::backgroundRole() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::backgroundRole();
}
QSize QComboBox_wrapper::baseSize() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::baseSize();
}
QWidget *QComboBox_wrapper::childAt(const QPoint &p) const {
  // tag=1000

  // tag=1004
  return ::QComboBox::childAt(p);
}
QWidget *QComboBox_wrapper::childAt(int x, int y) const {
  // tag=1000

  // tag=1004
  return ::QComboBox::childAt(x, y);
}
QRect QComboBox_wrapper::childrenRect() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::childrenRect();
}
void QComboBox_wrapper::clear() {
  // tag=1000

  // tag=1004
  return ::QComboBox::clear();
}
void QComboBox_wrapper::clearEditText() {
  // tag=1000

  // tag=1004
  return ::QComboBox::clearEditText();
}
void QComboBox_wrapper::clearFocus() {
  // tag=1000

  // tag=1004
  return ::QComboBox::clearFocus();
}
void QComboBox_wrapper::clearMask() {
  // tag=1000

  // tag=1004
  return ::QComboBox::clearMask();
}
bool QComboBox_wrapper::close() {
  // tag=1000

  // tag=1004
  return ::QComboBox::close();
}
QRect QComboBox_wrapper::contentsRect() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::contentsRect();
}
int QComboBox_wrapper::count() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::count();
}
void QComboBox_wrapper::create() {
  // tag=1000

  // tag=1004
  return ::QComboBox::create();
}
void QComboBox_wrapper::createWinId() {
  // tag=1000

  // tag=1004
  return ::QComboBox::createWinId();
}
QWidget *QComboBox_wrapper::createWindowContainer(QWindow *window,
                                                  QWidget *parent) {
  // tag=1000

  // tag=1004
  return ::QComboBox::createWindowContainer(window, parent);
}
QVariant QComboBox_wrapper::currentData(int role) const {
  // tag=1000

  // tag=1004
  return ::QComboBox::currentData(role);
}
int QComboBox_wrapper::currentIndex() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::currentIndex();
}
void QComboBox_wrapper::currentIndexChanged(int index) {
  // tag=1000

  // tag=1004
  return ::QComboBox::currentIndexChanged(index);
}
QString QComboBox_wrapper::currentText() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::currentText();
}
void QComboBox_wrapper::currentTextChanged(const QString &arg__1) {
  // tag=1000

  // tag=1004
  return ::QComboBox::currentTextChanged(arg__1);
}
void QComboBox_wrapper::customContextMenuRequested(const QPoint &pos) {
  // tag=1000

  // tag=1004
  return ::QComboBox::customContextMenuRequested(pos);
}
void QComboBox_wrapper::destroy(bool destroyWindow, bool destroySubWindows) {
  // tag=1000

  // tag=1004
  return ::QComboBox::destroy(destroyWindow, destroySubWindows);
}
bool QComboBox_wrapper::duplicatesEnabled() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::duplicatesEnabled();
}
void QComboBox_wrapper::editTextChanged(const QString &arg__1) {
  // tag=1000

  // tag=1004
  return ::QComboBox::editTextChanged(arg__1);
}
void QComboBox_wrapper::ensurePolished() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::ensurePolished();
}
int QComboBox_wrapper::findData(const QVariant &data, int role) const {
  // tag=1000

  // tag=1004
  return ::QComboBox::findData(data, role);
}
int QComboBox_wrapper::findText(const QString &text) const {
  // tag=1000

  // tag=1004
  return ::QComboBox::findText(text);
}
bool QComboBox_wrapper::focusNextChild() {
  // tag=1000

  // tag=1004
  return ::QComboBox::focusNextChild();
}
bool QComboBox_wrapper::focusPreviousChild() {
  // tag=1000

  // tag=1004
  return ::QComboBox::focusPreviousChild();
}
QWidget *QComboBox_wrapper::focusProxy() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::focusProxy();
}
QWidget *QComboBox_wrapper::focusWidget() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::focusWidget();
}
QPalette::ColorRole QComboBox_wrapper::foregroundRole() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::foregroundRole();
}
QRect QComboBox_wrapper::frameGeometry() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::frameGeometry();
}
QSize QComboBox_wrapper::frameSize() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::frameSize();
}
const QRect &QComboBox_wrapper::geometry() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::geometry();
}
QPixmap QComboBox_wrapper::grab(const QRect &rectangle) {
  // tag=1000

  // tag=1004
  return ::QComboBox::grab(rectangle);
}
void QComboBox_wrapper::grabKeyboard() {
  // tag=1000

  // tag=1004
  return ::QComboBox::grabKeyboard();
}
void QComboBox_wrapper::grabMouse() {
  // tag=1000

  // tag=1004
  return ::QComboBox::grabMouse();
}
bool QComboBox_wrapper::hasFocus() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::hasFocus();
}
bool QComboBox_wrapper::hasFrame() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::hasFrame();
}
bool QComboBox_wrapper::hasMouseTracking() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::hasMouseTracking();
}
bool QComboBox_wrapper::hasTabletTracking() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::hasTabletTracking();
}
int QComboBox_wrapper::height() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::height();
}
void QComboBox_wrapper::hide() {
  // tag=1000

  // tag=1004
  return ::QComboBox::hide();
}
void QComboBox_wrapper::hidePopup() {
  // tag=1000
  if (m_hidePopupCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hidePopupCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QComboBox::hidePopup();
  }
}
// tag=1009
void QComboBox_wrapper::hidePopup_nocallback() {
  // tag=1003
  return ::QComboBox::hidePopup();
}
void QComboBox_wrapper::highlighted(int index) {
  // tag=1000

  // tag=1004
  return ::QComboBox::highlighted(index);
}
QSize QComboBox_wrapper::iconSize() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::iconSize();
}
void QComboBox_wrapper::insertAction(QAction *before, QAction *action) {
  // tag=1000

  // tag=1004
  return ::QComboBox::insertAction(before, action);
}
void QComboBox_wrapper::insertActions(QAction *before,
                                      QList<QAction *> actions) {
  // tag=1000

  // tag=1004
  return ::QComboBox::insertActions(before, actions);
}
void QComboBox_wrapper::insertItem(int index, const QIcon &icon,
                                   const QString &text,
                                   const QVariant &userData) {
  // tag=1000

  // tag=1004
  return ::QComboBox::insertItem(index, icon, text, userData);
}
void QComboBox_wrapper::insertItem(int index, const QString &text,
                                   const QVariant &userData) {
  // tag=1000

  // tag=1004
  return ::QComboBox::insertItem(index, text, userData);
}
void QComboBox_wrapper::insertSeparator(int index) {
  // tag=1000

  // tag=1004
  return ::QComboBox::insertSeparator(index);
}
bool QComboBox_wrapper::isActiveWindow() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::isActiveWindow();
}
bool QComboBox_wrapper::isAncestorOf(const QWidget *child) const {
  // tag=1000

  // tag=1004
  return ::QComboBox::isAncestorOf(child);
}
bool QComboBox_wrapper::isEditable() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::isEditable();
}
bool QComboBox_wrapper::isEnabled() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::isEnabled();
}
bool QComboBox_wrapper::isEnabledTo(const QWidget *arg__1) const {
  // tag=1000

  // tag=1004
  return ::QComboBox::isEnabledTo(arg__1);
}
bool QComboBox_wrapper::isFullScreen() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::isFullScreen();
}
bool QComboBox_wrapper::isHidden() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::isHidden();
}
bool QComboBox_wrapper::isLeftToRight() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::isLeftToRight();
}
bool QComboBox_wrapper::isMaximized() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::isMaximized();
}
bool QComboBox_wrapper::isMinimized() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::isMinimized();
}
bool QComboBox_wrapper::isModal() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::isModal();
}
bool QComboBox_wrapper::isRightToLeft() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::isRightToLeft();
}
bool QComboBox_wrapper::isTopLevel() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::isTopLevel();
}
bool QComboBox_wrapper::isVisible() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::isVisible();
}
bool QComboBox_wrapper::isVisibleTo(const QWidget *arg__1) const {
  // tag=1000

  // tag=1004
  return ::QComboBox::isVisibleTo(arg__1);
}
bool QComboBox_wrapper::isWindow() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::isWindow();
}
bool QComboBox_wrapper::isWindowModified() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::isWindowModified();
}
QVariant QComboBox_wrapper::itemData(int index, int role) const {
  // tag=1000

  // tag=1004
  return ::QComboBox::itemData(index, role);
}
QIcon QComboBox_wrapper::itemIcon(int index) const {
  // tag=1000

  // tag=1004
  return ::QComboBox::itemIcon(index);
}
QString QComboBox_wrapper::itemText(int index) const {
  // tag=1000

  // tag=1004
  return ::QComboBox::itemText(index);
}
QWidget *QComboBox_wrapper::keyboardGrabber() {
  // tag=1000

  // tag=1004
  return ::QComboBox::keyboardGrabber();
}
Qt::LayoutDirection QComboBox_wrapper::layoutDirection() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::layoutDirection();
}
QLineEdit *QComboBox_wrapper::lineEdit() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::lineEdit();
}
void QComboBox_wrapper::lower() {
  // tag=1000

  // tag=1004
  return ::QComboBox::lower();
}
QPoint QComboBox_wrapper::mapFrom(const QWidget *arg__1,
                                  const QPoint &arg__2) const {
  // tag=1000

  // tag=1004
  return ::QComboBox::mapFrom(arg__1, arg__2);
}
QPoint QComboBox_wrapper::mapFromGlobal(const QPoint &arg__1) const {
  // tag=1000

  // tag=1004
  return ::QComboBox::mapFromGlobal(arg__1);
}
QPoint QComboBox_wrapper::mapFromParent(const QPoint &arg__1) const {
  // tag=1000

  // tag=1004
  return ::QComboBox::mapFromParent(arg__1);
}
QPoint QComboBox_wrapper::mapTo(const QWidget *arg__1,
                                const QPoint &arg__2) const {
  // tag=1000

  // tag=1004
  return ::QComboBox::mapTo(arg__1, arg__2);
}
QPoint QComboBox_wrapper::mapToGlobal(const QPoint &arg__1) const {
  // tag=1000

  // tag=1004
  return ::QComboBox::mapToGlobal(arg__1);
}
QPoint QComboBox_wrapper::mapToParent(const QPoint &arg__1) const {
  // tag=1000

  // tag=1004
  return ::QComboBox::mapToParent(arg__1);
}
int QComboBox_wrapper::maxCount() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::maxCount();
}
int QComboBox_wrapper::maxVisibleItems() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::maxVisibleItems();
}
int QComboBox_wrapper::maximumHeight() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::maximumHeight();
}
QSize QComboBox_wrapper::maximumSize() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::maximumSize();
}
int QComboBox_wrapper::maximumWidth() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::maximumWidth();
}
int QComboBox_wrapper::minimumContentsLength() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::minimumContentsLength();
}
int QComboBox_wrapper::minimumHeight() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::minimumHeight();
}
QSize QComboBox_wrapper::minimumSize() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::minimumSize();
}
int QComboBox_wrapper::minimumWidth() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::minimumWidth();
}
QAbstractItemModel *QComboBox_wrapper::model() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::model();
}
int QComboBox_wrapper::modelColumn() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::modelColumn();
}
QWidget *QComboBox_wrapper::mouseGrabber() {
  // tag=1000

  // tag=1004
  return ::QComboBox::mouseGrabber();
}
void QComboBox_wrapper::move(const QPoint &arg__1) {
  // tag=1000

  // tag=1004
  return ::QComboBox::move(arg__1);
}
void QComboBox_wrapper::move(int x, int y) {
  // tag=1000

  // tag=1004
  return ::QComboBox::move(x, y);
}
QWidget *QComboBox_wrapper::nativeParentWidget() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::nativeParentWidget();
}
QWidget *QComboBox_wrapper::nextInFocusChain() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::nextInFocusChain();
}
QRect QComboBox_wrapper::normalGeometry() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::normalGeometry();
}
const QPalette &QComboBox_wrapper::palette() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::palette();
}
QWidget *QComboBox_wrapper::parentWidget() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::parentWidget();
}
QString QComboBox_wrapper::placeholderText() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::placeholderText();
}
QPoint QComboBox_wrapper::pos() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::pos();
}
QWidget *QComboBox_wrapper::previousInFocusChain() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::previousInFocusChain();
}
void QComboBox_wrapper::raise() {
  // tag=1000

  // tag=1004
  return ::QComboBox::raise();
}
QRect QComboBox_wrapper::rect() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::rect();
}
void QComboBox_wrapper::releaseKeyboard() {
  // tag=1000

  // tag=1004
  return ::QComboBox::releaseKeyboard();
}
void QComboBox_wrapper::releaseMouse() {
  // tag=1000

  // tag=1004
  return ::QComboBox::releaseMouse();
}
void QComboBox_wrapper::releaseShortcut(int id) {
  // tag=1000

  // tag=1004
  return ::QComboBox::releaseShortcut(id);
}
void QComboBox_wrapper::removeAction(QAction *action) {
  // tag=1000

  // tag=1004
  return ::QComboBox::removeAction(action);
}
void QComboBox_wrapper::removeItem(int index) {
  // tag=1000

  // tag=1004
  return ::QComboBox::removeItem(index);
}
void QComboBox_wrapper::render(QPainter *painter, const QPoint &targetOffset) {
  // tag=1000

  // tag=1004
  return ::QComboBox::render(painter, targetOffset);
}
void QComboBox_wrapper::repaint() {
  // tag=1000

  // tag=1004
  return ::QComboBox::repaint();
}
void QComboBox_wrapper::repaint(const QRect &arg__1) {
  // tag=1000

  // tag=1004
  return ::QComboBox::repaint(arg__1);
}
void QComboBox_wrapper::repaint(int x, int y, int w, int h) {
  // tag=1000

  // tag=1004
  return ::QComboBox::repaint(x, y, w, h);
}
void QComboBox_wrapper::resize(const QSize &arg__1) {
  // tag=1000

  // tag=1004
  return ::QComboBox::resize(arg__1);
}
void QComboBox_wrapper::resize(int w, int h) {
  // tag=1000

  // tag=1004
  return ::QComboBox::resize(w, h);
}
bool QComboBox_wrapper::restoreGeometry(const QByteArray &geometry) {
  // tag=1000

  // tag=1004
  return ::QComboBox::restoreGeometry(geometry);
}
QModelIndex QComboBox_wrapper::rootModelIndex() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::rootModelIndex();
}
QByteArray QComboBox_wrapper::saveGeometry() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::saveGeometry();
}
void QComboBox_wrapper::scroll(int dx, int dy) {
  // tag=1000

  // tag=1004
  return ::QComboBox::scroll(dx, dy);
}
void QComboBox_wrapper::scroll(int dx, int dy, const QRect &arg__3) {
  // tag=1000

  // tag=1004
  return ::QComboBox::scroll(dx, dy, arg__3);
}
void QComboBox_wrapper::setAcceptDrops(bool on) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setAcceptDrops(on);
}
void QComboBox_wrapper::setAccessibleDescription(const QString &description) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setAccessibleDescription(description);
}
void QComboBox_wrapper::setAccessibleName(const QString &name) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setAccessibleName(name);
}
void QComboBox_wrapper::setAutoFillBackground(bool enabled) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setAutoFillBackground(enabled);
}
void QComboBox_wrapper::setBackgroundRole(QPalette::ColorRole arg__1) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setBackgroundRole(arg__1);
}
void QComboBox_wrapper::setBaseSize(const QSize &arg__1) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setBaseSize(arg__1);
}
void QComboBox_wrapper::setBaseSize(int basew, int baseh) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setBaseSize(basew, baseh);
}
void QComboBox_wrapper::setContentsMargins(int left, int top, int right,
                                           int bottom) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setContentsMargins(left, top, right, bottom);
}
void QComboBox_wrapper::setCurrentIndex(int index) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setCurrentIndex(index);
}
void QComboBox_wrapper::setCurrentText(const QString &text) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setCurrentText(text);
}
void QComboBox_wrapper::setDisabled(bool arg__1) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setDisabled(arg__1);
}
void QComboBox_wrapper::setDuplicatesEnabled(bool enable) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setDuplicatesEnabled(enable);
}
void QComboBox_wrapper::setEditText(const QString &text) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setEditText(text);
}
void QComboBox_wrapper::setEditable(bool editable) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setEditable(editable);
}
void QComboBox_wrapper::setEnabled(bool arg__1) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setEnabled(arg__1);
}
void QComboBox_wrapper::setFixedHeight(int h) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setFixedHeight(h);
}
void QComboBox_wrapper::setFixedSize(const QSize &arg__1) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setFixedSize(arg__1);
}
void QComboBox_wrapper::setFixedSize(int w, int h) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setFixedSize(w, h);
}
void QComboBox_wrapper::setFixedWidth(int w) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setFixedWidth(w);
}
void QComboBox_wrapper::setFocus() {
  // tag=1000

  // tag=1004
  return ::QComboBox::setFocus();
}
void QComboBox_wrapper::setFocusProxy(QWidget *arg__1) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setFocusProxy(arg__1);
}
void QComboBox_wrapper::setForegroundRole(QPalette::ColorRole arg__1) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setForegroundRole(arg__1);
}
void QComboBox_wrapper::setFrame(bool arg__1) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setFrame(arg__1);
}
void QComboBox_wrapper::setGeometry(const QRect &arg__1) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setGeometry(arg__1);
}
void QComboBox_wrapper::setGeometry(int x, int y, int w, int h) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setGeometry(x, y, w, h);
}
void QComboBox_wrapper::setHidden(bool hidden) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setHidden(hidden);
}
void QComboBox_wrapper::setIconSize(const QSize &size) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setIconSize(size);
}
void QComboBox_wrapper::setItemData(int index, const QVariant &value,
                                    int role) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setItemData(index, value, role);
}
void QComboBox_wrapper::setItemIcon(int index, const QIcon &icon) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setItemIcon(index, icon);
}
void QComboBox_wrapper::setItemText(int index, const QString &text) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setItemText(index, text);
}
void QComboBox_wrapper::setLayoutDirection(Qt::LayoutDirection direction) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setLayoutDirection(direction);
}
void QComboBox_wrapper::setLineEdit(QLineEdit *edit) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setLineEdit(edit);
}
void QComboBox_wrapper::setMaxCount(int max) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setMaxCount(max);
}
void QComboBox_wrapper::setMaxVisibleItems(int maxItems) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setMaxVisibleItems(maxItems);
}
void QComboBox_wrapper::setMaximumHeight(int maxh) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setMaximumHeight(maxh);
}
void QComboBox_wrapper::setMaximumSize(const QSize &arg__1) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setMaximumSize(arg__1);
}
void QComboBox_wrapper::setMaximumSize(int maxw, int maxh) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setMaximumSize(maxw, maxh);
}
void QComboBox_wrapper::setMaximumWidth(int maxw) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setMaximumWidth(maxw);
}
void QComboBox_wrapper::setMinimumContentsLength(int characters) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setMinimumContentsLength(characters);
}
void QComboBox_wrapper::setMinimumHeight(int minh) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setMinimumHeight(minh);
}
void QComboBox_wrapper::setMinimumSize(const QSize &arg__1) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setMinimumSize(arg__1);
}
void QComboBox_wrapper::setMinimumSize(int minw, int minh) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setMinimumSize(minw, minh);
}
void QComboBox_wrapper::setMinimumWidth(int minw) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setMinimumWidth(minw);
}
void QComboBox_wrapper::setModel(QAbstractItemModel *model) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setModel(model);
}
void QComboBox_wrapper::setModelColumn(int visibleColumn) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setModelColumn(visibleColumn);
}
void QComboBox_wrapper::setMouseTracking(bool enable) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setMouseTracking(enable);
}
void QComboBox_wrapper::setPalette(const QPalette &arg__1) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setPalette(arg__1);
}
void QComboBox_wrapper::setPlaceholderText(const QString &placeholderText) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setPlaceholderText(placeholderText);
}
void QComboBox_wrapper::setRootModelIndex(const QModelIndex &index) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setRootModelIndex(index);
}
void QComboBox_wrapper::setShortcutAutoRepeat(int id, bool enable) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setShortcutAutoRepeat(id, enable);
}
void QComboBox_wrapper::setShortcutEnabled(int id, bool enable) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setShortcutEnabled(id, enable);
}
void QComboBox_wrapper::setSizeIncrement(const QSize &arg__1) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setSizeIncrement(arg__1);
}
void QComboBox_wrapper::setSizeIncrement(int w, int h) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setSizeIncrement(w, h);
}
void QComboBox_wrapper::setStatusTip(const QString &arg__1) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setStatusTip(arg__1);
}
void QComboBox_wrapper::setStyle(QStyle *arg__1) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setStyle(arg__1);
}
void QComboBox_wrapper::setStyleSheet(const QString &styleSheet) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setStyleSheet(styleSheet);
}
void QComboBox_wrapper::setTabOrder(QWidget *arg__1, QWidget *arg__2) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setTabOrder(arg__1, arg__2);
}
void QComboBox_wrapper::setTabletTracking(bool enable) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setTabletTracking(enable);
}
void QComboBox_wrapper::setToolTip(const QString &arg__1) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setToolTip(arg__1);
}
void QComboBox_wrapper::setToolTipDuration(int msec) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setToolTipDuration(msec);
}
void QComboBox_wrapper::setUpdatesEnabled(bool enable) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setUpdatesEnabled(enable);
}
void QComboBox_wrapper::setView(QAbstractItemView *itemView) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setView(itemView);
}
void QComboBox_wrapper::setWhatsThis(const QString &arg__1) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setWhatsThis(arg__1);
}
void QComboBox_wrapper::setWindowFilePath(const QString &filePath) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setWindowFilePath(filePath);
}
void QComboBox_wrapper::setWindowIcon(const QIcon &icon) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setWindowIcon(icon);
}
void QComboBox_wrapper::setWindowIconText(const QString &arg__1) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setWindowIconText(arg__1);
}
void QComboBox_wrapper::setWindowModified(bool arg__1) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setWindowModified(arg__1);
}
void QComboBox_wrapper::setWindowOpacity(qreal level) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setWindowOpacity(level);
}
void QComboBox_wrapper::setWindowRole(const QString &arg__1) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setWindowRole(arg__1);
}
void QComboBox_wrapper::setWindowTitle(const QString &arg__1) {
  // tag=1000

  // tag=1004
  return ::QComboBox::setWindowTitle(arg__1);
}
void QComboBox_wrapper::show() {
  // tag=1000

  // tag=1004
  return ::QComboBox::show();
}
void QComboBox_wrapper::showFullScreen() {
  // tag=1000

  // tag=1004
  return ::QComboBox::showFullScreen();
}
void QComboBox_wrapper::showMaximized() {
  // tag=1000

  // tag=1004
  return ::QComboBox::showMaximized();
}
void QComboBox_wrapper::showMinimized() {
  // tag=1000

  // tag=1004
  return ::QComboBox::showMinimized();
}
void QComboBox_wrapper::showNormal() {
  // tag=1000

  // tag=1004
  return ::QComboBox::showNormal();
}
void QComboBox_wrapper::showPopup() {
  // tag=1000
  if (m_showPopupCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_showPopupCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QComboBox::showPopup();
  }
}
// tag=1009
void QComboBox_wrapper::showPopup_nocallback() {
  // tag=1003
  return ::QComboBox::showPopup();
}
QSize QComboBox_wrapper::size() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::size();
}
QSize QComboBox_wrapper::sizeIncrement() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::sizeIncrement();
}
void QComboBox_wrapper::stackUnder(QWidget *arg__1) {
  // tag=1000

  // tag=1004
  return ::QComboBox::stackUnder(arg__1);
}
QString QComboBox_wrapper::statusTip() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::statusTip();
}
QStyle *QComboBox_wrapper::style() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::style();
}
QString QComboBox_wrapper::styleSheet() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::styleSheet();
}
void QComboBox_wrapper::textActivated(const QString &arg__1) {
  // tag=1000

  // tag=1004
  return ::QComboBox::textActivated(arg__1);
}
void QComboBox_wrapper::textHighlighted(const QString &arg__1) {
  // tag=1000

  // tag=1004
  return ::QComboBox::textHighlighted(arg__1);
}
QString QComboBox_wrapper::toolTip() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::toolTip();
}
int QComboBox_wrapper::toolTipDuration() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::toolTipDuration();
}
QWidget *QComboBox_wrapper::topLevelWidget() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::topLevelWidget();
}
QString QComboBox_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QComboBox::tr(s, c, n);
}
bool QComboBox_wrapper::underMouse() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::underMouse();
}
void QComboBox_wrapper::unsetCursor() {
  // tag=1000

  // tag=1004
  return ::QComboBox::unsetCursor();
}
void QComboBox_wrapper::unsetLayoutDirection() {
  // tag=1000

  // tag=1004
  return ::QComboBox::unsetLayoutDirection();
}
void QComboBox_wrapper::unsetLocale() {
  // tag=1000

  // tag=1004
  return ::QComboBox::unsetLocale();
}
void QComboBox_wrapper::update() {
  // tag=1000

  // tag=1004
  return ::QComboBox::update();
}
void QComboBox_wrapper::update(const QRect &arg__1) {
  // tag=1000

  // tag=1004
  return ::QComboBox::update(arg__1);
}
void QComboBox_wrapper::update(int x, int y, int w, int h) {
  // tag=1000

  // tag=1004
  return ::QComboBox::update(x, y, w, h);
}
void QComboBox_wrapper::updateGeometry() {
  // tag=1000

  // tag=1004
  return ::QComboBox::updateGeometry();
}
void QComboBox_wrapper::updateMicroFocus() {
  // tag=1000

  // tag=1004
  return ::QComboBox::updateMicroFocus();
}
bool QComboBox_wrapper::updatesEnabled() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::updatesEnabled();
}
QAbstractItemView *QComboBox_wrapper::view() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::view();
}
QString QComboBox_wrapper::whatsThis() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::whatsThis();
}
int QComboBox_wrapper::width() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::width();
}
QWidget *QComboBox_wrapper::window() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::window();
}
QString QComboBox_wrapper::windowFilePath() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::windowFilePath();
}
QWindow *QComboBox_wrapper::windowHandle() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::windowHandle();
}
QIcon QComboBox_wrapper::windowIcon() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::windowIcon();
}
void QComboBox_wrapper::windowIconChanged(const QIcon &icon) {
  // tag=1000

  // tag=1004
  return ::QComboBox::windowIconChanged(icon);
}
QString QComboBox_wrapper::windowIconText() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::windowIconText();
}
void QComboBox_wrapper::windowIconTextChanged(const QString &iconText) {
  // tag=1000

  // tag=1004
  return ::QComboBox::windowIconTextChanged(iconText);
}
qreal QComboBox_wrapper::windowOpacity() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::windowOpacity();
}
QString QComboBox_wrapper::windowRole() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::windowRole();
}
QString QComboBox_wrapper::windowTitle() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::windowTitle();
}
void QComboBox_wrapper::windowTitleChanged(const QString &title) {
  // tag=1000

  // tag=1004
  return ::QComboBox::windowTitleChanged(title);
}
int QComboBox_wrapper::x() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::x();
}
int QComboBox_wrapper::y() const {
  // tag=1000

  // tag=1004
  return ::QComboBox::y();
}

// tag=1005
QComboBox_wrapper::~QComboBox_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QComboBox *fromPtr(void *ptr) {
  return reinterpret_cast<QComboBox *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QComboBox_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QComboBox_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void dartffi_QComboBox_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QComboBox_wrapper *>(
      cppObj);
}
void *dartffi_QComboBox__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QComboBox_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// acceptDrops() const
bool dartffi_QComboBox__acceptDrops(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->acceptDrops();
}

// tag=1050
// accessibleDescription() const
void *dartffi_QComboBox__accessibleDescription(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          fromPtr(thisObj)->accessibleDescription()};
}

// tag=1050
// accessibleName() const
void *dartffi_QComboBox__accessibleName(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->accessibleName()};
}

// tag=1050
// actions() const
void *dartffi_QComboBox__actions(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QAction *>>{
          fromPtr(thisObj)->actions()};
}

// tag=1050
// activateWindow()
void dartffi_QComboBox__activateWindow(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->activateWindow();
}

// tag=1050
// activated(int index)
void dartffi_QComboBox__activated_int(void *thisObj, int index) {
  return
      // tag=1010
      fromPtr(thisObj)->activated(index);
}

// tag=1079
void dartffi_QComboBox__onActivated_int(void *thisObj, void *contextQObject,
                                        void *callback) {
  auto instance = reinterpret_cast<QComboBox *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QComboBox::activated,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// addAction(QAction * action)
void dartffi_QComboBox__addAction_QAction(void *thisObj, void *action_) {
  auto action = reinterpret_cast<QAction *>(action_);
  return
      // tag=1010
      fromPtr(thisObj)->addAction(action);
}

// tag=1050
// addActions(QList<QAction* > actions)
void dartffi_QComboBox__addActions_QList(void *thisObj, void *actions_) {
  auto &actions = *reinterpret_cast<QList<QAction *> *>(actions_);
  return
      // tag=1010
      fromPtr(thisObj)->addActions(actions);
}

// tag=1050
// addItem(const QIcon & icon, const QString & text, const QVariant & userData)
void dartffi_QComboBox__addItem_QIcon_QString_QVariant(void *thisObj,
                                                       void *icon_,
                                                       const char *text_,
                                                       void *userData_) {
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  const auto text = QString::fromUtf8(text_);
  auto &userData = *reinterpret_cast<QVariant *>(userData_);
  return
      // tag=1010
      fromPtr(thisObj)->addItem(icon, text, userData);
}

// tag=1050
// addItem(const QString & text, const QVariant & userData)
void dartffi_QComboBox__addItem_QString_QVariant(void *thisObj,
                                                 const char *text_,
                                                 void *userData_) {
  const auto text = QString::fromUtf8(text_);
  auto &userData = *reinterpret_cast<QVariant *>(userData_);
  return
      // tag=1010
      fromPtr(thisObj)->addItem(text, userData);
}

// tag=1050
// adjustSize()
void dartffi_QComboBox__adjustSize(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->adjustSize();
}

// tag=1050
// autoFillBackground() const
bool dartffi_QComboBox__autoFillBackground(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->autoFillBackground();
}

// tag=1050
// backgroundRole() const
int dartffi_QComboBox__backgroundRole(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->backgroundRole();
}

// tag=1050
// baseSize() const
void *dartffi_QComboBox__baseSize(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->baseSize()};
}

// tag=1050
// childAt(const QPoint & p) const
void *dartffi_QComboBox__childAt_QPoint(void *thisObj, void *p_) {
  auto &p = *reinterpret_cast<QPoint *>(p_);
  return
      // tag=1010
      fromPtr(thisObj)->childAt(p);
}

// tag=1050
// childAt(int x, int y) const
void *dartffi_QComboBox__childAt_int_int(void *thisObj, int x, int y) {
  return
      // tag=1010
      fromPtr(thisObj)->childAt(x, y);
}

// tag=1050
// childrenRect() const
void *dartffi_QComboBox__childrenRect(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->childrenRect()};
}

// tag=1050
// clear()
void dartffi_QComboBox__clear(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->clear();
}

// tag=1050
// clearEditText()
void dartffi_QComboBox__clearEditText(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->clearEditText();
}

// tag=1050
// clearFocus()
void dartffi_QComboBox__clearFocus(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->clearFocus();
}

// tag=1050
// clearMask()
void dartffi_QComboBox__clearMask(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->clearMask();
}

// tag=1050
// close()
bool dartffi_QComboBox__close(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->close();
}

// tag=1050
// contentsRect() const
void *dartffi_QComboBox__contentsRect(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->contentsRect()};
}

// tag=1050
// count() const
int dartffi_QComboBox__count(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->count();
}

// tag=1050
// create()
void dartffi_QComboBox__create(void *thisObj) {
  return
      // tag=1011

      // tag=1073
      fromWrapperPtr(thisObj)->create();
}

// tag=1050
// createWinId()
void dartffi_QComboBox__createWinId(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->createWinId();
}

// tag=1050
// createWindowContainer(QWindow * window, QWidget * parent)
void *
dartffi_static_QComboBox__createWindowContainer_QWindow_QWidget(void *window_,
                                                                void *parent_) {
  auto window = reinterpret_cast<QWindow *>(window_);
  auto parent = reinterpret_cast<QWidget *>(parent_);
  return
      // tag=1068
      QtDartBindings_wrappersNS::QComboBox_wrapper::createWindowContainer(
          window, parent);
}

// tag=1050
// currentData(int role) const
void *dartffi_QComboBox__currentData_int(void *thisObj, int role) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QVariant>{
          fromPtr(thisObj)->currentData(role)};
}

// tag=1050
// currentIndex() const
int dartffi_QComboBox__currentIndex(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->currentIndex();
}

// tag=1050
// currentIndexChanged(int index)
void dartffi_QComboBox__currentIndexChanged_int(void *thisObj, int index) {
  return
      // tag=1010
      fromPtr(thisObj)->currentIndexChanged(index);
}

// tag=1079
void dartffi_QComboBox__onCurrentIndexChanged_int(void *thisObj,
                                                  void *contextQObject,
                                                  void *callback) {
  auto instance = reinterpret_cast<QComboBox *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QComboBox::currentIndexChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// currentText() const
void *dartffi_QComboBox__currentText(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->currentText()};
}

// tag=1050
// currentTextChanged(const QString & arg__1)
void dartffi_QComboBox__currentTextChanged_QString(void *thisObj,
                                                   const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  return
      // tag=1010
      fromPtr(thisObj)->currentTextChanged(arg__1);
}

// tag=1079
void dartffi_QComboBox__onCurrentTextChanged_QString(void *thisObj,
                                                     void *contextQObject,
                                                     void *callback) {
  auto instance = reinterpret_cast<QComboBox *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QComboBox::currentTextChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// customContextMenuRequested(const QPoint & pos)
void dartffi_QComboBox__customContextMenuRequested_QPoint(void *thisObj,
                                                          void *pos_) {
  auto &pos = *reinterpret_cast<QPoint *>(pos_);
  return
      // tag=1010
      fromPtr(thisObj)->customContextMenuRequested(pos);
}

// tag=1079
void dartffi_QComboBox__onCustomContextMenuRequested_QPoint(
    void *thisObj, void *contextQObject, void *callback) {
  auto instance = reinterpret_cast<QComboBox *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QComboBox::customContextMenuRequested,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// destroy(bool destroyWindow, bool destroySubWindows)
void dartffi_QComboBox__destroy_bool_bool(void *thisObj, bool destroyWindow,
                                          bool destroySubWindows) {
  return
      // tag=1011

      // tag=1073
      fromWrapperPtr(thisObj)->destroy(destroyWindow, destroySubWindows);
}

// tag=1050
// duplicatesEnabled() const
bool dartffi_QComboBox__duplicatesEnabled(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->duplicatesEnabled();
}

// tag=1050
// editTextChanged(const QString & arg__1)
void dartffi_QComboBox__editTextChanged_QString(void *thisObj,
                                                const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  return
      // tag=1010
      fromPtr(thisObj)->editTextChanged(arg__1);
}

// tag=1079
void dartffi_QComboBox__onEditTextChanged_QString(void *thisObj,
                                                  void *contextQObject,
                                                  void *callback) {
  auto instance = reinterpret_cast<QComboBox *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QComboBox::editTextChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// ensurePolished() const
void dartffi_QComboBox__ensurePolished(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->ensurePolished();
}

// tag=1050
// findData(const QVariant & data, int role) const
int dartffi_QComboBox__findData_QVariant_int(void *thisObj, void *data_,
                                             int role) {
  auto &data = *reinterpret_cast<QVariant *>(data_);
  return
      // tag=1010
      fromPtr(thisObj)->findData(data, role);
}

// tag=1050
// findText(const QString & text) const
int dartffi_QComboBox__findText_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  return
      // tag=1010
      fromPtr(thisObj)->findText(text);
}

// tag=1050
// focusNextChild()
bool dartffi_QComboBox__focusNextChild(void *thisObj) {
  return
      // tag=1011

      // tag=1073
      fromWrapperPtr(thisObj)->focusNextChild();
}

// tag=1050
// focusPreviousChild()
bool dartffi_QComboBox__focusPreviousChild(void *thisObj) {
  return
      // tag=1011

      // tag=1073
      fromWrapperPtr(thisObj)->focusPreviousChild();
}

// tag=1050
// focusProxy() const
void *dartffi_QComboBox__focusProxy(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->focusProxy();
}

// tag=1050
// focusWidget() const
void *dartffi_QComboBox__focusWidget(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->focusWidget();
}

// tag=1050
// foregroundRole() const
int dartffi_QComboBox__foregroundRole(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->foregroundRole();
}

// tag=1050
// frameGeometry() const
void *dartffi_QComboBox__frameGeometry(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->frameGeometry()};
}

// tag=1050
// frameSize() const
void *dartffi_QComboBox__frameSize(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->frameSize()};
}

// tag=1050
// geometry() const
void *dartffi_QComboBox__geometry(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(
          static_cast<const void *>(&fromPtr(thisObj)->geometry()));
}

// tag=1050
// grab(const QRect & rectangle)
void *dartffi_QComboBox__grab_QRect(void *thisObj, void *rectangle_) {
  auto &rectangle = *reinterpret_cast<QRect *>(rectangle_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPixmap>{fromPtr(thisObj)->grab(rectangle)};
}

// tag=1050
// grabKeyboard()
void dartffi_QComboBox__grabKeyboard(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->grabKeyboard();
}

// tag=1050
// grabMouse()
void dartffi_QComboBox__grabMouse(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->grabMouse();
}

// tag=1050
// hasFocus() const
bool dartffi_QComboBox__hasFocus(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->hasFocus();
}

// tag=1050
// hasFrame() const
bool dartffi_QComboBox__hasFrame(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->hasFrame();
}

// tag=1050
// hasMouseTracking() const
bool dartffi_QComboBox__hasMouseTracking(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->hasMouseTracking();
}

// tag=1050
// hasTabletTracking() const
bool dartffi_QComboBox__hasTabletTracking(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->hasTabletTracking();
}

// tag=1050
// height() const
int dartffi_QComboBox__height(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->height();
}

// tag=1050
// hide()
void dartffi_QComboBox__hide(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->hide();
}

// tag=1050
// hidePopup()
void dartffi_QComboBox__hidePopup(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QComboBox_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->hidePopup_nocallback();
        } else {
          return targetPtr->hidePopup();
        }
      }();
}

// tag=1050
// highlighted(int index)
void dartffi_QComboBox__highlighted_int(void *thisObj, int index) {
  return
      // tag=1010
      fromPtr(thisObj)->highlighted(index);
}

// tag=1079
void dartffi_QComboBox__onHighlighted_int(void *thisObj, void *contextQObject,
                                          void *callback) {
  auto instance = reinterpret_cast<QComboBox *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QComboBox::highlighted,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// iconSize() const
void *dartffi_QComboBox__iconSize(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->iconSize()};
}

// tag=1050
// insertAction(QAction * before, QAction * action)
void dartffi_QComboBox__insertAction_QAction_QAction(void *thisObj,
                                                     void *before_,
                                                     void *action_) {
  auto before = reinterpret_cast<QAction *>(before_);
  auto action = reinterpret_cast<QAction *>(action_);
  return
      // tag=1010
      fromPtr(thisObj)->insertAction(before, action);
}

// tag=1050
// insertActions(QAction * before, QList<QAction* > actions)
void dartffi_QComboBox__insertActions_QAction_QList(void *thisObj,
                                                    void *before_,
                                                    void *actions_) {
  auto before = reinterpret_cast<QAction *>(before_);
  auto &actions = *reinterpret_cast<QList<QAction *> *>(actions_);
  return
      // tag=1010
      fromPtr(thisObj)->insertActions(before, actions);
}

// tag=1050
// insertItem(int index, const QIcon & icon, const QString & text, const
// QVariant & userData)
void dartffi_QComboBox__insertItem_int_QIcon_QString_QVariant(
    void *thisObj, int index, void *icon_, const char *text_, void *userData_) {
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  const auto text = QString::fromUtf8(text_);
  auto &userData = *reinterpret_cast<QVariant *>(userData_);
  return
      // tag=1010
      fromPtr(thisObj)->insertItem(index, icon, text, userData);
}

// tag=1050
// insertItem(int index, const QString & text, const QVariant & userData)
void dartffi_QComboBox__insertItem_int_QString_QVariant(void *thisObj,
                                                        int index,
                                                        const char *text_,
                                                        void *userData_) {
  const auto text = QString::fromUtf8(text_);
  auto &userData = *reinterpret_cast<QVariant *>(userData_);
  return
      // tag=1010
      fromPtr(thisObj)->insertItem(index, text, userData);
}

// tag=1050
// insertSeparator(int index)
void dartffi_QComboBox__insertSeparator_int(void *thisObj, int index) {
  return
      // tag=1010
      fromPtr(thisObj)->insertSeparator(index);
}

// tag=1050
// isActiveWindow() const
bool dartffi_QComboBox__isActiveWindow(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isActiveWindow();
}

// tag=1050
// isAncestorOf(const QWidget * child) const
bool dartffi_QComboBox__isAncestorOf_QWidget(void *thisObj, void *child_) {
  auto child = reinterpret_cast<QWidget *>(child_);
  return
      // tag=1010
      fromPtr(thisObj)->isAncestorOf(child);
}

// tag=1050
// isEditable() const
bool dartffi_QComboBox__isEditable(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isEditable();
}

// tag=1050
// isEnabled() const
bool dartffi_QComboBox__isEnabled(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isEnabled();
}

// tag=1050
// isEnabledTo(const QWidget * arg__1) const
bool dartffi_QComboBox__isEnabledTo_QWidget(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  return
      // tag=1010
      fromPtr(thisObj)->isEnabledTo(arg__1);
}

// tag=1050
// isFullScreen() const
bool dartffi_QComboBox__isFullScreen(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isFullScreen();
}

// tag=1050
// isHidden() const
bool dartffi_QComboBox__isHidden(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isHidden();
}

// tag=1050
// isLeftToRight() const
bool dartffi_QComboBox__isLeftToRight(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isLeftToRight();
}

// tag=1050
// isMaximized() const
bool dartffi_QComboBox__isMaximized(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isMaximized();
}

// tag=1050
// isMinimized() const
bool dartffi_QComboBox__isMinimized(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isMinimized();
}

// tag=1050
// isModal() const
bool dartffi_QComboBox__isModal(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isModal();
}

// tag=1050
// isRightToLeft() const
bool dartffi_QComboBox__isRightToLeft(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isRightToLeft();
}

// tag=1050
// isTopLevel() const
bool dartffi_QComboBox__isTopLevel(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isTopLevel();
}

// tag=1050
// isVisible() const
bool dartffi_QComboBox__isVisible(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isVisible();
}

// tag=1050
// isVisibleTo(const QWidget * arg__1) const
bool dartffi_QComboBox__isVisibleTo_QWidget(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  return
      // tag=1010
      fromPtr(thisObj)->isVisibleTo(arg__1);
}

// tag=1050
// isWindow() const
bool dartffi_QComboBox__isWindow(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isWindow();
}

// tag=1050
// isWindowModified() const
bool dartffi_QComboBox__isWindowModified(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isWindowModified();
}

// tag=1050
// itemData(int index, int role) const
void *dartffi_QComboBox__itemData_int_int(void *thisObj, int index, int role) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QVariant>{
          fromPtr(thisObj)->itemData(index, role)};
}

// tag=1050
// itemIcon(int index) const
void *dartffi_QComboBox__itemIcon_int(void *thisObj, int index) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QIcon>{fromPtr(thisObj)->itemIcon(index)};
}

// tag=1050
// itemText(int index) const
void *dartffi_QComboBox__itemText_int(void *thisObj, int index) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->itemText(index)};
}

// tag=1050
// keyboardGrabber()
void *dartffi_static_QComboBox__keyboardGrabber() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QComboBox_wrapper::keyboardGrabber();
}

// tag=1050
// layoutDirection() const
int dartffi_QComboBox__layoutDirection(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->layoutDirection();
}

// tag=1050
// lineEdit() const
void *dartffi_QComboBox__lineEdit(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->lineEdit();
}

// tag=1050
// lower()
void dartffi_QComboBox__lower(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->lower();
}

// tag=1050
// mapFrom(const QWidget * arg__1, const QPoint & arg__2) const
void *dartffi_QComboBox__mapFrom_QWidget_QPoint(void *thisObj, void *arg__1_,
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
// mapFromGlobal(const QPoint & arg__1) const
void *dartffi_QComboBox__mapFromGlobal_QPoint(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QPoint *>(arg__1_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPoint>{
          fromPtr(thisObj)->mapFromGlobal(arg__1)};
}

// tag=1050
// mapFromParent(const QPoint & arg__1) const
void *dartffi_QComboBox__mapFromParent_QPoint(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QPoint *>(arg__1_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPoint>{
          fromPtr(thisObj)->mapFromParent(arg__1)};
}

// tag=1050
// mapTo(const QWidget * arg__1, const QPoint & arg__2) const
void *dartffi_QComboBox__mapTo_QWidget_QPoint(void *thisObj, void *arg__1_,
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
// mapToGlobal(const QPoint & arg__1) const
void *dartffi_QComboBox__mapToGlobal_QPoint(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QPoint *>(arg__1_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPoint>{
          fromPtr(thisObj)->mapToGlobal(arg__1)};
}

// tag=1050
// mapToParent(const QPoint & arg__1) const
void *dartffi_QComboBox__mapToParent_QPoint(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QPoint *>(arg__1_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPoint>{
          fromPtr(thisObj)->mapToParent(arg__1)};
}

// tag=1050
// maxCount() const
int dartffi_QComboBox__maxCount(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->maxCount();
}

// tag=1050
// maxVisibleItems() const
int dartffi_QComboBox__maxVisibleItems(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->maxVisibleItems();
}

// tag=1050
// maximumHeight() const
int dartffi_QComboBox__maximumHeight(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->maximumHeight();
}

// tag=1050
// maximumSize() const
void *dartffi_QComboBox__maximumSize(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->maximumSize()};
}

// tag=1050
// maximumWidth() const
int dartffi_QComboBox__maximumWidth(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->maximumWidth();
}

// tag=1050
// minimumContentsLength() const
int dartffi_QComboBox__minimumContentsLength(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->minimumContentsLength();
}

// tag=1050
// minimumHeight() const
int dartffi_QComboBox__minimumHeight(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->minimumHeight();
}

// tag=1050
// minimumSize() const
void *dartffi_QComboBox__minimumSize(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->minimumSize()};
}

// tag=1050
// minimumWidth() const
int dartffi_QComboBox__minimumWidth(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->minimumWidth();
}

// tag=1050
// model() const
void *dartffi_QComboBox__model(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->model();
}

// tag=1050
// modelColumn() const
int dartffi_QComboBox__modelColumn(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->modelColumn();
}

// tag=1050
// mouseGrabber()
void *dartffi_static_QComboBox__mouseGrabber() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QComboBox_wrapper::mouseGrabber();
}

// tag=1050
// move(const QPoint & arg__1)
void dartffi_QComboBox__move_QPoint(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QPoint *>(arg__1_);
  return
      // tag=1010
      fromPtr(thisObj)->move(arg__1);
}

// tag=1050
// move(int x, int y)
void dartffi_QComboBox__move_int_int(void *thisObj, int x, int y) {
  return
      // tag=1010
      fromPtr(thisObj)->move(x, y);
}

// tag=1050
// nativeParentWidget() const
void *dartffi_QComboBox__nativeParentWidget(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->nativeParentWidget();
}

// tag=1050
// nextInFocusChain() const
void *dartffi_QComboBox__nextInFocusChain(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->nextInFocusChain();
}

// tag=1050
// normalGeometry() const
void *dartffi_QComboBox__normalGeometry(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->normalGeometry()};
}

// tag=1050
// palette() const
void *dartffi_QComboBox__palette(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(
          static_cast<const void *>(&fromPtr(thisObj)->palette()));
}

// tag=1050
// parentWidget() const
void *dartffi_QComboBox__parentWidget(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->parentWidget();
}

// tag=1050
// placeholderText() const
void *dartffi_QComboBox__placeholderText(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->placeholderText()};
}

// tag=1050
// pos() const
void *dartffi_QComboBox__pos(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPoint>{fromPtr(thisObj)->pos()};
}

// tag=1050
// previousInFocusChain() const
void *dartffi_QComboBox__previousInFocusChain(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->previousInFocusChain();
}

// tag=1050
// raise()
void dartffi_QComboBox__raise(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->raise();
}

// tag=1050
// rect() const
void *dartffi_QComboBox__rect(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->rect()};
}

// tag=1050
// releaseKeyboard()
void dartffi_QComboBox__releaseKeyboard(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->releaseKeyboard();
}

// tag=1050
// releaseMouse()
void dartffi_QComboBox__releaseMouse(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->releaseMouse();
}

// tag=1050
// releaseShortcut(int id)
void dartffi_QComboBox__releaseShortcut_int(void *thisObj, int id) {
  return
      // tag=1010
      fromPtr(thisObj)->releaseShortcut(id);
}

// tag=1050
// removeAction(QAction * action)
void dartffi_QComboBox__removeAction_QAction(void *thisObj, void *action_) {
  auto action = reinterpret_cast<QAction *>(action_);
  return
      // tag=1010
      fromPtr(thisObj)->removeAction(action);
}

// tag=1050
// removeItem(int index)
void dartffi_QComboBox__removeItem_int(void *thisObj, int index) {
  return
      // tag=1010
      fromPtr(thisObj)->removeItem(index);
}

// tag=1050
// render(QPainter * painter, const QPoint & targetOffset)
void dartffi_QComboBox__render_QPainter_QPoint(void *thisObj, void *painter_,
                                               void *targetOffset_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  auto &targetOffset = *reinterpret_cast<QPoint *>(targetOffset_);
  return
      // tag=1010
      fromPtr(thisObj)->render(painter, targetOffset);
}

// tag=1050
// repaint()
void dartffi_QComboBox__repaint(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->repaint();
}

// tag=1050
// repaint(const QRect & arg__1)
void dartffi_QComboBox__repaint_QRect(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  return
      // tag=1010
      fromPtr(thisObj)->repaint(arg__1);
}

// tag=1050
// repaint(int x, int y, int w, int h)
void dartffi_QComboBox__repaint_int_int_int_int(void *thisObj, int x, int y,
                                                int w, int h) {
  return
      // tag=1010
      fromPtr(thisObj)->repaint(x, y, w, h);
}

// tag=1050
// resize(const QSize & arg__1)
void dartffi_QComboBox__resize_QSize(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QSize *>(arg__1_);
  return
      // tag=1010
      fromPtr(thisObj)->resize(arg__1);
}

// tag=1050
// resize(int w, int h)
void dartffi_QComboBox__resize_int_int(void *thisObj, int w, int h) {
  return
      // tag=1010
      fromPtr(thisObj)->resize(w, h);
}

// tag=1050
// restoreGeometry(const QByteArray & geometry)
bool dartffi_QComboBox__restoreGeometry_QByteArray(void *thisObj,
                                                   void *geometry_) {
  auto &geometry = *reinterpret_cast<QByteArray *>(geometry_);
  return
      // tag=1010
      fromPtr(thisObj)->restoreGeometry(geometry);
}

// tag=1050
// rootModelIndex() const
void *dartffi_QComboBox__rootModelIndex(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{
          fromPtr(thisObj)->rootModelIndex()};
}

// tag=1050
// saveGeometry() const
void *dartffi_QComboBox__saveGeometry(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->saveGeometry()};
}

// tag=1050
// scroll(int dx, int dy)
void dartffi_QComboBox__scroll_int_int(void *thisObj, int dx, int dy) {
  return
      // tag=1010
      fromPtr(thisObj)->scroll(dx, dy);
}

// tag=1050
// scroll(int dx, int dy, const QRect & arg__3)
void dartffi_QComboBox__scroll_int_int_QRect(void *thisObj, int dx, int dy,
                                             void *arg__3_) {
  auto &arg__3 = *reinterpret_cast<QRect *>(arg__3_);
  return
      // tag=1010
      fromPtr(thisObj)->scroll(dx, dy, arg__3);
}

// tag=1050
// setAcceptDrops(bool on)
void dartffi_QComboBox__setAcceptDrops_bool(void *thisObj, bool on) {
  return
      // tag=1010
      fromPtr(thisObj)->setAcceptDrops(on);
}

// tag=1050
// setAccessibleDescription(const QString & description)
void dartffi_QComboBox__setAccessibleDescription_QString(
    void *thisObj, const char *description_) {
  const auto description = QString::fromUtf8(description_);
  return
      // tag=1010
      fromPtr(thisObj)->setAccessibleDescription(description);
}

// tag=1050
// setAccessibleName(const QString & name)
void dartffi_QComboBox__setAccessibleName_QString(void *thisObj,
                                                  const char *name_) {
  const auto name = QString::fromUtf8(name_);
  return
      // tag=1010
      fromPtr(thisObj)->setAccessibleName(name);
}

// tag=1050
// setAutoFillBackground(bool enabled)
void dartffi_QComboBox__setAutoFillBackground_bool(void *thisObj,
                                                   bool enabled) {
  return
      // tag=1010
      fromPtr(thisObj)->setAutoFillBackground(enabled);
}

// tag=1050
// setBackgroundRole(QPalette::ColorRole arg__1)
void dartffi_QComboBox__setBackgroundRole_ColorRole(void *thisObj, int arg__1) {
  return
      // tag=1010
      fromPtr(thisObj)->setBackgroundRole(
          static_cast<QPalette::ColorRole>(arg__1));
}

// tag=1050
// setBaseSize(const QSize & arg__1)
void dartffi_QComboBox__setBaseSize_QSize(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QSize *>(arg__1_);
  return
      // tag=1010
      fromPtr(thisObj)->setBaseSize(arg__1);
}

// tag=1050
// setBaseSize(int basew, int baseh)
void dartffi_QComboBox__setBaseSize_int_int(void *thisObj, int basew,
                                            int baseh) {
  return
      // tag=1010
      fromPtr(thisObj)->setBaseSize(basew, baseh);
}

// tag=1050
// setContentsMargins(int left, int top, int right, int bottom)
void dartffi_QComboBox__setContentsMargins_int_int_int_int(void *thisObj,
                                                           int left, int top,
                                                           int right,
                                                           int bottom) {
  return
      // tag=1010
      fromPtr(thisObj)->setContentsMargins(left, top, right, bottom);
}

// tag=1050
// setCurrentIndex(int index)
void dartffi_QComboBox__setCurrentIndex_int(void *thisObj, int index) {
  return
      // tag=1010
      fromPtr(thisObj)->setCurrentIndex(index);
}

// tag=1050
// setCurrentText(const QString & text)
void dartffi_QComboBox__setCurrentText_QString(void *thisObj,
                                               const char *text_) {
  const auto text = QString::fromUtf8(text_);
  return
      // tag=1010
      fromPtr(thisObj)->setCurrentText(text);
}

// tag=1050
// setDisabled(bool arg__1)
void dartffi_QComboBox__setDisabled_bool(void *thisObj, bool arg__1) {
  return
      // tag=1010
      fromPtr(thisObj)->setDisabled(arg__1);
}

// tag=1050
// setDuplicatesEnabled(bool enable)
void dartffi_QComboBox__setDuplicatesEnabled_bool(void *thisObj, bool enable) {
  return
      // tag=1010
      fromPtr(thisObj)->setDuplicatesEnabled(enable);
}

// tag=1050
// setEditText(const QString & text)
void dartffi_QComboBox__setEditText_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  return
      // tag=1010
      fromPtr(thisObj)->setEditText(text);
}

// tag=1050
// setEditable(bool editable)
void dartffi_QComboBox__setEditable_bool(void *thisObj, bool editable) {
  return
      // tag=1010
      fromPtr(thisObj)->setEditable(editable);
}

// tag=1050
// setEnabled(bool arg__1)
void dartffi_QComboBox__setEnabled_bool(void *thisObj, bool arg__1) {
  return
      // tag=1010
      fromPtr(thisObj)->setEnabled(arg__1);
}

// tag=1050
// setFixedHeight(int h)
void dartffi_QComboBox__setFixedHeight_int(void *thisObj, int h) {
  return
      // tag=1010
      fromPtr(thisObj)->setFixedHeight(h);
}

// tag=1050
// setFixedSize(const QSize & arg__1)
void dartffi_QComboBox__setFixedSize_QSize(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QSize *>(arg__1_);
  return
      // tag=1010
      fromPtr(thisObj)->setFixedSize(arg__1);
}

// tag=1050
// setFixedSize(int w, int h)
void dartffi_QComboBox__setFixedSize_int_int(void *thisObj, int w, int h) {
  return
      // tag=1010
      fromPtr(thisObj)->setFixedSize(w, h);
}

// tag=1050
// setFixedWidth(int w)
void dartffi_QComboBox__setFixedWidth_int(void *thisObj, int w) {
  return
      // tag=1010
      fromPtr(thisObj)->setFixedWidth(w);
}

// tag=1050
// setFocus()
void dartffi_QComboBox__setFocus(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->setFocus();
}

// tag=1050
// setFocusProxy(QWidget * arg__1)
void dartffi_QComboBox__setFocusProxy_QWidget(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  return
      // tag=1010
      fromPtr(thisObj)->setFocusProxy(arg__1);
}

// tag=1050
// setForegroundRole(QPalette::ColorRole arg__1)
void dartffi_QComboBox__setForegroundRole_ColorRole(void *thisObj, int arg__1) {
  return
      // tag=1010
      fromPtr(thisObj)->setForegroundRole(
          static_cast<QPalette::ColorRole>(arg__1));
}

// tag=1050
// setFrame(bool arg__1)
void dartffi_QComboBox__setFrame_bool(void *thisObj, bool arg__1) {
  return
      // tag=1010
      fromPtr(thisObj)->setFrame(arg__1);
}

// tag=1050
// setGeometry(const QRect & arg__1)
void dartffi_QComboBox__setGeometry_QRect(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  return
      // tag=1010
      fromPtr(thisObj)->setGeometry(arg__1);
}

// tag=1050
// setGeometry(int x, int y, int w, int h)
void dartffi_QComboBox__setGeometry_int_int_int_int(void *thisObj, int x, int y,
                                                    int w, int h) {
  return
      // tag=1010
      fromPtr(thisObj)->setGeometry(x, y, w, h);
}

// tag=1050
// setHidden(bool hidden)
void dartffi_QComboBox__setHidden_bool(void *thisObj, bool hidden) {
  return
      // tag=1010
      fromPtr(thisObj)->setHidden(hidden);
}

// tag=1050
// setIconSize(const QSize & size)
void dartffi_QComboBox__setIconSize_QSize(void *thisObj, void *size_) {
  auto &size = *reinterpret_cast<QSize *>(size_);
  return
      // tag=1010
      fromPtr(thisObj)->setIconSize(size);
}

// tag=1050
// setItemData(int index, const QVariant & value, int role)
void dartffi_QComboBox__setItemData_int_QVariant_int(void *thisObj, int index,
                                                     void *value_, int role) {
  auto &value = *reinterpret_cast<QVariant *>(value_);
  return
      // tag=1010
      fromPtr(thisObj)->setItemData(index, value, role);
}

// tag=1050
// setItemIcon(int index, const QIcon & icon)
void dartffi_QComboBox__setItemIcon_int_QIcon(void *thisObj, int index,
                                              void *icon_) {
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  return
      // tag=1010
      fromPtr(thisObj)->setItemIcon(index, icon);
}

// tag=1050
// setItemText(int index, const QString & text)
void dartffi_QComboBox__setItemText_int_QString(void *thisObj, int index,
                                                const char *text_) {
  const auto text = QString::fromUtf8(text_);
  return
      // tag=1010
      fromPtr(thisObj)->setItemText(index, text);
}

// tag=1050
// setLayoutDirection(Qt::LayoutDirection direction)
void dartffi_QComboBox__setLayoutDirection_LayoutDirection(void *thisObj,
                                                           int direction) {
  return
      // tag=1010
      fromPtr(thisObj)->setLayoutDirection(
          static_cast<Qt::LayoutDirection>(direction));
}

// tag=1050
// setLineEdit(QLineEdit * edit)
void dartffi_QComboBox__setLineEdit_QLineEdit(void *thisObj, void *edit_) {
  auto edit = reinterpret_cast<QLineEdit *>(edit_);
  return
      // tag=1010
      fromPtr(thisObj)->setLineEdit(edit);
}

// tag=1050
// setMaxCount(int max)
void dartffi_QComboBox__setMaxCount_int(void *thisObj, int max) {
  return
      // tag=1010
      fromPtr(thisObj)->setMaxCount(max);
}

// tag=1050
// setMaxVisibleItems(int maxItems)
void dartffi_QComboBox__setMaxVisibleItems_int(void *thisObj, int maxItems) {
  return
      // tag=1010
      fromPtr(thisObj)->setMaxVisibleItems(maxItems);
}

// tag=1050
// setMaximumHeight(int maxh)
void dartffi_QComboBox__setMaximumHeight_int(void *thisObj, int maxh) {
  return
      // tag=1010
      fromPtr(thisObj)->setMaximumHeight(maxh);
}

// tag=1050
// setMaximumSize(const QSize & arg__1)
void dartffi_QComboBox__setMaximumSize_QSize(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QSize *>(arg__1_);
  return
      // tag=1010
      fromPtr(thisObj)->setMaximumSize(arg__1);
}

// tag=1050
// setMaximumSize(int maxw, int maxh)
void dartffi_QComboBox__setMaximumSize_int_int(void *thisObj, int maxw,
                                               int maxh) {
  return
      // tag=1010
      fromPtr(thisObj)->setMaximumSize(maxw, maxh);
}

// tag=1050
// setMaximumWidth(int maxw)
void dartffi_QComboBox__setMaximumWidth_int(void *thisObj, int maxw) {
  return
      // tag=1010
      fromPtr(thisObj)->setMaximumWidth(maxw);
}

// tag=1050
// setMinimumContentsLength(int characters)
void dartffi_QComboBox__setMinimumContentsLength_int(void *thisObj,
                                                     int characters) {
  return
      // tag=1010
      fromPtr(thisObj)->setMinimumContentsLength(characters);
}

// tag=1050
// setMinimumHeight(int minh)
void dartffi_QComboBox__setMinimumHeight_int(void *thisObj, int minh) {
  return
      // tag=1010
      fromPtr(thisObj)->setMinimumHeight(minh);
}

// tag=1050
// setMinimumSize(const QSize & arg__1)
void dartffi_QComboBox__setMinimumSize_QSize(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QSize *>(arg__1_);
  return
      // tag=1010
      fromPtr(thisObj)->setMinimumSize(arg__1);
}

// tag=1050
// setMinimumSize(int minw, int minh)
void dartffi_QComboBox__setMinimumSize_int_int(void *thisObj, int minw,
                                               int minh) {
  return
      // tag=1010
      fromPtr(thisObj)->setMinimumSize(minw, minh);
}

// tag=1050
// setMinimumWidth(int minw)
void dartffi_QComboBox__setMinimumWidth_int(void *thisObj, int minw) {
  return
      // tag=1010
      fromPtr(thisObj)->setMinimumWidth(minw);
}

// tag=1050
// setModel(QAbstractItemModel * model)
void dartffi_QComboBox__setModel_QAbstractItemModel(void *thisObj,
                                                    void *model_) {
  auto model = reinterpret_cast<QAbstractItemModel *>(model_);
  return
      // tag=1010
      fromPtr(thisObj)->setModel(model);
}

// tag=1050
// setModelColumn(int visibleColumn)
void dartffi_QComboBox__setModelColumn_int(void *thisObj, int visibleColumn) {
  return
      // tag=1010
      fromPtr(thisObj)->setModelColumn(visibleColumn);
}

// tag=1050
// setMouseTracking(bool enable)
void dartffi_QComboBox__setMouseTracking_bool(void *thisObj, bool enable) {
  return
      // tag=1010
      fromPtr(thisObj)->setMouseTracking(enable);
}

// tag=1050
// setPalette(const QPalette & arg__1)
void dartffi_QComboBox__setPalette_QPalette(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QPalette *>(arg__1_);
  return
      // tag=1010
      fromPtr(thisObj)->setPalette(arg__1);
}

// tag=1050
// setPlaceholderText(const QString & placeholderText)
void dartffi_QComboBox__setPlaceholderText_QString(
    void *thisObj, const char *placeholderText_) {
  const auto placeholderText = QString::fromUtf8(placeholderText_);
  return
      // tag=1010
      fromPtr(thisObj)->setPlaceholderText(placeholderText);
}

// tag=1050
// setRootModelIndex(const QModelIndex & index)
void dartffi_QComboBox__setRootModelIndex_QModelIndex(void *thisObj,
                                                      void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1010
      fromPtr(thisObj)->setRootModelIndex(index);
}

// tag=1050
// setShortcutAutoRepeat(int id, bool enable)
void dartffi_QComboBox__setShortcutAutoRepeat_int_bool(void *thisObj, int id,
                                                       bool enable) {
  return
      // tag=1010
      fromPtr(thisObj)->setShortcutAutoRepeat(id, enable);
}

// tag=1050
// setShortcutEnabled(int id, bool enable)
void dartffi_QComboBox__setShortcutEnabled_int_bool(void *thisObj, int id,
                                                    bool enable) {
  return
      // tag=1010
      fromPtr(thisObj)->setShortcutEnabled(id, enable);
}

// tag=1050
// setSizeIncrement(const QSize & arg__1)
void dartffi_QComboBox__setSizeIncrement_QSize(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QSize *>(arg__1_);
  return
      // tag=1010
      fromPtr(thisObj)->setSizeIncrement(arg__1);
}

// tag=1050
// setSizeIncrement(int w, int h)
void dartffi_QComboBox__setSizeIncrement_int_int(void *thisObj, int w, int h) {
  return
      // tag=1010
      fromPtr(thisObj)->setSizeIncrement(w, h);
}

// tag=1050
// setStatusTip(const QString & arg__1)
void dartffi_QComboBox__setStatusTip_QString(void *thisObj,
                                             const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  return
      // tag=1010
      fromPtr(thisObj)->setStatusTip(arg__1);
}

// tag=1050
// setStyle(QStyle * arg__1)
void dartffi_QComboBox__setStyle_QStyle(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QStyle *>(arg__1_);
  return
      // tag=1010
      fromPtr(thisObj)->setStyle(arg__1);
}

// tag=1050
// setStyleSheet(const QString & styleSheet)
void dartffi_QComboBox__setStyleSheet_QString(void *thisObj,
                                              const char *styleSheet_) {
  const auto styleSheet = QString::fromUtf8(styleSheet_);
  return
      // tag=1010
      fromPtr(thisObj)->setStyleSheet(styleSheet);
}

// tag=1050
// setTabOrder(QWidget * arg__1, QWidget * arg__2)
void dartffi_static_QComboBox__setTabOrder_QWidget_QWidget(void *arg__1_,
                                                           void *arg__2_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  auto arg__2 = reinterpret_cast<QWidget *>(arg__2_);
  return
      // tag=1068
      QtDartBindings_wrappersNS::QComboBox_wrapper::setTabOrder(arg__1, arg__2);
}

// tag=1050
// setTabletTracking(bool enable)
void dartffi_QComboBox__setTabletTracking_bool(void *thisObj, bool enable) {
  return
      // tag=1010
      fromPtr(thisObj)->setTabletTracking(enable);
}

// tag=1050
// setToolTip(const QString & arg__1)
void dartffi_QComboBox__setToolTip_QString(void *thisObj, const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  return
      // tag=1010
      fromPtr(thisObj)->setToolTip(arg__1);
}

// tag=1050
// setToolTipDuration(int msec)
void dartffi_QComboBox__setToolTipDuration_int(void *thisObj, int msec) {
  return
      // tag=1010
      fromPtr(thisObj)->setToolTipDuration(msec);
}

// tag=1050
// setUpdatesEnabled(bool enable)
void dartffi_QComboBox__setUpdatesEnabled_bool(void *thisObj, bool enable) {
  return
      // tag=1010
      fromPtr(thisObj)->setUpdatesEnabled(enable);
}

// tag=1050
// setView(QAbstractItemView * itemView)
void dartffi_QComboBox__setView_QAbstractItemView(void *thisObj,
                                                  void *itemView_) {
  auto itemView = reinterpret_cast<QAbstractItemView *>(itemView_);
  return
      // tag=1010
      fromPtr(thisObj)->setView(itemView);
}

// tag=1050
// setWhatsThis(const QString & arg__1)
void dartffi_QComboBox__setWhatsThis_QString(void *thisObj,
                                             const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  return
      // tag=1010
      fromPtr(thisObj)->setWhatsThis(arg__1);
}

// tag=1050
// setWindowFilePath(const QString & filePath)
void dartffi_QComboBox__setWindowFilePath_QString(void *thisObj,
                                                  const char *filePath_) {
  const auto filePath = QString::fromUtf8(filePath_);
  return
      // tag=1010
      fromPtr(thisObj)->setWindowFilePath(filePath);
}

// tag=1050
// setWindowIcon(const QIcon & icon)
void dartffi_QComboBox__setWindowIcon_QIcon(void *thisObj, void *icon_) {
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  return
      // tag=1010
      fromPtr(thisObj)->setWindowIcon(icon);
}

// tag=1050
// setWindowIconText(const QString & arg__1)
void dartffi_QComboBox__setWindowIconText_QString(void *thisObj,
                                                  const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  return
      // tag=1010
      fromPtr(thisObj)->setWindowIconText(arg__1);
}

// tag=1050
// setWindowModified(bool arg__1)
void dartffi_QComboBox__setWindowModified_bool(void *thisObj, bool arg__1) {
  return
      // tag=1010
      fromPtr(thisObj)->setWindowModified(arg__1);
}

// tag=1050
// setWindowOpacity(qreal level)
void dartffi_QComboBox__setWindowOpacity_qreal(void *thisObj, qreal level) {
  return
      // tag=1010
      fromPtr(thisObj)->setWindowOpacity(level);
}

// tag=1050
// setWindowRole(const QString & arg__1)
void dartffi_QComboBox__setWindowRole_QString(void *thisObj,
                                              const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  return
      // tag=1010
      fromPtr(thisObj)->setWindowRole(arg__1);
}

// tag=1050
// setWindowTitle(const QString & arg__1)
void dartffi_QComboBox__setWindowTitle_QString(void *thisObj,
                                               const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  return
      // tag=1010
      fromPtr(thisObj)->setWindowTitle(arg__1);
}

// tag=1050
// show()
void dartffi_QComboBox__show(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->show();
}

// tag=1050
// showFullScreen()
void dartffi_QComboBox__showFullScreen(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->showFullScreen();
}

// tag=1050
// showMaximized()
void dartffi_QComboBox__showMaximized(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->showMaximized();
}

// tag=1050
// showMinimized()
void dartffi_QComboBox__showMinimized(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->showMinimized();
}

// tag=1050
// showNormal()
void dartffi_QComboBox__showNormal(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->showNormal();
}

// tag=1050
// showPopup()
void dartffi_QComboBox__showPopup(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QComboBox_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->showPopup_nocallback();
        } else {
          return targetPtr->showPopup();
        }
      }();
}

// tag=1050
// size() const
void *dartffi_QComboBox__size(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->size()};
}

// tag=1050
// sizeIncrement() const
void *dartffi_QComboBox__sizeIncrement(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->sizeIncrement()};
}

// tag=1050
// stackUnder(QWidget * arg__1)
void dartffi_QComboBox__stackUnder_QWidget(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  return
      // tag=1010
      fromPtr(thisObj)->stackUnder(arg__1);
}

// tag=1050
// statusTip() const
void *dartffi_QComboBox__statusTip(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->statusTip()};
}

// tag=1050
// style() const
void *dartffi_QComboBox__style(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->style();
}

// tag=1050
// styleSheet() const
void *dartffi_QComboBox__styleSheet(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->styleSheet()};
}

// tag=1050
// textActivated(const QString & arg__1)
void dartffi_QComboBox__textActivated_QString(void *thisObj,
                                              const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  return
      // tag=1010
      fromPtr(thisObj)->textActivated(arg__1);
}

// tag=1079
void dartffi_QComboBox__onTextActivated_QString(void *thisObj,
                                                void *contextQObject,
                                                void *callback) {
  auto instance = reinterpret_cast<QComboBox *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QComboBox::textActivated,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// textHighlighted(const QString & arg__1)
void dartffi_QComboBox__textHighlighted_QString(void *thisObj,
                                                const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  return
      // tag=1010
      fromPtr(thisObj)->textHighlighted(arg__1);
}

// tag=1079
void dartffi_QComboBox__onTextHighlighted_QString(void *thisObj,
                                                  void *contextQObject,
                                                  void *callback) {
  auto instance = reinterpret_cast<QComboBox *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QComboBox::textHighlighted,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// toolTip() const
void *dartffi_QComboBox__toolTip(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->toolTip()};
}

// tag=1050
// toolTipDuration() const
int dartffi_QComboBox__toolTipDuration(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->toolTipDuration();
}

// tag=1050
// topLevelWidget() const
void *dartffi_QComboBox__topLevelWidget(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->topLevelWidget();
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *dartffi_static_QComboBox__tr_char_char_int(const char *s, const char *c,
                                                 int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QComboBox_wrapper::tr(s, c, n)};
}

// tag=1050
// underMouse() const
bool dartffi_QComboBox__underMouse(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->underMouse();
}

// tag=1050
// unsetCursor()
void dartffi_QComboBox__unsetCursor(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->unsetCursor();
}

// tag=1050
// unsetLayoutDirection()
void dartffi_QComboBox__unsetLayoutDirection(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->unsetLayoutDirection();
}

// tag=1050
// unsetLocale()
void dartffi_QComboBox__unsetLocale(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->unsetLocale();
}

// tag=1050
// update()
void dartffi_QComboBox__update(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->update();
}

// tag=1050
// update(const QRect & arg__1)
void dartffi_QComboBox__update_QRect(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  return
      // tag=1010
      fromPtr(thisObj)->update(arg__1);
}

// tag=1050
// update(int x, int y, int w, int h)
void dartffi_QComboBox__update_int_int_int_int(void *thisObj, int x, int y,
                                               int w, int h) {
  return
      // tag=1010
      fromPtr(thisObj)->update(x, y, w, h);
}

// tag=1050
// updateGeometry()
void dartffi_QComboBox__updateGeometry(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->updateGeometry();
}

// tag=1050
// updateMicroFocus()
void dartffi_QComboBox__updateMicroFocus(void *thisObj) {
  return
      // tag=1011

      // tag=1073
      fromWrapperPtr(thisObj)->updateMicroFocus();
}

// tag=1050
// updatesEnabled() const
bool dartffi_QComboBox__updatesEnabled(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->updatesEnabled();
}

// tag=1050
// view() const
void *dartffi_QComboBox__view(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->view();
}

// tag=1050
// whatsThis() const
void *dartffi_QComboBox__whatsThis(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->whatsThis()};
}

// tag=1050
// width() const
int dartffi_QComboBox__width(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->width();
}

// tag=1050
// window() const
void *dartffi_QComboBox__window(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->window();
}

// tag=1050
// windowFilePath() const
void *dartffi_QComboBox__windowFilePath(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->windowFilePath()};
}

// tag=1050
// windowHandle() const
void *dartffi_QComboBox__windowHandle(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->windowHandle();
}

// tag=1050
// windowIcon() const
void *dartffi_QComboBox__windowIcon(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QIcon>{fromPtr(thisObj)->windowIcon()};
}

// tag=1050
// windowIconChanged(const QIcon & icon)
void dartffi_QComboBox__windowIconChanged_QIcon(void *thisObj, void *icon_) {
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  return
      // tag=1010
      fromPtr(thisObj)->windowIconChanged(icon);
}

// tag=1079
void dartffi_QComboBox__onWindowIconChanged_QIcon(void *thisObj,
                                                  void *contextQObject,
                                                  void *callback) {
  auto instance = reinterpret_cast<QComboBox *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QComboBox::windowIconChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// windowIconText() const
void *dartffi_QComboBox__windowIconText(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->windowIconText()};
}

// tag=1050
// windowIconTextChanged(const QString & iconText)
void dartffi_QComboBox__windowIconTextChanged_QString(void *thisObj,
                                                      const char *iconText_) {
  const auto iconText = QString::fromUtf8(iconText_);
  return
      // tag=1010
      fromPtr(thisObj)->windowIconTextChanged(iconText);
}

// tag=1079
void dartffi_QComboBox__onWindowIconTextChanged_QString(void *thisObj,
                                                        void *contextQObject,
                                                        void *callback) {
  auto instance = reinterpret_cast<QComboBox *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QComboBox::windowIconTextChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// windowOpacity() const
qreal dartffi_QComboBox__windowOpacity(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->windowOpacity();
}

// tag=1050
// windowRole() const
void *dartffi_QComboBox__windowRole(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->windowRole()};
}

// tag=1050
// windowTitle() const
void *dartffi_QComboBox__windowTitle(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->windowTitle()};
}

// tag=1050
// windowTitleChanged(const QString & title)
void dartffi_QComboBox__windowTitleChanged_QString(void *thisObj,
                                                   const char *title_) {
  const auto title = QString::fromUtf8(title_);
  return
      // tag=1010
      fromPtr(thisObj)->windowTitleChanged(title);
}

// tag=1079
void dartffi_QComboBox__onWindowTitleChanged_QString(void *thisObj,
                                                     void *contextQObject,
                                                     void *callback) {
  auto instance = reinterpret_cast<QComboBox *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QComboBox::windowTitleChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// x() const
int dartffi_QComboBox__x(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->x();
}

// tag=1050
// y() const
int dartffi_QComboBox__y(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->y();
}
void dartffi_QComboBox__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void dartffi_QComboBox__registerVirtualMethodCallback(void *ptr, void *callback,
                                                      int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 67:
    wrapper->m_hidePopupCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QComboBox_wrapper::Callback_hidePopup>(
        callback);
    break;
  case 231:
    wrapper->m_showPopupCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QComboBox_wrapper::Callback_showPopup>(
        callback);
    break;
  }
}
}
