#include "QAbstractProxyModel_wrapper.h"

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
QAbstractProxyModel_wrapper::QAbstractProxyModel_wrapper(QObject *parent)
    : ::QAbstractProxyModel(parent) {}
QModelIndex QAbstractProxyModel_wrapper::buddy(const QModelIndex &index) const {
  // tag=1000
  if (m_buddyCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_buddyCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1002
    return ::QAbstractProxyModel::buddy(index);
  }
}
// tag=1009
QModelIndex
QAbstractProxyModel_wrapper::buddy_nocallback(const QModelIndex &index) const {
  // tag=1003
  return ::QAbstractProxyModel::buddy(index);
}
bool QAbstractProxyModel_wrapper::canFetchMore(
    const QModelIndex &parent) const {
  // tag=1000
  if (m_canFetchMoreCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_canFetchMoreCallback(const_cast<void *>(thisPtr), parent);
  } else {
    // tag=1002
    return ::QAbstractProxyModel::canFetchMore(parent);
  }
}
// tag=1009
bool QAbstractProxyModel_wrapper::canFetchMore_nocallback(
    const QModelIndex &parent) const {
  // tag=1003
  return ::QAbstractProxyModel::canFetchMore(parent);
}
bool QAbstractProxyModel_wrapper::clearItemData(const QModelIndex &index) {
  // tag=1000
  if (m_clearItemDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_clearItemDataCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1002
    return ::QAbstractProxyModel::clearItemData(index);
  }
}
// tag=1009
bool QAbstractProxyModel_wrapper::clearItemData_nocallback(
    const QModelIndex &index) {
  // tag=1003
  return ::QAbstractProxyModel::clearItemData(index);
}
int QAbstractProxyModel_wrapper::columnCount(const QModelIndex &parent) const {
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
int QAbstractProxyModel_wrapper::columnCount_nocallback(
    const QModelIndex &parent) const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
void QAbstractProxyModel_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QAbstractProxyModel::customEvent(event);
  }
}
// tag=1009
void QAbstractProxyModel_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QAbstractProxyModel::customEvent(event);
}
QVariant QAbstractProxyModel_wrapper::data(const QModelIndex &proxyIndex,
                                           int role) const {
  // tag=1000
  if (m_dataCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_dataCallback(const_cast<void *>(thisPtr), proxyIndex, role);
  } else {
    // tag=1002
    return ::QAbstractProxyModel::data(proxyIndex, role);
  }
}
// tag=1009
QVariant
QAbstractProxyModel_wrapper::data_nocallback(const QModelIndex &proxyIndex,
                                             int role) const {
  // tag=1003
  return ::QAbstractProxyModel::data(proxyIndex, role);
}
bool QAbstractProxyModel_wrapper::event(QEvent *event) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    return ::QAbstractProxyModel::event(event);
  }
}
// tag=1009
bool QAbstractProxyModel_wrapper::event_nocallback(QEvent *event) {
  // tag=1003
  return ::QAbstractProxyModel::event(event);
}
bool QAbstractProxyModel_wrapper::eventFilter(QObject *watched, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    // tag=1002
    return ::QAbstractProxyModel::eventFilter(watched, event);
  }
}
// tag=1009
bool QAbstractProxyModel_wrapper::eventFilter_nocallback(QObject *watched,
                                                         QEvent *event) {
  // tag=1003
  return ::QAbstractProxyModel::eventFilter(watched, event);
}
void QAbstractProxyModel_wrapper::fetchMore(const QModelIndex &parent) {
  // tag=1000
  if (m_fetchMoreCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_fetchMoreCallback(const_cast<void *>(thisPtr), parent);
  } else {
    // tag=1002
    ::QAbstractProxyModel::fetchMore(parent);
  }
}
// tag=1009
void QAbstractProxyModel_wrapper::fetchMore_nocallback(
    const QModelIndex &parent) {
  // tag=1003
  ::QAbstractProxyModel::fetchMore(parent);
}
bool QAbstractProxyModel_wrapper::hasChildren(const QModelIndex &parent) const {
  // tag=1000
  if (m_hasChildrenCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hasChildrenCallback(const_cast<void *>(thisPtr), parent);
  } else {
    // tag=1002
    return ::QAbstractProxyModel::hasChildren(parent);
  }
}
// tag=1009
bool QAbstractProxyModel_wrapper::hasChildren_nocallback(
    const QModelIndex &parent) const {
  // tag=1003
  return ::QAbstractProxyModel::hasChildren(parent);
}
QVariant QAbstractProxyModel_wrapper::headerData(int section,
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
    return ::QAbstractProxyModel::headerData(section, orientation, role);
  }
}
// tag=1009
QVariant QAbstractProxyModel_wrapper::headerData_nocallback(
    int section, Qt::Orientation orientation, int role) const {
  // tag=1003
  return ::QAbstractProxyModel::headerData(section, orientation, role);
}
QModelIndex
QAbstractProxyModel_wrapper::index(int row, int column,
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
QAbstractProxyModel_wrapper::index_nocallback(int row, int column,
                                              const QModelIndex &parent) const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
bool QAbstractProxyModel_wrapper::insertColumns(int column, int count,
                                                const QModelIndex &parent) {
  // tag=1000
  if (m_insertColumnsCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_insertColumnsCallback(const_cast<void *>(thisPtr), column, count,
                                   parent);
  } else {
    // tag=1002
    return ::QAbstractProxyModel::insertColumns(column, count, parent);
  }
}
// tag=1009
bool QAbstractProxyModel_wrapper::insertColumns_nocallback(
    int column, int count, const QModelIndex &parent) {
  // tag=1003
  return ::QAbstractProxyModel::insertColumns(column, count, parent);
}
bool QAbstractProxyModel_wrapper::insertRows(int row, int count,
                                             const QModelIndex &parent) {
  // tag=1000
  if (m_insertRowsCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_insertRowsCallback(const_cast<void *>(thisPtr), row, count,
                                parent);
  } else {
    // tag=1002
    return ::QAbstractProxyModel::insertRows(row, count, parent);
  }
}
// tag=1009
bool QAbstractProxyModel_wrapper::insertRows_nocallback(
    int row, int count, const QModelIndex &parent) {
  // tag=1003
  return ::QAbstractProxyModel::insertRows(row, count, parent);
}
QModelIndex QAbstractProxyModel_wrapper::mapFromSource(
    const QModelIndex &sourceIndex) const {
  // tag=1000
  if (m_mapFromSourceCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_mapFromSourceCallback(const_cast<void *>(thisPtr), sourceIndex);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
QModelIndex QAbstractProxyModel_wrapper::mapFromSource_nocallback(
    const QModelIndex &sourceIndex) const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
QItemSelection QAbstractProxyModel_wrapper::mapSelectionFromSource(
    const QItemSelection &selection) const {
  // tag=1000
  if (m_mapSelectionFromSourceCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_mapSelectionFromSourceCallback(const_cast<void *>(thisPtr),
                                             selection);
  } else {
    // tag=1002
    return ::QAbstractProxyModel::mapSelectionFromSource(selection);
  }
}
// tag=1009
QItemSelection QAbstractProxyModel_wrapper::mapSelectionFromSource_nocallback(
    const QItemSelection &selection) const {
  // tag=1003
  return ::QAbstractProxyModel::mapSelectionFromSource(selection);
}
QItemSelection QAbstractProxyModel_wrapper::mapSelectionToSource(
    const QItemSelection &selection) const {
  // tag=1000
  if (m_mapSelectionToSourceCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_mapSelectionToSourceCallback(const_cast<void *>(thisPtr),
                                           selection);
  } else {
    // tag=1002
    return ::QAbstractProxyModel::mapSelectionToSource(selection);
  }
}
// tag=1009
QItemSelection QAbstractProxyModel_wrapper::mapSelectionToSource_nocallback(
    const QItemSelection &selection) const {
  // tag=1003
  return ::QAbstractProxyModel::mapSelectionToSource(selection);
}
QModelIndex
QAbstractProxyModel_wrapper::mapToSource(const QModelIndex &proxyIndex) const {
  // tag=1000
  if (m_mapToSourceCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_mapToSourceCallback(const_cast<void *>(thisPtr), proxyIndex);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
QModelIndex QAbstractProxyModel_wrapper::mapToSource_nocallback(
    const QModelIndex &proxyIndex) const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
QList<QString> QAbstractProxyModel_wrapper::mimeTypes() const {
  // tag=1000
  if (m_mimeTypesCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_mimeTypesCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QAbstractProxyModel::mimeTypes();
  }
}
// tag=1009
QList<QString> QAbstractProxyModel_wrapper::mimeTypes_nocallback() const {
  // tag=1003
  return ::QAbstractProxyModel::mimeTypes();
}
bool QAbstractProxyModel_wrapper::moveColumns(
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
    return ::QAbstractProxyModel::moveColumns(
        sourceParent, sourceColumn, count, destinationParent, destinationChild);
  }
}
// tag=1009
bool QAbstractProxyModel_wrapper::moveColumns_nocallback(
    const QModelIndex &sourceParent, int sourceColumn, int count,
    const QModelIndex &destinationParent, int destinationChild) {
  // tag=1003
  return ::QAbstractProxyModel::moveColumns(
      sourceParent, sourceColumn, count, destinationParent, destinationChild);
}
bool QAbstractProxyModel_wrapper::moveRows(const QModelIndex &sourceParent,
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
    return ::QAbstractProxyModel::moveRows(sourceParent, sourceRow, count,
                                           destinationParent, destinationChild);
  }
}
// tag=1009
bool QAbstractProxyModel_wrapper::moveRows_nocallback(
    const QModelIndex &sourceParent, int sourceRow, int count,
    const QModelIndex &destinationParent, int destinationChild) {
  // tag=1003
  return ::QAbstractProxyModel::moveRows(sourceParent, sourceRow, count,
                                         destinationParent, destinationChild);
}
QModelIndex
QAbstractProxyModel_wrapper::parent(const QModelIndex &child) const {
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
QAbstractProxyModel_wrapper::parent_nocallback(const QModelIndex &child) const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
bool QAbstractProxyModel_wrapper::removeColumns(int column, int count,
                                                const QModelIndex &parent) {
  // tag=1000
  if (m_removeColumnsCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_removeColumnsCallback(const_cast<void *>(thisPtr), column, count,
                                   parent);
  } else {
    // tag=1002
    return ::QAbstractProxyModel::removeColumns(column, count, parent);
  }
}
// tag=1009
bool QAbstractProxyModel_wrapper::removeColumns_nocallback(
    int column, int count, const QModelIndex &parent) {
  // tag=1003
  return ::QAbstractProxyModel::removeColumns(column, count, parent);
}
bool QAbstractProxyModel_wrapper::removeRows(int row, int count,
                                             const QModelIndex &parent) {
  // tag=1000
  if (m_removeRowsCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_removeRowsCallback(const_cast<void *>(thisPtr), row, count,
                                parent);
  } else {
    // tag=1002
    return ::QAbstractProxyModel::removeRows(row, count, parent);
  }
}
// tag=1009
bool QAbstractProxyModel_wrapper::removeRows_nocallback(
    int row, int count, const QModelIndex &parent) {
  // tag=1003
  return ::QAbstractProxyModel::removeRows(row, count, parent);
}
void QAbstractProxyModel_wrapper::resetInternalData() {
  // tag=1000
  if (m_resetInternalDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_resetInternalDataCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QAbstractProxyModel::resetInternalData();
  }
}
// tag=1009
void QAbstractProxyModel_wrapper::resetInternalData_nocallback() {
  // tag=1003
  ::QAbstractProxyModel::resetInternalData();
}
void QAbstractProxyModel_wrapper::revert() {
  // tag=1000
  if (m_revertCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_revertCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QAbstractProxyModel::revert();
  }
}
// tag=1009
void QAbstractProxyModel_wrapper::revert_nocallback() {
  // tag=1003
  ::QAbstractProxyModel::revert();
}
int QAbstractProxyModel_wrapper::rowCount(const QModelIndex &parent) const {
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
int QAbstractProxyModel_wrapper::rowCount_nocallback(
    const QModelIndex &parent) const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
bool QAbstractProxyModel_wrapper::setData(const QModelIndex &index,
                                          const QVariant &value, int role) {
  // tag=1000
  if (m_setDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_setDataCallback(const_cast<void *>(thisPtr), index, value, role);
  } else {
    // tag=1002
    return ::QAbstractProxyModel::setData(index, value, role);
  }
}
// tag=1009
bool QAbstractProxyModel_wrapper::setData_nocallback(const QModelIndex &index,
                                                     const QVariant &value,
                                                     int role) {
  // tag=1003
  return ::QAbstractProxyModel::setData(index, value, role);
}
bool QAbstractProxyModel_wrapper::setHeaderData(int section,
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
    return ::QAbstractProxyModel::setHeaderData(section, orientation, value,
                                                role);
  }
}
// tag=1009
bool QAbstractProxyModel_wrapper::setHeaderData_nocallback(
    int section, Qt::Orientation orientation, const QVariant &value, int role) {
  // tag=1003
  return ::QAbstractProxyModel::setHeaderData(section, orientation, value,
                                              role);
}
void QAbstractProxyModel_wrapper::setSourceModel(
    QAbstractItemModel *sourceModel) {
  // tag=1000
  if (m_setSourceModelCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setSourceModelCallback(const_cast<void *>(thisPtr), sourceModel);
  } else {
    // tag=1002
    ::QAbstractProxyModel::setSourceModel(sourceModel);
  }
}
// tag=1009
void QAbstractProxyModel_wrapper::setSourceModel_nocallback(
    QAbstractItemModel *sourceModel) {
  // tag=1003
  ::QAbstractProxyModel::setSourceModel(sourceModel);
}
QModelIndex QAbstractProxyModel_wrapper::sibling(int row, int column,
                                                 const QModelIndex &idx) const {
  // tag=1000
  if (m_siblingCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_siblingCallback(const_cast<void *>(thisPtr), row, column, idx);
  } else {
    // tag=1002
    return ::QAbstractProxyModel::sibling(row, column, idx);
  }
}
// tag=1009
QModelIndex
QAbstractProxyModel_wrapper::sibling_nocallback(int row, int column,
                                                const QModelIndex &idx) const {
  // tag=1003
  return ::QAbstractProxyModel::sibling(row, column, idx);
}
void QAbstractProxyModel_wrapper::sort(int column, Qt::SortOrder order) {
  // tag=1000
  if (m_sortCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_sortCallback(const_cast<void *>(thisPtr), column, order);
  } else {
    // tag=1002
    ::QAbstractProxyModel::sort(column, order);
  }
}
// tag=1009
void QAbstractProxyModel_wrapper::sort_nocallback(int column,
                                                  Qt::SortOrder order) {
  // tag=1003
  ::QAbstractProxyModel::sort(column, order);
}
QAbstractItemModel *QAbstractProxyModel_wrapper::sourceModel() const {
  // tag=1000

  // tag=1004
  return ::QAbstractProxyModel::sourceModel();
}
QSize QAbstractProxyModel_wrapper::span(const QModelIndex &index) const {
  // tag=1000
  if (m_spanCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_spanCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1002
    return ::QAbstractProxyModel::span(index);
  }
}
// tag=1009
QSize QAbstractProxyModel_wrapper::span_nocallback(
    const QModelIndex &index) const {
  // tag=1003
  return ::QAbstractProxyModel::span(index);
}
bool QAbstractProxyModel_wrapper::submit() {
  // tag=1000
  if (m_submitCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_submitCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QAbstractProxyModel::submit();
  }
}
// tag=1009
bool QAbstractProxyModel_wrapper::submit_nocallback() {
  // tag=1003
  return ::QAbstractProxyModel::submit();
}
QString QAbstractProxyModel_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QAbstractProxyModel::tr(s, c, n);
}

// tag=1005
QAbstractProxyModel_wrapper::~QAbstractProxyModel_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QAbstractProxyModel *fromPtr(void *ptr) {
  return reinterpret_cast<QAbstractProxyModel *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<
      QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QAbstractProxyModel_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(cppObj);
}
void *c_QAbstractProxyModel__constructor_QObject(void *parent_) {
  auto parent = reinterpret_cast<QObject *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// buddy(const QModelIndex & index) const
void *c_QAbstractProxyModel__buddy_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(
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
bool c_QAbstractProxyModel__canFetchMore_QModelIndex(void *thisObj,
                                                     void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(
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
bool c_QAbstractProxyModel__clearItemData_QModelIndex(void *thisObj,
                                                      void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(
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
int c_QAbstractProxyModel__columnCount_QModelIndex(void *thisObj,
                                                   void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(
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
void c_QAbstractProxyModel__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// data(const QModelIndex & proxyIndex, int role) const
void *c_QAbstractProxyModel__data_QModelIndex_int(void *thisObj,
                                                  void *proxyIndex_, int role) {
  auto &proxyIndex = *reinterpret_cast<QModelIndex *>(proxyIndex_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QVariant>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->data_nocallback(proxyIndex, role);
        } else {
          return targetPtr->data(proxyIndex, role);
        }
      }()};
}

// tag=1079
void c_QAbstractProxyModel__onDataChanged_QModelIndex_QModelIndex_QList_int(
    void *thisObj, void *contextQObject, void *callback) {
  auto instance = reinterpret_cast<QAbstractProxyModel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractProxyModel::dataChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// event(QEvent * event)
bool c_QAbstractProxyModel__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(
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
bool c_QAbstractProxyModel__eventFilter_QObject_QEvent(void *thisObj,
                                                       void *watched_,
                                                       void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(
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
void c_QAbstractProxyModel__fetchMore_QModelIndex(void *thisObj,
                                                  void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(
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
bool c_QAbstractProxyModel__hasChildren_QModelIndex(void *thisObj,
                                                    void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(
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
void *c_QAbstractProxyModel__headerData_int_Orientation_int(void *thisObj,
                                                            int section,
                                                            int orientation,
                                                            int role) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QVariant>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(
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

// tag=1079
void c_QAbstractProxyModel__onHeaderDataChanged_Orientation_int_int(
    void *thisObj, void *contextQObject, void *callback) {
  auto instance = reinterpret_cast<QAbstractProxyModel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractProxyModel::headerDataChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// index(int row, int column, const QModelIndex & parent) const
void *c_QAbstractProxyModel__index_int_int_QModelIndex(void *thisObj, int row,
                                                       int column,
                                                       void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(
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
bool c_QAbstractProxyModel__insertColumns_int_int_QModelIndex(void *thisObj,
                                                              int column,
                                                              int count,
                                                              void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(
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
bool c_QAbstractProxyModel__insertRows_int_int_QModelIndex(void *thisObj,
                                                           int row, int count,
                                                           void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->insertRows_nocallback(row, count, parent);
        } else {
          return targetPtr->insertRows(row, count, parent);
        }
      }();
}

// tag=1079
void c_QAbstractProxyModel__onLayoutAboutToBeChanged(void *thisObj,
                                                     void *contextQObject,
                                                     void *callback) {
  auto instance = reinterpret_cast<QAbstractProxyModel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractProxyModel::layoutAboutToBeChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1079
void c_QAbstractProxyModel__onLayoutChanged(void *thisObj, void *contextQObject,
                                            void *callback) {
  auto instance = reinterpret_cast<QAbstractProxyModel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractProxyModel::layoutChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// mapFromSource(const QModelIndex & sourceIndex) const
void *c_QAbstractProxyModel__mapFromSource_QModelIndex(void *thisObj,
                                                       void *sourceIndex_) {
  auto &sourceIndex = *reinterpret_cast<QModelIndex *>(sourceIndex_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->mapFromSource_nocallback(sourceIndex);
        } else {
          return targetPtr->mapFromSource(sourceIndex);
        }
      }()};
}

// tag=1050
// mapSelectionFromSource(const QItemSelection & selection) const
void *
c_QAbstractProxyModel__mapSelectionFromSource_QItemSelection(void *thisObj,
                                                             void *selection_) {
  auto &selection = *reinterpret_cast<QItemSelection *>(selection_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QItemSelection>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->mapSelectionFromSource_nocallback(selection);
        } else {
          return targetPtr->mapSelectionFromSource(selection);
        }
      }()};
}

// tag=1050
// mapSelectionToSource(const QItemSelection & selection) const
void *
c_QAbstractProxyModel__mapSelectionToSource_QItemSelection(void *thisObj,
                                                           void *selection_) {
  auto &selection = *reinterpret_cast<QItemSelection *>(selection_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QItemSelection>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->mapSelectionToSource_nocallback(selection);
        } else {
          return targetPtr->mapSelectionToSource(selection);
        }
      }()};
}

// tag=1050
// mapToSource(const QModelIndex & proxyIndex) const
void *c_QAbstractProxyModel__mapToSource_QModelIndex(void *thisObj,
                                                     void *proxyIndex_) {
  auto &proxyIndex = *reinterpret_cast<QModelIndex *>(proxyIndex_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(
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
void *c_QAbstractProxyModel__mimeTypes(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QString>>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(
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
bool c_QAbstractProxyModel__moveColumns_QModelIndex_int_int_QModelIndex_int(
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
            QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(
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
bool c_QAbstractProxyModel__moveRows_QModelIndex_int_int_QModelIndex_int(
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
            QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(
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
void *c_QAbstractProxyModel__parentIndex_QModelIndex(void *thisObj,
                                                     void *child_) {
  auto &child = *reinterpret_cast<QModelIndex *>(child_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->parent_nocallback(child);
        } else {
          return targetPtr->parent(child);
        }
      }()};
}

// tag=1050
// removeColumns(int column, int count, const QModelIndex & parent)
bool c_QAbstractProxyModel__removeColumns_int_int_QModelIndex(void *thisObj,
                                                              int column,
                                                              int count,
                                                              void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(
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
bool c_QAbstractProxyModel__removeRows_int_int_QModelIndex(void *thisObj,
                                                           int row, int count,
                                                           void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(
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
void c_QAbstractProxyModel__resetInternalData(void *thisObj) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->resetInternalData_nocallback();
}

// tag=1050
// revert()
void c_QAbstractProxyModel__revert(void *thisObj) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(
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
int c_QAbstractProxyModel__rowCount_QModelIndex(void *thisObj, void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->rowCount_nocallback(parent);
        } else {
          return targetPtr->rowCount(parent);
        }
      }();
}

// tag=1050
// setData(const QModelIndex & index, const QVariant & value, int role)
bool c_QAbstractProxyModel__setData_QModelIndex_QVariant_int(void *thisObj,
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
            QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(
            targetPtr);
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
bool c_QAbstractProxyModel__setHeaderData_int_Orientation_QVariant_int(
    void *thisObj, int section, int orientation, void *value_, int role) {
  auto &value = *reinterpret_cast<QVariant *>(value_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(
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
// setSourceModel(QAbstractItemModel * sourceModel)
void c_QAbstractProxyModel__setSourceModel_QAbstractItemModel(
    void *thisObj, void *sourceModel_) {
  auto sourceModel = reinterpret_cast<QAbstractItemModel *>(sourceModel_);
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setSourceModel_nocallback(sourceModel);
    } else {
      return targetPtr->setSourceModel(sourceModel);
    }
  }();
}

// tag=1050
// sibling(int row, int column, const QModelIndex & idx) const
void *c_QAbstractProxyModel__sibling_int_int_QModelIndex(void *thisObj, int row,
                                                         int column,
                                                         void *idx_) {
  auto &idx = *reinterpret_cast<QModelIndex *>(idx_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(
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
void c_QAbstractProxyModel__sort_int_SortOrder(void *thisObj, int column,
                                               int order) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(
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
// sourceModel() const
void *c_QAbstractProxyModel__sourceModel(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->sourceModel();
}

// tag=1050
// span(const QModelIndex & index) const
void *c_QAbstractProxyModel__span_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(
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
bool c_QAbstractProxyModel__submit(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper *>(
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
void *c_static_QAbstractProxyModel__tr_char_char_int(const char *s,
                                                     const char *c, int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper::tr(s, c, n)};
}
void c_QAbstractProxyModel__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QAbstractProxyModel__registerVirtualMethodCallback(void *ptr,
                                                          void *callback,
                                                          int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 5752:
    wrapper->m_buddyCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper::Callback_buddy>(
        callback);
    break;
  case 5753:
    wrapper->m_canFetchMoreCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper::
            Callback_canFetchMore>(callback);
    break;
  case 5758:
    wrapper->m_clearItemDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper::
            Callback_clearItemData>(callback);
    break;
  case 5759:
    wrapper->m_columnCountCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractProxyModel_wrapper::Callback_columnCount>(
            callback);
    break;
  case 944:
    wrapper->m_customEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractProxyModel_wrapper::Callback_customEvent>(
            callback);
    break;
  case 5761:
    wrapper->m_dataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper::Callback_data>(
        callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper::Callback_event>(
        callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractProxyModel_wrapper::Callback_eventFilter>(
            callback);
    break;
  case 5778:
    wrapper->m_fetchMoreCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractProxyModel_wrapper::Callback_fetchMore>(
            callback);
    break;
  case 5779:
    wrapper->m_hasChildrenCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractProxyModel_wrapper::Callback_hasChildren>(
            callback);
    break;
  case 5781:
    wrapper->m_headerDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractProxyModel_wrapper::Callback_headerData>(
            callback);
    break;
  case 5783:
    wrapper->m_indexCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper::Callback_index>(
        callback);
    break;
  case 5786:
    wrapper->m_insertColumnsCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper::
            Callback_insertColumns>(callback);
    break;
  case 5788:
    wrapper->m_insertRowsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractProxyModel_wrapper::Callback_insertRows>(
            callback);
    break;
  case 5917:
    wrapper->m_mapFromSourceCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper::
            Callback_mapFromSource>(callback);
    break;
  case 5918:
    wrapper->m_mapSelectionFromSourceCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper::
            Callback_mapSelectionFromSource>(callback);
    break;
  case 5919:
    wrapper->m_mapSelectionToSourceCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper::
            Callback_mapSelectionToSource>(callback);
    break;
  case 5920:
    wrapper->m_mapToSourceCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractProxyModel_wrapper::Callback_mapToSource>(
            callback);
    break;
  case 5795:
    wrapper->m_mimeTypesCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractProxyModel_wrapper::Callback_mimeTypes>(
            callback);
    break;
  case 5797:
    wrapper->m_moveColumnsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractProxyModel_wrapper::Callback_moveColumns>(
            callback);
    break;
  case 5799:
    wrapper->m_moveRowsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractProxyModel_wrapper::Callback_moveRows>(
            callback);
    break;
  case 5801:
    wrapper->m_parentIndexCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractProxyModel_wrapper::Callback_parentIndex>(
            callback);
    break;
  case 5806:
    wrapper->m_removeColumnsCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper::
            Callback_removeColumns>(callback);
    break;
  case 5809:
    wrapper->m_removeRowsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractProxyModel_wrapper::Callback_removeRows>(
            callback);
    break;
  case 5810:
    wrapper->m_resetInternalDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper::
            Callback_resetInternalData>(callback);
    break;
  case 5811:
    wrapper->m_revertCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractProxyModel_wrapper::Callback_revert>(
            callback);
    break;
  case 5812:
    wrapper->m_rowCountCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractProxyModel_wrapper::Callback_rowCount>(
            callback);
    break;
  case 5815:
    wrapper->m_setDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractProxyModel_wrapper::Callback_setData>(
            callback);
    break;
  case 5816:
    wrapper->m_setHeaderDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper::
            Callback_setHeaderData>(callback);
    break;
  case 5926:
    wrapper->m_setSourceModelCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper::
            Callback_setSourceModel>(callback);
    break;
  case 5820:
    wrapper->m_siblingCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractProxyModel_wrapper::Callback_sibling>(
            callback);
    break;
  case 5822:
    wrapper->m_sortCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper::Callback_sort>(
        callback);
    break;
  case 5823:
    wrapper->m_spanCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractProxyModel_wrapper::Callback_span>(
        callback);
    break;
  case 5825:
    wrapper->m_submitCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractProxyModel_wrapper::Callback_submit>(
            callback);
    break;
  }
}
}
