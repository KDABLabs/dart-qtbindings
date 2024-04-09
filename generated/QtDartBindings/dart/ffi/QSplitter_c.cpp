/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QSplitter_c.h"

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
QSplitter_wrapper::QSplitter_wrapper(QWidget *parent) : ::QSplitter(parent) {}
QSplitter_wrapper::QSplitter_wrapper(Qt::Orientation arg__1, QWidget *parent)
    : ::QSplitter(arg__1, parent) {}
void QSplitter_wrapper::addWidget(QWidget *widget) {
  ::QSplitter::addWidget(widget);
}
void QSplitter_wrapper::changeEvent(QEvent *arg__1) {
  if (m_changeEventCallback) {
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QSplitter::changeEvent(arg__1);
  }
}
void QSplitter_wrapper::changeEvent_nocallback(QEvent *arg__1) {
  ::QSplitter::changeEvent(arg__1);
}
bool QSplitter_wrapper::childrenCollapsible() const {
  return ::QSplitter::childrenCollapsible();
}
int QSplitter_wrapper::closestLegalPosition(int arg__1, int arg__2) {
  return ::QSplitter::closestLegalPosition(arg__1, arg__2);
}
int QSplitter_wrapper::count() const { return ::QSplitter::count(); }
void QSplitter_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QSplitter::customEvent(event);
  }
}
void QSplitter_wrapper::customEvent_nocallback(QEvent *event) {
  ::QSplitter::customEvent(event);
}
int QSplitter_wrapper::devType() const {
  if (m_devTypeCallback) {
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QSplitter::devType();
  }
}
int QSplitter_wrapper::devType_nocallback() const {
  return ::QSplitter::devType();
}
bool QSplitter_wrapper::event(QEvent *arg__1) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QSplitter::event(arg__1);
  }
}
bool QSplitter_wrapper::event_nocallback(QEvent *arg__1) {
  return ::QSplitter::event(arg__1);
}
bool QSplitter_wrapper::eventFilter(QObject *watched, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QSplitter::eventFilter(watched, event);
  }
}
bool QSplitter_wrapper::eventFilter_nocallback(QObject *watched,
                                               QEvent *event) {
  return ::QSplitter::eventFilter(watched, event);
}
bool QSplitter_wrapper::focusNextPrevChild(bool next) {
  if (m_focusNextPrevChildCallback) {
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    return ::QSplitter::focusNextPrevChild(next);
  }
}
bool QSplitter_wrapper::focusNextPrevChild_nocallback(bool next) {
  return ::QSplitter::focusNextPrevChild(next);
}
int QSplitter_wrapper::handleWidth() const {
  return ::QSplitter::handleWidth();
}
bool QSplitter_wrapper::hasHeightForWidth() const {
  if (m_hasHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QSplitter::hasHeightForWidth();
  }
}
bool QSplitter_wrapper::hasHeightForWidth_nocallback() const {
  return ::QSplitter::hasHeightForWidth();
}
int QSplitter_wrapper::heightForWidth(int arg__1) const {
  if (m_heightForWidthCallback) {
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QSplitter::heightForWidth(arg__1);
  }
}
int QSplitter_wrapper::heightForWidth_nocallback(int arg__1) const {
  return ::QSplitter::heightForWidth(arg__1);
}
int QSplitter_wrapper::indexOf(QWidget *w) const {
  return ::QSplitter::indexOf(w);
}
void QSplitter_wrapper::initPainter(QPainter *painter) const {
  if (m_initPainterCallback) {
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    ::QSplitter::initPainter(painter);
  }
}
void QSplitter_wrapper::initPainter_nocallback(QPainter *painter) const {
  ::QSplitter::initPainter(painter);
}
void QSplitter_wrapper::insertWidget(int index, QWidget *widget) {
  ::QSplitter::insertWidget(index, widget);
}
bool QSplitter_wrapper::isCollapsible(int index) const {
  return ::QSplitter::isCollapsible(index);
}
void QSplitter_wrapper::leaveEvent(QEvent *event) {
  if (m_leaveEventCallback) {
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QSplitter::leaveEvent(event);
  }
}
void QSplitter_wrapper::leaveEvent_nocallback(QEvent *event) {
  ::QSplitter::leaveEvent(event);
}
QSize QSplitter_wrapper::minimumSizeHint() const {
  if (m_minimumSizeHintCallback) {
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QSplitter::minimumSizeHint();
  }
}
QSize QSplitter_wrapper::minimumSizeHint_nocallback() const {
  return ::QSplitter::minimumSizeHint();
}
void QSplitter_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  if (m_mouseDoubleClickEventCallback) {
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QSplitter::mouseDoubleClickEvent(event);
  }
}
void QSplitter_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *event) {
  ::QSplitter::mouseDoubleClickEvent(event);
}
void QSplitter_wrapper::mouseMoveEvent(QMouseEvent *event) {
  if (m_mouseMoveEventCallback) {
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QSplitter::mouseMoveEvent(event);
  }
}
void QSplitter_wrapper::mouseMoveEvent_nocallback(QMouseEvent *event) {
  ::QSplitter::mouseMoveEvent(event);
}
void QSplitter_wrapper::mousePressEvent(QMouseEvent *event) {
  if (m_mousePressEventCallback) {
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QSplitter::mousePressEvent(event);
  }
}
void QSplitter_wrapper::mousePressEvent_nocallback(QMouseEvent *event) {
  ::QSplitter::mousePressEvent(event);
}
void QSplitter_wrapper::mouseReleaseEvent(QMouseEvent *event) {
  if (m_mouseReleaseEventCallback) {
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QSplitter::mouseReleaseEvent(event);
  }
}
void QSplitter_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *event) {
  ::QSplitter::mouseReleaseEvent(event);
}
void QSplitter_wrapper::moveSplitter(int pos, int index) {
  ::QSplitter::moveSplitter(pos, index);
}
bool QSplitter_wrapper::opaqueResize() const {
  return ::QSplitter::opaqueResize();
}
Qt::Orientation QSplitter_wrapper::orientation() const {
  return ::QSplitter::orientation();
}
void QSplitter_wrapper::paintEvent(QPaintEvent *arg__1) {
  if (m_paintEventCallback) {
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QSplitter::paintEvent(arg__1);
  }
}
void QSplitter_wrapper::paintEvent_nocallback(QPaintEvent *arg__1) {
  ::QSplitter::paintEvent(arg__1);
}
void QSplitter_wrapper::refresh() { ::QSplitter::refresh(); }
QWidget *QSplitter_wrapper::replaceWidget(int index, QWidget *widget) {
  return ::QSplitter::replaceWidget(index, widget);
}
bool QSplitter_wrapper::restoreState(const QByteArray &state) {
  return ::QSplitter::restoreState(state);
}
QByteArray QSplitter_wrapper::saveState() const {
  return ::QSplitter::saveState();
}
void QSplitter_wrapper::setChildrenCollapsible(bool arg__1) {
  ::QSplitter::setChildrenCollapsible(arg__1);
}
void QSplitter_wrapper::setCollapsible(int index, bool arg__2) {
  ::QSplitter::setCollapsible(index, arg__2);
}
void QSplitter_wrapper::setHandleWidth(int arg__1) {
  ::QSplitter::setHandleWidth(arg__1);
}
void QSplitter_wrapper::setOpaqueResize(bool opaque) {
  ::QSplitter::setOpaqueResize(opaque);
}
void QSplitter_wrapper::setOrientation(Qt::Orientation arg__1) {
  ::QSplitter::setOrientation(arg__1);
}
void QSplitter_wrapper::setRubberBand(int position) {
  ::QSplitter::setRubberBand(position);
}
void QSplitter_wrapper::setSizes(const QList<int> &list) {
  ::QSplitter::setSizes(list);
}
void QSplitter_wrapper::setStretchFactor(int index, int stretch) {
  ::QSplitter::setStretchFactor(index, stretch);
}
void QSplitter_wrapper::setVisible(bool visible) {
  if (m_setVisibleCallback) {
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    ::QSplitter::setVisible(visible);
  }
}
void QSplitter_wrapper::setVisible_nocallback(bool visible) {
  ::QSplitter::setVisible(visible);
}
QPainter *QSplitter_wrapper::sharedPainter() const {
  if (m_sharedPainterCallback) {
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QSplitter::sharedPainter();
  }
}
QPainter *QSplitter_wrapper::sharedPainter_nocallback() const {
  return ::QSplitter::sharedPainter();
}
QSize QSplitter_wrapper::sizeHint() const {
  if (m_sizeHintCallback) {
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QSplitter::sizeHint();
  }
}
QSize QSplitter_wrapper::sizeHint_nocallback() const {
  return ::QSplitter::sizeHint();
}
QList<int> QSplitter_wrapper::sizes() const { return ::QSplitter::sizes(); }
void QSplitter_wrapper::splitterMoved(int pos, int index) {
  ::QSplitter::splitterMoved(pos, index);
}
QString QSplitter_wrapper::tr(const char *s, const char *c, int n) {
  return ::QSplitter::tr(s, c, n);
}
QWidget *QSplitter_wrapper::widget(int index) const {
  return ::QSplitter::widget(index);
}
QSplitter_wrapper::~QSplitter_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QSplitter *fromPtr(void *ptr) {
  return reinterpret_cast<QSplitter *>(ptr);
}
static QtDartBindings_wrappersNS::QSplitter_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QSplitter_wrapper *>(ptr);
}
extern "C" {
void c_QSplitter_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QSplitter_wrapper *>(
      cppObj);
}
void *c_QSplitter__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QSplitter_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
void *c_QSplitter__constructor_Orientation_QWidget(int arg__1, void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QSplitter_wrapper(
      static_cast<Qt::Orientation>(arg__1), parent);
  return reinterpret_cast<void *>(ptr);
}
// addWidget(QWidget * widget)
void c_QSplitter__addWidget_QWidget(void *thisObj, void *widget_) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  fromPtr(thisObj)->addWidget(widget);
}
// changeEvent(QEvent * arg__1)
void c_QSplitter__changeEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->changeEvent_nocallback(arg__1);
}
// childrenCollapsible() const
bool c_QSplitter__childrenCollapsible(void *thisObj) {
  const auto &result = fromPtr(thisObj)->childrenCollapsible();
  return result;
}
// closestLegalPosition(int arg__1, int arg__2)
int c_QSplitter__closestLegalPosition_int_int(void *thisObj, int arg__1,
                                              int arg__2) {
  const auto &result =
      fromWrapperPtr(thisObj)->closestLegalPosition(arg__1, arg__2);
  return result;
}
// count() const
int c_QSplitter__count(void *thisObj) {
  const auto &result = fromPtr(thisObj)->count();
  return result;
}
// customEvent(QEvent * event)
void c_QSplitter__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// devType() const
int c_QSplitter__devType(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QSplitter_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->devType_nocallback();
    } else {
      return targetPtr->devType();
    }
  }();
  return result;
}
// event(QEvent * arg__1)
bool c_QSplitter__event_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  const auto &result = fromWrapperPtr(thisObj)->event_nocallback(arg__1);
  return result;
}
// eventFilter(QObject * watched, QEvent * event)
bool c_QSplitter__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                             void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QSplitter_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->eventFilter_nocallback(watched, event);
    } else {
      return targetPtr->eventFilter(watched, event);
    }
  }();
  return result;
}
// focusNextPrevChild(bool next)
bool c_QSplitter__focusNextPrevChild_bool(void *thisObj, bool next) {
  const auto &result =
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
  return result;
}
// handleWidth() const
int c_QSplitter__handleWidth(void *thisObj) {
  const auto &result = fromPtr(thisObj)->handleWidth();
  return result;
}
// hasHeightForWidth() const
bool c_QSplitter__hasHeightForWidth(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QSplitter_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->hasHeightForWidth_nocallback();
    } else {
      return targetPtr->hasHeightForWidth();
    }
  }();
  return result;
}
// heightForWidth(int arg__1) const
int c_QSplitter__heightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QSplitter_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->heightForWidth_nocallback(arg__1);
    } else {
      return targetPtr->heightForWidth(arg__1);
    }
  }();
  return result;
}
// indexOf(QWidget * w) const
int c_QSplitter__indexOf_QWidget(void *thisObj, void *w_) {
  auto w = reinterpret_cast<QWidget *>(w_);
  const auto &result = fromPtr(thisObj)->indexOf(w);
  return result;
}
// initPainter(QPainter * painter) const
void c_QSplitter__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}
// insertWidget(int index, QWidget * widget)
void c_QSplitter__insertWidget_int_QWidget(void *thisObj, int index,
                                           void *widget_) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  fromPtr(thisObj)->insertWidget(index, widget);
}
// isCollapsible(int index) const
bool c_QSplitter__isCollapsible_int(void *thisObj, int index) {
  const auto &result = fromPtr(thisObj)->isCollapsible(index);
  return result;
}
// leaveEvent(QEvent * event)
void c_QSplitter__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}
// minimumSizeHint() const
void *c_QSplitter__minimumSizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QSplitter_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->minimumSizeHint_nocallback();
    } else {
      return targetPtr->minimumSizeHint();
    }
  }()};
  return result;
}
// mouseDoubleClickEvent(QMouseEvent * event)
void c_QSplitter__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                    void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}
// mouseMoveEvent(QMouseEvent * event)
void c_QSplitter__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(event);
}
// mousePressEvent(QMouseEvent * event)
void c_QSplitter__mousePressEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(event);
}
// mouseReleaseEvent(QMouseEvent * event)
void c_QSplitter__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(event);
}
// moveSplitter(int pos, int index)
void c_QSplitter__moveSplitter_int_int(void *thisObj, int pos, int index) {
  fromWrapperPtr(thisObj)->moveSplitter(pos, index);
}
// opaqueResize() const
bool c_QSplitter__opaqueResize(void *thisObj) {
  const auto &result = fromPtr(thisObj)->opaqueResize();
  return result;
}
// orientation() const
int c_QSplitter__orientation(void *thisObj) {
  const auto &result = int(fromPtr(thisObj)->orientation());
  return result;
}
// paintEvent(QPaintEvent * arg__1)
void c_QSplitter__paintEvent_QPaintEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QPaintEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->paintEvent_nocallback(arg__1);
}
// refresh()
void c_QSplitter__refresh(void *thisObj) { fromPtr(thisObj)->refresh(); }
// replaceWidget(int index, QWidget * widget)
void *c_QSplitter__replaceWidget_int_QWidget(void *thisObj, int index,
                                             void *widget_) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  const auto &result = fromPtr(thisObj)->replaceWidget(index, widget);
  return result;
}
// restoreState(const QByteArray & state)
bool c_QSplitter__restoreState_QByteArray(void *thisObj, void *state_) {
  assert(state_);
  auto &state = *reinterpret_cast<QByteArray *>(state_);
  const auto &result = fromPtr(thisObj)->restoreState(state);
  return result;
}
// saveState() const
void *c_QSplitter__saveState(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->saveState()};
  return result;
}
// setChildrenCollapsible(bool arg__1)
void c_QSplitter__setChildrenCollapsible_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->setChildrenCollapsible(arg__1);
}
// setCollapsible(int index, bool arg__2)
void c_QSplitter__setCollapsible_int_bool(void *thisObj, int index,
                                          bool arg__2) {
  fromPtr(thisObj)->setCollapsible(index, arg__2);
}
// setHandleWidth(int arg__1)
void c_QSplitter__setHandleWidth_int(void *thisObj, int arg__1) {
  fromPtr(thisObj)->setHandleWidth(arg__1);
}
// setOpaqueResize(bool opaque)
void c_QSplitter__setOpaqueResize_bool(void *thisObj, bool opaque) {
  fromPtr(thisObj)->setOpaqueResize(opaque);
}
// setOrientation(Qt::Orientation arg__1)
void c_QSplitter__setOrientation_Orientation(void *thisObj, int arg__1) {
  fromPtr(thisObj)->setOrientation(static_cast<Qt::Orientation>(arg__1));
}
// setRubberBand(int position)
void c_QSplitter__setRubberBand_int(void *thisObj, int position) {
  fromWrapperPtr(thisObj)->setRubberBand(position);
}
// setSizes(const QList<int > & list)
void c_QSplitter__setSizes_QList_int(void *thisObj, void *list_) {
  assert(list_);
  auto &list = *reinterpret_cast<QList<int> *>(list_);
  fromPtr(thisObj)->setSizes(list);
}
// setStretchFactor(int index, int stretch)
void c_QSplitter__setStretchFactor_int_int(void *thisObj, int index,
                                           int stretch) {
  fromPtr(thisObj)->setStretchFactor(index, stretch);
}
// setVisible(bool visible)
void c_QSplitter__setVisible_bool(void *thisObj, bool visible) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QSplitter_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}
// sharedPainter() const
void *c_QSplitter__sharedPainter(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->sharedPainter_nocallback();
  return result;
}
// sizeHint() const
void *c_QSplitter__sizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QSplitter_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->sizeHint_nocallback();
    } else {
      return targetPtr->sizeHint();
    }
  }()};
  return result;
}
// sizes() const
void *c_QSplitter__sizes(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QList<int>>{fromPtr(thisObj)->sizes()};
  return result;
}
// splitterMoved(int pos, int index)
void c_QSplitter__splitterMoved_int_int(void *thisObj, int pos, int index) {
  fromPtr(thisObj)->splitterMoved(pos, index);
}
void c_QSplitter__onSplitterMoved_int_int(void *thisObj, void *contextQObject,
                                          void *callback) {
  auto instance = reinterpret_cast<QSplitter *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QSplitter::splitterMoved,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// tr(const char * s, const char * c, int n)
void *c_static_QSplitter__tr_char_char_int(const char *s, const char *c,
                                           int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QSplitter_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
// widget(int index) const
void *c_QSplitter__widget_int(void *thisObj, int index) {
  const auto &result = fromPtr(thisObj)->widget(index);
  return result;
}
void c_QSplitter__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QSplitter__registerVirtualMethodCallback(void *ptr, void *callback,
                                                int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1128:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSplitter_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSplitter_wrapper::Callback_customEvent>(
        callback);
    break;
  case 1145:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSplitter_wrapper::Callback_devType>(
        callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSplitter_wrapper::Callback_event>(callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSplitter_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1155:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QSplitter_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1169:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QSplitter_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 1173:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSplitter_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 1176:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSplitter_wrapper::Callback_initPainter>(
        callback);
    break;
  case 1202:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSplitter_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1222:
    wrapper->m_minimumSizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSplitter_wrapper::Callback_minimumSizeHint>(
        callback);
    break;
  case 1224:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QSplitter_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1226:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSplitter_wrapper::Callback_mouseMoveEvent>(
        callback);
    break;
  case 1227:
    wrapper->m_mousePressEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSplitter_wrapper::Callback_mousePressEvent>(
        callback);
    break;
  case 1228:
    wrapper->m_mouseReleaseEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QSplitter_wrapper::
                             Callback_mouseReleaseEvent>(callback);
    break;
  case 1235:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSplitter_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 1314:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSplitter_wrapper::Callback_setVisible>(
        callback);
    break;
  case 1323:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSplitter_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1331:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSplitter_wrapper::Callback_sizeHint>(
        callback);
    break;
  }
}
}
