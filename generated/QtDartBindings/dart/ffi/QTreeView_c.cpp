/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QTreeView_c.h"

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
QTreeView_wrapper::QTreeView_wrapper(QWidget *parent) : ::QTreeView(parent) {}
bool QTreeView_wrapper::allColumnsShowFocus() const {
  return ::QTreeView::allColumnsShowFocus();
}
int QTreeView_wrapper::autoExpandDelay() const {
  return ::QTreeView::autoExpandDelay();
}
void QTreeView_wrapper::changeEvent(QEvent *event) {
  if (m_changeEventCallback) {
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QTreeView::changeEvent(event);
  }
}
void QTreeView_wrapper::changeEvent_nocallback(QEvent *event) {
  ::QTreeView::changeEvent(event);
}
void QTreeView_wrapper::collapse(const QModelIndex &index) {
  ::QTreeView::collapse(index);
}
void QTreeView_wrapper::collapseAll() { ::QTreeView::collapseAll(); }
void QTreeView_wrapper::collapsed(const QModelIndex &index) {
  ::QTreeView::collapsed(index);
}
int QTreeView_wrapper::columnAt(int x) const {
  return ::QTreeView::columnAt(x);
}
void QTreeView_wrapper::columnCountChanged(int oldCount, int newCount) {
  ::QTreeView::columnCountChanged(oldCount, newCount);
}
void QTreeView_wrapper::columnMoved() { ::QTreeView::columnMoved(); }
void QTreeView_wrapper::columnResized(int column, int oldSize, int newSize) {
  ::QTreeView::columnResized(column, oldSize, newSize);
}
int QTreeView_wrapper::columnViewportPosition(int column) const {
  return ::QTreeView::columnViewportPosition(column);
}
int QTreeView_wrapper::columnWidth(int column) const {
  return ::QTreeView::columnWidth(column);
}
void QTreeView_wrapper::commitData(QWidget *editor) {
  if (m_commitDataCallback) {
    const void *thisPtr = this;
    m_commitDataCallback(const_cast<void *>(thisPtr), editor);
  } else {
    ::QTreeView::commitData(editor);
  }
}
void QTreeView_wrapper::commitData_nocallback(QWidget *editor) {
  ::QTreeView::commitData(editor);
}
void QTreeView_wrapper::currentChanged(const QModelIndex &current,
                                       const QModelIndex &previous) {
  if (m_currentChangedCallback) {
    const void *thisPtr = this;
    m_currentChangedCallback(const_cast<void *>(thisPtr), current, previous);
  } else {
    ::QTreeView::currentChanged(current, previous);
  }
}
void QTreeView_wrapper::currentChanged_nocallback(const QModelIndex &current,
                                                  const QModelIndex &previous) {
  ::QTreeView::currentChanged(current, previous);
}
void QTreeView_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QTreeView::customEvent(event);
  }
}
void QTreeView_wrapper::customEvent_nocallback(QEvent *event) {
  ::QTreeView::customEvent(event);
}
void QTreeView_wrapper::dataChanged(const QModelIndex &topLeft,
                                    const QModelIndex &bottomRight,
                                    const QList<int> &roles) {
  if (m_dataChangedCallback) {
    const void *thisPtr = this;
    m_dataChangedCallback(const_cast<void *>(thisPtr), topLeft, bottomRight,
                          roles);
  } else {
    ::QTreeView::dataChanged(topLeft, bottomRight, roles);
  }
}
void QTreeView_wrapper::dataChanged_nocallback(const QModelIndex &topLeft,
                                               const QModelIndex &bottomRight,
                                               const QList<int> &roles) {
  ::QTreeView::dataChanged(topLeft, bottomRight, roles);
}
int QTreeView_wrapper::devType() const {
  if (m_devTypeCallback) {
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QTreeView::devType();
  }
}
int QTreeView_wrapper::devType_nocallback() const {
  return ::QTreeView::devType();
}
void QTreeView_wrapper::doItemsLayout() {
  if (m_doItemsLayoutCallback) {
    const void *thisPtr = this;
    m_doItemsLayoutCallback(const_cast<void *>(thisPtr));
  } else {
    ::QTreeView::doItemsLayout();
  }
}
void QTreeView_wrapper::doItemsLayout_nocallback() {
  ::QTreeView::doItemsLayout();
}
void QTreeView_wrapper::drawBranches(QPainter *painter, const QRect &rect,
                                     const QModelIndex &index) const {
  if (m_drawBranchesCallback) {
    const void *thisPtr = this;
    m_drawBranchesCallback(const_cast<void *>(thisPtr), painter, rect, index);
  } else {
    ::QTreeView::drawBranches(painter, rect, index);
  }
}
void QTreeView_wrapper::drawBranches_nocallback(
    QPainter *painter, const QRect &rect, const QModelIndex &index) const {
  ::QTreeView::drawBranches(painter, rect, index);
}
void QTreeView_wrapper::drawTree(QPainter *painter,
                                 const QRegion &region) const {
  ::QTreeView::drawTree(painter, region);
}
void QTreeView_wrapper::editorDestroyed(QObject *editor) {
  if (m_editorDestroyedCallback) {
    const void *thisPtr = this;
    m_editorDestroyedCallback(const_cast<void *>(thisPtr), editor);
  } else {
    ::QTreeView::editorDestroyed(editor);
  }
}
void QTreeView_wrapper::editorDestroyed_nocallback(QObject *editor) {
  ::QTreeView::editorDestroyed(editor);
}
bool QTreeView_wrapper::event(QEvent *event) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    return ::QTreeView::event(event);
  }
}
bool QTreeView_wrapper::event_nocallback(QEvent *event) {
  return ::QTreeView::event(event);
}
bool QTreeView_wrapper::eventFilter(QObject *object, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), object, event);
  } else {
    return ::QTreeView::eventFilter(object, event);
  }
}
bool QTreeView_wrapper::eventFilter_nocallback(QObject *object, QEvent *event) {
  return ::QTreeView::eventFilter(object, event);
}
void QTreeView_wrapper::expand(const QModelIndex &index) {
  ::QTreeView::expand(index);
}
void QTreeView_wrapper::expandAll() { ::QTreeView::expandAll(); }
void QTreeView_wrapper::expandRecursively(const QModelIndex &index, int depth) {
  ::QTreeView::expandRecursively(index, depth);
}
void QTreeView_wrapper::expandToDepth(int depth) {
  ::QTreeView::expandToDepth(depth);
}
void QTreeView_wrapper::expanded(const QModelIndex &index) {
  ::QTreeView::expanded(index);
}
bool QTreeView_wrapper::expandsOnDoubleClick() const {
  return ::QTreeView::expandsOnDoubleClick();
}
bool QTreeView_wrapper::focusNextPrevChild(bool next) {
  if (m_focusNextPrevChildCallback) {
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    return ::QTreeView::focusNextPrevChild(next);
  }
}
bool QTreeView_wrapper::focusNextPrevChild_nocallback(bool next) {
  return ::QTreeView::focusNextPrevChild(next);
}
bool QTreeView_wrapper::hasHeightForWidth() const {
  if (m_hasHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QTreeView::hasHeightForWidth();
  }
}
bool QTreeView_wrapper::hasHeightForWidth_nocallback() const {
  return ::QTreeView::hasHeightForWidth();
}
int QTreeView_wrapper::heightForWidth(int arg__1) const {
  if (m_heightForWidthCallback) {
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QTreeView::heightForWidth(arg__1);
  }
}
int QTreeView_wrapper::heightForWidth_nocallback(int arg__1) const {
  return ::QTreeView::heightForWidth(arg__1);
}
void QTreeView_wrapper::hideColumn(int column) {
  ::QTreeView::hideColumn(column);
}
int QTreeView_wrapper::horizontalOffset() const {
  if (m_horizontalOffsetCallback) {
    const void *thisPtr = this;
    return m_horizontalOffsetCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QTreeView::horizontalOffset();
  }
}
int QTreeView_wrapper::horizontalOffset_nocallback() const {
  return ::QTreeView::horizontalOffset();
}
void QTreeView_wrapper::horizontalScrollbarAction(int action) {
  if (m_horizontalScrollbarActionCallback) {
    const void *thisPtr = this;
    m_horizontalScrollbarActionCallback(const_cast<void *>(thisPtr), action);
  } else {
    ::QTreeView::horizontalScrollbarAction(action);
  }
}
void QTreeView_wrapper::horizontalScrollbarAction_nocallback(int action) {
  ::QTreeView::horizontalScrollbarAction(action);
}
void QTreeView_wrapper::horizontalScrollbarValueChanged(int value) {
  if (m_horizontalScrollbarValueChangedCallback) {
    const void *thisPtr = this;
    m_horizontalScrollbarValueChangedCallback(const_cast<void *>(thisPtr),
                                              value);
  } else {
    ::QTreeView::horizontalScrollbarValueChanged(value);
  }
}
void QTreeView_wrapper::horizontalScrollbarValueChanged_nocallback(int value) {
  ::QTreeView::horizontalScrollbarValueChanged(value);
}
int QTreeView_wrapper::indentation() const {
  return ::QTreeView::indentation();
}
QModelIndex QTreeView_wrapper::indexAbove(const QModelIndex &index) const {
  return ::QTreeView::indexAbove(index);
}
QModelIndex QTreeView_wrapper::indexAt(const QPoint &p) const {
  if (m_indexAtCallback) {
    const void *thisPtr = this;
    return *m_indexAtCallback(const_cast<void *>(thisPtr), p);
  } else {
    return ::QTreeView::indexAt(p);
  }
}
QModelIndex QTreeView_wrapper::indexAt_nocallback(const QPoint &p) const {
  return ::QTreeView::indexAt(p);
}
QModelIndex QTreeView_wrapper::indexBelow(const QModelIndex &index) const {
  return ::QTreeView::indexBelow(index);
}
int QTreeView_wrapper::indexRowSizeHint(const QModelIndex &index) const {
  return ::QTreeView::indexRowSizeHint(index);
}
void QTreeView_wrapper::initPainter(QPainter *painter) const {
  if (m_initPainterCallback) {
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    ::QTreeView::initPainter(painter);
  }
}
void QTreeView_wrapper::initPainter_nocallback(QPainter *painter) const {
  ::QTreeView::initPainter(painter);
}
bool QTreeView_wrapper::isAnimated() const { return ::QTreeView::isAnimated(); }
bool QTreeView_wrapper::isColumnHidden(int column) const {
  return ::QTreeView::isColumnHidden(column);
}
bool QTreeView_wrapper::isExpanded(const QModelIndex &index) const {
  return ::QTreeView::isExpanded(index);
}
bool QTreeView_wrapper::isFirstColumnSpanned(int row,
                                             const QModelIndex &parent) const {
  return ::QTreeView::isFirstColumnSpanned(row, parent);
}
bool QTreeView_wrapper::isHeaderHidden() const {
  return ::QTreeView::isHeaderHidden();
}
bool QTreeView_wrapper::isIndexHidden(const QModelIndex &index) const {
  if (m_isIndexHiddenCallback) {
    const void *thisPtr = this;
    return m_isIndexHiddenCallback(const_cast<void *>(thisPtr), index);
  } else {
    return ::QTreeView::isIndexHidden(index);
  }
}
bool QTreeView_wrapper::isIndexHidden_nocallback(
    const QModelIndex &index) const {
  return ::QTreeView::isIndexHidden(index);
}
bool QTreeView_wrapper::isRowHidden(int row, const QModelIndex &parent) const {
  return ::QTreeView::isRowHidden(row, parent);
}
bool QTreeView_wrapper::isSortingEnabled() const {
  return ::QTreeView::isSortingEnabled();
}
bool QTreeView_wrapper::itemsExpandable() const {
  return ::QTreeView::itemsExpandable();
}
void QTreeView_wrapper::keyboardSearch(const QString &search) {
  if (m_keyboardSearchCallback) {
    const void *thisPtr = this;
    m_keyboardSearchCallback(const_cast<void *>(thisPtr), search);
  } else {
    ::QTreeView::keyboardSearch(search);
  }
}
void QTreeView_wrapper::keyboardSearch_nocallback(const QString &search) {
  ::QTreeView::keyboardSearch(search);
}
void QTreeView_wrapper::leaveEvent(QEvent *event) {
  if (m_leaveEventCallback) {
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QTreeView::leaveEvent(event);
  }
}
void QTreeView_wrapper::leaveEvent_nocallback(QEvent *event) {
  ::QTreeView::leaveEvent(event);
}
QSize QTreeView_wrapper::minimumSizeHint() const {
  if (m_minimumSizeHintCallback) {
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QTreeView::minimumSizeHint();
  }
}
QSize QTreeView_wrapper::minimumSizeHint_nocallback() const {
  return ::QTreeView::minimumSizeHint();
}
void QTreeView_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  if (m_mouseDoubleClickEventCallback) {
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QTreeView::mouseDoubleClickEvent(event);
  }
}
void QTreeView_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *event) {
  ::QTreeView::mouseDoubleClickEvent(event);
}
void QTreeView_wrapper::mouseMoveEvent(QMouseEvent *event) {
  if (m_mouseMoveEventCallback) {
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QTreeView::mouseMoveEvent(event);
  }
}
void QTreeView_wrapper::mouseMoveEvent_nocallback(QMouseEvent *event) {
  ::QTreeView::mouseMoveEvent(event);
}
void QTreeView_wrapper::mousePressEvent(QMouseEvent *event) {
  if (m_mousePressEventCallback) {
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QTreeView::mousePressEvent(event);
  }
}
void QTreeView_wrapper::mousePressEvent_nocallback(QMouseEvent *event) {
  ::QTreeView::mousePressEvent(event);
}
void QTreeView_wrapper::mouseReleaseEvent(QMouseEvent *event) {
  if (m_mouseReleaseEventCallback) {
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QTreeView::mouseReleaseEvent(event);
  }
}
void QTreeView_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *event) {
  ::QTreeView::mouseReleaseEvent(event);
}
QModelIndex
QTreeView_wrapper::moveCursor(QAbstractItemView::CursorAction cursorAction,
                              QFlags<Qt::KeyboardModifier> modifiers) {
  if (m_moveCursorCallback) {
    const void *thisPtr = this;
    return *m_moveCursorCallback(const_cast<void *>(thisPtr), cursorAction,
                                 modifiers);
  } else {
    return ::QTreeView::moveCursor(cursorAction, modifiers);
  }
}
QModelIndex QTreeView_wrapper::moveCursor_nocallback(
    QAbstractItemView::CursorAction cursorAction,
    QFlags<Qt::KeyboardModifier> modifiers) {
  return ::QTreeView::moveCursor(cursorAction, modifiers);
}
void QTreeView_wrapper::paintEvent(QPaintEvent *event) {
  if (m_paintEventCallback) {
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QTreeView::paintEvent(event);
  }
}
void QTreeView_wrapper::paintEvent_nocallback(QPaintEvent *event) {
  ::QTreeView::paintEvent(event);
}
void QTreeView_wrapper::reexpand() { ::QTreeView::reexpand(); }
void QTreeView_wrapper::reset() {
  if (m_resetCallback) {
    const void *thisPtr = this;
    m_resetCallback(const_cast<void *>(thisPtr));
  } else {
    ::QTreeView::reset();
  }
}
void QTreeView_wrapper::reset_nocallback() { ::QTreeView::reset(); }
void QTreeView_wrapper::resetIndentation() { ::QTreeView::resetIndentation(); }
void QTreeView_wrapper::resizeColumnToContents(int column) {
  ::QTreeView::resizeColumnToContents(column);
}
bool QTreeView_wrapper::rootIsDecorated() const {
  return ::QTreeView::rootIsDecorated();
}
int QTreeView_wrapper::rowHeight(const QModelIndex &index) const {
  return ::QTreeView::rowHeight(index);
}
void QTreeView_wrapper::rowsAboutToBeRemoved(const QModelIndex &parent,
                                             int start, int end) {
  if (m_rowsAboutToBeRemovedCallback) {
    const void *thisPtr = this;
    m_rowsAboutToBeRemovedCallback(const_cast<void *>(thisPtr), parent, start,
                                   end);
  } else {
    ::QTreeView::rowsAboutToBeRemoved(parent, start, end);
  }
}
void QTreeView_wrapper::rowsAboutToBeRemoved_nocallback(
    const QModelIndex &parent, int start, int end) {
  ::QTreeView::rowsAboutToBeRemoved(parent, start, end);
}
void QTreeView_wrapper::rowsInserted(const QModelIndex &parent, int start,
                                     int end) {
  if (m_rowsInsertedCallback) {
    const void *thisPtr = this;
    m_rowsInsertedCallback(const_cast<void *>(thisPtr), parent, start, end);
  } else {
    ::QTreeView::rowsInserted(parent, start, end);
  }
}
void QTreeView_wrapper::rowsInserted_nocallback(const QModelIndex &parent,
                                                int start, int end) {
  ::QTreeView::rowsInserted(parent, start, end);
}
void QTreeView_wrapper::rowsRemoved(const QModelIndex &parent, int first,
                                    int last) {
  ::QTreeView::rowsRemoved(parent, first, last);
}
void QTreeView_wrapper::scrollContentsBy(int dx, int dy) {
  if (m_scrollContentsByCallback) {
    const void *thisPtr = this;
    m_scrollContentsByCallback(const_cast<void *>(thisPtr), dx, dy);
  } else {
    ::QTreeView::scrollContentsBy(dx, dy);
  }
}
void QTreeView_wrapper::scrollContentsBy_nocallback(int dx, int dy) {
  ::QTreeView::scrollContentsBy(dx, dy);
}
void QTreeView_wrapper::scrollTo(const QModelIndex &index,
                                 QAbstractItemView::ScrollHint hint) {
  if (m_scrollToCallback) {
    const void *thisPtr = this;
    m_scrollToCallback(const_cast<void *>(thisPtr), index, hint);
  } else {
    ::QTreeView::scrollTo(index, hint);
  }
}
void QTreeView_wrapper::scrollTo_nocallback(
    const QModelIndex &index, QAbstractItemView::ScrollHint hint) {
  ::QTreeView::scrollTo(index, hint);
}
void QTreeView_wrapper::selectAll() {
  if (m_selectAllCallback) {
    const void *thisPtr = this;
    m_selectAllCallback(const_cast<void *>(thisPtr));
  } else {
    ::QTreeView::selectAll();
  }
}
void QTreeView_wrapper::selectAll_nocallback() { ::QTreeView::selectAll(); }
QList<QModelIndex> QTreeView_wrapper::selectedIndexes() const {
  if (m_selectedIndexesCallback) {
    const void *thisPtr = this;
    return *m_selectedIndexesCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QTreeView::selectedIndexes();
  }
}
QList<QModelIndex> QTreeView_wrapper::selectedIndexes_nocallback() const {
  return ::QTreeView::selectedIndexes();
}
void QTreeView_wrapper::selectionChanged(const QItemSelection &selected,
                                         const QItemSelection &deselected) {
  if (m_selectionChangedCallback) {
    const void *thisPtr = this;
    m_selectionChangedCallback(const_cast<void *>(thisPtr), selected,
                               deselected);
  } else {
    ::QTreeView::selectionChanged(selected, deselected);
  }
}
void QTreeView_wrapper::selectionChanged_nocallback(
    const QItemSelection &selected, const QItemSelection &deselected) {
  ::QTreeView::selectionChanged(selected, deselected);
}
QFlags<QItemSelectionModel::SelectionFlag>
QTreeView_wrapper::selectionCommand(const QModelIndex &index,
                                    const QEvent *event) const {
  if (m_selectionCommandCallback) {
    const void *thisPtr = this;
    return m_selectionCommandCallback(const_cast<void *>(thisPtr), index,
                                      event);
  } else {
    return ::QTreeView::selectionCommand(index, event);
  }
}
QFlags<QItemSelectionModel::SelectionFlag>
QTreeView_wrapper::selectionCommand_nocallback(const QModelIndex &index,
                                               const QEvent *event) const {
  return ::QTreeView::selectionCommand(index, event);
}
void QTreeView_wrapper::setAllColumnsShowFocus(bool enable) {
  ::QTreeView::setAllColumnsShowFocus(enable);
}
void QTreeView_wrapper::setAnimated(bool enable) {
  ::QTreeView::setAnimated(enable);
}
void QTreeView_wrapper::setAutoExpandDelay(int delay) {
  ::QTreeView::setAutoExpandDelay(delay);
}
void QTreeView_wrapper::setColumnHidden(int column, bool hide) {
  ::QTreeView::setColumnHidden(column, hide);
}
void QTreeView_wrapper::setColumnWidth(int column, int width) {
  ::QTreeView::setColumnWidth(column, width);
}
void QTreeView_wrapper::setExpanded(const QModelIndex &index, bool expand) {
  ::QTreeView::setExpanded(index, expand);
}
void QTreeView_wrapper::setExpandsOnDoubleClick(bool enable) {
  ::QTreeView::setExpandsOnDoubleClick(enable);
}
void QTreeView_wrapper::setFirstColumnSpanned(int row,
                                              const QModelIndex &parent,
                                              bool span) {
  ::QTreeView::setFirstColumnSpanned(row, parent, span);
}
void QTreeView_wrapper::setHeaderHidden(bool hide) {
  ::QTreeView::setHeaderHidden(hide);
}
void QTreeView_wrapper::setIndentation(int i) {
  ::QTreeView::setIndentation(i);
}
void QTreeView_wrapper::setItemsExpandable(bool enable) {
  ::QTreeView::setItemsExpandable(enable);
}
void QTreeView_wrapper::setModel(QAbstractItemModel *model) {
  if (m_setModelCallback) {
    const void *thisPtr = this;
    m_setModelCallback(const_cast<void *>(thisPtr), model);
  } else {
    ::QTreeView::setModel(model);
  }
}
void QTreeView_wrapper::setModel_nocallback(QAbstractItemModel *model) {
  ::QTreeView::setModel(model);
}
void QTreeView_wrapper::setRootIndex(const QModelIndex &index) {
  if (m_setRootIndexCallback) {
    const void *thisPtr = this;
    m_setRootIndexCallback(const_cast<void *>(thisPtr), index);
  } else {
    ::QTreeView::setRootIndex(index);
  }
}
void QTreeView_wrapper::setRootIndex_nocallback(const QModelIndex &index) {
  ::QTreeView::setRootIndex(index);
}
void QTreeView_wrapper::setRootIsDecorated(bool show) {
  ::QTreeView::setRootIsDecorated(show);
}
void QTreeView_wrapper::setRowHidden(int row, const QModelIndex &parent,
                                     bool hide) {
  ::QTreeView::setRowHidden(row, parent, hide);
}
void QTreeView_wrapper::setSelection(
    const QRect &rect, QFlags<QItemSelectionModel::SelectionFlag> command) {
  if (m_setSelectionCallback) {
    const void *thisPtr = this;
    m_setSelectionCallback(const_cast<void *>(thisPtr), rect, command);
  } else {
    ::QTreeView::setSelection(rect, command);
  }
}
void QTreeView_wrapper::setSelection_nocallback(
    const QRect &rect, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ::QTreeView::setSelection(rect, command);
}
void QTreeView_wrapper::setSelectionModel(QItemSelectionModel *selectionModel) {
  if (m_setSelectionModelCallback) {
    const void *thisPtr = this;
    m_setSelectionModelCallback(const_cast<void *>(thisPtr), selectionModel);
  } else {
    ::QTreeView::setSelectionModel(selectionModel);
  }
}
void QTreeView_wrapper::setSelectionModel_nocallback(
    QItemSelectionModel *selectionModel) {
  ::QTreeView::setSelectionModel(selectionModel);
}
void QTreeView_wrapper::setSortingEnabled(bool enable) {
  ::QTreeView::setSortingEnabled(enable);
}
void QTreeView_wrapper::setTreePosition(int logicalIndex) {
  ::QTreeView::setTreePosition(logicalIndex);
}
void QTreeView_wrapper::setUniformRowHeights(bool uniform) {
  ::QTreeView::setUniformRowHeights(uniform);
}
void QTreeView_wrapper::setVisible(bool visible) {
  if (m_setVisibleCallback) {
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    ::QTreeView::setVisible(visible);
  }
}
void QTreeView_wrapper::setVisible_nocallback(bool visible) {
  ::QTreeView::setVisible(visible);
}
void QTreeView_wrapper::setWordWrap(bool on) { ::QTreeView::setWordWrap(on); }
void QTreeView_wrapper::setupViewport(QWidget *viewport) {
  if (m_setupViewportCallback) {
    const void *thisPtr = this;
    m_setupViewportCallback(const_cast<void *>(thisPtr), viewport);
  } else {
    ::QTreeView::setupViewport(viewport);
  }
}
void QTreeView_wrapper::setupViewport_nocallback(QWidget *viewport) {
  ::QTreeView::setupViewport(viewport);
}
QPainter *QTreeView_wrapper::sharedPainter() const {
  if (m_sharedPainterCallback) {
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QTreeView::sharedPainter();
  }
}
QPainter *QTreeView_wrapper::sharedPainter_nocallback() const {
  return ::QTreeView::sharedPainter();
}
void QTreeView_wrapper::showColumn(int column) {
  ::QTreeView::showColumn(column);
}
QSize QTreeView_wrapper::sizeHint() const {
  if (m_sizeHintCallback) {
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QTreeView::sizeHint();
  }
}
QSize QTreeView_wrapper::sizeHint_nocallback() const {
  return ::QTreeView::sizeHint();
}
int QTreeView_wrapper::sizeHintForColumn(int column) const {
  if (m_sizeHintForColumnCallback) {
    const void *thisPtr = this;
    return m_sizeHintForColumnCallback(const_cast<void *>(thisPtr), column);
  } else {
    return ::QTreeView::sizeHintForColumn(column);
  }
}
int QTreeView_wrapper::sizeHintForColumn_nocallback(int column) const {
  return ::QTreeView::sizeHintForColumn(column);
}
int QTreeView_wrapper::sizeHintForRow(int row) const {
  if (m_sizeHintForRowCallback) {
    const void *thisPtr = this;
    return m_sizeHintForRowCallback(const_cast<void *>(thisPtr), row);
  } else {
    return ::QTreeView::sizeHintForRow(row);
  }
}
int QTreeView_wrapper::sizeHintForRow_nocallback(int row) const {
  return ::QTreeView::sizeHintForRow(row);
}
void QTreeView_wrapper::sortByColumn(int column, Qt::SortOrder order) {
  ::QTreeView::sortByColumn(column, order);
}
QString QTreeView_wrapper::tr(const char *s, const char *c, int n) {
  return ::QTreeView::tr(s, c, n);
}
int QTreeView_wrapper::treePosition() const {
  return ::QTreeView::treePosition();
}
bool QTreeView_wrapper::uniformRowHeights() const {
  return ::QTreeView::uniformRowHeights();
}
void QTreeView_wrapper::updateEditorData() {
  if (m_updateEditorDataCallback) {
    const void *thisPtr = this;
    m_updateEditorDataCallback(const_cast<void *>(thisPtr));
  } else {
    ::QTreeView::updateEditorData();
  }
}
void QTreeView_wrapper::updateEditorData_nocallback() {
  ::QTreeView::updateEditorData();
}
void QTreeView_wrapper::updateEditorGeometries() {
  if (m_updateEditorGeometriesCallback) {
    const void *thisPtr = this;
    m_updateEditorGeometriesCallback(const_cast<void *>(thisPtr));
  } else {
    ::QTreeView::updateEditorGeometries();
  }
}
void QTreeView_wrapper::updateEditorGeometries_nocallback() {
  ::QTreeView::updateEditorGeometries();
}
void QTreeView_wrapper::updateGeometries() {
  if (m_updateGeometriesCallback) {
    const void *thisPtr = this;
    m_updateGeometriesCallback(const_cast<void *>(thisPtr));
  } else {
    ::QTreeView::updateGeometries();
  }
}
void QTreeView_wrapper::updateGeometries_nocallback() {
  ::QTreeView::updateGeometries();
}
int QTreeView_wrapper::verticalOffset() const {
  if (m_verticalOffsetCallback) {
    const void *thisPtr = this;
    return m_verticalOffsetCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QTreeView::verticalOffset();
  }
}
int QTreeView_wrapper::verticalOffset_nocallback() const {
  return ::QTreeView::verticalOffset();
}
void QTreeView_wrapper::verticalScrollbarAction(int action) {
  if (m_verticalScrollbarActionCallback) {
    const void *thisPtr = this;
    m_verticalScrollbarActionCallback(const_cast<void *>(thisPtr), action);
  } else {
    ::QTreeView::verticalScrollbarAction(action);
  }
}
void QTreeView_wrapper::verticalScrollbarAction_nocallback(int action) {
  ::QTreeView::verticalScrollbarAction(action);
}
void QTreeView_wrapper::verticalScrollbarValueChanged(int value) {
  if (m_verticalScrollbarValueChangedCallback) {
    const void *thisPtr = this;
    m_verticalScrollbarValueChangedCallback(const_cast<void *>(thisPtr), value);
  } else {
    ::QTreeView::verticalScrollbarValueChanged(value);
  }
}
void QTreeView_wrapper::verticalScrollbarValueChanged_nocallback(int value) {
  ::QTreeView::verticalScrollbarValueChanged(value);
}
bool QTreeView_wrapper::viewportEvent(QEvent *event) {
  if (m_viewportEventCallback) {
    const void *thisPtr = this;
    return m_viewportEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    return ::QTreeView::viewportEvent(event);
  }
}
bool QTreeView_wrapper::viewportEvent_nocallback(QEvent *event) {
  return ::QTreeView::viewportEvent(event);
}
QSize QTreeView_wrapper::viewportSizeHint() const {
  if (m_viewportSizeHintCallback) {
    const void *thisPtr = this;
    return *m_viewportSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QTreeView::viewportSizeHint();
  }
}
QSize QTreeView_wrapper::viewportSizeHint_nocallback() const {
  return ::QTreeView::viewportSizeHint();
}
QRect QTreeView_wrapper::visualRect(const QModelIndex &index) const {
  if (m_visualRectCallback) {
    const void *thisPtr = this;
    return *m_visualRectCallback(const_cast<void *>(thisPtr), index);
  } else {
    return ::QTreeView::visualRect(index);
  }
}
QRect QTreeView_wrapper::visualRect_nocallback(const QModelIndex &index) const {
  return ::QTreeView::visualRect(index);
}
QRegion QTreeView_wrapper::visualRegionForSelection(
    const QItemSelection &selection) const {
  if (m_visualRegionForSelectionCallback) {
    const void *thisPtr = this;
    return *m_visualRegionForSelectionCallback(const_cast<void *>(thisPtr),
                                               selection);
  } else {
    return ::QTreeView::visualRegionForSelection(selection);
  }
}
QRegion QTreeView_wrapper::visualRegionForSelection_nocallback(
    const QItemSelection &selection) const {
  return ::QTreeView::visualRegionForSelection(selection);
}
bool QTreeView_wrapper::wordWrap() const { return ::QTreeView::wordWrap(); }
QTreeView_wrapper::~QTreeView_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QTreeView *fromPtr(void *ptr) {
  return reinterpret_cast<QTreeView *>(ptr);
}
static QtDartBindings_wrappersNS::QTreeView_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper *>(ptr);
}
extern "C" {
void c_QTreeView_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper *>(
      cppObj);
}
void *c_QTreeView__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QTreeView_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
void c_QTreeView__onActivated_QModelIndex(void *thisObj, void *contextQObject,
                                          void *callback) {
  auto instance = reinterpret_cast<QTreeView *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QTreeView::activated,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// allColumnsShowFocus() const
bool c_QTreeView__allColumnsShowFocus(void *thisObj) {
  const auto &result = fromPtr(thisObj)->allColumnsShowFocus();
  return result;
}
// autoExpandDelay() const
int c_QTreeView__autoExpandDelay(void *thisObj) {
  const auto &result = fromPtr(thisObj)->autoExpandDelay();
  return result;
}
// changeEvent(QEvent * event)
void c_QTreeView__changeEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->changeEvent_nocallback(event);
}
void c_QTreeView__onClicked_QModelIndex(void *thisObj, void *contextQObject,
                                        void *callback) {
  auto instance = reinterpret_cast<QTreeView *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QTreeView::clicked, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// collapse(const QModelIndex & index)
void c_QTreeView__collapse_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  fromPtr(thisObj)->collapse(index);
}
// collapseAll()
void c_QTreeView__collapseAll(void *thisObj) {
  fromPtr(thisObj)->collapseAll();
}
// collapsed(const QModelIndex & index)
void c_QTreeView__collapsed_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  fromPtr(thisObj)->collapsed(index);
}
void c_QTreeView__onCollapsed_QModelIndex(void *thisObj, void *contextQObject,
                                          void *callback) {
  auto instance = reinterpret_cast<QTreeView *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QTreeView::collapsed,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// columnAt(int x) const
int c_QTreeView__columnAt_int(void *thisObj, int x) {
  const auto &result = fromPtr(thisObj)->columnAt(x);
  return result;
}
// columnCountChanged(int oldCount, int newCount)
void c_QTreeView__columnCountChanged_int_int(void *thisObj, int oldCount,
                                             int newCount) {
  fromWrapperPtr(thisObj)->columnCountChanged(oldCount, newCount);
}
// columnMoved()
void c_QTreeView__columnMoved(void *thisObj) {
  fromWrapperPtr(thisObj)->columnMoved();
}
// columnResized(int column, int oldSize, int newSize)
void c_QTreeView__columnResized_int_int_int(void *thisObj, int column,
                                            int oldSize, int newSize) {
  fromWrapperPtr(thisObj)->columnResized(column, oldSize, newSize);
}
// columnViewportPosition(int column) const
int c_QTreeView__columnViewportPosition_int(void *thisObj, int column) {
  const auto &result = fromPtr(thisObj)->columnViewportPosition(column);
  return result;
}
// columnWidth(int column) const
int c_QTreeView__columnWidth_int(void *thisObj, int column) {
  const auto &result = fromPtr(thisObj)->columnWidth(column);
  return result;
}
// commitData(QWidget * editor)
void c_QTreeView__commitData_QWidget(void *thisObj, void *editor_) {
  auto editor = reinterpret_cast<QWidget *>(editor_);
  fromWrapperPtr(thisObj)->commitData_nocallback(editor);
}
// currentChanged(const QModelIndex & current, const QModelIndex & previous)
void c_QTreeView__currentChanged_QModelIndex_QModelIndex(void *thisObj,
                                                         void *current_,
                                                         void *previous_) {
  assert(current_);
  auto &current = *reinterpret_cast<QModelIndex *>(current_);
  assert(previous_);
  auto &previous = *reinterpret_cast<QModelIndex *>(previous_);
  fromWrapperPtr(thisObj)->currentChanged_nocallback(current, previous);
}
// customEvent(QEvent * event)
void c_QTreeView__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// dataChanged(const QModelIndex & topLeft, const QModelIndex & bottomRight,
// const QList<int > & roles)
void c_QTreeView__dataChanged_QModelIndex_QModelIndex_QList_int(
    void *thisObj, void *topLeft_, void *bottomRight_, void *roles_) {
  assert(topLeft_);
  auto &topLeft = *reinterpret_cast<QModelIndex *>(topLeft_);
  assert(bottomRight_);
  auto &bottomRight = *reinterpret_cast<QModelIndex *>(bottomRight_);
  assert(roles_);
  auto &roles = *reinterpret_cast<QList<int> *>(roles_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTreeView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->dataChanged_nocallback(topLeft, bottomRight, roles);
    } else {
      return targetPtr->dataChanged(topLeft, bottomRight, roles);
    }
  }();
}
// devType() const
int c_QTreeView__devType(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTreeView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->devType_nocallback();
    } else {
      return targetPtr->devType();
    }
  }();
  return result;
}
// doItemsLayout()
void c_QTreeView__doItemsLayout(void *thisObj) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTreeView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->doItemsLayout_nocallback();
    } else {
      return targetPtr->doItemsLayout();
    }
  }();
}
void c_QTreeView__onDoubleClicked_QModelIndex(void *thisObj,
                                              void *contextQObject,
                                              void *callback) {
  auto instance = reinterpret_cast<QTreeView *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QTreeView::doubleClicked,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// drawBranches(QPainter * painter, const QRect & rect, const QModelIndex &
// index) const
void c_QTreeView__drawBranches_QPainter_QRect_QModelIndex(void *thisObj,
                                                          void *painter_,
                                                          void *rect_,
                                                          void *index_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  assert(rect_);
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  fromWrapperPtr(thisObj)->drawBranches_nocallback(painter, rect, index);
}
// drawTree(QPainter * painter, const QRegion & region) const
void c_QTreeView__drawTree_QPainter_QRegion(void *thisObj, void *painter_,
                                            void *region_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  assert(region_);
  auto &region = *reinterpret_cast<QRegion *>(region_);
  fromWrapperPtr(thisObj)->drawTree(painter, region);
}
// editorDestroyed(QObject * editor)
void c_QTreeView__editorDestroyed_QObject(void *thisObj, void *editor_) {
  auto editor = reinterpret_cast<QObject *>(editor_);
  fromWrapperPtr(thisObj)->editorDestroyed_nocallback(editor);
}
void c_QTreeView__onEntered_QModelIndex(void *thisObj, void *contextQObject,
                                        void *callback) {
  auto instance = reinterpret_cast<QTreeView *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QTreeView::entered, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// event(QEvent * event)
bool c_QTreeView__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = fromWrapperPtr(thisObj)->event_nocallback(event);
  return result;
}
// eventFilter(QObject * object, QEvent * event)
bool c_QTreeView__eventFilter_QObject_QEvent(void *thisObj, void *object_,
                                             void *event_) {
  auto object = reinterpret_cast<QObject *>(object_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result =
      fromWrapperPtr(thisObj)->eventFilter_nocallback(object, event);
  return result;
}
// expand(const QModelIndex & index)
void c_QTreeView__expand_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  fromPtr(thisObj)->expand(index);
}
// expandAll()
void c_QTreeView__expandAll(void *thisObj) { fromPtr(thisObj)->expandAll(); }
// expandRecursively(const QModelIndex & index, int depth)
void c_QTreeView__expandRecursively_QModelIndex_int(void *thisObj, void *index_,
                                                    int depth) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  fromPtr(thisObj)->expandRecursively(index, depth);
}
// expandToDepth(int depth)
void c_QTreeView__expandToDepth_int(void *thisObj, int depth) {
  fromPtr(thisObj)->expandToDepth(depth);
}
// expanded(const QModelIndex & index)
void c_QTreeView__expanded_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  fromPtr(thisObj)->expanded(index);
}
void c_QTreeView__onExpanded_QModelIndex(void *thisObj, void *contextQObject,
                                         void *callback) {
  auto instance = reinterpret_cast<QTreeView *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QTreeView::expanded, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// expandsOnDoubleClick() const
bool c_QTreeView__expandsOnDoubleClick(void *thisObj) {
  const auto &result = fromPtr(thisObj)->expandsOnDoubleClick();
  return result;
}
// focusNextPrevChild(bool next)
bool c_QTreeView__focusNextPrevChild_bool(void *thisObj, bool next) {
  const auto &result =
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
  return result;
}
// hasHeightForWidth() const
bool c_QTreeView__hasHeightForWidth(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTreeView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->hasHeightForWidth_nocallback();
    } else {
      return targetPtr->hasHeightForWidth();
    }
  }();
  return result;
}
// heightForWidth(int arg__1) const
int c_QTreeView__heightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTreeView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->heightForWidth_nocallback(arg__1);
    } else {
      return targetPtr->heightForWidth(arg__1);
    }
  }();
  return result;
}
// hideColumn(int column)
void c_QTreeView__hideColumn_int(void *thisObj, int column) {
  fromPtr(thisObj)->hideColumn(column);
}
// horizontalOffset() const
int c_QTreeView__horizontalOffset(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->horizontalOffset_nocallback();
  return result;
}
// horizontalScrollbarAction(int action)
void c_QTreeView__horizontalScrollbarAction_int(void *thisObj, int action) {
  fromWrapperPtr(thisObj)->horizontalScrollbarAction_nocallback(action);
}
// horizontalScrollbarValueChanged(int value)
void c_QTreeView__horizontalScrollbarValueChanged_int(void *thisObj,
                                                      int value) {
  fromWrapperPtr(thisObj)->horizontalScrollbarValueChanged_nocallback(value);
}
void c_QTreeView__onIconSizeChanged_QSize(void *thisObj, void *contextQObject,
                                          void *callback) {
  auto instance = reinterpret_cast<QTreeView *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QTreeView::iconSizeChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// indentation() const
int c_QTreeView__indentation(void *thisObj) {
  const auto &result = fromPtr(thisObj)->indentation();
  return result;
}
// indexAbove(const QModelIndex & index) const
void *c_QTreeView__indexAbove_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{
      fromPtr(thisObj)->indexAbove(index)};
  return result;
}
// indexAt(const QPoint & p) const
void *c_QTreeView__indexAt_QPoint(void *thisObj, void *p_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPoint *>(p_);
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTreeView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->indexAt_nocallback(p);
    } else {
      return targetPtr->indexAt(p);
    }
  }()};
  return result;
}
// indexBelow(const QModelIndex & index) const
void *c_QTreeView__indexBelow_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{
      fromPtr(thisObj)->indexBelow(index)};
  return result;
}
// indexRowSizeHint(const QModelIndex & index) const
int c_QTreeView__indexRowSizeHint_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = fromWrapperPtr(thisObj)->indexRowSizeHint(index);
  return result;
}
// initPainter(QPainter * painter) const
void c_QTreeView__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}
// isAnimated() const
bool c_QTreeView__isAnimated(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isAnimated();
  return result;
}
// isColumnHidden(int column) const
bool c_QTreeView__isColumnHidden_int(void *thisObj, int column) {
  const auto &result = fromPtr(thisObj)->isColumnHidden(column);
  return result;
}
// isExpanded(const QModelIndex & index) const
bool c_QTreeView__isExpanded_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = fromPtr(thisObj)->isExpanded(index);
  return result;
}
// isFirstColumnSpanned(int row, const QModelIndex & parent) const
bool c_QTreeView__isFirstColumnSpanned_int_QModelIndex(void *thisObj, int row,
                                                       void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = fromPtr(thisObj)->isFirstColumnSpanned(row, parent);
  return result;
}
// isHeaderHidden() const
bool c_QTreeView__isHeaderHidden(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isHeaderHidden();
  return result;
}
// isIndexHidden(const QModelIndex & index) const
bool c_QTreeView__isIndexHidden_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = fromWrapperPtr(thisObj)->isIndexHidden_nocallback(index);
  return result;
}
// isRowHidden(int row, const QModelIndex & parent) const
bool c_QTreeView__isRowHidden_int_QModelIndex(void *thisObj, int row,
                                              void *parent_) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  const auto &result = fromPtr(thisObj)->isRowHidden(row, parent);
  return result;
}
// isSortingEnabled() const
bool c_QTreeView__isSortingEnabled(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isSortingEnabled();
  return result;
}
// itemsExpandable() const
bool c_QTreeView__itemsExpandable(void *thisObj) {
  const auto &result = fromPtr(thisObj)->itemsExpandable();
  return result;
}
// keyboardSearch(const QString & search)
void c_QTreeView__keyboardSearch_QString(void *thisObj, const char *search_) {
  const auto search = QString::fromUtf8(search_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTreeView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->keyboardSearch_nocallback(search);
    } else {
      return targetPtr->keyboardSearch(search);
    }
  }();
  free((char *)search_);
}
// leaveEvent(QEvent * event)
void c_QTreeView__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}
// minimumSizeHint() const
void *c_QTreeView__minimumSizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTreeView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->minimumSizeHint_nocallback();
    } else {
      return targetPtr->minimumSizeHint();
    }
  }()};
  return result;
}
// mouseDoubleClickEvent(QMouseEvent * event)
void c_QTreeView__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                    void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}
// mouseMoveEvent(QMouseEvent * event)
void c_QTreeView__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(event);
}
// mousePressEvent(QMouseEvent * event)
void c_QTreeView__mousePressEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(event);
}
// mouseReleaseEvent(QMouseEvent * event)
void c_QTreeView__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(event);
}
// moveCursor(QAbstractItemView::CursorAction cursorAction,
// QFlags<Qt::KeyboardModifier> modifiers)
void *c_QTreeView__moveCursor_CursorAction_KeyboardModifiers(void *thisObj,
                                                             int cursorAction,
                                                             int modifiers_) {
  auto modifiers = static_cast<QFlags<Qt::KeyboardModifier>>(modifiers_);
  const auto &result = new Dartagnan::ValueWrapper<
      QModelIndex>{fromWrapperPtr(thisObj)->moveCursor_nocallback(
      static_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::CursorAction>(
          cursorAction),
      modifiers)};
  return result;
}
// paintEvent(QPaintEvent * event)
void c_QTreeView__paintEvent_QPaintEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QPaintEvent *>(event_);
  fromWrapperPtr(thisObj)->paintEvent_nocallback(event);
}
void c_QTreeView__onPressed_QModelIndex(void *thisObj, void *contextQObject,
                                        void *callback) {
  auto instance = reinterpret_cast<QTreeView *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QTreeView::pressed, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// reexpand()
void c_QTreeView__reexpand(void *thisObj) {
  fromWrapperPtr(thisObj)->reexpand();
}
// reset()
void c_QTreeView__reset(void *thisObj) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTreeView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->reset_nocallback();
    } else {
      return targetPtr->reset();
    }
  }();
}
// resetIndentation()
void c_QTreeView__resetIndentation(void *thisObj) {
  fromPtr(thisObj)->resetIndentation();
}
// resizeColumnToContents(int column)
void c_QTreeView__resizeColumnToContents_int(void *thisObj, int column) {
  fromPtr(thisObj)->resizeColumnToContents(column);
}
// rootIsDecorated() const
bool c_QTreeView__rootIsDecorated(void *thisObj) {
  const auto &result = fromPtr(thisObj)->rootIsDecorated();
  return result;
}
// rowHeight(const QModelIndex & index) const
int c_QTreeView__rowHeight_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = fromWrapperPtr(thisObj)->rowHeight(index);
  return result;
}
// rowsAboutToBeRemoved(const QModelIndex & parent, int start, int end)
void c_QTreeView__rowsAboutToBeRemoved_QModelIndex_int_int(void *thisObj,
                                                           void *parent_,
                                                           int start, int end) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  fromWrapperPtr(thisObj)->rowsAboutToBeRemoved_nocallback(parent, start, end);
}
// rowsInserted(const QModelIndex & parent, int start, int end)
void c_QTreeView__rowsInserted_QModelIndex_int_int(void *thisObj, void *parent_,
                                                   int start, int end) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  fromWrapperPtr(thisObj)->rowsInserted_nocallback(parent, start, end);
}
// rowsRemoved(const QModelIndex & parent, int first, int last)
void c_QTreeView__rowsRemoved_QModelIndex_int_int(void *thisObj, void *parent_,
                                                  int first, int last) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  fromWrapperPtr(thisObj)->rowsRemoved(parent, first, last);
}
// scrollContentsBy(int dx, int dy)
void c_QTreeView__scrollContentsBy_int_int(void *thisObj, int dx, int dy) {
  fromWrapperPtr(thisObj)->scrollContentsBy_nocallback(dx, dy);
}
// scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint hint)
void c_QTreeView__scrollTo_QModelIndex_ScrollHint(void *thisObj, void *index_,
                                                  int hint) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTreeView_wrapper *>(targetPtr);
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
void c_QTreeView__selectAll(void *thisObj) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTreeView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->selectAll_nocallback();
    } else {
      return targetPtr->selectAll();
    }
  }();
}
// selectedIndexes() const
void *c_QTreeView__selectedIndexes(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QModelIndex>>{
      fromWrapperPtr(thisObj)->selectedIndexes_nocallback()};
  return result;
}
// selectionChanged(const QItemSelection & selected, const QItemSelection &
// deselected)
void c_QTreeView__selectionChanged_QItemSelection_QItemSelection(
    void *thisObj, void *selected_, void *deselected_) {
  assert(selected_);
  auto &selected = *reinterpret_cast<QItemSelection *>(selected_);
  assert(deselected_);
  auto &deselected = *reinterpret_cast<QItemSelection *>(deselected_);
  fromWrapperPtr(thisObj)->selectionChanged_nocallback(selected, deselected);
}
// selectionCommand(const QModelIndex & index, const QEvent * event) const
int c_QTreeView__selectionCommand_QModelIndex_QEvent(void *thisObj,
                                                     void *index_,
                                                     void *event_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result =
      fromWrapperPtr(thisObj)->selectionCommand_nocallback(index, event);
  return result;
}
// setAllColumnsShowFocus(bool enable)
void c_QTreeView__setAllColumnsShowFocus_bool(void *thisObj, bool enable) {
  fromPtr(thisObj)->setAllColumnsShowFocus(enable);
}
// setAnimated(bool enable)
void c_QTreeView__setAnimated_bool(void *thisObj, bool enable) {
  fromPtr(thisObj)->setAnimated(enable);
}
// setAutoExpandDelay(int delay)
void c_QTreeView__setAutoExpandDelay_int(void *thisObj, int delay) {
  fromPtr(thisObj)->setAutoExpandDelay(delay);
}
// setColumnHidden(int column, bool hide)
void c_QTreeView__setColumnHidden_int_bool(void *thisObj, int column,
                                           bool hide) {
  fromPtr(thisObj)->setColumnHidden(column, hide);
}
// setColumnWidth(int column, int width)
void c_QTreeView__setColumnWidth_int_int(void *thisObj, int column, int width) {
  fromPtr(thisObj)->setColumnWidth(column, width);
}
// setExpanded(const QModelIndex & index, bool expand)
void c_QTreeView__setExpanded_QModelIndex_bool(void *thisObj, void *index_,
                                               bool expand) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  fromPtr(thisObj)->setExpanded(index, expand);
}
// setExpandsOnDoubleClick(bool enable)
void c_QTreeView__setExpandsOnDoubleClick_bool(void *thisObj, bool enable) {
  fromPtr(thisObj)->setExpandsOnDoubleClick(enable);
}
// setFirstColumnSpanned(int row, const QModelIndex & parent, bool span)
void c_QTreeView__setFirstColumnSpanned_int_QModelIndex_bool(void *thisObj,
                                                             int row,
                                                             void *parent_,
                                                             bool span) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  fromPtr(thisObj)->setFirstColumnSpanned(row, parent, span);
}
// setHeaderHidden(bool hide)
void c_QTreeView__setHeaderHidden_bool(void *thisObj, bool hide) {
  fromPtr(thisObj)->setHeaderHidden(hide);
}
// setIndentation(int i)
void c_QTreeView__setIndentation_int(void *thisObj, int i) {
  fromPtr(thisObj)->setIndentation(i);
}
// setItemsExpandable(bool enable)
void c_QTreeView__setItemsExpandable_bool(void *thisObj, bool enable) {
  fromPtr(thisObj)->setItemsExpandable(enable);
}
// setModel(QAbstractItemModel * model)
void c_QTreeView__setModel_QAbstractItemModel(void *thisObj, void *model_) {
  auto model = reinterpret_cast<QAbstractItemModel *>(model_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTreeView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setModel_nocallback(model);
    } else {
      return targetPtr->setModel(model);
    }
  }();
}
// setRootIndex(const QModelIndex & index)
void c_QTreeView__setRootIndex_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTreeView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setRootIndex_nocallback(index);
    } else {
      return targetPtr->setRootIndex(index);
    }
  }();
}
// setRootIsDecorated(bool show)
void c_QTreeView__setRootIsDecorated_bool(void *thisObj, bool show) {
  fromPtr(thisObj)->setRootIsDecorated(show);
}
// setRowHidden(int row, const QModelIndex & parent, bool hide)
void c_QTreeView__setRowHidden_int_QModelIndex_bool(void *thisObj, int row,
                                                    void *parent_, bool hide) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  fromPtr(thisObj)->setRowHidden(row, parent, hide);
}
// setSelection(const QRect & rect, QFlags<QItemSelectionModel::SelectionFlag>
// command)
void c_QTreeView__setSelection_QRect_SelectionFlags(void *thisObj, void *rect_,
                                                    int command_) {
  assert(rect_);
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  auto command =
      static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command_);
  fromWrapperPtr(thisObj)->setSelection_nocallback(rect, command);
}
// setSelectionModel(QItemSelectionModel * selectionModel)
void c_QTreeView__setSelectionModel_QItemSelectionModel(void *thisObj,
                                                        void *selectionModel_) {
  auto selectionModel =
      reinterpret_cast<QItemSelectionModel *>(selectionModel_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTreeView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setSelectionModel_nocallback(selectionModel);
    } else {
      return targetPtr->setSelectionModel(selectionModel);
    }
  }();
}
// setSortingEnabled(bool enable)
void c_QTreeView__setSortingEnabled_bool(void *thisObj, bool enable) {
  fromPtr(thisObj)->setSortingEnabled(enable);
}
// setTreePosition(int logicalIndex)
void c_QTreeView__setTreePosition_int(void *thisObj, int logicalIndex) {
  fromPtr(thisObj)->setTreePosition(logicalIndex);
}
// setUniformRowHeights(bool uniform)
void c_QTreeView__setUniformRowHeights_bool(void *thisObj, bool uniform) {
  fromPtr(thisObj)->setUniformRowHeights(uniform);
}
// setVisible(bool visible)
void c_QTreeView__setVisible_bool(void *thisObj, bool visible) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTreeView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}
// setWordWrap(bool on)
void c_QTreeView__setWordWrap_bool(void *thisObj, bool on) {
  fromPtr(thisObj)->setWordWrap(on);
}
// setupViewport(QWidget * viewport)
void c_QTreeView__setupViewport_QWidget(void *thisObj, void *viewport_) {
  auto viewport = reinterpret_cast<QWidget *>(viewport_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTreeView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setupViewport_nocallback(viewport);
    } else {
      return targetPtr->setupViewport(viewport);
    }
  }();
}
// sharedPainter() const
void *c_QTreeView__sharedPainter(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->sharedPainter_nocallback();
  return result;
}
// showColumn(int column)
void c_QTreeView__showColumn_int(void *thisObj, int column) {
  fromPtr(thisObj)->showColumn(column);
}
// sizeHint() const
void *c_QTreeView__sizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTreeView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->sizeHint_nocallback();
    } else {
      return targetPtr->sizeHint();
    }
  }()};
  return result;
}
// sizeHintForColumn(int column) const
int c_QTreeView__sizeHintForColumn_int(void *thisObj, int column) {
  const auto &result =
      fromWrapperPtr(thisObj)->sizeHintForColumn_nocallback(column);
  return result;
}
// sizeHintForRow(int row) const
int c_QTreeView__sizeHintForRow_int(void *thisObj, int row) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTreeView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->sizeHintForRow_nocallback(row);
    } else {
      return targetPtr->sizeHintForRow(row);
    }
  }();
  return result;
}
// sortByColumn(int column, Qt::SortOrder order)
void c_QTreeView__sortByColumn_int_SortOrder(void *thisObj, int column,
                                             int order) {
  fromPtr(thisObj)->sortByColumn(column, static_cast<Qt::SortOrder>(order));
}
// tr(const char * s, const char * c, int n)
void *c_static_QTreeView__tr_char_char_int(const char *s, const char *c,
                                           int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QTreeView_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
// treePosition() const
int c_QTreeView__treePosition(void *thisObj) {
  const auto &result = fromPtr(thisObj)->treePosition();
  return result;
}
// uniformRowHeights() const
bool c_QTreeView__uniformRowHeights(void *thisObj) {
  const auto &result = fromPtr(thisObj)->uniformRowHeights();
  return result;
}
// updateEditorData()
void c_QTreeView__updateEditorData(void *thisObj) {
  fromWrapperPtr(thisObj)->updateEditorData_nocallback();
}
// updateEditorGeometries()
void c_QTreeView__updateEditorGeometries(void *thisObj) {
  fromWrapperPtr(thisObj)->updateEditorGeometries_nocallback();
}
// updateGeometries()
void c_QTreeView__updateGeometries(void *thisObj) {
  fromWrapperPtr(thisObj)->updateGeometries_nocallback();
}
// verticalOffset() const
int c_QTreeView__verticalOffset(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->verticalOffset_nocallback();
  return result;
}
// verticalScrollbarAction(int action)
void c_QTreeView__verticalScrollbarAction_int(void *thisObj, int action) {
  fromWrapperPtr(thisObj)->verticalScrollbarAction_nocallback(action);
}
// verticalScrollbarValueChanged(int value)
void c_QTreeView__verticalScrollbarValueChanged_int(void *thisObj, int value) {
  fromWrapperPtr(thisObj)->verticalScrollbarValueChanged_nocallback(value);
}
void c_QTreeView__onViewportEntered(void *thisObj, void *contextQObject,
                                    void *callback) {
  auto instance = reinterpret_cast<QTreeView *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QTreeView::viewportEntered,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// viewportEvent(QEvent * event)
bool c_QTreeView__viewportEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = fromWrapperPtr(thisObj)->viewportEvent_nocallback(event);
  return result;
}
// viewportSizeHint() const
void *c_QTreeView__viewportSizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{
      fromWrapperPtr(thisObj)->viewportSizeHint_nocallback()};
  return result;
}
// visualRect(const QModelIndex & index) const
void *c_QTreeView__visualRect_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = new Dartagnan::ValueWrapper<QRect>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QTreeView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->visualRect_nocallback(index);
    } else {
      return targetPtr->visualRect(index);
    }
  }()};
  return result;
}
// visualRegionForSelection(const QItemSelection & selection) const
void *c_QTreeView__visualRegionForSelection_QItemSelection(void *thisObj,
                                                           void *selection_) {
  assert(selection_);
  auto &selection = *reinterpret_cast<QItemSelection *>(selection_);
  const auto &result = new Dartagnan::ValueWrapper<QRegion>{
      fromWrapperPtr(thisObj)->visualRegionForSelection_nocallback(selection)};
  return result;
}
// wordWrap() const
bool c_QTreeView__wordWrap(void *thisObj) {
  const auto &result = fromPtr(thisObj)->wordWrap();
  return result;
}
void c_QTreeView__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QTreeView__registerVirtualMethodCallback(void *ptr, void *callback,
                                                int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1128:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 5397:
    wrapper->m_commitDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_commitData>(
        callback);
    break;
  case 5399:
    wrapper->m_currentChangedCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_currentChanged>(
        callback);
    break;
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_customEvent>(
        callback);
    break;
  case 5401:
    wrapper->m_dataChangedCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_dataChanged>(
        callback);
    break;
  case 1145:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_devType>(
        callback);
    break;
  case 5404:
    wrapper->m_doItemsLayoutCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_doItemsLayout>(
        callback);
    break;
  case 5505:
    wrapper->m_drawBranchesCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_drawBranches>(
        callback);
    break;
  case 5409:
    wrapper->m_editorDestroyedCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_editorDestroyed>(
        callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_event>(callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1155:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1169:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 1173:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 5413:
    wrapper->m_horizontalOffsetCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_horizontalOffset>(callback);
    break;
  case 5414:
    wrapper->m_horizontalScrollbarActionCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_horizontalScrollbarAction>(callback);
    break;
  case 5415:
    wrapper->m_horizontalScrollbarValueChangedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_horizontalScrollbarValueChanged>(
            callback);
    break;
  case 5418:
    wrapper->m_indexAtCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_indexAt>(
        callback);
    break;
  case 1176:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_initPainter>(
        callback);
    break;
  case 5420:
    wrapper->m_isIndexHiddenCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_isIndexHidden>(
        callback);
    break;
  case 5422:
    wrapper->m_keyboardSearchCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_keyboardSearch>(
        callback);
    break;
  case 1202:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1222:
    wrapper->m_minimumSizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_minimumSizeHint>(
        callback);
    break;
  case 1224:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1226:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_mouseMoveEvent>(
        callback);
    break;
  case 1227:
    wrapper->m_mousePressEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_mousePressEvent>(
        callback);
    break;
  case 1228:
    wrapper->m_mouseReleaseEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_mouseReleaseEvent>(callback);
    break;
  case 5425:
    wrapper->m_moveCursorCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_moveCursor>(
        callback);
    break;
  case 1235:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 5428:
    wrapper->m_resetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_reset>(callback);
    break;
  case 5432:
    wrapper->m_rowsAboutToBeRemovedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_rowsAboutToBeRemoved>(callback);
    break;
  case 5433:
    wrapper->m_rowsInsertedCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_rowsInserted>(
        callback);
    break;
  case 5218:
    wrapper->m_scrollContentsByCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_scrollContentsBy>(callback);
    break;
  case 5436:
    wrapper->m_scrollToCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_scrollTo>(
        callback);
    break;
  case 5439:
    wrapper->m_selectAllCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_selectAll>(
        callback);
    break;
  case 5440:
    wrapper->m_selectedIndexesCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_selectedIndexes>(
        callback);
    break;
  case 5441:
    wrapper->m_selectionChangedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_selectionChanged>(callback);
    break;
  case 5442:
    wrapper->m_selectionCommandCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_selectionCommand>(callback);
    break;
  case 5455:
    wrapper->m_setModelCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_setModel>(
        callback);
    break;
  case 5456:
    wrapper->m_setRootIndexCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_setRootIndex>(
        callback);
    break;
  case 5457:
    wrapper->m_setSelectionCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_setSelection>(
        callback);
    break;
  case 5458:
    wrapper->m_setSelectionModelCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_setSelectionModel>(callback);
    break;
  case 1314:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_setVisible>(
        callback);
    break;
  case 5226:
    wrapper->m_setupViewportCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_setupViewport>(
        callback);
    break;
  case 1323:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1331:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_sizeHint>(
        callback);
    break;
  case 5463:
    wrapper->m_sizeHintForColumnCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_sizeHintForColumn>(callback);
    break;
  case 5465:
    wrapper->m_sizeHintForRowCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_sizeHintForRow>(
        callback);
    break;
  case 5471:
    wrapper->m_updateEditorDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_updateEditorData>(callback);
    break;
  case 5472:
    wrapper->m_updateEditorGeometriesCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_updateEditorGeometries>(callback);
    break;
  case 5473:
    wrapper->m_updateGeometriesCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_updateGeometries>(callback);
    break;
  case 5474:
    wrapper->m_verticalOffsetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_verticalOffset>(
        callback);
    break;
  case 5475:
    wrapper->m_verticalScrollbarActionCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_verticalScrollbarAction>(callback);
    break;
  case 5476:
    wrapper->m_verticalScrollbarValueChangedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_verticalScrollbarValueChanged>(callback);
    break;
  case 5229:
    wrapper->m_viewportEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_viewportEvent>(
        callback);
    break;
  case 5230:
    wrapper->m_viewportSizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_viewportSizeHint>(callback);
    break;
  case 5479:
    wrapper->m_visualRectCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_visualRect>(
        callback);
    break;
  case 5480:
    wrapper->m_visualRegionForSelectionCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_visualRegionForSelection>(callback);
    break;
  }
}
}
