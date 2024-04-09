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
#include <qstring.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
class QAbstractListModel_wrapper : public ::QAbstractListModel {
public:
  ~QAbstractListModel_wrapper();
  QAbstractListModel_wrapper(QObject *parent = nullptr);
  virtual QModelIndex buddy(const QModelIndex &index) const;
  virtual QModelIndex buddy_nocallback(const QModelIndex &index) const;
  virtual bool canFetchMore(const QModelIndex &parent) const;
  virtual bool canFetchMore_nocallback(const QModelIndex &parent) const;
  virtual bool clearItemData(const QModelIndex &index);
  virtual bool clearItemData_nocallback(const QModelIndex &index);
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
  virtual QVariant headerData(int section, Qt::Orientation orientation,
                              int role = Qt::DisplayRole) const;
  virtual QVariant headerData_nocallback(int section,
                                         Qt::Orientation orientation,
                                         int role = Qt::DisplayRole) const;
  virtual bool insertColumns(int column, int count,
                             const QModelIndex &parent = QModelIndex());
  virtual bool
  insertColumns_nocallback(int column, int count,
                           const QModelIndex &parent = QModelIndex());
  virtual bool insertRows(int row, int count,
                          const QModelIndex &parent = QModelIndex());
  virtual bool insertRows_nocallback(int row, int count,
                                     const QModelIndex &parent = QModelIndex());
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
  typedef QVariant *(*Callback_headerData)(void *, int section,
                                           Qt::Orientation orientation,
                                           int role);
  Callback_headerData m_headerDataCallback = nullptr;
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
// QAbstractListModel::QAbstractListModel(QObject * parent)
QtDartBindings_EXPORT void *
c_QAbstractListModel__constructor_QObject(void *parent_);
// QAbstractListModel::buddy(const QModelIndex & index) const
QtDartBindings_EXPORT void *
c_QAbstractListModel__buddy_QModelIndex(void *thisObj, void *index_);
// QAbstractListModel::canFetchMore(const QModelIndex & parent) const
QtDartBindings_EXPORT bool
c_QAbstractListModel__canFetchMore_QModelIndex(void *thisObj, void *parent_);
// QAbstractListModel::clearItemData(const QModelIndex & index)
QtDartBindings_EXPORT bool
c_QAbstractListModel__clearItemData_QModelIndex(void *thisObj, void *index_);
// QAbstractListModel::customEvent(QEvent * event)
QtDartBindings_EXPORT void
c_QAbstractListModel__customEvent_QEvent(void *thisObj, void *event_);
// QAbstractListModel::data(const QModelIndex & index, int role) const
QtDartBindings_EXPORT void *
c_QAbstractListModel__data_QModelIndex_int(void *thisObj, void *index_,
                                           int role);
// QAbstractListModel::event(QEvent * event)
QtDartBindings_EXPORT bool c_QAbstractListModel__event_QEvent(void *thisObj,
                                                              void *event_);
// QAbstractListModel::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QAbstractListModel__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                                 void *event_);
// QAbstractListModel::fetchMore(const QModelIndex & parent)
QtDartBindings_EXPORT void
c_QAbstractListModel__fetchMore_QModelIndex(void *thisObj, void *parent_);
// QAbstractListModel::headerData(int section, Qt::Orientation orientation, int
// role) const
QtDartBindings_EXPORT void *
c_QAbstractListModel__headerData_int_Orientation_int(void *thisObj, int section,
                                                     int orientation, int role);
// QAbstractListModel::insertColumns(int column, int count, const QModelIndex &
// parent)
QtDartBindings_EXPORT bool
c_QAbstractListModel__insertColumns_int_int_QModelIndex(void *thisObj,
                                                        int column, int count,
                                                        void *parent_);
// QAbstractListModel::insertRows(int row, int count, const QModelIndex &
// parent)
QtDartBindings_EXPORT bool
c_QAbstractListModel__insertRows_int_int_QModelIndex(void *thisObj, int row,
                                                     int count, void *parent_);
// QAbstractListModel::mimeTypes() const
QtDartBindings_EXPORT void *c_QAbstractListModel__mimeTypes(void *thisObj);
// QAbstractListModel::moveColumns(const QModelIndex & sourceParent, int
// sourceColumn, int count, const QModelIndex & destinationParent, int
// destinationChild)
QtDartBindings_EXPORT bool
c_QAbstractListModel__moveColumns_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceColumn, int count,
    void *destinationParent_, int destinationChild);
// QAbstractListModel::moveRows(const QModelIndex & sourceParent, int sourceRow,
// int count, const QModelIndex & destinationParent, int destinationChild)
QtDartBindings_EXPORT bool
c_QAbstractListModel__moveRows_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceRow, int count,
    void *destinationParent_, int destinationChild);
// QAbstractListModel::removeColumns(int column, int count, const QModelIndex &
// parent)
QtDartBindings_EXPORT bool
c_QAbstractListModel__removeColumns_int_int_QModelIndex(void *thisObj,
                                                        int column, int count,
                                                        void *parent_);
// QAbstractListModel::removeRows(int row, int count, const QModelIndex &
// parent)
QtDartBindings_EXPORT bool
c_QAbstractListModel__removeRows_int_int_QModelIndex(void *thisObj, int row,
                                                     int count, void *parent_);
// QAbstractListModel::resetInternalData()
QtDartBindings_EXPORT void
c_QAbstractListModel__resetInternalData(void *thisObj);
// QAbstractListModel::revert()
QtDartBindings_EXPORT void c_QAbstractListModel__revert(void *thisObj);
// QAbstractListModel::rowCount(const QModelIndex & parent) const
QtDartBindings_EXPORT int
c_QAbstractListModel__rowCount_QModelIndex(void *thisObj, void *parent_);
// QAbstractListModel::setData(const QModelIndex & index, const QVariant &
// value, int role)
QtDartBindings_EXPORT bool
c_QAbstractListModel__setData_QModelIndex_QVariant_int(void *thisObj,
                                                       void *index_,
                                                       void *value_, int role);
// QAbstractListModel::setHeaderData(int section, Qt::Orientation orientation,
// const QVariant & value, int role)
QtDartBindings_EXPORT bool
c_QAbstractListModel__setHeaderData_int_Orientation_QVariant_int(
    void *thisObj, int section, int orientation, void *value_, int role);
// QAbstractListModel::sibling(int row, int column, const QModelIndex & idx)
// const
QtDartBindings_EXPORT void *
c_QAbstractListModel__sibling_int_int_QModelIndex(void *thisObj, int row,
                                                  int column, void *idx_);
// QAbstractListModel::sort(int column, Qt::SortOrder order)
QtDartBindings_EXPORT void
c_QAbstractListModel__sort_int_SortOrder(void *thisObj, int column, int order);
// QAbstractListModel::span(const QModelIndex & index) const
QtDartBindings_EXPORT void *
c_QAbstractListModel__span_QModelIndex(void *thisObj, void *index_);
// QAbstractListModel::submit()
QtDartBindings_EXPORT bool c_QAbstractListModel__submit(void *thisObj);
// QAbstractListModel::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QAbstractListModel__tr_char_char_int(const char *s, const char *c,
                                              int n);
QtDartBindings_EXPORT void c_QAbstractListModel__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QAbstractListModel__registerVirtualMethodCallback(void *ptr, void *callback,
                                                    int methodId);
QtDartBindings_EXPORT void c_QAbstractListModel_Finalizer(void *cppObj);
}
