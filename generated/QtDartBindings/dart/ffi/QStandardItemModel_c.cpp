/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QStandardItemModel_c.h"

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
QStandardItemModel_wrapper::QStandardItemModel_wrapper(QObject *parent)
    : ::QStandardItemModel(parent) {}
QStandardItemModel_wrapper::QStandardItemModel_wrapper(int rows, int columns,
                                                       QObject *parent)
    : ::QStandardItemModel(rows, columns, parent) {}
void QStandardItemModel_wrapper::appendColumn(
    const QList<QStandardItem *> &items) {
  ::QStandardItemModel::appendColumn(items);
}
void QStandardItemModel_wrapper::appendRow(QStandardItem *item) {
  ::QStandardItemModel::appendRow(item);
}
void QStandardItemModel_wrapper::appendRow(
    const QList<QStandardItem *> &items) {
  ::QStandardItemModel::appendRow(items);
}
QModelIndex QStandardItemModel_wrapper::buddy(const QModelIndex &index) const {
  if (m_buddyCallback) {
    const void *thisPtr = this;
    return *m_buddyCallback(const_cast<void *>(thisPtr), index);
  } else {
    return ::QStandardItemModel::buddy(index);
  }
}
QModelIndex
QStandardItemModel_wrapper::buddy_nocallback(const QModelIndex &index) const {
  return ::QStandardItemModel::buddy(index);
}
bool QStandardItemModel_wrapper::canFetchMore(const QModelIndex &parent) const {
  if (m_canFetchMoreCallback) {
    const void *thisPtr = this;
    return m_canFetchMoreCallback(const_cast<void *>(thisPtr), parent);
  } else {
    return ::QStandardItemModel::canFetchMore(parent);
  }
}
bool QStandardItemModel_wrapper::canFetchMore_nocallback(
    const QModelIndex &parent) const {
  return ::QStandardItemModel::canFetchMore(parent);
}
void QStandardItemModel_wrapper::clear() { ::QStandardItemModel::clear(); }
bool QStandardItemModel_wrapper::clearItemData(const QModelIndex &index) {
  if (m_clearItemDataCallback) {
    const void *thisPtr = this;
    return m_clearItemDataCallback(const_cast<void *>(thisPtr), index);
  } else {
    return ::QStandardItemModel::clearItemData(index);
  }
}
bool QStandardItemModel_wrapper::clearItemData_nocallback(
    const QModelIndex &index) {
  return ::QStandardItemModel::clearItemData(index);
}
int QStandardItemModel_wrapper::columnCount(const QModelIndex &parent) const {
  if (m_columnCountCallback) {
    const void *thisPtr = this;
    return m_columnCountCallback(const_cast<void *>(thisPtr), parent);
  } else {
    return ::QStandardItemModel::columnCount(parent);
  }
}
int QStandardItemModel_wrapper::columnCount_nocallback(
    const QModelIndex &parent) const {
  return ::QStandardItemModel::columnCount(parent);
}
void QStandardItemModel_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QStandardItemModel::customEvent(event);
  }
}
void QStandardItemModel_wrapper::customEvent_nocallback(QEvent *event) {
  ::QStandardItemModel::customEvent(event);
}
QVariant QStandardItemModel_wrapper::data(const QModelIndex &index,
                                          int role) const {
  if (m_dataCallback) {
    const void *thisPtr = this;
    return *m_dataCallback(const_cast<void *>(thisPtr), index, role);
  } else {
    return ::QStandardItemModel::data(index, role);
  }
}
QVariant QStandardItemModel_wrapper::data_nocallback(const QModelIndex &index,
                                                     int role) const {
  return ::QStandardItemModel::data(index, role);
}
bool QStandardItemModel_wrapper::event(QEvent *event) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    return ::QStandardItemModel::event(event);
  }
}
bool QStandardItemModel_wrapper::event_nocallback(QEvent *event) {
  return ::QStandardItemModel::event(event);
}
bool QStandardItemModel_wrapper::eventFilter(QObject *watched, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QStandardItemModel::eventFilter(watched, event);
  }
}
bool QStandardItemModel_wrapper::eventFilter_nocallback(QObject *watched,
                                                        QEvent *event) {
  return ::QStandardItemModel::eventFilter(watched, event);
}
void QStandardItemModel_wrapper::fetchMore(const QModelIndex &parent) {
  if (m_fetchMoreCallback) {
    const void *thisPtr = this;
    m_fetchMoreCallback(const_cast<void *>(thisPtr), parent);
  } else {
    ::QStandardItemModel::fetchMore(parent);
  }
}
void QStandardItemModel_wrapper::fetchMore_nocallback(
    const QModelIndex &parent) {
  ::QStandardItemModel::fetchMore(parent);
}
QList<QStandardItem *>
QStandardItemModel_wrapper::findItems(const QString &text) const {
  return ::QStandardItemModel::findItems(text);
}
bool QStandardItemModel_wrapper::hasChildren(const QModelIndex &parent) const {
  if (m_hasChildrenCallback) {
    const void *thisPtr = this;
    return m_hasChildrenCallback(const_cast<void *>(thisPtr), parent);
  } else {
    return ::QStandardItemModel::hasChildren(parent);
  }
}
bool QStandardItemModel_wrapper::hasChildren_nocallback(
    const QModelIndex &parent) const {
  return ::QStandardItemModel::hasChildren(parent);
}
QVariant QStandardItemModel_wrapper::headerData(int section,
                                                Qt::Orientation orientation,
                                                int role) const {
  if (m_headerDataCallback) {
    const void *thisPtr = this;
    return *m_headerDataCallback(const_cast<void *>(thisPtr), section,
                                 orientation, role);
  } else {
    return ::QStandardItemModel::headerData(section, orientation, role);
  }
}
QVariant QStandardItemModel_wrapper::headerData_nocallback(
    int section, Qt::Orientation orientation, int role) const {
  return ::QStandardItemModel::headerData(section, orientation, role);
}
QStandardItem *
QStandardItemModel_wrapper::horizontalHeaderItem(int column) const {
  return ::QStandardItemModel::horizontalHeaderItem(column);
}
QModelIndex QStandardItemModel_wrapper::index(int row, int column,
                                              const QModelIndex &parent) const {
  if (m_indexCallback) {
    const void *thisPtr = this;
    return *m_indexCallback(const_cast<void *>(thisPtr), row, column, parent);
  } else {
    return ::QStandardItemModel::index(row, column, parent);
  }
}
QModelIndex
QStandardItemModel_wrapper::index_nocallback(int row, int column,
                                             const QModelIndex &parent) const {
  return ::QStandardItemModel::index(row, column, parent);
}
QModelIndex
QStandardItemModel_wrapper::indexFromItem(const QStandardItem *item) const {
  return ::QStandardItemModel::indexFromItem(item);
}
void QStandardItemModel_wrapper::insertColumn(
    int column, const QList<QStandardItem *> &items) {
  ::QStandardItemModel::insertColumn(column, items);
}
bool QStandardItemModel_wrapper::insertColumns(int column, int count,
                                               const QModelIndex &parent) {
  if (m_insertColumnsCallback) {
    const void *thisPtr = this;
    return m_insertColumnsCallback(const_cast<void *>(thisPtr), column, count,
                                   parent);
  } else {
    return ::QStandardItemModel::insertColumns(column, count, parent);
  }
}
bool QStandardItemModel_wrapper::insertColumns_nocallback(
    int column, int count, const QModelIndex &parent) {
  return ::QStandardItemModel::insertColumns(column, count, parent);
}
void QStandardItemModel_wrapper::insertRow(int row, QStandardItem *item) {
  ::QStandardItemModel::insertRow(row, item);
}
void QStandardItemModel_wrapper::insertRow(
    int row, const QList<QStandardItem *> &items) {
  ::QStandardItemModel::insertRow(row, items);
}
bool QStandardItemModel_wrapper::insertRows(int row, int count,
                                            const QModelIndex &parent) {
  if (m_insertRowsCallback) {
    const void *thisPtr = this;
    return m_insertRowsCallback(const_cast<void *>(thisPtr), row, count,
                                parent);
  } else {
    return ::QStandardItemModel::insertRows(row, count, parent);
  }
}
bool QStandardItemModel_wrapper::insertRows_nocallback(
    int row, int count, const QModelIndex &parent) {
  return ::QStandardItemModel::insertRows(row, count, parent);
}
QStandardItem *QStandardItemModel_wrapper::invisibleRootItem() const {
  return ::QStandardItemModel::invisibleRootItem();
}
QStandardItem *QStandardItemModel_wrapper::item(int row, int column) const {
  return ::QStandardItemModel::item(row, column);
}
void QStandardItemModel_wrapper::itemChanged(QStandardItem *item) {
  ::QStandardItemModel::itemChanged(item);
}
QStandardItem *
QStandardItemModel_wrapper::itemFromIndex(const QModelIndex &index) const {
  return ::QStandardItemModel::itemFromIndex(index);
}
const QStandardItem *QStandardItemModel_wrapper::itemPrototype() const {
  return ::QStandardItemModel::itemPrototype();
}
QList<QString> QStandardItemModel_wrapper::mimeTypes() const {
  if (m_mimeTypesCallback) {
    const void *thisPtr = this;
    return *m_mimeTypesCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QStandardItemModel::mimeTypes();
  }
}
QList<QString> QStandardItemModel_wrapper::mimeTypes_nocallback() const {
  return ::QStandardItemModel::mimeTypes();
}
bool QStandardItemModel_wrapper::moveColumns(
    const QModelIndex &sourceParent, int sourceColumn, int count,
    const QModelIndex &destinationParent, int destinationChild) {
  if (m_moveColumnsCallback) {
    const void *thisPtr = this;
    return m_moveColumnsCallback(const_cast<void *>(thisPtr), sourceParent,
                                 sourceColumn, count, destinationParent,
                                 destinationChild);
  } else {
    return ::QStandardItemModel::moveColumns(
        sourceParent, sourceColumn, count, destinationParent, destinationChild);
  }
}
bool QStandardItemModel_wrapper::moveColumns_nocallback(
    const QModelIndex &sourceParent, int sourceColumn, int count,
    const QModelIndex &destinationParent, int destinationChild) {
  return ::QStandardItemModel::moveColumns(sourceParent, sourceColumn, count,
                                           destinationParent, destinationChild);
}
bool QStandardItemModel_wrapper::moveRows(const QModelIndex &sourceParent,
                                          int sourceRow, int count,
                                          const QModelIndex &destinationParent,
                                          int destinationChild) {
  if (m_moveRowsCallback) {
    const void *thisPtr = this;
    return m_moveRowsCallback(const_cast<void *>(thisPtr), sourceParent,
                              sourceRow, count, destinationParent,
                              destinationChild);
  } else {
    return ::QStandardItemModel::moveRows(sourceParent, sourceRow, count,
                                          destinationParent, destinationChild);
  }
}
bool QStandardItemModel_wrapper::moveRows_nocallback(
    const QModelIndex &sourceParent, int sourceRow, int count,
    const QModelIndex &destinationParent, int destinationChild) {
  return ::QStandardItemModel::moveRows(sourceParent, sourceRow, count,
                                        destinationParent, destinationChild);
}
QModelIndex QStandardItemModel_wrapper::parent(const QModelIndex &child) const {
  if (m_parentIndexCallback) {
    const void *thisPtr = this;
    return *m_parentIndexCallback(const_cast<void *>(thisPtr), child);
  } else {
    return ::QStandardItemModel::parent(child);
  }
}
QModelIndex
QStandardItemModel_wrapper::parent_nocallback(const QModelIndex &child) const {
  return ::QStandardItemModel::parent(child);
}
bool QStandardItemModel_wrapper::removeColumns(int column, int count,
                                               const QModelIndex &parent) {
  if (m_removeColumnsCallback) {
    const void *thisPtr = this;
    return m_removeColumnsCallback(const_cast<void *>(thisPtr), column, count,
                                   parent);
  } else {
    return ::QStandardItemModel::removeColumns(column, count, parent);
  }
}
bool QStandardItemModel_wrapper::removeColumns_nocallback(
    int column, int count, const QModelIndex &parent) {
  return ::QStandardItemModel::removeColumns(column, count, parent);
}
bool QStandardItemModel_wrapper::removeRows(int row, int count,
                                            const QModelIndex &parent) {
  if (m_removeRowsCallback) {
    const void *thisPtr = this;
    return m_removeRowsCallback(const_cast<void *>(thisPtr), row, count,
                                parent);
  } else {
    return ::QStandardItemModel::removeRows(row, count, parent);
  }
}
bool QStandardItemModel_wrapper::removeRows_nocallback(
    int row, int count, const QModelIndex &parent) {
  return ::QStandardItemModel::removeRows(row, count, parent);
}
void QStandardItemModel_wrapper::resetInternalData() {
  if (m_resetInternalDataCallback) {
    const void *thisPtr = this;
    m_resetInternalDataCallback(const_cast<void *>(thisPtr));
  } else {
    ::QStandardItemModel::resetInternalData();
  }
}
void QStandardItemModel_wrapper::resetInternalData_nocallback() {
  ::QStandardItemModel::resetInternalData();
}
void QStandardItemModel_wrapper::revert() {
  if (m_revertCallback) {
    const void *thisPtr = this;
    m_revertCallback(const_cast<void *>(thisPtr));
  } else {
    ::QStandardItemModel::revert();
  }
}
void QStandardItemModel_wrapper::revert_nocallback() {
  ::QStandardItemModel::revert();
}
int QStandardItemModel_wrapper::rowCount(const QModelIndex &parent) const {
  if (m_rowCountCallback) {
    const void *thisPtr = this;
    return m_rowCountCallback(const_cast<void *>(thisPtr), parent);
  } else {
    return ::QStandardItemModel::rowCount(parent);
  }
}
int QStandardItemModel_wrapper::rowCount_nocallback(
    const QModelIndex &parent) const {
  return ::QStandardItemModel::rowCount(parent);
}
void QStandardItemModel_wrapper::setColumnCount(int columns) {
  ::QStandardItemModel::setColumnCount(columns);
}
bool QStandardItemModel_wrapper::setData(const QModelIndex &index,
                                         const QVariant &value, int role) {
  if (m_setDataCallback) {
    const void *thisPtr = this;
    return m_setDataCallback(const_cast<void *>(thisPtr), index, value, role);
  } else {
    return ::QStandardItemModel::setData(index, value, role);
  }
}
bool QStandardItemModel_wrapper::setData_nocallback(const QModelIndex &index,
                                                    const QVariant &value,
                                                    int role) {
  return ::QStandardItemModel::setData(index, value, role);
}
bool QStandardItemModel_wrapper::setHeaderData(int section,
                                               Qt::Orientation orientation,
                                               const QVariant &value,
                                               int role) {
  if (m_setHeaderDataCallback) {
    const void *thisPtr = this;
    return m_setHeaderDataCallback(const_cast<void *>(thisPtr), section,
                                   orientation, value, role);
  } else {
    return ::QStandardItemModel::setHeaderData(section, orientation, value,
                                               role);
  }
}
bool QStandardItemModel_wrapper::setHeaderData_nocallback(
    int section, Qt::Orientation orientation, const QVariant &value, int role) {
  return ::QStandardItemModel::setHeaderData(section, orientation, value, role);
}
void QStandardItemModel_wrapper::setHorizontalHeaderItem(int column,
                                                         QStandardItem *item) {
  ::QStandardItemModel::setHorizontalHeaderItem(column, item);
}
void QStandardItemModel_wrapper::setHorizontalHeaderLabels(
    const QList<QString> &labels) {
  ::QStandardItemModel::setHorizontalHeaderLabels(labels);
}
void QStandardItemModel_wrapper::setItem(int row, QStandardItem *item) {
  ::QStandardItemModel::setItem(row, item);
}
void QStandardItemModel_wrapper::setItem(int row, int column,
                                         QStandardItem *item) {
  ::QStandardItemModel::setItem(row, column, item);
}
void QStandardItemModel_wrapper::setItemPrototype(const QStandardItem *item) {
  ::QStandardItemModel::setItemPrototype(item);
}
void QStandardItemModel_wrapper::setRowCount(int rows) {
  ::QStandardItemModel::setRowCount(rows);
}
void QStandardItemModel_wrapper::setSortRole(int role) {
  ::QStandardItemModel::setSortRole(role);
}
void QStandardItemModel_wrapper::setVerticalHeaderItem(int row,
                                                       QStandardItem *item) {
  ::QStandardItemModel::setVerticalHeaderItem(row, item);
}
void QStandardItemModel_wrapper::setVerticalHeaderLabels(
    const QList<QString> &labels) {
  ::QStandardItemModel::setVerticalHeaderLabels(labels);
}
QModelIndex QStandardItemModel_wrapper::sibling(int row, int column,
                                                const QModelIndex &idx) const {
  if (m_siblingCallback) {
    const void *thisPtr = this;
    return *m_siblingCallback(const_cast<void *>(thisPtr), row, column, idx);
  } else {
    return ::QStandardItemModel::sibling(row, column, idx);
  }
}
QModelIndex
QStandardItemModel_wrapper::sibling_nocallback(int row, int column,
                                               const QModelIndex &idx) const {
  return ::QStandardItemModel::sibling(row, column, idx);
}
void QStandardItemModel_wrapper::sort(int column, Qt::SortOrder order) {
  if (m_sortCallback) {
    const void *thisPtr = this;
    m_sortCallback(const_cast<void *>(thisPtr), column, order);
  } else {
    ::QStandardItemModel::sort(column, order);
  }
}
void QStandardItemModel_wrapper::sort_nocallback(int column,
                                                 Qt::SortOrder order) {
  ::QStandardItemModel::sort(column, order);
}
int QStandardItemModel_wrapper::sortRole() const {
  return ::QStandardItemModel::sortRole();
}
QSize QStandardItemModel_wrapper::span(const QModelIndex &index) const {
  if (m_spanCallback) {
    const void *thisPtr = this;
    return *m_spanCallback(const_cast<void *>(thisPtr), index);
  } else {
    return ::QStandardItemModel::span(index);
  }
}
QSize QStandardItemModel_wrapper::span_nocallback(
    const QModelIndex &index) const {
  return ::QStandardItemModel::span(index);
}
bool QStandardItemModel_wrapper::submit() {
  if (m_submitCallback) {
    const void *thisPtr = this;
    return m_submitCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QStandardItemModel::submit();
  }
}
bool QStandardItemModel_wrapper::submit_nocallback() {
  return ::QStandardItemModel::submit();
}
QList<QStandardItem *> QStandardItemModel_wrapper::takeColumn(int column) {
  return ::QStandardItemModel::takeColumn(column);
}
QStandardItem *
QStandardItemModel_wrapper::takeHorizontalHeaderItem(int column) {
  return ::QStandardItemModel::takeHorizontalHeaderItem(column);
}
QStandardItem *QStandardItemModel_wrapper::takeItem(int row, int column) {
  return ::QStandardItemModel::takeItem(row, column);
}
QList<QStandardItem *> QStandardItemModel_wrapper::takeRow(int row) {
  return ::QStandardItemModel::takeRow(row);
}
QStandardItem *QStandardItemModel_wrapper::takeVerticalHeaderItem(int row) {
  return ::QStandardItemModel::takeVerticalHeaderItem(row);
}
QString QStandardItemModel_wrapper::tr(const char *s, const char *c, int n) {
  return ::QStandardItemModel::tr(s, c, n);
}
QStandardItem *QStandardItemModel_wrapper::verticalHeaderItem(int row) const {
  return ::QStandardItemModel::verticalHeaderItem(row);
}
QStandardItemModel_wrapper::~QStandardItemModel_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QStandardItemModel *fromPtr(void *ptr) {
  return reinterpret_cast<QStandardItemModel *>(ptr);
}
static QtDartBindings_wrappersNS::QStandardItemModel_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<
      QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(ptr);
}
extern "C" {
void c_QStandardItemModel_Finalizer(void *cppObj) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(cppObj);
}
void *c_QStandardItemModel__constructor_QObject(void *parent_) {
  auto parent = reinterpret_cast<QObject *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QStandardItemModel_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
void *c_QStandardItemModel__constructor_int_int_QObject(int rows, int columns,
                                                        void *parent_) {
  auto parent = reinterpret_cast<QObject *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QStandardItemModel_wrapper(
      rows, columns, parent);
  return reinterpret_cast<void *>(ptr);
}
// appendColumn(const QList<QStandardItem* > & items)
void c_QStandardItemModel__appendColumn_QList_QStandardItem(void *thisObj,
                                                            void *items_) {
  assert(items_);
  auto &items = *reinterpret_cast<QList<QStandardItem *> *>(items_);
  fromPtr(thisObj)->appendColumn(items);
}
// appendRow(QStandardItem * item)
void c_QStandardItemModel__appendRow_QStandardItem(void *thisObj, void *item_) {
  auto item = reinterpret_cast<QStandardItem *>(item_);
  fromPtr(thisObj)->appendRow(item);
}
// appendRow(const QList<QStandardItem* > & items)
void c_QStandardItemModel__appendRow_QList_QStandardItem(void *thisObj,
                                                         void *items_) {
  assert(items_);
  auto &items = *reinterpret_cast<QList<QStandardItem *> *>(items_);
  fromPtr(thisObj)->appendRow(items);
}
// buddy(const QModelIndex & index) const
void *c_QStandardItemModel__buddy_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->buddy_nocallback(index);
    } else {
      return targetPtr->buddy(index);
    }
  }()};
  return result;
}
// canFetchMore(const QModelIndex & parent) const
bool c_QStandardItemModel__canFetchMore_QModelIndex(void *thisObj,
                                                    void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->canFetchMore_nocallback(parent);
    } else {
      return targetPtr->canFetchMore(parent);
    }
  }();
  return result;
}
// clear()
void c_QStandardItemModel__clear(void *thisObj) { fromPtr(thisObj)->clear(); }
// clearItemData(const QModelIndex & index)
bool c_QStandardItemModel__clearItemData_QModelIndex(void *thisObj,
                                                     void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->clearItemData_nocallback(index);
    } else {
      return targetPtr->clearItemData(index);
    }
  }();
  return result;
}
// columnCount(const QModelIndex & parent) const
int c_QStandardItemModel__columnCount_QModelIndex(void *thisObj,
                                                  void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->columnCount_nocallback(parent);
    } else {
      return targetPtr->columnCount(parent);
    }
  }();
  return result;
}
// customEvent(QEvent * event)
void c_QStandardItemModel__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// data(const QModelIndex & index, int role) const
void *c_QStandardItemModel__data_QModelIndex_int(void *thisObj, void *index_,
                                                 int role) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = new Dartagnan::ValueWrapper<QVariant>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->data_nocallback(index, role);
    } else {
      return targetPtr->data(index, role);
    }
  }()};
  return result;
}
void c_QStandardItemModel__onDataChanged_QModelIndex_QModelIndex_QList_int(
    void *thisObj, void *contextQObject, void *callback) {
  auto instance = reinterpret_cast<QStandardItemModel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QStandardItemModel::dataChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// event(QEvent * event)
bool c_QStandardItemModel__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(
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
bool c_QStandardItemModel__eventFilter_QObject_QEvent(void *thisObj,
                                                      void *watched_,
                                                      void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->eventFilter_nocallback(watched, event);
    } else {
      return targetPtr->eventFilter(watched, event);
    }
  }();
  return result;
}
// fetchMore(const QModelIndex & parent)
void c_QStandardItemModel__fetchMore_QModelIndex(void *thisObj, void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->fetchMore_nocallback(parent);
    } else {
      return targetPtr->fetchMore(parent);
    }
  }();
}
// findItems(const QString & text) const
void *c_QStandardItemModel__findItems_QString(void *thisObj,
                                              const char *text_) {
  const auto text = QString::fromUtf8(text_);
  const auto &result = new Dartagnan::ValueWrapper<QList<QStandardItem *>>{
      fromPtr(thisObj)->findItems(text)};
  free((char *)text_);
  return result;
}
// hasChildren(const QModelIndex & parent) const
bool c_QStandardItemModel__hasChildren_QModelIndex(void *thisObj,
                                                   void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->hasChildren_nocallback(parent);
    } else {
      return targetPtr->hasChildren(parent);
    }
  }();
  return result;
}
// headerData(int section, Qt::Orientation orientation, int role) const
void *c_QStandardItemModel__headerData_int_Orientation_int(void *thisObj,
                                                           int section,
                                                           int orientation,
                                                           int role) {
  const auto &result = new Dartagnan::ValueWrapper<QVariant>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->headerData_nocallback(
          section, static_cast<Qt::Orientation>(orientation), role);
    } else {
      return targetPtr->headerData(
          section, static_cast<Qt::Orientation>(orientation), role);
    }
  }()};
  return result;
}
void c_QStandardItemModel__onHeaderDataChanged_Orientation_int_int(
    void *thisObj, void *contextQObject, void *callback) {
  auto instance = reinterpret_cast<QStandardItemModel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QStandardItemModel::headerDataChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// horizontalHeaderItem(int column) const
void *c_QStandardItemModel__horizontalHeaderItem_int(void *thisObj,
                                                     int column) {
  const auto &result = fromPtr(thisObj)->horizontalHeaderItem(column);
  return result;
}
// index(int row, int column, const QModelIndex & parent) const
void *c_QStandardItemModel__index_int_int_QModelIndex(void *thisObj, int row,
                                                      int column,
                                                      void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->index_nocallback(row, column, parent);
    } else {
      return targetPtr->index(row, column, parent);
    }
  }()};
  return result;
}
// indexFromItem(const QStandardItem * item) const
void *c_QStandardItemModel__indexFromItem_QStandardItem(void *thisObj,
                                                        void *item_) {
  auto item = reinterpret_cast<QStandardItem *>(item_);
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{
      fromPtr(thisObj)->indexFromItem(item)};
  return result;
}
// insertColumn(int column, const QList<QStandardItem* > & items)
void c_QStandardItemModel__insertColumn_int_QList_QStandardItem(void *thisObj,
                                                                int column,
                                                                void *items_) {
  assert(items_);
  auto &items = *reinterpret_cast<QList<QStandardItem *> *>(items_);
  fromPtr(thisObj)->insertColumn(column, items);
}
// insertColumns(int column, int count, const QModelIndex & parent)
bool c_QStandardItemModel__insertColumns_int_int_QModelIndex(void *thisObj,
                                                             int column,
                                                             int count,
                                                             void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->insertColumns_nocallback(column, count, parent);
    } else {
      return targetPtr->insertColumns(column, count, parent);
    }
  }();
  return result;
}
// insertRow(int row, QStandardItem * item)
void c_QStandardItemModel__insertRow_int_QStandardItem(void *thisObj, int row,
                                                       void *item_) {
  auto item = reinterpret_cast<QStandardItem *>(item_);
  fromPtr(thisObj)->insertRow(row, item);
}
// insertRow(int row, const QList<QStandardItem* > & items)
void c_QStandardItemModel__insertRow_int_QList_QStandardItem(void *thisObj,
                                                             int row,
                                                             void *items_) {
  assert(items_);
  auto &items = *reinterpret_cast<QList<QStandardItem *> *>(items_);
  fromPtr(thisObj)->insertRow(row, items);
}
// insertRows(int row, int count, const QModelIndex & parent)
bool c_QStandardItemModel__insertRows_int_int_QModelIndex(void *thisObj,
                                                          int row, int count,
                                                          void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->insertRows_nocallback(row, count, parent);
    } else {
      return targetPtr->insertRows(row, count, parent);
    }
  }();
  return result;
}
// invisibleRootItem() const
void *c_QStandardItemModel__invisibleRootItem(void *thisObj) {
  const auto &result = fromPtr(thisObj)->invisibleRootItem();
  return result;
}
// item(int row, int column) const
void *c_QStandardItemModel__item_int_int(void *thisObj, int row, int column) {
  const auto &result = fromPtr(thisObj)->item(row, column);
  return result;
}
// itemChanged(QStandardItem * item)
void c_QStandardItemModel__itemChanged_QStandardItem(void *thisObj,
                                                     void *item_) {
  auto item = reinterpret_cast<QStandardItem *>(item_);
  fromPtr(thisObj)->itemChanged(item);
}
void c_QStandardItemModel__onItemChanged_QStandardItem(void *thisObj,
                                                       void *contextQObject,
                                                       void *callback) {
  auto instance = reinterpret_cast<QStandardItemModel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QStandardItemModel::itemChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// itemFromIndex(const QModelIndex & index) const
void *c_QStandardItemModel__itemFromIndex_QModelIndex(void *thisObj,
                                                      void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = fromPtr(thisObj)->itemFromIndex(index);
  return result;
}
// itemPrototype() const
void *c_QStandardItemModel__itemPrototype(void *thisObj) {
  const auto &result = const_cast<void *>(
      static_cast<const void *>(fromPtr(thisObj)->itemPrototype()));
  return result;
}
void c_QStandardItemModel__onLayoutAboutToBeChanged(void *thisObj,
                                                    void *contextQObject,
                                                    void *callback) {
  auto instance = reinterpret_cast<QStandardItemModel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QStandardItemModel::layoutAboutToBeChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QStandardItemModel__onLayoutChanged(void *thisObj, void *contextQObject,
                                           void *callback) {
  auto instance = reinterpret_cast<QStandardItemModel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QStandardItemModel::layoutChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// mimeTypes() const
void *c_QStandardItemModel__mimeTypes(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QString>>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->mimeTypes_nocallback();
    } else {
      return targetPtr->mimeTypes();
    }
  }()};
  return result;
}
// moveColumns(const QModelIndex & sourceParent, int sourceColumn, int count,
// const QModelIndex & destinationParent, int destinationChild)
bool c_QStandardItemModel__moveColumns_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceColumn, int count,
    void *destinationParent_, int destinationChild) {
  assert(sourceParent_);
  auto &sourceParent = *reinterpret_cast<QModelIndex *>(sourceParent_);
  assert(destinationParent_);
  auto &destinationParent =
      *reinterpret_cast<QModelIndex *>(destinationParent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->moveColumns_nocallback(sourceParent, sourceColumn,
                                                count, destinationParent,
                                                destinationChild);
    } else {
      return targetPtr->moveColumns(sourceParent, sourceColumn, count,
                                    destinationParent, destinationChild);
    }
  }();
  return result;
}
// moveRows(const QModelIndex & sourceParent, int sourceRow, int count, const
// QModelIndex & destinationParent, int destinationChild)
bool c_QStandardItemModel__moveRows_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceRow, int count,
    void *destinationParent_, int destinationChild) {
  assert(sourceParent_);
  auto &sourceParent = *reinterpret_cast<QModelIndex *>(sourceParent_);
  assert(destinationParent_);
  auto &destinationParent =
      *reinterpret_cast<QModelIndex *>(destinationParent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->moveRows_nocallback(
          sourceParent, sourceRow, count, destinationParent, destinationChild);
    } else {
      return targetPtr->moveRows(sourceParent, sourceRow, count,
                                 destinationParent, destinationChild);
    }
  }();
  return result;
}
// parent(const QModelIndex & child) const
void *c_QStandardItemModel__parentIndex_QModelIndex(void *thisObj,
                                                    void *child_) {
  assert(child_);
  auto &child = *reinterpret_cast<QModelIndex *>(child_);
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->parent_nocallback(child);
    } else {
      return targetPtr->parent(child);
    }
  }()};
  return result;
}
// removeColumns(int column, int count, const QModelIndex & parent)
bool c_QStandardItemModel__removeColumns_int_int_QModelIndex(void *thisObj,
                                                             int column,
                                                             int count,
                                                             void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->removeColumns_nocallback(column, count, parent);
    } else {
      return targetPtr->removeColumns(column, count, parent);
    }
  }();
  return result;
}
// removeRows(int row, int count, const QModelIndex & parent)
bool c_QStandardItemModel__removeRows_int_int_QModelIndex(void *thisObj,
                                                          int row, int count,
                                                          void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->removeRows_nocallback(row, count, parent);
    } else {
      return targetPtr->removeRows(row, count, parent);
    }
  }();
  return result;
}
// resetInternalData()
void c_QStandardItemModel__resetInternalData(void *thisObj) {
  fromWrapperPtr(thisObj)->resetInternalData_nocallback();
}
// revert()
void c_QStandardItemModel__revert(void *thisObj) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->revert_nocallback();
    } else {
      return targetPtr->revert();
    }
  }();
}
// rowCount(const QModelIndex & parent) const
int c_QStandardItemModel__rowCount_QModelIndex(void *thisObj, void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->rowCount_nocallback(parent);
    } else {
      return targetPtr->rowCount(parent);
    }
  }();
  return result;
}
// setColumnCount(int columns)
void c_QStandardItemModel__setColumnCount_int(void *thisObj, int columns) {
  fromPtr(thisObj)->setColumnCount(columns);
}
// setData(const QModelIndex & index, const QVariant & value, int role)
bool c_QStandardItemModel__setData_QModelIndex_QVariant_int(void *thisObj,
                                                            void *index_,
                                                            void *value_,
                                                            int role) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  assert(value_);
  auto &value = *reinterpret_cast<QVariant *>(value_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setData_nocallback(index, value, role);
    } else {
      return targetPtr->setData(index, value, role);
    }
  }();
  return result;
}
// setHeaderData(int section, Qt::Orientation orientation, const QVariant &
// value, int role)
bool c_QStandardItemModel__setHeaderData_int_Orientation_QVariant_int(
    void *thisObj, int section, int orientation, void *value_, int role) {
  assert(value_);
  auto &value = *reinterpret_cast<QVariant *>(value_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setHeaderData_nocallback(
          section, static_cast<Qt::Orientation>(orientation), value, role);
    } else {
      return targetPtr->setHeaderData(
          section, static_cast<Qt::Orientation>(orientation), value, role);
    }
  }();
  return result;
}
// setHorizontalHeaderItem(int column, QStandardItem * item)
void c_QStandardItemModel__setHorizontalHeaderItem_int_QStandardItem(
    void *thisObj, int column, void *item_) {
  auto item = reinterpret_cast<QStandardItem *>(item_);
  fromPtr(thisObj)->setHorizontalHeaderItem(column, item);
}
// setHorizontalHeaderLabels(const QList<QString > & labels)
void c_QStandardItemModel__setHorizontalHeaderLabels_QList_QString(
    void *thisObj, void *labels_) {
  assert(labels_);
  auto &labels = *reinterpret_cast<QList<QString> *>(labels_);
  fromPtr(thisObj)->setHorizontalHeaderLabels(labels);
}
// setItem(int row, QStandardItem * item)
void c_QStandardItemModel__setItem_int_QStandardItem(void *thisObj, int row,
                                                     void *item_) {
  auto item = reinterpret_cast<QStandardItem *>(item_);
  fromPtr(thisObj)->setItem(row, item);
}
// setItem(int row, int column, QStandardItem * item)
void c_QStandardItemModel__setItem_int_int_QStandardItem(void *thisObj, int row,
                                                         int column,
                                                         void *item_) {
  auto item = reinterpret_cast<QStandardItem *>(item_);
  fromPtr(thisObj)->setItem(row, column, item);
}
// setItemPrototype(const QStandardItem * item)
void c_QStandardItemModel__setItemPrototype_QStandardItem(void *thisObj,
                                                          void *item_) {
  auto item = reinterpret_cast<QStandardItem *>(item_);
  fromPtr(thisObj)->setItemPrototype(item);
}
// setRowCount(int rows)
void c_QStandardItemModel__setRowCount_int(void *thisObj, int rows) {
  fromPtr(thisObj)->setRowCount(rows);
}
// setSortRole(int role)
void c_QStandardItemModel__setSortRole_int(void *thisObj, int role) {
  fromPtr(thisObj)->setSortRole(role);
}
// setVerticalHeaderItem(int row, QStandardItem * item)
void c_QStandardItemModel__setVerticalHeaderItem_int_QStandardItem(
    void *thisObj, int row, void *item_) {
  auto item = reinterpret_cast<QStandardItem *>(item_);
  fromPtr(thisObj)->setVerticalHeaderItem(row, item);
}
// setVerticalHeaderLabels(const QList<QString > & labels)
void c_QStandardItemModel__setVerticalHeaderLabels_QList_QString(
    void *thisObj, void *labels_) {
  assert(labels_);
  auto &labels = *reinterpret_cast<QList<QString> *>(labels_);
  fromPtr(thisObj)->setVerticalHeaderLabels(labels);
}
// sibling(int row, int column, const QModelIndex & idx) const
void *c_QStandardItemModel__sibling_int_int_QModelIndex(void *thisObj, int row,
                                                        int column,
                                                        void *idx_) {
  assert(idx_);
  auto &idx = *reinterpret_cast<QModelIndex *>(idx_);
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->sibling_nocallback(row, column, idx);
    } else {
      return targetPtr->sibling(row, column, idx);
    }
  }()};
  return result;
}
// sort(int column, Qt::SortOrder order)
void c_QStandardItemModel__sort_int_SortOrder(void *thisObj, int column,
                                              int order) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->sort_nocallback(column,
                                         static_cast<Qt::SortOrder>(order));
    } else {
      return targetPtr->sort(column, static_cast<Qt::SortOrder>(order));
    }
  }();
}
// sortRole() const
int c_QStandardItemModel__sortRole(void *thisObj) {
  const auto &result = fromPtr(thisObj)->sortRole();
  return result;
}
// span(const QModelIndex & index) const
void *c_QStandardItemModel__span_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->span_nocallback(index);
    } else {
      return targetPtr->span(index);
    }
  }()};
  return result;
}
// submit()
bool c_QStandardItemModel__submit(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->submit_nocallback();
    } else {
      return targetPtr->submit();
    }
  }();
  return result;
}
// takeColumn(int column)
void *c_QStandardItemModel__takeColumn_int(void *thisObj, int column) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QStandardItem *>>{
      fromPtr(thisObj)->takeColumn(column)};
  return result;
}
// takeHorizontalHeaderItem(int column)
void *c_QStandardItemModel__takeHorizontalHeaderItem_int(void *thisObj,
                                                         int column) {
  const auto &result = fromPtr(thisObj)->takeHorizontalHeaderItem(column);
  return result;
}
// takeItem(int row, int column)
void *c_QStandardItemModel__takeItem_int_int(void *thisObj, int row,
                                             int column) {
  const auto &result = fromPtr(thisObj)->takeItem(row, column);
  return result;
}
// takeRow(int row)
void *c_QStandardItemModel__takeRow_int(void *thisObj, int row) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QStandardItem *>>{
      fromPtr(thisObj)->takeRow(row)};
  return result;
}
// takeVerticalHeaderItem(int row)
void *c_QStandardItemModel__takeVerticalHeaderItem_int(void *thisObj, int row) {
  const auto &result = fromPtr(thisObj)->takeVerticalHeaderItem(row);
  return result;
}
// tr(const char * s, const char * c, int n)
void *c_static_QStandardItemModel__tr_char_char_int(const char *s,
                                                    const char *c, int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QStandardItemModel_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
// verticalHeaderItem(int row) const
void *c_QStandardItemModel__verticalHeaderItem_int(void *thisObj, int row) {
  const auto &result = fromPtr(thisObj)->verticalHeaderItem(row);
  return result;
}
void c_QStandardItemModel__destructor(void *thisObj) {
  delete fromPtr(thisObj);
}
void c_QStandardItemModel__registerVirtualMethodCallback(void *ptr,
                                                         void *callback,
                                                         int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 5771:
    wrapper->m_buddyCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStandardItemModel_wrapper::Callback_buddy>(
        callback);
    break;
  case 5772:
    wrapper->m_canFetchMoreCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_canFetchMore>(callback);
    break;
  case 5777:
    wrapper->m_clearItemDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_clearItemData>(callback);
    break;
  case 5778:
    wrapper->m_columnCountCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_columnCount>(callback);
    break;
  case 946:
    wrapper->m_customEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_customEvent>(callback);
    break;
  case 5780:
    wrapper->m_dataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStandardItemModel_wrapper::Callback_data>(
        callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStandardItemModel_wrapper::Callback_event>(
        callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_eventFilter>(callback);
    break;
  case 5798:
    wrapper->m_fetchMoreCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_fetchMore>(callback);
    break;
  case 5799:
    wrapper->m_hasChildrenCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_hasChildren>(callback);
    break;
  case 5801:
    wrapper->m_headerDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_headerData>(callback);
    break;
  case 5803:
    wrapper->m_indexCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStandardItemModel_wrapper::Callback_index>(
        callback);
    break;
  case 5806:
    wrapper->m_insertColumnsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_insertColumns>(callback);
    break;
  case 5808:
    wrapper->m_insertRowsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_insertRows>(callback);
    break;
  case 5816:
    wrapper->m_mimeTypesCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_mimeTypes>(callback);
    break;
  case 5818:
    wrapper->m_moveColumnsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_moveColumns>(callback);
    break;
  case 5820:
    wrapper->m_moveRowsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_moveRows>(callback);
    break;
  case 5822:
    wrapper->m_parentIndexCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_parentIndex>(callback);
    break;
  case 5827:
    wrapper->m_removeColumnsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_removeColumns>(callback);
    break;
  case 5830:
    wrapper->m_removeRowsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_removeRows>(callback);
    break;
  case 5831:
    wrapper->m_resetInternalDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_resetInternalData>(callback);
    break;
  case 5832:
    wrapper->m_revertCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStandardItemModel_wrapper::Callback_revert>(
        callback);
    break;
  case 5833:
    wrapper->m_rowCountCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_rowCount>(callback);
    break;
  case 5836:
    wrapper->m_setDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_setData>(callback);
    break;
  case 5837:
    wrapper->m_setHeaderDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_setHeaderData>(callback);
    break;
  case 5840:
    wrapper->m_siblingCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_sibling>(callback);
    break;
  case 5842:
    wrapper->m_sortCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStandardItemModel_wrapper::Callback_sort>(
        callback);
    break;
  case 5843:
    wrapper->m_spanCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStandardItemModel_wrapper::Callback_span>(
        callback);
    break;
  case 5845:
    wrapper->m_submitCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStandardItemModel_wrapper::Callback_submit>(
        callback);
    break;
  }
}
}
