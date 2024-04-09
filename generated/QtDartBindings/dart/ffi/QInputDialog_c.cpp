/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QInputDialog_c.h"

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
QInputDialog_wrapper::QInputDialog_wrapper(QWidget *parent)
    : ::QInputDialog(parent) {}
void QInputDialog_wrapper::accept() {
  if (m_acceptCallback) {
    const void *thisPtr = this;
    m_acceptCallback(const_cast<void *>(thisPtr));
  } else {
    ::QInputDialog::accept();
  }
}
void QInputDialog_wrapper::accept_nocallback() { ::QInputDialog::accept(); }
QString QInputDialog_wrapper::cancelButtonText() const {
  return ::QInputDialog::cancelButtonText();
}
void QInputDialog_wrapper::changeEvent(QEvent *arg__1) {
  if (m_changeEventCallback) {
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QInputDialog::changeEvent(arg__1);
  }
}
void QInputDialog_wrapper::changeEvent_nocallback(QEvent *arg__1) {
  ::QInputDialog::changeEvent(arg__1);
}
QList<QString> QInputDialog_wrapper::comboBoxItems() const {
  return ::QInputDialog::comboBoxItems();
}
void QInputDialog_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QInputDialog::customEvent(event);
  }
}
void QInputDialog_wrapper::customEvent_nocallback(QEvent *event) {
  ::QInputDialog::customEvent(event);
}
int QInputDialog_wrapper::devType() const {
  if (m_devTypeCallback) {
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QInputDialog::devType();
  }
}
int QInputDialog_wrapper::devType_nocallback() const {
  return ::QInputDialog::devType();
}
void QInputDialog_wrapper::done(int result) {
  if (m_doneCallback) {
    const void *thisPtr = this;
    m_doneCallback(const_cast<void *>(thisPtr), result);
  } else {
    ::QInputDialog::done(result);
  }
}
void QInputDialog_wrapper::done_nocallback(int result) {
  ::QInputDialog::done(result);
}
int QInputDialog_wrapper::doubleDecimals() const {
  return ::QInputDialog::doubleDecimals();
}
double QInputDialog_wrapper::doubleMaximum() const {
  return ::QInputDialog::doubleMaximum();
}
double QInputDialog_wrapper::doubleMinimum() const {
  return ::QInputDialog::doubleMinimum();
}
double QInputDialog_wrapper::doubleStep() const {
  return ::QInputDialog::doubleStep();
}
double QInputDialog_wrapper::doubleValue() const {
  return ::QInputDialog::doubleValue();
}
void QInputDialog_wrapper::doubleValueChanged(double value) {
  ::QInputDialog::doubleValueChanged(value);
}
void QInputDialog_wrapper::doubleValueSelected(double value) {
  ::QInputDialog::doubleValueSelected(value);
}
bool QInputDialog_wrapper::event(QEvent *event) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    return ::QInputDialog::event(event);
  }
}
bool QInputDialog_wrapper::event_nocallback(QEvent *event) {
  return ::QInputDialog::event(event);
}
bool QInputDialog_wrapper::eventFilter(QObject *arg__1, QEvent *arg__2) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), arg__1, arg__2);
  } else {
    return ::QInputDialog::eventFilter(arg__1, arg__2);
  }
}
bool QInputDialog_wrapper::eventFilter_nocallback(QObject *arg__1,
                                                  QEvent *arg__2) {
  return ::QInputDialog::eventFilter(arg__1, arg__2);
}
int QInputDialog_wrapper::exec() {
  if (m_execCallback) {
    const void *thisPtr = this;
    return m_execCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QInputDialog::exec();
  }
}
int QInputDialog_wrapper::exec_nocallback() { return ::QInputDialog::exec(); }
bool QInputDialog_wrapper::focusNextPrevChild(bool next) {
  if (m_focusNextPrevChildCallback) {
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    return ::QInputDialog::focusNextPrevChild(next);
  }
}
bool QInputDialog_wrapper::focusNextPrevChild_nocallback(bool next) {
  return ::QInputDialog::focusNextPrevChild(next);
}
QString QInputDialog_wrapper::getText(QWidget *parent, const QString &title,
                                      const QString &label) {
  return ::QInputDialog::getText(parent, title, label);
}
bool QInputDialog_wrapper::hasHeightForWidth() const {
  if (m_hasHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QInputDialog::hasHeightForWidth();
  }
}
bool QInputDialog_wrapper::hasHeightForWidth_nocallback() const {
  return ::QInputDialog::hasHeightForWidth();
}
int QInputDialog_wrapper::heightForWidth(int arg__1) const {
  if (m_heightForWidthCallback) {
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QInputDialog::heightForWidth(arg__1);
  }
}
int QInputDialog_wrapper::heightForWidth_nocallback(int arg__1) const {
  return ::QInputDialog::heightForWidth(arg__1);
}
void QInputDialog_wrapper::initPainter(QPainter *painter) const {
  if (m_initPainterCallback) {
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    ::QInputDialog::initPainter(painter);
  }
}
void QInputDialog_wrapper::initPainter_nocallback(QPainter *painter) const {
  ::QInputDialog::initPainter(painter);
}
int QInputDialog_wrapper::intMaximum() const {
  return ::QInputDialog::intMaximum();
}
int QInputDialog_wrapper::intMinimum() const {
  return ::QInputDialog::intMinimum();
}
int QInputDialog_wrapper::intStep() const { return ::QInputDialog::intStep(); }
int QInputDialog_wrapper::intValue() const {
  return ::QInputDialog::intValue();
}
void QInputDialog_wrapper::intValueChanged(int value) {
  ::QInputDialog::intValueChanged(value);
}
void QInputDialog_wrapper::intValueSelected(int value) {
  ::QInputDialog::intValueSelected(value);
}
bool QInputDialog_wrapper::isComboBoxEditable() const {
  return ::QInputDialog::isComboBoxEditable();
}
QString QInputDialog_wrapper::labelText() const {
  return ::QInputDialog::labelText();
}
void QInputDialog_wrapper::leaveEvent(QEvent *event) {
  if (m_leaveEventCallback) {
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QInputDialog::leaveEvent(event);
  }
}
void QInputDialog_wrapper::leaveEvent_nocallback(QEvent *event) {
  ::QInputDialog::leaveEvent(event);
}
QSize QInputDialog_wrapper::minimumSizeHint() const {
  if (m_minimumSizeHintCallback) {
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QInputDialog::minimumSizeHint();
  }
}
QSize QInputDialog_wrapper::minimumSizeHint_nocallback() const {
  return ::QInputDialog::minimumSizeHint();
}
void QInputDialog_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  if (m_mouseDoubleClickEventCallback) {
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QInputDialog::mouseDoubleClickEvent(event);
  }
}
void QInputDialog_wrapper::mouseDoubleClickEvent_nocallback(
    QMouseEvent *event) {
  ::QInputDialog::mouseDoubleClickEvent(event);
}
void QInputDialog_wrapper::mouseMoveEvent(QMouseEvent *event) {
  if (m_mouseMoveEventCallback) {
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QInputDialog::mouseMoveEvent(event);
  }
}
void QInputDialog_wrapper::mouseMoveEvent_nocallback(QMouseEvent *event) {
  ::QInputDialog::mouseMoveEvent(event);
}
void QInputDialog_wrapper::mousePressEvent(QMouseEvent *event) {
  if (m_mousePressEventCallback) {
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QInputDialog::mousePressEvent(event);
  }
}
void QInputDialog_wrapper::mousePressEvent_nocallback(QMouseEvent *event) {
  ::QInputDialog::mousePressEvent(event);
}
void QInputDialog_wrapper::mouseReleaseEvent(QMouseEvent *event) {
  if (m_mouseReleaseEventCallback) {
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QInputDialog::mouseReleaseEvent(event);
  }
}
void QInputDialog_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *event) {
  ::QInputDialog::mouseReleaseEvent(event);
}
QString QInputDialog_wrapper::okButtonText() const {
  return ::QInputDialog::okButtonText();
}
void QInputDialog_wrapper::open() {
  if (m_openCallback) {
    const void *thisPtr = this;
    m_openCallback(const_cast<void *>(thisPtr));
  } else {
    ::QInputDialog::open();
  }
}
void QInputDialog_wrapper::open_nocallback() { ::QInputDialog::open(); }
void QInputDialog_wrapper::paintEvent(QPaintEvent *event) {
  if (m_paintEventCallback) {
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QInputDialog::paintEvent(event);
  }
}
void QInputDialog_wrapper::paintEvent_nocallback(QPaintEvent *event) {
  ::QInputDialog::paintEvent(event);
}
void QInputDialog_wrapper::reject() {
  if (m_rejectCallback) {
    const void *thisPtr = this;
    m_rejectCallback(const_cast<void *>(thisPtr));
  } else {
    ::QInputDialog::reject();
  }
}
void QInputDialog_wrapper::reject_nocallback() { ::QInputDialog::reject(); }
void QInputDialog_wrapper::setCancelButtonText(const QString &text) {
  ::QInputDialog::setCancelButtonText(text);
}
void QInputDialog_wrapper::setComboBoxEditable(bool editable) {
  ::QInputDialog::setComboBoxEditable(editable);
}
void QInputDialog_wrapper::setComboBoxItems(const QList<QString> &items) {
  ::QInputDialog::setComboBoxItems(items);
}
void QInputDialog_wrapper::setDoubleDecimals(int decimals) {
  ::QInputDialog::setDoubleDecimals(decimals);
}
void QInputDialog_wrapper::setDoubleMaximum(double max) {
  ::QInputDialog::setDoubleMaximum(max);
}
void QInputDialog_wrapper::setDoubleMinimum(double min) {
  ::QInputDialog::setDoubleMinimum(min);
}
void QInputDialog_wrapper::setDoubleRange(double min, double max) {
  ::QInputDialog::setDoubleRange(min, max);
}
void QInputDialog_wrapper::setDoubleStep(double step) {
  ::QInputDialog::setDoubleStep(step);
}
void QInputDialog_wrapper::setDoubleValue(double value) {
  ::QInputDialog::setDoubleValue(value);
}
void QInputDialog_wrapper::setIntMaximum(int max) {
  ::QInputDialog::setIntMaximum(max);
}
void QInputDialog_wrapper::setIntMinimum(int min) {
  ::QInputDialog::setIntMinimum(min);
}
void QInputDialog_wrapper::setIntRange(int min, int max) {
  ::QInputDialog::setIntRange(min, max);
}
void QInputDialog_wrapper::setIntStep(int step) {
  ::QInputDialog::setIntStep(step);
}
void QInputDialog_wrapper::setIntValue(int value) {
  ::QInputDialog::setIntValue(value);
}
void QInputDialog_wrapper::setLabelText(const QString &text) {
  ::QInputDialog::setLabelText(text);
}
void QInputDialog_wrapper::setOkButtonText(const QString &text) {
  ::QInputDialog::setOkButtonText(text);
}
void QInputDialog_wrapper::setTextValue(const QString &text) {
  ::QInputDialog::setTextValue(text);
}
void QInputDialog_wrapper::setVisible(bool visible) {
  if (m_setVisibleCallback) {
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    ::QInputDialog::setVisible(visible);
  }
}
void QInputDialog_wrapper::setVisible_nocallback(bool visible) {
  ::QInputDialog::setVisible(visible);
}
QPainter *QInputDialog_wrapper::sharedPainter() const {
  if (m_sharedPainterCallback) {
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QInputDialog::sharedPainter();
  }
}
QPainter *QInputDialog_wrapper::sharedPainter_nocallback() const {
  return ::QInputDialog::sharedPainter();
}
QSize QInputDialog_wrapper::sizeHint() const {
  if (m_sizeHintCallback) {
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QInputDialog::sizeHint();
  }
}
QSize QInputDialog_wrapper::sizeHint_nocallback() const {
  return ::QInputDialog::sizeHint();
}
QString QInputDialog_wrapper::textValue() const {
  return ::QInputDialog::textValue();
}
void QInputDialog_wrapper::textValueChanged(const QString &text) {
  ::QInputDialog::textValueChanged(text);
}
void QInputDialog_wrapper::textValueSelected(const QString &text) {
  ::QInputDialog::textValueSelected(text);
}
QString QInputDialog_wrapper::tr(const char *s, const char *c, int n) {
  return ::QInputDialog::tr(s, c, n);
}
QInputDialog_wrapper::~QInputDialog_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QInputDialog *fromPtr(void *ptr) {
  return reinterpret_cast<QInputDialog *>(ptr);
}
static QtDartBindings_wrappersNS::QInputDialog_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper *>(
      ptr);
}
extern "C" {
void c_QInputDialog_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper *>(
      cppObj);
}
void *c_QInputDialog__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QInputDialog_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
// accept()
void c_QInputDialog__accept(void *thisObj) {
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
// cancelButtonText() const
void *c_QInputDialog__cancelButtonText(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      fromPtr(thisObj)->cancelButtonText()};
  return result;
}
// changeEvent(QEvent * arg__1)
void c_QInputDialog__changeEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->changeEvent_nocallback(arg__1);
}
// comboBoxItems() const
void *c_QInputDialog__comboBoxItems(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QString>>{
      fromPtr(thisObj)->comboBoxItems()};
  return result;
}
// customEvent(QEvent * event)
void c_QInputDialog__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// devType() const
int c_QInputDialog__devType(void *thisObj) {
  const auto &result = [&] {
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
  return result;
}
// done(int result)
void c_QInputDialog__done_int(void *thisObj, int result) {
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
// doubleDecimals() const
int c_QInputDialog__doubleDecimals(void *thisObj) {
  const auto &result = fromPtr(thisObj)->doubleDecimals();
  return result;
}
// doubleMaximum() const
double c_QInputDialog__doubleMaximum(void *thisObj) {
  const auto &result = fromPtr(thisObj)->doubleMaximum();
  return result;
}
// doubleMinimum() const
double c_QInputDialog__doubleMinimum(void *thisObj) {
  const auto &result = fromPtr(thisObj)->doubleMinimum();
  return result;
}
// doubleStep() const
double c_QInputDialog__doubleStep(void *thisObj) {
  const auto &result = fromPtr(thisObj)->doubleStep();
  return result;
}
// doubleValue() const
double c_QInputDialog__doubleValue(void *thisObj) {
  const auto &result = fromPtr(thisObj)->doubleValue();
  return result;
}
// doubleValueChanged(double value)
void c_QInputDialog__doubleValueChanged_double(void *thisObj, double value) {
  fromPtr(thisObj)->doubleValueChanged(value);
}
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
// doubleValueSelected(double value)
void c_QInputDialog__doubleValueSelected_double(void *thisObj, double value) {
  fromPtr(thisObj)->doubleValueSelected(value);
}
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
// event(QEvent * event)
bool c_QInputDialog__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = fromWrapperPtr(thisObj)->event_nocallback(event);
  return result;
}
// eventFilter(QObject * arg__1, QEvent * arg__2)
bool c_QInputDialog__eventFilter_QObject_QEvent(void *thisObj, void *arg__1_,
                                                void *arg__2_) {
  auto arg__1 = reinterpret_cast<QObject *>(arg__1_);
  auto arg__2 = reinterpret_cast<QEvent *>(arg__2_);
  const auto &result =
      fromWrapperPtr(thisObj)->eventFilter_nocallback(arg__1, arg__2);
  return result;
}
// exec()
int c_QInputDialog__exec(void *thisObj) {
  const auto &result = [&] {
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
  return result;
}
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
// focusNextPrevChild(bool next)
bool c_QInputDialog__focusNextPrevChild_bool(void *thisObj, bool next) {
  const auto &result =
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
  return result;
}
// getText(QWidget * parent, const QString & title, const QString & label)
void *c_static_QInputDialog__getText_QWidget_QString_QString(
    void *parent_, const char *title_, const char *label_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  const auto title = QString::fromUtf8(title_);
  const auto label = QString::fromUtf8(label_);
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QInputDialog_wrapper::getText(parent, title,
                                                               label)};
  free((char *)title_);
  free((char *)label_);
  return result;
}
// hasHeightForWidth() const
bool c_QInputDialog__hasHeightForWidth(void *thisObj) {
  const auto &result = [&] {
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
  return result;
}
// heightForWidth(int arg__1) const
int c_QInputDialog__heightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
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
  return result;
}
// initPainter(QPainter * painter) const
void c_QInputDialog__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}
// intMaximum() const
int c_QInputDialog__intMaximum(void *thisObj) {
  const auto &result = fromPtr(thisObj)->intMaximum();
  return result;
}
// intMinimum() const
int c_QInputDialog__intMinimum(void *thisObj) {
  const auto &result = fromPtr(thisObj)->intMinimum();
  return result;
}
// intStep() const
int c_QInputDialog__intStep(void *thisObj) {
  const auto &result = fromPtr(thisObj)->intStep();
  return result;
}
// intValue() const
int c_QInputDialog__intValue(void *thisObj) {
  const auto &result = fromPtr(thisObj)->intValue();
  return result;
}
// intValueChanged(int value)
void c_QInputDialog__intValueChanged_int(void *thisObj, int value) {
  fromPtr(thisObj)->intValueChanged(value);
}
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
// intValueSelected(int value)
void c_QInputDialog__intValueSelected_int(void *thisObj, int value) {
  fromPtr(thisObj)->intValueSelected(value);
}
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
// isComboBoxEditable() const
bool c_QInputDialog__isComboBoxEditable(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isComboBoxEditable();
  return result;
}
// labelText() const
void *c_QInputDialog__labelText(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->labelText()};
  return result;
}
// leaveEvent(QEvent * event)
void c_QInputDialog__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}
// minimumSizeHint() const
void *c_QInputDialog__minimumSizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
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
  return result;
}
// mouseDoubleClickEvent(QMouseEvent * event)
void c_QInputDialog__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                       void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}
// mouseMoveEvent(QMouseEvent * event)
void c_QInputDialog__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(event);
}
// mousePressEvent(QMouseEvent * event)
void c_QInputDialog__mousePressEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(event);
}
// mouseReleaseEvent(QMouseEvent * event)
void c_QInputDialog__mouseReleaseEvent_QMouseEvent(void *thisObj,
                                                   void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(event);
}
// okButtonText() const
void *c_QInputDialog__okButtonText(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->okButtonText()};
  return result;
}
// open()
void c_QInputDialog__open(void *thisObj) {
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
// paintEvent(QPaintEvent * event)
void c_QInputDialog__paintEvent_QPaintEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QPaintEvent *>(event_);
  fromWrapperPtr(thisObj)->paintEvent_nocallback(event);
}
// reject()
void c_QInputDialog__reject(void *thisObj) {
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
// setCancelButtonText(const QString & text)
void c_QInputDialog__setCancelButtonText_QString(void *thisObj,
                                                 const char *text_) {
  const auto text = QString::fromUtf8(text_);
  fromPtr(thisObj)->setCancelButtonText(text);
  free((char *)text_);
}
// setComboBoxEditable(bool editable)
void c_QInputDialog__setComboBoxEditable_bool(void *thisObj, bool editable) {
  fromPtr(thisObj)->setComboBoxEditable(editable);
}
// setComboBoxItems(const QList<QString > & items)
void c_QInputDialog__setComboBoxItems_QList_QString(void *thisObj,
                                                    void *items_) {
  assert(items_);
  auto &items = *reinterpret_cast<QList<QString> *>(items_);
  fromPtr(thisObj)->setComboBoxItems(items);
}
// setDoubleDecimals(int decimals)
void c_QInputDialog__setDoubleDecimals_int(void *thisObj, int decimals) {
  fromPtr(thisObj)->setDoubleDecimals(decimals);
}
// setDoubleMaximum(double max)
void c_QInputDialog__setDoubleMaximum_double(void *thisObj, double max) {
  fromPtr(thisObj)->setDoubleMaximum(max);
}
// setDoubleMinimum(double min)
void c_QInputDialog__setDoubleMinimum_double(void *thisObj, double min) {
  fromPtr(thisObj)->setDoubleMinimum(min);
}
// setDoubleRange(double min, double max)
void c_QInputDialog__setDoubleRange_double_double(void *thisObj, double min,
                                                  double max) {
  fromPtr(thisObj)->setDoubleRange(min, max);
}
// setDoubleStep(double step)
void c_QInputDialog__setDoubleStep_double(void *thisObj, double step) {
  fromPtr(thisObj)->setDoubleStep(step);
}
// setDoubleValue(double value)
void c_QInputDialog__setDoubleValue_double(void *thisObj, double value) {
  fromPtr(thisObj)->setDoubleValue(value);
}
// setIntMaximum(int max)
void c_QInputDialog__setIntMaximum_int(void *thisObj, int max) {
  fromPtr(thisObj)->setIntMaximum(max);
}
// setIntMinimum(int min)
void c_QInputDialog__setIntMinimum_int(void *thisObj, int min) {
  fromPtr(thisObj)->setIntMinimum(min);
}
// setIntRange(int min, int max)
void c_QInputDialog__setIntRange_int_int(void *thisObj, int min, int max) {
  fromPtr(thisObj)->setIntRange(min, max);
}
// setIntStep(int step)
void c_QInputDialog__setIntStep_int(void *thisObj, int step) {
  fromPtr(thisObj)->setIntStep(step);
}
// setIntValue(int value)
void c_QInputDialog__setIntValue_int(void *thisObj, int value) {
  fromPtr(thisObj)->setIntValue(value);
}
// setLabelText(const QString & text)
void c_QInputDialog__setLabelText_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  fromPtr(thisObj)->setLabelText(text);
  free((char *)text_);
}
// setOkButtonText(const QString & text)
void c_QInputDialog__setOkButtonText_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  fromPtr(thisObj)->setOkButtonText(text);
  free((char *)text_);
}
// setTextValue(const QString & text)
void c_QInputDialog__setTextValue_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  fromPtr(thisObj)->setTextValue(text);
  free((char *)text_);
}
// setVisible(bool visible)
void c_QInputDialog__setVisible_bool(void *thisObj, bool visible) {
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
// sharedPainter() const
void *c_QInputDialog__sharedPainter(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->sharedPainter_nocallback();
  return result;
}
// sizeHint() const
void *c_QInputDialog__sizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
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
  return result;
}
// textValue() const
void *c_QInputDialog__textValue(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->textValue()};
  return result;
}
// textValueChanged(const QString & text)
void c_QInputDialog__textValueChanged_QString(void *thisObj,
                                              const char *text_) {
  const auto text = QString::fromUtf8(text_);
  fromPtr(thisObj)->textValueChanged(text);
  free((char *)text_);
}
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
// textValueSelected(const QString & text)
void c_QInputDialog__textValueSelected_QString(void *thisObj,
                                               const char *text_) {
  const auto text = QString::fromUtf8(text_);
  fromPtr(thisObj)->textValueSelected(text);
  free((char *)text_);
}
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
// tr(const char * s, const char * c, int n)
void *c_static_QInputDialog__tr_char_char_int(const char *s, const char *c,
                                              int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QInputDialog_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
void c_QInputDialog__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QInputDialog__registerVirtualMethodCallback(void *ptr, void *callback,
                                                   int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 4235:
    wrapper->m_acceptCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputDialog_wrapper::Callback_accept>(
        callback);
    break;
  case 1128:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputDialog_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputDialog_wrapper::Callback_customEvent>(
        callback);
    break;
  case 1145:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputDialog_wrapper::Callback_devType>(
        callback);
    break;
  case 4270:
    wrapper->m_doneCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputDialog_wrapper::Callback_done>(
        callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputDialog_wrapper::Callback_event>(
        callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputDialog_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 4272:
    wrapper->m_execCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputDialog_wrapper::Callback_exec>(
        callback);
    break;
  case 1155:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1169:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 1173:
    wrapper->m_heightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper::
                             Callback_heightForWidth>(callback);
    break;
  case 1176:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputDialog_wrapper::Callback_initPainter>(
        callback);
    break;
  case 1202:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputDialog_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1222:
    wrapper->m_minimumSizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper::
                             Callback_minimumSizeHint>(callback);
    break;
  case 1224:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1226:
    wrapper->m_mouseMoveEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper::
                             Callback_mouseMoveEvent>(callback);
    break;
  case 1227:
    wrapper->m_mousePressEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper::
                             Callback_mousePressEvent>(callback);
    break;
  case 1228:
    wrapper->m_mouseReleaseEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper::
                             Callback_mouseReleaseEvent>(callback);
    break;
  case 4339:
    wrapper->m_openCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputDialog_wrapper::Callback_open>(
        callback);
    break;
  case 1235:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputDialog_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 4346:
    wrapper->m_rejectCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputDialog_wrapper::Callback_reject>(
        callback);
    break;
  case 1314:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputDialog_wrapper::Callback_setVisible>(
        callback);
    break;
  case 1323:
    wrapper->m_sharedPainterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QInputDialog_wrapper::
                             Callback_sharedPainter>(callback);
    break;
  case 1331:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QInputDialog_wrapper::Callback_sizeHint>(
        callback);
    break;
  }
}
}
