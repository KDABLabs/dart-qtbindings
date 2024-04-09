/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QAbstractScrollArea_c.h"

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
QAbstractScrollArea_wrapper::QAbstractScrollArea_wrapper(QWidget *parent)
    : ::QAbstractScrollArea(parent) {}
void QAbstractScrollArea_wrapper::changeEvent(QEvent *arg__1) {
  if (m_changeEventCallback) {
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QAbstractScrollArea::changeEvent(arg__1);
  }
}
void QAbstractScrollArea_wrapper::changeEvent_nocallback(QEvent *arg__1) {
  ::QAbstractScrollArea::changeEvent(arg__1);
}
QWidget *QAbstractScrollArea_wrapper::cornerWidget() const {
  return ::QAbstractScrollArea::cornerWidget();
}
void QAbstractScrollArea_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QAbstractScrollArea::customEvent(event);
  }
}
void QAbstractScrollArea_wrapper::customEvent_nocallback(QEvent *event) {
  ::QAbstractScrollArea::customEvent(event);
}
int QAbstractScrollArea_wrapper::devType() const {
  if (m_devTypeCallback) {
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QAbstractScrollArea::devType();
  }
}
int QAbstractScrollArea_wrapper::devType_nocallback() const {
  return ::QAbstractScrollArea::devType();
}
bool QAbstractScrollArea_wrapper::event(QEvent *arg__1) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QAbstractScrollArea::event(arg__1);
  }
}
bool QAbstractScrollArea_wrapper::event_nocallback(QEvent *arg__1) {
  return ::QAbstractScrollArea::event(arg__1);
}
bool QAbstractScrollArea_wrapper::eventFilter(QObject *arg__1, QEvent *arg__2) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), arg__1, arg__2);
  } else {
    return ::QAbstractScrollArea::eventFilter(arg__1, arg__2);
  }
}
bool QAbstractScrollArea_wrapper::eventFilter_nocallback(QObject *arg__1,
                                                         QEvent *arg__2) {
  return ::QAbstractScrollArea::eventFilter(arg__1, arg__2);
}
bool QAbstractScrollArea_wrapper::focusNextPrevChild(bool next) {
  if (m_focusNextPrevChildCallback) {
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    return ::QAbstractScrollArea::focusNextPrevChild(next);
  }
}
bool QAbstractScrollArea_wrapper::focusNextPrevChild_nocallback(bool next) {
  return ::QAbstractScrollArea::focusNextPrevChild(next);
}
bool QAbstractScrollArea_wrapper::hasHeightForWidth() const {
  if (m_hasHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QAbstractScrollArea::hasHeightForWidth();
  }
}
bool QAbstractScrollArea_wrapper::hasHeightForWidth_nocallback() const {
  return ::QAbstractScrollArea::hasHeightForWidth();
}
int QAbstractScrollArea_wrapper::heightForWidth(int arg__1) const {
  if (m_heightForWidthCallback) {
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QAbstractScrollArea::heightForWidth(arg__1);
  }
}
int QAbstractScrollArea_wrapper::heightForWidth_nocallback(int arg__1) const {
  return ::QAbstractScrollArea::heightForWidth(arg__1);
}
void QAbstractScrollArea_wrapper::initPainter(QPainter *painter) const {
  if (m_initPainterCallback) {
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    ::QAbstractScrollArea::initPainter(painter);
  }
}
void QAbstractScrollArea_wrapper::initPainter_nocallback(
    QPainter *painter) const {
  ::QAbstractScrollArea::initPainter(painter);
}
void QAbstractScrollArea_wrapper::leaveEvent(QEvent *event) {
  if (m_leaveEventCallback) {
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QAbstractScrollArea::leaveEvent(event);
  }
}
void QAbstractScrollArea_wrapper::leaveEvent_nocallback(QEvent *event) {
  ::QAbstractScrollArea::leaveEvent(event);
}
QSize QAbstractScrollArea_wrapper::maximumViewportSize() const {
  return ::QAbstractScrollArea::maximumViewportSize();
}
QSize QAbstractScrollArea_wrapper::minimumSizeHint() const {
  if (m_minimumSizeHintCallback) {
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QAbstractScrollArea::minimumSizeHint();
  }
}
QSize QAbstractScrollArea_wrapper::minimumSizeHint_nocallback() const {
  return ::QAbstractScrollArea::minimumSizeHint();
}
void QAbstractScrollArea_wrapper::mouseDoubleClickEvent(QMouseEvent *arg__1) {
  if (m_mouseDoubleClickEventCallback) {
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QAbstractScrollArea::mouseDoubleClickEvent(arg__1);
  }
}
void QAbstractScrollArea_wrapper::mouseDoubleClickEvent_nocallback(
    QMouseEvent *arg__1) {
  ::QAbstractScrollArea::mouseDoubleClickEvent(arg__1);
}
void QAbstractScrollArea_wrapper::mouseMoveEvent(QMouseEvent *arg__1) {
  if (m_mouseMoveEventCallback) {
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QAbstractScrollArea::mouseMoveEvent(arg__1);
  }
}
void QAbstractScrollArea_wrapper::mouseMoveEvent_nocallback(
    QMouseEvent *arg__1) {
  ::QAbstractScrollArea::mouseMoveEvent(arg__1);
}
void QAbstractScrollArea_wrapper::mousePressEvent(QMouseEvent *arg__1) {
  if (m_mousePressEventCallback) {
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QAbstractScrollArea::mousePressEvent(arg__1);
  }
}
void QAbstractScrollArea_wrapper::mousePressEvent_nocallback(
    QMouseEvent *arg__1) {
  ::QAbstractScrollArea::mousePressEvent(arg__1);
}
void QAbstractScrollArea_wrapper::mouseReleaseEvent(QMouseEvent *arg__1) {
  if (m_mouseReleaseEventCallback) {
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QAbstractScrollArea::mouseReleaseEvent(arg__1);
  }
}
void QAbstractScrollArea_wrapper::mouseReleaseEvent_nocallback(
    QMouseEvent *arg__1) {
  ::QAbstractScrollArea::mouseReleaseEvent(arg__1);
}
void QAbstractScrollArea_wrapper::paintEvent(QPaintEvent *arg__1) {
  if (m_paintEventCallback) {
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QAbstractScrollArea::paintEvent(arg__1);
  }
}
void QAbstractScrollArea_wrapper::paintEvent_nocallback(QPaintEvent *arg__1) {
  ::QAbstractScrollArea::paintEvent(arg__1);
}
void QAbstractScrollArea_wrapper::scrollContentsBy(int dx, int dy) {
  if (m_scrollContentsByCallback) {
    const void *thisPtr = this;
    m_scrollContentsByCallback(const_cast<void *>(thisPtr), dx, dy);
  } else {
    ::QAbstractScrollArea::scrollContentsBy(dx, dy);
  }
}
void QAbstractScrollArea_wrapper::scrollContentsBy_nocallback(int dx, int dy) {
  ::QAbstractScrollArea::scrollContentsBy(dx, dy);
}
void QAbstractScrollArea_wrapper::setCornerWidget(QWidget *widget) {
  ::QAbstractScrollArea::setCornerWidget(widget);
}
void QAbstractScrollArea_wrapper::setViewport(QWidget *widget) {
  ::QAbstractScrollArea::setViewport(widget);
}
void QAbstractScrollArea_wrapper::setViewportMargins(int left, int top,
                                                     int right, int bottom) {
  ::QAbstractScrollArea::setViewportMargins(left, top, right, bottom);
}
void QAbstractScrollArea_wrapper::setVisible(bool visible) {
  if (m_setVisibleCallback) {
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    ::QAbstractScrollArea::setVisible(visible);
  }
}
void QAbstractScrollArea_wrapper::setVisible_nocallback(bool visible) {
  ::QAbstractScrollArea::setVisible(visible);
}
void QAbstractScrollArea_wrapper::setupViewport(QWidget *viewport) {
  if (m_setupViewportCallback) {
    const void *thisPtr = this;
    m_setupViewportCallback(const_cast<void *>(thisPtr), viewport);
  } else {
    ::QAbstractScrollArea::setupViewport(viewport);
  }
}
void QAbstractScrollArea_wrapper::setupViewport_nocallback(QWidget *viewport) {
  ::QAbstractScrollArea::setupViewport(viewport);
}
QPainter *QAbstractScrollArea_wrapper::sharedPainter() const {
  if (m_sharedPainterCallback) {
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QAbstractScrollArea::sharedPainter();
  }
}
QPainter *QAbstractScrollArea_wrapper::sharedPainter_nocallback() const {
  return ::QAbstractScrollArea::sharedPainter();
}
QSize QAbstractScrollArea_wrapper::sizeHint() const {
  if (m_sizeHintCallback) {
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QAbstractScrollArea::sizeHint();
  }
}
QSize QAbstractScrollArea_wrapper::sizeHint_nocallback() const {
  return ::QAbstractScrollArea::sizeHint();
}
QString QAbstractScrollArea_wrapper::tr(const char *s, const char *c, int n) {
  return ::QAbstractScrollArea::tr(s, c, n);
}
QWidget *QAbstractScrollArea_wrapper::viewport() const {
  return ::QAbstractScrollArea::viewport();
}
bool QAbstractScrollArea_wrapper::viewportEvent(QEvent *arg__1) {
  if (m_viewportEventCallback) {
    const void *thisPtr = this;
    return m_viewportEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QAbstractScrollArea::viewportEvent(arg__1);
  }
}
bool QAbstractScrollArea_wrapper::viewportEvent_nocallback(QEvent *arg__1) {
  return ::QAbstractScrollArea::viewportEvent(arg__1);
}
QSize QAbstractScrollArea_wrapper::viewportSizeHint() const {
  if (m_viewportSizeHintCallback) {
    const void *thisPtr = this;
    return *m_viewportSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QAbstractScrollArea::viewportSizeHint();
  }
}
QSize QAbstractScrollArea_wrapper::viewportSizeHint_nocallback() const {
  return ::QAbstractScrollArea::viewportSizeHint();
}
QAbstractScrollArea_wrapper::~QAbstractScrollArea_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QAbstractScrollArea *fromPtr(void *ptr) {
  return reinterpret_cast<QAbstractScrollArea *>(ptr);
}
static QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<
      QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper *>(ptr);
}
extern "C" {
void c_QAbstractScrollArea_Finalizer(void *cppObj) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper *>(cppObj);
}
void *c_QAbstractScrollArea__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
// changeEvent(QEvent * arg__1)
void c_QAbstractScrollArea__changeEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->changeEvent_nocallback(arg__1);
}
// cornerWidget() const
void *c_QAbstractScrollArea__cornerWidget(void *thisObj) {
  const auto &result = fromPtr(thisObj)->cornerWidget();
  return result;
}
// customEvent(QEvent * event)
void c_QAbstractScrollArea__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// devType() const
int c_QAbstractScrollArea__devType(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper *>(
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
bool c_QAbstractScrollArea__event_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  const auto &result = fromWrapperPtr(thisObj)->event_nocallback(arg__1);
  return result;
}
// eventFilter(QObject * arg__1, QEvent * arg__2)
bool c_QAbstractScrollArea__eventFilter_QObject_QEvent(void *thisObj,
                                                       void *arg__1_,
                                                       void *arg__2_) {
  auto arg__1 = reinterpret_cast<QObject *>(arg__1_);
  auto arg__2 = reinterpret_cast<QEvent *>(arg__2_);
  const auto &result =
      fromWrapperPtr(thisObj)->eventFilter_nocallback(arg__1, arg__2);
  return result;
}
// focusNextPrevChild(bool next)
bool c_QAbstractScrollArea__focusNextPrevChild_bool(void *thisObj, bool next) {
  const auto &result =
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
  return result;
}
// hasHeightForWidth() const
bool c_QAbstractScrollArea__hasHeightForWidth(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper *>(
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
int c_QAbstractScrollArea__heightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper *>(
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
void c_QAbstractScrollArea__initPainter_QPainter(void *thisObj,
                                                 void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}
// leaveEvent(QEvent * event)
void c_QAbstractScrollArea__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}
// maximumViewportSize() const
void *c_QAbstractScrollArea__maximumViewportSize(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{
      fromPtr(thisObj)->maximumViewportSize()};
  return result;
}
// minimumSizeHint() const
void *c_QAbstractScrollArea__minimumSizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->minimumSizeHint_nocallback();
    } else {
      return targetPtr->minimumSizeHint();
    }
  }()};
  return result;
}
// mouseDoubleClickEvent(QMouseEvent * arg__1)
void c_QAbstractScrollArea__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                              void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(arg__1);
}
// mouseMoveEvent(QMouseEvent * arg__1)
void c_QAbstractScrollArea__mouseMoveEvent_QMouseEvent(void *thisObj,
                                                       void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(arg__1);
}
// mousePressEvent(QMouseEvent * arg__1)
void c_QAbstractScrollArea__mousePressEvent_QMouseEvent(void *thisObj,
                                                        void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(arg__1);
}
// mouseReleaseEvent(QMouseEvent * arg__1)
void c_QAbstractScrollArea__mouseReleaseEvent_QMouseEvent(void *thisObj,
                                                          void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(arg__1);
}
// paintEvent(QPaintEvent * arg__1)
void c_QAbstractScrollArea__paintEvent_QPaintEvent(void *thisObj,
                                                   void *arg__1_) {
  auto arg__1 = reinterpret_cast<QPaintEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->paintEvent_nocallback(arg__1);
}
// scrollContentsBy(int dx, int dy)
void c_QAbstractScrollArea__scrollContentsBy_int_int(void *thisObj, int dx,
                                                     int dy) {
  fromWrapperPtr(thisObj)->scrollContentsBy_nocallback(dx, dy);
}
// setCornerWidget(QWidget * widget)
void c_QAbstractScrollArea__setCornerWidget_QWidget(void *thisObj,
                                                    void *widget_) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  fromPtr(thisObj)->setCornerWidget(widget);
}
// setViewport(QWidget * widget)
void c_QAbstractScrollArea__setViewport_QWidget(void *thisObj, void *widget_) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  fromPtr(thisObj)->setViewport(widget);
}
// setViewportMargins(int left, int top, int right, int bottom)
void c_QAbstractScrollArea__setViewportMargins_int_int_int_int(
    void *thisObj, int left, int top, int right, int bottom) {
  fromWrapperPtr(thisObj)->setViewportMargins(left, top, right, bottom);
}
// setVisible(bool visible)
void c_QAbstractScrollArea__setVisible_bool(void *thisObj, bool visible) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}
// setupViewport(QWidget * viewport)
void c_QAbstractScrollArea__setupViewport_QWidget(void *thisObj,
                                                  void *viewport_) {
  auto viewport = reinterpret_cast<QWidget *>(viewport_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setupViewport_nocallback(viewport);
    } else {
      return targetPtr->setupViewport(viewport);
    }
  }();
}
// sharedPainter() const
void *c_QAbstractScrollArea__sharedPainter(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->sharedPainter_nocallback();
  return result;
}
// sizeHint() const
void *c_QAbstractScrollArea__sizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper *>(
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
void *c_static_QAbstractScrollArea__tr_char_char_int(const char *s,
                                                     const char *c, int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
// viewport() const
void *c_QAbstractScrollArea__viewport(void *thisObj) {
  const auto &result = fromPtr(thisObj)->viewport();
  return result;
}
// viewportEvent(QEvent * arg__1)
bool c_QAbstractScrollArea__viewportEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  const auto &result =
      fromWrapperPtr(thisObj)->viewportEvent_nocallback(arg__1);
  return result;
}
// viewportSizeHint() const
void *c_QAbstractScrollArea__viewportSizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{
      fromWrapperPtr(thisObj)->viewportSizeHint_nocallback()};
  return result;
}
void c_QAbstractScrollArea__destructor(void *thisObj) {
  delete fromPtr(thisObj);
}
void c_QAbstractScrollArea__registerVirtualMethodCallback(void *ptr,
                                                          void *callback,
                                                          int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1128:
    wrapper->m_changeEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractScrollArea_wrapper::Callback_changeEvent>(
            callback);
    break;
  case 946:
    wrapper->m_customEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractScrollArea_wrapper::Callback_customEvent>(
            callback);
    break;
  case 1145:
    wrapper->m_devTypeCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractScrollArea_wrapper::Callback_devType>(
            callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper::Callback_event>(
        callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractScrollArea_wrapper::Callback_eventFilter>(
            callback);
    break;
  case 1155:
    wrapper->m_focusNextPrevChildCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper::
            Callback_focusNextPrevChild>(callback);
    break;
  case 1169:
    wrapper->m_hasHeightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper::
            Callback_hasHeightForWidth>(callback);
    break;
  case 1173:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper::
            Callback_heightForWidth>(callback);
    break;
  case 1176:
    wrapper->m_initPainterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractScrollArea_wrapper::Callback_initPainter>(
            callback);
    break;
  case 1202:
    wrapper->m_leaveEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractScrollArea_wrapper::Callback_leaveEvent>(
            callback);
    break;
  case 1222:
    wrapper->m_minimumSizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper::
            Callback_minimumSizeHint>(callback);
    break;
  case 1224:
    wrapper->m_mouseDoubleClickEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper::
            Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1226:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper::
            Callback_mouseMoveEvent>(callback);
    break;
  case 1227:
    wrapper->m_mousePressEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper::
            Callback_mousePressEvent>(callback);
    break;
  case 1228:
    wrapper->m_mouseReleaseEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper::
            Callback_mouseReleaseEvent>(callback);
    break;
  case 1235:
    wrapper->m_paintEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractScrollArea_wrapper::Callback_paintEvent>(
            callback);
    break;
  case 5218:
    wrapper->m_scrollContentsByCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper::
            Callback_scrollContentsBy>(callback);
    break;
  case 1314:
    wrapper->m_setVisibleCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractScrollArea_wrapper::Callback_setVisible>(
            callback);
    break;
  case 5226:
    wrapper->m_setupViewportCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper::
            Callback_setupViewport>(callback);
    break;
  case 1323:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper::
            Callback_sharedPainter>(callback);
    break;
  case 1331:
    wrapper->m_sizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractScrollArea_wrapper::Callback_sizeHint>(
            callback);
    break;
  case 5229:
    wrapper->m_viewportEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper::
            Callback_viewportEvent>(callback);
    break;
  case 5230:
    wrapper->m_viewportSizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper::
            Callback_viewportSizeHint>(callback);
    break;
  }
}
}
