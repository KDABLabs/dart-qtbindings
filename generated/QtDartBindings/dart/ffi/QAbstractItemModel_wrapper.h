
// tag=1040
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
// tag=1017
class QAbstractItemModel_wrapper : public ::QAbstractItemModel {
public:
  ~QAbstractItemModel_wrapper();
  // tag=1041
  QAbstractItemModel_wrapper(QObject *parent = nullptr);
  // tag=1041
  void beginInsertColumns(const QModelIndex &parent, int first, int last);
  // tag=1041
  void beginInsertRows(const QModelIndex &parent, int first, int last);
  // tag=1041
  bool beginMoveColumns(const QModelIndex &sourceParent, int sourceFirst,
                        int sourceLast, const QModelIndex &destinationParent,
                        int destinationColumn);
  // tag=1041
  bool beginMoveRows(const QModelIndex &sourceParent, int sourceFirst,
                     int sourceLast, const QModelIndex &destinationParent,
                     int destinationRow);
  // tag=1041
  void beginRemoveColumns(const QModelIndex &parent, int first, int last);
  // tag=1041
  void beginRemoveRows(const QModelIndex &parent, int first, int last);
  // tag=1041
  void beginResetModel();
  // tag=1041
  virtual QModelIndex buddy(const QModelIndex &index) const;
  // tag=1008
  virtual QModelIndex buddy_nocallback(const QModelIndex &index) const;
  // tag=1041
  virtual bool canFetchMore(const QModelIndex &parent) const;
  // tag=1008
  virtual bool canFetchMore_nocallback(const QModelIndex &parent) const;
  // tag=1041
  void changePersistentIndex(const QModelIndex &from, const QModelIndex &to);
  // tag=1041
  void changePersistentIndexList(const QList<QModelIndex> &from,
                                 const QList<QModelIndex> &to);
  // tag=1041
  bool checkIndex(const QModelIndex &index) const;
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
  void dataChanged(const QModelIndex &topLeft, const QModelIndex &bottomRight,
                   const QList<int> &roles = QList<int>());
  // tag=1041
  void endInsertColumns();
  // tag=1041
  void endInsertRows();
  // tag=1041
  void endMoveColumns();
  // tag=1041
  void endMoveRows();
  // tag=1041
  void endRemoveColumns();
  // tag=1041
  void endRemoveRows();
  // tag=1041
  void endResetModel();
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
  virtual bool hasChildren(const QModelIndex &parent = QModelIndex()) const;
  // tag=1008
  virtual bool
  hasChildren_nocallback(const QModelIndex &parent = QModelIndex()) const;
  // tag=1041
  bool hasIndex(int row, int column,
                const QModelIndex &parent = QModelIndex()) const;
  // tag=1041
  virtual QVariant headerData(int section, Qt::Orientation orientation,
                              int role = Qt::DisplayRole) const;
  // tag=1008
  virtual QVariant headerData_nocallback(int section,
                                         Qt::Orientation orientation,
                                         int role = Qt::DisplayRole) const;
  // tag=1041
  void headerDataChanged(Qt::Orientation orientation, int first, int last);
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
  void layoutAboutToBeChanged();
  // tag=1041
  void layoutChanged();
  // tag=1041
  virtual QList<QString> mimeTypes() const;
  // tag=1008
  virtual QList<QString> mimeTypes_nocallback() const;
  // tag=1041
  bool moveColumn(const QModelIndex &sourceParent, int sourceColumn,
                  const QModelIndex &destinationParent, int destinationChild);
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
  bool moveRow(const QModelIndex &sourceParent, int sourceRow,
               const QModelIndex &destinationParent, int destinationChild);
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
  QList<QModelIndex> persistentIndexList() const;
  // tag=1041
  bool removeColumn(int column, const QModelIndex &parent = QModelIndex());
  // tag=1041
  virtual bool removeColumns(int column, int count,
                             const QModelIndex &parent = QModelIndex());
  // tag=1008
  virtual bool
  removeColumns_nocallback(int column, int count,
                           const QModelIndex &parent = QModelIndex());
  // tag=1041
  bool removeRow(int row, const QModelIndex &parent = QModelIndex());
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
//  QAbstractItemModel::QAbstractItemModel(QObject * parent)
QtDartBindings_EXPORT void *
c_QAbstractItemModel__constructor_QObject(void *parent_);

// tag=1067
//  QAbstractItemModel::beginInsertColumns(const QModelIndex & parent, int
//  first, int last)
QtDartBindings_EXPORT void
c_QAbstractItemModel__beginInsertColumns_QModelIndex_int_int(void *thisObj,
                                                             void *parent_,
                                                             int first,
                                                             int last);

// tag=1067
//  QAbstractItemModel::beginInsertRows(const QModelIndex & parent, int first,
//  int last)
QtDartBindings_EXPORT void
c_QAbstractItemModel__beginInsertRows_QModelIndex_int_int(void *thisObj,
                                                          void *parent_,
                                                          int first, int last);

// tag=1067
//  QAbstractItemModel::beginMoveColumns(const QModelIndex & sourceParent, int
//  sourceFirst, int sourceLast, const QModelIndex & destinationParent, int
//  destinationColumn)
QtDartBindings_EXPORT bool
c_QAbstractItemModel__beginMoveColumns_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceFirst, int sourceLast,
    void *destinationParent_, int destinationColumn);

// tag=1067
//  QAbstractItemModel::beginMoveRows(const QModelIndex & sourceParent, int
//  sourceFirst, int sourceLast, const QModelIndex & destinationParent, int
//  destinationRow)
QtDartBindings_EXPORT bool
c_QAbstractItemModel__beginMoveRows_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceFirst, int sourceLast,
    void *destinationParent_, int destinationRow);

// tag=1067
//  QAbstractItemModel::beginRemoveColumns(const QModelIndex & parent, int
//  first, int last)
QtDartBindings_EXPORT void
c_QAbstractItemModel__beginRemoveColumns_QModelIndex_int_int(void *thisObj,
                                                             void *parent_,
                                                             int first,
                                                             int last);

// tag=1067
//  QAbstractItemModel::beginRemoveRows(const QModelIndex & parent, int first,
//  int last)
QtDartBindings_EXPORT void
c_QAbstractItemModel__beginRemoveRows_QModelIndex_int_int(void *thisObj,
                                                          void *parent_,
                                                          int first, int last);

// tag=1067
//  QAbstractItemModel::beginResetModel()
QtDartBindings_EXPORT void c_QAbstractItemModel__beginResetModel(void *thisObj);

// tag=1067
//  QAbstractItemModel::buddy(const QModelIndex & index) const
QtDartBindings_EXPORT void *
c_QAbstractItemModel__buddy_QModelIndex(void *thisObj, void *index_);

// tag=1067
//  QAbstractItemModel::canFetchMore(const QModelIndex & parent) const
QtDartBindings_EXPORT bool
c_QAbstractItemModel__canFetchMore_QModelIndex(void *thisObj, void *parent_);

// tag=1067
//  QAbstractItemModel::changePersistentIndex(const QModelIndex & from, const
//  QModelIndex & to)
QtDartBindings_EXPORT void
c_QAbstractItemModel__changePersistentIndex_QModelIndex_QModelIndex(
    void *thisObj, void *from_, void *to_);

// tag=1067
//  QAbstractItemModel::changePersistentIndexList(const QList<QModelIndex > &
//  from, const QList<QModelIndex > & to)
QtDartBindings_EXPORT void
c_QAbstractItemModel__changePersistentIndexList_QList_QModelIndex_QList_QModelIndex(
    void *thisObj, void *from_, void *to_);

// tag=1067
//  QAbstractItemModel::checkIndex(const QModelIndex & index) const
QtDartBindings_EXPORT bool
c_QAbstractItemModel__checkIndex_QModelIndex(void *thisObj, void *index_);

// tag=1067
//  QAbstractItemModel::clearItemData(const QModelIndex & index)
QtDartBindings_EXPORT bool
c_QAbstractItemModel__clearItemData_QModelIndex(void *thisObj, void *index_);

// tag=1067
//  QAbstractItemModel::columnCount(const QModelIndex & parent) const
QtDartBindings_EXPORT int
c_QAbstractItemModel__columnCount_QModelIndex(void *thisObj, void *parent_);

// tag=1067
//  QAbstractItemModel::customEvent(QEvent * event)
QtDartBindings_EXPORT void
c_QAbstractItemModel__customEvent_QEvent(void *thisObj, void *event_);

// tag=1067
//  QAbstractItemModel::data(const QModelIndex & index, int role) const
QtDartBindings_EXPORT void *
c_QAbstractItemModel__data_QModelIndex_int(void *thisObj, void *index_,
                                           int role);

// tag=1067
//  QAbstractItemModel::dataChanged(const QModelIndex & topLeft, const
//  QModelIndex & bottomRight, const QList<int > & roles)
QtDartBindings_EXPORT void
c_QAbstractItemModel__dataChanged_QModelIndex_QModelIndex_QList_int(
    void *thisObj, void *topLeft_, void *bottomRight_, void *roles_);

// tag=1078
QtDartBindings_EXPORT void
c_QAbstractItemModel__onDataChanged_QModelIndex_QModelIndex_QList_int(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QAbstractItemModel::endInsertColumns()
QtDartBindings_EXPORT void
c_QAbstractItemModel__endInsertColumns(void *thisObj);

// tag=1067
//  QAbstractItemModel::endInsertRows()
QtDartBindings_EXPORT void c_QAbstractItemModel__endInsertRows(void *thisObj);

// tag=1067
//  QAbstractItemModel::endMoveColumns()
QtDartBindings_EXPORT void c_QAbstractItemModel__endMoveColumns(void *thisObj);

// tag=1067
//  QAbstractItemModel::endMoveRows()
QtDartBindings_EXPORT void c_QAbstractItemModel__endMoveRows(void *thisObj);

// tag=1067
//  QAbstractItemModel::endRemoveColumns()
QtDartBindings_EXPORT void
c_QAbstractItemModel__endRemoveColumns(void *thisObj);

// tag=1067
//  QAbstractItemModel::endRemoveRows()
QtDartBindings_EXPORT void c_QAbstractItemModel__endRemoveRows(void *thisObj);

// tag=1067
//  QAbstractItemModel::endResetModel()
QtDartBindings_EXPORT void c_QAbstractItemModel__endResetModel(void *thisObj);

// tag=1067
//  QAbstractItemModel::event(QEvent * event)
QtDartBindings_EXPORT bool c_QAbstractItemModel__event_QEvent(void *thisObj,
                                                              void *event_);

// tag=1067
//  QAbstractItemModel::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QAbstractItemModel__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                                 void *event_);

// tag=1067
//  QAbstractItemModel::fetchMore(const QModelIndex & parent)
QtDartBindings_EXPORT void
c_QAbstractItemModel__fetchMore_QModelIndex(void *thisObj, void *parent_);

// tag=1067
//  QAbstractItemModel::hasChildren(const QModelIndex & parent) const
QtDartBindings_EXPORT bool
c_QAbstractItemModel__hasChildren_QModelIndex(void *thisObj, void *parent_);

// tag=1067
//  QAbstractItemModel::hasIndex(int row, int column, const QModelIndex &
//  parent) const
QtDartBindings_EXPORT bool
c_QAbstractItemModel__hasIndex_int_int_QModelIndex(void *thisObj, int row,
                                                   int column, void *parent_);

// tag=1067
//  QAbstractItemModel::headerData(int section, Qt::Orientation orientation, int
//  role) const
QtDartBindings_EXPORT void *
c_QAbstractItemModel__headerData_int_Orientation_int(void *thisObj, int section,
                                                     int orientation, int role);

// tag=1067
//  QAbstractItemModel::headerDataChanged(Qt::Orientation orientation, int
//  first, int last)
QtDartBindings_EXPORT void
c_QAbstractItemModel__headerDataChanged_Orientation_int_int(void *thisObj,
                                                            int orientation,
                                                            int first,
                                                            int last);

// tag=1078
QtDartBindings_EXPORT void
c_QAbstractItemModel__onHeaderDataChanged_Orientation_int_int(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QAbstractItemModel::index(int row, int column, const QModelIndex & parent)
//  const
QtDartBindings_EXPORT void *
c_QAbstractItemModel__index_int_int_QModelIndex(void *thisObj, int row,
                                                int column, void *parent_);

// tag=1067
//  QAbstractItemModel::insertColumns(int column, int count, const QModelIndex &
//  parent)
QtDartBindings_EXPORT bool
c_QAbstractItemModel__insertColumns_int_int_QModelIndex(void *thisObj,
                                                        int column, int count,
                                                        void *parent_);

// tag=1067
//  QAbstractItemModel::insertRows(int row, int count, const QModelIndex &
//  parent)
QtDartBindings_EXPORT bool
c_QAbstractItemModel__insertRows_int_int_QModelIndex(void *thisObj, int row,
                                                     int count, void *parent_);

// tag=1067
//  QAbstractItemModel::layoutAboutToBeChanged()
QtDartBindings_EXPORT void
c_QAbstractItemModel__layoutAboutToBeChanged(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void c_QAbstractItemModel__onLayoutAboutToBeChanged(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QAbstractItemModel::layoutChanged()
QtDartBindings_EXPORT void c_QAbstractItemModel__layoutChanged(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void
c_QAbstractItemModel__onLayoutChanged(void *thisObj, void *contextQObject,
                                      void *callback);
// tag=1067
//  QAbstractItemModel::mimeTypes() const
QtDartBindings_EXPORT void *c_QAbstractItemModel__mimeTypes(void *thisObj);

// tag=1067
//  QAbstractItemModel::moveColumn(const QModelIndex & sourceParent, int
//  sourceColumn, const QModelIndex & destinationParent, int destinationChild)
QtDartBindings_EXPORT bool
c_QAbstractItemModel__moveColumn_QModelIndex_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceColumn,
    void *destinationParent_, int destinationChild);

// tag=1067
//  QAbstractItemModel::moveColumns(const QModelIndex & sourceParent, int
//  sourceColumn, int count, const QModelIndex & destinationParent, int
//  destinationChild)
QtDartBindings_EXPORT bool
c_QAbstractItemModel__moveColumns_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceColumn, int count,
    void *destinationParent_, int destinationChild);

// tag=1067
//  QAbstractItemModel::moveRow(const QModelIndex & sourceParent, int sourceRow,
//  const QModelIndex & destinationParent, int destinationChild)
QtDartBindings_EXPORT bool
c_QAbstractItemModel__moveRow_QModelIndex_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceRow, void *destinationParent_,
    int destinationChild);

// tag=1067
//  QAbstractItemModel::moveRows(const QModelIndex & sourceParent, int
//  sourceRow, int count, const QModelIndex & destinationParent, int
//  destinationChild)
QtDartBindings_EXPORT bool
c_QAbstractItemModel__moveRows_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceRow, int count,
    void *destinationParent_, int destinationChild);

// tag=1067
//  QAbstractItemModel::parent(const QModelIndex & child) const
QtDartBindings_EXPORT void *
c_QAbstractItemModel__parentIndex_QModelIndex(void *thisObj, void *child_);

// tag=1067
//  QAbstractItemModel::persistentIndexList() const
QtDartBindings_EXPORT void *
c_QAbstractItemModel__persistentIndexList(void *thisObj);

// tag=1067
//  QAbstractItemModel::removeColumn(int column, const QModelIndex & parent)
QtDartBindings_EXPORT bool
c_QAbstractItemModel__removeColumn_int_QModelIndex(void *thisObj, int column,
                                                   void *parent_);

// tag=1067
//  QAbstractItemModel::removeColumns(int column, int count, const QModelIndex &
//  parent)
QtDartBindings_EXPORT bool
c_QAbstractItemModel__removeColumns_int_int_QModelIndex(void *thisObj,
                                                        int column, int count,
                                                        void *parent_);

// tag=1067
//  QAbstractItemModel::removeRow(int row, const QModelIndex & parent)
QtDartBindings_EXPORT bool
c_QAbstractItemModel__removeRow_int_QModelIndex(void *thisObj, int row,
                                                void *parent_);

// tag=1067
//  QAbstractItemModel::removeRows(int row, int count, const QModelIndex &
//  parent)
QtDartBindings_EXPORT bool
c_QAbstractItemModel__removeRows_int_int_QModelIndex(void *thisObj, int row,
                                                     int count, void *parent_);

// tag=1067
//  QAbstractItemModel::resetInternalData()
QtDartBindings_EXPORT void
c_QAbstractItemModel__resetInternalData(void *thisObj);

// tag=1067
//  QAbstractItemModel::revert()
QtDartBindings_EXPORT void c_QAbstractItemModel__revert(void *thisObj);

// tag=1067
//  QAbstractItemModel::rowCount(const QModelIndex & parent) const
QtDartBindings_EXPORT int
c_QAbstractItemModel__rowCount_QModelIndex(void *thisObj, void *parent_);

// tag=1067
//  QAbstractItemModel::setData(const QModelIndex & index, const QVariant &
//  value, int role)
QtDartBindings_EXPORT bool
c_QAbstractItemModel__setData_QModelIndex_QVariant_int(void *thisObj,
                                                       void *index_,
                                                       void *value_, int role);

// tag=1067
//  QAbstractItemModel::setHeaderData(int section, Qt::Orientation orientation,
//  const QVariant & value, int role)
QtDartBindings_EXPORT bool
c_QAbstractItemModel__setHeaderData_int_Orientation_QVariant_int(
    void *thisObj, int section, int orientation, void *value_, int role);

// tag=1067
//  QAbstractItemModel::sibling(int row, int column, const QModelIndex & idx)
//  const
QtDartBindings_EXPORT void *
c_QAbstractItemModel__sibling_int_int_QModelIndex(void *thisObj, int row,
                                                  int column, void *idx_);

// tag=1067
//  QAbstractItemModel::sort(int column, Qt::SortOrder order)
QtDartBindings_EXPORT void
c_QAbstractItemModel__sort_int_SortOrder(void *thisObj, int column, int order);

// tag=1067
//  QAbstractItemModel::span(const QModelIndex & index) const
QtDartBindings_EXPORT void *
c_QAbstractItemModel__span_QModelIndex(void *thisObj, void *index_);

// tag=1067
//  QAbstractItemModel::submit()
QtDartBindings_EXPORT bool c_QAbstractItemModel__submit(void *thisObj);

// tag=1067
//  QAbstractItemModel::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QAbstractItemModel__tr_char_char_int(const char *s, const char *c,
                                              int n);

// tag=1066
QtDartBindings_EXPORT void c_QAbstractItemModel__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QAbstractItemModel__registerVirtualMethodCallback(void *ptr, void *callback,
                                                    int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QAbstractItemModel_Finalizer(void *, void *cppObj,
                                                          void *);
}
