#include "QInputDialog_wrapper.h"

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
QInputDialog_wrapper::QInputDialog_wrapper(QWidget *parent)
    : ::QInputDialog(parent) {}
void QInputDialog_wrapper::accept() {
  // tag=1000
  if (m_acceptCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_acceptCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QInputDialog::accept();
  }
}
// tag=1009
void QInputDialog_wrapper::accept_nocallback() {
  // tag=1003
  ::QInputDialog::accept();
}
QString QInputDialog_wrapper::cancelButtonText() const {
  // tag=1000

  // tag=1004
  return ::QInputDialog::cancelButtonText();
}
void QInputDialog_wrapper::changeEvent(QEvent *arg__1) {
  // tag=1000
  if (m_changeEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QInputDialog::changeEvent(arg__1);
  }
}
// tag=1009
void QInputDialog_wrapper::changeEvent_nocallback(QEvent *arg__1) {
  // tag=1003
  ::QInputDialog::changeEvent(arg__1);
}
QList<QString> QInputDialog_wrapper::comboBoxItems() const {
  // tag=1000

  // tag=1004
  return ::QInputDialog::comboBoxItems();
}
void QInputDialog_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QInputDialog::customEvent(event);
  }
}
// tag=1009
void QInputDialog_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QInputDialog::customEvent(event);
}
int QInputDialog_wrapper::devType() const {
  // tag=1000
  if (m_devTypeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QInputDialog::devType();
  }
}
// tag=1009
int QInputDialog_wrapper::devType_nocallback() const {
  // tag=1003
  return ::QInputDialog::devType();
}
void QInputDialog_wrapper::done(int result) {
  // tag=1000
  if (m_doneCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_doneCallback(const_cast<void *>(thisPtr), result);
  } else {
    // tag=1002
    ::QInputDialog::done(result);
  }
}
// tag=1009
void QInputDialog_wrapper::done_nocallback(int result) {
  // tag=1003
  ::QInputDialog::done(result);
}
int QInputDialog_wrapper::doubleDecimals() const {
  // tag=1000

  // tag=1004
  return ::QInputDialog::doubleDecimals();
}
double QInputDialog_wrapper::doubleMaximum() const {
  // tag=1000

  // tag=1004
  return ::QInputDialog::doubleMaximum();
}
double QInputDialog_wrapper::doubleMinimum() const {
  // tag=1000

  // tag=1004
  return ::QInputDialog::doubleMinimum();
}
double QInputDialog_wrapper::doubleStep() const {
  // tag=1000

  // tag=1004
  return ::QInputDialog::doubleStep();
}
double QInputDialog_wrapper::doubleValue() const {
  // tag=1000

  // tag=1004
  return ::QInputDialog::doubleValue();
}
void QInputDialog_wrapper::doubleValueChanged(double value) {
  // tag=1000

  // tag=1004
  ::QInputDialog::doubleValueChanged(value);
}
void QInputDialog_wrapper::doubleValueSelected(double value) {
  // tag=1000

  // tag=1004
  ::QInputDialog::doubleValueSelected(value);
}
bool QInputDialog_wrapper::event(QEvent *event) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    return ::QInputDialog::event(event);
  }
}
// tag=1009
bool QInputDialog_wrapper::event_nocallback(QEvent *event) {
  // tag=1003
  return ::QInputDialog::event(event);
}
bool QInputDialog_wrapper::eventFilter(QObject *arg__1, QEvent *arg__2) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), arg__1, arg__2);
  } else {
    // tag=1002
    return ::QInputDialog::eventFilter(arg__1, arg__2);
  }
}
// tag=1009
bool QInputDialog_wrapper::eventFilter_nocallback(QObject *arg__1,
                                                  QEvent *arg__2) {
  // tag=1003
  return ::QInputDialog::eventFilter(arg__1, arg__2);
}
int QInputDialog_wrapper::exec() {
  // tag=1000
  if (m_execCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_execCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QInputDialog::exec();
  }
}
// tag=1009
int QInputDialog_wrapper::exec_nocallback() {
  // tag=1003
  return ::QInputDialog::exec();
}
bool QInputDialog_wrapper::focusNextPrevChild(bool next) {
  // tag=1000
  if (m_focusNextPrevChildCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    // tag=1002
    return ::QInputDialog::focusNextPrevChild(next);
  }
}
// tag=1009
bool QInputDialog_wrapper::focusNextPrevChild_nocallback(bool next) {
  // tag=1003
  return ::QInputDialog::focusNextPrevChild(next);
}
QString QInputDialog_wrapper::getText(QWidget *parent, const QString &title,
                                      const QString &label) {
  // tag=1000

  // tag=1004
  return ::QInputDialog::getText(parent, title, label);
}
bool QInputDialog_wrapper::hasHeightForWidth() const {
  // tag=1000
  if (m_hasHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QInputDialog::hasHeightForWidth();
  }
}
// tag=1009
bool QInputDialog_wrapper::hasHeightForWidth_nocallback() const {
  // tag=1003
  return ::QInputDialog::hasHeightForWidth();
}
int QInputDialog_wrapper::heightForWidth(int arg__1) const {
  // tag=1000
  if (m_heightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QInputDialog::heightForWidth(arg__1);
  }
}
// tag=1009
int QInputDialog_wrapper::heightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QInputDialog::heightForWidth(arg__1);
}
void QInputDialog_wrapper::initPainter(QPainter *painter) const {
  // tag=1000
  if (m_initPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    // tag=1002
    ::QInputDialog::initPainter(painter);
  }
}
// tag=1009
void QInputDialog_wrapper::initPainter_nocallback(QPainter *painter) const {
  // tag=1003
  ::QInputDialog::initPainter(painter);
}
int QInputDialog_wrapper::intMaximum() const {
  // tag=1000

  // tag=1004
  return ::QInputDialog::intMaximum();
}
int QInputDialog_wrapper::intMinimum() const {
  // tag=1000

  // tag=1004
  return ::QInputDialog::intMinimum();
}
int QInputDialog_wrapper::intStep() const {
  // tag=1000

  // tag=1004
  return ::QInputDialog::intStep();
}
int QInputDialog_wrapper::intValue() const {
  // tag=1000

  // tag=1004
  return ::QInputDialog::intValue();
}
void QInputDialog_wrapper::intValueChanged(int value) {
  // tag=1000

  // tag=1004
  ::QInputDialog::intValueChanged(value);
}
void QInputDialog_wrapper::intValueSelected(int value) {
  // tag=1000

  // tag=1004
  ::QInputDialog::intValueSelected(value);
}
bool QInputDialog_wrapper::isComboBoxEditable() const {
  // tag=1000

  // tag=1004
  return ::QInputDialog::isComboBoxEditable();
}
QString QInputDialog_wrapper::labelText() const {
  // tag=1000

  // tag=1004
  return ::QInputDialog::labelText();
}
void QInputDialog_wrapper::leaveEvent(QEvent *event) {
  // tag=1000
  if (m_leaveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QInputDialog::leaveEvent(event);
  }
}
// tag=1009
void QInputDialog_wrapper::leaveEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QInputDialog::leaveEvent(event);
}
QSize QInputDialog_wrapper::minimumSizeHint() const {
  // tag=1000
  if (m_minimumSizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QInputDialog::minimumSizeHint();
  }
}
// tag=1009
QSize QInputDialog_wrapper::minimumSizeHint_nocallback() const {
  // tag=1003
  return ::QInputDialog::minimumSizeHint();
}
void QInputDialog_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseDoubleClickEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QInputDialog::mouseDoubleClickEvent(event);
  }
}
// tag=1009
void QInputDialog_wrapper::mouseDoubleClickEvent_nocallback(
    QMouseEvent *event) {
  // tag=1003
  ::QInputDialog::mouseDoubleClickEvent(event);
}
void QInputDialog_wrapper::mouseMoveEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseMoveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QInputDialog::mouseMoveEvent(event);
  }
}
// tag=1009
void QInputDialog_wrapper::mouseMoveEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QInputDialog::mouseMoveEvent(event);
}
void QInputDialog_wrapper::mousePressEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mousePressEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QInputDialog::mousePressEvent(event);
  }
}
// tag=1009
void QInputDialog_wrapper::mousePressEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QInputDialog::mousePressEvent(event);
}
void QInputDialog_wrapper::mouseReleaseEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseReleaseEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QInputDialog::mouseReleaseEvent(event);
  }
}
// tag=1009
void QInputDialog_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QInputDialog::mouseReleaseEvent(event);
}
QString QInputDialog_wrapper::okButtonText() const {
  // tag=1000

  // tag=1004
  return ::QInputDialog::okButtonText();
}
void QInputDialog_wrapper::open() {
  // tag=1000
  if (m_openCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_openCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QInputDialog::open();
  }
}
// tag=1009
void QInputDialog_wrapper::open_nocallback() {
  // tag=1003
  ::QInputDialog::open();
}
void QInputDialog_wrapper::paintEvent(QPaintEvent *event) {
  // tag=1000
  if (m_paintEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QInputDialog::paintEvent(event);
  }
}
// tag=1009
void QInputDialog_wrapper::paintEvent_nocallback(QPaintEvent *event) {
  // tag=1003
  ::QInputDialog::paintEvent(event);
}
void QInputDialog_wrapper::reject() {
  // tag=1000
  if (m_rejectCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_rejectCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QInputDialog::reject();
  }
}
// tag=1009
void QInputDialog_wrapper::reject_nocallback() {
  // tag=1003
  ::QInputDialog::reject();
}
void QInputDialog_wrapper::setCancelButtonText(const QString &text) {
  // tag=1000

  // tag=1004
  ::QInputDialog::setCancelButtonText(text);
}
void QInputDialog_wrapper::setComboBoxEditable(bool editable) {
  // tag=1000

  // tag=1004
  ::QInputDialog::setComboBoxEditable(editable);
}
void QInputDialog_wrapper::setComboBoxItems(const QList<QString> &items) {
  // tag=1000

  // tag=1004
  ::QInputDialog::setComboBoxItems(items);
}
void QInputDialog_wrapper::setDoubleDecimals(int decimals) {
  // tag=1000

  // tag=1004
  ::QInputDialog::setDoubleDecimals(decimals);
}
void QInputDialog_wrapper::setDoubleMaximum(double max) {
  // tag=1000

  // tag=1004
  ::QInputDialog::setDoubleMaximum(max);
}
void QInputDialog_wrapper::setDoubleMinimum(double min) {
  // tag=1000

  // tag=1004
  ::QInputDialog::setDoubleMinimum(min);
}
void QInputDialog_wrapper::setDoubleRange(double min, double max) {
  // tag=1000

  // tag=1004
  ::QInputDialog::setDoubleRange(min, max);
}
void QInputDialog_wrapper::setDoubleStep(double step) {
  // tag=1000

  // tag=1004
  ::QInputDialog::setDoubleStep(step);
}
void QInputDialog_wrapper::setDoubleValue(double value) {
  // tag=1000

  // tag=1004
  ::QInputDialog::setDoubleValue(value);
}
void QInputDialog_wrapper::setIntMaximum(int max) {
  // tag=1000

  // tag=1004
  ::QInputDialog::setIntMaximum(max);
}
void QInputDialog_wrapper::setIntMinimum(int min) {
  // tag=1000

  // tag=1004
  ::QInputDialog::setIntMinimum(min);
}
void QInputDialog_wrapper::setIntRange(int min, int max) {
  // tag=1000

  // tag=1004
  ::QInputDialog::setIntRange(min, max);
}
void QInputDialog_wrapper::setIntStep(int step) {
  // tag=1000

  // tag=1004
  ::QInputDialog::setIntStep(step);
}
void QInputDialog_wrapper::setIntValue(int value) {
  // tag=1000

  // tag=1004
  ::QInputDialog::setIntValue(value);
}
void QInputDialog_wrapper::setLabelText(const QString &text) {
  // tag=1000

  // tag=1004
  ::QInputDialog::setLabelText(text);
}
void QInputDialog_wrapper::setOkButtonText(const QString &text) {
  // tag=1000

  // tag=1004
  ::QInputDialog::setOkButtonText(text);
}
void QInputDialog_wrapper::setTextValue(const QString &text) {
  // tag=1000

  // tag=1004
  ::QInputDialog::setTextValue(text);
}
void QInputDialog_wrapper::setVisible(bool visible) {
  // tag=1000
  if (m_setVisibleCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    // tag=1002
    ::QInputDialog::setVisible(visible);
  }
}
// tag=1009
void QInputDialog_wrapper::setVisible_nocallback(bool visible) {
  // tag=1003
  ::QInputDialog::setVisible(visible);
}
QPainter *QInputDialog_wrapper::sharedPainter() const {
  // tag=1000
  if (m_sharedPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QInputDialog::sharedPainter();
  }
}
// tag=1009
QPainter *QInputDialog_wrapper::sharedPainter_nocallback() const {
  // tag=1003
  return ::QInputDialog::sharedPainter();
}
QSize QInputDialog_wrapper::sizeHint() const {
  // tag=1000
  if (m_sizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QInputDialog::sizeHint();
  }
}
// tag=1009
QSize QInputDialog_wrapper::sizeHint_nocallback() const {
  // tag=1003
  return ::QInputDialog::sizeHint();
}
QString QInputDialog_wrapper::textValue() const {
  // tag=1000

  // tag=1004
  return ::QInputDialog::textValue();
}
void QInputDialog_wrapper::textValueChanged(const QString &text) {
  // tag=1000

  // tag=1004
  ::QInputDialog::textValueChanged(text);
}
void QInputDialog_wrapper::textValueSelected(const QString &text) {
  // tag=1000

  // tag=1004
  ::QInputDialog::textValueSelected(text);
}
QString QInputDialog_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QInputDialog::tr(s, c, n);
}

// tag=1005
QInputDialog_wrapper::~QInputDialog_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QInputDialog *fromPtr(void *ptr) {
  return reinterpret_cast<QInputDialog *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QInputDialog_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper *>(
      ptr);
}
extern "C" {

// tag=1049
void c_QInputDialog_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper *>(
      cppObj);
}
void *c_QInputDialog__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QInputDialog_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// accept()
void c_QInputDialog__accept(void *thisObj) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->accept_nocallback();
    } else {
      return targetPtr->accept();
    }
  }();
}

// tag=1079
void c_QInputDialog__onAccepted(void *thisObj, void *contextQObject,
                                void *callback) {
  auto instance = reinterpret_cast<QInputDialog *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QInputDialog::accepted,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// cancelButtonText() const
void *c_QInputDialog__cancelButtonText(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          fromPtr(thisObj)->cancelButtonText()};
}

// tag=1050
// changeEvent(QEvent * arg__1)
void c_QInputDialog__changeEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->changeEvent_nocallback(arg__1);
}

// tag=1050
// comboBoxItems() const
void *c_QInputDialog__comboBoxItems(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QString>>{
          fromPtr(thisObj)->comboBoxItems()};
}

// tag=1050
// customEvent(QEvent * event)
void c_QInputDialog__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// devType() const
int c_QInputDialog__devType(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->devType_nocallback();
        } else {
          return targetPtr->devType();
        }
      }();
}

// tag=1050
// done(int result)
void c_QInputDialog__done_int(void *thisObj, int result) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->done_nocallback(result);
    } else {
      return targetPtr->done(result);
    }
  }();
}

// tag=1050
// doubleDecimals() const
int c_QInputDialog__doubleDecimals(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->doubleDecimals();
}

// tag=1050
// doubleMaximum() const
double c_QInputDialog__doubleMaximum(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->doubleMaximum();
}

// tag=1050
// doubleMinimum() const
double c_QInputDialog__doubleMinimum(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->doubleMinimum();
}

// tag=1050
// doubleStep() const
double c_QInputDialog__doubleStep(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->doubleStep();
}

// tag=1050
// doubleValue() const
double c_QInputDialog__doubleValue(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->doubleValue();
}

// tag=1050
// doubleValueChanged(double value)
void c_QInputDialog__doubleValueChanged_double(void *thisObj, double value) {
  // tag=1010
  fromPtr(thisObj)->doubleValueChanged(value);
}

// tag=1079
void c_QInputDialog__onDoubleValueChanged_double(void *thisObj,
                                                 void *contextQObject,
                                                 void *callback) {
  auto instance = reinterpret_cast<QInputDialog *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QInputDialog::doubleValueChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// doubleValueSelected(double value)
void c_QInputDialog__doubleValueSelected_double(void *thisObj, double value) {
  // tag=1010
  fromPtr(thisObj)->doubleValueSelected(value);
}

// tag=1079
void c_QInputDialog__onDoubleValueSelected_double(void *thisObj,
                                                  void *contextQObject,
                                                  void *callback) {
  auto instance = reinterpret_cast<QInputDialog *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QInputDialog::doubleValueSelected,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// event(QEvent * event)
bool c_QInputDialog__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->event_nocallback(event);
}

// tag=1050
// eventFilter(QObject * arg__1, QEvent * arg__2)
bool c_QInputDialog__eventFilter_QObject_QEvent(void *thisObj, void *arg__1_,
                                                void *arg__2_) {
  auto arg__1 = reinterpret_cast<QObject *>(arg__1_);
  auto arg__2 = reinterpret_cast<QEvent *>(arg__2_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->eventFilter_nocallback(arg__1, arg__2);
}

// tag=1050
// exec()
int c_QInputDialog__exec(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->exec_nocallback();
        } else {
          return targetPtr->exec();
        }
      }();
}

// tag=1079
void c_QInputDialog__onFinished_int(void *thisObj, void *contextQObject,
                                    void *callback) {
  auto instance = reinterpret_cast<QInputDialog *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QInputDialog::finished,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// focusNextPrevChild(bool next)
bool c_QInputDialog__focusNextPrevChild_bool(void *thisObj, bool next) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
}

// tag=1050
// getText(QWidget * parent, const QString & title, const QString & label)
void *c_static_QInputDialog__getText_QWidget_QString_QString(
    void *parent_, const char *title_, const char *label_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  const auto title = QString::fromUtf8(title_);
  const auto label = QString::fromUtf8(label_);
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QInputDialog_wrapper::getText(
              parent, title, label)};
}

// tag=1050
// hasHeightForWidth() const
bool c_QInputDialog__hasHeightForWidth(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper *>(
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
int c_QInputDialog__heightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper *>(
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
void c_QInputDialog__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}

// tag=1050
// intMaximum() const
int c_QInputDialog__intMaximum(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->intMaximum();
}

// tag=1050
// intMinimum() const
int c_QInputDialog__intMinimum(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->intMinimum();
}

// tag=1050
// intStep() const
int c_QInputDialog__intStep(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->intStep();
}

// tag=1050
// intValue() const
int c_QInputDialog__intValue(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->intValue();
}

// tag=1050
// intValueChanged(int value)
void c_QInputDialog__intValueChanged_int(void *thisObj, int value) {
  // tag=1010
  fromPtr(thisObj)->intValueChanged(value);
}

// tag=1079
void c_QInputDialog__onIntValueChanged_int(void *thisObj, void *contextQObject,
                                           void *callback) {
  auto instance = reinterpret_cast<QInputDialog *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QInputDialog::intValueChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// intValueSelected(int value)
void c_QInputDialog__intValueSelected_int(void *thisObj, int value) {
  // tag=1010
  fromPtr(thisObj)->intValueSelected(value);
}

// tag=1079
void c_QInputDialog__onIntValueSelected_int(void *thisObj, void *contextQObject,
                                            void *callback) {
  auto instance = reinterpret_cast<QInputDialog *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QInputDialog::intValueSelected,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// isComboBoxEditable() const
bool c_QInputDialog__isComboBoxEditable(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isComboBoxEditable();
}

// tag=1050
// labelText() const
void *c_QInputDialog__labelText(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->labelText()};
}

// tag=1050
// leaveEvent(QEvent * event)
void c_QInputDialog__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}

// tag=1050
// minimumSizeHint() const
void *c_QInputDialog__minimumSizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->minimumSizeHint_nocallback();
        } else {
          return targetPtr->minimumSizeHint();
        }
      }()};
}

// tag=1050
// mouseDoubleClickEvent(QMouseEvent * event)
void c_QInputDialog__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                       void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}

// tag=1050
// mouseMoveEvent(QMouseEvent * event)
void c_QInputDialog__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(event);
}

// tag=1050
// mousePressEvent(QMouseEvent * event)
void c_QInputDialog__mousePressEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(event);
}

// tag=1050
// mouseReleaseEvent(QMouseEvent * event)
void c_QInputDialog__mouseReleaseEvent_QMouseEvent(void *thisObj,
                                                   void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(event);
}

// tag=1050
// okButtonText() const
void *c_QInputDialog__okButtonText(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->okButtonText()};
}

// tag=1050
// open()
void c_QInputDialog__open(void *thisObj) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->open_nocallback();
    } else {
      return targetPtr->open();
    }
  }();
}

// tag=1050
// paintEvent(QPaintEvent * event)
void c_QInputDialog__paintEvent_QPaintEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QPaintEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->paintEvent_nocallback(event);
}

// tag=1050
// reject()
void c_QInputDialog__reject(void *thisObj) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->reject_nocallback();
    } else {
      return targetPtr->reject();
    }
  }();
}

// tag=1079
void c_QInputDialog__onRejected(void *thisObj, void *contextQObject,
                                void *callback) {
  auto instance = reinterpret_cast<QInputDialog *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QInputDialog::rejected,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// setCancelButtonText(const QString & text)
void c_QInputDialog__setCancelButtonText_QString(void *thisObj,
                                                 const char *text_) {
  const auto text = QString::fromUtf8(text_);
  // tag=1010
  fromPtr(thisObj)->setCancelButtonText(text);
}

// tag=1050
// setComboBoxEditable(bool editable)
void c_QInputDialog__setComboBoxEditable_bool(void *thisObj, bool editable) {
  // tag=1010
  fromPtr(thisObj)->setComboBoxEditable(editable);
}

// tag=1050
// setComboBoxItems(const QList<QString > & items)
void c_QInputDialog__setComboBoxItems_QList_QString(void *thisObj,
                                                    void *items_) {
  auto &items = *reinterpret_cast<QList<QString> *>(items_);
  // tag=1010
  fromPtr(thisObj)->setComboBoxItems(items);
}

// tag=1050
// setDoubleDecimals(int decimals)
void c_QInputDialog__setDoubleDecimals_int(void *thisObj, int decimals) {
  // tag=1010
  fromPtr(thisObj)->setDoubleDecimals(decimals);
}

// tag=1050
// setDoubleMaximum(double max)
void c_QInputDialog__setDoubleMaximum_double(void *thisObj, double max) {
  // tag=1010
  fromPtr(thisObj)->setDoubleMaximum(max);
}

// tag=1050
// setDoubleMinimum(double min)
void c_QInputDialog__setDoubleMinimum_double(void *thisObj, double min) {
  // tag=1010
  fromPtr(thisObj)->setDoubleMinimum(min);
}

// tag=1050
// setDoubleRange(double min, double max)
void c_QInputDialog__setDoubleRange_double_double(void *thisObj, double min,
                                                  double max) {
  // tag=1010
  fromPtr(thisObj)->setDoubleRange(min, max);
}

// tag=1050
// setDoubleStep(double step)
void c_QInputDialog__setDoubleStep_double(void *thisObj, double step) {
  // tag=1010
  fromPtr(thisObj)->setDoubleStep(step);
}

// tag=1050
// setDoubleValue(double value)
void c_QInputDialog__setDoubleValue_double(void *thisObj, double value) {
  // tag=1010
  fromPtr(thisObj)->setDoubleValue(value);
}

// tag=1050
// setIntMaximum(int max)
void c_QInputDialog__setIntMaximum_int(void *thisObj, int max) {
  // tag=1010
  fromPtr(thisObj)->setIntMaximum(max);
}

// tag=1050
// setIntMinimum(int min)
void c_QInputDialog__setIntMinimum_int(void *thisObj, int min) {
  // tag=1010
  fromPtr(thisObj)->setIntMinimum(min);
}

// tag=1050
// setIntRange(int min, int max)
void c_QInputDialog__setIntRange_int_int(void *thisObj, int min, int max) {
  // tag=1010
  fromPtr(thisObj)->setIntRange(min, max);
}

// tag=1050
// setIntStep(int step)
void c_QInputDialog__setIntStep_int(void *thisObj, int step) {
  // tag=1010
  fromPtr(thisObj)->setIntStep(step);
}

// tag=1050
// setIntValue(int value)
void c_QInputDialog__setIntValue_int(void *thisObj, int value) {
  // tag=1010
  fromPtr(thisObj)->setIntValue(value);
}

// tag=1050
// setLabelText(const QString & text)
void c_QInputDialog__setLabelText_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  // tag=1010
  fromPtr(thisObj)->setLabelText(text);
}

// tag=1050
// setOkButtonText(const QString & text)
void c_QInputDialog__setOkButtonText_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  // tag=1010
  fromPtr(thisObj)->setOkButtonText(text);
}

// tag=1050
// setTextValue(const QString & text)
void c_QInputDialog__setTextValue_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  // tag=1010
  fromPtr(thisObj)->setTextValue(text);
}

// tag=1050
// setVisible(bool visible)
void c_QInputDialog__setVisible_bool(void *thisObj, bool visible) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}

// tag=1050
// sharedPainter() const
void *c_QInputDialog__sharedPainter(void *thisObj) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->sharedPainter_nocallback();
}

// tag=1050
// sizeHint() const
void *c_QInputDialog__sizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->sizeHint_nocallback();
        } else {
          return targetPtr->sizeHint();
        }
      }()};
}

// tag=1050
// textValue() const
void *c_QInputDialog__textValue(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->textValue()};
}

// tag=1050
// textValueChanged(const QString & text)
void c_QInputDialog__textValueChanged_QString(void *thisObj,
                                              const char *text_) {
  const auto text = QString::fromUtf8(text_);
  // tag=1010
  fromPtr(thisObj)->textValueChanged(text);
}

// tag=1079
void c_QInputDialog__onTextValueChanged_QString(void *thisObj,
                                                void *contextQObject,
                                                void *callback) {
  auto instance = reinterpret_cast<QInputDialog *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QInputDialog::textValueChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// textValueSelected(const QString & text)
void c_QInputDialog__textValueSelected_QString(void *thisObj,
                                               const char *text_) {
  const auto text = QString::fromUtf8(text_);
  // tag=1010
  fromPtr(thisObj)->textValueSelected(text);
}

// tag=1079
void c_QInputDialog__onTextValueSelected_QString(void *thisObj,
                                                 void *contextQObject,
                                                 void *callback) {
  auto instance = reinterpret_cast<QInputDialog *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QInputDialog::textValueSelected,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QInputDialog__tr_char_char_int(const char *s, const char *c,
                                              int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QInputDialog_wrapper::tr(s, c, n)};
}
void c_QInputDialog__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QInputDialog__registerVirtualMethodCallback(void *ptr, void *callback,
                                                   int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 4218:
    wrapper->m_acceptCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputDialog_wrapper::Callback_accept>(
        callback);
    break;
  case 1124:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputDialog_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 944:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputDialog_wrapper::Callback_customEvent>(
        callback);
    break;
  case 1141:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputDialog_wrapper::Callback_devType>(
        callback);
    break;
  case 4253:
    wrapper->m_doneCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputDialog_wrapper::Callback_done>(
        callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputDialog_wrapper::Callback_event>(
        callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputDialog_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 4255:
    wrapper->m_execCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputDialog_wrapper::Callback_exec>(
        callback);
    break;
  case 1150:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1164:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 1168:
    wrapper->m_heightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper::
                             Callback_heightForWidth>(callback);
    break;
  case 1171:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputDialog_wrapper::Callback_initPainter>(
        callback);
    break;
  case 1196:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputDialog_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1216:
    wrapper->m_minimumSizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper::
                             Callback_minimumSizeHint>(callback);
    break;
  case 1218:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1220:
    wrapper->m_mouseMoveEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper::
                             Callback_mouseMoveEvent>(callback);
    break;
  case 1221:
    wrapper->m_mousePressEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper::
                             Callback_mousePressEvent>(callback);
    break;
  case 1222:
    wrapper->m_mouseReleaseEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper::
                             Callback_mouseReleaseEvent>(callback);
    break;
  case 4322:
    wrapper->m_openCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputDialog_wrapper::Callback_open>(
        callback);
    break;
  case 1229:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputDialog_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 4329:
    wrapper->m_rejectCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputDialog_wrapper::Callback_reject>(
        callback);
    break;
  case 1309:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputDialog_wrapper::Callback_setVisible>(
        callback);
    break;
  case 1318:
    wrapper->m_sharedPainterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper::
                             Callback_sharedPainter>(callback);
    break;
  case 1326:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputDialog_wrapper::Callback_sizeHint>(
        callback);
    break;
  }
}
}
