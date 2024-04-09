/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QListView_c.h"

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
QListView_wrapper::QListView_wrapper(QWidget *parent) : ::QListView(parent) {}
int QListView_wrapper::batchSize() const { return ::QListView::batchSize(); }
void QListView_wrapper::changeEvent(QEvent *arg__1) {
  if (m_changeEventCallback) {
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QListView::changeEvent(arg__1);
  }
}
void QListView_wrapper::changeEvent_nocallback(QEvent *arg__1) {
  ::QListView::changeEvent(arg__1);
}
void QListView_wrapper::clearPropertyFlags() {
  ::QListView::clearPropertyFlags();
}
void QListView_wrapper::commitData(QWidget *editor) {
  if (m_commitDataCallback) {
    const void *thisPtr = this;
    m_commitDataCallback(const_cast<void *>(thisPtr), editor);
  } else {
    ::QListView::commitData(editor);
  }
}
void QListView_wrapper::commitData_nocallback(QWidget *editor) {
  ::QListView::commitData(editor);
}
QSize QListView_wrapper::contentsSize() const {
  return ::QListView::contentsSize();
}
void QListView_wrapper::currentChanged(const QModelIndex &current,
                                       const QModelIndex &previous) {
  if (m_currentChangedCallback) {
    const void *thisPtr = this;
    m_currentChangedCallback(const_cast<void *>(thisPtr), current, previous);
  } else {
    ::QListView::currentChanged(current, previous);
  }
}
void QListView_wrapper::currentChanged_nocallback(const QModelIndex &current,
                                                  const QModelIndex &previous) {
  ::QListView::currentChanged(current, previous);
}
void QListView_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QListView::customEvent(event);
  }
}
void QListView_wrapper::customEvent_nocallback(QEvent *event) {
  ::QListView::customEvent(event);
}
void QListView_wrapper::dataChanged(const QModelIndex &topLeft,
                                    const QModelIndex &bottomRight,
                                    const QList<int> &roles) {
  if (m_dataChangedCallback) {
    const void *thisPtr = this;
    m_dataChangedCallback(const_cast<void *>(thisPtr), topLeft, bottomRight,
                          roles);
  } else {
    ::QListView::dataChanged(topLeft, bottomRight, roles);
  }
}
void QListView_wrapper::dataChanged_nocallback(const QModelIndex &topLeft,
                                               const QModelIndex &bottomRight,
                                               const QList<int> &roles) {
  ::QListView::dataChanged(topLeft, bottomRight, roles);
}
int QListView_wrapper::devType() const {
  if (m_devTypeCallback) {
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QListView::devType();
  }
}
int QListView_wrapper::devType_nocallback() const {
  return ::QListView::devType();
}
void QListView_wrapper::doItemsLayout() {
  if (m_doItemsLayoutCallback) {
    const void *thisPtr = this;
    m_doItemsLayoutCallback(const_cast<void *>(thisPtr));
  } else {
    ::QListView::doItemsLayout();
  }
}
void QListView_wrapper::doItemsLayout_nocallback() {
  ::QListView::doItemsLayout();
}
void QListView_wrapper::editorDestroyed(QObject *editor) {
  if (m_editorDestroyedCallback) {
    const void *thisPtr = this;
    m_editorDestroyedCallback(const_cast<void *>(thisPtr), editor);
  } else {
    ::QListView::editorDestroyed(editor);
  }
}
void QListView_wrapper::editorDestroyed_nocallback(QObject *editor) {
  ::QListView::editorDestroyed(editor);
}
bool QListView_wrapper::event(QEvent *e) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), e);
  } else {
    return ::QListView::event(e);
  }
}
bool QListView_wrapper::event_nocallback(QEvent *e) {
  return ::QListView::event(e);
}
bool QListView_wrapper::eventFilter(QObject *object, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), object, event);
  } else {
    return ::QListView::eventFilter(object, event);
  }
}
bool QListView_wrapper::eventFilter_nocallback(QObject *object, QEvent *event) {
  return ::QListView::eventFilter(object, event);
}
bool QListView_wrapper::focusNextPrevChild(bool next) {
  if (m_focusNextPrevChildCallback) {
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    return ::QListView::focusNextPrevChild(next);
  }
}
bool QListView_wrapper::focusNextPrevChild_nocallback(bool next) {
  return ::QListView::focusNextPrevChild(next);
}
QSize QListView_wrapper::gridSize() const { return ::QListView::gridSize(); }
bool QListView_wrapper::hasHeightForWidth() const {
  if (m_hasHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QListView::hasHeightForWidth();
  }
}
bool QListView_wrapper::hasHeightForWidth_nocallback() const {
  return ::QListView::hasHeightForWidth();
}
int QListView_wrapper::heightForWidth(int arg__1) const {
  if (m_heightForWidthCallback) {
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QListView::heightForWidth(arg__1);
  }
}
int QListView_wrapper::heightForWidth_nocallback(int arg__1) const {
  return ::QListView::heightForWidth(arg__1);
}
int QListView_wrapper::horizontalOffset() const {
  if (m_horizontalOffsetCallback) {
    const void *thisPtr = this;
    return m_horizontalOffsetCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QListView::horizontalOffset();
  }
}
int QListView_wrapper::horizontalOffset_nocallback() const {
  return ::QListView::horizontalOffset();
}
void QListView_wrapper::horizontalScrollbarAction(int action) {
  if (m_horizontalScrollbarActionCallback) {
    const void *thisPtr = this;
    m_horizontalScrollbarActionCallback(const_cast<void *>(thisPtr), action);
  } else {
    ::QListView::horizontalScrollbarAction(action);
  }
}
void QListView_wrapper::horizontalScrollbarAction_nocallback(int action) {
  ::QListView::horizontalScrollbarAction(action);
}
void QListView_wrapper::horizontalScrollbarValueChanged(int value) {
  if (m_horizontalScrollbarValueChangedCallback) {
    const void *thisPtr = this;
    m_horizontalScrollbarValueChangedCallback(const_cast<void *>(thisPtr),
                                              value);
  } else {
    ::QListView::horizontalScrollbarValueChanged(value);
  }
}
void QListView_wrapper::horizontalScrollbarValueChanged_nocallback(int value) {
  ::QListView::horizontalScrollbarValueChanged(value);
}
QModelIndex QListView_wrapper::indexAt(const QPoint &p) const {
  if (m_indexAtCallback) {
    const void *thisPtr = this;
    return *m_indexAtCallback(const_cast<void *>(thisPtr), p);
  } else {
    return ::QListView::indexAt(p);
  }
}
QModelIndex QListView_wrapper::indexAt_nocallback(const QPoint &p) const {
  return ::QListView::indexAt(p);
}
void QListView_wrapper::indexesMoved(const QList<QModelIndex> &indexes) {
  ::QListView::indexesMoved(indexes);
}
void QListView_wrapper::initPainter(QPainter *painter) const {
  if (m_initPainterCallback) {
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    ::QListView::initPainter(painter);
  }
}
void QListView_wrapper::initPainter_nocallback(QPainter *painter) const {
  ::QListView::initPainter(painter);
}
bool QListView_wrapper::isIndexHidden(const QModelIndex &index) const {
  if (m_isIndexHiddenCallback) {
    const void *thisPtr = this;
    return m_isIndexHiddenCallback(const_cast<void *>(thisPtr), index);
  } else {
    return ::QListView::isIndexHidden(index);
  }
}
bool QListView_wrapper::isIndexHidden_nocallback(
    const QModelIndex &index) const {
  return ::QListView::isIndexHidden(index);
}
bool QListView_wrapper::isRowHidden(int row) const {
  return ::QListView::isRowHidden(row);
}
bool QListView_wrapper::isSelectionRectVisible() const {
  return ::QListView::isSelectionRectVisible();
}
bool QListView_wrapper::isWrapping() const { return ::QListView::isWrapping(); }
void QListView_wrapper::keyboardSearch(const QString &search) {
  if (m_keyboardSearchCallback) {
    const void *thisPtr = this;
    m_keyboardSearchCallback(const_cast<void *>(thisPtr), search);
  } else {
    ::QListView::keyboardSearch(search);
  }
}
void QListView_wrapper::keyboardSearch_nocallback(const QString &search) {
  ::QListView::keyboardSearch(search);
}
void QListView_wrapper::leaveEvent(QEvent *event) {
  if (m_leaveEventCallback) {
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QListView::leaveEvent(event);
  }
}
void QListView_wrapper::leaveEvent_nocallback(QEvent *event) {
  ::QListView::leaveEvent(event);
}
QSize QListView_wrapper::minimumSizeHint() const {
  if (m_minimumSizeHintCallback) {
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QListView::minimumSizeHint();
  }
}
QSize QListView_wrapper::minimumSizeHint_nocallback() const {
  return ::QListView::minimumSizeHint();
}
int QListView_wrapper::modelColumn() const {
  return ::QListView::modelColumn();
}
void QListView_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  if (m_mouseDoubleClickEventCallback) {
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QListView::mouseDoubleClickEvent(event);
  }
}
void QListView_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *event) {
  ::QListView::mouseDoubleClickEvent(event);
}
void QListView_wrapper::mouseMoveEvent(QMouseEvent *e) {
  if (m_mouseMoveEventCallback) {
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    ::QListView::mouseMoveEvent(e);
  }
}
void QListView_wrapper::mouseMoveEvent_nocallback(QMouseEvent *e) {
  ::QListView::mouseMoveEvent(e);
}
void QListView_wrapper::mousePressEvent(QMouseEvent *event) {
  if (m_mousePressEventCallback) {
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QListView::mousePressEvent(event);
  }
}
void QListView_wrapper::mousePressEvent_nocallback(QMouseEvent *event) {
  ::QListView::mousePressEvent(event);
}
void QListView_wrapper::mouseReleaseEvent(QMouseEvent *e) {
  if (m_mouseReleaseEventCallback) {
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    ::QListView::mouseReleaseEvent(e);
  }
}
void QListView_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *e) {
  ::QListView::mouseReleaseEvent(e);
}
QModelIndex
QListView_wrapper::moveCursor(QAbstractItemView::CursorAction cursorAction,
                              QFlags<Qt::KeyboardModifier> modifiers) {
  if (m_moveCursorCallback) {
    const void *thisPtr = this;
    return *m_moveCursorCallback(const_cast<void *>(thisPtr), cursorAction,
                                 modifiers);
  } else {
    return ::QListView::moveCursor(cursorAction, modifiers);
  }
}
QModelIndex QListView_wrapper::moveCursor_nocallback(
    QAbstractItemView::CursorAction cursorAction,
    QFlags<Qt::KeyboardModifier> modifiers) {
  return ::QListView::moveCursor(cursorAction, modifiers);
}
void QListView_wrapper::paintEvent(QPaintEvent *e) {
  if (m_paintEventCallback) {
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    ::QListView::paintEvent(e);
  }
}
void QListView_wrapper::paintEvent_nocallback(QPaintEvent *e) {
  ::QListView::paintEvent(e);
}
QRect QListView_wrapper::rectForIndex(const QModelIndex &index) const {
  return ::QListView::rectForIndex(index);
}
void QListView_wrapper::reset() {
  if (m_resetCallback) {
    const void *thisPtr = this;
    m_resetCallback(const_cast<void *>(thisPtr));
  } else {
    ::QListView::reset();
  }
}
void QListView_wrapper::reset_nocallback() { ::QListView::reset(); }
void QListView_wrapper::resizeContents(int width, int height) {
  ::QListView::resizeContents(width, height);
}
void QListView_wrapper::rowsAboutToBeRemoved(const QModelIndex &parent,
                                             int start, int end) {
  if (m_rowsAboutToBeRemovedCallback) {
    const void *thisPtr = this;
    m_rowsAboutToBeRemovedCallback(const_cast<void *>(thisPtr), parent, start,
                                   end);
  } else {
    ::QListView::rowsAboutToBeRemoved(parent, start, end);
  }
}
void QListView_wrapper::rowsAboutToBeRemoved_nocallback(
    const QModelIndex &parent, int start, int end) {
  ::QListView::rowsAboutToBeRemoved(parent, start, end);
}
void QListView_wrapper::rowsInserted(const QModelIndex &parent, int start,
                                     int end) {
  if (m_rowsInsertedCallback) {
    const void *thisPtr = this;
    m_rowsInsertedCallback(const_cast<void *>(thisPtr), parent, start, end);
  } else {
    ::QListView::rowsInserted(parent, start, end);
  }
}
void QListView_wrapper::rowsInserted_nocallback(const QModelIndex &parent,
                                                int start, int end) {
  ::QListView::rowsInserted(parent, start, end);
}
void QListView_wrapper::scrollContentsBy(int dx, int dy) {
  if (m_scrollContentsByCallback) {
    const void *thisPtr = this;
    m_scrollContentsByCallback(const_cast<void *>(thisPtr), dx, dy);
  } else {
    ::QListView::scrollContentsBy(dx, dy);
  }
}
void QListView_wrapper::scrollContentsBy_nocallback(int dx, int dy) {
  ::QListView::scrollContentsBy(dx, dy);
}
void QListView_wrapper::scrollTo(const QModelIndex &index,
                                 QAbstractItemView::ScrollHint hint) {
  if (m_scrollToCallback) {
    const void *thisPtr = this;
    m_scrollToCallback(const_cast<void *>(thisPtr), index, hint);
  } else {
    ::QListView::scrollTo(index, hint);
  }
}
void QListView_wrapper::scrollTo_nocallback(
    const QModelIndex &index, QAbstractItemView::ScrollHint hint) {
  ::QListView::scrollTo(index, hint);
}
void QListView_wrapper::selectAll() {
  if (m_selectAllCallback) {
    const void *thisPtr = this;
    m_selectAllCallback(const_cast<void *>(thisPtr));
  } else {
    ::QListView::selectAll();
  }
}
void QListView_wrapper::selectAll_nocallback() { ::QListView::selectAll(); }
QList<QModelIndex> QListView_wrapper::selectedIndexes() const {
  if (m_selectedIndexesCallback) {
    const void *thisPtr = this;
    return *m_selectedIndexesCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QListView::selectedIndexes();
  }
}
QList<QModelIndex> QListView_wrapper::selectedIndexes_nocallback() const {
  return ::QListView::selectedIndexes();
}
void QListView_wrapper::selectionChanged(const QItemSelection &selected,
                                         const QItemSelection &deselected) {
  if (m_selectionChangedCallback) {
    const void *thisPtr = this;
    m_selectionChangedCallback(const_cast<void *>(thisPtr), selected,
                               deselected);
  } else {
    ::QListView::selectionChanged(selected, deselected);
  }
}
void QListView_wrapper::selectionChanged_nocallback(
    const QItemSelection &selected, const QItemSelection &deselected) {
  ::QListView::selectionChanged(selected, deselected);
}
QFlags<QItemSelectionModel::SelectionFlag>
QListView_wrapper::selectionCommand(const QModelIndex &index,
                                    const QEvent *event) const {
  if (m_selectionCommandCallback) {
    const void *thisPtr = this;
    return m_selectionCommandCallback(const_cast<void *>(thisPtr), index,
                                      event);
  } else {
    return ::QListView::selectionCommand(index, event);
  }
}
QFlags<QItemSelectionModel::SelectionFlag>
QListView_wrapper::selectionCommand_nocallback(const QModelIndex &index,
                                               const QEvent *event) const {
  return ::QListView::selectionCommand(index, event);
}
void QListView_wrapper::setBatchSize(int batchSize) {
  ::QListView::setBatchSize(batchSize);
}
void QListView_wrapper::setGridSize(const QSize &size) {
  ::QListView::setGridSize(size);
}
void QListView_wrapper::setModel(QAbstractItemModel *model) {
  if (m_setModelCallback) {
    const void *thisPtr = this;
    m_setModelCallback(const_cast<void *>(thisPtr), model);
  } else {
    ::QListView::setModel(model);
  }
}
void QListView_wrapper::setModel_nocallback(QAbstractItemModel *model) {
  ::QListView::setModel(model);
}
void QListView_wrapper::setModelColumn(int column) {
  ::QListView::setModelColumn(column);
}
void QListView_wrapper::setPositionForIndex(const QPoint &position,
                                            const QModelIndex &index) {
  ::QListView::setPositionForIndex(position, index);
}
void QListView_wrapper::setRootIndex(const QModelIndex &index) {
  if (m_setRootIndexCallback) {
    const void *thisPtr = this;
    m_setRootIndexCallback(const_cast<void *>(thisPtr), index);
  } else {
    ::QListView::setRootIndex(index);
  }
}
void QListView_wrapper::setRootIndex_nocallback(const QModelIndex &index) {
  ::QListView::setRootIndex(index);
}
void QListView_wrapper::setRowHidden(int row, bool hide) {
  ::QListView::setRowHidden(row, hide);
}
void QListView_wrapper::setSelection(
    const QRect &rect, QFlags<QItemSelectionModel::SelectionFlag> command) {
  if (m_setSelectionCallback) {
    const void *thisPtr = this;
    m_setSelectionCallback(const_cast<void *>(thisPtr), rect, command);
  } else {
    ::QListView::setSelection(rect, command);
  }
}
void QListView_wrapper::setSelection_nocallback(
    const QRect &rect, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ::QListView::setSelection(rect, command);
}
void QListView_wrapper::setSelectionModel(QItemSelectionModel *selectionModel) {
  if (m_setSelectionModelCallback) {
    const void *thisPtr = this;
    m_setSelectionModelCallback(const_cast<void *>(thisPtr), selectionModel);
  } else {
    ::QListView::setSelectionModel(selectionModel);
  }
}
void QListView_wrapper::setSelectionModel_nocallback(
    QItemSelectionModel *selectionModel) {
  ::QListView::setSelectionModel(selectionModel);
}
void QListView_wrapper::setSelectionRectVisible(bool show) {
  ::QListView::setSelectionRectVisible(show);
}
void QListView_wrapper::setSpacing(int space) {
  ::QListView::setSpacing(space);
}
void QListView_wrapper::setUniformItemSizes(bool enable) {
  ::QListView::setUniformItemSizes(enable);
}
void QListView_wrapper::setVisible(bool visible) {
  if (m_setVisibleCallback) {
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    ::QListView::setVisible(visible);
  }
}
void QListView_wrapper::setVisible_nocallback(bool visible) {
  ::QListView::setVisible(visible);
}
void QListView_wrapper::setWordWrap(bool on) { ::QListView::setWordWrap(on); }
void QListView_wrapper::setWrapping(bool enable) {
  ::QListView::setWrapping(enable);
}
void QListView_wrapper::setupViewport(QWidget *viewport) {
  if (m_setupViewportCallback) {
    const void *thisPtr = this;
    m_setupViewportCallback(const_cast<void *>(thisPtr), viewport);
  } else {
    ::QListView::setupViewport(viewport);
  }
}
void QListView_wrapper::setupViewport_nocallback(QWidget *viewport) {
  ::QListView::setupViewport(viewport);
}
QPainter *QListView_wrapper::sharedPainter() const {
  if (m_sharedPainterCallback) {
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QListView::sharedPainter();
  }
}
QPainter *QListView_wrapper::sharedPainter_nocallback() const {
  return ::QListView::sharedPainter();
}
QSize QListView_wrapper::sizeHint() const {
  if (m_sizeHintCallback) {
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QListView::sizeHint();
  }
}
QSize QListView_wrapper::sizeHint_nocallback() const {
  return ::QListView::sizeHint();
}
int QListView_wrapper::sizeHintForColumn(int column) const {
  if (m_sizeHintForColumnCallback) {
    const void *thisPtr = this;
    return m_sizeHintForColumnCallback(const_cast<void *>(thisPtr), column);
  } else {
    return ::QListView::sizeHintForColumn(column);
  }
}
int QListView_wrapper::sizeHintForColumn_nocallback(int column) const {
  return ::QListView::sizeHintForColumn(column);
}
int QListView_wrapper::sizeHintForRow(int row) const {
  if (m_sizeHintForRowCallback) {
    const void *thisPtr = this;
    return m_sizeHintForRowCallback(const_cast<void *>(thisPtr), row);
  } else {
    return ::QListView::sizeHintForRow(row);
  }
}
int QListView_wrapper::sizeHintForRow_nocallback(int row) const {
  return ::QListView::sizeHintForRow(row);
}
int QListView_wrapper::spacing() const { return ::QListView::spacing(); }
QString QListView_wrapper::tr(const char *s, const char *c, int n) {
  return ::QListView::tr(s, c, n);
}
bool QListView_wrapper::uniformItemSizes() const {
  return ::QListView::uniformItemSizes();
}
void QListView_wrapper::updateEditorData() {
  if (m_updateEditorDataCallback) {
    const void *thisPtr = this;
    m_updateEditorDataCallback(const_cast<void *>(thisPtr));
  } else {
    ::QListView::updateEditorData();
  }
}
void QListView_wrapper::updateEditorData_nocallback() {
  ::QListView::updateEditorData();
}
void QListView_wrapper::updateEditorGeometries() {
  if (m_updateEditorGeometriesCallback) {
    const void *thisPtr = this;
    m_updateEditorGeometriesCallback(const_cast<void *>(thisPtr));
  } else {
    ::QListView::updateEditorGeometries();
  }
}
void QListView_wrapper::updateEditorGeometries_nocallback() {
  ::QListView::updateEditorGeometries();
}
void QListView_wrapper::updateGeometries() {
  if (m_updateGeometriesCallback) {
    const void *thisPtr = this;
    m_updateGeometriesCallback(const_cast<void *>(thisPtr));
  } else {
    ::QListView::updateGeometries();
  }
}
void QListView_wrapper::updateGeometries_nocallback() {
  ::QListView::updateGeometries();
}
int QListView_wrapper::verticalOffset() const {
  if (m_verticalOffsetCallback) {
    const void *thisPtr = this;
    return m_verticalOffsetCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QListView::verticalOffset();
  }
}
int QListView_wrapper::verticalOffset_nocallback() const {
  return ::QListView::verticalOffset();
}
void QListView_wrapper::verticalScrollbarAction(int action) {
  if (m_verticalScrollbarActionCallback) {
    const void *thisPtr = this;
    m_verticalScrollbarActionCallback(const_cast<void *>(thisPtr), action);
  } else {
    ::QListView::verticalScrollbarAction(action);
  }
}
void QListView_wrapper::verticalScrollbarAction_nocallback(int action) {
  ::QListView::verticalScrollbarAction(action);
}
void QListView_wrapper::verticalScrollbarValueChanged(int value) {
  if (m_verticalScrollbarValueChangedCallback) {
    const void *thisPtr = this;
    m_verticalScrollbarValueChangedCallback(const_cast<void *>(thisPtr), value);
  } else {
    ::QListView::verticalScrollbarValueChanged(value);
  }
}
void QListView_wrapper::verticalScrollbarValueChanged_nocallback(int value) {
  ::QListView::verticalScrollbarValueChanged(value);
}
bool QListView_wrapper::viewportEvent(QEvent *event) {
  if (m_viewportEventCallback) {
    const void *thisPtr = this;
    return m_viewportEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    return ::QListView::viewportEvent(event);
  }
}
bool QListView_wrapper::viewportEvent_nocallback(QEvent *event) {
  return ::QListView::viewportEvent(event);
}
QSize QListView_wrapper::viewportSizeHint() const {
  if (m_viewportSizeHintCallback) {
    const void *thisPtr = this;
    return *m_viewportSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QListView::viewportSizeHint();
  }
}
QSize QListView_wrapper::viewportSizeHint_nocallback() const {
  return ::QListView::viewportSizeHint();
}
QRect QListView_wrapper::visualRect(const QModelIndex &index) const {
  if (m_visualRectCallback) {
    const void *thisPtr = this;
    return *m_visualRectCallback(const_cast<void *>(thisPtr), index);
  } else {
    return ::QListView::visualRect(index);
  }
}
QRect QListView_wrapper::visualRect_nocallback(const QModelIndex &index) const {
  return ::QListView::visualRect(index);
}
QRegion QListView_wrapper::visualRegionForSelection(
    const QItemSelection &selection) const {
  if (m_visualRegionForSelectionCallback) {
    const void *thisPtr = this;
    return *m_visualRegionForSelectionCallback(const_cast<void *>(thisPtr),
                                               selection);
  } else {
    return ::QListView::visualRegionForSelection(selection);
  }
}
QRegion QListView_wrapper::visualRegionForSelection_nocallback(
    const QItemSelection &selection) const {
  return ::QListView::visualRegionForSelection(selection);
}
bool QListView_wrapper::wordWrap() const { return ::QListView::wordWrap(); }
QListView_wrapper::~QListView_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QListView *fromPtr(void *ptr) {
  return reinterpret_cast<QListView *>(ptr);
}
static QtDartBindings_wrappersNS::QListView_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper *>(ptr);
}
extern "C" {
void c_QListView_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper *>(
      cppObj);
}
void *c_QListView__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QListView_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
void c_QListView__onActivated_QModelIndex(void *thisObj, void *contextQObject,
                                          void *callback) {
  auto instance = reinterpret_cast<QListView *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QListView::activated,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// batchSize() const
int c_QListView__batchSize(void *thisObj) {
  const auto &result = fromPtr(thisObj)->batchSize();
  return result;
}
// changeEvent(QEvent * arg__1)
void c_QListView__changeEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->changeEvent_nocallback(arg__1);
}
// clearPropertyFlags()
void c_QListView__clearPropertyFlags(void *thisObj) {
  fromPtr(thisObj)->clearPropertyFlags();
}
void c_QListView__onClicked_QModelIndex(void *thisObj, void *contextQObject,
                                        void *callback) {
  auto instance = reinterpret_cast<QListView *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QListView::clicked, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// commitData(QWidget * editor)
void c_QListView__commitData_QWidget(void *thisObj, void *editor_) {
  auto editor = reinterpret_cast<QWidget *>(editor_);
  fromWrapperPtr(thisObj)->commitData_nocallback(editor);
}
// contentsSize() const
void *c_QListView__contentsSize(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{
      fromWrapperPtr(thisObj)->contentsSize()};
  return result;
}
// currentChanged(const QModelIndex & current, const QModelIndex & previous)
void c_QListView__currentChanged_QModelIndex_QModelIndex(void *thisObj,
                                                         void *current_,
                                                         void *previous_) {
  assert(current_);
  auto &current = *reinterpret_cast<QModelIndex *>(current_);
  assert(previous_);
  auto &previous = *reinterpret_cast<QModelIndex *>(previous_);
  fromWrapperPtr(thisObj)->currentChanged_nocallback(current, previous);
}
// customEvent(QEvent * event)
void c_QListView__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// dataChanged(const QModelIndex & topLeft, const QModelIndex & bottomRight,
// const QList<int > & roles)
void c_QListView__dataChanged_QModelIndex_QModelIndex_QList_int(
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
int c_QListView__devType(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QListView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->devType_nocallback();
    } else {
      return targetPtr->devType();
    }
  }();
  return result;
}
// doItemsLayout()
void c_QListView__doItemsLayout(void *thisObj) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QListView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->doItemsLayout_nocallback();
    } else {
      return targetPtr->doItemsLayout();
    }
  }();
}
void c_QListView__onDoubleClicked_QModelIndex(void *thisObj,
                                              void *contextQObject,
                                              void *callback) {
  auto instance = reinterpret_cast<QListView *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QListView::doubleClicked,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// editorDestroyed(QObject * editor)
void c_QListView__editorDestroyed_QObject(void *thisObj, void *editor_) {
  auto editor = reinterpret_cast<QObject *>(editor_);
  fromWrapperPtr(thisObj)->editorDestroyed_nocallback(editor);
}
void c_QListView__onEntered_QModelIndex(void *thisObj, void *contextQObject,
                                        void *callback) {
  auto instance = reinterpret_cast<QListView *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QListView::entered, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// event(QEvent * e)
bool c_QListView__event_QEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QEvent *>(e_);
  const auto &result = fromWrapperPtr(thisObj)->event_nocallback(e);
  return result;
}
// eventFilter(QObject * object, QEvent * event)
bool c_QListView__eventFilter_QObject_QEvent(void *thisObj, void *object_,
                                             void *event_) {
  auto object = reinterpret_cast<QObject *>(object_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result =
      fromWrapperPtr(thisObj)->eventFilter_nocallback(object, event);
  return result;
}
// focusNextPrevChild(bool next)
bool c_QListView__focusNextPrevChild_bool(void *thisObj, bool next) {
  const auto &result =
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
  return result;
}
// gridSize() const
void *c_QListView__gridSize(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->gridSize()};
  return result;
}
// hasHeightForWidth() const
bool c_QListView__hasHeightForWidth(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QListView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->hasHeightForWidth_nocallback();
    } else {
      return targetPtr->hasHeightForWidth();
    }
  }();
  return result;
}
// heightForWidth(int arg__1) const
int c_QListView__heightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QListView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->heightForWidth_nocallback(arg__1);
    } else {
      return targetPtr->heightForWidth(arg__1);
    }
  }();
  return result;
}
// horizontalOffset() const
int c_QListView__horizontalOffset(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->horizontalOffset_nocallback();
  return result;
}
// horizontalScrollbarAction(int action)
void c_QListView__horizontalScrollbarAction_int(void *thisObj, int action) {
  fromWrapperPtr(thisObj)->horizontalScrollbarAction_nocallback(action);
}
// horizontalScrollbarValueChanged(int value)
void c_QListView__horizontalScrollbarValueChanged_int(void *thisObj,
                                                      int value) {
  fromWrapperPtr(thisObj)->horizontalScrollbarValueChanged_nocallback(value);
}
void c_QListView__onIconSizeChanged_QSize(void *thisObj, void *contextQObject,
                                          void *callback) {
  auto instance = reinterpret_cast<QListView *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QListView::iconSizeChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// indexAt(const QPoint & p) const
void *c_QListView__indexAt_QPoint(void *thisObj, void *p_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPoint *>(p_);
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QListView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->indexAt_nocallback(p);
    } else {
      return targetPtr->indexAt(p);
    }
  }()};
  return result;
}
// indexesMoved(const QList<QModelIndex > & indexes)
void c_QListView__indexesMoved_QList_QModelIndex(void *thisObj,
                                                 void *indexes_) {
  assert(indexes_);
  auto &indexes = *reinterpret_cast<QList<QModelIndex> *>(indexes_);
  fromPtr(thisObj)->indexesMoved(indexes);
}
void c_QListView__onIndexesMoved_QList_QModelIndex(void *thisObj,
                                                   void *contextQObject,
                                                   void *callback) {
  auto instance = reinterpret_cast<QListView *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QListView::indexesMoved,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// initPainter(QPainter * painter) const
void c_QListView__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}
// isIndexHidden(const QModelIndex & index) const
bool c_QListView__isIndexHidden_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = fromWrapperPtr(thisObj)->isIndexHidden_nocallback(index);
  return result;
}
// isRowHidden(int row) const
bool c_QListView__isRowHidden_int(void *thisObj, int row) {
  const auto &result = fromPtr(thisObj)->isRowHidden(row);
  return result;
}
// isSelectionRectVisible() const
bool c_QListView__isSelectionRectVisible(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isSelectionRectVisible();
  return result;
}
// isWrapping() const
bool c_QListView__isWrapping(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isWrapping();
  return result;
}
// keyboardSearch(const QString & search)
void c_QListView__keyboardSearch_QString(void *thisObj, const char *search_) {
  const auto search = QString::fromUtf8(search_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QListView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->keyboardSearch_nocallback(search);
    } else {
      return targetPtr->keyboardSearch(search);
    }
  }();
  free((char *)search_);
}
// leaveEvent(QEvent * event)
void c_QListView__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}
// minimumSizeHint() const
void *c_QListView__minimumSizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QListView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->minimumSizeHint_nocallback();
    } else {
      return targetPtr->minimumSizeHint();
    }
  }()};
  return result;
}
// modelColumn() const
int c_QListView__modelColumn(void *thisObj) {
  const auto &result = fromPtr(thisObj)->modelColumn();
  return result;
}
// mouseDoubleClickEvent(QMouseEvent * event)
void c_QListView__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                    void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}
// mouseMoveEvent(QMouseEvent * e)
void c_QListView__mouseMoveEvent_QMouseEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QMouseEvent *>(e_);
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(e);
}
// mousePressEvent(QMouseEvent * event)
void c_QListView__mousePressEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(event);
}
// mouseReleaseEvent(QMouseEvent * e)
void c_QListView__mouseReleaseEvent_QMouseEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QMouseEvent *>(e_);
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(e);
}
// moveCursor(QAbstractItemView::CursorAction cursorAction,
// QFlags<Qt::KeyboardModifier> modifiers)
void *c_QListView__moveCursor_CursorAction_KeyboardModifiers(void *thisObj,
                                                             int cursorAction,
                                                             int modifiers_) {
  auto modifiers = static_cast<QFlags<Qt::KeyboardModifier>>(modifiers_);
  const auto &result = new Dartagnan::ValueWrapper<
      QModelIndex>{fromWrapperPtr(thisObj)->moveCursor_nocallback(
      static_cast<QtDartBindings_wrappersNS::QListView_wrapper::CursorAction>(
          cursorAction),
      modifiers)};
  return result;
}
// paintEvent(QPaintEvent * e)
void c_QListView__paintEvent_QPaintEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QPaintEvent *>(e_);
  fromWrapperPtr(thisObj)->paintEvent_nocallback(e);
}
void c_QListView__onPressed_QModelIndex(void *thisObj, void *contextQObject,
                                        void *callback) {
  auto instance = reinterpret_cast<QListView *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QListView::pressed, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// rectForIndex(const QModelIndex & index) const
void *c_QListView__rectForIndex_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = new Dartagnan::ValueWrapper<QRect>{
      fromWrapperPtr(thisObj)->rectForIndex(index)};
  return result;
}
// reset()
void c_QListView__reset(void *thisObj) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QListView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->reset_nocallback();
    } else {
      return targetPtr->reset();
    }
  }();
}
// resizeContents(int width, int height)
void c_QListView__resizeContents_int_int(void *thisObj, int width, int height) {
  fromWrapperPtr(thisObj)->resizeContents(width, height);
}
// rowsAboutToBeRemoved(const QModelIndex & parent, int start, int end)
void c_QListView__rowsAboutToBeRemoved_QModelIndex_int_int(void *thisObj,
                                                           void *parent_,
                                                           int start, int end) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  fromWrapperPtr(thisObj)->rowsAboutToBeRemoved_nocallback(parent, start, end);
}
// rowsInserted(const QModelIndex & parent, int start, int end)
void c_QListView__rowsInserted_QModelIndex_int_int(void *thisObj, void *parent_,
                                                   int start, int end) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  fromWrapperPtr(thisObj)->rowsInserted_nocallback(parent, start, end);
}
// scrollContentsBy(int dx, int dy)
void c_QListView__scrollContentsBy_int_int(void *thisObj, int dx, int dy) {
  fromWrapperPtr(thisObj)->scrollContentsBy_nocallback(dx, dy);
}
// scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint hint)
void c_QListView__scrollTo_QModelIndex_ScrollHint(void *thisObj, void *index_,
                                                  int hint) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QListView_wrapper *>(targetPtr);
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
void c_QListView__selectAll(void *thisObj) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QListView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->selectAll_nocallback();
    } else {
      return targetPtr->selectAll();
    }
  }();
}
// selectedIndexes() const
void *c_QListView__selectedIndexes(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QModelIndex>>{
      fromWrapperPtr(thisObj)->selectedIndexes_nocallback()};
  return result;
}
// selectionChanged(const QItemSelection & selected, const QItemSelection &
// deselected)
void c_QListView__selectionChanged_QItemSelection_QItemSelection(
    void *thisObj, void *selected_, void *deselected_) {
  assert(selected_);
  auto &selected = *reinterpret_cast<QItemSelection *>(selected_);
  assert(deselected_);
  auto &deselected = *reinterpret_cast<QItemSelection *>(deselected_);
  fromWrapperPtr(thisObj)->selectionChanged_nocallback(selected, deselected);
}
// selectionCommand(const QModelIndex & index, const QEvent * event) const
int c_QListView__selectionCommand_QModelIndex_QEvent(void *thisObj,
                                                     void *index_,
                                                     void *event_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result =
      fromWrapperPtr(thisObj)->selectionCommand_nocallback(index, event);
  return result;
}
// setBatchSize(int batchSize)
void c_QListView__setBatchSize_int(void *thisObj, int batchSize) {
  fromPtr(thisObj)->setBatchSize(batchSize);
}
// setGridSize(const QSize & size)
void c_QListView__setGridSize_QSize(void *thisObj, void *size_) {
  assert(size_);
  auto &size = *reinterpret_cast<QSize *>(size_);
  fromPtr(thisObj)->setGridSize(size);
}
// setModel(QAbstractItemModel * model)
void c_QListView__setModel_QAbstractItemModel(void *thisObj, void *model_) {
  auto model = reinterpret_cast<QAbstractItemModel *>(model_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QListView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setModel_nocallback(model);
    } else {
      return targetPtr->setModel(model);
    }
  }();
}
// setModelColumn(int column)
void c_QListView__setModelColumn_int(void *thisObj, int column) {
  fromPtr(thisObj)->setModelColumn(column);
}
// setPositionForIndex(const QPoint & position, const QModelIndex & index)
void c_QListView__setPositionForIndex_QPoint_QModelIndex(void *thisObj,
                                                         void *position_,
                                                         void *index_) {
  assert(position_);
  auto &position = *reinterpret_cast<QPoint *>(position_);
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  fromWrapperPtr(thisObj)->setPositionForIndex(position, index);
}
// setRootIndex(const QModelIndex & index)
void c_QListView__setRootIndex_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QListView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setRootIndex_nocallback(index);
    } else {
      return targetPtr->setRootIndex(index);
    }
  }();
}
// setRowHidden(int row, bool hide)
void c_QListView__setRowHidden_int_bool(void *thisObj, int row, bool hide) {
  fromPtr(thisObj)->setRowHidden(row, hide);
}
// setSelection(const QRect & rect, QFlags<QItemSelectionModel::SelectionFlag>
// command)
void c_QListView__setSelection_QRect_SelectionFlags(void *thisObj, void *rect_,
                                                    int command_) {
  assert(rect_);
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  auto command =
      static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command_);
  fromWrapperPtr(thisObj)->setSelection_nocallback(rect, command);
}
// setSelectionModel(QItemSelectionModel * selectionModel)
void c_QListView__setSelectionModel_QItemSelectionModel(void *thisObj,
                                                        void *selectionModel_) {
  auto selectionModel =
      reinterpret_cast<QItemSelectionModel *>(selectionModel_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QListView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setSelectionModel_nocallback(selectionModel);
    } else {
      return targetPtr->setSelectionModel(selectionModel);
    }
  }();
}
// setSelectionRectVisible(bool show)
void c_QListView__setSelectionRectVisible_bool(void *thisObj, bool show) {
  fromPtr(thisObj)->setSelectionRectVisible(show);
}
// setSpacing(int space)
void c_QListView__setSpacing_int(void *thisObj, int space) {
  fromPtr(thisObj)->setSpacing(space);
}
// setUniformItemSizes(bool enable)
void c_QListView__setUniformItemSizes_bool(void *thisObj, bool enable) {
  fromPtr(thisObj)->setUniformItemSizes(enable);
}
// setVisible(bool visible)
void c_QListView__setVisible_bool(void *thisObj, bool visible) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QListView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}
// setWordWrap(bool on)
void c_QListView__setWordWrap_bool(void *thisObj, bool on) {
  fromPtr(thisObj)->setWordWrap(on);
}
// setWrapping(bool enable)
void c_QListView__setWrapping_bool(void *thisObj, bool enable) {
  fromPtr(thisObj)->setWrapping(enable);
}
// setupViewport(QWidget * viewport)
void c_QListView__setupViewport_QWidget(void *thisObj, void *viewport_) {
  auto viewport = reinterpret_cast<QWidget *>(viewport_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QListView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setupViewport_nocallback(viewport);
    } else {
      return targetPtr->setupViewport(viewport);
    }
  }();
}
// sharedPainter() const
void *c_QListView__sharedPainter(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->sharedPainter_nocallback();
  return result;
}
// sizeHint() const
void *c_QListView__sizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QListView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->sizeHint_nocallback();
    } else {
      return targetPtr->sizeHint();
    }
  }()};
  return result;
}
// sizeHintForColumn(int column) const
int c_QListView__sizeHintForColumn_int(void *thisObj, int column) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QListView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->sizeHintForColumn_nocallback(column);
    } else {
      return targetPtr->sizeHintForColumn(column);
    }
  }();
  return result;
}
// sizeHintForRow(int row) const
int c_QListView__sizeHintForRow_int(void *thisObj, int row) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QListView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->sizeHintForRow_nocallback(row);
    } else {
      return targetPtr->sizeHintForRow(row);
    }
  }();
  return result;
}
// spacing() const
int c_QListView__spacing(void *thisObj) {
  const auto &result = fromPtr(thisObj)->spacing();
  return result;
}
// tr(const char * s, const char * c, int n)
void *c_static_QListView__tr_char_char_int(const char *s, const char *c,
                                           int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QListView_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
// uniformItemSizes() const
bool c_QListView__uniformItemSizes(void *thisObj) {
  const auto &result = fromPtr(thisObj)->uniformItemSizes();
  return result;
}
// updateEditorData()
void c_QListView__updateEditorData(void *thisObj) {
  fromWrapperPtr(thisObj)->updateEditorData_nocallback();
}
// updateEditorGeometries()
void c_QListView__updateEditorGeometries(void *thisObj) {
  fromWrapperPtr(thisObj)->updateEditorGeometries_nocallback();
}
// updateGeometries()
void c_QListView__updateGeometries(void *thisObj) {
  fromWrapperPtr(thisObj)->updateGeometries_nocallback();
}
// verticalOffset() const
int c_QListView__verticalOffset(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->verticalOffset_nocallback();
  return result;
}
// verticalScrollbarAction(int action)
void c_QListView__verticalScrollbarAction_int(void *thisObj, int action) {
  fromWrapperPtr(thisObj)->verticalScrollbarAction_nocallback(action);
}
// verticalScrollbarValueChanged(int value)
void c_QListView__verticalScrollbarValueChanged_int(void *thisObj, int value) {
  fromWrapperPtr(thisObj)->verticalScrollbarValueChanged_nocallback(value);
}
void c_QListView__onViewportEntered(void *thisObj, void *contextQObject,
                                    void *callback) {
  auto instance = reinterpret_cast<QListView *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QListView::viewportEntered,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// viewportEvent(QEvent * event)
bool c_QListView__viewportEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = fromWrapperPtr(thisObj)->viewportEvent_nocallback(event);
  return result;
}
// viewportSizeHint() const
void *c_QListView__viewportSizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{
      fromWrapperPtr(thisObj)->viewportSizeHint_nocallback()};
  return result;
}
// visualRect(const QModelIndex & index) const
void *c_QListView__visualRect_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = new Dartagnan::ValueWrapper<QRect>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QListView_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->visualRect_nocallback(index);
    } else {
      return targetPtr->visualRect(index);
    }
  }()};
  return result;
}
// visualRegionForSelection(const QItemSelection & selection) const
void *c_QListView__visualRegionForSelection_QItemSelection(void *thisObj,
                                                           void *selection_) {
  assert(selection_);
  auto &selection = *reinterpret_cast<QItemSelection *>(selection_);
  const auto &result = new Dartagnan::ValueWrapper<QRegion>{
      fromWrapperPtr(thisObj)->visualRegionForSelection_nocallback(selection)};
  return result;
}
// wordWrap() const
bool c_QListView__wordWrap(void *thisObj) {
  const auto &result = fromPtr(thisObj)->wordWrap();
  return result;
}
void c_QListView__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QListView__registerVirtualMethodCallback(void *ptr, void *callback,
                                                int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1128:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 5397:
    wrapper->m_commitDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_commitData>(
        callback);
    break;
  case 5399:
    wrapper->m_currentChangedCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_currentChanged>(
        callback);
    break;
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_customEvent>(
        callback);
    break;
  case 5401:
    wrapper->m_dataChangedCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_dataChanged>(
        callback);
    break;
  case 1145:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_devType>(
        callback);
    break;
  case 5404:
    wrapper->m_doItemsLayoutCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_doItemsLayout>(
        callback);
    break;
  case 5409:
    wrapper->m_editorDestroyedCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_editorDestroyed>(
        callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_event>(callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1155:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1169:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 1173:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 5413:
    wrapper->m_horizontalOffsetCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_horizontalOffset>(callback);
    break;
  case 5414:
    wrapper->m_horizontalScrollbarActionCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_horizontalScrollbarAction>(callback);
    break;
  case 5415:
    wrapper->m_horizontalScrollbarValueChangedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_horizontalScrollbarValueChanged>(
            callback);
    break;
  case 5418:
    wrapper->m_indexAtCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_indexAt>(
        callback);
    break;
  case 1176:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_initPainter>(
        callback);
    break;
  case 5420:
    wrapper->m_isIndexHiddenCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_isIndexHidden>(
        callback);
    break;
  case 5422:
    wrapper->m_keyboardSearchCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_keyboardSearch>(
        callback);
    break;
  case 1202:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1222:
    wrapper->m_minimumSizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_minimumSizeHint>(
        callback);
    break;
  case 1224:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1226:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_mouseMoveEvent>(
        callback);
    break;
  case 1227:
    wrapper->m_mousePressEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_mousePressEvent>(
        callback);
    break;
  case 1228:
    wrapper->m_mouseReleaseEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_mouseReleaseEvent>(callback);
    break;
  case 5425:
    wrapper->m_moveCursorCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_moveCursor>(
        callback);
    break;
  case 1235:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 5428:
    wrapper->m_resetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_reset>(callback);
    break;
  case 5432:
    wrapper->m_rowsAboutToBeRemovedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_rowsAboutToBeRemoved>(callback);
    break;
  case 5433:
    wrapper->m_rowsInsertedCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_rowsInserted>(
        callback);
    break;
  case 5218:
    wrapper->m_scrollContentsByCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_scrollContentsBy>(callback);
    break;
  case 5436:
    wrapper->m_scrollToCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_scrollTo>(
        callback);
    break;
  case 5439:
    wrapper->m_selectAllCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_selectAll>(
        callback);
    break;
  case 5440:
    wrapper->m_selectedIndexesCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_selectedIndexes>(
        callback);
    break;
  case 5441:
    wrapper->m_selectionChangedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_selectionChanged>(callback);
    break;
  case 5442:
    wrapper->m_selectionCommandCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_selectionCommand>(callback);
    break;
  case 5455:
    wrapper->m_setModelCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_setModel>(
        callback);
    break;
  case 5456:
    wrapper->m_setRootIndexCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_setRootIndex>(
        callback);
    break;
  case 5457:
    wrapper->m_setSelectionCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_setSelection>(
        callback);
    break;
  case 5458:
    wrapper->m_setSelectionModelCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_setSelectionModel>(callback);
    break;
  case 1314:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_setVisible>(
        callback);
    break;
  case 5226:
    wrapper->m_setupViewportCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_setupViewport>(
        callback);
    break;
  case 1323:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1331:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_sizeHint>(
        callback);
    break;
  case 5463:
    wrapper->m_sizeHintForColumnCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_sizeHintForColumn>(callback);
    break;
  case 5465:
    wrapper->m_sizeHintForRowCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_sizeHintForRow>(
        callback);
    break;
  case 5471:
    wrapper->m_updateEditorDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_updateEditorData>(callback);
    break;
  case 5472:
    wrapper->m_updateEditorGeometriesCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_updateEditorGeometries>(callback);
    break;
  case 5473:
    wrapper->m_updateGeometriesCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_updateGeometries>(callback);
    break;
  case 5474:
    wrapper->m_verticalOffsetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_verticalOffset>(
        callback);
    break;
  case 5475:
    wrapper->m_verticalScrollbarActionCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_verticalScrollbarAction>(callback);
    break;
  case 5476:
    wrapper->m_verticalScrollbarValueChangedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_verticalScrollbarValueChanged>(callback);
    break;
  case 5229:
    wrapper->m_viewportEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_viewportEvent>(
        callback);
    break;
  case 5230:
    wrapper->m_viewportSizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_viewportSizeHint>(callback);
    break;
  case 5479:
    wrapper->m_visualRectCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_visualRect>(
        callback);
    break;
  case 5480:
    wrapper->m_visualRegionForSelectionCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_visualRegionForSelection>(callback);
    break;
  }
}
}
