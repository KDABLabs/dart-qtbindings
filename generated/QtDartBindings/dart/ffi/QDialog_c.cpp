/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QDialog_c.h"

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
QDialog_wrapper::QDialog_wrapper(QWidget *parent) : ::QDialog(parent) {}
void QDialog_wrapper::accept() {
  if (m_acceptCallback) {
    const void *thisPtr = this;
    m_acceptCallback(const_cast<void *>(thisPtr));
  } else {
    ::QDialog::accept();
  }
}
void QDialog_wrapper::accept_nocallback() { ::QDialog::accept(); }
void QDialog_wrapper::accepted() { ::QDialog::accepted(); }
void QDialog_wrapper::adjustPosition(QWidget *arg__1) {
  ::QDialog::adjustPosition(arg__1);
}
void QDialog_wrapper::changeEvent(QEvent *arg__1) {
  if (m_changeEventCallback) {
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QDialog::changeEvent(arg__1);
  }
}
void QDialog_wrapper::changeEvent_nocallback(QEvent *arg__1) {
  ::QDialog::changeEvent(arg__1);
}
void QDialog_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QDialog::customEvent(event);
  }
}
void QDialog_wrapper::customEvent_nocallback(QEvent *event) {
  ::QDialog::customEvent(event);
}
int QDialog_wrapper::devType() const {
  if (m_devTypeCallback) {
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QDialog::devType();
  }
}
int QDialog_wrapper::devType_nocallback() const { return ::QDialog::devType(); }
void QDialog_wrapper::done(int arg__1) {
  if (m_doneCallback) {
    const void *thisPtr = this;
    m_doneCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QDialog::done(arg__1);
  }
}
void QDialog_wrapper::done_nocallback(int arg__1) { ::QDialog::done(arg__1); }
bool QDialog_wrapper::event(QEvent *event) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    return ::QDialog::event(event);
  }
}
bool QDialog_wrapper::event_nocallback(QEvent *event) {
  return ::QDialog::event(event);
}
bool QDialog_wrapper::eventFilter(QObject *arg__1, QEvent *arg__2) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), arg__1, arg__2);
  } else {
    return ::QDialog::eventFilter(arg__1, arg__2);
  }
}
bool QDialog_wrapper::eventFilter_nocallback(QObject *arg__1, QEvent *arg__2) {
  return ::QDialog::eventFilter(arg__1, arg__2);
}
int QDialog_wrapper::exec() {
  if (m_execCallback) {
    const void *thisPtr = this;
    return m_execCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QDialog::exec();
  }
}
int QDialog_wrapper::exec_nocallback() { return ::QDialog::exec(); }
void QDialog_wrapper::finished(int result) { ::QDialog::finished(result); }
bool QDialog_wrapper::focusNextPrevChild(bool next) {
  if (m_focusNextPrevChildCallback) {
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    return ::QDialog::focusNextPrevChild(next);
  }
}
bool QDialog_wrapper::focusNextPrevChild_nocallback(bool next) {
  return ::QDialog::focusNextPrevChild(next);
}
bool QDialog_wrapper::hasHeightForWidth() const {
  if (m_hasHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QDialog::hasHeightForWidth();
  }
}
bool QDialog_wrapper::hasHeightForWidth_nocallback() const {
  return ::QDialog::hasHeightForWidth();
}
int QDialog_wrapper::heightForWidth(int arg__1) const {
  if (m_heightForWidthCallback) {
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QDialog::heightForWidth(arg__1);
  }
}
int QDialog_wrapper::heightForWidth_nocallback(int arg__1) const {
  return ::QDialog::heightForWidth(arg__1);
}
void QDialog_wrapper::initPainter(QPainter *painter) const {
  if (m_initPainterCallback) {
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    ::QDialog::initPainter(painter);
  }
}
void QDialog_wrapper::initPainter_nocallback(QPainter *painter) const {
  ::QDialog::initPainter(painter);
}
bool QDialog_wrapper::isSizeGripEnabled() const {
  return ::QDialog::isSizeGripEnabled();
}
void QDialog_wrapper::leaveEvent(QEvent *event) {
  if (m_leaveEventCallback) {
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QDialog::leaveEvent(event);
  }
}
void QDialog_wrapper::leaveEvent_nocallback(QEvent *event) {
  ::QDialog::leaveEvent(event);
}
QSize QDialog_wrapper::minimumSizeHint() const {
  if (m_minimumSizeHintCallback) {
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QDialog::minimumSizeHint();
  }
}
QSize QDialog_wrapper::minimumSizeHint_nocallback() const {
  return ::QDialog::minimumSizeHint();
}
void QDialog_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  if (m_mouseDoubleClickEventCallback) {
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QDialog::mouseDoubleClickEvent(event);
  }
}
void QDialog_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *event) {
  ::QDialog::mouseDoubleClickEvent(event);
}
void QDialog_wrapper::mouseMoveEvent(QMouseEvent *event) {
  if (m_mouseMoveEventCallback) {
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QDialog::mouseMoveEvent(event);
  }
}
void QDialog_wrapper::mouseMoveEvent_nocallback(QMouseEvent *event) {
  ::QDialog::mouseMoveEvent(event);
}
void QDialog_wrapper::mousePressEvent(QMouseEvent *event) {
  if (m_mousePressEventCallback) {
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QDialog::mousePressEvent(event);
  }
}
void QDialog_wrapper::mousePressEvent_nocallback(QMouseEvent *event) {
  ::QDialog::mousePressEvent(event);
}
void QDialog_wrapper::mouseReleaseEvent(QMouseEvent *event) {
  if (m_mouseReleaseEventCallback) {
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QDialog::mouseReleaseEvent(event);
  }
}
void QDialog_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *event) {
  ::QDialog::mouseReleaseEvent(event);
}
void QDialog_wrapper::open() {
  if (m_openCallback) {
    const void *thisPtr = this;
    m_openCallback(const_cast<void *>(thisPtr));
  } else {
    ::QDialog::open();
  }
}
void QDialog_wrapper::open_nocallback() { ::QDialog::open(); }
void QDialog_wrapper::paintEvent(QPaintEvent *event) {
  if (m_paintEventCallback) {
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QDialog::paintEvent(event);
  }
}
void QDialog_wrapper::paintEvent_nocallback(QPaintEvent *event) {
  ::QDialog::paintEvent(event);
}
void QDialog_wrapper::reject() {
  if (m_rejectCallback) {
    const void *thisPtr = this;
    m_rejectCallback(const_cast<void *>(thisPtr));
  } else {
    ::QDialog::reject();
  }
}
void QDialog_wrapper::reject_nocallback() { ::QDialog::reject(); }
void QDialog_wrapper::rejected() { ::QDialog::rejected(); }
int QDialog_wrapper::result() const { return ::QDialog::result(); }
void QDialog_wrapper::setModal(bool modal) { ::QDialog::setModal(modal); }
void QDialog_wrapper::setResult(int r) { ::QDialog::setResult(r); }
void QDialog_wrapper::setSizeGripEnabled(bool arg__1) {
  ::QDialog::setSizeGripEnabled(arg__1);
}
void QDialog_wrapper::setVisible(bool visible) {
  if (m_setVisibleCallback) {
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    ::QDialog::setVisible(visible);
  }
}
void QDialog_wrapper::setVisible_nocallback(bool visible) {
  ::QDialog::setVisible(visible);
}
QPainter *QDialog_wrapper::sharedPainter() const {
  if (m_sharedPainterCallback) {
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QDialog::sharedPainter();
  }
}
QPainter *QDialog_wrapper::sharedPainter_nocallback() const {
  return ::QDialog::sharedPainter();
}
QSize QDialog_wrapper::sizeHint() const {
  if (m_sizeHintCallback) {
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QDialog::sizeHint();
  }
}
QSize QDialog_wrapper::sizeHint_nocallback() const {
  return ::QDialog::sizeHint();
}
QString QDialog_wrapper::tr(const char *s, const char *c, int n) {
  return ::QDialog::tr(s, c, n);
}
QDialog_wrapper::~QDialog_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QDialog *fromPtr(void *ptr) { return reinterpret_cast<QDialog *>(ptr); }
static QtDartBindings_wrappersNS::QDialog_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QDialog_wrapper *>(ptr);
}
extern "C" {
void c_QDialog_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QDialog_wrapper *>(cppObj);
}
void *c_QDialog__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QDialog_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
// accept()
void c_QDialog__accept(void *thisObj) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QDialog_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->accept_nocallback();
    } else {
      return targetPtr->accept();
    }
  }();
}
// accepted()
void c_QDialog__accepted(void *thisObj) { fromPtr(thisObj)->accepted(); }
void c_QDialog__onAccepted(void *thisObj, void *contextQObject,
                           void *callback) {
  auto instance = reinterpret_cast<QDialog *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QDialog::accepted, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// adjustPosition(QWidget * arg__1)
void c_QDialog__adjustPosition_QWidget(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  fromWrapperPtr(thisObj)->adjustPosition(arg__1);
}
// changeEvent(QEvent * arg__1)
void c_QDialog__changeEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->changeEvent_nocallback(arg__1);
}
void c_QDialog__onCustomContextMenuRequested_QPoint(void *thisObj,
                                                    void *contextQObject,
                                                    void *callback) {
  auto instance = reinterpret_cast<QDialog *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QDialog::customContextMenuRequested,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// customEvent(QEvent * event)
void c_QDialog__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// devType() const
int c_QDialog__devType(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QDialog_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->devType_nocallback();
    } else {
      return targetPtr->devType();
    }
  }();
  return result;
}
// done(int arg__1)
void c_QDialog__done_int(void *thisObj, int arg__1) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QDialog_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->done_nocallback(arg__1);
    } else {
      return targetPtr->done(arg__1);
    }
  }();
}
// event(QEvent * event)
bool c_QDialog__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = fromWrapperPtr(thisObj)->event_nocallback(event);
  return result;
}
// eventFilter(QObject * arg__1, QEvent * arg__2)
bool c_QDialog__eventFilter_QObject_QEvent(void *thisObj, void *arg__1_,
                                           void *arg__2_) {
  auto arg__1 = reinterpret_cast<QObject *>(arg__1_);
  auto arg__2 = reinterpret_cast<QEvent *>(arg__2_);
  const auto &result =
      fromWrapperPtr(thisObj)->eventFilter_nocallback(arg__1, arg__2);
  return result;
}
// exec()
int c_QDialog__exec(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QDialog_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->exec_nocallback();
    } else {
      return targetPtr->exec();
    }
  }();
  return result;
}
// finished(int result)
void c_QDialog__finished_int(void *thisObj, int result) {
  fromPtr(thisObj)->finished(result);
}
void c_QDialog__onFinished_int(void *thisObj, void *contextQObject,
                               void *callback) {
  auto instance = reinterpret_cast<QDialog *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QDialog::finished, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// focusNextPrevChild(bool next)
bool c_QDialog__focusNextPrevChild_bool(void *thisObj, bool next) {
  const auto &result =
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
  return result;
}
// hasHeightForWidth() const
bool c_QDialog__hasHeightForWidth(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QDialog_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->hasHeightForWidth_nocallback();
    } else {
      return targetPtr->hasHeightForWidth();
    }
  }();
  return result;
}
// heightForWidth(int arg__1) const
int c_QDialog__heightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QDialog_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->heightForWidth_nocallback(arg__1);
    } else {
      return targetPtr->heightForWidth(arg__1);
    }
  }();
  return result;
}
// initPainter(QPainter * painter) const
void c_QDialog__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}
// isSizeGripEnabled() const
bool c_QDialog__isSizeGripEnabled(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isSizeGripEnabled();
  return result;
}
// leaveEvent(QEvent * event)
void c_QDialog__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}
// minimumSizeHint() const
void *c_QDialog__minimumSizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QDialog_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->minimumSizeHint_nocallback();
    } else {
      return targetPtr->minimumSizeHint();
    }
  }()};
  return result;
}
// mouseDoubleClickEvent(QMouseEvent * event)
void c_QDialog__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}
// mouseMoveEvent(QMouseEvent * event)
void c_QDialog__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(event);
}
// mousePressEvent(QMouseEvent * event)
void c_QDialog__mousePressEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(event);
}
// mouseReleaseEvent(QMouseEvent * event)
void c_QDialog__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(event);
}
// open()
void c_QDialog__open(void *thisObj) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QDialog_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->open_nocallback();
    } else {
      return targetPtr->open();
    }
  }();
}
// paintEvent(QPaintEvent * event)
void c_QDialog__paintEvent_QPaintEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QPaintEvent *>(event_);
  fromWrapperPtr(thisObj)->paintEvent_nocallback(event);
}
// reject()
void c_QDialog__reject(void *thisObj) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QDialog_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->reject_nocallback();
    } else {
      return targetPtr->reject();
    }
  }();
}
// rejected()
void c_QDialog__rejected(void *thisObj) { fromPtr(thisObj)->rejected(); }
void c_QDialog__onRejected(void *thisObj, void *contextQObject,
                           void *callback) {
  auto instance = reinterpret_cast<QDialog *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QDialog::rejected, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// result() const
int c_QDialog__result(void *thisObj) {
  const auto &result = fromPtr(thisObj)->result();
  return result;
}
// setModal(bool modal)
void c_QDialog__setModal_bool(void *thisObj, bool modal) {
  fromPtr(thisObj)->setModal(modal);
}
// setResult(int r)
void c_QDialog__setResult_int(void *thisObj, int r) {
  fromPtr(thisObj)->setResult(r);
}
// setSizeGripEnabled(bool arg__1)
void c_QDialog__setSizeGripEnabled_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->setSizeGripEnabled(arg__1);
}
// setVisible(bool visible)
void c_QDialog__setVisible_bool(void *thisObj, bool visible) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QDialog_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}
// sharedPainter() const
void *c_QDialog__sharedPainter(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->sharedPainter_nocallback();
  return result;
}
// sizeHint() const
void *c_QDialog__sizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QDialog_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->sizeHint_nocallback();
    } else {
      return targetPtr->sizeHint();
    }
  }()};
  return result;
}
// tr(const char * s, const char * c, int n)
void *c_static_QDialog__tr_char_char_int(const char *s, const char *c, int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QDialog_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
void c_QDialog__onWindowIconChanged_QIcon(void *thisObj, void *contextQObject,
                                          void *callback) {
  auto instance = reinterpret_cast<QDialog *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QDialog::windowIconChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QDialog__onWindowIconTextChanged_QString(void *thisObj,
                                                void *contextQObject,
                                                void *callback) {
  auto instance = reinterpret_cast<QDialog *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QDialog::windowIconTextChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QDialog__onWindowTitleChanged_QString(void *thisObj,
                                             void *contextQObject,
                                             void *callback) {
  auto instance = reinterpret_cast<QDialog *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QDialog::windowTitleChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QDialog__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QDialog__registerVirtualMethodCallback(void *ptr, void *callback,
                                              int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 4235:
    wrapper->m_acceptCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_accept>(callback);
    break;
  case 1128:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_customEvent>(
        callback);
    break;
  case 1145:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_devType>(callback);
    break;
  case 4270:
    wrapper->m_doneCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_done>(callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_event>(callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 4272:
    wrapper->m_execCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_exec>(callback);
    break;
  case 1155:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QDialog_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1169:
    wrapper->m_hasHeightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_hasHeightForWidth>(
        callback);
    break;
  case 1173:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 1176:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_initPainter>(
        callback);
    break;
  case 1202:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1222:
    wrapper->m_minimumSizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_minimumSizeHint>(
        callback);
    break;
  case 1224:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QDialog_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1226:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_mouseMoveEvent>(
        callback);
    break;
  case 1227:
    wrapper->m_mousePressEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_mousePressEvent>(
        callback);
    break;
  case 1228:
    wrapper->m_mouseReleaseEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_mouseReleaseEvent>(
        callback);
    break;
  case 4339:
    wrapper->m_openCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_open>(callback);
    break;
  case 1235:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 4346:
    wrapper->m_rejectCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_reject>(callback);
    break;
  case 1314:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_setVisible>(
        callback);
    break;
  case 1323:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1331:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_sizeHint>(
        callback);
    break;
  }
}
}
