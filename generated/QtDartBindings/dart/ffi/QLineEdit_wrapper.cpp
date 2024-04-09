#include "QLineEdit_wrapper.h"

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
QLineEdit_wrapper::QLineEdit_wrapper(QWidget *parent) : ::QLineEdit(parent) {}

// tag=1006
QLineEdit_wrapper::QLineEdit_wrapper(const QString &arg__1, QWidget *parent)
    : ::QLineEdit(arg__1, parent) {}
void QLineEdit_wrapper::backspace() {
  // tag=1000

  // tag=1004
  ::QLineEdit::backspace();
}
void QLineEdit_wrapper::changeEvent(QEvent *arg__1) {
  // tag=1000
  if (m_changeEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QLineEdit::changeEvent(arg__1);
  }
}
// tag=1009
void QLineEdit_wrapper::changeEvent_nocallback(QEvent *arg__1) {
  // tag=1003
  ::QLineEdit::changeEvent(arg__1);
}
void QLineEdit_wrapper::clear() {
  // tag=1000

  // tag=1004
  ::QLineEdit::clear();
}
void QLineEdit_wrapper::copy() const {
  // tag=1000

  // tag=1004
  ::QLineEdit::copy();
}
QMenu *QLineEdit_wrapper::createStandardContextMenu() {
  // tag=1000

  // tag=1004
  return ::QLineEdit::createStandardContextMenu();
}
void QLineEdit_wrapper::cursorBackward(bool mark, int steps) {
  // tag=1000

  // tag=1004
  ::QLineEdit::cursorBackward(mark, steps);
}
void QLineEdit_wrapper::cursorForward(bool mark, int steps) {
  // tag=1000

  // tag=1004
  ::QLineEdit::cursorForward(mark, steps);
}
int QLineEdit_wrapper::cursorPosition() const {
  // tag=1000

  // tag=1004
  return ::QLineEdit::cursorPosition();
}
int QLineEdit_wrapper::cursorPositionAt(const QPoint &pos) {
  // tag=1000

  // tag=1004
  return ::QLineEdit::cursorPositionAt(pos);
}
void QLineEdit_wrapper::cursorPositionChanged(int arg__1, int arg__2) {
  // tag=1000

  // tag=1004
  ::QLineEdit::cursorPositionChanged(arg__1, arg__2);
}
QRect QLineEdit_wrapper::cursorRect() const {
  // tag=1000

  // tag=1004
  return ::QLineEdit::cursorRect();
}
void QLineEdit_wrapper::cursorWordBackward(bool mark) {
  // tag=1000

  // tag=1004
  ::QLineEdit::cursorWordBackward(mark);
}
void QLineEdit_wrapper::cursorWordForward(bool mark) {
  // tag=1000

  // tag=1004
  ::QLineEdit::cursorWordForward(mark);
}
void QLineEdit_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QLineEdit::customEvent(event);
  }
}
// tag=1009
void QLineEdit_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QLineEdit::customEvent(event);
}
void QLineEdit_wrapper::cut() {
  // tag=1000

  // tag=1004
  ::QLineEdit::cut();
}
void QLineEdit_wrapper::del() {
  // tag=1000

  // tag=1004
  ::QLineEdit::del();
}
void QLineEdit_wrapper::deselect() {
  // tag=1000

  // tag=1004
  ::QLineEdit::deselect();
}
int QLineEdit_wrapper::devType() const {
  // tag=1000
  if (m_devTypeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QLineEdit::devType();
  }
}
// tag=1009
int QLineEdit_wrapper::devType_nocallback() const {
  // tag=1003
  return ::QLineEdit::devType();
}
QString QLineEdit_wrapper::displayText() const {
  // tag=1000

  // tag=1004
  return ::QLineEdit::displayText();
}
bool QLineEdit_wrapper::dragEnabled() const {
  // tag=1000

  // tag=1004
  return ::QLineEdit::dragEnabled();
}
void QLineEdit_wrapper::editingFinished() {
  // tag=1000

  // tag=1004
  ::QLineEdit::editingFinished();
}
void QLineEdit_wrapper::end(bool mark) {
  // tag=1000

  // tag=1004
  ::QLineEdit::end(mark);
}
bool QLineEdit_wrapper::event(QEvent *arg__1) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QLineEdit::event(arg__1);
  }
}
// tag=1009
bool QLineEdit_wrapper::event_nocallback(QEvent *arg__1) {
  // tag=1003
  return ::QLineEdit::event(arg__1);
}
bool QLineEdit_wrapper::eventFilter(QObject *watched, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    // tag=1002
    return ::QLineEdit::eventFilter(watched, event);
  }
}
// tag=1009
bool QLineEdit_wrapper::eventFilter_nocallback(QObject *watched,
                                               QEvent *event) {
  // tag=1003
  return ::QLineEdit::eventFilter(watched, event);
}
bool QLineEdit_wrapper::focusNextPrevChild(bool next) {
  // tag=1000
  if (m_focusNextPrevChildCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    // tag=1002
    return ::QLineEdit::focusNextPrevChild(next);
  }
}
// tag=1009
bool QLineEdit_wrapper::focusNextPrevChild_nocallback(bool next) {
  // tag=1003
  return ::QLineEdit::focusNextPrevChild(next);
}
bool QLineEdit_wrapper::hasAcceptableInput() const {
  // tag=1000

  // tag=1004
  return ::QLineEdit::hasAcceptableInput();
}
bool QLineEdit_wrapper::hasFrame() const {
  // tag=1000

  // tag=1004
  return ::QLineEdit::hasFrame();
}
bool QLineEdit_wrapper::hasHeightForWidth() const {
  // tag=1000
  if (m_hasHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QLineEdit::hasHeightForWidth();
  }
}
// tag=1009
bool QLineEdit_wrapper::hasHeightForWidth_nocallback() const {
  // tag=1003
  return ::QLineEdit::hasHeightForWidth();
}
bool QLineEdit_wrapper::hasSelectedText() const {
  // tag=1000

  // tag=1004
  return ::QLineEdit::hasSelectedText();
}
int QLineEdit_wrapper::heightForWidth(int arg__1) const {
  // tag=1000
  if (m_heightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QLineEdit::heightForWidth(arg__1);
  }
}
// tag=1009
int QLineEdit_wrapper::heightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QLineEdit::heightForWidth(arg__1);
}
void QLineEdit_wrapper::home(bool mark) {
  // tag=1000

  // tag=1004
  ::QLineEdit::home(mark);
}
void QLineEdit_wrapper::initPainter(QPainter *painter) const {
  // tag=1000
  if (m_initPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    // tag=1002
    ::QLineEdit::initPainter(painter);
  }
}
// tag=1009
void QLineEdit_wrapper::initPainter_nocallback(QPainter *painter) const {
  // tag=1003
  ::QLineEdit::initPainter(painter);
}
QString QLineEdit_wrapper::inputMask() const {
  // tag=1000

  // tag=1004
  return ::QLineEdit::inputMask();
}
void QLineEdit_wrapper::inputRejected() {
  // tag=1000

  // tag=1004
  ::QLineEdit::inputRejected();
}
void QLineEdit_wrapper::insert(const QString &arg__1) {
  // tag=1000

  // tag=1004
  ::QLineEdit::insert(arg__1);
}
bool QLineEdit_wrapper::isClearButtonEnabled() const {
  // tag=1000

  // tag=1004
  return ::QLineEdit::isClearButtonEnabled();
}
bool QLineEdit_wrapper::isModified() const {
  // tag=1000

  // tag=1004
  return ::QLineEdit::isModified();
}
bool QLineEdit_wrapper::isReadOnly() const {
  // tag=1000

  // tag=1004
  return ::QLineEdit::isReadOnly();
}
bool QLineEdit_wrapper::isRedoAvailable() const {
  // tag=1000

  // tag=1004
  return ::QLineEdit::isRedoAvailable();
}
bool QLineEdit_wrapper::isUndoAvailable() const {
  // tag=1000

  // tag=1004
  return ::QLineEdit::isUndoAvailable();
}
void QLineEdit_wrapper::leaveEvent(QEvent *event) {
  // tag=1000
  if (m_leaveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QLineEdit::leaveEvent(event);
  }
}
// tag=1009
void QLineEdit_wrapper::leaveEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QLineEdit::leaveEvent(event);
}
int QLineEdit_wrapper::maxLength() const {
  // tag=1000

  // tag=1004
  return ::QLineEdit::maxLength();
}
QSize QLineEdit_wrapper::minimumSizeHint() const {
  // tag=1000
  if (m_minimumSizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QLineEdit::minimumSizeHint();
  }
}
// tag=1009
QSize QLineEdit_wrapper::minimumSizeHint_nocallback() const {
  // tag=1003
  return ::QLineEdit::minimumSizeHint();
}
void QLineEdit_wrapper::mouseDoubleClickEvent(QMouseEvent *arg__1) {
  // tag=1000
  if (m_mouseDoubleClickEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QLineEdit::mouseDoubleClickEvent(arg__1);
  }
}
// tag=1009
void QLineEdit_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *arg__1) {
  // tag=1003
  ::QLineEdit::mouseDoubleClickEvent(arg__1);
}
void QLineEdit_wrapper::mouseMoveEvent(QMouseEvent *arg__1) {
  // tag=1000
  if (m_mouseMoveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QLineEdit::mouseMoveEvent(arg__1);
  }
}
// tag=1009
void QLineEdit_wrapper::mouseMoveEvent_nocallback(QMouseEvent *arg__1) {
  // tag=1003
  ::QLineEdit::mouseMoveEvent(arg__1);
}
void QLineEdit_wrapper::mousePressEvent(QMouseEvent *arg__1) {
  // tag=1000
  if (m_mousePressEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QLineEdit::mousePressEvent(arg__1);
  }
}
// tag=1009
void QLineEdit_wrapper::mousePressEvent_nocallback(QMouseEvent *arg__1) {
  // tag=1003
  ::QLineEdit::mousePressEvent(arg__1);
}
void QLineEdit_wrapper::mouseReleaseEvent(QMouseEvent *arg__1) {
  // tag=1000
  if (m_mouseReleaseEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QLineEdit::mouseReleaseEvent(arg__1);
  }
}
// tag=1009
void QLineEdit_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *arg__1) {
  // tag=1003
  ::QLineEdit::mouseReleaseEvent(arg__1);
}
void QLineEdit_wrapper::paintEvent(QPaintEvent *arg__1) {
  // tag=1000
  if (m_paintEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QLineEdit::paintEvent(arg__1);
  }
}
// tag=1009
void QLineEdit_wrapper::paintEvent_nocallback(QPaintEvent *arg__1) {
  // tag=1003
  ::QLineEdit::paintEvent(arg__1);
}
void QLineEdit_wrapper::paste() {
  // tag=1000

  // tag=1004
  ::QLineEdit::paste();
}
QString QLineEdit_wrapper::placeholderText() const {
  // tag=1000

  // tag=1004
  return ::QLineEdit::placeholderText();
}
void QLineEdit_wrapper::redo() {
  // tag=1000

  // tag=1004
  ::QLineEdit::redo();
}
void QLineEdit_wrapper::returnPressed() {
  // tag=1000

  // tag=1004
  ::QLineEdit::returnPressed();
}
void QLineEdit_wrapper::selectAll() {
  // tag=1000

  // tag=1004
  ::QLineEdit::selectAll();
}
QString QLineEdit_wrapper::selectedText() const {
  // tag=1000

  // tag=1004
  return ::QLineEdit::selectedText();
}
void QLineEdit_wrapper::selectionChanged() {
  // tag=1000

  // tag=1004
  ::QLineEdit::selectionChanged();
}
int QLineEdit_wrapper::selectionEnd() const {
  // tag=1000

  // tag=1004
  return ::QLineEdit::selectionEnd();
}
int QLineEdit_wrapper::selectionLength() const {
  // tag=1000

  // tag=1004
  return ::QLineEdit::selectionLength();
}
int QLineEdit_wrapper::selectionStart() const {
  // tag=1000

  // tag=1004
  return ::QLineEdit::selectionStart();
}
void QLineEdit_wrapper::setClearButtonEnabled(bool enable) {
  // tag=1000

  // tag=1004
  ::QLineEdit::setClearButtonEnabled(enable);
}
void QLineEdit_wrapper::setCursorPosition(int arg__1) {
  // tag=1000

  // tag=1004
  ::QLineEdit::setCursorPosition(arg__1);
}
void QLineEdit_wrapper::setDragEnabled(bool b) {
  // tag=1000

  // tag=1004
  ::QLineEdit::setDragEnabled(b);
}
void QLineEdit_wrapper::setFrame(bool arg__1) {
  // tag=1000

  // tag=1004
  ::QLineEdit::setFrame(arg__1);
}
void QLineEdit_wrapper::setInputMask(const QString &inputMask) {
  // tag=1000

  // tag=1004
  ::QLineEdit::setInputMask(inputMask);
}
void QLineEdit_wrapper::setMaxLength(int arg__1) {
  // tag=1000

  // tag=1004
  ::QLineEdit::setMaxLength(arg__1);
}
void QLineEdit_wrapper::setModified(bool arg__1) {
  // tag=1000

  // tag=1004
  ::QLineEdit::setModified(arg__1);
}
void QLineEdit_wrapper::setPlaceholderText(const QString &arg__1) {
  // tag=1000

  // tag=1004
  ::QLineEdit::setPlaceholderText(arg__1);
}
void QLineEdit_wrapper::setReadOnly(bool arg__1) {
  // tag=1000

  // tag=1004
  ::QLineEdit::setReadOnly(arg__1);
}
void QLineEdit_wrapper::setSelection(int arg__1, int arg__2) {
  // tag=1000

  // tag=1004
  ::QLineEdit::setSelection(arg__1, arg__2);
}
void QLineEdit_wrapper::setText(const QString &arg__1) {
  // tag=1000

  // tag=1004
  ::QLineEdit::setText(arg__1);
}
void QLineEdit_wrapper::setTextMargins(int left, int top, int right,
                                       int bottom) {
  // tag=1000

  // tag=1004
  ::QLineEdit::setTextMargins(left, top, right, bottom);
}
void QLineEdit_wrapper::setVisible(bool visible) {
  // tag=1000
  if (m_setVisibleCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    // tag=1002
    ::QLineEdit::setVisible(visible);
  }
}
// tag=1009
void QLineEdit_wrapper::setVisible_nocallback(bool visible) {
  // tag=1003
  ::QLineEdit::setVisible(visible);
}
QPainter *QLineEdit_wrapper::sharedPainter() const {
  // tag=1000
  if (m_sharedPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QLineEdit::sharedPainter();
  }
}
// tag=1009
QPainter *QLineEdit_wrapper::sharedPainter_nocallback() const {
  // tag=1003
  return ::QLineEdit::sharedPainter();
}
QSize QLineEdit_wrapper::sizeHint() const {
  // tag=1000
  if (m_sizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QLineEdit::sizeHint();
  }
}
// tag=1009
QSize QLineEdit_wrapper::sizeHint_nocallback() const {
  // tag=1003
  return ::QLineEdit::sizeHint();
}
QString QLineEdit_wrapper::text() const {
  // tag=1000

  // tag=1004
  return ::QLineEdit::text();
}
void QLineEdit_wrapper::textChanged(const QString &arg__1) {
  // tag=1000

  // tag=1004
  ::QLineEdit::textChanged(arg__1);
}
void QLineEdit_wrapper::textEdited(const QString &arg__1) {
  // tag=1000

  // tag=1004
  ::QLineEdit::textEdited(arg__1);
}
QString QLineEdit_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QLineEdit::tr(s, c, n);
}
void QLineEdit_wrapper::undo() {
  // tag=1000

  // tag=1004
  ::QLineEdit::undo();
}

// tag=1005
QLineEdit_wrapper::~QLineEdit_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QLineEdit *fromPtr(void *ptr) {
  return reinterpret_cast<QLineEdit *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QLineEdit_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QLineEdit_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QLineEdit_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QLineEdit_wrapper *>(
      cppObj);
}
void *c_QLineEdit__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QLineEdit_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
void *c_QLineEdit__constructor_QString_QWidget(const char *arg__1_,
                                               void *parent_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QLineEdit_wrapper(arg__1, parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// backspace()
void c_QLineEdit__backspace(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->backspace();
}

// tag=1050
// changeEvent(QEvent * arg__1)
void c_QLineEdit__changeEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->changeEvent_nocallback(arg__1);
}

// tag=1050
// clear()
void c_QLineEdit__clear(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->clear();
}

// tag=1050
// copy() const
void c_QLineEdit__copy(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->copy();
}

// tag=1050
// createStandardContextMenu()
void *c_QLineEdit__createStandardContextMenu(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->createStandardContextMenu();
}

// tag=1050
// cursorBackward(bool mark, int steps)
void c_QLineEdit__cursorBackward_bool_int(void *thisObj, bool mark, int steps) {
  // tag=1010
  fromPtr(thisObj)->cursorBackward(mark, steps);
}

// tag=1050
// cursorForward(bool mark, int steps)
void c_QLineEdit__cursorForward_bool_int(void *thisObj, bool mark, int steps) {
  // tag=1010
  fromPtr(thisObj)->cursorForward(mark, steps);
}

// tag=1050
// cursorPosition() const
int c_QLineEdit__cursorPosition(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->cursorPosition();
}

// tag=1050
// cursorPositionAt(const QPoint & pos)
int c_QLineEdit__cursorPositionAt_QPoint(void *thisObj, void *pos_) {
  auto &pos = *reinterpret_cast<QPoint *>(pos_);
  return
      // tag=1010
      fromPtr(thisObj)->cursorPositionAt(pos);
}

// tag=1050
// cursorPositionChanged(int arg__1, int arg__2)
void c_QLineEdit__cursorPositionChanged_int_int(void *thisObj, int arg__1,
                                                int arg__2) {
  // tag=1010
  fromPtr(thisObj)->cursorPositionChanged(arg__1, arg__2);
}

// tag=1079
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

// tag=1050
// cursorRect() const
void *c_QLineEdit__cursorRect(void *thisObj) {
  return
      // tag=1011

      // tag=1073

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{fromWrapperPtr(thisObj)->cursorRect()};
}

// tag=1050
// cursorWordBackward(bool mark)
void c_QLineEdit__cursorWordBackward_bool(void *thisObj, bool mark) {
  // tag=1010
  fromPtr(thisObj)->cursorWordBackward(mark);
}

// tag=1050
// cursorWordForward(bool mark)
void c_QLineEdit__cursorWordForward_bool(void *thisObj, bool mark) {
  // tag=1010
  fromPtr(thisObj)->cursorWordForward(mark);
}

// tag=1079
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

// tag=1050
// customEvent(QEvent * event)
void c_QLineEdit__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// cut()
void c_QLineEdit__cut(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->cut();
}

// tag=1050
// del()
void c_QLineEdit__del(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->del();
}

// tag=1050
// deselect()
void c_QLineEdit__deselect(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->deselect();
}

// tag=1050
// devType() const
int c_QLineEdit__devType(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLineEdit_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->devType_nocallback();
        } else {
          return targetPtr->devType();
        }
      }();
}

// tag=1050
// displayText() const
void *c_QLineEdit__displayText(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->displayText()};
}

// tag=1050
// dragEnabled() const
bool c_QLineEdit__dragEnabled(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->dragEnabled();
}

// tag=1050
// editingFinished()
void c_QLineEdit__editingFinished(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->editingFinished();
}

// tag=1079
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

// tag=1050
// end(bool mark)
void c_QLineEdit__end_bool(void *thisObj, bool mark) {
  // tag=1010
  fromPtr(thisObj)->end(mark);
}

// tag=1050
// event(QEvent * arg__1)
bool c_QLineEdit__event_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLineEdit_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->event_nocallback(arg__1);
        } else {
          return targetPtr->event(arg__1);
        }
      }();
}

// tag=1050
// eventFilter(QObject * watched, QEvent * event)
bool c_QLineEdit__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                             void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLineEdit_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->eventFilter_nocallback(watched, event);
        } else {
          return targetPtr->eventFilter(watched, event);
        }
      }();
}

// tag=1050
// focusNextPrevChild(bool next)
bool c_QLineEdit__focusNextPrevChild_bool(void *thisObj, bool next) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
}

// tag=1050
// hasAcceptableInput() const
bool c_QLineEdit__hasAcceptableInput(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->hasAcceptableInput();
}

// tag=1050
// hasFrame() const
bool c_QLineEdit__hasFrame(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->hasFrame();
}

// tag=1050
// hasHeightForWidth() const
bool c_QLineEdit__hasHeightForWidth(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLineEdit_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->hasHeightForWidth_nocallback();
        } else {
          return targetPtr->hasHeightForWidth();
        }
      }();
}

// tag=1050
// hasSelectedText() const
bool c_QLineEdit__hasSelectedText(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->hasSelectedText();
}

// tag=1050
// heightForWidth(int arg__1) const
int c_QLineEdit__heightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLineEdit_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->heightForWidth_nocallback(arg__1);
        } else {
          return targetPtr->heightForWidth(arg__1);
        }
      }();
}

// tag=1050
// home(bool mark)
void c_QLineEdit__home_bool(void *thisObj, bool mark) {
  // tag=1010
  fromPtr(thisObj)->home(mark);
}

// tag=1050
// initPainter(QPainter * painter) const
void c_QLineEdit__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}

// tag=1050
// inputMask() const
void *c_QLineEdit__inputMask(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->inputMask()};
}

// tag=1050
// inputRejected()
void c_QLineEdit__inputRejected(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->inputRejected();
}

// tag=1079
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

// tag=1050
// insert(const QString & arg__1)
void c_QLineEdit__insert_QString(void *thisObj, const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  // tag=1010
  fromPtr(thisObj)->insert(arg__1);
}

// tag=1050
// isClearButtonEnabled() const
bool c_QLineEdit__isClearButtonEnabled(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isClearButtonEnabled();
}

// tag=1050
// isModified() const
bool c_QLineEdit__isModified(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isModified();
}

// tag=1050
// isReadOnly() const
bool c_QLineEdit__isReadOnly(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isReadOnly();
}

// tag=1050
// isRedoAvailable() const
bool c_QLineEdit__isRedoAvailable(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isRedoAvailable();
}

// tag=1050
// isUndoAvailable() const
bool c_QLineEdit__isUndoAvailable(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isUndoAvailable();
}

// tag=1050
// leaveEvent(QEvent * event)
void c_QLineEdit__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}

// tag=1050
// maxLength() const
int c_QLineEdit__maxLength(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->maxLength();
}

// tag=1050
// minimumSizeHint() const
void *c_QLineEdit__minimumSizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLineEdit_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->minimumSizeHint_nocallback();
        } else {
          return targetPtr->minimumSizeHint();
        }
      }()};
}

// tag=1050
// mouseDoubleClickEvent(QMouseEvent * arg__1)
void c_QLineEdit__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                    void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(arg__1);
}

// tag=1050
// mouseMoveEvent(QMouseEvent * arg__1)
void c_QLineEdit__mouseMoveEvent_QMouseEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(arg__1);
}

// tag=1050
// mousePressEvent(QMouseEvent * arg__1)
void c_QLineEdit__mousePressEvent_QMouseEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(arg__1);
}

// tag=1050
// mouseReleaseEvent(QMouseEvent * arg__1)
void c_QLineEdit__mouseReleaseEvent_QMouseEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(arg__1);
}

// tag=1050
// paintEvent(QPaintEvent * arg__1)
void c_QLineEdit__paintEvent_QPaintEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QPaintEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->paintEvent_nocallback(arg__1);
}

// tag=1050
// paste()
void c_QLineEdit__paste(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->paste();
}

// tag=1050
// placeholderText() const
void *c_QLineEdit__placeholderText(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->placeholderText()};
}

// tag=1050
// redo()
void c_QLineEdit__redo(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->redo();
}

// tag=1050
// returnPressed()
void c_QLineEdit__returnPressed(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->returnPressed();
}

// tag=1079
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

// tag=1050
// selectAll()
void c_QLineEdit__selectAll(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->selectAll();
}

// tag=1050
// selectedText() const
void *c_QLineEdit__selectedText(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->selectedText()};
}

// tag=1050
// selectionChanged()
void c_QLineEdit__selectionChanged(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->selectionChanged();
}

// tag=1079
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

// tag=1050
// selectionEnd() const
int c_QLineEdit__selectionEnd(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->selectionEnd();
}

// tag=1050
// selectionLength() const
int c_QLineEdit__selectionLength(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->selectionLength();
}

// tag=1050
// selectionStart() const
int c_QLineEdit__selectionStart(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->selectionStart();
}

// tag=1050
// setClearButtonEnabled(bool enable)
void c_QLineEdit__setClearButtonEnabled_bool(void *thisObj, bool enable) {
  // tag=1010
  fromPtr(thisObj)->setClearButtonEnabled(enable);
}

// tag=1050
// setCursorPosition(int arg__1)
void c_QLineEdit__setCursorPosition_int(void *thisObj, int arg__1) {
  // tag=1010
  fromPtr(thisObj)->setCursorPosition(arg__1);
}

// tag=1050
// setDragEnabled(bool b)
void c_QLineEdit__setDragEnabled_bool(void *thisObj, bool b) {
  // tag=1010
  fromPtr(thisObj)->setDragEnabled(b);
}

// tag=1050
// setFrame(bool arg__1)
void c_QLineEdit__setFrame_bool(void *thisObj, bool arg__1) {
  // tag=1010
  fromPtr(thisObj)->setFrame(arg__1);
}

// tag=1050
// setInputMask(const QString & inputMask)
void c_QLineEdit__setInputMask_QString(void *thisObj, const char *inputMask_) {
  const auto inputMask = QString::fromUtf8(inputMask_);
  // tag=1010
  fromPtr(thisObj)->setInputMask(inputMask);
}

// tag=1050
// setMaxLength(int arg__1)
void c_QLineEdit__setMaxLength_int(void *thisObj, int arg__1) {
  // tag=1010
  fromPtr(thisObj)->setMaxLength(arg__1);
}

// tag=1050
// setModified(bool arg__1)
void c_QLineEdit__setModified_bool(void *thisObj, bool arg__1) {
  // tag=1010
  fromPtr(thisObj)->setModified(arg__1);
}

// tag=1050
// setPlaceholderText(const QString & arg__1)
void c_QLineEdit__setPlaceholderText_QString(void *thisObj,
                                             const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setPlaceholderText(arg__1);
}

// tag=1050
// setReadOnly(bool arg__1)
void c_QLineEdit__setReadOnly_bool(void *thisObj, bool arg__1) {
  // tag=1010
  fromPtr(thisObj)->setReadOnly(arg__1);
}

// tag=1050
// setSelection(int arg__1, int arg__2)
void c_QLineEdit__setSelection_int_int(void *thisObj, int arg__1, int arg__2) {
  // tag=1010
  fromPtr(thisObj)->setSelection(arg__1, arg__2);
}

// tag=1050
// setText(const QString & arg__1)
void c_QLineEdit__setText_QString(void *thisObj, const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setText(arg__1);
}

// tag=1050
// setTextMargins(int left, int top, int right, int bottom)
void c_QLineEdit__setTextMargins_int_int_int_int(void *thisObj, int left,
                                                 int top, int right,
                                                 int bottom) {
  // tag=1010
  fromPtr(thisObj)->setTextMargins(left, top, right, bottom);
}

// tag=1050
// setVisible(bool visible)
void c_QLineEdit__setVisible_bool(void *thisObj, bool visible) {
  // tag=1016
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

// tag=1050
// sharedPainter() const
void *c_QLineEdit__sharedPainter(void *thisObj) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->sharedPainter_nocallback();
}

// tag=1050
// sizeHint() const
void *c_QLineEdit__sizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLineEdit_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->sizeHint_nocallback();
        } else {
          return targetPtr->sizeHint();
        }
      }()};
}

// tag=1050
// text() const
void *c_QLineEdit__text(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->text()};
}

// tag=1050
// textChanged(const QString & arg__1)
void c_QLineEdit__textChanged_QString(void *thisObj, const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  // tag=1010
  fromPtr(thisObj)->textChanged(arg__1);
}

// tag=1079
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

// tag=1050
// textEdited(const QString & arg__1)
void c_QLineEdit__textEdited_QString(void *thisObj, const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  // tag=1010
  fromPtr(thisObj)->textEdited(arg__1);
}

// tag=1079
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

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QLineEdit__tr_char_char_int(const char *s, const char *c,
                                           int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QLineEdit_wrapper::tr(s, c, n)};
}

// tag=1050
// undo()
void c_QLineEdit__undo(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->undo();
}

// tag=1079
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

// tag=1079
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

// tag=1079
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
void c_QLineEdit__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QLineEdit__registerVirtualMethodCallback(void *ptr, void *callback,
                                                int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1124:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLineEdit_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 944:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLineEdit_wrapper::Callback_customEvent>(
        callback);
    break;
  case 1141:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLineEdit_wrapper::Callback_devType>(
        callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLineEdit_wrapper::Callback_event>(callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLineEdit_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1150:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QLineEdit_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1164:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QLineEdit_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 1168:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLineEdit_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 1171:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLineEdit_wrapper::Callback_initPainter>(
        callback);
    break;
  case 1196:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLineEdit_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1216:
    wrapper->m_minimumSizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLineEdit_wrapper::Callback_minimumSizeHint>(
        callback);
    break;
  case 1218:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QLineEdit_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1220:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLineEdit_wrapper::Callback_mouseMoveEvent>(
        callback);
    break;
  case 1221:
    wrapper->m_mousePressEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLineEdit_wrapper::Callback_mousePressEvent>(
        callback);
    break;
  case 1222:
    wrapper->m_mouseReleaseEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QLineEdit_wrapper::
                             Callback_mouseReleaseEvent>(callback);
    break;
  case 1229:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLineEdit_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 1309:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLineEdit_wrapper::Callback_setVisible>(
        callback);
    break;
  case 1318:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLineEdit_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1326:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLineEdit_wrapper::Callback_sizeHint>(
        callback);
    break;
  }
}
}
