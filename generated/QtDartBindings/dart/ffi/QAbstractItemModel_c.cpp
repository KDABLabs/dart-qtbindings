/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QAbstractItemModel_c.h"

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
QAbstractItemModel_wrapper::QAbstractItemModel_wrapper(QObject *parent)
    : ::QAbstractItemModel(parent) {}
void QAbstractItemModel_wrapper::beginInsertColumns(const QModelIndex &parent,
                                                    int first, int last) {
  ::QAbstractItemModel::beginInsertColumns(parent, first, last);
}
void QAbstractItemModel_wrapper::beginInsertRows(const QModelIndex &parent,
                                                 int first, int last) {
  ::QAbstractItemModel::beginInsertRows(parent, first, last);
}
bool QAbstractItemModel_wrapper::beginMoveColumns(
    const QModelIndex &sourceParent, int sourceFirst, int sourceLast,
    const QModelIndex &destinationParent, int destinationColumn) {
  return ::QAbstractItemModel::beginMoveColumns(sourceParent, sourceFirst,
                                                sourceLast, destinationParent,
                                                destinationColumn);
}
bool QAbstractItemModel_wrapper::beginMoveRows(
    const QModelIndex &sourceParent, int sourceFirst, int sourceLast,
    const QModelIndex &destinationParent, int destinationRow) {
  return ::QAbstractItemModel::beginMoveRows(
      sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
}
void QAbstractItemModel_wrapper::beginRemoveColumns(const QModelIndex &parent,
                                                    int first, int last) {
  ::QAbstractItemModel::beginRemoveColumns(parent, first, last);
}
void QAbstractItemModel_wrapper::beginRemoveRows(const QModelIndex &parent,
                                                 int first, int last) {
  ::QAbstractItemModel::beginRemoveRows(parent, first, last);
}
void QAbstractItemModel_wrapper::beginResetModel() {
  ::QAbstractItemModel::beginResetModel();
}
QModelIndex QAbstractItemModel_wrapper::buddy(const QModelIndex &index) const {
  if (m_buddyCallback) {
    const void *thisPtr = this;
    return *m_buddyCallback(const_cast<void *>(thisPtr), index);
  } else {
    return ::QAbstractItemModel::buddy(index);
  }
}
QModelIndex
QAbstractItemModel_wrapper::buddy_nocallback(const QModelIndex &index) const {
  return ::QAbstractItemModel::buddy(index);
}
bool QAbstractItemModel_wrapper::canFetchMore(const QModelIndex &parent) const {
  if (m_canFetchMoreCallback) {
    const void *thisPtr = this;
    return m_canFetchMoreCallback(const_cast<void *>(thisPtr), parent);
  } else {
    return ::QAbstractItemModel::canFetchMore(parent);
  }
}
bool QAbstractItemModel_wrapper::canFetchMore_nocallback(
    const QModelIndex &parent) const {
  return ::QAbstractItemModel::canFetchMore(parent);
}
void QAbstractItemModel_wrapper::changePersistentIndex(const QModelIndex &from,
                                                       const QModelIndex &to) {
  ::QAbstractItemModel::changePersistentIndex(from, to);
}
void QAbstractItemModel_wrapper::changePersistentIndexList(
    const QList<QModelIndex> &from, const QList<QModelIndex> &to) {
  ::QAbstractItemModel::changePersistentIndexList(from, to);
}
bool QAbstractItemModel_wrapper::checkIndex(const QModelIndex &index) const {
  return ::QAbstractItemModel::checkIndex(index);
}
bool QAbstractItemModel_wrapper::clearItemData(const QModelIndex &index) {
  if (m_clearItemDataCallback) {
    const void *thisPtr = this;
    return m_clearItemDataCallback(const_cast<void *>(thisPtr), index);
  } else {
    return ::QAbstractItemModel::clearItemData(index);
  }
}
bool QAbstractItemModel_wrapper::clearItemData_nocallback(
    const QModelIndex &index) {
  return ::QAbstractItemModel::clearItemData(index);
}
int QAbstractItemModel_wrapper::columnCount(const QModelIndex &parent) const {
  if (m_columnCountCallback) {
    const void *thisPtr = this;
    return m_columnCountCallback(const_cast<void *>(thisPtr), parent);
  } else {
    std::cerr << "columnCount: Warning: Calling pure-virtual\n";
    return {};
  }
}
int QAbstractItemModel_wrapper::columnCount_nocallback(
    const QModelIndex &parent) const {
  std::cerr << "columnCount: Warning: Calling pure-virtual\n";
  return {};
}
void QAbstractItemModel_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QAbstractItemModel::customEvent(event);
  }
}
void QAbstractItemModel_wrapper::customEvent_nocallback(QEvent *event) {
  ::QAbstractItemModel::customEvent(event);
}
QVariant QAbstractItemModel_wrapper::data(const QModelIndex &index,
                                          int role) const {
  if (m_dataCallback) {
    const void *thisPtr = this;
    return *m_dataCallback(const_cast<void *>(thisPtr), index, role);
  } else {
    std::cerr << "data: Warning: Calling pure-virtual\n";
    return {};
  }
}
QVariant QAbstractItemModel_wrapper::data_nocallback(const QModelIndex &index,
                                                     int role) const {
  std::cerr << "data: Warning: Calling pure-virtual\n";
  return {};
}
void QAbstractItemModel_wrapper::dataChanged(const QModelIndex &topLeft,
                                             const QModelIndex &bottomRight,
                                             const QList<int> &roles) {
  ::QAbstractItemModel::dataChanged(topLeft, bottomRight, roles);
}
void QAbstractItemModel_wrapper::endInsertColumns() {
  ::QAbstractItemModel::endInsertColumns();
}
void QAbstractItemModel_wrapper::endInsertRows() {
  ::QAbstractItemModel::endInsertRows();
}
void QAbstractItemModel_wrapper::endMoveColumns() {
  ::QAbstractItemModel::endMoveColumns();
}
void QAbstractItemModel_wrapper::endMoveRows() {
  ::QAbstractItemModel::endMoveRows();
}
void QAbstractItemModel_wrapper::endRemoveColumns() {
  ::QAbstractItemModel::endRemoveColumns();
}
void QAbstractItemModel_wrapper::endRemoveRows() {
  ::QAbstractItemModel::endRemoveRows();
}
void QAbstractItemModel_wrapper::endResetModel() {
  ::QAbstractItemModel::endResetModel();
}
bool QAbstractItemModel_wrapper::event(QEvent *event) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    return ::QAbstractItemModel::event(event);
  }
}
bool QAbstractItemModel_wrapper::event_nocallback(QEvent *event) {
  return ::QAbstractItemModel::event(event);
}
bool QAbstractItemModel_wrapper::eventFilter(QObject *watched, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QAbstractItemModel::eventFilter(watched, event);
  }
}
bool QAbstractItemModel_wrapper::eventFilter_nocallback(QObject *watched,
                                                        QEvent *event) {
  return ::QAbstractItemModel::eventFilter(watched, event);
}
void QAbstractItemModel_wrapper::fetchMore(const QModelIndex &parent) {
  if (m_fetchMoreCallback) {
    const void *thisPtr = this;
    m_fetchMoreCallback(const_cast<void *>(thisPtr), parent);
  } else {
    ::QAbstractItemModel::fetchMore(parent);
  }
}
void QAbstractItemModel_wrapper::fetchMore_nocallback(
    const QModelIndex &parent) {
  ::QAbstractItemModel::fetchMore(parent);
}
bool QAbstractItemModel_wrapper::hasChildren(const QModelIndex &parent) const {
  if (m_hasChildrenCallback) {
    const void *thisPtr = this;
    return m_hasChildrenCallback(const_cast<void *>(thisPtr), parent);
  } else {
    return ::QAbstractItemModel::hasChildren(parent);
  }
}
bool QAbstractItemModel_wrapper::hasChildren_nocallback(
    const QModelIndex &parent) const {
  return ::QAbstractItemModel::hasChildren(parent);
}
bool QAbstractItemModel_wrapper::hasIndex(int row, int column,
                                          const QModelIndex &parent) const {
  return ::QAbstractItemModel::hasIndex(row, column, parent);
}
QVariant QAbstractItemModel_wrapper::headerData(int section,
                                                Qt::Orientation orientation,
                                                int role) const {
  if (m_headerDataCallback) {
    const void *thisPtr = this;
    return *m_headerDataCallback(const_cast<void *>(thisPtr), section,
                                 orientation, role);
  } else {
    return ::QAbstractItemModel::headerData(section, orientation, role);
  }
}
QVariant QAbstractItemModel_wrapper::headerData_nocallback(
    int section, Qt::Orientation orientation, int role) const {
  return ::QAbstractItemModel::headerData(section, orientation, role);
}
void QAbstractItemModel_wrapper::headerDataChanged(Qt::Orientation orientation,
                                                   int first, int last) {
  ::QAbstractItemModel::headerDataChanged(orientation, first, last);
}
QModelIndex QAbstractItemModel_wrapper::index(int row, int column,
                                              const QModelIndex &parent) const {
  if (m_indexCallback) {
    const void *thisPtr = this;
    return *m_indexCallback(const_cast<void *>(thisPtr), row, column, parent);
  } else {
    std::cerr << "index: Warning: Calling pure-virtual\n";
    return {};
  }
}
QModelIndex
QAbstractItemModel_wrapper::index_nocallback(int row, int column,
                                             const QModelIndex &parent) const {
  std::cerr << "index: Warning: Calling pure-virtual\n";
  return {};
}
bool QAbstractItemModel_wrapper::insertColumns(int column, int count,
                                               const QModelIndex &parent) {
  if (m_insertColumnsCallback) {
    const void *thisPtr = this;
    return m_insertColumnsCallback(const_cast<void *>(thisPtr), column, count,
                                   parent);
  } else {
    return ::QAbstractItemModel::insertColumns(column, count, parent);
  }
}
bool QAbstractItemModel_wrapper::insertColumns_nocallback(
    int column, int count, const QModelIndex &parent) {
  return ::QAbstractItemModel::insertColumns(column, count, parent);
}
bool QAbstractItemModel_wrapper::insertRows(int row, int count,
                                            const QModelIndex &parent) {
  if (m_insertRowsCallback) {
    const void *thisPtr = this;
    return m_insertRowsCallback(const_cast<void *>(thisPtr), row, count,
                                parent);
  } else {
    return ::QAbstractItemModel::insertRows(row, count, parent);
  }
}
bool QAbstractItemModel_wrapper::insertRows_nocallback(
    int row, int count, const QModelIndex &parent) {
  return ::QAbstractItemModel::insertRows(row, count, parent);
}
void QAbstractItemModel_wrapper::layoutAboutToBeChanged() {
  ::QAbstractItemModel::layoutAboutToBeChanged();
}
void QAbstractItemModel_wrapper::layoutChanged() {
  ::QAbstractItemModel::layoutChanged();
}
QList<QString> QAbstractItemModel_wrapper::mimeTypes() const {
  if (m_mimeTypesCallback) {
    const void *thisPtr = this;
    return *m_mimeTypesCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QAbstractItemModel::mimeTypes();
  }
}
QList<QString> QAbstractItemModel_wrapper::mimeTypes_nocallback() const {
  return ::QAbstractItemModel::mimeTypes();
}
bool QAbstractItemModel_wrapper::moveColumn(
    const QModelIndex &sourceParent, int sourceColumn,
    const QModelIndex &destinationParent, int destinationChild) {
  return ::QAbstractItemModel::moveColumn(sourceParent, sourceColumn,
                                          destinationParent, destinationChild);
}
bool QAbstractItemModel_wrapper::moveColumns(
    const QModelIndex &sourceParent, int sourceColumn, int count,
    const QModelIndex &destinationParent, int destinationChild) {
  if (m_moveColumnsCallback) {
    const void *thisPtr = this;
    return m_moveColumnsCallback(const_cast<void *>(thisPtr), sourceParent,
                                 sourceColumn, count, destinationParent,
                                 destinationChild);
  } else {
    return ::QAbstractItemModel::moveColumns(
        sourceParent, sourceColumn, count, destinationParent, destinationChild);
  }
}
bool QAbstractItemModel_wrapper::moveColumns_nocallback(
    const QModelIndex &sourceParent, int sourceColumn, int count,
    const QModelIndex &destinationParent, int destinationChild) {
  return ::QAbstractItemModel::moveColumns(sourceParent, sourceColumn, count,
                                           destinationParent, destinationChild);
}
bool QAbstractItemModel_wrapper::moveRow(const QModelIndex &sourceParent,
                                         int sourceRow,
                                         const QModelIndex &destinationParent,
                                         int destinationChild) {
  return ::QAbstractItemModel::moveRow(sourceParent, sourceRow,
                                       destinationParent, destinationChild);
}
bool QAbstractItemModel_wrapper::moveRows(const QModelIndex &sourceParent,
                                          int sourceRow, int count,
                                          const QModelIndex &destinationParent,
                                          int destinationChild) {
  if (m_moveRowsCallback) {
    const void *thisPtr = this;
    return m_moveRowsCallback(const_cast<void *>(thisPtr), sourceParent,
                              sourceRow, count, destinationParent,
                              destinationChild);
  } else {
    return ::QAbstractItemModel::moveRows(sourceParent, sourceRow, count,
                                          destinationParent, destinationChild);
  }
}
bool QAbstractItemModel_wrapper::moveRows_nocallback(
    const QModelIndex &sourceParent, int sourceRow, int count,
    const QModelIndex &destinationParent, int destinationChild) {
  return ::QAbstractItemModel::moveRows(sourceParent, sourceRow, count,
                                        destinationParent, destinationChild);
}
QModelIndex QAbstractItemModel_wrapper::parent(const QModelIndex &child) const {
  if (m_parentIndexCallback) {
    const void *thisPtr = this;
    return *m_parentIndexCallback(const_cast<void *>(thisPtr), child);
  } else {
    std::cerr << "parentIndex: Warning: Calling pure-virtual\n";
    return {};
  }
}
QModelIndex
QAbstractItemModel_wrapper::parent_nocallback(const QModelIndex &child) const {
  std::cerr << "parentIndex: Warning: Calling pure-virtual\n";
  return {};
}
QList<QModelIndex> QAbstractItemModel_wrapper::persistentIndexList() const {
  return ::QAbstractItemModel::persistentIndexList();
}
bool QAbstractItemModel_wrapper::removeColumn(int column,
                                              const QModelIndex &parent) {
  return ::QAbstractItemModel::removeColumn(column, parent);
}
bool QAbstractItemModel_wrapper::removeColumns(int column, int count,
                                               const QModelIndex &parent) {
  if (m_removeColumnsCallback) {
    const void *thisPtr = this;
    return m_removeColumnsCallback(const_cast<void *>(thisPtr), column, count,
                                   parent);
  } else {
    return ::QAbstractItemModel::removeColumns(column, count, parent);
  }
}
bool QAbstractItemModel_wrapper::removeColumns_nocallback(
    int column, int count, const QModelIndex &parent) {
  return ::QAbstractItemModel::removeColumns(column, count, parent);
}
bool QAbstractItemModel_wrapper::removeRow(int row, const QModelIndex &parent) {
  return ::QAbstractItemModel::removeRow(row, parent);
}
bool QAbstractItemModel_wrapper::removeRows(int row, int count,
                                            const QModelIndex &parent) {
  if (m_removeRowsCallback) {
    const void *thisPtr = this;
    return m_removeRowsCallback(const_cast<void *>(thisPtr), row, count,
                                parent);
  } else {
    return ::QAbstractItemModel::removeRows(row, count, parent);
  }
}
bool QAbstractItemModel_wrapper::removeRows_nocallback(
    int row, int count, const QModelIndex &parent) {
  return ::QAbstractItemModel::removeRows(row, count, parent);
}
void QAbstractItemModel_wrapper::resetInternalData() {
  if (m_resetInternalDataCallback) {
    const void *thisPtr = this;
    m_resetInternalDataCallback(const_cast<void *>(thisPtr));
  } else {
    ::QAbstractItemModel::resetInternalData();
  }
}
void QAbstractItemModel_wrapper::resetInternalData_nocallback() {
  ::QAbstractItemModel::resetInternalData();
}
void QAbstractItemModel_wrapper::revert() {
  if (m_revertCallback) {
    const void *thisPtr = this;
    m_revertCallback(const_cast<void *>(thisPtr));
  } else {
    ::QAbstractItemModel::revert();
  }
}
void QAbstractItemModel_wrapper::revert_nocallback() {
  ::QAbstractItemModel::revert();
}
int QAbstractItemModel_wrapper::rowCount(const QModelIndex &parent) const {
  if (m_rowCountCallback) {
    const void *thisPtr = this;
    return m_rowCountCallback(const_cast<void *>(thisPtr), parent);
  } else {
    std::cerr << "rowCount: Warning: Calling pure-virtual\n";
    return {};
  }
}
int QAbstractItemModel_wrapper::rowCount_nocallback(
    const QModelIndex &parent) const {
  std::cerr << "rowCount: Warning: Calling pure-virtual\n";
  return {};
}
bool QAbstractItemModel_wrapper::setData(const QModelIndex &index,
                                         const QVariant &value, int role) {
  if (m_setDataCallback) {
    const void *thisPtr = this;
    return m_setDataCallback(const_cast<void *>(thisPtr), index, value, role);
  } else {
    return ::QAbstractItemModel::setData(index, value, role);
  }
}
bool QAbstractItemModel_wrapper::setData_nocallback(const QModelIndex &index,
                                                    const QVariant &value,
                                                    int role) {
  return ::QAbstractItemModel::setData(index, value, role);
}
bool QAbstractItemModel_wrapper::setHeaderData(int section,
                                               Qt::Orientation orientation,
                                               const QVariant &value,
                                               int role) {
  if (m_setHeaderDataCallback) {
    const void *thisPtr = this;
    return m_setHeaderDataCallback(const_cast<void *>(thisPtr), section,
                                   orientation, value, role);
  } else {
    return ::QAbstractItemModel::setHeaderData(section, orientation, value,
                                               role);
  }
}
bool QAbstractItemModel_wrapper::setHeaderData_nocallback(
    int section, Qt::Orientation orientation, const QVariant &value, int role) {
  return ::QAbstractItemModel::setHeaderData(section, orientation, value, role);
}
QModelIndex QAbstractItemModel_wrapper::sibling(int row, int column,
                                                const QModelIndex &idx) const {
  if (m_siblingCallback) {
    const void *thisPtr = this;
    return *m_siblingCallback(const_cast<void *>(thisPtr), row, column, idx);
  } else {
    return ::QAbstractItemModel::sibling(row, column, idx);
  }
}
QModelIndex
QAbstractItemModel_wrapper::sibling_nocallback(int row, int column,
                                               const QModelIndex &idx) const {
  return ::QAbstractItemModel::sibling(row, column, idx);
}
void QAbstractItemModel_wrapper::sort(int column, Qt::SortOrder order) {
  if (m_sortCallback) {
    const void *thisPtr = this;
    m_sortCallback(const_cast<void *>(thisPtr), column, order);
  } else {
    ::QAbstractItemModel::sort(column, order);
  }
}
void QAbstractItemModel_wrapper::sort_nocallback(int column,
                                                 Qt::SortOrder order) {
  ::QAbstractItemModel::sort(column, order);
}
QSize QAbstractItemModel_wrapper::span(const QModelIndex &index) const {
  if (m_spanCallback) {
    const void *thisPtr = this;
    return *m_spanCallback(const_cast<void *>(thisPtr), index);
  } else {
    return ::QAbstractItemModel::span(index);
  }
}
QSize QAbstractItemModel_wrapper::span_nocallback(
    const QModelIndex &index) const {
  return ::QAbstractItemModel::span(index);
}
bool QAbstractItemModel_wrapper::submit() {
  if (m_submitCallback) {
    const void *thisPtr = this;
    return m_submitCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QAbstractItemModel::submit();
  }
}
bool QAbstractItemModel_wrapper::submit_nocallback() {
  return ::QAbstractItemModel::submit();
}
QString QAbstractItemModel_wrapper::tr(const char *s, const char *c, int n) {
  return ::QAbstractItemModel::tr(s, c, n);
}
QAbstractItemModel_wrapper::~QAbstractItemModel_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QAbstractItemModel *fromPtr(void *ptr) {
  return reinterpret_cast<QAbstractItemModel *>(ptr);
}
static QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<
      QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(ptr);
}
extern "C" {
void c_QAbstractItemModel_Finalizer(void *cppObj) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(cppObj);
}
void *c_QAbstractItemModel__constructor_QObject(void *parent_) {
  auto parent = reinterpret_cast<QObject *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QAbstractItemModel_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
// beginInsertColumns(const QModelIndex & parent, int first, int last)
void c_QAbstractItemModel__beginInsertColumns_QModelIndex_int_int(void *thisObj,
                                                                  void *parent_,
                                                                  int first,
                                                                  int last) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  fromWrapperPtr(thisObj)->beginInsertColumns(parent, first, last);
}
// beginInsertRows(const QModelIndex & parent, int first, int last)
void c_QAbstractItemModel__beginInsertRows_QModelIndex_int_int(void *thisObj,
                                                               void *parent_,
                                                               int first,
                                                               int last) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  fromWrapperPtr(thisObj)->beginInsertRows(parent, first, last);
}
// beginMoveColumns(const QModelIndex & sourceParent, int sourceFirst, int
// sourceLast, const QModelIndex & destinationParent, int destinationColumn)
bool c_QAbstractItemModel__beginMoveColumns_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceFirst, int sourceLast,
    void *destinationParent_, int destinationColumn) {
  assert(sourceParent_);
  auto &sourceParent = *reinterpret_cast<QModelIndex *>(sourceParent_);
  assert(destinationParent_);
  auto &destinationParent =
      *reinterpret_cast<QModelIndex *>(destinationParent_);
  const auto &result = fromWrapperPtr(thisObj)->beginMoveColumns(
      sourceParent, sourceFirst, sourceLast, destinationParent,
      destinationColumn);
  return result;
}
// beginMoveRows(const QModelIndex & sourceParent, int sourceFirst, int
// sourceLast, const QModelIndex & destinationParent, int destinationRow)
bool c_QAbstractItemModel__beginMoveRows_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceFirst, int sourceLast,
    void *destinationParent_, int destinationRow) {
  assert(sourceParent_);
  auto &sourceParent = *reinterpret_cast<QModelIndex *>(sourceParent_);
  assert(destinationParent_);
  auto &destinationParent =
      *reinterpret_cast<QModelIndex *>(destinationParent_);
  const auto &result = fromWrapperPtr(thisObj)->beginMoveRows(
      sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
  return result;
}
// beginRemoveColumns(const QModelIndex & parent, int first, int last)
void c_QAbstractItemModel__beginRemoveColumns_QModelIndex_int_int(void *thisObj,
                                                                  void *parent_,
                                                                  int first,
                                                                  int last) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  fromWrapperPtr(thisObj)->beginRemoveColumns(parent, first, last);
}
// beginRemoveRows(const QModelIndex & parent, int first, int last)
void c_QAbstractItemModel__beginRemoveRows_QModelIndex_int_int(void *thisObj,
                                                               void *parent_,
                                                               int first,
                                                               int last) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  fromWrapperPtr(thisObj)->beginRemoveRows(parent, first, last);
}
// beginResetModel()
void c_QAbstractItemModel__beginResetModel(void *thisObj) {
  fromWrapperPtr(thisObj)->beginResetModel();
}
// buddy(const QModelIndex & index) const
void *c_QAbstractItemModel__buddy_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(
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
bool c_QAbstractItemModel__canFetchMore_QModelIndex(void *thisObj,
                                                    void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->canFetchMore_nocallback(parent);
    } else {
      return targetPtr->canFetchMore(parent);
    }
  }();
  return result;
}
// changePersistentIndex(const QModelIndex & from, const QModelIndex & to)
void c_QAbstractItemModel__changePersistentIndex_QModelIndex_QModelIndex(
    void *thisObj, void *from_, void *to_) {
  assert(from_);
  auto &from = *reinterpret_cast<QModelIndex *>(from_);
  assert(to_);
  auto &to = *reinterpret_cast<QModelIndex *>(to_);
  fromWrapperPtr(thisObj)->changePersistentIndex(from, to);
}
// changePersistentIndexList(const QList<QModelIndex > & from, const
// QList<QModelIndex > & to)
void c_QAbstractItemModel__changePersistentIndexList_QList_QModelIndex_QList_QModelIndex(
    void *thisObj, void *from_, void *to_) {
  assert(from_);
  auto &from = *reinterpret_cast<QList<QModelIndex> *>(from_);
  assert(to_);
  auto &to = *reinterpret_cast<QList<QModelIndex> *>(to_);
  fromWrapperPtr(thisObj)->changePersistentIndexList(from, to);
}
// checkIndex(const QModelIndex & index) const
bool c_QAbstractItemModel__checkIndex_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = fromPtr(thisObj)->checkIndex(index);
  return result;
}
// clearItemData(const QModelIndex & index)
bool c_QAbstractItemModel__clearItemData_QModelIndex(void *thisObj,
                                                     void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(
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
int c_QAbstractItemModel__columnCount_QModelIndex(void *thisObj,
                                                  void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(
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
void c_QAbstractItemModel__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// data(const QModelIndex & index, int role) const
void *c_QAbstractItemModel__data_QModelIndex_int(void *thisObj, void *index_,
                                                 int role) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = new Dartagnan::ValueWrapper<QVariant>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->data_nocallback(index, role);
    } else {
      return targetPtr->data(index, role);
    }
  }()};
  return result;
}
// dataChanged(const QModelIndex & topLeft, const QModelIndex & bottomRight,
// const QList<int > & roles)
void c_QAbstractItemModel__dataChanged_QModelIndex_QModelIndex_QList_int(
    void *thisObj, void *topLeft_, void *bottomRight_, void *roles_) {
  assert(topLeft_);
  auto &topLeft = *reinterpret_cast<QModelIndex *>(topLeft_);
  assert(bottomRight_);
  auto &bottomRight = *reinterpret_cast<QModelIndex *>(bottomRight_);
  assert(roles_);
  auto &roles = *reinterpret_cast<QList<int> *>(roles_);
  fromPtr(thisObj)->dataChanged(topLeft, bottomRight, roles);
}
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
// endInsertColumns()
void c_QAbstractItemModel__endInsertColumns(void *thisObj) {
  fromWrapperPtr(thisObj)->endInsertColumns();
}
// endInsertRows()
void c_QAbstractItemModel__endInsertRows(void *thisObj) {
  fromWrapperPtr(thisObj)->endInsertRows();
}
// endMoveColumns()
void c_QAbstractItemModel__endMoveColumns(void *thisObj) {
  fromWrapperPtr(thisObj)->endMoveColumns();
}
// endMoveRows()
void c_QAbstractItemModel__endMoveRows(void *thisObj) {
  fromWrapperPtr(thisObj)->endMoveRows();
}
// endRemoveColumns()
void c_QAbstractItemModel__endRemoveColumns(void *thisObj) {
  fromWrapperPtr(thisObj)->endRemoveColumns();
}
// endRemoveRows()
void c_QAbstractItemModel__endRemoveRows(void *thisObj) {
  fromWrapperPtr(thisObj)->endRemoveRows();
}
// endResetModel()
void c_QAbstractItemModel__endResetModel(void *thisObj) {
  fromWrapperPtr(thisObj)->endResetModel();
}
// event(QEvent * event)
bool c_QAbstractItemModel__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(
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
bool c_QAbstractItemModel__eventFilter_QObject_QEvent(void *thisObj,
                                                      void *watched_,
                                                      void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(
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
void c_QAbstractItemModel__fetchMore_QModelIndex(void *thisObj, void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
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
// hasChildren(const QModelIndex & parent) const
bool c_QAbstractItemModel__hasChildren_QModelIndex(void *thisObj,
                                                   void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->hasChildren_nocallback(parent);
    } else {
      return targetPtr->hasChildren(parent);
    }
  }();
  return result;
}
// hasIndex(int row, int column, const QModelIndex & parent) const
bool c_QAbstractItemModel__hasIndex_int_int_QModelIndex(void *thisObj, int row,
                                                        int column,
                                                        void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = fromPtr(thisObj)->hasIndex(row, column, parent);
  return result;
}
// headerData(int section, Qt::Orientation orientation, int role) const
void *c_QAbstractItemModel__headerData_int_Orientation_int(void *thisObj,
                                                           int section,
                                                           int orientation,
                                                           int role) {
  const auto &result = new Dartagnan::ValueWrapper<QVariant>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(
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
// headerDataChanged(Qt::Orientation orientation, int first, int last)
void c_QAbstractItemModel__headerDataChanged_Orientation_int_int(
    void *thisObj, int orientation, int first, int last) {
  fromPtr(thisObj)->headerDataChanged(static_cast<Qt::Orientation>(orientation),
                                      first, last);
}
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
// index(int row, int column, const QModelIndex & parent) const
void *c_QAbstractItemModel__index_int_int_QModelIndex(void *thisObj, int row,
                                                      int column,
                                                      void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->index_nocallback(row, column, parent);
    } else {
      return targetPtr->index(row, column, parent);
    }
  }()};
  return result;
}
// insertColumns(int column, int count, const QModelIndex & parent)
bool c_QAbstractItemModel__insertColumns_int_int_QModelIndex(void *thisObj,
                                                             int column,
                                                             int count,
                                                             void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->insertColumns_nocallback(column, count, parent);
    } else {
      return targetPtr->insertColumns(column, count, parent);
    }
  }();
  return result;
}
// insertRows(int row, int count, const QModelIndex & parent)
bool c_QAbstractItemModel__insertRows_int_int_QModelIndex(void *thisObj,
                                                          int row, int count,
                                                          void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->insertRows_nocallback(row, count, parent);
    } else {
      return targetPtr->insertRows(row, count, parent);
    }
  }();
  return result;
}
// layoutAboutToBeChanged()
void c_QAbstractItemModel__layoutAboutToBeChanged(void *thisObj) {
  fromPtr(thisObj)->layoutAboutToBeChanged();
}
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
// layoutChanged()
void c_QAbstractItemModel__layoutChanged(void *thisObj) {
  fromPtr(thisObj)->layoutChanged();
}
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
// mimeTypes() const
void *c_QAbstractItemModel__mimeTypes(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QString>>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->mimeTypes_nocallback();
    } else {
      return targetPtr->mimeTypes();
    }
  }()};
  return result;
}
// moveColumn(const QModelIndex & sourceParent, int sourceColumn, const
// QModelIndex & destinationParent, int destinationChild)
bool c_QAbstractItemModel__moveColumn_QModelIndex_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceColumn,
    void *destinationParent_, int destinationChild) {
  assert(sourceParent_);
  auto &sourceParent = *reinterpret_cast<QModelIndex *>(sourceParent_);
  assert(destinationParent_);
  auto &destinationParent =
      *reinterpret_cast<QModelIndex *>(destinationParent_);
  const auto &result = fromPtr(thisObj)->moveColumn(
      sourceParent, sourceColumn, destinationParent, destinationChild);
  return result;
}
// moveColumns(const QModelIndex & sourceParent, int sourceColumn, int count,
// const QModelIndex & destinationParent, int destinationChild)
bool c_QAbstractItemModel__moveColumns_QModelIndex_int_int_QModelIndex_int(
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
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(
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
// moveRow(const QModelIndex & sourceParent, int sourceRow, const QModelIndex &
// destinationParent, int destinationChild)
bool c_QAbstractItemModel__moveRow_QModelIndex_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceRow, void *destinationParent_,
    int destinationChild) {
  assert(sourceParent_);
  auto &sourceParent = *reinterpret_cast<QModelIndex *>(sourceParent_);
  assert(destinationParent_);
  auto &destinationParent =
      *reinterpret_cast<QModelIndex *>(destinationParent_);
  const auto &result = fromPtr(thisObj)->moveRow(
      sourceParent, sourceRow, destinationParent, destinationChild);
  return result;
}
// moveRows(const QModelIndex & sourceParent, int sourceRow, int count, const
// QModelIndex & destinationParent, int destinationChild)
bool c_QAbstractItemModel__moveRows_QModelIndex_int_int_QModelIndex_int(
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
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(
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
void *c_QAbstractItemModel__parentIndex_QModelIndex(void *thisObj,
                                                    void *child_) {
  assert(child_);
  auto &child = *reinterpret_cast<QModelIndex *>(child_);
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->parent_nocallback(child);
    } else {
      return targetPtr->parent(child);
    }
  }()};
  return result;
}
// persistentIndexList() const
void *c_QAbstractItemModel__persistentIndexList(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QModelIndex>>{
      fromWrapperPtr(thisObj)->persistentIndexList()};
  return result;
}
// removeColumn(int column, const QModelIndex & parent)
bool c_QAbstractItemModel__removeColumn_int_QModelIndex(void *thisObj,
                                                        int column,
                                                        void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = fromPtr(thisObj)->removeColumn(column, parent);
  return result;
}
// removeColumns(int column, int count, const QModelIndex & parent)
bool c_QAbstractItemModel__removeColumns_int_int_QModelIndex(void *thisObj,
                                                             int column,
                                                             int count,
                                                             void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->removeColumns_nocallback(column, count, parent);
    } else {
      return targetPtr->removeColumns(column, count, parent);
    }
  }();
  return result;
}
// removeRow(int row, const QModelIndex & parent)
bool c_QAbstractItemModel__removeRow_int_QModelIndex(void *thisObj, int row,
                                                     void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = fromPtr(thisObj)->removeRow(row, parent);
  return result;
}
// removeRows(int row, int count, const QModelIndex & parent)
bool c_QAbstractItemModel__removeRows_int_int_QModelIndex(void *thisObj,
                                                          int row, int count,
                                                          void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(
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
void c_QAbstractItemModel__resetInternalData(void *thisObj) {
  fromWrapperPtr(thisObj)->resetInternalData_nocallback();
}
// revert()
void c_QAbstractItemModel__revert(void *thisObj) {
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
// rowCount(const QModelIndex & parent) const
int c_QAbstractItemModel__rowCount_QModelIndex(void *thisObj, void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->rowCount_nocallback(parent);
    } else {
      return targetPtr->rowCount(parent);
    }
  }();
  return result;
}
// setData(const QModelIndex & index, const QVariant & value, int role)
bool c_QAbstractItemModel__setData_QModelIndex_QVariant_int(void *thisObj,
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
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(
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
bool c_QAbstractItemModel__setHeaderData_int_Orientation_QVariant_int(
    void *thisObj, int section, int orientation, void *value_, int role) {
  assert(value_);
  auto &value = *reinterpret_cast<QVariant *>(value_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(
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
// sibling(int row, int column, const QModelIndex & idx) const
void *c_QAbstractItemModel__sibling_int_int_QModelIndex(void *thisObj, int row,
                                                        int column,
                                                        void *idx_) {
  assert(idx_);
  auto &idx = *reinterpret_cast<QModelIndex *>(idx_);
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(
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
void c_QAbstractItemModel__sort_int_SortOrder(void *thisObj, int column,
                                              int order) {
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
// span(const QModelIndex & index) const
void *c_QAbstractItemModel__span_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(
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
bool c_QAbstractItemModel__submit(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->submit_nocallback();
    } else {
      return targetPtr->submit();
    }
  }();
  return result;
}
// tr(const char * s, const char * c, int n)
void *c_static_QAbstractItemModel__tr_char_char_int(const char *s,
                                                    const char *c, int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
void c_QAbstractItemModel__destructor(void *thisObj) {
  delete fromPtr(thisObj);
}
void c_QAbstractItemModel__registerVirtualMethodCallback(void *ptr,
                                                         void *callback,
                                                         int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 5771:
    wrapper->m_buddyCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::Callback_buddy>(
        callback);
    break;
  case 5772:
    wrapper->m_canFetchMoreCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_canFetchMore>(callback);
    break;
  case 5777:
    wrapper->m_clearItemDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_clearItemData>(callback);
    break;
  case 5778:
    wrapper->m_columnCountCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_columnCount>(callback);
    break;
  case 946:
    wrapper->m_customEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_customEvent>(callback);
    break;
  case 5780:
    wrapper->m_dataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::Callback_data>(
        callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::Callback_event>(
        callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_eventFilter>(callback);
    break;
  case 5798:
    wrapper->m_fetchMoreCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_fetchMore>(callback);
    break;
  case 5799:
    wrapper->m_hasChildrenCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_hasChildren>(callback);
    break;
  case 5801:
    wrapper->m_headerDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_headerData>(callback);
    break;
  case 5803:
    wrapper->m_indexCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::Callback_index>(
        callback);
    break;
  case 5806:
    wrapper->m_insertColumnsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_insertColumns>(callback);
    break;
  case 5808:
    wrapper->m_insertRowsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_insertRows>(callback);
    break;
  case 5816:
    wrapper->m_mimeTypesCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_mimeTypes>(callback);
    break;
  case 5818:
    wrapper->m_moveColumnsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_moveColumns>(callback);
    break;
  case 5820:
    wrapper->m_moveRowsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_moveRows>(callback);
    break;
  case 5822:
    wrapper->m_parentIndexCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_parentIndex>(callback);
    break;
  case 5827:
    wrapper->m_removeColumnsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_removeColumns>(callback);
    break;
  case 5830:
    wrapper->m_removeRowsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_removeRows>(callback);
    break;
  case 5831:
    wrapper->m_resetInternalDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_resetInternalData>(callback);
    break;
  case 5832:
    wrapper->m_revertCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::Callback_revert>(
        callback);
    break;
  case 5833:
    wrapper->m_rowCountCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_rowCount>(callback);
    break;
  case 5836:
    wrapper->m_setDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_setData>(callback);
    break;
  case 5837:
    wrapper->m_setHeaderDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_setHeaderData>(callback);
    break;
  case 5840:
    wrapper->m_siblingCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::
                             Callback_sibling>(callback);
    break;
  case 5842:
    wrapper->m_sortCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::Callback_sort>(
        callback);
    break;
  case 5843:
    wrapper->m_spanCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::Callback_span>(
        callback);
    break;
  case 5845:
    wrapper->m_submitCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractItemModel_wrapper::Callback_submit>(
        callback);
    break;
  }
}
}
