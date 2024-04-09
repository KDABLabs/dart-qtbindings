/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QAbstractButton_c.h"

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
QAbstractButton_wrapper::QAbstractButton_wrapper(QWidget *parent)
    : ::QAbstractButton(parent) {}
void QAbstractButton_wrapper::animateClick() {
  ::QAbstractButton::animateClick();
}
bool QAbstractButton_wrapper::autoExclusive() const {
  return ::QAbstractButton::autoExclusive();
}
bool QAbstractButton_wrapper::autoRepeat() const {
  return ::QAbstractButton::autoRepeat();
}
int QAbstractButton_wrapper::autoRepeatDelay() const {
  return ::QAbstractButton::autoRepeatDelay();
}
int QAbstractButton_wrapper::autoRepeatInterval() const {
  return ::QAbstractButton::autoRepeatInterval();
}
void QAbstractButton_wrapper::changeEvent(QEvent *e) {
  if (m_changeEventCallback) {
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    ::QAbstractButton::changeEvent(e);
  }
}
void QAbstractButton_wrapper::changeEvent_nocallback(QEvent *e) {
  ::QAbstractButton::changeEvent(e);
}
void QAbstractButton_wrapper::checkStateSet() {
  if (m_checkStateSetCallback) {
    const void *thisPtr = this;
    m_checkStateSetCallback(const_cast<void *>(thisPtr));
  } else {
    ::QAbstractButton::checkStateSet();
  }
}
void QAbstractButton_wrapper::checkStateSet_nocallback() {
  ::QAbstractButton::checkStateSet();
}
void QAbstractButton_wrapper::click() { ::QAbstractButton::click(); }
void QAbstractButton_wrapper::clicked(bool checked) {
  ::QAbstractButton::clicked(checked);
}
void QAbstractButton_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QAbstractButton::customEvent(event);
  }
}
void QAbstractButton_wrapper::customEvent_nocallback(QEvent *event) {
  ::QAbstractButton::customEvent(event);
}
int QAbstractButton_wrapper::devType() const {
  if (m_devTypeCallback) {
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QAbstractButton::devType();
  }
}
int QAbstractButton_wrapper::devType_nocallback() const {
  return ::QAbstractButton::devType();
}
bool QAbstractButton_wrapper::event(QEvent *e) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), e);
  } else {
    return ::QAbstractButton::event(e);
  }
}
bool QAbstractButton_wrapper::event_nocallback(QEvent *e) {
  return ::QAbstractButton::event(e);
}
bool QAbstractButton_wrapper::eventFilter(QObject *watched, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QAbstractButton::eventFilter(watched, event);
  }
}
bool QAbstractButton_wrapper::eventFilter_nocallback(QObject *watched,
                                                     QEvent *event) {
  return ::QAbstractButton::eventFilter(watched, event);
}
bool QAbstractButton_wrapper::focusNextPrevChild(bool next) {
  if (m_focusNextPrevChildCallback) {
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    return ::QAbstractButton::focusNextPrevChild(next);
  }
}
bool QAbstractButton_wrapper::focusNextPrevChild_nocallback(bool next) {
  return ::QAbstractButton::focusNextPrevChild(next);
}
bool QAbstractButton_wrapper::hasHeightForWidth() const {
  if (m_hasHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QAbstractButton::hasHeightForWidth();
  }
}
bool QAbstractButton_wrapper::hasHeightForWidth_nocallback() const {
  return ::QAbstractButton::hasHeightForWidth();
}
int QAbstractButton_wrapper::heightForWidth(int arg__1) const {
  if (m_heightForWidthCallback) {
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QAbstractButton::heightForWidth(arg__1);
  }
}
int QAbstractButton_wrapper::heightForWidth_nocallback(int arg__1) const {
  return ::QAbstractButton::heightForWidth(arg__1);
}
bool QAbstractButton_wrapper::hitButton(const QPoint &pos) const {
  if (m_hitButtonCallback) {
    const void *thisPtr = this;
    return m_hitButtonCallback(const_cast<void *>(thisPtr), pos);
  } else {
    return ::QAbstractButton::hitButton(pos);
  }
}
bool QAbstractButton_wrapper::hitButton_nocallback(const QPoint &pos) const {
  return ::QAbstractButton::hitButton(pos);
}
QIcon QAbstractButton_wrapper::icon() const {
  return ::QAbstractButton::icon();
}
QSize QAbstractButton_wrapper::iconSize() const {
  return ::QAbstractButton::iconSize();
}
void QAbstractButton_wrapper::initPainter(QPainter *painter) const {
  if (m_initPainterCallback) {
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    ::QAbstractButton::initPainter(painter);
  }
}
void QAbstractButton_wrapper::initPainter_nocallback(QPainter *painter) const {
  ::QAbstractButton::initPainter(painter);
}
bool QAbstractButton_wrapper::isCheckable() const {
  return ::QAbstractButton::isCheckable();
}
bool QAbstractButton_wrapper::isChecked() const {
  return ::QAbstractButton::isChecked();
}
bool QAbstractButton_wrapper::isDown() const {
  return ::QAbstractButton::isDown();
}
void QAbstractButton_wrapper::leaveEvent(QEvent *event) {
  if (m_leaveEventCallback) {
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QAbstractButton::leaveEvent(event);
  }
}
void QAbstractButton_wrapper::leaveEvent_nocallback(QEvent *event) {
  ::QAbstractButton::leaveEvent(event);
}
QSize QAbstractButton_wrapper::minimumSizeHint() const {
  if (m_minimumSizeHintCallback) {
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QAbstractButton::minimumSizeHint();
  }
}
QSize QAbstractButton_wrapper::minimumSizeHint_nocallback() const {
  return ::QAbstractButton::minimumSizeHint();
}
void QAbstractButton_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  if (m_mouseDoubleClickEventCallback) {
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QAbstractButton::mouseDoubleClickEvent(event);
  }
}
void QAbstractButton_wrapper::mouseDoubleClickEvent_nocallback(
    QMouseEvent *event) {
  ::QAbstractButton::mouseDoubleClickEvent(event);
}
void QAbstractButton_wrapper::mouseMoveEvent(QMouseEvent *e) {
  if (m_mouseMoveEventCallback) {
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    ::QAbstractButton::mouseMoveEvent(e);
  }
}
void QAbstractButton_wrapper::mouseMoveEvent_nocallback(QMouseEvent *e) {
  ::QAbstractButton::mouseMoveEvent(e);
}
void QAbstractButton_wrapper::mousePressEvent(QMouseEvent *e) {
  if (m_mousePressEventCallback) {
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    ::QAbstractButton::mousePressEvent(e);
  }
}
void QAbstractButton_wrapper::mousePressEvent_nocallback(QMouseEvent *e) {
  ::QAbstractButton::mousePressEvent(e);
}
void QAbstractButton_wrapper::mouseReleaseEvent(QMouseEvent *e) {
  if (m_mouseReleaseEventCallback) {
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    ::QAbstractButton::mouseReleaseEvent(e);
  }
}
void QAbstractButton_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *e) {
  ::QAbstractButton::mouseReleaseEvent(e);
}
void QAbstractButton_wrapper::nextCheckState() {
  if (m_nextCheckStateCallback) {
    const void *thisPtr = this;
    m_nextCheckStateCallback(const_cast<void *>(thisPtr));
  } else {
    ::QAbstractButton::nextCheckState();
  }
}
void QAbstractButton_wrapper::nextCheckState_nocallback() {
  ::QAbstractButton::nextCheckState();
}
void QAbstractButton_wrapper::paintEvent(QPaintEvent *e) {
  if (m_paintEventCallback) {
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    std::cerr << "paintEvent: Warning: Calling pure-virtual\n";
    return;
  }
}
void QAbstractButton_wrapper::paintEvent_nocallback(QPaintEvent *e) {
  std::cerr << "paintEvent: Warning: Calling pure-virtual\n";
  return;
}
void QAbstractButton_wrapper::pressed() { ::QAbstractButton::pressed(); }
void QAbstractButton_wrapper::released() { ::QAbstractButton::released(); }
void QAbstractButton_wrapper::setAutoExclusive(bool arg__1) {
  ::QAbstractButton::setAutoExclusive(arg__1);
}
void QAbstractButton_wrapper::setAutoRepeat(bool arg__1) {
  ::QAbstractButton::setAutoRepeat(arg__1);
}
void QAbstractButton_wrapper::setAutoRepeatDelay(int arg__1) {
  ::QAbstractButton::setAutoRepeatDelay(arg__1);
}
void QAbstractButton_wrapper::setAutoRepeatInterval(int arg__1) {
  ::QAbstractButton::setAutoRepeatInterval(arg__1);
}
void QAbstractButton_wrapper::setCheckable(bool arg__1) {
  ::QAbstractButton::setCheckable(arg__1);
}
void QAbstractButton_wrapper::setChecked(bool arg__1) {
  ::QAbstractButton::setChecked(arg__1);
}
void QAbstractButton_wrapper::setDown(bool arg__1) {
  ::QAbstractButton::setDown(arg__1);
}
void QAbstractButton_wrapper::setIcon(const QIcon &icon) {
  ::QAbstractButton::setIcon(icon);
}
void QAbstractButton_wrapper::setIconSize(const QSize &size) {
  ::QAbstractButton::setIconSize(size);
}
void QAbstractButton_wrapper::setShortcut(const QKeySequence &key) {
  ::QAbstractButton::setShortcut(key);
}
void QAbstractButton_wrapper::setText(const QString &text) {
  ::QAbstractButton::setText(text);
}
void QAbstractButton_wrapper::setVisible(bool visible) {
  if (m_setVisibleCallback) {
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    ::QAbstractButton::setVisible(visible);
  }
}
void QAbstractButton_wrapper::setVisible_nocallback(bool visible) {
  ::QAbstractButton::setVisible(visible);
}
QPainter *QAbstractButton_wrapper::sharedPainter() const {
  if (m_sharedPainterCallback) {
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QAbstractButton::sharedPainter();
  }
}
QPainter *QAbstractButton_wrapper::sharedPainter_nocallback() const {
  return ::QAbstractButton::sharedPainter();
}
QKeySequence QAbstractButton_wrapper::shortcut() const {
  return ::QAbstractButton::shortcut();
}
QSize QAbstractButton_wrapper::sizeHint() const {
  if (m_sizeHintCallback) {
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QAbstractButton::sizeHint();
  }
}
QSize QAbstractButton_wrapper::sizeHint_nocallback() const {
  return ::QAbstractButton::sizeHint();
}
QString QAbstractButton_wrapper::text() const {
  return ::QAbstractButton::text();
}
void QAbstractButton_wrapper::toggle() { ::QAbstractButton::toggle(); }
void QAbstractButton_wrapper::toggled(bool checked) {
  ::QAbstractButton::toggled(checked);
}
QString QAbstractButton_wrapper::tr(const char *s, const char *c, int n) {
  return ::QAbstractButton::tr(s, c, n);
}
QAbstractButton_wrapper::~QAbstractButton_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QAbstractButton *fromPtr(void *ptr) {
  return reinterpret_cast<QAbstractButton *>(ptr);
}
static QtDartBindings_wrappersNS::QAbstractButton_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper *>(
      ptr);
}
extern "C" {
void c_QAbstractButton_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper *>(
      cppObj);
}
void *c_QAbstractButton__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QAbstractButton_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
// animateClick()
void c_QAbstractButton__animateClick(void *thisObj) {
  fromPtr(thisObj)->animateClick();
}
// autoExclusive() const
bool c_QAbstractButton__autoExclusive(void *thisObj) {
  const auto &result = fromPtr(thisObj)->autoExclusive();
  return result;
}
// autoRepeat() const
bool c_QAbstractButton__autoRepeat(void *thisObj) {
  const auto &result = fromPtr(thisObj)->autoRepeat();
  return result;
}
// autoRepeatDelay() const
int c_QAbstractButton__autoRepeatDelay(void *thisObj) {
  const auto &result = fromPtr(thisObj)->autoRepeatDelay();
  return result;
}
// autoRepeatInterval() const
int c_QAbstractButton__autoRepeatInterval(void *thisObj) {
  const auto &result = fromPtr(thisObj)->autoRepeatInterval();
  return result;
}
// changeEvent(QEvent * e)
void c_QAbstractButton__changeEvent_QEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QEvent *>(e_);
  fromWrapperPtr(thisObj)->changeEvent_nocallback(e);
}
// checkStateSet()
void c_QAbstractButton__checkStateSet(void *thisObj) {
  fromWrapperPtr(thisObj)->checkStateSet_nocallback();
}
// click()
void c_QAbstractButton__click(void *thisObj) { fromPtr(thisObj)->click(); }
// clicked(bool checked)
void c_QAbstractButton__clicked_bool(void *thisObj, bool checked) {
  fromPtr(thisObj)->clicked(checked);
}
void c_QAbstractButton__onClicked_bool(void *thisObj, void *contextQObject,
                                       void *callback) {
  auto instance = reinterpret_cast<QAbstractButton *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractButton::clicked,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QAbstractButton__onCustomContextMenuRequested_QPoint(
    void *thisObj, void *contextQObject, void *callback) {
  auto instance = reinterpret_cast<QAbstractButton *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractButton::customContextMenuRequested,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// customEvent(QEvent * event)
void c_QAbstractButton__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// devType() const
int c_QAbstractButton__devType(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->devType_nocallback();
    } else {
      return targetPtr->devType();
    }
  }();
  return result;
}
// event(QEvent * e)
bool c_QAbstractButton__event_QEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QEvent *>(e_);
  const auto &result = fromWrapperPtr(thisObj)->event_nocallback(e);
  return result;
}
// eventFilter(QObject * watched, QEvent * event)
bool c_QAbstractButton__eventFilter_QObject_QEvent(void *thisObj,
                                                   void *watched_,
                                                   void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper *>(
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
bool c_QAbstractButton__focusNextPrevChild_bool(void *thisObj, bool next) {
  const auto &result =
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
  return result;
}
// hasHeightForWidth() const
bool c_QAbstractButton__hasHeightForWidth(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper *>(
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
int c_QAbstractButton__heightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->heightForWidth_nocallback(arg__1);
    } else {
      return targetPtr->heightForWidth(arg__1);
    }
  }();
  return result;
}
// hitButton(const QPoint & pos) const
bool c_QAbstractButton__hitButton_QPoint(void *thisObj, void *pos_) {
  assert(pos_);
  auto &pos = *reinterpret_cast<QPoint *>(pos_);
  const auto &result = fromWrapperPtr(thisObj)->hitButton_nocallback(pos);
  return result;
}
// icon() const
void *c_QAbstractButton__icon(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QIcon>{fromPtr(thisObj)->icon()};
  return result;
}
// iconSize() const
void *c_QAbstractButton__iconSize(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->iconSize()};
  return result;
}
// initPainter(QPainter * painter) const
void c_QAbstractButton__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}
// isCheckable() const
bool c_QAbstractButton__isCheckable(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isCheckable();
  return result;
}
// isChecked() const
bool c_QAbstractButton__isChecked(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isChecked();
  return result;
}
// isDown() const
bool c_QAbstractButton__isDown(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isDown();
  return result;
}
// leaveEvent(QEvent * event)
void c_QAbstractButton__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}
// minimumSizeHint() const
void *c_QAbstractButton__minimumSizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper *>(
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
void c_QAbstractButton__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                          void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}
// mouseMoveEvent(QMouseEvent * e)
void c_QAbstractButton__mouseMoveEvent_QMouseEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QMouseEvent *>(e_);
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(e);
}
// mousePressEvent(QMouseEvent * e)
void c_QAbstractButton__mousePressEvent_QMouseEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QMouseEvent *>(e_);
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(e);
}
// mouseReleaseEvent(QMouseEvent * e)
void c_QAbstractButton__mouseReleaseEvent_QMouseEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QMouseEvent *>(e_);
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(e);
}
// nextCheckState()
void c_QAbstractButton__nextCheckState(void *thisObj) {
  fromWrapperPtr(thisObj)->nextCheckState_nocallback();
}
// paintEvent(QPaintEvent * e)
void c_QAbstractButton__paintEvent_QPaintEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QPaintEvent *>(e_);
  fromWrapperPtr(thisObj)->paintEvent_nocallback(e);
}
// pressed()
void c_QAbstractButton__pressed(void *thisObj) { fromPtr(thisObj)->pressed(); }
void c_QAbstractButton__onPressed(void *thisObj, void *contextQObject,
                                  void *callback) {
  auto instance = reinterpret_cast<QAbstractButton *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractButton::pressed,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// released()
void c_QAbstractButton__released(void *thisObj) {
  fromPtr(thisObj)->released();
}
void c_QAbstractButton__onReleased(void *thisObj, void *contextQObject,
                                   void *callback) {
  auto instance = reinterpret_cast<QAbstractButton *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractButton::released,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// setAutoExclusive(bool arg__1)
void c_QAbstractButton__setAutoExclusive_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->setAutoExclusive(arg__1);
}
// setAutoRepeat(bool arg__1)
void c_QAbstractButton__setAutoRepeat_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->setAutoRepeat(arg__1);
}
// setAutoRepeatDelay(int arg__1)
void c_QAbstractButton__setAutoRepeatDelay_int(void *thisObj, int arg__1) {
  fromPtr(thisObj)->setAutoRepeatDelay(arg__1);
}
// setAutoRepeatInterval(int arg__1)
void c_QAbstractButton__setAutoRepeatInterval_int(void *thisObj, int arg__1) {
  fromPtr(thisObj)->setAutoRepeatInterval(arg__1);
}
// setCheckable(bool arg__1)
void c_QAbstractButton__setCheckable_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->setCheckable(arg__1);
}
// setChecked(bool arg__1)
void c_QAbstractButton__setChecked_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->setChecked(arg__1);
}
// setDown(bool arg__1)
void c_QAbstractButton__setDown_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->setDown(arg__1);
}
// setIcon(const QIcon & icon)
void c_QAbstractButton__setIcon_QIcon(void *thisObj, void *icon_) {
  assert(icon_);
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  fromPtr(thisObj)->setIcon(icon);
}
// setIconSize(const QSize & size)
void c_QAbstractButton__setIconSize_QSize(void *thisObj, void *size_) {
  assert(size_);
  auto &size = *reinterpret_cast<QSize *>(size_);
  fromPtr(thisObj)->setIconSize(size);
}
// setShortcut(const QKeySequence & key)
void c_QAbstractButton__setShortcut_QKeySequence(void *thisObj, void *key_) {
  assert(key_);
  auto &key = *reinterpret_cast<QKeySequence *>(key_);
  fromPtr(thisObj)->setShortcut(key);
}
// setText(const QString & text)
void c_QAbstractButton__setText_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  fromPtr(thisObj)->setText(text);
  free((char *)text_);
}
// setVisible(bool visible)
void c_QAbstractButton__setVisible_bool(void *thisObj, bool visible) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}
// sharedPainter() const
void *c_QAbstractButton__sharedPainter(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->sharedPainter_nocallback();
  return result;
}
// shortcut() const
void *c_QAbstractButton__shortcut(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QKeySequence>{fromPtr(thisObj)->shortcut()};
  return result;
}
// sizeHint() const
void *c_QAbstractButton__sizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->sizeHint_nocallback();
    } else {
      return targetPtr->sizeHint();
    }
  }()};
  return result;
}
// text() const
void *c_QAbstractButton__text(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->text()};
  return result;
}
// toggle()
void c_QAbstractButton__toggle(void *thisObj) { fromPtr(thisObj)->toggle(); }
// toggled(bool checked)
void c_QAbstractButton__toggled_bool(void *thisObj, bool checked) {
  fromPtr(thisObj)->toggled(checked);
}
void c_QAbstractButton__onToggled_bool(void *thisObj, void *contextQObject,
                                       void *callback) {
  auto instance = reinterpret_cast<QAbstractButton *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractButton::toggled,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// tr(const char * s, const char * c, int n)
void *c_static_QAbstractButton__tr_char_char_int(const char *s, const char *c,
                                                 int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QAbstractButton_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
void c_QAbstractButton__onWindowIconChanged_QIcon(void *thisObj,
                                                  void *contextQObject,
                                                  void *callback) {
  auto instance = reinterpret_cast<QAbstractButton *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractButton::windowIconChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QAbstractButton__onWindowIconTextChanged_QString(void *thisObj,
                                                        void *contextQObject,
                                                        void *callback) {
  auto instance = reinterpret_cast<QAbstractButton *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractButton::windowIconTextChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QAbstractButton__onWindowTitleChanged_QString(void *thisObj,
                                                     void *contextQObject,
                                                     void *callback) {
  auto instance = reinterpret_cast<QAbstractButton *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractButton::windowTitleChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QAbstractButton__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QAbstractButton__registerVirtualMethodCallback(void *ptr, void *callback,
                                                      int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1128:
    wrapper->m_changeEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_changeEvent>(callback);
    break;
  case 6040:
    wrapper->m_checkStateSetCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_checkStateSet>(callback);
    break;
  case 946:
    wrapper->m_customEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_customEvent>(callback);
    break;
  case 1145:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractButton_wrapper::Callback_devType>(
        callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractButton_wrapper::Callback_event>(
        callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_eventFilter>(callback);
    break;
  case 1155:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1169:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 1173:
    wrapper->m_heightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_heightForWidth>(callback);
    break;
  case 6075:
    wrapper->m_hitButtonCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractButton_wrapper::Callback_hitButton>(
        callback);
    break;
  case 1176:
    wrapper->m_initPainterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_initPainter>(callback);
    break;
  case 1202:
    wrapper->m_leaveEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_leaveEvent>(callback);
    break;
  case 1222:
    wrapper->m_minimumSizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_minimumSizeHint>(callback);
    break;
  case 1224:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1226:
    wrapper->m_mouseMoveEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_mouseMoveEvent>(callback);
    break;
  case 1227:
    wrapper->m_mousePressEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_mousePressEvent>(callback);
    break;
  case 1228:
    wrapper->m_mouseReleaseEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_mouseReleaseEvent>(callback);
    break;
  case 6125:
    wrapper->m_nextCheckStateCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_nextCheckState>(callback);
    break;
  case 1235:
    wrapper->m_paintEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_paintEvent>(callback);
    break;
  case 1314:
    wrapper->m_setVisibleCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_setVisible>(callback);
    break;
  case 1323:
    wrapper->m_sharedPainterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_sharedPainter>(callback);
    break;
  case 1331:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractButton_wrapper::Callback_sizeHint>(
        callback);
    break;
  }
}
}
