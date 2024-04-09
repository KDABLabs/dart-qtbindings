/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QBoxLayout_c.h"

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
void QBoxLayout_wrapper::addItem(QLayoutItem *arg__1) {
  if (m_addItemCallback) {
    const void *thisPtr = this;
    m_addItemCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QBoxLayout::addItem(arg__1);
  }
}
void QBoxLayout_wrapper::addItem_nocallback(QLayoutItem *arg__1) {
  ::QBoxLayout::addItem(arg__1);
}
void QBoxLayout_wrapper::addLayout(QLayout *layout, int stretch) {
  ::QBoxLayout::addLayout(layout, stretch);
}
void QBoxLayout_wrapper::addSpacing(int size) {
  ::QBoxLayout::addSpacing(size);
}
void QBoxLayout_wrapper::addStretch(int stretch) {
  ::QBoxLayout::addStretch(stretch);
}
void QBoxLayout_wrapper::addStrut(int arg__1) {
  ::QBoxLayout::addStrut(arg__1);
}
void QBoxLayout_wrapper::addWidget(QWidget *arg__1, int stretch) {
  ::QBoxLayout::addWidget(arg__1, stretch);
}
int QBoxLayout_wrapper::count() const {
  if (m_countCallback) {
    const void *thisPtr = this;
    return m_countCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QBoxLayout::count();
  }
}
int QBoxLayout_wrapper::count_nocallback() const {
  return ::QBoxLayout::count();
}
void QBoxLayout_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QBoxLayout::customEvent(event);
  }
}
void QBoxLayout_wrapper::customEvent_nocallback(QEvent *event) {
  ::QBoxLayout::customEvent(event);
}
bool QBoxLayout_wrapper::event(QEvent *event) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    return ::QBoxLayout::event(event);
  }
}
bool QBoxLayout_wrapper::event_nocallback(QEvent *event) {
  return ::QBoxLayout::event(event);
}
bool QBoxLayout_wrapper::eventFilter(QObject *watched, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QBoxLayout::eventFilter(watched, event);
  }
}
bool QBoxLayout_wrapper::eventFilter_nocallback(QObject *watched,
                                                QEvent *event) {
  return ::QBoxLayout::eventFilter(watched, event);
}
QFlags<Qt::Orientation> QBoxLayout_wrapper::expandingDirections() const {
  if (m_expandingDirectionsCallback) {
    const void *thisPtr = this;
    return m_expandingDirectionsCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QBoxLayout::expandingDirections();
  }
}
QFlags<Qt::Orientation>
QBoxLayout_wrapper::expandingDirections_nocallback() const {
  return ::QBoxLayout::expandingDirections();
}
QRect QBoxLayout_wrapper::geometry() const {
  if (m_geometryCallback) {
    const void *thisPtr = this;
    return *m_geometryCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QBoxLayout::geometry();
  }
}
QRect QBoxLayout_wrapper::geometry_nocallback() const {
  return ::QBoxLayout::geometry();
}
bool QBoxLayout_wrapper::hasHeightForWidth() const {
  if (m_hasHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QBoxLayout::hasHeightForWidth();
  }
}
bool QBoxLayout_wrapper::hasHeightForWidth_nocallback() const {
  return ::QBoxLayout::hasHeightForWidth();
}
int QBoxLayout_wrapper::heightForWidth(int arg__1) const {
  if (m_heightForWidthCallback) {
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QBoxLayout::heightForWidth(arg__1);
  }
}
int QBoxLayout_wrapper::heightForWidth_nocallback(int arg__1) const {
  return ::QBoxLayout::heightForWidth(arg__1);
}
int QBoxLayout_wrapper::indexOf(const QLayoutItem *arg__1) const {
  if (m_indexOfCallback) {
    const void *thisPtr = this;
    return m_indexOfCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QBoxLayout::indexOf(arg__1);
  }
}
int QBoxLayout_wrapper::indexOf_nocallback(const QLayoutItem *arg__1) const {
  return ::QBoxLayout::indexOf(arg__1);
}
int QBoxLayout_wrapper::indexOf(const QWidget *arg__1) const {
  if (m_indexOf_2Callback) {
    const void *thisPtr = this;
    return m_indexOf_2Callback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QBoxLayout::indexOf(arg__1);
  }
}
int QBoxLayout_wrapper::indexOf_nocallback(const QWidget *arg__1) const {
  return ::QBoxLayout::indexOf(arg__1);
}
void QBoxLayout_wrapper::insertItem(int index, QLayoutItem *arg__2) {
  ::QBoxLayout::insertItem(index, arg__2);
}
void QBoxLayout_wrapper::insertLayout(int index, QLayout *layout, int stretch) {
  ::QBoxLayout::insertLayout(index, layout, stretch);
}
void QBoxLayout_wrapper::insertSpacing(int index, int size) {
  ::QBoxLayout::insertSpacing(index, size);
}
void QBoxLayout_wrapper::insertStretch(int index, int stretch) {
  ::QBoxLayout::insertStretch(index, stretch);
}
void QBoxLayout_wrapper::insertWidget(int index, QWidget *widget, int stretch) {
  ::QBoxLayout::insertWidget(index, widget, stretch);
}
void QBoxLayout_wrapper::invalidate() {
  if (m_invalidateCallback) {
    const void *thisPtr = this;
    m_invalidateCallback(const_cast<void *>(thisPtr));
  } else {
    ::QBoxLayout::invalidate();
  }
}
void QBoxLayout_wrapper::invalidate_nocallback() { ::QBoxLayout::invalidate(); }
bool QBoxLayout_wrapper::isEmpty() const {
  if (m_isEmptyCallback) {
    const void *thisPtr = this;
    return m_isEmptyCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QBoxLayout::isEmpty();
  }
}
bool QBoxLayout_wrapper::isEmpty_nocallback() const {
  return ::QBoxLayout::isEmpty();
}
QLayoutItem *QBoxLayout_wrapper::itemAt(int arg__1) const {
  if (m_itemAtCallback) {
    const void *thisPtr = this;
    return m_itemAtCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QBoxLayout::itemAt(arg__1);
  }
}
QLayoutItem *QBoxLayout_wrapper::itemAt_nocallback(int arg__1) const {
  return ::QBoxLayout::itemAt(arg__1);
}
QLayout *QBoxLayout_wrapper::layout() {
  if (m_layoutCallback) {
    const void *thisPtr = this;
    return m_layoutCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QBoxLayout::layout();
  }
}
QLayout *QBoxLayout_wrapper::layout_nocallback() {
  return ::QBoxLayout::layout();
}
QSize QBoxLayout_wrapper::maximumSize() const {
  if (m_maximumSizeCallback) {
    const void *thisPtr = this;
    return *m_maximumSizeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QBoxLayout::maximumSize();
  }
}
QSize QBoxLayout_wrapper::maximumSize_nocallback() const {
  return ::QBoxLayout::maximumSize();
}
int QBoxLayout_wrapper::minimumHeightForWidth(int arg__1) const {
  if (m_minimumHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_minimumHeightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QBoxLayout::minimumHeightForWidth(arg__1);
  }
}
int QBoxLayout_wrapper::minimumHeightForWidth_nocallback(int arg__1) const {
  return ::QBoxLayout::minimumHeightForWidth(arg__1);
}
QSize QBoxLayout_wrapper::minimumSize() const {
  if (m_minimumSizeCallback) {
    const void *thisPtr = this;
    return *m_minimumSizeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QBoxLayout::minimumSize();
  }
}
QSize QBoxLayout_wrapper::minimumSize_nocallback() const {
  return ::QBoxLayout::minimumSize();
}
void QBoxLayout_wrapper::setGeometry(const QRect &arg__1) {
  if (m_setGeometryCallback) {
    const void *thisPtr = this;
    m_setGeometryCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QBoxLayout::setGeometry(arg__1);
  }
}
void QBoxLayout_wrapper::setGeometry_nocallback(const QRect &arg__1) {
  ::QBoxLayout::setGeometry(arg__1);
}
void QBoxLayout_wrapper::setSpacing(int spacing) {
  if (m_setSpacingCallback) {
    const void *thisPtr = this;
    m_setSpacingCallback(const_cast<void *>(thisPtr), spacing);
  } else {
    ::QBoxLayout::setSpacing(spacing);
  }
}
void QBoxLayout_wrapper::setSpacing_nocallback(int spacing) {
  ::QBoxLayout::setSpacing(spacing);
}
void QBoxLayout_wrapper::setStretch(int index, int stretch) {
  ::QBoxLayout::setStretch(index, stretch);
}
bool QBoxLayout_wrapper::setStretchFactor(QLayout *l, int stretch) {
  return ::QBoxLayout::setStretchFactor(l, stretch);
}
bool QBoxLayout_wrapper::setStretchFactor(QWidget *w, int stretch) {
  return ::QBoxLayout::setStretchFactor(w, stretch);
}
QSize QBoxLayout_wrapper::sizeHint() const {
  if (m_sizeHintCallback) {
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QBoxLayout::sizeHint();
  }
}
QSize QBoxLayout_wrapper::sizeHint_nocallback() const {
  return ::QBoxLayout::sizeHint();
}
int QBoxLayout_wrapper::spacing() const {
  if (m_spacingCallback) {
    const void *thisPtr = this;
    return m_spacingCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QBoxLayout::spacing();
  }
}
int QBoxLayout_wrapper::spacing_nocallback() const {
  return ::QBoxLayout::spacing();
}
int QBoxLayout_wrapper::stretch(int index) const {
  return ::QBoxLayout::stretch(index);
}
QLayoutItem *QBoxLayout_wrapper::takeAt(int arg__1) {
  if (m_takeAtCallback) {
    const void *thisPtr = this;
    return m_takeAtCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QBoxLayout::takeAt(arg__1);
  }
}
QLayoutItem *QBoxLayout_wrapper::takeAt_nocallback(int arg__1) {
  return ::QBoxLayout::takeAt(arg__1);
}
QString QBoxLayout_wrapper::tr(const char *s, const char *c, int n) {
  return ::QBoxLayout::tr(s, c, n);
}
QWidget *QBoxLayout_wrapper::widget() const {
  if (m_widgetCallback) {
    const void *thisPtr = this;
    return m_widgetCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QBoxLayout::widget();
  }
}
QWidget *QBoxLayout_wrapper::widget_nocallback() const {
  return ::QBoxLayout::widget();
}
QBoxLayout_wrapper::~QBoxLayout_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QBoxLayout *fromPtr(void *ptr) {
  return reinterpret_cast<QBoxLayout *>(ptr);
}
static QtDartBindings_wrappersNS::QBoxLayout_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(ptr);
}
extern "C" {
void c_QBoxLayout_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
      cppObj);
} // addItem(QLayoutItem * arg__1)
void c_QBoxLayout__addItem_QLayoutItem(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QLayoutItem *>(arg__1_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->addItem_nocallback(arg__1);
    } else {
      return targetPtr->addItem(arg__1);
    }
  }();
}
// addLayout(QLayout * layout, int stretch)
void c_QBoxLayout__addLayout_QLayout_int(void *thisObj, void *layout_,
                                         int stretch) {
  auto layout = reinterpret_cast<QLayout *>(layout_);
  fromPtr(thisObj)->addLayout(layout, stretch);
}
// addSpacing(int size)
void c_QBoxLayout__addSpacing_int(void *thisObj, int size) {
  fromPtr(thisObj)->addSpacing(size);
}
// addStretch(int stretch)
void c_QBoxLayout__addStretch_int(void *thisObj, int stretch) {
  fromPtr(thisObj)->addStretch(stretch);
}
// addStrut(int arg__1)
void c_QBoxLayout__addStrut_int(void *thisObj, int arg__1) {
  fromPtr(thisObj)->addStrut(arg__1);
}
// addWidget(QWidget * arg__1, int stretch)
void c_QBoxLayout__addWidget_QWidget_int(void *thisObj, void *arg__1_,
                                         int stretch) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  fromPtr(thisObj)->addWidget(arg__1, stretch);
}
// count() const
int c_QBoxLayout__count(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
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
void c_QBoxLayout__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// event(QEvent * event)
bool c_QBoxLayout__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
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
bool c_QBoxLayout__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                              void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
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
int c_QBoxLayout__expandingDirections(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
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
void *c_QBoxLayout__geometry(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QRect>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
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
bool c_QBoxLayout__hasHeightForWidth(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
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
int c_QBoxLayout__heightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
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
int c_QBoxLayout__indexOf_QLayoutItem(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QLayoutItem *>(arg__1_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
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
int c_QBoxLayout__indexOf_QWidget(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->indexOf_nocallback(arg__1);
    } else {
      return targetPtr->indexOf(arg__1);
    }
  }();
  return result;
}
// insertItem(int index, QLayoutItem * arg__2)
void c_QBoxLayout__insertItem_int_QLayoutItem(void *thisObj, int index,
                                              void *arg__2_) {
  auto arg__2 = reinterpret_cast<QLayoutItem *>(arg__2_);
  fromPtr(thisObj)->insertItem(index, arg__2);
}
// insertLayout(int index, QLayout * layout, int stretch)
void c_QBoxLayout__insertLayout_int_QLayout_int(void *thisObj, int index,
                                                void *layout_, int stretch) {
  auto layout = reinterpret_cast<QLayout *>(layout_);
  fromPtr(thisObj)->insertLayout(index, layout, stretch);
}
// insertSpacing(int index, int size)
void c_QBoxLayout__insertSpacing_int_int(void *thisObj, int index, int size) {
  fromPtr(thisObj)->insertSpacing(index, size);
}
// insertStretch(int index, int stretch)
void c_QBoxLayout__insertStretch_int_int(void *thisObj, int index,
                                         int stretch) {
  fromPtr(thisObj)->insertStretch(index, stretch);
}
// insertWidget(int index, QWidget * widget, int stretch)
void c_QBoxLayout__insertWidget_int_QWidget_int(void *thisObj, int index,
                                                void *widget_, int stretch) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  fromPtr(thisObj)->insertWidget(index, widget, stretch);
}
// invalidate()
void c_QBoxLayout__invalidate(void *thisObj) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->invalidate_nocallback();
    } else {
      return targetPtr->invalidate();
    }
  }();
}
// isEmpty() const
bool c_QBoxLayout__isEmpty(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
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
void *c_QBoxLayout__itemAt_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
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
void *c_QBoxLayout__layout(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
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
void *c_QBoxLayout__maximumSize(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
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
int c_QBoxLayout__minimumHeightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
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
void *c_QBoxLayout__minimumSize(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
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
void c_QBoxLayout__setGeometry_QRect(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setGeometry_nocallback(arg__1);
    } else {
      return targetPtr->setGeometry(arg__1);
    }
  }();
}
// setSpacing(int spacing)
void c_QBoxLayout__setSpacing_int(void *thisObj, int spacing) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setSpacing_nocallback(spacing);
    } else {
      return targetPtr->setSpacing(spacing);
    }
  }();
}
// setStretch(int index, int stretch)
void c_QBoxLayout__setStretch_int_int(void *thisObj, int index, int stretch) {
  fromPtr(thisObj)->setStretch(index, stretch);
}
// setStretchFactor(QLayout * l, int stretch)
bool c_QBoxLayout__setStretchFactor_QLayout_int(void *thisObj, void *l_,
                                                int stretch) {
  auto l = reinterpret_cast<QLayout *>(l_);
  const auto &result = fromPtr(thisObj)->setStretchFactor(l, stretch);
  return result;
}
// setStretchFactor(QWidget * w, int stretch)
bool c_QBoxLayout__setStretchFactor_QWidget_int(void *thisObj, void *w_,
                                                int stretch) {
  auto w = reinterpret_cast<QWidget *>(w_);
  const auto &result = fromPtr(thisObj)->setStretchFactor(w, stretch);
  return result;
}
// sizeHint() const
void *c_QBoxLayout__sizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
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
int c_QBoxLayout__spacing(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->spacing_nocallback();
    } else {
      return targetPtr->spacing();
    }
  }();
  return result;
}
// stretch(int index) const
int c_QBoxLayout__stretch_int(void *thisObj, int index) {
  const auto &result = fromPtr(thisObj)->stretch(index);
  return result;
}
// takeAt(int arg__1)
void *c_QBoxLayout__takeAt_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
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
void *c_static_QBoxLayout__tr_char_char_int(const char *s, const char *c,
                                            int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QBoxLayout_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
// widget() const
void *c_QBoxLayout__widget(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->widget_nocallback();
    } else {
      return targetPtr->widget();
    }
  }();
  return result;
}
void c_QBoxLayout__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QBoxLayout__registerVirtualMethodCallback(void *ptr, void *callback,
                                                 int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 3187:
    wrapper->m_addItemCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_addItem>(
        callback);
    break;
  case 3195:
    wrapper->m_countCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_count>(
        callback);
    break;
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_customEvent>(
        callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_event>(
        callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 3169:
    wrapper->m_expandingDirectionsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper::
                             Callback_expandingDirections>(callback);
    break;
  case 3170:
    wrapper->m_geometryCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_geometry>(
        callback);
    break;
  case 3171:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 3172:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 3206:
    wrapper->m_indexOfCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_indexOf>(
        callback);
    break;
  case 3207:
    wrapper->m_indexOf_2Callback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_indexOf_2>(
        callback);
    break;
  case 3173:
    wrapper->m_invalidateCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_invalidate>(
        callback);
    break;
  case 3174:
    wrapper->m_isEmptyCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_isEmpty>(
        callback);
    break;
  case 3214:
    wrapper->m_itemAtCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_itemAt>(
        callback);
    break;
  case 3175:
    wrapper->m_layoutCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_layout>(
        callback);
    break;
  case 3176:
    wrapper->m_maximumSizeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_maximumSize>(
        callback);
    break;
  case 3177:
    wrapper->m_minimumHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper::
                             Callback_minimumHeightForWidth>(callback);
    break;
  case 3178:
    wrapper->m_minimumSizeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_minimumSize>(
        callback);
    break;
  case 3179:
    wrapper->m_setGeometryCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_setGeometry>(
        callback);
    break;
  case 3232:
    wrapper->m_setSpacingCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_setSpacing>(
        callback);
    break;
  case 3180:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_sizeHint>(
        callback);
    break;
  case 3234:
    wrapper->m_spacingCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_spacing>(
        callback);
    break;
  case 3236:
    wrapper->m_takeAtCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_takeAt>(
        callback);
    break;
  case 3181:
    wrapper->m_widgetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_widget>(
        callback);
    break;
  }
}
}
