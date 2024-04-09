/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QTextEdit_c.h"

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
QTextEdit_wrapper::QTextEdit_wrapper(QWidget *parent) : ::QTextEdit(parent) {}
QTextEdit_wrapper::QTextEdit_wrapper(const QString &text, QWidget *parent)
    : ::QTextEdit(text, parent) {}
bool QTextEdit_wrapper::acceptRichText() const {
  return ::QTextEdit::acceptRichText();
}
QString QTextEdit_wrapper::anchorAt(const QPoint &pos) const {
  return ::QTextEdit::anchorAt(pos);
}
void QTextEdit_wrapper::append(const QString &text) {
  ::QTextEdit::append(text);
}
bool QTextEdit_wrapper::canPaste() const { return ::QTextEdit::canPaste(); }
void QTextEdit_wrapper::changeEvent(QEvent *e) {
  if (m_changeEventCallback) {
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    ::QTextEdit::changeEvent(e);
  }
}
void QTextEdit_wrapper::changeEvent_nocallback(QEvent *e) {
  ::QTextEdit::changeEvent(e);
}
void QTextEdit_wrapper::clear() { ::QTextEdit::clear(); }
void QTextEdit_wrapper::copy() { ::QTextEdit::copy(); }
void QTextEdit_wrapper::copyAvailable(bool b) { ::QTextEdit::copyAvailable(b); }
QMenu *QTextEdit_wrapper::createStandardContextMenu() {
  return ::QTextEdit::createStandardContextMenu();
}
QMenu *QTextEdit_wrapper::createStandardContextMenu(const QPoint &position) {
  return ::QTextEdit::createStandardContextMenu(position);
}
QFont QTextEdit_wrapper::currentFont() const {
  return ::QTextEdit::currentFont();
}
void QTextEdit_wrapper::cursorPositionChanged() {
  ::QTextEdit::cursorPositionChanged();
}
QRect QTextEdit_wrapper::cursorRect() const {
  return ::QTextEdit::cursorRect();
}
int QTextEdit_wrapper::cursorWidth() const {
  return ::QTextEdit::cursorWidth();
}
void QTextEdit_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QTextEdit::customEvent(event);
  }
}
void QTextEdit_wrapper::customEvent_nocallback(QEvent *event) {
  ::QTextEdit::customEvent(event);
}
void QTextEdit_wrapper::cut() { ::QTextEdit::cut(); }
int QTextEdit_wrapper::devType() const {
  if (m_devTypeCallback) {
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QTextEdit::devType();
  }
}
int QTextEdit_wrapper::devType_nocallback() const {
  return ::QTextEdit::devType();
}
QString QTextEdit_wrapper::documentTitle() const {
  return ::QTextEdit::documentTitle();
}
void QTextEdit_wrapper::ensureCursorVisible() {
  ::QTextEdit::ensureCursorVisible();
}
bool QTextEdit_wrapper::event(QEvent *e) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), e);
  } else {
    return ::QTextEdit::event(e);
  }
}
bool QTextEdit_wrapper::event_nocallback(QEvent *e) {
  return ::QTextEdit::event(e);
}
bool QTextEdit_wrapper::eventFilter(QObject *arg__1, QEvent *arg__2) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), arg__1, arg__2);
  } else {
    return ::QTextEdit::eventFilter(arg__1, arg__2);
  }
}
bool QTextEdit_wrapper::eventFilter_nocallback(QObject *arg__1,
                                               QEvent *arg__2) {
  return ::QTextEdit::eventFilter(arg__1, arg__2);
}
bool QTextEdit_wrapper::find(const QString &exp) {
  return ::QTextEdit::find(exp);
}
bool QTextEdit_wrapper::focusNextPrevChild(bool next) {
  if (m_focusNextPrevChildCallback) {
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    return ::QTextEdit::focusNextPrevChild(next);
  }
}
bool QTextEdit_wrapper::focusNextPrevChild_nocallback(bool next) {
  return ::QTextEdit::focusNextPrevChild(next);
}
QString QTextEdit_wrapper::fontFamily() const {
  return ::QTextEdit::fontFamily();
}
bool QTextEdit_wrapper::fontItalic() const { return ::QTextEdit::fontItalic(); }
qreal QTextEdit_wrapper::fontPointSize() const {
  return ::QTextEdit::fontPointSize();
}
bool QTextEdit_wrapper::fontUnderline() const {
  return ::QTextEdit::fontUnderline();
}
int QTextEdit_wrapper::fontWeight() const { return ::QTextEdit::fontWeight(); }
bool QTextEdit_wrapper::hasHeightForWidth() const {
  if (m_hasHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QTextEdit::hasHeightForWidth();
  }
}
bool QTextEdit_wrapper::hasHeightForWidth_nocallback() const {
  return ::QTextEdit::hasHeightForWidth();
}
int QTextEdit_wrapper::heightForWidth(int arg__1) const {
  if (m_heightForWidthCallback) {
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QTextEdit::heightForWidth(arg__1);
  }
}
int QTextEdit_wrapper::heightForWidth_nocallback(int arg__1) const {
  return ::QTextEdit::heightForWidth(arg__1);
}
void QTextEdit_wrapper::initPainter(QPainter *painter) const {
  if (m_initPainterCallback) {
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    ::QTextEdit::initPainter(painter);
  }
}
void QTextEdit_wrapper::initPainter_nocallback(QPainter *painter) const {
  ::QTextEdit::initPainter(painter);
}
void QTextEdit_wrapper::insertHtml(const QString &text) {
  ::QTextEdit::insertHtml(text);
}
void QTextEdit_wrapper::insertPlainText(const QString &text) {
  ::QTextEdit::insertPlainText(text);
}
bool QTextEdit_wrapper::isReadOnly() const { return ::QTextEdit::isReadOnly(); }
bool QTextEdit_wrapper::isUndoRedoEnabled() const {
  return ::QTextEdit::isUndoRedoEnabled();
}
void QTextEdit_wrapper::leaveEvent(QEvent *event) {
  if (m_leaveEventCallback) {
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QTextEdit::leaveEvent(event);
  }
}
void QTextEdit_wrapper::leaveEvent_nocallback(QEvent *event) {
  ::QTextEdit::leaveEvent(event);
}
int QTextEdit_wrapper::lineWrapColumnOrWidth() const {
  return ::QTextEdit::lineWrapColumnOrWidth();
}
QSize QTextEdit_wrapper::minimumSizeHint() const {
  if (m_minimumSizeHintCallback) {
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QTextEdit::minimumSizeHint();
  }
}
QSize QTextEdit_wrapper::minimumSizeHint_nocallback() const {
  return ::QTextEdit::minimumSizeHint();
}
void QTextEdit_wrapper::mouseDoubleClickEvent(QMouseEvent *e) {
  if (m_mouseDoubleClickEventCallback) {
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    ::QTextEdit::mouseDoubleClickEvent(e);
  }
}
void QTextEdit_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *e) {
  ::QTextEdit::mouseDoubleClickEvent(e);
}
void QTextEdit_wrapper::mouseMoveEvent(QMouseEvent *e) {
  if (m_mouseMoveEventCallback) {
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    ::QTextEdit::mouseMoveEvent(e);
  }
}
void QTextEdit_wrapper::mouseMoveEvent_nocallback(QMouseEvent *e) {
  ::QTextEdit::mouseMoveEvent(e);
}
void QTextEdit_wrapper::mousePressEvent(QMouseEvent *e) {
  if (m_mousePressEventCallback) {
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    ::QTextEdit::mousePressEvent(e);
  }
}
void QTextEdit_wrapper::mousePressEvent_nocallback(QMouseEvent *e) {
  ::QTextEdit::mousePressEvent(e);
}
void QTextEdit_wrapper::mouseReleaseEvent(QMouseEvent *e) {
  if (m_mouseReleaseEventCallback) {
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    ::QTextEdit::mouseReleaseEvent(e);
  }
}
void QTextEdit_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *e) {
  ::QTextEdit::mouseReleaseEvent(e);
}
bool QTextEdit_wrapper::overwriteMode() const {
  return ::QTextEdit::overwriteMode();
}
void QTextEdit_wrapper::paintEvent(QPaintEvent *e) {
  if (m_paintEventCallback) {
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    ::QTextEdit::paintEvent(e);
  }
}
void QTextEdit_wrapper::paintEvent_nocallback(QPaintEvent *e) {
  ::QTextEdit::paintEvent(e);
}
void QTextEdit_wrapper::paste() { ::QTextEdit::paste(); }
QString QTextEdit_wrapper::placeholderText() const {
  return ::QTextEdit::placeholderText();
}
void QTextEdit_wrapper::redo() { ::QTextEdit::redo(); }
void QTextEdit_wrapper::redoAvailable(bool b) { ::QTextEdit::redoAvailable(b); }
void QTextEdit_wrapper::scrollContentsBy(int dx, int dy) {
  if (m_scrollContentsByCallback) {
    const void *thisPtr = this;
    m_scrollContentsByCallback(const_cast<void *>(thisPtr), dx, dy);
  } else {
    ::QTextEdit::scrollContentsBy(dx, dy);
  }
}
void QTextEdit_wrapper::scrollContentsBy_nocallback(int dx, int dy) {
  ::QTextEdit::scrollContentsBy(dx, dy);
}
void QTextEdit_wrapper::scrollToAnchor(const QString &name) {
  ::QTextEdit::scrollToAnchor(name);
}
void QTextEdit_wrapper::selectAll() { ::QTextEdit::selectAll(); }
void QTextEdit_wrapper::selectionChanged() { ::QTextEdit::selectionChanged(); }
void QTextEdit_wrapper::setAcceptRichText(bool accept) {
  ::QTextEdit::setAcceptRichText(accept);
}
void QTextEdit_wrapper::setCurrentFont(const QFont &f) {
  ::QTextEdit::setCurrentFont(f);
}
void QTextEdit_wrapper::setCursorWidth(int width) {
  ::QTextEdit::setCursorWidth(width);
}
void QTextEdit_wrapper::setDocumentTitle(const QString &title) {
  ::QTextEdit::setDocumentTitle(title);
}
void QTextEdit_wrapper::setFontFamily(const QString &fontFamily) {
  ::QTextEdit::setFontFamily(fontFamily);
}
void QTextEdit_wrapper::setFontItalic(bool b) { ::QTextEdit::setFontItalic(b); }
void QTextEdit_wrapper::setFontPointSize(qreal s) {
  ::QTextEdit::setFontPointSize(s);
}
void QTextEdit_wrapper::setFontUnderline(bool b) {
  ::QTextEdit::setFontUnderline(b);
}
void QTextEdit_wrapper::setFontWeight(int w) { ::QTextEdit::setFontWeight(w); }
void QTextEdit_wrapper::setHtml(const QString &text) {
  ::QTextEdit::setHtml(text);
}
void QTextEdit_wrapper::setLineWrapColumnOrWidth(int w) {
  ::QTextEdit::setLineWrapColumnOrWidth(w);
}
void QTextEdit_wrapper::setMarkdown(const QString &markdown) {
  ::QTextEdit::setMarkdown(markdown);
}
void QTextEdit_wrapper::setOverwriteMode(bool overwrite) {
  ::QTextEdit::setOverwriteMode(overwrite);
}
void QTextEdit_wrapper::setPlaceholderText(const QString &placeholderText) {
  ::QTextEdit::setPlaceholderText(placeholderText);
}
void QTextEdit_wrapper::setPlainText(const QString &text) {
  ::QTextEdit::setPlainText(text);
}
void QTextEdit_wrapper::setReadOnly(bool ro) { ::QTextEdit::setReadOnly(ro); }
void QTextEdit_wrapper::setTabChangesFocus(bool b) {
  ::QTextEdit::setTabChangesFocus(b);
}
void QTextEdit_wrapper::setTabStopDistance(qreal distance) {
  ::QTextEdit::setTabStopDistance(distance);
}
void QTextEdit_wrapper::setText(const QString &text) {
  ::QTextEdit::setText(text);
}
void QTextEdit_wrapper::setTextBackgroundColor(const QColor &c) {
  ::QTextEdit::setTextBackgroundColor(c);
}
void QTextEdit_wrapper::setTextColor(const QColor &c) {
  ::QTextEdit::setTextColor(c);
}
void QTextEdit_wrapper::setUndoRedoEnabled(bool enable) {
  ::QTextEdit::setUndoRedoEnabled(enable);
}
void QTextEdit_wrapper::setVisible(bool visible) {
  if (m_setVisibleCallback) {
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    ::QTextEdit::setVisible(visible);
  }
}
void QTextEdit_wrapper::setVisible_nocallback(bool visible) {
  ::QTextEdit::setVisible(visible);
}
void QTextEdit_wrapper::setupViewport(QWidget *viewport) {
  if (m_setupViewportCallback) {
    const void *thisPtr = this;
    m_setupViewportCallback(const_cast<void *>(thisPtr), viewport);
  } else {
    ::QTextEdit::setupViewport(viewport);
  }
}
void QTextEdit_wrapper::setupViewport_nocallback(QWidget *viewport) {
  ::QTextEdit::setupViewport(viewport);
}
QPainter *QTextEdit_wrapper::sharedPainter() const {
  if (m_sharedPainterCallback) {
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QTextEdit::sharedPainter();
  }
}
QPainter *QTextEdit_wrapper::sharedPainter_nocallback() const {
  return ::QTextEdit::sharedPainter();
}
QSize QTextEdit_wrapper::sizeHint() const {
  if (m_sizeHintCallback) {
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QTextEdit::sizeHint();
  }
}
QSize QTextEdit_wrapper::sizeHint_nocallback() const {
  return ::QTextEdit::sizeHint();
}
bool QTextEdit_wrapper::tabChangesFocus() const {
  return ::QTextEdit::tabChangesFocus();
}
qreal QTextEdit_wrapper::tabStopDistance() const {
  return ::QTextEdit::tabStopDistance();
}
QColor QTextEdit_wrapper::textBackgroundColor() const {
  return ::QTextEdit::textBackgroundColor();
}
void QTextEdit_wrapper::textChanged() { ::QTextEdit::textChanged(); }
QColor QTextEdit_wrapper::textColor() const { return ::QTextEdit::textColor(); }
QString QTextEdit_wrapper::toHtml() const { return ::QTextEdit::toHtml(); }
QString QTextEdit_wrapper::toMarkdown() const {
  return ::QTextEdit::toMarkdown();
}
QString QTextEdit_wrapper::toPlainText() const {
  return ::QTextEdit::toPlainText();
}
QString QTextEdit_wrapper::tr(const char *s, const char *c, int n) {
  return ::QTextEdit::tr(s, c, n);
}
void QTextEdit_wrapper::undo() { ::QTextEdit::undo(); }
void QTextEdit_wrapper::undoAvailable(bool b) { ::QTextEdit::undoAvailable(b); }
bool QTextEdit_wrapper::viewportEvent(QEvent *arg__1) {
  if (m_viewportEventCallback) {
    const void *thisPtr = this;
    return m_viewportEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QTextEdit::viewportEvent(arg__1);
  }
}
bool QTextEdit_wrapper::viewportEvent_nocallback(QEvent *arg__1) {
  return ::QTextEdit::viewportEvent(arg__1);
}
QSize QTextEdit_wrapper::viewportSizeHint() const {
  if (m_viewportSizeHintCallback) {
    const void *thisPtr = this;
    return *m_viewportSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QTextEdit::viewportSizeHint();
  }
}
QSize QTextEdit_wrapper::viewportSizeHint_nocallback() const {
  return ::QTextEdit::viewportSizeHint();
}
void QTextEdit_wrapper::zoomIn(int range) { ::QTextEdit::zoomIn(range); }
void QTextEdit_wrapper::zoomInF(float range) { ::QTextEdit::zoomInF(range); }
void QTextEdit_wrapper::zoomOut(int range) { ::QTextEdit::zoomOut(range); }
QTextEdit_wrapper::~QTextEdit_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QTextEdit *fromPtr(void *ptr) {
  return reinterpret_cast<QTextEdit *>(ptr);
}
static QtDartBindings_wrappersNS::QTextEdit_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QTextEdit_wrapper *>(ptr);
}
extern "C" {
void c_QTextEdit_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QTextEdit_wrapper *>(
      cppObj);
}
void *c_QTextEdit__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QTextEdit_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
void *c_QTextEdit__constructor_QString_QWidget(const char *text_,
                                               void *parent_) {
  const auto text = QString::fromUtf8(text_);
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QTextEdit_wrapper(text, parent);
  return reinterpret_cast<void *>(ptr);
}
// acceptRichText() const
bool c_QTextEdit__acceptRichText(void *thisObj) {
  const auto &result = fromPtr(thisObj)->acceptRichText();
  return result;
}
// anchorAt(const QPoint & pos) const
void *c_QTextEdit__anchorAt_QPoint(void *thisObj, void *pos_) {
  assert(pos_);
  auto &pos = *reinterpret_cast<QPoint *>(pos_);
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->anchorAt(pos)};
  return result;
}
// append(const QString & text)
void c_QTextEdit__append_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  fromPtr(thisObj)->append(text);
  free((char *)text_);
}
// canPaste() const
bool c_QTextEdit__canPaste(void *thisObj) {
  const auto &result = fromPtr(thisObj)->canPaste();
  return result;
}
// changeEvent(QEvent * e)
void c_QTextEdit__changeEvent_QEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QEvent *>(e_);
  fromWrapperPtr(thisObj)->changeEvent_nocallback(e);
}
// clear()
void c_QTextEdit__clear(void *thisObj) { fromPtr(thisObj)->clear(); }
// copy()
void c_QTextEdit__copy(void *thisObj) { fromPtr(thisObj)->copy(); }
// copyAvailable(bool b)
void c_QTextEdit__copyAvailable_bool(void *thisObj, bool b) {
  fromPtr(thisObj)->copyAvailable(b);
}
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
// createStandardContextMenu()
void *c_QTextEdit__createStandardContextMenu(void *thisObj) {
  const auto &result = fromPtr(thisObj)->createStandardContextMenu();
  return result;
}
// createStandardContextMenu(const QPoint & position)
void *c_QTextEdit__createStandardContextMenu_QPoint(void *thisObj,
                                                    void *position_) {
  assert(position_);
  auto &position = *reinterpret_cast<QPoint *>(position_);
  const auto &result = fromPtr(thisObj)->createStandardContextMenu(position);
  return result;
}
// currentFont() const
void *c_QTextEdit__currentFont(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QFont>{fromPtr(thisObj)->currentFont()};
  return result;
}
// cursorPositionChanged()
void c_QTextEdit__cursorPositionChanged(void *thisObj) {
  fromPtr(thisObj)->cursorPositionChanged();
}
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
// cursorRect() const
void *c_QTextEdit__cursorRect(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->cursorRect()};
  return result;
}
// cursorWidth() const
int c_QTextEdit__cursorWidth(void *thisObj) {
  const auto &result = fromPtr(thisObj)->cursorWidth();
  return result;
}
// customEvent(QEvent * event)
void c_QTextEdit__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// cut()
void c_QTextEdit__cut(void *thisObj) { fromPtr(thisObj)->cut(); }
// devType() const
int c_QTextEdit__devType(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTextEdit_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->devType_nocallback();
    } else {
      return targetPtr->devType();
    }
  }();
  return result;
}
// documentTitle() const
void *c_QTextEdit__documentTitle(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->documentTitle()};
  return result;
}
// ensureCursorVisible()
void c_QTextEdit__ensureCursorVisible(void *thisObj) {
  fromPtr(thisObj)->ensureCursorVisible();
}
// event(QEvent * e)
bool c_QTextEdit__event_QEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QEvent *>(e_);
  const auto &result = fromWrapperPtr(thisObj)->event_nocallback(e);
  return result;
}
// eventFilter(QObject * arg__1, QEvent * arg__2)
bool c_QTextEdit__eventFilter_QObject_QEvent(void *thisObj, void *arg__1_,
                                             void *arg__2_) {
  auto arg__1 = reinterpret_cast<QObject *>(arg__1_);
  auto arg__2 = reinterpret_cast<QEvent *>(arg__2_);
  const auto &result =
      fromWrapperPtr(thisObj)->eventFilter_nocallback(arg__1, arg__2);
  return result;
}
// find(const QString & exp)
bool c_QTextEdit__find_QString(void *thisObj, const char *exp_) {
  const auto exp = QString::fromUtf8(exp_);
  const auto &result = fromPtr(thisObj)->find(exp);
  free((char *)exp_);
  return result;
}
// focusNextPrevChild(bool next)
bool c_QTextEdit__focusNextPrevChild_bool(void *thisObj, bool next) {
  const auto &result =
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
  return result;
}
// fontFamily() const
void *c_QTextEdit__fontFamily(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->fontFamily()};
  return result;
}
// fontItalic() const
bool c_QTextEdit__fontItalic(void *thisObj) {
  const auto &result = fromPtr(thisObj)->fontItalic();
  return result;
}
// fontPointSize() const
qreal c_QTextEdit__fontPointSize(void *thisObj) {
  const auto &result = fromPtr(thisObj)->fontPointSize();
  return result;
}
// fontUnderline() const
bool c_QTextEdit__fontUnderline(void *thisObj) {
  const auto &result = fromPtr(thisObj)->fontUnderline();
  return result;
}
// fontWeight() const
int c_QTextEdit__fontWeight(void *thisObj) {
  const auto &result = fromPtr(thisObj)->fontWeight();
  return result;
}
// hasHeightForWidth() const
bool c_QTextEdit__hasHeightForWidth(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTextEdit_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->hasHeightForWidth_nocallback();
    } else {
      return targetPtr->hasHeightForWidth();
    }
  }();
  return result;
}
// heightForWidth(int arg__1) const
int c_QTextEdit__heightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTextEdit_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->heightForWidth_nocallback(arg__1);
    } else {
      return targetPtr->heightForWidth(arg__1);
    }
  }();
  return result;
}
// initPainter(QPainter * painter) const
void c_QTextEdit__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}
// insertHtml(const QString & text)
void c_QTextEdit__insertHtml_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  fromPtr(thisObj)->insertHtml(text);
  free((char *)text_);
}
// insertPlainText(const QString & text)
void c_QTextEdit__insertPlainText_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  fromPtr(thisObj)->insertPlainText(text);
  free((char *)text_);
}
// isReadOnly() const
bool c_QTextEdit__isReadOnly(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isReadOnly();
  return result;
}
// isUndoRedoEnabled() const
bool c_QTextEdit__isUndoRedoEnabled(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isUndoRedoEnabled();
  return result;
}
// leaveEvent(QEvent * event)
void c_QTextEdit__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}
// lineWrapColumnOrWidth() const
int c_QTextEdit__lineWrapColumnOrWidth(void *thisObj) {
  const auto &result = fromPtr(thisObj)->lineWrapColumnOrWidth();
  return result;
}
// minimumSizeHint() const
void *c_QTextEdit__minimumSizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTextEdit_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->minimumSizeHint_nocallback();
    } else {
      return targetPtr->minimumSizeHint();
    }
  }()};
  return result;
}
// mouseDoubleClickEvent(QMouseEvent * e)
void c_QTextEdit__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QMouseEvent *>(e_);
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(e);
}
// mouseMoveEvent(QMouseEvent * e)
void c_QTextEdit__mouseMoveEvent_QMouseEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QMouseEvent *>(e_);
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(e);
}
// mousePressEvent(QMouseEvent * e)
void c_QTextEdit__mousePressEvent_QMouseEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QMouseEvent *>(e_);
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(e);
}
// mouseReleaseEvent(QMouseEvent * e)
void c_QTextEdit__mouseReleaseEvent_QMouseEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QMouseEvent *>(e_);
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(e);
}
// overwriteMode() const
bool c_QTextEdit__overwriteMode(void *thisObj) {
  const auto &result = fromPtr(thisObj)->overwriteMode();
  return result;
}
// paintEvent(QPaintEvent * e)
void c_QTextEdit__paintEvent_QPaintEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QPaintEvent *>(e_);
  fromWrapperPtr(thisObj)->paintEvent_nocallback(e);
}
// paste()
void c_QTextEdit__paste(void *thisObj) { fromPtr(thisObj)->paste(); }
// placeholderText() const
void *c_QTextEdit__placeholderText(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->placeholderText()};
  return result;
}
// redo()
void c_QTextEdit__redo(void *thisObj) { fromPtr(thisObj)->redo(); }
// redoAvailable(bool b)
void c_QTextEdit__redoAvailable_bool(void *thisObj, bool b) {
  fromPtr(thisObj)->redoAvailable(b);
}
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
// scrollContentsBy(int dx, int dy)
void c_QTextEdit__scrollContentsBy_int_int(void *thisObj, int dx, int dy) {
  fromWrapperPtr(thisObj)->scrollContentsBy_nocallback(dx, dy);
}
// scrollToAnchor(const QString & name)
void c_QTextEdit__scrollToAnchor_QString(void *thisObj, const char *name_) {
  const auto name = QString::fromUtf8(name_);
  fromPtr(thisObj)->scrollToAnchor(name);
  free((char *)name_);
}
// selectAll()
void c_QTextEdit__selectAll(void *thisObj) { fromPtr(thisObj)->selectAll(); }
// selectionChanged()
void c_QTextEdit__selectionChanged(void *thisObj) {
  fromPtr(thisObj)->selectionChanged();
}
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
// setAcceptRichText(bool accept)
void c_QTextEdit__setAcceptRichText_bool(void *thisObj, bool accept) {
  fromPtr(thisObj)->setAcceptRichText(accept);
}
// setCurrentFont(const QFont & f)
void c_QTextEdit__setCurrentFont_QFont(void *thisObj, void *f_) {
  assert(f_);
  auto &f = *reinterpret_cast<QFont *>(f_);
  fromPtr(thisObj)->setCurrentFont(f);
}
// setCursorWidth(int width)
void c_QTextEdit__setCursorWidth_int(void *thisObj, int width) {
  fromPtr(thisObj)->setCursorWidth(width);
}
// setDocumentTitle(const QString & title)
void c_QTextEdit__setDocumentTitle_QString(void *thisObj, const char *title_) {
  const auto title = QString::fromUtf8(title_);
  fromPtr(thisObj)->setDocumentTitle(title);
  free((char *)title_);
}
// setFontFamily(const QString & fontFamily)
void c_QTextEdit__setFontFamily_QString(void *thisObj,
                                        const char *fontFamily_) {
  const auto fontFamily = QString::fromUtf8(fontFamily_);
  fromPtr(thisObj)->setFontFamily(fontFamily);
  free((char *)fontFamily_);
}
// setFontItalic(bool b)
void c_QTextEdit__setFontItalic_bool(void *thisObj, bool b) {
  fromPtr(thisObj)->setFontItalic(b);
}
// setFontPointSize(qreal s)
void c_QTextEdit__setFontPointSize_qreal(void *thisObj, qreal s) {
  fromPtr(thisObj)->setFontPointSize(s);
}
// setFontUnderline(bool b)
void c_QTextEdit__setFontUnderline_bool(void *thisObj, bool b) {
  fromPtr(thisObj)->setFontUnderline(b);
}
// setFontWeight(int w)
void c_QTextEdit__setFontWeight_int(void *thisObj, int w) {
  fromPtr(thisObj)->setFontWeight(w);
}
// setHtml(const QString & text)
void c_QTextEdit__setHtml_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  fromPtr(thisObj)->setHtml(text);
  free((char *)text_);
}
// setLineWrapColumnOrWidth(int w)
void c_QTextEdit__setLineWrapColumnOrWidth_int(void *thisObj, int w) {
  fromPtr(thisObj)->setLineWrapColumnOrWidth(w);
}
// setMarkdown(const QString & markdown)
void c_QTextEdit__setMarkdown_QString(void *thisObj, const char *markdown_) {
  const auto markdown = QString::fromUtf8(markdown_);
  fromPtr(thisObj)->setMarkdown(markdown);
  free((char *)markdown_);
}
// setOverwriteMode(bool overwrite)
void c_QTextEdit__setOverwriteMode_bool(void *thisObj, bool overwrite) {
  fromPtr(thisObj)->setOverwriteMode(overwrite);
}
// setPlaceholderText(const QString & placeholderText)
void c_QTextEdit__setPlaceholderText_QString(void *thisObj,
                                             const char *placeholderText_) {
  const auto placeholderText = QString::fromUtf8(placeholderText_);
  fromPtr(thisObj)->setPlaceholderText(placeholderText);
  free((char *)placeholderText_);
}
// setPlainText(const QString & text)
void c_QTextEdit__setPlainText_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  fromPtr(thisObj)->setPlainText(text);
  free((char *)text_);
}
// setReadOnly(bool ro)
void c_QTextEdit__setReadOnly_bool(void *thisObj, bool ro) {
  fromPtr(thisObj)->setReadOnly(ro);
}
// setTabChangesFocus(bool b)
void c_QTextEdit__setTabChangesFocus_bool(void *thisObj, bool b) {
  fromPtr(thisObj)->setTabChangesFocus(b);
}
// setTabStopDistance(qreal distance)
void c_QTextEdit__setTabStopDistance_qreal(void *thisObj, qreal distance) {
  fromPtr(thisObj)->setTabStopDistance(distance);
}
// setText(const QString & text)
void c_QTextEdit__setText_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  fromPtr(thisObj)->setText(text);
  free((char *)text_);
}
// setTextBackgroundColor(const QColor & c)
void c_QTextEdit__setTextBackgroundColor_QColor(void *thisObj, void *c_) {
  assert(c_);
  auto &c = *reinterpret_cast<QColor *>(c_);
  fromPtr(thisObj)->setTextBackgroundColor(c);
}
// setTextColor(const QColor & c)
void c_QTextEdit__setTextColor_QColor(void *thisObj, void *c_) {
  assert(c_);
  auto &c = *reinterpret_cast<QColor *>(c_);
  fromPtr(thisObj)->setTextColor(c);
}
// setUndoRedoEnabled(bool enable)
void c_QTextEdit__setUndoRedoEnabled_bool(void *thisObj, bool enable) {
  fromPtr(thisObj)->setUndoRedoEnabled(enable);
}
// setVisible(bool visible)
void c_QTextEdit__setVisible_bool(void *thisObj, bool visible) {
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
// setupViewport(QWidget * viewport)
void c_QTextEdit__setupViewport_QWidget(void *thisObj, void *viewport_) {
  auto viewport = reinterpret_cast<QWidget *>(viewport_);
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
// sharedPainter() const
void *c_QTextEdit__sharedPainter(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->sharedPainter_nocallback();
  return result;
}
// sizeHint() const
void *c_QTextEdit__sizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTextEdit_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->sizeHint_nocallback();
    } else {
      return targetPtr->sizeHint();
    }
  }()};
  return result;
}
// tabChangesFocus() const
bool c_QTextEdit__tabChangesFocus(void *thisObj) {
  const auto &result = fromPtr(thisObj)->tabChangesFocus();
  return result;
}
// tabStopDistance() const
qreal c_QTextEdit__tabStopDistance(void *thisObj) {
  const auto &result = fromPtr(thisObj)->tabStopDistance();
  return result;
}
// textBackgroundColor() const
void *c_QTextEdit__textBackgroundColor(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QColor>{
      fromPtr(thisObj)->textBackgroundColor()};
  return result;
}
// textChanged()
void c_QTextEdit__textChanged(void *thisObj) {
  fromPtr(thisObj)->textChanged();
}
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
// textColor() const
void *c_QTextEdit__textColor(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QColor>{fromPtr(thisObj)->textColor()};
  return result;
}
// toHtml() const
void *c_QTextEdit__toHtml(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->toHtml()};
  return result;
}
// toMarkdown() const
void *c_QTextEdit__toMarkdown(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->toMarkdown()};
  return result;
}
// toPlainText() const
void *c_QTextEdit__toPlainText(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->toPlainText()};
  return result;
}
// tr(const char * s, const char * c, int n)
void *c_static_QTextEdit__tr_char_char_int(const char *s, const char *c,
                                           int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QTextEdit_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
// undo()
void c_QTextEdit__undo(void *thisObj) { fromPtr(thisObj)->undo(); }
// undoAvailable(bool b)
void c_QTextEdit__undoAvailable_bool(void *thisObj, bool b) {
  fromPtr(thisObj)->undoAvailable(b);
}
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
// viewportEvent(QEvent * arg__1)
bool c_QTextEdit__viewportEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  const auto &result =
      fromWrapperPtr(thisObj)->viewportEvent_nocallback(arg__1);
  return result;
}
// viewportSizeHint() const
void *c_QTextEdit__viewportSizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{
      fromWrapperPtr(thisObj)->viewportSizeHint_nocallback()};
  return result;
}
// zoomIn(int range)
void c_QTextEdit__zoomIn_int(void *thisObj, int range) {
  fromPtr(thisObj)->zoomIn(range);
}
// zoomInF(float range)
void c_QTextEdit__zoomInF_float(void *thisObj, float range) {
  fromWrapperPtr(thisObj)->zoomInF(range);
}
// zoomOut(int range)
void c_QTextEdit__zoomOut_int(void *thisObj, int range) {
  fromPtr(thisObj)->zoomOut(range);
}
void c_QTextEdit__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QTextEdit__registerVirtualMethodCallback(void *ptr, void *callback,
                                                int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1128:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_customEvent>(
        callback);
    break;
  case 1145:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_devType>(
        callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_event>(callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1155:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTextEdit_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1169:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTextEdit_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 1173:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 1176:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_initPainter>(
        callback);
    break;
  case 1202:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1222:
    wrapper->m_minimumSizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_minimumSizeHint>(
        callback);
    break;
  case 1224:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTextEdit_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1226:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_mouseMoveEvent>(
        callback);
    break;
  case 1227:
    wrapper->m_mousePressEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_mousePressEvent>(
        callback);
    break;
  case 1228:
    wrapper->m_mouseReleaseEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTextEdit_wrapper::
                             Callback_mouseReleaseEvent>(callback);
    break;
  case 1235:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 5218:
    wrapper->m_scrollContentsByCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTextEdit_wrapper::
                             Callback_scrollContentsBy>(callback);
    break;
  case 1314:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_setVisible>(
        callback);
    break;
  case 5226:
    wrapper->m_setupViewportCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_setupViewport>(
        callback);
    break;
  case 1323:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1331:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_sizeHint>(
        callback);
    break;
  case 5229:
    wrapper->m_viewportEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTextEdit_wrapper::Callback_viewportEvent>(
        callback);
    break;
  case 5230:
    wrapper->m_viewportSizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTextEdit_wrapper::
                             Callback_viewportSizeHint>(callback);
    break;
  }
}
}
