/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QStatusBar_c.h"

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
QStatusBar_wrapper::QStatusBar_wrapper(QWidget *parent)
    : ::QStatusBar(parent) {}
void QStatusBar_wrapper::addPermanentWidget(QWidget *widget, int stretch) {
  ::QStatusBar::addPermanentWidget(widget, stretch);
}
void QStatusBar_wrapper::addWidget(QWidget *widget, int stretch) {
  ::QStatusBar::addWidget(widget, stretch);
}
void QStatusBar_wrapper::changeEvent(QEvent *arg__1) {
  if (m_changeEventCallback) {
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QStatusBar::changeEvent(arg__1);
  }
}
void QStatusBar_wrapper::changeEvent_nocallback(QEvent *arg__1) {
  ::QStatusBar::changeEvent(arg__1);
}
void QStatusBar_wrapper::clearMessage() { ::QStatusBar::clearMessage(); }
QString QStatusBar_wrapper::currentMessage() const {
  return ::QStatusBar::currentMessage();
}
void QStatusBar_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QStatusBar::customEvent(event);
  }
}
void QStatusBar_wrapper::customEvent_nocallback(QEvent *event) {
  ::QStatusBar::customEvent(event);
}
int QStatusBar_wrapper::devType() const {
  if (m_devTypeCallback) {
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QStatusBar::devType();
  }
}
int QStatusBar_wrapper::devType_nocallback() const {
  return ::QStatusBar::devType();
}
bool QStatusBar_wrapper::event(QEvent *arg__1) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QStatusBar::event(arg__1);
  }
}
bool QStatusBar_wrapper::event_nocallback(QEvent *arg__1) {
  return ::QStatusBar::event(arg__1);
}
bool QStatusBar_wrapper::eventFilter(QObject *watched, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QStatusBar::eventFilter(watched, event);
  }
}
bool QStatusBar_wrapper::eventFilter_nocallback(QObject *watched,
                                                QEvent *event) {
  return ::QStatusBar::eventFilter(watched, event);
}
bool QStatusBar_wrapper::focusNextPrevChild(bool next) {
  if (m_focusNextPrevChildCallback) {
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    return ::QStatusBar::focusNextPrevChild(next);
  }
}
bool QStatusBar_wrapper::focusNextPrevChild_nocallback(bool next) {
  return ::QStatusBar::focusNextPrevChild(next);
}
bool QStatusBar_wrapper::hasHeightForWidth() const {
  if (m_hasHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QStatusBar::hasHeightForWidth();
  }
}
bool QStatusBar_wrapper::hasHeightForWidth_nocallback() const {
  return ::QStatusBar::hasHeightForWidth();
}
int QStatusBar_wrapper::heightForWidth(int arg__1) const {
  if (m_heightForWidthCallback) {
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QStatusBar::heightForWidth(arg__1);
  }
}
int QStatusBar_wrapper::heightForWidth_nocallback(int arg__1) const {
  return ::QStatusBar::heightForWidth(arg__1);
}
void QStatusBar_wrapper::hideOrShow() { ::QStatusBar::hideOrShow(); }
void QStatusBar_wrapper::initPainter(QPainter *painter) const {
  if (m_initPainterCallback) {
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    ::QStatusBar::initPainter(painter);
  }
}
void QStatusBar_wrapper::initPainter_nocallback(QPainter *painter) const {
  ::QStatusBar::initPainter(painter);
}
int QStatusBar_wrapper::insertPermanentWidget(int index, QWidget *widget,
                                              int stretch) {
  return ::QStatusBar::insertPermanentWidget(index, widget, stretch);
}
int QStatusBar_wrapper::insertWidget(int index, QWidget *widget, int stretch) {
  return ::QStatusBar::insertWidget(index, widget, stretch);
}
bool QStatusBar_wrapper::isSizeGripEnabled() const {
  return ::QStatusBar::isSizeGripEnabled();
}
void QStatusBar_wrapper::leaveEvent(QEvent *event) {
  if (m_leaveEventCallback) {
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QStatusBar::leaveEvent(event);
  }
}
void QStatusBar_wrapper::leaveEvent_nocallback(QEvent *event) {
  ::QStatusBar::leaveEvent(event);
}
void QStatusBar_wrapper::messageChanged(const QString &text) {
  ::QStatusBar::messageChanged(text);
}
QSize QStatusBar_wrapper::minimumSizeHint() const {
  if (m_minimumSizeHintCallback) {
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QStatusBar::minimumSizeHint();
  }
}
QSize QStatusBar_wrapper::minimumSizeHint_nocallback() const {
  return ::QStatusBar::minimumSizeHint();
}
void QStatusBar_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  if (m_mouseDoubleClickEventCallback) {
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QStatusBar::mouseDoubleClickEvent(event);
  }
}
void QStatusBar_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *event) {
  ::QStatusBar::mouseDoubleClickEvent(event);
}
void QStatusBar_wrapper::mouseMoveEvent(QMouseEvent *event) {
  if (m_mouseMoveEventCallback) {
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QStatusBar::mouseMoveEvent(event);
  }
}
void QStatusBar_wrapper::mouseMoveEvent_nocallback(QMouseEvent *event) {
  ::QStatusBar::mouseMoveEvent(event);
}
void QStatusBar_wrapper::mousePressEvent(QMouseEvent *event) {
  if (m_mousePressEventCallback) {
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QStatusBar::mousePressEvent(event);
  }
}
void QStatusBar_wrapper::mousePressEvent_nocallback(QMouseEvent *event) {
  ::QStatusBar::mousePressEvent(event);
}
void QStatusBar_wrapper::mouseReleaseEvent(QMouseEvent *event) {
  if (m_mouseReleaseEventCallback) {
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QStatusBar::mouseReleaseEvent(event);
  }
}
void QStatusBar_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *event) {
  ::QStatusBar::mouseReleaseEvent(event);
}
void QStatusBar_wrapper::paintEvent(QPaintEvent *arg__1) {
  if (m_paintEventCallback) {
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QStatusBar::paintEvent(arg__1);
  }
}
void QStatusBar_wrapper::paintEvent_nocallback(QPaintEvent *arg__1) {
  ::QStatusBar::paintEvent(arg__1);
}
void QStatusBar_wrapper::reformat() { ::QStatusBar::reformat(); }
void QStatusBar_wrapper::removeWidget(QWidget *widget) {
  ::QStatusBar::removeWidget(widget);
}
void QStatusBar_wrapper::setSizeGripEnabled(bool arg__1) {
  ::QStatusBar::setSizeGripEnabled(arg__1);
}
void QStatusBar_wrapper::setVisible(bool visible) {
  if (m_setVisibleCallback) {
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    ::QStatusBar::setVisible(visible);
  }
}
void QStatusBar_wrapper::setVisible_nocallback(bool visible) {
  ::QStatusBar::setVisible(visible);
}
QPainter *QStatusBar_wrapper::sharedPainter() const {
  if (m_sharedPainterCallback) {
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QStatusBar::sharedPainter();
  }
}
QPainter *QStatusBar_wrapper::sharedPainter_nocallback() const {
  return ::QStatusBar::sharedPainter();
}
void QStatusBar_wrapper::showMessage(const QString &text, int timeout) {
  ::QStatusBar::showMessage(text, timeout);
}
QSize QStatusBar_wrapper::sizeHint() const {
  if (m_sizeHintCallback) {
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QStatusBar::sizeHint();
  }
}
QSize QStatusBar_wrapper::sizeHint_nocallback() const {
  return ::QStatusBar::sizeHint();
}
QString QStatusBar_wrapper::tr(const char *s, const char *c, int n) {
  return ::QStatusBar::tr(s, c, n);
}
QStatusBar_wrapper::~QStatusBar_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QStatusBar *fromPtr(void *ptr) {
  return reinterpret_cast<QStatusBar *>(ptr);
}
static QtDartBindings_wrappersNS::QStatusBar_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QStatusBar_wrapper *>(ptr);
}
extern "C" {
void c_QStatusBar_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QStatusBar_wrapper *>(
      cppObj);
}
void *c_QStatusBar__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QStatusBar_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
// addPermanentWidget(QWidget * widget, int stretch)
void c_QStatusBar__addPermanentWidget_QWidget_int(void *thisObj, void *widget_,
                                                  int stretch) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  fromPtr(thisObj)->addPermanentWidget(widget, stretch);
}
// addWidget(QWidget * widget, int stretch)
void c_QStatusBar__addWidget_QWidget_int(void *thisObj, void *widget_,
                                         int stretch) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  fromPtr(thisObj)->addWidget(widget, stretch);
}
// changeEvent(QEvent * arg__1)
void c_QStatusBar__changeEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->changeEvent_nocallback(arg__1);
}
// clearMessage()
void c_QStatusBar__clearMessage(void *thisObj) {
  fromPtr(thisObj)->clearMessage();
}
// currentMessage() const
void *c_QStatusBar__currentMessage(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->currentMessage()};
  return result;
}
void c_QStatusBar__onCustomContextMenuRequested_QPoint(void *thisObj,
                                                       void *contextQObject,
                                                       void *callback) {
  auto instance = reinterpret_cast<QStatusBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QStatusBar::customContextMenuRequested,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// customEvent(QEvent * event)
void c_QStatusBar__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// devType() const
int c_QStatusBar__devType(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStatusBar_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->devType_nocallback();
    } else {
      return targetPtr->devType();
    }
  }();
  return result;
}
// event(QEvent * arg__1)
bool c_QStatusBar__event_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  const auto &result = fromWrapperPtr(thisObj)->event_nocallback(arg__1);
  return result;
}
// eventFilter(QObject * watched, QEvent * event)
bool c_QStatusBar__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                              void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStatusBar_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->eventFilter_nocallback(watched, event);
    } else {
      return targetPtr->eventFilter(watched, event);
    }
  }();
  return result;
}
// focusNextPrevChild(bool next)
bool c_QStatusBar__focusNextPrevChild_bool(void *thisObj, bool next) {
  const auto &result =
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
  return result;
}
// hasHeightForWidth() const
bool c_QStatusBar__hasHeightForWidth(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStatusBar_wrapper *>(
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
int c_QStatusBar__heightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStatusBar_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->heightForWidth_nocallback(arg__1);
    } else {
      return targetPtr->heightForWidth(arg__1);
    }
  }();
  return result;
}
// hideOrShow()
void c_QStatusBar__hideOrShow(void *thisObj) {
  fromWrapperPtr(thisObj)->hideOrShow();
}
// initPainter(QPainter * painter) const
void c_QStatusBar__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}
// insertPermanentWidget(int index, QWidget * widget, int stretch)
int c_QStatusBar__insertPermanentWidget_int_QWidget_int(void *thisObj,
                                                        int index,
                                                        void *widget_,
                                                        int stretch) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  const auto &result =
      fromPtr(thisObj)->insertPermanentWidget(index, widget, stretch);
  return result;
}
// insertWidget(int index, QWidget * widget, int stretch)
int c_QStatusBar__insertWidget_int_QWidget_int(void *thisObj, int index,
                                               void *widget_, int stretch) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  const auto &result = fromPtr(thisObj)->insertWidget(index, widget, stretch);
  return result;
}
// isSizeGripEnabled() const
bool c_QStatusBar__isSizeGripEnabled(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isSizeGripEnabled();
  return result;
}
// leaveEvent(QEvent * event)
void c_QStatusBar__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}
// messageChanged(const QString & text)
void c_QStatusBar__messageChanged_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  fromPtr(thisObj)->messageChanged(text);
  free((char *)text_);
}
void c_QStatusBar__onMessageChanged_QString(void *thisObj, void *contextQObject,
                                            void *callback) {
  auto instance = reinterpret_cast<QStatusBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QStatusBar::messageChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// minimumSizeHint() const
void *c_QStatusBar__minimumSizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStatusBar_wrapper *>(
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
void c_QStatusBar__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                     void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}
// mouseMoveEvent(QMouseEvent * event)
void c_QStatusBar__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(event);
}
// mousePressEvent(QMouseEvent * event)
void c_QStatusBar__mousePressEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(event);
}
// mouseReleaseEvent(QMouseEvent * event)
void c_QStatusBar__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(event);
}
// paintEvent(QPaintEvent * arg__1)
void c_QStatusBar__paintEvent_QPaintEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QPaintEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->paintEvent_nocallback(arg__1);
}
// reformat()
void c_QStatusBar__reformat(void *thisObj) {
  fromWrapperPtr(thisObj)->reformat();
}
// removeWidget(QWidget * widget)
void c_QStatusBar__removeWidget_QWidget(void *thisObj, void *widget_) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  fromPtr(thisObj)->removeWidget(widget);
}
// setSizeGripEnabled(bool arg__1)
void c_QStatusBar__setSizeGripEnabled_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->setSizeGripEnabled(arg__1);
}
// setVisible(bool visible)
void c_QStatusBar__setVisible_bool(void *thisObj, bool visible) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStatusBar_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}
// sharedPainter() const
void *c_QStatusBar__sharedPainter(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->sharedPainter_nocallback();
  return result;
}
// showMessage(const QString & text, int timeout)
void c_QStatusBar__showMessage_QString_int(void *thisObj, const char *text_,
                                           int timeout) {
  const auto text = QString::fromUtf8(text_);
  fromPtr(thisObj)->showMessage(text, timeout);
  free((char *)text_);
}
// sizeHint() const
void *c_QStatusBar__sizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStatusBar_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->sizeHint_nocallback();
    } else {
      return targetPtr->sizeHint();
    }
  }()};
  return result;
}
// tr(const char * s, const char * c, int n)
void *c_static_QStatusBar__tr_char_char_int(const char *s, const char *c,
                                            int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QStatusBar_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
void c_QStatusBar__onWindowIconChanged_QIcon(void *thisObj,
                                             void *contextQObject,
                                             void *callback) {
  auto instance = reinterpret_cast<QStatusBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QStatusBar::windowIconChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QStatusBar__onWindowIconTextChanged_QString(void *thisObj,
                                                   void *contextQObject,
                                                   void *callback) {
  auto instance = reinterpret_cast<QStatusBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QStatusBar::windowIconTextChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QStatusBar__onWindowTitleChanged_QString(void *thisObj,
                                                void *contextQObject,
                                                void *callback) {
  auto instance = reinterpret_cast<QStatusBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QStatusBar::windowTitleChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QStatusBar__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QStatusBar__registerVirtualMethodCallback(void *ptr, void *callback,
                                                 int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1128:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStatusBar_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStatusBar_wrapper::Callback_customEvent>(
        callback);
    break;
  case 1145:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStatusBar_wrapper::Callback_devType>(
        callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStatusBar_wrapper::Callback_event>(
        callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStatusBar_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1155:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStatusBar_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1169:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStatusBar_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 1173:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStatusBar_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 1176:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStatusBar_wrapper::Callback_initPainter>(
        callback);
    break;
  case 1202:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStatusBar_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1222:
    wrapper->m_minimumSizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStatusBar_wrapper::
                             Callback_minimumSizeHint>(callback);
    break;
  case 1224:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStatusBar_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1226:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStatusBar_wrapper::Callback_mouseMoveEvent>(
        callback);
    break;
  case 1227:
    wrapper->m_mousePressEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStatusBar_wrapper::
                             Callback_mousePressEvent>(callback);
    break;
  case 1228:
    wrapper->m_mouseReleaseEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStatusBar_wrapper::
                             Callback_mouseReleaseEvent>(callback);
    break;
  case 1235:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStatusBar_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 1314:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStatusBar_wrapper::Callback_setVisible>(
        callback);
    break;
  case 1323:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStatusBar_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1331:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStatusBar_wrapper::Callback_sizeHint>(
        callback);
    break;
  }
}
}
