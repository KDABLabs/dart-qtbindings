/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qabstractitemmodel.h>
#include <qcoreevent.h>
#include <qitemselectionmodel.h>
#include <qlist.h>
#include <qobject.h>
#include <qsize.h>
#include <qsortfilterproxymodel.h>
#include <qstring.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
class QSortFilterProxyModel_wrapper : public ::QSortFilterProxyModel {
public:
  ~QSortFilterProxyModel_wrapper();
  QSortFilterProxyModel_wrapper(QObject *parent = nullptr);
  bool autoAcceptChildRows() const;
  void autoAcceptChildRowsChanged(bool autoAcceptChildRows);
  virtual QModelIndex buddy(const QModelIndex &index) const;
  virtual QModelIndex buddy_nocallback(const QModelIndex &index) const;
  virtual bool canFetchMore(const QModelIndex &parent) const;
  virtual bool canFetchMore_nocallback(const QModelIndex &parent) const;
  virtual bool clearItemData(const QModelIndex &index);
  virtual bool clearItemData_nocallback(const QModelIndex &index);
  virtual int columnCount(const QModelIndex &parent = QModelIndex()) const;
  virtual int
  columnCount_nocallback(const QModelIndex &parent = QModelIndex()) const;
  virtual void customEvent(QEvent *event);
  virtual void customEvent_nocallback(QEvent *event);
  virtual QVariant data(const QModelIndex &index,
                        int role = Qt::DisplayRole) const;
  virtual QVariant data_nocallback(const QModelIndex &index,
                                   int role = Qt::DisplayRole) const;
  bool dynamicSortFilter() const;
  void dynamicSortFilterChanged(bool dynamicSortFilter);
  virtual bool event(QEvent *event);
  virtual bool event_nocallback(QEvent *event);
  virtual bool eventFilter(QObject *watched, QEvent *event);
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  virtual void fetchMore(const QModelIndex &parent);
  virtual void fetchMore_nocallback(const QModelIndex &parent);
  virtual bool filterAcceptsColumn(int source_column,
                                   const QModelIndex &source_parent) const;
  virtual bool
  filterAcceptsColumn_nocallback(int source_column,
                                 const QModelIndex &source_parent) const;
  virtual bool filterAcceptsRow(int source_row,
                                const QModelIndex &source_parent) const;
  virtual bool
  filterAcceptsRow_nocallback(int source_row,
                              const QModelIndex &source_parent) const;
  int filterKeyColumn() const;
  int filterRole() const;
  void filterRoleChanged(int filterRole);
  virtual bool hasChildren(const QModelIndex &parent = QModelIndex()) const;
  virtual bool
  hasChildren_nocallback(const QModelIndex &parent = QModelIndex()) const;
  virtual QVariant headerData(int section, Qt::Orientation orientation,
                              int role = Qt::DisplayRole) const;
  virtual QVariant headerData_nocallback(int section,
                                         Qt::Orientation orientation,
                                         int role = Qt::DisplayRole) const;
  virtual QModelIndex index(int row, int column,
                            const QModelIndex &parent = QModelIndex()) const;
  virtual QModelIndex
  index_nocallback(int row, int column,
                   const QModelIndex &parent = QModelIndex()) const;
  virtual bool insertColumns(int column, int count,
                             const QModelIndex &parent = QModelIndex());
  virtual bool
  insertColumns_nocallback(int column, int count,
                           const QModelIndex &parent = QModelIndex());
  virtual bool insertRows(int row, int count,
                          const QModelIndex &parent = QModelIndex());
  virtual bool insertRows_nocallback(int row, int count,
                                     const QModelIndex &parent = QModelIndex());
  void invalidate();
  void invalidateColumnsFilter();
  void invalidateFilter();
  void invalidateRowsFilter();
  bool isRecursiveFilteringEnabled() const;
  bool isSortLocaleAware() const;
  virtual bool lessThan(const QModelIndex &source_left,
                        const QModelIndex &source_right) const;
  virtual bool lessThan_nocallback(const QModelIndex &source_left,
                                   const QModelIndex &source_right) const;
  virtual QModelIndex mapFromSource(const QModelIndex &sourceIndex) const;
  virtual QModelIndex
  mapFromSource_nocallback(const QModelIndex &sourceIndex) const;
  virtual QItemSelection
  mapSelectionFromSource(const QItemSelection &sourceSelection) const;
  virtual QItemSelection mapSelectionFromSource_nocallback(
      const QItemSelection &sourceSelection) const;
  virtual QItemSelection
  mapSelectionToSource(const QItemSelection &proxySelection) const;
  virtual QItemSelection
  mapSelectionToSource_nocallback(const QItemSelection &proxySelection) const;
  virtual QModelIndex mapToSource(const QModelIndex &proxyIndex) const;
  virtual QModelIndex
  mapToSource_nocallback(const QModelIndex &proxyIndex) const;
  virtual QList<QString> mimeTypes() const;
  virtual QList<QString> mimeTypes_nocallback() const;
  virtual bool moveColumns(const QModelIndex &sourceParent, int sourceColumn,
                           int count, const QModelIndex &destinationParent,
                           int destinationChild);
  virtual bool moveColumns_nocallback(const QModelIndex &sourceParent,
                                      int sourceColumn, int count,
                                      const QModelIndex &destinationParent,
                                      int destinationChild);
  virtual bool moveRows(const QModelIndex &sourceParent, int sourceRow,
                        int count, const QModelIndex &destinationParent,
                        int destinationChild);
  virtual bool moveRows_nocallback(const QModelIndex &sourceParent,
                                   int sourceRow, int count,
                                   const QModelIndex &destinationParent,
                                   int destinationChild);
  virtual QModelIndex parent(const QModelIndex &child) const;
  virtual QModelIndex parent_nocallback(const QModelIndex &child) const;
  void recursiveFilteringEnabledChanged(bool recursiveFilteringEnabled);
  virtual bool removeColumns(int column, int count,
                             const QModelIndex &parent = QModelIndex());
  virtual bool
  removeColumns_nocallback(int column, int count,
                           const QModelIndex &parent = QModelIndex());
  virtual bool removeRows(int row, int count,
                          const QModelIndex &parent = QModelIndex());
  virtual bool removeRows_nocallback(int row, int count,
                                     const QModelIndex &parent = QModelIndex());
  virtual void resetInternalData();
  virtual void resetInternalData_nocallback();
  virtual void revert();
  virtual void revert_nocallback();
  virtual int rowCount(const QModelIndex &parent = QModelIndex()) const;
  virtual int
  rowCount_nocallback(const QModelIndex &parent = QModelIndex()) const;
  void setAutoAcceptChildRows(bool accept);
  virtual bool setData(const QModelIndex &index, const QVariant &value,
                       int role = Qt::EditRole);
  virtual bool setData_nocallback(const QModelIndex &index,
                                  const QVariant &value,
                                  int role = Qt::EditRole);
  void setDynamicSortFilter(bool enable);
  void setFilterFixedString(const QString &pattern);
  void setFilterKeyColumn(int column);
  void setFilterRegularExpression(const QString &pattern);
  void setFilterRole(int role);
  void setFilterWildcard(const QString &pattern);
  virtual bool setHeaderData(int section, Qt::Orientation orientation,
                             const QVariant &value, int role = Qt::EditRole);
  virtual bool setHeaderData_nocallback(int section,
                                        Qt::Orientation orientation,
                                        const QVariant &value,
                                        int role = Qt::EditRole);
  void setRecursiveFilteringEnabled(bool recursive);
  void setSortLocaleAware(bool on);
  void setSortRole(int role);
  virtual void setSourceModel(QAbstractItemModel *sourceModel);
  virtual void setSourceModel_nocallback(QAbstractItemModel *sourceModel);
  virtual QModelIndex sibling(int row, int column,
                              const QModelIndex &idx) const;
  virtual QModelIndex sibling_nocallback(int row, int column,
                                         const QModelIndex &idx) const;
  virtual void sort(int column, Qt::SortOrder order = Qt::AscendingOrder);
  virtual void sort_nocallback(int column,
                               Qt::SortOrder order = Qt::AscendingOrder);
  int sortColumn() const;
  void sortLocaleAwareChanged(bool sortLocaleAware);
  Qt::SortOrder sortOrder() const;
  int sortRole() const;
  void sortRoleChanged(int sortRole);
  virtual QSize span(const QModelIndex &index) const;
  virtual QSize span_nocallback(const QModelIndex &index) const;
  virtual bool submit();
  virtual bool submit_nocallback();
  static QString tr(const char *s, const char *c, int n);
  typedef QModelIndex *(*Callback_buddy)(void *, const QModelIndex &index);
  Callback_buddy m_buddyCallback = nullptr;
  typedef bool (*Callback_canFetchMore)(void *, const QModelIndex &parent);
  Callback_canFetchMore m_canFetchMoreCallback = nullptr;
  typedef bool (*Callback_clearItemData)(void *, const QModelIndex &index);
  Callback_clearItemData m_clearItemDataCallback = nullptr;
  typedef int (*Callback_columnCount)(void *, const QModelIndex &parent);
  Callback_columnCount m_columnCountCallback = nullptr;
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  typedef QVariant *(*Callback_data)(void *, const QModelIndex &index,
                                     int role);
  Callback_data m_dataCallback = nullptr;
  typedef bool (*Callback_event)(void *, QEvent *event);
  Callback_event m_eventCallback = nullptr;
  typedef bool (*Callback_eventFilter)(void *, QObject *watched, QEvent *event);
  Callback_eventFilter m_eventFilterCallback = nullptr;
  typedef void (*Callback_fetchMore)(void *, const QModelIndex &parent);
  Callback_fetchMore m_fetchMoreCallback = nullptr;
  typedef bool (*Callback_filterAcceptsColumn)(
      void *, int source_column, const QModelIndex &source_parent);
  Callback_filterAcceptsColumn m_filterAcceptsColumnCallback = nullptr;
  typedef bool (*Callback_filterAcceptsRow)(void *, int source_row,
                                            const QModelIndex &source_parent);
  Callback_filterAcceptsRow m_filterAcceptsRowCallback = nullptr;
  typedef bool (*Callback_hasChildren)(void *, const QModelIndex &parent);
  Callback_hasChildren m_hasChildrenCallback = nullptr;
  typedef QVariant *(*Callback_headerData)(void *, int section,
                                           Qt::Orientation orientation,
                                           int role);
  Callback_headerData m_headerDataCallback = nullptr;
  typedef QModelIndex *(*Callback_index)(void *, int row, int column,
                                         const QModelIndex &parent);
  Callback_index m_indexCallback = nullptr;
  typedef bool (*Callback_insertColumns)(void *, int column, int count,
                                         const QModelIndex &parent);
  Callback_insertColumns m_insertColumnsCallback = nullptr;
  typedef bool (*Callback_insertRows)(void *, int row, int count,
                                      const QModelIndex &parent);
  Callback_insertRows m_insertRowsCallback = nullptr;
  typedef bool (*Callback_lessThan)(void *, const QModelIndex &source_left,
                                    const QModelIndex &source_right);
  Callback_lessThan m_lessThanCallback = nullptr;
  typedef QModelIndex *(*Callback_mapFromSource)(
      void *, const QModelIndex &sourceIndex);
  Callback_mapFromSource m_mapFromSourceCallback = nullptr;
  typedef QItemSelection *(*Callback_mapSelectionFromSource)(
      void *, const QItemSelection &sourceSelection);
  Callback_mapSelectionFromSource m_mapSelectionFromSourceCallback = nullptr;
  typedef QItemSelection *(*Callback_mapSelectionToSource)(
      void *, const QItemSelection &proxySelection);
  Callback_mapSelectionToSource m_mapSelectionToSourceCallback = nullptr;
  typedef QModelIndex *(*Callback_mapToSource)(void *,
                                               const QModelIndex &proxyIndex);
  Callback_mapToSource m_mapToSourceCallback = nullptr;
  typedef QList<QString> *(*Callback_mimeTypes)(void *);
  Callback_mimeTypes m_mimeTypesCallback = nullptr;
  typedef bool (*Callback_moveColumns)(void *, const QModelIndex &sourceParent,
                                       int sourceColumn, int count,
                                       const QModelIndex &destinationParent,
                                       int destinationChild);
  Callback_moveColumns m_moveColumnsCallback = nullptr;
  typedef bool (*Callback_moveRows)(void *, const QModelIndex &sourceParent,
                                    int sourceRow, int count,
                                    const QModelIndex &destinationParent,
                                    int destinationChild);
  Callback_moveRows m_moveRowsCallback = nullptr;
  typedef QModelIndex *(*Callback_parentIndex)(void *,
                                               const QModelIndex &child);
  Callback_parentIndex m_parentIndexCallback = nullptr;
  typedef bool (*Callback_removeColumns)(void *, int column, int count,
                                         const QModelIndex &parent);
  Callback_removeColumns m_removeColumnsCallback = nullptr;
  typedef bool (*Callback_removeRows)(void *, int row, int count,
                                      const QModelIndex &parent);
  Callback_removeRows m_removeRowsCallback = nullptr;
  typedef void (*Callback_resetInternalData)(void *);
  Callback_resetInternalData m_resetInternalDataCallback = nullptr;
  typedef void (*Callback_revert)(void *);
  Callback_revert m_revertCallback = nullptr;
  typedef int (*Callback_rowCount)(void *, const QModelIndex &parent);
  Callback_rowCount m_rowCountCallback = nullptr;
  typedef bool (*Callback_setData)(void *, const QModelIndex &index,
                                   const QVariant &value, int role);
  Callback_setData m_setDataCallback = nullptr;
  typedef bool (*Callback_setHeaderData)(void *, int section,
                                         Qt::Orientation orientation,
                                         const QVariant &value, int role);
  Callback_setHeaderData m_setHeaderDataCallback = nullptr;
  typedef void (*Callback_setSourceModel)(void *,
                                          QAbstractItemModel *sourceModel);
  Callback_setSourceModel m_setSourceModelCallback = nullptr;
  typedef QModelIndex *(*Callback_sibling)(void *, int row, int column,
                                           const QModelIndex &idx);
  Callback_sibling m_siblingCallback = nullptr;
  typedef void (*Callback_sort)(void *, int column, Qt::SortOrder order);
  Callback_sort m_sortCallback = nullptr;
  typedef QSize *(*Callback_span)(void *, const QModelIndex &index);
  Callback_span m_spanCallback = nullptr;
  typedef bool (*Callback_submit)(void *);
  Callback_submit m_submitCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QSortFilterProxyModel::QSortFilterProxyModel(QObject * parent)
QtDartBindings_EXPORT void *
c_QSortFilterProxyModel__constructor_QObject(void *parent_);
// QSortFilterProxyModel::autoAcceptChildRows() const
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__autoAcceptChildRows(void *thisObj);
// QSortFilterProxyModel::autoAcceptChildRowsChanged(bool autoAcceptChildRows)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__autoAcceptChildRowsChanged_bool(
    void *thisObj, bool autoAcceptChildRows);
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__onAutoAcceptChildRowsChanged_bool(
    void *thisObj, void *contextQObject,
    void *callback); // QSortFilterProxyModel::buddy(const QModelIndex & index)
                     // const
QtDartBindings_EXPORT void *
c_QSortFilterProxyModel__buddy_QModelIndex(void *thisObj, void *index_);
// QSortFilterProxyModel::canFetchMore(const QModelIndex & parent) const
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__canFetchMore_QModelIndex(void *thisObj, void *parent_);
// QSortFilterProxyModel::clearItemData(const QModelIndex & index)
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__clearItemData_QModelIndex(void *thisObj, void *index_);
// QSortFilterProxyModel::columnCount(const QModelIndex & parent) const
QtDartBindings_EXPORT int
c_QSortFilterProxyModel__columnCount_QModelIndex(void *thisObj, void *parent_);
// QSortFilterProxyModel::customEvent(QEvent * event)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__customEvent_QEvent(void *thisObj, void *event_);
// QSortFilterProxyModel::data(const QModelIndex & index, int role) const
QtDartBindings_EXPORT void *
c_QSortFilterProxyModel__data_QModelIndex_int(void *thisObj, void *index_,
                                              int role);
// QSortFilterProxyModel::dynamicSortFilter() const
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__dynamicSortFilter(void *thisObj);
// QSortFilterProxyModel::dynamicSortFilterChanged(bool dynamicSortFilter)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__dynamicSortFilterChanged_bool(void *thisObj,
                                                       bool dynamicSortFilter);
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__onDynamicSortFilterChanged_bool(
    void *thisObj, void *contextQObject,
    void *callback); // QSortFilterProxyModel::event(QEvent * event)
QtDartBindings_EXPORT bool c_QSortFilterProxyModel__event_QEvent(void *thisObj,
                                                                 void *event_);
// QSortFilterProxyModel::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool c_QSortFilterProxyModel__eventFilter_QObject_QEvent(
    void *thisObj, void *watched_, void *event_);
// QSortFilterProxyModel::fetchMore(const QModelIndex & parent)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__fetchMore_QModelIndex(void *thisObj, void *parent_);
// QSortFilterProxyModel::filterAcceptsColumn(int source_column, const
// QModelIndex & source_parent) const
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__filterAcceptsColumn_int_QModelIndex(
    void *thisObj, int source_column, void *source_parent_);
// QSortFilterProxyModel::filterAcceptsRow(int source_row, const QModelIndex &
// source_parent) const
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__filterAcceptsRow_int_QModelIndex(void *thisObj,
                                                          int source_row,
                                                          void *source_parent_);
// QSortFilterProxyModel::filterKeyColumn() const
QtDartBindings_EXPORT int
c_QSortFilterProxyModel__filterKeyColumn(void *thisObj);
// QSortFilterProxyModel::filterRole() const
QtDartBindings_EXPORT int c_QSortFilterProxyModel__filterRole(void *thisObj);
// QSortFilterProxyModel::filterRoleChanged(int filterRole)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__filterRoleChanged_int(void *thisObj, int filterRole);
QtDartBindings_EXPORT void c_QSortFilterProxyModel__onFilterRoleChanged_int(
    void *thisObj, void *contextQObject,
    void *callback); // QSortFilterProxyModel::hasChildren(const QModelIndex &
                     // parent) const
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__hasChildren_QModelIndex(void *thisObj, void *parent_);
// QSortFilterProxyModel::headerData(int section, Qt::Orientation orientation,
// int role) const
QtDartBindings_EXPORT void *
c_QSortFilterProxyModel__headerData_int_Orientation_int(void *thisObj,
                                                        int section,
                                                        int orientation,
                                                        int role);
// QSortFilterProxyModel::index(int row, int column, const QModelIndex & parent)
// const
QtDartBindings_EXPORT void *
c_QSortFilterProxyModel__index_int_int_QModelIndex(void *thisObj, int row,
                                                   int column, void *parent_);
// QSortFilterProxyModel::insertColumns(int column, int count, const QModelIndex
// & parent)
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__insertColumns_int_int_QModelIndex(void *thisObj,
                                                           int column,
                                                           int count,
                                                           void *parent_);
// QSortFilterProxyModel::insertRows(int row, int count, const QModelIndex &
// parent)
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__insertRows_int_int_QModelIndex(void *thisObj, int row,
                                                        int count,
                                                        void *parent_);
// QSortFilterProxyModel::invalidate()
QtDartBindings_EXPORT void c_QSortFilterProxyModel__invalidate(void *thisObj);
// QSortFilterProxyModel::invalidateColumnsFilter()
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__invalidateColumnsFilter(void *thisObj);
// QSortFilterProxyModel::invalidateFilter()
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__invalidateFilter(void *thisObj);
// QSortFilterProxyModel::invalidateRowsFilter()
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__invalidateRowsFilter(void *thisObj);
// QSortFilterProxyModel::isRecursiveFilteringEnabled() const
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__isRecursiveFilteringEnabled(void *thisObj);
// QSortFilterProxyModel::isSortLocaleAware() const
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__isSortLocaleAware(void *thisObj);
// QSortFilterProxyModel::lessThan(const QModelIndex & source_left, const
// QModelIndex & source_right) const
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__lessThan_QModelIndex_QModelIndex(void *thisObj,
                                                          void *source_left_,
                                                          void *source_right_);
// QSortFilterProxyModel::mapFromSource(const QModelIndex & sourceIndex) const
QtDartBindings_EXPORT void *
c_QSortFilterProxyModel__mapFromSource_QModelIndex(void *thisObj,
                                                   void *sourceIndex_);
// QSortFilterProxyModel::mapSelectionFromSource(const QItemSelection &
// sourceSelection) const
QtDartBindings_EXPORT void *
c_QSortFilterProxyModel__mapSelectionFromSource_QItemSelection(
    void *thisObj, void *sourceSelection_);
// QSortFilterProxyModel::mapSelectionToSource(const QItemSelection &
// proxySelection) const
QtDartBindings_EXPORT void *
c_QSortFilterProxyModel__mapSelectionToSource_QItemSelection(
    void *thisObj, void *proxySelection_);
// QSortFilterProxyModel::mapToSource(const QModelIndex & proxyIndex) const
QtDartBindings_EXPORT void *
c_QSortFilterProxyModel__mapToSource_QModelIndex(void *thisObj,
                                                 void *proxyIndex_);
// QSortFilterProxyModel::mimeTypes() const
QtDartBindings_EXPORT void *c_QSortFilterProxyModel__mimeTypes(void *thisObj);
// QSortFilterProxyModel::moveColumns(const QModelIndex & sourceParent, int
// sourceColumn, int count, const QModelIndex & destinationParent, int
// destinationChild)
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__moveColumns_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceColumn, int count,
    void *destinationParent_, int destinationChild);
// QSortFilterProxyModel::moveRows(const QModelIndex & sourceParent, int
// sourceRow, int count, const QModelIndex & destinationParent, int
// destinationChild)
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__moveRows_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceRow, int count,
    void *destinationParent_, int destinationChild);
// QSortFilterProxyModel::parent(const QModelIndex & child) const
QtDartBindings_EXPORT void *
c_QSortFilterProxyModel__parentIndex_QModelIndex(void *thisObj, void *child_);
// QSortFilterProxyModel::recursiveFilteringEnabledChanged(bool
// recursiveFilteringEnabled)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__recursiveFilteringEnabledChanged_bool(
    void *thisObj, bool recursiveFilteringEnabled);
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__onRecursiveFilteringEnabledChanged_bool(
    void *thisObj, void *contextQObject,
    void *callback); // QSortFilterProxyModel::removeColumns(int column, int
                     // count, const QModelIndex & parent)
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__removeColumns_int_int_QModelIndex(void *thisObj,
                                                           int column,
                                                           int count,
                                                           void *parent_);
// QSortFilterProxyModel::removeRows(int row, int count, const QModelIndex &
// parent)
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__removeRows_int_int_QModelIndex(void *thisObj, int row,
                                                        int count,
                                                        void *parent_);
// QSortFilterProxyModel::resetInternalData()
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__resetInternalData(void *thisObj);
// QSortFilterProxyModel::revert()
QtDartBindings_EXPORT void c_QSortFilterProxyModel__revert(void *thisObj);
// QSortFilterProxyModel::rowCount(const QModelIndex & parent) const
QtDartBindings_EXPORT int
c_QSortFilterProxyModel__rowCount_QModelIndex(void *thisObj, void *parent_);
// QSortFilterProxyModel::setAutoAcceptChildRows(bool accept)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__setAutoAcceptChildRows_bool(void *thisObj,
                                                     bool accept);
// QSortFilterProxyModel::setData(const QModelIndex & index, const QVariant &
// value, int role)
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__setData_QModelIndex_QVariant_int(void *thisObj,
                                                          void *index_,
                                                          void *value_,
                                                          int role);
// QSortFilterProxyModel::setDynamicSortFilter(bool enable)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__setDynamicSortFilter_bool(void *thisObj, bool enable);
// QSortFilterProxyModel::setFilterFixedString(const QString & pattern)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__setFilterFixedString_QString(void *thisObj,
                                                      const char *pattern_);
// QSortFilterProxyModel::setFilterKeyColumn(int column)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__setFilterKeyColumn_int(void *thisObj, int column);
// QSortFilterProxyModel::setFilterRegularExpression(const QString & pattern)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__setFilterRegularExpression_QString(
    void *thisObj, const char *pattern_);
// QSortFilterProxyModel::setFilterRole(int role)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__setFilterRole_int(void *thisObj, int role);
// QSortFilterProxyModel::setFilterWildcard(const QString & pattern)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__setFilterWildcard_QString(void *thisObj,
                                                   const char *pattern_);
// QSortFilterProxyModel::setHeaderData(int section, Qt::Orientation
// orientation, const QVariant & value, int role)
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__setHeaderData_int_Orientation_QVariant_int(
    void *thisObj, int section, int orientation, void *value_, int role);
// QSortFilterProxyModel::setRecursiveFilteringEnabled(bool recursive)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__setRecursiveFilteringEnabled_bool(void *thisObj,
                                                           bool recursive);
// QSortFilterProxyModel::setSortLocaleAware(bool on)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__setSortLocaleAware_bool(void *thisObj, bool on);
// QSortFilterProxyModel::setSortRole(int role)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__setSortRole_int(void *thisObj, int role);
// QSortFilterProxyModel::setSourceModel(QAbstractItemModel * sourceModel)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__setSourceModel_QAbstractItemModel(void *thisObj,
                                                           void *sourceModel_);
// QSortFilterProxyModel::sibling(int row, int column, const QModelIndex & idx)
// const
QtDartBindings_EXPORT void *
c_QSortFilterProxyModel__sibling_int_int_QModelIndex(void *thisObj, int row,
                                                     int column, void *idx_);
// QSortFilterProxyModel::sort(int column, Qt::SortOrder order)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__sort_int_SortOrder(void *thisObj, int column,
                                            int order);
// QSortFilterProxyModel::sortColumn() const
QtDartBindings_EXPORT int c_QSortFilterProxyModel__sortColumn(void *thisObj);
// QSortFilterProxyModel::sortLocaleAwareChanged(bool sortLocaleAware)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__sortLocaleAwareChanged_bool(void *thisObj,
                                                     bool sortLocaleAware);
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__onSortLocaleAwareChanged_bool(
    void *thisObj, void *contextQObject,
    void *callback); // QSortFilterProxyModel::sortOrder() const
QtDartBindings_EXPORT int c_QSortFilterProxyModel__sortOrder(void *thisObj);
// QSortFilterProxyModel::sortRole() const
QtDartBindings_EXPORT int c_QSortFilterProxyModel__sortRole(void *thisObj);
// QSortFilterProxyModel::sortRoleChanged(int sortRole)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__sortRoleChanged_int(void *thisObj, int sortRole);
QtDartBindings_EXPORT void c_QSortFilterProxyModel__onSortRoleChanged_int(
    void *thisObj, void *contextQObject,
    void *callback); // QSortFilterProxyModel::span(const QModelIndex & index)
                     // const
QtDartBindings_EXPORT void *
c_QSortFilterProxyModel__span_QModelIndex(void *thisObj, void *index_);
// QSortFilterProxyModel::submit()
QtDartBindings_EXPORT bool c_QSortFilterProxyModel__submit(void *thisObj);
// QSortFilterProxyModel::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QSortFilterProxyModel__tr_char_char_int(const char *s, const char *c,
                                                 int n);
QtDartBindings_EXPORT void c_QSortFilterProxyModel__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__registerVirtualMethodCallback(void *ptr,
                                                       void *callback,
                                                       int methodId);
QtDartBindings_EXPORT void c_QSortFilterProxyModel_Finalizer(void *cppObj);
}
