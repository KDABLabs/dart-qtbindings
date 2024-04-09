#include "QSortFilterProxyModel_wrapper.h"

#include <QDebug>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
// tag=1006
QSortFilterProxyModel_wrapper::QSortFilterProxyModel_wrapper(QObject *parent)
    : ::QSortFilterProxyModel(parent) {}
bool QSortFilterProxyModel_wrapper::autoAcceptChildRows() const {
  // tag=1000

  // tag=1004
  return ::QSortFilterProxyModel::autoAcceptChildRows();
}
void QSortFilterProxyModel_wrapper::autoAcceptChildRowsChanged(
    bool autoAcceptChildRows) {
  // tag=1000

  // tag=1004
  ::QSortFilterProxyModel::autoAcceptChildRowsChanged(autoAcceptChildRows);
}
QModelIndex
QSortFilterProxyModel_wrapper::buddy(const QModelIndex &index) const {
  // tag=1000
  if (m_buddyCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_buddyCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1002
    return ::QSortFilterProxyModel::buddy(index);
  }
}
// tag=1009
QModelIndex QSortFilterProxyModel_wrapper::buddy_nocallback(
    const QModelIndex &index) const {
  // tag=1003
  return ::QSortFilterProxyModel::buddy(index);
}
bool QSortFilterProxyModel_wrapper::canFetchMore(
    const QModelIndex &parent) const {
  // tag=1000
  if (m_canFetchMoreCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_canFetchMoreCallback(const_cast<void *>(thisPtr), parent);
  } else {
    // tag=1002
    return ::QSortFilterProxyModel::canFetchMore(parent);
  }
}
// tag=1009
bool QSortFilterProxyModel_wrapper::canFetchMore_nocallback(
    const QModelIndex &parent) const {
  // tag=1003
  return ::QSortFilterProxyModel::canFetchMore(parent);
}
bool QSortFilterProxyModel_wrapper::clearItemData(const QModelIndex &index) {
  // tag=1000
  if (m_clearItemDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_clearItemDataCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1002
    return ::QSortFilterProxyModel::clearItemData(index);
  }
}
// tag=1009
bool QSortFilterProxyModel_wrapper::clearItemData_nocallback(
    const QModelIndex &index) {
  // tag=1003
  return ::QSortFilterProxyModel::clearItemData(index);
}
int QSortFilterProxyModel_wrapper::columnCount(
    const QModelIndex &parent) const {
  // tag=1000
  if (m_columnCountCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_columnCountCallback(const_cast<void *>(thisPtr), parent);
  } else {
    // tag=1002
    return ::QSortFilterProxyModel::columnCount(parent);
  }
}
// tag=1009
int QSortFilterProxyModel_wrapper::columnCount_nocallback(
    const QModelIndex &parent) const {
  // tag=1003
  return ::QSortFilterProxyModel::columnCount(parent);
}
void QSortFilterProxyModel_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QSortFilterProxyModel::customEvent(event);
  }
}
// tag=1009
void QSortFilterProxyModel_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QSortFilterProxyModel::customEvent(event);
}
QVariant QSortFilterProxyModel_wrapper::data(const QModelIndex &index,
                                             int role) const {
  // tag=1000
  if (m_dataCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_dataCallback(const_cast<void *>(thisPtr), index, role);
  } else {
    // tag=1002
    return ::QSortFilterProxyModel::data(index, role);
  }
}
// tag=1009
QVariant
QSortFilterProxyModel_wrapper::data_nocallback(const QModelIndex &index,
                                               int role) const {
  // tag=1003
  return ::QSortFilterProxyModel::data(index, role);
}
bool QSortFilterProxyModel_wrapper::dynamicSortFilter() const {
  // tag=1000

  // tag=1004
  return ::QSortFilterProxyModel::dynamicSortFilter();
}
void QSortFilterProxyModel_wrapper::dynamicSortFilterChanged(
    bool dynamicSortFilter) {
  // tag=1000

  // tag=1004
  ::QSortFilterProxyModel::dynamicSortFilterChanged(dynamicSortFilter);
}
bool QSortFilterProxyModel_wrapper::event(QEvent *event) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    return ::QSortFilterProxyModel::event(event);
  }
}
// tag=1009
bool QSortFilterProxyModel_wrapper::event_nocallback(QEvent *event) {
  // tag=1003
  return ::QSortFilterProxyModel::event(event);
}
bool QSortFilterProxyModel_wrapper::eventFilter(QObject *watched,
                                                QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    // tag=1002
    return ::QSortFilterProxyModel::eventFilter(watched, event);
  }
}
// tag=1009
bool QSortFilterProxyModel_wrapper::eventFilter_nocallback(QObject *watched,
                                                           QEvent *event) {
  // tag=1003
  return ::QSortFilterProxyModel::eventFilter(watched, event);
}
void QSortFilterProxyModel_wrapper::fetchMore(const QModelIndex &parent) {
  // tag=1000
  if (m_fetchMoreCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_fetchMoreCallback(const_cast<void *>(thisPtr), parent);
  } else {
    // tag=1002
    ::QSortFilterProxyModel::fetchMore(parent);
  }
}
// tag=1009
void QSortFilterProxyModel_wrapper::fetchMore_nocallback(
    const QModelIndex &parent) {
  // tag=1003
  ::QSortFilterProxyModel::fetchMore(parent);
}
bool QSortFilterProxyModel_wrapper::filterAcceptsColumn(
    int source_column, const QModelIndex &source_parent) const {
  // tag=1000
  if (m_filterAcceptsColumnCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_filterAcceptsColumnCallback(const_cast<void *>(thisPtr),
                                         source_column, source_parent);
  } else {
    // tag=1002
    return ::QSortFilterProxyModel::filterAcceptsColumn(source_column,
                                                        source_parent);
  }
}
// tag=1009
bool QSortFilterProxyModel_wrapper::filterAcceptsColumn_nocallback(
    int source_column, const QModelIndex &source_parent) const {
  // tag=1003
  return ::QSortFilterProxyModel::filterAcceptsColumn(source_column,
                                                      source_parent);
}
bool QSortFilterProxyModel_wrapper::filterAcceptsRow(
    int source_row, const QModelIndex &source_parent) const {
  // tag=1000
  if (m_filterAcceptsRowCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_filterAcceptsRowCallback(const_cast<void *>(thisPtr), source_row,
                                      source_parent);
  } else {
    // tag=1002
    return ::QSortFilterProxyModel::filterAcceptsRow(source_row, source_parent);
  }
}
// tag=1009
bool QSortFilterProxyModel_wrapper::filterAcceptsRow_nocallback(
    int source_row, const QModelIndex &source_parent) const {
  // tag=1003
  return ::QSortFilterProxyModel::filterAcceptsRow(source_row, source_parent);
}
int QSortFilterProxyModel_wrapper::filterKeyColumn() const {
  // tag=1000

  // tag=1004
  return ::QSortFilterProxyModel::filterKeyColumn();
}
int QSortFilterProxyModel_wrapper::filterRole() const {
  // tag=1000

  // tag=1004
  return ::QSortFilterProxyModel::filterRole();
}
void QSortFilterProxyModel_wrapper::filterRoleChanged(int filterRole) {
  // tag=1000

  // tag=1004
  ::QSortFilterProxyModel::filterRoleChanged(filterRole);
}
bool QSortFilterProxyModel_wrapper::hasChildren(
    const QModelIndex &parent) const {
  // tag=1000
  if (m_hasChildrenCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hasChildrenCallback(const_cast<void *>(thisPtr), parent);
  } else {
    // tag=1002
    return ::QSortFilterProxyModel::hasChildren(parent);
  }
}
// tag=1009
bool QSortFilterProxyModel_wrapper::hasChildren_nocallback(
    const QModelIndex &parent) const {
  // tag=1003
  return ::QSortFilterProxyModel::hasChildren(parent);
}
QVariant QSortFilterProxyModel_wrapper::headerData(int section,
                                                   Qt::Orientation orientation,
                                                   int role) const {
  // tag=1000
  if (m_headerDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_headerDataCallback(const_cast<void *>(thisPtr), section,
                                 orientation, role);
  } else {
    // tag=1002
    return ::QSortFilterProxyModel::headerData(section, orientation, role);
  }
}
// tag=1009
QVariant QSortFilterProxyModel_wrapper::headerData_nocallback(
    int section, Qt::Orientation orientation, int role) const {
  // tag=1003
  return ::QSortFilterProxyModel::headerData(section, orientation, role);
}
QModelIndex
QSortFilterProxyModel_wrapper::index(int row, int column,
                                     const QModelIndex &parent) const {
  // tag=1000
  if (m_indexCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_indexCallback(const_cast<void *>(thisPtr), row, column, parent);
  } else {
    // tag=1002
    return ::QSortFilterProxyModel::index(row, column, parent);
  }
}
// tag=1009
QModelIndex QSortFilterProxyModel_wrapper::index_nocallback(
    int row, int column, const QModelIndex &parent) const {
  // tag=1003
  return ::QSortFilterProxyModel::index(row, column, parent);
}
bool QSortFilterProxyModel_wrapper::insertColumns(int column, int count,
                                                  const QModelIndex &parent) {
  // tag=1000
  if (m_insertColumnsCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_insertColumnsCallback(const_cast<void *>(thisPtr), column, count,
                                   parent);
  } else {
    // tag=1002
    return ::QSortFilterProxyModel::insertColumns(column, count, parent);
  }
}
// tag=1009
bool QSortFilterProxyModel_wrapper::insertColumns_nocallback(
    int column, int count, const QModelIndex &parent) {
  // tag=1003
  return ::QSortFilterProxyModel::insertColumns(column, count, parent);
}
bool QSortFilterProxyModel_wrapper::insertRows(int row, int count,
                                               const QModelIndex &parent) {
  // tag=1000
  if (m_insertRowsCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_insertRowsCallback(const_cast<void *>(thisPtr), row, count,
                                parent);
  } else {
    // tag=1002
    return ::QSortFilterProxyModel::insertRows(row, count, parent);
  }
}
// tag=1009
bool QSortFilterProxyModel_wrapper::insertRows_nocallback(
    int row, int count, const QModelIndex &parent) {
  // tag=1003
  return ::QSortFilterProxyModel::insertRows(row, count, parent);
}
void QSortFilterProxyModel_wrapper::invalidate() {
  // tag=1000

  // tag=1004
  ::QSortFilterProxyModel::invalidate();
}
void QSortFilterProxyModel_wrapper::invalidateColumnsFilter() {
  // tag=1000

  // tag=1004
  ::QSortFilterProxyModel::invalidateColumnsFilter();
}
void QSortFilterProxyModel_wrapper::invalidateFilter() {
  // tag=1000

  // tag=1004
  ::QSortFilterProxyModel::invalidateFilter();
}
void QSortFilterProxyModel_wrapper::invalidateRowsFilter() {
  // tag=1000

  // tag=1004
  ::QSortFilterProxyModel::invalidateRowsFilter();
}
bool QSortFilterProxyModel_wrapper::isRecursiveFilteringEnabled() const {
  // tag=1000

  // tag=1004
  return ::QSortFilterProxyModel::isRecursiveFilteringEnabled();
}
bool QSortFilterProxyModel_wrapper::isSortLocaleAware() const {
  // tag=1000

  // tag=1004
  return ::QSortFilterProxyModel::isSortLocaleAware();
}
bool QSortFilterProxyModel_wrapper::lessThan(
    const QModelIndex &source_left, const QModelIndex &source_right) const {
  // tag=1000
  if (m_lessThanCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_lessThanCallback(const_cast<void *>(thisPtr), source_left,
                              source_right);
  } else {
    // tag=1002
    return ::QSortFilterProxyModel::lessThan(source_left, source_right);
  }
}
// tag=1009
bool QSortFilterProxyModel_wrapper::lessThan_nocallback(
    const QModelIndex &source_left, const QModelIndex &source_right) const {
  // tag=1003
  return ::QSortFilterProxyModel::lessThan(source_left, source_right);
}
QModelIndex QSortFilterProxyModel_wrapper::mapFromSource(
    const QModelIndex &sourceIndex) const {
  // tag=1000
  if (m_mapFromSourceCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_mapFromSourceCallback(const_cast<void *>(thisPtr), sourceIndex);
  } else {
    // tag=1002
    return ::QSortFilterProxyModel::mapFromSource(sourceIndex);
  }
}
// tag=1009
QModelIndex QSortFilterProxyModel_wrapper::mapFromSource_nocallback(
    const QModelIndex &sourceIndex) const {
  // tag=1003
  return ::QSortFilterProxyModel::mapFromSource(sourceIndex);
}
QItemSelection QSortFilterProxyModel_wrapper::mapSelectionFromSource(
    const QItemSelection &sourceSelection) const {
  // tag=1000
  if (m_mapSelectionFromSourceCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_mapSelectionFromSourceCallback(const_cast<void *>(thisPtr),
                                             sourceSelection);
  } else {
    // tag=1002
    return ::QSortFilterProxyModel::mapSelectionFromSource(sourceSelection);
  }
}
// tag=1009
QItemSelection QSortFilterProxyModel_wrapper::mapSelectionFromSource_nocallback(
    const QItemSelection &sourceSelection) const {
  // tag=1003
  return ::QSortFilterProxyModel::mapSelectionFromSource(sourceSelection);
}
QItemSelection QSortFilterProxyModel_wrapper::mapSelectionToSource(
    const QItemSelection &proxySelection) const {
  // tag=1000
  if (m_mapSelectionToSourceCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_mapSelectionToSourceCallback(const_cast<void *>(thisPtr),
                                           proxySelection);
  } else {
    // tag=1002
    return ::QSortFilterProxyModel::mapSelectionToSource(proxySelection);
  }
}
// tag=1009
QItemSelection QSortFilterProxyModel_wrapper::mapSelectionToSource_nocallback(
    const QItemSelection &proxySelection) const {
  // tag=1003
  return ::QSortFilterProxyModel::mapSelectionToSource(proxySelection);
}
QModelIndex QSortFilterProxyModel_wrapper::mapToSource(
    const QModelIndex &proxyIndex) const {
  // tag=1000
  if (m_mapToSourceCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_mapToSourceCallback(const_cast<void *>(thisPtr), proxyIndex);
  } else {
    // tag=1002
    return ::QSortFilterProxyModel::mapToSource(proxyIndex);
  }
}
// tag=1009
QModelIndex QSortFilterProxyModel_wrapper::mapToSource_nocallback(
    const QModelIndex &proxyIndex) const {
  // tag=1003
  return ::QSortFilterProxyModel::mapToSource(proxyIndex);
}
QList<QString> QSortFilterProxyModel_wrapper::mimeTypes() const {
  // tag=1000
  if (m_mimeTypesCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_mimeTypesCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QSortFilterProxyModel::mimeTypes();
  }
}
// tag=1009
QList<QString> QSortFilterProxyModel_wrapper::mimeTypes_nocallback() const {
  // tag=1003
  return ::QSortFilterProxyModel::mimeTypes();
}
bool QSortFilterProxyModel_wrapper::moveColumns(
    const QModelIndex &sourceParent, int sourceColumn, int count,
    const QModelIndex &destinationParent, int destinationChild) {
  // tag=1000
  if (m_moveColumnsCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_moveColumnsCallback(const_cast<void *>(thisPtr), sourceParent,
                                 sourceColumn, count, destinationParent,
                                 destinationChild);
  } else {
    // tag=1002
    return ::QSortFilterProxyModel::moveColumns(
        sourceParent, sourceColumn, count, destinationParent, destinationChild);
  }
}
// tag=1009
bool QSortFilterProxyModel_wrapper::moveColumns_nocallback(
    const QModelIndex &sourceParent, int sourceColumn, int count,
    const QModelIndex &destinationParent, int destinationChild) {
  // tag=1003
  return ::QSortFilterProxyModel::moveColumns(
      sourceParent, sourceColumn, count, destinationParent, destinationChild);
}
bool QSortFilterProxyModel_wrapper::moveRows(
    const QModelIndex &sourceParent, int sourceRow, int count,
    const QModelIndex &destinationParent, int destinationChild) {
  // tag=1000
  if (m_moveRowsCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_moveRowsCallback(const_cast<void *>(thisPtr), sourceParent,
                              sourceRow, count, destinationParent,
                              destinationChild);
  } else {
    // tag=1002
    return ::QSortFilterProxyModel::moveRows(
        sourceParent, sourceRow, count, destinationParent, destinationChild);
  }
}
// tag=1009
bool QSortFilterProxyModel_wrapper::moveRows_nocallback(
    const QModelIndex &sourceParent, int sourceRow, int count,
    const QModelIndex &destinationParent, int destinationChild) {
  // tag=1003
  return ::QSortFilterProxyModel::moveRows(sourceParent, sourceRow, count,
                                           destinationParent, destinationChild);
}
QModelIndex
QSortFilterProxyModel_wrapper::parent(const QModelIndex &child) const {
  // tag=1000
  if (m_parentIndexCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_parentIndexCallback(const_cast<void *>(thisPtr), child);
  } else {
    // tag=1002
    return ::QSortFilterProxyModel::parent(child);
  }
}
// tag=1009
QModelIndex QSortFilterProxyModel_wrapper::parent_nocallback(
    const QModelIndex &child) const {
  // tag=1003
  return ::QSortFilterProxyModel::parent(child);
}
void QSortFilterProxyModel_wrapper::recursiveFilteringEnabledChanged(
    bool recursiveFilteringEnabled) {
  // tag=1000

  // tag=1004
  ::QSortFilterProxyModel::recursiveFilteringEnabledChanged(
      recursiveFilteringEnabled);
}
bool QSortFilterProxyModel_wrapper::removeColumns(int column, int count,
                                                  const QModelIndex &parent) {
  // tag=1000
  if (m_removeColumnsCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_removeColumnsCallback(const_cast<void *>(thisPtr), column, count,
                                   parent);
  } else {
    // tag=1002
    return ::QSortFilterProxyModel::removeColumns(column, count, parent);
  }
}
// tag=1009
bool QSortFilterProxyModel_wrapper::removeColumns_nocallback(
    int column, int count, const QModelIndex &parent) {
  // tag=1003
  return ::QSortFilterProxyModel::removeColumns(column, count, parent);
}
bool QSortFilterProxyModel_wrapper::removeRows(int row, int count,
                                               const QModelIndex &parent) {
  // tag=1000
  if (m_removeRowsCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_removeRowsCallback(const_cast<void *>(thisPtr), row, count,
                                parent);
  } else {
    // tag=1002
    return ::QSortFilterProxyModel::removeRows(row, count, parent);
  }
}
// tag=1009
bool QSortFilterProxyModel_wrapper::removeRows_nocallback(
    int row, int count, const QModelIndex &parent) {
  // tag=1003
  return ::QSortFilterProxyModel::removeRows(row, count, parent);
}
void QSortFilterProxyModel_wrapper::resetInternalData() {
  // tag=1000
  if (m_resetInternalDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_resetInternalDataCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QSortFilterProxyModel::resetInternalData();
  }
}
// tag=1009
void QSortFilterProxyModel_wrapper::resetInternalData_nocallback() {
  // tag=1003
  ::QSortFilterProxyModel::resetInternalData();
}
void QSortFilterProxyModel_wrapper::revert() {
  // tag=1000
  if (m_revertCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_revertCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QSortFilterProxyModel::revert();
  }
}
// tag=1009
void QSortFilterProxyModel_wrapper::revert_nocallback() {
  // tag=1003
  ::QSortFilterProxyModel::revert();
}
int QSortFilterProxyModel_wrapper::rowCount(const QModelIndex &parent) const {
  // tag=1000
  if (m_rowCountCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_rowCountCallback(const_cast<void *>(thisPtr), parent);
  } else {
    // tag=1002
    return ::QSortFilterProxyModel::rowCount(parent);
  }
}
// tag=1009
int QSortFilterProxyModel_wrapper::rowCount_nocallback(
    const QModelIndex &parent) const {
  // tag=1003
  return ::QSortFilterProxyModel::rowCount(parent);
}
void QSortFilterProxyModel_wrapper::setAutoAcceptChildRows(bool accept) {
  // tag=1000

  // tag=1004
  ::QSortFilterProxyModel::setAutoAcceptChildRows(accept);
}
bool QSortFilterProxyModel_wrapper::setData(const QModelIndex &index,
                                            const QVariant &value, int role) {
  // tag=1000
  if (m_setDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_setDataCallback(const_cast<void *>(thisPtr), index, value, role);
  } else {
    // tag=1002
    return ::QSortFilterProxyModel::setData(index, value, role);
  }
}
// tag=1009
bool QSortFilterProxyModel_wrapper::setData_nocallback(const QModelIndex &index,
                                                       const QVariant &value,
                                                       int role) {
  // tag=1003
  return ::QSortFilterProxyModel::setData(index, value, role);
}
void QSortFilterProxyModel_wrapper::setDynamicSortFilter(bool enable) {
  // tag=1000

  // tag=1004
  ::QSortFilterProxyModel::setDynamicSortFilter(enable);
}
void QSortFilterProxyModel_wrapper::setFilterFixedString(
    const QString &pattern) {
  // tag=1000

  // tag=1004
  ::QSortFilterProxyModel::setFilterFixedString(pattern);
}
void QSortFilterProxyModel_wrapper::setFilterKeyColumn(int column) {
  // tag=1000

  // tag=1004
  ::QSortFilterProxyModel::setFilterKeyColumn(column);
}
void QSortFilterProxyModel_wrapper::setFilterRegularExpression(
    const QString &pattern) {
  // tag=1000

  // tag=1004
  ::QSortFilterProxyModel::setFilterRegularExpression(pattern);
}
void QSortFilterProxyModel_wrapper::setFilterRole(int role) {
  // tag=1000

  // tag=1004
  ::QSortFilterProxyModel::setFilterRole(role);
}
void QSortFilterProxyModel_wrapper::setFilterWildcard(const QString &pattern) {
  // tag=1000

  // tag=1004
  ::QSortFilterProxyModel::setFilterWildcard(pattern);
}
bool QSortFilterProxyModel_wrapper::setHeaderData(int section,
                                                  Qt::Orientation orientation,
                                                  const QVariant &value,
                                                  int role) {
  // tag=1000
  if (m_setHeaderDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_setHeaderDataCallback(const_cast<void *>(thisPtr), section,
                                   orientation, value, role);
  } else {
    // tag=1002
    return ::QSortFilterProxyModel::setHeaderData(section, orientation, value,
                                                  role);
  }
}
// tag=1009
bool QSortFilterProxyModel_wrapper::setHeaderData_nocallback(
    int section, Qt::Orientation orientation, const QVariant &value, int role) {
  // tag=1003
  return ::QSortFilterProxyModel::setHeaderData(section, orientation, value,
                                                role);
}
void QSortFilterProxyModel_wrapper::setRecursiveFilteringEnabled(
    bool recursive) {
  // tag=1000

  // tag=1004
  ::QSortFilterProxyModel::setRecursiveFilteringEnabled(recursive);
}
void QSortFilterProxyModel_wrapper::setSortLocaleAware(bool on) {
  // tag=1000

  // tag=1004
  ::QSortFilterProxyModel::setSortLocaleAware(on);
}
void QSortFilterProxyModel_wrapper::setSortRole(int role) {
  // tag=1000

  // tag=1004
  ::QSortFilterProxyModel::setSortRole(role);
}
void QSortFilterProxyModel_wrapper::setSourceModel(
    QAbstractItemModel *sourceModel) {
  // tag=1000
  if (m_setSourceModelCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setSourceModelCallback(const_cast<void *>(thisPtr), sourceModel);
  } else {
    // tag=1002
    ::QSortFilterProxyModel::setSourceModel(sourceModel);
  }
}
// tag=1009
void QSortFilterProxyModel_wrapper::setSourceModel_nocallback(
    QAbstractItemModel *sourceModel) {
  // tag=1003
  ::QSortFilterProxyModel::setSourceModel(sourceModel);
}
QModelIndex
QSortFilterProxyModel_wrapper::sibling(int row, int column,
                                       const QModelIndex &idx) const {
  // tag=1000
  if (m_siblingCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_siblingCallback(const_cast<void *>(thisPtr), row, column, idx);
  } else {
    // tag=1002
    return ::QSortFilterProxyModel::sibling(row, column, idx);
  }
}
// tag=1009
QModelIndex QSortFilterProxyModel_wrapper::sibling_nocallback(
    int row, int column, const QModelIndex &idx) const {
  // tag=1003
  return ::QSortFilterProxyModel::sibling(row, column, idx);
}
void QSortFilterProxyModel_wrapper::sort(int column, Qt::SortOrder order) {
  // tag=1000
  if (m_sortCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_sortCallback(const_cast<void *>(thisPtr), column, order);
  } else {
    // tag=1002
    ::QSortFilterProxyModel::sort(column, order);
  }
}
// tag=1009
void QSortFilterProxyModel_wrapper::sort_nocallback(int column,
                                                    Qt::SortOrder order) {
  // tag=1003
  ::QSortFilterProxyModel::sort(column, order);
}
int QSortFilterProxyModel_wrapper::sortColumn() const {
  // tag=1000

  // tag=1004
  return ::QSortFilterProxyModel::sortColumn();
}
void QSortFilterProxyModel_wrapper::sortLocaleAwareChanged(
    bool sortLocaleAware) {
  // tag=1000

  // tag=1004
  ::QSortFilterProxyModel::sortLocaleAwareChanged(sortLocaleAware);
}
Qt::SortOrder QSortFilterProxyModel_wrapper::sortOrder() const {
  // tag=1000

  // tag=1004
  return ::QSortFilterProxyModel::sortOrder();
}
int QSortFilterProxyModel_wrapper::sortRole() const {
  // tag=1000

  // tag=1004
  return ::QSortFilterProxyModel::sortRole();
}
void QSortFilterProxyModel_wrapper::sortRoleChanged(int sortRole) {
  // tag=1000

  // tag=1004
  ::QSortFilterProxyModel::sortRoleChanged(sortRole);
}
QSize QSortFilterProxyModel_wrapper::span(const QModelIndex &index) const {
  // tag=1000
  if (m_spanCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_spanCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1002
    return ::QSortFilterProxyModel::span(index);
  }
}
// tag=1009
QSize QSortFilterProxyModel_wrapper::span_nocallback(
    const QModelIndex &index) const {
  // tag=1003
  return ::QSortFilterProxyModel::span(index);
}
bool QSortFilterProxyModel_wrapper::submit() {
  // tag=1000
  if (m_submitCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_submitCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QSortFilterProxyModel::submit();
  }
}
// tag=1009
bool QSortFilterProxyModel_wrapper::submit_nocallback() {
  // tag=1003
  return ::QSortFilterProxyModel::submit();
}
QString QSortFilterProxyModel_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QSortFilterProxyModel::tr(s, c, n);
}

// tag=1005
QSortFilterProxyModel_wrapper::~QSortFilterProxyModel_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QSortFilterProxyModel *fromPtr(void *ptr) {
  return reinterpret_cast<QSortFilterProxyModel *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<
      QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QSortFilterProxyModel_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(cppObj);
}
void *c_QSortFilterProxyModel__constructor_QObject(void *parent_) {
  auto parent = reinterpret_cast<QObject *>(parent_);
  // tag=1056
  auto ptr =
      new QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// autoAcceptChildRows() const
bool c_QSortFilterProxyModel__autoAcceptChildRows(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->autoAcceptChildRows();
}

// tag=1050
// autoAcceptChildRowsChanged(bool autoAcceptChildRows)
void c_QSortFilterProxyModel__autoAcceptChildRowsChanged_bool(
    void *thisObj, bool autoAcceptChildRows) {
  // tag=1010
  fromPtr(thisObj)->autoAcceptChildRowsChanged(autoAcceptChildRows);
}

// tag=1079
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

// tag=1050
// buddy(const QModelIndex & index) const
void *c_QSortFilterProxyModel__buddy_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->buddy_nocallback(index);
        } else {
          return targetPtr->buddy(index);
        }
      }()};
}

// tag=1050
// canFetchMore(const QModelIndex & parent) const
bool c_QSortFilterProxyModel__canFetchMore_QModelIndex(void *thisObj,
                                                       void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->canFetchMore_nocallback(parent);
        } else {
          return targetPtr->canFetchMore(parent);
        }
      }();
}

// tag=1050
// clearItemData(const QModelIndex & index)
bool c_QSortFilterProxyModel__clearItemData_QModelIndex(void *thisObj,
                                                        void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->clearItemData_nocallback(index);
        } else {
          return targetPtr->clearItemData(index);
        }
      }();
}

// tag=1050
// columnCount(const QModelIndex & parent) const
int c_QSortFilterProxyModel__columnCount_QModelIndex(void *thisObj,
                                                     void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->columnCount_nocallback(parent);
        } else {
          return targetPtr->columnCount(parent);
        }
      }();
}

// tag=1050
// customEvent(QEvent * event)
void c_QSortFilterProxyModel__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// data(const QModelIndex & index, int role) const
void *c_QSortFilterProxyModel__data_QModelIndex_int(void *thisObj, void *index_,
                                                    int role) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QVariant>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->data_nocallback(index, role);
        } else {
          return targetPtr->data(index, role);
        }
      }()};
}

// tag=1050
// dynamicSortFilter() const
bool c_QSortFilterProxyModel__dynamicSortFilter(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->dynamicSortFilter();
}

// tag=1050
// dynamicSortFilterChanged(bool dynamicSortFilter)
void c_QSortFilterProxyModel__dynamicSortFilterChanged_bool(
    void *thisObj, bool dynamicSortFilter) {
  // tag=1010
  fromPtr(thisObj)->dynamicSortFilterChanged(dynamicSortFilter);
}

// tag=1079
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

// tag=1050
// event(QEvent * event)
bool c_QSortFilterProxyModel__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->event_nocallback(event);
        } else {
          return targetPtr->event(event);
        }
      }();
}

// tag=1050
// eventFilter(QObject * watched, QEvent * event)
bool c_QSortFilterProxyModel__eventFilter_QObject_QEvent(void *thisObj,
                                                         void *watched_,
                                                         void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->eventFilter_nocallback(watched, event);
        } else {
          return targetPtr->eventFilter(watched, event);
        }
      }();
}

// tag=1050
// fetchMore(const QModelIndex & parent)
void c_QSortFilterProxyModel__fetchMore_QModelIndex(void *thisObj,
                                                    void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  // tag=1016
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

// tag=1050
// filterAcceptsColumn(int source_column, const QModelIndex & source_parent)
// const
bool c_QSortFilterProxyModel__filterAcceptsColumn_int_QModelIndex(
    void *thisObj, int source_column, void *source_parent_) {
  auto &source_parent = *reinterpret_cast<QModelIndex *>(source_parent_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->filterAcceptsColumn_nocallback(source_column,
                                                              source_parent);
}

// tag=1050
// filterAcceptsRow(int source_row, const QModelIndex & source_parent) const
bool c_QSortFilterProxyModel__filterAcceptsRow_int_QModelIndex(
    void *thisObj, int source_row, void *source_parent_) {
  auto &source_parent = *reinterpret_cast<QModelIndex *>(source_parent_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->filterAcceptsRow_nocallback(source_row,
                                                           source_parent);
}

// tag=1050
// filterKeyColumn() const
int c_QSortFilterProxyModel__filterKeyColumn(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->filterKeyColumn();
}

// tag=1050
// filterRole() const
int c_QSortFilterProxyModel__filterRole(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->filterRole();
}

// tag=1050
// filterRoleChanged(int filterRole)
void c_QSortFilterProxyModel__filterRoleChanged_int(void *thisObj,
                                                    int filterRole) {
  // tag=1010
  fromPtr(thisObj)->filterRoleChanged(filterRole);
}

// tag=1079
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

// tag=1050
// hasChildren(const QModelIndex & parent) const
bool c_QSortFilterProxyModel__hasChildren_QModelIndex(void *thisObj,
                                                      void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->hasChildren_nocallback(parent);
        } else {
          return targetPtr->hasChildren(parent);
        }
      }();
}

// tag=1050
// headerData(int section, Qt::Orientation orientation, int role) const
void *c_QSortFilterProxyModel__headerData_int_Orientation_int(void *thisObj,
                                                              int section,
                                                              int orientation,
                                                              int role) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QVariant>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->headerData_nocallback(
              section, static_cast<Qt::Orientation>(orientation), role);
        } else {
          return targetPtr->headerData(
              section, static_cast<Qt::Orientation>(orientation), role);
        }
      }()};
}

// tag=1050
// index(int row, int column, const QModelIndex & parent) const
void *c_QSortFilterProxyModel__index_int_int_QModelIndex(void *thisObj, int row,
                                                         int column,
                                                         void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->index_nocallback(row, column, parent);
        } else {
          return targetPtr->index(row, column, parent);
        }
      }()};
}

// tag=1050
// insertColumns(int column, int count, const QModelIndex & parent)
bool c_QSortFilterProxyModel__insertColumns_int_int_QModelIndex(void *thisObj,
                                                                int column,
                                                                int count,
                                                                void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->insertColumns_nocallback(column, count, parent);
        } else {
          return targetPtr->insertColumns(column, count, parent);
        }
      }();
}

// tag=1050
// insertRows(int row, int count, const QModelIndex & parent)
bool c_QSortFilterProxyModel__insertRows_int_int_QModelIndex(void *thisObj,
                                                             int row, int count,
                                                             void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->insertRows_nocallback(row, count, parent);
        } else {
          return targetPtr->insertRows(row, count, parent);
        }
      }();
}

// tag=1050
// invalidate()
void c_QSortFilterProxyModel__invalidate(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->invalidate();
}

// tag=1050
// invalidateColumnsFilter()
void c_QSortFilterProxyModel__invalidateColumnsFilter(void *thisObj) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->invalidateColumnsFilter();
}

// tag=1050
// invalidateFilter()
void c_QSortFilterProxyModel__invalidateFilter(void *thisObj) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->invalidateFilter();
}

// tag=1050
// invalidateRowsFilter()
void c_QSortFilterProxyModel__invalidateRowsFilter(void *thisObj) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->invalidateRowsFilter();
}

// tag=1050
// isRecursiveFilteringEnabled() const
bool c_QSortFilterProxyModel__isRecursiveFilteringEnabled(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isRecursiveFilteringEnabled();
}

// tag=1050
// isSortLocaleAware() const
bool c_QSortFilterProxyModel__isSortLocaleAware(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isSortLocaleAware();
}

// tag=1050
// lessThan(const QModelIndex & source_left, const QModelIndex & source_right)
// const
bool c_QSortFilterProxyModel__lessThan_QModelIndex_QModelIndex(
    void *thisObj, void *source_left_, void *source_right_) {
  auto &source_left = *reinterpret_cast<QModelIndex *>(source_left_);
  auto &source_right = *reinterpret_cast<QModelIndex *>(source_right_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->lessThan_nocallback(source_left, source_right);
}

// tag=1050
// mapFromSource(const QModelIndex & sourceIndex) const
void *c_QSortFilterProxyModel__mapFromSource_QModelIndex(void *thisObj,
                                                         void *sourceIndex_) {
  auto &sourceIndex = *reinterpret_cast<QModelIndex *>(sourceIndex_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->mapFromSource_nocallback(sourceIndex);
        } else {
          return targetPtr->mapFromSource(sourceIndex);
        }
      }()};
}

// tag=1050
// mapSelectionFromSource(const QItemSelection & sourceSelection) const
void *c_QSortFilterProxyModel__mapSelectionFromSource_QItemSelection(
    void *thisObj, void *sourceSelection_) {
  auto &sourceSelection = *reinterpret_cast<QItemSelection *>(sourceSelection_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QItemSelection>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->mapSelectionFromSource_nocallback(sourceSelection);
        } else {
          return targetPtr->mapSelectionFromSource(sourceSelection);
        }
      }()};
}

// tag=1050
// mapSelectionToSource(const QItemSelection & proxySelection) const
void *c_QSortFilterProxyModel__mapSelectionToSource_QItemSelection(
    void *thisObj, void *proxySelection_) {
  auto &proxySelection = *reinterpret_cast<QItemSelection *>(proxySelection_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QItemSelection>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->mapSelectionToSource_nocallback(proxySelection);
        } else {
          return targetPtr->mapSelectionToSource(proxySelection);
        }
      }()};
}

// tag=1050
// mapToSource(const QModelIndex & proxyIndex) const
void *c_QSortFilterProxyModel__mapToSource_QModelIndex(void *thisObj,
                                                       void *proxyIndex_) {
  auto &proxyIndex = *reinterpret_cast<QModelIndex *>(proxyIndex_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->mapToSource_nocallback(proxyIndex);
        } else {
          return targetPtr->mapToSource(proxyIndex);
        }
      }()};
}

// tag=1050
// mimeTypes() const
void *c_QSortFilterProxyModel__mimeTypes(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QString>>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->mimeTypes_nocallback();
        } else {
          return targetPtr->mimeTypes();
        }
      }()};
}

// tag=1050
// moveColumns(const QModelIndex & sourceParent, int sourceColumn, int count,
// const QModelIndex & destinationParent, int destinationChild)
bool c_QSortFilterProxyModel__moveColumns_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceColumn, int count,
    void *destinationParent_, int destinationChild) {
  auto &sourceParent = *reinterpret_cast<QModelIndex *>(sourceParent_);
  auto &destinationParent =
      *reinterpret_cast<QModelIndex *>(destinationParent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(
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
}

// tag=1050
// moveRows(const QModelIndex & sourceParent, int sourceRow, int count, const
// QModelIndex & destinationParent, int destinationChild)
bool c_QSortFilterProxyModel__moveRows_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceRow, int count,
    void *destinationParent_, int destinationChild) {
  auto &sourceParent = *reinterpret_cast<QModelIndex *>(sourceParent_);
  auto &destinationParent =
      *reinterpret_cast<QModelIndex *>(destinationParent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->moveRows_nocallback(sourceParent, sourceRow, count,
                                                 destinationParent,
                                                 destinationChild);
        } else {
          return targetPtr->moveRows(sourceParent, sourceRow, count,
                                     destinationParent, destinationChild);
        }
      }();
}

// tag=1050
// parent(const QModelIndex & child) const
void *c_QSortFilterProxyModel__parentIndex_QModelIndex(void *thisObj,
                                                       void *child_) {
  auto &child = *reinterpret_cast<QModelIndex *>(child_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->parent_nocallback(child);
        } else {
          return targetPtr->parent(child);
        }
      }()};
}

// tag=1050
// recursiveFilteringEnabledChanged(bool recursiveFilteringEnabled)
void c_QSortFilterProxyModel__recursiveFilteringEnabledChanged_bool(
    void *thisObj, bool recursiveFilteringEnabled) {
  // tag=1010
  fromPtr(thisObj)->recursiveFilteringEnabledChanged(recursiveFilteringEnabled);
}

// tag=1079
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

// tag=1050
// removeColumns(int column, int count, const QModelIndex & parent)
bool c_QSortFilterProxyModel__removeColumns_int_int_QModelIndex(void *thisObj,
                                                                int column,
                                                                int count,
                                                                void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->removeColumns_nocallback(column, count, parent);
        } else {
          return targetPtr->removeColumns(column, count, parent);
        }
      }();
}

// tag=1050
// removeRows(int row, int count, const QModelIndex & parent)
bool c_QSortFilterProxyModel__removeRows_int_int_QModelIndex(void *thisObj,
                                                             int row, int count,
                                                             void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->removeRows_nocallback(row, count, parent);
        } else {
          return targetPtr->removeRows(row, count, parent);
        }
      }();
}

// tag=1050
// resetInternalData()
void c_QSortFilterProxyModel__resetInternalData(void *thisObj) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->resetInternalData_nocallback();
}

// tag=1050
// revert()
void c_QSortFilterProxyModel__revert(void *thisObj) {
  // tag=1016
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

// tag=1050
// rowCount(const QModelIndex & parent) const
int c_QSortFilterProxyModel__rowCount_QModelIndex(void *thisObj,
                                                  void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->rowCount_nocallback(parent);
        } else {
          return targetPtr->rowCount(parent);
        }
      }();
}

// tag=1050
// setAutoAcceptChildRows(bool accept)
void c_QSortFilterProxyModel__setAutoAcceptChildRows_bool(void *thisObj,
                                                          bool accept) {
  // tag=1010
  fromPtr(thisObj)->setAutoAcceptChildRows(accept);
}

// tag=1050
// setData(const QModelIndex & index, const QVariant & value, int role)
bool c_QSortFilterProxyModel__setData_QModelIndex_QVariant_int(void *thisObj,
                                                               void *index_,
                                                               void *value_,
                                                               int role) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  auto &value = *reinterpret_cast<QVariant *>(value_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->setData_nocallback(index, value, role);
        } else {
          return targetPtr->setData(index, value, role);
        }
      }();
}

// tag=1050
// setDynamicSortFilter(bool enable)
void c_QSortFilterProxyModel__setDynamicSortFilter_bool(void *thisObj,
                                                        bool enable) {
  // tag=1010
  fromPtr(thisObj)->setDynamicSortFilter(enable);
}

// tag=1050
// setFilterFixedString(const QString & pattern)
void c_QSortFilterProxyModel__setFilterFixedString_QString(
    void *thisObj, const char *pattern_) {
  const auto pattern = QString::fromUtf8(pattern_);
  // tag=1010
  fromPtr(thisObj)->setFilterFixedString(pattern);
}

// tag=1050
// setFilterKeyColumn(int column)
void c_QSortFilterProxyModel__setFilterKeyColumn_int(void *thisObj,
                                                     int column) {
  // tag=1010
  fromPtr(thisObj)->setFilterKeyColumn(column);
}

// tag=1050
// setFilterRegularExpression(const QString & pattern)
void c_QSortFilterProxyModel__setFilterRegularExpression_QString(
    void *thisObj, const char *pattern_) {
  const auto pattern = QString::fromUtf8(pattern_);
  // tag=1010
  fromPtr(thisObj)->setFilterRegularExpression(pattern);
}

// tag=1050
// setFilterRole(int role)
void c_QSortFilterProxyModel__setFilterRole_int(void *thisObj, int role) {
  // tag=1010
  fromPtr(thisObj)->setFilterRole(role);
}

// tag=1050
// setFilterWildcard(const QString & pattern)
void c_QSortFilterProxyModel__setFilterWildcard_QString(void *thisObj,
                                                        const char *pattern_) {
  const auto pattern = QString::fromUtf8(pattern_);
  // tag=1010
  fromPtr(thisObj)->setFilterWildcard(pattern);
}

// tag=1050
// setHeaderData(int section, Qt::Orientation orientation, const QVariant &
// value, int role)
bool c_QSortFilterProxyModel__setHeaderData_int_Orientation_QVariant_int(
    void *thisObj, int section, int orientation, void *value_, int role) {
  auto &value = *reinterpret_cast<QVariant *>(value_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->setHeaderData_nocallback(
              section, static_cast<Qt::Orientation>(orientation), value, role);
        } else {
          return targetPtr->setHeaderData(
              section, static_cast<Qt::Orientation>(orientation), value, role);
        }
      }();
}

// tag=1050
// setRecursiveFilteringEnabled(bool recursive)
void c_QSortFilterProxyModel__setRecursiveFilteringEnabled_bool(
    void *thisObj, bool recursive) {
  // tag=1010
  fromPtr(thisObj)->setRecursiveFilteringEnabled(recursive);
}

// tag=1050
// setSortLocaleAware(bool on)
void c_QSortFilterProxyModel__setSortLocaleAware_bool(void *thisObj, bool on) {
  // tag=1010
  fromPtr(thisObj)->setSortLocaleAware(on);
}

// tag=1050
// setSortRole(int role)
void c_QSortFilterProxyModel__setSortRole_int(void *thisObj, int role) {
  // tag=1010
  fromPtr(thisObj)->setSortRole(role);
}

// tag=1050
// setSourceModel(QAbstractItemModel * sourceModel)
void c_QSortFilterProxyModel__setSourceModel_QAbstractItemModel(
    void *thisObj, void *sourceModel_) {
  auto sourceModel = reinterpret_cast<QAbstractItemModel *>(sourceModel_);
  // tag=1016
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

// tag=1050
// sibling(int row, int column, const QModelIndex & idx) const
void *c_QSortFilterProxyModel__sibling_int_int_QModelIndex(void *thisObj,
                                                           int row, int column,
                                                           void *idx_) {
  auto &idx = *reinterpret_cast<QModelIndex *>(idx_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->sibling_nocallback(row, column, idx);
        } else {
          return targetPtr->sibling(row, column, idx);
        }
      }()};
}

// tag=1050
// sort(int column, Qt::SortOrder order)
void c_QSortFilterProxyModel__sort_int_SortOrder(void *thisObj, int column,
                                                 int order) {
  // tag=1016
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

// tag=1050
// sortColumn() const
int c_QSortFilterProxyModel__sortColumn(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->sortColumn();
}

// tag=1050
// sortLocaleAwareChanged(bool sortLocaleAware)
void c_QSortFilterProxyModel__sortLocaleAwareChanged_bool(
    void *thisObj, bool sortLocaleAware) {
  // tag=1010
  fromPtr(thisObj)->sortLocaleAwareChanged(sortLocaleAware);
}

// tag=1079
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

// tag=1050
// sortOrder() const
int c_QSortFilterProxyModel__sortOrder(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->sortOrder();
}

// tag=1050
// sortRole() const
int c_QSortFilterProxyModel__sortRole(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->sortRole();
}

// tag=1050
// sortRoleChanged(int sortRole)
void c_QSortFilterProxyModel__sortRoleChanged_int(void *thisObj, int sortRole) {
  // tag=1010
  fromPtr(thisObj)->sortRoleChanged(sortRole);
}

// tag=1079
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

// tag=1050
// span(const QModelIndex & index) const
void *c_QSortFilterProxyModel__span_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->span_nocallback(index);
        } else {
          return targetPtr->span(index);
        }
      }()};
}

// tag=1050
// submit()
bool c_QSortFilterProxyModel__submit(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->submit_nocallback();
        } else {
          return targetPtr->submit();
        }
      }();
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QSortFilterProxyModel__tr_char_char_int(const char *s,
                                                       const char *c, int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::tr(s, c,
                                                                       n)};
}
void c_QSortFilterProxyModel__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QSortFilterProxyModel__registerVirtualMethodCallback(void *ptr,
                                                            void *callback,
                                                            int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 5752:
    wrapper->m_buddyCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QSortFilterProxyModel_wrapper::Callback_buddy>(
            callback);
    break;
  case 5753:
    wrapper->m_canFetchMoreCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_canFetchMore>(callback);
    break;
  case 5758:
    wrapper->m_clearItemDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_clearItemData>(callback);
    break;
  case 5759:
    wrapper->m_columnCountCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_columnCount>(callback);
    break;
  case 944:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_customEvent>(callback);
    break;
  case 5761:
    wrapper->m_dataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QSortFilterProxyModel_wrapper::Callback_data>(
            callback);
    break;
  case 953:
    wrapper->m_eventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QSortFilterProxyModel_wrapper::Callback_event>(
            callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_eventFilter>(callback);
    break;
  case 5778:
    wrapper->m_fetchMoreCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QSortFilterProxyModel_wrapper::Callback_fetchMore>(
            callback);
    break;
  case 5935:
    wrapper->m_filterAcceptsColumnCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_filterAcceptsColumn>(callback);
    break;
  case 5936:
    wrapper->m_filterAcceptsRowCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_filterAcceptsRow>(callback);
    break;
  case 5779:
    wrapper->m_hasChildrenCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_hasChildren>(callback);
    break;
  case 5781:
    wrapper->m_headerDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_headerData>(callback);
    break;
  case 5783:
    wrapper->m_indexCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QSortFilterProxyModel_wrapper::Callback_index>(
            callback);
    break;
  case 5786:
    wrapper->m_insertColumnsCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_insertColumns>(callback);
    break;
  case 5788:
    wrapper->m_insertRowsCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_insertRows>(callback);
    break;
  case 5946:
    wrapper->m_lessThanCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QSortFilterProxyModel_wrapper::Callback_lessThan>(
            callback);
    break;
  case 5917:
    wrapper->m_mapFromSourceCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_mapFromSource>(callback);
    break;
  case 5918:
    wrapper->m_mapSelectionFromSourceCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_mapSelectionFromSource>(callback);
    break;
  case 5919:
    wrapper->m_mapSelectionToSourceCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_mapSelectionToSource>(callback);
    break;
  case 5920:
    wrapper->m_mapToSourceCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_mapToSource>(callback);
    break;
  case 5795:
    wrapper->m_mimeTypesCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QSortFilterProxyModel_wrapper::Callback_mimeTypes>(
            callback);
    break;
  case 5797:
    wrapper->m_moveColumnsCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_moveColumns>(callback);
    break;
  case 5799:
    wrapper->m_moveRowsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QSortFilterProxyModel_wrapper::Callback_moveRows>(
            callback);
    break;
  case 5801:
    wrapper->m_parentIndexCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_parentIndex>(callback);
    break;
  case 5806:
    wrapper->m_removeColumnsCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_removeColumns>(callback);
    break;
  case 5809:
    wrapper->m_removeRowsCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_removeRows>(callback);
    break;
  case 5810:
    wrapper->m_resetInternalDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_resetInternalData>(callback);
    break;
  case 5811:
    wrapper->m_revertCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QSortFilterProxyModel_wrapper::Callback_revert>(
            callback);
    break;
  case 5812:
    wrapper->m_rowCountCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QSortFilterProxyModel_wrapper::Callback_rowCount>(
            callback);
    break;
  case 5815:
    wrapper->m_setDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QSortFilterProxyModel_wrapper::Callback_setData>(
            callback);
    break;
  case 5816:
    wrapper->m_setHeaderDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_setHeaderData>(callback);
    break;
  case 5926:
    wrapper->m_setSourceModelCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSortFilterProxyModel_wrapper::
            Callback_setSourceModel>(callback);
    break;
  case 5820:
    wrapper->m_siblingCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QSortFilterProxyModel_wrapper::Callback_sibling>(
            callback);
    break;
  case 5822:
    wrapper->m_sortCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QSortFilterProxyModel_wrapper::Callback_sort>(
            callback);
    break;
  case 5823:
    wrapper->m_spanCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QSortFilterProxyModel_wrapper::Callback_span>(
            callback);
    break;
  case 5825:
    wrapper->m_submitCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QSortFilterProxyModel_wrapper::Callback_submit>(
            callback);
    break;
  }
}
}
