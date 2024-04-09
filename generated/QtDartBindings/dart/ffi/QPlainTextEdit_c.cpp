/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QPlainTextEdit_c.h"

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
QPlainTextEdit_wrapper::QPlainTextEdit_wrapper(QWidget *parent)
    : ::QPlainTextEdit(parent) {}
QPlainTextEdit_wrapper::QPlainTextEdit_wrapper(const QString &text,
                                               QWidget *parent)
    : ::QPlainTextEdit(text, parent) {}
QString QPlainTextEdit_wrapper::anchorAt(const QPoint &pos) const {
  return ::QPlainTextEdit::anchorAt(pos);
}
void QPlainTextEdit_wrapper::appendHtml(const QString &html) {
  ::QPlainTextEdit::appendHtml(html);
}
void QPlainTextEdit_wrapper::appendPlainText(const QString &text) {
  ::QPlainTextEdit::appendPlainText(text);
}
bool QPlainTextEdit_wrapper::backgroundVisible() const {
  return ::QPlainTextEdit::backgroundVisible();
}
int QPlainTextEdit_wrapper::blockCount() const {
  return ::QPlainTextEdit::blockCount();
}
void QPlainTextEdit_wrapper::blockCountChanged(int newBlockCount) {
  ::QPlainTextEdit::blockCountChanged(newBlockCount);
}
bool QPlainTextEdit_wrapper::canPaste() const {
  return ::QPlainTextEdit::canPaste();
}
void QPlainTextEdit_wrapper::centerCursor() {
  ::QPlainTextEdit::centerCursor();
}
bool QPlainTextEdit_wrapper::centerOnScroll() const {
  return ::QPlainTextEdit::centerOnScroll();
}
void QPlainTextEdit_wrapper::changeEvent(QEvent *e) {
  if (m_changeEventCallback) {
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    ::QPlainTextEdit::changeEvent(e);
  }
}
void QPlainTextEdit_wrapper::changeEvent_nocallback(QEvent *e) {
  ::QPlainTextEdit::changeEvent(e);
}
void QPlainTextEdit_wrapper::clear() { ::QPlainTextEdit::clear(); }
QPointF QPlainTextEdit_wrapper::contentOffset() const {
  return ::QPlainTextEdit::contentOffset();
}
void QPlainTextEdit_wrapper::copy() { ::QPlainTextEdit::copy(); }
void QPlainTextEdit_wrapper::copyAvailable(bool b) {
  ::QPlainTextEdit::copyAvailable(b);
}
QMenu *QPlainTextEdit_wrapper::createStandardContextMenu() {
  return ::QPlainTextEdit::createStandardContextMenu();
}
QMenu *
QPlainTextEdit_wrapper::createStandardContextMenu(const QPoint &position) {
  return ::QPlainTextEdit::createStandardContextMenu(position);
}
void QPlainTextEdit_wrapper::cursorPositionChanged() {
  ::QPlainTextEdit::cursorPositionChanged();
}
QRect QPlainTextEdit_wrapper::cursorRect() const {
  return ::QPlainTextEdit::cursorRect();
}
int QPlainTextEdit_wrapper::cursorWidth() const {
  return ::QPlainTextEdit::cursorWidth();
}
void QPlainTextEdit_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QPlainTextEdit::customEvent(event);
  }
}
void QPlainTextEdit_wrapper::customEvent_nocallback(QEvent *event) {
  ::QPlainTextEdit::customEvent(event);
}
void QPlainTextEdit_wrapper::cut() { ::QPlainTextEdit::cut(); }
int QPlainTextEdit_wrapper::devType() const {
  if (m_devTypeCallback) {
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QPlainTextEdit::devType();
  }
}
int QPlainTextEdit_wrapper::devType_nocallback() const {
  return ::QPlainTextEdit::devType();
}
QString QPlainTextEdit_wrapper::documentTitle() const {
  return ::QPlainTextEdit::documentTitle();
}
void QPlainTextEdit_wrapper::ensureCursorVisible() {
  ::QPlainTextEdit::ensureCursorVisible();
}
bool QPlainTextEdit_wrapper::event(QEvent *e) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), e);
  } else {
    return ::QPlainTextEdit::event(e);
  }
}
bool QPlainTextEdit_wrapper::event_nocallback(QEvent *e) {
  return ::QPlainTextEdit::event(e);
}
bool QPlainTextEdit_wrapper::eventFilter(QObject *arg__1, QEvent *arg__2) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), arg__1, arg__2);
  } else {
    return ::QPlainTextEdit::eventFilter(arg__1, arg__2);
  }
}
bool QPlainTextEdit_wrapper::eventFilter_nocallback(QObject *arg__1,
                                                    QEvent *arg__2) {
  return ::QPlainTextEdit::eventFilter(arg__1, arg__2);
}
bool QPlainTextEdit_wrapper::find(const QString &exp) {
  return ::QPlainTextEdit::find(exp);
}
bool QPlainTextEdit_wrapper::focusNextPrevChild(bool next) {
  if (m_focusNextPrevChildCallback) {
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    return ::QPlainTextEdit::focusNextPrevChild(next);
  }
}
bool QPlainTextEdit_wrapper::focusNextPrevChild_nocallback(bool next) {
  return ::QPlainTextEdit::focusNextPrevChild(next);
}
bool QPlainTextEdit_wrapper::hasHeightForWidth() const {
  if (m_hasHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QPlainTextEdit::hasHeightForWidth();
  }
}
bool QPlainTextEdit_wrapper::hasHeightForWidth_nocallback() const {
  return ::QPlainTextEdit::hasHeightForWidth();
}
int QPlainTextEdit_wrapper::heightForWidth(int arg__1) const {
  if (m_heightForWidthCallback) {
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QPlainTextEdit::heightForWidth(arg__1);
  }
}
int QPlainTextEdit_wrapper::heightForWidth_nocallback(int arg__1) const {
  return ::QPlainTextEdit::heightForWidth(arg__1);
}
void QPlainTextEdit_wrapper::initPainter(QPainter *painter) const {
  if (m_initPainterCallback) {
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    ::QPlainTextEdit::initPainter(painter);
  }
}
void QPlainTextEdit_wrapper::initPainter_nocallback(QPainter *painter) const {
  ::QPlainTextEdit::initPainter(painter);
}
void QPlainTextEdit_wrapper::insertPlainText(const QString &text) {
  ::QPlainTextEdit::insertPlainText(text);
}
bool QPlainTextEdit_wrapper::isReadOnly() const {
  return ::QPlainTextEdit::isReadOnly();
}
bool QPlainTextEdit_wrapper::isUndoRedoEnabled() const {
  return ::QPlainTextEdit::isUndoRedoEnabled();
}
void QPlainTextEdit_wrapper::leaveEvent(QEvent *event) {
  if (m_leaveEventCallback) {
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QPlainTextEdit::leaveEvent(event);
  }
}
void QPlainTextEdit_wrapper::leaveEvent_nocallback(QEvent *event) {
  ::QPlainTextEdit::leaveEvent(event);
}
int QPlainTextEdit_wrapper::maximumBlockCount() const {
  return ::QPlainTextEdit::maximumBlockCount();
}
QSize QPlainTextEdit_wrapper::minimumSizeHint() const {
  if (m_minimumSizeHintCallback) {
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QPlainTextEdit::minimumSizeHint();
  }
}
QSize QPlainTextEdit_wrapper::minimumSizeHint_nocallback() const {
  return ::QPlainTextEdit::minimumSizeHint();
}
void QPlainTextEdit_wrapper::modificationChanged(bool arg__1) {
  ::QPlainTextEdit::modificationChanged(arg__1);
}
void QPlainTextEdit_wrapper::mouseDoubleClickEvent(QMouseEvent *e) {
  if (m_mouseDoubleClickEventCallback) {
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    ::QPlainTextEdit::mouseDoubleClickEvent(e);
  }
}
void QPlainTextEdit_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *e) {
  ::QPlainTextEdit::mouseDoubleClickEvent(e);
}
void QPlainTextEdit_wrapper::mouseMoveEvent(QMouseEvent *e) {
  if (m_mouseMoveEventCallback) {
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    ::QPlainTextEdit::mouseMoveEvent(e);
  }
}
void QPlainTextEdit_wrapper::mouseMoveEvent_nocallback(QMouseEvent *e) {
  ::QPlainTextEdit::mouseMoveEvent(e);
}
void QPlainTextEdit_wrapper::mousePressEvent(QMouseEvent *e) {
  if (m_mousePressEventCallback) {
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    ::QPlainTextEdit::mousePressEvent(e);
  }
}
void QPlainTextEdit_wrapper::mousePressEvent_nocallback(QMouseEvent *e) {
  ::QPlainTextEdit::mousePressEvent(e);
}
void QPlainTextEdit_wrapper::mouseReleaseEvent(QMouseEvent *e) {
  if (m_mouseReleaseEventCallback) {
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    ::QPlainTextEdit::mouseReleaseEvent(e);
  }
}
void QPlainTextEdit_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *e) {
  ::QPlainTextEdit::mouseReleaseEvent(e);
}
bool QPlainTextEdit_wrapper::overwriteMode() const {
  return ::QPlainTextEdit::overwriteMode();
}
void QPlainTextEdit_wrapper::paintEvent(QPaintEvent *e) {
  if (m_paintEventCallback) {
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    ::QPlainTextEdit::paintEvent(e);
  }
}
void QPlainTextEdit_wrapper::paintEvent_nocallback(QPaintEvent *e) {
  ::QPlainTextEdit::paintEvent(e);
}
void QPlainTextEdit_wrapper::paste() { ::QPlainTextEdit::paste(); }
QString QPlainTextEdit_wrapper::placeholderText() const {
  return ::QPlainTextEdit::placeholderText();
}
void QPlainTextEdit_wrapper::redo() { ::QPlainTextEdit::redo(); }
void QPlainTextEdit_wrapper::redoAvailable(bool b) {
  ::QPlainTextEdit::redoAvailable(b);
}
void QPlainTextEdit_wrapper::scrollContentsBy(int dx, int dy) {
  if (m_scrollContentsByCallback) {
    const void *thisPtr = this;
    m_scrollContentsByCallback(const_cast<void *>(thisPtr), dx, dy);
  } else {
    ::QPlainTextEdit::scrollContentsBy(dx, dy);
  }
}
void QPlainTextEdit_wrapper::scrollContentsBy_nocallback(int dx, int dy) {
  ::QPlainTextEdit::scrollContentsBy(dx, dy);
}
void QPlainTextEdit_wrapper::selectAll() { ::QPlainTextEdit::selectAll(); }
void QPlainTextEdit_wrapper::selectionChanged() {
  ::QPlainTextEdit::selectionChanged();
}
void QPlainTextEdit_wrapper::setBackgroundVisible(bool visible) {
  ::QPlainTextEdit::setBackgroundVisible(visible);
}
void QPlainTextEdit_wrapper::setCenterOnScroll(bool enabled) {
  ::QPlainTextEdit::setCenterOnScroll(enabled);
}
void QPlainTextEdit_wrapper::setCursorWidth(int width) {
  ::QPlainTextEdit::setCursorWidth(width);
}
void QPlainTextEdit_wrapper::setDocumentTitle(const QString &title) {
  ::QPlainTextEdit::setDocumentTitle(title);
}
void QPlainTextEdit_wrapper::setMaximumBlockCount(int maximum) {
  ::QPlainTextEdit::setMaximumBlockCount(maximum);
}
void QPlainTextEdit_wrapper::setOverwriteMode(bool overwrite) {
  ::QPlainTextEdit::setOverwriteMode(overwrite);
}
void QPlainTextEdit_wrapper::setPlaceholderText(
    const QString &placeholderText) {
  ::QPlainTextEdit::setPlaceholderText(placeholderText);
}
void QPlainTextEdit_wrapper::setPlainText(const QString &text) {
  ::QPlainTextEdit::setPlainText(text);
}
void QPlainTextEdit_wrapper::setReadOnly(bool ro) {
  ::QPlainTextEdit::setReadOnly(ro);
}
void QPlainTextEdit_wrapper::setTabChangesFocus(bool b) {
  ::QPlainTextEdit::setTabChangesFocus(b);
}
void QPlainTextEdit_wrapper::setTabStopDistance(qreal distance) {
  ::QPlainTextEdit::setTabStopDistance(distance);
}
void QPlainTextEdit_wrapper::setUndoRedoEnabled(bool enable) {
  ::QPlainTextEdit::setUndoRedoEnabled(enable);
}
void QPlainTextEdit_wrapper::setVisible(bool visible) {
  if (m_setVisibleCallback) {
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    ::QPlainTextEdit::setVisible(visible);
  }
}
void QPlainTextEdit_wrapper::setVisible_nocallback(bool visible) {
  ::QPlainTextEdit::setVisible(visible);
}
void QPlainTextEdit_wrapper::setupViewport(QWidget *viewport) {
  if (m_setupViewportCallback) {
    const void *thisPtr = this;
    m_setupViewportCallback(const_cast<void *>(thisPtr), viewport);
  } else {
    ::QPlainTextEdit::setupViewport(viewport);
  }
}
void QPlainTextEdit_wrapper::setupViewport_nocallback(QWidget *viewport) {
  ::QPlainTextEdit::setupViewport(viewport);
}
QPainter *QPlainTextEdit_wrapper::sharedPainter() const {
  if (m_sharedPainterCallback) {
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QPlainTextEdit::sharedPainter();
  }
}
QPainter *QPlainTextEdit_wrapper::sharedPainter_nocallback() const {
  return ::QPlainTextEdit::sharedPainter();
}
QSize QPlainTextEdit_wrapper::sizeHint() const {
  if (m_sizeHintCallback) {
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QPlainTextEdit::sizeHint();
  }
}
QSize QPlainTextEdit_wrapper::sizeHint_nocallback() const {
  return ::QPlainTextEdit::sizeHint();
}
bool QPlainTextEdit_wrapper::tabChangesFocus() const {
  return ::QPlainTextEdit::tabChangesFocus();
}
qreal QPlainTextEdit_wrapper::tabStopDistance() const {
  return ::QPlainTextEdit::tabStopDistance();
}
void QPlainTextEdit_wrapper::textChanged() { ::QPlainTextEdit::textChanged(); }
QString QPlainTextEdit_wrapper::toPlainText() const {
  return ::QPlainTextEdit::toPlainText();
}
QString QPlainTextEdit_wrapper::tr(const char *s, const char *c, int n) {
  return ::QPlainTextEdit::tr(s, c, n);
}
void QPlainTextEdit_wrapper::undo() { ::QPlainTextEdit::undo(); }
void QPlainTextEdit_wrapper::undoAvailable(bool b) {
  ::QPlainTextEdit::undoAvailable(b);
}
void QPlainTextEdit_wrapper::updateRequest(const QRect &rect, int dy) {
  ::QPlainTextEdit::updateRequest(rect, dy);
}
bool QPlainTextEdit_wrapper::viewportEvent(QEvent *arg__1) {
  if (m_viewportEventCallback) {
    const void *thisPtr = this;
    return m_viewportEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QPlainTextEdit::viewportEvent(arg__1);
  }
}
bool QPlainTextEdit_wrapper::viewportEvent_nocallback(QEvent *arg__1) {
  return ::QPlainTextEdit::viewportEvent(arg__1);
}
QSize QPlainTextEdit_wrapper::viewportSizeHint() const {
  if (m_viewportSizeHintCallback) {
    const void *thisPtr = this;
    return *m_viewportSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QPlainTextEdit::viewportSizeHint();
  }
}
QSize QPlainTextEdit_wrapper::viewportSizeHint_nocallback() const {
  return ::QPlainTextEdit::viewportSizeHint();
}
void QPlainTextEdit_wrapper::zoomIn(int range) {
  ::QPlainTextEdit::zoomIn(range);
}
void QPlainTextEdit_wrapper::zoomInF(float range) {
  ::QPlainTextEdit::zoomInF(range);
}
void QPlainTextEdit_wrapper::zoomOut(int range) {
  ::QPlainTextEdit::zoomOut(range);
}
QPlainTextEdit_wrapper::~QPlainTextEdit_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QPlainTextEdit *fromPtr(void *ptr) {
  return reinterpret_cast<QPlainTextEdit *>(ptr);
}
static QtDartBindings_wrappersNS::QPlainTextEdit_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper *>(
      ptr);
}
extern "C" {
void c_QPlainTextEdit_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper *>(
      cppObj);
}
void *c_QPlainTextEdit__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QPlainTextEdit_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
void *c_QPlainTextEdit__constructor_QString_QWidget(const char *text_,
                                                    void *parent_) {
  const auto text = QString::fromUtf8(text_);
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr =
      new QtDartBindings_wrappersNS::QPlainTextEdit_wrapper(text, parent);
  return reinterpret_cast<void *>(ptr);
}
// anchorAt(const QPoint & pos) const
void *c_QPlainTextEdit__anchorAt_QPoint(void *thisObj, void *pos_) {
  assert(pos_);
  auto &pos = *reinterpret_cast<QPoint *>(pos_);
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->anchorAt(pos)};
  return result;
}
// appendHtml(const QString & html)
void c_QPlainTextEdit__appendHtml_QString(void *thisObj, const char *html_) {
  const auto html = QString::fromUtf8(html_);
  fromPtr(thisObj)->appendHtml(html);
  free((char *)html_);
}
// appendPlainText(const QString & text)
void c_QPlainTextEdit__appendPlainText_QString(void *thisObj,
                                               const char *text_) {
  const auto text = QString::fromUtf8(text_);
  fromPtr(thisObj)->appendPlainText(text);
  free((char *)text_);
}
// backgroundVisible() const
bool c_QPlainTextEdit__backgroundVisible(void *thisObj) {
  const auto &result = fromPtr(thisObj)->backgroundVisible();
  return result;
}
// blockCount() const
int c_QPlainTextEdit__blockCount(void *thisObj) {
  const auto &result = fromPtr(thisObj)->blockCount();
  return result;
}
// blockCountChanged(int newBlockCount)
void c_QPlainTextEdit__blockCountChanged_int(void *thisObj, int newBlockCount) {
  fromPtr(thisObj)->blockCountChanged(newBlockCount);
}
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
// canPaste() const
bool c_QPlainTextEdit__canPaste(void *thisObj) {
  const auto &result = fromPtr(thisObj)->canPaste();
  return result;
}
// centerCursor()
void c_QPlainTextEdit__centerCursor(void *thisObj) {
  fromPtr(thisObj)->centerCursor();
}
// centerOnScroll() const
bool c_QPlainTextEdit__centerOnScroll(void *thisObj) {
  const auto &result = fromPtr(thisObj)->centerOnScroll();
  return result;
}
// changeEvent(QEvent * e)
void c_QPlainTextEdit__changeEvent_QEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QEvent *>(e_);
  fromWrapperPtr(thisObj)->changeEvent_nocallback(e);
}
// clear()
void c_QPlainTextEdit__clear(void *thisObj) { fromPtr(thisObj)->clear(); }
// contentOffset() const
void *c_QPlainTextEdit__contentOffset(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QPointF>{
      fromWrapperPtr(thisObj)->contentOffset()};
  return result;
}
// copy()
void c_QPlainTextEdit__copy(void *thisObj) { fromPtr(thisObj)->copy(); }
// copyAvailable(bool b)
void c_QPlainTextEdit__copyAvailable_bool(void *thisObj, bool b) {
  fromPtr(thisObj)->copyAvailable(b);
}
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
// createStandardContextMenu()
void *c_QPlainTextEdit__createStandardContextMenu(void *thisObj) {
  const auto &result = fromPtr(thisObj)->createStandardContextMenu();
  return result;
}
// createStandardContextMenu(const QPoint & position)
void *c_QPlainTextEdit__createStandardContextMenu_QPoint(void *thisObj,
                                                         void *position_) {
  assert(position_);
  auto &position = *reinterpret_cast<QPoint *>(position_);
  const auto &result = fromPtr(thisObj)->createStandardContextMenu(position);
  return result;
}
// cursorPositionChanged()
void c_QPlainTextEdit__cursorPositionChanged(void *thisObj) {
  fromPtr(thisObj)->cursorPositionChanged();
}
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
// cursorRect() const
void *c_QPlainTextEdit__cursorRect(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->cursorRect()};
  return result;
}
// cursorWidth() const
int c_QPlainTextEdit__cursorWidth(void *thisObj) {
  const auto &result = fromPtr(thisObj)->cursorWidth();
  return result;
}
// customEvent(QEvent * event)
void c_QPlainTextEdit__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// cut()
void c_QPlainTextEdit__cut(void *thisObj) { fromPtr(thisObj)->cut(); }
// devType() const
int c_QPlainTextEdit__devType(void *thisObj) {
  const auto &result = [&] {
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
  return result;
}
// documentTitle() const
void *c_QPlainTextEdit__documentTitle(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->documentTitle()};
  return result;
}
// ensureCursorVisible()
void c_QPlainTextEdit__ensureCursorVisible(void *thisObj) {
  fromPtr(thisObj)->ensureCursorVisible();
}
// event(QEvent * e)
bool c_QPlainTextEdit__event_QEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QEvent *>(e_);
  const auto &result = fromWrapperPtr(thisObj)->event_nocallback(e);
  return result;
}
// eventFilter(QObject * arg__1, QEvent * arg__2)
bool c_QPlainTextEdit__eventFilter_QObject_QEvent(void *thisObj, void *arg__1_,
                                                  void *arg__2_) {
  auto arg__1 = reinterpret_cast<QObject *>(arg__1_);
  auto arg__2 = reinterpret_cast<QEvent *>(arg__2_);
  const auto &result =
      fromWrapperPtr(thisObj)->eventFilter_nocallback(arg__1, arg__2);
  return result;
}
// find(const QString & exp)
bool c_QPlainTextEdit__find_QString(void *thisObj, const char *exp_) {
  const auto exp = QString::fromUtf8(exp_);
  const auto &result = fromPtr(thisObj)->find(exp);
  free((char *)exp_);
  return result;
}
// focusNextPrevChild(bool next)
bool c_QPlainTextEdit__focusNextPrevChild_bool(void *thisObj, bool next) {
  const auto &result =
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
  return result;
}
// hasHeightForWidth() const
bool c_QPlainTextEdit__hasHeightForWidth(void *thisObj) {
  const auto &result = [&] {
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
  return result;
}
// heightForWidth(int arg__1) const
int c_QPlainTextEdit__heightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
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
  return result;
}
// initPainter(QPainter * painter) const
void c_QPlainTextEdit__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}
// insertPlainText(const QString & text)
void c_QPlainTextEdit__insertPlainText_QString(void *thisObj,
                                               const char *text_) {
  const auto text = QString::fromUtf8(text_);
  fromPtr(thisObj)->insertPlainText(text);
  free((char *)text_);
}
// isReadOnly() const
bool c_QPlainTextEdit__isReadOnly(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isReadOnly();
  return result;
}
// isUndoRedoEnabled() const
bool c_QPlainTextEdit__isUndoRedoEnabled(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isUndoRedoEnabled();
  return result;
}
// leaveEvent(QEvent * event)
void c_QPlainTextEdit__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}
// maximumBlockCount() const
int c_QPlainTextEdit__maximumBlockCount(void *thisObj) {
  const auto &result = fromPtr(thisObj)->maximumBlockCount();
  return result;
}
// minimumSizeHint() const
void *c_QPlainTextEdit__minimumSizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
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
  return result;
}
// modificationChanged(bool arg__1)
void c_QPlainTextEdit__modificationChanged_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->modificationChanged(arg__1);
}
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
// mouseDoubleClickEvent(QMouseEvent * e)
void c_QPlainTextEdit__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                         void *e_) {
  auto e = reinterpret_cast<QMouseEvent *>(e_);
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(e);
}
// mouseMoveEvent(QMouseEvent * e)
void c_QPlainTextEdit__mouseMoveEvent_QMouseEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QMouseEvent *>(e_);
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(e);
}
// mousePressEvent(QMouseEvent * e)
void c_QPlainTextEdit__mousePressEvent_QMouseEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QMouseEvent *>(e_);
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(e);
}
// mouseReleaseEvent(QMouseEvent * e)
void c_QPlainTextEdit__mouseReleaseEvent_QMouseEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QMouseEvent *>(e_);
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(e);
}
// overwriteMode() const
bool c_QPlainTextEdit__overwriteMode(void *thisObj) {
  const auto &result = fromPtr(thisObj)->overwriteMode();
  return result;
}
// paintEvent(QPaintEvent * e)
void c_QPlainTextEdit__paintEvent_QPaintEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QPaintEvent *>(e_);
  fromWrapperPtr(thisObj)->paintEvent_nocallback(e);
}
// paste()
void c_QPlainTextEdit__paste(void *thisObj) { fromPtr(thisObj)->paste(); }
// placeholderText() const
void *c_QPlainTextEdit__placeholderText(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->placeholderText()};
  return result;
}
// redo()
void c_QPlainTextEdit__redo(void *thisObj) { fromPtr(thisObj)->redo(); }
// redoAvailable(bool b)
void c_QPlainTextEdit__redoAvailable_bool(void *thisObj, bool b) {
  fromPtr(thisObj)->redoAvailable(b);
}
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
// scrollContentsBy(int dx, int dy)
void c_QPlainTextEdit__scrollContentsBy_int_int(void *thisObj, int dx, int dy) {
  fromWrapperPtr(thisObj)->scrollContentsBy_nocallback(dx, dy);
}
// selectAll()
void c_QPlainTextEdit__selectAll(void *thisObj) {
  fromPtr(thisObj)->selectAll();
}
// selectionChanged()
void c_QPlainTextEdit__selectionChanged(void *thisObj) {
  fromPtr(thisObj)->selectionChanged();
}
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
// setBackgroundVisible(bool visible)
void c_QPlainTextEdit__setBackgroundVisible_bool(void *thisObj, bool visible) {
  fromPtr(thisObj)->setBackgroundVisible(visible);
}
// setCenterOnScroll(bool enabled)
void c_QPlainTextEdit__setCenterOnScroll_bool(void *thisObj, bool enabled) {
  fromPtr(thisObj)->setCenterOnScroll(enabled);
}
// setCursorWidth(int width)
void c_QPlainTextEdit__setCursorWidth_int(void *thisObj, int width) {
  fromPtr(thisObj)->setCursorWidth(width);
}
// setDocumentTitle(const QString & title)
void c_QPlainTextEdit__setDocumentTitle_QString(void *thisObj,
                                                const char *title_) {
  const auto title = QString::fromUtf8(title_);
  fromPtr(thisObj)->setDocumentTitle(title);
  free((char *)title_);
}
// setMaximumBlockCount(int maximum)
void c_QPlainTextEdit__setMaximumBlockCount_int(void *thisObj, int maximum) {
  fromPtr(thisObj)->setMaximumBlockCount(maximum);
}
// setOverwriteMode(bool overwrite)
void c_QPlainTextEdit__setOverwriteMode_bool(void *thisObj, bool overwrite) {
  fromPtr(thisObj)->setOverwriteMode(overwrite);
}
// setPlaceholderText(const QString & placeholderText)
void c_QPlainTextEdit__setPlaceholderText_QString(
    void *thisObj, const char *placeholderText_) {
  const auto placeholderText = QString::fromUtf8(placeholderText_);
  fromPtr(thisObj)->setPlaceholderText(placeholderText);
  free((char *)placeholderText_);
}
// setPlainText(const QString & text)
void c_QPlainTextEdit__setPlainText_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  fromPtr(thisObj)->setPlainText(text);
  free((char *)text_);
}
// setReadOnly(bool ro)
void c_QPlainTextEdit__setReadOnly_bool(void *thisObj, bool ro) {
  fromPtr(thisObj)->setReadOnly(ro);
}
// setTabChangesFocus(bool b)
void c_QPlainTextEdit__setTabChangesFocus_bool(void *thisObj, bool b) {
  fromPtr(thisObj)->setTabChangesFocus(b);
}
// setTabStopDistance(qreal distance)
void c_QPlainTextEdit__setTabStopDistance_qreal(void *thisObj, qreal distance) {
  fromPtr(thisObj)->setTabStopDistance(distance);
}
// setUndoRedoEnabled(bool enable)
void c_QPlainTextEdit__setUndoRedoEnabled_bool(void *thisObj, bool enable) {
  fromPtr(thisObj)->setUndoRedoEnabled(enable);
}
// setVisible(bool visible)
void c_QPlainTextEdit__setVisible_bool(void *thisObj, bool visible) {
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
// setupViewport(QWidget * viewport)
void c_QPlainTextEdit__setupViewport_QWidget(void *thisObj, void *viewport_) {
  auto viewport = reinterpret_cast<QWidget *>(viewport_);
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
// sharedPainter() const
void *c_QPlainTextEdit__sharedPainter(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->sharedPainter_nocallback();
  return result;
}
// sizeHint() const
void *c_QPlainTextEdit__sizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
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
  return result;
}
// tabChangesFocus() const
bool c_QPlainTextEdit__tabChangesFocus(void *thisObj) {
  const auto &result = fromPtr(thisObj)->tabChangesFocus();
  return result;
}
// tabStopDistance() const
qreal c_QPlainTextEdit__tabStopDistance(void *thisObj) {
  const auto &result = fromPtr(thisObj)->tabStopDistance();
  return result;
}
// textChanged()
void c_QPlainTextEdit__textChanged(void *thisObj) {
  fromPtr(thisObj)->textChanged();
}
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
// toPlainText() const
void *c_QPlainTextEdit__toPlainText(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->toPlainText()};
  return result;
}
// tr(const char * s, const char * c, int n)
void *c_static_QPlainTextEdit__tr_char_char_int(const char *s, const char *c,
                                                int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
// undo()
void c_QPlainTextEdit__undo(void *thisObj) { fromPtr(thisObj)->undo(); }
// undoAvailable(bool b)
void c_QPlainTextEdit__undoAvailable_bool(void *thisObj, bool b) {
  fromPtr(thisObj)->undoAvailable(b);
}
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
// updateRequest(const QRect & rect, int dy)
void c_QPlainTextEdit__updateRequest_QRect_int(void *thisObj, void *rect_,
                                               int dy) {
  assert(rect_);
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  fromPtr(thisObj)->updateRequest(rect, dy);
}
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
// viewportEvent(QEvent * arg__1)
bool c_QPlainTextEdit__viewportEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  const auto &result =
      fromWrapperPtr(thisObj)->viewportEvent_nocallback(arg__1);
  return result;
}
// viewportSizeHint() const
void *c_QPlainTextEdit__viewportSizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{
      fromWrapperPtr(thisObj)->viewportSizeHint_nocallback()};
  return result;
}
// zoomIn(int range)
void c_QPlainTextEdit__zoomIn_int(void *thisObj, int range) {
  fromPtr(thisObj)->zoomIn(range);
}
// zoomInF(float range)
void c_QPlainTextEdit__zoomInF_float(void *thisObj, float range) {
  fromWrapperPtr(thisObj)->zoomInF(range);
}
// zoomOut(int range)
void c_QPlainTextEdit__zoomOut_int(void *thisObj, int range) {
  fromPtr(thisObj)->zoomOut(range);
}
void c_QPlainTextEdit__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QPlainTextEdit__registerVirtualMethodCallback(void *ptr, void *callback,
                                                     int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1128:
    wrapper->m_changeEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_changeEvent>(callback);
    break;
  case 946:
    wrapper->m_customEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_customEvent>(callback);
    break;
  case 1145:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::Callback_devType>(
        callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::Callback_event>(
        callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_eventFilter>(callback);
    break;
  case 1155:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1169:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 1173:
    wrapper->m_heightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_heightForWidth>(callback);
    break;
  case 1176:
    wrapper->m_initPainterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_initPainter>(callback);
    break;
  case 1202:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1222:
    wrapper->m_minimumSizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_minimumSizeHint>(callback);
    break;
  case 1224:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1226:
    wrapper->m_mouseMoveEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_mouseMoveEvent>(callback);
    break;
  case 1227:
    wrapper->m_mousePressEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_mousePressEvent>(callback);
    break;
  case 1228:
    wrapper->m_mouseReleaseEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_mouseReleaseEvent>(callback);
    break;
  case 1235:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 5218:
    wrapper->m_scrollContentsByCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_scrollContentsBy>(callback);
    break;
  case 1314:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::Callback_setVisible>(
        callback);
    break;
  case 5226:
    wrapper->m_setupViewportCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_setupViewport>(callback);
    break;
  case 1323:
    wrapper->m_sharedPainterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_sharedPainter>(callback);
    break;
  case 1331:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::Callback_sizeHint>(
        callback);
    break;
  case 5229:
    wrapper->m_viewportEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_viewportEvent>(callback);
    break;
  case 5230:
    wrapper->m_viewportSizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPlainTextEdit_wrapper::
                             Callback_viewportSizeHint>(callback);
    break;
  }
}
}
