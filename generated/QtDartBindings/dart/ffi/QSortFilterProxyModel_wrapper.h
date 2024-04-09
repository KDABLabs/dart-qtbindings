
// tag=1040
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
// tag=1017
class QSortFilterProxyModel_wrapper : public ::QSortFilterProxyModel {
public:
  ~QSortFilterProxyModel_wrapper();
  // tag=1041
  QSortFilterProxyModel_wrapper(QObject *parent = nullptr);
  // tag=1041
  bool autoAcceptChildRows() const;
  // tag=1041
  void autoAcceptChildRowsChanged(bool autoAcceptChildRows);
  // tag=1041
  virtual QModelIndex buddy(const QModelIndex &index) const;
  // tag=1008
  virtual QModelIndex buddy_nocallback(const QModelIndex &index) const;
  // tag=1041
  virtual bool canFetchMore(const QModelIndex &parent) const;
  // tag=1008
  virtual bool canFetchMore_nocallback(const QModelIndex &parent) const;
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
  bool dynamicSortFilter() const;
  // tag=1041
  void dynamicSortFilterChanged(bool dynamicSortFilter);
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
  virtual bool filterAcceptsColumn(int source_column,
                                   const QModelIndex &source_parent) const;
  // tag=1008
  virtual bool
  filterAcceptsColumn_nocallback(int source_column,
                                 const QModelIndex &source_parent) const;
  // tag=1041
  virtual bool filterAcceptsRow(int source_row,
                                const QModelIndex &source_parent) const;
  // tag=1008
  virtual bool
  filterAcceptsRow_nocallback(int source_row,
                              const QModelIndex &source_parent) const;
  // tag=1041
  int filterKeyColumn() const;
  // tag=1041
  int filterRole() const;
  // tag=1041
  void filterRoleChanged(int filterRole);
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
  virtual QModelIndex index(int row, int column,
                            const QModelIndex &parent = QModelIndex()) const;
  // tag=1008
  virtual QModelIndex
  index_nocallback(int row, int column,
                   const QModelIndex &parent = QModelIndex()) const;
  // tag=1041
  virtual bool insertColumns(int column, int count,
                             const QModelIndex &parent = QModelIndex());
  // tag=1008
  virtual bool
  insertColumns_nocallback(int column, int count,
                           const QModelIndex &parent = QModelIndex());
  // tag=1041
  virtual bool insertRows(int row, int count,
                          const QModelIndex &parent = QModelIndex());
  // tag=1008
  virtual bool insertRows_nocallback(int row, int count,
                                     const QModelIndex &parent = QModelIndex());
  // tag=1041
  void invalidate();
  // tag=1041
  void invalidateColumnsFilter();
  // tag=1041
  void invalidateFilter();
  // tag=1041
  void invalidateRowsFilter();
  // tag=1041
  bool isRecursiveFilteringEnabled() const;
  // tag=1041
  bool isSortLocaleAware() const;
  // tag=1041
  virtual bool lessThan(const QModelIndex &source_left,
                        const QModelIndex &source_right) const;
  // tag=1008
  virtual bool lessThan_nocallback(const QModelIndex &source_left,
                                   const QModelIndex &source_right) const;
  // tag=1041
  virtual QModelIndex mapFromSource(const QModelIndex &sourceIndex) const;
  // tag=1008
  virtual QModelIndex
  mapFromSource_nocallback(const QModelIndex &sourceIndex) const;
  // tag=1041
  virtual QItemSelection
  mapSelectionFromSource(const QItemSelection &sourceSelection) const;
  // tag=1008
  virtual QItemSelection mapSelectionFromSource_nocallback(
      const QItemSelection &sourceSelection) const;
  // tag=1041
  virtual QItemSelection
  mapSelectionToSource(const QItemSelection &proxySelection) const;
  // tag=1008
  virtual QItemSelection
  mapSelectionToSource_nocallback(const QItemSelection &proxySelection) const;
  // tag=1041
  virtual QModelIndex mapToSource(const QModelIndex &proxyIndex) const;
  // tag=1008
  virtual QModelIndex
  mapToSource_nocallback(const QModelIndex &proxyIndex) const;
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
  void recursiveFilteringEnabledChanged(bool recursiveFilteringEnabled);
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
  void setAutoAcceptChildRows(bool accept);
  // tag=1041
  virtual bool setData(const QModelIndex &index, const QVariant &value,
                       int role = Qt::EditRole);
  // tag=1008
  virtual bool setData_nocallback(const QModelIndex &index,
                                  const QVariant &value,
                                  int role = Qt::EditRole);
  // tag=1041
  void setDynamicSortFilter(bool enable);
  // tag=1041
  void setFilterFixedString(const QString &pattern);
  // tag=1041
  void setFilterKeyColumn(int column);
  // tag=1041
  void setFilterRegularExpression(const QString &pattern);
  // tag=1041
  void setFilterRole(int role);
  // tag=1041
  void setFilterWildcard(const QString &pattern);
  // tag=1041
  virtual bool setHeaderData(int section, Qt::Orientation orientation,
                             const QVariant &value, int role = Qt::EditRole);
  // tag=1008
  virtual bool setHeaderData_nocallback(int section,
                                        Qt::Orientation orientation,
                                        const QVariant &value,
                                        int role = Qt::EditRole);
  // tag=1041
  void setRecursiveFilteringEnabled(bool recursive);
  // tag=1041
  void setSortLocaleAware(bool on);
  // tag=1041
  void setSortRole(int role);
  // tag=1041
  virtual void setSourceModel(QAbstractItemModel *sourceModel);
  // tag=1008
  virtual void setSourceModel_nocallback(QAbstractItemModel *sourceModel);
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
  int sortColumn() const;
  // tag=1041
  void sortLocaleAwareChanged(bool sortLocaleAware);
  // tag=1041
  Qt::SortOrder sortOrder() const;
  // tag=1041
  int sortRole() const;
  // tag=1041
  void sortRoleChanged(int sortRole);
  // tag=1041
  virtual QSize span(const QModelIndex &index) const;
  // tag=1008
  virtual QSize span_nocallback(const QModelIndex &index) const;
  // tag=1041
  virtual bool submit();
  // tag=1008
  virtual bool submit_nocallback();
  // tag=1041
  static QString tr(const char *s, const char *c, int n);
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
  typedef bool (*Callback_filterAcceptsColumn)(
      void *, int source_column, const QModelIndex &source_parent);
  Callback_filterAcceptsColumn m_filterAcceptsColumnCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_filterAcceptsRow)(void *, int source_row,
                                            const QModelIndex &source_parent);
  Callback_filterAcceptsRow m_filterAcceptsRowCallback = nullptr;
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
  typedef bool (*Callback_lessThan)(void *, const QModelIndex &source_left,
                                    const QModelIndex &source_right);
  Callback_lessThan m_lessThanCallback = nullptr;
  // tag=1042
  typedef QModelIndex *(*Callback_mapFromSource)(
      void *, const QModelIndex &sourceIndex);
  Callback_mapFromSource m_mapFromSourceCallback = nullptr;
  // tag=1042
  typedef QItemSelection *(*Callback_mapSelectionFromSource)(
      void *, const QItemSelection &sourceSelection);
  Callback_mapSelectionFromSource m_mapSelectionFromSourceCallback = nullptr;
  // tag=1042
  typedef QItemSelection *(*Callback_mapSelectionToSource)(
      void *, const QItemSelection &proxySelection);
  Callback_mapSelectionToSource m_mapSelectionToSourceCallback = nullptr;
  // tag=1042
  typedef QModelIndex *(*Callback_mapToSource)(void *,
                                               const QModelIndex &proxyIndex);
  Callback_mapToSource m_mapToSourceCallback = nullptr;
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
  typedef void (*Callback_setSourceModel)(void *,
                                          QAbstractItemModel *sourceModel);
  Callback_setSourceModel m_setSourceModelCallback = nullptr;
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
//  QSortFilterProxyModel::QSortFilterProxyModel(QObject * parent)
QtDartBindings_EXPORT void *
c_QSortFilterProxyModel__constructor_QObject(void *parent_);

// tag=1067
//  QSortFilterProxyModel::autoAcceptChildRows() const
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__autoAcceptChildRows(void *thisObj);

// tag=1067
//  QSortFilterProxyModel::autoAcceptChildRowsChanged(bool autoAcceptChildRows)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__autoAcceptChildRowsChanged_bool(
    void *thisObj, bool autoAcceptChildRows);

// tag=1078
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__onAutoAcceptChildRowsChanged_bool(void *thisObj,
                                                           void *contextQObject,
                                                           void *callback);
// tag=1067
//  QSortFilterProxyModel::buddy(const QModelIndex & index) const
QtDartBindings_EXPORT void *
c_QSortFilterProxyModel__buddy_QModelIndex(void *thisObj, void *index_);

// tag=1067
//  QSortFilterProxyModel::canFetchMore(const QModelIndex & parent) const
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__canFetchMore_QModelIndex(void *thisObj, void *parent_);

// tag=1067
//  QSortFilterProxyModel::clearItemData(const QModelIndex & index)
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__clearItemData_QModelIndex(void *thisObj, void *index_);

// tag=1067
//  QSortFilterProxyModel::columnCount(const QModelIndex & parent) const
QtDartBindings_EXPORT int
c_QSortFilterProxyModel__columnCount_QModelIndex(void *thisObj, void *parent_);

// tag=1067
//  QSortFilterProxyModel::customEvent(QEvent * event)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__customEvent_QEvent(void *thisObj, void *event_);

// tag=1067
//  QSortFilterProxyModel::data(const QModelIndex & index, int role) const
QtDartBindings_EXPORT void *
c_QSortFilterProxyModel__data_QModelIndex_int(void *thisObj, void *index_,
                                              int role);

// tag=1067
//  QSortFilterProxyModel::dynamicSortFilter() const
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__dynamicSortFilter(void *thisObj);

// tag=1067
//  QSortFilterProxyModel::dynamicSortFilterChanged(bool dynamicSortFilter)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__dynamicSortFilterChanged_bool(void *thisObj,
                                                       bool dynamicSortFilter);

// tag=1078
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__onDynamicSortFilterChanged_bool(void *thisObj,
                                                         void *contextQObject,
                                                         void *callback);
// tag=1067
//  QSortFilterProxyModel::event(QEvent * event)
QtDartBindings_EXPORT bool c_QSortFilterProxyModel__event_QEvent(void *thisObj,
                                                                 void *event_);

// tag=1067
//  QSortFilterProxyModel::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool c_QSortFilterProxyModel__eventFilter_QObject_QEvent(
    void *thisObj, void *watched_, void *event_);

// tag=1067
//  QSortFilterProxyModel::fetchMore(const QModelIndex & parent)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__fetchMore_QModelIndex(void *thisObj, void *parent_);

// tag=1067
//  QSortFilterProxyModel::filterAcceptsColumn(int source_column, const
//  QModelIndex & source_parent) const
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__filterAcceptsColumn_int_QModelIndex(
    void *thisObj, int source_column, void *source_parent_);

// tag=1067
//  QSortFilterProxyModel::filterAcceptsRow(int source_row, const QModelIndex &
//  source_parent) const
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__filterAcceptsRow_int_QModelIndex(void *thisObj,
                                                          int source_row,
                                                          void *source_parent_);

// tag=1067
//  QSortFilterProxyModel::filterKeyColumn() const
QtDartBindings_EXPORT int
c_QSortFilterProxyModel__filterKeyColumn(void *thisObj);

// tag=1067
//  QSortFilterProxyModel::filterRole() const
QtDartBindings_EXPORT int c_QSortFilterProxyModel__filterRole(void *thisObj);

// tag=1067
//  QSortFilterProxyModel::filterRoleChanged(int filterRole)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__filterRoleChanged_int(void *thisObj, int filterRole);

// tag=1078
QtDartBindings_EXPORT void c_QSortFilterProxyModel__onFilterRoleChanged_int(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QSortFilterProxyModel::hasChildren(const QModelIndex & parent) const
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__hasChildren_QModelIndex(void *thisObj, void *parent_);

// tag=1067
//  QSortFilterProxyModel::headerData(int section, Qt::Orientation orientation,
//  int role) const
QtDartBindings_EXPORT void *
c_QSortFilterProxyModel__headerData_int_Orientation_int(void *thisObj,
                                                        int section,
                                                        int orientation,
                                                        int role);

// tag=1067
//  QSortFilterProxyModel::index(int row, int column, const QModelIndex &
//  parent) const
QtDartBindings_EXPORT void *
c_QSortFilterProxyModel__index_int_int_QModelIndex(void *thisObj, int row,
                                                   int column, void *parent_);

// tag=1067
//  QSortFilterProxyModel::insertColumns(int column, int count, const
//  QModelIndex & parent)
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__insertColumns_int_int_QModelIndex(void *thisObj,
                                                           int column,
                                                           int count,
                                                           void *parent_);

// tag=1067
//  QSortFilterProxyModel::insertRows(int row, int count, const QModelIndex &
//  parent)
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__insertRows_int_int_QModelIndex(void *thisObj, int row,
                                                        int count,
                                                        void *parent_);

// tag=1067
//  QSortFilterProxyModel::invalidate()
QtDartBindings_EXPORT void c_QSortFilterProxyModel__invalidate(void *thisObj);

// tag=1067
//  QSortFilterProxyModel::invalidateColumnsFilter()
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__invalidateColumnsFilter(void *thisObj);

// tag=1067
//  QSortFilterProxyModel::invalidateFilter()
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__invalidateFilter(void *thisObj);

// tag=1067
//  QSortFilterProxyModel::invalidateRowsFilter()
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__invalidateRowsFilter(void *thisObj);

// tag=1067
//  QSortFilterProxyModel::isRecursiveFilteringEnabled() const
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__isRecursiveFilteringEnabled(void *thisObj);

// tag=1067
//  QSortFilterProxyModel::isSortLocaleAware() const
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__isSortLocaleAware(void *thisObj);

// tag=1067
//  QSortFilterProxyModel::lessThan(const QModelIndex & source_left, const
//  QModelIndex & source_right) const
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__lessThan_QModelIndex_QModelIndex(void *thisObj,
                                                          void *source_left_,
                                                          void *source_right_);

// tag=1067
//  QSortFilterProxyModel::mapFromSource(const QModelIndex & sourceIndex) const
QtDartBindings_EXPORT void *
c_QSortFilterProxyModel__mapFromSource_QModelIndex(void *thisObj,
                                                   void *sourceIndex_);

// tag=1067
//  QSortFilterProxyModel::mapSelectionFromSource(const QItemSelection &
//  sourceSelection) const
QtDartBindings_EXPORT void *
c_QSortFilterProxyModel__mapSelectionFromSource_QItemSelection(
    void *thisObj, void *sourceSelection_);

// tag=1067
//  QSortFilterProxyModel::mapSelectionToSource(const QItemSelection &
//  proxySelection) const
QtDartBindings_EXPORT void *
c_QSortFilterProxyModel__mapSelectionToSource_QItemSelection(
    void *thisObj, void *proxySelection_);

// tag=1067
//  QSortFilterProxyModel::mapToSource(const QModelIndex & proxyIndex) const
QtDartBindings_EXPORT void *
c_QSortFilterProxyModel__mapToSource_QModelIndex(void *thisObj,
                                                 void *proxyIndex_);

// tag=1067
//  QSortFilterProxyModel::mimeTypes() const
QtDartBindings_EXPORT void *c_QSortFilterProxyModel__mimeTypes(void *thisObj);

// tag=1067
//  QSortFilterProxyModel::moveColumns(const QModelIndex & sourceParent, int
//  sourceColumn, int count, const QModelIndex & destinationParent, int
//  destinationChild)
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__moveColumns_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceColumn, int count,
    void *destinationParent_, int destinationChild);

// tag=1067
//  QSortFilterProxyModel::moveRows(const QModelIndex & sourceParent, int
//  sourceRow, int count, const QModelIndex & destinationParent, int
//  destinationChild)
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__moveRows_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceRow, int count,
    void *destinationParent_, int destinationChild);

// tag=1067
//  QSortFilterProxyModel::parent(const QModelIndex & child) const
QtDartBindings_EXPORT void *
c_QSortFilterProxyModel__parentIndex_QModelIndex(void *thisObj, void *child_);

// tag=1067
//  QSortFilterProxyModel::recursiveFilteringEnabledChanged(bool
//  recursiveFilteringEnabled)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__recursiveFilteringEnabledChanged_bool(
    void *thisObj, bool recursiveFilteringEnabled);

// tag=1078
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__onRecursiveFilteringEnabledChanged_bool(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QSortFilterProxyModel::removeColumns(int column, int count, const
//  QModelIndex & parent)
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__removeColumns_int_int_QModelIndex(void *thisObj,
                                                           int column,
                                                           int count,
                                                           void *parent_);

// tag=1067
//  QSortFilterProxyModel::removeRows(int row, int count, const QModelIndex &
//  parent)
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__removeRows_int_int_QModelIndex(void *thisObj, int row,
                                                        int count,
                                                        void *parent_);

// tag=1067
//  QSortFilterProxyModel::resetInternalData()
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__resetInternalData(void *thisObj);

// tag=1067
//  QSortFilterProxyModel::revert()
QtDartBindings_EXPORT void c_QSortFilterProxyModel__revert(void *thisObj);

// tag=1067
//  QSortFilterProxyModel::rowCount(const QModelIndex & parent) const
QtDartBindings_EXPORT int
c_QSortFilterProxyModel__rowCount_QModelIndex(void *thisObj, void *parent_);

// tag=1067
//  QSortFilterProxyModel::setAutoAcceptChildRows(bool accept)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__setAutoAcceptChildRows_bool(void *thisObj,
                                                     bool accept);

// tag=1067
//  QSortFilterProxyModel::setData(const QModelIndex & index, const QVariant &
//  value, int role)
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__setData_QModelIndex_QVariant_int(void *thisObj,
                                                          void *index_,
                                                          void *value_,
                                                          int role);

// tag=1067
//  QSortFilterProxyModel::setDynamicSortFilter(bool enable)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__setDynamicSortFilter_bool(void *thisObj, bool enable);

// tag=1067
//  QSortFilterProxyModel::setFilterFixedString(const QString & pattern)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__setFilterFixedString_QString(void *thisObj,
                                                      const char *pattern_);

// tag=1067
//  QSortFilterProxyModel::setFilterKeyColumn(int column)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__setFilterKeyColumn_int(void *thisObj, int column);

// tag=1067
//  QSortFilterProxyModel::setFilterRegularExpression(const QString & pattern)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__setFilterRegularExpression_QString(
    void *thisObj, const char *pattern_);

// tag=1067
//  QSortFilterProxyModel::setFilterRole(int role)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__setFilterRole_int(void *thisObj, int role);

// tag=1067
//  QSortFilterProxyModel::setFilterWildcard(const QString & pattern)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__setFilterWildcard_QString(void *thisObj,
                                                   const char *pattern_);

// tag=1067
//  QSortFilterProxyModel::setHeaderData(int section, Qt::Orientation
//  orientation, const QVariant & value, int role)
QtDartBindings_EXPORT bool
c_QSortFilterProxyModel__setHeaderData_int_Orientation_QVariant_int(
    void *thisObj, int section, int orientation, void *value_, int role);

// tag=1067
//  QSortFilterProxyModel::setRecursiveFilteringEnabled(bool recursive)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__setRecursiveFilteringEnabled_bool(void *thisObj,
                                                           bool recursive);

// tag=1067
//  QSortFilterProxyModel::setSortLocaleAware(bool on)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__setSortLocaleAware_bool(void *thisObj, bool on);

// tag=1067
//  QSortFilterProxyModel::setSortRole(int role)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__setSortRole_int(void *thisObj, int role);

// tag=1067
//  QSortFilterProxyModel::setSourceModel(QAbstractItemModel * sourceModel)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__setSourceModel_QAbstractItemModel(void *thisObj,
                                                           void *sourceModel_);

// tag=1067
//  QSortFilterProxyModel::sibling(int row, int column, const QModelIndex & idx)
//  const
QtDartBindings_EXPORT void *
c_QSortFilterProxyModel__sibling_int_int_QModelIndex(void *thisObj, int row,
                                                     int column, void *idx_);

// tag=1067
//  QSortFilterProxyModel::sort(int column, Qt::SortOrder order)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__sort_int_SortOrder(void *thisObj, int column,
                                            int order);

// tag=1067
//  QSortFilterProxyModel::sortColumn() const
QtDartBindings_EXPORT int c_QSortFilterProxyModel__sortColumn(void *thisObj);

// tag=1067
//  QSortFilterProxyModel::sortLocaleAwareChanged(bool sortLocaleAware)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__sortLocaleAwareChanged_bool(void *thisObj,
                                                     bool sortLocaleAware);

// tag=1078
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__onSortLocaleAwareChanged_bool(void *thisObj,
                                                       void *contextQObject,
                                                       void *callback);
// tag=1067
//  QSortFilterProxyModel::sortOrder() const
QtDartBindings_EXPORT int c_QSortFilterProxyModel__sortOrder(void *thisObj);

// tag=1067
//  QSortFilterProxyModel::sortRole() const
QtDartBindings_EXPORT int c_QSortFilterProxyModel__sortRole(void *thisObj);

// tag=1067
//  QSortFilterProxyModel::sortRoleChanged(int sortRole)
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__sortRoleChanged_int(void *thisObj, int sortRole);

// tag=1078
QtDartBindings_EXPORT void c_QSortFilterProxyModel__onSortRoleChanged_int(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QSortFilterProxyModel::span(const QModelIndex & index) const
QtDartBindings_EXPORT void *
c_QSortFilterProxyModel__span_QModelIndex(void *thisObj, void *index_);

// tag=1067
//  QSortFilterProxyModel::submit()
QtDartBindings_EXPORT bool c_QSortFilterProxyModel__submit(void *thisObj);

// tag=1067
//  QSortFilterProxyModel::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QSortFilterProxyModel__tr_char_char_int(const char *s, const char *c,
                                                 int n);

// tag=1066
QtDartBindings_EXPORT void c_QSortFilterProxyModel__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QSortFilterProxyModel__registerVirtualMethodCallback(void *ptr,
                                                       void *callback,
                                                       int methodId);
// tag=1047
QtDartBindings_EXPORT void
c_QSortFilterProxyModel_Finalizer(void *, void *cppObj, void *);
}
