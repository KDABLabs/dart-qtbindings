#include "QStandardItemModel_wrapper.h"

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
QStandardItemModel_wrapper::QStandardItemModel_wrapper(QObject *parent)
    : ::QStandardItemModel(parent) {}

// tag=1006
QStandardItemModel_wrapper::QStandardItemModel_wrapper(int rows, int columns,
                                                       QObject *parent)
    : ::QStandardItemModel(rows, columns, parent) {}
void QStandardItemModel_wrapper::appendColumn(
    const QList<QStandardItem *> &items) {
  // tag=1000

  // tag=1004
  ::QStandardItemModel::appendColumn(items);
}
void QStandardItemModel_wrapper::appendRow(QStandardItem *item) {
  // tag=1000

  // tag=1004
  ::QStandardItemModel::appendRow(item);
}
void QStandardItemModel_wrapper::appendRow(
    const QList<QStandardItem *> &items) {
  // tag=1000

  // tag=1004
  ::QStandardItemModel::appendRow(items);
}
QModelIndex QStandardItemModel_wrapper::buddy(const QModelIndex &index) const {
  // tag=1000
  if (m_buddyCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_buddyCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1002
    return ::QStandardItemModel::buddy(index);
  }
}
// tag=1009
QModelIndex
QStandardItemModel_wrapper::buddy_nocallback(const QModelIndex &index) const {
  // tag=1003
  return ::QStandardItemModel::buddy(index);
}
bool QStandardItemModel_wrapper::canFetchMore(const QModelIndex &parent) const {
  // tag=1000
  if (m_canFetchMoreCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_canFetchMoreCallback(const_cast<void *>(thisPtr), parent);
  } else {
    // tag=1002
    return ::QStandardItemModel::canFetchMore(parent);
  }
}
// tag=1009
bool QStandardItemModel_wrapper::canFetchMore_nocallback(
    const QModelIndex &parent) const {
  // tag=1003
  return ::QStandardItemModel::canFetchMore(parent);
}
void QStandardItemModel_wrapper::clear() {
  // tag=1000

  // tag=1004
  ::QStandardItemModel::clear();
}
bool QStandardItemModel_wrapper::clearItemData(const QModelIndex &index) {
  // tag=1000
  if (m_clearItemDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_clearItemDataCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1002
    return ::QStandardItemModel::clearItemData(index);
  }
}
// tag=1009
bool QStandardItemModel_wrapper::clearItemData_nocallback(
    const QModelIndex &index) {
  // tag=1003
  return ::QStandardItemModel::clearItemData(index);
}
int QStandardItemModel_wrapper::columnCount(const QModelIndex &parent) const {
  // tag=1000
  if (m_columnCountCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_columnCountCallback(const_cast<void *>(thisPtr), parent);
  } else {
    // tag=1002
    return ::QStandardItemModel::columnCount(parent);
  }
}
// tag=1009
int QStandardItemModel_wrapper::columnCount_nocallback(
    const QModelIndex &parent) const {
  // tag=1003
  return ::QStandardItemModel::columnCount(parent);
}
void QStandardItemModel_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QStandardItemModel::customEvent(event);
  }
}
// tag=1009
void QStandardItemModel_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QStandardItemModel::customEvent(event);
}
QVariant QStandardItemModel_wrapper::data(const QModelIndex &index,
                                          int role) const {
  // tag=1000
  if (m_dataCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_dataCallback(const_cast<void *>(thisPtr), index, role);
  } else {
    // tag=1002
    return ::QStandardItemModel::data(index, role);
  }
}
// tag=1009
QVariant QStandardItemModel_wrapper::data_nocallback(const QModelIndex &index,
                                                     int role) const {
  // tag=1003
  return ::QStandardItemModel::data(index, role);
}
bool QStandardItemModel_wrapper::event(QEvent *event) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    return ::QStandardItemModel::event(event);
  }
}
// tag=1009
bool QStandardItemModel_wrapper::event_nocallback(QEvent *event) {
  // tag=1003
  return ::QStandardItemModel::event(event);
}
bool QStandardItemModel_wrapper::eventFilter(QObject *watched, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    // tag=1002
    return ::QStandardItemModel::eventFilter(watched, event);
  }
}
// tag=1009
bool QStandardItemModel_wrapper::eventFilter_nocallback(QObject *watched,
                                                        QEvent *event) {
  // tag=1003
  return ::QStandardItemModel::eventFilter(watched, event);
}
void QStandardItemModel_wrapper::fetchMore(const QModelIndex &parent) {
  // tag=1000
  if (m_fetchMoreCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_fetchMoreCallback(const_cast<void *>(thisPtr), parent);
  } else {
    // tag=1002
    ::QStandardItemModel::fetchMore(parent);
  }
}
// tag=1009
void QStandardItemModel_wrapper::fetchMore_nocallback(
    const QModelIndex &parent) {
  // tag=1003
  ::QStandardItemModel::fetchMore(parent);
}
QList<QStandardItem *>
QStandardItemModel_wrapper::findItems(const QString &text) const {
  // tag=1000

  // tag=1004
  return ::QStandardItemModel::findItems(text);
}
bool QStandardItemModel_wrapper::hasChildren(const QModelIndex &parent) const {
  // tag=1000
  if (m_hasChildrenCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hasChildrenCallback(const_cast<void *>(thisPtr), parent);
  } else {
    // tag=1002
    return ::QStandardItemModel::hasChildren(parent);
  }
}
// tag=1009
bool QStandardItemModel_wrapper::hasChildren_nocallback(
    const QModelIndex &parent) const {
  // tag=1003
  return ::QStandardItemModel::hasChildren(parent);
}
QVariant QStandardItemModel_wrapper::headerData(int section,
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
    return ::QStandardItemModel::headerData(section, orientation, role);
  }
}
// tag=1009
QVariant QStandardItemModel_wrapper::headerData_nocallback(
    int section, Qt::Orientation orientation, int role) const {
  // tag=1003
  return ::QStandardItemModel::headerData(section, orientation, role);
}
QStandardItem *
QStandardItemModel_wrapper::horizontalHeaderItem(int column) const {
  // tag=1000

  // tag=1004
  return ::QStandardItemModel::horizontalHeaderItem(column);
}
QModelIndex QStandardItemModel_wrapper::index(int row, int column,
                                              const QModelIndex &parent) const {
  // tag=1000
  if (m_indexCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_indexCallback(const_cast<void *>(thisPtr), row, column, parent);
  } else {
    // tag=1002
    return ::QStandardItemModel::index(row, column, parent);
  }
}
// tag=1009
QModelIndex
QStandardItemModel_wrapper::index_nocallback(int row, int column,
                                             const QModelIndex &parent) const {
  // tag=1003
  return ::QStandardItemModel::index(row, column, parent);
}
QModelIndex
QStandardItemModel_wrapper::indexFromItem(const QStandardItem *item) const {
  // tag=1000

  // tag=1004
  return ::QStandardItemModel::indexFromItem(item);
}
void QStandardItemModel_wrapper::insertColumn(
    int column, const QList<QStandardItem *> &items) {
  // tag=1000

  // tag=1004
  ::QStandardItemModel::insertColumn(column, items);
}
bool QStandardItemModel_wrapper::insertColumns(int column, int count,
                                               const QModelIndex &parent) {
  // tag=1000
  if (m_insertColumnsCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_insertColumnsCallback(const_cast<void *>(thisPtr), column, count,
                                   parent);
  } else {
    // tag=1002
    return ::QStandardItemModel::insertColumns(column, count, parent);
  }
}
// tag=1009
bool QStandardItemModel_wrapper::insertColumns_nocallback(
    int column, int count, const QModelIndex &parent) {
  // tag=1003
  return ::QStandardItemModel::insertColumns(column, count, parent);
}
void QStandardItemModel_wrapper::insertRow(int row, QStandardItem *item) {
  // tag=1000

  // tag=1004
  ::QStandardItemModel::insertRow(row, item);
}
void QStandardItemModel_wrapper::insertRow(
    int row, const QList<QStandardItem *> &items) {
  // tag=1000

  // tag=1004
  ::QStandardItemModel::insertRow(row, items);
}
bool QStandardItemModel_wrapper::insertRows(int row, int count,
                                            const QModelIndex &parent) {
  // tag=1000
  if (m_insertRowsCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_insertRowsCallback(const_cast<void *>(thisPtr), row, count,
                                parent);
  } else {
    // tag=1002
    return ::QStandardItemModel::insertRows(row, count, parent);
  }
}
// tag=1009
bool QStandardItemModel_wrapper::insertRows_nocallback(
    int row, int count, const QModelIndex &parent) {
  // tag=1003
  return ::QStandardItemModel::insertRows(row, count, parent);
}
QStandardItem *QStandardItemModel_wrapper::invisibleRootItem() const {
  // tag=1000

  // tag=1004
  return ::QStandardItemModel::invisibleRootItem();
}
QStandardItem *QStandardItemModel_wrapper::item(int row, int column) const {
  // tag=1000

  // tag=1004
  return ::QStandardItemModel::item(row, column);
}
void QStandardItemModel_wrapper::itemChanged(QStandardItem *item) {
  // tag=1000

  // tag=1004
  ::QStandardItemModel::itemChanged(item);
}
QStandardItem *
QStandardItemModel_wrapper::itemFromIndex(const QModelIndex &index) const {
  // tag=1000

  // tag=1004
  return ::QStandardItemModel::itemFromIndex(index);
}
const QStandardItem *QStandardItemModel_wrapper::itemPrototype() const {
  // tag=1000

  // tag=1004
  return ::QStandardItemModel::itemPrototype();
}
QList<QString> QStandardItemModel_wrapper::mimeTypes() const {
  // tag=1000
  if (m_mimeTypesCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_mimeTypesCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QStandardItemModel::mimeTypes();
  }
}
// tag=1009
QList<QString> QStandardItemModel_wrapper::mimeTypes_nocallback() const {
  // tag=1003
  return ::QStandardItemModel::mimeTypes();
}
bool QStandardItemModel_wrapper::moveColumns(
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
    return ::QStandardItemModel::moveColumns(
        sourceParent, sourceColumn, count, destinationParent, destinationChild);
  }
}
// tag=1009
bool QStandardItemModel_wrapper::moveColumns_nocallback(
    const QModelIndex &sourceParent, int sourceColumn, int count,
    const QModelIndex &destinationParent, int destinationChild) {
  // tag=1003
  return ::QStandardItemModel::moveColumns(sourceParent, sourceColumn, count,
                                           destinationParent, destinationChild);
}
bool QStandardItemModel_wrapper::moveRows(const QModelIndex &sourceParent,
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
    return ::QStandardItemModel::moveRows(sourceParent, sourceRow, count,
                                          destinationParent, destinationChild);
  }
}
// tag=1009
bool QStandardItemModel_wrapper::moveRows_nocallback(
    const QModelIndex &sourceParent, int sourceRow, int count,
    const QModelIndex &destinationParent, int destinationChild) {
  // tag=1003
  return ::QStandardItemModel::moveRows(sourceParent, sourceRow, count,
                                        destinationParent, destinationChild);
}
QModelIndex QStandardItemModel_wrapper::parent(const QModelIndex &child) const {
  // tag=1000
  if (m_parentIndexCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_parentIndexCallback(const_cast<void *>(thisPtr), child);
  } else {
    // tag=1002
    return ::QStandardItemModel::parent(child);
  }
}
// tag=1009
QModelIndex
QStandardItemModel_wrapper::parent_nocallback(const QModelIndex &child) const {
  // tag=1003
  return ::QStandardItemModel::parent(child);
}
bool QStandardItemModel_wrapper::removeColumns(int column, int count,
                                               const QModelIndex &parent) {
  // tag=1000
  if (m_removeColumnsCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_removeColumnsCallback(const_cast<void *>(thisPtr), column, count,
                                   parent);
  } else {
    // tag=1002
    return ::QStandardItemModel::removeColumns(column, count, parent);
  }
}
// tag=1009
bool QStandardItemModel_wrapper::removeColumns_nocallback(
    int column, int count, const QModelIndex &parent) {
  // tag=1003
  return ::QStandardItemModel::removeColumns(column, count, parent);
}
bool QStandardItemModel_wrapper::removeRows(int row, int count,
                                            const QModelIndex &parent) {
  // tag=1000
  if (m_removeRowsCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_removeRowsCallback(const_cast<void *>(thisPtr), row, count,
                                parent);
  } else {
    // tag=1002
    return ::QStandardItemModel::removeRows(row, count, parent);
  }
}
// tag=1009
bool QStandardItemModel_wrapper::removeRows_nocallback(
    int row, int count, const QModelIndex &parent) {
  // tag=1003
  return ::QStandardItemModel::removeRows(row, count, parent);
}
void QStandardItemModel_wrapper::resetInternalData() {
  // tag=1000
  if (m_resetInternalDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_resetInternalDataCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QStandardItemModel::resetInternalData();
  }
}
// tag=1009
void QStandardItemModel_wrapper::resetInternalData_nocallback() {
  // tag=1003
  ::QStandardItemModel::resetInternalData();
}
void QStandardItemModel_wrapper::revert() {
  // tag=1000
  if (m_revertCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_revertCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QStandardItemModel::revert();
  }
}
// tag=1009
void QStandardItemModel_wrapper::revert_nocallback() {
  // tag=1003
  ::QStandardItemModel::revert();
}
int QStandardItemModel_wrapper::rowCount(const QModelIndex &parent) const {
  // tag=1000
  if (m_rowCountCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_rowCountCallback(const_cast<void *>(thisPtr), parent);
  } else {
    // tag=1002
    return ::QStandardItemModel::rowCount(parent);
  }
}
// tag=1009
int QStandardItemModel_wrapper::rowCount_nocallback(
    const QModelIndex &parent) const {
  // tag=1003
  return ::QStandardItemModel::rowCount(parent);
}
void QStandardItemModel_wrapper::setColumnCount(int columns) {
  // tag=1000

  // tag=1004
  ::QStandardItemModel::setColumnCount(columns);
}
bool QStandardItemModel_wrapper::setData(const QModelIndex &index,
                                         const QVariant &value, int role) {
  // tag=1000
  if (m_setDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_setDataCallback(const_cast<void *>(thisPtr), index, value, role);
  } else {
    // tag=1002
    return ::QStandardItemModel::setData(index, value, role);
  }
}
// tag=1009
bool QStandardItemModel_wrapper::setData_nocallback(const QModelIndex &index,
                                                    const QVariant &value,
                                                    int role) {
  // tag=1003
  return ::QStandardItemModel::setData(index, value, role);
}
bool QStandardItemModel_wrapper::setHeaderData(int section,
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
    return ::QStandardItemModel::setHeaderData(section, orientation, value,
                                               role);
  }
}
// tag=1009
bool QStandardItemModel_wrapper::setHeaderData_nocallback(
    int section, Qt::Orientation orientation, const QVariant &value, int role) {
  // tag=1003
  return ::QStandardItemModel::setHeaderData(section, orientation, value, role);
}
void QStandardItemModel_wrapper::setHorizontalHeaderItem(int column,
                                                         QStandardItem *item) {
  // tag=1000

  // tag=1004
  ::QStandardItemModel::setHorizontalHeaderItem(column, item);
}
void QStandardItemModel_wrapper::setHorizontalHeaderLabels(
    const QList<QString> &labels) {
  // tag=1000

  // tag=1004
  ::QStandardItemModel::setHorizontalHeaderLabels(labels);
}
void QStandardItemModel_wrapper::setItem(int row, QStandardItem *item) {
  // tag=1000

  // tag=1004
  ::QStandardItemModel::setItem(row, item);
}
void QStandardItemModel_wrapper::setItem(int row, int column,
                                         QStandardItem *item) {
  // tag=1000

  // tag=1004
  ::QStandardItemModel::setItem(row, column, item);
}
void QStandardItemModel_wrapper::setItemPrototype(const QStandardItem *item) {
  // tag=1000

  // tag=1004
  ::QStandardItemModel::setItemPrototype(item);
}
void QStandardItemModel_wrapper::setRowCount(int rows) {
  // tag=1000

  // tag=1004
  ::QStandardItemModel::setRowCount(rows);
}
void QStandardItemModel_wrapper::setSortRole(int role) {
  // tag=1000

  // tag=1004
  ::QStandardItemModel::setSortRole(role);
}
void QStandardItemModel_wrapper::setVerticalHeaderItem(int row,
                                                       QStandardItem *item) {
  // tag=1000

  // tag=1004
  ::QStandardItemModel::setVerticalHeaderItem(row, item);
}
void QStandardItemModel_wrapper::setVerticalHeaderLabels(
    const QList<QString> &labels) {
  // tag=1000

  // tag=1004
  ::QStandardItemModel::setVerticalHeaderLabels(labels);
}
QModelIndex QStandardItemModel_wrapper::sibling(int row, int column,
                                                const QModelIndex &idx) const {
  // tag=1000
  if (m_siblingCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_siblingCallback(const_cast<void *>(thisPtr), row, column, idx);
  } else {
    // tag=1002
    return ::QStandardItemModel::sibling(row, column, idx);
  }
}
// tag=1009
QModelIndex
QStandardItemModel_wrapper::sibling_nocallback(int row, int column,
                                               const QModelIndex &idx) const {
  // tag=1003
  return ::QStandardItemModel::sibling(row, column, idx);
}
void QStandardItemModel_wrapper::sort(int column, Qt::SortOrder order) {
  // tag=1000
  if (m_sortCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_sortCallback(const_cast<void *>(thisPtr), column, order);
  } else {
    // tag=1002
    ::QStandardItemModel::sort(column, order);
  }
}
// tag=1009
void QStandardItemModel_wrapper::sort_nocallback(int column,
                                                 Qt::SortOrder order) {
  // tag=1003
  ::QStandardItemModel::sort(column, order);
}
int QStandardItemModel_wrapper::sortRole() const {
  // tag=1000

  // tag=1004
  return ::QStandardItemModel::sortRole();
}
QSize QStandardItemModel_wrapper::span(const QModelIndex &index) const {
  // tag=1000
  if (m_spanCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_spanCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1002
    return ::QStandardItemModel::span(index);
  }
}
// tag=1009
QSize QStandardItemModel_wrapper::span_nocallback(
    const QModelIndex &index) const {
  // tag=1003
  return ::QStandardItemModel::span(index);
}
bool QStandardItemModel_wrapper::submit() {
  // tag=1000
  if (m_submitCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_submitCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QStandardItemModel::submit();
  }
}
// tag=1009
bool QStandardItemModel_wrapper::submit_nocallback() {
  // tag=1003
  return ::QStandardItemModel::submit();
}
QList<QStandardItem *> QStandardItemModel_wrapper::takeColumn(int column) {
  // tag=1000

  // tag=1004
  return ::QStandardItemModel::takeColumn(column);
}
QStandardItem *
QStandardItemModel_wrapper::takeHorizontalHeaderItem(int column) {
  // tag=1000

  // tag=1004
  return ::QStandardItemModel::takeHorizontalHeaderItem(column);
}
QStandardItem *QStandardItemModel_wrapper::takeItem(int row, int column) {
  // tag=1000

  // tag=1004
  return ::QStandardItemModel::takeItem(row, column);
}
QList<QStandardItem *> QStandardItemModel_wrapper::takeRow(int row) {
  // tag=1000

  // tag=1004
  return ::QStandardItemModel::takeRow(row);
}
QStandardItem *QStandardItemModel_wrapper::takeVerticalHeaderItem(int row) {
  // tag=1000

  // tag=1004
  return ::QStandardItemModel::takeVerticalHeaderItem(row);
}
QString QStandardItemModel_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QStandardItemModel::tr(s, c, n);
}
QStandardItem *QStandardItemModel_wrapper::verticalHeaderItem(int row) const {
  // tag=1000

  // tag=1004
  return ::QStandardItemModel::verticalHeaderItem(row);
}

// tag=1005
QStandardItemModel_wrapper::~QStandardItemModel_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QStandardItemModel *fromPtr(void *ptr) {
  return reinterpret_cast<QStandardItemModel *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QStandardItemModel_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<
      QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QStandardItemModel_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(cppObj);
}
void *c_QStandardItemModel__constructor_QObject(void *parent_) {
  auto parent = reinterpret_cast<QObject *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QStandardItemModel_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
void *c_QStandardItemModel__constructor_int_int_QObject(int rows, int columns,
                                                        void *parent_) {
  auto parent = reinterpret_cast<QObject *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QStandardItemModel_wrapper(
      rows, columns, parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// appendColumn(const QList<QStandardItem* > & items)
void c_QStandardItemModel__appendColumn_QList_QStandardItem(void *thisObj,
                                                            void *items_) {
  auto &items = *reinterpret_cast<QList<QStandardItem *> *>(items_);
  // tag=1010
  fromPtr(thisObj)->appendColumn(items);
}

// tag=1050
// appendRow(QStandardItem * item)
void c_QStandardItemModel__appendRow_QStandardItem(void *thisObj, void *item_) {
  auto item = reinterpret_cast<QStandardItem *>(item_);
  // tag=1010
  fromPtr(thisObj)->appendRow(item);
}

// tag=1050
// appendRow(const QList<QStandardItem* > & items)
void c_QStandardItemModel__appendRow_QList_QStandardItem(void *thisObj,
                                                         void *items_) {
  auto &items = *reinterpret_cast<QList<QStandardItem *> *>(items_);
  // tag=1010
  fromPtr(thisObj)->appendRow(items);
}

// tag=1050
// buddy(const QModelIndex & index) const
void *c_QStandardItemModel__buddy_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->buddy_nocallback(index);
        } else {
          return targetPtr->buddy(index);
        }
      }()};
}

// tag=1050
// canFetchMore(const QModelIndex & parent) const
bool c_QStandardItemModel__canFetchMore_QModelIndex(void *thisObj,
                                                    void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->canFetchMore_nocallback(parent);
        } else {
          return targetPtr->canFetchMore(parent);
        }
      }();
}

// tag=1050
// clear()
void c_QStandardItemModel__clear(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->clear();
}

// tag=1050
// clearItemData(const QModelIndex & index)
bool c_QStandardItemModel__clearItemData_QModelIndex(void *thisObj,
                                                     void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->clearItemData_nocallback(index);
        } else {
          return targetPtr->clearItemData(index);
        }
      }();
}

// tag=1050
// columnCount(const QModelIndex & parent) const
int c_QStandardItemModel__columnCount_QModelIndex(void *thisObj,
                                                  void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->columnCount_nocallback(parent);
        } else {
          return targetPtr->columnCount(parent);
        }
      }();
}

// tag=1050
// customEvent(QEvent * event)
void c_QStandardItemModel__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// data(const QModelIndex & index, int role) const
void *c_QStandardItemModel__data_QModelIndex_int(void *thisObj, void *index_,
                                                 int role) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QVariant>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->data_nocallback(index, role);
        } else {
          return targetPtr->data(index, role);
        }
      }()};
}

// tag=1079
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

// tag=1050
// event(QEvent * event)
bool c_QStandardItemModel__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->event_nocallback(event);
        } else {
          return targetPtr->event(event);
        }
      }();
}

// tag=1050
// eventFilter(QObject * watched, QEvent * event)
bool c_QStandardItemModel__eventFilter_QObject_QEvent(void *thisObj,
                                                      void *watched_,
                                                      void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->eventFilter_nocallback(watched, event);
        } else {
          return targetPtr->eventFilter(watched, event);
        }
      }();
}

// tag=1050
// fetchMore(const QModelIndex & parent)
void c_QStandardItemModel__fetchMore_QModelIndex(void *thisObj, void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  // tag=1016
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

// tag=1050
// findItems(const QString & text) const
void *c_QStandardItemModel__findItems_QString(void *thisObj,
                                              const char *text_) {
  const auto text = QString::fromUtf8(text_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QStandardItem *>>{
          fromPtr(thisObj)->findItems(text)};
}

// tag=1050
// hasChildren(const QModelIndex & parent) const
bool c_QStandardItemModel__hasChildren_QModelIndex(void *thisObj,
                                                   void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->hasChildren_nocallback(parent);
        } else {
          return targetPtr->hasChildren(parent);
        }
      }();
}

// tag=1050
// headerData(int section, Qt::Orientation orientation, int role) const
void *c_QStandardItemModel__headerData_int_Orientation_int(void *thisObj,
                                                           int section,
                                                           int orientation,
                                                           int role) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QVariant>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->headerData_nocallback(
              section, static_cast<Qt::Orientation>(orientation), role);
        } else {
          return targetPtr->headerData(
              section, static_cast<Qt::Orientation>(orientation), role);
        }
      }()};
}

// tag=1079
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

// tag=1050
// horizontalHeaderItem(int column) const
void *c_QStandardItemModel__horizontalHeaderItem_int(void *thisObj,
                                                     int column) {
  return
      // tag=1010
      fromPtr(thisObj)->horizontalHeaderItem(column);
}

// tag=1050
// index(int row, int column, const QModelIndex & parent) const
void *c_QStandardItemModel__index_int_int_QModelIndex(void *thisObj, int row,
                                                      int column,
                                                      void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->index_nocallback(row, column, parent);
        } else {
          return targetPtr->index(row, column, parent);
        }
      }()};
}

// tag=1050
// indexFromItem(const QStandardItem * item) const
void *c_QStandardItemModel__indexFromItem_QStandardItem(void *thisObj,
                                                        void *item_) {
  auto item = reinterpret_cast<QStandardItem *>(item_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{
          fromPtr(thisObj)->indexFromItem(item)};
}

// tag=1050
// insertColumn(int column, const QList<QStandardItem* > & items)
void c_QStandardItemModel__insertColumn_int_QList_QStandardItem(void *thisObj,
                                                                int column,
                                                                void *items_) {
  auto &items = *reinterpret_cast<QList<QStandardItem *> *>(items_);
  // tag=1010
  fromPtr(thisObj)->insertColumn(column, items);
}

// tag=1050
// insertColumns(int column, int count, const QModelIndex & parent)
bool c_QStandardItemModel__insertColumns_int_int_QModelIndex(void *thisObj,
                                                             int column,
                                                             int count,
                                                             void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->insertColumns_nocallback(column, count, parent);
        } else {
          return targetPtr->insertColumns(column, count, parent);
        }
      }();
}

// tag=1050
// insertRow(int row, QStandardItem * item)
void c_QStandardItemModel__insertRow_int_QStandardItem(void *thisObj, int row,
                                                       void *item_) {
  auto item = reinterpret_cast<QStandardItem *>(item_);
  // tag=1010
  fromPtr(thisObj)->insertRow(row, item);
}

// tag=1050
// insertRow(int row, const QList<QStandardItem* > & items)
void c_QStandardItemModel__insertRow_int_QList_QStandardItem(void *thisObj,
                                                             int row,
                                                             void *items_) {
  auto &items = *reinterpret_cast<QList<QStandardItem *> *>(items_);
  // tag=1010
  fromPtr(thisObj)->insertRow(row, items);
}

// tag=1050
// insertRows(int row, int count, const QModelIndex & parent)
bool c_QStandardItemModel__insertRows_int_int_QModelIndex(void *thisObj,
                                                          int row, int count,
                                                          void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->insertRows_nocallback(row, count, parent);
        } else {
          return targetPtr->insertRows(row, count, parent);
        }
      }();
}

// tag=1050
// invisibleRootItem() const
void *c_QStandardItemModel__invisibleRootItem(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->invisibleRootItem();
}

// tag=1050
// item(int row, int column) const
void *c_QStandardItemModel__item_int_int(void *thisObj, int row, int column) {
  return
      // tag=1010
      fromPtr(thisObj)->item(row, column);
}

// tag=1050
// itemChanged(QStandardItem * item)
void c_QStandardItemModel__itemChanged_QStandardItem(void *thisObj,
                                                     void *item_) {
  auto item = reinterpret_cast<QStandardItem *>(item_);
  // tag=1010
  fromPtr(thisObj)->itemChanged(item);
}

// tag=1079
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

// tag=1050
// itemFromIndex(const QModelIndex & index) const
void *c_QStandardItemModel__itemFromIndex_QModelIndex(void *thisObj,
                                                      void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1010
      fromPtr(thisObj)->itemFromIndex(index);
}

// tag=1050
// itemPrototype() const
void *c_QStandardItemModel__itemPrototype(void *thisObj) {
  return
      // tag=1010

      // tag=1069
      const_cast<void *>(
          static_cast<const void *>(fromPtr(thisObj)->itemPrototype()));
}

// tag=1079
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

// tag=1079
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

// tag=1050
// mimeTypes() const
void *c_QStandardItemModel__mimeTypes(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QString>>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(targetPtr);
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
bool c_QStandardItemModel__moveColumns_QModelIndex_int_int_QModelIndex_int(
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
            QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(targetPtr);
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
bool c_QStandardItemModel__moveRows_QModelIndex_int_int_QModelIndex_int(
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
            QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(targetPtr);
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
void *c_QStandardItemModel__parentIndex_QModelIndex(void *thisObj,
                                                    void *child_) {
  auto &child = *reinterpret_cast<QModelIndex *>(child_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->parent_nocallback(child);
        } else {
          return targetPtr->parent(child);
        }
      }()};
}

// tag=1050
// removeColumns(int column, int count, const QModelIndex & parent)
bool c_QStandardItemModel__removeColumns_int_int_QModelIndex(void *thisObj,
                                                             int column,
                                                             int count,
                                                             void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->removeColumns_nocallback(column, count, parent);
        } else {
          return targetPtr->removeColumns(column, count, parent);
        }
      }();
}

// tag=1050
// removeRows(int row, int count, const QModelIndex & parent)
bool c_QStandardItemModel__removeRows_int_int_QModelIndex(void *thisObj,
                                                          int row, int count,
                                                          void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->removeRows_nocallback(row, count, parent);
        } else {
          return targetPtr->removeRows(row, count, parent);
        }
      }();
}

// tag=1050
// resetInternalData()
void c_QStandardItemModel__resetInternalData(void *thisObj) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->resetInternalData_nocallback();
}

// tag=1050
// revert()
void c_QStandardItemModel__revert(void *thisObj) {
  // tag=1016
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

// tag=1050
// rowCount(const QModelIndex & parent) const
int c_QStandardItemModel__rowCount_QModelIndex(void *thisObj, void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->rowCount_nocallback(parent);
        } else {
          return targetPtr->rowCount(parent);
        }
      }();
}

// tag=1050
// setColumnCount(int columns)
void c_QStandardItemModel__setColumnCount_int(void *thisObj, int columns) {
  // tag=1010
  fromPtr(thisObj)->setColumnCount(columns);
}

// tag=1050
// setData(const QModelIndex & index, const QVariant & value, int role)
bool c_QStandardItemModel__setData_QModelIndex_QVariant_int(void *thisObj,
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
            QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(targetPtr);
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
bool c_QStandardItemModel__setHeaderData_int_Orientation_QVariant_int(
    void *thisObj, int section, int orientation, void *value_, int role) {
  auto &value = *reinterpret_cast<QVariant *>(value_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(targetPtr);
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
// setHorizontalHeaderItem(int column, QStandardItem * item)
void c_QStandardItemModel__setHorizontalHeaderItem_int_QStandardItem(
    void *thisObj, int column, void *item_) {
  auto item = reinterpret_cast<QStandardItem *>(item_);
  // tag=1010
  fromPtr(thisObj)->setHorizontalHeaderItem(column, item);
}

// tag=1050
// setHorizontalHeaderLabels(const QList<QString > & labels)
void c_QStandardItemModel__setHorizontalHeaderLabels_QList_QString(
    void *thisObj, void *labels_) {
  auto &labels = *reinterpret_cast<QList<QString> *>(labels_);
  // tag=1010
  fromPtr(thisObj)->setHorizontalHeaderLabels(labels);
}

// tag=1050
// setItem(int row, QStandardItem * item)
void c_QStandardItemModel__setItem_int_QStandardItem(void *thisObj, int row,
                                                     void *item_) {
  auto item = reinterpret_cast<QStandardItem *>(item_);
  // tag=1010
  fromPtr(thisObj)->setItem(row, item);
}

// tag=1050
// setItem(int row, int column, QStandardItem * item)
void c_QStandardItemModel__setItem_int_int_QStandardItem(void *thisObj, int row,
                                                         int column,
                                                         void *item_) {
  auto item = reinterpret_cast<QStandardItem *>(item_);
  // tag=1010
  fromPtr(thisObj)->setItem(row, column, item);
}

// tag=1050
// setItemPrototype(const QStandardItem * item)
void c_QStandardItemModel__setItemPrototype_QStandardItem(void *thisObj,
                                                          void *item_) {
  auto item = reinterpret_cast<QStandardItem *>(item_);
  // tag=1010
  fromPtr(thisObj)->setItemPrototype(item);
}

// tag=1050
// setRowCount(int rows)
void c_QStandardItemModel__setRowCount_int(void *thisObj, int rows) {
  // tag=1010
  fromPtr(thisObj)->setRowCount(rows);
}

// tag=1050
// setSortRole(int role)
void c_QStandardItemModel__setSortRole_int(void *thisObj, int role) {
  // tag=1010
  fromPtr(thisObj)->setSortRole(role);
}

// tag=1050
// setVerticalHeaderItem(int row, QStandardItem * item)
void c_QStandardItemModel__setVerticalHeaderItem_int_QStandardItem(
    void *thisObj, int row, void *item_) {
  auto item = reinterpret_cast<QStandardItem *>(item_);
  // tag=1010
  fromPtr(thisObj)->setVerticalHeaderItem(row, item);
}

// tag=1050
// setVerticalHeaderLabels(const QList<QString > & labels)
void c_QStandardItemModel__setVerticalHeaderLabels_QList_QString(
    void *thisObj, void *labels_) {
  auto &labels = *reinterpret_cast<QList<QString> *>(labels_);
  // tag=1010
  fromPtr(thisObj)->setVerticalHeaderLabels(labels);
}

// tag=1050
// sibling(int row, int column, const QModelIndex & idx) const
void *c_QStandardItemModel__sibling_int_int_QModelIndex(void *thisObj, int row,
                                                        int column,
                                                        void *idx_) {
  auto &idx = *reinterpret_cast<QModelIndex *>(idx_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->sibling_nocallback(row, column, idx);
        } else {
          return targetPtr->sibling(row, column, idx);
        }
      }()};
}

// tag=1050
// sort(int column, Qt::SortOrder order)
void c_QStandardItemModel__sort_int_SortOrder(void *thisObj, int column,
                                              int order) {
  // tag=1016
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

// tag=1050
// sortRole() const
int c_QStandardItemModel__sortRole(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->sortRole();
}

// tag=1050
// span(const QModelIndex & index) const
void *c_QStandardItemModel__span_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->span_nocallback(index);
        } else {
          return targetPtr->span(index);
        }
      }()};
}

// tag=1050
// submit()
bool c_QStandardItemModel__submit(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QStandardItemModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->submit_nocallback();
        } else {
          return targetPtr->submit();
        }
      }();
}

// tag=1050
// takeColumn(int column)
void *c_QStandardItemModel__takeColumn_int(void *thisObj, int column) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QStandardItem *>>{
          fromPtr(thisObj)->takeColumn(column)};
}

// tag=1050
// takeHorizontalHeaderItem(int column)
void *c_QStandardItemModel__takeHorizontalHeaderItem_int(void *thisObj,
                                                         int column) {
  return
      // tag=1010
      fromPtr(thisObj)->takeHorizontalHeaderItem(column);
}

// tag=1050
// takeItem(int row, int column)
void *c_QStandardItemModel__takeItem_int_int(void *thisObj, int row,
                                             int column) {
  return
      // tag=1010
      fromPtr(thisObj)->takeItem(row, column);
}

// tag=1050
// takeRow(int row)
void *c_QStandardItemModel__takeRow_int(void *thisObj, int row) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QStandardItem *>>{
          fromPtr(thisObj)->takeRow(row)};
}

// tag=1050
// takeVerticalHeaderItem(int row)
void *c_QStandardItemModel__takeVerticalHeaderItem_int(void *thisObj, int row) {
  return
      // tag=1010
      fromPtr(thisObj)->takeVerticalHeaderItem(row);
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QStandardItemModel__tr_char_char_int(const char *s,
                                                    const char *c, int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QStandardItemModel_wrapper::tr(s, c, n)};
}

// tag=1050
// verticalHeaderItem(int row) const
void *c_QStandardItemModel__verticalHeaderItem_int(void *thisObj, int row) {
  return
      // tag=1010
      fromPtr(thisObj)->verticalHeaderItem(row);
}
void c_QStandardItemModel__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QStandardItemModel__registerVirtualMethodCallback(void *ptr,
                                                         void *callback,
                                                         int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 5752:
    wrapper->m_buddyCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStandardItemModel_wrapper::Callback_buddy>(
        callback);
    break;
  case 5753:
    wrapper->m_canFetchMoreCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_canFetchMore>(callback);
    break;
  case 5758:
    wrapper->m_clearItemDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_clearItemData>(callback);
    break;
  case 5759:
    wrapper->m_columnCountCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_columnCount>(callback);
    break;
  case 944:
    wrapper->m_customEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_customEvent>(callback);
    break;
  case 5761:
    wrapper->m_dataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStandardItemModel_wrapper::Callback_data>(
        callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStandardItemModel_wrapper::Callback_event>(
        callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_eventFilter>(callback);
    break;
  case 5778:
    wrapper->m_fetchMoreCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_fetchMore>(callback);
    break;
  case 5779:
    wrapper->m_hasChildrenCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_hasChildren>(callback);
    break;
  case 5781:
    wrapper->m_headerDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_headerData>(callback);
    break;
  case 5783:
    wrapper->m_indexCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStandardItemModel_wrapper::Callback_index>(
        callback);
    break;
  case 5786:
    wrapper->m_insertColumnsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_insertColumns>(callback);
    break;
  case 5788:
    wrapper->m_insertRowsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_insertRows>(callback);
    break;
  case 5795:
    wrapper->m_mimeTypesCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_mimeTypes>(callback);
    break;
  case 5797:
    wrapper->m_moveColumnsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_moveColumns>(callback);
    break;
  case 5799:
    wrapper->m_moveRowsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_moveRows>(callback);
    break;
  case 5801:
    wrapper->m_parentIndexCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_parentIndex>(callback);
    break;
  case 5806:
    wrapper->m_removeColumnsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_removeColumns>(callback);
    break;
  case 5809:
    wrapper->m_removeRowsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_removeRows>(callback);
    break;
  case 5810:
    wrapper->m_resetInternalDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_resetInternalData>(callback);
    break;
  case 5811:
    wrapper->m_revertCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStandardItemModel_wrapper::Callback_revert>(
        callback);
    break;
  case 5812:
    wrapper->m_rowCountCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_rowCount>(callback);
    break;
  case 5815:
    wrapper->m_setDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_setData>(callback);
    break;
  case 5816:
    wrapper->m_setHeaderDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_setHeaderData>(callback);
    break;
  case 5820:
    wrapper->m_siblingCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStandardItemModel_wrapper::
                             Callback_sibling>(callback);
    break;
  case 5822:
    wrapper->m_sortCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStandardItemModel_wrapper::Callback_sort>(
        callback);
    break;
  case 5823:
    wrapper->m_spanCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStandardItemModel_wrapper::Callback_span>(
        callback);
    break;
  case 5825:
    wrapper->m_submitCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStandardItemModel_wrapper::Callback_submit>(
        callback);
    break;
  }
}
}
