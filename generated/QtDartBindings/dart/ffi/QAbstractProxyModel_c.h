/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qabstractitemmodel.h>
#include <qabstractproxymodel.h>
#include <qcoreevent.h>
#include <qitemselectionmodel.h>
#include <qlist.h>
#include <qobject.h>
#include <qsize.h>
#include <qstring.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
class QAbstractProxyModel_wrapper : public ::QAbstractProxyModel {
public:
  ~QAbstractProxyModel_wrapper();
  QAbstractProxyModel_wrapper(QObject *parent = nullptr);
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
  virtual QVariant data(const QModelIndex &proxyIndex,
                        int role = Qt::DisplayRole) const;
  virtual QVariant data_nocallback(const QModelIndex &proxyIndex,
                                   int role = Qt::DisplayRole) const;
  virtual bool event(QEvent *event);
  virtual bool event_nocallback(QEvent *event);
  virtual bool eventFilter(QObject *watched, QEvent *event);
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  virtual void fetchMore(const QModelIndex &parent);
  virtual void fetchMore_nocallback(const QModelIndex &parent);
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
  virtual QModelIndex mapFromSource(const QModelIndex &sourceIndex) const;
  virtual QModelIndex
  mapFromSource_nocallback(const QModelIndex &sourceIndex) const;
  virtual QItemSelection
  mapSelectionFromSource(const QItemSelection &selection) const;
  virtual QItemSelection
  mapSelectionFromSource_nocallback(const QItemSelection &selection) const;
  virtual QItemSelection
  mapSelectionToSource(const QItemSelection &selection) const;
  virtual QItemSelection
  mapSelectionToSource_nocallback(const QItemSelection &selection) const;
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
  virtual bool setData(const QModelIndex &index, const QVariant &value,
                       int role = Qt::EditRole);
  virtual bool setData_nocallback(const QModelIndex &index,
                                  const QVariant &value,
                                  int role = Qt::EditRole);
  virtual bool setHeaderData(int section, Qt::Orientation orientation,
                             const QVariant &value, int role = Qt::EditRole);
  virtual bool setHeaderData_nocallback(int section,
                                        Qt::Orientation orientation,
                                        const QVariant &value,
                                        int role = Qt::EditRole);
  virtual void setSourceModel(QAbstractItemModel *sourceModel);
  virtual void setSourceModel_nocallback(QAbstractItemModel *sourceModel);
  virtual QModelIndex sibling(int row, int column,
                              const QModelIndex &idx) const;
  virtual QModelIndex sibling_nocallback(int row, int column,
                                         const QModelIndex &idx) const;
  virtual void sort(int column, Qt::SortOrder order = Qt::AscendingOrder);
  virtual void sort_nocallback(int column,
                               Qt::SortOrder order = Qt::AscendingOrder);
  QAbstractItemModel *sourceModel() const;
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
  typedef QVariant *(*Callback_data)(void *, const QModelIndex &proxyIndex,
                                     int role);
  Callback_data m_dataCallback = nullptr;
  typedef bool (*Callback_event)(void *, QEvent *event);
  Callback_event m_eventCallback = nullptr;
  typedef bool (*Callback_eventFilter)(void *, QObject *watched, QEvent *event);
  Callback_eventFilter m_eventFilterCallback = nullptr;
  typedef void (*Callback_fetchMore)(void *, const QModelIndex &parent);
  Callback_fetchMore m_fetchMoreCallback = nullptr;
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
  typedef QModelIndex *(*Callback_mapFromSource)(
      void *, const QModelIndex &sourceIndex);
  Callback_mapFromSource m_mapFromSourceCallback = nullptr;
  typedef QItemSelection *(*Callback_mapSelectionFromSource)(
      void *, const QItemSelection &selection);
  Callback_mapSelectionFromSource m_mapSelectionFromSourceCallback = nullptr;
  typedef QItemSelection *(*Callback_mapSelectionToSource)(
      void *, const QItemSelection &selection);
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
// QAbstractProxyModel::QAbstractProxyModel(QObject * parent)
QtDartBindings_EXPORT void *
c_QAbstractProxyModel__constructor_QObject(void *parent_);
// QAbstractProxyModel::buddy(const QModelIndex & index) const
QtDartBindings_EXPORT void *
c_QAbstractProxyModel__buddy_QModelIndex(void *thisObj, void *index_);
// QAbstractProxyModel::canFetchMore(const QModelIndex & parent) const
QtDartBindings_EXPORT bool
c_QAbstractProxyModel__canFetchMore_QModelIndex(void *thisObj, void *parent_);
// QAbstractProxyModel::clearItemData(const QModelIndex & index)
QtDartBindings_EXPORT bool
c_QAbstractProxyModel__clearItemData_QModelIndex(void *thisObj, void *index_);
// QAbstractProxyModel::columnCount(const QModelIndex & parent) const
QtDartBindings_EXPORT int
c_QAbstractProxyModel__columnCount_QModelIndex(void *thisObj, void *parent_);
// QAbstractProxyModel::customEvent(QEvent * event)
QtDartBindings_EXPORT void
c_QAbstractProxyModel__customEvent_QEvent(void *thisObj, void *event_);
// QAbstractProxyModel::data(const QModelIndex & proxyIndex, int role) const
QtDartBindings_EXPORT void *
c_QAbstractProxyModel__data_QModelIndex_int(void *thisObj, void *proxyIndex_,
                                            int role);
// QAbstractProxyModel::event(QEvent * event)
QtDartBindings_EXPORT bool c_QAbstractProxyModel__event_QEvent(void *thisObj,
                                                               void *event_);
// QAbstractProxyModel::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QAbstractProxyModel__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                                  void *event_);
// QAbstractProxyModel::fetchMore(const QModelIndex & parent)
QtDartBindings_EXPORT void
c_QAbstractProxyModel__fetchMore_QModelIndex(void *thisObj, void *parent_);
// QAbstractProxyModel::hasChildren(const QModelIndex & parent) const
QtDartBindings_EXPORT bool
c_QAbstractProxyModel__hasChildren_QModelIndex(void *thisObj, void *parent_);
// QAbstractProxyModel::headerData(int section, Qt::Orientation orientation, int
// role) const
QtDartBindings_EXPORT void *
c_QAbstractProxyModel__headerData_int_Orientation_int(void *thisObj,
                                                      int section,
                                                      int orientation,
                                                      int role);
// QAbstractProxyModel::index(int row, int column, const QModelIndex & parent)
// const
QtDartBindings_EXPORT void *
c_QAbstractProxyModel__index_int_int_QModelIndex(void *thisObj, int row,
                                                 int column, void *parent_);
// QAbstractProxyModel::insertColumns(int column, int count, const QModelIndex &
// parent)
QtDartBindings_EXPORT bool
c_QAbstractProxyModel__insertColumns_int_int_QModelIndex(void *thisObj,
                                                         int column, int count,
                                                         void *parent_);
// QAbstractProxyModel::insertRows(int row, int count, const QModelIndex &
// parent)
QtDartBindings_EXPORT bool
c_QAbstractProxyModel__insertRows_int_int_QModelIndex(void *thisObj, int row,
                                                      int count, void *parent_);
// QAbstractProxyModel::mapFromSource(const QModelIndex & sourceIndex) const
QtDartBindings_EXPORT void *
c_QAbstractProxyModel__mapFromSource_QModelIndex(void *thisObj,
                                                 void *sourceIndex_);
// QAbstractProxyModel::mapSelectionFromSource(const QItemSelection & selection)
// const
QtDartBindings_EXPORT void *
c_QAbstractProxyModel__mapSelectionFromSource_QItemSelection(void *thisObj,
                                                             void *selection_);
// QAbstractProxyModel::mapSelectionToSource(const QItemSelection & selection)
// const
QtDartBindings_EXPORT void *
c_QAbstractProxyModel__mapSelectionToSource_QItemSelection(void *thisObj,
                                                           void *selection_);
// QAbstractProxyModel::mapToSource(const QModelIndex & proxyIndex) const
QtDartBindings_EXPORT void *
c_QAbstractProxyModel__mapToSource_QModelIndex(void *thisObj,
                                               void *proxyIndex_);
// QAbstractProxyModel::mimeTypes() const
QtDartBindings_EXPORT void *c_QAbstractProxyModel__mimeTypes(void *thisObj);
// QAbstractProxyModel::moveColumns(const QModelIndex & sourceParent, int
// sourceColumn, int count, const QModelIndex & destinationParent, int
// destinationChild)
QtDartBindings_EXPORT bool
c_QAbstractProxyModel__moveColumns_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceColumn, int count,
    void *destinationParent_, int destinationChild);
// QAbstractProxyModel::moveRows(const QModelIndex & sourceParent, int
// sourceRow, int count, const QModelIndex & destinationParent, int
// destinationChild)
QtDartBindings_EXPORT bool
c_QAbstractProxyModel__moveRows_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceRow, int count,
    void *destinationParent_, int destinationChild);
// QAbstractProxyModel::parent(const QModelIndex & child) const
QtDartBindings_EXPORT void *
c_QAbstractProxyModel__parentIndex_QModelIndex(void *thisObj, void *child_);
// QAbstractProxyModel::removeColumns(int column, int count, const QModelIndex &
// parent)
QtDartBindings_EXPORT bool
c_QAbstractProxyModel__removeColumns_int_int_QModelIndex(void *thisObj,
                                                         int column, int count,
                                                         void *parent_);
// QAbstractProxyModel::removeRows(int row, int count, const QModelIndex &
// parent)
QtDartBindings_EXPORT bool
c_QAbstractProxyModel__removeRows_int_int_QModelIndex(void *thisObj, int row,
                                                      int count, void *parent_);
// QAbstractProxyModel::resetInternalData()
QtDartBindings_EXPORT void
c_QAbstractProxyModel__resetInternalData(void *thisObj);
// QAbstractProxyModel::revert()
QtDartBindings_EXPORT void c_QAbstractProxyModel__revert(void *thisObj);
// QAbstractProxyModel::rowCount(const QModelIndex & parent) const
QtDartBindings_EXPORT int
c_QAbstractProxyModel__rowCount_QModelIndex(void *thisObj, void *parent_);
// QAbstractProxyModel::setData(const QModelIndex & index, const QVariant &
// value, int role)
QtDartBindings_EXPORT bool
c_QAbstractProxyModel__setData_QModelIndex_QVariant_int(void *thisObj,
                                                        void *index_,
                                                        void *value_, int role);
// QAbstractProxyModel::setHeaderData(int section, Qt::Orientation orientation,
// const QVariant & value, int role)
QtDartBindings_EXPORT bool
c_QAbstractProxyModel__setHeaderData_int_Orientation_QVariant_int(
    void *thisObj, int section, int orientation, void *value_, int role);
// QAbstractProxyModel::setSourceModel(QAbstractItemModel * sourceModel)
QtDartBindings_EXPORT void
c_QAbstractProxyModel__setSourceModel_QAbstractItemModel(void *thisObj,
                                                         void *sourceModel_);
// QAbstractProxyModel::sibling(int row, int column, const QModelIndex & idx)
// const
QtDartBindings_EXPORT void *
c_QAbstractProxyModel__sibling_int_int_QModelIndex(void *thisObj, int row,
                                                   int column, void *idx_);
// QAbstractProxyModel::sort(int column, Qt::SortOrder order)
QtDartBindings_EXPORT void
c_QAbstractProxyModel__sort_int_SortOrder(void *thisObj, int column, int order);
// QAbstractProxyModel::sourceModel() const
QtDartBindings_EXPORT void *c_QAbstractProxyModel__sourceModel(void *thisObj);
// QAbstractProxyModel::span(const QModelIndex & index) const
QtDartBindings_EXPORT void *
c_QAbstractProxyModel__span_QModelIndex(void *thisObj, void *index_);
// QAbstractProxyModel::submit()
QtDartBindings_EXPORT bool c_QAbstractProxyModel__submit(void *thisObj);
// QAbstractProxyModel::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QAbstractProxyModel__tr_char_char_int(const char *s, const char *c,
                                               int n);
QtDartBindings_EXPORT void c_QAbstractProxyModel__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QAbstractProxyModel__registerVirtualMethodCallback(void *ptr, void *callback,
                                                     int methodId);
QtDartBindings_EXPORT void c_QAbstractProxyModel_Finalizer(void *cppObj);
}
