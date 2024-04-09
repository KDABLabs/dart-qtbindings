/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QMainWindow_c.h"

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
QMainWindow_wrapper::QMainWindow_wrapper(QWidget *parent)
    : ::QMainWindow(parent) {}
void QMainWindow_wrapper::addToolBar(QToolBar *toolbar) {
  ::QMainWindow::addToolBar(toolbar);
}
QToolBar *QMainWindow_wrapper::addToolBar(const QString &title) {
  return ::QMainWindow::addToolBar(title);
}
void QMainWindow_wrapper::addToolBarBreak() {
  ::QMainWindow::addToolBarBreak();
}
QWidget *QMainWindow_wrapper::centralWidget() const {
  return ::QMainWindow::centralWidget();
}
void QMainWindow_wrapper::changeEvent(QEvent *arg__1) {
  if (m_changeEventCallback) {
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QMainWindow::changeEvent(arg__1);
  }
}
void QMainWindow_wrapper::changeEvent_nocallback(QEvent *arg__1) {
  ::QMainWindow::changeEvent(arg__1);
}
QMenu *QMainWindow_wrapper::createPopupMenu() {
  if (m_createPopupMenuCallback) {
    const void *thisPtr = this;
    return m_createPopupMenuCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QMainWindow::createPopupMenu();
  }
}
QMenu *QMainWindow_wrapper::createPopupMenu_nocallback() {
  return ::QMainWindow::createPopupMenu();
}
void QMainWindow_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QMainWindow::customEvent(event);
  }
}
void QMainWindow_wrapper::customEvent_nocallback(QEvent *event) {
  ::QMainWindow::customEvent(event);
}
int QMainWindow_wrapper::devType() const {
  if (m_devTypeCallback) {
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QMainWindow::devType();
  }
}
int QMainWindow_wrapper::devType_nocallback() const {
  return ::QMainWindow::devType();
}
bool QMainWindow_wrapper::documentMode() const {
  return ::QMainWindow::documentMode();
}
bool QMainWindow_wrapper::event(QEvent *event) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    return ::QMainWindow::event(event);
  }
}
bool QMainWindow_wrapper::event_nocallback(QEvent *event) {
  return ::QMainWindow::event(event);
}
bool QMainWindow_wrapper::eventFilter(QObject *watched, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QMainWindow::eventFilter(watched, event);
  }
}
bool QMainWindow_wrapper::eventFilter_nocallback(QObject *watched,
                                                 QEvent *event) {
  return ::QMainWindow::eventFilter(watched, event);
}
bool QMainWindow_wrapper::focusNextPrevChild(bool next) {
  if (m_focusNextPrevChildCallback) {
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    return ::QMainWindow::focusNextPrevChild(next);
  }
}
bool QMainWindow_wrapper::focusNextPrevChild_nocallback(bool next) {
  return ::QMainWindow::focusNextPrevChild(next);
}
bool QMainWindow_wrapper::hasHeightForWidth() const {
  if (m_hasHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QMainWindow::hasHeightForWidth();
  }
}
bool QMainWindow_wrapper::hasHeightForWidth_nocallback() const {
  return ::QMainWindow::hasHeightForWidth();
}
int QMainWindow_wrapper::heightForWidth(int arg__1) const {
  if (m_heightForWidthCallback) {
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QMainWindow::heightForWidth(arg__1);
  }
}
int QMainWindow_wrapper::heightForWidth_nocallback(int arg__1) const {
  return ::QMainWindow::heightForWidth(arg__1);
}
QSize QMainWindow_wrapper::iconSize() const {
  return ::QMainWindow::iconSize();
}
void QMainWindow_wrapper::iconSizeChanged(const QSize &iconSize) {
  ::QMainWindow::iconSizeChanged(iconSize);
}
void QMainWindow_wrapper::initPainter(QPainter *painter) const {
  if (m_initPainterCallback) {
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    ::QMainWindow::initPainter(painter);
  }
}
void QMainWindow_wrapper::initPainter_nocallback(QPainter *painter) const {
  ::QMainWindow::initPainter(painter);
}
void QMainWindow_wrapper::insertToolBar(QToolBar *before, QToolBar *toolbar) {
  ::QMainWindow::insertToolBar(before, toolbar);
}
void QMainWindow_wrapper::insertToolBarBreak(QToolBar *before) {
  ::QMainWindow::insertToolBarBreak(before);
}
bool QMainWindow_wrapper::isAnimated() const {
  return ::QMainWindow::isAnimated();
}
bool QMainWindow_wrapper::isDockNestingEnabled() const {
  return ::QMainWindow::isDockNestingEnabled();
}
bool QMainWindow_wrapper::isSeparator(const QPoint &pos) const {
  return ::QMainWindow::isSeparator(pos);
}
void QMainWindow_wrapper::leaveEvent(QEvent *event) {
  if (m_leaveEventCallback) {
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QMainWindow::leaveEvent(event);
  }
}
void QMainWindow_wrapper::leaveEvent_nocallback(QEvent *event) {
  ::QMainWindow::leaveEvent(event);
}
QMenuBar *QMainWindow_wrapper::menuBar() const {
  return ::QMainWindow::menuBar();
}
QWidget *QMainWindow_wrapper::menuWidget() const {
  return ::QMainWindow::menuWidget();
}
QSize QMainWindow_wrapper::minimumSizeHint() const {
  if (m_minimumSizeHintCallback) {
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QMainWindow::minimumSizeHint();
  }
}
QSize QMainWindow_wrapper::minimumSizeHint_nocallback() const {
  return ::QMainWindow::minimumSizeHint();
}
void QMainWindow_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  if (m_mouseDoubleClickEventCallback) {
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QMainWindow::mouseDoubleClickEvent(event);
  }
}
void QMainWindow_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *event) {
  ::QMainWindow::mouseDoubleClickEvent(event);
}
void QMainWindow_wrapper::mouseMoveEvent(QMouseEvent *event) {
  if (m_mouseMoveEventCallback) {
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QMainWindow::mouseMoveEvent(event);
  }
}
void QMainWindow_wrapper::mouseMoveEvent_nocallback(QMouseEvent *event) {
  ::QMainWindow::mouseMoveEvent(event);
}
void QMainWindow_wrapper::mousePressEvent(QMouseEvent *event) {
  if (m_mousePressEventCallback) {
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QMainWindow::mousePressEvent(event);
  }
}
void QMainWindow_wrapper::mousePressEvent_nocallback(QMouseEvent *event) {
  ::QMainWindow::mousePressEvent(event);
}
void QMainWindow_wrapper::mouseReleaseEvent(QMouseEvent *event) {
  if (m_mouseReleaseEventCallback) {
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QMainWindow::mouseReleaseEvent(event);
  }
}
void QMainWindow_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *event) {
  ::QMainWindow::mouseReleaseEvent(event);
}
void QMainWindow_wrapper::paintEvent(QPaintEvent *event) {
  if (m_paintEventCallback) {
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QMainWindow::paintEvent(event);
  }
}
void QMainWindow_wrapper::paintEvent_nocallback(QPaintEvent *event) {
  ::QMainWindow::paintEvent(event);
}
void QMainWindow_wrapper::removeToolBar(QToolBar *toolbar) {
  ::QMainWindow::removeToolBar(toolbar);
}
void QMainWindow_wrapper::removeToolBarBreak(QToolBar *before) {
  ::QMainWindow::removeToolBarBreak(before);
}
bool QMainWindow_wrapper::restoreState(const QByteArray &state, int version) {
  return ::QMainWindow::restoreState(state, version);
}
QByteArray QMainWindow_wrapper::saveState(int version) const {
  return ::QMainWindow::saveState(version);
}
void QMainWindow_wrapper::setAnimated(bool enabled) {
  ::QMainWindow::setAnimated(enabled);
}
void QMainWindow_wrapper::setCentralWidget(QWidget *widget) {
  ::QMainWindow::setCentralWidget(widget);
}
void QMainWindow_wrapper::setDockNestingEnabled(bool enabled) {
  ::QMainWindow::setDockNestingEnabled(enabled);
}
void QMainWindow_wrapper::setDocumentMode(bool enabled) {
  ::QMainWindow::setDocumentMode(enabled);
}
void QMainWindow_wrapper::setIconSize(const QSize &iconSize) {
  ::QMainWindow::setIconSize(iconSize);
}
void QMainWindow_wrapper::setMenuBar(QMenuBar *menubar) {
  ::QMainWindow::setMenuBar(menubar);
}
void QMainWindow_wrapper::setMenuWidget(QWidget *menubar) {
  ::QMainWindow::setMenuWidget(menubar);
}
void QMainWindow_wrapper::setStatusBar(QStatusBar *statusbar) {
  ::QMainWindow::setStatusBar(statusbar);
}
void QMainWindow_wrapper::setUnifiedTitleAndToolBarOnMac(bool set) {
  ::QMainWindow::setUnifiedTitleAndToolBarOnMac(set);
}
void QMainWindow_wrapper::setVisible(bool visible) {
  if (m_setVisibleCallback) {
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    ::QMainWindow::setVisible(visible);
  }
}
void QMainWindow_wrapper::setVisible_nocallback(bool visible) {
  ::QMainWindow::setVisible(visible);
}
QPainter *QMainWindow_wrapper::sharedPainter() const {
  if (m_sharedPainterCallback) {
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QMainWindow::sharedPainter();
  }
}
QPainter *QMainWindow_wrapper::sharedPainter_nocallback() const {
  return ::QMainWindow::sharedPainter();
}
QSize QMainWindow_wrapper::sizeHint() const {
  if (m_sizeHintCallback) {
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QMainWindow::sizeHint();
  }
}
QSize QMainWindow_wrapper::sizeHint_nocallback() const {
  return ::QMainWindow::sizeHint();
}
QStatusBar *QMainWindow_wrapper::statusBar() const {
  return ::QMainWindow::statusBar();
}
QWidget *QMainWindow_wrapper::takeCentralWidget() {
  return ::QMainWindow::takeCentralWidget();
}
bool QMainWindow_wrapper::toolBarBreak(QToolBar *toolbar) const {
  return ::QMainWindow::toolBarBreak(toolbar);
}
QString QMainWindow_wrapper::tr(const char *s, const char *c, int n) {
  return ::QMainWindow::tr(s, c, n);
}
bool QMainWindow_wrapper::unifiedTitleAndToolBarOnMac() const {
  return ::QMainWindow::unifiedTitleAndToolBarOnMac();
}
QMainWindow_wrapper::~QMainWindow_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QMainWindow *fromPtr(void *ptr) {
  return reinterpret_cast<QMainWindow *>(ptr);
}
static QtDartBindings_wrappersNS::QMainWindow_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper *>(
      ptr);
}
extern "C" {
void c_QMainWindow_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper *>(
      cppObj);
}
void *c_QMainWindow__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QMainWindow_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
// addToolBar(QToolBar * toolbar)
void c_QMainWindow__addToolBar_QToolBar(void *thisObj, void *toolbar_) {
  auto toolbar = reinterpret_cast<QToolBar *>(toolbar_);
  fromPtr(thisObj)->addToolBar(toolbar);
}
// addToolBar(const QString & title)
void *c_QMainWindow__addToolBar_QString(void *thisObj, const char *title_) {
  const auto title = QString::fromUtf8(title_);
  const auto &result = fromPtr(thisObj)->addToolBar(title);
  free((char *)title_);
  return result;
}
// addToolBarBreak()
void c_QMainWindow__addToolBarBreak(void *thisObj) {
  fromPtr(thisObj)->addToolBarBreak();
}
// centralWidget() const
void *c_QMainWindow__centralWidget(void *thisObj) {
  const auto &result = fromPtr(thisObj)->centralWidget();
  return result;
}
// changeEvent(QEvent * arg__1)
void c_QMainWindow__changeEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->changeEvent_nocallback(arg__1);
}
// createPopupMenu()
void *c_QMainWindow__createPopupMenu(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->createPopupMenu_nocallback();
    } else {
      return targetPtr->createPopupMenu();
    }
  }();
  return result;
}
void c_QMainWindow__onCustomContextMenuRequested_QPoint(void *thisObj,
                                                        void *contextQObject,
                                                        void *callback) {
  auto instance = reinterpret_cast<QMainWindow *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMainWindow::customContextMenuRequested,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// customEvent(QEvent * event)
void c_QMainWindow__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// devType() const
int c_QMainWindow__devType(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->devType_nocallback();
    } else {
      return targetPtr->devType();
    }
  }();
  return result;
}
// documentMode() const
bool c_QMainWindow__documentMode(void *thisObj) {
  const auto &result = fromPtr(thisObj)->documentMode();
  return result;
}
// event(QEvent * event)
bool c_QMainWindow__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = fromWrapperPtr(thisObj)->event_nocallback(event);
  return result;
}
// eventFilter(QObject * watched, QEvent * event)
bool c_QMainWindow__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                               void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper *>(
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
bool c_QMainWindow__focusNextPrevChild_bool(void *thisObj, bool next) {
  const auto &result =
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
  return result;
}
// hasHeightForWidth() const
bool c_QMainWindow__hasHeightForWidth(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper *>(
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
int c_QMainWindow__heightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->heightForWidth_nocallback(arg__1);
    } else {
      return targetPtr->heightForWidth(arg__1);
    }
  }();
  return result;
}
// iconSize() const
void *c_QMainWindow__iconSize(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->iconSize()};
  return result;
}
// iconSizeChanged(const QSize & iconSize)
void c_QMainWindow__iconSizeChanged_QSize(void *thisObj, void *iconSize_) {
  assert(iconSize_);
  auto &iconSize = *reinterpret_cast<QSize *>(iconSize_);
  fromPtr(thisObj)->iconSizeChanged(iconSize);
}
void c_QMainWindow__onIconSizeChanged_QSize(void *thisObj, void *contextQObject,
                                            void *callback) {
  auto instance = reinterpret_cast<QMainWindow *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMainWindow::iconSizeChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// initPainter(QPainter * painter) const
void c_QMainWindow__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}
// insertToolBar(QToolBar * before, QToolBar * toolbar)
void c_QMainWindow__insertToolBar_QToolBar_QToolBar(void *thisObj,
                                                    void *before_,
                                                    void *toolbar_) {
  auto before = reinterpret_cast<QToolBar *>(before_);
  auto toolbar = reinterpret_cast<QToolBar *>(toolbar_);
  fromPtr(thisObj)->insertToolBar(before, toolbar);
}
// insertToolBarBreak(QToolBar * before)
void c_QMainWindow__insertToolBarBreak_QToolBar(void *thisObj, void *before_) {
  auto before = reinterpret_cast<QToolBar *>(before_);
  fromPtr(thisObj)->insertToolBarBreak(before);
}
// isAnimated() const
bool c_QMainWindow__isAnimated(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isAnimated();
  return result;
}
// isDockNestingEnabled() const
bool c_QMainWindow__isDockNestingEnabled(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isDockNestingEnabled();
  return result;
}
// isSeparator(const QPoint & pos) const
bool c_QMainWindow__isSeparator_QPoint(void *thisObj, void *pos_) {
  assert(pos_);
  auto &pos = *reinterpret_cast<QPoint *>(pos_);
  const auto &result = fromPtr(thisObj)->isSeparator(pos);
  return result;
}
// leaveEvent(QEvent * event)
void c_QMainWindow__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}
// menuBar() const
void *c_QMainWindow__menuBar(void *thisObj) {
  const auto &result = fromPtr(thisObj)->menuBar();
  return result;
}
// menuWidget() const
void *c_QMainWindow__menuWidget(void *thisObj) {
  const auto &result = fromPtr(thisObj)->menuWidget();
  return result;
}
// minimumSizeHint() const
void *c_QMainWindow__minimumSizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper *>(
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
void c_QMainWindow__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                      void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}
// mouseMoveEvent(QMouseEvent * event)
void c_QMainWindow__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(event);
}
// mousePressEvent(QMouseEvent * event)
void c_QMainWindow__mousePressEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(event);
}
// mouseReleaseEvent(QMouseEvent * event)
void c_QMainWindow__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(event);
}
// paintEvent(QPaintEvent * event)
void c_QMainWindow__paintEvent_QPaintEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QPaintEvent *>(event_);
  fromWrapperPtr(thisObj)->paintEvent_nocallback(event);
}
// removeToolBar(QToolBar * toolbar)
void c_QMainWindow__removeToolBar_QToolBar(void *thisObj, void *toolbar_) {
  auto toolbar = reinterpret_cast<QToolBar *>(toolbar_);
  fromPtr(thisObj)->removeToolBar(toolbar);
}
// removeToolBarBreak(QToolBar * before)
void c_QMainWindow__removeToolBarBreak_QToolBar(void *thisObj, void *before_) {
  auto before = reinterpret_cast<QToolBar *>(before_);
  fromPtr(thisObj)->removeToolBarBreak(before);
}
// restoreState(const QByteArray & state, int version)
bool c_QMainWindow__restoreState_QByteArray_int(void *thisObj, void *state_,
                                                int version) {
  assert(state_);
  auto &state = *reinterpret_cast<QByteArray *>(state_);
  const auto &result = fromPtr(thisObj)->restoreState(state, version);
  return result;
}
// saveState(int version) const
void *c_QMainWindow__saveState_int(void *thisObj, int version) {
  const auto &result = new Dartagnan::ValueWrapper<QByteArray>{
      fromPtr(thisObj)->saveState(version)};
  return result;
}
// setAnimated(bool enabled)
void c_QMainWindow__setAnimated_bool(void *thisObj, bool enabled) {
  fromPtr(thisObj)->setAnimated(enabled);
}
// setCentralWidget(QWidget * widget)
void c_QMainWindow__setCentralWidget_QWidget(void *thisObj, void *widget_) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  fromPtr(thisObj)->setCentralWidget(widget);
}
// setDockNestingEnabled(bool enabled)
void c_QMainWindow__setDockNestingEnabled_bool(void *thisObj, bool enabled) {
  fromPtr(thisObj)->setDockNestingEnabled(enabled);
}
// setDocumentMode(bool enabled)
void c_QMainWindow__setDocumentMode_bool(void *thisObj, bool enabled) {
  fromPtr(thisObj)->setDocumentMode(enabled);
}
// setIconSize(const QSize & iconSize)
void c_QMainWindow__setIconSize_QSize(void *thisObj, void *iconSize_) {
  assert(iconSize_);
  auto &iconSize = *reinterpret_cast<QSize *>(iconSize_);
  fromPtr(thisObj)->setIconSize(iconSize);
}
// setMenuBar(QMenuBar * menubar)
void c_QMainWindow__setMenuBar_QMenuBar(void *thisObj, void *menubar_) {
  auto menubar = reinterpret_cast<QMenuBar *>(menubar_);
  fromPtr(thisObj)->setMenuBar(menubar);
}
// setMenuWidget(QWidget * menubar)
void c_QMainWindow__setMenuWidget_QWidget(void *thisObj, void *menubar_) {
  auto menubar = reinterpret_cast<QWidget *>(menubar_);
  fromPtr(thisObj)->setMenuWidget(menubar);
}
// setStatusBar(QStatusBar * statusbar)
void c_QMainWindow__setStatusBar_QStatusBar(void *thisObj, void *statusbar_) {
  auto statusbar = reinterpret_cast<QStatusBar *>(statusbar_);
  fromPtr(thisObj)->setStatusBar(statusbar);
}
// setUnifiedTitleAndToolBarOnMac(bool set)
void c_QMainWindow__setUnifiedTitleAndToolBarOnMac_bool(void *thisObj,
                                                        bool set) {
  fromPtr(thisObj)->setUnifiedTitleAndToolBarOnMac(set);
}
// setVisible(bool visible)
void c_QMainWindow__setVisible_bool(void *thisObj, bool visible) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}
// sharedPainter() const
void *c_QMainWindow__sharedPainter(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->sharedPainter_nocallback();
  return result;
}
// sizeHint() const
void *c_QMainWindow__sizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->sizeHint_nocallback();
    } else {
      return targetPtr->sizeHint();
    }
  }()};
  return result;
}
// statusBar() const
void *c_QMainWindow__statusBar(void *thisObj) {
  const auto &result = fromPtr(thisObj)->statusBar();
  return result;
}
// takeCentralWidget()
void *c_QMainWindow__takeCentralWidget(void *thisObj) {
  const auto &result = fromPtr(thisObj)->takeCentralWidget();
  return result;
}
// toolBarBreak(QToolBar * toolbar) const
bool c_QMainWindow__toolBarBreak_QToolBar(void *thisObj, void *toolbar_) {
  auto toolbar = reinterpret_cast<QToolBar *>(toolbar_);
  const auto &result = fromPtr(thisObj)->toolBarBreak(toolbar);
  return result;
}
// tr(const char * s, const char * c, int n)
void *c_static_QMainWindow__tr_char_char_int(const char *s, const char *c,
                                             int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QMainWindow_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
// unifiedTitleAndToolBarOnMac() const
bool c_QMainWindow__unifiedTitleAndToolBarOnMac(void *thisObj) {
  const auto &result = fromPtr(thisObj)->unifiedTitleAndToolBarOnMac();
  return result;
}
void c_QMainWindow__onWindowIconChanged_QIcon(void *thisObj,
                                              void *contextQObject,
                                              void *callback) {
  auto instance = reinterpret_cast<QMainWindow *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMainWindow::windowIconChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QMainWindow__onWindowIconTextChanged_QString(void *thisObj,
                                                    void *contextQObject,
                                                    void *callback) {
  auto instance = reinterpret_cast<QMainWindow *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMainWindow::windowIconTextChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QMainWindow__onWindowTitleChanged_QString(void *thisObj,
                                                 void *contextQObject,
                                                 void *callback) {
  auto instance = reinterpret_cast<QMainWindow *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMainWindow::windowTitleChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QMainWindow__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QMainWindow__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1128:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMainWindow_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 2553:
    wrapper->m_createPopupMenuCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper::
                             Callback_createPopupMenu>(callback);
    break;
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMainWindow_wrapper::Callback_customEvent>(
        callback);
    break;
  case 1145:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMainWindow_wrapper::Callback_devType>(
        callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMainWindow_wrapper::Callback_event>(
        callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMainWindow_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1155:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1169:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 1173:
    wrapper->m_heightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper::
                             Callback_heightForWidth>(callback);
    break;
  case 1176:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMainWindow_wrapper::Callback_initPainter>(
        callback);
    break;
  case 1202:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMainWindow_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1222:
    wrapper->m_minimumSizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper::
                             Callback_minimumSizeHint>(callback);
    break;
  case 1224:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1226:
    wrapper->m_mouseMoveEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper::
                             Callback_mouseMoveEvent>(callback);
    break;
  case 1227:
    wrapper->m_mousePressEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper::
                             Callback_mousePressEvent>(callback);
    break;
  case 1228:
    wrapper->m_mouseReleaseEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper::
                             Callback_mouseReleaseEvent>(callback);
    break;
  case 1235:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMainWindow_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 1314:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMainWindow_wrapper::Callback_setVisible>(
        callback);
    break;
  case 1323:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMainWindow_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1331:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMainWindow_wrapper::Callback_sizeHint>(
        callback);
    break;
  }
}
}
