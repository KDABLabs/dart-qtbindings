/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QPushButton_c.h"

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
QPushButton_wrapper::QPushButton_wrapper(QWidget *parent)
    : ::QPushButton(parent) {}
QPushButton_wrapper::QPushButton_wrapper(const QIcon &icon, const QString &text,
                                         QWidget *parent)
    : ::QPushButton(icon, text, parent) {}
QPushButton_wrapper::QPushButton_wrapper(const QString &text, QWidget *parent)
    : ::QPushButton(text, parent) {}
bool QPushButton_wrapper::autoDefault() const {
  return ::QPushButton::autoDefault();
}
void QPushButton_wrapper::changeEvent(QEvent *e) {
  if (m_changeEventCallback) {
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    ::QPushButton::changeEvent(e);
  }
}
void QPushButton_wrapper::changeEvent_nocallback(QEvent *e) {
  ::QPushButton::changeEvent(e);
}
void QPushButton_wrapper::checkStateSet() {
  if (m_checkStateSetCallback) {
    const void *thisPtr = this;
    m_checkStateSetCallback(const_cast<void *>(thisPtr));
  } else {
    ::QPushButton::checkStateSet();
  }
}
void QPushButton_wrapper::checkStateSet_nocallback() {
  ::QPushButton::checkStateSet();
}
void QPushButton_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QPushButton::customEvent(event);
  }
}
void QPushButton_wrapper::customEvent_nocallback(QEvent *event) {
  ::QPushButton::customEvent(event);
}
int QPushButton_wrapper::devType() const {
  if (m_devTypeCallback) {
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QPushButton::devType();
  }
}
int QPushButton_wrapper::devType_nocallback() const {
  return ::QPushButton::devType();
}
bool QPushButton_wrapper::event(QEvent *e) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), e);
  } else {
    return ::QPushButton::event(e);
  }
}
bool QPushButton_wrapper::event_nocallback(QEvent *e) {
  return ::QPushButton::event(e);
}
bool QPushButton_wrapper::eventFilter(QObject *watched, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QPushButton::eventFilter(watched, event);
  }
}
bool QPushButton_wrapper::eventFilter_nocallback(QObject *watched,
                                                 QEvent *event) {
  return ::QPushButton::eventFilter(watched, event);
}
bool QPushButton_wrapper::focusNextPrevChild(bool next) {
  if (m_focusNextPrevChildCallback) {
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    return ::QPushButton::focusNextPrevChild(next);
  }
}
bool QPushButton_wrapper::focusNextPrevChild_nocallback(bool next) {
  return ::QPushButton::focusNextPrevChild(next);
}
bool QPushButton_wrapper::hasHeightForWidth() const {
  if (m_hasHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QPushButton::hasHeightForWidth();
  }
}
bool QPushButton_wrapper::hasHeightForWidth_nocallback() const {
  return ::QPushButton::hasHeightForWidth();
}
int QPushButton_wrapper::heightForWidth(int arg__1) const {
  if (m_heightForWidthCallback) {
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QPushButton::heightForWidth(arg__1);
  }
}
int QPushButton_wrapper::heightForWidth_nocallback(int arg__1) const {
  return ::QPushButton::heightForWidth(arg__1);
}
bool QPushButton_wrapper::hitButton(const QPoint &pos) const {
  if (m_hitButtonCallback) {
    const void *thisPtr = this;
    return m_hitButtonCallback(const_cast<void *>(thisPtr), pos);
  } else {
    return ::QPushButton::hitButton(pos);
  }
}
bool QPushButton_wrapper::hitButton_nocallback(const QPoint &pos) const {
  return ::QPushButton::hitButton(pos);
}
void QPushButton_wrapper::initPainter(QPainter *painter) const {
  if (m_initPainterCallback) {
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    ::QPushButton::initPainter(painter);
  }
}
void QPushButton_wrapper::initPainter_nocallback(QPainter *painter) const {
  ::QPushButton::initPainter(painter);
}
bool QPushButton_wrapper::isDefault() const {
  return ::QPushButton::isDefault();
}
bool QPushButton_wrapper::isFlat() const { return ::QPushButton::isFlat(); }
void QPushButton_wrapper::leaveEvent(QEvent *event) {
  if (m_leaveEventCallback) {
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QPushButton::leaveEvent(event);
  }
}
void QPushButton_wrapper::leaveEvent_nocallback(QEvent *event) {
  ::QPushButton::leaveEvent(event);
}
QMenu *QPushButton_wrapper::menu() const { return ::QPushButton::menu(); }
QSize QPushButton_wrapper::minimumSizeHint() const {
  if (m_minimumSizeHintCallback) {
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QPushButton::minimumSizeHint();
  }
}
QSize QPushButton_wrapper::minimumSizeHint_nocallback() const {
  return ::QPushButton::minimumSizeHint();
}
void QPushButton_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  if (m_mouseDoubleClickEventCallback) {
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QPushButton::mouseDoubleClickEvent(event);
  }
}
void QPushButton_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *event) {
  ::QPushButton::mouseDoubleClickEvent(event);
}
void QPushButton_wrapper::mouseMoveEvent(QMouseEvent *arg__1) {
  if (m_mouseMoveEventCallback) {
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QPushButton::mouseMoveEvent(arg__1);
  }
}
void QPushButton_wrapper::mouseMoveEvent_nocallback(QMouseEvent *arg__1) {
  ::QPushButton::mouseMoveEvent(arg__1);
}
void QPushButton_wrapper::mousePressEvent(QMouseEvent *e) {
  if (m_mousePressEventCallback) {
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    ::QPushButton::mousePressEvent(e);
  }
}
void QPushButton_wrapper::mousePressEvent_nocallback(QMouseEvent *e) {
  ::QPushButton::mousePressEvent(e);
}
void QPushButton_wrapper::mouseReleaseEvent(QMouseEvent *e) {
  if (m_mouseReleaseEventCallback) {
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    ::QPushButton::mouseReleaseEvent(e);
  }
}
void QPushButton_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *e) {
  ::QPushButton::mouseReleaseEvent(e);
}
void QPushButton_wrapper::nextCheckState() {
  if (m_nextCheckStateCallback) {
    const void *thisPtr = this;
    m_nextCheckStateCallback(const_cast<void *>(thisPtr));
  } else {
    ::QPushButton::nextCheckState();
  }
}
void QPushButton_wrapper::nextCheckState_nocallback() {
  ::QPushButton::nextCheckState();
}
void QPushButton_wrapper::paintEvent(QPaintEvent *arg__1) {
  if (m_paintEventCallback) {
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QPushButton::paintEvent(arg__1);
  }
}
void QPushButton_wrapper::paintEvent_nocallback(QPaintEvent *arg__1) {
  ::QPushButton::paintEvent(arg__1);
}
void QPushButton_wrapper::setAutoDefault(bool arg__1) {
  ::QPushButton::setAutoDefault(arg__1);
}
void QPushButton_wrapper::setDefault(bool arg__1) {
  ::QPushButton::setDefault(arg__1);
}
void QPushButton_wrapper::setFlat(bool arg__1) {
  ::QPushButton::setFlat(arg__1);
}
void QPushButton_wrapper::setMenu(QMenu *menu) { ::QPushButton::setMenu(menu); }
void QPushButton_wrapper::setVisible(bool visible) {
  if (m_setVisibleCallback) {
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    ::QPushButton::setVisible(visible);
  }
}
void QPushButton_wrapper::setVisible_nocallback(bool visible) {
  ::QPushButton::setVisible(visible);
}
QPainter *QPushButton_wrapper::sharedPainter() const {
  if (m_sharedPainterCallback) {
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QPushButton::sharedPainter();
  }
}
QPainter *QPushButton_wrapper::sharedPainter_nocallback() const {
  return ::QPushButton::sharedPainter();
}
void QPushButton_wrapper::showMenu() { ::QPushButton::showMenu(); }
QSize QPushButton_wrapper::sizeHint() const {
  if (m_sizeHintCallback) {
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QPushButton::sizeHint();
  }
}
QSize QPushButton_wrapper::sizeHint_nocallback() const {
  return ::QPushButton::sizeHint();
}
QString QPushButton_wrapper::tr(const char *s, const char *c, int n) {
  return ::QPushButton::tr(s, c, n);
}
QPushButton_wrapper::~QPushButton_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QPushButton *fromPtr(void *ptr) {
  return reinterpret_cast<QPushButton *>(ptr);
}
static QtDartBindings_wrappersNS::QPushButton_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QPushButton_wrapper *>(
      ptr);
}
extern "C" {
void c_QPushButton_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QPushButton_wrapper *>(
      cppObj);
}
void *c_QPushButton__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QPushButton_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
void *c_QPushButton__constructor_QIcon_QString_QWidget(void *icon_,
                                                       const char *text_,
                                                       void *parent_) {
  assert(icon_);
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  const auto text = QString::fromUtf8(text_);
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr =
      new QtDartBindings_wrappersNS::QPushButton_wrapper(icon, text, parent);
  return reinterpret_cast<void *>(ptr);
}
void *c_QPushButton__constructor_QString_QWidget(const char *text_,
                                                 void *parent_) {
  const auto text = QString::fromUtf8(text_);
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QPushButton_wrapper(text, parent);
  return reinterpret_cast<void *>(ptr);
}
// autoDefault() const
bool c_QPushButton__autoDefault(void *thisObj) {
  const auto &result = fromPtr(thisObj)->autoDefault();
  return result;
}
// changeEvent(QEvent * e)
void c_QPushButton__changeEvent_QEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QEvent *>(e_);
  fromWrapperPtr(thisObj)->changeEvent_nocallback(e);
}
// checkStateSet()
void c_QPushButton__checkStateSet(void *thisObj) {
  fromWrapperPtr(thisObj)->checkStateSet_nocallback();
}
void c_QPushButton__onClicked_bool(void *thisObj, void *contextQObject,
                                   void *callback) {
  auto instance = reinterpret_cast<QPushButton *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QPushButton::clicked,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// customEvent(QEvent * event)
void c_QPushButton__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// devType() const
int c_QPushButton__devType(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QPushButton_wrapper *>(
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
bool c_QPushButton__event_QEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QEvent *>(e_);
  const auto &result = fromWrapperPtr(thisObj)->event_nocallback(e);
  return result;
}
// eventFilter(QObject * watched, QEvent * event)
bool c_QPushButton__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                               void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QPushButton_wrapper *>(
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
bool c_QPushButton__focusNextPrevChild_bool(void *thisObj, bool next) {
  const auto &result =
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
  return result;
}
// hasHeightForWidth() const
bool c_QPushButton__hasHeightForWidth(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QPushButton_wrapper *>(
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
int c_QPushButton__heightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QPushButton_wrapper *>(
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
bool c_QPushButton__hitButton_QPoint(void *thisObj, void *pos_) {
  assert(pos_);
  auto &pos = *reinterpret_cast<QPoint *>(pos_);
  const auto &result = fromWrapperPtr(thisObj)->hitButton_nocallback(pos);
  return result;
}
// initPainter(QPainter * painter) const
void c_QPushButton__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}
// isDefault() const
bool c_QPushButton__isDefault(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isDefault();
  return result;
}
// isFlat() const
bool c_QPushButton__isFlat(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isFlat();
  return result;
}
// leaveEvent(QEvent * event)
void c_QPushButton__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}
// menu() const
void *c_QPushButton__menu(void *thisObj) {
  const auto &result = fromPtr(thisObj)->menu();
  return result;
}
// minimumSizeHint() const
void *c_QPushButton__minimumSizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QPushButton_wrapper *>(
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
void c_QPushButton__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                      void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}
// mouseMoveEvent(QMouseEvent * arg__1)
void c_QPushButton__mouseMoveEvent_QMouseEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(arg__1);
}
// mousePressEvent(QMouseEvent * e)
void c_QPushButton__mousePressEvent_QMouseEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QMouseEvent *>(e_);
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(e);
}
// mouseReleaseEvent(QMouseEvent * e)
void c_QPushButton__mouseReleaseEvent_QMouseEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QMouseEvent *>(e_);
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(e);
}
// nextCheckState()
void c_QPushButton__nextCheckState(void *thisObj) {
  fromWrapperPtr(thisObj)->nextCheckState_nocallback();
}
// paintEvent(QPaintEvent * arg__1)
void c_QPushButton__paintEvent_QPaintEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QPaintEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->paintEvent_nocallback(arg__1);
}
void c_QPushButton__onPressed(void *thisObj, void *contextQObject,
                              void *callback) {
  auto instance = reinterpret_cast<QPushButton *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QPushButton::pressed,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QPushButton__onReleased(void *thisObj, void *contextQObject,
                               void *callback) {
  auto instance = reinterpret_cast<QPushButton *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QPushButton::released,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// setAutoDefault(bool arg__1)
void c_QPushButton__setAutoDefault_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->setAutoDefault(arg__1);
}
// setDefault(bool arg__1)
void c_QPushButton__setDefault_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->setDefault(arg__1);
}
// setFlat(bool arg__1)
void c_QPushButton__setFlat_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->setFlat(arg__1);
}
// setMenu(QMenu * menu)
void c_QPushButton__setMenu_QMenu(void *thisObj, void *menu_) {
  auto menu = reinterpret_cast<QMenu *>(menu_);
  fromPtr(thisObj)->setMenu(menu);
}
// setVisible(bool visible)
void c_QPushButton__setVisible_bool(void *thisObj, bool visible) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QPushButton_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}
// sharedPainter() const
void *c_QPushButton__sharedPainter(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->sharedPainter_nocallback();
  return result;
}
// showMenu()
void c_QPushButton__showMenu(void *thisObj) { fromPtr(thisObj)->showMenu(); }
// sizeHint() const
void *c_QPushButton__sizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QPushButton_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->sizeHint_nocallback();
    } else {
      return targetPtr->sizeHint();
    }
  }()};
  return result;
}
void c_QPushButton__onToggled_bool(void *thisObj, void *contextQObject,
                                   void *callback) {
  auto instance = reinterpret_cast<QPushButton *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QPushButton::toggled,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// tr(const char * s, const char * c, int n)
void *c_static_QPushButton__tr_char_char_int(const char *s, const char *c,
                                             int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QPushButton_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
void c_QPushButton__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QPushButton__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1128:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPushButton_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 6040:
    wrapper->m_checkStateSetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPushButton_wrapper::Callback_checkStateSet>(
        callback);
    break;
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPushButton_wrapper::Callback_customEvent>(
        callback);
    break;
  case 1145:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPushButton_wrapper::Callback_devType>(
        callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPushButton_wrapper::Callback_event>(
        callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPushButton_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1155:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPushButton_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1169:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPushButton_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 1173:
    wrapper->m_heightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPushButton_wrapper::
                             Callback_heightForWidth>(callback);
    break;
  case 6075:
    wrapper->m_hitButtonCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPushButton_wrapper::Callback_hitButton>(
        callback);
    break;
  case 1176:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPushButton_wrapper::Callback_initPainter>(
        callback);
    break;
  case 1202:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPushButton_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1222:
    wrapper->m_minimumSizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPushButton_wrapper::
                             Callback_minimumSizeHint>(callback);
    break;
  case 1224:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPushButton_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1226:
    wrapper->m_mouseMoveEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPushButton_wrapper::
                             Callback_mouseMoveEvent>(callback);
    break;
  case 1227:
    wrapper->m_mousePressEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPushButton_wrapper::
                             Callback_mousePressEvent>(callback);
    break;
  case 1228:
    wrapper->m_mouseReleaseEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPushButton_wrapper::
                             Callback_mouseReleaseEvent>(callback);
    break;
  case 6125:
    wrapper->m_nextCheckStateCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QPushButton_wrapper::
                             Callback_nextCheckState>(callback);
    break;
  case 1235:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPushButton_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 1314:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPushButton_wrapper::Callback_setVisible>(
        callback);
    break;
  case 1323:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPushButton_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1331:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPushButton_wrapper::Callback_sizeHint>(
        callback);
    break;
  }
}
}
