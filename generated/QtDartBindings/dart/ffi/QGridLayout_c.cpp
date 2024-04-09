/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QGridLayout_c.h"

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
QGridLayout_wrapper::QGridLayout_wrapper(QWidget *parent)
    : ::QGridLayout(parent) {}
void QGridLayout_wrapper::addItem(QLayoutItem *arg__1) {
  if (m_addItemCallback) {
    const void *thisPtr = this;
    m_addItemCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QGridLayout::addItem(arg__1);
  }
}
void QGridLayout_wrapper::addItem_nocallback(QLayoutItem *arg__1) {
  ::QGridLayout::addItem(arg__1);
}
void QGridLayout_wrapper::addItem(QLayoutItem *item, int row, int column,
                                  int rowSpan, int columnSpan) {
  ::QGridLayout::addItem(item, row, column, rowSpan, columnSpan);
}
void QGridLayout_wrapper::addLayout(QLayout *arg__1, int row, int column) {
  ::QGridLayout::addLayout(arg__1, row, column);
}
void QGridLayout_wrapper::addLayout(QLayout *arg__1, int row, int column,
                                    int rowSpan, int columnSpan) {
  ::QGridLayout::addLayout(arg__1, row, column, rowSpan, columnSpan);
}
void QGridLayout_wrapper::addWidget(QWidget *arg__1, int row, int column) {
  ::QGridLayout::addWidget(arg__1, row, column);
}
void QGridLayout_wrapper::addWidget(QWidget *arg__1, int row, int column,
                                    int rowSpan, int columnSpan) {
  ::QGridLayout::addWidget(arg__1, row, column, rowSpan, columnSpan);
}
void QGridLayout_wrapper::addWidget(QWidget *w) { ::QGridLayout::addWidget(w); }
QRect QGridLayout_wrapper::cellRect(int row, int column) const {
  return ::QGridLayout::cellRect(row, column);
}
int QGridLayout_wrapper::columnCount() const {
  return ::QGridLayout::columnCount();
}
int QGridLayout_wrapper::columnMinimumWidth(int column) const {
  return ::QGridLayout::columnMinimumWidth(column);
}
int QGridLayout_wrapper::columnStretch(int column) const {
  return ::QGridLayout::columnStretch(column);
}
int QGridLayout_wrapper::count() const {
  if (m_countCallback) {
    const void *thisPtr = this;
    return m_countCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QGridLayout::count();
  }
}
int QGridLayout_wrapper::count_nocallback() const {
  return ::QGridLayout::count();
}
void QGridLayout_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QGridLayout::customEvent(event);
  }
}
void QGridLayout_wrapper::customEvent_nocallback(QEvent *event) {
  ::QGridLayout::customEvent(event);
}
bool QGridLayout_wrapper::event(QEvent *event) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    return ::QGridLayout::event(event);
  }
}
bool QGridLayout_wrapper::event_nocallback(QEvent *event) {
  return ::QGridLayout::event(event);
}
bool QGridLayout_wrapper::eventFilter(QObject *watched, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QGridLayout::eventFilter(watched, event);
  }
}
bool QGridLayout_wrapper::eventFilter_nocallback(QObject *watched,
                                                 QEvent *event) {
  return ::QGridLayout::eventFilter(watched, event);
}
QFlags<Qt::Orientation> QGridLayout_wrapper::expandingDirections() const {
  if (m_expandingDirectionsCallback) {
    const void *thisPtr = this;
    return m_expandingDirectionsCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QGridLayout::expandingDirections();
  }
}
QFlags<Qt::Orientation>
QGridLayout_wrapper::expandingDirections_nocallback() const {
  return ::QGridLayout::expandingDirections();
}
QRect QGridLayout_wrapper::geometry() const {
  if (m_geometryCallback) {
    const void *thisPtr = this;
    return *m_geometryCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QGridLayout::geometry();
  }
}
QRect QGridLayout_wrapper::geometry_nocallback() const {
  return ::QGridLayout::geometry();
}
bool QGridLayout_wrapper::hasHeightForWidth() const {
  if (m_hasHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QGridLayout::hasHeightForWidth();
  }
}
bool QGridLayout_wrapper::hasHeightForWidth_nocallback() const {
  return ::QGridLayout::hasHeightForWidth();
}
int QGridLayout_wrapper::heightForWidth(int arg__1) const {
  if (m_heightForWidthCallback) {
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QGridLayout::heightForWidth(arg__1);
  }
}
int QGridLayout_wrapper::heightForWidth_nocallback(int arg__1) const {
  return ::QGridLayout::heightForWidth(arg__1);
}
int QGridLayout_wrapper::horizontalSpacing() const {
  return ::QGridLayout::horizontalSpacing();
}
int QGridLayout_wrapper::indexOf(const QLayoutItem *arg__1) const {
  if (m_indexOfCallback) {
    const void *thisPtr = this;
    return m_indexOfCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QGridLayout::indexOf(arg__1);
  }
}
int QGridLayout_wrapper::indexOf_nocallback(const QLayoutItem *arg__1) const {
  return ::QGridLayout::indexOf(arg__1);
}
int QGridLayout_wrapper::indexOf(const QWidget *arg__1) const {
  if (m_indexOf_2Callback) {
    const void *thisPtr = this;
    return m_indexOf_2Callback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QGridLayout::indexOf(arg__1);
  }
}
int QGridLayout_wrapper::indexOf_nocallback(const QWidget *arg__1) const {
  return ::QGridLayout::indexOf(arg__1);
}
void QGridLayout_wrapper::invalidate() {
  if (m_invalidateCallback) {
    const void *thisPtr = this;
    m_invalidateCallback(const_cast<void *>(thisPtr));
  } else {
    ::QGridLayout::invalidate();
  }
}
void QGridLayout_wrapper::invalidate_nocallback() {
  ::QGridLayout::invalidate();
}
bool QGridLayout_wrapper::isEmpty() const {
  if (m_isEmptyCallback) {
    const void *thisPtr = this;
    return m_isEmptyCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QGridLayout::isEmpty();
  }
}
bool QGridLayout_wrapper::isEmpty_nocallback() const {
  return ::QGridLayout::isEmpty();
}
QLayoutItem *QGridLayout_wrapper::itemAt(int index) const {
  if (m_itemAtCallback) {
    const void *thisPtr = this;
    return m_itemAtCallback(const_cast<void *>(thisPtr), index);
  } else {
    return ::QGridLayout::itemAt(index);
  }
}
QLayoutItem *QGridLayout_wrapper::itemAt_nocallback(int index) const {
  return ::QGridLayout::itemAt(index);
}
QLayoutItem *QGridLayout_wrapper::itemAtPosition(int row, int column) const {
  return ::QGridLayout::itemAtPosition(row, column);
}
QLayout *QGridLayout_wrapper::layout() {
  if (m_layoutCallback) {
    const void *thisPtr = this;
    return m_layoutCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QGridLayout::layout();
  }
}
QLayout *QGridLayout_wrapper::layout_nocallback() {
  return ::QGridLayout::layout();
}
QSize QGridLayout_wrapper::maximumSize() const {
  if (m_maximumSizeCallback) {
    const void *thisPtr = this;
    return *m_maximumSizeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QGridLayout::maximumSize();
  }
}
QSize QGridLayout_wrapper::maximumSize_nocallback() const {
  return ::QGridLayout::maximumSize();
}
int QGridLayout_wrapper::minimumHeightForWidth(int arg__1) const {
  if (m_minimumHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_minimumHeightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QGridLayout::minimumHeightForWidth(arg__1);
  }
}
int QGridLayout_wrapper::minimumHeightForWidth_nocallback(int arg__1) const {
  return ::QGridLayout::minimumHeightForWidth(arg__1);
}
QSize QGridLayout_wrapper::minimumSize() const {
  if (m_minimumSizeCallback) {
    const void *thisPtr = this;
    return *m_minimumSizeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QGridLayout::minimumSize();
  }
}
QSize QGridLayout_wrapper::minimumSize_nocallback() const {
  return ::QGridLayout::minimumSize();
}
int QGridLayout_wrapper::rowCount() const { return ::QGridLayout::rowCount(); }
int QGridLayout_wrapper::rowMinimumHeight(int row) const {
  return ::QGridLayout::rowMinimumHeight(row);
}
int QGridLayout_wrapper::rowStretch(int row) const {
  return ::QGridLayout::rowStretch(row);
}
void QGridLayout_wrapper::setColumnMinimumWidth(int column, int minSize) {
  ::QGridLayout::setColumnMinimumWidth(column, minSize);
}
void QGridLayout_wrapper::setColumnStretch(int column, int stretch) {
  ::QGridLayout::setColumnStretch(column, stretch);
}
void QGridLayout_wrapper::setDefaultPositioning(int n, Qt::Orientation orient) {
  ::QGridLayout::setDefaultPositioning(n, orient);
}
void QGridLayout_wrapper::setGeometry(const QRect &arg__1) {
  if (m_setGeometryCallback) {
    const void *thisPtr = this;
    m_setGeometryCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QGridLayout::setGeometry(arg__1);
  }
}
void QGridLayout_wrapper::setGeometry_nocallback(const QRect &arg__1) {
  ::QGridLayout::setGeometry(arg__1);
}
void QGridLayout_wrapper::setHorizontalSpacing(int spacing) {
  ::QGridLayout::setHorizontalSpacing(spacing);
}
void QGridLayout_wrapper::setRowMinimumHeight(int row, int minSize) {
  ::QGridLayout::setRowMinimumHeight(row, minSize);
}
void QGridLayout_wrapper::setRowStretch(int row, int stretch) {
  ::QGridLayout::setRowStretch(row, stretch);
}
void QGridLayout_wrapper::setSpacing(int spacing) {
  if (m_setSpacingCallback) {
    const void *thisPtr = this;
    m_setSpacingCallback(const_cast<void *>(thisPtr), spacing);
  } else {
    ::QGridLayout::setSpacing(spacing);
  }
}
void QGridLayout_wrapper::setSpacing_nocallback(int spacing) {
  ::QGridLayout::setSpacing(spacing);
}
void QGridLayout_wrapper::setVerticalSpacing(int spacing) {
  ::QGridLayout::setVerticalSpacing(spacing);
}
QSize QGridLayout_wrapper::sizeHint() const {
  if (m_sizeHintCallback) {
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QGridLayout::sizeHint();
  }
}
QSize QGridLayout_wrapper::sizeHint_nocallback() const {
  return ::QGridLayout::sizeHint();
}
int QGridLayout_wrapper::spacing() const {
  if (m_spacingCallback) {
    const void *thisPtr = this;
    return m_spacingCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QGridLayout::spacing();
  }
}
int QGridLayout_wrapper::spacing_nocallback() const {
  return ::QGridLayout::spacing();
}
QLayoutItem *QGridLayout_wrapper::takeAt(int index) {
  if (m_takeAtCallback) {
    const void *thisPtr = this;
    return m_takeAtCallback(const_cast<void *>(thisPtr), index);
  } else {
    return ::QGridLayout::takeAt(index);
  }
}
QLayoutItem *QGridLayout_wrapper::takeAt_nocallback(int index) {
  return ::QGridLayout::takeAt(index);
}
QString QGridLayout_wrapper::tr(const char *s, const char *c, int n) {
  return ::QGridLayout::tr(s, c, n);
}
int QGridLayout_wrapper::verticalSpacing() const {
  return ::QGridLayout::verticalSpacing();
}
QWidget *QGridLayout_wrapper::widget() const {
  if (m_widgetCallback) {
    const void *thisPtr = this;
    return m_widgetCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QGridLayout::widget();
  }
}
QWidget *QGridLayout_wrapper::widget_nocallback() const {
  return ::QGridLayout::widget();
}
QGridLayout_wrapper::~QGridLayout_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QGridLayout *fromPtr(void *ptr) {
  return reinterpret_cast<QGridLayout *>(ptr);
}
static QtDartBindings_wrappersNS::QGridLayout_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
      ptr);
}
extern "C" {
void c_QGridLayout_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
      cppObj);
}
void *c_QGridLayout__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QGridLayout_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
// addItem(QLayoutItem * arg__1)
void c_QGridLayout__addItem_QLayoutItem(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QLayoutItem *>(arg__1_);
  fromWrapperPtr(thisObj)->addItem_nocallback(arg__1);
}
// addItem(QLayoutItem * item, int row, int column, int rowSpan, int columnSpan)
void c_QGridLayout__addItemToGrid_QLayoutItem_int_int_int_int(
    void *thisObj, void *item_, int row, int column, int rowSpan,
    int columnSpan) {
  auto item = reinterpret_cast<QLayoutItem *>(item_);
  fromPtr(thisObj)->addItem(item, row, column, rowSpan, columnSpan);
}
// addLayout(QLayout * arg__1, int row, int column)
void c_QGridLayout__addLayout_QLayout_int_int(void *thisObj, void *arg__1_,
                                              int row, int column) {
  auto arg__1 = reinterpret_cast<QLayout *>(arg__1_);
  fromPtr(thisObj)->addLayout(arg__1, row, column);
}
// addLayout(QLayout * arg__1, int row, int column, int rowSpan, int columnSpan)
void c_QGridLayout__addLayout_QLayout_int_int_int_int(void *thisObj,
                                                      void *arg__1_, int row,
                                                      int column, int rowSpan,
                                                      int columnSpan) {
  auto arg__1 = reinterpret_cast<QLayout *>(arg__1_);
  fromPtr(thisObj)->addLayout(arg__1, row, column, rowSpan, columnSpan);
}
// addWidget(QWidget * arg__1, int row, int column)
void c_QGridLayout__addWidgetToGrid_QWidget_int_int(void *thisObj,
                                                    void *arg__1_, int row,
                                                    int column) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  fromPtr(thisObj)->addWidget(arg__1, row, column);
}
// addWidget(QWidget * arg__1, int row, int column, int rowSpan, int columnSpan)
void c_QGridLayout__addWidgetToGrid_QWidget_int_int_int_int(void *thisObj,
                                                            void *arg__1_,
                                                            int row, int column,
                                                            int rowSpan,
                                                            int columnSpan) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  fromPtr(thisObj)->addWidget(arg__1, row, column, rowSpan, columnSpan);
}
// addWidget(QWidget * w)
void c_QGridLayout__addWidget_QWidget(void *thisObj, void *w_) {
  auto w = reinterpret_cast<QWidget *>(w_);
  fromPtr(thisObj)->addWidget(w);
}
// cellRect(int row, int column) const
void *c_QGridLayout__cellRect_int_int(void *thisObj, int row, int column) {
  const auto &result = new Dartagnan::ValueWrapper<QRect>{
      fromPtr(thisObj)->cellRect(row, column)};
  return result;
}
// columnCount() const
int c_QGridLayout__columnCount(void *thisObj) {
  const auto &result = fromPtr(thisObj)->columnCount();
  return result;
}
// columnMinimumWidth(int column) const
int c_QGridLayout__columnMinimumWidth_int(void *thisObj, int column) {
  const auto &result = fromPtr(thisObj)->columnMinimumWidth(column);
  return result;
}
// columnStretch(int column) const
int c_QGridLayout__columnStretch_int(void *thisObj, int column) {
  const auto &result = fromPtr(thisObj)->columnStretch(column);
  return result;
}
// count() const
int c_QGridLayout__count(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
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
void c_QGridLayout__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// event(QEvent * event)
bool c_QGridLayout__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
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
bool c_QGridLayout__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                               void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
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
int c_QGridLayout__expandingDirections(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
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
void *c_QGridLayout__geometry(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QRect>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
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
bool c_QGridLayout__hasHeightForWidth(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
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
int c_QGridLayout__heightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->heightForWidth_nocallback(arg__1);
    } else {
      return targetPtr->heightForWidth(arg__1);
    }
  }();
  return result;
}
// horizontalSpacing() const
int c_QGridLayout__horizontalSpacing(void *thisObj) {
  const auto &result = fromPtr(thisObj)->horizontalSpacing();
  return result;
}
// indexOf(const QLayoutItem * arg__1) const
int c_QGridLayout__indexOf_QLayoutItem(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QLayoutItem *>(arg__1_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
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
int c_QGridLayout__indexOf_QWidget(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
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
void c_QGridLayout__invalidate(void *thisObj) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->invalidate_nocallback();
    } else {
      return targetPtr->invalidate();
    }
  }();
}
// isEmpty() const
bool c_QGridLayout__isEmpty(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->isEmpty_nocallback();
    } else {
      return targetPtr->isEmpty();
    }
  }();
  return result;
}
// itemAt(int index) const
void *c_QGridLayout__itemAt_int(void *thisObj, int index) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->itemAt_nocallback(index);
    } else {
      return targetPtr->itemAt(index);
    }
  }();
  return result;
}
// itemAtPosition(int row, int column) const
void *c_QGridLayout__itemAtPosition_int_int(void *thisObj, int row,
                                            int column) {
  const auto &result = fromPtr(thisObj)->itemAtPosition(row, column);
  return result;
}
// layout()
void *c_QGridLayout__layout(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
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
void *c_QGridLayout__maximumSize(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
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
int c_QGridLayout__minimumHeightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
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
void *c_QGridLayout__minimumSize(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->minimumSize_nocallback();
    } else {
      return targetPtr->minimumSize();
    }
  }()};
  return result;
}
// rowCount() const
int c_QGridLayout__rowCount(void *thisObj) {
  const auto &result = fromPtr(thisObj)->rowCount();
  return result;
}
// rowMinimumHeight(int row) const
int c_QGridLayout__rowMinimumHeight_int(void *thisObj, int row) {
  const auto &result = fromPtr(thisObj)->rowMinimumHeight(row);
  return result;
}
// rowStretch(int row) const
int c_QGridLayout__rowStretch_int(void *thisObj, int row) {
  const auto &result = fromPtr(thisObj)->rowStretch(row);
  return result;
}
// setColumnMinimumWidth(int column, int minSize)
void c_QGridLayout__setColumnMinimumWidth_int_int(void *thisObj, int column,
                                                  int minSize) {
  fromPtr(thisObj)->setColumnMinimumWidth(column, minSize);
}
// setColumnStretch(int column, int stretch)
void c_QGridLayout__setColumnStretch_int_int(void *thisObj, int column,
                                             int stretch) {
  fromPtr(thisObj)->setColumnStretch(column, stretch);
}
// setDefaultPositioning(int n, Qt::Orientation orient)
void c_QGridLayout__setDefaultPositioning_int_Orientation(void *thisObj, int n,
                                                          int orient) {
  fromPtr(thisObj)->setDefaultPositioning(n,
                                          static_cast<Qt::Orientation>(orient));
}
// setGeometry(const QRect & arg__1)
void c_QGridLayout__setGeometry_QRect(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setGeometry_nocallback(arg__1);
    } else {
      return targetPtr->setGeometry(arg__1);
    }
  }();
}
// setHorizontalSpacing(int spacing)
void c_QGridLayout__setHorizontalSpacing_int(void *thisObj, int spacing) {
  fromPtr(thisObj)->setHorizontalSpacing(spacing);
}
// setRowMinimumHeight(int row, int minSize)
void c_QGridLayout__setRowMinimumHeight_int_int(void *thisObj, int row,
                                                int minSize) {
  fromPtr(thisObj)->setRowMinimumHeight(row, minSize);
}
// setRowStretch(int row, int stretch)
void c_QGridLayout__setRowStretch_int_int(void *thisObj, int row, int stretch) {
  fromPtr(thisObj)->setRowStretch(row, stretch);
}
// setSpacing(int spacing)
void c_QGridLayout__setSpacing_int(void *thisObj, int spacing) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setSpacing_nocallback(spacing);
    } else {
      return targetPtr->setSpacing(spacing);
    }
  }();
}
// setVerticalSpacing(int spacing)
void c_QGridLayout__setVerticalSpacing_int(void *thisObj, int spacing) {
  fromPtr(thisObj)->setVerticalSpacing(spacing);
}
// sizeHint() const
void *c_QGridLayout__sizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
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
int c_QGridLayout__spacing(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->spacing_nocallback();
    } else {
      return targetPtr->spacing();
    }
  }();
  return result;
}
// takeAt(int index)
void *c_QGridLayout__takeAt_int(void *thisObj, int index) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->takeAt_nocallback(index);
    } else {
      return targetPtr->takeAt(index);
    }
  }();
  return result;
}
// tr(const char * s, const char * c, int n)
void *c_static_QGridLayout__tr_char_char_int(const char *s, const char *c,
                                             int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QGridLayout_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
// verticalSpacing() const
int c_QGridLayout__verticalSpacing(void *thisObj) {
  const auto &result = fromPtr(thisObj)->verticalSpacing();
  return result;
}
// widget() const
void *c_QGridLayout__widget(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->widget_nocallback();
    } else {
      return targetPtr->widget();
    }
  }();
  return result;
}
void c_QGridLayout__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QGridLayout__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 3187:
    wrapper->m_addItemCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_addItem>(
        callback);
    break;
  case 3195:
    wrapper->m_countCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_count>(
        callback);
    break;
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_customEvent>(
        callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_event>(
        callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 3169:
    wrapper->m_expandingDirectionsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper::
                             Callback_expandingDirections>(callback);
    break;
  case 3170:
    wrapper->m_geometryCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_geometry>(
        callback);
    break;
  case 3171:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 3172:
    wrapper->m_heightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper::
                             Callback_heightForWidth>(callback);
    break;
  case 3206:
    wrapper->m_indexOfCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_indexOf>(
        callback);
    break;
  case 3207:
    wrapper->m_indexOf_2Callback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_indexOf_2>(
        callback);
    break;
  case 3173:
    wrapper->m_invalidateCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_invalidate>(
        callback);
    break;
  case 3174:
    wrapper->m_isEmptyCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_isEmpty>(
        callback);
    break;
  case 3214:
    wrapper->m_itemAtCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_itemAt>(
        callback);
    break;
  case 3175:
    wrapper->m_layoutCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_layout>(
        callback);
    break;
  case 3176:
    wrapper->m_maximumSizeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_maximumSize>(
        callback);
    break;
  case 3177:
    wrapper->m_minimumHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper::
                             Callback_minimumHeightForWidth>(callback);
    break;
  case 3178:
    wrapper->m_minimumSizeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_minimumSize>(
        callback);
    break;
  case 3179:
    wrapper->m_setGeometryCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_setGeometry>(
        callback);
    break;
  case 3232:
    wrapper->m_setSpacingCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_setSpacing>(
        callback);
    break;
  case 3180:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_sizeHint>(
        callback);
    break;
  case 3234:
    wrapper->m_spacingCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_spacing>(
        callback);
    break;
  case 3236:
    wrapper->m_takeAtCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_takeAt>(
        callback);
    break;
  case 3181:
    wrapper->m_widgetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_widget>(
        callback);
    break;
  }
}
}
