#include "QItemSelectionModel_wrapper.h"

#include <QDebug>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
// tag=1006
QItemSelectionModel_wrapper::QItemSelectionModel_wrapper(
    QAbstractItemModel *model)
    : ::QItemSelectionModel(model) {}

// tag=1006
QItemSelectionModel_wrapper::QItemSelectionModel_wrapper(
    QAbstractItemModel *model, QObject *parent)
    : ::QItemSelectionModel(model, parent) {}
void QItemSelectionModel_wrapper::clear() {
  // tag=1000
  if (m_clearCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_clearCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QItemSelectionModel::clear();
  }
}
// tag=1009
void QItemSelectionModel_wrapper::clear_nocallback() {
  // tag=1003
  ::QItemSelectionModel::clear();
}
void QItemSelectionModel_wrapper::clearCurrentIndex() {
  // tag=1000
  if (m_clearCurrentIndexCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_clearCurrentIndexCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QItemSelectionModel::clearCurrentIndex();
  }
}
// tag=1009
void QItemSelectionModel_wrapper::clearCurrentIndex_nocallback() {
  // tag=1003
  ::QItemSelectionModel::clearCurrentIndex();
}
void QItemSelectionModel_wrapper::clearSelection() {
  // tag=1000

  // tag=1004
  ::QItemSelectionModel::clearSelection();
}
bool QItemSelectionModel_wrapper::columnIntersectsSelection(
    int column, const QModelIndex &parent) const {
  // tag=1000

  // tag=1004
  return ::QItemSelectionModel::columnIntersectsSelection(column, parent);
}
void QItemSelectionModel_wrapper::currentChanged(const QModelIndex &current,
                                                 const QModelIndex &previous) {
  // tag=1000

  // tag=1004
  ::QItemSelectionModel::currentChanged(current, previous);
}
void QItemSelectionModel_wrapper::currentColumnChanged(
    const QModelIndex &current, const QModelIndex &previous) {
  // tag=1000

  // tag=1004
  ::QItemSelectionModel::currentColumnChanged(current, previous);
}
QModelIndex QItemSelectionModel_wrapper::currentIndex() const {
  // tag=1000

  // tag=1004
  return ::QItemSelectionModel::currentIndex();
}
void QItemSelectionModel_wrapper::currentRowChanged(
    const QModelIndex &current, const QModelIndex &previous) {
  // tag=1000

  // tag=1004
  ::QItemSelectionModel::currentRowChanged(current, previous);
}
void QItemSelectionModel_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QItemSelectionModel::customEvent(event);
  }
}
// tag=1009
void QItemSelectionModel_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QItemSelectionModel::customEvent(event);
}
void QItemSelectionModel_wrapper::emitSelectionChanged(
    const QItemSelection &newSelection, const QItemSelection &oldSelection) {
  // tag=1000

  // tag=1004
  ::QItemSelectionModel::emitSelectionChanged(newSelection, oldSelection);
}
bool QItemSelectionModel_wrapper::event(QEvent *event) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    return ::QItemSelectionModel::event(event);
  }
}
// tag=1009
bool QItemSelectionModel_wrapper::event_nocallback(QEvent *event) {
  // tag=1003
  return ::QItemSelectionModel::event(event);
}
bool QItemSelectionModel_wrapper::eventFilter(QObject *watched, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    // tag=1002
    return ::QItemSelectionModel::eventFilter(watched, event);
  }
}
// tag=1009
bool QItemSelectionModel_wrapper::eventFilter_nocallback(QObject *watched,
                                                         QEvent *event) {
  // tag=1003
  return ::QItemSelectionModel::eventFilter(watched, event);
}
bool QItemSelectionModel_wrapper::hasSelection() const {
  // tag=1000

  // tag=1004
  return ::QItemSelectionModel::hasSelection();
}
bool QItemSelectionModel_wrapper::isColumnSelected(
    int column, const QModelIndex &parent) const {
  // tag=1000

  // tag=1004
  return ::QItemSelectionModel::isColumnSelected(column, parent);
}
bool QItemSelectionModel_wrapper::isRowSelected(
    int row, const QModelIndex &parent) const {
  // tag=1000

  // tag=1004
  return ::QItemSelectionModel::isRowSelected(row, parent);
}
bool QItemSelectionModel_wrapper::isSelected(const QModelIndex &index) const {
  // tag=1000

  // tag=1004
  return ::QItemSelectionModel::isSelected(index);
}
QAbstractItemModel *QItemSelectionModel_wrapper::model() {
  // tag=1000

  // tag=1004
  return ::QItemSelectionModel::model();
}
void QItemSelectionModel_wrapper::modelChanged(QAbstractItemModel *model) {
  // tag=1000

  // tag=1004
  ::QItemSelectionModel::modelChanged(model);
}
void QItemSelectionModel_wrapper::reset() {
  // tag=1000
  if (m_resetCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_resetCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QItemSelectionModel::reset();
  }
}
// tag=1009
void QItemSelectionModel_wrapper::reset_nocallback() {
  // tag=1003
  ::QItemSelectionModel::reset();
}
bool QItemSelectionModel_wrapper::rowIntersectsSelection(
    int row, const QModelIndex &parent) const {
  // tag=1000

  // tag=1004
  return ::QItemSelectionModel::rowIntersectsSelection(row, parent);
}
void QItemSelectionModel_wrapper::select(
    const QItemSelection &selection,
    QFlags<QItemSelectionModel::SelectionFlag> command) {
  // tag=1000
  if (m_selectCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_selectCallback(const_cast<void *>(thisPtr), selection, command);
  } else {
    // tag=1002
    ::QItemSelectionModel::select(selection, command);
  }
}
// tag=1009
void QItemSelectionModel_wrapper::select_nocallback(
    const QItemSelection &selection,
    QFlags<QItemSelectionModel::SelectionFlag> command) {
  // tag=1003
  ::QItemSelectionModel::select(selection, command);
}
void QItemSelectionModel_wrapper::select(
    const QModelIndex &index,
    QFlags<QItemSelectionModel::SelectionFlag> command) {
  // tag=1000
  if (m_selectIndexCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_selectIndexCallback(const_cast<void *>(thisPtr), index, command);
  } else {
    // tag=1002
    ::QItemSelectionModel::select(index, command);
  }
}
// tag=1009
void QItemSelectionModel_wrapper::select_nocallback(
    const QModelIndex &index,
    QFlags<QItemSelectionModel::SelectionFlag> command) {
  // tag=1003
  ::QItemSelectionModel::select(index, command);
}
QList<QModelIndex> QItemSelectionModel_wrapper::selectedColumns(int row) const {
  // tag=1000

  // tag=1004
  return ::QItemSelectionModel::selectedColumns(row);
}
QList<QModelIndex> QItemSelectionModel_wrapper::selectedIndexes() const {
  // tag=1000

  // tag=1004
  return ::QItemSelectionModel::selectedIndexes();
}
QList<QModelIndex> QItemSelectionModel_wrapper::selectedRows(int column) const {
  // tag=1000

  // tag=1004
  return ::QItemSelectionModel::selectedRows(column);
}
const QItemSelection QItemSelectionModel_wrapper::selection() const {
  // tag=1000

  // tag=1004
  return ::QItemSelectionModel::selection();
}
void QItemSelectionModel_wrapper::selectionChanged(
    const QItemSelection &selected, const QItemSelection &deselected) {
  // tag=1000

  // tag=1004
  ::QItemSelectionModel::selectionChanged(selected, deselected);
}
void QItemSelectionModel_wrapper::setCurrentIndex(
    const QModelIndex &index,
    QFlags<QItemSelectionModel::SelectionFlag> command) {
  // tag=1000
  if (m_setCurrentIndexCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setCurrentIndexCallback(const_cast<void *>(thisPtr), index, command);
  } else {
    // tag=1002
    ::QItemSelectionModel::setCurrentIndex(index, command);
  }
}
// tag=1009
void QItemSelectionModel_wrapper::setCurrentIndex_nocallback(
    const QModelIndex &index,
    QFlags<QItemSelectionModel::SelectionFlag> command) {
  // tag=1003
  ::QItemSelectionModel::setCurrentIndex(index, command);
}
void QItemSelectionModel_wrapper::setModel(QAbstractItemModel *model) {
  // tag=1000

  // tag=1004
  ::QItemSelectionModel::setModel(model);
}
QString QItemSelectionModel_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QItemSelectionModel::tr(s, c, n);
}

// tag=1005
QItemSelectionModel_wrapper::~QItemSelectionModel_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QItemSelectionModel *fromPtr(void *ptr) {
  return reinterpret_cast<QItemSelectionModel *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QItemSelectionModel_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<
      QtDartBindings_wrappersNS::QItemSelectionModel_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QItemSelectionModel_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QItemSelectionModel_wrapper *>(cppObj);
}
void *c_QItemSelectionModel__constructor_QAbstractItemModel(void *model_) {
  auto model = reinterpret_cast<QAbstractItemModel *>(model_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QItemSelectionModel_wrapper(model);
  return reinterpret_cast<void *>(ptr);
}
void *
c_QItemSelectionModel__constructor_QAbstractItemModel_QObject(void *model_,
                                                              void *parent_) {
  auto model = reinterpret_cast<QAbstractItemModel *>(model_);
  auto parent = reinterpret_cast<QObject *>(parent_);
  // tag=1056
  auto ptr =
      new QtDartBindings_wrappersNS::QItemSelectionModel_wrapper(model, parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// clear()
void c_QItemSelectionModel__clear(void *thisObj) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QItemSelectionModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->clear_nocallback();
    } else {
      return targetPtr->clear();
    }
  }();
}

// tag=1050
// clearCurrentIndex()
void c_QItemSelectionModel__clearCurrentIndex(void *thisObj) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QItemSelectionModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->clearCurrentIndex_nocallback();
    } else {
      return targetPtr->clearCurrentIndex();
    }
  }();
}

// tag=1050
// clearSelection()
void c_QItemSelectionModel__clearSelection(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->clearSelection();
}

// tag=1050
// columnIntersectsSelection(int column, const QModelIndex & parent) const
bool c_QItemSelectionModel__columnIntersectsSelection_int_QModelIndex(
    void *thisObj, int column, void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1010
      fromPtr(thisObj)->columnIntersectsSelection(column, parent);
}

// tag=1050
// currentChanged(const QModelIndex & current, const QModelIndex & previous)
void c_QItemSelectionModel__currentChanged_QModelIndex_QModelIndex(
    void *thisObj, void *current_, void *previous_) {
  auto &current = *reinterpret_cast<QModelIndex *>(current_);
  auto &previous = *reinterpret_cast<QModelIndex *>(previous_);
  // tag=1010
  fromPtr(thisObj)->currentChanged(current, previous);
}

// tag=1079
void c_QItemSelectionModel__onCurrentChanged_QModelIndex_QModelIndex(
    void *thisObj, void *contextQObject, void *callback) {
  auto instance = reinterpret_cast<QItemSelectionModel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QItemSelectionModel::currentChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// currentColumnChanged(const QModelIndex & current, const QModelIndex &
// previous)
void c_QItemSelectionModel__currentColumnChanged_QModelIndex_QModelIndex(
    void *thisObj, void *current_, void *previous_) {
  auto &current = *reinterpret_cast<QModelIndex *>(current_);
  auto &previous = *reinterpret_cast<QModelIndex *>(previous_);
  // tag=1010
  fromPtr(thisObj)->currentColumnChanged(current, previous);
}

// tag=1079
void c_QItemSelectionModel__onCurrentColumnChanged_QModelIndex_QModelIndex(
    void *thisObj, void *contextQObject, void *callback) {
  auto instance = reinterpret_cast<QItemSelectionModel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QItemSelectionModel::currentColumnChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// currentIndex() const
void *c_QItemSelectionModel__currentIndex(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{
          fromPtr(thisObj)->currentIndex()};
}

// tag=1050
// currentRowChanged(const QModelIndex & current, const QModelIndex & previous)
void c_QItemSelectionModel__currentRowChanged_QModelIndex_QModelIndex(
    void *thisObj, void *current_, void *previous_) {
  auto &current = *reinterpret_cast<QModelIndex *>(current_);
  auto &previous = *reinterpret_cast<QModelIndex *>(previous_);
  // tag=1010
  fromPtr(thisObj)->currentRowChanged(current, previous);
}

// tag=1079
void c_QItemSelectionModel__onCurrentRowChanged_QModelIndex_QModelIndex(
    void *thisObj, void *contextQObject, void *callback) {
  auto instance = reinterpret_cast<QItemSelectionModel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QItemSelectionModel::currentRowChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// customEvent(QEvent * event)
void c_QItemSelectionModel__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1079
void c_QItemSelectionModel__onDestroyed_QObject(void *thisObj,
                                                void *contextQObject,
                                                void *callback) {
  auto instance = reinterpret_cast<QItemSelectionModel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QItemSelectionModel::destroyed,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// emitSelectionChanged(const QItemSelection & newSelection, const
// QItemSelection & oldSelection)
void c_QItemSelectionModel__emitSelectionChanged_QItemSelection_QItemSelection(
    void *thisObj, void *newSelection_, void *oldSelection_) {
  auto &newSelection = *reinterpret_cast<QItemSelection *>(newSelection_);
  auto &oldSelection = *reinterpret_cast<QItemSelection *>(oldSelection_);
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->emitSelectionChanged(newSelection, oldSelection);
}

// tag=1050
// event(QEvent * event)
bool c_QItemSelectionModel__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QItemSelectionModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->event_nocallback(event);
        } else {
          return targetPtr->event(event);
        }
      }();
}

// tag=1050
// eventFilter(QObject * watched, QEvent * event)
bool c_QItemSelectionModel__eventFilter_QObject_QEvent(void *thisObj,
                                                       void *watched_,
                                                       void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QItemSelectionModel_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->eventFilter_nocallback(watched, event);
        } else {
          return targetPtr->eventFilter(watched, event);
        }
      }();
}

// tag=1050
// hasSelection() const
bool c_QItemSelectionModel__hasSelection(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->hasSelection();
}

// tag=1050
// isColumnSelected(int column, const QModelIndex & parent) const
bool c_QItemSelectionModel__isColumnSelected_int_QModelIndex(void *thisObj,
                                                             int column,
                                                             void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1010
      fromPtr(thisObj)->isColumnSelected(column, parent);
}

// tag=1050
// isRowSelected(int row, const QModelIndex & parent) const
bool c_QItemSelectionModel__isRowSelected_int_QModelIndex(void *thisObj,
                                                          int row,
                                                          void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1010
      fromPtr(thisObj)->isRowSelected(row, parent);
}

// tag=1050
// isSelected(const QModelIndex & index) const
bool c_QItemSelectionModel__isSelected_QModelIndex(void *thisObj,
                                                   void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1010
      fromPtr(thisObj)->isSelected(index);
}

// tag=1050
// model()
void *c_QItemSelectionModel__model(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->model();
}

// tag=1050
// modelChanged(QAbstractItemModel * model)
void c_QItemSelectionModel__modelChanged_QAbstractItemModel(void *thisObj,
                                                            void *model_) {
  auto model = reinterpret_cast<QAbstractItemModel *>(model_);
  // tag=1010
  fromPtr(thisObj)->modelChanged(model);
}

// tag=1079
void c_QItemSelectionModel__onModelChanged_QAbstractItemModel(
    void *thisObj, void *contextQObject, void *callback) {
  auto instance = reinterpret_cast<QItemSelectionModel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QItemSelectionModel::modelChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// reset()
void c_QItemSelectionModel__reset(void *thisObj) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QItemSelectionModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->reset_nocallback();
    } else {
      return targetPtr->reset();
    }
  }();
}

// tag=1050
// rowIntersectsSelection(int row, const QModelIndex & parent) const
bool c_QItemSelectionModel__rowIntersectsSelection_int_QModelIndex(
    void *thisObj, int row, void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1010
      fromPtr(thisObj)->rowIntersectsSelection(row, parent);
}

// tag=1050
// select(const QItemSelection & selection,
// QFlags<QItemSelectionModel::SelectionFlag> command)
void c_QItemSelectionModel__select_QItemSelection_SelectionFlags(
    void *thisObj, void *selection_, int command_) {
  auto &selection = *reinterpret_cast<QItemSelection *>(selection_);
  auto command =
      static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command_);
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QItemSelectionModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->select_nocallback(selection, command);
    } else {
      return targetPtr->select(selection, command);
    }
  }();
}

// tag=1050
// select(const QModelIndex & index, QFlags<QItemSelectionModel::SelectionFlag>
// command)
void c_QItemSelectionModel__selectIndex_QModelIndex_SelectionFlags(
    void *thisObj, void *index_, int command_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  auto command =
      static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command_);
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QItemSelectionModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->select_nocallback(index, command);
    } else {
      return targetPtr->select(index, command);
    }
  }();
}

// tag=1050
// selectedColumns(int row) const
void *c_QItemSelectionModel__selectedColumns_int(void *thisObj, int row) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QModelIndex>>{
          fromPtr(thisObj)->selectedColumns(row)};
}

// tag=1050
// selectedIndexes() const
void *c_QItemSelectionModel__selectedIndexes(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QModelIndex>>{
          fromPtr(thisObj)->selectedIndexes()};
}

// tag=1050
// selectedRows(int column) const
void *c_QItemSelectionModel__selectedRows_int(void *thisObj, int column) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QModelIndex>>{
          fromPtr(thisObj)->selectedRows(column)};
}

// tag=1050
// selection() const
void *c_QItemSelectionModel__selection(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<const QItemSelection>{
          fromPtr(thisObj)->selection()};
}

// tag=1050
// selectionChanged(const QItemSelection & selected, const QItemSelection &
// deselected)
void c_QItemSelectionModel__selectionChanged_QItemSelection_QItemSelection(
    void *thisObj, void *selected_, void *deselected_) {
  auto &selected = *reinterpret_cast<QItemSelection *>(selected_);
  auto &deselected = *reinterpret_cast<QItemSelection *>(deselected_);
  // tag=1010
  fromPtr(thisObj)->selectionChanged(selected, deselected);
}

// tag=1079
void c_QItemSelectionModel__onSelectionChanged_QItemSelection_QItemSelection(
    void *thisObj, void *contextQObject, void *callback) {
  auto instance = reinterpret_cast<QItemSelectionModel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QItemSelectionModel::selectionChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// setCurrentIndex(const QModelIndex & index,
// QFlags<QItemSelectionModel::SelectionFlag> command)
void c_QItemSelectionModel__setCurrentIndex_QModelIndex_SelectionFlags(
    void *thisObj, void *index_, int command_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  auto command =
      static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command_);
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QItemSelectionModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setCurrentIndex_nocallback(index, command);
    } else {
      return targetPtr->setCurrentIndex(index, command);
    }
  }();
}

// tag=1050
// setModel(QAbstractItemModel * model)
void c_QItemSelectionModel__setModel_QAbstractItemModel(void *thisObj,
                                                        void *model_) {
  auto model = reinterpret_cast<QAbstractItemModel *>(model_);
  // tag=1010
  fromPtr(thisObj)->setModel(model);
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QItemSelectionModel__tr_char_char_int(const char *s,
                                                     const char *c, int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QItemSelectionModel_wrapper::tr(s, c, n)};
}
void c_QItemSelectionModel__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QItemSelectionModel__registerVirtualMethodCallback(void *ptr,
                                                          void *callback,
                                                          int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 3290:
    wrapper->m_clearCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QItemSelectionModel_wrapper::Callback_clear>(
        callback);
    break;
  case 3291:
    wrapper->m_clearCurrentIndexCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QItemSelectionModel_wrapper::
            Callback_clearCurrentIndex>(callback);
    break;
  case 944:
    wrapper->m_customEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QItemSelectionModel_wrapper::Callback_customEvent>(
            callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QItemSelectionModel_wrapper::Callback_event>(
        callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QItemSelectionModel_wrapper::Callback_eventFilter>(
            callback);
    break;
  case 3324:
    wrapper->m_resetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QItemSelectionModel_wrapper::Callback_reset>(
        callback);
    break;
  case 3326:
    wrapper->m_selectCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QItemSelectionModel_wrapper::Callback_select>(
            callback);
    break;
  case 3327:
    wrapper->m_selectIndexCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QItemSelectionModel_wrapper::Callback_selectIndex>(
            callback);
    break;
  case 3335:
    wrapper->m_setCurrentIndexCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QItemSelectionModel_wrapper::
            Callback_setCurrentIndex>(callback);
    break;
  }
}
}
