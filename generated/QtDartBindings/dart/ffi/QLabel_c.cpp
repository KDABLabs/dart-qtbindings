/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QLabel_c.h"

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
QLabel_wrapper::QLabel_wrapper(QWidget *parent) : ::QLabel(parent) {}
QLabel_wrapper::QLabel_wrapper(const QString &text, QWidget *parent)
    : ::QLabel(text, parent) {}
QWidget *QLabel_wrapper::buddy() const { return ::QLabel::buddy(); }
void QLabel_wrapper::changeEvent(QEvent *arg__1) {
  if (m_changeEventCallback) {
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QLabel::changeEvent(arg__1);
  }
}
void QLabel_wrapper::changeEvent_nocallback(QEvent *arg__1) {
  ::QLabel::changeEvent(arg__1);
}
void QLabel_wrapper::clear() { ::QLabel::clear(); }
void QLabel_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QLabel::customEvent(event);
  }
}
void QLabel_wrapper::customEvent_nocallback(QEvent *event) {
  ::QLabel::customEvent(event);
}
int QLabel_wrapper::devType() const {
  if (m_devTypeCallback) {
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QLabel::devType();
  }
}
int QLabel_wrapper::devType_nocallback() const { return ::QLabel::devType(); }
bool QLabel_wrapper::event(QEvent *e) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), e);
  } else {
    return ::QLabel::event(e);
  }
}
bool QLabel_wrapper::event_nocallback(QEvent *e) { return ::QLabel::event(e); }
bool QLabel_wrapper::eventFilter(QObject *watched, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QLabel::eventFilter(watched, event);
  }
}
bool QLabel_wrapper::eventFilter_nocallback(QObject *watched, QEvent *event) {
  return ::QLabel::eventFilter(watched, event);
}
bool QLabel_wrapper::focusNextPrevChild(bool next) {
  if (m_focusNextPrevChildCallback) {
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    return ::QLabel::focusNextPrevChild(next);
  }
}
bool QLabel_wrapper::focusNextPrevChild_nocallback(bool next) {
  return ::QLabel::focusNextPrevChild(next);
}
bool QLabel_wrapper::hasHeightForWidth() const {
  if (m_hasHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QLabel::hasHeightForWidth();
  }
}
bool QLabel_wrapper::hasHeightForWidth_nocallback() const {
  return ::QLabel::hasHeightForWidth();
}
bool QLabel_wrapper::hasScaledContents() const {
  return ::QLabel::hasScaledContents();
}
bool QLabel_wrapper::hasSelectedText() const {
  return ::QLabel::hasSelectedText();
}
int QLabel_wrapper::heightForWidth(int arg__1) const {
  if (m_heightForWidthCallback) {
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QLabel::heightForWidth(arg__1);
  }
}
int QLabel_wrapper::heightForWidth_nocallback(int arg__1) const {
  return ::QLabel::heightForWidth(arg__1);
}
int QLabel_wrapper::indent() const { return ::QLabel::indent(); }
void QLabel_wrapper::initPainter(QPainter *painter) const {
  if (m_initPainterCallback) {
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    ::QLabel::initPainter(painter);
  }
}
void QLabel_wrapper::initPainter_nocallback(QPainter *painter) const {
  ::QLabel::initPainter(painter);
}
void QLabel_wrapper::leaveEvent(QEvent *event) {
  if (m_leaveEventCallback) {
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QLabel::leaveEvent(event);
  }
}
void QLabel_wrapper::leaveEvent_nocallback(QEvent *event) {
  ::QLabel::leaveEvent(event);
}
void QLabel_wrapper::linkActivated(const QString &link) {
  ::QLabel::linkActivated(link);
}
void QLabel_wrapper::linkHovered(const QString &link) {
  ::QLabel::linkHovered(link);
}
int QLabel_wrapper::margin() const { return ::QLabel::margin(); }
QSize QLabel_wrapper::minimumSizeHint() const {
  if (m_minimumSizeHintCallback) {
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QLabel::minimumSizeHint();
  }
}
QSize QLabel_wrapper::minimumSizeHint_nocallback() const {
  return ::QLabel::minimumSizeHint();
}
void QLabel_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  if (m_mouseDoubleClickEventCallback) {
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QLabel::mouseDoubleClickEvent(event);
  }
}
void QLabel_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *event) {
  ::QLabel::mouseDoubleClickEvent(event);
}
void QLabel_wrapper::mouseMoveEvent(QMouseEvent *ev) {
  if (m_mouseMoveEventCallback) {
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), ev);
  } else {
    ::QLabel::mouseMoveEvent(ev);
  }
}
void QLabel_wrapper::mouseMoveEvent_nocallback(QMouseEvent *ev) {
  ::QLabel::mouseMoveEvent(ev);
}
void QLabel_wrapper::mousePressEvent(QMouseEvent *ev) {
  if (m_mousePressEventCallback) {
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), ev);
  } else {
    ::QLabel::mousePressEvent(ev);
  }
}
void QLabel_wrapper::mousePressEvent_nocallback(QMouseEvent *ev) {
  ::QLabel::mousePressEvent(ev);
}
void QLabel_wrapper::mouseReleaseEvent(QMouseEvent *ev) {
  if (m_mouseReleaseEventCallback) {
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), ev);
  } else {
    ::QLabel::mouseReleaseEvent(ev);
  }
}
void QLabel_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *ev) {
  ::QLabel::mouseReleaseEvent(ev);
}
bool QLabel_wrapper::openExternalLinks() const {
  return ::QLabel::openExternalLinks();
}
void QLabel_wrapper::paintEvent(QPaintEvent *arg__1) {
  if (m_paintEventCallback) {
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QLabel::paintEvent(arg__1);
  }
}
void QLabel_wrapper::paintEvent_nocallback(QPaintEvent *arg__1) {
  ::QLabel::paintEvent(arg__1);
}
QPixmap QLabel_wrapper::pixmap() const { return ::QLabel::pixmap(); }
QString QLabel_wrapper::selectedText() const {
  return ::QLabel::selectedText();
}
int QLabel_wrapper::selectionStart() const {
  return ::QLabel::selectionStart();
}
void QLabel_wrapper::setBuddy(QWidget *arg__1) { ::QLabel::setBuddy(arg__1); }
void QLabel_wrapper::setIndent(int arg__1) { ::QLabel::setIndent(arg__1); }
void QLabel_wrapper::setMargin(int arg__1) { ::QLabel::setMargin(arg__1); }
void QLabel_wrapper::setNum(double arg__1) { ::QLabel::setNum(arg__1); }
void QLabel_wrapper::setNum(int arg__1) { ::QLabel::setNum(arg__1); }
void QLabel_wrapper::setOpenExternalLinks(bool open) {
  ::QLabel::setOpenExternalLinks(open);
}
void QLabel_wrapper::setPixmap(const QPixmap &arg__1) {
  ::QLabel::setPixmap(arg__1);
}
void QLabel_wrapper::setScaledContents(bool arg__1) {
  ::QLabel::setScaledContents(arg__1);
}
void QLabel_wrapper::setSelection(int arg__1, int arg__2) {
  ::QLabel::setSelection(arg__1, arg__2);
}
void QLabel_wrapper::setText(const QString &arg__1) {
  ::QLabel::setText(arg__1);
}
void QLabel_wrapper::setVisible(bool visible) {
  if (m_setVisibleCallback) {
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    ::QLabel::setVisible(visible);
  }
}
void QLabel_wrapper::setVisible_nocallback(bool visible) {
  ::QLabel::setVisible(visible);
}
void QLabel_wrapper::setWordWrap(bool on) { ::QLabel::setWordWrap(on); }
QPainter *QLabel_wrapper::sharedPainter() const {
  if (m_sharedPainterCallback) {
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QLabel::sharedPainter();
  }
}
QPainter *QLabel_wrapper::sharedPainter_nocallback() const {
  return ::QLabel::sharedPainter();
}
QSize QLabel_wrapper::sizeHint() const {
  if (m_sizeHintCallback) {
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QLabel::sizeHint();
  }
}
QSize QLabel_wrapper::sizeHint_nocallback() const {
  return ::QLabel::sizeHint();
}
QString QLabel_wrapper::text() const { return ::QLabel::text(); }
QString QLabel_wrapper::tr(const char *s, const char *c, int n) {
  return ::QLabel::tr(s, c, n);
}
bool QLabel_wrapper::wordWrap() const { return ::QLabel::wordWrap(); }
QLabel_wrapper::~QLabel_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QLabel *fromPtr(void *ptr) { return reinterpret_cast<QLabel *>(ptr); }
static QtDartBindings_wrappersNS::QLabel_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QLabel_wrapper *>(ptr);
}
extern "C" {
void c_QLabel_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QLabel_wrapper *>(cppObj);
}
void *c_QLabel__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QLabel_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
void *c_QLabel__constructor_QString_QWidget(const char *text_, void *parent_) {
  const auto text = QString::fromUtf8(text_);
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QLabel_wrapper(text, parent);
  return reinterpret_cast<void *>(ptr);
}
// buddy() const
void *c_QLabel__buddy(void *thisObj) {
  const auto &result = fromPtr(thisObj)->buddy();
  return result;
}
// changeEvent(QEvent * arg__1)
void c_QLabel__changeEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->changeEvent_nocallback(arg__1);
}
// clear()
void c_QLabel__clear(void *thisObj) { fromPtr(thisObj)->clear(); }
// customEvent(QEvent * event)
void c_QLabel__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// devType() const
int c_QLabel__devType(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLabel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->devType_nocallback();
    } else {
      return targetPtr->devType();
    }
  }();
  return result;
}
// event(QEvent * e)
bool c_QLabel__event_QEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QEvent *>(e_);
  const auto &result = fromWrapperPtr(thisObj)->event_nocallback(e);
  return result;
}
// eventFilter(QObject * watched, QEvent * event)
bool c_QLabel__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                          void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLabel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->eventFilter_nocallback(watched, event);
    } else {
      return targetPtr->eventFilter(watched, event);
    }
  }();
  return result;
}
// focusNextPrevChild(bool next)
bool c_QLabel__focusNextPrevChild_bool(void *thisObj, bool next) {
  const auto &result =
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
  return result;
}
// hasHeightForWidth() const
bool c_QLabel__hasHeightForWidth(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLabel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->hasHeightForWidth_nocallback();
    } else {
      return targetPtr->hasHeightForWidth();
    }
  }();
  return result;
}
// hasScaledContents() const
bool c_QLabel__hasScaledContents(void *thisObj) {
  const auto &result = fromPtr(thisObj)->hasScaledContents();
  return result;
}
// hasSelectedText() const
bool c_QLabel__hasSelectedText(void *thisObj) {
  const auto &result = fromPtr(thisObj)->hasSelectedText();
  return result;
}
// heightForWidth(int arg__1) const
int c_QLabel__heightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLabel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->heightForWidth_nocallback(arg__1);
    } else {
      return targetPtr->heightForWidth(arg__1);
    }
  }();
  return result;
}
// indent() const
int c_QLabel__indent(void *thisObj) {
  const auto &result = fromPtr(thisObj)->indent();
  return result;
}
// initPainter(QPainter * painter) const
void c_QLabel__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}
// leaveEvent(QEvent * event)
void c_QLabel__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}
// linkActivated(const QString & link)
void c_QLabel__linkActivated_QString(void *thisObj, const char *link_) {
  const auto link = QString::fromUtf8(link_);
  fromPtr(thisObj)->linkActivated(link);
  free((char *)link_);
}
void c_QLabel__onLinkActivated_QString(void *thisObj, void *contextQObject,
                                       void *callback) {
  auto instance = reinterpret_cast<QLabel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QLabel::linkActivated,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// linkHovered(const QString & link)
void c_QLabel__linkHovered_QString(void *thisObj, const char *link_) {
  const auto link = QString::fromUtf8(link_);
  fromPtr(thisObj)->linkHovered(link);
  free((char *)link_);
}
void c_QLabel__onLinkHovered_QString(void *thisObj, void *contextQObject,
                                     void *callback) {
  auto instance = reinterpret_cast<QLabel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QLabel::linkHovered, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// margin() const
int c_QLabel__margin(void *thisObj) {
  const auto &result = fromPtr(thisObj)->margin();
  return result;
}
// minimumSizeHint() const
void *c_QLabel__minimumSizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLabel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->minimumSizeHint_nocallback();
    } else {
      return targetPtr->minimumSizeHint();
    }
  }()};
  return result;
}
// mouseDoubleClickEvent(QMouseEvent * event)
void c_QLabel__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}
// mouseMoveEvent(QMouseEvent * ev)
void c_QLabel__mouseMoveEvent_QMouseEvent(void *thisObj, void *ev_) {
  auto ev = reinterpret_cast<QMouseEvent *>(ev_);
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(ev);
}
// mousePressEvent(QMouseEvent * ev)
void c_QLabel__mousePressEvent_QMouseEvent(void *thisObj, void *ev_) {
  auto ev = reinterpret_cast<QMouseEvent *>(ev_);
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(ev);
}
// mouseReleaseEvent(QMouseEvent * ev)
void c_QLabel__mouseReleaseEvent_QMouseEvent(void *thisObj, void *ev_) {
  auto ev = reinterpret_cast<QMouseEvent *>(ev_);
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(ev);
}
// openExternalLinks() const
bool c_QLabel__openExternalLinks(void *thisObj) {
  const auto &result = fromPtr(thisObj)->openExternalLinks();
  return result;
}
// paintEvent(QPaintEvent * arg__1)
void c_QLabel__paintEvent_QPaintEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QPaintEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->paintEvent_nocallback(arg__1);
}
// pixmap() const
void *c_QLabel__pixmap(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QPixmap>{fromPtr(thisObj)->pixmap()};
  return result;
}
// selectedText() const
void *c_QLabel__selectedText(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->selectedText()};
  return result;
}
// selectionStart() const
int c_QLabel__selectionStart(void *thisObj) {
  const auto &result = fromPtr(thisObj)->selectionStart();
  return result;
}
// setBuddy(QWidget * arg__1)
void c_QLabel__setBuddy_QWidget(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  fromPtr(thisObj)->setBuddy(arg__1);
}
// setIndent(int arg__1)
void c_QLabel__setIndent_int(void *thisObj, int arg__1) {
  fromPtr(thisObj)->setIndent(arg__1);
}
// setMargin(int arg__1)
void c_QLabel__setMargin_int(void *thisObj, int arg__1) {
  fromPtr(thisObj)->setMargin(arg__1);
}
// setNum(double arg__1)
void c_QLabel__setNum_double(void *thisObj, double arg__1) {
  fromPtr(thisObj)->setNum(arg__1);
}
// setNum(int arg__1)
void c_QLabel__setNum_int(void *thisObj, int arg__1) {
  fromPtr(thisObj)->setNum(arg__1);
}
// setOpenExternalLinks(bool open)
void c_QLabel__setOpenExternalLinks_bool(void *thisObj, bool open) {
  fromPtr(thisObj)->setOpenExternalLinks(open);
}
// setPixmap(const QPixmap & arg__1)
void c_QLabel__setPixmap_QPixmap(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QPixmap *>(arg__1_);
  fromPtr(thisObj)->setPixmap(arg__1);
}
// setScaledContents(bool arg__1)
void c_QLabel__setScaledContents_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->setScaledContents(arg__1);
}
// setSelection(int arg__1, int arg__2)
void c_QLabel__setSelection_int_int(void *thisObj, int arg__1, int arg__2) {
  fromPtr(thisObj)->setSelection(arg__1, arg__2);
}
// setText(const QString & arg__1)
void c_QLabel__setText_QString(void *thisObj, const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  fromPtr(thisObj)->setText(arg__1);
  free((char *)arg__1_);
}
// setVisible(bool visible)
void c_QLabel__setVisible_bool(void *thisObj, bool visible) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLabel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}
// setWordWrap(bool on)
void c_QLabel__setWordWrap_bool(void *thisObj, bool on) {
  fromPtr(thisObj)->setWordWrap(on);
}
// sharedPainter() const
void *c_QLabel__sharedPainter(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->sharedPainter_nocallback();
  return result;
}
// sizeHint() const
void *c_QLabel__sizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLabel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->sizeHint_nocallback();
    } else {
      return targetPtr->sizeHint();
    }
  }()};
  return result;
}
// text() const
void *c_QLabel__text(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->text()};
  return result;
}
// tr(const char * s, const char * c, int n)
void *c_static_QLabel__tr_char_char_int(const char *s, const char *c, int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QLabel_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
// wordWrap() const
bool c_QLabel__wordWrap(void *thisObj) {
  const auto &result = fromPtr(thisObj)->wordWrap();
  return result;
}
void c_QLabel__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QLabel__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1128:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_customEvent>(
        callback);
    break;
  case 1145:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_devType>(callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_event>(callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1155:
    wrapper->m_focusNextPrevChildCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_focusNextPrevChild>(
        callback);
    break;
  case 1169:
    wrapper->m_hasHeightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_hasHeightForWidth>(
        callback);
    break;
  case 1173:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 1176:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_initPainter>(
        callback);
    break;
  case 1202:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1222:
    wrapper->m_minimumSizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_minimumSizeHint>(
        callback);
    break;
  case 1224:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QLabel_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1226:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_mouseMoveEvent>(
        callback);
    break;
  case 1227:
    wrapper->m_mousePressEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_mousePressEvent>(
        callback);
    break;
  case 1228:
    wrapper->m_mouseReleaseEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_mouseReleaseEvent>(
        callback);
    break;
  case 1235:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 1314:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_setVisible>(
        callback);
    break;
  case 1323:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1331:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_sizeHint>(callback);
    break;
  }
}
}
