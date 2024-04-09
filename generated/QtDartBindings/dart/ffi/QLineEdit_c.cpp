/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QLineEdit_c.h"

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
QLineEdit_wrapper::QLineEdit_wrapper(QWidget *parent) : ::QLineEdit(parent) {}
QLineEdit_wrapper::QLineEdit_wrapper(const QString &arg__1, QWidget *parent)
    : ::QLineEdit(arg__1, parent) {}
void QLineEdit_wrapper::backspace() { ::QLineEdit::backspace(); }
void QLineEdit_wrapper::changeEvent(QEvent *arg__1) {
  if (m_changeEventCallback) {
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QLineEdit::changeEvent(arg__1);
  }
}
void QLineEdit_wrapper::changeEvent_nocallback(QEvent *arg__1) {
  ::QLineEdit::changeEvent(arg__1);
}
void QLineEdit_wrapper::clear() { ::QLineEdit::clear(); }
void QLineEdit_wrapper::copy() const { ::QLineEdit::copy(); }
QMenu *QLineEdit_wrapper::createStandardContextMenu() {
  return ::QLineEdit::createStandardContextMenu();
}
void QLineEdit_wrapper::cursorBackward(bool mark, int steps) {
  ::QLineEdit::cursorBackward(mark, steps);
}
void QLineEdit_wrapper::cursorForward(bool mark, int steps) {
  ::QLineEdit::cursorForward(mark, steps);
}
int QLineEdit_wrapper::cursorPosition() const {
  return ::QLineEdit::cursorPosition();
}
int QLineEdit_wrapper::cursorPositionAt(const QPoint &pos) {
  return ::QLineEdit::cursorPositionAt(pos);
}
void QLineEdit_wrapper::cursorPositionChanged(int arg__1, int arg__2) {
  ::QLineEdit::cursorPositionChanged(arg__1, arg__2);
}
QRect QLineEdit_wrapper::cursorRect() const {
  return ::QLineEdit::cursorRect();
}
void QLineEdit_wrapper::cursorWordBackward(bool mark) {
  ::QLineEdit::cursorWordBackward(mark);
}
void QLineEdit_wrapper::cursorWordForward(bool mark) {
  ::QLineEdit::cursorWordForward(mark);
}
void QLineEdit_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QLineEdit::customEvent(event);
  }
}
void QLineEdit_wrapper::customEvent_nocallback(QEvent *event) {
  ::QLineEdit::customEvent(event);
}
void QLineEdit_wrapper::cut() { ::QLineEdit::cut(); }
void QLineEdit_wrapper::del() { ::QLineEdit::del(); }
void QLineEdit_wrapper::deselect() { ::QLineEdit::deselect(); }
int QLineEdit_wrapper::devType() const {
  if (m_devTypeCallback) {
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QLineEdit::devType();
  }
}
int QLineEdit_wrapper::devType_nocallback() const {
  return ::QLineEdit::devType();
}
QString QLineEdit_wrapper::displayText() const {
  return ::QLineEdit::displayText();
}
bool QLineEdit_wrapper::dragEnabled() const {
  return ::QLineEdit::dragEnabled();
}
void QLineEdit_wrapper::editingFinished() { ::QLineEdit::editingFinished(); }
void QLineEdit_wrapper::end(bool mark) { ::QLineEdit::end(mark); }
bool QLineEdit_wrapper::event(QEvent *arg__1) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QLineEdit::event(arg__1);
  }
}
bool QLineEdit_wrapper::event_nocallback(QEvent *arg__1) {
  return ::QLineEdit::event(arg__1);
}
bool QLineEdit_wrapper::eventFilter(QObject *watched, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QLineEdit::eventFilter(watched, event);
  }
}
bool QLineEdit_wrapper::eventFilter_nocallback(QObject *watched,
                                               QEvent *event) {
  return ::QLineEdit::eventFilter(watched, event);
}
bool QLineEdit_wrapper::focusNextPrevChild(bool next) {
  if (m_focusNextPrevChildCallback) {
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    return ::QLineEdit::focusNextPrevChild(next);
  }
}
bool QLineEdit_wrapper::focusNextPrevChild_nocallback(bool next) {
  return ::QLineEdit::focusNextPrevChild(next);
}
bool QLineEdit_wrapper::hasAcceptableInput() const {
  return ::QLineEdit::hasAcceptableInput();
}
bool QLineEdit_wrapper::hasFrame() const { return ::QLineEdit::hasFrame(); }
bool QLineEdit_wrapper::hasHeightForWidth() const {
  if (m_hasHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QLineEdit::hasHeightForWidth();
  }
}
bool QLineEdit_wrapper::hasHeightForWidth_nocallback() const {
  return ::QLineEdit::hasHeightForWidth();
}
bool QLineEdit_wrapper::hasSelectedText() const {
  return ::QLineEdit::hasSelectedText();
}
int QLineEdit_wrapper::heightForWidth(int arg__1) const {
  if (m_heightForWidthCallback) {
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QLineEdit::heightForWidth(arg__1);
  }
}
int QLineEdit_wrapper::heightForWidth_nocallback(int arg__1) const {
  return ::QLineEdit::heightForWidth(arg__1);
}
void QLineEdit_wrapper::home(bool mark) { ::QLineEdit::home(mark); }
void QLineEdit_wrapper::initPainter(QPainter *painter) const {
  if (m_initPainterCallback) {
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    ::QLineEdit::initPainter(painter);
  }
}
void QLineEdit_wrapper::initPainter_nocallback(QPainter *painter) const {
  ::QLineEdit::initPainter(painter);
}
QString QLineEdit_wrapper::inputMask() const {
  return ::QLineEdit::inputMask();
}
void QLineEdit_wrapper::inputRejected() { ::QLineEdit::inputRejected(); }
void QLineEdit_wrapper::insert(const QString &arg__1) {
  ::QLineEdit::insert(arg__1);
}
bool QLineEdit_wrapper::isClearButtonEnabled() const {
  return ::QLineEdit::isClearButtonEnabled();
}
bool QLineEdit_wrapper::isModified() const { return ::QLineEdit::isModified(); }
bool QLineEdit_wrapper::isReadOnly() const { return ::QLineEdit::isReadOnly(); }
bool QLineEdit_wrapper::isRedoAvailable() const {
  return ::QLineEdit::isRedoAvailable();
}
bool QLineEdit_wrapper::isUndoAvailable() const {
  return ::QLineEdit::isUndoAvailable();
}
void QLineEdit_wrapper::leaveEvent(QEvent *event) {
  if (m_leaveEventCallback) {
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QLineEdit::leaveEvent(event);
  }
}
void QLineEdit_wrapper::leaveEvent_nocallback(QEvent *event) {
  ::QLineEdit::leaveEvent(event);
}
int QLineEdit_wrapper::maxLength() const { return ::QLineEdit::maxLength(); }
QSize QLineEdit_wrapper::minimumSizeHint() const {
  if (m_minimumSizeHintCallback) {
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QLineEdit::minimumSizeHint();
  }
}
QSize QLineEdit_wrapper::minimumSizeHint_nocallback() const {
  return ::QLineEdit::minimumSizeHint();
}
void QLineEdit_wrapper::mouseDoubleClickEvent(QMouseEvent *arg__1) {
  if (m_mouseDoubleClickEventCallback) {
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QLineEdit::mouseDoubleClickEvent(arg__1);
  }
}
void QLineEdit_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *arg__1) {
  ::QLineEdit::mouseDoubleClickEvent(arg__1);
}
void QLineEdit_wrapper::mouseMoveEvent(QMouseEvent *arg__1) {
  if (m_mouseMoveEventCallback) {
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QLineEdit::mouseMoveEvent(arg__1);
  }
}
void QLineEdit_wrapper::mouseMoveEvent_nocallback(QMouseEvent *arg__1) {
  ::QLineEdit::mouseMoveEvent(arg__1);
}
void QLineEdit_wrapper::mousePressEvent(QMouseEvent *arg__1) {
  if (m_mousePressEventCallback) {
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QLineEdit::mousePressEvent(arg__1);
  }
}
void QLineEdit_wrapper::mousePressEvent_nocallback(QMouseEvent *arg__1) {
  ::QLineEdit::mousePressEvent(arg__1);
}
void QLineEdit_wrapper::mouseReleaseEvent(QMouseEvent *arg__1) {
  if (m_mouseReleaseEventCallback) {
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QLineEdit::mouseReleaseEvent(arg__1);
  }
}
void QLineEdit_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *arg__1) {
  ::QLineEdit::mouseReleaseEvent(arg__1);
}
void QLineEdit_wrapper::paintEvent(QPaintEvent *arg__1) {
  if (m_paintEventCallback) {
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QLineEdit::paintEvent(arg__1);
  }
}
void QLineEdit_wrapper::paintEvent_nocallback(QPaintEvent *arg__1) {
  ::QLineEdit::paintEvent(arg__1);
}
void QLineEdit_wrapper::paste() { ::QLineEdit::paste(); }
QString QLineEdit_wrapper::placeholderText() const {
  return ::QLineEdit::placeholderText();
}
void QLineEdit_wrapper::redo() { ::QLineEdit::redo(); }
void QLineEdit_wrapper::returnPressed() { ::QLineEdit::returnPressed(); }
void QLineEdit_wrapper::selectAll() { ::QLineEdit::selectAll(); }
QString QLineEdit_wrapper::selectedText() const {
  return ::QLineEdit::selectedText();
}
void QLineEdit_wrapper::selectionChanged() { ::QLineEdit::selectionChanged(); }
int QLineEdit_wrapper::selectionEnd() const {
  return ::QLineEdit::selectionEnd();
}
int QLineEdit_wrapper::selectionLength() const {
  return ::QLineEdit::selectionLength();
}
int QLineEdit_wrapper::selectionStart() const {
  return ::QLineEdit::selectionStart();
}
void QLineEdit_wrapper::setClearButtonEnabled(bool enable) {
  ::QLineEdit::setClearButtonEnabled(enable);
}
void QLineEdit_wrapper::setCursorPosition(int arg__1) {
  ::QLineEdit::setCursorPosition(arg__1);
}
void QLineEdit_wrapper::setDragEnabled(bool b) {
  ::QLineEdit::setDragEnabled(b);
}
void QLineEdit_wrapper::setFrame(bool arg__1) { ::QLineEdit::setFrame(arg__1); }
void QLineEdit_wrapper::setInputMask(const QString &inputMask) {
  ::QLineEdit::setInputMask(inputMask);
}
void QLineEdit_wrapper::setMaxLength(int arg__1) {
  ::QLineEdit::setMaxLength(arg__1);
}
void QLineEdit_wrapper::setModified(bool arg__1) {
  ::QLineEdit::setModified(arg__1);
}
void QLineEdit_wrapper::setPlaceholderText(const QString &arg__1) {
  ::QLineEdit::setPlaceholderText(arg__1);
}
void QLineEdit_wrapper::setReadOnly(bool arg__1) {
  ::QLineEdit::setReadOnly(arg__1);
}
void QLineEdit_wrapper::setSelection(int arg__1, int arg__2) {
  ::QLineEdit::setSelection(arg__1, arg__2);
}
void QLineEdit_wrapper::setText(const QString &arg__1) {
  ::QLineEdit::setText(arg__1);
}
void QLineEdit_wrapper::setTextMargins(int left, int top, int right,
                                       int bottom) {
  ::QLineEdit::setTextMargins(left, top, right, bottom);
}
void QLineEdit_wrapper::setVisible(bool visible) {
  if (m_setVisibleCallback) {
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    ::QLineEdit::setVisible(visible);
  }
}
void QLineEdit_wrapper::setVisible_nocallback(bool visible) {
  ::QLineEdit::setVisible(visible);
}
QPainter *QLineEdit_wrapper::sharedPainter() const {
  if (m_sharedPainterCallback) {
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QLineEdit::sharedPainter();
  }
}
QPainter *QLineEdit_wrapper::sharedPainter_nocallback() const {
  return ::QLineEdit::sharedPainter();
}
QSize QLineEdit_wrapper::sizeHint() const {
  if (m_sizeHintCallback) {
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QLineEdit::sizeHint();
  }
}
QSize QLineEdit_wrapper::sizeHint_nocallback() const {
  return ::QLineEdit::sizeHint();
}
QString QLineEdit_wrapper::text() const { return ::QLineEdit::text(); }
void QLineEdit_wrapper::textChanged(const QString &arg__1) {
  ::QLineEdit::textChanged(arg__1);
}
void QLineEdit_wrapper::textEdited(const QString &arg__1) {
  ::QLineEdit::textEdited(arg__1);
}
QString QLineEdit_wrapper::tr(const char *s, const char *c, int n) {
  return ::QLineEdit::tr(s, c, n);
}
void QLineEdit_wrapper::undo() { ::QLineEdit::undo(); }
QLineEdit_wrapper::~QLineEdit_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QLineEdit *fromPtr(void *ptr) {
  return reinterpret_cast<QLineEdit *>(ptr);
}
static QtDartBindings_wrappersNS::QLineEdit_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QLineEdit_wrapper *>(ptr);
}
extern "C" {
void c_QLineEdit_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QLineEdit_wrapper *>(
      cppObj);
}
void *c_QLineEdit__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QLineEdit_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
void *c_QLineEdit__constructor_QString_QWidget(const char *arg__1_,
                                               void *parent_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QLineEdit_wrapper(arg__1, parent);
  return reinterpret_cast<void *>(ptr);
}
// backspace()
void c_QLineEdit__backspace(void *thisObj) { fromPtr(thisObj)->backspace(); }
// changeEvent(QEvent * arg__1)
void c_QLineEdit__changeEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->changeEvent_nocallback(arg__1);
}
// clear()
void c_QLineEdit__clear(void *thisObj) { fromPtr(thisObj)->clear(); }
// copy() const
void c_QLineEdit__copy(void *thisObj) { fromPtr(thisObj)->copy(); }
// createStandardContextMenu()
void *c_QLineEdit__createStandardContextMenu(void *thisObj) {
  const auto &result = fromPtr(thisObj)->createStandardContextMenu();
  return result;
}
// cursorBackward(bool mark, int steps)
void c_QLineEdit__cursorBackward_bool_int(void *thisObj, bool mark, int steps) {
  fromPtr(thisObj)->cursorBackward(mark, steps);
}
// cursorForward(bool mark, int steps)
void c_QLineEdit__cursorForward_bool_int(void *thisObj, bool mark, int steps) {
  fromPtr(thisObj)->cursorForward(mark, steps);
}
// cursorPosition() const
int c_QLineEdit__cursorPosition(void *thisObj) {
  const auto &result = fromPtr(thisObj)->cursorPosition();
  return result;
}
// cursorPositionAt(const QPoint & pos)
int c_QLineEdit__cursorPositionAt_QPoint(void *thisObj, void *pos_) {
  assert(pos_);
  auto &pos = *reinterpret_cast<QPoint *>(pos_);
  const auto &result = fromPtr(thisObj)->cursorPositionAt(pos);
  return result;
}
// cursorPositionChanged(int arg__1, int arg__2)
void c_QLineEdit__cursorPositionChanged_int_int(void *thisObj, int arg__1,
                                                int arg__2) {
  fromPtr(thisObj)->cursorPositionChanged(arg__1, arg__2);
}
void c_QLineEdit__onCursorPositionChanged_int_int(void *thisObj,
                                                  void *contextQObject,
                                                  void *callback) {
  auto instance = reinterpret_cast<QLineEdit *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QLineEdit::cursorPositionChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// cursorRect() const
void *c_QLineEdit__cursorRect(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QRect>{fromWrapperPtr(thisObj)->cursorRect()};
  return result;
}
// cursorWordBackward(bool mark)
void c_QLineEdit__cursorWordBackward_bool(void *thisObj, bool mark) {
  fromPtr(thisObj)->cursorWordBackward(mark);
}
// cursorWordForward(bool mark)
void c_QLineEdit__cursorWordForward_bool(void *thisObj, bool mark) {
  fromPtr(thisObj)->cursorWordForward(mark);
}
void c_QLineEdit__onCustomContextMenuRequested_QPoint(void *thisObj,
                                                      void *contextQObject,
                                                      void *callback) {
  auto instance = reinterpret_cast<QLineEdit *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QLineEdit::customContextMenuRequested,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// customEvent(QEvent * event)
void c_QLineEdit__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// cut()
void c_QLineEdit__cut(void *thisObj) { fromPtr(thisObj)->cut(); }
// del()
void c_QLineEdit__del(void *thisObj) { fromPtr(thisObj)->del(); }
// deselect()
void c_QLineEdit__deselect(void *thisObj) { fromPtr(thisObj)->deselect(); }
// devType() const
int c_QLineEdit__devType(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLineEdit_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->devType_nocallback();
    } else {
      return targetPtr->devType();
    }
  }();
  return result;
}
// displayText() const
void *c_QLineEdit__displayText(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->displayText()};
  return result;
}
// dragEnabled() const
bool c_QLineEdit__dragEnabled(void *thisObj) {
  const auto &result = fromPtr(thisObj)->dragEnabled();
  return result;
}
// editingFinished()
void c_QLineEdit__editingFinished(void *thisObj) {
  fromPtr(thisObj)->editingFinished();
}
void c_QLineEdit__onEditingFinished(void *thisObj, void *contextQObject,
                                    void *callback) {
  auto instance = reinterpret_cast<QLineEdit *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QLineEdit::editingFinished,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// end(bool mark)
void c_QLineEdit__end_bool(void *thisObj, bool mark) {
  fromPtr(thisObj)->end(mark);
}
// event(QEvent * arg__1)
bool c_QLineEdit__event_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLineEdit_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->event_nocallback(arg__1);
    } else {
      return targetPtr->event(arg__1);
    }
  }();
  return result;
}
// eventFilter(QObject * watched, QEvent * event)
bool c_QLineEdit__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                             void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLineEdit_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->eventFilter_nocallback(watched, event);
    } else {
      return targetPtr->eventFilter(watched, event);
    }
  }();
  return result;
}
// focusNextPrevChild(bool next)
bool c_QLineEdit__focusNextPrevChild_bool(void *thisObj, bool next) {
  const auto &result =
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
  return result;
}
// hasAcceptableInput() const
bool c_QLineEdit__hasAcceptableInput(void *thisObj) {
  const auto &result = fromPtr(thisObj)->hasAcceptableInput();
  return result;
}
// hasFrame() const
bool c_QLineEdit__hasFrame(void *thisObj) {
  const auto &result = fromPtr(thisObj)->hasFrame();
  return result;
}
// hasHeightForWidth() const
bool c_QLineEdit__hasHeightForWidth(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLineEdit_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->hasHeightForWidth_nocallback();
    } else {
      return targetPtr->hasHeightForWidth();
    }
  }();
  return result;
}
// hasSelectedText() const
bool c_QLineEdit__hasSelectedText(void *thisObj) {
  const auto &result = fromPtr(thisObj)->hasSelectedText();
  return result;
}
// heightForWidth(int arg__1) const
int c_QLineEdit__heightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLineEdit_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->heightForWidth_nocallback(arg__1);
    } else {
      return targetPtr->heightForWidth(arg__1);
    }
  }();
  return result;
}
// home(bool mark)
void c_QLineEdit__home_bool(void *thisObj, bool mark) {
  fromPtr(thisObj)->home(mark);
}
// initPainter(QPainter * painter) const
void c_QLineEdit__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}
// inputMask() const
void *c_QLineEdit__inputMask(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->inputMask()};
  return result;
}
// inputRejected()
void c_QLineEdit__inputRejected(void *thisObj) {
  fromPtr(thisObj)->inputRejected();
}
void c_QLineEdit__onInputRejected(void *thisObj, void *contextQObject,
                                  void *callback) {
  auto instance = reinterpret_cast<QLineEdit *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QLineEdit::inputRejected,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// insert(const QString & arg__1)
void c_QLineEdit__insert_QString(void *thisObj, const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  fromPtr(thisObj)->insert(arg__1);
  free((char *)arg__1_);
}
// isClearButtonEnabled() const
bool c_QLineEdit__isClearButtonEnabled(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isClearButtonEnabled();
  return result;
}
// isModified() const
bool c_QLineEdit__isModified(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isModified();
  return result;
}
// isReadOnly() const
bool c_QLineEdit__isReadOnly(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isReadOnly();
  return result;
}
// isRedoAvailable() const
bool c_QLineEdit__isRedoAvailable(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isRedoAvailable();
  return result;
}
// isUndoAvailable() const
bool c_QLineEdit__isUndoAvailable(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isUndoAvailable();
  return result;
}
// leaveEvent(QEvent * event)
void c_QLineEdit__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}
// maxLength() const
int c_QLineEdit__maxLength(void *thisObj) {
  const auto &result = fromPtr(thisObj)->maxLength();
  return result;
}
// minimumSizeHint() const
void *c_QLineEdit__minimumSizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLineEdit_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->minimumSizeHint_nocallback();
    } else {
      return targetPtr->minimumSizeHint();
    }
  }()};
  return result;
}
// mouseDoubleClickEvent(QMouseEvent * arg__1)
void c_QLineEdit__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                    void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(arg__1);
}
// mouseMoveEvent(QMouseEvent * arg__1)
void c_QLineEdit__mouseMoveEvent_QMouseEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(arg__1);
}
// mousePressEvent(QMouseEvent * arg__1)
void c_QLineEdit__mousePressEvent_QMouseEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(arg__1);
}
// mouseReleaseEvent(QMouseEvent * arg__1)
void c_QLineEdit__mouseReleaseEvent_QMouseEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(arg__1);
}
// paintEvent(QPaintEvent * arg__1)
void c_QLineEdit__paintEvent_QPaintEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QPaintEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->paintEvent_nocallback(arg__1);
}
// paste()
void c_QLineEdit__paste(void *thisObj) { fromPtr(thisObj)->paste(); }
// placeholderText() const
void *c_QLineEdit__placeholderText(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->placeholderText()};
  return result;
}
// redo()
void c_QLineEdit__redo(void *thisObj) { fromPtr(thisObj)->redo(); }
// returnPressed()
void c_QLineEdit__returnPressed(void *thisObj) {
  fromPtr(thisObj)->returnPressed();
}
void c_QLineEdit__onReturnPressed(void *thisObj, void *contextQObject,
                                  void *callback) {
  auto instance = reinterpret_cast<QLineEdit *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QLineEdit::returnPressed,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// selectAll()
void c_QLineEdit__selectAll(void *thisObj) { fromPtr(thisObj)->selectAll(); }
// selectedText() const
void *c_QLineEdit__selectedText(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->selectedText()};
  return result;
}
// selectionChanged()
void c_QLineEdit__selectionChanged(void *thisObj) {
  fromPtr(thisObj)->selectionChanged();
}
void c_QLineEdit__onSelectionChanged(void *thisObj, void *contextQObject,
                                     void *callback) {
  auto instance = reinterpret_cast<QLineEdit *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QLineEdit::selectionChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// selectionEnd() const
int c_QLineEdit__selectionEnd(void *thisObj) {
  const auto &result = fromPtr(thisObj)->selectionEnd();
  return result;
}
// selectionLength() const
int c_QLineEdit__selectionLength(void *thisObj) {
  const auto &result = fromPtr(thisObj)->selectionLength();
  return result;
}
// selectionStart() const
int c_QLineEdit__selectionStart(void *thisObj) {
  const auto &result = fromPtr(thisObj)->selectionStart();
  return result;
}
// setClearButtonEnabled(bool enable)
void c_QLineEdit__setClearButtonEnabled_bool(void *thisObj, bool enable) {
  fromPtr(thisObj)->setClearButtonEnabled(enable);
}
// setCursorPosition(int arg__1)
void c_QLineEdit__setCursorPosition_int(void *thisObj, int arg__1) {
  fromPtr(thisObj)->setCursorPosition(arg__1);
}
// setDragEnabled(bool b)
void c_QLineEdit__setDragEnabled_bool(void *thisObj, bool b) {
  fromPtr(thisObj)->setDragEnabled(b);
}
// setFrame(bool arg__1)
void c_QLineEdit__setFrame_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->setFrame(arg__1);
}
// setInputMask(const QString & inputMask)
void c_QLineEdit__setInputMask_QString(void *thisObj, const char *inputMask_) {
  const auto inputMask = QString::fromUtf8(inputMask_);
  fromPtr(thisObj)->setInputMask(inputMask);
  free((char *)inputMask_);
}
// setMaxLength(int arg__1)
void c_QLineEdit__setMaxLength_int(void *thisObj, int arg__1) {
  fromPtr(thisObj)->setMaxLength(arg__1);
}
// setModified(bool arg__1)
void c_QLineEdit__setModified_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->setModified(arg__1);
}
// setPlaceholderText(const QString & arg__1)
void c_QLineEdit__setPlaceholderText_QString(void *thisObj,
                                             const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  fromPtr(thisObj)->setPlaceholderText(arg__1);
  free((char *)arg__1_);
}
// setReadOnly(bool arg__1)
void c_QLineEdit__setReadOnly_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->setReadOnly(arg__1);
}
// setSelection(int arg__1, int arg__2)
void c_QLineEdit__setSelection_int_int(void *thisObj, int arg__1, int arg__2) {
  fromPtr(thisObj)->setSelection(arg__1, arg__2);
}
// setText(const QString & arg__1)
void c_QLineEdit__setText_QString(void *thisObj, const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  fromPtr(thisObj)->setText(arg__1);
  free((char *)arg__1_);
}
// setTextMargins(int left, int top, int right, int bottom)
void c_QLineEdit__setTextMargins_int_int_int_int(void *thisObj, int left,
                                                 int top, int right,
                                                 int bottom) {
  fromPtr(thisObj)->setTextMargins(left, top, right, bottom);
}
// setVisible(bool visible)
void c_QLineEdit__setVisible_bool(void *thisObj, bool visible) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLineEdit_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}
// sharedPainter() const
void *c_QLineEdit__sharedPainter(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->sharedPainter_nocallback();
  return result;
}
// sizeHint() const
void *c_QLineEdit__sizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLineEdit_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->sizeHint_nocallback();
    } else {
      return targetPtr->sizeHint();
    }
  }()};
  return result;
}
// text() const
void *c_QLineEdit__text(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->text()};
  return result;
}
// textChanged(const QString & arg__1)
void c_QLineEdit__textChanged_QString(void *thisObj, const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  fromPtr(thisObj)->textChanged(arg__1);
  free((char *)arg__1_);
}
void c_QLineEdit__onTextChanged_QString(void *thisObj, void *contextQObject,
                                        void *callback) {
  auto instance = reinterpret_cast<QLineEdit *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QLineEdit::textChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// textEdited(const QString & arg__1)
void c_QLineEdit__textEdited_QString(void *thisObj, const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  fromPtr(thisObj)->textEdited(arg__1);
  free((char *)arg__1_);
}
void c_QLineEdit__onTextEdited_QString(void *thisObj, void *contextQObject,
                                       void *callback) {
  auto instance = reinterpret_cast<QLineEdit *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QLineEdit::textEdited,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// tr(const char * s, const char * c, int n)
void *c_static_QLineEdit__tr_char_char_int(const char *s, const char *c,
                                           int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QLineEdit_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
// undo()
void c_QLineEdit__undo(void *thisObj) { fromPtr(thisObj)->undo(); }
void c_QLineEdit__onWindowIconChanged_QIcon(void *thisObj, void *contextQObject,
                                            void *callback) {
  auto instance = reinterpret_cast<QLineEdit *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QLineEdit::windowIconChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QLineEdit__onWindowIconTextChanged_QString(void *thisObj,
                                                  void *contextQObject,
                                                  void *callback) {
  auto instance = reinterpret_cast<QLineEdit *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QLineEdit::windowIconTextChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QLineEdit__onWindowTitleChanged_QString(void *thisObj,
                                               void *contextQObject,
                                               void *callback) {
  auto instance = reinterpret_cast<QLineEdit *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QLineEdit::windowTitleChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QLineEdit__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QLineEdit__registerVirtualMethodCallback(void *ptr, void *callback,
                                                int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1128:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLineEdit_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLineEdit_wrapper::Callback_customEvent>(
        callback);
    break;
  case 1145:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLineEdit_wrapper::Callback_devType>(
        callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLineEdit_wrapper::Callback_event>(callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLineEdit_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1155:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QLineEdit_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1169:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QLineEdit_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 1173:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLineEdit_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 1176:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLineEdit_wrapper::Callback_initPainter>(
        callback);
    break;
  case 1202:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLineEdit_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1222:
    wrapper->m_minimumSizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLineEdit_wrapper::Callback_minimumSizeHint>(
        callback);
    break;
  case 1224:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QLineEdit_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1226:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLineEdit_wrapper::Callback_mouseMoveEvent>(
        callback);
    break;
  case 1227:
    wrapper->m_mousePressEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLineEdit_wrapper::Callback_mousePressEvent>(
        callback);
    break;
  case 1228:
    wrapper->m_mouseReleaseEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QLineEdit_wrapper::
                             Callback_mouseReleaseEvent>(callback);
    break;
  case 1235:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLineEdit_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 1314:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLineEdit_wrapper::Callback_setVisible>(
        callback);
    break;
  case 1323:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLineEdit_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1331:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLineEdit_wrapper::Callback_sizeHint>(
        callback);
    break;
  }
}
}
