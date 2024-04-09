
// tag=1040
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
// tag=1017
class QItemSelectionModel_wrapper : public ::QItemSelectionModel {
public:
  ~QItemSelectionModel_wrapper();
  // tag=1041
  QItemSelectionModel_wrapper(QAbstractItemModel *model = nullptr);
  // tag=1041
  QItemSelectionModel_wrapper(QAbstractItemModel *model, QObject *parent);
  // tag=1041
  virtual void clear();
  // tag=1008
  virtual void clear_nocallback();
  // tag=1041
  virtual void clearCurrentIndex();
  // tag=1008
  virtual void clearCurrentIndex_nocallback();
  // tag=1041
  void clearSelection();
  // tag=1041
  bool
  columnIntersectsSelection(int column,
                            const QModelIndex &parent = QModelIndex()) const;
  // tag=1041
  void currentChanged(const QModelIndex &current, const QModelIndex &previous);
  // tag=1041
  void currentColumnChanged(const QModelIndex &current,
                            const QModelIndex &previous);
  // tag=1041
  QModelIndex currentIndex() const;
  // tag=1041
  void currentRowChanged(const QModelIndex &current,
                         const QModelIndex &previous);
  // tag=1041
  virtual void customEvent(QEvent *event);
  // tag=1008
  virtual void customEvent_nocallback(QEvent *event);
  // tag=1041
  void emitSelectionChanged(const QItemSelection &newSelection,
                            const QItemSelection &oldSelection);
  // tag=1041
  virtual bool event(QEvent *event);
  // tag=1008
  virtual bool event_nocallback(QEvent *event);
  // tag=1041
  virtual bool eventFilter(QObject *watched, QEvent *event);
  // tag=1008
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  // tag=1041
  bool hasSelection() const;
  // tag=1041
  bool isColumnSelected(int column,
                        const QModelIndex &parent = QModelIndex()) const;
  // tag=1041
  bool isRowSelected(int row, const QModelIndex &parent = QModelIndex()) const;
  // tag=1041
  bool isSelected(const QModelIndex &index) const;
  // tag=1041
  QAbstractItemModel *model();
  // tag=1041
  void modelChanged(QAbstractItemModel *model);
  // tag=1041
  virtual void reset();
  // tag=1008
  virtual void reset_nocallback();
  // tag=1041
  bool rowIntersectsSelection(int row,
                              const QModelIndex &parent = QModelIndex()) const;
  // tag=1041
  virtual void select(const QItemSelection &selection,
                      QFlags<QItemSelectionModel::SelectionFlag> command);
  // tag=1008
  virtual void
  select_nocallback(const QItemSelection &selection,
                    QFlags<QItemSelectionModel::SelectionFlag> command);
  // tag=1041
  virtual void select(const QModelIndex &index,
                      QFlags<QItemSelectionModel::SelectionFlag> command);
  // tag=1008
  virtual void
  select_nocallback(const QModelIndex &index,
                    QFlags<QItemSelectionModel::SelectionFlag> command);
  // tag=1041
  QList<QModelIndex> selectedColumns(int row = 0) const;
  // tag=1041
  QList<QModelIndex> selectedIndexes() const;
  // tag=1041
  QList<QModelIndex> selectedRows(int column = 0) const;
  // tag=1041
  const QItemSelection selection() const;
  // tag=1041
  void selectionChanged(const QItemSelection &selected,
                        const QItemSelection &deselected);
  // tag=1041
  virtual void
  setCurrentIndex(const QModelIndex &index,
                  QFlags<QItemSelectionModel::SelectionFlag> command);
  // tag=1008
  virtual void setCurrentIndex_nocallback(
      const QModelIndex &index,
      QFlags<QItemSelectionModel::SelectionFlag> command);
  // tag=1041
  void setModel(QAbstractItemModel *model);
  // tag=1041
  static QString tr(const char *s, const char *c, int n);
  // tag=1042
  typedef void (*Callback_clear)(void *);
  Callback_clear m_clearCallback = nullptr;
  // tag=1042
  typedef void (*Callback_clearCurrentIndex)(void *);
  Callback_clearCurrentIndex m_clearCurrentIndexCallback = nullptr;
  // tag=1042
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_event)(void *, QEvent *event);
  Callback_event m_eventCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_eventFilter)(void *, QObject *watched, QEvent *event);
  Callback_eventFilter m_eventFilterCallback = nullptr;
  // tag=1042
  typedef void (*Callback_reset)(void *);
  Callback_reset m_resetCallback = nullptr;
  // tag=1042
  typedef void (*Callback_select)(
      void *, const QItemSelection &selection,
      QFlags<QItemSelectionModel::SelectionFlag> command);
  Callback_select m_selectCallback = nullptr;
  // tag=1042
  typedef void (*Callback_selectIndex)(
      void *, const QModelIndex &index,
      QFlags<QItemSelectionModel::SelectionFlag> command);
  Callback_selectIndex m_selectIndexCallback = nullptr;
  // tag=1042
  typedef void (*Callback_setCurrentIndex)(
      void *, const QModelIndex &index,
      QFlags<QItemSelectionModel::SelectionFlag> command);
  Callback_setCurrentIndex m_setCurrentIndexCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QItemSelectionModel::QItemSelectionModel(QAbstractItemModel * model)
QtDartBindings_EXPORT void *
c_QItemSelectionModel__constructor_QAbstractItemModel(void *model_);

// tag=1067
//  QItemSelectionModel::QItemSelectionModel(QAbstractItemModel * model, QObject
//  * parent)
QtDartBindings_EXPORT void *
c_QItemSelectionModel__constructor_QAbstractItemModel_QObject(void *model_,
                                                              void *parent_);

// tag=1067
//  QItemSelectionModel::clear()
QtDartBindings_EXPORT void c_QItemSelectionModel__clear(void *thisObj);

// tag=1067
//  QItemSelectionModel::clearCurrentIndex()
QtDartBindings_EXPORT void
c_QItemSelectionModel__clearCurrentIndex(void *thisObj);

// tag=1067
//  QItemSelectionModel::clearSelection()
QtDartBindings_EXPORT void c_QItemSelectionModel__clearSelection(void *thisObj);

// tag=1067
//  QItemSelectionModel::columnIntersectsSelection(int column, const QModelIndex
//  & parent) const
QtDartBindings_EXPORT bool
c_QItemSelectionModel__columnIntersectsSelection_int_QModelIndex(void *thisObj,
                                                                 int column,
                                                                 void *parent_);

// tag=1067
//  QItemSelectionModel::currentChanged(const QModelIndex & current, const
//  QModelIndex & previous)
QtDartBindings_EXPORT void
c_QItemSelectionModel__currentChanged_QModelIndex_QModelIndex(void *thisObj,
                                                              void *current_,
                                                              void *previous_);

// tag=1078
QtDartBindings_EXPORT void
c_QItemSelectionModel__onCurrentChanged_QModelIndex_QModelIndex(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QItemSelectionModel::currentColumnChanged(const QModelIndex & current, const
//  QModelIndex & previous)
QtDartBindings_EXPORT void
c_QItemSelectionModel__currentColumnChanged_QModelIndex_QModelIndex(
    void *thisObj, void *current_, void *previous_);

// tag=1078
QtDartBindings_EXPORT void
c_QItemSelectionModel__onCurrentColumnChanged_QModelIndex_QModelIndex(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QItemSelectionModel::currentIndex() const
QtDartBindings_EXPORT void *c_QItemSelectionModel__currentIndex(void *thisObj);

// tag=1067
//  QItemSelectionModel::currentRowChanged(const QModelIndex & current, const
//  QModelIndex & previous)
QtDartBindings_EXPORT void
c_QItemSelectionModel__currentRowChanged_QModelIndex_QModelIndex(
    void *thisObj, void *current_, void *previous_);

// tag=1078
QtDartBindings_EXPORT void
c_QItemSelectionModel__onCurrentRowChanged_QModelIndex_QModelIndex(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QItemSelectionModel::customEvent(QEvent * event)
QtDartBindings_EXPORT void
c_QItemSelectionModel__customEvent_QEvent(void *thisObj, void *event_);

// tag=1067
//  QItemSelectionModel::emitSelectionChanged(const QItemSelection &
//  newSelection, const QItemSelection & oldSelection)
QtDartBindings_EXPORT void
c_QItemSelectionModel__emitSelectionChanged_QItemSelection_QItemSelection(
    void *thisObj, void *newSelection_, void *oldSelection_);

// tag=1067
//  QItemSelectionModel::event(QEvent * event)
QtDartBindings_EXPORT bool c_QItemSelectionModel__event_QEvent(void *thisObj,
                                                               void *event_);

// tag=1067
//  QItemSelectionModel::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QItemSelectionModel__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                                  void *event_);

// tag=1067
//  QItemSelectionModel::hasSelection() const
QtDartBindings_EXPORT bool c_QItemSelectionModel__hasSelection(void *thisObj);

// tag=1067
//  QItemSelectionModel::isColumnSelected(int column, const QModelIndex &
//  parent) const
QtDartBindings_EXPORT bool
c_QItemSelectionModel__isColumnSelected_int_QModelIndex(void *thisObj,
                                                        int column,
                                                        void *parent_);

// tag=1067
//  QItemSelectionModel::isRowSelected(int row, const QModelIndex & parent)
//  const
QtDartBindings_EXPORT bool
c_QItemSelectionModel__isRowSelected_int_QModelIndex(void *thisObj, int row,
                                                     void *parent_);

// tag=1067
//  QItemSelectionModel::isSelected(const QModelIndex & index) const
QtDartBindings_EXPORT bool
c_QItemSelectionModel__isSelected_QModelIndex(void *thisObj, void *index_);

// tag=1067
//  QItemSelectionModel::model()
QtDartBindings_EXPORT void *c_QItemSelectionModel__model(void *thisObj);

// tag=1067
//  QItemSelectionModel::modelChanged(QAbstractItemModel * model)
QtDartBindings_EXPORT void
c_QItemSelectionModel__modelChanged_QAbstractItemModel(void *thisObj,
                                                       void *model_);

// tag=1078
QtDartBindings_EXPORT void
c_QItemSelectionModel__onModelChanged_QAbstractItemModel(void *thisObj,
                                                         void *contextQObject,
                                                         void *callback);
// tag=1067
//  QItemSelectionModel::reset()
QtDartBindings_EXPORT void c_QItemSelectionModel__reset(void *thisObj);

// tag=1067
//  QItemSelectionModel::rowIntersectsSelection(int row, const QModelIndex &
//  parent) const
QtDartBindings_EXPORT bool
c_QItemSelectionModel__rowIntersectsSelection_int_QModelIndex(void *thisObj,
                                                              int row,
                                                              void *parent_);

// tag=1067
//  QItemSelectionModel::select(const QItemSelection & selection,
//  QFlags<QItemSelectionModel::SelectionFlag> command)
QtDartBindings_EXPORT void
c_QItemSelectionModel__select_QItemSelection_SelectionFlags(void *thisObj,
                                                            void *selection_,
                                                            int command_);

// tag=1067
//  QItemSelectionModel::select(const QModelIndex & index,
//  QFlags<QItemSelectionModel::SelectionFlag> command)
QtDartBindings_EXPORT void
c_QItemSelectionModel__selectIndex_QModelIndex_SelectionFlags(void *thisObj,
                                                              void *index_,
                                                              int command_);

// tag=1067
//  QItemSelectionModel::selectedColumns(int row) const
QtDartBindings_EXPORT void *
c_QItemSelectionModel__selectedColumns_int(void *thisObj, int row);

// tag=1067
//  QItemSelectionModel::selectedIndexes() const
QtDartBindings_EXPORT void *
c_QItemSelectionModel__selectedIndexes(void *thisObj);

// tag=1067
//  QItemSelectionModel::selectedRows(int column) const
QtDartBindings_EXPORT void *
c_QItemSelectionModel__selectedRows_int(void *thisObj, int column);

// tag=1067
//  QItemSelectionModel::selection() const
QtDartBindings_EXPORT void *c_QItemSelectionModel__selection(void *thisObj);

// tag=1067
//  QItemSelectionModel::selectionChanged(const QItemSelection & selected, const
//  QItemSelection & deselected)
QtDartBindings_EXPORT void
c_QItemSelectionModel__selectionChanged_QItemSelection_QItemSelection(
    void *thisObj, void *selected_, void *deselected_);

// tag=1078
QtDartBindings_EXPORT void
c_QItemSelectionModel__onSelectionChanged_QItemSelection_QItemSelection(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QItemSelectionModel::setCurrentIndex(const QModelIndex & index,
//  QFlags<QItemSelectionModel::SelectionFlag> command)
QtDartBindings_EXPORT void
c_QItemSelectionModel__setCurrentIndex_QModelIndex_SelectionFlags(void *thisObj,
                                                                  void *index_,
                                                                  int command_);

// tag=1067
//  QItemSelectionModel::setModel(QAbstractItemModel * model)
QtDartBindings_EXPORT void
c_QItemSelectionModel__setModel_QAbstractItemModel(void *thisObj, void *model_);

// tag=1067
//  QItemSelectionModel::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QItemSelectionModel__tr_char_char_int(const char *s, const char *c,
                                               int n);

// tag=1066
QtDartBindings_EXPORT void c_QItemSelectionModel__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QItemSelectionModel__registerVirtualMethodCallback(void *ptr, void *callback,
                                                     int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QItemSelectionModel_Finalizer(void *, void *cppObj,
                                                           void *);
}
