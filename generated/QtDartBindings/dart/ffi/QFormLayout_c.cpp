/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QFormLayout_c.h"

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
QFormLayout_wrapper::QFormLayout_wrapper(QWidget *parent)
    : ::QFormLayout(parent) {}
void QFormLayout_wrapper::addItem(QLayoutItem *item) {
  if (m_addItemCallback) {
    const void *thisPtr = this;
    m_addItemCallback(const_cast<void *>(thisPtr), item);
  } else {
    ::QFormLayout::addItem(item);
  }
}
void QFormLayout_wrapper::addItem_nocallback(QLayoutItem *item) {
  ::QFormLayout::addItem(item);
}
void QFormLayout_wrapper::addRow(QLayout *layout) {
  ::QFormLayout::addRow(layout);
}
void QFormLayout_wrapper::addRow(QWidget *label, QLayout *field) {
  ::QFormLayout::addRow(label, field);
}
void QFormLayout_wrapper::addRow(QWidget *label, QWidget *field) {
  ::QFormLayout::addRow(label, field);
}
void QFormLayout_wrapper::addRow(QWidget *widget) {
  ::QFormLayout::addRow(widget);
}
void QFormLayout_wrapper::addRow(const QString &labelText, QLayout *field) {
  ::QFormLayout::addRow(labelText, field);
}
void QFormLayout_wrapper::addRow(const QString &labelText, QWidget *field) {
  ::QFormLayout::addRow(labelText, field);
}
int QFormLayout_wrapper::count() const {
  if (m_countCallback) {
    const void *thisPtr = this;
    return m_countCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QFormLayout::count();
  }
}
int QFormLayout_wrapper::count_nocallback() const {
  return ::QFormLayout::count();
}
void QFormLayout_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QFormLayout::customEvent(event);
  }
}
void QFormLayout_wrapper::customEvent_nocallback(QEvent *event) {
  ::QFormLayout::customEvent(event);
}
bool QFormLayout_wrapper::event(QEvent *event) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    return ::QFormLayout::event(event);
  }
}
bool QFormLayout_wrapper::event_nocallback(QEvent *event) {
  return ::QFormLayout::event(event);
}
bool QFormLayout_wrapper::eventFilter(QObject *watched, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QFormLayout::eventFilter(watched, event);
  }
}
bool QFormLayout_wrapper::eventFilter_nocallback(QObject *watched,
                                                 QEvent *event) {
  return ::QFormLayout::eventFilter(watched, event);
}
QFlags<Qt::Orientation> QFormLayout_wrapper::expandingDirections() const {
  if (m_expandingDirectionsCallback) {
    const void *thisPtr = this;
    return m_expandingDirectionsCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QFormLayout::expandingDirections();
  }
}
QFlags<Qt::Orientation>
QFormLayout_wrapper::expandingDirections_nocallback() const {
  return ::QFormLayout::expandingDirections();
}
QRect QFormLayout_wrapper::geometry() const {
  if (m_geometryCallback) {
    const void *thisPtr = this;
    return *m_geometryCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QFormLayout::geometry();
  }
}
QRect QFormLayout_wrapper::geometry_nocallback() const {
  return ::QFormLayout::geometry();
}
bool QFormLayout_wrapper::hasHeightForWidth() const {
  if (m_hasHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QFormLayout::hasHeightForWidth();
  }
}
bool QFormLayout_wrapper::hasHeightForWidth_nocallback() const {
  return ::QFormLayout::hasHeightForWidth();
}
int QFormLayout_wrapper::heightForWidth(int width) const {
  if (m_heightForWidthCallback) {
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), width);
  } else {
    return ::QFormLayout::heightForWidth(width);
  }
}
int QFormLayout_wrapper::heightForWidth_nocallback(int width) const {
  return ::QFormLayout::heightForWidth(width);
}
int QFormLayout_wrapper::horizontalSpacing() const {
  return ::QFormLayout::horizontalSpacing();
}
int QFormLayout_wrapper::indexOf(const QLayoutItem *arg__1) const {
  if (m_indexOfCallback) {
    const void *thisPtr = this;
    return m_indexOfCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QFormLayout::indexOf(arg__1);
  }
}
int QFormLayout_wrapper::indexOf_nocallback(const QLayoutItem *arg__1) const {
  return ::QFormLayout::indexOf(arg__1);
}
int QFormLayout_wrapper::indexOf(const QWidget *arg__1) const {
  if (m_indexOf_2Callback) {
    const void *thisPtr = this;
    return m_indexOf_2Callback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QFormLayout::indexOf(arg__1);
  }
}
int QFormLayout_wrapper::indexOf_nocallback(const QWidget *arg__1) const {
  return ::QFormLayout::indexOf(arg__1);
}
void QFormLayout_wrapper::insertRow(int row, QLayout *layout) {
  ::QFormLayout::insertRow(row, layout);
}
void QFormLayout_wrapper::insertRow(int row, QWidget *label, QLayout *field) {
  ::QFormLayout::insertRow(row, label, field);
}
void QFormLayout_wrapper::insertRow(int row, QWidget *label, QWidget *field) {
  ::QFormLayout::insertRow(row, label, field);
}
void QFormLayout_wrapper::insertRow(int row, QWidget *widget) {
  ::QFormLayout::insertRow(row, widget);
}
void QFormLayout_wrapper::insertRow(int row, const QString &labelText,
                                    QLayout *field) {
  ::QFormLayout::insertRow(row, labelText, field);
}
void QFormLayout_wrapper::insertRow(int row, const QString &labelText,
                                    QWidget *field) {
  ::QFormLayout::insertRow(row, labelText, field);
}
void QFormLayout_wrapper::invalidate() {
  if (m_invalidateCallback) {
    const void *thisPtr = this;
    m_invalidateCallback(const_cast<void *>(thisPtr));
  } else {
    ::QFormLayout::invalidate();
  }
}
void QFormLayout_wrapper::invalidate_nocallback() {
  ::QFormLayout::invalidate();
}
bool QFormLayout_wrapper::isEmpty() const {
  if (m_isEmptyCallback) {
    const void *thisPtr = this;
    return m_isEmptyCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QFormLayout::isEmpty();
  }
}
bool QFormLayout_wrapper::isEmpty_nocallback() const {
  return ::QFormLayout::isEmpty();
}
bool QFormLayout_wrapper::isRowVisible(QLayout *layout) const {
  return ::QFormLayout::isRowVisible(layout);
}
bool QFormLayout_wrapper::isRowVisible(QWidget *widget) const {
  return ::QFormLayout::isRowVisible(widget);
}
bool QFormLayout_wrapper::isRowVisible(int row) const {
  return ::QFormLayout::isRowVisible(row);
}
QLayoutItem *QFormLayout_wrapper::itemAt(int index) const {
  if (m_itemAtCallback) {
    const void *thisPtr = this;
    return m_itemAtCallback(const_cast<void *>(thisPtr), index);
  } else {
    return ::QFormLayout::itemAt(index);
  }
}
QLayoutItem *QFormLayout_wrapper::itemAt_nocallback(int index) const {
  return ::QFormLayout::itemAt(index);
}
QWidget *QFormLayout_wrapper::labelForField(QLayout *field) const {
  return ::QFormLayout::labelForField(field);
}
QWidget *QFormLayout_wrapper::labelForField(QWidget *field) const {
  return ::QFormLayout::labelForField(field);
}
QLayout *QFormLayout_wrapper::layout() {
  if (m_layoutCallback) {
    const void *thisPtr = this;
    return m_layoutCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QFormLayout::layout();
  }
}
QLayout *QFormLayout_wrapper::layout_nocallback() {
  return ::QFormLayout::layout();
}
QSize QFormLayout_wrapper::maximumSize() const {
  if (m_maximumSizeCallback) {
    const void *thisPtr = this;
    return *m_maximumSizeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QFormLayout::maximumSize();
  }
}
QSize QFormLayout_wrapper::maximumSize_nocallback() const {
  return ::QFormLayout::maximumSize();
}
int QFormLayout_wrapper::minimumHeightForWidth(int arg__1) const {
  if (m_minimumHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_minimumHeightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QFormLayout::minimumHeightForWidth(arg__1);
  }
}
int QFormLayout_wrapper::minimumHeightForWidth_nocallback(int arg__1) const {
  return ::QFormLayout::minimumHeightForWidth(arg__1);
}
QSize QFormLayout_wrapper::minimumSize() const {
  if (m_minimumSizeCallback) {
    const void *thisPtr = this;
    return *m_minimumSizeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QFormLayout::minimumSize();
  }
}
QSize QFormLayout_wrapper::minimumSize_nocallback() const {
  return ::QFormLayout::minimumSize();
}
void QFormLayout_wrapper::removeRow(QLayout *layout) {
  ::QFormLayout::removeRow(layout);
}
void QFormLayout_wrapper::removeRow(QWidget *widget) {
  ::QFormLayout::removeRow(widget);
}
void QFormLayout_wrapper::removeRow(int row) { ::QFormLayout::removeRow(row); }
int QFormLayout_wrapper::rowCount() const { return ::QFormLayout::rowCount(); }
void QFormLayout_wrapper::setGeometry(const QRect &rect) {
  if (m_setGeometryCallback) {
    const void *thisPtr = this;
    m_setGeometryCallback(const_cast<void *>(thisPtr), rect);
  } else {
    ::QFormLayout::setGeometry(rect);
  }
}
void QFormLayout_wrapper::setGeometry_nocallback(const QRect &rect) {
  ::QFormLayout::setGeometry(rect);
}
void QFormLayout_wrapper::setHorizontalSpacing(int spacing) {
  ::QFormLayout::setHorizontalSpacing(spacing);
}
void QFormLayout_wrapper::setRowVisible(QLayout *layout, bool on) {
  ::QFormLayout::setRowVisible(layout, on);
}
void QFormLayout_wrapper::setRowVisible(QWidget *widget, bool on) {
  ::QFormLayout::setRowVisible(widget, on);
}
void QFormLayout_wrapper::setRowVisible(int row, bool on) {
  ::QFormLayout::setRowVisible(row, on);
}
void QFormLayout_wrapper::setSpacing(int arg__1) {
  if (m_setSpacingCallback) {
    const void *thisPtr = this;
    m_setSpacingCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QFormLayout::setSpacing(arg__1);
  }
}
void QFormLayout_wrapper::setSpacing_nocallback(int arg__1) {
  ::QFormLayout::setSpacing(arg__1);
}
void QFormLayout_wrapper::setVerticalSpacing(int spacing) {
  ::QFormLayout::setVerticalSpacing(spacing);
}
QSize QFormLayout_wrapper::sizeHint() const {
  if (m_sizeHintCallback) {
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QFormLayout::sizeHint();
  }
}
QSize QFormLayout_wrapper::sizeHint_nocallback() const {
  return ::QFormLayout::sizeHint();
}
int QFormLayout_wrapper::spacing() const {
  if (m_spacingCallback) {
    const void *thisPtr = this;
    return m_spacingCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QFormLayout::spacing();
  }
}
int QFormLayout_wrapper::spacing_nocallback() const {
  return ::QFormLayout::spacing();
}
QLayoutItem *QFormLayout_wrapper::takeAt(int index) {
  if (m_takeAtCallback) {
    const void *thisPtr = this;
    return m_takeAtCallback(const_cast<void *>(thisPtr), index);
  } else {
    return ::QFormLayout::takeAt(index);
  }
}
QLayoutItem *QFormLayout_wrapper::takeAt_nocallback(int index) {
  return ::QFormLayout::takeAt(index);
}
QString QFormLayout_wrapper::tr(const char *s, const char *c, int n) {
  return ::QFormLayout::tr(s, c, n);
}
int QFormLayout_wrapper::verticalSpacing() const {
  return ::QFormLayout::verticalSpacing();
}
QWidget *QFormLayout_wrapper::widget() const {
  if (m_widgetCallback) {
    const void *thisPtr = this;
    return m_widgetCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QFormLayout::widget();
  }
}
QWidget *QFormLayout_wrapper::widget_nocallback() const {
  return ::QFormLayout::widget();
}
QFormLayout_wrapper::~QFormLayout_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QFormLayout *fromPtr(void *ptr) {
  return reinterpret_cast<QFormLayout *>(ptr);
}
static QtDartBindings_wrappersNS::QFormLayout_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
      ptr);
}
extern "C" {
void c_QFormLayout_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
      cppObj);
}
void *c_QFormLayout__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QFormLayout_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
// addItem(QLayoutItem * item)
void c_QFormLayout__addItem_QLayoutItem(void *thisObj, void *item_) {
  auto item = reinterpret_cast<QLayoutItem *>(item_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->addItem_nocallback(item);
    } else {
      return targetPtr->addItem(item);
    }
  }();
}
// addRow(QLayout * layout)
void c_QFormLayout__addRow_QLayout(void *thisObj, void *layout_) {
  auto layout = reinterpret_cast<QLayout *>(layout_);
  fromPtr(thisObj)->addRow(layout);
}
// addRow(QWidget * label, QLayout * field)
void c_QFormLayout__addRow_QWidget_QLayout(void *thisObj, void *label_,
                                           void *field_) {
  auto label = reinterpret_cast<QWidget *>(label_);
  auto field = reinterpret_cast<QLayout *>(field_);
  fromPtr(thisObj)->addRow(label, field);
}
// addRow(QWidget * label, QWidget * field)
void c_QFormLayout__addRow_QWidget_QWidget(void *thisObj, void *label_,
                                           void *field_) {
  auto label = reinterpret_cast<QWidget *>(label_);
  auto field = reinterpret_cast<QWidget *>(field_);
  fromPtr(thisObj)->addRow(label, field);
}
// addRow(QWidget * widget)
void c_QFormLayout__addRow_QWidget(void *thisObj, void *widget_) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  fromPtr(thisObj)->addRow(widget);
}
// addRow(const QString & labelText, QLayout * field)
void c_QFormLayout__addRow_QString_QLayout(void *thisObj,
                                           const char *labelText_,
                                           void *field_) {
  const auto labelText = QString::fromUtf8(labelText_);
  auto field = reinterpret_cast<QLayout *>(field_);
  fromPtr(thisObj)->addRow(labelText, field);
  free((char *)labelText_);
}
// addRow(const QString & labelText, QWidget * field)
void c_QFormLayout__addRow_QString_QWidget(void *thisObj,
                                           const char *labelText_,
                                           void *field_) {
  const auto labelText = QString::fromUtf8(labelText_);
  auto field = reinterpret_cast<QWidget *>(field_);
  fromPtr(thisObj)->addRow(labelText, field);
  free((char *)labelText_);
}
// count() const
int c_QFormLayout__count(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
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
void c_QFormLayout__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// event(QEvent * event)
bool c_QFormLayout__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
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
bool c_QFormLayout__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                               void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
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
int c_QFormLayout__expandingDirections(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
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
void *c_QFormLayout__geometry(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QRect>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
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
bool c_QFormLayout__hasHeightForWidth(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->hasHeightForWidth_nocallback();
    } else {
      return targetPtr->hasHeightForWidth();
    }
  }();
  return result;
}
// heightForWidth(int width) const
int c_QFormLayout__heightForWidth_int(void *thisObj, int width) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->heightForWidth_nocallback(width);
    } else {
      return targetPtr->heightForWidth(width);
    }
  }();
  return result;
}
// horizontalSpacing() const
int c_QFormLayout__horizontalSpacing(void *thisObj) {
  const auto &result = fromPtr(thisObj)->horizontalSpacing();
  return result;
}
// indexOf(const QLayoutItem * arg__1) const
int c_QFormLayout__indexOf_QLayoutItem(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QLayoutItem *>(arg__1_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
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
int c_QFormLayout__indexOf_QWidget(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->indexOf_nocallback(arg__1);
    } else {
      return targetPtr->indexOf(arg__1);
    }
  }();
  return result;
}
// insertRow(int row, QLayout * layout)
void c_QFormLayout__insertRow_int_QLayout(void *thisObj, int row,
                                          void *layout_) {
  auto layout = reinterpret_cast<QLayout *>(layout_);
  fromPtr(thisObj)->insertRow(row, layout);
}
// insertRow(int row, QWidget * label, QLayout * field)
void c_QFormLayout__insertRow_int_QWidget_QLayout(void *thisObj, int row,
                                                  void *label_, void *field_) {
  auto label = reinterpret_cast<QWidget *>(label_);
  auto field = reinterpret_cast<QLayout *>(field_);
  fromPtr(thisObj)->insertRow(row, label, field);
}
// insertRow(int row, QWidget * label, QWidget * field)
void c_QFormLayout__insertRow_int_QWidget_QWidget(void *thisObj, int row,
                                                  void *label_, void *field_) {
  auto label = reinterpret_cast<QWidget *>(label_);
  auto field = reinterpret_cast<QWidget *>(field_);
  fromPtr(thisObj)->insertRow(row, label, field);
}
// insertRow(int row, QWidget * widget)
void c_QFormLayout__insertRow_int_QWidget(void *thisObj, int row,
                                          void *widget_) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  fromPtr(thisObj)->insertRow(row, widget);
}
// insertRow(int row, const QString & labelText, QLayout * field)
void c_QFormLayout__insertRow_int_QString_QLayout(void *thisObj, int row,
                                                  const char *labelText_,
                                                  void *field_) {
  const auto labelText = QString::fromUtf8(labelText_);
  auto field = reinterpret_cast<QLayout *>(field_);
  fromPtr(thisObj)->insertRow(row, labelText, field);
  free((char *)labelText_);
}
// insertRow(int row, const QString & labelText, QWidget * field)
void c_QFormLayout__insertRow_int_QString_QWidget(void *thisObj, int row,
                                                  const char *labelText_,
                                                  void *field_) {
  const auto labelText = QString::fromUtf8(labelText_);
  auto field = reinterpret_cast<QWidget *>(field_);
  fromPtr(thisObj)->insertRow(row, labelText, field);
  free((char *)labelText_);
}
// invalidate()
void c_QFormLayout__invalidate(void *thisObj) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->invalidate_nocallback();
    } else {
      return targetPtr->invalidate();
    }
  }();
}
// isEmpty() const
bool c_QFormLayout__isEmpty(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->isEmpty_nocallback();
    } else {
      return targetPtr->isEmpty();
    }
  }();
  return result;
}
// isRowVisible(QLayout * layout) const
bool c_QFormLayout__isRowVisible_QLayout(void *thisObj, void *layout_) {
  auto layout = reinterpret_cast<QLayout *>(layout_);
  const auto &result = fromPtr(thisObj)->isRowVisible(layout);
  return result;
}
// isRowVisible(QWidget * widget) const
bool c_QFormLayout__isRowVisible_QWidget(void *thisObj, void *widget_) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  const auto &result = fromPtr(thisObj)->isRowVisible(widget);
  return result;
}
// isRowVisible(int row) const
bool c_QFormLayout__isRowVisible_int(void *thisObj, int row) {
  const auto &result = fromPtr(thisObj)->isRowVisible(row);
  return result;
}
// itemAt(int index) const
void *c_QFormLayout__itemAt_int(void *thisObj, int index) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->itemAt_nocallback(index);
    } else {
      return targetPtr->itemAt(index);
    }
  }();
  return result;
}
// labelForField(QLayout * field) const
void *c_QFormLayout__labelForField_QLayout(void *thisObj, void *field_) {
  auto field = reinterpret_cast<QLayout *>(field_);
  const auto &result = fromPtr(thisObj)->labelForField(field);
  return result;
}
// labelForField(QWidget * field) const
void *c_QFormLayout__labelForField_QWidget(void *thisObj, void *field_) {
  auto field = reinterpret_cast<QWidget *>(field_);
  const auto &result = fromPtr(thisObj)->labelForField(field);
  return result;
}
// layout()
void *c_QFormLayout__layout(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
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
void *c_QFormLayout__maximumSize(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
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
int c_QFormLayout__minimumHeightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
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
void *c_QFormLayout__minimumSize(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->minimumSize_nocallback();
    } else {
      return targetPtr->minimumSize();
    }
  }()};
  return result;
}
// removeRow(QLayout * layout)
void c_QFormLayout__removeRow_QLayout(void *thisObj, void *layout_) {
  auto layout = reinterpret_cast<QLayout *>(layout_);
  fromPtr(thisObj)->removeRow(layout);
}
// removeRow(QWidget * widget)
void c_QFormLayout__removeRow_QWidget(void *thisObj, void *widget_) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  fromPtr(thisObj)->removeRow(widget);
}
// removeRow(int row)
void c_QFormLayout__removeRow_int(void *thisObj, int row) {
  fromPtr(thisObj)->removeRow(row);
}
// rowCount() const
int c_QFormLayout__rowCount(void *thisObj) {
  const auto &result = fromPtr(thisObj)->rowCount();
  return result;
}
// setGeometry(const QRect & rect)
void c_QFormLayout__setGeometry_QRect(void *thisObj, void *rect_) {
  assert(rect_);
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setGeometry_nocallback(rect);
    } else {
      return targetPtr->setGeometry(rect);
    }
  }();
}
// setHorizontalSpacing(int spacing)
void c_QFormLayout__setHorizontalSpacing_int(void *thisObj, int spacing) {
  fromPtr(thisObj)->setHorizontalSpacing(spacing);
}
// setRowVisible(QLayout * layout, bool on)
void c_QFormLayout__setRowVisible_QLayout_bool(void *thisObj, void *layout_,
                                               bool on) {
  auto layout = reinterpret_cast<QLayout *>(layout_);
  fromPtr(thisObj)->setRowVisible(layout, on);
}
// setRowVisible(QWidget * widget, bool on)
void c_QFormLayout__setRowVisible_QWidget_bool(void *thisObj, void *widget_,
                                               bool on) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  fromPtr(thisObj)->setRowVisible(widget, on);
}
// setRowVisible(int row, bool on)
void c_QFormLayout__setRowVisible_int_bool(void *thisObj, int row, bool on) {
  fromPtr(thisObj)->setRowVisible(row, on);
}
// setSpacing(int arg__1)
void c_QFormLayout__setSpacing_int(void *thisObj, int arg__1) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setSpacing_nocallback(arg__1);
    } else {
      return targetPtr->setSpacing(arg__1);
    }
  }();
}
// setVerticalSpacing(int spacing)
void c_QFormLayout__setVerticalSpacing_int(void *thisObj, int spacing) {
  fromPtr(thisObj)->setVerticalSpacing(spacing);
}
// sizeHint() const
void *c_QFormLayout__sizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
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
int c_QFormLayout__spacing(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
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
void *c_QFormLayout__takeAt_int(void *thisObj, int index) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
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
void *c_static_QFormLayout__tr_char_char_int(const char *s, const char *c,
                                             int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QFormLayout_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
// verticalSpacing() const
int c_QFormLayout__verticalSpacing(void *thisObj) {
  const auto &result = fromPtr(thisObj)->verticalSpacing();
  return result;
}
// widget() const
void *c_QFormLayout__widget(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->widget_nocallback();
    } else {
      return targetPtr->widget();
    }
  }();
  return result;
}
void c_QFormLayout__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QFormLayout__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 3187:
    wrapper->m_addItemCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_addItem>(
        callback);
    break;
  case 3195:
    wrapper->m_countCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_count>(
        callback);
    break;
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_customEvent>(
        callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_event>(
        callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 3169:
    wrapper->m_expandingDirectionsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper::
                             Callback_expandingDirections>(callback);
    break;
  case 3170:
    wrapper->m_geometryCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_geometry>(
        callback);
    break;
  case 3171:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 3172:
    wrapper->m_heightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper::
                             Callback_heightForWidth>(callback);
    break;
  case 3206:
    wrapper->m_indexOfCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_indexOf>(
        callback);
    break;
  case 3207:
    wrapper->m_indexOf_2Callback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_indexOf_2>(
        callback);
    break;
  case 3173:
    wrapper->m_invalidateCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_invalidate>(
        callback);
    break;
  case 3174:
    wrapper->m_isEmptyCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_isEmpty>(
        callback);
    break;
  case 3214:
    wrapper->m_itemAtCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_itemAt>(
        callback);
    break;
  case 3175:
    wrapper->m_layoutCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_layout>(
        callback);
    break;
  case 3176:
    wrapper->m_maximumSizeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_maximumSize>(
        callback);
    break;
  case 3177:
    wrapper->m_minimumHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper::
                             Callback_minimumHeightForWidth>(callback);
    break;
  case 3178:
    wrapper->m_minimumSizeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_minimumSize>(
        callback);
    break;
  case 3179:
    wrapper->m_setGeometryCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_setGeometry>(
        callback);
    break;
  case 3232:
    wrapper->m_setSpacingCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_setSpacing>(
        callback);
    break;
  case 3180:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_sizeHint>(
        callback);
    break;
  case 3234:
    wrapper->m_spacingCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_spacing>(
        callback);
    break;
  case 3236:
    wrapper->m_takeAtCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_takeAt>(
        callback);
    break;
  case 3181:
    wrapper->m_widgetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_widget>(
        callback);
    break;
  }
}
}
