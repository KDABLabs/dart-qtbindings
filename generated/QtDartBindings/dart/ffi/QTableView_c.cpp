/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QTableView_c.h"

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
QTableView_wrapper::QTableView_wrapper(QWidget *parent)
    : ::QTableView(parent) {}
void QTableView_wrapper::changeEvent(QEvent *arg__1) {
  if (m_changeEventCallback) {
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QTableView::changeEvent(arg__1);
  }
}
void QTableView_wrapper::changeEvent_nocallback(QEvent *arg__1) {
  ::QTableView::changeEvent(arg__1);
}
void QTableView_wrapper::clearSpans() { ::QTableView::clearSpans(); }
int QTableView_wrapper::columnAt(int x) const {
  return ::QTableView::columnAt(x);
}
void QTableView_wrapper::columnCountChanged(int oldCount, int newCount) {
  ::QTableView::columnCountChanged(oldCount, newCount);
}
void QTableView_wrapper::columnMoved(int column, int oldIndex, int newIndex) {
  ::QTableView::columnMoved(column, oldIndex, newIndex);
}
void QTableView_wrapper::columnResized(int column, int oldWidth, int newWidth) {
  ::QTableView::columnResized(column, oldWidth, newWidth);
}
int QTableView_wrapper::columnSpan(int row, int column) const {
  return ::QTableView::columnSpan(row, column);
}
int QTableView_wrapper::columnViewportPosition(int column) const {
  return ::QTableView::columnViewportPosition(column);
}
int QTableView_wrapper::columnWidth(int column) const {
  return ::QTableView::columnWidth(column);
}
void QTableView_wrapper::commitData(QWidget *editor) {
  if (m_commitDataCallback) {
    const void *thisPtr = this;
    m_commitDataCallback(const_cast<void *>(thisPtr), editor);
  } else {
    ::QTableView::commitData(editor);
  }
}
void QTableView_wrapper::commitData_nocallback(QWidget *editor) {
  ::QTableView::commitData(editor);
}
void QTableView_wrapper::currentChanged(const QModelIndex &current,
                                        const QModelIndex &previous) {
  if (m_currentChangedCallback) {
    const void *thisPtr = this;
    m_currentChangedCallback(const_cast<void *>(thisPtr), current, previous);
  } else {
    ::QTableView::currentChanged(current, previous);
  }
}
void QTableView_wrapper::currentChanged_nocallback(
    const QModelIndex &current, const QModelIndex &previous) {
  ::QTableView::currentChanged(current, previous);
}
void QTableView_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QTableView::customEvent(event);
  }
}
void QTableView_wrapper::customEvent_nocallback(QEvent *event) {
  ::QTableView::customEvent(event);
}
void QTableView_wrapper::dataChanged(const QModelIndex &topLeft,
                                     const QModelIndex &bottomRight,
                                     const QList<int> &roles) {
  if (m_dataChangedCallback) {
    const void *thisPtr = this;
    m_dataChangedCallback(const_cast<void *>(thisPtr), topLeft, bottomRight,
                          roles);
  } else {
    ::QTableView::dataChanged(topLeft, bottomRight, roles);
  }
}
void QTableView_wrapper::dataChanged_nocallback(const QModelIndex &topLeft,
                                                const QModelIndex &bottomRight,
                                                const QList<int> &roles) {
  ::QTableView::dataChanged(topLeft, bottomRight, roles);
}
int QTableView_wrapper::devType() const {
  if (m_devTypeCallback) {
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QTableView::devType();
  }
}
int QTableView_wrapper::devType_nocallback() const {
  return ::QTableView::devType();
}
void QTableView_wrapper::doItemsLayout() {
  if (m_doItemsLayoutCallback) {
    const void *thisPtr = this;
    m_doItemsLayoutCallback(const_cast<void *>(thisPtr));
  } else {
    ::QTableView::doItemsLayout();
  }
}
void QTableView_wrapper::doItemsLayout_nocallback() {
  ::QTableView::doItemsLayout();
}
void QTableView_wrapper::editorDestroyed(QObject *editor) {
  if (m_editorDestroyedCallback) {
    const void *thisPtr = this;
    m_editorDestroyedCallback(const_cast<void *>(thisPtr), editor);
  } else {
    ::QTableView::editorDestroyed(editor);
  }
}
void QTableView_wrapper::editorDestroyed_nocallback(QObject *editor) {
  ::QTableView::editorDestroyed(editor);
}
bool QTableView_wrapper::event(QEvent *event) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    return ::QTableView::event(event);
  }
}
bool QTableView_wrapper::event_nocallback(QEvent *event) {
  return ::QTableView::event(event);
}
bool QTableView_wrapper::eventFilter(QObject *object, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), object, event);
  } else {
    return ::QTableView::eventFilter(object, event);
  }
}
bool QTableView_wrapper::eventFilter_nocallback(QObject *object,
                                                QEvent *event) {
  return ::QTableView::eventFilter(object, event);
}
bool QTableView_wrapper::focusNextPrevChild(bool next) {
  if (m_focusNextPrevChildCallback) {
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    return ::QTableView::focusNextPrevChild(next);
  }
}
bool QTableView_wrapper::focusNextPrevChild_nocallback(bool next) {
  return ::QTableView::focusNextPrevChild(next);
}
bool QTableView_wrapper::hasHeightForWidth() const {
  if (m_hasHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QTableView::hasHeightForWidth();
  }
}
bool QTableView_wrapper::hasHeightForWidth_nocallback() const {
  return ::QTableView::hasHeightForWidth();
}
int QTableView_wrapper::heightForWidth(int arg__1) const {
  if (m_heightForWidthCallback) {
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QTableView::heightForWidth(arg__1);
  }
}
int QTableView_wrapper::heightForWidth_nocallback(int arg__1) const {
  return ::QTableView::heightForWidth(arg__1);
}
void QTableView_wrapper::hideColumn(int column) {
  ::QTableView::hideColumn(column);
}
void QTableView_wrapper::hideRow(int row) { ::QTableView::hideRow(row); }
int QTableView_wrapper::horizontalOffset() const {
  if (m_horizontalOffsetCallback) {
    const void *thisPtr = this;
    return m_horizontalOffsetCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QTableView::horizontalOffset();
  }
}
int QTableView_wrapper::horizontalOffset_nocallback() const {
  return ::QTableView::horizontalOffset();
}
void QTableView_wrapper::horizontalScrollbarAction(int action) {
  if (m_horizontalScrollbarActionCallback) {
    const void *thisPtr = this;
    m_horizontalScrollbarActionCallback(const_cast<void *>(thisPtr), action);
  } else {
    ::QTableView::horizontalScrollbarAction(action);
  }
}
void QTableView_wrapper::horizontalScrollbarAction_nocallback(int action) {
  ::QTableView::horizontalScrollbarAction(action);
}
void QTableView_wrapper::horizontalScrollbarValueChanged(int value) {
  if (m_horizontalScrollbarValueChangedCallback) {
    const void *thisPtr = this;
    m_horizontalScrollbarValueChangedCallback(const_cast<void *>(thisPtr),
                                              value);
  } else {
    ::QTableView::horizontalScrollbarValueChanged(value);
  }
}
void QTableView_wrapper::horizontalScrollbarValueChanged_nocallback(int value) {
  ::QTableView::horizontalScrollbarValueChanged(value);
}
QModelIndex QTableView_wrapper::indexAt(const QPoint &p) const {
  if (m_indexAtCallback) {
    const void *thisPtr = this;
    return *m_indexAtCallback(const_cast<void *>(thisPtr), p);
  } else {
    return ::QTableView::indexAt(p);
  }
}
QModelIndex QTableView_wrapper::indexAt_nocallback(const QPoint &p) const {
  return ::QTableView::indexAt(p);
}
void QTableView_wrapper::initPainter(QPainter *painter) const {
  if (m_initPainterCallback) {
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    ::QTableView::initPainter(painter);
  }
}
void QTableView_wrapper::initPainter_nocallback(QPainter *painter) const {
  ::QTableView::initPainter(painter);
}
bool QTableView_wrapper::isColumnHidden(int column) const {
  return ::QTableView::isColumnHidden(column);
}
bool QTableView_wrapper::isCornerButtonEnabled() const {
  return ::QTableView::isCornerButtonEnabled();
}
bool QTableView_wrapper::isIndexHidden(const QModelIndex &index) const {
  if (m_isIndexHiddenCallback) {
    const void *thisPtr = this;
    return m_isIndexHiddenCallback(const_cast<void *>(thisPtr), index);
  } else {
    return ::QTableView::isIndexHidden(index);
  }
}
bool QTableView_wrapper::isIndexHidden_nocallback(
    const QModelIndex &index) const {
  return ::QTableView::isIndexHidden(index);
}
bool QTableView_wrapper::isRowHidden(int row) const {
  return ::QTableView::isRowHidden(row);
}
bool QTableView_wrapper::isSortingEnabled() const {
  return ::QTableView::isSortingEnabled();
}
void QTableView_wrapper::keyboardSearch(const QString &search) {
  if (m_keyboardSearchCallback) {
    const void *thisPtr = this;
    m_keyboardSearchCallback(const_cast<void *>(thisPtr), search);
  } else {
    ::QTableView::keyboardSearch(search);
  }
}
void QTableView_wrapper::keyboardSearch_nocallback(const QString &search) {
  ::QTableView::keyboardSearch(search);
}
void QTableView_wrapper::leaveEvent(QEvent *event) {
  if (m_leaveEventCallback) {
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QTableView::leaveEvent(event);
  }
}
void QTableView_wrapper::leaveEvent_nocallback(QEvent *event) {
  ::QTableView::leaveEvent(event);
}
QSize QTableView_wrapper::minimumSizeHint() const {
  if (m_minimumSizeHintCallback) {
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QTableView::minimumSizeHint();
  }
}
QSize QTableView_wrapper::minimumSizeHint_nocallback() const {
  return ::QTableView::minimumSizeHint();
}
void QTableView_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  if (m_mouseDoubleClickEventCallback) {
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QTableView::mouseDoubleClickEvent(event);
  }
}
void QTableView_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *event) {
  ::QTableView::mouseDoubleClickEvent(event);
}
void QTableView_wrapper::mouseMoveEvent(QMouseEvent *event) {
  if (m_mouseMoveEventCallback) {
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QTableView::mouseMoveEvent(event);
  }
}
void QTableView_wrapper::mouseMoveEvent_nocallback(QMouseEvent *event) {
  ::QTableView::mouseMoveEvent(event);
}
void QTableView_wrapper::mousePressEvent(QMouseEvent *event) {
  if (m_mousePressEventCallback) {
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QTableView::mousePressEvent(event);
  }
}
void QTableView_wrapper::mousePressEvent_nocallback(QMouseEvent *event) {
  ::QTableView::mousePressEvent(event);
}
void QTableView_wrapper::mouseReleaseEvent(QMouseEvent *event) {
  if (m_mouseReleaseEventCallback) {
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QTableView::mouseReleaseEvent(event);
  }
}
void QTableView_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *event) {
  ::QTableView::mouseReleaseEvent(event);
}
QModelIndex
QTableView_wrapper::moveCursor(QAbstractItemView::CursorAction cursorAction,
                               QFlags<Qt::KeyboardModifier> modifiers) {
  if (m_moveCursorCallback) {
    const void *thisPtr = this;
    return *m_moveCursorCallback(const_cast<void *>(thisPtr), cursorAction,
                                 modifiers);
  } else {
    return ::QTableView::moveCursor(cursorAction, modifiers);
  }
}
QModelIndex QTableView_wrapper::moveCursor_nocallback(
    QAbstractItemView::CursorAction cursorAction,
    QFlags<Qt::KeyboardModifier> modifiers) {
  return ::QTableView::moveCursor(cursorAction, modifiers);
}
void QTableView_wrapper::paintEvent(QPaintEvent *e) {
  if (m_paintEventCallback) {
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    ::QTableView::paintEvent(e);
  }
}
void QTableView_wrapper::paintEvent_nocallback(QPaintEvent *e) {
  ::QTableView::paintEvent(e);
}
void QTableView_wrapper::reset() {
  if (m_resetCallback) {
    const void *thisPtr = this;
    m_resetCallback(const_cast<void *>(thisPtr));
  } else {
    ::QTableView::reset();
  }
}
void QTableView_wrapper::reset_nocallback() { ::QTableView::reset(); }
void QTableView_wrapper::resizeColumnToContents(int column) {
  ::QTableView::resizeColumnToContents(column);
}
void QTableView_wrapper::resizeColumnsToContents() {
  ::QTableView::resizeColumnsToContents();
}
void QTableView_wrapper::resizeRowToContents(int row) {
  ::QTableView::resizeRowToContents(row);
}
void QTableView_wrapper::resizeRowsToContents() {
  ::QTableView::resizeRowsToContents();
}
int QTableView_wrapper::rowAt(int y) const { return ::QTableView::rowAt(y); }
void QTableView_wrapper::rowCountChanged(int oldCount, int newCount) {
  ::QTableView::rowCountChanged(oldCount, newCount);
}
int QTableView_wrapper::rowHeight(int row) const {
  return ::QTableView::rowHeight(row);
}
void QTableView_wrapper::rowMoved(int row, int oldIndex, int newIndex) {
  ::QTableView::rowMoved(row, oldIndex, newIndex);
}
void QTableView_wrapper::rowResized(int row, int oldHeight, int newHeight) {
  ::QTableView::rowResized(row, oldHeight, newHeight);
}
int QTableView_wrapper::rowSpan(int row, int column) const {
  return ::QTableView::rowSpan(row, column);
}
int QTableView_wrapper::rowViewportPosition(int row) const {
  return ::QTableView::rowViewportPosition(row);
}
void QTableView_wrapper::rowsAboutToBeRemoved(const QModelIndex &parent,
                                              int start, int end) {
  if (m_rowsAboutToBeRemovedCallback) {
    const void *thisPtr = this;
    m_rowsAboutToBeRemovedCallback(const_cast<void *>(thisPtr), parent, start,
                                   end);
  } else {
    ::QTableView::rowsAboutToBeRemoved(parent, start, end);
  }
}
void QTableView_wrapper::rowsAboutToBeRemoved_nocallback(
    const QModelIndex &parent, int start, int end) {
  ::QTableView::rowsAboutToBeRemoved(parent, start, end);
}
void QTableView_wrapper::rowsInserted(const QModelIndex &parent, int start,
                                      int end) {
  if (m_rowsInsertedCallback) {
    const void *thisPtr = this;
    m_rowsInsertedCallback(const_cast<void *>(thisPtr), parent, start, end);
  } else {
    ::QTableView::rowsInserted(parent, start, end);
  }
}
void QTableView_wrapper::rowsInserted_nocallback(const QModelIndex &parent,
                                                 int start, int end) {
  ::QTableView::rowsInserted(parent, start, end);
}
void QTableView_wrapper::scrollContentsBy(int dx, int dy) {
  if (m_scrollContentsByCallback) {
    const void *thisPtr = this;
    m_scrollContentsByCallback(const_cast<void *>(thisPtr), dx, dy);
  } else {
    ::QTableView::scrollContentsBy(dx, dy);
  }
}
void QTableView_wrapper::scrollContentsBy_nocallback(int dx, int dy) {
  ::QTableView::scrollContentsBy(dx, dy);
}
void QTableView_wrapper::scrollTo(const QModelIndex &index,
                                  QAbstractItemView::ScrollHint hint) {
  if (m_scrollToCallback) {
    const void *thisPtr = this;
    m_scrollToCallback(const_cast<void *>(thisPtr), index, hint);
  } else {
    ::QTableView::scrollTo(index, hint);
  }
}
void QTableView_wrapper::scrollTo_nocallback(
    const QModelIndex &index, QAbstractItemView::ScrollHint hint) {
  ::QTableView::scrollTo(index, hint);
}
void QTableView_wrapper::selectAll() {
  if (m_selectAllCallback) {
    const void *thisPtr = this;
    m_selectAllCallback(const_cast<void *>(thisPtr));
  } else {
    ::QTableView::selectAll();
  }
}
void QTableView_wrapper::selectAll_nocallback() { ::QTableView::selectAll(); }
void QTableView_wrapper::selectColumn(int column) {
  ::QTableView::selectColumn(column);
}
void QTableView_wrapper::selectRow(int row) { ::QTableView::selectRow(row); }
QList<QModelIndex> QTableView_wrapper::selectedIndexes() const {
  if (m_selectedIndexesCallback) {
    const void *thisPtr = this;
    return *m_selectedIndexesCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QTableView::selectedIndexes();
  }
}
QList<QModelIndex> QTableView_wrapper::selectedIndexes_nocallback() const {
  return ::QTableView::selectedIndexes();
}
void QTableView_wrapper::selectionChanged(const QItemSelection &selected,
                                          const QItemSelection &deselected) {
  if (m_selectionChangedCallback) {
    const void *thisPtr = this;
    m_selectionChangedCallback(const_cast<void *>(thisPtr), selected,
                               deselected);
  } else {
    ::QTableView::selectionChanged(selected, deselected);
  }
}
void QTableView_wrapper::selectionChanged_nocallback(
    const QItemSelection &selected, const QItemSelection &deselected) {
  ::QTableView::selectionChanged(selected, deselected);
}
QFlags<QItemSelectionModel::SelectionFlag>
QTableView_wrapper::selectionCommand(const QModelIndex &index,
                                     const QEvent *event) const {
  if (m_selectionCommandCallback) {
    const void *thisPtr = this;
    return m_selectionCommandCallback(const_cast<void *>(thisPtr), index,
                                      event);
  } else {
    return ::QTableView::selectionCommand(index, event);
  }
}
QFlags<QItemSelectionModel::SelectionFlag>
QTableView_wrapper::selectionCommand_nocallback(const QModelIndex &index,
                                                const QEvent *event) const {
  return ::QTableView::selectionCommand(index, event);
}
void QTableView_wrapper::setColumnHidden(int column, bool hide) {
  ::QTableView::setColumnHidden(column, hide);
}
void QTableView_wrapper::setColumnWidth(int column, int width) {
  ::QTableView::setColumnWidth(column, width);
}
void QTableView_wrapper::setCornerButtonEnabled(bool enable) {
  ::QTableView::setCornerButtonEnabled(enable);
}
void QTableView_wrapper::setModel(QAbstractItemModel *model) {
  if (m_setModelCallback) {
    const void *thisPtr = this;
    m_setModelCallback(const_cast<void *>(thisPtr), model);
  } else {
    ::QTableView::setModel(model);
  }
}
void QTableView_wrapper::setModel_nocallback(QAbstractItemModel *model) {
  ::QTableView::setModel(model);
}
void QTableView_wrapper::setRootIndex(const QModelIndex &index) {
  if (m_setRootIndexCallback) {
    const void *thisPtr = this;
    m_setRootIndexCallback(const_cast<void *>(thisPtr), index);
  } else {
    ::QTableView::setRootIndex(index);
  }
}
void QTableView_wrapper::setRootIndex_nocallback(const QModelIndex &index) {
  ::QTableView::setRootIndex(index);
}
void QTableView_wrapper::setRowHeight(int row, int height) {
  ::QTableView::setRowHeight(row, height);
}
void QTableView_wrapper::setRowHidden(int row, bool hide) {
  ::QTableView::setRowHidden(row, hide);
}
void QTableView_wrapper::setSelection(
    const QRect &rect, QFlags<QItemSelectionModel::SelectionFlag> command) {
  if (m_setSelectionCallback) {
    const void *thisPtr = this;
    m_setSelectionCallback(const_cast<void *>(thisPtr), rect, command);
  } else {
    ::QTableView::setSelection(rect, command);
  }
}
void QTableView_wrapper::setSelection_nocallback(
    const QRect &rect, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ::QTableView::setSelection(rect, command);
}
void QTableView_wrapper::setSelectionModel(
    QItemSelectionModel *selectionModel) {
  if (m_setSelectionModelCallback) {
    const void *thisPtr = this;
    m_setSelectionModelCallback(const_cast<void *>(thisPtr), selectionModel);
  } else {
    ::QTableView::setSelectionModel(selectionModel);
  }
}
void QTableView_wrapper::setSelectionModel_nocallback(
    QItemSelectionModel *selectionModel) {
  ::QTableView::setSelectionModel(selectionModel);
}
void QTableView_wrapper::setShowGrid(bool show) {
  ::QTableView::setShowGrid(show);
}
void QTableView_wrapper::setSortingEnabled(bool enable) {
  ::QTableView::setSortingEnabled(enable);
}
void QTableView_wrapper::setSpan(int row, int column, int rowSpan,
                                 int columnSpan) {
  ::QTableView::setSpan(row, column, rowSpan, columnSpan);
}
void QTableView_wrapper::setVisible(bool visible) {
  if (m_setVisibleCallback) {
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    ::QTableView::setVisible(visible);
  }
}
void QTableView_wrapper::setVisible_nocallback(bool visible) {
  ::QTableView::setVisible(visible);
}
void QTableView_wrapper::setWordWrap(bool on) { ::QTableView::setWordWrap(on); }
void QTableView_wrapper::setupViewport(QWidget *viewport) {
  if (m_setupViewportCallback) {
    const void *thisPtr = this;
    m_setupViewportCallback(const_cast<void *>(thisPtr), viewport);
  } else {
    ::QTableView::setupViewport(viewport);
  }
}
void QTableView_wrapper::setupViewport_nocallback(QWidget *viewport) {
  ::QTableView::setupViewport(viewport);
}
QPainter *QTableView_wrapper::sharedPainter() const {
  if (m_sharedPainterCallback) {
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QTableView::sharedPainter();
  }
}
QPainter *QTableView_wrapper::sharedPainter_nocallback() const {
  return ::QTableView::sharedPainter();
}
void QTableView_wrapper::showColumn(int column) {
  ::QTableView::showColumn(column);
}
bool QTableView_wrapper::showGrid() const { return ::QTableView::showGrid(); }
void QTableView_wrapper::showRow(int row) { ::QTableView::showRow(row); }
QSize QTableView_wrapper::sizeHint() const {
  if (m_sizeHintCallback) {
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QTableView::sizeHint();
  }
}
QSize QTableView_wrapper::sizeHint_nocallback() const {
  return ::QTableView::sizeHint();
}
int QTableView_wrapper::sizeHintForColumn(int column) const {
  if (m_sizeHintForColumnCallback) {
    const void *thisPtr = this;
    return m_sizeHintForColumnCallback(const_cast<void *>(thisPtr), column);
  } else {
    return ::QTableView::sizeHintForColumn(column);
  }
}
int QTableView_wrapper::sizeHintForColumn_nocallback(int column) const {
  return ::QTableView::sizeHintForColumn(column);
}
int QTableView_wrapper::sizeHintForRow(int row) const {
  if (m_sizeHintForRowCallback) {
    const void *thisPtr = this;
    return m_sizeHintForRowCallback(const_cast<void *>(thisPtr), row);
  } else {
    return ::QTableView::sizeHintForRow(row);
  }
}
int QTableView_wrapper::sizeHintForRow_nocallback(int row) const {
  return ::QTableView::sizeHintForRow(row);
}
void QTableView_wrapper::sortByColumn(int column, Qt::SortOrder order) {
  ::QTableView::sortByColumn(column, order);
}
QString QTableView_wrapper::tr(const char *s, const char *c, int n) {
  return ::QTableView::tr(s, c, n);
}
void QTableView_wrapper::updateEditorData() {
  if (m_updateEditorDataCallback) {
    const void *thisPtr = this;
    m_updateEditorDataCallback(const_cast<void *>(thisPtr));
  } else {
    ::QTableView::updateEditorData();
  }
}
void QTableView_wrapper::updateEditorData_nocallback() {
  ::QTableView::updateEditorData();
}
void QTableView_wrapper::updateEditorGeometries() {
  if (m_updateEditorGeometriesCallback) {
    const void *thisPtr = this;
    m_updateEditorGeometriesCallback(const_cast<void *>(thisPtr));
  } else {
    ::QTableView::updateEditorGeometries();
  }
}
void QTableView_wrapper::updateEditorGeometries_nocallback() {
  ::QTableView::updateEditorGeometries();
}
void QTableView_wrapper::updateGeometries() {
  if (m_updateGeometriesCallback) {
    const void *thisPtr = this;
    m_updateGeometriesCallback(const_cast<void *>(thisPtr));
  } else {
    ::QTableView::updateGeometries();
  }
}
void QTableView_wrapper::updateGeometries_nocallback() {
  ::QTableView::updateGeometries();
}
int QTableView_wrapper::verticalOffset() const {
  if (m_verticalOffsetCallback) {
    const void *thisPtr = this;
    return m_verticalOffsetCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QTableView::verticalOffset();
  }
}
int QTableView_wrapper::verticalOffset_nocallback() const {
  return ::QTableView::verticalOffset();
}
void QTableView_wrapper::verticalScrollbarAction(int action) {
  if (m_verticalScrollbarActionCallback) {
    const void *thisPtr = this;
    m_verticalScrollbarActionCallback(const_cast<void *>(thisPtr), action);
  } else {
    ::QTableView::verticalScrollbarAction(action);
  }
}
void QTableView_wrapper::verticalScrollbarAction_nocallback(int action) {
  ::QTableView::verticalScrollbarAction(action);
}
void QTableView_wrapper::verticalScrollbarValueChanged(int value) {
  if (m_verticalScrollbarValueChangedCallback) {
    const void *thisPtr = this;
    m_verticalScrollbarValueChangedCallback(const_cast<void *>(thisPtr), value);
  } else {
    ::QTableView::verticalScrollbarValueChanged(value);
  }
}
void QTableView_wrapper::verticalScrollbarValueChanged_nocallback(int value) {
  ::QTableView::verticalScrollbarValueChanged(value);
}
bool QTableView_wrapper::viewportEvent(QEvent *event) {
  if (m_viewportEventCallback) {
    const void *thisPtr = this;
    return m_viewportEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    return ::QTableView::viewportEvent(event);
  }
}
bool QTableView_wrapper::viewportEvent_nocallback(QEvent *event) {
  return ::QTableView::viewportEvent(event);
}
QSize QTableView_wrapper::viewportSizeHint() const {
  if (m_viewportSizeHintCallback) {
    const void *thisPtr = this;
    return *m_viewportSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QTableView::viewportSizeHint();
  }
}
QSize QTableView_wrapper::viewportSizeHint_nocallback() const {
  return ::QTableView::viewportSizeHint();
}
QRect QTableView_wrapper::visualRect(const QModelIndex &index) const {
  if (m_visualRectCallback) {
    const void *thisPtr = this;
    return *m_visualRectCallback(const_cast<void *>(thisPtr), index);
  } else {
    return ::QTableView::visualRect(index);
  }
}
QRect QTableView_wrapper::visualRect_nocallback(
    const QModelIndex &index) const {
  return ::QTableView::visualRect(index);
}
QRegion QTableView_wrapper::visualRegionForSelection(
    const QItemSelection &selection) const {
  if (m_visualRegionForSelectionCallback) {
    const void *thisPtr = this;
    return *m_visualRegionForSelectionCallback(const_cast<void *>(thisPtr),
                                               selection);
  } else {
    return ::QTableView::visualRegionForSelection(selection);
  }
}
QRegion QTableView_wrapper::visualRegionForSelection_nocallback(
    const QItemSelection &selection) const {
  return ::QTableView::visualRegionForSelection(selection);
}
bool QTableView_wrapper::wordWrap() const { return ::QTableView::wordWrap(); }
QTableView_wrapper::~QTableView_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QTableView *fromPtr(void *ptr) {
  return reinterpret_cast<QTableView *>(ptr);
}
static QtDartBindings_wrappersNS::QTableView_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper *>(ptr);
}
extern "C" {
void c_QTableView_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper *>(
      cppObj);
}
void *c_QTableView__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QTableView_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
void c_QTableView__onActivated_QModelIndex(void *thisObj, void *contextQObject,
                                           void *callback) {
  auto instance = reinterpret_cast<QTableView *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QTableView::activated,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// changeEvent(QEvent * arg__1)
void c_QTableView__changeEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->changeEvent_nocallback(arg__1);
}
// clearSpans()
void c_QTableView__clearSpans(void *thisObj) { fromPtr(thisObj)->clearSpans(); }
void c_QTableView__onClicked_QModelIndex(void *thisObj, void *contextQObject,
                                         void *callback) {
  auto instance = reinterpret_cast<QTableView *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QTableView::clicked, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// columnAt(int x) const
int c_QTableView__columnAt_int(void *thisObj, int x) {
  const auto &result = fromPtr(thisObj)->columnAt(x);
  return result;
}
// columnCountChanged(int oldCount, int newCount)
void c_QTableView__columnCountChanged_int_int(void *thisObj, int oldCount,
                                              int newCount) {
  fromWrapperPtr(thisObj)->columnCountChanged(oldCount, newCount);
}
// columnMoved(int column, int oldIndex, int newIndex)
void c_QTableView__columnMoved_int_int_int(void *thisObj, int column,
                                           int oldIndex, int newIndex) {
  fromWrapperPtr(thisObj)->columnMoved(column, oldIndex, newIndex);
}
// columnResized(int column, int oldWidth, int newWidth)
void c_QTableView__columnResized_int_int_int(void *thisObj, int column,
                                             int oldWidth, int newWidth) {
  fromWrapperPtr(thisObj)->columnResized(column, oldWidth, newWidth);
}
// columnSpan(int row, int column) const
int c_QTableView__columnSpan_int_int(void *thisObj, int row, int column) {
  const auto &result = fromPtr(thisObj)->columnSpan(row, column);
  return result;
}
// columnViewportPosition(int column) const
int c_QTableView__columnViewportPosition_int(void *thisObj, int column) {
  const auto &result = fromPtr(thisObj)->columnViewportPosition(column);
  return result;
}
// columnWidth(int column) const
int c_QTableView__columnWidth_int(void *thisObj, int column) {
  const auto &result = fromPtr(thisObj)->columnWidth(column);
  return result;
}
// commitData(QWidget * editor)
void c_QTableView__commitData_QWidget(void *thisObj, void *editor_) {
  auto editor = reinterpret_cast<QWidget *>(editor_);
  fromWrapperPtr(thisObj)->commitData_nocallback(editor);
}
// currentChanged(const QModelIndex & current, const QModelIndex & previous)
void c_QTableView__currentChanged_QModelIndex_QModelIndex(void *thisObj,
                                                          void *current_,
                                                          void *previous_) {
  assert(current_);
  auto &current = *reinterpret_cast<QModelIndex *>(current_);
  assert(previous_);
  auto &previous = *reinterpret_cast<QModelIndex *>(previous_);
  fromWrapperPtr(thisObj)->currentChanged_nocallback(current, previous);
}
// customEvent(QEvent * event)
void c_QTableView__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// dataChanged(const QModelIndex & topLeft, const QModelIndex & bottomRight,
// const QList<int > & roles)
void c_QTableView__dataChanged_QModelIndex_QModelIndex_QList_int(
    void *thisObj, void *topLeft_, void *bottomRight_, void *roles_) {
  assert(topLeft_);
  auto &topLeft = *reinterpret_cast<QModelIndex *>(topLeft_);
  assert(bottomRight_);
  auto &bottomRight = *reinterpret_cast<QModelIndex *>(bottomRight_);
  assert(roles_);
  auto &roles = *reinterpret_cast<QList<int> *>(roles_);
  fromWrapperPtr(thisObj)->dataChanged_nocallback(topLeft, bottomRight, roles);
}
// devType() const
int c_QTableView__devType(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTableView_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->devType_nocallback();
    } else {
      return targetPtr->devType();
    }
  }();
  return result;
}
// doItemsLayout()
void c_QTableView__doItemsLayout(void *thisObj) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTableView_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->doItemsLayout_nocallback();
    } else {
      return targetPtr->doItemsLayout();
    }
  }();
}
void c_QTableView__onDoubleClicked_QModelIndex(void *thisObj,
                                               void *contextQObject,
                                               void *callback) {
  auto instance = reinterpret_cast<QTableView *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QTableView::doubleClicked,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// editorDestroyed(QObject * editor)
void c_QTableView__editorDestroyed_QObject(void *thisObj, void *editor_) {
  auto editor = reinterpret_cast<QObject *>(editor_);
  fromWrapperPtr(thisObj)->editorDestroyed_nocallback(editor);
}
void c_QTableView__onEntered_QModelIndex(void *thisObj, void *contextQObject,
                                         void *callback) {
  auto instance = reinterpret_cast<QTableView *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QTableView::entered, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// event(QEvent * event)
bool c_QTableView__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = fromWrapperPtr(thisObj)->event_nocallback(event);
  return result;
}
// eventFilter(QObject * object, QEvent * event)
bool c_QTableView__eventFilter_QObject_QEvent(void *thisObj, void *object_,
                                              void *event_) {
  auto object = reinterpret_cast<QObject *>(object_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result =
      fromWrapperPtr(thisObj)->eventFilter_nocallback(object, event);
  return result;
}
// focusNextPrevChild(bool next)
bool c_QTableView__focusNextPrevChild_bool(void *thisObj, bool next) {
  const auto &result =
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
  return result;
}
// hasHeightForWidth() const
bool c_QTableView__hasHeightForWidth(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTableView_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->hasHeightForWidth_nocallback();
    } else {
      return targetPtr->hasHeightForWidth();
    }
  }();
  return result;
}
// heightForWidth(int arg__1) const
int c_QTableView__heightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTableView_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->heightForWidth_nocallback(arg__1);
    } else {
      return targetPtr->heightForWidth(arg__1);
    }
  }();
  return result;
}
// hideColumn(int column)
void c_QTableView__hideColumn_int(void *thisObj, int column) {
  fromPtr(thisObj)->hideColumn(column);
}
// hideRow(int row)
void c_QTableView__hideRow_int(void *thisObj, int row) {
  fromPtr(thisObj)->hideRow(row);
}
// horizontalOffset() const
int c_QTableView__horizontalOffset(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->horizontalOffset_nocallback();
  return result;
}
// horizontalScrollbarAction(int action)
void c_QTableView__horizontalScrollbarAction_int(void *thisObj, int action) {
  fromWrapperPtr(thisObj)->horizontalScrollbarAction_nocallback(action);
}
// horizontalScrollbarValueChanged(int value)
void c_QTableView__horizontalScrollbarValueChanged_int(void *thisObj,
                                                       int value) {
  fromWrapperPtr(thisObj)->horizontalScrollbarValueChanged_nocallback(value);
}
void c_QTableView__onIconSizeChanged_QSize(void *thisObj, void *contextQObject,
                                           void *callback) {
  auto instance = reinterpret_cast<QTableView *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QTableView::iconSizeChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// indexAt(const QPoint & p) const
void *c_QTableView__indexAt_QPoint(void *thisObj, void *p_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPoint *>(p_);
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTableView_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->indexAt_nocallback(p);
    } else {
      return targetPtr->indexAt(p);
    }
  }()};
  return result;
}
// initPainter(QPainter * painter) const
void c_QTableView__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}
// isColumnHidden(int column) const
bool c_QTableView__isColumnHidden_int(void *thisObj, int column) {
  const auto &result = fromPtr(thisObj)->isColumnHidden(column);
  return result;
}
// isCornerButtonEnabled() const
bool c_QTableView__isCornerButtonEnabled(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isCornerButtonEnabled();
  return result;
}
// isIndexHidden(const QModelIndex & index) const
bool c_QTableView__isIndexHidden_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = fromWrapperPtr(thisObj)->isIndexHidden_nocallback(index);
  return result;
}
// isRowHidden(int row) const
bool c_QTableView__isRowHidden_int(void *thisObj, int row) {
  const auto &result = fromPtr(thisObj)->isRowHidden(row);
  return result;
}
// isSortingEnabled() const
bool c_QTableView__isSortingEnabled(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isSortingEnabled();
  return result;
}
// keyboardSearch(const QString & search)
void c_QTableView__keyboardSearch_QString(void *thisObj, const char *search_) {
  const auto search = QString::fromUtf8(search_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTableView_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->keyboardSearch_nocallback(search);
    } else {
      return targetPtr->keyboardSearch(search);
    }
  }();
  free((char *)search_);
}
// leaveEvent(QEvent * event)
void c_QTableView__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}
// minimumSizeHint() const
void *c_QTableView__minimumSizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTableView_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->minimumSizeHint_nocallback();
    } else {
      return targetPtr->minimumSizeHint();
    }
  }()};
  return result;
}
// mouseDoubleClickEvent(QMouseEvent * event)
void c_QTableView__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                     void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}
// mouseMoveEvent(QMouseEvent * event)
void c_QTableView__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(event);
}
// mousePressEvent(QMouseEvent * event)
void c_QTableView__mousePressEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(event);
}
// mouseReleaseEvent(QMouseEvent * event)
void c_QTableView__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(event);
}
// moveCursor(QAbstractItemView::CursorAction cursorAction,
// QFlags<Qt::KeyboardModifier> modifiers)
void *c_QTableView__moveCursor_CursorAction_KeyboardModifiers(void *thisObj,
                                                              int cursorAction,
                                                              int modifiers_) {
  auto modifiers = static_cast<QFlags<Qt::KeyboardModifier>>(modifiers_);
  const auto &result = new Dartagnan::ValueWrapper<
      QModelIndex>{fromWrapperPtr(thisObj)->moveCursor_nocallback(
      static_cast<QtDartBindings_wrappersNS::QTableView_wrapper::CursorAction>(
          cursorAction),
      modifiers)};
  return result;
}
// paintEvent(QPaintEvent * e)
void c_QTableView__paintEvent_QPaintEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QPaintEvent *>(e_);
  fromWrapperPtr(thisObj)->paintEvent_nocallback(e);
}
void c_QTableView__onPressed_QModelIndex(void *thisObj, void *contextQObject,
                                         void *callback) {
  auto instance = reinterpret_cast<QTableView *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QTableView::pressed, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// reset()
void c_QTableView__reset(void *thisObj) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTableView_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->reset_nocallback();
    } else {
      return targetPtr->reset();
    }
  }();
}
// resizeColumnToContents(int column)
void c_QTableView__resizeColumnToContents_int(void *thisObj, int column) {
  fromPtr(thisObj)->resizeColumnToContents(column);
}
// resizeColumnsToContents()
void c_QTableView__resizeColumnsToContents(void *thisObj) {
  fromPtr(thisObj)->resizeColumnsToContents();
}
// resizeRowToContents(int row)
void c_QTableView__resizeRowToContents_int(void *thisObj, int row) {
  fromPtr(thisObj)->resizeRowToContents(row);
}
// resizeRowsToContents()
void c_QTableView__resizeRowsToContents(void *thisObj) {
  fromPtr(thisObj)->resizeRowsToContents();
}
// rowAt(int y) const
int c_QTableView__rowAt_int(void *thisObj, int y) {
  const auto &result = fromPtr(thisObj)->rowAt(y);
  return result;
}
// rowCountChanged(int oldCount, int newCount)
void c_QTableView__rowCountChanged_int_int(void *thisObj, int oldCount,
                                           int newCount) {
  fromWrapperPtr(thisObj)->rowCountChanged(oldCount, newCount);
}
// rowHeight(int row) const
int c_QTableView__rowHeight_int(void *thisObj, int row) {
  const auto &result = fromPtr(thisObj)->rowHeight(row);
  return result;
}
// rowMoved(int row, int oldIndex, int newIndex)
void c_QTableView__rowMoved_int_int_int(void *thisObj, int row, int oldIndex,
                                        int newIndex) {
  fromWrapperPtr(thisObj)->rowMoved(row, oldIndex, newIndex);
}
// rowResized(int row, int oldHeight, int newHeight)
void c_QTableView__rowResized_int_int_int(void *thisObj, int row, int oldHeight,
                                          int newHeight) {
  fromWrapperPtr(thisObj)->rowResized(row, oldHeight, newHeight);
}
// rowSpan(int row, int column) const
int c_QTableView__rowSpan_int_int(void *thisObj, int row, int column) {
  const auto &result = fromPtr(thisObj)->rowSpan(row, column);
  return result;
}
// rowViewportPosition(int row) const
int c_QTableView__rowViewportPosition_int(void *thisObj, int row) {
  const auto &result = fromPtr(thisObj)->rowViewportPosition(row);
  return result;
}
// rowsAboutToBeRemoved(const QModelIndex & parent, int start, int end)
void c_QTableView__rowsAboutToBeRemoved_QModelIndex_int_int(void *thisObj,
                                                            void *parent_,
                                                            int start,
                                                            int end) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  fromWrapperPtr(thisObj)->rowsAboutToBeRemoved_nocallback(parent, start, end);
}
// rowsInserted(const QModelIndex & parent, int start, int end)
void c_QTableView__rowsInserted_QModelIndex_int_int(void *thisObj,
                                                    void *parent_, int start,
                                                    int end) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  fromWrapperPtr(thisObj)->rowsInserted_nocallback(parent, start, end);
}
// scrollContentsBy(int dx, int dy)
void c_QTableView__scrollContentsBy_int_int(void *thisObj, int dx, int dy) {
  fromWrapperPtr(thisObj)->scrollContentsBy_nocallback(dx, dy);
}
// scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint hint)
void c_QTableView__scrollTo_QModelIndex_ScrollHint(void *thisObj, void *index_,
                                                   int hint) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTableView_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->scrollTo_nocallback(
          index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
      return targetPtr->scrollTo(
          index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
  }();
}
// selectAll()
void c_QTableView__selectAll(void *thisObj) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTableView_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->selectAll_nocallback();
    } else {
      return targetPtr->selectAll();
    }
  }();
}
// selectColumn(int column)
void c_QTableView__selectColumn_int(void *thisObj, int column) {
  fromPtr(thisObj)->selectColumn(column);
}
// selectRow(int row)
void c_QTableView__selectRow_int(void *thisObj, int row) {
  fromPtr(thisObj)->selectRow(row);
}
// selectedIndexes() const
void *c_QTableView__selectedIndexes(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QModelIndex>>{
      fromWrapperPtr(thisObj)->selectedIndexes_nocallback()};
  return result;
}
// selectionChanged(const QItemSelection & selected, const QItemSelection &
// deselected)
void c_QTableView__selectionChanged_QItemSelection_QItemSelection(
    void *thisObj, void *selected_, void *deselected_) {
  assert(selected_);
  auto &selected = *reinterpret_cast<QItemSelection *>(selected_);
  assert(deselected_);
  auto &deselected = *reinterpret_cast<QItemSelection *>(deselected_);
  fromWrapperPtr(thisObj)->selectionChanged_nocallback(selected, deselected);
}
// selectionCommand(const QModelIndex & index, const QEvent * event) const
int c_QTableView__selectionCommand_QModelIndex_QEvent(void *thisObj,
                                                      void *index_,
                                                      void *event_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result =
      fromWrapperPtr(thisObj)->selectionCommand_nocallback(index, event);
  return result;
}
// setColumnHidden(int column, bool hide)
void c_QTableView__setColumnHidden_int_bool(void *thisObj, int column,
                                            bool hide) {
  fromPtr(thisObj)->setColumnHidden(column, hide);
}
// setColumnWidth(int column, int width)
void c_QTableView__setColumnWidth_int_int(void *thisObj, int column,
                                          int width) {
  fromPtr(thisObj)->setColumnWidth(column, width);
}
// setCornerButtonEnabled(bool enable)
void c_QTableView__setCornerButtonEnabled_bool(void *thisObj, bool enable) {
  fromPtr(thisObj)->setCornerButtonEnabled(enable);
}
// setModel(QAbstractItemModel * model)
void c_QTableView__setModel_QAbstractItemModel(void *thisObj, void *model_) {
  auto model = reinterpret_cast<QAbstractItemModel *>(model_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTableView_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setModel_nocallback(model);
    } else {
      return targetPtr->setModel(model);
    }
  }();
}
// setRootIndex(const QModelIndex & index)
void c_QTableView__setRootIndex_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTableView_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setRootIndex_nocallback(index);
    } else {
      return targetPtr->setRootIndex(index);
    }
  }();
}
// setRowHeight(int row, int height)
void c_QTableView__setRowHeight_int_int(void *thisObj, int row, int height) {
  fromPtr(thisObj)->setRowHeight(row, height);
}
// setRowHidden(int row, bool hide)
void c_QTableView__setRowHidden_int_bool(void *thisObj, int row, bool hide) {
  fromPtr(thisObj)->setRowHidden(row, hide);
}
// setSelection(const QRect & rect, QFlags<QItemSelectionModel::SelectionFlag>
// command)
void c_QTableView__setSelection_QRect_SelectionFlags(void *thisObj, void *rect_,
                                                     int command_) {
  assert(rect_);
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  auto command =
      static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command_);
  fromWrapperPtr(thisObj)->setSelection_nocallback(rect, command);
}
// setSelectionModel(QItemSelectionModel * selectionModel)
void c_QTableView__setSelectionModel_QItemSelectionModel(
    void *thisObj, void *selectionModel_) {
  auto selectionModel =
      reinterpret_cast<QItemSelectionModel *>(selectionModel_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTableView_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setSelectionModel_nocallback(selectionModel);
    } else {
      return targetPtr->setSelectionModel(selectionModel);
    }
  }();
}
// setShowGrid(bool show)
void c_QTableView__setShowGrid_bool(void *thisObj, bool show) {
  fromPtr(thisObj)->setShowGrid(show);
}
// setSortingEnabled(bool enable)
void c_QTableView__setSortingEnabled_bool(void *thisObj, bool enable) {
  fromPtr(thisObj)->setSortingEnabled(enable);
}
// setSpan(int row, int column, int rowSpan, int columnSpan)
void c_QTableView__setSpan_int_int_int_int(void *thisObj, int row, int column,
                                           int rowSpan, int columnSpan) {
  fromPtr(thisObj)->setSpan(row, column, rowSpan, columnSpan);
}
// setVisible(bool visible)
void c_QTableView__setVisible_bool(void *thisObj, bool visible) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTableView_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}
// setWordWrap(bool on)
void c_QTableView__setWordWrap_bool(void *thisObj, bool on) {
  fromPtr(thisObj)->setWordWrap(on);
}
// setupViewport(QWidget * viewport)
void c_QTableView__setupViewport_QWidget(void *thisObj, void *viewport_) {
  auto viewport = reinterpret_cast<QWidget *>(viewport_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTableView_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setupViewport_nocallback(viewport);
    } else {
      return targetPtr->setupViewport(viewport);
    }
  }();
}
// sharedPainter() const
void *c_QTableView__sharedPainter(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->sharedPainter_nocallback();
  return result;
}
// showColumn(int column)
void c_QTableView__showColumn_int(void *thisObj, int column) {
  fromPtr(thisObj)->showColumn(column);
}
// showGrid() const
bool c_QTableView__showGrid(void *thisObj) {
  const auto &result = fromPtr(thisObj)->showGrid();
  return result;
}
// showRow(int row)
void c_QTableView__showRow_int(void *thisObj, int row) {
  fromPtr(thisObj)->showRow(row);
}
// sizeHint() const
void *c_QTableView__sizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTableView_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->sizeHint_nocallback();
    } else {
      return targetPtr->sizeHint();
    }
  }()};
  return result;
}
// sizeHintForColumn(int column) const
int c_QTableView__sizeHintForColumn_int(void *thisObj, int column) {
  const auto &result =
      fromWrapperPtr(thisObj)->sizeHintForColumn_nocallback(column);
  return result;
}
// sizeHintForRow(int row) const
int c_QTableView__sizeHintForRow_int(void *thisObj, int row) {
  const auto &result = fromWrapperPtr(thisObj)->sizeHintForRow_nocallback(row);
  return result;
}
// sortByColumn(int column, Qt::SortOrder order)
void c_QTableView__sortByColumn_int_SortOrder(void *thisObj, int column,
                                              int order) {
  fromPtr(thisObj)->sortByColumn(column, static_cast<Qt::SortOrder>(order));
}
// tr(const char * s, const char * c, int n)
void *c_static_QTableView__tr_char_char_int(const char *s, const char *c,
                                            int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QTableView_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
// updateEditorData()
void c_QTableView__updateEditorData(void *thisObj) {
  fromWrapperPtr(thisObj)->updateEditorData_nocallback();
}
// updateEditorGeometries()
void c_QTableView__updateEditorGeometries(void *thisObj) {
  fromWrapperPtr(thisObj)->updateEditorGeometries_nocallback();
}
// updateGeometries()
void c_QTableView__updateGeometries(void *thisObj) {
  fromWrapperPtr(thisObj)->updateGeometries_nocallback();
}
// verticalOffset() const
int c_QTableView__verticalOffset(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->verticalOffset_nocallback();
  return result;
}
// verticalScrollbarAction(int action)
void c_QTableView__verticalScrollbarAction_int(void *thisObj, int action) {
  fromWrapperPtr(thisObj)->verticalScrollbarAction_nocallback(action);
}
// verticalScrollbarValueChanged(int value)
void c_QTableView__verticalScrollbarValueChanged_int(void *thisObj, int value) {
  fromWrapperPtr(thisObj)->verticalScrollbarValueChanged_nocallback(value);
}
void c_QTableView__onViewportEntered(void *thisObj, void *contextQObject,
                                     void *callback) {
  auto instance = reinterpret_cast<QTableView *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QTableView::viewportEntered,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// viewportEvent(QEvent * event)
bool c_QTableView__viewportEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = fromWrapperPtr(thisObj)->viewportEvent_nocallback(event);
  return result;
}
// viewportSizeHint() const
void *c_QTableView__viewportSizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{
      fromWrapperPtr(thisObj)->viewportSizeHint_nocallback()};
  return result;
}
// visualRect(const QModelIndex & index) const
void *c_QTableView__visualRect_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = new Dartagnan::ValueWrapper<QRect>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTableView_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->visualRect_nocallback(index);
    } else {
      return targetPtr->visualRect(index);
    }
  }()};
  return result;
}
// visualRegionForSelection(const QItemSelection & selection) const
void *c_QTableView__visualRegionForSelection_QItemSelection(void *thisObj,
                                                            void *selection_) {
  assert(selection_);
  auto &selection = *reinterpret_cast<QItemSelection *>(selection_);
  const auto &result = new Dartagnan::ValueWrapper<QRegion>{
      fromWrapperPtr(thisObj)->visualRegionForSelection_nocallback(selection)};
  return result;
}
// wordWrap() const
bool c_QTableView__wordWrap(void *thisObj) {
  const auto &result = fromPtr(thisObj)->wordWrap();
  return result;
}
void c_QTableView__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QTableView__registerVirtualMethodCallback(void *ptr, void *callback,
                                                 int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1128:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 5397:
    wrapper->m_commitDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_commitData>(
        callback);
    break;
  case 5399:
    wrapper->m_currentChangedCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_currentChanged>(
        callback);
    break;
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_customEvent>(
        callback);
    break;
  case 5401:
    wrapper->m_dataChangedCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_dataChanged>(
        callback);
    break;
  case 1145:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_devType>(
        callback);
    break;
  case 5404:
    wrapper->m_doItemsLayoutCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_doItemsLayout>(
        callback);
    break;
  case 5409:
    wrapper->m_editorDestroyedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_editorDestroyed>(callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_event>(
        callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1155:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1169:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 1173:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 5413:
    wrapper->m_horizontalOffsetCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_horizontalOffset>(callback);
    break;
  case 5414:
    wrapper->m_horizontalScrollbarActionCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_horizontalScrollbarAction>(callback);
    break;
  case 5415:
    wrapper->m_horizontalScrollbarValueChangedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_horizontalScrollbarValueChanged>(
            callback);
    break;
  case 5418:
    wrapper->m_indexAtCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_indexAt>(
        callback);
    break;
  case 1176:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_initPainter>(
        callback);
    break;
  case 5420:
    wrapper->m_isIndexHiddenCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_isIndexHidden>(
        callback);
    break;
  case 5422:
    wrapper->m_keyboardSearchCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_keyboardSearch>(
        callback);
    break;
  case 1202:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1222:
    wrapper->m_minimumSizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_minimumSizeHint>(callback);
    break;
  case 1224:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1226:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_mouseMoveEvent>(
        callback);
    break;
  case 1227:
    wrapper->m_mousePressEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_mousePressEvent>(callback);
    break;
  case 1228:
    wrapper->m_mouseReleaseEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_mouseReleaseEvent>(callback);
    break;
  case 5425:
    wrapper->m_moveCursorCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_moveCursor>(
        callback);
    break;
  case 1235:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 5428:
    wrapper->m_resetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_reset>(
        callback);
    break;
  case 5432:
    wrapper->m_rowsAboutToBeRemovedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_rowsAboutToBeRemoved>(callback);
    break;
  case 5433:
    wrapper->m_rowsInsertedCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_rowsInserted>(
        callback);
    break;
  case 5218:
    wrapper->m_scrollContentsByCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_scrollContentsBy>(callback);
    break;
  case 5436:
    wrapper->m_scrollToCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_scrollTo>(
        callback);
    break;
  case 5439:
    wrapper->m_selectAllCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_selectAll>(
        callback);
    break;
  case 5440:
    wrapper->m_selectedIndexesCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_selectedIndexes>(callback);
    break;
  case 5441:
    wrapper->m_selectionChangedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_selectionChanged>(callback);
    break;
  case 5442:
    wrapper->m_selectionCommandCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_selectionCommand>(callback);
    break;
  case 5455:
    wrapper->m_setModelCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_setModel>(
        callback);
    break;
  case 5456:
    wrapper->m_setRootIndexCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_setRootIndex>(
        callback);
    break;
  case 5457:
    wrapper->m_setSelectionCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_setSelection>(
        callback);
    break;
  case 5458:
    wrapper->m_setSelectionModelCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_setSelectionModel>(callback);
    break;
  case 1314:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_setVisible>(
        callback);
    break;
  case 5226:
    wrapper->m_setupViewportCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_setupViewport>(
        callback);
    break;
  case 1323:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1331:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_sizeHint>(
        callback);
    break;
  case 5463:
    wrapper->m_sizeHintForColumnCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_sizeHintForColumn>(callback);
    break;
  case 5465:
    wrapper->m_sizeHintForRowCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_sizeHintForRow>(
        callback);
    break;
  case 5471:
    wrapper->m_updateEditorDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_updateEditorData>(callback);
    break;
  case 5472:
    wrapper->m_updateEditorGeometriesCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_updateEditorGeometries>(callback);
    break;
  case 5473:
    wrapper->m_updateGeometriesCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_updateGeometries>(callback);
    break;
  case 5474:
    wrapper->m_verticalOffsetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_verticalOffset>(
        callback);
    break;
  case 5475:
    wrapper->m_verticalScrollbarActionCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_verticalScrollbarAction>(callback);
    break;
  case 5476:
    wrapper->m_verticalScrollbarValueChangedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_verticalScrollbarValueChanged>(callback);
    break;
  case 5229:
    wrapper->m_viewportEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_viewportEvent>(
        callback);
    break;
  case 5230:
    wrapper->m_viewportSizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_viewportSizeHint>(callback);
    break;
  case 5479:
    wrapper->m_visualRectCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_visualRect>(
        callback);
    break;
  case 5480:
    wrapper->m_visualRegionForSelectionCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_visualRegionForSelection>(callback);
    break;
  }
}
}
