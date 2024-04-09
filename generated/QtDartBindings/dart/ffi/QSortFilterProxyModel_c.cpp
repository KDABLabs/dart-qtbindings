/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QSortFilterProxyModel_c.h"

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
QSortFilterProxyModel_wrapper::QSortFilterProxyModel_wrapper(QObject *parent)
    : ::QSortFilterProxyModel(parent) {}
bool QSortFilterProxyModel_wrapper::autoAcceptChildRows() const {
  return ::QSortFilterProxyModel::autoAcceptChildRows();
}
void QSortFilterProxyModel_wrapper::autoAcceptChildRowsChanged(
    bool autoAcceptChildRows) {
  ::QSortFilterProxyModel::autoAcceptChildRowsChanged(autoAcceptChildRows);
}
QModelIndex
QSortFilterProxyModel_wrapper::buddy(const QModelIndex &index) const {
  if (m_buddyCallback) {
    const void *thisPtr = this;
    return *m_buddyCallback(const_cast<void *>(thisPtr), index);
  } else {
    return ::QSortFilterProxyModel::buddy(index);
  }
}
QModelIndex QSortFilterProxyModel_wrapper::buddy_nocallback(
    const QModelIndex &index) const {
  return ::QSortFilterProxyModel::buddy(index);
}
bool QSortFilterProxyModel_wrapper::canFetchMore(
    const QModelIndex &parent) const {
  if (m_canFetchMoreCallback) {
    const void *thisPtr = this;
    return m_canFetchMoreCallback(const_cast<void *>(thisPtr), parent);
  } else {
    return ::QSortFilterProxyModel::canFetchMore(parent);
  }
}
bool QSortFilterProxyModel_wrapper::canFetchMore_nocallback(
    const QModelIndex &parent) const {
  return ::QSortFilterProxyModel::canFetchMore(parent);
}
bool QSortFilterProxyModel_wrapper::clearItemData(const QModelIndex &index) {
  if (m_clearItemDataCallback) {
    const void *thisPtr = this;
    return m_clearItemDataCallback(const_cast<void *>(thisPtr), index);
  } else {
    return ::QSortFilterProxyModel::clearItemData(index);
  }
}
bool QSortFilterProxyModel_wrapper::clearItemData_nocallback(
    const QModelIndex &index) {
  return ::QSortFilterProxyModel::clearItemData(index);
}
int QSortFilterProxyModel_wrapper::columnCount(
    const QModelIndex &parent) const {
  if (m_columnCountCallback) {
    const void *thisPtr = this;
    return m_columnCountCallback(const_cast<void *>(thisPtr), parent);
  } else {
    return ::QSortFilterProxyModel::columnCount(parent);
  }
}
int QSortFilterProxyModel_wrapper::columnCount_nocallback(
    const QModelIndex &parent) const {
  return ::QSortFilterProxyModel::columnCount(parent);
}
void QSortFilterProxyModel_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QSortFilterProxyModel::customEvent(event);
  }
}
void QSortFilterProxyModel_wrapper::customEvent_nocallback(QEvent *event) {
  ::QSortFilterProxyModel::customEvent(event);
}
QVariant QSortFilterProxyModel_wrapper::data(const QModelIndex &index,
                                             int role) const {
  if (m_dataCallback) {
    const void *thisPtr = this;
    return *m_dataCallback(const_cast<void *>(thisPtr), index, role);
  } else {
    return ::QSortFilterProxyModel::data(index, role);
  }
}
QVariant
QSortFilterProxyModel_wrapper::data_nocallback(const QModelIndex &index,
                                               int role) const {
  return ::QSortFilterProxyModel::data(index, role);
}
bool QSortFilterProxyModel_wrapper::dynamicSortFilter() const {
  return ::QSortFilterProxyModel::dynamicSortFilter();
}
void QSortFilterProxyModel_wrapper::dynamicSortFilterChanged(
    bool dynamicSortFilter) {
  ::QSortFilterProxyModel::dynamicSortFilterChanged(dynamicSortFilter);
}
bool QSortFilterProxyModel_wrapper::event(QEvent *event) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    return ::QSortFilterProxyModel::event(event);
  }
}
bool QSortFilterProxyModel_wrapper::event_nocallback(QEvent *event) {
  return ::QSortFilterProxyModel::event(event);
}
bool QSortFilterProxyModel_wrapper::eventFilter(QObject *watched,
                                                QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QSortFilterProxyModel::eventFilter(watched, event);
  }
}
bool QSortFilterProxyModel_wrapper::eventFilter_nocallback(QObject *watched,
                                                           QEvent *event) {
  return ::QSortFilterProxyModel::eventFilter(watched, event);
}
void QSortFilterProxyModel_wrapper::fetchMore(const QModelIndex &parent) {
  if (m_fetchMoreCallback) {
    const void *thisPtr = this;
    m_fetchMoreCallback(const_cast<void *>(thisPtr), parent);
  } else {
    ::QSortFilterProxyModel::fetchMore(parent);
  }
}
void QSortFilterProxyModel_wrapper::fetchMore_nocallback(
    const QModelIndex &parent) {
  ::QSortFilterProxyModel::fetchMore(parent);
}
bool QSortFilterProxyModel_wrapper::filterAcceptsColumn(
    int source_column, const QModelIndex &source_parent) const {
  if (m_filterAcceptsColumnCallback) {
    const void *thisPtr = this;
    return m_filterAcceptsColumnCallback(const_cast<void *>(thisPtr),
                                         source_column, source_parent);
  } else {
    return ::QSortFilterProxyModel::filterAcceptsColumn(source_column,
                                                        source_parent);
  }
}
bool QSortFilterProxyModel_wrapper::filterAcceptsColumn_nocallback(
    int source_column, const QModelIndex &source_parent) const {
  return ::QSortFilterProxyModel::filterAcceptsColumn(source_column,
                                                      source_parent);
}
bool QSortFilterProxyModel_wrapper::filterAcceptsRow(
    int source_row, const QModelIndex &source_parent) const {
  if (m_filterAcceptsRowCallback) {
    const void *thisPtr = this;
    return m_filterAcceptsRowCallback(const_cast<void *>(thisPtr), source_row,
                                      source_parent);
  } else {
    return ::QSortFilterProxyModel::filterAcceptsRow(source_row, source_parent);
  }
}
bool QSortFilterProxyModel_wrapper::filterAcceptsRow_nocallback(
    int source_row, const QModelIndex &source_parent) const {
  return ::QSortFilterProxyModel::filterAcceptsRow(source_row, source_parent);
}
int QSortFilterProxyModel_wrapper::filterKeyColumn() const {
  return ::QSortFilterProxyModel::filterKeyColumn();
}
int QSortFilterProxyModel_wrapper::filterRole() const {
  return ::QSortFilterProxyModel::filterRole();
}
void QSortFilterProxyModel_wrapper::filterRoleChanged(int filterRole) {
  ::QSortFilterProxyModel::filterRoleChanged(filterRole);
}
bool QSortFilterProxyModel_wrapper::hasChildren(
    const QModelIndex &parent) const {
  if (m_hasChildrenCallback) {
    const void *thisPtr = this;
    return m_hasChildrenCallback(const_cast<void *>(thisPtr), parent);
  } else {
    return ::QSortFilterProxyModel::hasChildren(parent);
  }
}
bool QSortFilterProxyModel_wrapper::hasChildren_nocallback(
    const QModelIndex &parent) const {
  return ::QSortFilterProxyModel::hasChildren(parent);
}
QVariant QSortFilterProxyModel_wrapper::headerData(int section,
                                                   Qt::Orientation orientation,
                                                   int role) const {
  if (m_headerDataCallback) {
    const void *thisPtr = this;
    return *m_headerDataCallback(const_cast<void *>(thisPtr), section,
                                 orientation, role);
  } else {
    return ::QSortFilterProxyModel::headerData(section, orientation, role);
  }
}
QVariant QSortFilterProxyModel_wrapper::headerData_nocallback(
    int section, Qt::Orientation orientation, int role) const {
  return ::QSortFilterProxyModel::headerData(section, orientation, role);
}
QModelIndex
QSortFilterProxyModel_wrapper::index(int row, int column,
                                     const QModelIndex &parent) const {
  if (m_indexCallback) {
    const void *thisPtr = this;
    return *m_indexCallback(const_cast<void *>(thisPtr), row, column, parent);
  } else {
    return ::QSortFilterProxyModel::index(row, column, parent);
  }
}
QModelIndex QSortFilterProxyModel_wrapper::index_nocallback(
    int row, int column, const QModelIndex &parent) const {
  return ::QSortFilterProxyModel::index(row, column, parent);
}
bool QSortFilterProxyModel_wrapper::insertColumns(int column, int count,
                                                  const QModelIndex &parent) {
  if (m_insertColumnsCallback) {
    const void *thisPtr = this;
    return m_insertColumnsCallback(const_cast<void *>(thisPtr), column, count,
                                   parent);
  } else {
    return ::QSortFilterProxyModel::insertColumns(column, count, parent);
  }
}
bool QSortFilterProxyModel_wrapper::insertColumns_nocallback(
    int column, int count, const QModelIndex &parent) {
  return ::QSortFilterProxyModel::insertColumns(column, count, parent);
}
bool QSortFilterProxyModel_wrapper::insertRows(int row, int count,
                                               const QModelIndex &parent) {
  if (m_insertRowsCallback) {
    const void *thisPtr = this;
    return m_insertRowsCallback(const_cast<void *>(thisPtr), row, count,
                                parent);
  } else {
    return ::QSortFilterProxyModel::insertRows(row, count, parent);
  }
}
bool QSortFilterProxyModel_wrapper::insertRows_nocallback(
    int row, int count, const QModelIndex &parent) {
  return ::QSortFilterProxyModel::insertRows(row, count, parent);
}
void QSortFilterProxyModel_wrapper::invalidate() {
  ::QSortFilterProxyModel::invalidate();
}
void QSortFilterProxyModel_wrapper::invalidateColumnsFilter() {
  ::QSortFilterProxyModel::invalidateColumnsFilter();
}
void QSortFilterProxyModel_wrapper::invalidateFilter() {
  ::QSortFilterProxyModel::invalidateFilter();
}
void QSortFilterProxyModel_wrapper::invalidateRowsFilter() {
  ::QSortFilterProxyModel::invalidateRowsFilter();
}
bool QSortFilterProxyModel_wrapper::isRecursiveFilteringEnabled() const {
  return ::QSortFilterProxyModel::isRecursiveFilteringEnabled();
}
bool QSortFilterProxyModel_wrapper::isSortLocaleAware() const {
  return ::QSortFilterProxyModel::isSortLocaleAware();
}
bool QSortFilterProxyModel_wrapper::lessThan(
    const QModelIndex &source_left, const QModelIndex &source_right) const {
  if (m_lessThanCallback) {
    const void *thisPtr = this;
    return m_lessThanCallback(const_cast<void *>(thisPtr), source_left,
                              source_right);
  } else {
    return ::QSortFilterProxyModel::lessThan(source_left, source_right);
  }
}
bool QSortFilterProxyModel_wrapper::lessThan_nocallback(
    const QModelIndex &source_left, const QModelIndex &source_right) const {
  return ::QSortFilterProxyModel::lessThan(source_left, source_right);
}
QModelIndex QSortFilterProxyModel_wrapper::mapFromSource(
    const QModelIndex &sourceIndex) const {
  if (m_mapFromSourceCallback) {
    const void *thisPtr = this;
    return *m_mapFromSourceCallback(const_cast<void *>(thisPtr), sourceIndex);
  } else {
    return ::QSortFilterProxyModel::mapFromSource(sourceIndex);
  }
}
QModelIndex QSortFilterProxyModel_wrapper::mapFromSource_nocallback(
    const QModelIndex &sourceIndex) const {
  return ::QSortFilterProxyModel::mapFromSource(sourceIndex);
}
QItemSelection QSortFilterProxyModel_wrapper::mapSelectionFromSource(
    const QItemSelection &sourceSelection) const {
  if (m_mapSelectionFromSourceCallback) {
    const void *thisPtr = this;
    return *m_mapSelectionFromSourceCallback(const_cast<void *>(thisPtr),
                                             sourceSelection);
  } else {
    return ::QSortFilterProxyModel::mapSelectionFromSource(sourceSelection);
  }
}
QItemSelection QSortFilterProxyModel_wrapper::mapSelectionFromSource_nocallback(
    const QItemSelection &sourceSelection) const {
  return ::QSortFilterProxyModel::mapSelectionFromSource(sourceSelection);
}
QItemSelection QSortFilterProxyModel_wrapper::mapSelectionToSource(
    const QItemSelection &proxySelection) const {
  if (m_mapSelectionToSourceCallback) {
    const void *thisPtr = this;
    return *m_mapSelectionToSourceCallback(const_cast<void *>(thisPtr),
                                           proxySelection);
  } else {
    return ::QSortFilterProxyModel::mapSelectionToSource(proxySelection);
  }
}
QItemSelection QSortFilterProxyModel_wrapper::mapSelectionToSource_nocallback(
    const QItemSelection &proxySelection) const {
  return ::QSortFilterProxyModel::mapSelectionToSource(proxySelection);
}
QModelIndex QSortFilterProxyModel_wrapper::mapToSource(
    const QModelIndex &proxyIndex) const {
  if (m_mapToSourceCallback) {
    const void *thisPtr = this;
    return *m_mapToSourceCallback(const_cast<void *>(thisPtr), proxyIndex);
  } else {
    return ::QSortFilterProxyModel::mapToSource(proxyIndex);
  }
}
QModelIndex QSortFilterProxyModel_wrapper::mapToSource_nocallback(
    const QModelIndex &proxyIndex) const {
  return ::QSortFilterProxyModel::mapToSource(proxyIndex);
}
QList<QString> QSortFilterProxyModel_wrapper::mimeTypes() const {
  if (m_mimeTypesCallback) {
    const void *thisPtr = this;
    return *m_mimeTypesCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QSortFilterProxyModel::mimeTypes();
  }
}
QList<QString> QSortFilterProxyModel_wrapper::mimeTypes_nocallback() const {
  return ::QSortFilterProxyModel::mimeTypes();
}
bool QSortFilterProxyModel_wrapper::moveColumns(
    const QModelIndex &sourceParent, int sourceColumn, int count,
    const QModelIndex &destinationParent, int destinationChild) {
  if (m_moveColumnsCallback) {
    const void *thisPtr = this;
    return m_moveColumnsCallback(const_cast<void *>(thisPtr), sourceParent,
                                 sourceColumn, count, destinationParent,
                                 destinationChild);
  } else {
    return ::QSortFilterProxyModel::moveColumns(
        sourceParent, sourceColumn, count, destinationParent, destinationChild);
  }
}
bool QSortFilterProxyModel_wrapper::moveColumns_nocallback(
    const QModelIndex &sourceParent, int sourceColumn, int count,
    const QModelIndex &destinationParent, int destinationChild) {
  return ::QSortFilterProxyModel::moveColumns(
      sourceParent, sourceColumn, count, destinationParent, destinationChild);
}
bool QSortFilterProxyModel_wrapper::moveRows(
    const QModelIndex &sourceParent, int sourceRow, int count,
    const QModelIndex &destinationParent, int destinationChild) {
  if (m_moveRowsCallback) {
    const void *thisPtr = this;
    return m_moveRowsCallback(const_cast<void *>(thisPtr), sourceParent,
                              sourceRow, count, destinationParent,
                              destinationChild);
  } else {
    return ::QSortFilterProxyModel::moveRows(
        sourceParent, sourceRow, count, destinationParent, destinationChild);
  }
}
bool QSortFilterProxyModel_wrapper::moveRows_nocallback(
    const QModelIndex &sourceParent, int sourceRow, int count,
    const QModelIndex &destinationParent, int destinationChild) {
  return ::QSortFilterProxyModel::moveRows(sourceParent, sourceRow, count,
                                           destinationParent, destinationChild);
}
QModelIndex
QSortFilterProxyModel_wrapper::parent(const QModelIndex &child) const {
  if (m_parentIndexCallback) {
    const void *thisPtr = this;
    return *m_parentIndexCallback(const_cast<void *>(thisPtr), child);
  } else {
    return ::QSortFilterProxyModel::parent(child);
  }
}
QModelIndex QSortFilterProxyModel_wrapper::parent_nocallback(
    const QModelIndex &child) const {
  return ::QSortFilterProxyModel::parent(child);
}
void QSortFilterProxyModel_wrapper::recursiveFilteringEnabledChanged(
    bool recursiveFilteringEnabled) {
  ::QSortFilterProxyModel::recursiveFilteringEnabledChanged(
      recursiveFilteringEnabled);
}
bool QSortFilterProxyModel_wrapper::removeColumns(int column, int count,
                                                  const QModelIndex &parent) {
  if (m_removeColumnsCallback) {
    const void *thisPtr = this;
    return m_removeColumnsCallback(const_cast<void *>(thisPtr), column, count,
                                   parent);
  } else {
    return ::QSortFilterProxyModel::removeColumns(column, count, parent);
  }
}
bool QSortFilterProxyModel_wrapper::removeColumns_nocallback(
    int column, int count, const QModelIndex &parent) {
  return ::QSortFilterProxyModel::removeColumns(column, count, parent);
}
bool QSortFilterProxyModel_wrapper::removeRows(int row, int count,
                                               const QModelIndex &parent) {
  if (m_removeRowsCallback) {
    const void *thisPtr = this;
    return m_removeRowsCallback(const_cast<void *>(thisPtr), row, count,
                                parent);
  } else {
    return ::QSortFilterProxyModel::removeRows(row, count, parent);
  }
}
bool QSortFilterProxyModel_wrapper::removeRows_nocallback(
    int row, int count, const QModelIndex &parent) {
  return ::QSortFilterProxyModel::removeRows(row, count, parent);
}
void QSortFilterProxyModel_wrapper::resetInternalData() {
  if (m_resetInternalDataCallback) {
    const void *thisPtr = this;
    m_resetInternalDataCallback(const_cast<void *>(thisPtr));
  } else {
    ::QSortFilterProxyModel::resetInternalData();
  }
}
void QSortFilterProxyModel_wrapper::resetInternalData_nocallback() {
  ::QSortFilterProxyModel::resetInternalData();
}
void QSortFilterProxyModel_wrapper::revert() {
  if (m_revertCallback) {
    const void *thisPtr = this;
    m_revertCallback(const_cast<void *>(thisPtr));
  } else {
    ::QSortFilterProxyModel::revert();
  }
}
void QSortFilterProxyModel_wrapper::revert_nocallback() {
  ::QSortFilterProxyModel::revert();
}
int QSortFilterProxyModel_wrapper::rowCount(const QModelIndex &parent) const {
  if (m_rowCountCallback) {
    const void *thisPtr = this;
    return m_rowCountCallback(const_cast<void *>(thisPtr), parent);
  } else {
    return ::QSortFilterProxyModel::rowCount(parent);
  }
}
int QSortFilterProxyModel_wrapper::rowCount_nocallback(
    const QModelIndex &parent) const {
  return ::QSortFilterProxyModel::rowCount(parent);
}
void QSortFilterProxyModel_wrapper::setAutoAcceptChildRows(bool accept) {
  ::QSortFilterProxyModel::setAutoAcceptChildRows(accept);
}
bool QSortFilterProxyModel_wrapper::setData(const QModelIndex &index,
                                            const QVariant &value, int role) {
  if (m_setDataCallback) {
    const void *thisPtr = this;
    return m_setDataCallback(const_cast<void *>(thisPtr), index, value, role);
  } else {
    return ::QSortFilterProxyModel::setData(index, value, role);
  }
}
bool QSortFilterProxyModel_wrapper::setData_nocallback(const QModelIndex &index,
                                                       const QVariant &value,
                                                       int role) {
  return ::QSortFilterProxyModel::setData(index, value, role);
}
void QSortFilterProxyModel_wrapper::setDynamicSortFilter(bool enable) {
  ::QSortFilterProxyModel::setDynamicSortFilter(enable);
}
void QSortFilterProxyModel_wrapper::setFilterFixedString(
    const QString &pattern) {
  ::QSortFilterProxyModel::setFilterFixedString(pattern);
}
void QSortFilterProxyModel_wrapper::setFilterKeyColumn(int column) {
  ::QSortFilterProxyModel::setFilterKeyColumn(column);
}
void QSortFilterProxyModel_wrapper::setFilterRegularExpression(
    const QString &pattern) {
  ::QSortFilterProxyModel::setFilterRegularExpression(pattern);
}
void QSortFilterProxyModel_wrapper::setFilterRole(int role) {
  ::QSortFilterProxyModel::setFilterRole(role);
}
void QSortFilterProxyModel_wrapper::setFilterWildcard(const QString &pattern) {
  ::QSortFilterProxyModel::setFilterWildcard(pattern);
}
bool QSortFilterProxyModel_wrapper::setHeaderData(int section,
                                                  Qt::Orientation orientation,
                                                  const QVariant &value,
                                                  int role) {
  if (m_setHeaderDataCallback) {
    const void *thisPtr = this;
    return m_setHeaderDataCallback(const_cast<void *>(thisPtr), section,
                                   orientation, value, role);
  } else {
    return ::QSortFilterProxyModel::setHeaderData(section, orientation, value,
                                                  role);
  }
}
bool QSortFilterProxyModel_wrapper::setHeaderData_nocallback(
    int section, Qt::Orientation orientation, const QVariant &value, int role) {
  return ::QSortFilterProxyModel::setHeaderData(section, orientation, value,
                                                role);
}
void QSortFilterProxyModel_wrapper::setRecursiveFilteringEnabled(
    bool recursive) {
  ::QSortFilterProxyModel::setRecursiveFilteringEnabled(recursive);
}
void QSortFilterProxyModel_wrapper::setSortLocaleAware(bool on) {
  ::QSortFilterProxyModel::setSortLocaleAware(on);
}
void QSortFilterProxyModel_wrapper::setSortRole(int role) {
  ::QSortFilterProxyModel::setSortRole(role);
}
void QSortFilterProxyModel_wrapper::setSourceModel(
    QAbstractItemModel *sourceModel) {
  if (m_setSourceModelCallback) {
    const void *thisPtr = this;
    m_setSourceModelCallback(const_cast<void *>(thisPtr), sourceModel);
  } else {
    ::QSortFilterProxyModel::setSourceModel(sourceModel);
  }
}
void QSortFilterProxyModel_wrapper::setSourceModel_nocallback(
    QAbstractItemModel *sourceModel) {
  ::QSortFilterProxyModel::setSourceModel(sourceModel);
}
QModelIndex
QSortFilterProxyModel_wrapper::sibling(int row, int column,
                                       const QModelIndex &idx) const {
  if (m_siblingCallback) {
    const void *thisPtr = this;
    return *m_siblingCallback(const_cast<void *>(thisPtr), row, column, idx);
  } else {
    return ::QSortFilterProxyModel::sibling(row, column, idx);
  }
}
QModelIndex QSortFilterProxyModel_wrapper::sibling_nocallback(
    int row, int column, const QModelIndex &idx) const {
  return ::QSortFilterProxyModel::sibling(row, column, idx);
}
void QSortFilterProxyModel_wrapper::sort(int column, Qt::SortOrder order) {
  if (m_sortCallback) {
    const void *thisPtr = this;
    m_sortCallback(const_cast<void *>(thisPtr), column, order);
  } else {
    ::QSortFilterProxyModel::sort(column, order);
  }
}
void QSortFilterProxyModel_wrapper::sort_nocallback(int column,
                                                    Qt::SortOrder order) {
  ::QSortFilterProxyModel::sort(column, order);
}
int QSortFilterProxyModel_wrapper::sortColumn() const {
  return ::QSortFilterProxyModel::sortColumn();
}
void QSortFilterProxyModel_wrapper::sortLocaleAwareChanged(
    bool sortLocaleAware) {
  ::QSortFilterProxyModel::sortLocaleAwareChanged(sortLocaleAware);
}
Qt::SortOrder QSortFilterProxyModel_wrapper::sortOrder() const {
  return ::QSortFilterProxyModel::sortOrder();
}
int QSortFilterProxyModel_wrapper::sortRole() const {
  return ::QSortFilterProxyModel::sortRole();
}
void QSortFilterProxyModel_wrapper::sortRoleChanged(int sortRole) {
  ::QSortFilterProxyModel::sortRoleChanged(sortRole);
}
QSize QSortFilterProxyModel_wrapper::span(const QModelIndex &index) const {
  if (m_spanCallback) {
    const void *thisPtr = this;
    return *m_spanCallback(const_cast<void *>(thisPtr), index);
  } else {
    return ::QSortFilterProxyModel::span(index);
  }
}
QSize QSortFilterProxyModel_wrapper::span_nocallback(
    const QModelIndex &index) const {
  return ::QSortFilterProxyModel::span(index);
}
bool QSortFilterProxyModel_wrapper::submit() {
  if (m_submitCallback) {
    const void *thisPtr = this;
    return m_submitCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QSortFilterProxyModel::submit();
  }
}
bool QSortFilterProxyModel_wrapper::submit_nocallback() {
  return ::QSortFilterProxyModel::submit();
}
QString QSortFilterProxyModel_wrapper::tr(const char *s, const char *c, int n) {
  return ::QSortFilterProxyModel::tr(s, c, n);
}
QSortFilterProxyModel_wrapper::~QSortFilterProxyModel_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QSortFilterProxyModel *fromPtr(void *ptr) {
  return reinterpret_cast<QSortFilterProxyModel *>(ptr);
}
static QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<
      QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(ptr);
}
extern "C" {
void c_QSortFilterProxyModel_Finalizer(void *cppObj) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(cppObj);
}
void *c_QSortFilterProxyModel__constructor_QObject(void *parent_) {
  auto parent = reinterpret_cast<QObject *>(parent_);
  auto ptr =
      new QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
// autoAcceptChildRows() const
bool c_QSortFilterProxyModel__autoAcceptChildRows(void *thisObj) {
  const auto &result = fromPtr(thisObj)->autoAcceptChildRows();
  return result;
}
// autoAcceptChildRowsChanged(bool autoAcceptChildRows)
void c_QSortFilterProxyModel__autoAcceptChildRowsChanged_bool(
    void *thisObj, bool autoAcceptChildRows) {
  fromPtr(thisObj)->autoAcceptChildRowsChanged(autoAcceptChildRows);
}
void c_QSortFilterProxyModel__onAutoAcceptChildRowsChanged_bool(
    void *thisObj, void *contextQObject, void *callback) {
  auto instance = reinterpret_cast<QSortFilterProxyModel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QSortFilterProxyModel::autoAcceptChildRowsChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// buddy(const QModelIndex & index) const
void *c_QSortFilterProxyModel__buddy_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr = dynamic_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->buddy_nocallback(index);
    } else {
      return targetPtr->buddy(index);
    }
  }()};
  return result;
}
// canFetchMore(const QModelIndex & parent) const
bool c_QSortFilterProxyModel__canFetchMore_QModelIndex(void *thisObj,
                                                       void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr = dynamic_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->canFetchMore_nocallback(parent);
    } else {
      return targetPtr->canFetchMore(parent);
    }
  }();
  return result;
}
// clearItemData(const QModelIndex & index)
bool c_QSortFilterProxyModel__clearItemData_QModelIndex(void *thisObj,
                                                        void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr = dynamic_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->clearItemData_nocallback(index);
    } else {
      return targetPtr->clearItemData(index);
    }
  }();
  return result;
}
// columnCount(const QModelIndex & parent) const
int c_QSortFilterProxyModel__columnCount_QModelIndex(void *thisObj,
                                                     void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr = dynamic_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->columnCount_nocallback(parent);
    } else {
      return targetPtr->columnCount(parent);
    }
  }();
  return result;
}
// customEvent(QEvent * event)
void c_QSortFilterProxyModel__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// data(const QModelIndex & index, int role) const
void *c_QSortFilterProxyModel__data_QModelIndex_int(void *thisObj, void *index_,
                                                    int role) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = new Dartagnan::ValueWrapper<QVariant>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr = dynamic_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->data_nocallback(index, role);
    } else {
      return targetPtr->data(index, role);
    }
  }()};
  return result;
}
// dynamicSortFilter() const
bool c_QSortFilterProxyModel__dynamicSortFilter(void *thisObj) {
  const auto &result = fromPtr(thisObj)->dynamicSortFilter();
  return result;
}
// dynamicSortFilterChanged(bool dynamicSortFilter)
void c_QSortFilterProxyModel__dynamicSortFilterChanged_bool(
    void *thisObj, bool dynamicSortFilter) {
  fromPtr(thisObj)->dynamicSortFilterChanged(dynamicSortFilter);
}
void c_QSortFilterProxyModel__onDynamicSortFilterChanged_bool(
    void *thisObj, void *contextQObject, void *callback) {
  auto instance = reinterpret_cast<QSortFilterProxyModel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QSortFilterProxyModel::dynamicSortFilterChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// event(QEvent * event)
bool c_QSortFilterProxyModel__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr = dynamic_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->event_nocallback(event);
    } else {
      return targetPtr->event(event);
    }
  }();
  return result;
}
// eventFilter(QObject * watched, QEvent * event)
bool c_QSortFilterProxyModel__eventFilter_QObject_QEvent(void *thisObj,
                                                         void *watched_,
                                                         void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr = dynamic_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->eventFilter_nocallback(watched, event);
    } else {
      return targetPtr->eventFilter(watched, event);
    }
  }();
  return result;
}
// fetchMore(const QModelIndex & parent)
void c_QSortFilterProxyModel__fetchMore_QModelIndex(void *thisObj,
                                                    void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr = dynamic_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->fetchMore_nocallback(parent);
    } else {
      return targetPtr->fetchMore(parent);
    }
  }();
}
// filterAcceptsColumn(int source_column, const QModelIndex & source_parent)
// const
bool c_QSortFilterProxyModel__filterAcceptsColumn_int_QModelIndex(
    void *thisObj, int source_column, void *source_parent_) {
  assert(source_parent_);
  auto &source_parent = *reinterpret_cast<QModelIndex *>(source_parent_);
  const auto &result = fromWrapperPtr(thisObj)->filterAcceptsColumn_nocallback(
      source_column, source_parent);
  return result;
}
// filterAcceptsRow(int source_row, const QModelIndex & source_parent) const
bool c_QSortFilterProxyModel__filterAcceptsRow_int_QModelIndex(
    void *thisObj, int source_row, void *source_parent_) {
  assert(source_parent_);
  auto &source_parent = *reinterpret_cast<QModelIndex *>(source_parent_);
  const auto &result = fromWrapperPtr(thisObj)->filterAcceptsRow_nocallback(
      source_row, source_parent);
  return result;
}
// filterKeyColumn() const
int c_QSortFilterProxyModel__filterKeyColumn(void *thisObj) {
  const auto &result = fromPtr(thisObj)->filterKeyColumn();
  return result;
}
// filterRole() const
int c_QSortFilterProxyModel__filterRole(void *thisObj) {
  const auto &result = fromPtr(thisObj)->filterRole();
  return result;
}
// filterRoleChanged(int filterRole)
void c_QSortFilterProxyModel__filterRoleChanged_int(void *thisObj,
                                                    int filterRole) {
  fromPtr(thisObj)->filterRoleChanged(filterRole);
}
void c_QSortFilterProxyModel__onFilterRoleChanged_int(void *thisObj,
                                                      void *contextQObject,
                                                      void *callback) {
  auto instance = reinterpret_cast<QSortFilterProxyModel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QSortFilterProxyModel::filterRoleChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// hasChildren(const QModelIndex & parent) const
bool c_QSortFilterProxyModel__hasChildren_QModelIndex(void *thisObj,
                                                      void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr = dynamic_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->hasChildren_nocallback(parent);
    } else {
      return targetPtr->hasChildren(parent);
    }
  }();
  return result;
}
// headerData(int section, Qt::Orientation orientation, int role) const
void *c_QSortFilterProxyModel__headerData_int_Orientation_int(void *thisObj,
                                                              int section,
                                                              int orientation,
                                                              int role) {
  const auto &result = new Dartagnan::ValueWrapper<QVariant>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr = dynamic_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(targetPtr);
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
// index(int row, int column, const QModelIndex & parent) const
void *c_QSortFilterProxyModel__index_int_int_QModelIndex(void *thisObj, int row,
                                                         int column,
                                                         void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr = dynamic_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->index_nocallback(row, column, parent);
    } else {
      return targetPtr->index(row, column, parent);
    }
  }()};
  return result;
}
// insertColumns(int column, int count, const QModelIndex & parent)
bool c_QSortFilterProxyModel__insertColumns_int_int_QModelIndex(void *thisObj,
                                                                int column,
                                                                int count,
                                                                void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr = dynamic_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->insertColumns_nocallback(column, count, parent);
    } else {
      return targetPtr->insertColumns(column, count, parent);
    }
  }();
  return result;
}
// insertRows(int row, int count, const QModelIndex & parent)
bool c_QSortFilterProxyModel__insertRows_int_int_QModelIndex(void *thisObj,
                                                             int row, int count,
                                                             void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr = dynamic_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->insertRows_nocallback(row, count, parent);
    } else {
      return targetPtr->insertRows(row, count, parent);
    }
  }();
  return result;
}
// invalidate()
void c_QSortFilterProxyModel__invalidate(void *thisObj) {
  fromPtr(thisObj)->invalidate();
}
// invalidateColumnsFilter()
void c_QSortFilterProxyModel__invalidateColumnsFilter(void *thisObj) {
  fromWrapperPtr(thisObj)->invalidateColumnsFilter();
}
// invalidateFilter()
void c_QSortFilterProxyModel__invalidateFilter(void *thisObj) {
  fromWrapperPtr(thisObj)->invalidateFilter();
}
// invalidateRowsFilter()
void c_QSortFilterProxyModel__invalidateRowsFilter(void *thisObj) {
  fromWrapperPtr(thisObj)->invalidateRowsFilter();
}
// isRecursiveFilteringEnabled() const
bool c_QSortFilterProxyModel__isRecursiveFilteringEnabled(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isRecursiveFilteringEnabled();
  return result;
}
// isSortLocaleAware() const
bool c_QSortFilterProxyModel__isSortLocaleAware(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isSortLocaleAware();
  return result;
}
// lessThan(const QModelIndex & source_left, const QModelIndex & source_right)
// const
bool c_QSortFilterProxyModel__lessThan_QModelIndex_QModelIndex(
    void *thisObj, void *source_left_, void *source_right_) {
  assert(source_left_);
  auto &source_left = *reinterpret_cast<QModelIndex *>(source_left_);
  assert(source_right_);
  auto &source_right = *reinterpret_cast<QModelIndex *>(source_right_);
  const auto &result =
      fromWrapperPtr(thisObj)->lessThan_nocallback(source_left, source_right);
  return result;
}
// mapFromSource(const QModelIndex & sourceIndex) const
void *c_QSortFilterProxyModel__mapFromSource_QModelIndex(void *thisObj,
                                                         void *sourceIndex_) {
  assert(sourceIndex_);
  auto &sourceIndex = *reinterpret_cast<QModelIndex *>(sourceIndex_);
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr = dynamic_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->mapFromSource_nocallback(sourceIndex);
    } else {
      return targetPtr->mapFromSource(sourceIndex);
    }
  }()};
  return result;
}
// mapSelectionFromSource(const QItemSelection & sourceSelection) const
void *c_QSortFilterProxyModel__mapSelectionFromSource_QItemSelection(
    void *thisObj, void *sourceSelection_) {
  assert(sourceSelection_);
  auto &sourceSelection = *reinterpret_cast<QItemSelection *>(sourceSelection_);
  const auto &result = new Dartagnan::ValueWrapper<QItemSelection>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr = dynamic_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->mapSelectionFromSource_nocallback(sourceSelection);
    } else {
      return targetPtr->mapSelectionFromSource(sourceSelection);
    }
  }()};
  return result;
}
// mapSelectionToSource(const QItemSelection & proxySelection) const
void *c_QSortFilterProxyModel__mapSelectionToSource_QItemSelection(
    void *thisObj, void *proxySelection_) {
  assert(proxySelection_);
  auto &proxySelection = *reinterpret_cast<QItemSelection *>(proxySelection_);
  const auto &result = new Dartagnan::ValueWrapper<QItemSelection>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr = dynamic_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->mapSelectionToSource_nocallback(proxySelection);
    } else {
      return targetPtr->mapSelectionToSource(proxySelection);
    }
  }()};
  return result;
}
// mapToSource(const QModelIndex & proxyIndex) const
void *c_QSortFilterProxyModel__mapToSource_QModelIndex(void *thisObj,
                                                       void *proxyIndex_) {
  assert(proxyIndex_);
  auto &proxyIndex = *reinterpret_cast<QModelIndex *>(proxyIndex_);
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr = dynamic_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->mapToSource_nocallback(proxyIndex);
    } else {
      return targetPtr->mapToSource(proxyIndex);
    }
  }()};
  return result;
}
// mimeTypes() const
void *c_QSortFilterProxyModel__mimeTypes(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QString>>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr = dynamic_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(targetPtr);
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
bool c_QSortFilterProxyModel__moveColumns_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceColumn, int count,
    void *destinationParent_, int destinationChild) {
  assert(sourceParent_);
  auto &sourceParent = *reinterpret_cast<QModelIndex *>(sourceParent_);
  assert(destinationParent_);
  auto &destinationParent =
      *reinterpret_cast<QModelIndex *>(destinationParent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr = dynamic_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(targetPtr);
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
bool c_QSortFilterProxyModel__moveRows_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceRow, int count,
    void *destinationParent_, int destinationChild) {
  assert(sourceParent_);
  auto &sourceParent = *reinterpret_cast<QModelIndex *>(sourceParent_);
  assert(destinationParent_);
  auto &destinationParent =
      *reinterpret_cast<QModelIndex *>(destinationParent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr = dynamic_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(targetPtr);
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
void *c_QSortFilterProxyModel__parentIndex_QModelIndex(void *thisObj,
                                                       void *child_) {
  assert(child_);
  auto &child = *reinterpret_cast<QModelIndex *>(child_);
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr = dynamic_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->parent_nocallback(child);
    } else {
      return targetPtr->parent(child);
    }
  }()};
  return result;
}
// recursiveFilteringEnabledChanged(bool recursiveFilteringEnabled)
void c_QSortFilterProxyModel__recursiveFilteringEnabledChanged_bool(
    void *thisObj, bool recursiveFilteringEnabled) {
  fromPtr(thisObj)->recursiveFilteringEnabledChanged(recursiveFilteringEnabled);
}
void c_QSortFilterProxyModel__onRecursiveFilteringEnabledChanged_bool(
    void *thisObj, void *contextQObject, void *callback) {
  auto instance = reinterpret_cast<QSortFilterProxyModel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(
      instance, &QSortFilterProxyModel::recursiveFilteringEnabledChanged,
      context ? context : instance, [thisObj, callback] {
        typedef void (*SignalHandler_callback)(void *);
        auto dartCallback = reinterpret_cast<SignalHandler_callback>(callback);
        dartCallback(thisObj);
      });
}
// removeColumns(int column, int count, const QModelIndex & parent)
bool c_QSortFilterProxyModel__removeColumns_int_int_QModelIndex(void *thisObj,
                                                                int column,
                                                                int count,
                                                                void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr = dynamic_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->removeColumns_nocallback(column, count, parent);
    } else {
      return targetPtr->removeColumns(column, count, parent);
    }
  }();
  return result;
}
// removeRows(int row, int count, const QModelIndex & parent)
bool c_QSortFilterProxyModel__removeRows_int_int_QModelIndex(void *thisObj,
                                                             int row, int count,
                                                             void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr = dynamic_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->removeRows_nocallback(row, count, parent);
    } else {
      return targetPtr->removeRows(row, count, parent);
    }
  }();
  return result;
}
// resetInternalData()
void c_QSortFilterProxyModel__resetInternalData(void *thisObj) {
  fromWrapperPtr(thisObj)->resetInternalData_nocallback();
}
// revert()
void c_QSortFilterProxyModel__revert(void *thisObj) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr = dynamic_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->revert_nocallback();
    } else {
      return targetPtr->revert();
    }
  }();
}
// rowCount(const QModelIndex & parent) const
int c_QSortFilterProxyModel__rowCount_QModelIndex(void *thisObj,
                                                  void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr = dynamic_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->rowCount_nocallback(parent);
    } else {
      return targetPtr->rowCount(parent);
    }
  }();
  return result;
}
// setAutoAcceptChildRows(bool accept)
void c_QSortFilterProxyModel__setAutoAcceptChildRows_bool(void *thisObj,
                                                          bool accept) {
  fromPtr(thisObj)->setAutoAcceptChildRows(accept);
}
// setData(const QModelIndex & index, const QVariant & value, int role)
bool c_QSortFilterProxyModel__setData_QModelIndex_QVariant_int(void *thisObj,
                                                               void *index_,
                                                               void *value_,
                                                               int role) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  assert(value_);
  auto &value = *reinterpret_cast<QVariant *>(value_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr = dynamic_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setData_nocallback(index, value, role);
    } else {
      return targetPtr->setData(index, value, role);
    }
  }();
  return result;
}
// setDynamicSortFilter(bool enable)
void c_QSortFilterProxyModel__setDynamicSortFilter_bool(void *thisObj,
                                                        bool enable) {
  fromPtr(thisObj)->setDynamicSortFilter(enable);
}
// setFilterFixedString(const QString & pattern)
void c_QSortFilterProxyModel__setFilterFixedString_QString(
    void *thisObj, const char *pattern_) {
  const auto pattern = QString::fromUtf8(pattern_);
  fromPtr(thisObj)->setFilterFixedString(pattern);
  free((char *)pattern_);
}
// setFilterKeyColumn(int column)
void c_QSortFilterProxyModel__setFilterKeyColumn_int(void *thisObj,
                                                     int column) {
  fromPtr(thisObj)->setFilterKeyColumn(column);
}
// setFilterRegularExpression(const QString & pattern)
void c_QSortFilterProxyModel__setFilterRegularExpression_QString(
    void *thisObj, const char *pattern_) {
  const auto pattern = QString::fromUtf8(pattern_);
  fromPtr(thisObj)->setFilterRegularExpression(pattern);
  free((char *)pattern_);
}
// setFilterRole(int role)
void c_QSortFilterProxyModel__setFilterRole_int(void *thisObj, int role) {
  fromPtr(thisObj)->setFilterRole(role);
}
// setFilterWildcard(const QString & pattern)
void c_QSortFilterProxyModel__setFilterWildcard_QString(void *thisObj,
                                                        const char *pattern_) {
  const auto pattern = QString::fromUtf8(pattern_);
  fromPtr(thisObj)->setFilterWildcard(pattern);
  free((char *)pattern_);
}
// setHeaderData(int section, Qt::Orientation orientation, const QVariant &
// value, int role)
bool c_QSortFilterProxyModel__setHeaderData_int_Orientation_QVariant_int(
    void *thisObj, int section, int orientation, void *value_, int role) {
  assert(value_);
  auto &value = *reinterpret_cast<QVariant *>(value_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr = dynamic_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(targetPtr);
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
// setRecursiveFilteringEnabled(bool recursive)
void c_QSortFilterProxyModel__setRecursiveFilteringEnabled_bool(
    void *thisObj, bool recursive) {
  fromPtr(thisObj)->setRecursiveFilteringEnabled(recursive);
}
// setSortLocaleAware(bool on)
void c_QSortFilterProxyModel__setSortLocaleAware_bool(void *thisObj, bool on) {
  fromPtr(thisObj)->setSortLocaleAware(on);
}
// setSortRole(int role)
void c_QSortFilterProxyModel__setSortRole_int(void *thisObj, int role) {
  fromPtr(thisObj)->setSortRole(role);
}
// setSourceModel(QAbstractItemModel * sourceModel)
void c_QSortFilterProxyModel__setSourceModel_QAbstractItemModel(
    void *thisObj, void *sourceModel_) {
  auto sourceModel = reinterpret_cast<QAbstractItemModel *>(sourceModel_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr = dynamic_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setSourceModel_nocallback(sourceModel);
    } else {
      return targetPtr->setSourceModel(sourceModel);
    }
  }();
}
// sibling(int row, int column, const QModelIndex & idx) const
void *c_QSortFilterProxyModel__sibling_int_int_QModelIndex(void *thisObj,
                                                           int row, int column,
                                                           void *idx_) {
  assert(idx_);
  auto &idx = *reinterpret_cast<QModelIndex *>(idx_);
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr = dynamic_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->sibling_nocallback(row, column, idx);
    } else {
      return targetPtr->sibling(row, column, idx);
    }
  }()};
  return result;
}
// sort(int column, Qt::SortOrder order)
void c_QSortFilterProxyModel__sort_int_SortOrder(void *thisObj, int column,
                                                 int order) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr = dynamic_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->sort_nocallback(column,
                                         static_cast<Qt::SortOrder>(order));
    } else {
      return targetPtr->sort(column, static_cast<Qt::SortOrder>(order));
    }
  }();
}
// sortColumn() const
int c_QSortFilterProxyModel__sortColumn(void *thisObj) {
  const auto &result = fromPtr(thisObj)->sortColumn();
  return result;
}
// sortLocaleAwareChanged(bool sortLocaleAware)
void c_QSortFilterProxyModel__sortLocaleAwareChanged_bool(
    void *thisObj, bool sortLocaleAware) {
  fromPtr(thisObj)->sortLocaleAwareChanged(sortLocaleAware);
}
void c_QSortFilterProxyModel__onSortLocaleAwareChanged_bool(
    void *thisObj, void *contextQObject, void *callback) {
  auto instance = reinterpret_cast<QSortFilterProxyModel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QSortFilterProxyModel::sortLocaleAwareChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// sortOrder() const
int c_QSortFilterProxyModel__sortOrder(void *thisObj) {
  const auto &result = int(fromPtr(thisObj)->sortOrder());
  return result;
}
// sortRole() const
int c_QSortFilterProxyModel__sortRole(void *thisObj) {
  const auto &result = fromPtr(thisObj)->sortRole();
  return result;
}
// sortRoleChanged(int sortRole)
void c_QSortFilterProxyModel__sortRoleChanged_int(void *thisObj, int sortRole) {
  fromPtr(thisObj)->sortRoleChanged(sortRole);
}
void c_QSortFilterProxyModel__onSortRoleChanged_int(void *thisObj,
                                                    void *contextQObject,
                                                    void *callback) {
  auto instance = reinterpret_cast<QSortFilterProxyModel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QSortFilterProxyModel::sortRoleChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// span(const QModelIndex & index) const
void *c_QSortFilterProxyModel__span_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr = dynamic_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->span_nocallback(index);
    } else {
      return targetPtr->span(index);
    }
  }()};
  return result;
}
// submit()
bool c_QSortFilterProxyModel__submit(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr = dynamic_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->submit_nocallback();
    } else {
      return targetPtr->submit();
    }
  }();
  return result;
}
// tr(const char * s, const char * c, int n)
void *c_static_QSortFilterProxyModel__tr_char_char_int(const char *s,
                                                       const char *c, int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
void c_QSortFilterProxyModel__destructor(void *thisObj) {
  delete fromPtr(thisObj);
}
void c_QSortFilterProxyModel__registerVirtualMethodCallback(void *ptr,
                                                            void *callback,
                                                            int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 5771:
    wrapper->m_buddyCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QSortFilterProxyModel_wrapper::Callback_buddy>(
            callback);
    break;
  case 5772:
    wrapper->m_canFetchMoreCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_canFetchMore>(callback);
    break;
  case 5777:
    wrapper->m_clearItemDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_clearItemData>(callback);
    break;
  case 5778:
    wrapper->m_columnCountCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_columnCount>(callback);
    break;
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_customEvent>(callback);
    break;
  case 5780:
    wrapper->m_dataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QSortFilterProxyModel_wrapper::Callback_data>(
            callback);
    break;
  case 956:
    wrapper->m_eventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QSortFilterProxyModel_wrapper::Callback_event>(
            callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_eventFilter>(callback);
    break;
  case 5798:
    wrapper->m_fetchMoreCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QSortFilterProxyModel_wrapper::Callback_fetchMore>(
            callback);
    break;
  case 5955:
    wrapper->m_filterAcceptsColumnCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_filterAcceptsColumn>(callback);
    break;
  case 5956:
    wrapper->m_filterAcceptsRowCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_filterAcceptsRow>(callback);
    break;
  case 5799:
    wrapper->m_hasChildrenCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_hasChildren>(callback);
    break;
  case 5801:
    wrapper->m_headerDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_headerData>(callback);
    break;
  case 5803:
    wrapper->m_indexCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QSortFilterProxyModel_wrapper::Callback_index>(
            callback);
    break;
  case 5806:
    wrapper->m_insertColumnsCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_insertColumns>(callback);
    break;
  case 5808:
    wrapper->m_insertRowsCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_insertRows>(callback);
    break;
  case 5966:
    wrapper->m_lessThanCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QSortFilterProxyModel_wrapper::Callback_lessThan>(
            callback);
    break;
  case 5937:
    wrapper->m_mapFromSourceCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_mapFromSource>(callback);
    break;
  case 5938:
    wrapper->m_mapSelectionFromSourceCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_mapSelectionFromSource>(callback);
    break;
  case 5939:
    wrapper->m_mapSelectionToSourceCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_mapSelectionToSource>(callback);
    break;
  case 5940:
    wrapper->m_mapToSourceCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_mapToSource>(callback);
    break;
  case 5816:
    wrapper->m_mimeTypesCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QSortFilterProxyModel_wrapper::Callback_mimeTypes>(
            callback);
    break;
  case 5818:
    wrapper->m_moveColumnsCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_moveColumns>(callback);
    break;
  case 5820:
    wrapper->m_moveRowsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QSortFilterProxyModel_wrapper::Callback_moveRows>(
            callback);
    break;
  case 5822:
    wrapper->m_parentIndexCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_parentIndex>(callback);
    break;
  case 5827:
    wrapper->m_removeColumnsCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_removeColumns>(callback);
    break;
  case 5830:
    wrapper->m_removeRowsCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_removeRows>(callback);
    break;
  case 5831:
    wrapper->m_resetInternalDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_resetInternalData>(callback);
    break;
  case 5832:
    wrapper->m_revertCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QSortFilterProxyModel_wrapper::Callback_revert>(
            callback);
    break;
  case 5833:
    wrapper->m_rowCountCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QSortFilterProxyModel_wrapper::Callback_rowCount>(
            callback);
    break;
  case 5836:
    wrapper->m_setDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QSortFilterProxyModel_wrapper::Callback_setData>(
            callback);
    break;
  case 5837:
    wrapper->m_setHeaderDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_setHeaderData>(callback);
    break;
  case 5946:
    wrapper->m_setSourceModelCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_setSourceModel>(callback);
    break;
  case 5840:
    wrapper->m_siblingCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QSortFilterProxyModel_wrapper::Callback_sibling>(
            callback);
    break;
  case 5842:
    wrapper->m_sortCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QSortFilterProxyModel_wrapper::Callback_sort>(
            callback);
    break;
  case 5843:
    wrapper->m_spanCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QSortFilterProxyModel_wrapper::Callback_span>(
            callback);
    break;
  case 5845:
    wrapper->m_submitCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QSortFilterProxyModel_wrapper::Callback_submit>(
            callback);
    break;
  }
}
}
