#include "QPlainTextEdit_wrapper.h"

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
QPlainTextEdit_wrapper::QPlainTextEdit_wrapper(QWidget *parent)
    : ::QPlainTextEdit(parent) {}

// tag=1006
QPlainTextEdit_wrapper::QPlainTextEdit_wrapper(const QString &text,
                                               QWidget *parent)
    : ::QPlainTextEdit(text, parent) {}
QString QPlainTextEdit_wrapper::anchorAt(const QPoint &pos) const {
  // tag=1000

  // tag=1004
  return ::QPlainTextEdit::anchorAt(pos);
}
void QPlainTextEdit_wrapper::appendHtml(const QString &html) {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::appendHtml(html);
}
void QPlainTextEdit_wrapper::appendPlainText(const QString &text) {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::appendPlainText(text);
}
bool QPlainTextEdit_wrapper::backgroundVisible() const {
  // tag=1000

  // tag=1004
  return ::QPlainTextEdit::backgroundVisible();
}
int QPlainTextEdit_wrapper::blockCount() const {
  // tag=1000

  // tag=1004
  return ::QPlainTextEdit::blockCount();
}
void QPlainTextEdit_wrapper::blockCountChanged(int newBlockCount) {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::blockCountChanged(newBlockCount);
}
bool QPlainTextEdit_wrapper::canPaste() const {
  // tag=1000

  // tag=1004
  return ::QPlainTextEdit::canPaste();
}
void QPlainTextEdit_wrapper::centerCursor() {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::centerCursor();
}
bool QPlainTextEdit_wrapper::centerOnScroll() const {
  // tag=1000

  // tag=1004
  return ::QPlainTextEdit::centerOnScroll();
}
void QPlainTextEdit_wrapper::changeEvent(QEvent *e) {
  // tag=1000
  if (m_changeEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    // tag=1002
    ::QPlainTextEdit::changeEvent(e);
  }
}
// tag=1009
void QPlainTextEdit_wrapper::changeEvent_nocallback(QEvent *e) {
  // tag=1003
  ::QPlainTextEdit::changeEvent(e);
}
void QPlainTextEdit_wrapper::clear() {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::clear();
}
QPointF QPlainTextEdit_wrapper::contentOffset() const {
  // tag=1000

  // tag=1004
  return ::QPlainTextEdit::contentOffset();
}
void QPlainTextEdit_wrapper::copy() {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::copy();
}
void QPlainTextEdit_wrapper::copyAvailable(bool b) {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::copyAvailable(b);
}
QMenu *QPlainTextEdit_wrapper::createStandardContextMenu() {
  // tag=1000

  // tag=1004
  return ::QPlainTextEdit::createStandardContextMenu();
}
QMenu *
QPlainTextEdit_wrapper::createStandardContextMenu(const QPoint &position) {
  // tag=1000

  // tag=1004
  return ::QPlainTextEdit::createStandardContextMenu(position);
}
void QPlainTextEdit_wrapper::cursorPositionChanged() {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::cursorPositionChanged();
}
QRect QPlainTextEdit_wrapper::cursorRect() const {
  // tag=1000

  // tag=1004
  return ::QPlainTextEdit::cursorRect();
}
int QPlainTextEdit_wrapper::cursorWidth() const {
  // tag=1000

  // tag=1004
  return ::QPlainTextEdit::cursorWidth();
}
void QPlainTextEdit_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QPlainTextEdit::customEvent(event);
  }
}
// tag=1009
void QPlainTextEdit_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QPlainTextEdit::customEvent(event);
}
void QPlainTextEdit_wrapper::cut() {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::cut();
}
int QPlainTextEdit_wrapper::devType() const {
  // tag=1000
  if (m_devTypeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QPlainTextEdit::devType();
  }
}
// tag=1009
int QPlainTextEdit_wrapper::devType_nocallback() const {
  // tag=1003
  return ::QPlainTextEdit::devType();
}
QString QPlainTextEdit_wrapper::documentTitle() const {
  // tag=1000

  // tag=1004
  return ::QPlainTextEdit::documentTitle();
}
void QPlainTextEdit_wrapper::ensureCursorVisible() {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::ensureCursorVisible();
}
bool QPlainTextEdit_wrapper::event(QEvent *e) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), e);
  } else {
    // tag=1002
    return ::QPlainTextEdit::event(e);
  }
}
// tag=1009
bool QPlainTextEdit_wrapper::event_nocallback(QEvent *e) {
  // tag=1003
  return ::QPlainTextEdit::event(e);
}
bool QPlainTextEdit_wrapper::eventFilter(QObject *arg__1, QEvent *arg__2) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), arg__1, arg__2);
  } else {
    // tag=1002
    return ::QPlainTextEdit::eventFilter(arg__1, arg__2);
  }
}
// tag=1009
bool QPlainTextEdit_wrapper::eventFilter_nocallback(QObject *arg__1,
                                                    QEvent *arg__2) {
  // tag=1003
  return ::QPlainTextEdit::eventFilter(arg__1, arg__2);
}
bool QPlainTextEdit_wrapper::find(const QString &exp) {
  // tag=1000

  // tag=1004
  return ::QPlainTextEdit::find(exp);
}
bool QPlainTextEdit_wrapper::focusNextPrevChild(bool next) {
  // tag=1000
  if (m_focusNextPrevChildCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    // tag=1002
    return ::QPlainTextEdit::focusNextPrevChild(next);
  }
}
// tag=1009
bool QPlainTextEdit_wrapper::focusNextPrevChild_nocallback(bool next) {
  // tag=1003
  return ::QPlainTextEdit::focusNextPrevChild(next);
}
bool QPlainTextEdit_wrapper::hasHeightForWidth() const {
  // tag=1000
  if (m_hasHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QPlainTextEdit::hasHeightForWidth();
  }
}
// tag=1009
bool QPlainTextEdit_wrapper::hasHeightForWidth_nocallback() const {
  // tag=1003
  return ::QPlainTextEdit::hasHeightForWidth();
}
int QPlainTextEdit_wrapper::heightForWidth(int arg__1) const {
  // tag=1000
  if (m_heightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QPlainTextEdit::heightForWidth(arg__1);
  }
}
// tag=1009
int QPlainTextEdit_wrapper::heightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QPlainTextEdit::heightForWidth(arg__1);
}
void QPlainTextEdit_wrapper::initPainter(QPainter *painter) const {
  // tag=1000
  if (m_initPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    // tag=1002
    ::QPlainTextEdit::initPainter(painter);
  }
}
// tag=1009
void QPlainTextEdit_wrapper::initPainter_nocallback(QPainter *painter) const {
  // tag=1003
  ::QPlainTextEdit::initPainter(painter);
}
void QPlainTextEdit_wrapper::insertPlainText(const QString &text) {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::insertPlainText(text);
}
bool QPlainTextEdit_wrapper::isReadOnly() const {
  // tag=1000

  // tag=1004
  return ::QPlainTextEdit::isReadOnly();
}
bool QPlainTextEdit_wrapper::isUndoRedoEnabled() const {
  // tag=1000

  // tag=1004
  return ::QPlainTextEdit::isUndoRedoEnabled();
}
void QPlainTextEdit_wrapper::leaveEvent(QEvent *event) {
  // tag=1000
  if (m_leaveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QPlainTextEdit::leaveEvent(event);
  }
}
// tag=1009
void QPlainTextEdit_wrapper::leaveEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QPlainTextEdit::leaveEvent(event);
}
int QPlainTextEdit_wrapper::maximumBlockCount() const {
  // tag=1000

  // tag=1004
  return ::QPlainTextEdit::maximumBlockCount();
}
QSize QPlainTextEdit_wrapper::minimumSizeHint() const {
  // tag=1000
  if (m_minimumSizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QPlainTextEdit::minimumSizeHint();
  }
}
// tag=1009
QSize QPlainTextEdit_wrapper::minimumSizeHint_nocallback() const {
  // tag=1003
  return ::QPlainTextEdit::minimumSizeHint();
}
void QPlainTextEdit_wrapper::modificationChanged(bool arg__1) {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::modificationChanged(arg__1);
}
void QPlainTextEdit_wrapper::mouseDoubleClickEvent(QMouseEvent *e) {
  // tag=1000
  if (m_mouseDoubleClickEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    // tag=1002
    ::QPlainTextEdit::mouseDoubleClickEvent(e);
  }
}
// tag=1009
void QPlainTextEdit_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *e) {
  // tag=1003
  ::QPlainTextEdit::mouseDoubleClickEvent(e);
}
void QPlainTextEdit_wrapper::mouseMoveEvent(QMouseEvent *e) {
  // tag=1000
  if (m_mouseMoveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    // tag=1002
    ::QPlainTextEdit::mouseMoveEvent(e);
  }
}
// tag=1009
void QPlainTextEdit_wrapper::mouseMoveEvent_nocallback(QMouseEvent *e) {
  // tag=1003
  ::QPlainTextEdit::mouseMoveEvent(e);
}
void QPlainTextEdit_wrapper::mousePressEvent(QMouseEvent *e) {
  // tag=1000
  if (m_mousePressEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    // tag=1002
    ::QPlainTextEdit::mousePressEvent(e);
  }
}
// tag=1009
void QPlainTextEdit_wrapper::mousePressEvent_nocallback(QMouseEvent *e) {
  // tag=1003
  ::QPlainTextEdit::mousePressEvent(e);
}
void QPlainTextEdit_wrapper::mouseReleaseEvent(QMouseEvent *e) {
  // tag=1000
  if (m_mouseReleaseEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    // tag=1002
    ::QPlainTextEdit::mouseReleaseEvent(e);
  }
}
// tag=1009
void QPlainTextEdit_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *e) {
  // tag=1003
  ::QPlainTextEdit::mouseReleaseEvent(e);
}
bool QPlainTextEdit_wrapper::overwriteMode() const {
  // tag=1000

  // tag=1004
  return ::QPlainTextEdit::overwriteMode();
}
void QPlainTextEdit_wrapper::paintEvent(QPaintEvent *e) {
  // tag=1000
  if (m_paintEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    // tag=1002
    ::QPlainTextEdit::paintEvent(e);
  }
}
// tag=1009
void QPlainTextEdit_wrapper::paintEvent_nocallback(QPaintEvent *e) {
  // tag=1003
  ::QPlainTextEdit::paintEvent(e);
}
void QPlainTextEdit_wrapper::paste() {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::paste();
}
QString QPlainTextEdit_wrapper::placeholderText() const {
  // tag=1000

  // tag=1004
  return ::QPlainTextEdit::placeholderText();
}
void QPlainTextEdit_wrapper::redo() {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::redo();
}
void QPlainTextEdit_wrapper::redoAvailable(bool b) {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::redoAvailable(b);
}
void QPlainTextEdit_wrapper::scrollContentsBy(int dx, int dy) {
  // tag=1000
  if (m_scrollContentsByCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_scrollContentsByCallback(const_cast<void *>(thisPtr), dx, dy);
  } else {
    // tag=1002
    ::QPlainTextEdit::scrollContentsBy(dx, dy);
  }
}
// tag=1009
void QPlainTextEdit_wrapper::scrollContentsBy_nocallback(int dx, int dy) {
  // tag=1003
  ::QPlainTextEdit::scrollContentsBy(dx, dy);
}
void QPlainTextEdit_wrapper::selectAll() {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::selectAll();
}
void QPlainTextEdit_wrapper::selectionChanged() {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::selectionChanged();
}
void QPlainTextEdit_wrapper::setBackgroundVisible(bool visible) {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::setBackgroundVisible(visible);
}
void QPlainTextEdit_wrapper::setCenterOnScroll(bool enabled) {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::setCenterOnScroll(enabled);
}
void QPlainTextEdit_wrapper::setCursorWidth(int width) {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::setCursorWidth(width);
}
void QPlainTextEdit_wrapper::setDocumentTitle(const QString &title) {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::setDocumentTitle(title);
}
void QPlainTextEdit_wrapper::setMaximumBlockCount(int maximum) {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::setMaximumBlockCount(maximum);
}
void QPlainTextEdit_wrapper::setOverwriteMode(bool overwrite) {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::setOverwriteMode(overwrite);
}
void QPlainTextEdit_wrapper::setPlaceholderText(
    const QString &placeholderText) {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::setPlaceholderText(placeholderText);
}
void QPlainTextEdit_wrapper::setPlainText(const QString &text) {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::setPlainText(text);
}
void QPlainTextEdit_wrapper::setReadOnly(bool ro) {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::setReadOnly(ro);
}
void QPlainTextEdit_wrapper::setTabChangesFocus(bool b) {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::setTabChangesFocus(b);
}
void QPlainTextEdit_wrapper::setTabStopDistance(qreal distance) {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::setTabStopDistance(distance);
}
void QPlainTextEdit_wrapper::setUndoRedoEnabled(bool enable) {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::setUndoRedoEnabled(enable);
}
void QPlainTextEdit_wrapper::setVisible(bool visible) {
  // tag=1000
  if (m_setVisibleCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    // tag=1002
    ::QPlainTextEdit::setVisible(visible);
  }
}
// tag=1009
void QPlainTextEdit_wrapper::setVisible_nocallback(bool visible) {
  // tag=1003
  ::QPlainTextEdit::setVisible(visible);
}
void QPlainTextEdit_wrapper::setupViewport(QWidget *viewport) {
  // tag=1000
  if (m_setupViewportCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setupViewportCallback(const_cast<void *>(thisPtr), viewport);
  } else {
    // tag=1002
    ::QPlainTextEdit::setupViewport(viewport);
  }
}
// tag=1009
void QPlainTextEdit_wrapper::setupViewport_nocallback(QWidget *viewport) {
  // tag=1003
  ::QPlainTextEdit::setupViewport(viewport);
}
QPainter *QPlainTextEdit_wrapper::sharedPainter() const {
  // tag=1000
  if (m_sharedPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QPlainTextEdit::sharedPainter();
  }
}
// tag=1009
QPainter *QPlainTextEdit_wrapper::sharedPainter_nocallback() const {
  // tag=1003
  return ::QPlainTextEdit::sharedPainter();
}
QSize QPlainTextEdit_wrapper::sizeHint() const {
  // tag=1000
  if (m_sizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QPlainTextEdit::sizeHint();
  }
}
// tag=1009
QSize QPlainTextEdit_wrapper::sizeHint_nocallback() const {
  // tag=1003
  return ::QPlainTextEdit::sizeHint();
}
bool QPlainTextEdit_wrapper::tabChangesFocus() const {
  // tag=1000

  // tag=1004
  return ::QPlainTextEdit::tabChangesFocus();
}
qreal QPlainTextEdit_wrapper::tabStopDistance() const {
  // tag=1000

  // tag=1004
  return ::QPlainTextEdit::tabStopDistance();
}
void QPlainTextEdit_wrapper::textChanged() {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::textChanged();
}
QString QPlainTextEdit_wrapper::toPlainText() const {
  // tag=1000

  // tag=1004
  return ::QPlainTextEdit::toPlainText();
}
QString QPlainTextEdit_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QPlainTextEdit::tr(s, c, n);
}
void QPlainTextEdit_wrapper::undo() {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::undo();
}
void QPlainTextEdit_wrapper::undoAvailable(bool b) {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::undoAvailable(b);
}
void QPlainTextEdit_wrapper::updateRequest(const QRect &rect, int dy) {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::updateRequest(rect, dy);
}
bool QPlainTextEdit_wrapper::viewportEvent(QEvent *arg__1) {
  // tag=1000
  if (m_viewportEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_viewportEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QPlainTextEdit::viewportEvent(arg__1);
  }
}
// tag=1009
bool QPlainTextEdit_wrapper::viewportEvent_nocallback(QEvent *arg__1) {
  // tag=1003
  return ::QPlainTextEdit::viewportEvent(arg__1);
}
QSize QPlainTextEdit_wrapper::viewportSizeHint() const {
  // tag=1000
  if (m_viewportSizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_viewportSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QPlainTextEdit::viewportSizeHint();
  }
}
// tag=1009
QSize QPlainTextEdit_wrapper::viewportSizeHint_nocallback() const {
  // tag=1003
  return ::QPlainTextEdit::viewportSizeHint();
}
void QPlainTextEdit_wrapper::zoomIn(int range) {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::zoomIn(range);
}
void QPlainTextEdit_wrapper::zoomInF(float range) {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::zoomInF(range);
}
void QPlainTextEdit_wrapper::zoomOut(int range) {
  // tag=1000

  // tag=1004
  ::QPlainTextEdit::zoomOut(range);
}

// tag=1005
QPlainTextEdit_wrapper::~QPlainTextEdit_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QPlainTextEdit *fromPtr(void *ptr) {
  return reinterpret_cast<QPlainTextEdit *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QPlainTextEdit_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper *>(
      ptr);
}
extern "C" {

// tag=1049
void c_QPlainTextEdit_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper *>(
      cppObj);
}
void *c_QPlainTextEdit__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QPlainTextEdit_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
void *c_QPlainTextEdit__constructor_QString_QWidget(const char *text_,
                                                    void *parent_) {
  const auto text = QString::fromUtf8(text_);
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr =
      new QtDartBindings_wrappersNS::QPlainTextEdit_wrapper(text, parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// anchorAt(const QPoint & pos) const
void *c_QPlainTextEdit__anchorAt_QPoint(void *thisObj, void *pos_) {
  auto &pos = *reinterpret_cast<QPoint *>(pos_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->anchorAt(pos)};
}

// tag=1050
// appendHtml(const QString & html)
void c_QPlainTextEdit__appendHtml_QString(void *thisObj, const char *html_) {
  const auto html = QString::fromUtf8(html_);
  // tag=1010
  fromPtr(thisObj)->appendHtml(html);
}

// tag=1050
// appendPlainText(const QString & text)
void c_QPlainTextEdit__appendPlainText_QString(void *thisObj,
                                               const char *text_) {
  const auto text = QString::fromUtf8(text_);
  // tag=1010
  fromPtr(thisObj)->appendPlainText(text);
}

// tag=1050
// backgroundVisible() const
bool c_QPlainTextEdit__backgroundVisible(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->backgroundVisible();
}

// tag=1050
// blockCount() const
int c_QPlainTextEdit__blockCount(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->blockCount();
}

// tag=1050
// blockCountChanged(int newBlockCount)
void c_QPlainTextEdit__blockCountChanged_int(void *thisObj, int newBlockCount) {
  // tag=1010
  fromPtr(thisObj)->blockCountChanged(newBlockCount);
}

// tag=1079
void c_QPlainTextEdit__onBlockCountChanged_int(void *thisObj,
                                               void *contextQObject,
                                               void *callback) {
  auto instance = reinterpret_cast<QPlainTextEdit *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QPlainTextEdit::blockCountChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// canPaste() const
bool c_QPlainTextEdit__canPaste(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->canPaste();
}

// tag=1050
// centerCursor()
void c_QPlainTextEdit__centerCursor(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->centerCursor();
}

// tag=1050
// centerOnScroll() const
bool c_QPlainTextEdit__centerOnScroll(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->centerOnScroll();
}

// tag=1050
// changeEvent(QEvent * e)
void c_QPlainTextEdit__changeEvent_QEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QEvent *>(e_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->changeEvent_nocallback(e);
}

// tag=1050
// clear()
void c_QPlainTextEdit__clear(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->clear();
}

// tag=1050
// contentOffset() const
void *c_QPlainTextEdit__contentOffset(void *thisObj) {
  return
      // tag=1011

      // tag=1073

      // tag=1072
      new Dartagnan::ValueWrapper<QPointF>{
          fromWrapperPtr(thisObj)->contentOffset()};
}

// tag=1050
// copy()
void c_QPlainTextEdit__copy(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->copy();
}

// tag=1050
// copyAvailable(bool b)
void c_QPlainTextEdit__copyAvailable_bool(void *thisObj, bool b) {
  // tag=1010
  fromPtr(thisObj)->copyAvailable(b);
}

// tag=1079
void c_QPlainTextEdit__onCopyAvailable_bool(void *thisObj, void *contextQObject,
                                            void *callback) {
  auto instance = reinterpret_cast<QPlainTextEdit *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QPlainTextEdit::copyAvailable,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// createStandardContextMenu()
void *c_QPlainTextEdit__createStandardContextMenu(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->createStandardContextMenu();
}

// tag=1050
// createStandardContextMenu(const QPoint & position)
void *c_QPlainTextEdit__createStandardContextMenu_QPoint(void *thisObj,
                                                         void *position_) {
  auto &position = *reinterpret_cast<QPoint *>(position_);
  return
      // tag=1010
      fromPtr(thisObj)->createStandardContextMenu(position);
}

// tag=1050
// cursorPositionChanged()
void c_QPlainTextEdit__cursorPositionChanged(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->cursorPositionChanged();
}

// tag=1079
void c_QPlainTextEdit__onCursorPositionChanged(void *thisObj,
                                               void *contextQObject,
                                               void *callback) {
  auto instance = reinterpret_cast<QPlainTextEdit *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QPlainTextEdit::cursorPositionChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// cursorRect() const
void *c_QPlainTextEdit__cursorRect(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->cursorRect()};
}

// tag=1050
// cursorWidth() const
int c_QPlainTextEdit__cursorWidth(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->cursorWidth();
}

// tag=1050
// customEvent(QEvent * event)
void c_QPlainTextEdit__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// cut()
void c_QPlainTextEdit__cut(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->cut();
}

// tag=1050
// devType() const
int c_QPlainTextEdit__devType(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->devType_nocallback();
        } else {
          return targetPtr->devType();
        }
      }();
}

// tag=1050
// documentTitle() const
void *c_QPlainTextEdit__documentTitle(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->documentTitle()};
}

// tag=1050
// ensureCursorVisible()
void c_QPlainTextEdit__ensureCursorVisible(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->ensureCursorVisible();
}

// tag=1050
// event(QEvent * e)
bool c_QPlainTextEdit__event_QEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QEvent *>(e_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->event_nocallback(e);
}

// tag=1050
// eventFilter(QObject * arg__1, QEvent * arg__2)
bool c_QPlainTextEdit__eventFilter_QObject_QEvent(void *thisObj, void *arg__1_,
                                                  void *arg__2_) {
  auto arg__1 = reinterpret_cast<QObject *>(arg__1_);
  auto arg__2 = reinterpret_cast<QEvent *>(arg__2_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->eventFilter_nocallback(arg__1, arg__2);
}

// tag=1050
// find(const QString & exp)
bool c_QPlainTextEdit__find_QString(void *thisObj, const char *exp_) {
  const auto exp = QString::fromUtf8(exp_);
  return
      // tag=1010
      fromPtr(thisObj)->find(exp);
}

// tag=1050
// focusNextPrevChild(bool next)
bool c_QPlainTextEdit__focusNextPrevChild_bool(void *thisObj, bool next) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
}

// tag=1050
// hasHeightForWidth() const
bool c_QPlainTextEdit__hasHeightForWidth(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->hasHeightForWidth_nocallback();
        } else {
          return targetPtr->hasHeightForWidth();
        }
      }();
}

// tag=1050
// heightForWidth(int arg__1) const
int c_QPlainTextEdit__heightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->heightForWidth_nocallback(arg__1);
        } else {
          return targetPtr->heightForWidth(arg__1);
        }
      }();
}

// tag=1050
// initPainter(QPainter * painter) const
void c_QPlainTextEdit__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}

// tag=1050
// insertPlainText(const QString & text)
void c_QPlainTextEdit__insertPlainText_QString(void *thisObj,
                                               const char *text_) {
  const auto text = QString::fromUtf8(text_);
  // tag=1010
  fromPtr(thisObj)->insertPlainText(text);
}

// tag=1050
// isReadOnly() const
bool c_QPlainTextEdit__isReadOnly(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isReadOnly();
}

// tag=1050
// isUndoRedoEnabled() const
bool c_QPlainTextEdit__isUndoRedoEnabled(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isUndoRedoEnabled();
}

// tag=1050
// leaveEvent(QEvent * event)
void c_QPlainTextEdit__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}

// tag=1050
// maximumBlockCount() const
int c_QPlainTextEdit__maximumBlockCount(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->maximumBlockCount();
}

// tag=1050
// minimumSizeHint() const
void *c_QPlainTextEdit__minimumSizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->minimumSizeHint_nocallback();
        } else {
          return targetPtr->minimumSizeHint();
        }
      }()};
}

// tag=1050
// modificationChanged(bool arg__1)
void c_QPlainTextEdit__modificationChanged_bool(void *thisObj, bool arg__1) {
  // tag=1010
  fromPtr(thisObj)->modificationChanged(arg__1);
}

// tag=1079
void c_QPlainTextEdit__onModificationChanged_bool(void *thisObj,
                                                  void *contextQObject,
                                                  void *callback) {
  auto instance = reinterpret_cast<QPlainTextEdit *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QPlainTextEdit::modificationChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// mouseDoubleClickEvent(QMouseEvent * e)
void c_QPlainTextEdit__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                         void *e_) {
  auto e = reinterpret_cast<QMouseEvent *>(e_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(e);
}

// tag=1050
// mouseMoveEvent(QMouseEvent * e)
void c_QPlainTextEdit__mouseMoveEvent_QMouseEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QMouseEvent *>(e_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(e);
}

// tag=1050
// mousePressEvent(QMouseEvent * e)
void c_QPlainTextEdit__mousePressEvent_QMouseEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QMouseEvent *>(e_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(e);
}

// tag=1050
// mouseReleaseEvent(QMouseEvent * e)
void c_QPlainTextEdit__mouseReleaseEvent_QMouseEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QMouseEvent *>(e_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(e);
}

// tag=1050
// overwriteMode() const
bool c_QPlainTextEdit__overwriteMode(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->overwriteMode();
}

// tag=1050
// paintEvent(QPaintEvent * e)
void c_QPlainTextEdit__paintEvent_QPaintEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QPaintEvent *>(e_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->paintEvent_nocallback(e);
}

// tag=1050
// paste()
void c_QPlainTextEdit__paste(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->paste();
}

// tag=1050
// placeholderText() const
void *c_QPlainTextEdit__placeholderText(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->placeholderText()};
}

// tag=1050
// redo()
void c_QPlainTextEdit__redo(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->redo();
}

// tag=1050
// redoAvailable(bool b)
void c_QPlainTextEdit__redoAvailable_bool(void *thisObj, bool b) {
  // tag=1010
  fromPtr(thisObj)->redoAvailable(b);
}

// tag=1079
void c_QPlainTextEdit__onRedoAvailable_bool(void *thisObj, void *contextQObject,
                                            void *callback) {
  auto instance = reinterpret_cast<QPlainTextEdit *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QPlainTextEdit::redoAvailable,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// scrollContentsBy(int dx, int dy)
void c_QPlainTextEdit__scrollContentsBy_int_int(void *thisObj, int dx, int dy) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->scrollContentsBy_nocallback(dx, dy);
}

// tag=1050
// selectAll()
void c_QPlainTextEdit__selectAll(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->selectAll();
}

// tag=1050
// selectionChanged()
void c_QPlainTextEdit__selectionChanged(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->selectionChanged();
}

// tag=1079
void c_QPlainTextEdit__onSelectionChanged(void *thisObj, void *contextQObject,
                                          void *callback) {
  auto instance = reinterpret_cast<QPlainTextEdit *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QPlainTextEdit::selectionChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// setBackgroundVisible(bool visible)
void c_QPlainTextEdit__setBackgroundVisible_bool(void *thisObj, bool visible) {
  // tag=1010
  fromPtr(thisObj)->setBackgroundVisible(visible);
}

// tag=1050
// setCenterOnScroll(bool enabled)
void c_QPlainTextEdit__setCenterOnScroll_bool(void *thisObj, bool enabled) {
  // tag=1010
  fromPtr(thisObj)->setCenterOnScroll(enabled);
}

// tag=1050
// setCursorWidth(int width)
void c_QPlainTextEdit__setCursorWidth_int(void *thisObj, int width) {
  // tag=1010
  fromPtr(thisObj)->setCursorWidth(width);
}

// tag=1050
// setDocumentTitle(const QString & title)
void c_QPlainTextEdit__setDocumentTitle_QString(void *thisObj,
                                                const char *title_) {
  const auto title = QString::fromUtf8(title_);
  // tag=1010
  fromPtr(thisObj)->setDocumentTitle(title);
}

// tag=1050
// setMaximumBlockCount(int maximum)
void c_QPlainTextEdit__setMaximumBlockCount_int(void *thisObj, int maximum) {
  // tag=1010
  fromPtr(thisObj)->setMaximumBlockCount(maximum);
}

// tag=1050
// setOverwriteMode(bool overwrite)
void c_QPlainTextEdit__setOverwriteMode_bool(void *thisObj, bool overwrite) {
  // tag=1010
  fromPtr(thisObj)->setOverwriteMode(overwrite);
}

// tag=1050
// setPlaceholderText(const QString & placeholderText)
void c_QPlainTextEdit__setPlaceholderText_QString(
    void *thisObj, const char *placeholderText_) {
  const auto placeholderText = QString::fromUtf8(placeholderText_);
  // tag=1010
  fromPtr(thisObj)->setPlaceholderText(placeholderText);
}

// tag=1050
// setPlainText(const QString & text)
void c_QPlainTextEdit__setPlainText_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  // tag=1010
  fromPtr(thisObj)->setPlainText(text);
}

// tag=1050
// setReadOnly(bool ro)
void c_QPlainTextEdit__setReadOnly_bool(void *thisObj, bool ro) {
  // tag=1010
  fromPtr(thisObj)->setReadOnly(ro);
}

// tag=1050
// setTabChangesFocus(bool b)
void c_QPlainTextEdit__setTabChangesFocus_bool(void *thisObj, bool b) {
  // tag=1010
  fromPtr(thisObj)->setTabChangesFocus(b);
}

// tag=1050
// setTabStopDistance(qreal distance)
void c_QPlainTextEdit__setTabStopDistance_qreal(void *thisObj, qreal distance) {
  // tag=1010
  fromPtr(thisObj)->setTabStopDistance(distance);
}

// tag=1050
// setUndoRedoEnabled(bool enable)
void c_QPlainTextEdit__setUndoRedoEnabled_bool(void *thisObj, bool enable) {
  // tag=1010
  fromPtr(thisObj)->setUndoRedoEnabled(enable);
}

// tag=1050
// setVisible(bool visible)
void c_QPlainTextEdit__setVisible_bool(void *thisObj, bool visible) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}

// tag=1050
// setupViewport(QWidget * viewport)
void c_QPlainTextEdit__setupViewport_QWidget(void *thisObj, void *viewport_) {
  auto viewport = reinterpret_cast<QWidget *>(viewport_);
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setupViewport_nocallback(viewport);
    } else {
      return targetPtr->setupViewport(viewport);
    }
  }();
}

// tag=1050
// sharedPainter() const
void *c_QPlainTextEdit__sharedPainter(void *thisObj) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->sharedPainter_nocallback();
}

// tag=1050
// sizeHint() const
void *c_QPlainTextEdit__sizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->sizeHint_nocallback();
        } else {
          return targetPtr->sizeHint();
        }
      }()};
}

// tag=1050
// tabChangesFocus() const
bool c_QPlainTextEdit__tabChangesFocus(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->tabChangesFocus();
}

// tag=1050
// tabStopDistance() const
qreal c_QPlainTextEdit__tabStopDistance(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->tabStopDistance();
}

// tag=1050
// textChanged()
void c_QPlainTextEdit__textChanged(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->textChanged();
}

// tag=1079
void c_QPlainTextEdit__onTextChanged(void *thisObj, void *contextQObject,
                                     void *callback) {
  auto instance = reinterpret_cast<QPlainTextEdit *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QPlainTextEdit::textChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// toPlainText() const
void *c_QPlainTextEdit__toPlainText(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->toPlainText()};
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QPlainTextEdit__tr_char_char_int(const char *s, const char *c,
                                                int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::tr(s, c, n)};
}

// tag=1050
// undo()
void c_QPlainTextEdit__undo(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->undo();
}

// tag=1050
// undoAvailable(bool b)
void c_QPlainTextEdit__undoAvailable_bool(void *thisObj, bool b) {
  // tag=1010
  fromPtr(thisObj)->undoAvailable(b);
}

// tag=1079
void c_QPlainTextEdit__onUndoAvailable_bool(void *thisObj, void *contextQObject,
                                            void *callback) {
  auto instance = reinterpret_cast<QPlainTextEdit *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QPlainTextEdit::undoAvailable,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// updateRequest(const QRect & rect, int dy)
void c_QPlainTextEdit__updateRequest_QRect_int(void *thisObj, void *rect_,
                                               int dy) {
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  // tag=1010
  fromPtr(thisObj)->updateRequest(rect, dy);
}

// tag=1079
void c_QPlainTextEdit__onUpdateRequest_QRect_int(void *thisObj,
                                                 void *contextQObject,
                                                 void *callback) {
  auto instance = reinterpret_cast<QPlainTextEdit *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QPlainTextEdit::updateRequest,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// viewportEvent(QEvent * arg__1)
bool c_QPlainTextEdit__viewportEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->viewportEvent_nocallback(arg__1);
}

// tag=1050
// viewportSizeHint() const
void *c_QPlainTextEdit__viewportSizeHint(void *thisObj) {
  return
      // tag=1011

      // tag=1074

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{
          fromWrapperPtr(thisObj)->viewportSizeHint_nocallback()};
}

// tag=1050
// zoomIn(int range)
void c_QPlainTextEdit__zoomIn_int(void *thisObj, int range) {
  // tag=1010
  fromPtr(thisObj)->zoomIn(range);
}

// tag=1050
// zoomInF(float range)
void c_QPlainTextEdit__zoomInF_float(void *thisObj, float range) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->zoomInF(range);
}

// tag=1050
// zoomOut(int range)
void c_QPlainTextEdit__zoomOut_int(void *thisObj, int range) {
  // tag=1010
  fromPtr(thisObj)->zoomOut(range);
}
void c_QPlainTextEdit__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QPlainTextEdit__registerVirtualMethodCallback(void *ptr, void *callback,
                                                     int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1124:
    wrapper->m_changeEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_changeEvent>(callback);
    break;
  case 944:
    wrapper->m_customEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_customEvent>(callback);
    break;
  case 1141:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::Callback_devType>(
        callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::Callback_event>(
        callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_eventFilter>(callback);
    break;
  case 1150:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1164:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 1168:
    wrapper->m_heightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_heightForWidth>(callback);
    break;
  case 1171:
    wrapper->m_initPainterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_initPainter>(callback);
    break;
  case 1196:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1216:
    wrapper->m_minimumSizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_minimumSizeHint>(callback);
    break;
  case 1218:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1220:
    wrapper->m_mouseMoveEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_mouseMoveEvent>(callback);
    break;
  case 1221:
    wrapper->m_mousePressEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_mousePressEvent>(callback);
    break;
  case 1222:
    wrapper->m_mouseReleaseEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_mouseReleaseEvent>(callback);
    break;
  case 1229:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 5199:
    wrapper->m_scrollContentsByCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_scrollContentsBy>(callback);
    break;
  case 1309:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::Callback_setVisible>(
        callback);
    break;
  case 5207:
    wrapper->m_setupViewportCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_setupViewport>(callback);
    break;
  case 1318:
    wrapper->m_sharedPainterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_sharedPainter>(callback);
    break;
  case 1326:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::Callback_sizeHint>(
        callback);
    break;
  case 5210:
    wrapper->m_viewportEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_viewportEvent>(callback);
    break;
  case 5211:
    wrapper->m_viewportSizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_viewportSizeHint>(callback);
    break;
  }
}
}
