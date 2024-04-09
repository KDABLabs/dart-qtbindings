#include "QAbstractItemModel_wrapper.h"

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
QAbstractItemModel_wrapper::QAbstractItemModel_wrapper(QObject *parent)
    : ::QAbstractItemModel(parent) {}
void QAbstractItemModel_wrapper::beginInsertColumns(const QModelIndex &parent,
                                                    int first, int last) {
  // tag=1000

  // tag=1004
  ::QAbstractItemModel::beginInsertColumns(parent, first, last);
}
void QAbstractItemModel_wrapper::beginInsertRows(const QModelIndex &parent,
                                                 int first, int last) {
  // tag=1000

  // tag=1004
  ::QAbstractItemModel::beginInsertRows(parent, first, last);
}
bool QAbstractItemModel_wrapper::beginMoveColumns(
    const QModelIndex &sourceParent, int sourceFirst, int sourceLast,
    const QModelIndex &destinationParent, int destinationColumn) {
  // tag=1000

  // tag=1004
  return ::QAbstractItemModel::beginMoveColumns(sourceParent, sourceFirst,
                                                sourceLast, destinationParent,
                                                destinationColumn);
}
bool QAbstractItemModel_wrapper::beginMoveRows(
    const QModelIndex &sourceParent, int sourceFirst, int sourceLast,
    const QModelIndex &destinationParent, int destinationRow) {
  // tag=1000

  // tag=1004
  return ::QAbstractItemModel::beginMoveRows(
      sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
}
void QAbstractItemModel_wrapper::beginRemoveColumns(const QModelIndex &parent,
                                                    int first, int last) {
  // tag=1000

  // tag=1004
  ::QAbstractItemModel::beginRemoveColumns(parent, first, last);
}
void QAbstractItemModel_wrapper::beginRemoveRows(const QModelIndex &parent,
                                                 int first, int last) {
  // tag=1000

  // tag=1004
  ::QAbstractItemModel::beginRemoveRows(parent, first, last);
}
void QAbstractItemModel_wrapper::beginResetModel() {
  // tag=1000

  // tag=1004
  ::QAbstractItemModel::beginResetModel();
}
QModelIndex QAbstractItemModel_wrapper::buddy(const QModelIndex &index) const {
  // tag=1000
  if (m_buddyCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_buddyCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1002
    return ::QAbstractItemModel::buddy(index);
  }
}
// tag=1009
QModelIndex
QAbstractItemModel_wrapper::buddy_nocallback(const QModelIndex &index) const {
  // tag=1003
  return ::QAbstractItemModel::buddy(index);
}
bool QAbstractItemModel_wrapper::canFetchMore(const QModelIndex &parent) const {
  // tag=1000
  if (m_canFetchMoreCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_canFetchMoreCallback(const_cast<void *>(thisPtr), parent);
  } else {
    // tag=1002
    return ::QAbstractItemModel::canFetchMore(parent);
  }
}
// tag=1009
bool QAbstractItemModel_wrapper::canFetchMore_nocallback(
    const QModelIndex &parent) const {
  // tag=1003
  return ::QAbstractItemModel::canFetchMore(parent);
}
void QAbstractItemModel_wrapper::changePersistentIndex(const QModelIndex &from,
                                                       const QModelIndex &to) {
  // tag=1000

  // tag=1004
  ::QAbstractItemModel::changePersistentIndex(from, to);
}
void QAbstractItemModel_wrapper::changePersistentIndexList(
    const QList<QModelIndex> &from, const QList<QModelIndex> &to) {
  // tag=1000

  // tag=1004
  ::QAbstractItemModel::changePersistentIndexList(from, to);
}
bool QAbstractItemModel_wrapper::checkIndex(const QModelIndex &index) const {
  // tag=1000

  // tag=1004
  return ::QAbstractItemModel::checkIndex(index);
}
bool QAbstractItemModel_wrapper::clearItemData(const QModelIndex &index) {
  // tag=1000
  if (m_clearItemDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_clearItemDataCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1002
    return ::QAbstractItemModel::clearItemData(index);
  }
}
// tag=1009
bool QAbstractItemModel_wrapper::clearItemData_nocallback(
    const QModelIndex &index) {
  // tag=1003
  return ::QAbstractItemModel::clearItemData(index);
}
int QAbstractItemModel_wrapper::columnCount(const QModelIndex &parent) const {
  // tag=1000
  if (m_columnCountCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_columnCountCallback(const_cast<void *>(thisPtr), parent);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
int QAbstractItemModel_wrapper::columnCount_nocallback(
    const QModelIndex &parent) const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
void QAbstractItemModel_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QAbstractItemModel::customEvent(event);
  }
}
// tag=1009
void QAbstractItemModel_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QAbstractItemModel::customEvent(event);
}
QVariant QAbstractItemModel_wrapper::data(const QModelIndex &index,
                                          int role) const {
  // tag=1000
  if (m_dataCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_dataCallback(const_cast<void *>(thisPtr), index, role);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
QVariant QAbstractItemModel_wrapper::data_nocallback(const QModelIndex &index,
                                                     int role) const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
void QAbstractItemModel_wrapper::dataChanged(const QModelIndex &topLeft,
                                             const QModelIndex &bottomRight,
                                             const QList<int> &roles) {
  // tag=1000

  // tag=1004
  ::QAbstractItemModel::dataChanged(topLeft, bottomRight, roles);
}
void QAbstractItemModel_wrapper::endInsertColumns() {
  // tag=1000

  // tag=1004
  ::QAbstractItemModel::endInsertColumns();
}
void QAbstractItemModel_wrapper::endInsertRows() {
  // tag=1000

  // tag=1004
  ::QAbstractItemModel::endInsertRows();
}
void QAbstractItemModel_wrapper::endMoveColumns() {
  // tag=1000

  // tag=1004
  ::QAbstractItemModel::endMoveColumns();
}
void QAbstractItemModel_wrapper::endMoveRows() {
  // tag=1000

  // tag=1004
  ::QAbstractItemModel::endMoveRows();
}
void QAbstractItemModel_wrapper::endRemoveColumns() {
  // tag=1000

  // tag=1004
  ::QAbstractItemModel::endRemoveColumns();
}
void QAbstractItemModel_wrapper::endRemoveRows() {
  // tag=1000

  // tag=1004
  ::QAbstractItemModel::endRemoveRows();
}
void QAbstractItemModel_wrapper::endResetModel() {
  // tag=1000

  // tag=1004
  ::QAbstractItemModel::endResetModel();
}
bool QAbstractItemModel_wrapper::event(QEvent *event) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    return ::QAbstractItemModel::event(event);
  }
}
// tag=1009
bool QAbstractItemModel_wrapper::event_nocallback(QEvent *event) {
  // tag=1003
  return ::QAbstractItemModel::event(event);
}
bool QAbstractItemModel_wrapper::eventFilter(QObject *watched, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    // tag=1002
    return ::QAbstractItemModel::eventFilter(watched, event);
  }
}
// tag=1009
bool QAbstractItemModel_wrapper::eventFilter_nocallback(QObject *watched,
                                                        QEvent *event) {
  // tag=1003
  return ::QAbstractItemModel::eventFilter(watched, event);
}
void QAbstractItemModel_wrapper::fetchMore(const QModelIndex &parent) {
  // tag=1000
  if (m_fetchMoreCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_fetchMoreCallback(const_cast<void *>(thisPtr), parent);
  } else {
    // tag=1002
    ::QAbstractItemModel::fetchMore(parent);
  }
}
// tag=1009
void QAbstractItemModel_wrapper::fetchMore_nocallback(
    const QModelIndex &parent) {
  // tag=1003
  ::QAbstractItemModel::fetchMore(parent);
}
bool QAbstractItemModel_wrapper::hasChildren(const QModelIndex &parent) const {
  // tag=1000
  if (m_hasChildrenCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hasChildrenCallback(const_cast<void *>(thisPtr), parent);
  } else {
    // tag=1002
    return ::QAbstractItemModel::hasChildren(parent);
  }
}
// tag=1009
bool QAbstractItemModel_wrapper::hasChildren_nocallback(
    const QModelIndex &parent) const {
  // tag=1003
  return ::QAbstractItemModel::hasChildren(parent);
}
bool QAbstractItemModel_wrapper::hasIndex(int row, int column,
                                          const QModelIndex &parent) const {
  // tag=1000

  // tag=1004
  return ::QAbstractItemModel::hasIndex(row, column, parent);
}
QVariant QAbstractItemModel_wrapper::headerData(int section,
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
    return ::QAbstractItemModel::headerData(section, orientation, role);
  }
}
// tag=1009
QVariant QAbstractItemModel_wrapper::headerData_nocallback(
    int section, Qt::Orientation orientation, int role) const {
  // tag=1003
  return ::QAbstractItemModel::headerData(section, orientation, role);
}
void QAbstractItemModel_wrapper::headerDataChanged(Qt::Orientation orientation,
                                                   int first, int last) {
  // tag=1000

  // tag=1004
  ::QAbstractItemModel::headerDataChanged(orientation, first, last);
}
QModelIndex QAbstractItemModel_wrapper::index(int row, int column,
                                              const QModelIndex &parent) const {
  // tag=1000
  if (m_indexCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_indexCallback(const_cast<void *>(thisPtr), row, column, parent);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
QModelIndex
QAbstractItemModel_wrapper::index_nocallback(int row, int column,
                                             const QModelIndex &parent) const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
bool QAbstractItemModel_wrapper::insertColumns(int column, int count,
                                               const QModelIndex &parent) {
  // tag=1000
  if (m_insertColumnsCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_insertColumnsCallback(const_cast<void *>(thisPtr), column, count,
                                   parent);
  } else {
    // tag=1002
    return ::QAbstractItemModel::insertColumns(column, count, parent);
  }
}
// tag=1009
bool QAbstractItemModel_wrapper::insertColumns_nocallback(
    int column, int count, const QModelIndex &parent) {
  // tag=1003
  return ::QAbstractItemModel::insertColumns(column, count, parent);
}
bool QAbstractItemModel_wrapper::insertRows(int row, int count,
                                            const QModelIndex &parent) {
  // tag=1000
  if (m_insertRowsCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_insertRowsCallback(const_cast<void *>(thisPtr), row, count,
                                parent);
  } else {
    // tag=1002
    return ::QAbstractItemModel::insertRows(row, count, parent);
  }
}
// tag=1009
bool QAbstractItemModel_wrapper::insertRows_nocallback(
    int row, int count, const QModelIndex &parent) {
  // tag=1003
  return ::QAbstractItemModel::insertRows(row, count, parent);
}
void QAbstractItemModel_wrapper::layoutAboutToBeChanged() {
  // tag=1000

  // tag=1004
  ::QAbstractItemModel::layoutAboutToBeChanged();
}
void QAbstractItemModel_wrapper::layoutChanged() {
  // tag=1000

  // tag=1004
  ::QAbstractItemModel::layoutChanged();
}
QList<QString> QAbstractItemModel_wrapper::mimeTypes() const {
  // tag=1000
  if (m_mimeTypesCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_mimeTypesCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QAbstractItemModel::mimeTypes();
  }
}
// tag=1009
QList<QString> QAbstractItemModel_wrapper::mimeTypes_nocallback() const {
  // tag=1003
  return ::QAbstractItemModel::mimeTypes();
}
bool QAbstractItemModel_wrapper::moveColumn(
    const QModelIndex &sourceParent, int sourceColumn,
    const QModelIndex &destinationParent, int destinationChild) {
  // tag=1000

  // tag=1004
  return ::QAbstractItemModel::moveColumn(sourceParent, sourceColumn,
                                          destinationParent, destinationChild);
}
bool QAbstractItemModel_wrapper::moveColumns(
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
    return ::QAbstractItemModel::moveColumns(
        sourceParent, sourceColumn, count, destinationParent, destinationChild);
  }
}
// tag=1009
bool QAbstractItemModel_wrapper::moveColumns_nocallback(
    const QModelIndex &sourceParent, int sourceColumn, int count,
    const QModelIndex &destinationParent, int destinationChild) {
  // tag=1003
  return ::QAbstractItemModel::moveColumns(sourceParent, sourceColumn, count,
                                           destinationParent, destinationChild);
}
bool QAbstractItemModel_wrapper::moveRow(const QModelIndex &sourceParent,
                                         int sourceRow,
                                         const QModelIndex &destinationParent,
                                         int destinationChild) {
  // tag=1000

  // tag=1004
  return ::QAbstractItemModel::moveRow(sourceParent, sourceRow,
                                       destinationParent, destinationChild);
}
bool QAbstractItemModel_wrapper::moveRows(const QModelIndex &sourceParent,
                                          int sourceRow, int count,
                                          const QModelIndex &destinationParent,
                                          int destinationChild) {
  // tag=1000
  if (m_moveRowsCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_moveRowsCallback(const_cast<void *>(thisPtr), sourceParent,
                              sourceRow, count, destinationParent,
                              destinationChild);
  } else {
    // tag=1002
    return ::QAbstractItemModel::moveRows(sourceParent, sourceRow, count,
                                          destinationParent, destinationChild);
  }
}
// tag=1009
bool QAbstractItemModel_wrapper::moveRows_nocallback(
    const QModelIndex &sourceParent, int sourceRow, int count,
    const QModelIndex &destinationParent, int destinationChild) {
  // tag=1003
  return ::QAbstractItemModel::moveRows(sourceParent, sourceRow, count,
                                        destinationParent, destinationChild);
}
QModelIndex QAbstractItemModel_wrapper::parent(const QModelIndex &child) const {
  // tag=1000
  if (m_parentIndexCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_parentIndexCallback(const_cast<void *>(thisPtr), child);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
QModelIndex
QAbstractItemModel_wrapper::parent_nocallback(const QModelIndex &child) const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
QList<QModelIndex> QAbstractItemModel_wrapper::persistentIndexList() const {
  // tag=1000

  // tag=1004
  return ::QAbstractItemModel::persistentIndexList();
}
bool QAbstractItemModel_wrapper::removeColumn(int column,
                                              const QModelIndex &parent) {
  // tag=1000

  // tag=1004
  return ::QAbstractItemModel::removeColumn(column, parent);
}
bool QAbstractItemModel_wrapper::removeColumns(int column, int count,
                                               const QModelIndex &parent) {
  // tag=1000
  if (m_removeColumnsCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_removeColumnsCallback(const_cast<void *>(thisPtr), column, count,
                                   parent);
  } else {
    // tag=1002
    return ::QAbstractItemModel::removeColumns(column, count, parent);
  }
}
// tag=1009
bool QAbstractItemModel_wrapper::removeColumns_nocallback(
    int column, int count, const QModelIndex &parent) {
  // tag=1003
  return ::QAbstractItemModel::removeColumns(column, count, parent);
}
bool QAbstractItemModel_wrapper::removeRow(int row, const QModelIndex &parent) {
  // tag=1000

  // tag=1004
  return ::QAbstractItemModel::removeRow(row, parent);
}
bool QAbstractItemModel_wrapper::removeRows(int row, int count,
                                            const QModelIndex &parent) {
  // tag=1000
  if (m_removeRowsCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_removeRowsCallback(const_cast<void *>(thisPtr), row, count,
                                parent);
  } else {
    // tag=1002
    return ::QAbstractItemModel::removeRows(row, count, parent);
  }
}
// tag=1009
bool QAbstractItemModel_wrapper::removeRows_nocallback(
    int row, int count, const QModelIndex &parent) {
  // tag=1003
  return ::QAbstractItemModel::removeRows(row, count, parent);
}
void QAbstractItemModel_wrapper::resetInternalData() {
  // tag=1000
  if (m_resetInternalDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_resetInternalDataCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QAbstractItemModel::resetInternalData();
  }
}
// tag=1009
void QAbstractItemModel_wrapper::resetInternalData_nocallback() {
  // tag=1003
  ::QAbstractItemModel::resetInternalData();
}
void QAbstractItemModel_wrapper::revert() {
  // tag=1000
  if (m_revertCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_revertCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QAbstractItemModel::revert();
  }
}
// tag=1009
void QAbstractItemModel_wrapper::revert_nocallback() {
  // tag=1003
  ::QAbstractItemModel::revert();
}
int QAbstractItemModel_wrapper::rowCount(const QModelIndex &parent) const {
  // tag=1000
  if (m_rowCountCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_rowCountCallback(const_cast<void *>(thisPtr), parent);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
int QAbstractItemModel_wrapper::rowCount_nocallback(
    const QModelIndex &parent) const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
bool QAbstractItemModel_wrapper::setData(const QModelIndex &index,
                                         const QVariant &value, int role) {
  // tag=1000
  if (m_setDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_setDataCallback(const_cast<void *>(thisPtr), index, value, role);
  } else {
    // tag=1002
    return ::QAbstractItemModel::setData(index, value, role);
  }
}
// tag=1009
bool QAbstractItemModel_wrapper::setData_nocallback(const QModelIndex &index,
                                                    const QVariant &value,
                                                    int role) {
  // tag=1003
  return ::QAbstractItemModel::setData(index, value, role);
}
bool QAbstractItemModel_wrapper::setHeaderData(int section,
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
    return ::QAbstractItemModel::setHeaderData(section, orientation, value,
                                               role);
  }
}
// tag=1009
bool QAbstractItemModel_wrapper::setHeaderData_nocallback(
    int section, Qt::Orientation orientation, const QVariant &value, int role) {
  // tag=1003
  return ::QAbstractItemModel::setHeaderData(section, orientation, value, role);
}
QModelIndex QAbstractItemModel_wrapper::sibling(int row, int column,
                                                const QModelIndex &idx) const {
  // tag=1000
  if (m_siblingCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_siblingCallback(const_cast<void *>(thisPtr), row, column, idx);
  } else {
    // tag=1002
    return ::QAbstractItemModel::sibling(row, column, idx);
  }
}
// tag=1009
QModelIndex
QAbstractItemModel_wrapper::sibling_nocallback(int row, int column,
                                               const QModelIndex &idx) const {
  // tag=1003
  return ::QAbstractItemModel::sibling(row, column, idx);
}
void QAbstractItemModel_wrapper::sort(int column, Qt::SortOrder order) {
  // tag=1000
  if (m_sortCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_sortCallback(const_cast<void *>(thisPtr), column, order);
  } else {
    // tag=1002
    ::QAbstractItemModel::sort(column, order);
  }
}
// tag=1009
void QAbstractItemModel_wrapper::sort_nocallback(int column,
                                                 Qt::SortOrder order) {
  // tag=1003
  ::QAbstractItemModel::sort(column, order);
}
QSize QAbstractItemModel_wrapper::span(const QModelIndex &index) const {
  // tag=1000
  if (m_spanCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_spanCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1002
    return ::QAbstractItemModel::span(index);
  }
}
// tag=1009
QSize QAbstractItemModel_wrapper::span_nocallback(
    const QModelIndex &index) const {
  // tag=1003
  return ::QAbstractItemModel::span(index);
}
bool QAbstractItemModel_wrapper::submit() {
  // tag=1000
  if (m_submitCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_submitCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QAbstractItemModel::submit();
  }
}
// tag=1009
bool QAbstractItemModel_wrapper::submit_nocallback() {
  // tag=1003
  return ::QAbstractItemModel::submit();
}
QString QAbstractItemModel_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QAbstractItemModel::tr(s, c, n);
}

// tag=1005
QAbstractItemModel_wrapper::~QAbstractItemModel_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QAbstractItemModel *fromPtr(void *ptr) {
  return reinterpret_cast<QAbstractItemModel *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<
      QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QAbstractItemModel_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(cppObj);
}
void *c_QAbstractItemModel__constructor_QObject(void *parent_) {
  auto parent = reinterpret_cast<QObject *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QAbstractItemModel_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// beginInsertColumns(const QModelIndex & parent, int first, int last)
void c_QAbstractItemModel__beginInsertColumns_QModelIndex_int_int(void *thisObj,
                                                                  void *parent_,
                                                                  int first,
                                                                  int last) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->beginInsertColumns(parent, first, last);
}

// tag=1050
// beginInsertRows(const QModelIndex & parent, int first, int last)
void c_QAbstractItemModel__beginInsertRows_QModelIndex_int_int(void *thisObj,
                                                               void *parent_,
                                                               int first,
                                                               int last) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->beginInsertRows(parent, first, last);
}

// tag=1050
// beginMoveColumns(const QModelIndex & sourceParent, int sourceFirst, int
// sourceLast, const QModelIndex & destinationParent, int destinationColumn)
bool c_QAbstractItemModel__beginMoveColumns_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceFirst, int sourceLast,
    void *destinationParent_, int destinationColumn) {
  auto &sourceParent = *reinterpret_cast<QModelIndex *>(sourceParent_);
  auto &destinationParent =
      *reinterpret_cast<QModelIndex *>(destinationParent_);
  return
      // tag=1011

      // tag=1073
      fromWrapperPtr(thisObj)->beginMoveColumns(sourceParent, sourceFirst,
                                                sourceLast, destinationParent,
                                                destinationColumn);
}

// tag=1050
// beginMoveRows(const QModelIndex & sourceParent, int sourceFirst, int
// sourceLast, const QModelIndex & destinationParent, int destinationRow)
bool c_QAbstractItemModel__beginMoveRows_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceFirst, int sourceLast,
    void *destinationParent_, int destinationRow) {
  auto &sourceParent = *reinterpret_cast<QModelIndex *>(sourceParent_);
  auto &destinationParent =
      *reinterpret_cast<QModelIndex *>(destinationParent_);
  return
      // tag=1011

      // tag=1073
      fromWrapperPtr(thisObj)->beginMoveRows(sourceParent, sourceFirst,
                                             sourceLast, destinationParent,
                                             destinationRow);
}

// tag=1050
// beginRemoveColumns(const QModelIndex & parent, int first, int last)
void c_QAbstractItemModel__beginRemoveColumns_QModelIndex_int_int(void *thisObj,
                                                                  void *parent_,
                                                                  int first,
                                                                  int last) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->beginRemoveColumns(parent, first, last);
}

// tag=1050
// beginRemoveRows(const QModelIndex & parent, int first, int last)
void c_QAbstractItemModel__beginRemoveRows_QModelIndex_int_int(void *thisObj,
                                                               void *parent_,
                                                               int first,
                                                               int last) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->beginRemoveRows(parent, first, last);
}

// tag=1050
// beginResetModel()
void c_QAbstractItemModel__beginResetModel(void *thisObj) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->beginResetModel();
}

// tag=1050
// buddy(const QModelIndex & index) const
void *c_QAbstractItemModel__buddy_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->buddy_nocallback(index);
        } else {
          return targetPtr->buddy(index);
        }
      }()};
}

// tag=1050
// canFetchMore(const QModelIndex & parent) const
bool c_QAbstractItemModel__canFetchMore_QModelIndex(void *thisObj,
                                                    void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->canFetchMore_nocallback(parent);
        } else {
          return targetPtr->canFetchMore(parent);
        }
      }();
}

// tag=1050
// changePersistentIndex(const QModelIndex & from, const QModelIndex & to)
void c_QAbstractItemModel__changePersistentIndex_QModelIndex_QModelIndex(
    void *thisObj, void *from_, void *to_) {
  auto &from = *reinterpret_cast<QModelIndex *>(from_);
  auto &to = *reinterpret_cast<QModelIndex *>(to_);
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->changePersistentIndex(from, to);
}

// tag=1050
// changePersistentIndexList(const QList<QModelIndex > & from, const
// QList<QModelIndex > & to)
void c_QAbstractItemModel__changePersistentIndexList_QList_QModelIndex_QList_QModelIndex(
    void *thisObj, void *from_, void *to_) {
  auto &from = *reinterpret_cast<QList<QModelIndex> *>(from_);
  auto &to = *reinterpret_cast<QList<QModelIndex> *>(to_);
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->changePersistentIndexList(from, to);
}

// tag=1050
// checkIndex(const QModelIndex & index) const
bool c_QAbstractItemModel__checkIndex_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1010
      fromPtr(thisObj)->checkIndex(index);
}

// tag=1050
// clearItemData(const QModelIndex & index)
bool c_QAbstractItemModel__clearItemData_QModelIndex(void *thisObj,
                                                     void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->clearItemData_nocallback(index);
        } else {
          return targetPtr->clearItemData(index);
        }
      }();
}

// tag=1050
// columnCount(const QModelIndex & parent) const
int c_QAbstractItemModel__columnCount_QModelIndex(void *thisObj,
                                                  void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->columnCount_nocallback(parent);
        } else {
          return targetPtr->columnCount(parent);
        }
      }();
}

// tag=1050
// customEvent(QEvent * event)
void c_QAbstractItemModel__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// data(const QModelIndex & index, int role) const
void *c_QAbstractItemModel__data_QModelIndex_int(void *thisObj, void *index_,
                                                 int role) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QVariant>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->data_nocallback(index, role);
        } else {
          return targetPtr->data(index, role);
        }
      }()};
}

// tag=1050
// dataChanged(const QModelIndex & topLeft, const QModelIndex & bottomRight,
// const QList<int > & roles)
void c_QAbstractItemModel__dataChanged_QModelIndex_QModelIndex_QList_int(
    void *thisObj, void *topLeft_, void *bottomRight_, void *roles_) {
  auto &topLeft = *reinterpret_cast<QModelIndex *>(topLeft_);
  auto &bottomRight = *reinterpret_cast<QModelIndex *>(bottomRight_);
  auto &roles = *reinterpret_cast<QList<int> *>(roles_);
  // tag=1010
  fromPtr(thisObj)->dataChanged(topLeft, bottomRight, roles);
}

// tag=1079
void c_QAbstractItemModel__onDataChanged_QModelIndex_QModelIndex_QList_int(
    void *thisObj, void *contextQObject, void *callback) {
  auto instance = reinterpret_cast<QAbstractItemModel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractItemModel::dataChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1079
void c_QAbstractItemModel__onDestroyed_QObject(void *thisObj,
                                               void *contextQObject,
                                               void *callback) {
  auto instance = reinterpret_cast<QAbstractItemModel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractItemModel::destroyed,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// endInsertColumns()
void c_QAbstractItemModel__endInsertColumns(void *thisObj) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->endInsertColumns();
}

// tag=1050
// endInsertRows()
void c_QAbstractItemModel__endInsertRows(void *thisObj) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->endInsertRows();
}

// tag=1050
// endMoveColumns()
void c_QAbstractItemModel__endMoveColumns(void *thisObj) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->endMoveColumns();
}

// tag=1050
// endMoveRows()
void c_QAbstractItemModel__endMoveRows(void *thisObj) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->endMoveRows();
}

// tag=1050
// endRemoveColumns()
void c_QAbstractItemModel__endRemoveColumns(void *thisObj) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->endRemoveColumns();
}

// tag=1050
// endRemoveRows()
void c_QAbstractItemModel__endRemoveRows(void *thisObj) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->endRemoveRows();
}

// tag=1050
// endResetModel()
void c_QAbstractItemModel__endResetModel(void *thisObj) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->endResetModel();
}

// tag=1050
// event(QEvent * event)
bool c_QAbstractItemModel__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->event_nocallback(event);
        } else {
          return targetPtr->event(event);
        }
      }();
}

// tag=1050
// eventFilter(QObject * watched, QEvent * event)
bool c_QAbstractItemModel__eventFilter_QObject_QEvent(void *thisObj,
                                                      void *watched_,
                                                      void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->eventFilter_nocallback(watched, event);
        } else {
          return targetPtr->eventFilter(watched, event);
        }
      }();
}

// tag=1050
// fetchMore(const QModelIndex & parent)
void c_QAbstractItemModel__fetchMore_QModelIndex(void *thisObj, void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->fetchMore_nocallback(parent);
    } else {
      return targetPtr->fetchMore(parent);
    }
  }();
}

// tag=1050
// hasChildren(const QModelIndex & parent) const
bool c_QAbstractItemModel__hasChildren_QModelIndex(void *thisObj,
                                                   void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->hasChildren_nocallback(parent);
        } else {
          return targetPtr->hasChildren(parent);
        }
      }();
}

// tag=1050
// hasIndex(int row, int column, const QModelIndex & parent) const
bool c_QAbstractItemModel__hasIndex_int_int_QModelIndex(void *thisObj, int row,
                                                        int column,
                                                        void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1010
      fromPtr(thisObj)->hasIndex(row, column, parent);
}

// tag=1050
// headerData(int section, Qt::Orientation orientation, int role) const
void *c_QAbstractItemModel__headerData_int_Orientation_int(void *thisObj,
                                                           int section,
                                                           int orientation,
                                                           int role) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QVariant>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(targetPtr);
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
// headerDataChanged(Qt::Orientation orientation, int first, int last)
void c_QAbstractItemModel__headerDataChanged_Orientation_int_int(
    void *thisObj, int orientation, int first, int last) {
  // tag=1010
  fromPtr(thisObj)->headerDataChanged(static_cast<Qt::Orientation>(orientation),
                                      first, last);
}

// tag=1079
void c_QAbstractItemModel__onHeaderDataChanged_Orientation_int_int(
    void *thisObj, void *contextQObject, void *callback) {
  auto instance = reinterpret_cast<QAbstractItemModel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractItemModel::headerDataChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// index(int row, int column, const QModelIndex & parent) const
void *c_QAbstractItemModel__index_int_int_QModelIndex(void *thisObj, int row,
                                                      int column,
                                                      void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->index_nocallback(row, column, parent);
        } else {
          return targetPtr->index(row, column, parent);
        }
      }()};
}

// tag=1050
// insertColumns(int column, int count, const QModelIndex & parent)
bool c_QAbstractItemModel__insertColumns_int_int_QModelIndex(void *thisObj,
                                                             int column,
                                                             int count,
                                                             void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->insertColumns_nocallback(column, count, parent);
        } else {
          return targetPtr->insertColumns(column, count, parent);
        }
      }();
}

// tag=1050
// insertRows(int row, int count, const QModelIndex & parent)
bool c_QAbstractItemModel__insertRows_int_int_QModelIndex(void *thisObj,
                                                          int row, int count,
                                                          void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->insertRows_nocallback(row, count, parent);
        } else {
          return targetPtr->insertRows(row, count, parent);
        }
      }();
}

// tag=1050
// layoutAboutToBeChanged()
void c_QAbstractItemModel__layoutAboutToBeChanged(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->layoutAboutToBeChanged();
}

// tag=1079
void c_QAbstractItemModel__onLayoutAboutToBeChanged(void *thisObj,
                                                    void *contextQObject,
                                                    void *callback) {
  auto instance = reinterpret_cast<QAbstractItemModel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractItemModel::layoutAboutToBeChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// layoutChanged()
void c_QAbstractItemModel__layoutChanged(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->layoutChanged();
}

// tag=1079
void c_QAbstractItemModel__onLayoutChanged(void *thisObj, void *contextQObject,
                                           void *callback) {
  auto instance = reinterpret_cast<QAbstractItemModel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractItemModel::layoutChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// mimeTypes() const
void *c_QAbstractItemModel__mimeTypes(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QString>>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->mimeTypes_nocallback();
        } else {
          return targetPtr->mimeTypes();
        }
      }()};
}

// tag=1050
// moveColumn(const QModelIndex & sourceParent, int sourceColumn, const
// QModelIndex & destinationParent, int destinationChild)
bool c_QAbstractItemModel__moveColumn_QModelIndex_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceColumn,
    void *destinationParent_, int destinationChild) {
  auto &sourceParent = *reinterpret_cast<QModelIndex *>(sourceParent_);
  auto &destinationParent =
      *reinterpret_cast<QModelIndex *>(destinationParent_);
  return
      // tag=1010
      fromPtr(thisObj)->moveColumn(sourceParent, sourceColumn,
                                   destinationParent, destinationChild);
}

// tag=1050
// moveColumns(const QModelIndex & sourceParent, int sourceColumn, int count,
// const QModelIndex & destinationParent, int destinationChild)
bool c_QAbstractItemModel__moveColumns_QModelIndex_int_int_QModelIndex_int(
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
            QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(targetPtr);
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
// moveRow(const QModelIndex & sourceParent, int sourceRow, const QModelIndex &
// destinationParent, int destinationChild)
bool c_QAbstractItemModel__moveRow_QModelIndex_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceRow, void *destinationParent_,
    int destinationChild) {
  auto &sourceParent = *reinterpret_cast<QModelIndex *>(sourceParent_);
  auto &destinationParent =
      *reinterpret_cast<QModelIndex *>(destinationParent_);
  return
      // tag=1010
      fromPtr(thisObj)->moveRow(sourceParent, sourceRow, destinationParent,
                                destinationChild);
}

// tag=1050
// moveRows(const QModelIndex & sourceParent, int sourceRow, int count, const
// QModelIndex & destinationParent, int destinationChild)
bool c_QAbstractItemModel__moveRows_QModelIndex_int_int_QModelIndex_int(
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
            QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(targetPtr);
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
void *c_QAbstractItemModel__parentIndex_QModelIndex(void *thisObj,
                                                    void *child_) {
  auto &child = *reinterpret_cast<QModelIndex *>(child_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->parent_nocallback(child);
        } else {
          return targetPtr->parent(child);
        }
      }()};
}

// tag=1050
// persistentIndexList() const
void *c_QAbstractItemModel__persistentIndexList(void *thisObj) {
  return
      // tag=1011

      // tag=1073

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QModelIndex>>{
          fromWrapperPtr(thisObj)->persistentIndexList()};
}

// tag=1050
// removeColumn(int column, const QModelIndex & parent)
bool c_QAbstractItemModel__removeColumn_int_QModelIndex(void *thisObj,
                                                        int column,
                                                        void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1010
      fromPtr(thisObj)->removeColumn(column, parent);
}

// tag=1050
// removeColumns(int column, int count, const QModelIndex & parent)
bool c_QAbstractItemModel__removeColumns_int_int_QModelIndex(void *thisObj,
                                                             int column,
                                                             int count,
                                                             void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->removeColumns_nocallback(column, count, parent);
        } else {
          return targetPtr->removeColumns(column, count, parent);
        }
      }();
}

// tag=1050
// removeRow(int row, const QModelIndex & parent)
bool c_QAbstractItemModel__removeRow_int_QModelIndex(void *thisObj, int row,
                                                     void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1010
      fromPtr(thisObj)->removeRow(row, parent);
}

// tag=1050
// removeRows(int row, int count, const QModelIndex & parent)
bool c_QAbstractItemModel__removeRows_int_int_QModelIndex(void *thisObj,
                                                          int row, int count,
                                                          void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->removeRows_nocallback(row, count, parent);
        } else {
          return targetPtr->removeRows(row, count, parent);
        }
      }();
}

// tag=1050
// resetInternalData()
void c_QAbstractItemModel__resetInternalData(void *thisObj) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->resetInternalData_nocallback();
}

// tag=1050
// revert()
void c_QAbstractItemModel__revert(void *thisObj) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->revert_nocallback();
    } else {
      return targetPtr->revert();
    }
  }();
}

// tag=1050
// rowCount(const QModelIndex & parent) const
int c_QAbstractItemModel__rowCount_QModelIndex(void *thisObj, void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->rowCount_nocallback(parent);
        } else {
          return targetPtr->rowCount(parent);
        }
      }();
}

// tag=1050
// setData(const QModelIndex & index, const QVariant & value, int role)
bool c_QAbstractItemModel__setData_QModelIndex_QVariant_int(void *thisObj,
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
            QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->setData_nocallback(index, value, role);
        } else {
          return targetPtr->setData(index, value, role);
        }
      }();
}

// tag=1050
// setHeaderData(int section, Qt::Orientation orientation, const QVariant &
// value, int role)
bool c_QAbstractItemModel__setHeaderData_int_Orientation_QVariant_int(
    void *thisObj, int section, int orientation, void *value_, int role) {
  auto &value = *reinterpret_cast<QVariant *>(value_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(targetPtr);
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
// sibling(int row, int column, const QModelIndex & idx) const
void *c_QAbstractItemModel__sibling_int_int_QModelIndex(void *thisObj, int row,
                                                        int column,
                                                        void *idx_) {
  auto &idx = *reinterpret_cast<QModelIndex *>(idx_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->sibling_nocallback(row, column, idx);
        } else {
          return targetPtr->sibling(row, column, idx);
        }
      }()};
}

// tag=1050
// sort(int column, Qt::SortOrder order)
void c_QAbstractItemModel__sort_int_SortOrder(void *thisObj, int column,
                                              int order) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->sort_nocallback(column,
                                         static_cast<Qt::SortOrder>(order));
    } else {
      return targetPtr->sort(column, static_cast<Qt::SortOrder>(order));
    }
  }();
}

// tag=1050
// span(const QModelIndex & index) const
void *c_QAbstractItemModel__span_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->span_nocallback(index);
        } else {
          return targetPtr->span(index);
        }
      }()};
}

// tag=1050
// submit()
bool c_QAbstractItemModel__submit(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->submit_nocallback();
        } else {
          return targetPtr->submit();
        }
      }();
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QAbstractItemModel__tr_char_char_int(const char *s,
                                                    const char *c, int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::tr(s, c, n)};
}
void c_QAbstractItemModel__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QAbstractItemModel__registerVirtualMethodCallback(void *ptr,
                                                         void *callback,
                                                         int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 5752:
    wrapper->m_buddyCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::Callback_buddy>(
        callback);
    break;
  case 5753:
    wrapper->m_canFetchMoreCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_canFetchMore>(callback);
    break;
  case 5758:
    wrapper->m_clearItemDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_clearItemData>(callback);
    break;
  case 5759:
    wrapper->m_columnCountCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_columnCount>(callback);
    break;
  case 944:
    wrapper->m_customEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_customEvent>(callback);
    break;
  case 5761:
    wrapper->m_dataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::Callback_data>(
        callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::Callback_event>(
        callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_eventFilter>(callback);
    break;
  case 5778:
    wrapper->m_fetchMoreCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_fetchMore>(callback);
    break;
  case 5779:
    wrapper->m_hasChildrenCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_hasChildren>(callback);
    break;
  case 5781:
    wrapper->m_headerDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_headerData>(callback);
    break;
  case 5783:
    wrapper->m_indexCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::Callback_index>(
        callback);
    break;
  case 5786:
    wrapper->m_insertColumnsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_insertColumns>(callback);
    break;
  case 5788:
    wrapper->m_insertRowsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_insertRows>(callback);
    break;
  case 5795:
    wrapper->m_mimeTypesCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_mimeTypes>(callback);
    break;
  case 5797:
    wrapper->m_moveColumnsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_moveColumns>(callback);
    break;
  case 5799:
    wrapper->m_moveRowsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_moveRows>(callback);
    break;
  case 5801:
    wrapper->m_parentIndexCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_parentIndex>(callback);
    break;
  case 5806:
    wrapper->m_removeColumnsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_removeColumns>(callback);
    break;
  case 5809:
    wrapper->m_removeRowsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_removeRows>(callback);
    break;
  case 5810:
    wrapper->m_resetInternalDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_resetInternalData>(callback);
    break;
  case 5811:
    wrapper->m_revertCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::Callback_revert>(
        callback);
    break;
  case 5812:
    wrapper->m_rowCountCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_rowCount>(callback);
    break;
  case 5815:
    wrapper->m_setDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_setData>(callback);
    break;
  case 5816:
    wrapper->m_setHeaderDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_setHeaderData>(callback);
    break;
  case 5820:
    wrapper->m_siblingCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_sibling>(callback);
    break;
  case 5822:
    wrapper->m_sortCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::Callback_sort>(
        callback);
    break;
  case 5823:
    wrapper->m_spanCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::Callback_span>(
        callback);
    break;
  case 5825:
    wrapper->m_submitCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::Callback_submit>(
        callback);
    break;
  }
}
}
