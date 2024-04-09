#include "QAbstractListModel_wrapper.h"

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
QAbstractListModel_wrapper::QAbstractListModel_wrapper(QObject *parent)
    : ::QAbstractListModel(parent) {}
QModelIndex QAbstractListModel_wrapper::buddy(const QModelIndex &index) const {
  // tag=1000
  if (m_buddyCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_buddyCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1002
    return ::QAbstractListModel::buddy(index);
  }
}
// tag=1009
QModelIndex
QAbstractListModel_wrapper::buddy_nocallback(const QModelIndex &index) const {
  // tag=1003
  return ::QAbstractListModel::buddy(index);
}
bool QAbstractListModel_wrapper::canFetchMore(const QModelIndex &parent) const {
  // tag=1000
  if (m_canFetchMoreCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_canFetchMoreCallback(const_cast<void *>(thisPtr), parent);
  } else {
    // tag=1002
    return ::QAbstractListModel::canFetchMore(parent);
  }
}
// tag=1009
bool QAbstractListModel_wrapper::canFetchMore_nocallback(
    const QModelIndex &parent) const {
  // tag=1003
  return ::QAbstractListModel::canFetchMore(parent);
}
bool QAbstractListModel_wrapper::clearItemData(const QModelIndex &index) {
  // tag=1000
  if (m_clearItemDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_clearItemDataCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1002
    return ::QAbstractListModel::clearItemData(index);
  }
}
// tag=1009
bool QAbstractListModel_wrapper::clearItemData_nocallback(
    const QModelIndex &index) {
  // tag=1003
  return ::QAbstractListModel::clearItemData(index);
}
void QAbstractListModel_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QAbstractListModel::customEvent(event);
  }
}
// tag=1009
void QAbstractListModel_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QAbstractListModel::customEvent(event);
}
QVariant QAbstractListModel_wrapper::data(const QModelIndex &index,
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
QVariant QAbstractListModel_wrapper::data_nocallback(const QModelIndex &index,
                                                     int role) const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
bool QAbstractListModel_wrapper::event(QEvent *event) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    return ::QAbstractListModel::event(event);
  }
}
// tag=1009
bool QAbstractListModel_wrapper::event_nocallback(QEvent *event) {
  // tag=1003
  return ::QAbstractListModel::event(event);
}
bool QAbstractListModel_wrapper::eventFilter(QObject *watched, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    // tag=1002
    return ::QAbstractListModel::eventFilter(watched, event);
  }
}
// tag=1009
bool QAbstractListModel_wrapper::eventFilter_nocallback(QObject *watched,
                                                        QEvent *event) {
  // tag=1003
  return ::QAbstractListModel::eventFilter(watched, event);
}
void QAbstractListModel_wrapper::fetchMore(const QModelIndex &parent) {
  // tag=1000
  if (m_fetchMoreCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_fetchMoreCallback(const_cast<void *>(thisPtr), parent);
  } else {
    // tag=1002
    ::QAbstractListModel::fetchMore(parent);
  }
}
// tag=1009
void QAbstractListModel_wrapper::fetchMore_nocallback(
    const QModelIndex &parent) {
  // tag=1003
  ::QAbstractListModel::fetchMore(parent);
}
QVariant QAbstractListModel_wrapper::headerData(int section,
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
    return ::QAbstractListModel::headerData(section, orientation, role);
  }
}
// tag=1009
QVariant QAbstractListModel_wrapper::headerData_nocallback(
    int section, Qt::Orientation orientation, int role) const {
  // tag=1003
  return ::QAbstractListModel::headerData(section, orientation, role);
}
bool QAbstractListModel_wrapper::insertColumns(int column, int count,
                                               const QModelIndex &parent) {
  // tag=1000
  if (m_insertColumnsCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_insertColumnsCallback(const_cast<void *>(thisPtr), column, count,
                                   parent);
  } else {
    // tag=1002
    return ::QAbstractListModel::insertColumns(column, count, parent);
  }
}
// tag=1009
bool QAbstractListModel_wrapper::insertColumns_nocallback(
    int column, int count, const QModelIndex &parent) {
  // tag=1003
  return ::QAbstractListModel::insertColumns(column, count, parent);
}
bool QAbstractListModel_wrapper::insertRows(int row, int count,
                                            const QModelIndex &parent) {
  // tag=1000
  if (m_insertRowsCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_insertRowsCallback(const_cast<void *>(thisPtr), row, count,
                                parent);
  } else {
    // tag=1002
    return ::QAbstractListModel::insertRows(row, count, parent);
  }
}
// tag=1009
bool QAbstractListModel_wrapper::insertRows_nocallback(
    int row, int count, const QModelIndex &parent) {
  // tag=1003
  return ::QAbstractListModel::insertRows(row, count, parent);
}
QList<QString> QAbstractListModel_wrapper::mimeTypes() const {
  // tag=1000
  if (m_mimeTypesCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_mimeTypesCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QAbstractListModel::mimeTypes();
  }
}
// tag=1009
QList<QString> QAbstractListModel_wrapper::mimeTypes_nocallback() const {
  // tag=1003
  return ::QAbstractListModel::mimeTypes();
}
bool QAbstractListModel_wrapper::moveColumns(
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
    return ::QAbstractListModel::moveColumns(
        sourceParent, sourceColumn, count, destinationParent, destinationChild);
  }
}
// tag=1009
bool QAbstractListModel_wrapper::moveColumns_nocallback(
    const QModelIndex &sourceParent, int sourceColumn, int count,
    const QModelIndex &destinationParent, int destinationChild) {
  // tag=1003
  return ::QAbstractListModel::moveColumns(sourceParent, sourceColumn, count,
                                           destinationParent, destinationChild);
}
bool QAbstractListModel_wrapper::moveRows(const QModelIndex &sourceParent,
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
    return ::QAbstractListModel::moveRows(sourceParent, sourceRow, count,
                                          destinationParent, destinationChild);
  }
}
// tag=1009
bool QAbstractListModel_wrapper::moveRows_nocallback(
    const QModelIndex &sourceParent, int sourceRow, int count,
    const QModelIndex &destinationParent, int destinationChild) {
  // tag=1003
  return ::QAbstractListModel::moveRows(sourceParent, sourceRow, count,
                                        destinationParent, destinationChild);
}
bool QAbstractListModel_wrapper::removeColumns(int column, int count,
                                               const QModelIndex &parent) {
  // tag=1000
  if (m_removeColumnsCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_removeColumnsCallback(const_cast<void *>(thisPtr), column, count,
                                   parent);
  } else {
    // tag=1002
    return ::QAbstractListModel::removeColumns(column, count, parent);
  }
}
// tag=1009
bool QAbstractListModel_wrapper::removeColumns_nocallback(
    int column, int count, const QModelIndex &parent) {
  // tag=1003
  return ::QAbstractListModel::removeColumns(column, count, parent);
}
bool QAbstractListModel_wrapper::removeRows(int row, int count,
                                            const QModelIndex &parent) {
  // tag=1000
  if (m_removeRowsCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_removeRowsCallback(const_cast<void *>(thisPtr), row, count,
                                parent);
  } else {
    // tag=1002
    return ::QAbstractListModel::removeRows(row, count, parent);
  }
}
// tag=1009
bool QAbstractListModel_wrapper::removeRows_nocallback(
    int row, int count, const QModelIndex &parent) {
  // tag=1003
  return ::QAbstractListModel::removeRows(row, count, parent);
}
void QAbstractListModel_wrapper::resetInternalData() {
  // tag=1000
  if (m_resetInternalDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_resetInternalDataCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QAbstractListModel::resetInternalData();
  }
}
// tag=1009
void QAbstractListModel_wrapper::resetInternalData_nocallback() {
  // tag=1003
  ::QAbstractListModel::resetInternalData();
}
void QAbstractListModel_wrapper::revert() {
  // tag=1000
  if (m_revertCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_revertCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QAbstractListModel::revert();
  }
}
// tag=1009
void QAbstractListModel_wrapper::revert_nocallback() {
  // tag=1003
  ::QAbstractListModel::revert();
}
int QAbstractListModel_wrapper::rowCount(const QModelIndex &parent) const {
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
int QAbstractListModel_wrapper::rowCount_nocallback(
    const QModelIndex &parent) const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
bool QAbstractListModel_wrapper::setData(const QModelIndex &index,
                                         const QVariant &value, int role) {
  // tag=1000
  if (m_setDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_setDataCallback(const_cast<void *>(thisPtr), index, value, role);
  } else {
    // tag=1002
    return ::QAbstractListModel::setData(index, value, role);
  }
}
// tag=1009
bool QAbstractListModel_wrapper::setData_nocallback(const QModelIndex &index,
                                                    const QVariant &value,
                                                    int role) {
  // tag=1003
  return ::QAbstractListModel::setData(index, value, role);
}
bool QAbstractListModel_wrapper::setHeaderData(int section,
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
    return ::QAbstractListModel::setHeaderData(section, orientation, value,
                                               role);
  }
}
// tag=1009
bool QAbstractListModel_wrapper::setHeaderData_nocallback(
    int section, Qt::Orientation orientation, const QVariant &value, int role) {
  // tag=1003
  return ::QAbstractListModel::setHeaderData(section, orientation, value, role);
}
QModelIndex QAbstractListModel_wrapper::sibling(int row, int column,
                                                const QModelIndex &idx) const {
  // tag=1000
  if (m_siblingCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_siblingCallback(const_cast<void *>(thisPtr), row, column, idx);
  } else {
    // tag=1002
    return ::QAbstractListModel::sibling(row, column, idx);
  }
}
// tag=1009
QModelIndex
QAbstractListModel_wrapper::sibling_nocallback(int row, int column,
                                               const QModelIndex &idx) const {
  // tag=1003
  return ::QAbstractListModel::sibling(row, column, idx);
}
void QAbstractListModel_wrapper::sort(int column, Qt::SortOrder order) {
  // tag=1000
  if (m_sortCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_sortCallback(const_cast<void *>(thisPtr), column, order);
  } else {
    // tag=1002
    ::QAbstractListModel::sort(column, order);
  }
}
// tag=1009
void QAbstractListModel_wrapper::sort_nocallback(int column,
                                                 Qt::SortOrder order) {
  // tag=1003
  ::QAbstractListModel::sort(column, order);
}
QSize QAbstractListModel_wrapper::span(const QModelIndex &index) const {
  // tag=1000
  if (m_spanCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_spanCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1002
    return ::QAbstractListModel::span(index);
  }
}
// tag=1009
QSize QAbstractListModel_wrapper::span_nocallback(
    const QModelIndex &index) const {
  // tag=1003
  return ::QAbstractListModel::span(index);
}
bool QAbstractListModel_wrapper::submit() {
  // tag=1000
  if (m_submitCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_submitCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QAbstractListModel::submit();
  }
}
// tag=1009
bool QAbstractListModel_wrapper::submit_nocallback() {
  // tag=1003
  return ::QAbstractListModel::submit();
}
QString QAbstractListModel_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QAbstractListModel::tr(s, c, n);
}

// tag=1005
QAbstractListModel_wrapper::~QAbstractListModel_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QAbstractListModel *fromPtr(void *ptr) {
  return reinterpret_cast<QAbstractListModel *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QAbstractListModel_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<
      QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QAbstractListModel_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(cppObj);
}
void *c_QAbstractListModel__constructor_QObject(void *parent_) {
  auto parent = reinterpret_cast<QObject *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QAbstractListModel_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// buddy(const QModelIndex & index) const
void *c_QAbstractListModel__buddy_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->buddy_nocallback(index);
        } else {
          return targetPtr->buddy(index);
        }
      }()};
}

// tag=1050
// canFetchMore(const QModelIndex & parent) const
bool c_QAbstractListModel__canFetchMore_QModelIndex(void *thisObj,
                                                    void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->canFetchMore_nocallback(parent);
        } else {
          return targetPtr->canFetchMore(parent);
        }
      }();
}

// tag=1050
// clearItemData(const QModelIndex & index)
bool c_QAbstractListModel__clearItemData_QModelIndex(void *thisObj,
                                                     void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->clearItemData_nocallback(index);
        } else {
          return targetPtr->clearItemData(index);
        }
      }();
}

// tag=1050
// customEvent(QEvent * event)
void c_QAbstractListModel__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// data(const QModelIndex & index, int role) const
void *c_QAbstractListModel__data_QModelIndex_int(void *thisObj, void *index_,
                                                 int role) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QVariant>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->data_nocallback(index, role);
        } else {
          return targetPtr->data(index, role);
        }
      }()};
}

// tag=1079
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

// tag=1050
// event(QEvent * event)
bool c_QAbstractListModel__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->event_nocallback(event);
        } else {
          return targetPtr->event(event);
        }
      }();
}

// tag=1050
// eventFilter(QObject * watched, QEvent * event)
bool c_QAbstractListModel__eventFilter_QObject_QEvent(void *thisObj,
                                                      void *watched_,
                                                      void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->eventFilter_nocallback(watched, event);
        } else {
          return targetPtr->eventFilter(watched, event);
        }
      }();
}

// tag=1050
// fetchMore(const QModelIndex & parent)
void c_QAbstractListModel__fetchMore_QModelIndex(void *thisObj, void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  // tag=1016
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

// tag=1050
// headerData(int section, Qt::Orientation orientation, int role) const
void *c_QAbstractListModel__headerData_int_Orientation_int(void *thisObj,
                                                           int section,
                                                           int orientation,
                                                           int role) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QVariant>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(targetPtr);
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

// tag=1050
// insertColumns(int column, int count, const QModelIndex & parent)
bool c_QAbstractListModel__insertColumns_int_int_QModelIndex(void *thisObj,
                                                             int column,
                                                             int count,
                                                             void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->insertColumns_nocallback(column, count, parent);
        } else {
          return targetPtr->insertColumns(column, count, parent);
        }
      }();
}

// tag=1050
// insertRows(int row, int count, const QModelIndex & parent)
bool c_QAbstractListModel__insertRows_int_int_QModelIndex(void *thisObj,
                                                          int row, int count,
                                                          void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->insertRows_nocallback(row, count, parent);
        } else {
          return targetPtr->insertRows(row, count, parent);
        }
      }();
}

// tag=1079
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

// tag=1079
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

// tag=1050
// mimeTypes() const
void *c_QAbstractListModel__mimeTypes(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QString>>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(targetPtr);
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
bool c_QAbstractListModel__moveColumns_QModelIndex_int_int_QModelIndex_int(
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
            QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(targetPtr);
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
bool c_QAbstractListModel__moveRows_QModelIndex_int_int_QModelIndex_int(
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
            QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(targetPtr);
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
// removeColumns(int column, int count, const QModelIndex & parent)
bool c_QAbstractListModel__removeColumns_int_int_QModelIndex(void *thisObj,
                                                             int column,
                                                             int count,
                                                             void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->removeColumns_nocallback(column, count, parent);
        } else {
          return targetPtr->removeColumns(column, count, parent);
        }
      }();
}

// tag=1050
// removeRows(int row, int count, const QModelIndex & parent)
bool c_QAbstractListModel__removeRows_int_int_QModelIndex(void *thisObj,
                                                          int row, int count,
                                                          void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->removeRows_nocallback(row, count, parent);
        } else {
          return targetPtr->removeRows(row, count, parent);
        }
      }();
}

// tag=1050
// resetInternalData()
void c_QAbstractListModel__resetInternalData(void *thisObj) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->resetInternalData_nocallback();
}

// tag=1050
// revert()
void c_QAbstractListModel__revert(void *thisObj) {
  // tag=1016
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

// tag=1050
// rowCount(const QModelIndex & parent) const
int c_QAbstractListModel__rowCount_QModelIndex(void *thisObj, void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->rowCount_nocallback(parent);
        } else {
          return targetPtr->rowCount(parent);
        }
      }();
}

// tag=1050
// setData(const QModelIndex & index, const QVariant & value, int role)
bool c_QAbstractListModel__setData_QModelIndex_QVariant_int(void *thisObj,
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
            QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(targetPtr);
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
bool c_QAbstractListModel__setHeaderData_int_Orientation_QVariant_int(
    void *thisObj, int section, int orientation, void *value_, int role) {
  auto &value = *reinterpret_cast<QVariant *>(value_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(targetPtr);
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
void *c_QAbstractListModel__sibling_int_int_QModelIndex(void *thisObj, int row,
                                                        int column,
                                                        void *idx_) {
  auto &idx = *reinterpret_cast<QModelIndex *>(idx_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->sibling_nocallback(row, column, idx);
        } else {
          return targetPtr->sibling(row, column, idx);
        }
      }()};
}

// tag=1050
// sort(int column, Qt::SortOrder order)
void c_QAbstractListModel__sort_int_SortOrder(void *thisObj, int column,
                                              int order) {
  // tag=1016
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

// tag=1050
// span(const QModelIndex & index) const
void *c_QAbstractListModel__span_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->span_nocallback(index);
        } else {
          return targetPtr->span(index);
        }
      }()};
}

// tag=1050
// submit()
bool c_QAbstractListModel__submit(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractListModel_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->submit_nocallback();
        } else {
          return targetPtr->submit();
        }
      }();
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QAbstractListModel__tr_char_char_int(const char *s,
                                                    const char *c, int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QAbstractListModel_wrapper::tr(s, c, n)};
}
void c_QAbstractListModel__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QAbstractListModel__registerVirtualMethodCallback(void *ptr,
                                                         void *callback,
                                                         int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 5752:
    wrapper->m_buddyCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractListModel_wrapper::Callback_buddy>(
        callback);
    break;
  case 5753:
    wrapper->m_canFetchMoreCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_canFetchMore>(callback);
    break;
  case 5758:
    wrapper->m_clearItemDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_clearItemData>(callback);
    break;
  case 944:
    wrapper->m_customEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_customEvent>(callback);
    break;
  case 5761:
    wrapper->m_dataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractListModel_wrapper::Callback_data>(
        callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractListModel_wrapper::Callback_event>(
        callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_eventFilter>(callback);
    break;
  case 5778:
    wrapper->m_fetchMoreCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_fetchMore>(callback);
    break;
  case 5781:
    wrapper->m_headerDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_headerData>(callback);
    break;
  case 5786:
    wrapper->m_insertColumnsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_insertColumns>(callback);
    break;
  case 5788:
    wrapper->m_insertRowsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_insertRows>(callback);
    break;
  case 5795:
    wrapper->m_mimeTypesCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_mimeTypes>(callback);
    break;
  case 5797:
    wrapper->m_moveColumnsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_moveColumns>(callback);
    break;
  case 5799:
    wrapper->m_moveRowsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_moveRows>(callback);
    break;
  case 5806:
    wrapper->m_removeColumnsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_removeColumns>(callback);
    break;
  case 5809:
    wrapper->m_removeRowsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_removeRows>(callback);
    break;
  case 5810:
    wrapper->m_resetInternalDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_resetInternalData>(callback);
    break;
  case 5811:
    wrapper->m_revertCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractListModel_wrapper::Callback_revert>(
        callback);
    break;
  case 5812:
    wrapper->m_rowCountCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_rowCount>(callback);
    break;
  case 5815:
    wrapper->m_setDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_setData>(callback);
    break;
  case 5816:
    wrapper->m_setHeaderDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_setHeaderData>(callback);
    break;
  case 5820:
    wrapper->m_siblingCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractListModel_wrapper::
                             Callback_sibling>(callback);
    break;
  case 5822:
    wrapper->m_sortCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractListModel_wrapper::Callback_sort>(
        callback);
    break;
  case 5823:
    wrapper->m_spanCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractListModel_wrapper::Callback_span>(
        callback);
    break;
  case 5825:
    wrapper->m_submitCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractListModel_wrapper::Callback_submit>(
        callback);
    break;
  }
}
}
