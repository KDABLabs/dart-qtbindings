/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qabstractitemmodel.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qsize.h>
#include <qstandarditemmodel.h>
#include <qstring.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
class QStandardItemModel_wrapper : public ::QStandardItemModel {
public:
  ~QStandardItemModel_wrapper();
  QStandardItemModel_wrapper(QObject *parent = nullptr);
  QStandardItemModel_wrapper(int rows, int columns, QObject *parent = nullptr);
  void appendColumn(const QList<QStandardItem *> &items);
  void appendRow(QStandardItem *item);
  void appendRow(const QList<QStandardItem *> &items);
  virtual QModelIndex buddy(const QModelIndex &index) const;
  virtual QModelIndex buddy_nocallback(const QModelIndex &index) const;
  virtual bool canFetchMore(const QModelIndex &parent) const;
  virtual bool canFetchMore_nocallback(const QModelIndex &parent) const;
  void clear();
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
  virtual bool event(QEvent *event);
  virtual bool event_nocallback(QEvent *event);
  virtual bool eventFilter(QObject *watched, QEvent *event);
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  virtual void fetchMore(const QModelIndex &parent);
  virtual void fetchMore_nocallback(const QModelIndex &parent);
  QList<QStandardItem *> findItems(const QString &text) const;
  virtual bool hasChildren(const QModelIndex &parent = QModelIndex()) const;
  virtual bool
  hasChildren_nocallback(const QModelIndex &parent = QModelIndex()) const;
  virtual QVariant headerData(int section, Qt::Orientation orientation,
                              int role = Qt::DisplayRole) const;
  virtual QVariant headerData_nocallback(int section,
                                         Qt::Orientation orientation,
                                         int role = Qt::DisplayRole) const;
  QStandardItem *horizontalHeaderItem(int column) const;
  virtual QModelIndex index(int row, int column,
                            const QModelIndex &parent = QModelIndex()) const;
  virtual QModelIndex
  index_nocallback(int row, int column,
                   const QModelIndex &parent = QModelIndex()) const;
  QModelIndex indexFromItem(const QStandardItem *item) const;
  void insertColumn(int column, const QList<QStandardItem *> &items);
  virtual bool insertColumns(int column, int count,
                             const QModelIndex &parent = QModelIndex());
  virtual bool
  insertColumns_nocallback(int column, int count,
                           const QModelIndex &parent = QModelIndex());
  void insertRow(int row, QStandardItem *item);
  void insertRow(int row, const QList<QStandardItem *> &items);
  virtual bool insertRows(int row, int count,
                          const QModelIndex &parent = QModelIndex());
  virtual bool insertRows_nocallback(int row, int count,
                                     const QModelIndex &parent = QModelIndex());
  QStandardItem *invisibleRootItem() const;
  QStandardItem *item(int row, int column = 0) const;
  void itemChanged(QStandardItem *item);
  QStandardItem *itemFromIndex(const QModelIndex &index) const;
  const QStandardItem *itemPrototype() const;
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
  void setColumnCount(int columns);
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
  void setHorizontalHeaderItem(int column, QStandardItem *item);
  void setHorizontalHeaderLabels(const QList<QString> &labels);
  void setItem(int row, QStandardItem *item);
  void setItem(int row, int column, QStandardItem *item);
  void setItemPrototype(const QStandardItem *item);
  void setRowCount(int rows);
  void setSortRole(int role);
  void setVerticalHeaderItem(int row, QStandardItem *item);
  void setVerticalHeaderLabels(const QList<QString> &labels);
  virtual QModelIndex sibling(int row, int column,
                              const QModelIndex &idx) const;
  virtual QModelIndex sibling_nocallback(int row, int column,
                                         const QModelIndex &idx) const;
  virtual void sort(int column, Qt::SortOrder order = Qt::AscendingOrder);
  virtual void sort_nocallback(int column,
                               Qt::SortOrder order = Qt::AscendingOrder);
  int sortRole() const;
  virtual QSize span(const QModelIndex &index) const;
  virtual QSize span_nocallback(const QModelIndex &index) const;
  virtual bool submit();
  virtual bool submit_nocallback();
  QList<QStandardItem *> takeColumn(int column);
  QStandardItem *takeHorizontalHeaderItem(int column);
  QStandardItem *takeItem(int row, int column = 0);
  QList<QStandardItem *> takeRow(int row);
  QStandardItem *takeVerticalHeaderItem(int row);
  static QString tr(const char *s, const char *c, int n);
  QStandardItem *verticalHeaderItem(int row) const;
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
// QStandardItemModel::QStandardItemModel(QObject * parent)
QtDartBindings_EXPORT void *
c_QStandardItemModel__constructor_QObject(void *parent_);
// QStandardItemModel::QStandardItemModel(int rows, int columns, QObject *
// parent)
QtDartBindings_EXPORT void *
c_QStandardItemModel__constructor_int_int_QObject(int rows, int columns,
                                                  void *parent_);
// QStandardItemModel::appendColumn(const QList<QStandardItem* > & items)
QtDartBindings_EXPORT void
c_QStandardItemModel__appendColumn_QList_QStandardItem(void *thisObj,
                                                       void *items_);
// QStandardItemModel::appendRow(QStandardItem * item)
QtDartBindings_EXPORT void
c_QStandardItemModel__appendRow_QStandardItem(void *thisObj, void *item_);
// QStandardItemModel::appendRow(const QList<QStandardItem* > & items)
QtDartBindings_EXPORT void
c_QStandardItemModel__appendRow_QList_QStandardItem(void *thisObj,
                                                    void *items_);
// QStandardItemModel::buddy(const QModelIndex & index) const
QtDartBindings_EXPORT void *
c_QStandardItemModel__buddy_QModelIndex(void *thisObj, void *index_);
// QStandardItemModel::canFetchMore(const QModelIndex & parent) const
QtDartBindings_EXPORT bool
c_QStandardItemModel__canFetchMore_QModelIndex(void *thisObj, void *parent_);
// QStandardItemModel::clear()
QtDartBindings_EXPORT void c_QStandardItemModel__clear(void *thisObj);
// QStandardItemModel::clearItemData(const QModelIndex & index)
QtDartBindings_EXPORT bool
c_QStandardItemModel__clearItemData_QModelIndex(void *thisObj, void *index_);
// QStandardItemModel::columnCount(const QModelIndex & parent) const
QtDartBindings_EXPORT int
c_QStandardItemModel__columnCount_QModelIndex(void *thisObj, void *parent_);
// QStandardItemModel::customEvent(QEvent * event)
QtDartBindings_EXPORT void
c_QStandardItemModel__customEvent_QEvent(void *thisObj, void *event_);
// QStandardItemModel::data(const QModelIndex & index, int role) const
QtDartBindings_EXPORT void *
c_QStandardItemModel__data_QModelIndex_int(void *thisObj, void *index_,
                                           int role);
// QStandardItemModel::event(QEvent * event)
QtDartBindings_EXPORT bool c_QStandardItemModel__event_QEvent(void *thisObj,
                                                              void *event_);
// QStandardItemModel::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QStandardItemModel__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                                 void *event_);
// QStandardItemModel::fetchMore(const QModelIndex & parent)
QtDartBindings_EXPORT void
c_QStandardItemModel__fetchMore_QModelIndex(void *thisObj, void *parent_);
// QStandardItemModel::findItems(const QString & text) const
QtDartBindings_EXPORT void *
c_QStandardItemModel__findItems_QString(void *thisObj, const char *text_);
// QStandardItemModel::hasChildren(const QModelIndex & parent) const
QtDartBindings_EXPORT bool
c_QStandardItemModel__hasChildren_QModelIndex(void *thisObj, void *parent_);
// QStandardItemModel::headerData(int section, Qt::Orientation orientation, int
// role) const
QtDartBindings_EXPORT void *
c_QStandardItemModel__headerData_int_Orientation_int(void *thisObj, int section,
                                                     int orientation, int role);
// QStandardItemModel::horizontalHeaderItem(int column) const
QtDartBindings_EXPORT void *
c_QStandardItemModel__horizontalHeaderItem_int(void *thisObj, int column);
// QStandardItemModel::index(int row, int column, const QModelIndex & parent)
// const
QtDartBindings_EXPORT void *
c_QStandardItemModel__index_int_int_QModelIndex(void *thisObj, int row,
                                                int column, void *parent_);
// QStandardItemModel::indexFromItem(const QStandardItem * item) const
QtDartBindings_EXPORT void *
c_QStandardItemModel__indexFromItem_QStandardItem(void *thisObj, void *item_);
// QStandardItemModel::insertColumn(int column, const QList<QStandardItem* > &
// items)
QtDartBindings_EXPORT void
c_QStandardItemModel__insertColumn_int_QList_QStandardItem(void *thisObj,
                                                           int column,
                                                           void *items_);
// QStandardItemModel::insertColumns(int column, int count, const QModelIndex &
// parent)
QtDartBindings_EXPORT bool
c_QStandardItemModel__insertColumns_int_int_QModelIndex(void *thisObj,
                                                        int column, int count,
                                                        void *parent_);
// QStandardItemModel::insertRow(int row, QStandardItem * item)
QtDartBindings_EXPORT void
c_QStandardItemModel__insertRow_int_QStandardItem(void *thisObj, int row,
                                                  void *item_);
// QStandardItemModel::insertRow(int row, const QList<QStandardItem* > & items)
QtDartBindings_EXPORT void
c_QStandardItemModel__insertRow_int_QList_QStandardItem(void *thisObj, int row,
                                                        void *items_);
// QStandardItemModel::insertRows(int row, int count, const QModelIndex &
// parent)
QtDartBindings_EXPORT bool
c_QStandardItemModel__insertRows_int_int_QModelIndex(void *thisObj, int row,
                                                     int count, void *parent_);
// QStandardItemModel::invisibleRootItem() const
QtDartBindings_EXPORT void *
c_QStandardItemModel__invisibleRootItem(void *thisObj);
// QStandardItemModel::item(int row, int column) const
QtDartBindings_EXPORT void *
c_QStandardItemModel__item_int_int(void *thisObj, int row, int column);
// QStandardItemModel::itemChanged(QStandardItem * item)
QtDartBindings_EXPORT void
c_QStandardItemModel__itemChanged_QStandardItem(void *thisObj, void *item_);
QtDartBindings_EXPORT void c_QStandardItemModel__onItemChanged_QStandardItem(
    void *thisObj, void *contextQObject,
    void *callback); // QStandardItemModel::itemFromIndex(const QModelIndex &
                     // index) const
QtDartBindings_EXPORT void *
c_QStandardItemModel__itemFromIndex_QModelIndex(void *thisObj, void *index_);
// QStandardItemModel::itemPrototype() const
QtDartBindings_EXPORT void *c_QStandardItemModel__itemPrototype(void *thisObj);
// QStandardItemModel::mimeTypes() const
QtDartBindings_EXPORT void *c_QStandardItemModel__mimeTypes(void *thisObj);
// QStandardItemModel::moveColumns(const QModelIndex & sourceParent, int
// sourceColumn, int count, const QModelIndex & destinationParent, int
// destinationChild)
QtDartBindings_EXPORT bool
c_QStandardItemModel__moveColumns_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceColumn, int count,
    void *destinationParent_, int destinationChild);
// QStandardItemModel::moveRows(const QModelIndex & sourceParent, int sourceRow,
// int count, const QModelIndex & destinationParent, int destinationChild)
QtDartBindings_EXPORT bool
c_QStandardItemModel__moveRows_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceRow, int count,
    void *destinationParent_, int destinationChild);
// QStandardItemModel::parent(const QModelIndex & child) const
QtDartBindings_EXPORT void *
c_QStandardItemModel__parentIndex_QModelIndex(void *thisObj, void *child_);
// QStandardItemModel::removeColumns(int column, int count, const QModelIndex &
// parent)
QtDartBindings_EXPORT bool
c_QStandardItemModel__removeColumns_int_int_QModelIndex(void *thisObj,
                                                        int column, int count,
                                                        void *parent_);
// QStandardItemModel::removeRows(int row, int count, const QModelIndex &
// parent)
QtDartBindings_EXPORT bool
c_QStandardItemModel__removeRows_int_int_QModelIndex(void *thisObj, int row,
                                                     int count, void *parent_);
// QStandardItemModel::resetInternalData()
QtDartBindings_EXPORT void
c_QStandardItemModel__resetInternalData(void *thisObj);
// QStandardItemModel::revert()
QtDartBindings_EXPORT void c_QStandardItemModel__revert(void *thisObj);
// QStandardItemModel::rowCount(const QModelIndex & parent) const
QtDartBindings_EXPORT int
c_QStandardItemModel__rowCount_QModelIndex(void *thisObj, void *parent_);
// QStandardItemModel::setColumnCount(int columns)
QtDartBindings_EXPORT void
c_QStandardItemModel__setColumnCount_int(void *thisObj, int columns);
// QStandardItemModel::setData(const QModelIndex & index, const QVariant &
// value, int role)
QtDartBindings_EXPORT bool
c_QStandardItemModel__setData_QModelIndex_QVariant_int(void *thisObj,
                                                       void *index_,
                                                       void *value_, int role);
// QStandardItemModel::setHeaderData(int section, Qt::Orientation orientation,
// const QVariant & value, int role)
QtDartBindings_EXPORT bool
c_QStandardItemModel__setHeaderData_int_Orientation_QVariant_int(
    void *thisObj, int section, int orientation, void *value_, int role);
// QStandardItemModel::setHorizontalHeaderItem(int column, QStandardItem * item)
QtDartBindings_EXPORT void
c_QStandardItemModel__setHorizontalHeaderItem_int_QStandardItem(void *thisObj,
                                                                int column,
                                                                void *item_);
// QStandardItemModel::setHorizontalHeaderLabels(const QList<QString > & labels)
QtDartBindings_EXPORT void
c_QStandardItemModel__setHorizontalHeaderLabels_QList_QString(void *thisObj,
                                                              void *labels_);
// QStandardItemModel::setItem(int row, QStandardItem * item)
QtDartBindings_EXPORT void
c_QStandardItemModel__setItem_int_QStandardItem(void *thisObj, int row,
                                                void *item_);
// QStandardItemModel::setItem(int row, int column, QStandardItem * item)
QtDartBindings_EXPORT void
c_QStandardItemModel__setItem_int_int_QStandardItem(void *thisObj, int row,
                                                    int column, void *item_);
// QStandardItemModel::setItemPrototype(const QStandardItem * item)
QtDartBindings_EXPORT void
c_QStandardItemModel__setItemPrototype_QStandardItem(void *thisObj,
                                                     void *item_);
// QStandardItemModel::setRowCount(int rows)
QtDartBindings_EXPORT void c_QStandardItemModel__setRowCount_int(void *thisObj,
                                                                 int rows);
// QStandardItemModel::setSortRole(int role)
QtDartBindings_EXPORT void c_QStandardItemModel__setSortRole_int(void *thisObj,
                                                                 int role);
// QStandardItemModel::setVerticalHeaderItem(int row, QStandardItem * item)
QtDartBindings_EXPORT void
c_QStandardItemModel__setVerticalHeaderItem_int_QStandardItem(void *thisObj,
                                                              int row,
                                                              void *item_);
// QStandardItemModel::setVerticalHeaderLabels(const QList<QString > & labels)
QtDartBindings_EXPORT void
c_QStandardItemModel__setVerticalHeaderLabels_QList_QString(void *thisObj,
                                                            void *labels_);
// QStandardItemModel::sibling(int row, int column, const QModelIndex & idx)
// const
QtDartBindings_EXPORT void *
c_QStandardItemModel__sibling_int_int_QModelIndex(void *thisObj, int row,
                                                  int column, void *idx_);
// QStandardItemModel::sort(int column, Qt::SortOrder order)
QtDartBindings_EXPORT void
c_QStandardItemModel__sort_int_SortOrder(void *thisObj, int column, int order);
// QStandardItemModel::sortRole() const
QtDartBindings_EXPORT int c_QStandardItemModel__sortRole(void *thisObj);
// QStandardItemModel::span(const QModelIndex & index) const
QtDartBindings_EXPORT void *
c_QStandardItemModel__span_QModelIndex(void *thisObj, void *index_);
// QStandardItemModel::submit()
QtDartBindings_EXPORT bool c_QStandardItemModel__submit(void *thisObj);
// QStandardItemModel::takeColumn(int column)
QtDartBindings_EXPORT void *c_QStandardItemModel__takeColumn_int(void *thisObj,
                                                                 int column);
// QStandardItemModel::takeHorizontalHeaderItem(int column)
QtDartBindings_EXPORT void *
c_QStandardItemModel__takeHorizontalHeaderItem_int(void *thisObj, int column);
// QStandardItemModel::takeItem(int row, int column)
QtDartBindings_EXPORT void *
c_QStandardItemModel__takeItem_int_int(void *thisObj, int row, int column);
// QStandardItemModel::takeRow(int row)
QtDartBindings_EXPORT void *c_QStandardItemModel__takeRow_int(void *thisObj,
                                                              int row);
// QStandardItemModel::takeVerticalHeaderItem(int row)
QtDartBindings_EXPORT void *
c_QStandardItemModel__takeVerticalHeaderItem_int(void *thisObj, int row);
// QStandardItemModel::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QStandardItemModel__tr_char_char_int(const char *s, const char *c,
                                              int n);
// QStandardItemModel::verticalHeaderItem(int row) const
QtDartBindings_EXPORT void *
c_QStandardItemModel__verticalHeaderItem_int(void *thisObj, int row);
QtDartBindings_EXPORT void c_QStandardItemModel__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QStandardItemModel__registerVirtualMethodCallback(void *ptr, void *callback,
                                                    int methodId);
QtDartBindings_EXPORT void c_QStandardItemModel_Finalizer(void *cppObj);
}
