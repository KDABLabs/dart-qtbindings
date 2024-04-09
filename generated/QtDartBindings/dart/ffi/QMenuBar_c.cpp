/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QMenuBar_c.h"

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
QMenuBar_wrapper::QMenuBar_wrapper(QWidget *parent) : ::QMenuBar(parent) {}
QAction *QMenuBar_wrapper::actionAt(const QPoint &arg__1) const {
  return ::QMenuBar::actionAt(arg__1);
}
QRect QMenuBar_wrapper::actionGeometry(QAction *arg__1) const {
  return ::QMenuBar::actionGeometry(arg__1);
}
QAction *QMenuBar_wrapper::activeAction() const {
  return ::QMenuBar::activeAction();
}
QAction *QMenuBar_wrapper::addMenu(QMenu *menu) {
  return ::QMenuBar::addMenu(menu);
}
QMenu *QMenuBar_wrapper::addMenu(const QIcon &icon, const QString &title) {
  return ::QMenuBar::addMenu(icon, title);
}
QMenu *QMenuBar_wrapper::addMenu(const QString &title) {
  return ::QMenuBar::addMenu(title);
}
QAction *QMenuBar_wrapper::addSeparator() { return ::QMenuBar::addSeparator(); }
void QMenuBar_wrapper::changeEvent(QEvent *arg__1) {
  if (m_changeEventCallback) {
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QMenuBar::changeEvent(arg__1);
  }
}
void QMenuBar_wrapper::changeEvent_nocallback(QEvent *arg__1) {
  ::QMenuBar::changeEvent(arg__1);
}
void QMenuBar_wrapper::clear() { ::QMenuBar::clear(); }
QWidget *QMenuBar_wrapper::cornerWidget() const {
  return ::QMenuBar::cornerWidget();
}
void QMenuBar_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QMenuBar::customEvent(event);
  }
}
void QMenuBar_wrapper::customEvent_nocallback(QEvent *event) {
  ::QMenuBar::customEvent(event);
}
int QMenuBar_wrapper::devType() const {
  if (m_devTypeCallback) {
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QMenuBar::devType();
  }
}
int QMenuBar_wrapper::devType_nocallback() const {
  return ::QMenuBar::devType();
}
bool QMenuBar_wrapper::event(QEvent *arg__1) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QMenuBar::event(arg__1);
  }
}
bool QMenuBar_wrapper::event_nocallback(QEvent *arg__1) {
  return ::QMenuBar::event(arg__1);
}
bool QMenuBar_wrapper::eventFilter(QObject *arg__1, QEvent *arg__2) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), arg__1, arg__2);
  } else {
    return ::QMenuBar::eventFilter(arg__1, arg__2);
  }
}
bool QMenuBar_wrapper::eventFilter_nocallback(QObject *arg__1, QEvent *arg__2) {
  return ::QMenuBar::eventFilter(arg__1, arg__2);
}
bool QMenuBar_wrapper::focusNextPrevChild(bool next) {
  if (m_focusNextPrevChildCallback) {
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    return ::QMenuBar::focusNextPrevChild(next);
  }
}
bool QMenuBar_wrapper::focusNextPrevChild_nocallback(bool next) {
  return ::QMenuBar::focusNextPrevChild(next);
}
bool QMenuBar_wrapper::hasHeightForWidth() const {
  if (m_hasHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QMenuBar::hasHeightForWidth();
  }
}
bool QMenuBar_wrapper::hasHeightForWidth_nocallback() const {
  return ::QMenuBar::hasHeightForWidth();
}
int QMenuBar_wrapper::heightForWidth(int arg__1) const {
  if (m_heightForWidthCallback) {
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QMenuBar::heightForWidth(arg__1);
  }
}
int QMenuBar_wrapper::heightForWidth_nocallback(int arg__1) const {
  return ::QMenuBar::heightForWidth(arg__1);
}
void QMenuBar_wrapper::hovered(QAction *action) { ::QMenuBar::hovered(action); }
void QMenuBar_wrapper::initPainter(QPainter *painter) const {
  if (m_initPainterCallback) {
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    ::QMenuBar::initPainter(painter);
  }
}
void QMenuBar_wrapper::initPainter_nocallback(QPainter *painter) const {
  ::QMenuBar::initPainter(painter);
}
QAction *QMenuBar_wrapper::insertMenu(QAction *before, QMenu *menu) {
  return ::QMenuBar::insertMenu(before, menu);
}
QAction *QMenuBar_wrapper::insertSeparator(QAction *before) {
  return ::QMenuBar::insertSeparator(before);
}
bool QMenuBar_wrapper::isDefaultUp() const { return ::QMenuBar::isDefaultUp(); }
bool QMenuBar_wrapper::isNativeMenuBar() const {
  return ::QMenuBar::isNativeMenuBar();
}
void QMenuBar_wrapper::leaveEvent(QEvent *arg__1) {
  if (m_leaveEventCallback) {
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QMenuBar::leaveEvent(arg__1);
  }
}
void QMenuBar_wrapper::leaveEvent_nocallback(QEvent *arg__1) {
  ::QMenuBar::leaveEvent(arg__1);
}
QSize QMenuBar_wrapper::minimumSizeHint() const {
  if (m_minimumSizeHintCallback) {
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QMenuBar::minimumSizeHint();
  }
}
QSize QMenuBar_wrapper::minimumSizeHint_nocallback() const {
  return ::QMenuBar::minimumSizeHint();
}
void QMenuBar_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  if (m_mouseDoubleClickEventCallback) {
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QMenuBar::mouseDoubleClickEvent(event);
  }
}
void QMenuBar_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *event) {
  ::QMenuBar::mouseDoubleClickEvent(event);
}
void QMenuBar_wrapper::mouseMoveEvent(QMouseEvent *arg__1) {
  if (m_mouseMoveEventCallback) {
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QMenuBar::mouseMoveEvent(arg__1);
  }
}
void QMenuBar_wrapper::mouseMoveEvent_nocallback(QMouseEvent *arg__1) {
  ::QMenuBar::mouseMoveEvent(arg__1);
}
void QMenuBar_wrapper::mousePressEvent(QMouseEvent *arg__1) {
  if (m_mousePressEventCallback) {
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QMenuBar::mousePressEvent(arg__1);
  }
}
void QMenuBar_wrapper::mousePressEvent_nocallback(QMouseEvent *arg__1) {
  ::QMenuBar::mousePressEvent(arg__1);
}
void QMenuBar_wrapper::mouseReleaseEvent(QMouseEvent *arg__1) {
  if (m_mouseReleaseEventCallback) {
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QMenuBar::mouseReleaseEvent(arg__1);
  }
}
void QMenuBar_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *arg__1) {
  ::QMenuBar::mouseReleaseEvent(arg__1);
}
void QMenuBar_wrapper::paintEvent(QPaintEvent *arg__1) {
  if (m_paintEventCallback) {
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QMenuBar::paintEvent(arg__1);
  }
}
void QMenuBar_wrapper::paintEvent_nocallback(QPaintEvent *arg__1) {
  ::QMenuBar::paintEvent(arg__1);
}
void QMenuBar_wrapper::setActiveAction(QAction *action) {
  ::QMenuBar::setActiveAction(action);
}
void QMenuBar_wrapper::setCornerWidget(QWidget *w) {
  ::QMenuBar::setCornerWidget(w);
}
void QMenuBar_wrapper::setDefaultUp(bool arg__1) {
  ::QMenuBar::setDefaultUp(arg__1);
}
void QMenuBar_wrapper::setNativeMenuBar(bool nativeMenuBar) {
  ::QMenuBar::setNativeMenuBar(nativeMenuBar);
}
void QMenuBar_wrapper::setVisible(bool visible) {
  if (m_setVisibleCallback) {
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    ::QMenuBar::setVisible(visible);
  }
}
void QMenuBar_wrapper::setVisible_nocallback(bool visible) {
  ::QMenuBar::setVisible(visible);
}
QPainter *QMenuBar_wrapper::sharedPainter() const {
  if (m_sharedPainterCallback) {
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QMenuBar::sharedPainter();
  }
}
QPainter *QMenuBar_wrapper::sharedPainter_nocallback() const {
  return ::QMenuBar::sharedPainter();
}
QSize QMenuBar_wrapper::sizeHint() const {
  if (m_sizeHintCallback) {
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QMenuBar::sizeHint();
  }
}
QSize QMenuBar_wrapper::sizeHint_nocallback() const {
  return ::QMenuBar::sizeHint();
}
QString QMenuBar_wrapper::tr(const char *s, const char *c, int n) {
  return ::QMenuBar::tr(s, c, n);
}
void QMenuBar_wrapper::triggered(QAction *action) {
  ::QMenuBar::triggered(action);
}
QMenuBar_wrapper::~QMenuBar_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QMenuBar *fromPtr(void *ptr) {
  return reinterpret_cast<QMenuBar *>(ptr);
}
static QtDartBindings_wrappersNS::QMenuBar_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QMenuBar_wrapper *>(ptr);
}
extern "C" {
void c_QMenuBar_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QMenuBar_wrapper *>(
      cppObj);
}
void *c_QMenuBar__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QMenuBar_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
// actionAt(const QPoint & arg__1) const
void *c_QMenuBar__actionAt_QPoint(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QPoint *>(arg__1_);
  const auto &result = fromPtr(thisObj)->actionAt(arg__1);
  return result;
}
// actionGeometry(QAction * arg__1) const
void *c_QMenuBar__actionGeometry_QAction(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QAction *>(arg__1_);
  const auto &result = new Dartagnan::ValueWrapper<QRect>{
      fromPtr(thisObj)->actionGeometry(arg__1)};
  return result;
}
// activeAction() const
void *c_QMenuBar__activeAction(void *thisObj) {
  const auto &result = fromPtr(thisObj)->activeAction();
  return result;
}
// addMenu(QMenu * menu)
void *c_QMenuBar__addMenu_QMenu(void *thisObj, void *menu_) {
  auto menu = reinterpret_cast<QMenu *>(menu_);
  const auto &result = fromPtr(thisObj)->addMenu(menu);
  return result;
}
// addMenu(const QIcon & icon, const QString & title)
void *c_QMenuBar__addMenu_QIcon_QString(void *thisObj, void *icon_,
                                        const char *title_) {
  assert(icon_);
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  const auto title = QString::fromUtf8(title_);
  const auto &result = fromPtr(thisObj)->addMenu(icon, title);
  free((char *)title_);
  return result;
}
// addMenu(const QString & title)
void *c_QMenuBar__addMenu_QString(void *thisObj, const char *title_) {
  const auto title = QString::fromUtf8(title_);
  const auto &result = fromPtr(thisObj)->addMenu(title);
  free((char *)title_);
  return result;
}
// addSeparator()
void *c_QMenuBar__addSeparator(void *thisObj) {
  const auto &result = fromPtr(thisObj)->addSeparator();
  return result;
}
// changeEvent(QEvent * arg__1)
void c_QMenuBar__changeEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->changeEvent_nocallback(arg__1);
}
// clear()
void c_QMenuBar__clear(void *thisObj) { fromPtr(thisObj)->clear(); }
// cornerWidget() const
void *c_QMenuBar__cornerWidget(void *thisObj) {
  const auto &result = fromPtr(thisObj)->cornerWidget();
  return result;
}
void c_QMenuBar__onCustomContextMenuRequested_QPoint(void *thisObj,
                                                     void *contextQObject,
                                                     void *callback) {
  auto instance = reinterpret_cast<QMenuBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMenuBar::customContextMenuRequested,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// customEvent(QEvent * event)
void c_QMenuBar__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// devType() const
int c_QMenuBar__devType(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QMenuBar_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->devType_nocallback();
    } else {
      return targetPtr->devType();
    }
  }();
  return result;
}
// event(QEvent * arg__1)
bool c_QMenuBar__event_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  const auto &result = fromWrapperPtr(thisObj)->event_nocallback(arg__1);
  return result;
}
// eventFilter(QObject * arg__1, QEvent * arg__2)
bool c_QMenuBar__eventFilter_QObject_QEvent(void *thisObj, void *arg__1_,
                                            void *arg__2_) {
  auto arg__1 = reinterpret_cast<QObject *>(arg__1_);
  auto arg__2 = reinterpret_cast<QEvent *>(arg__2_);
  const auto &result =
      fromWrapperPtr(thisObj)->eventFilter_nocallback(arg__1, arg__2);
  return result;
}
// focusNextPrevChild(bool next)
bool c_QMenuBar__focusNextPrevChild_bool(void *thisObj, bool next) {
  const auto &result =
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
  return result;
}
// hasHeightForWidth() const
bool c_QMenuBar__hasHeightForWidth(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QMenuBar_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->hasHeightForWidth_nocallback();
    } else {
      return targetPtr->hasHeightForWidth();
    }
  }();
  return result;
}
// heightForWidth(int arg__1) const
int c_QMenuBar__heightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QMenuBar_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->heightForWidth_nocallback(arg__1);
    } else {
      return targetPtr->heightForWidth(arg__1);
    }
  }();
  return result;
}
// hovered(QAction * action)
void c_QMenuBar__hovered_QAction(void *thisObj, void *action_) {
  auto action = reinterpret_cast<QAction *>(action_);
  fromPtr(thisObj)->hovered(action);
}
void c_QMenuBar__onHovered_QAction(void *thisObj, void *contextQObject,
                                   void *callback) {
  auto instance = reinterpret_cast<QMenuBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMenuBar::hovered, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// initPainter(QPainter * painter) const
void c_QMenuBar__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}
// insertMenu(QAction * before, QMenu * menu)
void *c_QMenuBar__insertMenu_QAction_QMenu(void *thisObj, void *before_,
                                           void *menu_) {
  auto before = reinterpret_cast<QAction *>(before_);
  auto menu = reinterpret_cast<QMenu *>(menu_);
  const auto &result = fromPtr(thisObj)->insertMenu(before, menu);
  return result;
}
// insertSeparator(QAction * before)
void *c_QMenuBar__insertSeparator_QAction(void *thisObj, void *before_) {
  auto before = reinterpret_cast<QAction *>(before_);
  const auto &result = fromPtr(thisObj)->insertSeparator(before);
  return result;
}
// isDefaultUp() const
bool c_QMenuBar__isDefaultUp(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isDefaultUp();
  return result;
}
// isNativeMenuBar() const
bool c_QMenuBar__isNativeMenuBar(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isNativeMenuBar();
  return result;
}
// leaveEvent(QEvent * arg__1)
void c_QMenuBar__leaveEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(arg__1);
}
// minimumSizeHint() const
void *c_QMenuBar__minimumSizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QMenuBar_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->minimumSizeHint_nocallback();
    } else {
      return targetPtr->minimumSizeHint();
    }
  }()};
  return result;
}
// mouseDoubleClickEvent(QMouseEvent * event)
void c_QMenuBar__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                   void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}
// mouseMoveEvent(QMouseEvent * arg__1)
void c_QMenuBar__mouseMoveEvent_QMouseEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(arg__1);
}
// mousePressEvent(QMouseEvent * arg__1)
void c_QMenuBar__mousePressEvent_QMouseEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(arg__1);
}
// mouseReleaseEvent(QMouseEvent * arg__1)
void c_QMenuBar__mouseReleaseEvent_QMouseEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(arg__1);
}
// paintEvent(QPaintEvent * arg__1)
void c_QMenuBar__paintEvent_QPaintEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QPaintEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->paintEvent_nocallback(arg__1);
}
// setActiveAction(QAction * action)
void c_QMenuBar__setActiveAction_QAction(void *thisObj, void *action_) {
  auto action = reinterpret_cast<QAction *>(action_);
  fromPtr(thisObj)->setActiveAction(action);
}
// setCornerWidget(QWidget * w)
void c_QMenuBar__setCornerWidget_QWidget(void *thisObj, void *w_) {
  auto w = reinterpret_cast<QWidget *>(w_);
  fromPtr(thisObj)->setCornerWidget(w);
}
// setDefaultUp(bool arg__1)
void c_QMenuBar__setDefaultUp_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->setDefaultUp(arg__1);
}
// setNativeMenuBar(bool nativeMenuBar)
void c_QMenuBar__setNativeMenuBar_bool(void *thisObj, bool nativeMenuBar) {
  fromPtr(thisObj)->setNativeMenuBar(nativeMenuBar);
}
// setVisible(bool visible)
void c_QMenuBar__setVisible_bool(void *thisObj, bool visible) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QMenuBar_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}
// sharedPainter() const
void *c_QMenuBar__sharedPainter(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->sharedPainter_nocallback();
  return result;
}
// sizeHint() const
void *c_QMenuBar__sizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QMenuBar_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->sizeHint_nocallback();
    } else {
      return targetPtr->sizeHint();
    }
  }()};
  return result;
}
// tr(const char * s, const char * c, int n)
void *c_static_QMenuBar__tr_char_char_int(const char *s, const char *c, int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QMenuBar_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
// triggered(QAction * action)
void c_QMenuBar__triggered_QAction(void *thisObj, void *action_) {
  auto action = reinterpret_cast<QAction *>(action_);
  fromPtr(thisObj)->triggered(action);
}
void c_QMenuBar__onTriggered_QAction(void *thisObj, void *contextQObject,
                                     void *callback) {
  auto instance = reinterpret_cast<QMenuBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMenuBar::triggered, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QMenuBar__onWindowIconChanged_QIcon(void *thisObj, void *contextQObject,
                                           void *callback) {
  auto instance = reinterpret_cast<QMenuBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMenuBar::windowIconChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QMenuBar__onWindowIconTextChanged_QString(void *thisObj,
                                                 void *contextQObject,
                                                 void *callback) {
  auto instance = reinterpret_cast<QMenuBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMenuBar::windowIconTextChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QMenuBar__onWindowTitleChanged_QString(void *thisObj,
                                              void *contextQObject,
                                              void *callback) {
  auto instance = reinterpret_cast<QMenuBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMenuBar::windowTitleChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QMenuBar__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QMenuBar__registerVirtualMethodCallback(void *ptr, void *callback,
                                               int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1128:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenuBar_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenuBar_wrapper::Callback_customEvent>(
        callback);
    break;
  case 1145:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenuBar_wrapper::Callback_devType>(
        callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenuBar_wrapper::Callback_event>(callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenuBar_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1155:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QMenuBar_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1169:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QMenuBar_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 1173:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenuBar_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 1176:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenuBar_wrapper::Callback_initPainter>(
        callback);
    break;
  case 1202:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenuBar_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1222:
    wrapper->m_minimumSizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenuBar_wrapper::Callback_minimumSizeHint>(
        callback);
    break;
  case 1224:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QMenuBar_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1226:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenuBar_wrapper::Callback_mouseMoveEvent>(
        callback);
    break;
  case 1227:
    wrapper->m_mousePressEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenuBar_wrapper::Callback_mousePressEvent>(
        callback);
    break;
  case 1228:
    wrapper->m_mouseReleaseEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QMenuBar_wrapper::
                             Callback_mouseReleaseEvent>(callback);
    break;
  case 1235:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenuBar_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 1314:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenuBar_wrapper::Callback_setVisible>(
        callback);
    break;
  case 1323:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenuBar_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1331:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenuBar_wrapper::Callback_sizeHint>(
        callback);
    break;
  }
}
}
