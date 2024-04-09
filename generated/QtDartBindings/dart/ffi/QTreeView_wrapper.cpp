#include "QTreeView_wrapper.h"

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
QTreeView_wrapper::QTreeView_wrapper(QWidget *parent) : ::QTreeView(parent) {}
bool QTreeView_wrapper::allColumnsShowFocus() const {
  // tag=1000

  // tag=1004
  return ::QTreeView::allColumnsShowFocus();
}
int QTreeView_wrapper::autoExpandDelay() const {
  // tag=1000

  // tag=1004
  return ::QTreeView::autoExpandDelay();
}
void QTreeView_wrapper::changeEvent(QEvent *event) {
  // tag=1000
  if (m_changeEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QTreeView::changeEvent(event);
  }
}
// tag=1009
void QTreeView_wrapper::changeEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QTreeView::changeEvent(event);
}
void QTreeView_wrapper::collapse(const QModelIndex &index) {
  // tag=1000

  // tag=1004
  ::QTreeView::collapse(index);
}
void QTreeView_wrapper::collapseAll() {
  // tag=1000

  // tag=1004
  ::QTreeView::collapseAll();
}
void QTreeView_wrapper::collapsed(const QModelIndex &index) {
  // tag=1000

  // tag=1004
  ::QTreeView::collapsed(index);
}
int QTreeView_wrapper::columnAt(int x) const {
  // tag=1000

  // tag=1004
  return ::QTreeView::columnAt(x);
}
void QTreeView_wrapper::columnCountChanged(int oldCount, int newCount) {
  // tag=1000

  // tag=1004
  ::QTreeView::columnCountChanged(oldCount, newCount);
}
void QTreeView_wrapper::columnMoved() {
  // tag=1000

  // tag=1004
  ::QTreeView::columnMoved();
}
void QTreeView_wrapper::columnResized(int column, int oldSize, int newSize) {
  // tag=1000

  // tag=1004
  ::QTreeView::columnResized(column, oldSize, newSize);
}
int QTreeView_wrapper::columnViewportPosition(int column) const {
  // tag=1000

  // tag=1004
  return ::QTreeView::columnViewportPosition(column);
}
int QTreeView_wrapper::columnWidth(int column) const {
  // tag=1000

  // tag=1004
  return ::QTreeView::columnWidth(column);
}
void QTreeView_wrapper::commitData(QWidget *editor) {
  // tag=1000
  if (m_commitDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_commitDataCallback(const_cast<void *>(thisPtr), editor);
  } else {
    // tag=1002
    ::QTreeView::commitData(editor);
  }
}
// tag=1009
void QTreeView_wrapper::commitData_nocallback(QWidget *editor) {
  // tag=1003
  ::QTreeView::commitData(editor);
}
void QTreeView_wrapper::currentChanged(const QModelIndex &current,
                                       const QModelIndex &previous) {
  // tag=1000
  if (m_currentChangedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_currentChangedCallback(const_cast<void *>(thisPtr), current, previous);
  } else {
    // tag=1002
    ::QTreeView::currentChanged(current, previous);
  }
}
// tag=1009
void QTreeView_wrapper::currentChanged_nocallback(const QModelIndex &current,
                                                  const QModelIndex &previous) {
  // tag=1003
  ::QTreeView::currentChanged(current, previous);
}
void QTreeView_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QTreeView::customEvent(event);
  }
}
// tag=1009
void QTreeView_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QTreeView::customEvent(event);
}
void QTreeView_wrapper::dataChanged(const QModelIndex &topLeft,
                                    const QModelIndex &bottomRight,
                                    const QList<int> &roles) {
  // tag=1000
  if (m_dataChangedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_dataChangedCallback(const_cast<void *>(thisPtr), topLeft, bottomRight,
                          roles);
  } else {
    // tag=1002
    ::QTreeView::dataChanged(topLeft, bottomRight, roles);
  }
}
// tag=1009
void QTreeView_wrapper::dataChanged_nocallback(const QModelIndex &topLeft,
                                               const QModelIndex &bottomRight,
                                               const QList<int> &roles) {
  // tag=1003
  ::QTreeView::dataChanged(topLeft, bottomRight, roles);
}
int QTreeView_wrapper::devType() const {
  // tag=1000
  if (m_devTypeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QTreeView::devType();
  }
}
// tag=1009
int QTreeView_wrapper::devType_nocallback() const {
  // tag=1003
  return ::QTreeView::devType();
}
void QTreeView_wrapper::doItemsLayout() {
  // tag=1000
  if (m_doItemsLayoutCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_doItemsLayoutCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QTreeView::doItemsLayout();
  }
}
// tag=1009
void QTreeView_wrapper::doItemsLayout_nocallback() {
  // tag=1003
  ::QTreeView::doItemsLayout();
}
void QTreeView_wrapper::drawBranches(QPainter *painter, const QRect &rect,
                                     const QModelIndex &index) const {
  // tag=1000
  if (m_drawBranchesCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_drawBranchesCallback(const_cast<void *>(thisPtr), painter, rect, index);
  } else {
    // tag=1002
    ::QTreeView::drawBranches(painter, rect, index);
  }
}
// tag=1009
void QTreeView_wrapper::drawBranches_nocallback(
    QPainter *painter, const QRect &rect, const QModelIndex &index) const {
  // tag=1003
  ::QTreeView::drawBranches(painter, rect, index);
}
void QTreeView_wrapper::drawTree(QPainter *painter,
                                 const QRegion &region) const {
  // tag=1000

  // tag=1004
  ::QTreeView::drawTree(painter, region);
}
void QTreeView_wrapper::editorDestroyed(QObject *editor) {
  // tag=1000
  if (m_editorDestroyedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_editorDestroyedCallback(const_cast<void *>(thisPtr), editor);
  } else {
    // tag=1002
    ::QTreeView::editorDestroyed(editor);
  }
}
// tag=1009
void QTreeView_wrapper::editorDestroyed_nocallback(QObject *editor) {
  // tag=1003
  ::QTreeView::editorDestroyed(editor);
}
bool QTreeView_wrapper::event(QEvent *event) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    return ::QTreeView::event(event);
  }
}
// tag=1009
bool QTreeView_wrapper::event_nocallback(QEvent *event) {
  // tag=1003
  return ::QTreeView::event(event);
}
bool QTreeView_wrapper::eventFilter(QObject *object, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), object, event);
  } else {
    // tag=1002
    return ::QTreeView::eventFilter(object, event);
  }
}
// tag=1009
bool QTreeView_wrapper::eventFilter_nocallback(QObject *object, QEvent *event) {
  // tag=1003
  return ::QTreeView::eventFilter(object, event);
}
void QTreeView_wrapper::expand(const QModelIndex &index) {
  // tag=1000

  // tag=1004
  ::QTreeView::expand(index);
}
void QTreeView_wrapper::expandAll() {
  // tag=1000

  // tag=1004
  ::QTreeView::expandAll();
}
void QTreeView_wrapper::expandRecursively(const QModelIndex &index, int depth) {
  // tag=1000

  // tag=1004
  ::QTreeView::expandRecursively(index, depth);
}
void QTreeView_wrapper::expandToDepth(int depth) {
  // tag=1000

  // tag=1004
  ::QTreeView::expandToDepth(depth);
}
void QTreeView_wrapper::expanded(const QModelIndex &index) {
  // tag=1000

  // tag=1004
  ::QTreeView::expanded(index);
}
bool QTreeView_wrapper::expandsOnDoubleClick() const {
  // tag=1000

  // tag=1004
  return ::QTreeView::expandsOnDoubleClick();
}
bool QTreeView_wrapper::focusNextPrevChild(bool next) {
  // tag=1000
  if (m_focusNextPrevChildCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    // tag=1002
    return ::QTreeView::focusNextPrevChild(next);
  }
}
// tag=1009
bool QTreeView_wrapper::focusNextPrevChild_nocallback(bool next) {
  // tag=1003
  return ::QTreeView::focusNextPrevChild(next);
}
bool QTreeView_wrapper::hasHeightForWidth() const {
  // tag=1000
  if (m_hasHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QTreeView::hasHeightForWidth();
  }
}
// tag=1009
bool QTreeView_wrapper::hasHeightForWidth_nocallback() const {
  // tag=1003
  return ::QTreeView::hasHeightForWidth();
}
int QTreeView_wrapper::heightForWidth(int arg__1) const {
  // tag=1000
  if (m_heightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QTreeView::heightForWidth(arg__1);
  }
}
// tag=1009
int QTreeView_wrapper::heightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QTreeView::heightForWidth(arg__1);
}
void QTreeView_wrapper::hideColumn(int column) {
  // tag=1000

  // tag=1004
  ::QTreeView::hideColumn(column);
}
int QTreeView_wrapper::horizontalOffset() const {
  // tag=1000
  if (m_horizontalOffsetCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_horizontalOffsetCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QTreeView::horizontalOffset();
  }
}
// tag=1009
int QTreeView_wrapper::horizontalOffset_nocallback() const {
  // tag=1003
  return ::QTreeView::horizontalOffset();
}
void QTreeView_wrapper::horizontalScrollbarAction(int action) {
  // tag=1000
  if (m_horizontalScrollbarActionCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_horizontalScrollbarActionCallback(const_cast<void *>(thisPtr), action);
  } else {
    // tag=1002
    ::QTreeView::horizontalScrollbarAction(action);
  }
}
// tag=1009
void QTreeView_wrapper::horizontalScrollbarAction_nocallback(int action) {
  // tag=1003
  ::QTreeView::horizontalScrollbarAction(action);
}
void QTreeView_wrapper::horizontalScrollbarValueChanged(int value) {
  // tag=1000
  if (m_horizontalScrollbarValueChangedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_horizontalScrollbarValueChangedCallback(const_cast<void *>(thisPtr),
                                              value);
  } else {
    // tag=1002
    ::QTreeView::horizontalScrollbarValueChanged(value);
  }
}
// tag=1009
void QTreeView_wrapper::horizontalScrollbarValueChanged_nocallback(int value) {
  // tag=1003
  ::QTreeView::horizontalScrollbarValueChanged(value);
}
int QTreeView_wrapper::indentation() const {
  // tag=1000

  // tag=1004
  return ::QTreeView::indentation();
}
QModelIndex QTreeView_wrapper::indexAbove(const QModelIndex &index) const {
  // tag=1000

  // tag=1004
  return ::QTreeView::indexAbove(index);
}
QModelIndex QTreeView_wrapper::indexAt(const QPoint &p) const {
  // tag=1000
  if (m_indexAtCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_indexAtCallback(const_cast<void *>(thisPtr), p);
  } else {
    // tag=1002
    return ::QTreeView::indexAt(p);
  }
}
// tag=1009
QModelIndex QTreeView_wrapper::indexAt_nocallback(const QPoint &p) const {
  // tag=1003
  return ::QTreeView::indexAt(p);
}
QModelIndex QTreeView_wrapper::indexBelow(const QModelIndex &index) const {
  // tag=1000

  // tag=1004
  return ::QTreeView::indexBelow(index);
}
int QTreeView_wrapper::indexRowSizeHint(const QModelIndex &index) const {
  // tag=1000

  // tag=1004
  return ::QTreeView::indexRowSizeHint(index);
}
void QTreeView_wrapper::initPainter(QPainter *painter) const {
  // tag=1000
  if (m_initPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    // tag=1002
    ::QTreeView::initPainter(painter);
  }
}
// tag=1009
void QTreeView_wrapper::initPainter_nocallback(QPainter *painter) const {
  // tag=1003
  ::QTreeView::initPainter(painter);
}
bool QTreeView_wrapper::isAnimated() const {
  // tag=1000

  // tag=1004
  return ::QTreeView::isAnimated();
}
bool QTreeView_wrapper::isColumnHidden(int column) const {
  // tag=1000

  // tag=1004
  return ::QTreeView::isColumnHidden(column);
}
bool QTreeView_wrapper::isExpanded(const QModelIndex &index) const {
  // tag=1000

  // tag=1004
  return ::QTreeView::isExpanded(index);
}
bool QTreeView_wrapper::isFirstColumnSpanned(int row,
                                             const QModelIndex &parent) const {
  // tag=1000

  // tag=1004
  return ::QTreeView::isFirstColumnSpanned(row, parent);
}
bool QTreeView_wrapper::isHeaderHidden() const {
  // tag=1000

  // tag=1004
  return ::QTreeView::isHeaderHidden();
}
bool QTreeView_wrapper::isIndexHidden(const QModelIndex &index) const {
  // tag=1000
  if (m_isIndexHiddenCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_isIndexHiddenCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1002
    return ::QTreeView::isIndexHidden(index);
  }
}
// tag=1009
bool QTreeView_wrapper::isIndexHidden_nocallback(
    const QModelIndex &index) const {
  // tag=1003
  return ::QTreeView::isIndexHidden(index);
}
bool QTreeView_wrapper::isRowHidden(int row, const QModelIndex &parent) const {
  // tag=1000

  // tag=1004
  return ::QTreeView::isRowHidden(row, parent);
}
bool QTreeView_wrapper::isSortingEnabled() const {
  // tag=1000

  // tag=1004
  return ::QTreeView::isSortingEnabled();
}
bool QTreeView_wrapper::itemsExpandable() const {
  // tag=1000

  // tag=1004
  return ::QTreeView::itemsExpandable();
}
void QTreeView_wrapper::keyboardSearch(const QString &search) {
  // tag=1000
  if (m_keyboardSearchCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_keyboardSearchCallback(const_cast<void *>(thisPtr), search);
  } else {
    // tag=1002
    ::QTreeView::keyboardSearch(search);
  }
}
// tag=1009
void QTreeView_wrapper::keyboardSearch_nocallback(const QString &search) {
  // tag=1003
  ::QTreeView::keyboardSearch(search);
}
void QTreeView_wrapper::leaveEvent(QEvent *event) {
  // tag=1000
  if (m_leaveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QTreeView::leaveEvent(event);
  }
}
// tag=1009
void QTreeView_wrapper::leaveEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QTreeView::leaveEvent(event);
}
QSize QTreeView_wrapper::minimumSizeHint() const {
  // tag=1000
  if (m_minimumSizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QTreeView::minimumSizeHint();
  }
}
// tag=1009
QSize QTreeView_wrapper::minimumSizeHint_nocallback() const {
  // tag=1003
  return ::QTreeView::minimumSizeHint();
}
void QTreeView_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseDoubleClickEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QTreeView::mouseDoubleClickEvent(event);
  }
}
// tag=1009
void QTreeView_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QTreeView::mouseDoubleClickEvent(event);
}
void QTreeView_wrapper::mouseMoveEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseMoveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QTreeView::mouseMoveEvent(event);
  }
}
// tag=1009
void QTreeView_wrapper::mouseMoveEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QTreeView::mouseMoveEvent(event);
}
void QTreeView_wrapper::mousePressEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mousePressEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QTreeView::mousePressEvent(event);
  }
}
// tag=1009
void QTreeView_wrapper::mousePressEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QTreeView::mousePressEvent(event);
}
void QTreeView_wrapper::mouseReleaseEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseReleaseEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QTreeView::mouseReleaseEvent(event);
  }
}
// tag=1009
void QTreeView_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QTreeView::mouseReleaseEvent(event);
}
QModelIndex
QTreeView_wrapper::moveCursor(QAbstractItemView::CursorAction cursorAction,
                              QFlags<Qt::KeyboardModifier> modifiers) {
  // tag=1000
  if (m_moveCursorCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_moveCursorCallback(const_cast<void *>(thisPtr), cursorAction,
                                 modifiers);
  } else {
    // tag=1002
    return ::QTreeView::moveCursor(cursorAction, modifiers);
  }
}
// tag=1009
QModelIndex QTreeView_wrapper::moveCursor_nocallback(
    QAbstractItemView::CursorAction cursorAction,
    QFlags<Qt::KeyboardModifier> modifiers) {
  // tag=1003
  return ::QTreeView::moveCursor(cursorAction, modifiers);
}
void QTreeView_wrapper::paintEvent(QPaintEvent *event) {
  // tag=1000
  if (m_paintEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QTreeView::paintEvent(event);
  }
}
// tag=1009
void QTreeView_wrapper::paintEvent_nocallback(QPaintEvent *event) {
  // tag=1003
  ::QTreeView::paintEvent(event);
}
void QTreeView_wrapper::reexpand() {
  // tag=1000

  // tag=1004
  ::QTreeView::reexpand();
}
void QTreeView_wrapper::reset() {
  // tag=1000
  if (m_resetCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_resetCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QTreeView::reset();
  }
}
// tag=1009
void QTreeView_wrapper::reset_nocallback() {
  // tag=1003
  ::QTreeView::reset();
}
void QTreeView_wrapper::resetIndentation() {
  // tag=1000

  // tag=1004
  ::QTreeView::resetIndentation();
}
void QTreeView_wrapper::resizeColumnToContents(int column) {
  // tag=1000

  // tag=1004
  ::QTreeView::resizeColumnToContents(column);
}
bool QTreeView_wrapper::rootIsDecorated() const {
  // tag=1000

  // tag=1004
  return ::QTreeView::rootIsDecorated();
}
int QTreeView_wrapper::rowHeight(const QModelIndex &index) const {
  // tag=1000

  // tag=1004
  return ::QTreeView::rowHeight(index);
}
void QTreeView_wrapper::rowsAboutToBeRemoved(const QModelIndex &parent,
                                             int start, int end) {
  // tag=1000
  if (m_rowsAboutToBeRemovedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_rowsAboutToBeRemovedCallback(const_cast<void *>(thisPtr), parent, start,
                                   end);
  } else {
    // tag=1002
    ::QTreeView::rowsAboutToBeRemoved(parent, start, end);
  }
}
// tag=1009
void QTreeView_wrapper::rowsAboutToBeRemoved_nocallback(
    const QModelIndex &parent, int start, int end) {
  // tag=1003
  ::QTreeView::rowsAboutToBeRemoved(parent, start, end);
}
void QTreeView_wrapper::rowsInserted(const QModelIndex &parent, int start,
                                     int end) {
  // tag=1000
  if (m_rowsInsertedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_rowsInsertedCallback(const_cast<void *>(thisPtr), parent, start, end);
  } else {
    // tag=1002
    ::QTreeView::rowsInserted(parent, start, end);
  }
}
// tag=1009
void QTreeView_wrapper::rowsInserted_nocallback(const QModelIndex &parent,
                                                int start, int end) {
  // tag=1003
  ::QTreeView::rowsInserted(parent, start, end);
}
void QTreeView_wrapper::rowsRemoved(const QModelIndex &parent, int first,
                                    int last) {
  // tag=1000

  // tag=1004
  ::QTreeView::rowsRemoved(parent, first, last);
}
void QTreeView_wrapper::scrollContentsBy(int dx, int dy) {
  // tag=1000
  if (m_scrollContentsByCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_scrollContentsByCallback(const_cast<void *>(thisPtr), dx, dy);
  } else {
    // tag=1002
    ::QTreeView::scrollContentsBy(dx, dy);
  }
}
// tag=1009
void QTreeView_wrapper::scrollContentsBy_nocallback(int dx, int dy) {
  // tag=1003
  ::QTreeView::scrollContentsBy(dx, dy);
}
void QTreeView_wrapper::scrollTo(const QModelIndex &index,
                                 QAbstractItemView::ScrollHint hint) {
  // tag=1000
  if (m_scrollToCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_scrollToCallback(const_cast<void *>(thisPtr), index, hint);
  } else {
    // tag=1002
    ::QTreeView::scrollTo(index, hint);
  }
}
// tag=1009
void QTreeView_wrapper::scrollTo_nocallback(
    const QModelIndex &index, QAbstractItemView::ScrollHint hint) {
  // tag=1003
  ::QTreeView::scrollTo(index, hint);
}
void QTreeView_wrapper::selectAll() {
  // tag=1000
  if (m_selectAllCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_selectAllCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QTreeView::selectAll();
  }
}
// tag=1009
void QTreeView_wrapper::selectAll_nocallback() {
  // tag=1003
  ::QTreeView::selectAll();
}
QList<QModelIndex> QTreeView_wrapper::selectedIndexes() const {
  // tag=1000
  if (m_selectedIndexesCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_selectedIndexesCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QTreeView::selectedIndexes();
  }
}
// tag=1009
QList<QModelIndex> QTreeView_wrapper::selectedIndexes_nocallback() const {
  // tag=1003
  return ::QTreeView::selectedIndexes();
}
void QTreeView_wrapper::selectionChanged(const QItemSelection &selected,
                                         const QItemSelection &deselected) {
  // tag=1000
  if (m_selectionChangedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_selectionChangedCallback(const_cast<void *>(thisPtr), selected,
                               deselected);
  } else {
    // tag=1002
    ::QTreeView::selectionChanged(selected, deselected);
  }
}
// tag=1009
void QTreeView_wrapper::selectionChanged_nocallback(
    const QItemSelection &selected, const QItemSelection &deselected) {
  // tag=1003
  ::QTreeView::selectionChanged(selected, deselected);
}
QFlags<QItemSelectionModel::SelectionFlag>
QTreeView_wrapper::selectionCommand(const QModelIndex &index,
                                    const QEvent *event) const {
  // tag=1000
  if (m_selectionCommandCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_selectionCommandCallback(const_cast<void *>(thisPtr), index,
                                      event);
  } else {
    // tag=1002
    return ::QTreeView::selectionCommand(index, event);
  }
}
// tag=1009
QFlags<QItemSelectionModel::SelectionFlag>
QTreeView_wrapper::selectionCommand_nocallback(const QModelIndex &index,
                                               const QEvent *event) const {
  // tag=1003
  return ::QTreeView::selectionCommand(index, event);
}
void QTreeView_wrapper::setAllColumnsShowFocus(bool enable) {
  // tag=1000

  // tag=1004
  ::QTreeView::setAllColumnsShowFocus(enable);
}
void QTreeView_wrapper::setAnimated(bool enable) {
  // tag=1000

  // tag=1004
  ::QTreeView::setAnimated(enable);
}
void QTreeView_wrapper::setAutoExpandDelay(int delay) {
  // tag=1000

  // tag=1004
  ::QTreeView::setAutoExpandDelay(delay);
}
void QTreeView_wrapper::setColumnHidden(int column, bool hide) {
  // tag=1000

  // tag=1004
  ::QTreeView::setColumnHidden(column, hide);
}
void QTreeView_wrapper::setColumnWidth(int column, int width) {
  // tag=1000

  // tag=1004
  ::QTreeView::setColumnWidth(column, width);
}
void QTreeView_wrapper::setExpanded(const QModelIndex &index, bool expand) {
  // tag=1000

  // tag=1004
  ::QTreeView::setExpanded(index, expand);
}
void QTreeView_wrapper::setExpandsOnDoubleClick(bool enable) {
  // tag=1000

  // tag=1004
  ::QTreeView::setExpandsOnDoubleClick(enable);
}
void QTreeView_wrapper::setFirstColumnSpanned(int row,
                                              const QModelIndex &parent,
                                              bool span) {
  // tag=1000

  // tag=1004
  ::QTreeView::setFirstColumnSpanned(row, parent, span);
}
void QTreeView_wrapper::setHeaderHidden(bool hide) {
  // tag=1000

  // tag=1004
  ::QTreeView::setHeaderHidden(hide);
}
void QTreeView_wrapper::setIndentation(int i) {
  // tag=1000

  // tag=1004
  ::QTreeView::setIndentation(i);
}
void QTreeView_wrapper::setItemsExpandable(bool enable) {
  // tag=1000

  // tag=1004
  ::QTreeView::setItemsExpandable(enable);
}
void QTreeView_wrapper::setModel(QAbstractItemModel *model) {
  // tag=1000
  if (m_setModelCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setModelCallback(const_cast<void *>(thisPtr), model);
  } else {
    // tag=1002
    ::QTreeView::setModel(model);
  }
}
// tag=1009
void QTreeView_wrapper::setModel_nocallback(QAbstractItemModel *model) {
  // tag=1003
  ::QTreeView::setModel(model);
}
void QTreeView_wrapper::setRootIndex(const QModelIndex &index) {
  // tag=1000
  if (m_setRootIndexCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setRootIndexCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1002
    ::QTreeView::setRootIndex(index);
  }
}
// tag=1009
void QTreeView_wrapper::setRootIndex_nocallback(const QModelIndex &index) {
  // tag=1003
  ::QTreeView::setRootIndex(index);
}
void QTreeView_wrapper::setRootIsDecorated(bool show) {
  // tag=1000

  // tag=1004
  ::QTreeView::setRootIsDecorated(show);
}
void QTreeView_wrapper::setRowHidden(int row, const QModelIndex &parent,
                                     bool hide) {
  // tag=1000

  // tag=1004
  ::QTreeView::setRowHidden(row, parent, hide);
}
void QTreeView_wrapper::setSelection(
    const QRect &rect, QFlags<QItemSelectionModel::SelectionFlag> command) {
  // tag=1000
  if (m_setSelectionCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setSelectionCallback(const_cast<void *>(thisPtr), rect, command);
  } else {
    // tag=1002
    ::QTreeView::setSelection(rect, command);
  }
}
// tag=1009
void QTreeView_wrapper::setSelection_nocallback(
    const QRect &rect, QFlags<QItemSelectionModel::SelectionFlag> command) {
  // tag=1003
  ::QTreeView::setSelection(rect, command);
}
void QTreeView_wrapper::setSelectionModel(QItemSelectionModel *selectionModel) {
  // tag=1000
  if (m_setSelectionModelCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setSelectionModelCallback(const_cast<void *>(thisPtr), selectionModel);
  } else {
    // tag=1002
    ::QTreeView::setSelectionModel(selectionModel);
  }
}
// tag=1009
void QTreeView_wrapper::setSelectionModel_nocallback(
    QItemSelectionModel *selectionModel) {
  // tag=1003
  ::QTreeView::setSelectionModel(selectionModel);
}
void QTreeView_wrapper::setSortingEnabled(bool enable) {
  // tag=1000

  // tag=1004
  ::QTreeView::setSortingEnabled(enable);
}
void QTreeView_wrapper::setTreePosition(int logicalIndex) {
  // tag=1000

  // tag=1004
  ::QTreeView::setTreePosition(logicalIndex);
}
void QTreeView_wrapper::setUniformRowHeights(bool uniform) {
  // tag=1000

  // tag=1004
  ::QTreeView::setUniformRowHeights(uniform);
}
void QTreeView_wrapper::setVisible(bool visible) {
  // tag=1000
  if (m_setVisibleCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    // tag=1002
    ::QTreeView::setVisible(visible);
  }
}
// tag=1009
void QTreeView_wrapper::setVisible_nocallback(bool visible) {
  // tag=1003
  ::QTreeView::setVisible(visible);
}
void QTreeView_wrapper::setWordWrap(bool on) {
  // tag=1000

  // tag=1004
  ::QTreeView::setWordWrap(on);
}
void QTreeView_wrapper::setupViewport(QWidget *viewport) {
  // tag=1000
  if (m_setupViewportCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setupViewportCallback(const_cast<void *>(thisPtr), viewport);
  } else {
    // tag=1002
    ::QTreeView::setupViewport(viewport);
  }
}
// tag=1009
void QTreeView_wrapper::setupViewport_nocallback(QWidget *viewport) {
  // tag=1003
  ::QTreeView::setupViewport(viewport);
}
QPainter *QTreeView_wrapper::sharedPainter() const {
  // tag=1000
  if (m_sharedPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QTreeView::sharedPainter();
  }
}
// tag=1009
QPainter *QTreeView_wrapper::sharedPainter_nocallback() const {
  // tag=1003
  return ::QTreeView::sharedPainter();
}
void QTreeView_wrapper::showColumn(int column) {
  // tag=1000

  // tag=1004
  ::QTreeView::showColumn(column);
}
QSize QTreeView_wrapper::sizeHint() const {
  // tag=1000
  if (m_sizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QTreeView::sizeHint();
  }
}
// tag=1009
QSize QTreeView_wrapper::sizeHint_nocallback() const {
  // tag=1003
  return ::QTreeView::sizeHint();
}
int QTreeView_wrapper::sizeHintForColumn(int column) const {
  // tag=1000
  if (m_sizeHintForColumnCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_sizeHintForColumnCallback(const_cast<void *>(thisPtr), column);
  } else {
    // tag=1002
    return ::QTreeView::sizeHintForColumn(column);
  }
}
// tag=1009
int QTreeView_wrapper::sizeHintForColumn_nocallback(int column) const {
  // tag=1003
  return ::QTreeView::sizeHintForColumn(column);
}
int QTreeView_wrapper::sizeHintForRow(int row) const {
  // tag=1000
  if (m_sizeHintForRowCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_sizeHintForRowCallback(const_cast<void *>(thisPtr), row);
  } else {
    // tag=1002
    return ::QTreeView::sizeHintForRow(row);
  }
}
// tag=1009
int QTreeView_wrapper::sizeHintForRow_nocallback(int row) const {
  // tag=1003
  return ::QTreeView::sizeHintForRow(row);
}
void QTreeView_wrapper::sortByColumn(int column, Qt::SortOrder order) {
  // tag=1000

  // tag=1004
  ::QTreeView::sortByColumn(column, order);
}
QString QTreeView_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QTreeView::tr(s, c, n);
}
int QTreeView_wrapper::treePosition() const {
  // tag=1000

  // tag=1004
  return ::QTreeView::treePosition();
}
bool QTreeView_wrapper::uniformRowHeights() const {
  // tag=1000

  // tag=1004
  return ::QTreeView::uniformRowHeights();
}
void QTreeView_wrapper::updateEditorData() {
  // tag=1000
  if (m_updateEditorDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_updateEditorDataCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QTreeView::updateEditorData();
  }
}
// tag=1009
void QTreeView_wrapper::updateEditorData_nocallback() {
  // tag=1003
  ::QTreeView::updateEditorData();
}
void QTreeView_wrapper::updateEditorGeometries() {
  // tag=1000
  if (m_updateEditorGeometriesCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_updateEditorGeometriesCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QTreeView::updateEditorGeometries();
  }
}
// tag=1009
void QTreeView_wrapper::updateEditorGeometries_nocallback() {
  // tag=1003
  ::QTreeView::updateEditorGeometries();
}
void QTreeView_wrapper::updateGeometries() {
  // tag=1000
  if (m_updateGeometriesCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_updateGeometriesCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QTreeView::updateGeometries();
  }
}
// tag=1009
void QTreeView_wrapper::updateGeometries_nocallback() {
  // tag=1003
  ::QTreeView::updateGeometries();
}
int QTreeView_wrapper::verticalOffset() const {
  // tag=1000
  if (m_verticalOffsetCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_verticalOffsetCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QTreeView::verticalOffset();
  }
}
// tag=1009
int QTreeView_wrapper::verticalOffset_nocallback() const {
  // tag=1003
  return ::QTreeView::verticalOffset();
}
void QTreeView_wrapper::verticalScrollbarAction(int action) {
  // tag=1000
  if (m_verticalScrollbarActionCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_verticalScrollbarActionCallback(const_cast<void *>(thisPtr), action);
  } else {
    // tag=1002
    ::QTreeView::verticalScrollbarAction(action);
  }
}
// tag=1009
void QTreeView_wrapper::verticalScrollbarAction_nocallback(int action) {
  // tag=1003
  ::QTreeView::verticalScrollbarAction(action);
}
void QTreeView_wrapper::verticalScrollbarValueChanged(int value) {
  // tag=1000
  if (m_verticalScrollbarValueChangedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_verticalScrollbarValueChangedCallback(const_cast<void *>(thisPtr), value);
  } else {
    // tag=1002
    ::QTreeView::verticalScrollbarValueChanged(value);
  }
}
// tag=1009
void QTreeView_wrapper::verticalScrollbarValueChanged_nocallback(int value) {
  // tag=1003
  ::QTreeView::verticalScrollbarValueChanged(value);
}
bool QTreeView_wrapper::viewportEvent(QEvent *event) {
  // tag=1000
  if (m_viewportEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_viewportEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    return ::QTreeView::viewportEvent(event);
  }
}
// tag=1009
bool QTreeView_wrapper::viewportEvent_nocallback(QEvent *event) {
  // tag=1003
  return ::QTreeView::viewportEvent(event);
}
QSize QTreeView_wrapper::viewportSizeHint() const {
  // tag=1000
  if (m_viewportSizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_viewportSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QTreeView::viewportSizeHint();
  }
}
// tag=1009
QSize QTreeView_wrapper::viewportSizeHint_nocallback() const {
  // tag=1003
  return ::QTreeView::viewportSizeHint();
}
QRect QTreeView_wrapper::visualRect(const QModelIndex &index) const {
  // tag=1000
  if (m_visualRectCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_visualRectCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1002
    return ::QTreeView::visualRect(index);
  }
}
// tag=1009
QRect QTreeView_wrapper::visualRect_nocallback(const QModelIndex &index) const {
  // tag=1003
  return ::QTreeView::visualRect(index);
}
QRegion QTreeView_wrapper::visualRegionForSelection(
    const QItemSelection &selection) const {
  // tag=1000
  if (m_visualRegionForSelectionCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_visualRegionForSelectionCallback(const_cast<void *>(thisPtr),
                                               selection);
  } else {
    // tag=1002
    return ::QTreeView::visualRegionForSelection(selection);
  }
}
// tag=1009
QRegion QTreeView_wrapper::visualRegionForSelection_nocallback(
    const QItemSelection &selection) const {
  // tag=1003
  return ::QTreeView::visualRegionForSelection(selection);
}
bool QTreeView_wrapper::wordWrap() const {
  // tag=1000

  // tag=1004
  return ::QTreeView::wordWrap();
}

// tag=1005
QTreeView_wrapper::~QTreeView_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QTreeView *fromPtr(void *ptr) {
  return reinterpret_cast<QTreeView *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QTreeView_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QTreeView_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper *>(
      cppObj);
}
void *c_QTreeView__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QTreeView_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1079
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

// tag=1050
// allColumnsShowFocus() const
bool c_QTreeView__allColumnsShowFocus(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->allColumnsShowFocus();
}

// tag=1050
// autoExpandDelay() const
int c_QTreeView__autoExpandDelay(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->autoExpandDelay();
}

// tag=1050
// changeEvent(QEvent * event)
void c_QTreeView__changeEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->changeEvent_nocallback(event);
}

// tag=1079
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

// tag=1050
// collapse(const QModelIndex & index)
void c_QTreeView__collapse_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  // tag=1010
  fromPtr(thisObj)->collapse(index);
}

// tag=1050
// collapseAll()
void c_QTreeView__collapseAll(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->collapseAll();
}

// tag=1050
// collapsed(const QModelIndex & index)
void c_QTreeView__collapsed_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  // tag=1010
  fromPtr(thisObj)->collapsed(index);
}

// tag=1079
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

// tag=1050
// columnAt(int x) const
int c_QTreeView__columnAt_int(void *thisObj, int x) {
  return
      // tag=1010
      fromPtr(thisObj)->columnAt(x);
}

// tag=1050
// columnCountChanged(int oldCount, int newCount)
void c_QTreeView__columnCountChanged_int_int(void *thisObj, int oldCount,
                                             int newCount) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->columnCountChanged(oldCount, newCount);
}

// tag=1050
// columnMoved()
void c_QTreeView__columnMoved(void *thisObj) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->columnMoved();
}

// tag=1050
// columnResized(int column, int oldSize, int newSize)
void c_QTreeView__columnResized_int_int_int(void *thisObj, int column,
                                            int oldSize, int newSize) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->columnResized(column, oldSize, newSize);
}

// tag=1050
// columnViewportPosition(int column) const
int c_QTreeView__columnViewportPosition_int(void *thisObj, int column) {
  return
      // tag=1010
      fromPtr(thisObj)->columnViewportPosition(column);
}

// tag=1050
// columnWidth(int column) const
int c_QTreeView__columnWidth_int(void *thisObj, int column) {
  return
      // tag=1010
      fromPtr(thisObj)->columnWidth(column);
}

// tag=1050
// commitData(QWidget * editor)
void c_QTreeView__commitData_QWidget(void *thisObj, void *editor_) {
  auto editor = reinterpret_cast<QWidget *>(editor_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->commitData_nocallback(editor);
}

// tag=1050
// currentChanged(const QModelIndex & current, const QModelIndex & previous)
void c_QTreeView__currentChanged_QModelIndex_QModelIndex(void *thisObj,
                                                         void *current_,
                                                         void *previous_) {
  auto &current = *reinterpret_cast<QModelIndex *>(current_);
  auto &previous = *reinterpret_cast<QModelIndex *>(previous_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->currentChanged_nocallback(current, previous);
}

// tag=1050
// customEvent(QEvent * event)
void c_QTreeView__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// dataChanged(const QModelIndex & topLeft, const QModelIndex & bottomRight,
// const QList<int > & roles)
void c_QTreeView__dataChanged_QModelIndex_QModelIndex_QList_int(
    void *thisObj, void *topLeft_, void *bottomRight_, void *roles_) {
  auto &topLeft = *reinterpret_cast<QModelIndex *>(topLeft_);
  auto &bottomRight = *reinterpret_cast<QModelIndex *>(bottomRight_);
  auto &roles = *reinterpret_cast<QList<int> *>(roles_);
  // tag=1016
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

// tag=1050
// devType() const
int c_QTreeView__devType(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QTreeView_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->devType_nocallback();
        } else {
          return targetPtr->devType();
        }
      }();
}

// tag=1050
// doItemsLayout()
void c_QTreeView__doItemsLayout(void *thisObj) {
  // tag=1016
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

// tag=1079
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

// tag=1050
// drawBranches(QPainter * painter, const QRect & rect, const QModelIndex &
// index) const
void c_QTreeView__drawBranches_QPainter_QRect_QModelIndex(void *thisObj,
                                                          void *painter_,
                                                          void *rect_,
                                                          void *index_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->drawBranches_nocallback(painter, rect, index);
}

// tag=1050
// drawTree(QPainter * painter, const QRegion & region) const
void c_QTreeView__drawTree_QPainter_QRegion(void *thisObj, void *painter_,
                                            void *region_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  auto &region = *reinterpret_cast<QRegion *>(region_);
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->drawTree(painter, region);
}

// tag=1050
// editorDestroyed(QObject * editor)
void c_QTreeView__editorDestroyed_QObject(void *thisObj, void *editor_) {
  auto editor = reinterpret_cast<QObject *>(editor_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->editorDestroyed_nocallback(editor);
}

// tag=1079
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

// tag=1050
// event(QEvent * event)
bool c_QTreeView__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->event_nocallback(event);
}

// tag=1050
// eventFilter(QObject * object, QEvent * event)
bool c_QTreeView__eventFilter_QObject_QEvent(void *thisObj, void *object_,
                                             void *event_) {
  auto object = reinterpret_cast<QObject *>(object_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->eventFilter_nocallback(object, event);
}

// tag=1050
// expand(const QModelIndex & index)
void c_QTreeView__expand_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  // tag=1010
  fromPtr(thisObj)->expand(index);
}

// tag=1050
// expandAll()
void c_QTreeView__expandAll(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->expandAll();
}

// tag=1050
// expandRecursively(const QModelIndex & index, int depth)
void c_QTreeView__expandRecursively_QModelIndex_int(void *thisObj, void *index_,
                                                    int depth) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  // tag=1010
  fromPtr(thisObj)->expandRecursively(index, depth);
}

// tag=1050
// expandToDepth(int depth)
void c_QTreeView__expandToDepth_int(void *thisObj, int depth) {
  // tag=1010
  fromPtr(thisObj)->expandToDepth(depth);
}

// tag=1050
// expanded(const QModelIndex & index)
void c_QTreeView__expanded_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  // tag=1010
  fromPtr(thisObj)->expanded(index);
}

// tag=1079
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

// tag=1050
// expandsOnDoubleClick() const
bool c_QTreeView__expandsOnDoubleClick(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->expandsOnDoubleClick();
}

// tag=1050
// focusNextPrevChild(bool next)
bool c_QTreeView__focusNextPrevChild_bool(void *thisObj, bool next) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
}

// tag=1050
// hasHeightForWidth() const
bool c_QTreeView__hasHeightForWidth(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QTreeView_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->hasHeightForWidth_nocallback();
        } else {
          return targetPtr->hasHeightForWidth();
        }
      }();
}

// tag=1050
// heightForWidth(int arg__1) const
int c_QTreeView__heightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QTreeView_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->heightForWidth_nocallback(arg__1);
        } else {
          return targetPtr->heightForWidth(arg__1);
        }
      }();
}

// tag=1050
// hideColumn(int column)
void c_QTreeView__hideColumn_int(void *thisObj, int column) {
  // tag=1010
  fromPtr(thisObj)->hideColumn(column);
}

// tag=1050
// horizontalOffset() const
int c_QTreeView__horizontalOffset(void *thisObj) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->horizontalOffset_nocallback();
}

// tag=1050
// horizontalScrollbarAction(int action)
void c_QTreeView__horizontalScrollbarAction_int(void *thisObj, int action) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->horizontalScrollbarAction_nocallback(action);
}

// tag=1050
// horizontalScrollbarValueChanged(int value)
void c_QTreeView__horizontalScrollbarValueChanged_int(void *thisObj,
                                                      int value) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->horizontalScrollbarValueChanged_nocallback(value);
}

// tag=1079
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

// tag=1050
// indentation() const
int c_QTreeView__indentation(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->indentation();
}

// tag=1050
// indexAbove(const QModelIndex & index) const
void *c_QTreeView__indexAbove_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{
          fromPtr(thisObj)->indexAbove(index)};
}

// tag=1050
// indexAt(const QPoint & p) const
void *c_QTreeView__indexAt_QPoint(void *thisObj, void *p_) {
  auto &p = *reinterpret_cast<QPoint *>(p_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QTreeView_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->indexAt_nocallback(p);
        } else {
          return targetPtr->indexAt(p);
        }
      }()};
}

// tag=1050
// indexBelow(const QModelIndex & index) const
void *c_QTreeView__indexBelow_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{
          fromPtr(thisObj)->indexBelow(index)};
}

// tag=1050
// indexRowSizeHint(const QModelIndex & index) const
int c_QTreeView__indexRowSizeHint_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1011

      // tag=1073
      fromWrapperPtr(thisObj)->indexRowSizeHint(index);
}

// tag=1050
// initPainter(QPainter * painter) const
void c_QTreeView__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}

// tag=1050
// isAnimated() const
bool c_QTreeView__isAnimated(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isAnimated();
}

// tag=1050
// isColumnHidden(int column) const
bool c_QTreeView__isColumnHidden_int(void *thisObj, int column) {
  return
      // tag=1010
      fromPtr(thisObj)->isColumnHidden(column);
}

// tag=1050
// isExpanded(const QModelIndex & index) const
bool c_QTreeView__isExpanded_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1010
      fromPtr(thisObj)->isExpanded(index);
}

// tag=1050
// isFirstColumnSpanned(int row, const QModelIndex & parent) const
bool c_QTreeView__isFirstColumnSpanned_int_QModelIndex(void *thisObj, int row,
                                                       void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1010
      fromPtr(thisObj)->isFirstColumnSpanned(row, parent);
}

// tag=1050
// isHeaderHidden() const
bool c_QTreeView__isHeaderHidden(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isHeaderHidden();
}

// tag=1050
// isIndexHidden(const QModelIndex & index) const
bool c_QTreeView__isIndexHidden_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->isIndexHidden_nocallback(index);
}

// tag=1050
// isRowHidden(int row, const QModelIndex & parent) const
bool c_QTreeView__isRowHidden_int_QModelIndex(void *thisObj, int row,
                                              void *parent_) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  return
      // tag=1010
      fromPtr(thisObj)->isRowHidden(row, parent);
}

// tag=1050
// isSortingEnabled() const
bool c_QTreeView__isSortingEnabled(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isSortingEnabled();
}

// tag=1050
// itemsExpandable() const
bool c_QTreeView__itemsExpandable(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->itemsExpandable();
}

// tag=1050
// keyboardSearch(const QString & search)
void c_QTreeView__keyboardSearch_QString(void *thisObj, const char *search_) {
  const auto search = QString::fromUtf8(search_);
  // tag=1016
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
}

// tag=1050
// leaveEvent(QEvent * event)
void c_QTreeView__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}

// tag=1050
// minimumSizeHint() const
void *c_QTreeView__minimumSizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QTreeView_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->minimumSizeHint_nocallback();
        } else {
          return targetPtr->minimumSizeHint();
        }
      }()};
}

// tag=1050
// mouseDoubleClickEvent(QMouseEvent * event)
void c_QTreeView__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                    void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}

// tag=1050
// mouseMoveEvent(QMouseEvent * event)
void c_QTreeView__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(event);
}

// tag=1050
// mousePressEvent(QMouseEvent * event)
void c_QTreeView__mousePressEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(event);
}

// tag=1050
// mouseReleaseEvent(QMouseEvent * event)
void c_QTreeView__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(event);
}

// tag=1050
// moveCursor(QAbstractItemView::CursorAction cursorAction,
// QFlags<Qt::KeyboardModifier> modifiers)
void *c_QTreeView__moveCursor_CursorAction_KeyboardModifiers(void *thisObj,
                                                             int cursorAction,
                                                             int modifiers_) {
  auto modifiers = static_cast<QFlags<Qt::KeyboardModifier>>(modifiers_);
  return
      // tag=1011

      // tag=1074

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{
          fromWrapperPtr(thisObj)->moveCursor_nocallback(
              static_cast<
                  QtDartBindings_wrappersNS::QTreeView_wrapper::CursorAction>(
                  cursorAction),
              modifiers)};
}

// tag=1050
// paintEvent(QPaintEvent * event)
void c_QTreeView__paintEvent_QPaintEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QPaintEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->paintEvent_nocallback(event);
}

// tag=1079
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

// tag=1050
// reexpand()
void c_QTreeView__reexpand(void *thisObj) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->reexpand();
}

// tag=1050
// reset()
void c_QTreeView__reset(void *thisObj) {
  // tag=1016
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

// tag=1050
// resetIndentation()
void c_QTreeView__resetIndentation(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->resetIndentation();
}

// tag=1050
// resizeColumnToContents(int column)
void c_QTreeView__resizeColumnToContents_int(void *thisObj, int column) {
  // tag=1010
  fromPtr(thisObj)->resizeColumnToContents(column);
}

// tag=1050
// rootIsDecorated() const
bool c_QTreeView__rootIsDecorated(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->rootIsDecorated();
}

// tag=1050
// rowHeight(const QModelIndex & index) const
int c_QTreeView__rowHeight_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1011

      // tag=1073
      fromWrapperPtr(thisObj)->rowHeight(index);
}

// tag=1050
// rowsAboutToBeRemoved(const QModelIndex & parent, int start, int end)
void c_QTreeView__rowsAboutToBeRemoved_QModelIndex_int_int(void *thisObj,
                                                           void *parent_,
                                                           int start, int end) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->rowsAboutToBeRemoved_nocallback(parent, start, end);
}

// tag=1050
// rowsInserted(const QModelIndex & parent, int start, int end)
void c_QTreeView__rowsInserted_QModelIndex_int_int(void *thisObj, void *parent_,
                                                   int start, int end) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->rowsInserted_nocallback(parent, start, end);
}

// tag=1050
// rowsRemoved(const QModelIndex & parent, int first, int last)
void c_QTreeView__rowsRemoved_QModelIndex_int_int(void *thisObj, void *parent_,
                                                  int first, int last) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->rowsRemoved(parent, first, last);
}

// tag=1050
// scrollContentsBy(int dx, int dy)
void c_QTreeView__scrollContentsBy_int_int(void *thisObj, int dx, int dy) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->scrollContentsBy_nocallback(dx, dy);
}

// tag=1050
// scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint hint)
void c_QTreeView__scrollTo_QModelIndex_ScrollHint(void *thisObj, void *index_,
                                                  int hint) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  // tag=1016
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

// tag=1050
// selectAll()
void c_QTreeView__selectAll(void *thisObj) {
  // tag=1016
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

// tag=1050
// selectedIndexes() const
void *c_QTreeView__selectedIndexes(void *thisObj) {
  return
      // tag=1011

      // tag=1074

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QModelIndex>>{
          fromWrapperPtr(thisObj)->selectedIndexes_nocallback()};
}

// tag=1050
// selectionChanged(const QItemSelection & selected, const QItemSelection &
// deselected)
void c_QTreeView__selectionChanged_QItemSelection_QItemSelection(
    void *thisObj, void *selected_, void *deselected_) {
  auto &selected = *reinterpret_cast<QItemSelection *>(selected_);
  auto &deselected = *reinterpret_cast<QItemSelection *>(deselected_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->selectionChanged_nocallback(selected, deselected);
}

// tag=1050
// selectionCommand(const QModelIndex & index, const QEvent * event) const
int c_QTreeView__selectionCommand_QModelIndex_QEvent(void *thisObj,
                                                     void *index_,
                                                     void *event_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->selectionCommand_nocallback(index, event);
}

// tag=1050
// setAllColumnsShowFocus(bool enable)
void c_QTreeView__setAllColumnsShowFocus_bool(void *thisObj, bool enable) {
  // tag=1010
  fromPtr(thisObj)->setAllColumnsShowFocus(enable);
}

// tag=1050
// setAnimated(bool enable)
void c_QTreeView__setAnimated_bool(void *thisObj, bool enable) {
  // tag=1010
  fromPtr(thisObj)->setAnimated(enable);
}

// tag=1050
// setAutoExpandDelay(int delay)
void c_QTreeView__setAutoExpandDelay_int(void *thisObj, int delay) {
  // tag=1010
  fromPtr(thisObj)->setAutoExpandDelay(delay);
}

// tag=1050
// setColumnHidden(int column, bool hide)
void c_QTreeView__setColumnHidden_int_bool(void *thisObj, int column,
                                           bool hide) {
  // tag=1010
  fromPtr(thisObj)->setColumnHidden(column, hide);
}

// tag=1050
// setColumnWidth(int column, int width)
void c_QTreeView__setColumnWidth_int_int(void *thisObj, int column, int width) {
  // tag=1010
  fromPtr(thisObj)->setColumnWidth(column, width);
}

// tag=1050
// setExpanded(const QModelIndex & index, bool expand)
void c_QTreeView__setExpanded_QModelIndex_bool(void *thisObj, void *index_,
                                               bool expand) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  // tag=1010
  fromPtr(thisObj)->setExpanded(index, expand);
}

// tag=1050
// setExpandsOnDoubleClick(bool enable)
void c_QTreeView__setExpandsOnDoubleClick_bool(void *thisObj, bool enable) {
  // tag=1010
  fromPtr(thisObj)->setExpandsOnDoubleClick(enable);
}

// tag=1050
// setFirstColumnSpanned(int row, const QModelIndex & parent, bool span)
void c_QTreeView__setFirstColumnSpanned_int_QModelIndex_bool(void *thisObj,
                                                             int row,
                                                             void *parent_,
                                                             bool span) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  // tag=1010
  fromPtr(thisObj)->setFirstColumnSpanned(row, parent, span);
}

// tag=1050
// setHeaderHidden(bool hide)
void c_QTreeView__setHeaderHidden_bool(void *thisObj, bool hide) {
  // tag=1010
  fromPtr(thisObj)->setHeaderHidden(hide);
}

// tag=1050
// setIndentation(int i)
void c_QTreeView__setIndentation_int(void *thisObj, int i) {
  // tag=1010
  fromPtr(thisObj)->setIndentation(i);
}

// tag=1050
// setItemsExpandable(bool enable)
void c_QTreeView__setItemsExpandable_bool(void *thisObj, bool enable) {
  // tag=1010
  fromPtr(thisObj)->setItemsExpandable(enable);
}

// tag=1050
// setModel(QAbstractItemModel * model)
void c_QTreeView__setModel_QAbstractItemModel(void *thisObj, void *model_) {
  auto model = reinterpret_cast<QAbstractItemModel *>(model_);
  // tag=1016
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

// tag=1050
// setRootIndex(const QModelIndex & index)
void c_QTreeView__setRootIndex_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  // tag=1016
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

// tag=1050
// setRootIsDecorated(bool show)
void c_QTreeView__setRootIsDecorated_bool(void *thisObj, bool show) {
  // tag=1010
  fromPtr(thisObj)->setRootIsDecorated(show);
}

// tag=1050
// setRowHidden(int row, const QModelIndex & parent, bool hide)
void c_QTreeView__setRowHidden_int_QModelIndex_bool(void *thisObj, int row,
                                                    void *parent_, bool hide) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  // tag=1010
  fromPtr(thisObj)->setRowHidden(row, parent, hide);
}

// tag=1050
// setSelection(const QRect & rect, QFlags<QItemSelectionModel::SelectionFlag>
// command)
void c_QTreeView__setSelection_QRect_SelectionFlags(void *thisObj, void *rect_,
                                                    int command_) {
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  auto command =
      static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->setSelection_nocallback(rect, command);
}

// tag=1050
// setSelectionModel(QItemSelectionModel * selectionModel)
void c_QTreeView__setSelectionModel_QItemSelectionModel(void *thisObj,
                                                        void *selectionModel_) {
  auto selectionModel =
      reinterpret_cast<QItemSelectionModel *>(selectionModel_);
  // tag=1016
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

// tag=1050
// setSortingEnabled(bool enable)
void c_QTreeView__setSortingEnabled_bool(void *thisObj, bool enable) {
  // tag=1010
  fromPtr(thisObj)->setSortingEnabled(enable);
}

// tag=1050
// setTreePosition(int logicalIndex)
void c_QTreeView__setTreePosition_int(void *thisObj, int logicalIndex) {
  // tag=1010
  fromPtr(thisObj)->setTreePosition(logicalIndex);
}

// tag=1050
// setUniformRowHeights(bool uniform)
void c_QTreeView__setUniformRowHeights_bool(void *thisObj, bool uniform) {
  // tag=1010
  fromPtr(thisObj)->setUniformRowHeights(uniform);
}

// tag=1050
// setVisible(bool visible)
void c_QTreeView__setVisible_bool(void *thisObj, bool visible) {
  // tag=1016
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

// tag=1050
// setWordWrap(bool on)
void c_QTreeView__setWordWrap_bool(void *thisObj, bool on) {
  // tag=1010
  fromPtr(thisObj)->setWordWrap(on);
}

// tag=1050
// setupViewport(QWidget * viewport)
void c_QTreeView__setupViewport_QWidget(void *thisObj, void *viewport_) {
  auto viewport = reinterpret_cast<QWidget *>(viewport_);
  // tag=1016
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

// tag=1050
// sharedPainter() const
void *c_QTreeView__sharedPainter(void *thisObj) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->sharedPainter_nocallback();
}

// tag=1050
// showColumn(int column)
void c_QTreeView__showColumn_int(void *thisObj, int column) {
  // tag=1010
  fromPtr(thisObj)->showColumn(column);
}

// tag=1050
// sizeHint() const
void *c_QTreeView__sizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QTreeView_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->sizeHint_nocallback();
        } else {
          return targetPtr->sizeHint();
        }
      }()};
}

// tag=1050
// sizeHintForColumn(int column) const
int c_QTreeView__sizeHintForColumn_int(void *thisObj, int column) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->sizeHintForColumn_nocallback(column);
}

// tag=1050
// sizeHintForRow(int row) const
int c_QTreeView__sizeHintForRow_int(void *thisObj, int row) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QTreeView_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->sizeHintForRow_nocallback(row);
        } else {
          return targetPtr->sizeHintForRow(row);
        }
      }();
}

// tag=1050
// sortByColumn(int column, Qt::SortOrder order)
void c_QTreeView__sortByColumn_int_SortOrder(void *thisObj, int column,
                                             int order) {
  // tag=1010
  fromPtr(thisObj)->sortByColumn(column, static_cast<Qt::SortOrder>(order));
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QTreeView__tr_char_char_int(const char *s, const char *c,
                                           int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QTreeView_wrapper::tr(s, c, n)};
}

// tag=1050
// treePosition() const
int c_QTreeView__treePosition(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->treePosition();
}

// tag=1050
// uniformRowHeights() const
bool c_QTreeView__uniformRowHeights(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->uniformRowHeights();
}

// tag=1050
// updateEditorData()
void c_QTreeView__updateEditorData(void *thisObj) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->updateEditorData_nocallback();
}

// tag=1050
// updateEditorGeometries()
void c_QTreeView__updateEditorGeometries(void *thisObj) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->updateEditorGeometries_nocallback();
}

// tag=1050
// updateGeometries()
void c_QTreeView__updateGeometries(void *thisObj) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->updateGeometries_nocallback();
}

// tag=1050
// verticalOffset() const
int c_QTreeView__verticalOffset(void *thisObj) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->verticalOffset_nocallback();
}

// tag=1050
// verticalScrollbarAction(int action)
void c_QTreeView__verticalScrollbarAction_int(void *thisObj, int action) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->verticalScrollbarAction_nocallback(action);
}

// tag=1050
// verticalScrollbarValueChanged(int value)
void c_QTreeView__verticalScrollbarValueChanged_int(void *thisObj, int value) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->verticalScrollbarValueChanged_nocallback(value);
}

// tag=1079
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

// tag=1050
// viewportEvent(QEvent * event)
bool c_QTreeView__viewportEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->viewportEvent_nocallback(event);
}

// tag=1050
// viewportSizeHint() const
void *c_QTreeView__viewportSizeHint(void *thisObj) {
  return
      // tag=1011

      // tag=1074

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{
          fromWrapperPtr(thisObj)->viewportSizeHint_nocallback()};
}

// tag=1050
// visualRect(const QModelIndex & index) const
void *c_QTreeView__visualRect_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QTreeView_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->visualRect_nocallback(index);
        } else {
          return targetPtr->visualRect(index);
        }
      }()};
}

// tag=1050
// visualRegionForSelection(const QItemSelection & selection) const
void *c_QTreeView__visualRegionForSelection_QItemSelection(void *thisObj,
                                                           void *selection_) {
  auto &selection = *reinterpret_cast<QItemSelection *>(selection_);
  return
      // tag=1011

      // tag=1074

      // tag=1072
      new Dartagnan::ValueWrapper<QRegion>{
          fromWrapperPtr(thisObj)->visualRegionForSelection_nocallback(
              selection)};
}

// tag=1050
// wordWrap() const
bool c_QTreeView__wordWrap(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->wordWrap();
}
void c_QTreeView__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QTreeView__registerVirtualMethodCallback(void *ptr, void *callback,
                                                int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1124:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 5378:
    wrapper->m_commitDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_commitData>(
        callback);
    break;
  case 5380:
    wrapper->m_currentChangedCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_currentChanged>(
        callback);
    break;
  case 944:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_customEvent>(
        callback);
    break;
  case 5382:
    wrapper->m_dataChangedCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_dataChanged>(
        callback);
    break;
  case 1141:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_devType>(
        callback);
    break;
  case 5385:
    wrapper->m_doItemsLayoutCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_doItemsLayout>(
        callback);
    break;
  case 5486:
    wrapper->m_drawBranchesCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_drawBranches>(
        callback);
    break;
  case 5390:
    wrapper->m_editorDestroyedCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_editorDestroyed>(
        callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_event>(callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1150:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1164:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 1168:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 5394:
    wrapper->m_horizontalOffsetCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_horizontalOffset>(callback);
    break;
  case 5395:
    wrapper->m_horizontalScrollbarActionCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_horizontalScrollbarAction>(callback);
    break;
  case 5396:
    wrapper->m_horizontalScrollbarValueChangedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_horizontalScrollbarValueChanged>(
            callback);
    break;
  case 5399:
    wrapper->m_indexAtCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_indexAt>(
        callback);
    break;
  case 1171:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_initPainter>(
        callback);
    break;
  case 5401:
    wrapper->m_isIndexHiddenCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_isIndexHidden>(
        callback);
    break;
  case 5403:
    wrapper->m_keyboardSearchCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_keyboardSearch>(
        callback);
    break;
  case 1196:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1216:
    wrapper->m_minimumSizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_minimumSizeHint>(
        callback);
    break;
  case 1218:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1220:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_mouseMoveEvent>(
        callback);
    break;
  case 1221:
    wrapper->m_mousePressEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_mousePressEvent>(
        callback);
    break;
  case 1222:
    wrapper->m_mouseReleaseEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_mouseReleaseEvent>(callback);
    break;
  case 5406:
    wrapper->m_moveCursorCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_moveCursor>(
        callback);
    break;
  case 1229:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 5409:
    wrapper->m_resetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_reset>(callback);
    break;
  case 5413:
    wrapper->m_rowsAboutToBeRemovedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_rowsAboutToBeRemoved>(callback);
    break;
  case 5414:
    wrapper->m_rowsInsertedCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_rowsInserted>(
        callback);
    break;
  case 5199:
    wrapper->m_scrollContentsByCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_scrollContentsBy>(callback);
    break;
  case 5417:
    wrapper->m_scrollToCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_scrollTo>(
        callback);
    break;
  case 5420:
    wrapper->m_selectAllCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_selectAll>(
        callback);
    break;
  case 5421:
    wrapper->m_selectedIndexesCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_selectedIndexes>(
        callback);
    break;
  case 5422:
    wrapper->m_selectionChangedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_selectionChanged>(callback);
    break;
  case 5423:
    wrapper->m_selectionCommandCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_selectionCommand>(callback);
    break;
  case 5436:
    wrapper->m_setModelCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_setModel>(
        callback);
    break;
  case 5437:
    wrapper->m_setRootIndexCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_setRootIndex>(
        callback);
    break;
  case 5438:
    wrapper->m_setSelectionCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_setSelection>(
        callback);
    break;
  case 5439:
    wrapper->m_setSelectionModelCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_setSelectionModel>(callback);
    break;
  case 1309:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_setVisible>(
        callback);
    break;
  case 5207:
    wrapper->m_setupViewportCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_setupViewport>(
        callback);
    break;
  case 1318:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1326:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_sizeHint>(
        callback);
    break;
  case 5444:
    wrapper->m_sizeHintForColumnCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_sizeHintForColumn>(callback);
    break;
  case 5446:
    wrapper->m_sizeHintForRowCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_sizeHintForRow>(
        callback);
    break;
  case 5452:
    wrapper->m_updateEditorDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_updateEditorData>(callback);
    break;
  case 5453:
    wrapper->m_updateEditorGeometriesCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_updateEditorGeometries>(callback);
    break;
  case 5454:
    wrapper->m_updateGeometriesCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_updateGeometries>(callback);
    break;
  case 5455:
    wrapper->m_verticalOffsetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_verticalOffset>(
        callback);
    break;
  case 5456:
    wrapper->m_verticalScrollbarActionCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_verticalScrollbarAction>(callback);
    break;
  case 5457:
    wrapper->m_verticalScrollbarValueChangedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_verticalScrollbarValueChanged>(callback);
    break;
  case 5210:
    wrapper->m_viewportEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_viewportEvent>(
        callback);
    break;
  case 5211:
    wrapper->m_viewportSizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_viewportSizeHint>(callback);
    break;
  case 5460:
    wrapper->m_visualRectCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTreeView_wrapper::Callback_visualRect>(
        callback);
    break;
  case 5461:
    wrapper->m_visualRegionForSelectionCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTreeView_wrapper::
                             Callback_visualRegionForSelection>(callback);
    break;
  }
}
}
