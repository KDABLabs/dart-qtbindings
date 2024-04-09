/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QVBoxLayout_c.h"

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
QVBoxLayout_wrapper::QVBoxLayout_wrapper(QWidget *parent)
    : ::QVBoxLayout(parent) {}
void QVBoxLayout_wrapper::addItem(QLayoutItem *arg__1) {
  if (m_addItemCallback) {
    const void *thisPtr = this;
    m_addItemCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QVBoxLayout::addItem(arg__1);
  }
}
void QVBoxLayout_wrapper::addItem_nocallback(QLayoutItem *arg__1) {
  ::QVBoxLayout::addItem(arg__1);
}
int QVBoxLayout_wrapper::count() const {
  if (m_countCallback) {
    const void *thisPtr = this;
    return m_countCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QVBoxLayout::count();
  }
}
int QVBoxLayout_wrapper::count_nocallback() const {
  return ::QVBoxLayout::count();
}
void QVBoxLayout_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QVBoxLayout::customEvent(event);
  }
}
void QVBoxLayout_wrapper::customEvent_nocallback(QEvent *event) {
  ::QVBoxLayout::customEvent(event);
}
bool QVBoxLayout_wrapper::event(QEvent *event) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    return ::QVBoxLayout::event(event);
  }
}
bool QVBoxLayout_wrapper::event_nocallback(QEvent *event) {
  return ::QVBoxLayout::event(event);
}
bool QVBoxLayout_wrapper::eventFilter(QObject *watched, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QVBoxLayout::eventFilter(watched, event);
  }
}
bool QVBoxLayout_wrapper::eventFilter_nocallback(QObject *watched,
                                                 QEvent *event) {
  return ::QVBoxLayout::eventFilter(watched, event);
}
QFlags<Qt::Orientation> QVBoxLayout_wrapper::expandingDirections() const {
  if (m_expandingDirectionsCallback) {
    const void *thisPtr = this;
    return m_expandingDirectionsCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QVBoxLayout::expandingDirections();
  }
}
QFlags<Qt::Orientation>
QVBoxLayout_wrapper::expandingDirections_nocallback() const {
  return ::QVBoxLayout::expandingDirections();
}
QRect QVBoxLayout_wrapper::geometry() const {
  if (m_geometryCallback) {
    const void *thisPtr = this;
    return *m_geometryCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QVBoxLayout::geometry();
  }
}
QRect QVBoxLayout_wrapper::geometry_nocallback() const {
  return ::QVBoxLayout::geometry();
}
bool QVBoxLayout_wrapper::hasHeightForWidth() const {
  if (m_hasHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QVBoxLayout::hasHeightForWidth();
  }
}
bool QVBoxLayout_wrapper::hasHeightForWidth_nocallback() const {
  return ::QVBoxLayout::hasHeightForWidth();
}
int QVBoxLayout_wrapper::heightForWidth(int arg__1) const {
  if (m_heightForWidthCallback) {
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QVBoxLayout::heightForWidth(arg__1);
  }
}
int QVBoxLayout_wrapper::heightForWidth_nocallback(int arg__1) const {
  return ::QVBoxLayout::heightForWidth(arg__1);
}
int QVBoxLayout_wrapper::indexOf(const QLayoutItem *arg__1) const {
  if (m_indexOfCallback) {
    const void *thisPtr = this;
    return m_indexOfCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QVBoxLayout::indexOf(arg__1);
  }
}
int QVBoxLayout_wrapper::indexOf_nocallback(const QLayoutItem *arg__1) const {
  return ::QVBoxLayout::indexOf(arg__1);
}
int QVBoxLayout_wrapper::indexOf(const QWidget *arg__1) const {
  if (m_indexOf_2Callback) {
    const void *thisPtr = this;
    return m_indexOf_2Callback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QVBoxLayout::indexOf(arg__1);
  }
}
int QVBoxLayout_wrapper::indexOf_nocallback(const QWidget *arg__1) const {
  return ::QVBoxLayout::indexOf(arg__1);
}
void QVBoxLayout_wrapper::invalidate() {
  if (m_invalidateCallback) {
    const void *thisPtr = this;
    m_invalidateCallback(const_cast<void *>(thisPtr));
  } else {
    ::QVBoxLayout::invalidate();
  }
}
void QVBoxLayout_wrapper::invalidate_nocallback() {
  ::QVBoxLayout::invalidate();
}
bool QVBoxLayout_wrapper::isEmpty() const {
  if (m_isEmptyCallback) {
    const void *thisPtr = this;
    return m_isEmptyCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QVBoxLayout::isEmpty();
  }
}
bool QVBoxLayout_wrapper::isEmpty_nocallback() const {
  return ::QVBoxLayout::isEmpty();
}
QLayoutItem *QVBoxLayout_wrapper::itemAt(int arg__1) const {
  if (m_itemAtCallback) {
    const void *thisPtr = this;
    return m_itemAtCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QVBoxLayout::itemAt(arg__1);
  }
}
QLayoutItem *QVBoxLayout_wrapper::itemAt_nocallback(int arg__1) const {
  return ::QVBoxLayout::itemAt(arg__1);
}
QLayout *QVBoxLayout_wrapper::layout() {
  if (m_layoutCallback) {
    const void *thisPtr = this;
    return m_layoutCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QVBoxLayout::layout();
  }
}
QLayout *QVBoxLayout_wrapper::layout_nocallback() {
  return ::QVBoxLayout::layout();
}
QSize QVBoxLayout_wrapper::maximumSize() const {
  if (m_maximumSizeCallback) {
    const void *thisPtr = this;
    return *m_maximumSizeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QVBoxLayout::maximumSize();
  }
}
QSize QVBoxLayout_wrapper::maximumSize_nocallback() const {
  return ::QVBoxLayout::maximumSize();
}
int QVBoxLayout_wrapper::minimumHeightForWidth(int arg__1) const {
  if (m_minimumHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_minimumHeightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QVBoxLayout::minimumHeightForWidth(arg__1);
  }
}
int QVBoxLayout_wrapper::minimumHeightForWidth_nocallback(int arg__1) const {
  return ::QVBoxLayout::minimumHeightForWidth(arg__1);
}
QSize QVBoxLayout_wrapper::minimumSize() const {
  if (m_minimumSizeCallback) {
    const void *thisPtr = this;
    return *m_minimumSizeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QVBoxLayout::minimumSize();
  }
}
QSize QVBoxLayout_wrapper::minimumSize_nocallback() const {
  return ::QVBoxLayout::minimumSize();
}
void QVBoxLayout_wrapper::setGeometry(const QRect &arg__1) {
  if (m_setGeometryCallback) {
    const void *thisPtr = this;
    m_setGeometryCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QVBoxLayout::setGeometry(arg__1);
  }
}
void QVBoxLayout_wrapper::setGeometry_nocallback(const QRect &arg__1) {
  ::QVBoxLayout::setGeometry(arg__1);
}
void QVBoxLayout_wrapper::setSpacing(int spacing) {
  if (m_setSpacingCallback) {
    const void *thisPtr = this;
    m_setSpacingCallback(const_cast<void *>(thisPtr), spacing);
  } else {
    ::QVBoxLayout::setSpacing(spacing);
  }
}
void QVBoxLayout_wrapper::setSpacing_nocallback(int spacing) {
  ::QVBoxLayout::setSpacing(spacing);
}
QSize QVBoxLayout_wrapper::sizeHint() const {
  if (m_sizeHintCallback) {
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QVBoxLayout::sizeHint();
  }
}
QSize QVBoxLayout_wrapper::sizeHint_nocallback() const {
  return ::QVBoxLayout::sizeHint();
}
int QVBoxLayout_wrapper::spacing() const {
  if (m_spacingCallback) {
    const void *thisPtr = this;
    return m_spacingCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QVBoxLayout::spacing();
  }
}
int QVBoxLayout_wrapper::spacing_nocallback() const {
  return ::QVBoxLayout::spacing();
}
QLayoutItem *QVBoxLayout_wrapper::takeAt(int arg__1) {
  if (m_takeAtCallback) {
    const void *thisPtr = this;
    return m_takeAtCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QVBoxLayout::takeAt(arg__1);
  }
}
QLayoutItem *QVBoxLayout_wrapper::takeAt_nocallback(int arg__1) {
  return ::QVBoxLayout::takeAt(arg__1);
}
QString QVBoxLayout_wrapper::tr(const char *s, const char *c, int n) {
  return ::QVBoxLayout::tr(s, c, n);
}
QWidget *QVBoxLayout_wrapper::widget() const {
  if (m_widgetCallback) {
    const void *thisPtr = this;
    return m_widgetCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QVBoxLayout::widget();
  }
}
QWidget *QVBoxLayout_wrapper::widget_nocallback() const {
  return ::QVBoxLayout::widget();
}
QVBoxLayout_wrapper::~QVBoxLayout_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QVBoxLayout *fromPtr(void *ptr) {
  return reinterpret_cast<QVBoxLayout *>(ptr);
}
static QtDartBindings_wrappersNS::QVBoxLayout_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QVBoxLayout_wrapper *>(
      ptr);
}
extern "C" {
void c_QVBoxLayout_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QVBoxLayout_wrapper *>(
      cppObj);
}
void *c_QVBoxLayout__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QVBoxLayout_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
// addItem(QLayoutItem * arg__1)
void c_QVBoxLayout__addItem_QLayoutItem(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QLayoutItem *>(arg__1_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QVBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->addItem_nocallback(arg__1);
    } else {
      return targetPtr->addItem(arg__1);
    }
  }();
}
// count() const
int c_QVBoxLayout__count(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QVBoxLayout_wrapper *>(
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
void c_QVBoxLayout__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// event(QEvent * event)
bool c_QVBoxLayout__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QVBoxLayout_wrapper *>(
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
bool c_QVBoxLayout__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                               void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QVBoxLayout_wrapper *>(
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
int c_QVBoxLayout__expandingDirections(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QVBoxLayout_wrapper *>(
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
void *c_QVBoxLayout__geometry(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QRect>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QVBoxLayout_wrapper *>(
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
bool c_QVBoxLayout__hasHeightForWidth(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QVBoxLayout_wrapper *>(
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
int c_QVBoxLayout__heightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QVBoxLayout_wrapper *>(
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
int c_QVBoxLayout__indexOf_QLayoutItem(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QLayoutItem *>(arg__1_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QVBoxLayout_wrapper *>(
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
int c_QVBoxLayout__indexOf_QWidget(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QVBoxLayout_wrapper *>(
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
void c_QVBoxLayout__invalidate(void *thisObj) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QVBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->invalidate_nocallback();
    } else {
      return targetPtr->invalidate();
    }
  }();
}
// isEmpty() const
bool c_QVBoxLayout__isEmpty(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QVBoxLayout_wrapper *>(
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
void *c_QVBoxLayout__itemAt_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QVBoxLayout_wrapper *>(
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
void *c_QVBoxLayout__layout(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QVBoxLayout_wrapper *>(
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
void *c_QVBoxLayout__maximumSize(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QVBoxLayout_wrapper *>(
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
int c_QVBoxLayout__minimumHeightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QVBoxLayout_wrapper *>(
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
void *c_QVBoxLayout__minimumSize(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QVBoxLayout_wrapper *>(
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
void c_QVBoxLayout__setGeometry_QRect(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QVBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setGeometry_nocallback(arg__1);
    } else {
      return targetPtr->setGeometry(arg__1);
    }
  }();
}
// setSpacing(int spacing)
void c_QVBoxLayout__setSpacing_int(void *thisObj, int spacing) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QVBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setSpacing_nocallback(spacing);
    } else {
      return targetPtr->setSpacing(spacing);
    }
  }();
}
// sizeHint() const
void *c_QVBoxLayout__sizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QVBoxLayout_wrapper *>(
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
int c_QVBoxLayout__spacing(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QVBoxLayout_wrapper *>(
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
void *c_QVBoxLayout__takeAt_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QVBoxLayout_wrapper *>(
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
void *c_static_QVBoxLayout__tr_char_char_int(const char *s, const char *c,
                                             int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QVBoxLayout_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
// widget() const
void *c_QVBoxLayout__widget(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QVBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->widget_nocallback();
    } else {
      return targetPtr->widget();
    }
  }();
  return result;
}
void c_QVBoxLayout__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QVBoxLayout__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 3187:
    wrapper->m_addItemCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QVBoxLayout_wrapper::Callback_addItem>(
        callback);
    break;
  case 3195:
    wrapper->m_countCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QVBoxLayout_wrapper::Callback_count>(
        callback);
    break;
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QVBoxLayout_wrapper::Callback_customEvent>(
        callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QVBoxLayout_wrapper::Callback_event>(
        callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QVBoxLayout_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 3169:
    wrapper->m_expandingDirectionsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QVBoxLayout_wrapper::
                             Callback_expandingDirections>(callback);
    break;
  case 3170:
    wrapper->m_geometryCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QVBoxLayout_wrapper::Callback_geometry>(
        callback);
    break;
  case 3171:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QVBoxLayout_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 3172:
    wrapper->m_heightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QVBoxLayout_wrapper::
                             Callback_heightForWidth>(callback);
    break;
  case 3206:
    wrapper->m_indexOfCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QVBoxLayout_wrapper::Callback_indexOf>(
        callback);
    break;
  case 3207:
    wrapper->m_indexOf_2Callback = reinterpret_cast<
        QtDartBindings_wrappersNS::QVBoxLayout_wrapper::Callback_indexOf_2>(
        callback);
    break;
  case 3173:
    wrapper->m_invalidateCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QVBoxLayout_wrapper::Callback_invalidate>(
        callback);
    break;
  case 3174:
    wrapper->m_isEmptyCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QVBoxLayout_wrapper::Callback_isEmpty>(
        callback);
    break;
  case 3214:
    wrapper->m_itemAtCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QVBoxLayout_wrapper::Callback_itemAt>(
        callback);
    break;
  case 3175:
    wrapper->m_layoutCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QVBoxLayout_wrapper::Callback_layout>(
        callback);
    break;
  case 3176:
    wrapper->m_maximumSizeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QVBoxLayout_wrapper::Callback_maximumSize>(
        callback);
    break;
  case 3177:
    wrapper->m_minimumHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QVBoxLayout_wrapper::
                             Callback_minimumHeightForWidth>(callback);
    break;
  case 3178:
    wrapper->m_minimumSizeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QVBoxLayout_wrapper::Callback_minimumSize>(
        callback);
    break;
  case 3179:
    wrapper->m_setGeometryCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QVBoxLayout_wrapper::Callback_setGeometry>(
        callback);
    break;
  case 3232:
    wrapper->m_setSpacingCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QVBoxLayout_wrapper::Callback_setSpacing>(
        callback);
    break;
  case 3180:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QVBoxLayout_wrapper::Callback_sizeHint>(
        callback);
    break;
  case 3234:
    wrapper->m_spacingCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QVBoxLayout_wrapper::Callback_spacing>(
        callback);
    break;
  case 3236:
    wrapper->m_takeAtCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QVBoxLayout_wrapper::Callback_takeAt>(
        callback);
    break;
  case 3181:
    wrapper->m_widgetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QVBoxLayout_wrapper::Callback_widget>(
        callback);
    break;
  }
}
}
