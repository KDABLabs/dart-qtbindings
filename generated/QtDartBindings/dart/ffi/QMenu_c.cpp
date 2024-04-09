/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QMenu_c.h"

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
QMenu_wrapper::QMenu_wrapper(QWidget *parent) : ::QMenu(parent) {}
QMenu_wrapper::QMenu_wrapper(const QString &title, QWidget *parent)
    : ::QMenu(title, parent) {}
void QMenu_wrapper::aboutToHide() { ::QMenu::aboutToHide(); }
void QMenu_wrapper::aboutToShow() { ::QMenu::aboutToShow(); }
QAction *QMenu_wrapper::actionAt(const QPoint &arg__1) const {
  return ::QMenu::actionAt(arg__1);
}
QRect QMenu_wrapper::actionGeometry(QAction *arg__1) const {
  return ::QMenu::actionGeometry(arg__1);
}
QAction *QMenu_wrapper::activeAction() const { return ::QMenu::activeAction(); }
QAction *QMenu_wrapper::addMenu(QMenu *menu) { return ::QMenu::addMenu(menu); }
QMenu *QMenu_wrapper::addMenu(const QIcon &icon, const QString &title) {
  return ::QMenu::addMenu(icon, title);
}
QMenu *QMenu_wrapper::addMenu(const QString &title) {
  return ::QMenu::addMenu(title);
}
QAction *QMenu_wrapper::addSection(const QIcon &icon, const QString &text) {
  return ::QMenu::addSection(icon, text);
}
QAction *QMenu_wrapper::addSection(const QString &text) {
  return ::QMenu::addSection(text);
}
QAction *QMenu_wrapper::addSeparator() { return ::QMenu::addSeparator(); }
void QMenu_wrapper::changeEvent(QEvent *arg__1) {
  if (m_changeEventCallback) {
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QMenu::changeEvent(arg__1);
  }
}
void QMenu_wrapper::changeEvent_nocallback(QEvent *arg__1) {
  ::QMenu::changeEvent(arg__1);
}
void QMenu_wrapper::clear() { ::QMenu::clear(); }
int QMenu_wrapper::columnCount() const { return ::QMenu::columnCount(); }
void QMenu_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QMenu::customEvent(event);
  }
}
void QMenu_wrapper::customEvent_nocallback(QEvent *event) {
  ::QMenu::customEvent(event);
}
QAction *QMenu_wrapper::defaultAction() const {
  return ::QMenu::defaultAction();
}
int QMenu_wrapper::devType() const {
  if (m_devTypeCallback) {
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QMenu::devType();
  }
}
int QMenu_wrapper::devType_nocallback() const { return ::QMenu::devType(); }
bool QMenu_wrapper::event(QEvent *arg__1) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QMenu::event(arg__1);
  }
}
bool QMenu_wrapper::event_nocallback(QEvent *arg__1) {
  return ::QMenu::event(arg__1);
}
bool QMenu_wrapper::eventFilter(QObject *watched, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QMenu::eventFilter(watched, event);
  }
}
bool QMenu_wrapper::eventFilter_nocallback(QObject *watched, QEvent *event) {
  return ::QMenu::eventFilter(watched, event);
}
QAction *QMenu_wrapper::exec() { return ::QMenu::exec(); }
QAction *QMenu_wrapper::exec(const QList<QAction *> &actions, const QPoint &pos,
                             QAction *at, QWidget *parent) {
  return ::QMenu::exec(actions, pos, at, parent);
}
QAction *QMenu_wrapper::exec(const QPoint &pos, QAction *at) {
  return ::QMenu::exec(pos, at);
}
bool QMenu_wrapper::focusNextPrevChild(bool next) {
  if (m_focusNextPrevChildCallback) {
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    return ::QMenu::focusNextPrevChild(next);
  }
}
bool QMenu_wrapper::focusNextPrevChild_nocallback(bool next) {
  return ::QMenu::focusNextPrevChild(next);
}
bool QMenu_wrapper::hasHeightForWidth() const {
  if (m_hasHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QMenu::hasHeightForWidth();
  }
}
bool QMenu_wrapper::hasHeightForWidth_nocallback() const {
  return ::QMenu::hasHeightForWidth();
}
int QMenu_wrapper::heightForWidth(int arg__1) const {
  if (m_heightForWidthCallback) {
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QMenu::heightForWidth(arg__1);
  }
}
int QMenu_wrapper::heightForWidth_nocallback(int arg__1) const {
  return ::QMenu::heightForWidth(arg__1);
}
void QMenu_wrapper::hideTearOffMenu() { ::QMenu::hideTearOffMenu(); }
void QMenu_wrapper::hovered(QAction *action) { ::QMenu::hovered(action); }
QIcon QMenu_wrapper::icon() const { return ::QMenu::icon(); }
void QMenu_wrapper::initPainter(QPainter *painter) const {
  if (m_initPainterCallback) {
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    ::QMenu::initPainter(painter);
  }
}
void QMenu_wrapper::initPainter_nocallback(QPainter *painter) const {
  ::QMenu::initPainter(painter);
}
QAction *QMenu_wrapper::insertMenu(QAction *before, QMenu *menu) {
  return ::QMenu::insertMenu(before, menu);
}
QAction *QMenu_wrapper::insertSection(QAction *before, const QIcon &icon,
                                      const QString &text) {
  return ::QMenu::insertSection(before, icon, text);
}
QAction *QMenu_wrapper::insertSection(QAction *before, const QString &text) {
  return ::QMenu::insertSection(before, text);
}
QAction *QMenu_wrapper::insertSeparator(QAction *before) {
  return ::QMenu::insertSeparator(before);
}
bool QMenu_wrapper::isEmpty() const { return ::QMenu::isEmpty(); }
bool QMenu_wrapper::isTearOffEnabled() const {
  return ::QMenu::isTearOffEnabled();
}
bool QMenu_wrapper::isTearOffMenuVisible() const {
  return ::QMenu::isTearOffMenuVisible();
}
void QMenu_wrapper::leaveEvent(QEvent *arg__1) {
  if (m_leaveEventCallback) {
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QMenu::leaveEvent(arg__1);
  }
}
void QMenu_wrapper::leaveEvent_nocallback(QEvent *arg__1) {
  ::QMenu::leaveEvent(arg__1);
}
QAction *QMenu_wrapper::menuAction() const { return ::QMenu::menuAction(); }
QMenu *QMenu_wrapper::menuInAction(const QAction *action) {
  return ::QMenu::menuInAction(action);
}
QSize QMenu_wrapper::minimumSizeHint() const {
  if (m_minimumSizeHintCallback) {
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QMenu::minimumSizeHint();
  }
}
QSize QMenu_wrapper::minimumSizeHint_nocallback() const {
  return ::QMenu::minimumSizeHint();
}
void QMenu_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  if (m_mouseDoubleClickEventCallback) {
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QMenu::mouseDoubleClickEvent(event);
  }
}
void QMenu_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *event) {
  ::QMenu::mouseDoubleClickEvent(event);
}
void QMenu_wrapper::mouseMoveEvent(QMouseEvent *arg__1) {
  if (m_mouseMoveEventCallback) {
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QMenu::mouseMoveEvent(arg__1);
  }
}
void QMenu_wrapper::mouseMoveEvent_nocallback(QMouseEvent *arg__1) {
  ::QMenu::mouseMoveEvent(arg__1);
}
void QMenu_wrapper::mousePressEvent(QMouseEvent *arg__1) {
  if (m_mousePressEventCallback) {
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QMenu::mousePressEvent(arg__1);
  }
}
void QMenu_wrapper::mousePressEvent_nocallback(QMouseEvent *arg__1) {
  ::QMenu::mousePressEvent(arg__1);
}
void QMenu_wrapper::mouseReleaseEvent(QMouseEvent *arg__1) {
  if (m_mouseReleaseEventCallback) {
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QMenu::mouseReleaseEvent(arg__1);
  }
}
void QMenu_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *arg__1) {
  ::QMenu::mouseReleaseEvent(arg__1);
}
void QMenu_wrapper::paintEvent(QPaintEvent *arg__1) {
  if (m_paintEventCallback) {
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QMenu::paintEvent(arg__1);
  }
}
void QMenu_wrapper::paintEvent_nocallback(QPaintEvent *arg__1) {
  ::QMenu::paintEvent(arg__1);
}
void QMenu_wrapper::popup(const QPoint &pos, QAction *at) {
  ::QMenu::popup(pos, at);
}
bool QMenu_wrapper::separatorsCollapsible() const {
  return ::QMenu::separatorsCollapsible();
}
void QMenu_wrapper::setActiveAction(QAction *act) {
  ::QMenu::setActiveAction(act);
}
void QMenu_wrapper::setDefaultAction(QAction *arg__1) {
  ::QMenu::setDefaultAction(arg__1);
}
void QMenu_wrapper::setIcon(const QIcon &icon) { ::QMenu::setIcon(icon); }
void QMenu_wrapper::setNoReplayFor(QWidget *widget) {
  ::QMenu::setNoReplayFor(widget);
}
void QMenu_wrapper::setSeparatorsCollapsible(bool collapse) {
  ::QMenu::setSeparatorsCollapsible(collapse);
}
void QMenu_wrapper::setTearOffEnabled(bool arg__1) {
  ::QMenu::setTearOffEnabled(arg__1);
}
void QMenu_wrapper::setTitle(const QString &title) { ::QMenu::setTitle(title); }
void QMenu_wrapper::setToolTipsVisible(bool visible) {
  ::QMenu::setToolTipsVisible(visible);
}
void QMenu_wrapper::setVisible(bool visible) {
  if (m_setVisibleCallback) {
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    ::QMenu::setVisible(visible);
  }
}
void QMenu_wrapper::setVisible_nocallback(bool visible) {
  ::QMenu::setVisible(visible);
}
QPainter *QMenu_wrapper::sharedPainter() const {
  if (m_sharedPainterCallback) {
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QMenu::sharedPainter();
  }
}
QPainter *QMenu_wrapper::sharedPainter_nocallback() const {
  return ::QMenu::sharedPainter();
}
void QMenu_wrapper::showTearOffMenu() { ::QMenu::showTearOffMenu(); }
void QMenu_wrapper::showTearOffMenu(const QPoint &pos) {
  ::QMenu::showTearOffMenu(pos);
}
QSize QMenu_wrapper::sizeHint() const {
  if (m_sizeHintCallback) {
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QMenu::sizeHint();
  }
}
QSize QMenu_wrapper::sizeHint_nocallback() const { return ::QMenu::sizeHint(); }
QString QMenu_wrapper::title() const { return ::QMenu::title(); }
bool QMenu_wrapper::toolTipsVisible() const {
  return ::QMenu::toolTipsVisible();
}
QString QMenu_wrapper::tr(const char *s, const char *c, int n) {
  return ::QMenu::tr(s, c, n);
}
void QMenu_wrapper::triggered(QAction *action) { ::QMenu::triggered(action); }
QMenu_wrapper::~QMenu_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QMenu *fromPtr(void *ptr) { return reinterpret_cast<QMenu *>(ptr); }
static QtDartBindings_wrappersNS::QMenu_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QMenu_wrapper *>(ptr);
}
extern "C" {
void c_QMenu_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QMenu_wrapper *>(cppObj);
}
void *c_QMenu__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QMenu_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
void *c_QMenu__constructor_QString_QWidget(const char *title_, void *parent_) {
  const auto title = QString::fromUtf8(title_);
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QMenu_wrapper(title, parent);
  return reinterpret_cast<void *>(ptr);
}
// aboutToHide()
void c_QMenu__aboutToHide(void *thisObj) { fromPtr(thisObj)->aboutToHide(); }
void c_QMenu__onAboutToHide(void *thisObj, void *contextQObject,
                            void *callback) {
  auto instance = reinterpret_cast<QMenu *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMenu::aboutToHide, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// aboutToShow()
void c_QMenu__aboutToShow(void *thisObj) { fromPtr(thisObj)->aboutToShow(); }
void c_QMenu__onAboutToShow(void *thisObj, void *contextQObject,
                            void *callback) {
  auto instance = reinterpret_cast<QMenu *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMenu::aboutToShow, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// actionAt(const QPoint & arg__1) const
void *c_QMenu__actionAt_QPoint(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QPoint *>(arg__1_);
  const auto &result = fromPtr(thisObj)->actionAt(arg__1);
  return result;
}
// actionGeometry(QAction * arg__1) const
void *c_QMenu__actionGeometry_QAction(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QAction *>(arg__1_);
  const auto &result = new Dartagnan::ValueWrapper<QRect>{
      fromPtr(thisObj)->actionGeometry(arg__1)};
  return result;
}
// activeAction() const
void *c_QMenu__activeAction(void *thisObj) {
  const auto &result = fromPtr(thisObj)->activeAction();
  return result;
}
// addMenu(QMenu * menu)
void *c_QMenu__addMenu_QMenu(void *thisObj, void *menu_) {
  auto menu = reinterpret_cast<QMenu *>(menu_);
  const auto &result = fromPtr(thisObj)->addMenu(menu);
  return result;
}
// addMenu(const QIcon & icon, const QString & title)
void *c_QMenu__addMenu_QIcon_QString(void *thisObj, void *icon_,
                                     const char *title_) {
  assert(icon_);
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  const auto title = QString::fromUtf8(title_);
  const auto &result = fromPtr(thisObj)->addMenu(icon, title);
  free((char *)title_);
  return result;
}
// addMenu(const QString & title)
void *c_QMenu__addMenu_QString(void *thisObj, const char *title_) {
  const auto title = QString::fromUtf8(title_);
  const auto &result = fromPtr(thisObj)->addMenu(title);
  free((char *)title_);
  return result;
}
// addSection(const QIcon & icon, const QString & text)
void *c_QMenu__addSection_QIcon_QString(void *thisObj, void *icon_,
                                        const char *text_) {
  assert(icon_);
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  const auto text = QString::fromUtf8(text_);
  const auto &result = fromPtr(thisObj)->addSection(icon, text);
  free((char *)text_);
  return result;
}
// addSection(const QString & text)
void *c_QMenu__addSection_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  const auto &result = fromPtr(thisObj)->addSection(text);
  free((char *)text_);
  return result;
}
// addSeparator()
void *c_QMenu__addSeparator(void *thisObj) {
  const auto &result = fromPtr(thisObj)->addSeparator();
  return result;
}
// changeEvent(QEvent * arg__1)
void c_QMenu__changeEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->changeEvent_nocallback(arg__1);
}
// clear()
void c_QMenu__clear(void *thisObj) { fromPtr(thisObj)->clear(); }
// columnCount() const
int c_QMenu__columnCount(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->columnCount();
  return result;
}
void c_QMenu__onCustomContextMenuRequested_QPoint(void *thisObj,
                                                  void *contextQObject,
                                                  void *callback) {
  auto instance = reinterpret_cast<QMenu *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMenu::customContextMenuRequested,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// customEvent(QEvent * event)
void c_QMenu__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// defaultAction() const
void *c_QMenu__defaultAction(void *thisObj) {
  const auto &result = fromPtr(thisObj)->defaultAction();
  return result;
}
// devType() const
int c_QMenu__devType(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QMenu_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->devType_nocallback();
    } else {
      return targetPtr->devType();
    }
  }();
  return result;
}
// event(QEvent * arg__1)
bool c_QMenu__event_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  const auto &result = fromWrapperPtr(thisObj)->event_nocallback(arg__1);
  return result;
}
// eventFilter(QObject * watched, QEvent * event)
bool c_QMenu__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                         void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QMenu_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->eventFilter_nocallback(watched, event);
    } else {
      return targetPtr->eventFilter(watched, event);
    }
  }();
  return result;
}
// exec()
void *c_QMenu__exec(void *thisObj) {
  const auto &result = fromPtr(thisObj)->exec();
  return result;
}
// exec(const QList<QAction* > & actions, const QPoint & pos, QAction * at,
// QWidget * parent)
void *c_static_QMenu__exec_QList_QAction_QPoint_QAction_QWidget(void *actions_,
                                                                void *pos_,
                                                                void *at_,
                                                                void *parent_) {
  assert(actions_);
  auto &actions = *reinterpret_cast<QList<QAction *> *>(actions_);
  assert(pos_);
  auto &pos = *reinterpret_cast<QPoint *>(pos_);
  auto at = reinterpret_cast<QAction *>(at_);
  auto parent = reinterpret_cast<QWidget *>(parent_);
  const auto &result =
      QtDartBindings_wrappersNS::QMenu_wrapper::exec(actions, pos, at, parent);
  return result;
}
// exec(const QPoint & pos, QAction * at)
void *c_QMenu__exec_QPoint_QAction(void *thisObj, void *pos_, void *at_) {
  assert(pos_);
  auto &pos = *reinterpret_cast<QPoint *>(pos_);
  auto at = reinterpret_cast<QAction *>(at_);
  const auto &result = fromPtr(thisObj)->exec(pos, at);
  return result;
}
// focusNextPrevChild(bool next)
bool c_QMenu__focusNextPrevChild_bool(void *thisObj, bool next) {
  const auto &result =
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
  return result;
}
// hasHeightForWidth() const
bool c_QMenu__hasHeightForWidth(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QMenu_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->hasHeightForWidth_nocallback();
    } else {
      return targetPtr->hasHeightForWidth();
    }
  }();
  return result;
}
// heightForWidth(int arg__1) const
int c_QMenu__heightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QMenu_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->heightForWidth_nocallback(arg__1);
    } else {
      return targetPtr->heightForWidth(arg__1);
    }
  }();
  return result;
}
// hideTearOffMenu()
void c_QMenu__hideTearOffMenu(void *thisObj) {
  fromPtr(thisObj)->hideTearOffMenu();
}
// hovered(QAction * action)
void c_QMenu__hovered_QAction(void *thisObj, void *action_) {
  auto action = reinterpret_cast<QAction *>(action_);
  fromPtr(thisObj)->hovered(action);
}
void c_QMenu__onHovered_QAction(void *thisObj, void *contextQObject,
                                void *callback) {
  auto instance = reinterpret_cast<QMenu *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMenu::hovered, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// icon() const
void *c_QMenu__icon(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QIcon>{fromPtr(thisObj)->icon()};
  return result;
}
// initPainter(QPainter * painter) const
void c_QMenu__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}
// insertMenu(QAction * before, QMenu * menu)
void *c_QMenu__insertMenu_QAction_QMenu(void *thisObj, void *before_,
                                        void *menu_) {
  auto before = reinterpret_cast<QAction *>(before_);
  auto menu = reinterpret_cast<QMenu *>(menu_);
  const auto &result = fromPtr(thisObj)->insertMenu(before, menu);
  return result;
}
// insertSection(QAction * before, const QIcon & icon, const QString & text)
void *c_QMenu__insertSection_QAction_QIcon_QString(void *thisObj, void *before_,
                                                   void *icon_,
                                                   const char *text_) {
  auto before = reinterpret_cast<QAction *>(before_);
  assert(icon_);
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  const auto text = QString::fromUtf8(text_);
  const auto &result = fromPtr(thisObj)->insertSection(before, icon, text);
  free((char *)text_);
  return result;
}
// insertSection(QAction * before, const QString & text)
void *c_QMenu__insertSection_QAction_QString(void *thisObj, void *before_,
                                             const char *text_) {
  auto before = reinterpret_cast<QAction *>(before_);
  const auto text = QString::fromUtf8(text_);
  const auto &result = fromPtr(thisObj)->insertSection(before, text);
  free((char *)text_);
  return result;
}
// insertSeparator(QAction * before)
void *c_QMenu__insertSeparator_QAction(void *thisObj, void *before_) {
  auto before = reinterpret_cast<QAction *>(before_);
  const auto &result = fromPtr(thisObj)->insertSeparator(before);
  return result;
}
// isEmpty() const
bool c_QMenu__isEmpty(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isEmpty();
  return result;
}
// isTearOffEnabled() const
bool c_QMenu__isTearOffEnabled(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isTearOffEnabled();
  return result;
}
// isTearOffMenuVisible() const
bool c_QMenu__isTearOffMenuVisible(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isTearOffMenuVisible();
  return result;
}
// leaveEvent(QEvent * arg__1)
void c_QMenu__leaveEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(arg__1);
}
// menuAction() const
void *c_QMenu__menuAction(void *thisObj) {
  const auto &result = fromPtr(thisObj)->menuAction();
  return result;
}
// menuInAction(const QAction * action)
void *c_static_QMenu__menuInAction_QAction(void *action_) {
  auto action = reinterpret_cast<QAction *>(action_);
  const auto &result =
      QtDartBindings_wrappersNS::QMenu_wrapper::menuInAction(action);
  return result;
}
// minimumSizeHint() const
void *c_QMenu__minimumSizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QMenu_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->minimumSizeHint_nocallback();
    } else {
      return targetPtr->minimumSizeHint();
    }
  }()};
  return result;
}
// mouseDoubleClickEvent(QMouseEvent * event)
void c_QMenu__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}
// mouseMoveEvent(QMouseEvent * arg__1)
void c_QMenu__mouseMoveEvent_QMouseEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(arg__1);
}
// mousePressEvent(QMouseEvent * arg__1)
void c_QMenu__mousePressEvent_QMouseEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(arg__1);
}
// mouseReleaseEvent(QMouseEvent * arg__1)
void c_QMenu__mouseReleaseEvent_QMouseEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(arg__1);
}
// paintEvent(QPaintEvent * arg__1)
void c_QMenu__paintEvent_QPaintEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QPaintEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->paintEvent_nocallback(arg__1);
}
// popup(const QPoint & pos, QAction * at)
void c_QMenu__popup_QPoint_QAction(void *thisObj, void *pos_, void *at_) {
  assert(pos_);
  auto &pos = *reinterpret_cast<QPoint *>(pos_);
  auto at = reinterpret_cast<QAction *>(at_);
  fromPtr(thisObj)->popup(pos, at);
}
// separatorsCollapsible() const
bool c_QMenu__separatorsCollapsible(void *thisObj) {
  const auto &result = fromPtr(thisObj)->separatorsCollapsible();
  return result;
}
// setActiveAction(QAction * act)
void c_QMenu__setActiveAction_QAction(void *thisObj, void *act_) {
  auto act = reinterpret_cast<QAction *>(act_);
  fromPtr(thisObj)->setActiveAction(act);
}
// setDefaultAction(QAction * arg__1)
void c_QMenu__setDefaultAction_QAction(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QAction *>(arg__1_);
  fromPtr(thisObj)->setDefaultAction(arg__1);
}
// setIcon(const QIcon & icon)
void c_QMenu__setIcon_QIcon(void *thisObj, void *icon_) {
  assert(icon_);
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  fromPtr(thisObj)->setIcon(icon);
}
// setNoReplayFor(QWidget * widget)
void c_QMenu__setNoReplayFor_QWidget(void *thisObj, void *widget_) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  fromPtr(thisObj)->setNoReplayFor(widget);
}
// setSeparatorsCollapsible(bool collapse)
void c_QMenu__setSeparatorsCollapsible_bool(void *thisObj, bool collapse) {
  fromPtr(thisObj)->setSeparatorsCollapsible(collapse);
}
// setTearOffEnabled(bool arg__1)
void c_QMenu__setTearOffEnabled_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->setTearOffEnabled(arg__1);
}
// setTitle(const QString & title)
void c_QMenu__setTitle_QString(void *thisObj, const char *title_) {
  const auto title = QString::fromUtf8(title_);
  fromPtr(thisObj)->setTitle(title);
  free((char *)title_);
}
// setToolTipsVisible(bool visible)
void c_QMenu__setToolTipsVisible_bool(void *thisObj, bool visible) {
  fromPtr(thisObj)->setToolTipsVisible(visible);
}
// setVisible(bool visible)
void c_QMenu__setVisible_bool(void *thisObj, bool visible) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QMenu_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}
// sharedPainter() const
void *c_QMenu__sharedPainter(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->sharedPainter_nocallback();
  return result;
}
// showTearOffMenu()
void c_QMenu__showTearOffMenu(void *thisObj) {
  fromPtr(thisObj)->showTearOffMenu();
}
// showTearOffMenu(const QPoint & pos)
void c_QMenu__showTearOffMenu_QPoint(void *thisObj, void *pos_) {
  assert(pos_);
  auto &pos = *reinterpret_cast<QPoint *>(pos_);
  fromPtr(thisObj)->showTearOffMenu(pos);
}
// sizeHint() const
void *c_QMenu__sizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QMenu_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->sizeHint_nocallback();
    } else {
      return targetPtr->sizeHint();
    }
  }()};
  return result;
}
// title() const
void *c_QMenu__title(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->title()};
  return result;
}
// toolTipsVisible() const
bool c_QMenu__toolTipsVisible(void *thisObj) {
  const auto &result = fromPtr(thisObj)->toolTipsVisible();
  return result;
}
// tr(const char * s, const char * c, int n)
void *c_static_QMenu__tr_char_char_int(const char *s, const char *c, int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QMenu_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
// triggered(QAction * action)
void c_QMenu__triggered_QAction(void *thisObj, void *action_) {
  auto action = reinterpret_cast<QAction *>(action_);
  fromPtr(thisObj)->triggered(action);
}
void c_QMenu__onTriggered_QAction(void *thisObj, void *contextQObject,
                                  void *callback) {
  auto instance = reinterpret_cast<QMenu *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMenu::triggered, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QMenu__onWindowIconChanged_QIcon(void *thisObj, void *contextQObject,
                                        void *callback) {
  auto instance = reinterpret_cast<QMenu *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMenu::windowIconChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QMenu__onWindowIconTextChanged_QString(void *thisObj,
                                              void *contextQObject,
                                              void *callback) {
  auto instance = reinterpret_cast<QMenu *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMenu::windowIconTextChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QMenu__onWindowTitleChanged_QString(void *thisObj, void *contextQObject,
                                           void *callback) {
  auto instance = reinterpret_cast<QMenu *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMenu::windowTitleChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QMenu__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QMenu__registerVirtualMethodCallback(void *ptr, void *callback,
                                            int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1128:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_customEvent>(
        callback);
    break;
  case 1145:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_devType>(callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_event>(callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1155:
    wrapper->m_focusNextPrevChildCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_focusNextPrevChild>(
        callback);
    break;
  case 1169:
    wrapper->m_hasHeightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_hasHeightForWidth>(
        callback);
    break;
  case 1173:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 1176:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_initPainter>(
        callback);
    break;
  case 1202:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1222:
    wrapper->m_minimumSizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_minimumSizeHint>(
        callback);
    break;
  case 1224:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QMenu_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1226:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_mouseMoveEvent>(
        callback);
    break;
  case 1227:
    wrapper->m_mousePressEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_mousePressEvent>(
        callback);
    break;
  case 1228:
    wrapper->m_mouseReleaseEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_mouseReleaseEvent>(
        callback);
    break;
  case 1235:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 1314:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_setVisible>(
        callback);
    break;
  case 1323:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1331:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_sizeHint>(callback);
    break;
  }
}
}
