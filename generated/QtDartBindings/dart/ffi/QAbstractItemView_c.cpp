/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QAbstractItemView_c.h"

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
QAbstractItemView_wrapper::QAbstractItemView_wrapper(QWidget *parent)
    : ::QAbstractItemView(parent) {}
void QAbstractItemView_wrapper::activated(const QModelIndex &index) {
  ::QAbstractItemView::activated(index);
}
bool QAbstractItemView_wrapper::alternatingRowColors() const {
  return ::QAbstractItemView::alternatingRowColors();
}
int QAbstractItemView_wrapper::autoScrollMargin() const {
  return ::QAbstractItemView::autoScrollMargin();
}
void QAbstractItemView_wrapper::changeEvent(QEvent *arg__1) {
  if (m_changeEventCallback) {
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QAbstractItemView::changeEvent(arg__1);
  }
}
void QAbstractItemView_wrapper::changeEvent_nocallback(QEvent *arg__1) {
  ::QAbstractItemView::changeEvent(arg__1);
}
void QAbstractItemView_wrapper::clearSelection() {
  ::QAbstractItemView::clearSelection();
}
void QAbstractItemView_wrapper::clicked(const QModelIndex &index) {
  ::QAbstractItemView::clicked(index);
}
void QAbstractItemView_wrapper::closePersistentEditor(
    const QModelIndex &index) {
  ::QAbstractItemView::closePersistentEditor(index);
}
void QAbstractItemView_wrapper::commitData(QWidget *editor) {
  if (m_commitDataCallback) {
    const void *thisPtr = this;
    m_commitDataCallback(const_cast<void *>(thisPtr), editor);
  } else {
    ::QAbstractItemView::commitData(editor);
  }
}
void QAbstractItemView_wrapper::commitData_nocallback(QWidget *editor) {
  ::QAbstractItemView::commitData(editor);
}
void QAbstractItemView_wrapper::currentChanged(const QModelIndex &current,
                                               const QModelIndex &previous) {
  if (m_currentChangedCallback) {
    const void *thisPtr = this;
    m_currentChangedCallback(const_cast<void *>(thisPtr), current, previous);
  } else {
    ::QAbstractItemView::currentChanged(current, previous);
  }
}
void QAbstractItemView_wrapper::currentChanged_nocallback(
    const QModelIndex &current, const QModelIndex &previous) {
  ::QAbstractItemView::currentChanged(current, previous);
}
QModelIndex QAbstractItemView_wrapper::currentIndex() const {
  return ::QAbstractItemView::currentIndex();
}
void QAbstractItemView_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QAbstractItemView::customEvent(event);
  }
}
void QAbstractItemView_wrapper::customEvent_nocallback(QEvent *event) {
  ::QAbstractItemView::customEvent(event);
}
void QAbstractItemView_wrapper::dataChanged(const QModelIndex &topLeft,
                                            const QModelIndex &bottomRight,
                                            const QList<int> &roles) {
  if (m_dataChangedCallback) {
    const void *thisPtr = this;
    m_dataChangedCallback(const_cast<void *>(thisPtr), topLeft, bottomRight,
                          roles);
  } else {
    ::QAbstractItemView::dataChanged(topLeft, bottomRight, roles);
  }
}
void QAbstractItemView_wrapper::dataChanged_nocallback(
    const QModelIndex &topLeft, const QModelIndex &bottomRight,
    const QList<int> &roles) {
  ::QAbstractItemView::dataChanged(topLeft, bottomRight, roles);
}
int QAbstractItemView_wrapper::devType() const {
  if (m_devTypeCallback) {
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QAbstractItemView::devType();
  }
}
int QAbstractItemView_wrapper::devType_nocallback() const {
  return ::QAbstractItemView::devType();
}
QPoint QAbstractItemView_wrapper::dirtyRegionOffset() const {
  return ::QAbstractItemView::dirtyRegionOffset();
}
void QAbstractItemView_wrapper::doAutoScroll() {
  ::QAbstractItemView::doAutoScroll();
}
void QAbstractItemView_wrapper::doItemsLayout() {
  if (m_doItemsLayoutCallback) {
    const void *thisPtr = this;
    m_doItemsLayoutCallback(const_cast<void *>(thisPtr));
  } else {
    ::QAbstractItemView::doItemsLayout();
  }
}
void QAbstractItemView_wrapper::doItemsLayout_nocallback() {
  ::QAbstractItemView::doItemsLayout();
}
void QAbstractItemView_wrapper::doubleClicked(const QModelIndex &index) {
  ::QAbstractItemView::doubleClicked(index);
}
bool QAbstractItemView_wrapper::dragDropOverwriteMode() const {
  return ::QAbstractItemView::dragDropOverwriteMode();
}
bool QAbstractItemView_wrapper::dragEnabled() const {
  return ::QAbstractItemView::dragEnabled();
}
void QAbstractItemView_wrapper::edit(const QModelIndex &index) {
  ::QAbstractItemView::edit(index);
}
void QAbstractItemView_wrapper::editorDestroyed(QObject *editor) {
  if (m_editorDestroyedCallback) {
    const void *thisPtr = this;
    m_editorDestroyedCallback(const_cast<void *>(thisPtr), editor);
  } else {
    ::QAbstractItemView::editorDestroyed(editor);
  }
}
void QAbstractItemView_wrapper::editorDestroyed_nocallback(QObject *editor) {
  ::QAbstractItemView::editorDestroyed(editor);
}
void QAbstractItemView_wrapper::entered(const QModelIndex &index) {
  ::QAbstractItemView::entered(index);
}
bool QAbstractItemView_wrapper::event(QEvent *event) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    return ::QAbstractItemView::event(event);
  }
}
bool QAbstractItemView_wrapper::event_nocallback(QEvent *event) {
  return ::QAbstractItemView::event(event);
}
bool QAbstractItemView_wrapper::eventFilter(QObject *object, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), object, event);
  } else {
    return ::QAbstractItemView::eventFilter(object, event);
  }
}
bool QAbstractItemView_wrapper::eventFilter_nocallback(QObject *object,
                                                       QEvent *event) {
  return ::QAbstractItemView::eventFilter(object, event);
}
void QAbstractItemView_wrapper::executeDelayedItemsLayout() {
  ::QAbstractItemView::executeDelayedItemsLayout();
}
bool QAbstractItemView_wrapper::focusNextPrevChild(bool next) {
  if (m_focusNextPrevChildCallback) {
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    return ::QAbstractItemView::focusNextPrevChild(next);
  }
}
bool QAbstractItemView_wrapper::focusNextPrevChild_nocallback(bool next) {
  return ::QAbstractItemView::focusNextPrevChild(next);
}
bool QAbstractItemView_wrapper::hasAutoScroll() const {
  return ::QAbstractItemView::hasAutoScroll();
}
bool QAbstractItemView_wrapper::hasHeightForWidth() const {
  if (m_hasHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QAbstractItemView::hasHeightForWidth();
  }
}
bool QAbstractItemView_wrapper::hasHeightForWidth_nocallback() const {
  return ::QAbstractItemView::hasHeightForWidth();
}
int QAbstractItemView_wrapper::heightForWidth(int arg__1) const {
  if (m_heightForWidthCallback) {
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QAbstractItemView::heightForWidth(arg__1);
  }
}
int QAbstractItemView_wrapper::heightForWidth_nocallback(int arg__1) const {
  return ::QAbstractItemView::heightForWidth(arg__1);
}
int QAbstractItemView_wrapper::horizontalOffset() const {
  if (m_horizontalOffsetCallback) {
    const void *thisPtr = this;
    return m_horizontalOffsetCallback(const_cast<void *>(thisPtr));
  } else {
    std::cerr << "horizontalOffset: Warning: Calling pure-virtual\n";
    return {};
  }
}
int QAbstractItemView_wrapper::horizontalOffset_nocallback() const {
  std::cerr << "horizontalOffset: Warning: Calling pure-virtual\n";
  return {};
}
void QAbstractItemView_wrapper::horizontalScrollbarAction(int action) {
  if (m_horizontalScrollbarActionCallback) {
    const void *thisPtr = this;
    m_horizontalScrollbarActionCallback(const_cast<void *>(thisPtr), action);
  } else {
    ::QAbstractItemView::horizontalScrollbarAction(action);
  }
}
void QAbstractItemView_wrapper::horizontalScrollbarAction_nocallback(
    int action) {
  ::QAbstractItemView::horizontalScrollbarAction(action);
}
void QAbstractItemView_wrapper::horizontalScrollbarValueChanged(int value) {
  if (m_horizontalScrollbarValueChangedCallback) {
    const void *thisPtr = this;
    m_horizontalScrollbarValueChangedCallback(const_cast<void *>(thisPtr),
                                              value);
  } else {
    ::QAbstractItemView::horizontalScrollbarValueChanged(value);
  }
}
void QAbstractItemView_wrapper::horizontalScrollbarValueChanged_nocallback(
    int value) {
  ::QAbstractItemView::horizontalScrollbarValueChanged(value);
}
QSize QAbstractItemView_wrapper::iconSize() const {
  return ::QAbstractItemView::iconSize();
}
void QAbstractItemView_wrapper::iconSizeChanged(const QSize &size) {
  ::QAbstractItemView::iconSizeChanged(size);
}
QModelIndex QAbstractItemView_wrapper::indexAt(const QPoint &point) const {
  if (m_indexAtCallback) {
    const void *thisPtr = this;
    return *m_indexAtCallback(const_cast<void *>(thisPtr), point);
  } else {
    std::cerr << "indexAt: Warning: Calling pure-virtual\n";
    return {};
  }
}
QModelIndex
QAbstractItemView_wrapper::indexAt_nocallback(const QPoint &point) const {
  std::cerr << "indexAt: Warning: Calling pure-virtual\n";
  return {};
}
QWidget *
QAbstractItemView_wrapper::indexWidget(const QModelIndex &index) const {
  return ::QAbstractItemView::indexWidget(index);
}
void QAbstractItemView_wrapper::initPainter(QPainter *painter) const {
  if (m_initPainterCallback) {
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    ::QAbstractItemView::initPainter(painter);
  }
}
void QAbstractItemView_wrapper::initPainter_nocallback(
    QPainter *painter) const {
  ::QAbstractItemView::initPainter(painter);
}
bool QAbstractItemView_wrapper::isIndexHidden(const QModelIndex &index) const {
  if (m_isIndexHiddenCallback) {
    const void *thisPtr = this;
    return m_isIndexHiddenCallback(const_cast<void *>(thisPtr), index);
  } else {
    std::cerr << "isIndexHidden: Warning: Calling pure-virtual\n";
    return {};
  }
}
bool QAbstractItemView_wrapper::isIndexHidden_nocallback(
    const QModelIndex &index) const {
  std::cerr << "isIndexHidden: Warning: Calling pure-virtual\n";
  return {};
}
bool QAbstractItemView_wrapper::isPersistentEditorOpen(
    const QModelIndex &index) const {
  return ::QAbstractItemView::isPersistentEditorOpen(index);
}
void QAbstractItemView_wrapper::keyboardSearch(const QString &search) {
  if (m_keyboardSearchCallback) {
    const void *thisPtr = this;
    m_keyboardSearchCallback(const_cast<void *>(thisPtr), search);
  } else {
    ::QAbstractItemView::keyboardSearch(search);
  }
}
void QAbstractItemView_wrapper::keyboardSearch_nocallback(
    const QString &search) {
  ::QAbstractItemView::keyboardSearch(search);
}
void QAbstractItemView_wrapper::leaveEvent(QEvent *event) {
  if (m_leaveEventCallback) {
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QAbstractItemView::leaveEvent(event);
  }
}
void QAbstractItemView_wrapper::leaveEvent_nocallback(QEvent *event) {
  ::QAbstractItemView::leaveEvent(event);
}
QSize QAbstractItemView_wrapper::minimumSizeHint() const {
  if (m_minimumSizeHintCallback) {
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QAbstractItemView::minimumSizeHint();
  }
}
QSize QAbstractItemView_wrapper::minimumSizeHint_nocallback() const {
  return ::QAbstractItemView::minimumSizeHint();
}
QAbstractItemModel *QAbstractItemView_wrapper::model() const {
  return ::QAbstractItemView::model();
}
void QAbstractItemView_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  if (m_mouseDoubleClickEventCallback) {
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QAbstractItemView::mouseDoubleClickEvent(event);
  }
}
void QAbstractItemView_wrapper::mouseDoubleClickEvent_nocallback(
    QMouseEvent *event) {
  ::QAbstractItemView::mouseDoubleClickEvent(event);
}
void QAbstractItemView_wrapper::mouseMoveEvent(QMouseEvent *event) {
  if (m_mouseMoveEventCallback) {
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QAbstractItemView::mouseMoveEvent(event);
  }
}
void QAbstractItemView_wrapper::mouseMoveEvent_nocallback(QMouseEvent *event) {
  ::QAbstractItemView::mouseMoveEvent(event);
}
void QAbstractItemView_wrapper::mousePressEvent(QMouseEvent *event) {
  if (m_mousePressEventCallback) {
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QAbstractItemView::mousePressEvent(event);
  }
}
void QAbstractItemView_wrapper::mousePressEvent_nocallback(QMouseEvent *event) {
  ::QAbstractItemView::mousePressEvent(event);
}
void QAbstractItemView_wrapper::mouseReleaseEvent(QMouseEvent *event) {
  if (m_mouseReleaseEventCallback) {
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QAbstractItemView::mouseReleaseEvent(event);
  }
}
void QAbstractItemView_wrapper::mouseReleaseEvent_nocallback(
    QMouseEvent *event) {
  ::QAbstractItemView::mouseReleaseEvent(event);
}
QModelIndex QAbstractItemView_wrapper::moveCursor(
    QAbstractItemView::CursorAction cursorAction,
    QFlags<Qt::KeyboardModifier> modifiers) {
  if (m_moveCursorCallback) {
    const void *thisPtr = this;
    return *m_moveCursorCallback(const_cast<void *>(thisPtr), cursorAction,
                                 modifiers);
  } else {
    std::cerr << "moveCursor: Warning: Calling pure-virtual\n";
    return {};
  }
}
QModelIndex QAbstractItemView_wrapper::moveCursor_nocallback(
    QAbstractItemView::CursorAction cursorAction,
    QFlags<Qt::KeyboardModifier> modifiers) {
  std::cerr << "moveCursor: Warning: Calling pure-virtual\n";
  return {};
}
void QAbstractItemView_wrapper::openPersistentEditor(const QModelIndex &index) {
  ::QAbstractItemView::openPersistentEditor(index);
}
void QAbstractItemView_wrapper::paintEvent(QPaintEvent *arg__1) {
  if (m_paintEventCallback) {
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QAbstractItemView::paintEvent(arg__1);
  }
}
void QAbstractItemView_wrapper::paintEvent_nocallback(QPaintEvent *arg__1) {
  ::QAbstractItemView::paintEvent(arg__1);
}
void QAbstractItemView_wrapper::pressed(const QModelIndex &index) {
  ::QAbstractItemView::pressed(index);
}
void QAbstractItemView_wrapper::reset() {
  if (m_resetCallback) {
    const void *thisPtr = this;
    m_resetCallback(const_cast<void *>(thisPtr));
  } else {
    ::QAbstractItemView::reset();
  }
}
void QAbstractItemView_wrapper::reset_nocallback() {
  ::QAbstractItemView::reset();
}
void QAbstractItemView_wrapper::resetHorizontalScrollMode() {
  ::QAbstractItemView::resetHorizontalScrollMode();
}
void QAbstractItemView_wrapper::resetVerticalScrollMode() {
  ::QAbstractItemView::resetVerticalScrollMode();
}
QModelIndex QAbstractItemView_wrapper::rootIndex() const {
  return ::QAbstractItemView::rootIndex();
}
void QAbstractItemView_wrapper::rowsAboutToBeRemoved(const QModelIndex &parent,
                                                     int start, int end) {
  if (m_rowsAboutToBeRemovedCallback) {
    const void *thisPtr = this;
    m_rowsAboutToBeRemovedCallback(const_cast<void *>(thisPtr), parent, start,
                                   end);
  } else {
    ::QAbstractItemView::rowsAboutToBeRemoved(parent, start, end);
  }
}
void QAbstractItemView_wrapper::rowsAboutToBeRemoved_nocallback(
    const QModelIndex &parent, int start, int end) {
  ::QAbstractItemView::rowsAboutToBeRemoved(parent, start, end);
}
void QAbstractItemView_wrapper::rowsInserted(const QModelIndex &parent,
                                             int start, int end) {
  if (m_rowsInsertedCallback) {
    const void *thisPtr = this;
    m_rowsInsertedCallback(const_cast<void *>(thisPtr), parent, start, end);
  } else {
    ::QAbstractItemView::rowsInserted(parent, start, end);
  }
}
void QAbstractItemView_wrapper::rowsInserted_nocallback(
    const QModelIndex &parent, int start, int end) {
  ::QAbstractItemView::rowsInserted(parent, start, end);
}
void QAbstractItemView_wrapper::scheduleDelayedItemsLayout() {
  ::QAbstractItemView::scheduleDelayedItemsLayout();
}
void QAbstractItemView_wrapper::scrollContentsBy(int dx, int dy) {
  if (m_scrollContentsByCallback) {
    const void *thisPtr = this;
    m_scrollContentsByCallback(const_cast<void *>(thisPtr), dx, dy);
  } else {
    ::QAbstractItemView::scrollContentsBy(dx, dy);
  }
}
void QAbstractItemView_wrapper::scrollContentsBy_nocallback(int dx, int dy) {
  ::QAbstractItemView::scrollContentsBy(dx, dy);
}
void QAbstractItemView_wrapper::scrollDirtyRegion(int dx, int dy) {
  ::QAbstractItemView::scrollDirtyRegion(dx, dy);
}
void QAbstractItemView_wrapper::scrollTo(const QModelIndex &index,
                                         QAbstractItemView::ScrollHint hint) {
  if (m_scrollToCallback) {
    const void *thisPtr = this;
    m_scrollToCallback(const_cast<void *>(thisPtr), index, hint);
  } else {
    std::cerr << "scrollTo: Warning: Calling pure-virtual\n";
    return;
  }
}
void QAbstractItemView_wrapper::scrollTo_nocallback(
    const QModelIndex &index, QAbstractItemView::ScrollHint hint) {
  std::cerr << "scrollTo: Warning: Calling pure-virtual\n";
  return;
}
void QAbstractItemView_wrapper::scrollToBottom() {
  ::QAbstractItemView::scrollToBottom();
}
void QAbstractItemView_wrapper::scrollToTop() {
  ::QAbstractItemView::scrollToTop();
}
void QAbstractItemView_wrapper::selectAll() {
  if (m_selectAllCallback) {
    const void *thisPtr = this;
    m_selectAllCallback(const_cast<void *>(thisPtr));
  } else {
    ::QAbstractItemView::selectAll();
  }
}
void QAbstractItemView_wrapper::selectAll_nocallback() {
  ::QAbstractItemView::selectAll();
}
QList<QModelIndex> QAbstractItemView_wrapper::selectedIndexes() const {
  if (m_selectedIndexesCallback) {
    const void *thisPtr = this;
    return *m_selectedIndexesCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QAbstractItemView::selectedIndexes();
  }
}
QList<QModelIndex>
QAbstractItemView_wrapper::selectedIndexes_nocallback() const {
  return ::QAbstractItemView::selectedIndexes();
}
void QAbstractItemView_wrapper::selectionChanged(
    const QItemSelection &selected, const QItemSelection &deselected) {
  if (m_selectionChangedCallback) {
    const void *thisPtr = this;
    m_selectionChangedCallback(const_cast<void *>(thisPtr), selected,
                               deselected);
  } else {
    ::QAbstractItemView::selectionChanged(selected, deselected);
  }
}
void QAbstractItemView_wrapper::selectionChanged_nocallback(
    const QItemSelection &selected, const QItemSelection &deselected) {
  ::QAbstractItemView::selectionChanged(selected, deselected);
}
QFlags<QItemSelectionModel::SelectionFlag>
QAbstractItemView_wrapper::selectionCommand(const QModelIndex &index,
                                            const QEvent *event) const {
  if (m_selectionCommandCallback) {
    const void *thisPtr = this;
    return m_selectionCommandCallback(const_cast<void *>(thisPtr), index,
                                      event);
  } else {
    return ::QAbstractItemView::selectionCommand(index, event);
  }
}
QFlags<QItemSelectionModel::SelectionFlag>
QAbstractItemView_wrapper::selectionCommand_nocallback(
    const QModelIndex &index, const QEvent *event) const {
  return ::QAbstractItemView::selectionCommand(index, event);
}
QItemSelectionModel *QAbstractItemView_wrapper::selectionModel() const {
  return ::QAbstractItemView::selectionModel();
}
void QAbstractItemView_wrapper::setAlternatingRowColors(bool enable) {
  ::QAbstractItemView::setAlternatingRowColors(enable);
}
void QAbstractItemView_wrapper::setAutoScroll(bool enable) {
  ::QAbstractItemView::setAutoScroll(enable);
}
void QAbstractItemView_wrapper::setAutoScrollMargin(int margin) {
  ::QAbstractItemView::setAutoScrollMargin(margin);
}
void QAbstractItemView_wrapper::setCurrentIndex(const QModelIndex &index) {
  ::QAbstractItemView::setCurrentIndex(index);
}
void QAbstractItemView_wrapper::setDirtyRegion(const QRegion &region) {
  ::QAbstractItemView::setDirtyRegion(region);
}
void QAbstractItemView_wrapper::setDragDropOverwriteMode(bool overwrite) {
  ::QAbstractItemView::setDragDropOverwriteMode(overwrite);
}
void QAbstractItemView_wrapper::setDragEnabled(bool enable) {
  ::QAbstractItemView::setDragEnabled(enable);
}
void QAbstractItemView_wrapper::setDropIndicatorShown(bool enable) {
  ::QAbstractItemView::setDropIndicatorShown(enable);
}
void QAbstractItemView_wrapper::setIconSize(const QSize &size) {
  ::QAbstractItemView::setIconSize(size);
}
void QAbstractItemView_wrapper::setIndexWidget(const QModelIndex &index,
                                               QWidget *widget) {
  ::QAbstractItemView::setIndexWidget(index, widget);
}
void QAbstractItemView_wrapper::setModel(QAbstractItemModel *model) {
  if (m_setModelCallback) {
    const void *thisPtr = this;
    m_setModelCallback(const_cast<void *>(thisPtr), model);
  } else {
    ::QAbstractItemView::setModel(model);
  }
}
void QAbstractItemView_wrapper::setModel_nocallback(QAbstractItemModel *model) {
  ::QAbstractItemView::setModel(model);
}
void QAbstractItemView_wrapper::setRootIndex(const QModelIndex &index) {
  if (m_setRootIndexCallback) {
    const void *thisPtr = this;
    m_setRootIndexCallback(const_cast<void *>(thisPtr), index);
  } else {
    ::QAbstractItemView::setRootIndex(index);
  }
}
void QAbstractItemView_wrapper::setRootIndex_nocallback(
    const QModelIndex &index) {
  ::QAbstractItemView::setRootIndex(index);
}
void QAbstractItemView_wrapper::setSelection(
    const QRect &rect, QFlags<QItemSelectionModel::SelectionFlag> command) {
  if (m_setSelectionCallback) {
    const void *thisPtr = this;
    m_setSelectionCallback(const_cast<void *>(thisPtr), rect, command);
  } else {
    std::cerr << "setSelection: Warning: Calling pure-virtual\n";
    return;
  }
}
void QAbstractItemView_wrapper::setSelection_nocallback(
    const QRect &rect, QFlags<QItemSelectionModel::SelectionFlag> command) {
  std::cerr << "setSelection: Warning: Calling pure-virtual\n";
  return;
}
void QAbstractItemView_wrapper::setSelectionModel(
    QItemSelectionModel *selectionModel) {
  if (m_setSelectionModelCallback) {
    const void *thisPtr = this;
    m_setSelectionModelCallback(const_cast<void *>(thisPtr), selectionModel);
  } else {
    ::QAbstractItemView::setSelectionModel(selectionModel);
  }
}
void QAbstractItemView_wrapper::setSelectionModel_nocallback(
    QItemSelectionModel *selectionModel) {
  ::QAbstractItemView::setSelectionModel(selectionModel);
}
void QAbstractItemView_wrapper::setTabKeyNavigation(bool enable) {
  ::QAbstractItemView::setTabKeyNavigation(enable);
}
void QAbstractItemView_wrapper::setVisible(bool visible) {
  if (m_setVisibleCallback) {
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    ::QAbstractItemView::setVisible(visible);
  }
}
void QAbstractItemView_wrapper::setVisible_nocallback(bool visible) {
  ::QAbstractItemView::setVisible(visible);
}
void QAbstractItemView_wrapper::setupViewport(QWidget *viewport) {
  if (m_setupViewportCallback) {
    const void *thisPtr = this;
    m_setupViewportCallback(const_cast<void *>(thisPtr), viewport);
  } else {
    ::QAbstractItemView::setupViewport(viewport);
  }
}
void QAbstractItemView_wrapper::setupViewport_nocallback(QWidget *viewport) {
  ::QAbstractItemView::setupViewport(viewport);
}
QPainter *QAbstractItemView_wrapper::sharedPainter() const {
  if (m_sharedPainterCallback) {
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QAbstractItemView::sharedPainter();
  }
}
QPainter *QAbstractItemView_wrapper::sharedPainter_nocallback() const {
  return ::QAbstractItemView::sharedPainter();
}
bool QAbstractItemView_wrapper::showDropIndicator() const {
  return ::QAbstractItemView::showDropIndicator();
}
QSize QAbstractItemView_wrapper::sizeHint() const {
  if (m_sizeHintCallback) {
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QAbstractItemView::sizeHint();
  }
}
QSize QAbstractItemView_wrapper::sizeHint_nocallback() const {
  return ::QAbstractItemView::sizeHint();
}
int QAbstractItemView_wrapper::sizeHintForColumn(int column) const {
  if (m_sizeHintForColumnCallback) {
    const void *thisPtr = this;
    return m_sizeHintForColumnCallback(const_cast<void *>(thisPtr), column);
  } else {
    return ::QAbstractItemView::sizeHintForColumn(column);
  }
}
int QAbstractItemView_wrapper::sizeHintForColumn_nocallback(int column) const {
  return ::QAbstractItemView::sizeHintForColumn(column);
}
QSize QAbstractItemView_wrapper::sizeHintForIndex(
    const QModelIndex &index) const {
  return ::QAbstractItemView::sizeHintForIndex(index);
}
int QAbstractItemView_wrapper::sizeHintForRow(int row) const {
  if (m_sizeHintForRowCallback) {
    const void *thisPtr = this;
    return m_sizeHintForRowCallback(const_cast<void *>(thisPtr), row);
  } else {
    return ::QAbstractItemView::sizeHintForRow(row);
  }
}
int QAbstractItemView_wrapper::sizeHintForRow_nocallback(int row) const {
  return ::QAbstractItemView::sizeHintForRow(row);
}
void QAbstractItemView_wrapper::startAutoScroll() {
  ::QAbstractItemView::startAutoScroll();
}
void QAbstractItemView_wrapper::stopAutoScroll() {
  ::QAbstractItemView::stopAutoScroll();
}
bool QAbstractItemView_wrapper::tabKeyNavigation() const {
  return ::QAbstractItemView::tabKeyNavigation();
}
QString QAbstractItemView_wrapper::tr(const char *s, const char *c, int n) {
  return ::QAbstractItemView::tr(s, c, n);
}
void QAbstractItemView_wrapper::update(const QModelIndex &index) {
  ::QAbstractItemView::update(index);
}
void QAbstractItemView_wrapper::updateEditorData() {
  if (m_updateEditorDataCallback) {
    const void *thisPtr = this;
    m_updateEditorDataCallback(const_cast<void *>(thisPtr));
  } else {
    ::QAbstractItemView::updateEditorData();
  }
}
void QAbstractItemView_wrapper::updateEditorData_nocallback() {
  ::QAbstractItemView::updateEditorData();
}
void QAbstractItemView_wrapper::updateEditorGeometries() {
  if (m_updateEditorGeometriesCallback) {
    const void *thisPtr = this;
    m_updateEditorGeometriesCallback(const_cast<void *>(thisPtr));
  } else {
    ::QAbstractItemView::updateEditorGeometries();
  }
}
void QAbstractItemView_wrapper::updateEditorGeometries_nocallback() {
  ::QAbstractItemView::updateEditorGeometries();
}
void QAbstractItemView_wrapper::updateGeometries() {
  if (m_updateGeometriesCallback) {
    const void *thisPtr = this;
    m_updateGeometriesCallback(const_cast<void *>(thisPtr));
  } else {
    ::QAbstractItemView::updateGeometries();
  }
}
void QAbstractItemView_wrapper::updateGeometries_nocallback() {
  ::QAbstractItemView::updateGeometries();
}
int QAbstractItemView_wrapper::verticalOffset() const {
  if (m_verticalOffsetCallback) {
    const void *thisPtr = this;
    return m_verticalOffsetCallback(const_cast<void *>(thisPtr));
  } else {
    std::cerr << "verticalOffset: Warning: Calling pure-virtual\n";
    return {};
  }
}
int QAbstractItemView_wrapper::verticalOffset_nocallback() const {
  std::cerr << "verticalOffset: Warning: Calling pure-virtual\n";
  return {};
}
void QAbstractItemView_wrapper::verticalScrollbarAction(int action) {
  if (m_verticalScrollbarActionCallback) {
    const void *thisPtr = this;
    m_verticalScrollbarActionCallback(const_cast<void *>(thisPtr), action);
  } else {
    ::QAbstractItemView::verticalScrollbarAction(action);
  }
}
void QAbstractItemView_wrapper::verticalScrollbarAction_nocallback(int action) {
  ::QAbstractItemView::verticalScrollbarAction(action);
}
void QAbstractItemView_wrapper::verticalScrollbarValueChanged(int value) {
  if (m_verticalScrollbarValueChangedCallback) {
    const void *thisPtr = this;
    m_verticalScrollbarValueChangedCallback(const_cast<void *>(thisPtr), value);
  } else {
    ::QAbstractItemView::verticalScrollbarValueChanged(value);
  }
}
void QAbstractItemView_wrapper::verticalScrollbarValueChanged_nocallback(
    int value) {
  ::QAbstractItemView::verticalScrollbarValueChanged(value);
}
void QAbstractItemView_wrapper::viewportEntered() {
  ::QAbstractItemView::viewportEntered();
}
bool QAbstractItemView_wrapper::viewportEvent(QEvent *event) {
  if (m_viewportEventCallback) {
    const void *thisPtr = this;
    return m_viewportEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    return ::QAbstractItemView::viewportEvent(event);
  }
}
bool QAbstractItemView_wrapper::viewportEvent_nocallback(QEvent *event) {
  return ::QAbstractItemView::viewportEvent(event);
}
QSize QAbstractItemView_wrapper::viewportSizeHint() const {
  if (m_viewportSizeHintCallback) {
    const void *thisPtr = this;
    return *m_viewportSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QAbstractItemView::viewportSizeHint();
  }
}
QSize QAbstractItemView_wrapper::viewportSizeHint_nocallback() const {
  return ::QAbstractItemView::viewportSizeHint();
}
QRect QAbstractItemView_wrapper::visualRect(const QModelIndex &index) const {
  if (m_visualRectCallback) {
    const void *thisPtr = this;
    return *m_visualRectCallback(const_cast<void *>(thisPtr), index);
  } else {
    std::cerr << "visualRect: Warning: Calling pure-virtual\n";
    return {};
  }
}
QRect QAbstractItemView_wrapper::visualRect_nocallback(
    const QModelIndex &index) const {
  std::cerr << "visualRect: Warning: Calling pure-virtual\n";
  return {};
}
QRegion QAbstractItemView_wrapper::visualRegionForSelection(
    const QItemSelection &selection) const {
  if (m_visualRegionForSelectionCallback) {
    const void *thisPtr = this;
    return *m_visualRegionForSelectionCallback(const_cast<void *>(thisPtr),
                                               selection);
  } else {
    std::cerr << "visualRegionForSelection: Warning: Calling pure-virtual\n";
    return {};
  }
}
QRegion QAbstractItemView_wrapper::visualRegionForSelection_nocallback(
    const QItemSelection &selection) const {
  std::cerr << "visualRegionForSelection: Warning: Calling pure-virtual\n";
  return {};
}
QAbstractItemView_wrapper::~QAbstractItemView_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QAbstractItemView *fromPtr(void *ptr) {
  return reinterpret_cast<QAbstractItemView *>(ptr);
}
static QtDartBindings_wrappersNS::QAbstractItemView_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<
      QtDartBindings_wrappersNS::QAbstractItemView_wrapper *>(ptr);
}
extern "C" {
void c_QAbstractItemView_Finalizer(void *cppObj) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QAbstractItemView_wrapper *>(cppObj);
}
void *c_QAbstractItemView__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QAbstractItemView_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
// activated(const QModelIndex & index)
void c_QAbstractItemView__activated_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  fromPtr(thisObj)->activated(index);
}
void c_QAbstractItemView__onActivated_QModelIndex(void *thisObj,
                                                  void *contextQObject,
                                                  void *callback) {
  auto instance = reinterpret_cast<QAbstractItemView *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractItemView::activated,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// alternatingRowColors() const
bool c_QAbstractItemView__alternatingRowColors(void *thisObj) {
  const auto &result = fromPtr(thisObj)->alternatingRowColors();
  return result;
}
// autoScrollMargin() const
int c_QAbstractItemView__autoScrollMargin(void *thisObj) {
  const auto &result = fromPtr(thisObj)->autoScrollMargin();
  return result;
}
// changeEvent(QEvent * arg__1)
void c_QAbstractItemView__changeEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->changeEvent_nocallback(arg__1);
}
// clearSelection()
void c_QAbstractItemView__clearSelection(void *thisObj) {
  fromPtr(thisObj)->clearSelection();
}
// clicked(const QModelIndex & index)
void c_QAbstractItemView__clicked_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  fromPtr(thisObj)->clicked(index);
}
void c_QAbstractItemView__onClicked_QModelIndex(void *thisObj,
                                                void *contextQObject,
                                                void *callback) {
  auto instance = reinterpret_cast<QAbstractItemView *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractItemView::clicked,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// closePersistentEditor(const QModelIndex & index)
void c_QAbstractItemView__closePersistentEditor_QModelIndex(void *thisObj,
                                                            void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  fromPtr(thisObj)->closePersistentEditor(index);
}
// commitData(QWidget * editor)
void c_QAbstractItemView__commitData_QWidget(void *thisObj, void *editor_) {
  auto editor = reinterpret_cast<QWidget *>(editor_);
  fromWrapperPtr(thisObj)->commitData_nocallback(editor);
}
// currentChanged(const QModelIndex & current, const QModelIndex & previous)
void c_QAbstractItemView__currentChanged_QModelIndex_QModelIndex(
    void *thisObj, void *current_, void *previous_) {
  assert(current_);
  auto &current = *reinterpret_cast<QModelIndex *>(current_);
  assert(previous_);
  auto &previous = *reinterpret_cast<QModelIndex *>(previous_);
  fromWrapperPtr(thisObj)->currentChanged_nocallback(current, previous);
}
// currentIndex() const
void *c_QAbstractItemView__currentIndex(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{
      fromPtr(thisObj)->currentIndex()};
  return result;
}
// customEvent(QEvent * event)
void c_QAbstractItemView__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// dataChanged(const QModelIndex & topLeft, const QModelIndex & bottomRight,
// const QList<int > & roles)
void c_QAbstractItemView__dataChanged_QModelIndex_QModelIndex_QList_int(
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
int c_QAbstractItemView__devType(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->devType_nocallback();
    } else {
      return targetPtr->devType();
    }
  }();
  return result;
}
// dirtyRegionOffset() const
void *c_QAbstractItemView__dirtyRegionOffset(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QPoint>{
      fromWrapperPtr(thisObj)->dirtyRegionOffset()};
  return result;
}
// doAutoScroll()
void c_QAbstractItemView__doAutoScroll(void *thisObj) {
  fromWrapperPtr(thisObj)->doAutoScroll();
}
// doItemsLayout()
void c_QAbstractItemView__doItemsLayout(void *thisObj) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->doItemsLayout_nocallback();
    } else {
      return targetPtr->doItemsLayout();
    }
  }();
}
// doubleClicked(const QModelIndex & index)
void c_QAbstractItemView__doubleClicked_QModelIndex(void *thisObj,
                                                    void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  fromPtr(thisObj)->doubleClicked(index);
}
void c_QAbstractItemView__onDoubleClicked_QModelIndex(void *thisObj,
                                                      void *contextQObject,
                                                      void *callback) {
  auto instance = reinterpret_cast<QAbstractItemView *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractItemView::doubleClicked,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// dragDropOverwriteMode() const
bool c_QAbstractItemView__dragDropOverwriteMode(void *thisObj) {
  const auto &result = fromPtr(thisObj)->dragDropOverwriteMode();
  return result;
}
// dragEnabled() const
bool c_QAbstractItemView__dragEnabled(void *thisObj) {
  const auto &result = fromPtr(thisObj)->dragEnabled();
  return result;
}
// edit(const QModelIndex & index)
void c_QAbstractItemView__edit_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  fromPtr(thisObj)->edit(index);
}
// editorDestroyed(QObject * editor)
void c_QAbstractItemView__editorDestroyed_QObject(void *thisObj,
                                                  void *editor_) {
  auto editor = reinterpret_cast<QObject *>(editor_);
  fromWrapperPtr(thisObj)->editorDestroyed_nocallback(editor);
}
// entered(const QModelIndex & index)
void c_QAbstractItemView__entered_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  fromPtr(thisObj)->entered(index);
}
void c_QAbstractItemView__onEntered_QModelIndex(void *thisObj,
                                                void *contextQObject,
                                                void *callback) {
  auto instance = reinterpret_cast<QAbstractItemView *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractItemView::entered,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// event(QEvent * event)
bool c_QAbstractItemView__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = fromWrapperPtr(thisObj)->event_nocallback(event);
  return result;
}
// eventFilter(QObject * object, QEvent * event)
bool c_QAbstractItemView__eventFilter_QObject_QEvent(void *thisObj,
                                                     void *object_,
                                                     void *event_) {
  auto object = reinterpret_cast<QObject *>(object_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result =
      fromWrapperPtr(thisObj)->eventFilter_nocallback(object, event);
  return result;
}
// executeDelayedItemsLayout()
void c_QAbstractItemView__executeDelayedItemsLayout(void *thisObj) {
  fromWrapperPtr(thisObj)->executeDelayedItemsLayout();
}
// focusNextPrevChild(bool next)
bool c_QAbstractItemView__focusNextPrevChild_bool(void *thisObj, bool next) {
  const auto &result =
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
  return result;
}
// hasAutoScroll() const
bool c_QAbstractItemView__hasAutoScroll(void *thisObj) {
  const auto &result = fromPtr(thisObj)->hasAutoScroll();
  return result;
}
// hasHeightForWidth() const
bool c_QAbstractItemView__hasHeightForWidth(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper *>(
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
int c_QAbstractItemView__heightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->heightForWidth_nocallback(arg__1);
    } else {
      return targetPtr->heightForWidth(arg__1);
    }
  }();
  return result;
}
// horizontalOffset() const
int c_QAbstractItemView__horizontalOffset(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->horizontalOffset_nocallback();
  return result;
}
// horizontalScrollbarAction(int action)
void c_QAbstractItemView__horizontalScrollbarAction_int(void *thisObj,
                                                        int action) {
  fromWrapperPtr(thisObj)->horizontalScrollbarAction_nocallback(action);
}
// horizontalScrollbarValueChanged(int value)
void c_QAbstractItemView__horizontalScrollbarValueChanged_int(void *thisObj,
                                                              int value) {
  fromWrapperPtr(thisObj)->horizontalScrollbarValueChanged_nocallback(value);
}
// iconSize() const
void *c_QAbstractItemView__iconSize(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->iconSize()};
  return result;
}
// iconSizeChanged(const QSize & size)
void c_QAbstractItemView__iconSizeChanged_QSize(void *thisObj, void *size_) {
  assert(size_);
  auto &size = *reinterpret_cast<QSize *>(size_);
  fromPtr(thisObj)->iconSizeChanged(size);
}
void c_QAbstractItemView__onIconSizeChanged_QSize(void *thisObj,
                                                  void *contextQObject,
                                                  void *callback) {
  auto instance = reinterpret_cast<QAbstractItemView *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractItemView::iconSizeChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// indexAt(const QPoint & point) const
void *c_QAbstractItemView__indexAt_QPoint(void *thisObj, void *point_) {
  assert(point_);
  auto &point = *reinterpret_cast<QPoint *>(point_);
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->indexAt_nocallback(point);
    } else {
      return targetPtr->indexAt(point);
    }
  }()};
  return result;
}
// indexWidget(const QModelIndex & index) const
void *c_QAbstractItemView__indexWidget_QModelIndex(void *thisObj,
                                                   void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = fromPtr(thisObj)->indexWidget(index);
  return result;
}
// initPainter(QPainter * painter) const
void c_QAbstractItemView__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}
// isIndexHidden(const QModelIndex & index) const
bool c_QAbstractItemView__isIndexHidden_QModelIndex(void *thisObj,
                                                    void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = fromWrapperPtr(thisObj)->isIndexHidden_nocallback(index);
  return result;
}
// isPersistentEditorOpen(const QModelIndex & index) const
bool c_QAbstractItemView__isPersistentEditorOpen_QModelIndex(void *thisObj,
                                                             void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = fromPtr(thisObj)->isPersistentEditorOpen(index);
  return result;
}
// keyboardSearch(const QString & search)
void c_QAbstractItemView__keyboardSearch_QString(void *thisObj,
                                                 const char *search_) {
  const auto search = QString::fromUtf8(search_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper *>(
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
void c_QAbstractItemView__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}
// minimumSizeHint() const
void *c_QAbstractItemView__minimumSizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->minimumSizeHint_nocallback();
    } else {
      return targetPtr->minimumSizeHint();
    }
  }()};
  return result;
}
// model() const
void *c_QAbstractItemView__model(void *thisObj) {
  const auto &result = fromPtr(thisObj)->model();
  return result;
}
// mouseDoubleClickEvent(QMouseEvent * event)
void c_QAbstractItemView__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                            void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}
// mouseMoveEvent(QMouseEvent * event)
void c_QAbstractItemView__mouseMoveEvent_QMouseEvent(void *thisObj,
                                                     void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(event);
}
// mousePressEvent(QMouseEvent * event)
void c_QAbstractItemView__mousePressEvent_QMouseEvent(void *thisObj,
                                                      void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(event);
}
// mouseReleaseEvent(QMouseEvent * event)
void c_QAbstractItemView__mouseReleaseEvent_QMouseEvent(void *thisObj,
                                                        void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(event);
}
// moveCursor(QAbstractItemView::CursorAction cursorAction,
// QFlags<Qt::KeyboardModifier> modifiers)
void *c_QAbstractItemView__moveCursor_CursorAction_KeyboardModifiers(
    void *thisObj, int cursorAction, int modifiers_) {
  auto modifiers = static_cast<QFlags<Qt::KeyboardModifier>>(modifiers_);
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{
      fromWrapperPtr(thisObj)->moveCursor_nocallback(
          static_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                          CursorAction>(cursorAction),
          modifiers)};
  return result;
}
// openPersistentEditor(const QModelIndex & index)
void c_QAbstractItemView__openPersistentEditor_QModelIndex(void *thisObj,
                                                           void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  fromPtr(thisObj)->openPersistentEditor(index);
}
// paintEvent(QPaintEvent * arg__1)
void c_QAbstractItemView__paintEvent_QPaintEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QPaintEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->paintEvent_nocallback(arg__1);
}
// pressed(const QModelIndex & index)
void c_QAbstractItemView__pressed_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  fromPtr(thisObj)->pressed(index);
}
void c_QAbstractItemView__onPressed_QModelIndex(void *thisObj,
                                                void *contextQObject,
                                                void *callback) {
  auto instance = reinterpret_cast<QAbstractItemView *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractItemView::pressed,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// reset()
void c_QAbstractItemView__reset(void *thisObj) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->reset_nocallback();
    } else {
      return targetPtr->reset();
    }
  }();
}
// resetHorizontalScrollMode()
void c_QAbstractItemView__resetHorizontalScrollMode(void *thisObj) {
  fromPtr(thisObj)->resetHorizontalScrollMode();
}
// resetVerticalScrollMode()
void c_QAbstractItemView__resetVerticalScrollMode(void *thisObj) {
  fromPtr(thisObj)->resetVerticalScrollMode();
}
// rootIndex() const
void *c_QAbstractItemView__rootIndex(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QModelIndex>{fromPtr(thisObj)->rootIndex()};
  return result;
}
// rowsAboutToBeRemoved(const QModelIndex & parent, int start, int end)
void c_QAbstractItemView__rowsAboutToBeRemoved_QModelIndex_int_int(
    void *thisObj, void *parent_, int start, int end) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  fromWrapperPtr(thisObj)->rowsAboutToBeRemoved_nocallback(parent, start, end);
}
// rowsInserted(const QModelIndex & parent, int start, int end)
void c_QAbstractItemView__rowsInserted_QModelIndex_int_int(void *thisObj,
                                                           void *parent_,
                                                           int start, int end) {
  assert(parent_);
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  fromWrapperPtr(thisObj)->rowsInserted_nocallback(parent, start, end);
}
// scheduleDelayedItemsLayout()
void c_QAbstractItemView__scheduleDelayedItemsLayout(void *thisObj) {
  fromWrapperPtr(thisObj)->scheduleDelayedItemsLayout();
}
// scrollContentsBy(int dx, int dy)
void c_QAbstractItemView__scrollContentsBy_int_int(void *thisObj, int dx,
                                                   int dy) {
  fromWrapperPtr(thisObj)->scrollContentsBy_nocallback(dx, dy);
}
// scrollDirtyRegion(int dx, int dy)
void c_QAbstractItemView__scrollDirtyRegion_int_int(void *thisObj, int dx,
                                                    int dy) {
  fromWrapperPtr(thisObj)->scrollDirtyRegion(dx, dy);
}
// scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint hint)
void c_QAbstractItemView__scrollTo_QModelIndex_ScrollHint(void *thisObj,
                                                          void *index_,
                                                          int hint) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper *>(
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
// scrollToBottom()
void c_QAbstractItemView__scrollToBottom(void *thisObj) {
  fromPtr(thisObj)->scrollToBottom();
}
// scrollToTop()
void c_QAbstractItemView__scrollToTop(void *thisObj) {
  fromPtr(thisObj)->scrollToTop();
}
// selectAll()
void c_QAbstractItemView__selectAll(void *thisObj) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->selectAll_nocallback();
    } else {
      return targetPtr->selectAll();
    }
  }();
}
// selectedIndexes() const
void *c_QAbstractItemView__selectedIndexes(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QModelIndex>>{
      fromWrapperPtr(thisObj)->selectedIndexes_nocallback()};
  return result;
}
// selectionChanged(const QItemSelection & selected, const QItemSelection &
// deselected)
void c_QAbstractItemView__selectionChanged_QItemSelection_QItemSelection(
    void *thisObj, void *selected_, void *deselected_) {
  assert(selected_);
  auto &selected = *reinterpret_cast<QItemSelection *>(selected_);
  assert(deselected_);
  auto &deselected = *reinterpret_cast<QItemSelection *>(deselected_);
  fromWrapperPtr(thisObj)->selectionChanged_nocallback(selected, deselected);
}
// selectionCommand(const QModelIndex & index, const QEvent * event) const
int c_QAbstractItemView__selectionCommand_QModelIndex_QEvent(void *thisObj,
                                                             void *index_,
                                                             void *event_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result =
      fromWrapperPtr(thisObj)->selectionCommand_nocallback(index, event);
  return result;
}
// selectionModel() const
void *c_QAbstractItemView__selectionModel(void *thisObj) {
  const auto &result = fromPtr(thisObj)->selectionModel();
  return result;
}
// setAlternatingRowColors(bool enable)
void c_QAbstractItemView__setAlternatingRowColors_bool(void *thisObj,
                                                       bool enable) {
  fromPtr(thisObj)->setAlternatingRowColors(enable);
}
// setAutoScroll(bool enable)
void c_QAbstractItemView__setAutoScroll_bool(void *thisObj, bool enable) {
  fromPtr(thisObj)->setAutoScroll(enable);
}
// setAutoScrollMargin(int margin)
void c_QAbstractItemView__setAutoScrollMargin_int(void *thisObj, int margin) {
  fromPtr(thisObj)->setAutoScrollMargin(margin);
}
// setCurrentIndex(const QModelIndex & index)
void c_QAbstractItemView__setCurrentIndex_QModelIndex(void *thisObj,
                                                      void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  fromPtr(thisObj)->setCurrentIndex(index);
}
// setDirtyRegion(const QRegion & region)
void c_QAbstractItemView__setDirtyRegion_QRegion(void *thisObj, void *region_) {
  assert(region_);
  auto &region = *reinterpret_cast<QRegion *>(region_);
  fromWrapperPtr(thisObj)->setDirtyRegion(region);
}
// setDragDropOverwriteMode(bool overwrite)
void c_QAbstractItemView__setDragDropOverwriteMode_bool(void *thisObj,
                                                        bool overwrite) {
  fromPtr(thisObj)->setDragDropOverwriteMode(overwrite);
}
// setDragEnabled(bool enable)
void c_QAbstractItemView__setDragEnabled_bool(void *thisObj, bool enable) {
  fromPtr(thisObj)->setDragEnabled(enable);
}
// setDropIndicatorShown(bool enable)
void c_QAbstractItemView__setDropIndicatorShown_bool(void *thisObj,
                                                     bool enable) {
  fromPtr(thisObj)->setDropIndicatorShown(enable);
}
// setIconSize(const QSize & size)
void c_QAbstractItemView__setIconSize_QSize(void *thisObj, void *size_) {
  assert(size_);
  auto &size = *reinterpret_cast<QSize *>(size_);
  fromPtr(thisObj)->setIconSize(size);
}
// setIndexWidget(const QModelIndex & index, QWidget * widget)
void c_QAbstractItemView__setIndexWidget_QModelIndex_QWidget(void *thisObj,
                                                             void *index_,
                                                             void *widget_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  auto widget = reinterpret_cast<QWidget *>(widget_);
  fromPtr(thisObj)->setIndexWidget(index, widget);
}
// setModel(QAbstractItemModel * model)
void c_QAbstractItemView__setModel_QAbstractItemModel(void *thisObj,
                                                      void *model_) {
  auto model = reinterpret_cast<QAbstractItemModel *>(model_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setModel_nocallback(model);
    } else {
      return targetPtr->setModel(model);
    }
  }();
}
// setRootIndex(const QModelIndex & index)
void c_QAbstractItemView__setRootIndex_QModelIndex(void *thisObj,
                                                   void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setRootIndex_nocallback(index);
    } else {
      return targetPtr->setRootIndex(index);
    }
  }();
}
// setSelection(const QRect & rect, QFlags<QItemSelectionModel::SelectionFlag>
// command)
void c_QAbstractItemView__setSelection_QRect_SelectionFlags(void *thisObj,
                                                            void *rect_,
                                                            int command_) {
  assert(rect_);
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  auto command =
      static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command_);
  fromWrapperPtr(thisObj)->setSelection_nocallback(rect, command);
}
// setSelectionModel(QItemSelectionModel * selectionModel)
void c_QAbstractItemView__setSelectionModel_QItemSelectionModel(
    void *thisObj, void *selectionModel_) {
  auto selectionModel =
      reinterpret_cast<QItemSelectionModel *>(selectionModel_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setSelectionModel_nocallback(selectionModel);
    } else {
      return targetPtr->setSelectionModel(selectionModel);
    }
  }();
}
// setTabKeyNavigation(bool enable)
void c_QAbstractItemView__setTabKeyNavigation_bool(void *thisObj, bool enable) {
  fromPtr(thisObj)->setTabKeyNavigation(enable);
}
// setVisible(bool visible)
void c_QAbstractItemView__setVisible_bool(void *thisObj, bool visible) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}
// setupViewport(QWidget * viewport)
void c_QAbstractItemView__setupViewport_QWidget(void *thisObj,
                                                void *viewport_) {
  auto viewport = reinterpret_cast<QWidget *>(viewport_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setupViewport_nocallback(viewport);
    } else {
      return targetPtr->setupViewport(viewport);
    }
  }();
}
// sharedPainter() const
void *c_QAbstractItemView__sharedPainter(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->sharedPainter_nocallback();
  return result;
}
// showDropIndicator() const
bool c_QAbstractItemView__showDropIndicator(void *thisObj) {
  const auto &result = fromPtr(thisObj)->showDropIndicator();
  return result;
}
// sizeHint() const
void *c_QAbstractItemView__sizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper *>(
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
int c_QAbstractItemView__sizeHintForColumn_int(void *thisObj, int column) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->sizeHintForColumn_nocallback(column);
    } else {
      return targetPtr->sizeHintForColumn(column);
    }
  }();
  return result;
}
// sizeHintForIndex(const QModelIndex & index) const
void *c_QAbstractItemView__sizeHintForIndex_QModelIndex(void *thisObj,
                                                        void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = new Dartagnan::ValueWrapper<QSize>{
      fromPtr(thisObj)->sizeHintForIndex(index)};
  return result;
}
// sizeHintForRow(int row) const
int c_QAbstractItemView__sizeHintForRow_int(void *thisObj, int row) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->sizeHintForRow_nocallback(row);
    } else {
      return targetPtr->sizeHintForRow(row);
    }
  }();
  return result;
}
// startAutoScroll()
void c_QAbstractItemView__startAutoScroll(void *thisObj) {
  fromWrapperPtr(thisObj)->startAutoScroll();
}
// stopAutoScroll()
void c_QAbstractItemView__stopAutoScroll(void *thisObj) {
  fromWrapperPtr(thisObj)->stopAutoScroll();
}
// tabKeyNavigation() const
bool c_QAbstractItemView__tabKeyNavigation(void *thisObj) {
  const auto &result = fromPtr(thisObj)->tabKeyNavigation();
  return result;
}
// tr(const char * s, const char * c, int n)
void *c_static_QAbstractItemView__tr_char_char_int(const char *s, const char *c,
                                                   int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QAbstractItemView_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
// update(const QModelIndex & index)
void c_QAbstractItemView__updateIndex_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  fromPtr(thisObj)->update(index);
}
// updateEditorData()
void c_QAbstractItemView__updateEditorData(void *thisObj) {
  fromWrapperPtr(thisObj)->updateEditorData_nocallback();
}
// updateEditorGeometries()
void c_QAbstractItemView__updateEditorGeometries(void *thisObj) {
  fromWrapperPtr(thisObj)->updateEditorGeometries_nocallback();
}
// updateGeometries()
void c_QAbstractItemView__updateGeometries(void *thisObj) {
  fromWrapperPtr(thisObj)->updateGeometries_nocallback();
}
// verticalOffset() const
int c_QAbstractItemView__verticalOffset(void *thisObj) {
  const auto &result = fromWrapperPtr(thisObj)->verticalOffset_nocallback();
  return result;
}
// verticalScrollbarAction(int action)
void c_QAbstractItemView__verticalScrollbarAction_int(void *thisObj,
                                                      int action) {
  fromWrapperPtr(thisObj)->verticalScrollbarAction_nocallback(action);
}
// verticalScrollbarValueChanged(int value)
void c_QAbstractItemView__verticalScrollbarValueChanged_int(void *thisObj,
                                                            int value) {
  fromWrapperPtr(thisObj)->verticalScrollbarValueChanged_nocallback(value);
}
// viewportEntered()
void c_QAbstractItemView__viewportEntered(void *thisObj) {
  fromPtr(thisObj)->viewportEntered();
}
void c_QAbstractItemView__onViewportEntered(void *thisObj, void *contextQObject,
                                            void *callback) {
  auto instance = reinterpret_cast<QAbstractItemView *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractItemView::viewportEntered,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// viewportEvent(QEvent * event)
bool c_QAbstractItemView__viewportEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = fromWrapperPtr(thisObj)->viewportEvent_nocallback(event);
  return result;
}
// viewportSizeHint() const
void *c_QAbstractItemView__viewportSizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{
      fromWrapperPtr(thisObj)->viewportSizeHint_nocallback()};
  return result;
}
// visualRect(const QModelIndex & index) const
void *c_QAbstractItemView__visualRect_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = new Dartagnan::ValueWrapper<QRect>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper *>(
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
void *
c_QAbstractItemView__visualRegionForSelection_QItemSelection(void *thisObj,
                                                             void *selection_) {
  assert(selection_);
  auto &selection = *reinterpret_cast<QItemSelection *>(selection_);
  const auto &result = new Dartagnan::ValueWrapper<QRegion>{
      fromWrapperPtr(thisObj)->visualRegionForSelection_nocallback(selection)};
  return result;
}
void c_QAbstractItemView__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QAbstractItemView__registerVirtualMethodCallback(void *ptr,
                                                        void *callback,
                                                        int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1128:
    wrapper->m_changeEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_changeEvent>(callback);
    break;
  case 5397:
    wrapper->m_commitDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_commitData>(callback);
    break;
  case 5399:
    wrapper->m_currentChangedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_currentChanged>(callback);
    break;
  case 946:
    wrapper->m_customEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_customEvent>(callback);
    break;
  case 5401:
    wrapper->m_dataChangedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_dataChanged>(callback);
    break;
  case 1145:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractItemView_wrapper::Callback_devType>(
        callback);
    break;
  case 5404:
    wrapper->m_doItemsLayoutCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_doItemsLayout>(callback);
    break;
  case 5409:
    wrapper->m_editorDestroyedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_editorDestroyed>(callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractItemView_wrapper::Callback_event>(
        callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_eventFilter>(callback);
    break;
  case 1155:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1169:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 1173:
    wrapper->m_heightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_heightForWidth>(callback);
    break;
  case 5413:
    wrapper->m_horizontalOffsetCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_horizontalOffset>(callback);
    break;
  case 5414:
    wrapper->m_horizontalScrollbarActionCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_horizontalScrollbarAction>(callback);
    break;
  case 5415:
    wrapper->m_horizontalScrollbarValueChangedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_horizontalScrollbarValueChanged>(
            callback);
    break;
  case 5418:
    wrapper->m_indexAtCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractItemView_wrapper::Callback_indexAt>(
        callback);
    break;
  case 1176:
    wrapper->m_initPainterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_initPainter>(callback);
    break;
  case 5420:
    wrapper->m_isIndexHiddenCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_isIndexHidden>(callback);
    break;
  case 5422:
    wrapper->m_keyboardSearchCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_keyboardSearch>(callback);
    break;
  case 1202:
    wrapper->m_leaveEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_leaveEvent>(callback);
    break;
  case 1222:
    wrapper->m_minimumSizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_minimumSizeHint>(callback);
    break;
  case 1224:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1226:
    wrapper->m_mouseMoveEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_mouseMoveEvent>(callback);
    break;
  case 1227:
    wrapper->m_mousePressEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_mousePressEvent>(callback);
    break;
  case 1228:
    wrapper->m_mouseReleaseEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_mouseReleaseEvent>(callback);
    break;
  case 5425:
    wrapper->m_moveCursorCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_moveCursor>(callback);
    break;
  case 1235:
    wrapper->m_paintEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_paintEvent>(callback);
    break;
  case 5428:
    wrapper->m_resetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractItemView_wrapper::Callback_reset>(
        callback);
    break;
  case 5432:
    wrapper->m_rowsAboutToBeRemovedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_rowsAboutToBeRemoved>(callback);
    break;
  case 5433:
    wrapper->m_rowsInsertedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_rowsInserted>(callback);
    break;
  case 5218:
    wrapper->m_scrollContentsByCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_scrollContentsBy>(callback);
    break;
  case 5436:
    wrapper->m_scrollToCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_scrollTo>(callback);
    break;
  case 5439:
    wrapper->m_selectAllCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_selectAll>(callback);
    break;
  case 5440:
    wrapper->m_selectedIndexesCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_selectedIndexes>(callback);
    break;
  case 5441:
    wrapper->m_selectionChangedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_selectionChanged>(callback);
    break;
  case 5442:
    wrapper->m_selectionCommandCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_selectionCommand>(callback);
    break;
  case 5455:
    wrapper->m_setModelCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_setModel>(callback);
    break;
  case 5456:
    wrapper->m_setRootIndexCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_setRootIndex>(callback);
    break;
  case 5457:
    wrapper->m_setSelectionCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_setSelection>(callback);
    break;
  case 5458:
    wrapper->m_setSelectionModelCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_setSelectionModel>(callback);
    break;
  case 1314:
    wrapper->m_setVisibleCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_setVisible>(callback);
    break;
  case 5226:
    wrapper->m_setupViewportCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_setupViewport>(callback);
    break;
  case 1323:
    wrapper->m_sharedPainterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_sharedPainter>(callback);
    break;
  case 1331:
    wrapper->m_sizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_sizeHint>(callback);
    break;
  case 5463:
    wrapper->m_sizeHintForColumnCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_sizeHintForColumn>(callback);
    break;
  case 5465:
    wrapper->m_sizeHintForRowCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_sizeHintForRow>(callback);
    break;
  case 5471:
    wrapper->m_updateEditorDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_updateEditorData>(callback);
    break;
  case 5472:
    wrapper->m_updateEditorGeometriesCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_updateEditorGeometries>(callback);
    break;
  case 5473:
    wrapper->m_updateGeometriesCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_updateGeometries>(callback);
    break;
  case 5474:
    wrapper->m_verticalOffsetCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_verticalOffset>(callback);
    break;
  case 5475:
    wrapper->m_verticalScrollbarActionCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_verticalScrollbarAction>(callback);
    break;
  case 5476:
    wrapper->m_verticalScrollbarValueChangedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_verticalScrollbarValueChanged>(callback);
    break;
  case 5229:
    wrapper->m_viewportEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_viewportEvent>(callback);
    break;
  case 5230:
    wrapper->m_viewportSizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_viewportSizeHint>(callback);
    break;
  case 5479:
    wrapper->m_visualRectCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_visualRect>(callback);
    break;
  case 5480:
    wrapper->m_visualRegionForSelectionCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_visualRegionForSelection>(callback);
    break;
  }
}
}
