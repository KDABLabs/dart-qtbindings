/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QItemSelectionModel_c.h"

#include <iostream>

#include <cassert>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
QItemSelectionModel_wrapper::QItemSelectionModel_wrapper(
    QAbstractItemModel *model)
    : ::QItemSelectionModel(model) {}
QItemSelectionModel_wrapper::QItemSelectionModel_wrapper(
    QAbstractItemModel *model, QObject *parent)
    : ::QItemSelectionModel(model, parent) {}
void QItemSelectionModel_wrapper::clear() {
  if (m_clearCallback) {
    const void *thisPtr = this;
    m_clearCallback(const_cast<void *>(thisPtr));
  } else {
    ::QItemSelectionModel::clear();
  }
}
void QItemSelectionModel_wrapper::clear_nocallback() {
  ::QItemSelectionModel::clear();
}
void QItemSelectionModel_wrapper::clearCurrentIndex() {
  if (m_clearCurrentIndexCallback) {
    const void *thisPtr = this;
    m_clearCurrentIndexCallback(const_cast<void *>(thisPtr));
  } else {
    ::QItemSelectionModel::clearCurrentIndex();
  }
}
void QItemSelectionModel_wrapper::clearCurrentIndex_nocallback() {
  ::QItemSelectionModel::clearCurrentIndex();
}
void QItemSelectionModel_wrapper::clearSelection() {
  ::QItemSelectionModel::clearSelection();
}
bool QItemSelectionModel_wrapper::columnIntersectsSelection(
    int column, const QModelIndex &parent) const {
  return ::QItemSelectionModel::columnIntersectsSelection(column, parent);
}
void QItemSelectionModel_wrapper::currentChanged(const QModelIndex &current,
                                                 const QModelIndex &previous) {
  ::QItemSelectionModel::currentChanged(current, previous);
}
void QItemSelectionModel_wrapper::currentColumnChanged(
    const QModelIndex &current, const QModelIndex &previous) {
  ::QItemSelectionModel::currentColumnChanged(current, previous);
}
QModelIndex QItemSelectionModel_wrapper::currentIndex() const {
  return ::QItemSelectionModel::currentIndex();
}
void QItemSelectionModel_wrapper::currentRowChanged(
    const QModelIndex &current, const QModelIndex &previous) {
  ::QItemSelectionModel::currentRowChanged(current, previous);
}
void QItemSelectionModel_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QItemSelectionModel::customEvent(event);
  }
}
void QItemSelectionModel_wrapper::customEvent_nocallback(QEvent *event) {
  ::QItemSelectionModel::customEvent(event);
}
void QItemSelectionModel_wrapper::emitSelectionChanged(
    const QItemSelection &newSelection, const QItemSelection &oldSelection) {
  ::QItemSelectionModel::emitSelectionChanged(newSelection, oldSelection);
}
bool QItemSelectionModel_wrapper::event(QEvent *event) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    return ::QItemSelectionModel::event(event);
  }
}
bool QItemSelectionModel_wrapper::event_nocallback(QEvent *event) {
  return ::QItemSelectionModel::event(event);
}
bool QItemSelectionModel_wrapper::eventFilter(QObject *watched, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QItemSelectionModel::eventFilter(watched, event);
  }
}
bool QItemSelectionModel_wrapper::eventFilter_nocallback(QObject *watched,
                                                         QEvent *event) {
  return ::QItemSelectionModel::eventFilter(watched, event);
}
bool QItemSelectionModel_wrapper::hasSelection() const {
  return ::QItemSelectionModel::hasSelection();
}
bool QItemSelectionModel_wrapper::isColumnSelected(
    int column, const QModelIndex &parent) const {
  return ::QItemSelectionModel::isColumnSelected(column, parent);
}
bool QItemSelectionModel_wrapper::isRowSelected(
    int row, const QModelIndex &parent) const {
  return ::QItemSelectionModel::isRowSelected(row, parent);
}
bool QItemSelectionModel_wrapper::isSelected(const QModelIndex &index) const {
  return ::QItemSelectionModel::isSelected(index);
}
QAbstractItemModel *QItemSelectionModel_wrapper::model() {
  return ::QItemSelectionModel::model();
}
void QItemSelectionModel_wrapper::modelChanged(QAbstractItemModel *model) {
  ::QItemSelectionModel::modelChanged(model);
}
void QItemSelectionModel_wrapper::reset() {
  if (m_resetCallback) {
    const void *thisPtr = this;
    m_resetCallback(const_cast<void *>(thisPtr));
  } else {
    ::QItemSelectionModel::reset();
  }
}
void QItemSelectionModel_wrapper::reset_nocallback() {
  ::QItemSelectionModel::reset();
}
bool QItemSelectionModel_wrapper::rowIntersectsSelection(
    int row, const QModelIndex &parent) const {
  return ::QItemSelectionModel::rowIntersectsSelection(row, parent);
}
void QItemSelectionModel_wrapper::select(
    const QItemSelection &selection,
    QFlags<QItemSelectionModel::SelectionFlag> command) {
  if (m_selectCallback) {
    const void *thisPtr = this;
    m_selectCallback(const_cast<void *>(thisPtr), selection, command);
  } else {
    ::QItemSelectionModel::select(selection, command);
  }
}
void QItemSelectionModel_wrapper::select_nocallback(
    const QItemSelection &selection,
    QFlags<QItemSelectionModel::SelectionFlag> command) {
  ::QItemSelectionModel::select(selection, command);
}
void QItemSelectionModel_wrapper::select(
    const QModelIndex &index,
    QFlags<QItemSelectionModel::SelectionFlag> command) {
  if (m_selectIndexCallback) {
    const void *thisPtr = this;
    m_selectIndexCallback(const_cast<void *>(thisPtr), index, command);
  } else {
    ::QItemSelectionModel::select(index, command);
  }
}
void QItemSelectionModel_wrapper::select_nocallback(
    const QModelIndex &index,
    QFlags<QItemSelectionModel::SelectionFlag> command) {
  ::QItemSelectionModel::select(index, command);
}
QList<QModelIndex> QItemSelectionModel_wrapper::selectedColumns(int row) const {
  return ::QItemSelectionModel::selectedColumns(row);
}
QList<QModelIndex> QItemSelectionModel_wrapper::selectedIndexes() const {
  return ::QItemSelectionModel::selectedIndexes();
}
QList<QModelIndex> QItemSelectionModel_wrapper::selectedRows(int column) const {
  return ::QItemSelectionModel::selectedRows(column);
}
const QItemSelection QItemSelectionModel_wrapper::selection() const {
  return ::QItemSelectionModel::selection();
}
void QItemSelectionModel_wrapper::selectionChanged(
    const QItemSelection &selected, const QItemSelection &deselected) {
  ::QItemSelectionModel::selectionChanged(selected, deselected);
}
void QItemSelectionModel_wrapper::setCurrentIndex(
    const QModelIndex &index,
    QFlags<QItemSelectionModel::SelectionFlag> command) {
  if (m_setCurrentIndexCallback) {
    const void *thisPtr = this;
    m_setCurrentIndexCallback(const_cast<void *>(thisPtr), index, command);
  } else {
    ::QItemSelectionModel::setCurrentIndex(index, command);
  }
}
void QItemSelectionModel_wrapper::setCurrentIndex_nocallback(
    const QModelIndex &index,
    QFlags<QItemSelectionModel::SelectionFlag> command) {
  ::QItemSelectionModel::setCurrentIndex(index, command);
}
void QItemSelectionModel_wrapper::setModel(QAbstractItemModel *model) {
  ::QItemSelectionModel::setModel(model);
}
QString QItemSelectionModel_wrapper::tr(const char *s, const char *c, int n) {
  return ::QItemSelectionModel::tr(s, c, n);
}
QItemSelectionModel_wrapper::~QItemSelectionModel_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QItemSelectionModel *fromPtr(void *ptr) {
  return reinterpret_cast<QItemSelectionModel *>(ptr);
}
static QtDartBindings_wrappersNS::QItemSelectionModel_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<
      QtDartBindings_wrappersNS::QItemSelectionModel_wrapper *>(ptr);
}
extern "C" {
void c_QItemSelectionModel_Finalizer(void *cppObj) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QItemSelectionModel_wrapper *>(cppObj);
}
void *c_QItemSelectionModel__constructor_QAbstractItemModel(void *model_) {
  auto model = reinterpret_cast<QAbstractItemModel *>(model_);
  auto ptr = new QtDartBindings_wrappersNS::QItemSelectionModel_wrapper(model);
  return reinterpret_cast<void *>(ptr);
}
void *
c_QItemSelectionModel__constructor_QAbstractItemModel_QObject(void *model_,
                                                              void *parent_) {
  auto model = reinterpret_cast<QAbstractItemModel *>(model_);
  auto parent = reinterpret_cast<QObject *>(parent_);
  auto ptr =
      new QtDartBindings_wrappersNS::QItemSelectionModel_wrapper(model, parent);
  return reinterpret_cast<void *>(ptr);
}
// clear()
void c_QItemSelectionModel__clear(void *thisObj) {
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
// clearCurrentIndex()
void c_QItemSelectionModel__clearCurrentIndex(void *thisObj) {
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
// clearSelection()
void c_QItemSelectionModel__clearSelection(void *thisObj) {
  fromPtr(thisObj)->clearSelection();
}
// columnIntersectsSelection(int column, const QModelIndex & parent) const
bool c_QItemSelectionModel__columnIntersectsSelection_int_QModelIndex(
    void *thisObj, int column, void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result =
      fromPtr(thisObj)->columnIntersectsSelection(column, parent);
  return result;
}
// currentChanged(const QModelIndex & current, const QModelIndex & previous)
void c_QItemSelectionModel__currentChanged_QModelIndex_QModelIndex(
    void *thisObj, void *current_, void *previous_) {
  assert(current_);
  auto &current = *reinterpret_cast<QModelIndex *>(current_);
  assert(previous_);
  auto &previous = *reinterpret_cast<QModelIndex *>(previous_);
  fromPtr(thisObj)->currentChanged(current, previous);
}
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
// currentColumnChanged(const QModelIndex & current, const QModelIndex &
// previous)
void c_QItemSelectionModel__currentColumnChanged_QModelIndex_QModelIndex(
    void *thisObj, void *current_, void *previous_) {
  assert(current_);
  auto &current = *reinterpret_cast<QModelIndex *>(current_);
  assert(previous_);
  auto &previous = *reinterpret_cast<QModelIndex *>(previous_);
  fromPtr(thisObj)->currentColumnChanged(current, previous);
}
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
// currentIndex() const
void *c_QItemSelectionModel__currentIndex(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{
      fromPtr(thisObj)->currentIndex()};
  return result;
}
// currentRowChanged(const QModelIndex & current, const QModelIndex & previous)
void c_QItemSelectionModel__currentRowChanged_QModelIndex_QModelIndex(
    void *thisObj, void *current_, void *previous_) {
  assert(current_);
  auto &current = *reinterpret_cast<QModelIndex *>(current_);
  assert(previous_);
  auto &previous = *reinterpret_cast<QModelIndex *>(previous_);
  fromPtr(thisObj)->currentRowChanged(current, previous);
}
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
// customEvent(QEvent * event)
void c_QItemSelectionModel__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
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
// emitSelectionChanged(const QItemSelection & newSelection, const
// QItemSelection & oldSelection)
void c_QItemSelectionModel__emitSelectionChanged_QItemSelection_QItemSelection(
    void *thisObj, void *newSelection_, void *oldSelection_) {
  assert(newSelection_);
  auto &newSelection = *reinterpret_cast<QItemSelection *>(newSelection_);
  assert(oldSelection_);
  auto &oldSelection = *reinterpret_cast<QItemSelection *>(oldSelection_);
  fromWrapperPtr(thisObj)->emitSelectionChanged(newSelection, oldSelection);
}
// event(QEvent * event)
bool c_QItemSelectionModel__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QItemSelectionModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->event_nocallback(event);
    } else {
      return targetPtr->event(event);
    }
  }();
  return result;
}
// eventFilter(QObject * watched, QEvent * event)
bool c_QItemSelectionModel__eventFilter_QObject_QEvent(void *thisObj,
                                                       void *watched_,
                                                       void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QItemSelectionModel_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->eventFilter_nocallback(watched, event);
    } else {
      return targetPtr->eventFilter(watched, event);
    }
  }();
  return result;
}
// hasSelection() const
bool c_QItemSelectionModel__hasSelection(void *thisObj) {
  const auto &result = fromPtr(thisObj)->hasSelection();
  return result;
}
// isColumnSelected(int column, const QModelIndex & parent) const
bool c_QItemSelectionModel__isColumnSelected_int_QModelIndex(void *thisObj,
                                                             int column,
                                                             void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = fromPtr(thisObj)->isColumnSelected(column, parent);
  return result;
}
// isRowSelected(int row, const QModelIndex & parent) const
bool c_QItemSelectionModel__isRowSelected_int_QModelIndex(void *thisObj,
                                                          int row,
                                                          void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = fromPtr(thisObj)->isRowSelected(row, parent);
  return result;
}
// isSelected(const QModelIndex & index) const
bool c_QItemSelectionModel__isSelected_QModelIndex(void *thisObj,
                                                   void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = fromPtr(thisObj)->isSelected(index);
  return result;
}
// model()
void *c_QItemSelectionModel__model(void *thisObj) {
  const auto &result = fromPtr(thisObj)->model();
  return result;
}
// modelChanged(QAbstractItemModel * model)
void c_QItemSelectionModel__modelChanged_QAbstractItemModel(void *thisObj,
                                                            void *model_) {
  auto model = reinterpret_cast<QAbstractItemModel *>(model_);
  fromPtr(thisObj)->modelChanged(model);
}
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
// reset()
void c_QItemSelectionModel__reset(void *thisObj) {
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
// rowIntersectsSelection(int row, const QModelIndex & parent) const
bool c_QItemSelectionModel__rowIntersectsSelection_int_QModelIndex(
    void *thisObj, int row, void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = fromPtr(thisObj)->rowIntersectsSelection(row, parent);
  return result;
}
// select(const QItemSelection & selection,
// QFlags<QItemSelectionModel::SelectionFlag> command)
void c_QItemSelectionModel__select_QItemSelection_SelectionFlags(
    void *thisObj, void *selection_, int command_) {
  assert(selection_);
  auto &selection = *reinterpret_cast<QItemSelection *>(selection_);
  auto command =
      static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command_);
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
// select(const QModelIndex & index, QFlags<QItemSelectionModel::SelectionFlag>
// command)
void c_QItemSelectionModel__selectIndex_QModelIndex_SelectionFlags(
    void *thisObj, void *index_, int command_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  auto command =
      static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command_);
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
// selectedColumns(int row) const
void *c_QItemSelectionModel__selectedColumns_int(void *thisObj, int row) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QModelIndex>>{
      fromPtr(thisObj)->selectedColumns(row)};
  return result;
}
// selectedIndexes() const
void *c_QItemSelectionModel__selectedIndexes(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QModelIndex>>{
      fromPtr(thisObj)->selectedIndexes()};
  return result;
}
// selectedRows(int column) const
void *c_QItemSelectionModel__selectedRows_int(void *thisObj, int column) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QModelIndex>>{
      fromPtr(thisObj)->selectedRows(column)};
  return result;
}
// selection() const
void *c_QItemSelectionModel__selection(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<const QItemSelection>{
      fromPtr(thisObj)->selection()};
  return result;
}
// selectionChanged(const QItemSelection & selected, const QItemSelection &
// deselected)
void c_QItemSelectionModel__selectionChanged_QItemSelection_QItemSelection(
    void *thisObj, void *selected_, void *deselected_) {
  assert(selected_);
  auto &selected = *reinterpret_cast<QItemSelection *>(selected_);
  assert(deselected_);
  auto &deselected = *reinterpret_cast<QItemSelection *>(deselected_);
  fromPtr(thisObj)->selectionChanged(selected, deselected);
}
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
// setCurrentIndex(const QModelIndex & index,
// QFlags<QItemSelectionModel::SelectionFlag> command)
void c_QItemSelectionModel__setCurrentIndex_QModelIndex_SelectionFlags(
    void *thisObj, void *index_, int command_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  auto command =
      static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command_);
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
// setModel(QAbstractItemModel * model)
void c_QItemSelectionModel__setModel_QAbstractItemModel(void *thisObj,
                                                        void *model_) {
  auto model = reinterpret_cast<QAbstractItemModel *>(model_);
  fromPtr(thisObj)->setModel(model);
}
// tr(const char * s, const char * c, int n)
void *c_static_QItemSelectionModel__tr_char_char_int(const char *s,
                                                     const char *c, int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QItemSelectionModel_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
void c_QItemSelectionModel__destructor(void *thisObj) {
  delete fromPtr(thisObj);
}
void c_QItemSelectionModel__registerVirtualMethodCallback(void *ptr,
                                                          void *callback,
                                                          int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 3298:
    wrapper->m_clearCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QItemSelectionModel_wrapper::Callback_clear>(
        callback);
    break;
  case 3299:
    wrapper->m_clearCurrentIndexCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QItemSelectionModel_wrapper::
            Callback_clearCurrentIndex>(callback);
    break;
  case 946:
    wrapper->m_customEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QItemSelectionModel_wrapper::Callback_customEvent>(
            callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QItemSelectionModel_wrapper::Callback_event>(
        callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QItemSelectionModel_wrapper::Callback_eventFilter>(
            callback);
    break;
  case 3334:
    wrapper->m_resetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QItemSelectionModel_wrapper::Callback_reset>(
        callback);
    break;
  case 3336:
    wrapper->m_selectCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QItemSelectionModel_wrapper::Callback_select>(
            callback);
    break;
  case 3337:
    wrapper->m_selectIndexCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QItemSelectionModel_wrapper::Callback_selectIndex>(
            callback);
    break;
  case 3345:
    wrapper->m_setCurrentIndexCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QItemSelectionModel_wrapper::
            Callback_setCurrentIndex>(callback);
    break;
  }
}
}
