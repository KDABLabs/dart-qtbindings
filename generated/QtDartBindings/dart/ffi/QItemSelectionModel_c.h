/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qabstractitemmodel.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qitemselectionmodel.h>
#include <qlist.h>
#include <qobject.h>
#include <qstring.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
class QItemSelectionModel_wrapper : public ::QItemSelectionModel {
public:
  ~QItemSelectionModel_wrapper();
  QItemSelectionModel_wrapper(QAbstractItemModel *model = nullptr);
  QItemSelectionModel_wrapper(QAbstractItemModel *model, QObject *parent);
  virtual void clear();
  virtual void clear_nocallback();
  virtual void clearCurrentIndex();
  virtual void clearCurrentIndex_nocallback();
  void clearSelection();
  bool
  columnIntersectsSelection(int column,
                            const QModelIndex &parent = QModelIndex()) const;
  void currentChanged(const QModelIndex &current, const QModelIndex &previous);
  void currentColumnChanged(const QModelIndex &current,
                            const QModelIndex &previous);
  QModelIndex currentIndex() const;
  void currentRowChanged(const QModelIndex &current,
                         const QModelIndex &previous);
  virtual void customEvent(QEvent *event);
  virtual void customEvent_nocallback(QEvent *event);
  void emitSelectionChanged(const QItemSelection &newSelection,
                            const QItemSelection &oldSelection);
  virtual bool event(QEvent *event);
  virtual bool event_nocallback(QEvent *event);
  virtual bool eventFilter(QObject *watched, QEvent *event);
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  bool hasSelection() const;
  bool isColumnSelected(int column,
                        const QModelIndex &parent = QModelIndex()) const;
  bool isRowSelected(int row, const QModelIndex &parent = QModelIndex()) const;
  bool isSelected(const QModelIndex &index) const;
  QAbstractItemModel *model();
  void modelChanged(QAbstractItemModel *model);
  virtual void reset();
  virtual void reset_nocallback();
  bool rowIntersectsSelection(int row,
                              const QModelIndex &parent = QModelIndex()) const;
  virtual void select(const QItemSelection &selection,
                      QFlags<QItemSelectionModel::SelectionFlag> command);
  virtual void
  select_nocallback(const QItemSelection &selection,
                    QFlags<QItemSelectionModel::SelectionFlag> command);
  virtual void select(const QModelIndex &index,
                      QFlags<QItemSelectionModel::SelectionFlag> command);
  virtual void
  select_nocallback(const QModelIndex &index,
                    QFlags<QItemSelectionModel::SelectionFlag> command);
  QList<QModelIndex> selectedColumns(int row = 0) const;
  QList<QModelIndex> selectedIndexes() const;
  QList<QModelIndex> selectedRows(int column = 0) const;
  const QItemSelection selection() const;
  void selectionChanged(const QItemSelection &selected,
                        const QItemSelection &deselected);
  virtual void
  setCurrentIndex(const QModelIndex &index,
                  QFlags<QItemSelectionModel::SelectionFlag> command);
  virtual void setCurrentIndex_nocallback(
      const QModelIndex &index,
      QFlags<QItemSelectionModel::SelectionFlag> command);
  void setModel(QAbstractItemModel *model);
  static QString tr(const char *s, const char *c, int n);
  typedef void (*Callback_clear)(void *);
  Callback_clear m_clearCallback = nullptr;
  typedef void (*Callback_clearCurrentIndex)(void *);
  Callback_clearCurrentIndex m_clearCurrentIndexCallback = nullptr;
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  typedef bool (*Callback_event)(void *, QEvent *event);
  Callback_event m_eventCallback = nullptr;
  typedef bool (*Callback_eventFilter)(void *, QObject *watched, QEvent *event);
  Callback_eventFilter m_eventFilterCallback = nullptr;
  typedef void (*Callback_reset)(void *);
  Callback_reset m_resetCallback = nullptr;
  typedef void (*Callback_select)(
      void *, const QItemSelection &selection,
      QFlags<QItemSelectionModel::SelectionFlag> command);
  Callback_select m_selectCallback = nullptr;
  typedef void (*Callback_selectIndex)(
      void *, const QModelIndex &index,
      QFlags<QItemSelectionModel::SelectionFlag> command);
  Callback_selectIndex m_selectIndexCallback = nullptr;
  typedef void (*Callback_setCurrentIndex)(
      void *, const QModelIndex &index,
      QFlags<QItemSelectionModel::SelectionFlag> command);
  Callback_setCurrentIndex m_setCurrentIndexCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QItemSelectionModel::QItemSelectionModel(QAbstractItemModel * model)
QtDartBindings_EXPORT void *
c_QItemSelectionModel__constructor_QAbstractItemModel(void *model_);
// QItemSelectionModel::QItemSelectionModel(QAbstractItemModel * model, QObject
// * parent)
QtDartBindings_EXPORT void *
c_QItemSelectionModel__constructor_QAbstractItemModel_QObject(void *model_,
                                                              void *parent_);
// QItemSelectionModel::clear()
QtDartBindings_EXPORT void c_QItemSelectionModel__clear(void *thisObj);
// QItemSelectionModel::clearCurrentIndex()
QtDartBindings_EXPORT void
c_QItemSelectionModel__clearCurrentIndex(void *thisObj);
// QItemSelectionModel::clearSelection()
QtDartBindings_EXPORT void c_QItemSelectionModel__clearSelection(void *thisObj);
// QItemSelectionModel::columnIntersectsSelection(int column, const QModelIndex
// & parent) const
QtDartBindings_EXPORT bool
c_QItemSelectionModel__columnIntersectsSelection_int_QModelIndex(void *thisObj,
                                                                 int column,
                                                                 void *parent_);
// QItemSelectionModel::currentChanged(const QModelIndex & current, const
// QModelIndex & previous)
QtDartBindings_EXPORT void
c_QItemSelectionModel__currentChanged_QModelIndex_QModelIndex(void *thisObj,
                                                              void *current_,
                                                              void *previous_);
QtDartBindings_EXPORT void
c_QItemSelectionModel__onCurrentChanged_QModelIndex_QModelIndex(
    void *thisObj, void *contextQObject,
    void *callback); // QItemSelectionModel::currentColumnChanged(const
                     // QModelIndex & current, const QModelIndex & previous)
QtDartBindings_EXPORT void
c_QItemSelectionModel__currentColumnChanged_QModelIndex_QModelIndex(
    void *thisObj, void *current_, void *previous_);
QtDartBindings_EXPORT void
c_QItemSelectionModel__onCurrentColumnChanged_QModelIndex_QModelIndex(
    void *thisObj, void *contextQObject,
    void *callback); // QItemSelectionModel::currentIndex() const
QtDartBindings_EXPORT void *c_QItemSelectionModel__currentIndex(void *thisObj);
// QItemSelectionModel::currentRowChanged(const QModelIndex & current, const
// QModelIndex & previous)
QtDartBindings_EXPORT void
c_QItemSelectionModel__currentRowChanged_QModelIndex_QModelIndex(
    void *thisObj, void *current_, void *previous_);
QtDartBindings_EXPORT void
c_QItemSelectionModel__onCurrentRowChanged_QModelIndex_QModelIndex(
    void *thisObj, void *contextQObject,
    void *callback); // QItemSelectionModel::customEvent(QEvent * event)
QtDartBindings_EXPORT void
c_QItemSelectionModel__customEvent_QEvent(void *thisObj, void *event_);
// QItemSelectionModel::emitSelectionChanged(const QItemSelection &
// newSelection, const QItemSelection & oldSelection)
QtDartBindings_EXPORT void
c_QItemSelectionModel__emitSelectionChanged_QItemSelection_QItemSelection(
    void *thisObj, void *newSelection_, void *oldSelection_);
// QItemSelectionModel::event(QEvent * event)
QtDartBindings_EXPORT bool c_QItemSelectionModel__event_QEvent(void *thisObj,
                                                               void *event_);
// QItemSelectionModel::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QItemSelectionModel__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                                  void *event_);
// QItemSelectionModel::hasSelection() const
QtDartBindings_EXPORT bool c_QItemSelectionModel__hasSelection(void *thisObj);
// QItemSelectionModel::isColumnSelected(int column, const QModelIndex & parent)
// const
QtDartBindings_EXPORT bool
c_QItemSelectionModel__isColumnSelected_int_QModelIndex(void *thisObj,
                                                        int column,
                                                        void *parent_);
// QItemSelectionModel::isRowSelected(int row, const QModelIndex & parent) const
QtDartBindings_EXPORT bool
c_QItemSelectionModel__isRowSelected_int_QModelIndex(void *thisObj, int row,
                                                     void *parent_);
// QItemSelectionModel::isSelected(const QModelIndex & index) const
QtDartBindings_EXPORT bool
c_QItemSelectionModel__isSelected_QModelIndex(void *thisObj, void *index_);
// QItemSelectionModel::model()
QtDartBindings_EXPORT void *c_QItemSelectionModel__model(void *thisObj);
// QItemSelectionModel::modelChanged(QAbstractItemModel * model)
QtDartBindings_EXPORT void
c_QItemSelectionModel__modelChanged_QAbstractItemModel(void *thisObj,
                                                       void *model_);
QtDartBindings_EXPORT void
c_QItemSelectionModel__onModelChanged_QAbstractItemModel(
    void *thisObj, void *contextQObject,
    void *callback); // QItemSelectionModel::reset()
QtDartBindings_EXPORT void c_QItemSelectionModel__reset(void *thisObj);
// QItemSelectionModel::rowIntersectsSelection(int row, const QModelIndex &
// parent) const
QtDartBindings_EXPORT bool
c_QItemSelectionModel__rowIntersectsSelection_int_QModelIndex(void *thisObj,
                                                              int row,
                                                              void *parent_);
// QItemSelectionModel::select(const QItemSelection & selection,
// QFlags<QItemSelectionModel::SelectionFlag> command)
QtDartBindings_EXPORT void
c_QItemSelectionModel__select_QItemSelection_SelectionFlags(void *thisObj,
                                                            void *selection_,
                                                            int command_);
// QItemSelectionModel::select(const QModelIndex & index,
// QFlags<QItemSelectionModel::SelectionFlag> command)
QtDartBindings_EXPORT void
c_QItemSelectionModel__selectIndex_QModelIndex_SelectionFlags(void *thisObj,
                                                              void *index_,
                                                              int command_);
// QItemSelectionModel::selectedColumns(int row) const
QtDartBindings_EXPORT void *
c_QItemSelectionModel__selectedColumns_int(void *thisObj, int row);
// QItemSelectionModel::selectedIndexes() const
QtDartBindings_EXPORT void *
c_QItemSelectionModel__selectedIndexes(void *thisObj);
// QItemSelectionModel::selectedRows(int column) const
QtDartBindings_EXPORT void *
c_QItemSelectionModel__selectedRows_int(void *thisObj, int column);
// QItemSelectionModel::selection() const
QtDartBindings_EXPORT void *c_QItemSelectionModel__selection(void *thisObj);
// QItemSelectionModel::selectionChanged(const QItemSelection & selected, const
// QItemSelection & deselected)
QtDartBindings_EXPORT void
c_QItemSelectionModel__selectionChanged_QItemSelection_QItemSelection(
    void *thisObj, void *selected_, void *deselected_);
QtDartBindings_EXPORT void
c_QItemSelectionModel__onSelectionChanged_QItemSelection_QItemSelection(
    void *thisObj, void *contextQObject,
    void *
        callback); // QItemSelectionModel::setCurrentIndex(const QModelIndex &
                   // index, QFlags<QItemSelectionModel::SelectionFlag> command)
QtDartBindings_EXPORT void
c_QItemSelectionModel__setCurrentIndex_QModelIndex_SelectionFlags(void *thisObj,
                                                                  void *index_,
                                                                  int command_);
// QItemSelectionModel::setModel(QAbstractItemModel * model)
QtDartBindings_EXPORT void
c_QItemSelectionModel__setModel_QAbstractItemModel(void *thisObj, void *model_);
// QItemSelectionModel::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QItemSelectionModel__tr_char_char_int(const char *s, const char *c,
                                               int n);
QtDartBindings_EXPORT void c_QItemSelectionModel__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QItemSelectionModel__registerVirtualMethodCallback(void *ptr, void *callback,
                                                     int methodId);
QtDartBindings_EXPORT void c_QItemSelectionModel_Finalizer(void *cppObj);
}
