
// tag=1040
#include "QtDartBindings_exports.h"
#include <qabstractitemmodel.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qsize.h>
#include <qstring.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
// tag=1017
class QAbstractListModel_wrapper : public ::QAbstractListModel {
public:
  ~QAbstractListModel_wrapper();
  // tag=1041
  QAbstractListModel_wrapper(QObject *parent = nullptr);
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
  virtual QVariant headerData(int section, Qt::Orientation orientation,
                              int role = Qt::DisplayRole) const;
  // tag=1008
  virtual QVariant headerData_nocallback(int section,
                                         Qt::Orientation orientation,
                                         int role = Qt::DisplayRole) const;
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
  typedef QVariant *(*Callback_headerData)(void *, int section,
                                           Qt::Orientation orientation,
                                           int role);
  Callback_headerData m_headerDataCallback = nullptr;
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
//  QAbstractListModel::QAbstractListModel(QObject * parent)
QtDartBindings_EXPORT void *
c_QAbstractListModel__constructor_QObject(void *parent_);

// tag=1067
//  QAbstractListModel::buddy(const QModelIndex & index) const
QtDartBindings_EXPORT void *
c_QAbstractListModel__buddy_QModelIndex(void *thisObj, void *index_);

// tag=1067
//  QAbstractListModel::canFetchMore(const QModelIndex & parent) const
QtDartBindings_EXPORT bool
c_QAbstractListModel__canFetchMore_QModelIndex(void *thisObj, void *parent_);

// tag=1067
//  QAbstractListModel::clearItemData(const QModelIndex & index)
QtDartBindings_EXPORT bool
c_QAbstractListModel__clearItemData_QModelIndex(void *thisObj, void *index_);

// tag=1067
//  QAbstractListModel::customEvent(QEvent * event)
QtDartBindings_EXPORT void
c_QAbstractListModel__customEvent_QEvent(void *thisObj, void *event_);

// tag=1067
//  QAbstractListModel::data(const QModelIndex & index, int role) const
QtDartBindings_EXPORT void *
c_QAbstractListModel__data_QModelIndex_int(void *thisObj, void *index_,
                                           int role);

// tag=1067
//  QAbstractListModel::event(QEvent * event)
QtDartBindings_EXPORT bool c_QAbstractListModel__event_QEvent(void *thisObj,
                                                              void *event_);

// tag=1067
//  QAbstractListModel::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QAbstractListModel__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                                 void *event_);

// tag=1067
//  QAbstractListModel::fetchMore(const QModelIndex & parent)
QtDartBindings_EXPORT void
c_QAbstractListModel__fetchMore_QModelIndex(void *thisObj, void *parent_);

// tag=1067
//  QAbstractListModel::headerData(int section, Qt::Orientation orientation, int
//  role) const
QtDartBindings_EXPORT void *
c_QAbstractListModel__headerData_int_Orientation_int(void *thisObj, int section,
                                                     int orientation, int role);

// tag=1067
//  QAbstractListModel::insertColumns(int column, int count, const QModelIndex &
//  parent)
QtDartBindings_EXPORT bool
c_QAbstractListModel__insertColumns_int_int_QModelIndex(void *thisObj,
                                                        int column, int count,
                                                        void *parent_);

// tag=1067
//  QAbstractListModel::insertRows(int row, int count, const QModelIndex &
//  parent)
QtDartBindings_EXPORT bool
c_QAbstractListModel__insertRows_int_int_QModelIndex(void *thisObj, int row,
                                                     int count, void *parent_);

// tag=1067
//  QAbstractListModel::mimeTypes() const
QtDartBindings_EXPORT void *c_QAbstractListModel__mimeTypes(void *thisObj);

// tag=1067
//  QAbstractListModel::moveColumns(const QModelIndex & sourceParent, int
//  sourceColumn, int count, const QModelIndex & destinationParent, int
//  destinationChild)
QtDartBindings_EXPORT bool
c_QAbstractListModel__moveColumns_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceColumn, int count,
    void *destinationParent_, int destinationChild);

// tag=1067
//  QAbstractListModel::moveRows(const QModelIndex & sourceParent, int
//  sourceRow, int count, const QModelIndex & destinationParent, int
//  destinationChild)
QtDartBindings_EXPORT bool
c_QAbstractListModel__moveRows_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceRow, int count,
    void *destinationParent_, int destinationChild);

// tag=1067
//  QAbstractListModel::removeColumns(int column, int count, const QModelIndex &
//  parent)
QtDartBindings_EXPORT bool
c_QAbstractListModel__removeColumns_int_int_QModelIndex(void *thisObj,
                                                        int column, int count,
                                                        void *parent_);

// tag=1067
//  QAbstractListModel::removeRows(int row, int count, const QModelIndex &
//  parent)
QtDartBindings_EXPORT bool
c_QAbstractListModel__removeRows_int_int_QModelIndex(void *thisObj, int row,
                                                     int count, void *parent_);

// tag=1067
//  QAbstractListModel::resetInternalData()
QtDartBindings_EXPORT void
c_QAbstractListModel__resetInternalData(void *thisObj);

// tag=1067
//  QAbstractListModel::revert()
QtDartBindings_EXPORT void c_QAbstractListModel__revert(void *thisObj);

// tag=1067
//  QAbstractListModel::rowCount(const QModelIndex & parent) const
QtDartBindings_EXPORT int
c_QAbstractListModel__rowCount_QModelIndex(void *thisObj, void *parent_);

// tag=1067
//  QAbstractListModel::setData(const QModelIndex & index, const QVariant &
//  value, int role)
QtDartBindings_EXPORT bool
c_QAbstractListModel__setData_QModelIndex_QVariant_int(void *thisObj,
                                                       void *index_,
                                                       void *value_, int role);

// tag=1067
//  QAbstractListModel::setHeaderData(int section, Qt::Orientation orientation,
//  const QVariant & value, int role)
QtDartBindings_EXPORT bool
c_QAbstractListModel__setHeaderData_int_Orientation_QVariant_int(
    void *thisObj, int section, int orientation, void *value_, int role);

// tag=1067
//  QAbstractListModel::sibling(int row, int column, const QModelIndex & idx)
//  const
QtDartBindings_EXPORT void *
c_QAbstractListModel__sibling_int_int_QModelIndex(void *thisObj, int row,
                                                  int column, void *idx_);

// tag=1067
//  QAbstractListModel::sort(int column, Qt::SortOrder order)
QtDartBindings_EXPORT void
c_QAbstractListModel__sort_int_SortOrder(void *thisObj, int column, int order);

// tag=1067
//  QAbstractListModel::span(const QModelIndex & index) const
QtDartBindings_EXPORT void *
c_QAbstractListModel__span_QModelIndex(void *thisObj, void *index_);

// tag=1067
//  QAbstractListModel::submit()
QtDartBindings_EXPORT bool c_QAbstractListModel__submit(void *thisObj);

// tag=1067
//  QAbstractListModel::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QAbstractListModel__tr_char_char_int(const char *s, const char *c,
                                              int n);

// tag=1066
QtDartBindings_EXPORT void c_QAbstractListModel__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QAbstractListModel__registerVirtualMethodCallback(void *ptr, void *callback,
                                                    int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QAbstractListModel_Finalizer(void *, void *cppObj,
                                                          void *);
}
