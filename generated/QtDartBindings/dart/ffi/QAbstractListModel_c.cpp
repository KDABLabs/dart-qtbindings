/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QAbstractListModel_c.h"

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
QAbstractListModel_wrapper::QAbstractListModel_wrapper(QObject *parent)
    : ::QAbstractListModel(parent) {}
QModelIndex QAbstractListModel_wrapper::buddy(const QModelIndex &index) const {
  if (m_buddyCallback) {
    const void *thisPtr = this;
    return *m_buddyCallback(const_cast<void *>(thisPtr), index);
  } else {
    return ::QAbstractListModel::buddy(index);
  }
}
QModelIndex
QAbstractListModel_wrapper::buddy_nocallback(const QModelIndex &index) const {
  return ::QAbstractListModel::buddy(index);
}
bool QAbstractListModel_wrapper::canFetchMore(const QModelIndex &parent) const {
  if (m_canFetchMoreCallback) {
    const void *thisPtr = this;
    return m_canFetchMoreCallback(const_cast<void *>(thisPtr), parent);
  } else {
    return ::QAbstractListModel::canFetchMore(parent);
  }
}
bool QAbstractListModel_wrapper::canFetchMore_nocallback(
    const QModelIndex &parent) const {
  return ::QAbstractListModel::canFetchMore(parent);
}
bool QAbstractListModel_wrapper::clearItemData(const QModelIndex &index) {
  if (m_clearItemDataCallback) {
    const void *thisPtr = this;
    return m_clearItemDataCallback(const_cast<void *>(thisPtr), index);
  } else {
    return ::QAbstractListModel::clearItemData(index);
  }
}
bool QAbstractListModel_wrapper::clearItemData_nocallback(
    const QModelIndex &index) {
  return ::QAbstractListModel::clearItemData(index);
}
void QAbstractListModel_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QAbstractListModel::customEvent(event);
  }
}
void QAbstractListModel_wrapper::customEvent_nocallback(QEvent *event) {
  ::QAbstractListModel::customEvent(event);
}
QVariant QAbstractListModel_wrapper::data(const QModelIndex &index,
                                          int role) const {
  if (m_dataCallback) {
    const void *thisPtr = this;
    return *m_dataCallback(const_cast<void *>(thisPtr), index, role);
  } else {
    std::cerr << "data: Warning: Calling pure-virtual\n";
    return {};
  }
}
QVariant QAbstractListModel_wrapper::data_nocallback(const QModelIndex &index,
                                                     int role) const {
  std::cerr << "data: Warning: Calling pure-virtual\n";
  return {};
}
bool QAbstractListModel_wrapper::event(QEvent *event) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    return ::QAbstractListModel::event(event);
  }
}
bool QAbstractListModel_wrapper::event_nocallback(QEvent *event) {
  return ::QAbstractListModel::event(event);
}
bool QAbstractListModel_wrapper::eventFilter(QObject *watched, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QAbstractListModel::eventFilter(watched, event);
  }
}
bool QAbstractListModel_wrapper::eventFilter_nocallback(QObject *watched,
                                                        QEvent *event) {
  return ::QAbstractListModel::eventFilter(watched, event);
}
void QAbstractListModel_wrapper::fetchMore(const QModelIndex &parent) {
  if (m_fetchMoreCallback) {
    const void *thisPtr = this;
    m_fetchMoreCallback(const_cast<void *>(thisPtr), parent);
  } else {
    ::QAbstractListModel::fetchMore(parent);
  }
}
void QAbstractListModel_wrapper::fetchMore_nocallback(
    const QModelIndex &parent) {
  ::QAbstractListModel::fetchMore(parent);
}
QVariant QAbstractListModel_wrapper::headerData(int section,
                                                Qt::Orientation orientation,
                                                int role) const {
  if (m_headerDataCallback) {
    const void *thisPtr = this;
    return *m_headerDataCallback(const_cast<void *>(thisPtr), section,
                                 orientation, role);
  } else {
    return ::QAbstractListModel::headerData(section, orientation, role);
  }
}
QVariant QAbstractListModel_wrapper::headerData_nocallback(
    int section, Qt::Orientation orientation, int role) const {
  return ::QAbstractListModel::headerData(section, orientation, role);
}
bool QAbstractListModel_wrapper::insertColumns(int column, int count,
                                               const QModelIndex &parent) {
  if (m_insertColumnsCallback) {
    const void *thisPtr = this;
    return m_insertColumnsCallback(const_cast<void *>(thisPtr), column, count,
                                   parent);
  } else {
    return ::QAbstractListModel::insertColumns(column, count, parent);
  }
}
bool QAbstractListModel_wrapper::insertColumns_nocallback(
    int column, int count, const QModelIndex &parent) {
  return ::QAbstractListModel::insertColumns(column, count, parent);
}
bool QAbstractListModel_wrapper::insertRows(int row, int count,
                                            const QModelIndex &parent) {
  if (m_insertRowsCallback) {
    const void *thisPtr = this;
    return m_insertRowsCallback(const_cast<void *>(thisPtr), row, count,
                                parent);
  } else {
    return ::QAbstractListModel::insertRows(row, count, parent);
  }
}
bool QAbstractListModel_wrapper::insertRows_nocallback(
    int row, int count, const QModelIndex &parent) {
  return ::QAbstractListModel::insertRows(row, count, parent);
}
QList<QString> QAbstractListModel_wrapper::mimeTypes() const {
  if (m_mimeTypesCallback) {
    const void *thisPtr = this;
    return *m_mimeTypesCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QAbstractListModel::mimeTypes();
  }
}
QList<QString> QAbstractListModel_wrapper::mimeTypes_nocallback() const {
  return ::QAbstractListModel::mimeTypes();
}
bool QAbstractListModel_wrapper::moveColumns(
    const QModelIndex &sourceParent, int sourceColumn, int count,
    const QModelIndex &destinationParent, int destinationChild) {
  if (m_moveColumnsCallback) {
    const void *thisPtr = this;
    return m_moveColumnsCallback(const_cast<void *>(thisPtr), sourceParent,
                                 sourceColumn, count, destinationParent,
                                 destinationChild);
  } else {
    return ::QAbstractListModel::moveColumns(
        sourceParent, sourceColumn, count, destinationParent, destinationChild);
  }
}
bool QAbstractListModel_wrapper::moveColumns_nocallback(
    const QModelIndex &sourceParent, int sourceColumn, int count,
    const QModelIndex &destinationParent, int destinationChild) {
  return ::QAbstractListModel::moveColumns(sourceParent, sourceColumn, count,
                                           destinationParent, destinationChild);
}
bool QAbstractListModel_wrapper::moveRows(const QModelIndex &sourceParent,
                                          int sourceRow, int count,
                                          const QModelIndex &destinationParent,
                                          int destinationChild) {
  if (m_moveRowsCallback) {
    const void *thisPtr = this;
    return m_moveRowsCallback(const_cast<void *>(thisPtr), sourceParent,
                              sourceRow, count, destinationParent,
                              destinationChild);
  } else {
    return ::QAbstractListModel::moveRows(sourceParent, sourceRow, count,
                                          destinationParent, destinationChild);
  }
}
bool QAbstractListModel_wrapper::moveRows_nocallback(
    const QModelIndex &sourceParent, int sourceRow, int count,
    const QModelIndex &destinationParent, int destinationChild) {
  return ::QAbstractListModel::moveRows(sourceParent, sourceRow, count,
                                        destinationParent, destinationChild);
}
bool QAbstractListModel_wrapper::removeColumns(int column, int count,
                                               const QModelIndex &parent) {
  if (m_removeColumnsCallback) {
    const void *thisPtr = this;
    return m_removeColumnsCallback(const_cast<void *>(thisPtr), column, count,
                                   parent);
  } else {
    return ::QAbstractListModel::removeColumns(column, count, parent);
  }
}
bool QAbstractListModel_wrapper::removeColumns_nocallback(
    int column, int count, const QModelIndex &parent) {
  return ::QAbstractListModel::removeColumns(column, count, parent);
}
bool QAbstractListModel_wrapper::removeRows(int row, int count,
                                            const QModelIndex &parent) {
  if (m_removeRowsCallback) {
    const void *thisPtr = this;
    return m_removeRowsCallback(const_cast<void *>(thisPtr), row, count,
                                parent);
  } else {
    return ::QAbstractListModel::removeRows(row, count, parent);
  }
}
bool QAbstractListModel_wrapper::removeRows_nocallback(
    int row, int count, const QModelIndex &parent) {
  return ::QAbstractListModel::removeRows(row, count, parent);
}
void QAbstractListModel_wrapper::resetInternalData() {
  if (m_resetInternalDataCallback) {
    const void *thisPtr = this;
    m_resetInternalDataCallback(const_cast<void *>(thisPtr));
  } else {
    ::QAbstractListModel::resetInternalData();
  }
}
void QAbstractListModel_wrapper::resetInternalData_nocallback() {
  ::QAbstractListModel::resetInternalData();
}
void QAbstractListModel_wrapper::revert() {
  if (m_revertCallback) {
    const void *thisPtr = this;
    m_revertCallback(const_cast<void *>(thisPtr));
  } else {
    ::QAbstractListModel::revert();
  }
}
void QAbstractListModel_wrapper::revert_nocallback() {
  ::QAbstractListModel::revert();
}
int QAbstractListModel_wrapper::rowCount(const QModelIndex &parent) const {
  if (m_rowCountCallback) {
    const void *thisPtr = this;
    return m_rowCountCallback(const_cast<void *>(thisPtr), parent);
  } else {
    std::cerr << "rowCount: Warning: Calling pure-virtual\n";
    return {};
  }
}
int QAbstractListModel_wrapper::rowCount_nocallback(
    const QModelIndex &parent) const {
  std::cerr << "rowCount: Warning: Calling pure-virtual\n";
  return {};
}
bool QAbstractListModel_wrapper::setData(const QModelIndex &index,
                                         const QVariant &value, int role) {
  if (m_setDataCallback) {
    const void *thisPtr = this;
    return m_setDataCallback(const_cast<void *>(thisPtr), index, value, role);
  } else {
    return ::QAbstractListModel::setData(index, value, role);
  }
}
bool QAbstractListModel_wrapper::setData_nocallback(const QModelIndex &index,
                                                    const QVariant &value,
                                                    int role) {
  return ::QAbstractListModel::setData(index, value, role);
}
bool QAbstractListModel_wrapper::setHeaderData(int section,
                                               Qt::Orientation orientation,
                                               const QVariant &value,
                                               int role) {
  if (m_setHeaderDataCallback) {
    const void *thisPtr = this;
    return m_setHeaderDataCallback(const_cast<void *>(thisPtr), section,
                                   orientation, value, role);
  } else {
    return ::QAbstractListModel::setHeaderData(section, orientation, value,
                                               role);
  }
}
bool QAbstractListModel_wrapper::setHeaderData_nocallback(
    int section, Qt::Orientation orientation, const QVariant &value, int role) {
  return ::QAbstractListModel::setHeaderData(section, orientation, value, role);
}
QModelIndex QAbstractListModel_wrapper::sibling(int row, int column,
                                                const QModelIndex &idx) const {
  if (m_siblingCallback) {
    const void *thisPtr = this;
    return *m_siblingCallback(const_cast<void *>(thisPtr), row, column, idx);
  } else {
    return ::QAbstractListModel::sibling(row, column, idx);
  }
}
QModelIndex
QAbstractListModel_wrapper::sibling_nocallback(int row, int column,
                                               const QModelIndex &idx) const {
  return ::QAbstractListModel::sibling(row, column, idx);
}
void QAbstractListModel_wrapper::sort(int column, Qt::SortOrder order) {
  if (m_sortCallback) {
    const void *thisPtr = this;
    m_sortCallback(const_cast<void *>(thisPtr), column, order);
  } else {
    ::QAbstractListModel::sort(column, order);
  }
}
void QAbstractListModel_wrapper::sort_nocallback(int column,
                                                 Qt::SortOrder order) {
  ::QAbstractListModel::sort(column, order);
}
QSize QAbstractListModel_wrapper::span(const QModelIndex &index) const {
  if (m_spanCallback) {
    const void *thisPtr = this;
    return *m_spanCallback(const_cast<void *>(thisPtr), index);
  } else {
    return ::QAbstractListModel::span(index);
  }
}
QSize QAbstractListModel_wrapper::span_nocallback(
    const QModelIndex &index) const {
  return ::QAbstractListModel::span(index);
}
bool QAbstractListModel_wrapper::submit() {
  if (m_submitCallback) {
    const void *thisPtr = this;
    return m_submitCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QAbstractListModel::submit();
  }
}
bool QAbstractListModel_wrapper::submit_nocallback() {
  return ::QAbstractListModel::submit();
}
QString QAbstractListModel_wrapper::tr(const char *s, const char *c, int n) {
  return ::QAbstractListModel::tr(s, c, n);
}
QAbstractListModel_wrapper::~QAbstractListModel_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QAbstractListModel *fromPtr(void *ptr) {
  return reinterpret_cast<QAbstractListModel *>(ptr);
}
static QtDartBindings_wrappersNS::QAbstractListModel_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<
      QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(ptr);
}
extern "C" {
void c_QAbstractListModel_Finalizer(void *cppObj) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(cppObj);
}
void *c_QAbstractListModel__constructor_QObject(void *parent_) {
  auto parent = reinterpret_cast<QObject *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QAbstractListModel_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
// buddy(const QModelIndex & index) const
void *c_QAbstractListModel__buddy_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(
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
bool c_QAbstractListModel__canFetchMore_QModelIndex(void *thisObj,
                                                    void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->canFetchMore_nocallback(parent);
    } else {
      return targetPtr->canFetchMore(parent);
    }
  }();
  return result;
}
// clearItemData(const QModelIndex & index)
bool c_QAbstractListModel__clearItemData_QModelIndex(void *thisObj,
                                                     void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->clearItemData_nocallback(index);
    } else {
      return targetPtr->clearItemData(index);
    }
  }();
  return result;
}
// customEvent(QEvent * event)
void c_QAbstractListModel__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// data(const QModelIndex & index, int role) const
void *c_QAbstractListModel__data_QModelIndex_int(void *thisObj, void *index_,
                                                 int role) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = new Dartagnan::ValueWrapper<QVariant>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->data_nocallback(index, role);
    } else {
      return targetPtr->data(index, role);
    }
  }()};
  return result;
}
void c_QAbstractListModel__onDataChanged_QModelIndex_QModelIndex_QList_int(
    void *thisObj, void *contextQObject, void *callback) {
  auto instance = reinterpret_cast<QAbstractListModel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractListModel::dataChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// event(QEvent * event)
bool c_QAbstractListModel__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(
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
bool c_QAbstractListModel__eventFilter_QObject_QEvent(void *thisObj,
                                                      void *watched_,
                                                      void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(
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
void c_QAbstractListModel__fetchMore_QModelIndex(void *thisObj, void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->fetchMore_nocallback(parent);
    } else {
      return targetPtr->fetchMore(parent);
    }
  }();
}
// headerData(int section, Qt::Orientation orientation, int role) const
void *c_QAbstractListModel__headerData_int_Orientation_int(void *thisObj,
                                                           int section,
                                                           int orientation,
                                                           int role) {
  const auto &result = new Dartagnan::ValueWrapper<QVariant>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(
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
void c_QAbstractListModel__onHeaderDataChanged_Orientation_int_int(
    void *thisObj, void *contextQObject, void *callback) {
  auto instance = reinterpret_cast<QAbstractListModel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractListModel::headerDataChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// insertColumns(int column, int count, const QModelIndex & parent)
bool c_QAbstractListModel__insertColumns_int_int_QModelIndex(void *thisObj,
                                                             int column,
                                                             int count,
                                                             void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(
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
bool c_QAbstractListModel__insertRows_int_int_QModelIndex(void *thisObj,
                                                          int row, int count,
                                                          void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->insertRows_nocallback(row, count, parent);
    } else {
      return targetPtr->insertRows(row, count, parent);
    }
  }();
  return result;
}
void c_QAbstractListModel__onLayoutAboutToBeChanged(void *thisObj,
                                                    void *contextQObject,
                                                    void *callback) {
  auto instance = reinterpret_cast<QAbstractListModel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractListModel::layoutAboutToBeChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QAbstractListModel__onLayoutChanged(void *thisObj, void *contextQObject,
                                           void *callback) {
  auto instance = reinterpret_cast<QAbstractListModel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractListModel::layoutChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// mimeTypes() const
void *c_QAbstractListModel__mimeTypes(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QString>>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(
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
bool c_QAbstractListModel__moveColumns_QModelIndex_int_int_QModelIndex_int(
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
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(
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
bool c_QAbstractListModel__moveRows_QModelIndex_int_int_QModelIndex_int(
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
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(
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
// removeColumns(int column, int count, const QModelIndex & parent)
bool c_QAbstractListModel__removeColumns_int_int_QModelIndex(void *thisObj,
                                                             int column,
                                                             int count,
                                                             void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(
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
bool c_QAbstractListModel__removeRows_int_int_QModelIndex(void *thisObj,
                                                          int row, int count,
                                                          void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(
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
void c_QAbstractListModel__resetInternalData(void *thisObj) {
  fromWrapperPtr(thisObj)->resetInternalData_nocallback();
}
// revert()
void c_QAbstractListModel__revert(void *thisObj) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->revert_nocallback();
    } else {
      return targetPtr->revert();
    }
  }();
}
// rowCount(const QModelIndex & parent) const
int c_QAbstractListModel__rowCount_QModelIndex(void *thisObj, void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(
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
bool c_QAbstractListModel__setData_QModelIndex_QVariant_int(void *thisObj,
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
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(
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
bool c_QAbstractListModel__setHeaderData_int_Orientation_QVariant_int(
    void *thisObj, int section, int orientation, void *value_, int role) {
  assert(value_);
  auto &value = *reinterpret_cast<QVariant *>(value_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(
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
void *c_QAbstractListModel__sibling_int_int_QModelIndex(void *thisObj, int row,
                                                        int column,
                                                        void *idx_) {
  assert(idx_);
  auto &idx = *reinterpret_cast<QModelIndex *>(idx_);
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(
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
void c_QAbstractListModel__sort_int_SortOrder(void *thisObj, int column,
                                              int order) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(
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
void *c_QAbstractListModel__span_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(
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
bool c_QAbstractListModel__submit(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(
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
void *c_static_QAbstractListModel__tr_char_char_int(const char *s,
                                                    const char *c, int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QAbstractListModel_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
void c_QAbstractListModel__destructor(void *thisObj) {
  delete fromPtr(thisObj);
}
void c_QAbstractListModel__registerVirtualMethodCallback(void *ptr,
                                                         void *callback,
                                                         int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 5771:
    wrapper->m_buddyCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractListModel_wrapper::Callback_buddy>(
        callback);
    break;
  case 5772:
    wrapper->m_canFetchMoreCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_canFetchMore>(callback);
    break;
  case 5777:
    wrapper->m_clearItemDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_clearItemData>(callback);
    break;
  case 946:
    wrapper->m_customEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_customEvent>(callback);
    break;
  case 5780:
    wrapper->m_dataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractListModel_wrapper::Callback_data>(
        callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractListModel_wrapper::Callback_event>(
        callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_eventFilter>(callback);
    break;
  case 5798:
    wrapper->m_fetchMoreCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_fetchMore>(callback);
    break;
  case 5801:
    wrapper->m_headerDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_headerData>(callback);
    break;
  case 5806:
    wrapper->m_insertColumnsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_insertColumns>(callback);
    break;
  case 5808:
    wrapper->m_insertRowsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_insertRows>(callback);
    break;
  case 5816:
    wrapper->m_mimeTypesCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_mimeTypes>(callback);
    break;
  case 5818:
    wrapper->m_moveColumnsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_moveColumns>(callback);
    break;
  case 5820:
    wrapper->m_moveRowsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_moveRows>(callback);
    break;
  case 5827:
    wrapper->m_removeColumnsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_removeColumns>(callback);
    break;
  case 5830:
    wrapper->m_removeRowsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_removeRows>(callback);
    break;
  case 5831:
    wrapper->m_resetInternalDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_resetInternalData>(callback);
    break;
  case 5832:
    wrapper->m_revertCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractListModel_wrapper::Callback_revert>(
        callback);
    break;
  case 5833:
    wrapper->m_rowCountCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_rowCount>(callback);
    break;
  case 5836:
    wrapper->m_setDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_setData>(callback);
    break;
  case 5837:
    wrapper->m_setHeaderDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_setHeaderData>(callback);
    break;
  case 5840:
    wrapper->m_siblingCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_sibling>(callback);
    break;
  case 5842:
    wrapper->m_sortCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractListModel_wrapper::Callback_sort>(
        callback);
    break;
  case 5843:
    wrapper->m_spanCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractListModel_wrapper::Callback_span>(
        callback);
    break;
  case 5845:
    wrapper->m_submitCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractListModel_wrapper::Callback_submit>(
        callback);
    break;
  }
}
}
