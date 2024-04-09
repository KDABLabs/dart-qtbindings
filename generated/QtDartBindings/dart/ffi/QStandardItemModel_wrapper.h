
// tag=1040
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
// tag=1017
class QStandardItemModel_wrapper : public ::QStandardItemModel {
public:
  ~QStandardItemModel_wrapper();
  // tag=1041
  QStandardItemModel_wrapper(QObject *parent = nullptr);
  // tag=1041
  QStandardItemModel_wrapper(int rows, int columns, QObject *parent = nullptr);
  // tag=1041
  void appendColumn(const QList<QStandardItem *> &items);
  // tag=1041
  void appendRow(QStandardItem *item);
  // tag=1041
  void appendRow(const QList<QStandardItem *> &items);
  // tag=1041
  virtual QModelIndex buddy(const QModelIndex &index) const;
  // tag=1008
  virtual QModelIndex buddy_nocallback(const QModelIndex &index) const;
  // tag=1041
  virtual bool canFetchMore(const QModelIndex &parent) const;
  // tag=1008
  virtual bool canFetchMore_nocallback(const QModelIndex &parent) const;
  // tag=1041
  void clear();
  // tag=1041
  virtual bool clearItemData(const QModelIndex &index);
  // tag=1008
  virtual bool clearItemData_nocallback(const QModelIndex &index);
  // tag=1041
  virtual int columnCount(const QModelIndex &parent = QModelIndex()) const;
  // tag=1008
  virtual int
  columnCount_nocallback(const QModelIndex &parent = QModelIndex()) const;
  // tag=1041
  virtual void customEvent(QEvent *event);
  // tag=1008
  virtual void customEvent_nocallback(QEvent *event);
  // tag=1041
  virtual QVariant data(const QModelIndex &index,
                        int role = Qt::DisplayRole) const;
  // tag=1008
  virtual QVariant data_nocallback(const QModelIndex &index,
                                   int role = Qt::DisplayRole) const;
  // tag=1041
  virtual bool event(QEvent *event);
  // tag=1008
  virtual bool event_nocallback(QEvent *event);
  // tag=1041
  virtual bool eventFilter(QObject *watched, QEvent *event);
  // tag=1008
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  // tag=1041
  virtual void fetchMore(const QModelIndex &parent);
  // tag=1008
  virtual void fetchMore_nocallback(const QModelIndex &parent);
  // tag=1041
  QList<QStandardItem *> findItems(const QString &text) const;
  // tag=1041
  virtual bool hasChildren(const QModelIndex &parent = QModelIndex()) const;
  // tag=1008
  virtual bool
  hasChildren_nocallback(const QModelIndex &parent = QModelIndex()) const;
  // tag=1041
  virtual QVariant headerData(int section, Qt::Orientation orientation,
                              int role = Qt::DisplayRole) const;
  // tag=1008
  virtual QVariant headerData_nocallback(int section,
                                         Qt::Orientation orientation,
                                         int role = Qt::DisplayRole) const;
  // tag=1041
  QStandardItem *horizontalHeaderItem(int column) const;
  // tag=1041
  virtual QModelIndex index(int row, int column,
                            const QModelIndex &parent = QModelIndex()) const;
  // tag=1008
  virtual QModelIndex
  index_nocallback(int row, int column,
                   const QModelIndex &parent = QModelIndex()) const;
  // tag=1041
  QModelIndex indexFromItem(const QStandardItem *item) const;
  // tag=1041
  void insertColumn(int column, const QList<QStandardItem *> &items);
  // tag=1041
  virtual bool insertColumns(int column, int count,
                             const QModelIndex &parent = QModelIndex());
  // tag=1008
  virtual bool
  insertColumns_nocallback(int column, int count,
                           const QModelIndex &parent = QModelIndex());
  // tag=1041
  void insertRow(int row, QStandardItem *item);
  // tag=1041
  void insertRow(int row, const QList<QStandardItem *> &items);
  // tag=1041
  virtual bool insertRows(int row, int count,
                          const QModelIndex &parent = QModelIndex());
  // tag=1008
  virtual bool insertRows_nocallback(int row, int count,
                                     const QModelIndex &parent = QModelIndex());
  // tag=1041
  QStandardItem *invisibleRootItem() const;
  // tag=1041
  QStandardItem *item(int row, int column = 0) const;
  // tag=1041
  void itemChanged(QStandardItem *item);
  // tag=1041
  QStandardItem *itemFromIndex(const QModelIndex &index) const;
  // tag=1041
  const QStandardItem *itemPrototype() const;
  // tag=1041
  virtual QList<QString> mimeTypes() const;
  // tag=1008
  virtual QList<QString> mimeTypes_nocallback() const;
  // tag=1041
  virtual bool moveColumns(const QModelIndex &sourceParent, int sourceColumn,
                           int count, const QModelIndex &destinationParent,
                           int destinationChild);
  // tag=1008
  virtual bool moveColumns_nocallback(const QModelIndex &sourceParent,
                                      int sourceColumn, int count,
                                      const QModelIndex &destinationParent,
                                      int destinationChild);
  // tag=1041
  virtual bool moveRows(const QModelIndex &sourceParent, int sourceRow,
                        int count, const QModelIndex &destinationParent,
                        int destinationChild);
  // tag=1008
  virtual bool moveRows_nocallback(const QModelIndex &sourceParent,
                                   int sourceRow, int count,
                                   const QModelIndex &destinationParent,
                                   int destinationChild);
  // tag=1041
  virtual QModelIndex parent(const QModelIndex &child) const;
  // tag=1008
  virtual QModelIndex parent_nocallback(const QModelIndex &child) const;
  // tag=1041
  virtual bool removeColumns(int column, int count,
                             const QModelIndex &parent = QModelIndex());
  // tag=1008
  virtual bool
  removeColumns_nocallback(int column, int count,
                           const QModelIndex &parent = QModelIndex());
  // tag=1041
  virtual bool removeRows(int row, int count,
                          const QModelIndex &parent = QModelIndex());
  // tag=1008
  virtual bool removeRows_nocallback(int row, int count,
                                     const QModelIndex &parent = QModelIndex());
  // tag=1041
  virtual void resetInternalData();
  // tag=1008
  virtual void resetInternalData_nocallback();
  // tag=1041
  virtual void revert();
  // tag=1008
  virtual void revert_nocallback();
  // tag=1041
  virtual int rowCount(const QModelIndex &parent = QModelIndex()) const;
  // tag=1008
  virtual int
  rowCount_nocallback(const QModelIndex &parent = QModelIndex()) const;
  // tag=1041
  void setColumnCount(int columns);
  // tag=1041
  virtual bool setData(const QModelIndex &index, const QVariant &value,
                       int role = Qt::EditRole);
  // tag=1008
  virtual bool setData_nocallback(const QModelIndex &index,
                                  const QVariant &value,
                                  int role = Qt::EditRole);
  // tag=1041
  virtual bool setHeaderData(int section, Qt::Orientation orientation,
                             const QVariant &value, int role = Qt::EditRole);
  // tag=1008
  virtual bool setHeaderData_nocallback(int section,
                                        Qt::Orientation orientation,
                                        const QVariant &value,
                                        int role = Qt::EditRole);
  // tag=1041
  void setHorizontalHeaderItem(int column, QStandardItem *item);
  // tag=1041
  void setHorizontalHeaderLabels(const QList<QString> &labels);
  // tag=1041
  void setItem(int row, QStandardItem *item);
  // tag=1041
  void setItem(int row, int column, QStandardItem *item);
  // tag=1041
  void setItemPrototype(const QStandardItem *item);
  // tag=1041
  void setRowCount(int rows);
  // tag=1041
  void setSortRole(int role);
  // tag=1041
  void setVerticalHeaderItem(int row, QStandardItem *item);
  // tag=1041
  void setVerticalHeaderLabels(const QList<QString> &labels);
  // tag=1041
  virtual QModelIndex sibling(int row, int column,
                              const QModelIndex &idx) const;
  // tag=1008
  virtual QModelIndex sibling_nocallback(int row, int column,
                                         const QModelIndex &idx) const;
  // tag=1041
  virtual void sort(int column, Qt::SortOrder order = Qt::AscendingOrder);
  // tag=1008
  virtual void sort_nocallback(int column,
                               Qt::SortOrder order = Qt::AscendingOrder);
  // tag=1041
  int sortRole() const;
  // tag=1041
  virtual QSize span(const QModelIndex &index) const;
  // tag=1008
  virtual QSize span_nocallback(const QModelIndex &index) const;
  // tag=1041
  virtual bool submit();
  // tag=1008
  virtual bool submit_nocallback();
  // tag=1041
  QList<QStandardItem *> takeColumn(int column);
  // tag=1041
  QStandardItem *takeHorizontalHeaderItem(int column);
  // tag=1041
  QStandardItem *takeItem(int row, int column = 0);
  // tag=1041
  QList<QStandardItem *> takeRow(int row);
  // tag=1041
  QStandardItem *takeVerticalHeaderItem(int row);
  // tag=1041
  static QString tr(const char *s, const char *c, int n);
  // tag=1041
  QStandardItem *verticalHeaderItem(int row) const;
  // tag=1042
  typedef QModelIndex *(*Callback_buddy)(void *, const QModelIndex &index);
  Callback_buddy m_buddyCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_canFetchMore)(void *, const QModelIndex &parent);
  Callback_canFetchMore m_canFetchMoreCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_clearItemData)(void *, const QModelIndex &index);
  Callback_clearItemData m_clearItemDataCallback = nullptr;
  // tag=1042
  typedef int (*Callback_columnCount)(void *, const QModelIndex &parent);
  Callback_columnCount m_columnCountCallback = nullptr;
  // tag=1042
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  // tag=1042
  typedef QVariant *(*Callback_data)(void *, const QModelIndex &index,
                                     int role);
  Callback_data m_dataCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_event)(void *, QEvent *event);
  Callback_event m_eventCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_eventFilter)(void *, QObject *watched, QEvent *event);
  Callback_eventFilter m_eventFilterCallback = nullptr;
  // tag=1042
  typedef void (*Callback_fetchMore)(void *, const QModelIndex &parent);
  Callback_fetchMore m_fetchMoreCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_hasChildren)(void *, const QModelIndex &parent);
  Callback_hasChildren m_hasChildrenCallback = nullptr;
  // tag=1042
  typedef QVariant *(*Callback_headerData)(void *, int section,
                                           Qt::Orientation orientation,
                                           int role);
  Callback_headerData m_headerDataCallback = nullptr;
  // tag=1042
  typedef QModelIndex *(*Callback_index)(void *, int row, int column,
                                         const QModelIndex &parent);
  Callback_index m_indexCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_insertColumns)(void *, int column, int count,
                                         const QModelIndex &parent);
  Callback_insertColumns m_insertColumnsCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_insertRows)(void *, int row, int count,
                                      const QModelIndex &parent);
  Callback_insertRows m_insertRowsCallback = nullptr;
  // tag=1042
  typedef QList<QString> *(*Callback_mimeTypes)(void *);
  Callback_mimeTypes m_mimeTypesCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_moveColumns)(void *, const QModelIndex &sourceParent,
                                       int sourceColumn, int count,
                                       const QModelIndex &destinationParent,
                                       int destinationChild);
  Callback_moveColumns m_moveColumnsCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_moveRows)(void *, const QModelIndex &sourceParent,
                                    int sourceRow, int count,
                                    const QModelIndex &destinationParent,
                                    int destinationChild);
  Callback_moveRows m_moveRowsCallback = nullptr;
  // tag=1042
  typedef QModelIndex *(*Callback_parentIndex)(void *,
                                               const QModelIndex &child);
  Callback_parentIndex m_parentIndexCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_removeColumns)(void *, int column, int count,
                                         const QModelIndex &parent);
  Callback_removeColumns m_removeColumnsCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_removeRows)(void *, int row, int count,
                                      const QModelIndex &parent);
  Callback_removeRows m_removeRowsCallback = nullptr;
  // tag=1042
  typedef void (*Callback_resetInternalData)(void *);
  Callback_resetInternalData m_resetInternalDataCallback = nullptr;
  // tag=1042
  typedef void (*Callback_revert)(void *);
  Callback_revert m_revertCallback = nullptr;
  // tag=1042
  typedef int (*Callback_rowCount)(void *, const QModelIndex &parent);
  Callback_rowCount m_rowCountCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_setData)(void *, const QModelIndex &index,
                                   const QVariant &value, int role);
  Callback_setData m_setDataCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_setHeaderData)(void *, int section,
                                         Qt::Orientation orientation,
                                         const QVariant &value, int role);
  Callback_setHeaderData m_setHeaderDataCallback = nullptr;
  // tag=1042
  typedef QModelIndex *(*Callback_sibling)(void *, int row, int column,
                                           const QModelIndex &idx);
  Callback_sibling m_siblingCallback = nullptr;
  // tag=1042
  typedef void (*Callback_sort)(void *, int column, Qt::SortOrder order);
  Callback_sort m_sortCallback = nullptr;
  // tag=1042
  typedef QSize *(*Callback_span)(void *, const QModelIndex &index);
  Callback_span m_spanCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_submit)(void *);
  Callback_submit m_submitCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QStandardItemModel::QStandardItemModel(QObject * parent)
QtDartBindings_EXPORT void *
c_QStandardItemModel__constructor_QObject(void *parent_);

// tag=1067
//  QStandardItemModel::QStandardItemModel(int rows, int columns, QObject *
//  parent)
QtDartBindings_EXPORT void *
c_QStandardItemModel__constructor_int_int_QObject(int rows, int columns,
                                                  void *parent_);

// tag=1067
//  QStandardItemModel::appendColumn(const QList<QStandardItem* > & items)
QtDartBindings_EXPORT void
c_QStandardItemModel__appendColumn_QList_QStandardItem(void *thisObj,
                                                       void *items_);

// tag=1067
//  QStandardItemModel::appendRow(QStandardItem * item)
QtDartBindings_EXPORT void
c_QStandardItemModel__appendRow_QStandardItem(void *thisObj, void *item_);

// tag=1067
//  QStandardItemModel::appendRow(const QList<QStandardItem* > & items)
QtDartBindings_EXPORT void
c_QStandardItemModel__appendRow_QList_QStandardItem(void *thisObj,
                                                    void *items_);

// tag=1067
//  QStandardItemModel::buddy(const QModelIndex & index) const
QtDartBindings_EXPORT void *
c_QStandardItemModel__buddy_QModelIndex(void *thisObj, void *index_);

// tag=1067
//  QStandardItemModel::canFetchMore(const QModelIndex & parent) const
QtDartBindings_EXPORT bool
c_QStandardItemModel__canFetchMore_QModelIndex(void *thisObj, void *parent_);

// tag=1067
//  QStandardItemModel::clear()
QtDartBindings_EXPORT void c_QStandardItemModel__clear(void *thisObj);

// tag=1067
//  QStandardItemModel::clearItemData(const QModelIndex & index)
QtDartBindings_EXPORT bool
c_QStandardItemModel__clearItemData_QModelIndex(void *thisObj, void *index_);

// tag=1067
//  QStandardItemModel::columnCount(const QModelIndex & parent) const
QtDartBindings_EXPORT int
c_QStandardItemModel__columnCount_QModelIndex(void *thisObj, void *parent_);

// tag=1067
//  QStandardItemModel::customEvent(QEvent * event)
QtDartBindings_EXPORT void
c_QStandardItemModel__customEvent_QEvent(void *thisObj, void *event_);

// tag=1067
//  QStandardItemModel::data(const QModelIndex & index, int role) const
QtDartBindings_EXPORT void *
c_QStandardItemModel__data_QModelIndex_int(void *thisObj, void *index_,
                                           int role);

// tag=1067
//  QStandardItemModel::event(QEvent * event)
QtDartBindings_EXPORT bool c_QStandardItemModel__event_QEvent(void *thisObj,
                                                              void *event_);

// tag=1067
//  QStandardItemModel::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QStandardItemModel__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                                 void *event_);

// tag=1067
//  QStandardItemModel::fetchMore(const QModelIndex & parent)
QtDartBindings_EXPORT void
c_QStandardItemModel__fetchMore_QModelIndex(void *thisObj, void *parent_);

// tag=1067
//  QStandardItemModel::findItems(const QString & text) const
QtDartBindings_EXPORT void *
c_QStandardItemModel__findItems_QString(void *thisObj, const char *text_);

// tag=1067
//  QStandardItemModel::hasChildren(const QModelIndex & parent) const
QtDartBindings_EXPORT bool
c_QStandardItemModel__hasChildren_QModelIndex(void *thisObj, void *parent_);

// tag=1067
//  QStandardItemModel::headerData(int section, Qt::Orientation orientation, int
//  role) const
QtDartBindings_EXPORT void *
c_QStandardItemModel__headerData_int_Orientation_int(void *thisObj, int section,
                                                     int orientation, int role);

// tag=1067
//  QStandardItemModel::horizontalHeaderItem(int column) const
QtDartBindings_EXPORT void *
c_QStandardItemModel__horizontalHeaderItem_int(void *thisObj, int column);

// tag=1067
//  QStandardItemModel::index(int row, int column, const QModelIndex & parent)
//  const
QtDartBindings_EXPORT void *
c_QStandardItemModel__index_int_int_QModelIndex(void *thisObj, int row,
                                                int column, void *parent_);

// tag=1067
//  QStandardItemModel::indexFromItem(const QStandardItem * item) const
QtDartBindings_EXPORT void *
c_QStandardItemModel__indexFromItem_QStandardItem(void *thisObj, void *item_);

// tag=1067
//  QStandardItemModel::insertColumn(int column, const QList<QStandardItem* > &
//  items)
QtDartBindings_EXPORT void
c_QStandardItemModel__insertColumn_int_QList_QStandardItem(void *thisObj,
                                                           int column,
                                                           void *items_);

// tag=1067
//  QStandardItemModel::insertColumns(int column, int count, const QModelIndex &
//  parent)
QtDartBindings_EXPORT bool
c_QStandardItemModel__insertColumns_int_int_QModelIndex(void *thisObj,
                                                        int column, int count,
                                                        void *parent_);

// tag=1067
//  QStandardItemModel::insertRow(int row, QStandardItem * item)
QtDartBindings_EXPORT void
c_QStandardItemModel__insertRow_int_QStandardItem(void *thisObj, int row,
                                                  void *item_);

// tag=1067
//  QStandardItemModel::insertRow(int row, const QList<QStandardItem* > & items)
QtDartBindings_EXPORT void
c_QStandardItemModel__insertRow_int_QList_QStandardItem(void *thisObj, int row,
                                                        void *items_);

// tag=1067
//  QStandardItemModel::insertRows(int row, int count, const QModelIndex &
//  parent)
QtDartBindings_EXPORT bool
c_QStandardItemModel__insertRows_int_int_QModelIndex(void *thisObj, int row,
                                                     int count, void *parent_);

// tag=1067
//  QStandardItemModel::invisibleRootItem() const
QtDartBindings_EXPORT void *
c_QStandardItemModel__invisibleRootItem(void *thisObj);

// tag=1067
//  QStandardItemModel::item(int row, int column) const
QtDartBindings_EXPORT void *
c_QStandardItemModel__item_int_int(void *thisObj, int row, int column);

// tag=1067
//  QStandardItemModel::itemChanged(QStandardItem * item)
QtDartBindings_EXPORT void
c_QStandardItemModel__itemChanged_QStandardItem(void *thisObj, void *item_);

// tag=1078
QtDartBindings_EXPORT void c_QStandardItemModel__onItemChanged_QStandardItem(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QStandardItemModel::itemFromIndex(const QModelIndex & index) const
QtDartBindings_EXPORT void *
c_QStandardItemModel__itemFromIndex_QModelIndex(void *thisObj, void *index_);

// tag=1067
//  QStandardItemModel::itemPrototype() const
QtDartBindings_EXPORT void *c_QStandardItemModel__itemPrototype(void *thisObj);

// tag=1067
//  QStandardItemModel::mimeTypes() const
QtDartBindings_EXPORT void *c_QStandardItemModel__mimeTypes(void *thisObj);

// tag=1067
//  QStandardItemModel::moveColumns(const QModelIndex & sourceParent, int
//  sourceColumn, int count, const QModelIndex & destinationParent, int
//  destinationChild)
QtDartBindings_EXPORT bool
c_QStandardItemModel__moveColumns_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceColumn, int count,
    void *destinationParent_, int destinationChild);

// tag=1067
//  QStandardItemModel::moveRows(const QModelIndex & sourceParent, int
//  sourceRow, int count, const QModelIndex & destinationParent, int
//  destinationChild)
QtDartBindings_EXPORT bool
c_QStandardItemModel__moveRows_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceRow, int count,
    void *destinationParent_, int destinationChild);

// tag=1067
//  QStandardItemModel::parent(const QModelIndex & child) const
QtDartBindings_EXPORT void *
c_QStandardItemModel__parentIndex_QModelIndex(void *thisObj, void *child_);

// tag=1067
//  QStandardItemModel::removeColumns(int column, int count, const QModelIndex &
//  parent)
QtDartBindings_EXPORT bool
c_QStandardItemModel__removeColumns_int_int_QModelIndex(void *thisObj,
                                                        int column, int count,
                                                        void *parent_);

// tag=1067
//  QStandardItemModel::removeRows(int row, int count, const QModelIndex &
//  parent)
QtDartBindings_EXPORT bool
c_QStandardItemModel__removeRows_int_int_QModelIndex(void *thisObj, int row,
                                                     int count, void *parent_);

// tag=1067
//  QStandardItemModel::resetInternalData()
QtDartBindings_EXPORT void
c_QStandardItemModel__resetInternalData(void *thisObj);

// tag=1067
//  QStandardItemModel::revert()
QtDartBindings_EXPORT void c_QStandardItemModel__revert(void *thisObj);

// tag=1067
//  QStandardItemModel::rowCount(const QModelIndex & parent) const
QtDartBindings_EXPORT int
c_QStandardItemModel__rowCount_QModelIndex(void *thisObj, void *parent_);

// tag=1067
//  QStandardItemModel::setColumnCount(int columns)
QtDartBindings_EXPORT void
c_QStandardItemModel__setColumnCount_int(void *thisObj, int columns);

// tag=1067
//  QStandardItemModel::setData(const QModelIndex & index, const QVariant &
//  value, int role)
QtDartBindings_EXPORT bool
c_QStandardItemModel__setData_QModelIndex_QVariant_int(void *thisObj,
                                                       void *index_,
                                                       void *value_, int role);

// tag=1067
//  QStandardItemModel::setHeaderData(int section, Qt::Orientation orientation,
//  const QVariant & value, int role)
QtDartBindings_EXPORT bool
c_QStandardItemModel__setHeaderData_int_Orientation_QVariant_int(
    void *thisObj, int section, int orientation, void *value_, int role);

// tag=1067
//  QStandardItemModel::setHorizontalHeaderItem(int column, QStandardItem *
//  item)
QtDartBindings_EXPORT void
c_QStandardItemModel__setHorizontalHeaderItem_int_QStandardItem(void *thisObj,
                                                                int column,
                                                                void *item_);

// tag=1067
//  QStandardItemModel::setHorizontalHeaderLabels(const QList<QString > &
//  labels)
QtDartBindings_EXPORT void
c_QStandardItemModel__setHorizontalHeaderLabels_QList_QString(void *thisObj,
                                                              void *labels_);

// tag=1067
//  QStandardItemModel::setItem(int row, QStandardItem * item)
QtDartBindings_EXPORT void
c_QStandardItemModel__setItem_int_QStandardItem(void *thisObj, int row,
                                                void *item_);

// tag=1067
//  QStandardItemModel::setItem(int row, int column, QStandardItem * item)
QtDartBindings_EXPORT void
c_QStandardItemModel__setItem_int_int_QStandardItem(void *thisObj, int row,
                                                    int column, void *item_);

// tag=1067
//  QStandardItemModel::setItemPrototype(const QStandardItem * item)
QtDartBindings_EXPORT void
c_QStandardItemModel__setItemPrototype_QStandardItem(void *thisObj,
                                                     void *item_);

// tag=1067
//  QStandardItemModel::setRowCount(int rows)
QtDartBindings_EXPORT void c_QStandardItemModel__setRowCount_int(void *thisObj,
                                                                 int rows);

// tag=1067
//  QStandardItemModel::setSortRole(int role)
QtDartBindings_EXPORT void c_QStandardItemModel__setSortRole_int(void *thisObj,
                                                                 int role);

// tag=1067
//  QStandardItemModel::setVerticalHeaderItem(int row, QStandardItem * item)
QtDartBindings_EXPORT void
c_QStandardItemModel__setVerticalHeaderItem_int_QStandardItem(void *thisObj,
                                                              int row,
                                                              void *item_);

// tag=1067
//  QStandardItemModel::setVerticalHeaderLabels(const QList<QString > & labels)
QtDartBindings_EXPORT void
c_QStandardItemModel__setVerticalHeaderLabels_QList_QString(void *thisObj,
                                                            void *labels_);

// tag=1067
//  QStandardItemModel::sibling(int row, int column, const QModelIndex & idx)
//  const
QtDartBindings_EXPORT void *
c_QStandardItemModel__sibling_int_int_QModelIndex(void *thisObj, int row,
                                                  int column, void *idx_);

// tag=1067
//  QStandardItemModel::sort(int column, Qt::SortOrder order)
QtDartBindings_EXPORT void
c_QStandardItemModel__sort_int_SortOrder(void *thisObj, int column, int order);

// tag=1067
//  QStandardItemModel::sortRole() const
QtDartBindings_EXPORT int c_QStandardItemModel__sortRole(void *thisObj);

// tag=1067
//  QStandardItemModel::span(const QModelIndex & index) const
QtDartBindings_EXPORT void *
c_QStandardItemModel__span_QModelIndex(void *thisObj, void *index_);

// tag=1067
//  QStandardItemModel::submit()
QtDartBindings_EXPORT bool c_QStandardItemModel__submit(void *thisObj);

// tag=1067
//  QStandardItemModel::takeColumn(int column)
QtDartBindings_EXPORT void *c_QStandardItemModel__takeColumn_int(void *thisObj,
                                                                 int column);

// tag=1067
//  QStandardItemModel::takeHorizontalHeaderItem(int column)
QtDartBindings_EXPORT void *
c_QStandardItemModel__takeHorizontalHeaderItem_int(void *thisObj, int column);

// tag=1067
//  QStandardItemModel::takeItem(int row, int column)
QtDartBindings_EXPORT void *
c_QStandardItemModel__takeItem_int_int(void *thisObj, int row, int column);

// tag=1067
//  QStandardItemModel::takeRow(int row)
QtDartBindings_EXPORT void *c_QStandardItemModel__takeRow_int(void *thisObj,
                                                              int row);

// tag=1067
//  QStandardItemModel::takeVerticalHeaderItem(int row)
QtDartBindings_EXPORT void *
c_QStandardItemModel__takeVerticalHeaderItem_int(void *thisObj, int row);

// tag=1067
//  QStandardItemModel::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QStandardItemModel__tr_char_char_int(const char *s, const char *c,
                                              int n);

// tag=1067
//  QStandardItemModel::verticalHeaderItem(int row) const
QtDartBindings_EXPORT void *
c_QStandardItemModel__verticalHeaderItem_int(void *thisObj, int row);

// tag=1066
QtDartBindings_EXPORT void c_QStandardItemModel__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QStandardItemModel__registerVirtualMethodCallback(void *ptr, void *callback,
                                                    int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QStandardItemModel_Finalizer(void *, void *cppObj,
                                                          void *);
}
