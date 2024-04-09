#include "QTextEdit_wrapper.h"

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
QTextEdit_wrapper::QTextEdit_wrapper(QWidget *parent) : ::QTextEdit(parent) {}

// tag=1006
QTextEdit_wrapper::QTextEdit_wrapper(const QString &text, QWidget *parent)
    : ::QTextEdit(text, parent) {}
bool QTextEdit_wrapper::acceptRichText() const {
  // tag=1000

  // tag=1004
  return ::QTextEdit::acceptRichText();
}
QString QTextEdit_wrapper::anchorAt(const QPoint &pos) const {
  // tag=1000

  // tag=1004
  return ::QTextEdit::anchorAt(pos);
}
void QTextEdit_wrapper::append(const QString &text) {
  // tag=1000

  // tag=1004
  ::QTextEdit::append(text);
}
bool QTextEdit_wrapper::canPaste() const {
  // tag=1000

  // tag=1004
  return ::QTextEdit::canPaste();
}
void QTextEdit_wrapper::changeEvent(QEvent *e) {
  // tag=1000
  if (m_changeEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    // tag=1002
    ::QTextEdit::changeEvent(e);
  }
}
// tag=1009
void QTextEdit_wrapper::changeEvent_nocallback(QEvent *e) {
  // tag=1003
  ::QTextEdit::changeEvent(e);
}
void QTextEdit_wrapper::clear() {
  // tag=1000

  // tag=1004
  ::QTextEdit::clear();
}
void QTextEdit_wrapper::copy() {
  // tag=1000

  // tag=1004
  ::QTextEdit::copy();
}
void QTextEdit_wrapper::copyAvailable(bool b) {
  // tag=1000

  // tag=1004
  ::QTextEdit::copyAvailable(b);
}
QMenu *QTextEdit_wrapper::createStandardContextMenu() {
  // tag=1000

  // tag=1004
  return ::QTextEdit::createStandardContextMenu();
}
QMenu *QTextEdit_wrapper::createStandardContextMenu(const QPoint &position) {
  // tag=1000

  // tag=1004
  return ::QTextEdit::createStandardContextMenu(position);
}
QFont QTextEdit_wrapper::currentFont() const {
  // tag=1000

  // tag=1004
  return ::QTextEdit::currentFont();
}
void QTextEdit_wrapper::cursorPositionChanged() {
  // tag=1000

  // tag=1004
  ::QTextEdit::cursorPositionChanged();
}
QRect QTextEdit_wrapper::cursorRect() const {
  // tag=1000

  // tag=1004
  return ::QTextEdit::cursorRect();
}
int QTextEdit_wrapper::cursorWidth() const {
  // tag=1000

  // tag=1004
  return ::QTextEdit::cursorWidth();
}
void QTextEdit_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QTextEdit::customEvent(event);
  }
}
// tag=1009
void QTextEdit_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QTextEdit::customEvent(event);
}
void QTextEdit_wrapper::cut() {
  // tag=1000

  // tag=1004
  ::QTextEdit::cut();
}
int QTextEdit_wrapper::devType() const {
  // tag=1000
  if (m_devTypeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QTextEdit::devType();
  }
}
// tag=1009
int QTextEdit_wrapper::devType_nocallback() const {
  // tag=1003
  return ::QTextEdit::devType();
}
QString QTextEdit_wrapper::documentTitle() const {
  // tag=1000

  // tag=1004
  return ::QTextEdit::documentTitle();
}
void QTextEdit_wrapper::ensureCursorVisible() {
  // tag=1000

  // tag=1004
  ::QTextEdit::ensureCursorVisible();
}
bool QTextEdit_wrapper::event(QEvent *e) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), e);
  } else {
    // tag=1002
    return ::QTextEdit::event(e);
  }
}
// tag=1009
bool QTextEdit_wrapper::event_nocallback(QEvent *e) {
  // tag=1003
  return ::QTextEdit::event(e);
}
bool QTextEdit_wrapper::eventFilter(QObject *arg__1, QEvent *arg__2) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), arg__1, arg__2);
  } else {
    // tag=1002
    return ::QTextEdit::eventFilter(arg__1, arg__2);
  }
}
// tag=1009
bool QTextEdit_wrapper::eventFilter_nocallback(QObject *arg__1,
                                               QEvent *arg__2) {
  // tag=1003
  return ::QTextEdit::eventFilter(arg__1, arg__2);
}
bool QTextEdit_wrapper::find(const QString &exp) {
  // tag=1000

  // tag=1004
  return ::QTextEdit::find(exp);
}
bool QTextEdit_wrapper::focusNextPrevChild(bool next) {
  // tag=1000
  if (m_focusNextPrevChildCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    // tag=1002
    return ::QTextEdit::focusNextPrevChild(next);
  }
}
// tag=1009
bool QTextEdit_wrapper::focusNextPrevChild_nocallback(bool next) {
  // tag=1003
  return ::QTextEdit::focusNextPrevChild(next);
}
QString QTextEdit_wrapper::fontFamily() const {
  // tag=1000

  // tag=1004
  return ::QTextEdit::fontFamily();
}
bool QTextEdit_wrapper::fontItalic() const {
  // tag=1000

  // tag=1004
  return ::QTextEdit::fontItalic();
}
qreal QTextEdit_wrapper::fontPointSize() const {
  // tag=1000

  // tag=1004
  return ::QTextEdit::fontPointSize();
}
bool QTextEdit_wrapper::fontUnderline() const {
  // tag=1000

  // tag=1004
  return ::QTextEdit::fontUnderline();
}
int QTextEdit_wrapper::fontWeight() const {
  // tag=1000

  // tag=1004
  return ::QTextEdit::fontWeight();
}
bool QTextEdit_wrapper::hasHeightForWidth() const {
  // tag=1000
  if (m_hasHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QTextEdit::hasHeightForWidth();
  }
}
// tag=1009
bool QTextEdit_wrapper::hasHeightForWidth_nocallback() const {
  // tag=1003
  return ::QTextEdit::hasHeightForWidth();
}
int QTextEdit_wrapper::heightForWidth(int arg__1) const {
  // tag=1000
  if (m_heightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QTextEdit::heightForWidth(arg__1);
  }
}
// tag=1009
int QTextEdit_wrapper::heightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QTextEdit::heightForWidth(arg__1);
}
void QTextEdit_wrapper::initPainter(QPainter *painter) const {
  // tag=1000
  if (m_initPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    // tag=1002
    ::QTextEdit::initPainter(painter);
  }
}
// tag=1009
void QTextEdit_wrapper::initPainter_nocallback(QPainter *painter) const {
  // tag=1003
  ::QTextEdit::initPainter(painter);
}
void QTextEdit_wrapper::insertHtml(const QString &text) {
  // tag=1000

  // tag=1004
  ::QTextEdit::insertHtml(text);
}
void QTextEdit_wrapper::insertPlainText(const QString &text) {
  // tag=1000

  // tag=1004
  ::QTextEdit::insertPlainText(text);
}
bool QTextEdit_wrapper::isReadOnly() const {
  // tag=1000

  // tag=1004
  return ::QTextEdit::isReadOnly();
}
bool QTextEdit_wrapper::isUndoRedoEnabled() const {
  // tag=1000

  // tag=1004
  return ::QTextEdit::isUndoRedoEnabled();
}
void QTextEdit_wrapper::leaveEvent(QEvent *event) {
  // tag=1000
  if (m_leaveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QTextEdit::leaveEvent(event);
  }
}
// tag=1009
void QTextEdit_wrapper::leaveEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QTextEdit::leaveEvent(event);
}
int QTextEdit_wrapper::lineWrapColumnOrWidth() const {
  // tag=1000

  // tag=1004
  return ::QTextEdit::lineWrapColumnOrWidth();
}
QSize QTextEdit_wrapper::minimumSizeHint() const {
  // tag=1000
  if (m_minimumSizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QTextEdit::minimumSizeHint();
  }
}
// tag=1009
QSize QTextEdit_wrapper::minimumSizeHint_nocallback() const {
  // tag=1003
  return ::QTextEdit::minimumSizeHint();
}
void QTextEdit_wrapper::mouseDoubleClickEvent(QMouseEvent *e) {
  // tag=1000
  if (m_mouseDoubleClickEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    // tag=1002
    ::QTextEdit::mouseDoubleClickEvent(e);
  }
}
// tag=1009
void QTextEdit_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *e) {
  // tag=1003
  ::QTextEdit::mouseDoubleClickEvent(e);
}
void QTextEdit_wrapper::mouseMoveEvent(QMouseEvent *e) {
  // tag=1000
  if (m_mouseMoveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    // tag=1002
    ::QTextEdit::mouseMoveEvent(e);
  }
}
// tag=1009
void QTextEdit_wrapper::mouseMoveEvent_nocallback(QMouseEvent *e) {
  // tag=1003
  ::QTextEdit::mouseMoveEvent(e);
}
void QTextEdit_wrapper::mousePressEvent(QMouseEvent *e) {
  // tag=1000
  if (m_mousePressEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    // tag=1002
    ::QTextEdit::mousePressEvent(e);
  }
}
// tag=1009
void QTextEdit_wrapper::mousePressEvent_nocallback(QMouseEvent *e) {
  // tag=1003
  ::QTextEdit::mousePressEvent(e);
}
void QTextEdit_wrapper::mouseReleaseEvent(QMouseEvent *e) {
  // tag=1000
  if (m_mouseReleaseEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    // tag=1002
    ::QTextEdit::mouseReleaseEvent(e);
  }
}
// tag=1009
void QTextEdit_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *e) {
  // tag=1003
  ::QTextEdit::mouseReleaseEvent(e);
}
bool QTextEdit_wrapper::overwriteMode() const {
  // tag=1000

  // tag=1004
  return ::QTextEdit::overwriteMode();
}
void QTextEdit_wrapper::paintEvent(QPaintEvent *e) {
  // tag=1000
  if (m_paintEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    // tag=1002
    ::QTextEdit::paintEvent(e);
  }
}
// tag=1009
void QTextEdit_wrapper::paintEvent_nocallback(QPaintEvent *e) {
  // tag=1003
  ::QTextEdit::paintEvent(e);
}
void QTextEdit_wrapper::paste() {
  // tag=1000

  // tag=1004
  ::QTextEdit::paste();
}
QString QTextEdit_wrapper::placeholderText() const {
  // tag=1000

  // tag=1004
  return ::QTextEdit::placeholderText();
}
void QTextEdit_wrapper::redo() {
  // tag=1000

  // tag=1004
  ::QTextEdit::redo();
}
void QTextEdit_wrapper::redoAvailable(bool b) {
  // tag=1000

  // tag=1004
  ::QTextEdit::redoAvailable(b);
}
void QTextEdit_wrapper::scrollContentsBy(int dx, int dy) {
  // tag=1000
  if (m_scrollContentsByCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_scrollContentsByCallback(const_cast<void *>(thisPtr), dx, dy);
  } else {
    // tag=1002
    ::QTextEdit::scrollContentsBy(dx, dy);
  }
}
// tag=1009
void QTextEdit_wrapper::scrollContentsBy_nocallback(int dx, int dy) {
  // tag=1003
  ::QTextEdit::scrollContentsBy(dx, dy);
}
void QTextEdit_wrapper::scrollToAnchor(const QString &name) {
  // tag=1000

  // tag=1004
  ::QTextEdit::scrollToAnchor(name);
}
void QTextEdit_wrapper::selectAll() {
  // tag=1000

  // tag=1004
  ::QTextEdit::selectAll();
}
void QTextEdit_wrapper::selectionChanged() {
  // tag=1000

  // tag=1004
  ::QTextEdit::selectionChanged();
}
void QTextEdit_wrapper::setAcceptRichText(bool accept) {
  // tag=1000

  // tag=1004
  ::QTextEdit::setAcceptRichText(accept);
}
void QTextEdit_wrapper::setCurrentFont(const QFont &f) {
  // tag=1000

  // tag=1004
  ::QTextEdit::setCurrentFont(f);
}
void QTextEdit_wrapper::setCursorWidth(int width) {
  // tag=1000

  // tag=1004
  ::QTextEdit::setCursorWidth(width);
}
void QTextEdit_wrapper::setDocumentTitle(const QString &title) {
  // tag=1000

  // tag=1004
  ::QTextEdit::setDocumentTitle(title);
}
void QTextEdit_wrapper::setFontFamily(const QString &fontFamily) {
  // tag=1000

  // tag=1004
  ::QTextEdit::setFontFamily(fontFamily);
}
void QTextEdit_wrapper::setFontItalic(bool b) {
  // tag=1000

  // tag=1004
  ::QTextEdit::setFontItalic(b);
}
void QTextEdit_wrapper::setFontPointSize(qreal s) {
  // tag=1000

  // tag=1004
  ::QTextEdit::setFontPointSize(s);
}
void QTextEdit_wrapper::setFontUnderline(bool b) {
  // tag=1000

  // tag=1004
  ::QTextEdit::setFontUnderline(b);
}
void QTextEdit_wrapper::setFontWeight(int w) {
  // tag=1000

  // tag=1004
  ::QTextEdit::setFontWeight(w);
}
void QTextEdit_wrapper::setHtml(const QString &text) {
  // tag=1000

  // tag=1004
  ::QTextEdit::setHtml(text);
}
void QTextEdit_wrapper::setLineWrapColumnOrWidth(int w) {
  // tag=1000

  // tag=1004
  ::QTextEdit::setLineWrapColumnOrWidth(w);
}
void QTextEdit_wrapper::setMarkdown(const QString &markdown) {
  // tag=1000

  // tag=1004
  ::QTextEdit::setMarkdown(markdown);
}
void QTextEdit_wrapper::setOverwriteMode(bool overwrite) {
  // tag=1000

  // tag=1004
  ::QTextEdit::setOverwriteMode(overwrite);
}
void QTextEdit_wrapper::setPlaceholderText(const QString &placeholderText) {
  // tag=1000

  // tag=1004
  ::QTextEdit::setPlaceholderText(placeholderText);
}
void QTextEdit_wrapper::setPlainText(const QString &text) {
  // tag=1000

  // tag=1004
  ::QTextEdit::setPlainText(text);
}
void QTextEdit_wrapper::setReadOnly(bool ro) {
  // tag=1000

  // tag=1004
  ::QTextEdit::setReadOnly(ro);
}
void QTextEdit_wrapper::setTabChangesFocus(bool b) {
  // tag=1000

  // tag=1004
  ::QTextEdit::setTabChangesFocus(b);
}
void QTextEdit_wrapper::setTabStopDistance(qreal distance) {
  // tag=1000

  // tag=1004
  ::QTextEdit::setTabStopDistance(distance);
}
void QTextEdit_wrapper::setText(const QString &text) {
  // tag=1000

  // tag=1004
  ::QTextEdit::setText(text);
}
void QTextEdit_wrapper::setTextBackgroundColor(const QColor &c) {
  // tag=1000

  // tag=1004
  ::QTextEdit::setTextBackgroundColor(c);
}
void QTextEdit_wrapper::setTextColor(const QColor &c) {
  // tag=1000

  // tag=1004
  ::QTextEdit::setTextColor(c);
}
void QTextEdit_wrapper::setUndoRedoEnabled(bool enable) {
  // tag=1000

  // tag=1004
  ::QTextEdit::setUndoRedoEnabled(enable);
}
void QTextEdit_wrapper::setVisible(bool visible) {
  // tag=1000
  if (m_setVisibleCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    // tag=1002
    ::QTextEdit::setVisible(visible);
  }
}
// tag=1009
void QTextEdit_wrapper::setVisible_nocallback(bool visible) {
  // tag=1003
  ::QTextEdit::setVisible(visible);
}
void QTextEdit_wrapper::setupViewport(QWidget *viewport) {
  // tag=1000
  if (m_setupViewportCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setupViewportCallback(const_cast<void *>(thisPtr), viewport);
  } else {
    // tag=1002
    ::QTextEdit::setupViewport(viewport);
  }
}
// tag=1009
void QTextEdit_wrapper::setupViewport_nocallback(QWidget *viewport) {
  // tag=1003
  ::QTextEdit::setupViewport(viewport);
}
QPainter *QTextEdit_wrapper::sharedPainter() const {
  // tag=1000
  if (m_sharedPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QTextEdit::sharedPainter();
  }
}
// tag=1009
QPainter *QTextEdit_wrapper::sharedPainter_nocallback() const {
  // tag=1003
  return ::QTextEdit::sharedPainter();
}
QSize QTextEdit_wrapper::sizeHint() const {
  // tag=1000
  if (m_sizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QTextEdit::sizeHint();
  }
}
// tag=1009
QSize QTextEdit_wrapper::sizeHint_nocallback() const {
  // tag=1003
  return ::QTextEdit::sizeHint();
}
bool QTextEdit_wrapper::tabChangesFocus() const {
  // tag=1000

  // tag=1004
  return ::QTextEdit::tabChangesFocus();
}
qreal QTextEdit_wrapper::tabStopDistance() const {
  // tag=1000

  // tag=1004
  return ::QTextEdit::tabStopDistance();
}
QColor QTextEdit_wrapper::textBackgroundColor() const {
  // tag=1000

  // tag=1004
  return ::QTextEdit::textBackgroundColor();
}
void QTextEdit_wrapper::textChanged() {
  // tag=1000

  // tag=1004
  ::QTextEdit::textChanged();
}
QColor QTextEdit_wrapper::textColor() const {
  // tag=1000

  // tag=1004
  return ::QTextEdit::textColor();
}
QString QTextEdit_wrapper::toHtml() const {
  // tag=1000

  // tag=1004
  return ::QTextEdit::toHtml();
}
QString QTextEdit_wrapper::toMarkdown() const {
  // tag=1000

  // tag=1004
  return ::QTextEdit::toMarkdown();
}
QString QTextEdit_wrapper::toPlainText() const {
  // tag=1000

  // tag=1004
  return ::QTextEdit::toPlainText();
}
QString QTextEdit_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QTextEdit::tr(s, c, n);
}
void QTextEdit_wrapper::undo() {
  // tag=1000

  // tag=1004
  ::QTextEdit::undo();
}
void QTextEdit_wrapper::undoAvailable(bool b) {
  // tag=1000

  // tag=1004
  ::QTextEdit::undoAvailable(b);
}
bool QTextEdit_wrapper::viewportEvent(QEvent *arg__1) {
  // tag=1000
  if (m_viewportEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_viewportEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QTextEdit::viewportEvent(arg__1);
  }
}
// tag=1009
bool QTextEdit_wrapper::viewportEvent_nocallback(QEvent *arg__1) {
  // tag=1003
  return ::QTextEdit::viewportEvent(arg__1);
}
QSize QTextEdit_wrapper::viewportSizeHint() const {
  // tag=1000
  if (m_viewportSizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_viewportSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QTextEdit::viewportSizeHint();
  }
}
// tag=1009
QSize QTextEdit_wrapper::viewportSizeHint_nocallback() const {
  // tag=1003
  return ::QTextEdit::viewportSizeHint();
}
void QTextEdit_wrapper::zoomIn(int range) {
  // tag=1000

  // tag=1004
  ::QTextEdit::zoomIn(range);
}
void QTextEdit_wrapper::zoomInF(float range) {
  // tag=1000

  // tag=1004
  ::QTextEdit::zoomInF(range);
}
void QTextEdit_wrapper::zoomOut(int range) {
  // tag=1000

  // tag=1004
  ::QTextEdit::zoomOut(range);
}

// tag=1005
QTextEdit_wrapper::~QTextEdit_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QTextEdit *fromPtr(void *ptr) {
  return reinterpret_cast<QTextEdit *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QTextEdit_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QTextEdit_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QTextEdit_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QTextEdit_wrapper *>(
      cppObj);
}
void *c_QTextEdit__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QTextEdit_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
void *c_QTextEdit__constructor_QString_QWidget(const char *text_,
                                               void *parent_) {
  const auto text = QString::fromUtf8(text_);
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QTextEdit_wrapper(text, parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// acceptRichText() const
bool c_QTextEdit__acceptRichText(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->acceptRichText();
}

// tag=1050
// anchorAt(const QPoint & pos) const
void *c_QTextEdit__anchorAt_QPoint(void *thisObj, void *pos_) {
  auto &pos = *reinterpret_cast<QPoint *>(pos_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->anchorAt(pos)};
}

// tag=1050
// append(const QString & text)
void c_QTextEdit__append_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  // tag=1010
  fromPtr(thisObj)->append(text);
}

// tag=1050
// canPaste() const
bool c_QTextEdit__canPaste(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->canPaste();
}

// tag=1050
// changeEvent(QEvent * e)
void c_QTextEdit__changeEvent_QEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QEvent *>(e_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->changeEvent_nocallback(e);
}

// tag=1050
// clear()
void c_QTextEdit__clear(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->clear();
}

// tag=1050
// copy()
void c_QTextEdit__copy(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->copy();
}

// tag=1050
// copyAvailable(bool b)
void c_QTextEdit__copyAvailable_bool(void *thisObj, bool b) {
  // tag=1010
  fromPtr(thisObj)->copyAvailable(b);
}

// tag=1079
void c_QTextEdit__onCopyAvailable_bool(void *thisObj, void *contextQObject,
                                       void *callback) {
  auto instance = reinterpret_cast<QTextEdit *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QTextEdit::copyAvailable,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// createStandardContextMenu()
void *c_QTextEdit__createStandardContextMenu(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->createStandardContextMenu();
}

// tag=1050
// createStandardContextMenu(const QPoint & position)
void *c_QTextEdit__createStandardContextMenu_QPoint(void *thisObj,
                                                    void *position_) {
  auto &position = *reinterpret_cast<QPoint *>(position_);
  return
      // tag=1010
      fromPtr(thisObj)->createStandardContextMenu(position);
}

// tag=1050
// currentFont() const
void *c_QTextEdit__currentFont(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QFont>{fromPtr(thisObj)->currentFont()};
}

// tag=1050
// cursorPositionChanged()
void c_QTextEdit__cursorPositionChanged(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->cursorPositionChanged();
}

// tag=1079
void c_QTextEdit__onCursorPositionChanged(void *thisObj, void *contextQObject,
                                          void *callback) {
  auto instance = reinterpret_cast<QTextEdit *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QTextEdit::cursorPositionChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// cursorRect() const
void *c_QTextEdit__cursorRect(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->cursorRect()};
}

// tag=1050
// cursorWidth() const
int c_QTextEdit__cursorWidth(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->cursorWidth();
}

// tag=1050
// customEvent(QEvent * event)
void c_QTextEdit__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// cut()
void c_QTextEdit__cut(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->cut();
}

// tag=1050
// devType() const
int c_QTextEdit__devType(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QTextEdit_wrapper *>(
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
void *c_QTextEdit__documentTitle(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->documentTitle()};
}

// tag=1050
// ensureCursorVisible()
void c_QTextEdit__ensureCursorVisible(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->ensureCursorVisible();
}

// tag=1050
// event(QEvent * e)
bool c_QTextEdit__event_QEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QEvent *>(e_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->event_nocallback(e);
}

// tag=1050
// eventFilter(QObject * arg__1, QEvent * arg__2)
bool c_QTextEdit__eventFilter_QObject_QEvent(void *thisObj, void *arg__1_,
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
bool c_QTextEdit__find_QString(void *thisObj, const char *exp_) {
  const auto exp = QString::fromUtf8(exp_);
  return
      // tag=1010
      fromPtr(thisObj)->find(exp);
}

// tag=1050
// focusNextPrevChild(bool next)
bool c_QTextEdit__focusNextPrevChild_bool(void *thisObj, bool next) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
}

// tag=1050
// fontFamily() const
void *c_QTextEdit__fontFamily(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->fontFamily()};
}

// tag=1050
// fontItalic() const
bool c_QTextEdit__fontItalic(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->fontItalic();
}

// tag=1050
// fontPointSize() const
qreal c_QTextEdit__fontPointSize(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->fontPointSize();
}

// tag=1050
// fontUnderline() const
bool c_QTextEdit__fontUnderline(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->fontUnderline();
}

// tag=1050
// fontWeight() const
int c_QTextEdit__fontWeight(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->fontWeight();
}

// tag=1050
// hasHeightForWidth() const
bool c_QTextEdit__hasHeightForWidth(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QTextEdit_wrapper *>(
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
int c_QTextEdit__heightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QTextEdit_wrapper *>(
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
void c_QTextEdit__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}

// tag=1050
// insertHtml(const QString & text)
void c_QTextEdit__insertHtml_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  // tag=1010
  fromPtr(thisObj)->insertHtml(text);
}

// tag=1050
// insertPlainText(const QString & text)
void c_QTextEdit__insertPlainText_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  // tag=1010
  fromPtr(thisObj)->insertPlainText(text);
}

// tag=1050
// isReadOnly() const
bool c_QTextEdit__isReadOnly(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isReadOnly();
}

// tag=1050
// isUndoRedoEnabled() const
bool c_QTextEdit__isUndoRedoEnabled(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isUndoRedoEnabled();
}

// tag=1050
// leaveEvent(QEvent * event)
void c_QTextEdit__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}

// tag=1050
// lineWrapColumnOrWidth() const
int c_QTextEdit__lineWrapColumnOrWidth(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->lineWrapColumnOrWidth();
}

// tag=1050
// minimumSizeHint() const
void *c_QTextEdit__minimumSizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QTextEdit_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->minimumSizeHint_nocallback();
        } else {
          return targetPtr->minimumSizeHint();
        }
      }()};
}

// tag=1050
// mouseDoubleClickEvent(QMouseEvent * e)
void c_QTextEdit__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QMouseEvent *>(e_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(e);
}

// tag=1050
// mouseMoveEvent(QMouseEvent * e)
void c_QTextEdit__mouseMoveEvent_QMouseEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QMouseEvent *>(e_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(e);
}

// tag=1050
// mousePressEvent(QMouseEvent * e)
void c_QTextEdit__mousePressEvent_QMouseEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QMouseEvent *>(e_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(e);
}

// tag=1050
// mouseReleaseEvent(QMouseEvent * e)
void c_QTextEdit__mouseReleaseEvent_QMouseEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QMouseEvent *>(e_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(e);
}

// tag=1050
// overwriteMode() const
bool c_QTextEdit__overwriteMode(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->overwriteMode();
}

// tag=1050
// paintEvent(QPaintEvent * e)
void c_QTextEdit__paintEvent_QPaintEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QPaintEvent *>(e_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->paintEvent_nocallback(e);
}

// tag=1050
// paste()
void c_QTextEdit__paste(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->paste();
}

// tag=1050
// placeholderText() const
void *c_QTextEdit__placeholderText(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->placeholderText()};
}

// tag=1050
// redo()
void c_QTextEdit__redo(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->redo();
}

// tag=1050
// redoAvailable(bool b)
void c_QTextEdit__redoAvailable_bool(void *thisObj, bool b) {
  // tag=1010
  fromPtr(thisObj)->redoAvailable(b);
}

// tag=1079
void c_QTextEdit__onRedoAvailable_bool(void *thisObj, void *contextQObject,
                                       void *callback) {
  auto instance = reinterpret_cast<QTextEdit *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QTextEdit::redoAvailable,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// scrollContentsBy(int dx, int dy)
void c_QTextEdit__scrollContentsBy_int_int(void *thisObj, int dx, int dy) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->scrollContentsBy_nocallback(dx, dy);
}

// tag=1050
// scrollToAnchor(const QString & name)
void c_QTextEdit__scrollToAnchor_QString(void *thisObj, const char *name_) {
  const auto name = QString::fromUtf8(name_);
  // tag=1010
  fromPtr(thisObj)->scrollToAnchor(name);
}

// tag=1050
// selectAll()
void c_QTextEdit__selectAll(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->selectAll();
}

// tag=1050
// selectionChanged()
void c_QTextEdit__selectionChanged(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->selectionChanged();
}

// tag=1079
void c_QTextEdit__onSelectionChanged(void *thisObj, void *contextQObject,
                                     void *callback) {
  auto instance = reinterpret_cast<QTextEdit *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QTextEdit::selectionChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// setAcceptRichText(bool accept)
void c_QTextEdit__setAcceptRichText_bool(void *thisObj, bool accept) {
  // tag=1010
  fromPtr(thisObj)->setAcceptRichText(accept);
}

// tag=1050
// setCurrentFont(const QFont & f)
void c_QTextEdit__setCurrentFont_QFont(void *thisObj, void *f_) {
  auto &f = *reinterpret_cast<QFont *>(f_);
  // tag=1010
  fromPtr(thisObj)->setCurrentFont(f);
}

// tag=1050
// setCursorWidth(int width)
void c_QTextEdit__setCursorWidth_int(void *thisObj, int width) {
  // tag=1010
  fromPtr(thisObj)->setCursorWidth(width);
}

// tag=1050
// setDocumentTitle(const QString & title)
void c_QTextEdit__setDocumentTitle_QString(void *thisObj, const char *title_) {
  const auto title = QString::fromUtf8(title_);
  // tag=1010
  fromPtr(thisObj)->setDocumentTitle(title);
}

// tag=1050
// setFontFamily(const QString & fontFamily)
void c_QTextEdit__setFontFamily_QString(void *thisObj,
                                        const char *fontFamily_) {
  const auto fontFamily = QString::fromUtf8(fontFamily_);
  // tag=1010
  fromPtr(thisObj)->setFontFamily(fontFamily);
}

// tag=1050
// setFontItalic(bool b)
void c_QTextEdit__setFontItalic_bool(void *thisObj, bool b) {
  // tag=1010
  fromPtr(thisObj)->setFontItalic(b);
}

// tag=1050
// setFontPointSize(qreal s)
void c_QTextEdit__setFontPointSize_qreal(void *thisObj, qreal s) {
  // tag=1010
  fromPtr(thisObj)->setFontPointSize(s);
}

// tag=1050
// setFontUnderline(bool b)
void c_QTextEdit__setFontUnderline_bool(void *thisObj, bool b) {
  // tag=1010
  fromPtr(thisObj)->setFontUnderline(b);
}

// tag=1050
// setFontWeight(int w)
void c_QTextEdit__setFontWeight_int(void *thisObj, int w) {
  // tag=1010
  fromPtr(thisObj)->setFontWeight(w);
}

// tag=1050
// setHtml(const QString & text)
void c_QTextEdit__setHtml_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  // tag=1010
  fromPtr(thisObj)->setHtml(text);
}

// tag=1050
// setLineWrapColumnOrWidth(int w)
void c_QTextEdit__setLineWrapColumnOrWidth_int(void *thisObj, int w) {
  // tag=1010
  fromPtr(thisObj)->setLineWrapColumnOrWidth(w);
}

// tag=1050
// setMarkdown(const QString & markdown)
void c_QTextEdit__setMarkdown_QString(void *thisObj, const char *markdown_) {
  const auto markdown = QString::fromUtf8(markdown_);
  // tag=1010
  fromPtr(thisObj)->setMarkdown(markdown);
}

// tag=1050
// setOverwriteMode(bool overwrite)
void c_QTextEdit__setOverwriteMode_bool(void *thisObj, bool overwrite) {
  // tag=1010
  fromPtr(thisObj)->setOverwriteMode(overwrite);
}

// tag=1050
// setPlaceholderText(const QString & placeholderText)
void c_QTextEdit__setPlaceholderText_QString(void *thisObj,
                                             const char *placeholderText_) {
  const auto placeholderText = QString::fromUtf8(placeholderText_);
  // tag=1010
  fromPtr(thisObj)->setPlaceholderText(placeholderText);
}

// tag=1050
// setPlainText(const QString & text)
void c_QTextEdit__setPlainText_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  // tag=1010
  fromPtr(thisObj)->setPlainText(text);
}

// tag=1050
// setReadOnly(bool ro)
void c_QTextEdit__setReadOnly_bool(void *thisObj, bool ro) {
  // tag=1010
  fromPtr(thisObj)->setReadOnly(ro);
}

// tag=1050
// setTabChangesFocus(bool b)
void c_QTextEdit__setTabChangesFocus_bool(void *thisObj, bool b) {
  // tag=1010
  fromPtr(thisObj)->setTabChangesFocus(b);
}

// tag=1050
// setTabStopDistance(qreal distance)
void c_QTextEdit__setTabStopDistance_qreal(void *thisObj, qreal distance) {
  // tag=1010
  fromPtr(thisObj)->setTabStopDistance(distance);
}

// tag=1050
// setText(const QString & text)
void c_QTextEdit__setText_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  // tag=1010
  fromPtr(thisObj)->setText(text);
}

// tag=1050
// setTextBackgroundColor(const QColor & c)
void c_QTextEdit__setTextBackgroundColor_QColor(void *thisObj, void *c_) {
  auto &c = *reinterpret_cast<QColor *>(c_);
  // tag=1010
  fromPtr(thisObj)->setTextBackgroundColor(c);
}

// tag=1050
// setTextColor(const QColor & c)
void c_QTextEdit__setTextColor_QColor(void *thisObj, void *c_) {
  auto &c = *reinterpret_cast<QColor *>(c_);
  // tag=1010
  fromPtr(thisObj)->setTextColor(c);
}

// tag=1050
// setUndoRedoEnabled(bool enable)
void c_QTextEdit__setUndoRedoEnabled_bool(void *thisObj, bool enable) {
  // tag=1010
  fromPtr(thisObj)->setUndoRedoEnabled(enable);
}

// tag=1050
// setVisible(bool visible)
void c_QTextEdit__setVisible_bool(void *thisObj, bool visible) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTextEdit_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}

// tag=1050
// setupViewport(QWidget * viewport)
void c_QTextEdit__setupViewport_QWidget(void *thisObj, void *viewport_) {
  auto viewport = reinterpret_cast<QWidget *>(viewport_);
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTextEdit_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setupViewport_nocallback(viewport);
    } else {
      return targetPtr->setupViewport(viewport);
    }
  }();
}

// tag=1050
// sharedPainter() const
void *c_QTextEdit__sharedPainter(void *thisObj) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->sharedPainter_nocallback();
}

// tag=1050
// sizeHint() const
void *c_QTextEdit__sizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QTextEdit_wrapper *>(
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
bool c_QTextEdit__tabChangesFocus(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->tabChangesFocus();
}

// tag=1050
// tabStopDistance() const
qreal c_QTextEdit__tabStopDistance(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->tabStopDistance();
}

// tag=1050
// textBackgroundColor() const
void *c_QTextEdit__textBackgroundColor(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QColor>{
          fromPtr(thisObj)->textBackgroundColor()};
}

// tag=1050
// textChanged()
void c_QTextEdit__textChanged(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->textChanged();
}

// tag=1079
void c_QTextEdit__onTextChanged(void *thisObj, void *contextQObject,
                                void *callback) {
  auto instance = reinterpret_cast<QTextEdit *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QTextEdit::textChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// textColor() const
void *c_QTextEdit__textColor(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QColor>{fromPtr(thisObj)->textColor()};
}

// tag=1050
// toHtml() const
void *c_QTextEdit__toHtml(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->toHtml()};
}

// tag=1050
// toMarkdown() const
void *c_QTextEdit__toMarkdown(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->toMarkdown()};
}

// tag=1050
// toPlainText() const
void *c_QTextEdit__toPlainText(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->toPlainText()};
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QTextEdit__tr_char_char_int(const char *s, const char *c,
                                           int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QTextEdit_wrapper::tr(s, c, n)};
}

// tag=1050
// undo()
void c_QTextEdit__undo(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->undo();
}

// tag=1050
// undoAvailable(bool b)
void c_QTextEdit__undoAvailable_bool(void *thisObj, bool b) {
  // tag=1010
  fromPtr(thisObj)->undoAvailable(b);
}

// tag=1079
void c_QTextEdit__onUndoAvailable_bool(void *thisObj, void *contextQObject,
                                       void *callback) {
  auto instance = reinterpret_cast<QTextEdit *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QTextEdit::undoAvailable,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// viewportEvent(QEvent * arg__1)
bool c_QTextEdit__viewportEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->viewportEvent_nocallback(arg__1);
}

// tag=1050
// viewportSizeHint() const
void *c_QTextEdit__viewportSizeHint(void *thisObj) {
  return
      // tag=1011

      // tag=1074

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{
          fromWrapperPtr(thisObj)->viewportSizeHint_nocallback()};
}

// tag=1050
// zoomIn(int range)
void c_QTextEdit__zoomIn_int(void *thisObj, int range) {
  // tag=1010
  fromPtr(thisObj)->zoomIn(range);
}

// tag=1050
// zoomInF(float range)
void c_QTextEdit__zoomInF_float(void *thisObj, float range) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->zoomInF(range);
}

// tag=1050
// zoomOut(int range)
void c_QTextEdit__zoomOut_int(void *thisObj, int range) {
  // tag=1010
  fromPtr(thisObj)->zoomOut(range);
}
void c_QTextEdit__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QTextEdit__registerVirtualMethodCallback(void *ptr, void *callback,
                                                int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1124:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 944:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_customEvent>(
        callback);
    break;
  case 1141:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_devType>(
        callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_event>(callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1150:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTextEdit_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1164:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTextEdit_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 1168:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 1171:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_initPainter>(
        callback);
    break;
  case 1196:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1216:
    wrapper->m_minimumSizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_minimumSizeHint>(
        callback);
    break;
  case 1218:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTextEdit_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1220:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_mouseMoveEvent>(
        callback);
    break;
  case 1221:
    wrapper->m_mousePressEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_mousePressEvent>(
        callback);
    break;
  case 1222:
    wrapper->m_mouseReleaseEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTextEdit_wrapper::
                             Callback_mouseReleaseEvent>(callback);
    break;
  case 1229:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 5199:
    wrapper->m_scrollContentsByCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTextEdit_wrapper::
                             Callback_scrollContentsBy>(callback);
    break;
  case 1309:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_setVisible>(
        callback);
    break;
  case 5207:
    wrapper->m_setupViewportCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_setupViewport>(
        callback);
    break;
  case 1318:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1326:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_sizeHint>(
        callback);
    break;
  case 5210:
    wrapper->m_viewportEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_viewportEvent>(
        callback);
    break;
  case 5211:
    wrapper->m_viewportSizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTextEdit_wrapper::
                             Callback_viewportSizeHint>(callback);
    break;
  }
}
}
