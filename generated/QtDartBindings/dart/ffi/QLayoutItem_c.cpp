/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QLayoutItem_c.h"

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
QLayoutItem_wrapper::QLayoutItem_wrapper() : ::QLayoutItem() {}
QFlags<Qt::Orientation> QLayoutItem_wrapper::expandingDirections() const {
  if (m_expandingDirectionsCallback) {
    const void *thisPtr = this;
    return m_expandingDirectionsCallback(const_cast<void *>(thisPtr));
  } else {
    std::cerr << "expandingDirections: Warning: Calling pure-virtual\n";
    return {};
  }
}
QFlags<Qt::Orientation>
QLayoutItem_wrapper::expandingDirections_nocallback() const {
  std::cerr << "expandingDirections: Warning: Calling pure-virtual\n";
  return {};
}
QRect QLayoutItem_wrapper::geometry() const {
  if (m_geometryCallback) {
    const void *thisPtr = this;
    return *m_geometryCallback(const_cast<void *>(thisPtr));
  } else {
    std::cerr << "geometry: Warning: Calling pure-virtual\n";
    return {};
  }
}
QRect QLayoutItem_wrapper::geometry_nocallback() const {
  std::cerr << "geometry: Warning: Calling pure-virtual\n";
  return {};
}
bool QLayoutItem_wrapper::hasHeightForWidth() const {
  if (m_hasHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QLayoutItem::hasHeightForWidth();
  }
}
bool QLayoutItem_wrapper::hasHeightForWidth_nocallback() const {
  return ::QLayoutItem::hasHeightForWidth();
}
int QLayoutItem_wrapper::heightForWidth(int arg__1) const {
  if (m_heightForWidthCallback) {
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QLayoutItem::heightForWidth(arg__1);
  }
}
int QLayoutItem_wrapper::heightForWidth_nocallback(int arg__1) const {
  return ::QLayoutItem::heightForWidth(arg__1);
}
void QLayoutItem_wrapper::invalidate() {
  if (m_invalidateCallback) {
    const void *thisPtr = this;
    m_invalidateCallback(const_cast<void *>(thisPtr));
  } else {
    ::QLayoutItem::invalidate();
  }
}
void QLayoutItem_wrapper::invalidate_nocallback() {
  ::QLayoutItem::invalidate();
}
bool QLayoutItem_wrapper::isEmpty() const {
  if (m_isEmptyCallback) {
    const void *thisPtr = this;
    return m_isEmptyCallback(const_cast<void *>(thisPtr));
  } else {
    std::cerr << "isEmpty: Warning: Calling pure-virtual\n";
    return {};
  }
}
bool QLayoutItem_wrapper::isEmpty_nocallback() const {
  std::cerr << "isEmpty: Warning: Calling pure-virtual\n";
  return {};
}
QLayout *QLayoutItem_wrapper::layout() {
  if (m_layoutCallback) {
    const void *thisPtr = this;
    return m_layoutCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QLayoutItem::layout();
  }
}
QLayout *QLayoutItem_wrapper::layout_nocallback() {
  return ::QLayoutItem::layout();
}
QSize QLayoutItem_wrapper::maximumSize() const {
  if (m_maximumSizeCallback) {
    const void *thisPtr = this;
    return *m_maximumSizeCallback(const_cast<void *>(thisPtr));
  } else {
    std::cerr << "maximumSize: Warning: Calling pure-virtual\n";
    return {};
  }
}
QSize QLayoutItem_wrapper::maximumSize_nocallback() const {
  std::cerr << "maximumSize: Warning: Calling pure-virtual\n";
  return {};
}
int QLayoutItem_wrapper::minimumHeightForWidth(int arg__1) const {
  if (m_minimumHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_minimumHeightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QLayoutItem::minimumHeightForWidth(arg__1);
  }
}
int QLayoutItem_wrapper::minimumHeightForWidth_nocallback(int arg__1) const {
  return ::QLayoutItem::minimumHeightForWidth(arg__1);
}
QSize QLayoutItem_wrapper::minimumSize() const {
  if (m_minimumSizeCallback) {
    const void *thisPtr = this;
    return *m_minimumSizeCallback(const_cast<void *>(thisPtr));
  } else {
    std::cerr << "minimumSize: Warning: Calling pure-virtual\n";
    return {};
  }
}
QSize QLayoutItem_wrapper::minimumSize_nocallback() const {
  std::cerr << "minimumSize: Warning: Calling pure-virtual\n";
  return {};
}
void QLayoutItem_wrapper::setGeometry(const QRect &arg__1) {
  if (m_setGeometryCallback) {
    const void *thisPtr = this;
    m_setGeometryCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    std::cerr << "setGeometry: Warning: Calling pure-virtual\n";
    return;
  }
}
void QLayoutItem_wrapper::setGeometry_nocallback(const QRect &arg__1) {
  std::cerr << "setGeometry: Warning: Calling pure-virtual\n";
  return;
}
QSize QLayoutItem_wrapper::sizeHint() const {
  if (m_sizeHintCallback) {
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    std::cerr << "sizeHint: Warning: Calling pure-virtual\n";
    return {};
  }
}
QSize QLayoutItem_wrapper::sizeHint_nocallback() const {
  std::cerr << "sizeHint: Warning: Calling pure-virtual\n";
  return {};
}
QWidget *QLayoutItem_wrapper::widget() const {
  if (m_widgetCallback) {
    const void *thisPtr = this;
    return m_widgetCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QLayoutItem::widget();
  }
}
QWidget *QLayoutItem_wrapper::widget_nocallback() const {
  return ::QLayoutItem::widget();
}
QLayoutItem_wrapper::~QLayoutItem_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QLayoutItem *fromPtr(void *ptr) {
  return reinterpret_cast<QLayoutItem *>(ptr);
}
static QtDartBindings_wrappersNS::QLayoutItem_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper *>(
      ptr);
}
extern "C" {
void c_QLayoutItem_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper *>(
      cppObj);
}
void *c_QLayoutItem__constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QLayoutItem_wrapper();
  return reinterpret_cast<void *>(ptr);
}
// expandingDirections() const
int c_QLayoutItem__expandingDirections(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper *>(
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
void *c_QLayoutItem__geometry(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QRect>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper *>(
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
bool c_QLayoutItem__hasHeightForWidth(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper *>(
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
int c_QLayoutItem__heightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->heightForWidth_nocallback(arg__1);
    } else {
      return targetPtr->heightForWidth(arg__1);
    }
  }();
  return result;
}
// invalidate()
void c_QLayoutItem__invalidate(void *thisObj) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->invalidate_nocallback();
    } else {
      return targetPtr->invalidate();
    }
  }();
}
// isEmpty() const
bool c_QLayoutItem__isEmpty(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->isEmpty_nocallback();
    } else {
      return targetPtr->isEmpty();
    }
  }();
  return result;
}
// layout()
void *c_QLayoutItem__layout(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper *>(
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
void *c_QLayoutItem__maximumSize(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper *>(
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
int c_QLayoutItem__minimumHeightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper *>(
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
void *c_QLayoutItem__minimumSize(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper *>(
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
void c_QLayoutItem__setGeometry_QRect(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setGeometry_nocallback(arg__1);
    } else {
      return targetPtr->setGeometry(arg__1);
    }
  }();
}
// sizeHint() const
void *c_QLayoutItem__sizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->sizeHint_nocallback();
    } else {
      return targetPtr->sizeHint();
    }
  }()};
  return result;
}
// widget() const
void *c_QLayoutItem__widget(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->widget_nocallback();
    } else {
      return targetPtr->widget();
    }
  }();
  return result;
}
void c_QLayoutItem__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QLayoutItem__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 3169:
    wrapper->m_expandingDirectionsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper::
                             Callback_expandingDirections>(callback);
    break;
  case 3170:
    wrapper->m_geometryCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayoutItem_wrapper::Callback_geometry>(
        callback);
    break;
  case 3171:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 3172:
    wrapper->m_heightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper::
                             Callback_heightForWidth>(callback);
    break;
  case 3173:
    wrapper->m_invalidateCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayoutItem_wrapper::Callback_invalidate>(
        callback);
    break;
  case 3174:
    wrapper->m_isEmptyCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayoutItem_wrapper::Callback_isEmpty>(
        callback);
    break;
  case 3175:
    wrapper->m_layoutCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayoutItem_wrapper::Callback_layout>(
        callback);
    break;
  case 3176:
    wrapper->m_maximumSizeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayoutItem_wrapper::Callback_maximumSize>(
        callback);
    break;
  case 3177:
    wrapper->m_minimumHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper::
                             Callback_minimumHeightForWidth>(callback);
    break;
  case 3178:
    wrapper->m_minimumSizeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayoutItem_wrapper::Callback_minimumSize>(
        callback);
    break;
  case 3179:
    wrapper->m_setGeometryCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayoutItem_wrapper::Callback_setGeometry>(
        callback);
    break;
  case 3180:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayoutItem_wrapper::Callback_sizeHint>(
        callback);
    break;
  case 3181:
    wrapper->m_widgetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayoutItem_wrapper::Callback_widget>(
        callback);
    break;
  }
}
}
