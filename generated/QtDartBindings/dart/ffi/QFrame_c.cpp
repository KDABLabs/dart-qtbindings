/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QFrame_c.h"

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
QFrame_wrapper::QFrame_wrapper(QWidget *parent) : ::QFrame(parent) {}
void QFrame_wrapper::changeEvent(QEvent *arg__1) {
  if (m_changeEventCallback) {
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QFrame::changeEvent(arg__1);
  }
}
void QFrame_wrapper::changeEvent_nocallback(QEvent *arg__1) {
  ::QFrame::changeEvent(arg__1);
}
void QFrame_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QFrame::customEvent(event);
  }
}
void QFrame_wrapper::customEvent_nocallback(QEvent *event) {
  ::QFrame::customEvent(event);
}
int QFrame_wrapper::devType() const {
  if (m_devTypeCallback) {
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QFrame::devType();
  }
}
int QFrame_wrapper::devType_nocallback() const { return ::QFrame::devType(); }
void QFrame_wrapper::drawFrame(QPainter *arg__1) {
  ::QFrame::drawFrame(arg__1);
}
bool QFrame_wrapper::event(QEvent *e) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), e);
  } else {
    return ::QFrame::event(e);
  }
}
bool QFrame_wrapper::event_nocallback(QEvent *e) { return ::QFrame::event(e); }
bool QFrame_wrapper::eventFilter(QObject *watched, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QFrame::eventFilter(watched, event);
  }
}
bool QFrame_wrapper::eventFilter_nocallback(QObject *watched, QEvent *event) {
  return ::QFrame::eventFilter(watched, event);
}
bool QFrame_wrapper::focusNextPrevChild(bool next) {
  if (m_focusNextPrevChildCallback) {
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    return ::QFrame::focusNextPrevChild(next);
  }
}
bool QFrame_wrapper::focusNextPrevChild_nocallback(bool next) {
  return ::QFrame::focusNextPrevChild(next);
}
QRect QFrame_wrapper::frameRect() const { return ::QFrame::frameRect(); }
int QFrame_wrapper::frameStyle() const { return ::QFrame::frameStyle(); }
int QFrame_wrapper::frameWidth() const { return ::QFrame::frameWidth(); }
bool QFrame_wrapper::hasHeightForWidth() const {
  if (m_hasHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QFrame::hasHeightForWidth();
  }
}
bool QFrame_wrapper::hasHeightForWidth_nocallback() const {
  return ::QFrame::hasHeightForWidth();
}
int QFrame_wrapper::heightForWidth(int arg__1) const {
  if (m_heightForWidthCallback) {
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QFrame::heightForWidth(arg__1);
  }
}
int QFrame_wrapper::heightForWidth_nocallback(int arg__1) const {
  return ::QFrame::heightForWidth(arg__1);
}
void QFrame_wrapper::initPainter(QPainter *painter) const {
  if (m_initPainterCallback) {
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    ::QFrame::initPainter(painter);
  }
}
void QFrame_wrapper::initPainter_nocallback(QPainter *painter) const {
  ::QFrame::initPainter(painter);
}
void QFrame_wrapper::leaveEvent(QEvent *event) {
  if (m_leaveEventCallback) {
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QFrame::leaveEvent(event);
  }
}
void QFrame_wrapper::leaveEvent_nocallback(QEvent *event) {
  ::QFrame::leaveEvent(event);
}
int QFrame_wrapper::lineWidth() const { return ::QFrame::lineWidth(); }
int QFrame_wrapper::midLineWidth() const { return ::QFrame::midLineWidth(); }
QSize QFrame_wrapper::minimumSizeHint() const {
  if (m_minimumSizeHintCallback) {
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QFrame::minimumSizeHint();
  }
}
QSize QFrame_wrapper::minimumSizeHint_nocallback() const {
  return ::QFrame::minimumSizeHint();
}
void QFrame_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  if (m_mouseDoubleClickEventCallback) {
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QFrame::mouseDoubleClickEvent(event);
  }
}
void QFrame_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *event) {
  ::QFrame::mouseDoubleClickEvent(event);
}
void QFrame_wrapper::mouseMoveEvent(QMouseEvent *event) {
  if (m_mouseMoveEventCallback) {
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QFrame::mouseMoveEvent(event);
  }
}
void QFrame_wrapper::mouseMoveEvent_nocallback(QMouseEvent *event) {
  ::QFrame::mouseMoveEvent(event);
}
void QFrame_wrapper::mousePressEvent(QMouseEvent *event) {
  if (m_mousePressEventCallback) {
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QFrame::mousePressEvent(event);
  }
}
void QFrame_wrapper::mousePressEvent_nocallback(QMouseEvent *event) {
  ::QFrame::mousePressEvent(event);
}
void QFrame_wrapper::mouseReleaseEvent(QMouseEvent *event) {
  if (m_mouseReleaseEventCallback) {
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QFrame::mouseReleaseEvent(event);
  }
}
void QFrame_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *event) {
  ::QFrame::mouseReleaseEvent(event);
}
void QFrame_wrapper::paintEvent(QPaintEvent *arg__1) {
  if (m_paintEventCallback) {
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QFrame::paintEvent(arg__1);
  }
}
void QFrame_wrapper::paintEvent_nocallback(QPaintEvent *arg__1) {
  ::QFrame::paintEvent(arg__1);
}
void QFrame_wrapper::setFrameRect(const QRect &arg__1) {
  ::QFrame::setFrameRect(arg__1);
}
void QFrame_wrapper::setFrameStyle(int arg__1) {
  ::QFrame::setFrameStyle(arg__1);
}
void QFrame_wrapper::setLineWidth(int arg__1) {
  ::QFrame::setLineWidth(arg__1);
}
void QFrame_wrapper::setMidLineWidth(int arg__1) {
  ::QFrame::setMidLineWidth(arg__1);
}
void QFrame_wrapper::setVisible(bool visible) {
  if (m_setVisibleCallback) {
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    ::QFrame::setVisible(visible);
  }
}
void QFrame_wrapper::setVisible_nocallback(bool visible) {
  ::QFrame::setVisible(visible);
}
QPainter *QFrame_wrapper::sharedPainter() const {
  if (m_sharedPainterCallback) {
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QFrame::sharedPainter();
  }
}
QPainter *QFrame_wrapper::sharedPainter_nocallback() const {
  return ::QFrame::sharedPainter();
}
QSize QFrame_wrapper::sizeHint() const {
  if (m_sizeHintCallback) {
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QFrame::sizeHint();
  }
}
QSize QFrame_wrapper::sizeHint_nocallback() const {
  return ::QFrame::sizeHint();
}
QString QFrame_wrapper::tr(const char *s, const char *c, int n) {
  return ::QFrame::tr(s, c, n);
}
QFrame_wrapper::~QFrame_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QFrame *fromPtr(void *ptr) { return reinterpret_cast<QFrame *>(ptr); }
static QtDartBindings_wrappersNS::QFrame_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QFrame_wrapper *>(ptr);
}
extern "C" {
void c_QFrame_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QFrame_wrapper *>(cppObj);
}
void *c_QFrame__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QFrame_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
// changeEvent(QEvent * arg__1)
void c_QFrame__changeEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->changeEvent_nocallback(arg__1);
}
void c_QFrame__onCustomContextMenuRequested_QPoint(void *thisObj,
                                                   void *contextQObject,
                                                   void *callback) {
  auto instance = reinterpret_cast<QFrame *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QFrame::customContextMenuRequested,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// customEvent(QEvent * event)
void c_QFrame__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// devType() const
int c_QFrame__devType(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFrame_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->devType_nocallback();
    } else {
      return targetPtr->devType();
    }
  }();
  return result;
}
// drawFrame(QPainter * arg__1)
void c_QFrame__drawFrame_QPainter(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QPainter *>(arg__1_);
  fromWrapperPtr(thisObj)->drawFrame(arg__1);
}
// event(QEvent * e)
bool c_QFrame__event_QEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QEvent *>(e_);
  const auto &result = fromWrapperPtr(thisObj)->event_nocallback(e);
  return result;
}
// eventFilter(QObject * watched, QEvent * event)
bool c_QFrame__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                          void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFrame_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->eventFilter_nocallback(watched, event);
    } else {
      return targetPtr->eventFilter(watched, event);
    }
  }();
  return result;
}
// focusNextPrevChild(bool next)
bool c_QFrame__focusNextPrevChild_bool(void *thisObj, bool next) {
  const auto &result =
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
  return result;
}
// frameRect() const
void *c_QFrame__frameRect(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->frameRect()};
  return result;
}
// frameStyle() const
int c_QFrame__frameStyle(void *thisObj) {
  const auto &result = fromPtr(thisObj)->frameStyle();
  return result;
}
// frameWidth() const
int c_QFrame__frameWidth(void *thisObj) {
  const auto &result = fromPtr(thisObj)->frameWidth();
  return result;
}
// hasHeightForWidth() const
bool c_QFrame__hasHeightForWidth(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFrame_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->hasHeightForWidth_nocallback();
    } else {
      return targetPtr->hasHeightForWidth();
    }
  }();
  return result;
}
// heightForWidth(int arg__1) const
int c_QFrame__heightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFrame_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->heightForWidth_nocallback(arg__1);
    } else {
      return targetPtr->heightForWidth(arg__1);
    }
  }();
  return result;
}
// initPainter(QPainter * painter) const
void c_QFrame__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}
// leaveEvent(QEvent * event)
void c_QFrame__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}
// lineWidth() const
int c_QFrame__lineWidth(void *thisObj) {
  const auto &result = fromPtr(thisObj)->lineWidth();
  return result;
}
// midLineWidth() const
int c_QFrame__midLineWidth(void *thisObj) {
  const auto &result = fromPtr(thisObj)->midLineWidth();
  return result;
}
// minimumSizeHint() const
void *c_QFrame__minimumSizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFrame_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->minimumSizeHint_nocallback();
    } else {
      return targetPtr->minimumSizeHint();
    }
  }()};
  return result;
}
// mouseDoubleClickEvent(QMouseEvent * event)
void c_QFrame__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}
// mouseMoveEvent(QMouseEvent * event)
void c_QFrame__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(event);
}
// mousePressEvent(QMouseEvent * event)
void c_QFrame__mousePressEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(event);
}
// mouseReleaseEvent(QMouseEvent * event)
void c_QFrame__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(event);
}
// paintEvent(QPaintEvent * arg__1)
void c_QFrame__paintEvent_QPaintEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QPaintEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->paintEvent_nocallback(arg__1);
}
// setFrameRect(const QRect & arg__1)
void c_QFrame__setFrameRect_QRect(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  fromPtr(thisObj)->setFrameRect(arg__1);
}
// setFrameStyle(int arg__1)
void c_QFrame__setFrameStyle_int(void *thisObj, int arg__1) {
  fromPtr(thisObj)->setFrameStyle(arg__1);
}
// setLineWidth(int arg__1)
void c_QFrame__setLineWidth_int(void *thisObj, int arg__1) {
  fromPtr(thisObj)->setLineWidth(arg__1);
}
// setMidLineWidth(int arg__1)
void c_QFrame__setMidLineWidth_int(void *thisObj, int arg__1) {
  fromPtr(thisObj)->setMidLineWidth(arg__1);
}
// setVisible(bool visible)
void c_QFrame__setVisible_bool(void *thisObj, bool visible) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFrame_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}
// sharedPainter() const
void *c_QFrame__sharedPainter(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->sharedPainter_nocallback();
  return result;
}
// sizeHint() const
void *c_QFrame__sizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFrame_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->sizeHint_nocallback();
    } else {
      return targetPtr->sizeHint();
    }
  }()};
  return result;
}
// tr(const char * s, const char * c, int n)
void *c_static_QFrame__tr_char_char_int(const char *s, const char *c, int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QFrame_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
void c_QFrame__onWindowIconChanged_QIcon(void *thisObj, void *contextQObject,
                                         void *callback) {
  auto instance = reinterpret_cast<QFrame *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QFrame::windowIconChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QFrame__onWindowIconTextChanged_QString(void *thisObj,
                                               void *contextQObject,
                                               void *callback) {
  auto instance = reinterpret_cast<QFrame *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QFrame::windowIconTextChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QFrame__onWindowTitleChanged_QString(void *thisObj, void *contextQObject,
                                            void *callback) {
  auto instance = reinterpret_cast<QFrame *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QFrame::windowTitleChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QFrame__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QFrame__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1128:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_customEvent>(
        callback);
    break;
  case 1145:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_devType>(callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_event>(callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1155:
    wrapper->m_focusNextPrevChildCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_focusNextPrevChild>(
        callback);
    break;
  case 1169:
    wrapper->m_hasHeightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_hasHeightForWidth>(
        callback);
    break;
  case 1173:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 1176:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_initPainter>(
        callback);
    break;
  case 1202:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1222:
    wrapper->m_minimumSizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_minimumSizeHint>(
        callback);
    break;
  case 1224:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QFrame_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1226:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_mouseMoveEvent>(
        callback);
    break;
  case 1227:
    wrapper->m_mousePressEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_mousePressEvent>(
        callback);
    break;
  case 1228:
    wrapper->m_mouseReleaseEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_mouseReleaseEvent>(
        callback);
    break;
  case 1235:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 1314:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_setVisible>(
        callback);
    break;
  case 1323:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1331:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_sizeHint>(callback);
    break;
  }
}
}
