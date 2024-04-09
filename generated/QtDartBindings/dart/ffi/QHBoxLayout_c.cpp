/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QHBoxLayout_c.h"

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
QHBoxLayout_wrapper::QHBoxLayout_wrapper(QWidget *parent)
    : ::QHBoxLayout(parent) {}
void QHBoxLayout_wrapper::addItem(QLayoutItem *arg__1) {
  if (m_addItemCallback) {
    const void *thisPtr = this;
    m_addItemCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QHBoxLayout::addItem(arg__1);
  }
}
void QHBoxLayout_wrapper::addItem_nocallback(QLayoutItem *arg__1) {
  ::QHBoxLayout::addItem(arg__1);
}
int QHBoxLayout_wrapper::count() const {
  if (m_countCallback) {
    const void *thisPtr = this;
    return m_countCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QHBoxLayout::count();
  }
}
int QHBoxLayout_wrapper::count_nocallback() const {
  return ::QHBoxLayout::count();
}
void QHBoxLayout_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QHBoxLayout::customEvent(event);
  }
}
void QHBoxLayout_wrapper::customEvent_nocallback(QEvent *event) {
  ::QHBoxLayout::customEvent(event);
}
bool QHBoxLayout_wrapper::event(QEvent *event) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    return ::QHBoxLayout::event(event);
  }
}
bool QHBoxLayout_wrapper::event_nocallback(QEvent *event) {
  return ::QHBoxLayout::event(event);
}
bool QHBoxLayout_wrapper::eventFilter(QObject *watched, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QHBoxLayout::eventFilter(watched, event);
  }
}
bool QHBoxLayout_wrapper::eventFilter_nocallback(QObject *watched,
                                                 QEvent *event) {
  return ::QHBoxLayout::eventFilter(watched, event);
}
QFlags<Qt::Orientation> QHBoxLayout_wrapper::expandingDirections() const {
  if (m_expandingDirectionsCallback) {
    const void *thisPtr = this;
    return m_expandingDirectionsCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QHBoxLayout::expandingDirections();
  }
}
QFlags<Qt::Orientation>
QHBoxLayout_wrapper::expandingDirections_nocallback() const {
  return ::QHBoxLayout::expandingDirections();
}
QRect QHBoxLayout_wrapper::geometry() const {
  if (m_geometryCallback) {
    const void *thisPtr = this;
    return *m_geometryCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QHBoxLayout::geometry();
  }
}
QRect QHBoxLayout_wrapper::geometry_nocallback() const {
  return ::QHBoxLayout::geometry();
}
bool QHBoxLayout_wrapper::hasHeightForWidth() const {
  if (m_hasHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QHBoxLayout::hasHeightForWidth();
  }
}
bool QHBoxLayout_wrapper::hasHeightForWidth_nocallback() const {
  return ::QHBoxLayout::hasHeightForWidth();
}
int QHBoxLayout_wrapper::heightForWidth(int arg__1) const {
  if (m_heightForWidthCallback) {
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QHBoxLayout::heightForWidth(arg__1);
  }
}
int QHBoxLayout_wrapper::heightForWidth_nocallback(int arg__1) const {
  return ::QHBoxLayout::heightForWidth(arg__1);
}
int QHBoxLayout_wrapper::indexOf(const QLayoutItem *arg__1) const {
  if (m_indexOfCallback) {
    const void *thisPtr = this;
    return m_indexOfCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QHBoxLayout::indexOf(arg__1);
  }
}
int QHBoxLayout_wrapper::indexOf_nocallback(const QLayoutItem *arg__1) const {
  return ::QHBoxLayout::indexOf(arg__1);
}
int QHBoxLayout_wrapper::indexOf(const QWidget *arg__1) const {
  if (m_indexOf_2Callback) {
    const void *thisPtr = this;
    return m_indexOf_2Callback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QHBoxLayout::indexOf(arg__1);
  }
}
int QHBoxLayout_wrapper::indexOf_nocallback(const QWidget *arg__1) const {
  return ::QHBoxLayout::indexOf(arg__1);
}
void QHBoxLayout_wrapper::invalidate() {
  if (m_invalidateCallback) {
    const void *thisPtr = this;
    m_invalidateCallback(const_cast<void *>(thisPtr));
  } else {
    ::QHBoxLayout::invalidate();
  }
}
void QHBoxLayout_wrapper::invalidate_nocallback() {
  ::QHBoxLayout::invalidate();
}
bool QHBoxLayout_wrapper::isEmpty() const {
  if (m_isEmptyCallback) {
    const void *thisPtr = this;
    return m_isEmptyCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QHBoxLayout::isEmpty();
  }
}
bool QHBoxLayout_wrapper::isEmpty_nocallback() const {
  return ::QHBoxLayout::isEmpty();
}
QLayoutItem *QHBoxLayout_wrapper::itemAt(int arg__1) const {
  if (m_itemAtCallback) {
    const void *thisPtr = this;
    return m_itemAtCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QHBoxLayout::itemAt(arg__1);
  }
}
QLayoutItem *QHBoxLayout_wrapper::itemAt_nocallback(int arg__1) const {
  return ::QHBoxLayout::itemAt(arg__1);
}
QLayout *QHBoxLayout_wrapper::layout() {
  if (m_layoutCallback) {
    const void *thisPtr = this;
    return m_layoutCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QHBoxLayout::layout();
  }
}
QLayout *QHBoxLayout_wrapper::layout_nocallback() {
  return ::QHBoxLayout::layout();
}
QSize QHBoxLayout_wrapper::maximumSize() const {
  if (m_maximumSizeCallback) {
    const void *thisPtr = this;
    return *m_maximumSizeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QHBoxLayout::maximumSize();
  }
}
QSize QHBoxLayout_wrapper::maximumSize_nocallback() const {
  return ::QHBoxLayout::maximumSize();
}
int QHBoxLayout_wrapper::minimumHeightForWidth(int arg__1) const {
  if (m_minimumHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_minimumHeightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QHBoxLayout::minimumHeightForWidth(arg__1);
  }
}
int QHBoxLayout_wrapper::minimumHeightForWidth_nocallback(int arg__1) const {
  return ::QHBoxLayout::minimumHeightForWidth(arg__1);
}
QSize QHBoxLayout_wrapper::minimumSize() const {
  if (m_minimumSizeCallback) {
    const void *thisPtr = this;
    return *m_minimumSizeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QHBoxLayout::minimumSize();
  }
}
QSize QHBoxLayout_wrapper::minimumSize_nocallback() const {
  return ::QHBoxLayout::minimumSize();
}
void QHBoxLayout_wrapper::setGeometry(const QRect &arg__1) {
  if (m_setGeometryCallback) {
    const void *thisPtr = this;
    m_setGeometryCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QHBoxLayout::setGeometry(arg__1);
  }
}
void QHBoxLayout_wrapper::setGeometry_nocallback(const QRect &arg__1) {
  ::QHBoxLayout::setGeometry(arg__1);
}
void QHBoxLayout_wrapper::setSpacing(int spacing) {
  if (m_setSpacingCallback) {
    const void *thisPtr = this;
    m_setSpacingCallback(const_cast<void *>(thisPtr), spacing);
  } else {
    ::QHBoxLayout::setSpacing(spacing);
  }
}
void QHBoxLayout_wrapper::setSpacing_nocallback(int spacing) {
  ::QHBoxLayout::setSpacing(spacing);
}
QSize QHBoxLayout_wrapper::sizeHint() const {
  if (m_sizeHintCallback) {
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QHBoxLayout::sizeHint();
  }
}
QSize QHBoxLayout_wrapper::sizeHint_nocallback() const {
  return ::QHBoxLayout::sizeHint();
}
int QHBoxLayout_wrapper::spacing() const {
  if (m_spacingCallback) {
    const void *thisPtr = this;
    return m_spacingCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QHBoxLayout::spacing();
  }
}
int QHBoxLayout_wrapper::spacing_nocallback() const {
  return ::QHBoxLayout::spacing();
}
QLayoutItem *QHBoxLayout_wrapper::takeAt(int arg__1) {
  if (m_takeAtCallback) {
    const void *thisPtr = this;
    return m_takeAtCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QHBoxLayout::takeAt(arg__1);
  }
}
QLayoutItem *QHBoxLayout_wrapper::takeAt_nocallback(int arg__1) {
  return ::QHBoxLayout::takeAt(arg__1);
}
QString QHBoxLayout_wrapper::tr(const char *s, const char *c, int n) {
  return ::QHBoxLayout::tr(s, c, n);
}
QWidget *QHBoxLayout_wrapper::widget() const {
  if (m_widgetCallback) {
    const void *thisPtr = this;
    return m_widgetCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QHBoxLayout::widget();
  }
}
QWidget *QHBoxLayout_wrapper::widget_nocallback() const {
  return ::QHBoxLayout::widget();
}
QHBoxLayout_wrapper::~QHBoxLayout_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QHBoxLayout *fromPtr(void *ptr) {
  return reinterpret_cast<QHBoxLayout *>(ptr);
}
static QtDartBindings_wrappersNS::QHBoxLayout_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
      ptr);
}
extern "C" {
void c_QHBoxLayout_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
      cppObj);
}
void *c_QHBoxLayout__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QHBoxLayout_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
// addItem(QLayoutItem * arg__1)
void c_QHBoxLayout__addItem_QLayoutItem(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QLayoutItem *>(arg__1_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->addItem_nocallback(arg__1);
    } else {
      return targetPtr->addItem(arg__1);
    }
  }();
}
// count() const
int c_QHBoxLayout__count(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->count_nocallback();
    } else {
      return targetPtr->count();
    }
  }();
  return result;
}
// customEvent(QEvent * event)
void c_QHBoxLayout__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// event(QEvent * event)
bool c_QHBoxLayout__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->event_nocallback(event);
    } else {
      return targetPtr->event(event);
    }
  }();
  return result;
}
// eventFilter(QObject * watched, QEvent * event)
bool c_QHBoxLayout__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                               void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->eventFilter_nocallback(watched, event);
    } else {
      return targetPtr->eventFilter(watched, event);
    }
  }();
  return result;
}
// expandingDirections() const
int c_QHBoxLayout__expandingDirections(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->expandingDirections_nocallback();
    } else {
      return targetPtr->expandingDirections();
    }
  }();
  return result;
}
// geometry() const
void *c_QHBoxLayout__geometry(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QRect>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->geometry_nocallback();
    } else {
      return targetPtr->geometry();
    }
  }()};
  return result;
}
// hasHeightForWidth() const
bool c_QHBoxLayout__hasHeightForWidth(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
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
int c_QHBoxLayout__heightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->heightForWidth_nocallback(arg__1);
    } else {
      return targetPtr->heightForWidth(arg__1);
    }
  }();
  return result;
}
// indexOf(const QLayoutItem * arg__1) const
int c_QHBoxLayout__indexOf_QLayoutItem(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QLayoutItem *>(arg__1_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->indexOf_nocallback(arg__1);
    } else {
      return targetPtr->indexOf(arg__1);
    }
  }();
  return result;
}
// indexOf(const QWidget * arg__1) const
int c_QHBoxLayout__indexOf_QWidget(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->indexOf_nocallback(arg__1);
    } else {
      return targetPtr->indexOf(arg__1);
    }
  }();
  return result;
}
// invalidate()
void c_QHBoxLayout__invalidate(void *thisObj) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->invalidate_nocallback();
    } else {
      return targetPtr->invalidate();
    }
  }();
}
// isEmpty() const
bool c_QHBoxLayout__isEmpty(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->isEmpty_nocallback();
    } else {
      return targetPtr->isEmpty();
    }
  }();
  return result;
}
// itemAt(int arg__1) const
void *c_QHBoxLayout__itemAt_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->itemAt_nocallback(arg__1);
    } else {
      return targetPtr->itemAt(arg__1);
    }
  }();
  return result;
}
// layout()
void *c_QHBoxLayout__layout(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->layout_nocallback();
    } else {
      return targetPtr->layout();
    }
  }();
  return result;
}
// maximumSize() const
void *c_QHBoxLayout__maximumSize(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->maximumSize_nocallback();
    } else {
      return targetPtr->maximumSize();
    }
  }()};
  return result;
}
// minimumHeightForWidth(int arg__1) const
int c_QHBoxLayout__minimumHeightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->minimumHeightForWidth_nocallback(arg__1);
    } else {
      return targetPtr->minimumHeightForWidth(arg__1);
    }
  }();
  return result;
}
// minimumSize() const
void *c_QHBoxLayout__minimumSize(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->minimumSize_nocallback();
    } else {
      return targetPtr->minimumSize();
    }
  }()};
  return result;
}
// setGeometry(const QRect & arg__1)
void c_QHBoxLayout__setGeometry_QRect(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setGeometry_nocallback(arg__1);
    } else {
      return targetPtr->setGeometry(arg__1);
    }
  }();
}
// setSpacing(int spacing)
void c_QHBoxLayout__setSpacing_int(void *thisObj, int spacing) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setSpacing_nocallback(spacing);
    } else {
      return targetPtr->setSpacing(spacing);
    }
  }();
}
// sizeHint() const
void *c_QHBoxLayout__sizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->sizeHint_nocallback();
    } else {
      return targetPtr->sizeHint();
    }
  }()};
  return result;
}
// spacing() const
int c_QHBoxLayout__spacing(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->spacing_nocallback();
    } else {
      return targetPtr->spacing();
    }
  }();
  return result;
}
// takeAt(int arg__1)
void *c_QHBoxLayout__takeAt_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->takeAt_nocallback(arg__1);
    } else {
      return targetPtr->takeAt(arg__1);
    }
  }();
  return result;
}
// tr(const char * s, const char * c, int n)
void *c_static_QHBoxLayout__tr_char_char_int(const char *s, const char *c,
                                             int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QHBoxLayout_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
// widget() const
void *c_QHBoxLayout__widget(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->widget_nocallback();
    } else {
      return targetPtr->widget();
    }
  }();
  return result;
}
void c_QHBoxLayout__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QHBoxLayout__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 3187:
    wrapper->m_addItemCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_addItem>(
        callback);
    break;
  case 3195:
    wrapper->m_countCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_count>(
        callback);
    break;
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_customEvent>(
        callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_event>(
        callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 3169:
    wrapper->m_expandingDirectionsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper::
                             Callback_expandingDirections>(callback);
    break;
  case 3170:
    wrapper->m_geometryCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_geometry>(
        callback);
    break;
  case 3171:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 3172:
    wrapper->m_heightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper::
                             Callback_heightForWidth>(callback);
    break;
  case 3206:
    wrapper->m_indexOfCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_indexOf>(
        callback);
    break;
  case 3207:
    wrapper->m_indexOf_2Callback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_indexOf_2>(
        callback);
    break;
  case 3173:
    wrapper->m_invalidateCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_invalidate>(
        callback);
    break;
  case 3174:
    wrapper->m_isEmptyCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_isEmpty>(
        callback);
    break;
  case 3214:
    wrapper->m_itemAtCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_itemAt>(
        callback);
    break;
  case 3175:
    wrapper->m_layoutCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_layout>(
        callback);
    break;
  case 3176:
    wrapper->m_maximumSizeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_maximumSize>(
        callback);
    break;
  case 3177:
    wrapper->m_minimumHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper::
                             Callback_minimumHeightForWidth>(callback);
    break;
  case 3178:
    wrapper->m_minimumSizeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_minimumSize>(
        callback);
    break;
  case 3179:
    wrapper->m_setGeometryCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_setGeometry>(
        callback);
    break;
  case 3232:
    wrapper->m_setSpacingCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_setSpacing>(
        callback);
    break;
  case 3180:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_sizeHint>(
        callback);
    break;
  case 3234:
    wrapper->m_spacingCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_spacing>(
        callback);
    break;
  case 3236:
    wrapper->m_takeAtCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_takeAt>(
        callback);
    break;
  case 3181:
    wrapper->m_widgetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_widget>(
        callback);
    break;
  }
}
}
