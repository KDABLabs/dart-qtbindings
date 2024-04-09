/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qabstractitemmodel.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qsize.h>
#include <qstring.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
class QAbstractItemModel_wrapper : public ::QAbstractItemModel {
public:
  ~QAbstractItemModel_wrapper();
  QAbstractItemModel_wrapper(QObject *parent = nullptr);
  void beginInsertColumns(const QModelIndex &parent, int first, int last);
  void beginInsertRows(const QModelIndex &parent, int first, int last);
  bool beginMoveColumns(const QModelIndex &sourceParent, int sourceFirst,
                        int sourceLast, const QModelIndex &destinationParent,
                        int destinationColumn);
  bool beginMoveRows(const QModelIndex &sourceParent, int sourceFirst,
                     int sourceLast, const QModelIndex &destinationParent,
                     int destinationRow);
  void beginRemoveColumns(const QModelIndex &parent, int first, int last);
  void beginRemoveRows(const QModelIndex &parent, int first, int last);
  void beginResetModel();
  virtual QModelIndex buddy(const QModelIndex &index) const;
  virtual QModelIndex buddy_nocallback(const QModelIndex &index) const;
  virtual bool canFetchMore(const QModelIndex &parent) const;
  virtual bool canFetchMore_nocallback(const QModelIndex &parent) const;
  void changePersistentIndex(const QModelIndex &from, const QModelIndex &to);
  void changePersistentIndexList(const QList<QModelIndex> &from,
                                 const QList<QModelIndex> &to);
  bool checkIndex(const QModelIndex &index) const;
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
  void dataChanged(const QModelIndex &topLeft, const QModelIndex &bottomRight,
                   const QList<int> &roles = QList<int>());
  void endInsertColumns();
  void endInsertRows();
  void endMoveColumns();
  void endMoveRows();
  void endRemoveColumns();
  void endRemoveRows();
  void endResetModel();
  virtual bool event(QEvent *event);
  virtual bool event_nocallback(QEvent *event);
  virtual bool eventFilter(QObject *watched, QEvent *event);
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  virtual void fetchMore(const QModelIndex &parent);
  virtual void fetchMore_nocallback(const QModelIndex &parent);
  virtual bool hasChildren(const QModelIndex &parent = QModelIndex()) const;
  virtual bool
  hasChildren_nocallback(const QModelIndex &parent = QModelIndex()) const;
  bool hasIndex(int row, int column,
                const QModelIndex &parent = QModelIndex()) const;
  virtual QVariant headerData(int section, Qt::Orientation orientation,
                              int role = Qt::DisplayRole) const;
  virtual QVariant headerData_nocallback(int section,
                                         Qt::Orientation orientation,
                                         int role = Qt::DisplayRole) const;
  void headerDataChanged(Qt::Orientation orientation, int first, int last);
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
  void layoutAboutToBeChanged();
  void layoutChanged();
  virtual QList<QString> mimeTypes() const;
  virtual QList<QString> mimeTypes_nocallback() const;
  bool moveColumn(const QModelIndex &sourceParent, int sourceColumn,
                  const QModelIndex &destinationParent, int destinationChild);
  virtual bool moveColumns(const QModelIndex &sourceParent, int sourceColumn,
                           int count, const QModelIndex &destinationParent,
                           int destinationChild);
  virtual bool moveColumns_nocallback(const QModelIndex &sourceParent,
                                      int sourceColumn, int count,
                                      const QModelIndex &destinationParent,
                                      int destinationChild);
  bool moveRow(const QModelIndex &sourceParent, int sourceRow,
               const QModelIndex &destinationParent, int destinationChild);
  virtual bool moveRows(const QModelIndex &sourceParent, int sourceRow,
                        int count, const QModelIndex &destinationParent,
                        int destinationChild);
  virtual bool moveRows_nocallback(const QModelIndex &sourceParent,
                                   int sourceRow, int count,
                                   const QModelIndex &destinationParent,
                                   int destinationChild);
  virtual QModelIndex parent(const QModelIndex &child) const;
  virtual QModelIndex parent_nocallback(const QModelIndex &child) const;
  QList<QModelIndex> persistentIndexList() const;
  bool removeColumn(int column, const QModelIndex &parent = QModelIndex());
  virtual bool removeColumns(int column, int count,
                             const QModelIndex &parent = QModelIndex());
  virtual bool
  removeColumns_nocallback(int column, int count,
                           const QModelIndex &parent = QModelIndex());
  bool removeRow(int row, const QModelIndex &parent = QModelIndex());
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
  virtual QModelIndex sibling(int row, int column,
                              const QModelIndex &idx) const;
  virtual QModelIndex sibling_nocallback(int row, int column,
                                         const QModelIndex &idx) const;
  virtual void sort(int column, Qt::SortOrder order = Qt::AscendingOrder);
  virtual void sort_nocallback(int column,
                               Qt::SortOrder order = Qt::AscendingOrder);
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
// QAbstractItemModel::QAbstractItemModel(QObject * parent)
QtDartBindings_EXPORT void *
c_QAbstractItemModel__constructor_QObject(void *parent_);
// QAbstractItemModel::beginInsertColumns(const QModelIndex & parent, int first,
// int last)
QtDartBindings_EXPORT void
c_QAbstractItemModel__beginInsertColumns_QModelIndex_int_int(void *thisObj,
                                                             void *parent_,
                                                             int first,
                                                             int last);
// QAbstractItemModel::beginInsertRows(const QModelIndex & parent, int first,
// int last)
QtDartBindings_EXPORT void
c_QAbstractItemModel__beginInsertRows_QModelIndex_int_int(void *thisObj,
                                                          void *parent_,
                                                          int first, int last);
// QAbstractItemModel::beginMoveColumns(const QModelIndex & sourceParent, int
// sourceFirst, int sourceLast, const QModelIndex & destinationParent, int
// destinationColumn)
QtDartBindings_EXPORT bool
c_QAbstractItemModel__beginMoveColumns_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceFirst, int sourceLast,
    void *destinationParent_, int destinationColumn);
// QAbstractItemModel::beginMoveRows(const QModelIndex & sourceParent, int
// sourceFirst, int sourceLast, const QModelIndex & destinationParent, int
// destinationRow)
QtDartBindings_EXPORT bool
c_QAbstractItemModel__beginMoveRows_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceFirst, int sourceLast,
    void *destinationParent_, int destinationRow);
// QAbstractItemModel::beginRemoveColumns(const QModelIndex & parent, int first,
// int last)
QtDartBindings_EXPORT void
c_QAbstractItemModel__beginRemoveColumns_QModelIndex_int_int(void *thisObj,
                                                             void *parent_,
                                                             int first,
                                                             int last);
// QAbstractItemModel::beginRemoveRows(const QModelIndex & parent, int first,
// int last)
QtDartBindings_EXPORT void
c_QAbstractItemModel__beginRemoveRows_QModelIndex_int_int(void *thisObj,
                                                          void *parent_,
                                                          int first, int last);
// QAbstractItemModel::beginResetModel()
QtDartBindings_EXPORT void c_QAbstractItemModel__beginResetModel(void *thisObj);
// QAbstractItemModel::buddy(const QModelIndex & index) const
QtDartBindings_EXPORT void *
c_QAbstractItemModel__buddy_QModelIndex(void *thisObj, void *index_);
// QAbstractItemModel::canFetchMore(const QModelIndex & parent) const
QtDartBindings_EXPORT bool
c_QAbstractItemModel__canFetchMore_QModelIndex(void *thisObj, void *parent_);
// QAbstractItemModel::changePersistentIndex(const QModelIndex & from, const
// QModelIndex & to)
QtDartBindings_EXPORT void
c_QAbstractItemModel__changePersistentIndex_QModelIndex_QModelIndex(
    void *thisObj, void *from_, void *to_);
// QAbstractItemModel::changePersistentIndexList(const QList<QModelIndex > &
// from, const QList<QModelIndex > & to)
QtDartBindings_EXPORT void
c_QAbstractItemModel__changePersistentIndexList_QList_QModelIndex_QList_QModelIndex(
    void *thisObj, void *from_, void *to_);
// QAbstractItemModel::checkIndex(const QModelIndex & index) const
QtDartBindings_EXPORT bool
c_QAbstractItemModel__checkIndex_QModelIndex(void *thisObj, void *index_);
// QAbstractItemModel::clearItemData(const QModelIndex & index)
QtDartBindings_EXPORT bool
c_QAbstractItemModel__clearItemData_QModelIndex(void *thisObj, void *index_);
// QAbstractItemModel::columnCount(const QModelIndex & parent) const
QtDartBindings_EXPORT int
c_QAbstractItemModel__columnCount_QModelIndex(void *thisObj, void *parent_);
// QAbstractItemModel::customEvent(QEvent * event)
QtDartBindings_EXPORT void
c_QAbstractItemModel__customEvent_QEvent(void *thisObj, void *event_);
// QAbstractItemModel::data(const QModelIndex & index, int role) const
QtDartBindings_EXPORT void *
c_QAbstractItemModel__data_QModelIndex_int(void *thisObj, void *index_,
                                           int role);
// QAbstractItemModel::dataChanged(const QModelIndex & topLeft, const
// QModelIndex & bottomRight, const QList<int > & roles)
QtDartBindings_EXPORT void
c_QAbstractItemModel__dataChanged_QModelIndex_QModelIndex_QList_int(
    void *thisObj, void *topLeft_, void *bottomRight_, void *roles_);
QtDartBindings_EXPORT void
c_QAbstractItemModel__onDataChanged_QModelIndex_QModelIndex_QList_int(
    void *thisObj, void *contextQObject,
    void *callback); // QAbstractItemModel::endInsertColumns()
QtDartBindings_EXPORT void
c_QAbstractItemModel__endInsertColumns(void *thisObj);
// QAbstractItemModel::endInsertRows()
QtDartBindings_EXPORT void c_QAbstractItemModel__endInsertRows(void *thisObj);
// QAbstractItemModel::endMoveColumns()
QtDartBindings_EXPORT void c_QAbstractItemModel__endMoveColumns(void *thisObj);
// QAbstractItemModel::endMoveRows()
QtDartBindings_EXPORT void c_QAbstractItemModel__endMoveRows(void *thisObj);
// QAbstractItemModel::endRemoveColumns()
QtDartBindings_EXPORT void
c_QAbstractItemModel__endRemoveColumns(void *thisObj);
// QAbstractItemModel::endRemoveRows()
QtDartBindings_EXPORT void c_QAbstractItemModel__endRemoveRows(void *thisObj);
// QAbstractItemModel::endResetModel()
QtDartBindings_EXPORT void c_QAbstractItemModel__endResetModel(void *thisObj);
// QAbstractItemModel::event(QEvent * event)
QtDartBindings_EXPORT bool c_QAbstractItemModel__event_QEvent(void *thisObj,
                                                              void *event_);
// QAbstractItemModel::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QAbstractItemModel__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                                 void *event_);
// QAbstractItemModel::fetchMore(const QModelIndex & parent)
QtDartBindings_EXPORT void
c_QAbstractItemModel__fetchMore_QModelIndex(void *thisObj, void *parent_);
// QAbstractItemModel::hasChildren(const QModelIndex & parent) const
QtDartBindings_EXPORT bool
c_QAbstractItemModel__hasChildren_QModelIndex(void *thisObj, void *parent_);
// QAbstractItemModel::hasIndex(int row, int column, const QModelIndex & parent)
// const
QtDartBindings_EXPORT bool
c_QAbstractItemModel__hasIndex_int_int_QModelIndex(void *thisObj, int row,
                                                   int column, void *parent_);
// QAbstractItemModel::headerData(int section, Qt::Orientation orientation, int
// role) const
QtDartBindings_EXPORT void *
c_QAbstractItemModel__headerData_int_Orientation_int(void *thisObj, int section,
                                                     int orientation, int role);
// QAbstractItemModel::headerDataChanged(Qt::Orientation orientation, int first,
// int last)
QtDartBindings_EXPORT void
c_QAbstractItemModel__headerDataChanged_Orientation_int_int(void *thisObj,
                                                            int orientation,
                                                            int first,
                                                            int last);
QtDartBindings_EXPORT void
c_QAbstractItemModel__onHeaderDataChanged_Orientation_int_int(
    void *thisObj, void *contextQObject,
    void *callback); // QAbstractItemModel::index(int row, int column, const
                     // QModelIndex & parent) const
QtDartBindings_EXPORT void *
c_QAbstractItemModel__index_int_int_QModelIndex(void *thisObj, int row,
                                                int column, void *parent_);
// QAbstractItemModel::insertColumns(int column, int count, const QModelIndex &
// parent)
QtDartBindings_EXPORT bool
c_QAbstractItemModel__insertColumns_int_int_QModelIndex(void *thisObj,
                                                        int column, int count,
                                                        void *parent_);
// QAbstractItemModel::insertRows(int row, int count, const QModelIndex &
// parent)
QtDartBindings_EXPORT bool
c_QAbstractItemModel__insertRows_int_int_QModelIndex(void *thisObj, int row,
                                                     int count, void *parent_);
// QAbstractItemModel::layoutAboutToBeChanged()
QtDartBindings_EXPORT void
c_QAbstractItemModel__layoutAboutToBeChanged(void *thisObj);
QtDartBindings_EXPORT void c_QAbstractItemModel__onLayoutAboutToBeChanged(
    void *thisObj, void *contextQObject,
    void *callback); // QAbstractItemModel::layoutChanged()
QtDartBindings_EXPORT void c_QAbstractItemModel__layoutChanged(void *thisObj);
QtDartBindings_EXPORT void c_QAbstractItemModel__onLayoutChanged(
    void *thisObj, void *contextQObject,
    void *callback); // QAbstractItemModel::mimeTypes() const
QtDartBindings_EXPORT void *c_QAbstractItemModel__mimeTypes(void *thisObj);
// QAbstractItemModel::moveColumn(const QModelIndex & sourceParent, int
// sourceColumn, const QModelIndex & destinationParent, int destinationChild)
QtDartBindings_EXPORT bool
c_QAbstractItemModel__moveColumn_QModelIndex_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceColumn,
    void *destinationParent_, int destinationChild);
// QAbstractItemModel::moveColumns(const QModelIndex & sourceParent, int
// sourceColumn, int count, const QModelIndex & destinationParent, int
// destinationChild)
QtDartBindings_EXPORT bool
c_QAbstractItemModel__moveColumns_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceColumn, int count,
    void *destinationParent_, int destinationChild);
// QAbstractItemModel::moveRow(const QModelIndex & sourceParent, int sourceRow,
// const QModelIndex & destinationParent, int destinationChild)
QtDartBindings_EXPORT bool
c_QAbstractItemModel__moveRow_QModelIndex_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceRow, void *destinationParent_,
    int destinationChild);
// QAbstractItemModel::moveRows(const QModelIndex & sourceParent, int sourceRow,
// int count, const QModelIndex & destinationParent, int destinationChild)
QtDartBindings_EXPORT bool
c_QAbstractItemModel__moveRows_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceRow, int count,
    void *destinationParent_, int destinationChild);
// QAbstractItemModel::parent(const QModelIndex & child) const
QtDartBindings_EXPORT void *
c_QAbstractItemModel__parentIndex_QModelIndex(void *thisObj, void *child_);
// QAbstractItemModel::persistentIndexList() const
QtDartBindings_EXPORT void *
c_QAbstractItemModel__persistentIndexList(void *thisObj);
// QAbstractItemModel::removeColumn(int column, const QModelIndex & parent)
QtDartBindings_EXPORT bool
c_QAbstractItemModel__removeColumn_int_QModelIndex(void *thisObj, int column,
                                                   void *parent_);
// QAbstractItemModel::removeColumns(int column, int count, const QModelIndex &
// parent)
QtDartBindings_EXPORT bool
c_QAbstractItemModel__removeColumns_int_int_QModelIndex(void *thisObj,
                                                        int column, int count,
                                                        void *parent_);
// QAbstractItemModel::removeRow(int row, const QModelIndex & parent)
QtDartBindings_EXPORT bool
c_QAbstractItemModel__removeRow_int_QModelIndex(void *thisObj, int row,
                                                void *parent_);
// QAbstractItemModel::removeRows(int row, int count, const QModelIndex &
// parent)
QtDartBindings_EXPORT bool
c_QAbstractItemModel__removeRows_int_int_QModelIndex(void *thisObj, int row,
                                                     int count, void *parent_);
// QAbstractItemModel::resetInternalData()
QtDartBindings_EXPORT void
c_QAbstractItemModel__resetInternalData(void *thisObj);
// QAbstractItemModel::revert()
QtDartBindings_EXPORT void c_QAbstractItemModel__revert(void *thisObj);
// QAbstractItemModel::rowCount(const QModelIndex & parent) const
QtDartBindings_EXPORT int
c_QAbstractItemModel__rowCount_QModelIndex(void *thisObj, void *parent_);
// QAbstractItemModel::setData(const QModelIndex & index, const QVariant &
// value, int role)
QtDartBindings_EXPORT bool
c_QAbstractItemModel__setData_QModelIndex_QVariant_int(void *thisObj,
                                                       void *index_,
                                                       void *value_, int role);
// QAbstractItemModel::setHeaderData(int section, Qt::Orientation orientation,
// const QVariant & value, int role)
QtDartBindings_EXPORT bool
c_QAbstractItemModel__setHeaderData_int_Orientation_QVariant_int(
    void *thisObj, int section, int orientation, void *value_, int role);
// QAbstractItemModel::sibling(int row, int column, const QModelIndex & idx)
// const
QtDartBindings_EXPORT void *
c_QAbstractItemModel__sibling_int_int_QModelIndex(void *thisObj, int row,
                                                  int column, void *idx_);
// QAbstractItemModel::sort(int column, Qt::SortOrder order)
QtDartBindings_EXPORT void
c_QAbstractItemModel__sort_int_SortOrder(void *thisObj, int column, int order);
// QAbstractItemModel::span(const QModelIndex & index) const
QtDartBindings_EXPORT void *
c_QAbstractItemModel__span_QModelIndex(void *thisObj, void *index_);
// QAbstractItemModel::submit()
QtDartBindings_EXPORT bool c_QAbstractItemModel__submit(void *thisObj);
// QAbstractItemModel::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QAbstractItemModel__tr_char_char_int(const char *s, const char *c,
                                              int n);
QtDartBindings_EXPORT void c_QAbstractItemModel__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QAbstractItemModel__registerVirtualMethodCallback(void *ptr, void *callback,
                                                    int methodId);
QtDartBindings_EXPORT void c_QAbstractItemModel_Finalizer(void *cppObj);
}
