/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QToolBar_c.h"

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
QToolBar_wrapper::QToolBar_wrapper(QWidget *parent) : ::QToolBar(parent) {}
QToolBar_wrapper::QToolBar_wrapper(const QString &title, QWidget *parent)
    : ::QToolBar(title, parent) {}
QAction *QToolBar_wrapper::actionAt(const QPoint &p) const {
  return ::QToolBar::actionAt(p);
}
QAction *QToolBar_wrapper::actionAt(int x, int y) const {
  return ::QToolBar::actionAt(x, y);
}
QRect QToolBar_wrapper::actionGeometry(QAction *action) const {
  return ::QToolBar::actionGeometry(action);
}
void QToolBar_wrapper::actionTriggered(QAction *action) {
  ::QToolBar::actionTriggered(action);
}
QAction *QToolBar_wrapper::addSeparator() { return ::QToolBar::addSeparator(); }
QAction *QToolBar_wrapper::addWidget(QWidget *widget) {
  return ::QToolBar::addWidget(widget);
}
void QToolBar_wrapper::changeEvent(QEvent *event) {
  if (m_changeEventCallback) {
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QToolBar::changeEvent(event);
  }
}
void QToolBar_wrapper::changeEvent_nocallback(QEvent *event) {
  ::QToolBar::changeEvent(event);
}
void QToolBar_wrapper::clear() { ::QToolBar::clear(); }
void QToolBar_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QToolBar::customEvent(event);
  }
}
void QToolBar_wrapper::customEvent_nocallback(QEvent *event) {
  ::QToolBar::customEvent(event);
}
int QToolBar_wrapper::devType() const {
  if (m_devTypeCallback) {
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QToolBar::devType();
  }
}
int QToolBar_wrapper::devType_nocallback() const {
  return ::QToolBar::devType();
}
bool QToolBar_wrapper::event(QEvent *event) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    return ::QToolBar::event(event);
  }
}
bool QToolBar_wrapper::event_nocallback(QEvent *event) {
  return ::QToolBar::event(event);
}
bool QToolBar_wrapper::eventFilter(QObject *watched, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QToolBar::eventFilter(watched, event);
  }
}
bool QToolBar_wrapper::eventFilter_nocallback(QObject *watched, QEvent *event) {
  return ::QToolBar::eventFilter(watched, event);
}
bool QToolBar_wrapper::focusNextPrevChild(bool next) {
  if (m_focusNextPrevChildCallback) {
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    return ::QToolBar::focusNextPrevChild(next);
  }
}
bool QToolBar_wrapper::focusNextPrevChild_nocallback(bool next) {
  return ::QToolBar::focusNextPrevChild(next);
}
bool QToolBar_wrapper::hasHeightForWidth() const {
  if (m_hasHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QToolBar::hasHeightForWidth();
  }
}
bool QToolBar_wrapper::hasHeightForWidth_nocallback() const {
  return ::QToolBar::hasHeightForWidth();
}
int QToolBar_wrapper::heightForWidth(int arg__1) const {
  if (m_heightForWidthCallback) {
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QToolBar::heightForWidth(arg__1);
  }
}
int QToolBar_wrapper::heightForWidth_nocallback(int arg__1) const {
  return ::QToolBar::heightForWidth(arg__1);
}
QSize QToolBar_wrapper::iconSize() const { return ::QToolBar::iconSize(); }
void QToolBar_wrapper::iconSizeChanged(const QSize &iconSize) {
  ::QToolBar::iconSizeChanged(iconSize);
}
void QToolBar_wrapper::initPainter(QPainter *painter) const {
  if (m_initPainterCallback) {
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    ::QToolBar::initPainter(painter);
  }
}
void QToolBar_wrapper::initPainter_nocallback(QPainter *painter) const {
  ::QToolBar::initPainter(painter);
}
QAction *QToolBar_wrapper::insertSeparator(QAction *before) {
  return ::QToolBar::insertSeparator(before);
}
QAction *QToolBar_wrapper::insertWidget(QAction *before, QWidget *widget) {
  return ::QToolBar::insertWidget(before, widget);
}
bool QToolBar_wrapper::isFloatable() const { return ::QToolBar::isFloatable(); }
bool QToolBar_wrapper::isFloating() const { return ::QToolBar::isFloating(); }
bool QToolBar_wrapper::isMovable() const { return ::QToolBar::isMovable(); }
void QToolBar_wrapper::leaveEvent(QEvent *event) {
  if (m_leaveEventCallback) {
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QToolBar::leaveEvent(event);
  }
}
void QToolBar_wrapper::leaveEvent_nocallback(QEvent *event) {
  ::QToolBar::leaveEvent(event);
}
QSize QToolBar_wrapper::minimumSizeHint() const {
  if (m_minimumSizeHintCallback) {
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QToolBar::minimumSizeHint();
  }
}
QSize QToolBar_wrapper::minimumSizeHint_nocallback() const {
  return ::QToolBar::minimumSizeHint();
}
void QToolBar_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  if (m_mouseDoubleClickEventCallback) {
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QToolBar::mouseDoubleClickEvent(event);
  }
}
void QToolBar_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *event) {
  ::QToolBar::mouseDoubleClickEvent(event);
}
void QToolBar_wrapper::mouseMoveEvent(QMouseEvent *event) {
  if (m_mouseMoveEventCallback) {
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QToolBar::mouseMoveEvent(event);
  }
}
void QToolBar_wrapper::mouseMoveEvent_nocallback(QMouseEvent *event) {
  ::QToolBar::mouseMoveEvent(event);
}
void QToolBar_wrapper::mousePressEvent(QMouseEvent *event) {
  if (m_mousePressEventCallback) {
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QToolBar::mousePressEvent(event);
  }
}
void QToolBar_wrapper::mousePressEvent_nocallback(QMouseEvent *event) {
  ::QToolBar::mousePressEvent(event);
}
void QToolBar_wrapper::mouseReleaseEvent(QMouseEvent *event) {
  if (m_mouseReleaseEventCallback) {
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QToolBar::mouseReleaseEvent(event);
  }
}
void QToolBar_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *event) {
  ::QToolBar::mouseReleaseEvent(event);
}
void QToolBar_wrapper::movableChanged(bool movable) {
  ::QToolBar::movableChanged(movable);
}
Qt::Orientation QToolBar_wrapper::orientation() const {
  return ::QToolBar::orientation();
}
void QToolBar_wrapper::orientationChanged(Qt::Orientation orientation) {
  ::QToolBar::orientationChanged(orientation);
}
void QToolBar_wrapper::paintEvent(QPaintEvent *event) {
  if (m_paintEventCallback) {
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QToolBar::paintEvent(event);
  }
}
void QToolBar_wrapper::paintEvent_nocallback(QPaintEvent *event) {
  ::QToolBar::paintEvent(event);
}
void QToolBar_wrapper::setFloatable(bool floatable) {
  ::QToolBar::setFloatable(floatable);
}
void QToolBar_wrapper::setIconSize(const QSize &iconSize) {
  ::QToolBar::setIconSize(iconSize);
}
void QToolBar_wrapper::setMovable(bool movable) {
  ::QToolBar::setMovable(movable);
}
void QToolBar_wrapper::setOrientation(Qt::Orientation orientation) {
  ::QToolBar::setOrientation(orientation);
}
void QToolBar_wrapper::setVisible(bool visible) {
  if (m_setVisibleCallback) {
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    ::QToolBar::setVisible(visible);
  }
}
void QToolBar_wrapper::setVisible_nocallback(bool visible) {
  ::QToolBar::setVisible(visible);
}
QPainter *QToolBar_wrapper::sharedPainter() const {
  if (m_sharedPainterCallback) {
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QToolBar::sharedPainter();
  }
}
QPainter *QToolBar_wrapper::sharedPainter_nocallback() const {
  return ::QToolBar::sharedPainter();
}
QSize QToolBar_wrapper::sizeHint() const {
  if (m_sizeHintCallback) {
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QToolBar::sizeHint();
  }
}
QSize QToolBar_wrapper::sizeHint_nocallback() const {
  return ::QToolBar::sizeHint();
}
QAction *QToolBar_wrapper::toggleViewAction() const {
  return ::QToolBar::toggleViewAction();
}
void QToolBar_wrapper::topLevelChanged(bool topLevel) {
  ::QToolBar::topLevelChanged(topLevel);
}
QString QToolBar_wrapper::tr(const char *s, const char *c, int n) {
  return ::QToolBar::tr(s, c, n);
}
void QToolBar_wrapper::visibilityChanged(bool visible) {
  ::QToolBar::visibilityChanged(visible);
}
QWidget *QToolBar_wrapper::widgetForAction(QAction *action) const {
  return ::QToolBar::widgetForAction(action);
}
QToolBar_wrapper::~QToolBar_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QToolBar *fromPtr(void *ptr) {
  return reinterpret_cast<QToolBar *>(ptr);
}
static QtDartBindings_wrappersNS::QToolBar_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QToolBar_wrapper *>(ptr);
}
extern "C" {
void c_QToolBar_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QToolBar_wrapper *>(
      cppObj);
}
void *c_QToolBar__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QToolBar_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
void *c_QToolBar__constructor_QString_QWidget(const char *title_,
                                              void *parent_) {
  const auto title = QString::fromUtf8(title_);
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QToolBar_wrapper(title, parent);
  return reinterpret_cast<void *>(ptr);
}
// actionAt(const QPoint & p) const
void *c_QToolBar__actionAt_QPoint(void *thisObj, void *p_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPoint *>(p_);
  const auto &result = fromPtr(thisObj)->actionAt(p);
  return result;
}
// actionAt(int x, int y) const
void *c_QToolBar__actionAt_int_int(void *thisObj, int x, int y) {
  const auto &result = fromPtr(thisObj)->actionAt(x, y);
  return result;
}
// actionGeometry(QAction * action) const
void *c_QToolBar__actionGeometry_QAction(void *thisObj, void *action_) {
  auto action = reinterpret_cast<QAction *>(action_);
  const auto &result = new Dartagnan::ValueWrapper<QRect>{
      fromPtr(thisObj)->actionGeometry(action)};
  return result;
}
// actionTriggered(QAction * action)
void c_QToolBar__actionTriggered_QAction(void *thisObj, void *action_) {
  auto action = reinterpret_cast<QAction *>(action_);
  fromPtr(thisObj)->actionTriggered(action);
}
void c_QToolBar__onActionTriggered_QAction(void *thisObj, void *contextQObject,
                                           void *callback) {
  auto instance = reinterpret_cast<QToolBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QToolBar::actionTriggered,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// addSeparator()
void *c_QToolBar__addSeparator(void *thisObj) {
  const auto &result = fromPtr(thisObj)->addSeparator();
  return result;
}
// addWidget(QWidget * widget)
void *c_QToolBar__addWidget_QWidget(void *thisObj, void *widget_) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  const auto &result = fromPtr(thisObj)->addWidget(widget);
  return result;
}
// changeEvent(QEvent * event)
void c_QToolBar__changeEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->changeEvent_nocallback(event);
}
// clear()
void c_QToolBar__clear(void *thisObj) { fromPtr(thisObj)->clear(); }
void c_QToolBar__onCustomContextMenuRequested_QPoint(void *thisObj,
                                                     void *contextQObject,
                                                     void *callback) {
  auto instance = reinterpret_cast<QToolBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QToolBar::customContextMenuRequested,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// customEvent(QEvent * event)
void c_QToolBar__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// devType() const
int c_QToolBar__devType(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QToolBar_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->devType_nocallback();
    } else {
      return targetPtr->devType();
    }
  }();
  return result;
}
// event(QEvent * event)
bool c_QToolBar__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = fromWrapperPtr(thisObj)->event_nocallback(event);
  return result;
}
// eventFilter(QObject * watched, QEvent * event)
bool c_QToolBar__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                            void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QToolBar_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->eventFilter_nocallback(watched, event);
    } else {
      return targetPtr->eventFilter(watched, event);
    }
  }();
  return result;
}
// focusNextPrevChild(bool next)
bool c_QToolBar__focusNextPrevChild_bool(void *thisObj, bool next) {
  const auto &result =
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
  return result;
}
// hasHeightForWidth() const
bool c_QToolBar__hasHeightForWidth(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QToolBar_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->hasHeightForWidth_nocallback();
    } else {
      return targetPtr->hasHeightForWidth();
    }
  }();
  return result;
}
// heightForWidth(int arg__1) const
int c_QToolBar__heightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QToolBar_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->heightForWidth_nocallback(arg__1);
    } else {
      return targetPtr->heightForWidth(arg__1);
    }
  }();
  return result;
}
// iconSize() const
void *c_QToolBar__iconSize(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->iconSize()};
  return result;
}
// iconSizeChanged(const QSize & iconSize)
void c_QToolBar__iconSizeChanged_QSize(void *thisObj, void *iconSize_) {
  assert(iconSize_);
  auto &iconSize = *reinterpret_cast<QSize *>(iconSize_);
  fromPtr(thisObj)->iconSizeChanged(iconSize);
}
void c_QToolBar__onIconSizeChanged_QSize(void *thisObj, void *contextQObject,
                                         void *callback) {
  auto instance = reinterpret_cast<QToolBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QToolBar::iconSizeChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// initPainter(QPainter * painter) const
void c_QToolBar__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}
// insertSeparator(QAction * before)
void *c_QToolBar__insertSeparator_QAction(void *thisObj, void *before_) {
  auto before = reinterpret_cast<QAction *>(before_);
  const auto &result = fromPtr(thisObj)->insertSeparator(before);
  return result;
}
// insertWidget(QAction * before, QWidget * widget)
void *c_QToolBar__insertWidget_QAction_QWidget(void *thisObj, void *before_,
                                               void *widget_) {
  auto before = reinterpret_cast<QAction *>(before_);
  auto widget = reinterpret_cast<QWidget *>(widget_);
  const auto &result = fromPtr(thisObj)->insertWidget(before, widget);
  return result;
}
// isFloatable() const
bool c_QToolBar__isFloatable(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isFloatable();
  return result;
}
// isFloating() const
bool c_QToolBar__isFloating(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isFloating();
  return result;
}
// isMovable() const
bool c_QToolBar__isMovable(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isMovable();
  return result;
}
// leaveEvent(QEvent * event)
void c_QToolBar__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}
// minimumSizeHint() const
void *c_QToolBar__minimumSizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QToolBar_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->minimumSizeHint_nocallback();
    } else {
      return targetPtr->minimumSizeHint();
    }
  }()};
  return result;
}
// mouseDoubleClickEvent(QMouseEvent * event)
void c_QToolBar__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                   void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}
// mouseMoveEvent(QMouseEvent * event)
void c_QToolBar__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(event);
}
// mousePressEvent(QMouseEvent * event)
void c_QToolBar__mousePressEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(event);
}
// mouseReleaseEvent(QMouseEvent * event)
void c_QToolBar__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(event);
}
// movableChanged(bool movable)
void c_QToolBar__movableChanged_bool(void *thisObj, bool movable) {
  fromPtr(thisObj)->movableChanged(movable);
}
void c_QToolBar__onMovableChanged_bool(void *thisObj, void *contextQObject,
                                       void *callback) {
  auto instance = reinterpret_cast<QToolBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QToolBar::movableChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// orientation() const
int c_QToolBar__orientation(void *thisObj) {
  const auto &result = int(fromPtr(thisObj)->orientation());
  return result;
}
// orientationChanged(Qt::Orientation orientation)
void c_QToolBar__orientationChanged_Orientation(void *thisObj,
                                                int orientation) {
  fromPtr(thisObj)->orientationChanged(
      static_cast<Qt::Orientation>(orientation));
}
void c_QToolBar__onOrientationChanged_Orientation(void *thisObj,
                                                  void *contextQObject,
                                                  void *callback) {
  auto instance = reinterpret_cast<QToolBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QToolBar::orientationChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// paintEvent(QPaintEvent * event)
void c_QToolBar__paintEvent_QPaintEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QPaintEvent *>(event_);
  fromWrapperPtr(thisObj)->paintEvent_nocallback(event);
}
// setFloatable(bool floatable)
void c_QToolBar__setFloatable_bool(void *thisObj, bool floatable) {
  fromPtr(thisObj)->setFloatable(floatable);
}
// setIconSize(const QSize & iconSize)
void c_QToolBar__setIconSize_QSize(void *thisObj, void *iconSize_) {
  assert(iconSize_);
  auto &iconSize = *reinterpret_cast<QSize *>(iconSize_);
  fromPtr(thisObj)->setIconSize(iconSize);
}
// setMovable(bool movable)
void c_QToolBar__setMovable_bool(void *thisObj, bool movable) {
  fromPtr(thisObj)->setMovable(movable);
}
// setOrientation(Qt::Orientation orientation)
void c_QToolBar__setOrientation_Orientation(void *thisObj, int orientation) {
  fromPtr(thisObj)->setOrientation(static_cast<Qt::Orientation>(orientation));
}
// setVisible(bool visible)
void c_QToolBar__setVisible_bool(void *thisObj, bool visible) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QToolBar_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}
// sharedPainter() const
void *c_QToolBar__sharedPainter(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->sharedPainter_nocallback();
  return result;
}
// sizeHint() const
void *c_QToolBar__sizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QToolBar_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->sizeHint_nocallback();
    } else {
      return targetPtr->sizeHint();
    }
  }()};
  return result;
}
// toggleViewAction() const
void *c_QToolBar__toggleViewAction(void *thisObj) {
  const auto &result = fromPtr(thisObj)->toggleViewAction();
  return result;
}
// topLevelChanged(bool topLevel)
void c_QToolBar__topLevelChanged_bool(void *thisObj, bool topLevel) {
  fromPtr(thisObj)->topLevelChanged(topLevel);
}
void c_QToolBar__onTopLevelChanged_bool(void *thisObj, void *contextQObject,
                                        void *callback) {
  auto instance = reinterpret_cast<QToolBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QToolBar::topLevelChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// tr(const char * s, const char * c, int n)
void *c_static_QToolBar__tr_char_char_int(const char *s, const char *c, int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QToolBar_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
// visibilityChanged(bool visible)
void c_QToolBar__visibilityChanged_bool(void *thisObj, bool visible) {
  fromPtr(thisObj)->visibilityChanged(visible);
}
void c_QToolBar__onVisibilityChanged_bool(void *thisObj, void *contextQObject,
                                          void *callback) {
  auto instance = reinterpret_cast<QToolBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QToolBar::visibilityChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// widgetForAction(QAction * action) const
void *c_QToolBar__widgetForAction_QAction(void *thisObj, void *action_) {
  auto action = reinterpret_cast<QAction *>(action_);
  const auto &result = fromPtr(thisObj)->widgetForAction(action);
  return result;
}
void c_QToolBar__onWindowIconChanged_QIcon(void *thisObj, void *contextQObject,
                                           void *callback) {
  auto instance = reinterpret_cast<QToolBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QToolBar::windowIconChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QToolBar__onWindowIconTextChanged_QString(void *thisObj,
                                                 void *contextQObject,
                                                 void *callback) {
  auto instance = reinterpret_cast<QToolBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QToolBar::windowIconTextChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QToolBar__onWindowTitleChanged_QString(void *thisObj,
                                              void *contextQObject,
                                              void *callback) {
  auto instance = reinterpret_cast<QToolBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QToolBar::windowTitleChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QToolBar__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QToolBar__registerVirtualMethodCallback(void *ptr, void *callback,
                                               int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1128:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QToolBar_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QToolBar_wrapper::Callback_customEvent>(
        callback);
    break;
  case 1145:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QToolBar_wrapper::Callback_devType>(
        callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QToolBar_wrapper::Callback_event>(callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QToolBar_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1155:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QToolBar_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1169:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QToolBar_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 1173:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QToolBar_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 1176:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QToolBar_wrapper::Callback_initPainter>(
        callback);
    break;
  case 1202:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QToolBar_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1222:
    wrapper->m_minimumSizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QToolBar_wrapper::Callback_minimumSizeHint>(
        callback);
    break;
  case 1224:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QToolBar_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1226:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QToolBar_wrapper::Callback_mouseMoveEvent>(
        callback);
    break;
  case 1227:
    wrapper->m_mousePressEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QToolBar_wrapper::Callback_mousePressEvent>(
        callback);
    break;
  case 1228:
    wrapper->m_mouseReleaseEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QToolBar_wrapper::
                             Callback_mouseReleaseEvent>(callback);
    break;
  case 1235:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QToolBar_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 1314:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QToolBar_wrapper::Callback_setVisible>(
        callback);
    break;
  case 1323:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QToolBar_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1331:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QToolBar_wrapper::Callback_sizeHint>(
        callback);
    break;
  }
}
}
