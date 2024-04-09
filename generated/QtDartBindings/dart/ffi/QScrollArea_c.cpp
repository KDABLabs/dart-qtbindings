/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QScrollArea_c.h"

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
QScrollArea_wrapper::QScrollArea_wrapper(QWidget *parent)
    : ::QScrollArea(parent) {}
void QScrollArea_wrapper::changeEvent(QEvent *arg__1) {
  if (m_changeEventCallback) {
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QScrollArea::changeEvent(arg__1);
  }
}
void QScrollArea_wrapper::changeEvent_nocallback(QEvent *arg__1) {
  ::QScrollArea::changeEvent(arg__1);
}
void QScrollArea_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QScrollArea::customEvent(event);
  }
}
void QScrollArea_wrapper::customEvent_nocallback(QEvent *event) {
  ::QScrollArea::customEvent(event);
}
int QScrollArea_wrapper::devType() const {
  if (m_devTypeCallback) {
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QScrollArea::devType();
  }
}
int QScrollArea_wrapper::devType_nocallback() const {
  return ::QScrollArea::devType();
}
void QScrollArea_wrapper::ensureVisible(int x, int y, int xmargin,
                                        int ymargin) {
  ::QScrollArea::ensureVisible(x, y, xmargin, ymargin);
}
void QScrollArea_wrapper::ensureWidgetVisible(QWidget *childWidget, int xmargin,
                                              int ymargin) {
  ::QScrollArea::ensureWidgetVisible(childWidget, xmargin, ymargin);
}
bool QScrollArea_wrapper::event(QEvent *arg__1) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QScrollArea::event(arg__1);
  }
}
bool QScrollArea_wrapper::event_nocallback(QEvent *arg__1) {
  return ::QScrollArea::event(arg__1);
}
bool QScrollArea_wrapper::eventFilter(QObject *arg__1, QEvent *arg__2) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), arg__1, arg__2);
  } else {
    return ::QScrollArea::eventFilter(arg__1, arg__2);
  }
}
bool QScrollArea_wrapper::eventFilter_nocallback(QObject *arg__1,
                                                 QEvent *arg__2) {
  return ::QScrollArea::eventFilter(arg__1, arg__2);
}
bool QScrollArea_wrapper::focusNextPrevChild(bool next) {
  if (m_focusNextPrevChildCallback) {
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    return ::QScrollArea::focusNextPrevChild(next);
  }
}
bool QScrollArea_wrapper::focusNextPrevChild_nocallback(bool next) {
  return ::QScrollArea::focusNextPrevChild(next);
}
bool QScrollArea_wrapper::hasHeightForWidth() const {
  if (m_hasHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QScrollArea::hasHeightForWidth();
  }
}
bool QScrollArea_wrapper::hasHeightForWidth_nocallback() const {
  return ::QScrollArea::hasHeightForWidth();
}
int QScrollArea_wrapper::heightForWidth(int arg__1) const {
  if (m_heightForWidthCallback) {
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QScrollArea::heightForWidth(arg__1);
  }
}
int QScrollArea_wrapper::heightForWidth_nocallback(int arg__1) const {
  return ::QScrollArea::heightForWidth(arg__1);
}
void QScrollArea_wrapper::initPainter(QPainter *painter) const {
  if (m_initPainterCallback) {
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    ::QScrollArea::initPainter(painter);
  }
}
void QScrollArea_wrapper::initPainter_nocallback(QPainter *painter) const {
  ::QScrollArea::initPainter(painter);
}
void QScrollArea_wrapper::leaveEvent(QEvent *event) {
  if (m_leaveEventCallback) {
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QScrollArea::leaveEvent(event);
  }
}
void QScrollArea_wrapper::leaveEvent_nocallback(QEvent *event) {
  ::QScrollArea::leaveEvent(event);
}
QSize QScrollArea_wrapper::minimumSizeHint() const {
  if (m_minimumSizeHintCallback) {
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QScrollArea::minimumSizeHint();
  }
}
QSize QScrollArea_wrapper::minimumSizeHint_nocallback() const {
  return ::QScrollArea::minimumSizeHint();
}
void QScrollArea_wrapper::mouseDoubleClickEvent(QMouseEvent *arg__1) {
  if (m_mouseDoubleClickEventCallback) {
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QScrollArea::mouseDoubleClickEvent(arg__1);
  }
}
void QScrollArea_wrapper::mouseDoubleClickEvent_nocallback(
    QMouseEvent *arg__1) {
  ::QScrollArea::mouseDoubleClickEvent(arg__1);
}
void QScrollArea_wrapper::mouseMoveEvent(QMouseEvent *arg__1) {
  if (m_mouseMoveEventCallback) {
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QScrollArea::mouseMoveEvent(arg__1);
  }
}
void QScrollArea_wrapper::mouseMoveEvent_nocallback(QMouseEvent *arg__1) {
  ::QScrollArea::mouseMoveEvent(arg__1);
}
void QScrollArea_wrapper::mousePressEvent(QMouseEvent *arg__1) {
  if (m_mousePressEventCallback) {
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QScrollArea::mousePressEvent(arg__1);
  }
}
void QScrollArea_wrapper::mousePressEvent_nocallback(QMouseEvent *arg__1) {
  ::QScrollArea::mousePressEvent(arg__1);
}
void QScrollArea_wrapper::mouseReleaseEvent(QMouseEvent *arg__1) {
  if (m_mouseReleaseEventCallback) {
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QScrollArea::mouseReleaseEvent(arg__1);
  }
}
void QScrollArea_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *arg__1) {
  ::QScrollArea::mouseReleaseEvent(arg__1);
}
void QScrollArea_wrapper::paintEvent(QPaintEvent *arg__1) {
  if (m_paintEventCallback) {
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QScrollArea::paintEvent(arg__1);
  }
}
void QScrollArea_wrapper::paintEvent_nocallback(QPaintEvent *arg__1) {
  ::QScrollArea::paintEvent(arg__1);
}
void QScrollArea_wrapper::scrollContentsBy(int dx, int dy) {
  if (m_scrollContentsByCallback) {
    const void *thisPtr = this;
    m_scrollContentsByCallback(const_cast<void *>(thisPtr), dx, dy);
  } else {
    ::QScrollArea::scrollContentsBy(dx, dy);
  }
}
void QScrollArea_wrapper::scrollContentsBy_nocallback(int dx, int dy) {
  ::QScrollArea::scrollContentsBy(dx, dy);
}
void QScrollArea_wrapper::setVisible(bool visible) {
  if (m_setVisibleCallback) {
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    ::QScrollArea::setVisible(visible);
  }
}
void QScrollArea_wrapper::setVisible_nocallback(bool visible) {
  ::QScrollArea::setVisible(visible);
}
void QScrollArea_wrapper::setWidget(QWidget *widget) {
  ::QScrollArea::setWidget(widget);
}
void QScrollArea_wrapper::setWidgetResizable(bool resizable) {
  ::QScrollArea::setWidgetResizable(resizable);
}
void QScrollArea_wrapper::setupViewport(QWidget *viewport) {
  if (m_setupViewportCallback) {
    const void *thisPtr = this;
    m_setupViewportCallback(const_cast<void *>(thisPtr), viewport);
  } else {
    ::QScrollArea::setupViewport(viewport);
  }
}
void QScrollArea_wrapper::setupViewport_nocallback(QWidget *viewport) {
  ::QScrollArea::setupViewport(viewport);
}
QPainter *QScrollArea_wrapper::sharedPainter() const {
  if (m_sharedPainterCallback) {
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QScrollArea::sharedPainter();
  }
}
QPainter *QScrollArea_wrapper::sharedPainter_nocallback() const {
  return ::QScrollArea::sharedPainter();
}
QSize QScrollArea_wrapper::sizeHint() const {
  if (m_sizeHintCallback) {
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QScrollArea::sizeHint();
  }
}
QSize QScrollArea_wrapper::sizeHint_nocallback() const {
  return ::QScrollArea::sizeHint();
}
QWidget *QScrollArea_wrapper::takeWidget() {
  return ::QScrollArea::takeWidget();
}
QString QScrollArea_wrapper::tr(const char *s, const char *c, int n) {
  return ::QScrollArea::tr(s, c, n);
}
bool QScrollArea_wrapper::viewportEvent(QEvent *arg__1) {
  if (m_viewportEventCallback) {
    const void *thisPtr = this;
    return m_viewportEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QScrollArea::viewportEvent(arg__1);
  }
}
bool QScrollArea_wrapper::viewportEvent_nocallback(QEvent *arg__1) {
  return ::QScrollArea::viewportEvent(arg__1);
}
QSize QScrollArea_wrapper::viewportSizeHint() const {
  if (m_viewportSizeHintCallback) {
    const void *thisPtr = this;
    return *m_viewportSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QScrollArea::viewportSizeHint();
  }
}
QSize QScrollArea_wrapper::viewportSizeHint_nocallback() const {
  return ::QScrollArea::viewportSizeHint();
}
QWidget *QScrollArea_wrapper::widget() const { return ::QScrollArea::widget(); }
bool QScrollArea_wrapper::widgetResizable() const {
  return ::QScrollArea::widgetResizable();
}
QScrollArea_wrapper::~QScrollArea_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QScrollArea *fromPtr(void *ptr) {
  return reinterpret_cast<QScrollArea *>(ptr);
}
static QtDartBindings_wrappersNS::QScrollArea_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper *>(
      ptr);
}
extern "C" {
void c_QScrollArea_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper *>(
      cppObj);
}
void *c_QScrollArea__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QScrollArea_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
// changeEvent(QEvent * arg__1)
void c_QScrollArea__changeEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->changeEvent_nocallback(arg__1);
}
// customEvent(QEvent * event)
void c_QScrollArea__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// devType() const
int c_QScrollArea__devType(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->devType_nocallback();
    } else {
      return targetPtr->devType();
    }
  }();
  return result;
}
// ensureVisible(int x, int y, int xmargin, int ymargin)
void c_QScrollArea__ensureVisible_int_int_int_int(void *thisObj, int x, int y,
                                                  int xmargin, int ymargin) {
  fromPtr(thisObj)->ensureVisible(x, y, xmargin, ymargin);
}
// ensureWidgetVisible(QWidget * childWidget, int xmargin, int ymargin)
void c_QScrollArea__ensureWidgetVisible_QWidget_int_int(void *thisObj,
                                                        void *childWidget_,
                                                        int xmargin,
                                                        int ymargin) {
  auto childWidget = reinterpret_cast<QWidget *>(childWidget_);
  fromPtr(thisObj)->ensureWidgetVisible(childWidget, xmargin, ymargin);
}
// event(QEvent * arg__1)
bool c_QScrollArea__event_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  const auto &result = fromWrapperPtr(thisObj)->event_nocallback(arg__1);
  return result;
}
// eventFilter(QObject * arg__1, QEvent * arg__2)
bool c_QScrollArea__eventFilter_QObject_QEvent(void *thisObj, void *arg__1_,
                                               void *arg__2_) {
  auto arg__1 = reinterpret_cast<QObject *>(arg__1_);
  auto arg__2 = reinterpret_cast<QEvent *>(arg__2_);
  const auto &result =
      fromWrapperPtr(thisObj)->eventFilter_nocallback(arg__1, arg__2);
  return result;
}
// focusNextPrevChild(bool next)
bool c_QScrollArea__focusNextPrevChild_bool(void *thisObj, bool next) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->focusNextPrevChild_nocallback(next);
    } else {
      return targetPtr->focusNextPrevChild(next);
    }
  }();
  return result;
}
// hasHeightForWidth() const
bool c_QScrollArea__hasHeightForWidth(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper *>(
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
int c_QScrollArea__heightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper *>(
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
void c_QScrollArea__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}
// leaveEvent(QEvent * event)
void c_QScrollArea__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}
// minimumSizeHint() const
void *c_QScrollArea__minimumSizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper *>(
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
void c_QScrollArea__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                      void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(arg__1);
}
// mouseMoveEvent(QMouseEvent * arg__1)
void c_QScrollArea__mouseMoveEvent_QMouseEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(arg__1);
}
// mousePressEvent(QMouseEvent * arg__1)
void c_QScrollArea__mousePressEvent_QMouseEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(arg__1);
}
// mouseReleaseEvent(QMouseEvent * arg__1)
void c_QScrollArea__mouseReleaseEvent_QMouseEvent(void *thisObj,
                                                  void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(arg__1);
}
// paintEvent(QPaintEvent * arg__1)
void c_QScrollArea__paintEvent_QPaintEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QPaintEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->paintEvent_nocallback(arg__1);
}
// scrollContentsBy(int dx, int dy)
void c_QScrollArea__scrollContentsBy_int_int(void *thisObj, int dx, int dy) {
  fromWrapperPtr(thisObj)->scrollContentsBy_nocallback(dx, dy);
}
// setVisible(bool visible)
void c_QScrollArea__setVisible_bool(void *thisObj, bool visible) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}
// setWidget(QWidget * widget)
void c_QScrollArea__setWidget_QWidget(void *thisObj, void *widget_) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  fromPtr(thisObj)->setWidget(widget);
}
// setWidgetResizable(bool resizable)
void c_QScrollArea__setWidgetResizable_bool(void *thisObj, bool resizable) {
  fromPtr(thisObj)->setWidgetResizable(resizable);
}
// setupViewport(QWidget * viewport)
void c_QScrollArea__setupViewport_QWidget(void *thisObj, void *viewport_) {
  auto viewport = reinterpret_cast<QWidget *>(viewport_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setupViewport_nocallback(viewport);
    } else {
      return targetPtr->setupViewport(viewport);
    }
  }();
}
// sharedPainter() const
void *c_QScrollArea__sharedPainter(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->sharedPainter_nocallback();
  return result;
}
// sizeHint() const
void *c_QScrollArea__sizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->sizeHint_nocallback();
    } else {
      return targetPtr->sizeHint();
    }
  }()};
  return result;
}
// takeWidget()
void *c_QScrollArea__takeWidget(void *thisObj) {
  const auto &result = fromPtr(thisObj)->takeWidget();
  return result;
}
// tr(const char * s, const char * c, int n)
void *c_static_QScrollArea__tr_char_char_int(const char *s, const char *c,
                                             int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QScrollArea_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
// viewportEvent(QEvent * arg__1)
bool c_QScrollArea__viewportEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  const auto &result =
      fromWrapperPtr(thisObj)->viewportEvent_nocallback(arg__1);
  return result;
}
// viewportSizeHint() const
void *c_QScrollArea__viewportSizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{
      fromWrapperPtr(thisObj)->viewportSizeHint_nocallback()};
  return result;
}
// widget() const
void *c_QScrollArea__widget(void *thisObj) {
  const auto &result = fromPtr(thisObj)->widget();
  return result;
}
// widgetResizable() const
bool c_QScrollArea__widgetResizable(void *thisObj) {
  const auto &result = fromPtr(thisObj)->widgetResizable();
  return result;
}
void c_QScrollArea__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QScrollArea__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1128:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QScrollArea_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QScrollArea_wrapper::Callback_customEvent>(
        callback);
    break;
  case 1145:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QScrollArea_wrapper::Callback_devType>(
        callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QScrollArea_wrapper::Callback_event>(
        callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QScrollArea_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1155:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1169:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 1173:
    wrapper->m_heightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper::
                             Callback_heightForWidth>(callback);
    break;
  case 1176:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QScrollArea_wrapper::Callback_initPainter>(
        callback);
    break;
  case 1202:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QScrollArea_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1222:
    wrapper->m_minimumSizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper::
                             Callback_minimumSizeHint>(callback);
    break;
  case 1224:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1226:
    wrapper->m_mouseMoveEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper::
                             Callback_mouseMoveEvent>(callback);
    break;
  case 1227:
    wrapper->m_mousePressEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper::
                             Callback_mousePressEvent>(callback);
    break;
  case 1228:
    wrapper->m_mouseReleaseEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper::
                             Callback_mouseReleaseEvent>(callback);
    break;
  case 1235:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QScrollArea_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 5218:
    wrapper->m_scrollContentsByCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper::
                             Callback_scrollContentsBy>(callback);
    break;
  case 1314:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QScrollArea_wrapper::Callback_setVisible>(
        callback);
    break;
  case 5226:
    wrapper->m_setupViewportCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QScrollArea_wrapper::Callback_setupViewport>(
        callback);
    break;
  case 1323:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QScrollArea_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1331:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QScrollArea_wrapper::Callback_sizeHint>(
        callback);
    break;
  case 5229:
    wrapper->m_viewportEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QScrollArea_wrapper::Callback_viewportEvent>(
        callback);
    break;
  case 5230:
    wrapper->m_viewportSizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper::
                             Callback_viewportSizeHint>(callback);
    break;
  }
}
}
