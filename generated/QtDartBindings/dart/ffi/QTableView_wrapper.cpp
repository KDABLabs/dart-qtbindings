#include "QTableView_wrapper.h"

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
QTableView_wrapper::QTableView_wrapper(QWidget *parent)
    : ::QTableView(parent) {}
void QTableView_wrapper::changeEvent(QEvent *arg__1) {
  // tag=1000
  if (m_changeEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QTableView::changeEvent(arg__1);
  }
}
// tag=1009
void QTableView_wrapper::changeEvent_nocallback(QEvent *arg__1) {
  // tag=1003
  ::QTableView::changeEvent(arg__1);
}
void QTableView_wrapper::clearSpans() {
  // tag=1000

  // tag=1004
  ::QTableView::clearSpans();
}
int QTableView_wrapper::columnAt(int x) const {
  // tag=1000

  // tag=1004
  return ::QTableView::columnAt(x);
}
void QTableView_wrapper::columnCountChanged(int oldCount, int newCount) {
  // tag=1000

  // tag=1004
  ::QTableView::columnCountChanged(oldCount, newCount);
}
void QTableView_wrapper::columnMoved(int column, int oldIndex, int newIndex) {
  // tag=1000

  // tag=1004
  ::QTableView::columnMoved(column, oldIndex, newIndex);
}
void QTableView_wrapper::columnResized(int column, int oldWidth, int newWidth) {
  // tag=1000

  // tag=1004
  ::QTableView::columnResized(column, oldWidth, newWidth);
}
int QTableView_wrapper::columnSpan(int row, int column) const {
  // tag=1000

  // tag=1004
  return ::QTableView::columnSpan(row, column);
}
int QTableView_wrapper::columnViewportPosition(int column) const {
  // tag=1000

  // tag=1004
  return ::QTableView::columnViewportPosition(column);
}
int QTableView_wrapper::columnWidth(int column) const {
  // tag=1000

  // tag=1004
  return ::QTableView::columnWidth(column);
}
void QTableView_wrapper::commitData(QWidget *editor) {
  // tag=1000
  if (m_commitDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_commitDataCallback(const_cast<void *>(thisPtr), editor);
  } else {
    // tag=1002
    ::QTableView::commitData(editor);
  }
}
// tag=1009
void QTableView_wrapper::commitData_nocallback(QWidget *editor) {
  // tag=1003
  ::QTableView::commitData(editor);
}
void QTableView_wrapper::currentChanged(const QModelIndex &current,
                                        const QModelIndex &previous) {
  // tag=1000
  if (m_currentChangedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_currentChangedCallback(const_cast<void *>(thisPtr), current, previous);
  } else {
    // tag=1002
    ::QTableView::currentChanged(current, previous);
  }
}
// tag=1009
void QTableView_wrapper::currentChanged_nocallback(
    const QModelIndex &current, const QModelIndex &previous) {
  // tag=1003
  ::QTableView::currentChanged(current, previous);
}
void QTableView_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QTableView::customEvent(event);
  }
}
// tag=1009
void QTableView_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QTableView::customEvent(event);
}
void QTableView_wrapper::dataChanged(const QModelIndex &topLeft,
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
    ::QTableView::dataChanged(topLeft, bottomRight, roles);
  }
}
// tag=1009
void QTableView_wrapper::dataChanged_nocallback(const QModelIndex &topLeft,
                                                const QModelIndex &bottomRight,
                                                const QList<int> &roles) {
  // tag=1003
  ::QTableView::dataChanged(topLeft, bottomRight, roles);
}
int QTableView_wrapper::devType() const {
  // tag=1000
  if (m_devTypeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QTableView::devType();
  }
}
// tag=1009
int QTableView_wrapper::devType_nocallback() const {
  // tag=1003
  return ::QTableView::devType();
}
void QTableView_wrapper::doItemsLayout() {
  // tag=1000
  if (m_doItemsLayoutCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_doItemsLayoutCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QTableView::doItemsLayout();
  }
}
// tag=1009
void QTableView_wrapper::doItemsLayout_nocallback() {
  // tag=1003
  ::QTableView::doItemsLayout();
}
void QTableView_wrapper::editorDestroyed(QObject *editor) {
  // tag=1000
  if (m_editorDestroyedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_editorDestroyedCallback(const_cast<void *>(thisPtr), editor);
  } else {
    // tag=1002
    ::QTableView::editorDestroyed(editor);
  }
}
// tag=1009
void QTableView_wrapper::editorDestroyed_nocallback(QObject *editor) {
  // tag=1003
  ::QTableView::editorDestroyed(editor);
}
bool QTableView_wrapper::event(QEvent *event) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    return ::QTableView::event(event);
  }
}
// tag=1009
bool QTableView_wrapper::event_nocallback(QEvent *event) {
  // tag=1003
  return ::QTableView::event(event);
}
bool QTableView_wrapper::eventFilter(QObject *object, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), object, event);
  } else {
    // tag=1002
    return ::QTableView::eventFilter(object, event);
  }
}
// tag=1009
bool QTableView_wrapper::eventFilter_nocallback(QObject *object,
                                                QEvent *event) {
  // tag=1003
  return ::QTableView::eventFilter(object, event);
}
bool QTableView_wrapper::focusNextPrevChild(bool next) {
  // tag=1000
  if (m_focusNextPrevChildCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    // tag=1002
    return ::QTableView::focusNextPrevChild(next);
  }
}
// tag=1009
bool QTableView_wrapper::focusNextPrevChild_nocallback(bool next) {
  // tag=1003
  return ::QTableView::focusNextPrevChild(next);
}
bool QTableView_wrapper::hasHeightForWidth() const {
  // tag=1000
  if (m_hasHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QTableView::hasHeightForWidth();
  }
}
// tag=1009
bool QTableView_wrapper::hasHeightForWidth_nocallback() const {
  // tag=1003
  return ::QTableView::hasHeightForWidth();
}
int QTableView_wrapper::heightForWidth(int arg__1) const {
  // tag=1000
  if (m_heightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QTableView::heightForWidth(arg__1);
  }
}
// tag=1009
int QTableView_wrapper::heightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QTableView::heightForWidth(arg__1);
}
void QTableView_wrapper::hideColumn(int column) {
  // tag=1000

  // tag=1004
  ::QTableView::hideColumn(column);
}
void QTableView_wrapper::hideRow(int row) {
  // tag=1000

  // tag=1004
  ::QTableView::hideRow(row);
}
int QTableView_wrapper::horizontalOffset() const {
  // tag=1000
  if (m_horizontalOffsetCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_horizontalOffsetCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QTableView::horizontalOffset();
  }
}
// tag=1009
int QTableView_wrapper::horizontalOffset_nocallback() const {
  // tag=1003
  return ::QTableView::horizontalOffset();
}
void QTableView_wrapper::horizontalScrollbarAction(int action) {
  // tag=1000
  if (m_horizontalScrollbarActionCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_horizontalScrollbarActionCallback(const_cast<void *>(thisPtr), action);
  } else {
    // tag=1002
    ::QTableView::horizontalScrollbarAction(action);
  }
}
// tag=1009
void QTableView_wrapper::horizontalScrollbarAction_nocallback(int action) {
  // tag=1003
  ::QTableView::horizontalScrollbarAction(action);
}
void QTableView_wrapper::horizontalScrollbarValueChanged(int value) {
  // tag=1000
  if (m_horizontalScrollbarValueChangedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_horizontalScrollbarValueChangedCallback(const_cast<void *>(thisPtr),
                                              value);
  } else {
    // tag=1002
    ::QTableView::horizontalScrollbarValueChanged(value);
  }
}
// tag=1009
void QTableView_wrapper::horizontalScrollbarValueChanged_nocallback(int value) {
  // tag=1003
  ::QTableView::horizontalScrollbarValueChanged(value);
}
QModelIndex QTableView_wrapper::indexAt(const QPoint &p) const {
  // tag=1000
  if (m_indexAtCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_indexAtCallback(const_cast<void *>(thisPtr), p);
  } else {
    // tag=1002
    return ::QTableView::indexAt(p);
  }
}
// tag=1009
QModelIndex QTableView_wrapper::indexAt_nocallback(const QPoint &p) const {
  // tag=1003
  return ::QTableView::indexAt(p);
}
void QTableView_wrapper::initPainter(QPainter *painter) const {
  // tag=1000
  if (m_initPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    // tag=1002
    ::QTableView::initPainter(painter);
  }
}
// tag=1009
void QTableView_wrapper::initPainter_nocallback(QPainter *painter) const {
  // tag=1003
  ::QTableView::initPainter(painter);
}
bool QTableView_wrapper::isColumnHidden(int column) const {
  // tag=1000

  // tag=1004
  return ::QTableView::isColumnHidden(column);
}
bool QTableView_wrapper::isCornerButtonEnabled() const {
  // tag=1000

  // tag=1004
  return ::QTableView::isCornerButtonEnabled();
}
bool QTableView_wrapper::isIndexHidden(const QModelIndex &index) const {
  // tag=1000
  if (m_isIndexHiddenCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_isIndexHiddenCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1002
    return ::QTableView::isIndexHidden(index);
  }
}
// tag=1009
bool QTableView_wrapper::isIndexHidden_nocallback(
    const QModelIndex &index) const {
  // tag=1003
  return ::QTableView::isIndexHidden(index);
}
bool QTableView_wrapper::isRowHidden(int row) const {
  // tag=1000

  // tag=1004
  return ::QTableView::isRowHidden(row);
}
bool QTableView_wrapper::isSortingEnabled() const {
  // tag=1000

  // tag=1004
  return ::QTableView::isSortingEnabled();
}
void QTableView_wrapper::keyboardSearch(const QString &search) {
  // tag=1000
  if (m_keyboardSearchCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_keyboardSearchCallback(const_cast<void *>(thisPtr), search);
  } else {
    // tag=1002
    ::QTableView::keyboardSearch(search);
  }
}
// tag=1009
void QTableView_wrapper::keyboardSearch_nocallback(const QString &search) {
  // tag=1003
  ::QTableView::keyboardSearch(search);
}
void QTableView_wrapper::leaveEvent(QEvent *event) {
  // tag=1000
  if (m_leaveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QTableView::leaveEvent(event);
  }
}
// tag=1009
void QTableView_wrapper::leaveEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QTableView::leaveEvent(event);
}
QSize QTableView_wrapper::minimumSizeHint() const {
  // tag=1000
  if (m_minimumSizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QTableView::minimumSizeHint();
  }
}
// tag=1009
QSize QTableView_wrapper::minimumSizeHint_nocallback() const {
  // tag=1003
  return ::QTableView::minimumSizeHint();
}
void QTableView_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseDoubleClickEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QTableView::mouseDoubleClickEvent(event);
  }
}
// tag=1009
void QTableView_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QTableView::mouseDoubleClickEvent(event);
}
void QTableView_wrapper::mouseMoveEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseMoveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QTableView::mouseMoveEvent(event);
  }
}
// tag=1009
void QTableView_wrapper::mouseMoveEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QTableView::mouseMoveEvent(event);
}
void QTableView_wrapper::mousePressEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mousePressEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QTableView::mousePressEvent(event);
  }
}
// tag=1009
void QTableView_wrapper::mousePressEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QTableView::mousePressEvent(event);
}
void QTableView_wrapper::mouseReleaseEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseReleaseEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QTableView::mouseReleaseEvent(event);
  }
}
// tag=1009
void QTableView_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QTableView::mouseReleaseEvent(event);
}
QModelIndex
QTableView_wrapper::moveCursor(QAbstractItemView::CursorAction cursorAction,
                               QFlags<Qt::KeyboardModifier> modifiers) {
  // tag=1000
  if (m_moveCursorCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_moveCursorCallback(const_cast<void *>(thisPtr), cursorAction,
                                 modifiers);
  } else {
    // tag=1002
    return ::QTableView::moveCursor(cursorAction, modifiers);
  }
}
// tag=1009
QModelIndex QTableView_wrapper::moveCursor_nocallback(
    QAbstractItemView::CursorAction cursorAction,
    QFlags<Qt::KeyboardModifier> modifiers) {
  // tag=1003
  return ::QTableView::moveCursor(cursorAction, modifiers);
}
void QTableView_wrapper::paintEvent(QPaintEvent *e) {
  // tag=1000
  if (m_paintEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    // tag=1002
    ::QTableView::paintEvent(e);
  }
}
// tag=1009
void QTableView_wrapper::paintEvent_nocallback(QPaintEvent *e) {
  // tag=1003
  ::QTableView::paintEvent(e);
}
void QTableView_wrapper::reset() {
  // tag=1000
  if (m_resetCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_resetCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QTableView::reset();
  }
}
// tag=1009
void QTableView_wrapper::reset_nocallback() {
  // tag=1003
  ::QTableView::reset();
}
void QTableView_wrapper::resizeColumnToContents(int column) {
  // tag=1000

  // tag=1004
  ::QTableView::resizeColumnToContents(column);
}
void QTableView_wrapper::resizeColumnsToContents() {
  // tag=1000

  // tag=1004
  ::QTableView::resizeColumnsToContents();
}
void QTableView_wrapper::resizeRowToContents(int row) {
  // tag=1000

  // tag=1004
  ::QTableView::resizeRowToContents(row);
}
void QTableView_wrapper::resizeRowsToContents() {
  // tag=1000

  // tag=1004
  ::QTableView::resizeRowsToContents();
}
int QTableView_wrapper::rowAt(int y) const {
  // tag=1000

  // tag=1004
  return ::QTableView::rowAt(y);
}
void QTableView_wrapper::rowCountChanged(int oldCount, int newCount) {
  // tag=1000

  // tag=1004
  ::QTableView::rowCountChanged(oldCount, newCount);
}
int QTableView_wrapper::rowHeight(int row) const {
  // tag=1000

  // tag=1004
  return ::QTableView::rowHeight(row);
}
void QTableView_wrapper::rowMoved(int row, int oldIndex, int newIndex) {
  // tag=1000

  // tag=1004
  ::QTableView::rowMoved(row, oldIndex, newIndex);
}
void QTableView_wrapper::rowResized(int row, int oldHeight, int newHeight) {
  // tag=1000

  // tag=1004
  ::QTableView::rowResized(row, oldHeight, newHeight);
}
int QTableView_wrapper::rowSpan(int row, int column) const {
  // tag=1000

  // tag=1004
  return ::QTableView::rowSpan(row, column);
}
int QTableView_wrapper::rowViewportPosition(int row) const {
  // tag=1000

  // tag=1004
  return ::QTableView::rowViewportPosition(row);
}
void QTableView_wrapper::rowsAboutToBeRemoved(const QModelIndex &parent,
                                              int start, int end) {
  // tag=1000
  if (m_rowsAboutToBeRemovedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_rowsAboutToBeRemovedCallback(const_cast<void *>(thisPtr), parent, start,
                                   end);
  } else {
    // tag=1002
    ::QTableView::rowsAboutToBeRemoved(parent, start, end);
  }
}
// tag=1009
void QTableView_wrapper::rowsAboutToBeRemoved_nocallback(
    const QModelIndex &parent, int start, int end) {
  // tag=1003
  ::QTableView::rowsAboutToBeRemoved(parent, start, end);
}
void QTableView_wrapper::rowsInserted(const QModelIndex &parent, int start,
                                      int end) {
  // tag=1000
  if (m_rowsInsertedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_rowsInsertedCallback(const_cast<void *>(thisPtr), parent, start, end);
  } else {
    // tag=1002
    ::QTableView::rowsInserted(parent, start, end);
  }
}
// tag=1009
void QTableView_wrapper::rowsInserted_nocallback(const QModelIndex &parent,
                                                 int start, int end) {
  // tag=1003
  ::QTableView::rowsInserted(parent, start, end);
}
void QTableView_wrapper::scrollContentsBy(int dx, int dy) {
  // tag=1000
  if (m_scrollContentsByCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_scrollContentsByCallback(const_cast<void *>(thisPtr), dx, dy);
  } else {
    // tag=1002
    ::QTableView::scrollContentsBy(dx, dy);
  }
}
// tag=1009
void QTableView_wrapper::scrollContentsBy_nocallback(int dx, int dy) {
  // tag=1003
  ::QTableView::scrollContentsBy(dx, dy);
}
void QTableView_wrapper::scrollTo(const QModelIndex &index,
                                  QAbstractItemView::ScrollHint hint) {
  // tag=1000
  if (m_scrollToCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_scrollToCallback(const_cast<void *>(thisPtr), index, hint);
  } else {
    // tag=1002
    ::QTableView::scrollTo(index, hint);
  }
}
// tag=1009
void QTableView_wrapper::scrollTo_nocallback(
    const QModelIndex &index, QAbstractItemView::ScrollHint hint) {
  // tag=1003
  ::QTableView::scrollTo(index, hint);
}
void QTableView_wrapper::selectAll() {
  // tag=1000
  if (m_selectAllCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_selectAllCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QTableView::selectAll();
  }
}
// tag=1009
void QTableView_wrapper::selectAll_nocallback() {
  // tag=1003
  ::QTableView::selectAll();
}
void QTableView_wrapper::selectColumn(int column) {
  // tag=1000

  // tag=1004
  ::QTableView::selectColumn(column);
}
void QTableView_wrapper::selectRow(int row) {
  // tag=1000

  // tag=1004
  ::QTableView::selectRow(row);
}
QList<QModelIndex> QTableView_wrapper::selectedIndexes() const {
  // tag=1000
  if (m_selectedIndexesCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_selectedIndexesCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QTableView::selectedIndexes();
  }
}
// tag=1009
QList<QModelIndex> QTableView_wrapper::selectedIndexes_nocallback() const {
  // tag=1003
  return ::QTableView::selectedIndexes();
}
void QTableView_wrapper::selectionChanged(const QItemSelection &selected,
                                          const QItemSelection &deselected) {
  // tag=1000
  if (m_selectionChangedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_selectionChangedCallback(const_cast<void *>(thisPtr), selected,
                               deselected);
  } else {
    // tag=1002
    ::QTableView::selectionChanged(selected, deselected);
  }
}
// tag=1009
void QTableView_wrapper::selectionChanged_nocallback(
    const QItemSelection &selected, const QItemSelection &deselected) {
  // tag=1003
  ::QTableView::selectionChanged(selected, deselected);
}
QFlags<QItemSelectionModel::SelectionFlag>
QTableView_wrapper::selectionCommand(const QModelIndex &index,
                                     const QEvent *event) const {
  // tag=1000
  if (m_selectionCommandCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_selectionCommandCallback(const_cast<void *>(thisPtr), index,
                                      event);
  } else {
    // tag=1002
    return ::QTableView::selectionCommand(index, event);
  }
}
// tag=1009
QFlags<QItemSelectionModel::SelectionFlag>
QTableView_wrapper::selectionCommand_nocallback(const QModelIndex &index,
                                                const QEvent *event) const {
  // tag=1003
  return ::QTableView::selectionCommand(index, event);
}
void QTableView_wrapper::setColumnHidden(int column, bool hide) {
  // tag=1000

  // tag=1004
  ::QTableView::setColumnHidden(column, hide);
}
void QTableView_wrapper::setColumnWidth(int column, int width) {
  // tag=1000

  // tag=1004
  ::QTableView::setColumnWidth(column, width);
}
void QTableView_wrapper::setCornerButtonEnabled(bool enable) {
  // tag=1000

  // tag=1004
  ::QTableView::setCornerButtonEnabled(enable);
}
void QTableView_wrapper::setModel(QAbstractItemModel *model) {
  // tag=1000
  if (m_setModelCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setModelCallback(const_cast<void *>(thisPtr), model);
  } else {
    // tag=1002
    ::QTableView::setModel(model);
  }
}
// tag=1009
void QTableView_wrapper::setModel_nocallback(QAbstractItemModel *model) {
  // tag=1003
  ::QTableView::setModel(model);
}
void QTableView_wrapper::setRootIndex(const QModelIndex &index) {
  // tag=1000
  if (m_setRootIndexCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setRootIndexCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1002
    ::QTableView::setRootIndex(index);
  }
}
// tag=1009
void QTableView_wrapper::setRootIndex_nocallback(const QModelIndex &index) {
  // tag=1003
  ::QTableView::setRootIndex(index);
}
void QTableView_wrapper::setRowHeight(int row, int height) {
  // tag=1000

  // tag=1004
  ::QTableView::setRowHeight(row, height);
}
void QTableView_wrapper::setRowHidden(int row, bool hide) {
  // tag=1000

  // tag=1004
  ::QTableView::setRowHidden(row, hide);
}
void QTableView_wrapper::setSelection(
    const QRect &rect, QFlags<QItemSelectionModel::SelectionFlag> command) {
  // tag=1000
  if (m_setSelectionCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setSelectionCallback(const_cast<void *>(thisPtr), rect, command);
  } else {
    // tag=1002
    ::QTableView::setSelection(rect, command);
  }
}
// tag=1009
void QTableView_wrapper::setSelection_nocallback(
    const QRect &rect, QFlags<QItemSelectionModel::SelectionFlag> command) {
  // tag=1003
  ::QTableView::setSelection(rect, command);
}
void QTableView_wrapper::setSelectionModel(
    QItemSelectionModel *selectionModel) {
  // tag=1000
  if (m_setSelectionModelCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setSelectionModelCallback(const_cast<void *>(thisPtr), selectionModel);
  } else {
    // tag=1002
    ::QTableView::setSelectionModel(selectionModel);
  }
}
// tag=1009
void QTableView_wrapper::setSelectionModel_nocallback(
    QItemSelectionModel *selectionModel) {
  // tag=1003
  ::QTableView::setSelectionModel(selectionModel);
}
void QTableView_wrapper::setShowGrid(bool show) {
  // tag=1000

  // tag=1004
  ::QTableView::setShowGrid(show);
}
void QTableView_wrapper::setSortingEnabled(bool enable) {
  // tag=1000

  // tag=1004
  ::QTableView::setSortingEnabled(enable);
}
void QTableView_wrapper::setSpan(int row, int column, int rowSpan,
                                 int columnSpan) {
  // tag=1000

  // tag=1004
  ::QTableView::setSpan(row, column, rowSpan, columnSpan);
}
void QTableView_wrapper::setVisible(bool visible) {
  // tag=1000
  if (m_setVisibleCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    // tag=1002
    ::QTableView::setVisible(visible);
  }
}
// tag=1009
void QTableView_wrapper::setVisible_nocallback(bool visible) {
  // tag=1003
  ::QTableView::setVisible(visible);
}
void QTableView_wrapper::setWordWrap(bool on) {
  // tag=1000

  // tag=1004
  ::QTableView::setWordWrap(on);
}
void QTableView_wrapper::setupViewport(QWidget *viewport) {
  // tag=1000
  if (m_setupViewportCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setupViewportCallback(const_cast<void *>(thisPtr), viewport);
  } else {
    // tag=1002
    ::QTableView::setupViewport(viewport);
  }
}
// tag=1009
void QTableView_wrapper::setupViewport_nocallback(QWidget *viewport) {
  // tag=1003
  ::QTableView::setupViewport(viewport);
}
QPainter *QTableView_wrapper::sharedPainter() const {
  // tag=1000
  if (m_sharedPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QTableView::sharedPainter();
  }
}
// tag=1009
QPainter *QTableView_wrapper::sharedPainter_nocallback() const {
  // tag=1003
  return ::QTableView::sharedPainter();
}
void QTableView_wrapper::showColumn(int column) {
  // tag=1000

  // tag=1004
  ::QTableView::showColumn(column);
}
bool QTableView_wrapper::showGrid() const {
  // tag=1000

  // tag=1004
  return ::QTableView::showGrid();
}
void QTableView_wrapper::showRow(int row) {
  // tag=1000

  // tag=1004
  ::QTableView::showRow(row);
}
QSize QTableView_wrapper::sizeHint() const {
  // tag=1000
  if (m_sizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QTableView::sizeHint();
  }
}
// tag=1009
QSize QTableView_wrapper::sizeHint_nocallback() const {
  // tag=1003
  return ::QTableView::sizeHint();
}
int QTableView_wrapper::sizeHintForColumn(int column) const {
  // tag=1000
  if (m_sizeHintForColumnCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_sizeHintForColumnCallback(const_cast<void *>(thisPtr), column);
  } else {
    // tag=1002
    return ::QTableView::sizeHintForColumn(column);
  }
}
// tag=1009
int QTableView_wrapper::sizeHintForColumn_nocallback(int column) const {
  // tag=1003
  return ::QTableView::sizeHintForColumn(column);
}
int QTableView_wrapper::sizeHintForRow(int row) const {
  // tag=1000
  if (m_sizeHintForRowCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_sizeHintForRowCallback(const_cast<void *>(thisPtr), row);
  } else {
    // tag=1002
    return ::QTableView::sizeHintForRow(row);
  }
}
// tag=1009
int QTableView_wrapper::sizeHintForRow_nocallback(int row) const {
  // tag=1003
  return ::QTableView::sizeHintForRow(row);
}
void QTableView_wrapper::sortByColumn(int column, Qt::SortOrder order) {
  // tag=1000

  // tag=1004
  ::QTableView::sortByColumn(column, order);
}
QString QTableView_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QTableView::tr(s, c, n);
}
void QTableView_wrapper::updateEditorData() {
  // tag=1000
  if (m_updateEditorDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_updateEditorDataCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QTableView::updateEditorData();
  }
}
// tag=1009
void QTableView_wrapper::updateEditorData_nocallback() {
  // tag=1003
  ::QTableView::updateEditorData();
}
void QTableView_wrapper::updateEditorGeometries() {
  // tag=1000
  if (m_updateEditorGeometriesCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_updateEditorGeometriesCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QTableView::updateEditorGeometries();
  }
}
// tag=1009
void QTableView_wrapper::updateEditorGeometries_nocallback() {
  // tag=1003
  ::QTableView::updateEditorGeometries();
}
void QTableView_wrapper::updateGeometries() {
  // tag=1000
  if (m_updateGeometriesCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_updateGeometriesCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QTableView::updateGeometries();
  }
}
// tag=1009
void QTableView_wrapper::updateGeometries_nocallback() {
  // tag=1003
  ::QTableView::updateGeometries();
}
int QTableView_wrapper::verticalOffset() const {
  // tag=1000
  if (m_verticalOffsetCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_verticalOffsetCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QTableView::verticalOffset();
  }
}
// tag=1009
int QTableView_wrapper::verticalOffset_nocallback() const {
  // tag=1003
  return ::QTableView::verticalOffset();
}
void QTableView_wrapper::verticalScrollbarAction(int action) {
  // tag=1000
  if (m_verticalScrollbarActionCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_verticalScrollbarActionCallback(const_cast<void *>(thisPtr), action);
  } else {
    // tag=1002
    ::QTableView::verticalScrollbarAction(action);
  }
}
// tag=1009
void QTableView_wrapper::verticalScrollbarAction_nocallback(int action) {
  // tag=1003
  ::QTableView::verticalScrollbarAction(action);
}
void QTableView_wrapper::verticalScrollbarValueChanged(int value) {
  // tag=1000
  if (m_verticalScrollbarValueChangedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_verticalScrollbarValueChangedCallback(const_cast<void *>(thisPtr), value);
  } else {
    // tag=1002
    ::QTableView::verticalScrollbarValueChanged(value);
  }
}
// tag=1009
void QTableView_wrapper::verticalScrollbarValueChanged_nocallback(int value) {
  // tag=1003
  ::QTableView::verticalScrollbarValueChanged(value);
}
bool QTableView_wrapper::viewportEvent(QEvent *event) {
  // tag=1000
  if (m_viewportEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_viewportEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    return ::QTableView::viewportEvent(event);
  }
}
// tag=1009
bool QTableView_wrapper::viewportEvent_nocallback(QEvent *event) {
  // tag=1003
  return ::QTableView::viewportEvent(event);
}
QSize QTableView_wrapper::viewportSizeHint() const {
  // tag=1000
  if (m_viewportSizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_viewportSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QTableView::viewportSizeHint();
  }
}
// tag=1009
QSize QTableView_wrapper::viewportSizeHint_nocallback() const {
  // tag=1003
  return ::QTableView::viewportSizeHint();
}
QRect QTableView_wrapper::visualRect(const QModelIndex &index) const {
  // tag=1000
  if (m_visualRectCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_visualRectCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1002
    return ::QTableView::visualRect(index);
  }
}
// tag=1009
QRect QTableView_wrapper::visualRect_nocallback(
    const QModelIndex &index) const {
  // tag=1003
  return ::QTableView::visualRect(index);
}
QRegion QTableView_wrapper::visualRegionForSelection(
    const QItemSelection &selection) const {
  // tag=1000
  if (m_visualRegionForSelectionCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_visualRegionForSelectionCallback(const_cast<void *>(thisPtr),
                                               selection);
  } else {
    // tag=1002
    return ::QTableView::visualRegionForSelection(selection);
  }
}
// tag=1009
QRegion QTableView_wrapper::visualRegionForSelection_nocallback(
    const QItemSelection &selection) const {
  // tag=1003
  return ::QTableView::visualRegionForSelection(selection);
}
bool QTableView_wrapper::wordWrap() const {
  // tag=1000

  // tag=1004
  return ::QTableView::wordWrap();
}

// tag=1005
QTableView_wrapper::~QTableView_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QTableView *fromPtr(void *ptr) {
  return reinterpret_cast<QTableView *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QTableView_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QTableView_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper *>(
      cppObj);
}
void *c_QTableView__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QTableView_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1079
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

// tag=1050
// changeEvent(QEvent * arg__1)
void c_QTableView__changeEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->changeEvent_nocallback(arg__1);
}

// tag=1050
// clearSpans()
void c_QTableView__clearSpans(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->clearSpans();
}

// tag=1079
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

// tag=1050
// columnAt(int x) const
int c_QTableView__columnAt_int(void *thisObj, int x) {
  return
      // tag=1010
      fromPtr(thisObj)->columnAt(x);
}

// tag=1050
// columnCountChanged(int oldCount, int newCount)
void c_QTableView__columnCountChanged_int_int(void *thisObj, int oldCount,
                                              int newCount) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->columnCountChanged(oldCount, newCount);
}

// tag=1050
// columnMoved(int column, int oldIndex, int newIndex)
void c_QTableView__columnMoved_int_int_int(void *thisObj, int column,
                                           int oldIndex, int newIndex) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->columnMoved(column, oldIndex, newIndex);
}

// tag=1050
// columnResized(int column, int oldWidth, int newWidth)
void c_QTableView__columnResized_int_int_int(void *thisObj, int column,
                                             int oldWidth, int newWidth) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->columnResized(column, oldWidth, newWidth);
}

// tag=1050
// columnSpan(int row, int column) const
int c_QTableView__columnSpan_int_int(void *thisObj, int row, int column) {
  return
      // tag=1010
      fromPtr(thisObj)->columnSpan(row, column);
}

// tag=1050
// columnViewportPosition(int column) const
int c_QTableView__columnViewportPosition_int(void *thisObj, int column) {
  return
      // tag=1010
      fromPtr(thisObj)->columnViewportPosition(column);
}

// tag=1050
// columnWidth(int column) const
int c_QTableView__columnWidth_int(void *thisObj, int column) {
  return
      // tag=1010
      fromPtr(thisObj)->columnWidth(column);
}

// tag=1050
// commitData(QWidget * editor)
void c_QTableView__commitData_QWidget(void *thisObj, void *editor_) {
  auto editor = reinterpret_cast<QWidget *>(editor_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->commitData_nocallback(editor);
}

// tag=1050
// currentChanged(const QModelIndex & current, const QModelIndex & previous)
void c_QTableView__currentChanged_QModelIndex_QModelIndex(void *thisObj,
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
void c_QTableView__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// dataChanged(const QModelIndex & topLeft, const QModelIndex & bottomRight,
// const QList<int > & roles)
void c_QTableView__dataChanged_QModelIndex_QModelIndex_QList_int(
    void *thisObj, void *topLeft_, void *bottomRight_, void *roles_) {
  auto &topLeft = *reinterpret_cast<QModelIndex *>(topLeft_);
  auto &bottomRight = *reinterpret_cast<QModelIndex *>(bottomRight_);
  auto &roles = *reinterpret_cast<QList<int> *>(roles_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->dataChanged_nocallback(topLeft, bottomRight, roles);
}

// tag=1050
// devType() const
int c_QTableView__devType(void *thisObj) {
  return
      // tag=1016
      [&] {
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
}

// tag=1050
// doItemsLayout()
void c_QTableView__doItemsLayout(void *thisObj) {
  // tag=1016
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

// tag=1079
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

// tag=1050
// editorDestroyed(QObject * editor)
void c_QTableView__editorDestroyed_QObject(void *thisObj, void *editor_) {
  auto editor = reinterpret_cast<QObject *>(editor_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->editorDestroyed_nocallback(editor);
}

// tag=1079
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

// tag=1050
// event(QEvent * event)
bool c_QTableView__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->event_nocallback(event);
}

// tag=1050
// eventFilter(QObject * object, QEvent * event)
bool c_QTableView__eventFilter_QObject_QEvent(void *thisObj, void *object_,
                                              void *event_) {
  auto object = reinterpret_cast<QObject *>(object_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->eventFilter_nocallback(object, event);
}

// tag=1050
// focusNextPrevChild(bool next)
bool c_QTableView__focusNextPrevChild_bool(void *thisObj, bool next) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
}

// tag=1050
// hasHeightForWidth() const
bool c_QTableView__hasHeightForWidth(void *thisObj) {
  return
      // tag=1016
      [&] {
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
}

// tag=1050
// heightForWidth(int arg__1) const
int c_QTableView__heightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
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
}

// tag=1050
// hideColumn(int column)
void c_QTableView__hideColumn_int(void *thisObj, int column) {
  // tag=1010
  fromPtr(thisObj)->hideColumn(column);
}

// tag=1050
// hideRow(int row)
void c_QTableView__hideRow_int(void *thisObj, int row) {
  // tag=1010
  fromPtr(thisObj)->hideRow(row);
}

// tag=1050
// horizontalOffset() const
int c_QTableView__horizontalOffset(void *thisObj) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->horizontalOffset_nocallback();
}

// tag=1050
// horizontalScrollbarAction(int action)
void c_QTableView__horizontalScrollbarAction_int(void *thisObj, int action) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->horizontalScrollbarAction_nocallback(action);
}

// tag=1050
// horizontalScrollbarValueChanged(int value)
void c_QTableView__horizontalScrollbarValueChanged_int(void *thisObj,
                                                       int value) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->horizontalScrollbarValueChanged_nocallback(value);
}

// tag=1079
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

// tag=1050
// indexAt(const QPoint & p) const
void *c_QTableView__indexAt_QPoint(void *thisObj, void *p_) {
  auto &p = *reinterpret_cast<QPoint *>(p_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{[&] {
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
}

// tag=1050
// initPainter(QPainter * painter) const
void c_QTableView__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}

// tag=1050
// isColumnHidden(int column) const
bool c_QTableView__isColumnHidden_int(void *thisObj, int column) {
  return
      // tag=1010
      fromPtr(thisObj)->isColumnHidden(column);
}

// tag=1050
// isCornerButtonEnabled() const
bool c_QTableView__isCornerButtonEnabled(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isCornerButtonEnabled();
}

// tag=1050
// isIndexHidden(const QModelIndex & index) const
bool c_QTableView__isIndexHidden_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->isIndexHidden_nocallback(index);
}

// tag=1050
// isRowHidden(int row) const
bool c_QTableView__isRowHidden_int(void *thisObj, int row) {
  return
      // tag=1010
      fromPtr(thisObj)->isRowHidden(row);
}

// tag=1050
// isSortingEnabled() const
bool c_QTableView__isSortingEnabled(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isSortingEnabled();
}

// tag=1050
// keyboardSearch(const QString & search)
void c_QTableView__keyboardSearch_QString(void *thisObj, const char *search_) {
  const auto search = QString::fromUtf8(search_);
  // tag=1016
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
}

// tag=1050
// leaveEvent(QEvent * event)
void c_QTableView__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}

// tag=1050
// minimumSizeHint() const
void *c_QTableView__minimumSizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
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
}

// tag=1050
// mouseDoubleClickEvent(QMouseEvent * event)
void c_QTableView__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                     void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}

// tag=1050
// mouseMoveEvent(QMouseEvent * event)
void c_QTableView__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(event);
}

// tag=1050
// mousePressEvent(QMouseEvent * event)
void c_QTableView__mousePressEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(event);
}

// tag=1050
// mouseReleaseEvent(QMouseEvent * event)
void c_QTableView__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(event);
}

// tag=1050
// moveCursor(QAbstractItemView::CursorAction cursorAction,
// QFlags<Qt::KeyboardModifier> modifiers)
void *c_QTableView__moveCursor_CursorAction_KeyboardModifiers(void *thisObj,
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
                  QtDartBindings_wrappersNS::QTableView_wrapper::CursorAction>(
                  cursorAction),
              modifiers)};
}

// tag=1050
// paintEvent(QPaintEvent * e)
void c_QTableView__paintEvent_QPaintEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QPaintEvent *>(e_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->paintEvent_nocallback(e);
}

// tag=1079
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

// tag=1050
// reset()
void c_QTableView__reset(void *thisObj) {
  // tag=1016
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

// tag=1050
// resizeColumnToContents(int column)
void c_QTableView__resizeColumnToContents_int(void *thisObj, int column) {
  // tag=1010
  fromPtr(thisObj)->resizeColumnToContents(column);
}

// tag=1050
// resizeColumnsToContents()
void c_QTableView__resizeColumnsToContents(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->resizeColumnsToContents();
}

// tag=1050
// resizeRowToContents(int row)
void c_QTableView__resizeRowToContents_int(void *thisObj, int row) {
  // tag=1010
  fromPtr(thisObj)->resizeRowToContents(row);
}

// tag=1050
// resizeRowsToContents()
void c_QTableView__resizeRowsToContents(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->resizeRowsToContents();
}

// tag=1050
// rowAt(int y) const
int c_QTableView__rowAt_int(void *thisObj, int y) {
  return
      // tag=1010
      fromPtr(thisObj)->rowAt(y);
}

// tag=1050
// rowCountChanged(int oldCount, int newCount)
void c_QTableView__rowCountChanged_int_int(void *thisObj, int oldCount,
                                           int newCount) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->rowCountChanged(oldCount, newCount);
}

// tag=1050
// rowHeight(int row) const
int c_QTableView__rowHeight_int(void *thisObj, int row) {
  return
      // tag=1010
      fromPtr(thisObj)->rowHeight(row);
}

// tag=1050
// rowMoved(int row, int oldIndex, int newIndex)
void c_QTableView__rowMoved_int_int_int(void *thisObj, int row, int oldIndex,
                                        int newIndex) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->rowMoved(row, oldIndex, newIndex);
}

// tag=1050
// rowResized(int row, int oldHeight, int newHeight)
void c_QTableView__rowResized_int_int_int(void *thisObj, int row, int oldHeight,
                                          int newHeight) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->rowResized(row, oldHeight, newHeight);
}

// tag=1050
// rowSpan(int row, int column) const
int c_QTableView__rowSpan_int_int(void *thisObj, int row, int column) {
  return
      // tag=1010
      fromPtr(thisObj)->rowSpan(row, column);
}

// tag=1050
// rowViewportPosition(int row) const
int c_QTableView__rowViewportPosition_int(void *thisObj, int row) {
  return
      // tag=1010
      fromPtr(thisObj)->rowViewportPosition(row);
}

// tag=1050
// rowsAboutToBeRemoved(const QModelIndex & parent, int start, int end)
void c_QTableView__rowsAboutToBeRemoved_QModelIndex_int_int(void *thisObj,
                                                            void *parent_,
                                                            int start,
                                                            int end) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->rowsAboutToBeRemoved_nocallback(parent, start, end);
}

// tag=1050
// rowsInserted(const QModelIndex & parent, int start, int end)
void c_QTableView__rowsInserted_QModelIndex_int_int(void *thisObj,
                                                    void *parent_, int start,
                                                    int end) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->rowsInserted_nocallback(parent, start, end);
}

// tag=1050
// scrollContentsBy(int dx, int dy)
void c_QTableView__scrollContentsBy_int_int(void *thisObj, int dx, int dy) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->scrollContentsBy_nocallback(dx, dy);
}

// tag=1050
// scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint hint)
void c_QTableView__scrollTo_QModelIndex_ScrollHint(void *thisObj, void *index_,
                                                   int hint) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  // tag=1016
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

// tag=1050
// selectAll()
void c_QTableView__selectAll(void *thisObj) {
  // tag=1016
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

// tag=1050
// selectColumn(int column)
void c_QTableView__selectColumn_int(void *thisObj, int column) {
  // tag=1010
  fromPtr(thisObj)->selectColumn(column);
}

// tag=1050
// selectRow(int row)
void c_QTableView__selectRow_int(void *thisObj, int row) {
  // tag=1010
  fromPtr(thisObj)->selectRow(row);
}

// tag=1050
// selectedIndexes() const
void *c_QTableView__selectedIndexes(void *thisObj) {
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
void c_QTableView__selectionChanged_QItemSelection_QItemSelection(
    void *thisObj, void *selected_, void *deselected_) {
  auto &selected = *reinterpret_cast<QItemSelection *>(selected_);
  auto &deselected = *reinterpret_cast<QItemSelection *>(deselected_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->selectionChanged_nocallback(selected, deselected);
}

// tag=1050
// selectionCommand(const QModelIndex & index, const QEvent * event) const
int c_QTableView__selectionCommand_QModelIndex_QEvent(void *thisObj,
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
// setColumnHidden(int column, bool hide)
void c_QTableView__setColumnHidden_int_bool(void *thisObj, int column,
                                            bool hide) {
  // tag=1010
  fromPtr(thisObj)->setColumnHidden(column, hide);
}

// tag=1050
// setColumnWidth(int column, int width)
void c_QTableView__setColumnWidth_int_int(void *thisObj, int column,
                                          int width) {
  // tag=1010
  fromPtr(thisObj)->setColumnWidth(column, width);
}

// tag=1050
// setCornerButtonEnabled(bool enable)
void c_QTableView__setCornerButtonEnabled_bool(void *thisObj, bool enable) {
  // tag=1010
  fromPtr(thisObj)->setCornerButtonEnabled(enable);
}

// tag=1050
// setModel(QAbstractItemModel * model)
void c_QTableView__setModel_QAbstractItemModel(void *thisObj, void *model_) {
  auto model = reinterpret_cast<QAbstractItemModel *>(model_);
  // tag=1016
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

// tag=1050
// setRootIndex(const QModelIndex & index)
void c_QTableView__setRootIndex_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  // tag=1016
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

// tag=1050
// setRowHeight(int row, int height)
void c_QTableView__setRowHeight_int_int(void *thisObj, int row, int height) {
  // tag=1010
  fromPtr(thisObj)->setRowHeight(row, height);
}

// tag=1050
// setRowHidden(int row, bool hide)
void c_QTableView__setRowHidden_int_bool(void *thisObj, int row, bool hide) {
  // tag=1010
  fromPtr(thisObj)->setRowHidden(row, hide);
}

// tag=1050
// setSelection(const QRect & rect, QFlags<QItemSelectionModel::SelectionFlag>
// command)
void c_QTableView__setSelection_QRect_SelectionFlags(void *thisObj, void *rect_,
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
void c_QTableView__setSelectionModel_QItemSelectionModel(
    void *thisObj, void *selectionModel_) {
  auto selectionModel =
      reinterpret_cast<QItemSelectionModel *>(selectionModel_);
  // tag=1016
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

// tag=1050
// setShowGrid(bool show)
void c_QTableView__setShowGrid_bool(void *thisObj, bool show) {
  // tag=1010
  fromPtr(thisObj)->setShowGrid(show);
}

// tag=1050
// setSortingEnabled(bool enable)
void c_QTableView__setSortingEnabled_bool(void *thisObj, bool enable) {
  // tag=1010
  fromPtr(thisObj)->setSortingEnabled(enable);
}

// tag=1050
// setSpan(int row, int column, int rowSpan, int columnSpan)
void c_QTableView__setSpan_int_int_int_int(void *thisObj, int row, int column,
                                           int rowSpan, int columnSpan) {
  // tag=1010
  fromPtr(thisObj)->setSpan(row, column, rowSpan, columnSpan);
}

// tag=1050
// setVisible(bool visible)
void c_QTableView__setVisible_bool(void *thisObj, bool visible) {
  // tag=1016
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

// tag=1050
// setWordWrap(bool on)
void c_QTableView__setWordWrap_bool(void *thisObj, bool on) {
  // tag=1010
  fromPtr(thisObj)->setWordWrap(on);
}

// tag=1050
// setupViewport(QWidget * viewport)
void c_QTableView__setupViewport_QWidget(void *thisObj, void *viewport_) {
  auto viewport = reinterpret_cast<QWidget *>(viewport_);
  // tag=1016
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

// tag=1050
// sharedPainter() const
void *c_QTableView__sharedPainter(void *thisObj) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->sharedPainter_nocallback();
}

// tag=1050
// showColumn(int column)
void c_QTableView__showColumn_int(void *thisObj, int column) {
  // tag=1010
  fromPtr(thisObj)->showColumn(column);
}

// tag=1050
// showGrid() const
bool c_QTableView__showGrid(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->showGrid();
}

// tag=1050
// showRow(int row)
void c_QTableView__showRow_int(void *thisObj, int row) {
  // tag=1010
  fromPtr(thisObj)->showRow(row);
}

// tag=1050
// sizeHint() const
void *c_QTableView__sizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
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
}

// tag=1050
// sizeHintForColumn(int column) const
int c_QTableView__sizeHintForColumn_int(void *thisObj, int column) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->sizeHintForColumn_nocallback(column);
}

// tag=1050
// sizeHintForRow(int row) const
int c_QTableView__sizeHintForRow_int(void *thisObj, int row) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->sizeHintForRow_nocallback(row);
}

// tag=1050
// sortByColumn(int column, Qt::SortOrder order)
void c_QTableView__sortByColumn_int_SortOrder(void *thisObj, int column,
                                              int order) {
  // tag=1010
  fromPtr(thisObj)->sortByColumn(column, static_cast<Qt::SortOrder>(order));
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QTableView__tr_char_char_int(const char *s, const char *c,
                                            int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QTableView_wrapper::tr(s, c, n)};
}

// tag=1050
// updateEditorData()
void c_QTableView__updateEditorData(void *thisObj) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->updateEditorData_nocallback();
}

// tag=1050
// updateEditorGeometries()
void c_QTableView__updateEditorGeometries(void *thisObj) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->updateEditorGeometries_nocallback();
}

// tag=1050
// updateGeometries()
void c_QTableView__updateGeometries(void *thisObj) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->updateGeometries_nocallback();
}

// tag=1050
// verticalOffset() const
int c_QTableView__verticalOffset(void *thisObj) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->verticalOffset_nocallback();
}

// tag=1050
// verticalScrollbarAction(int action)
void c_QTableView__verticalScrollbarAction_int(void *thisObj, int action) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->verticalScrollbarAction_nocallback(action);
}

// tag=1050
// verticalScrollbarValueChanged(int value)
void c_QTableView__verticalScrollbarValueChanged_int(void *thisObj, int value) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->verticalScrollbarValueChanged_nocallback(value);
}

// tag=1079
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

// tag=1050
// viewportEvent(QEvent * event)
bool c_QTableView__viewportEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->viewportEvent_nocallback(event);
}

// tag=1050
// viewportSizeHint() const
void *c_QTableView__viewportSizeHint(void *thisObj) {
  return
      // tag=1011

      // tag=1074

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{
          fromWrapperPtr(thisObj)->viewportSizeHint_nocallback()};
}

// tag=1050
// visualRect(const QModelIndex & index) const
void *c_QTableView__visualRect_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{[&] {
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
}

// tag=1050
// visualRegionForSelection(const QItemSelection & selection) const
void *c_QTableView__visualRegionForSelection_QItemSelection(void *thisObj,
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
bool c_QTableView__wordWrap(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->wordWrap();
}
void c_QTableView__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QTableView__registerVirtualMethodCallback(void *ptr, void *callback,
                                                 int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1124:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 5378:
    wrapper->m_commitDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_commitData>(
        callback);
    break;
  case 5380:
    wrapper->m_currentChangedCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_currentChanged>(
        callback);
    break;
  case 944:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_customEvent>(
        callback);
    break;
  case 5382:
    wrapper->m_dataChangedCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_dataChanged>(
        callback);
    break;
  case 1141:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_devType>(
        callback);
    break;
  case 5385:
    wrapper->m_doItemsLayoutCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_doItemsLayout>(
        callback);
    break;
  case 5390:
    wrapper->m_editorDestroyedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_editorDestroyed>(callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_event>(
        callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1150:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1164:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 1168:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 5394:
    wrapper->m_horizontalOffsetCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_horizontalOffset>(callback);
    break;
  case 5395:
    wrapper->m_horizontalScrollbarActionCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_horizontalScrollbarAction>(callback);
    break;
  case 5396:
    wrapper->m_horizontalScrollbarValueChangedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_horizontalScrollbarValueChanged>(
            callback);
    break;
  case 5399:
    wrapper->m_indexAtCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_indexAt>(
        callback);
    break;
  case 1171:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_initPainter>(
        callback);
    break;
  case 5401:
    wrapper->m_isIndexHiddenCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_isIndexHidden>(
        callback);
    break;
  case 5403:
    wrapper->m_keyboardSearchCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_keyboardSearch>(
        callback);
    break;
  case 1196:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1216:
    wrapper->m_minimumSizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_minimumSizeHint>(callback);
    break;
  case 1218:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1220:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_mouseMoveEvent>(
        callback);
    break;
  case 1221:
    wrapper->m_mousePressEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_mousePressEvent>(callback);
    break;
  case 1222:
    wrapper->m_mouseReleaseEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_mouseReleaseEvent>(callback);
    break;
  case 5406:
    wrapper->m_moveCursorCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_moveCursor>(
        callback);
    break;
  case 1229:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 5409:
    wrapper->m_resetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_reset>(
        callback);
    break;
  case 5413:
    wrapper->m_rowsAboutToBeRemovedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_rowsAboutToBeRemoved>(callback);
    break;
  case 5414:
    wrapper->m_rowsInsertedCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_rowsInserted>(
        callback);
    break;
  case 5199:
    wrapper->m_scrollContentsByCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_scrollContentsBy>(callback);
    break;
  case 5417:
    wrapper->m_scrollToCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_scrollTo>(
        callback);
    break;
  case 5420:
    wrapper->m_selectAllCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_selectAll>(
        callback);
    break;
  case 5421:
    wrapper->m_selectedIndexesCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_selectedIndexes>(callback);
    break;
  case 5422:
    wrapper->m_selectionChangedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_selectionChanged>(callback);
    break;
  case 5423:
    wrapper->m_selectionCommandCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_selectionCommand>(callback);
    break;
  case 5436:
    wrapper->m_setModelCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_setModel>(
        callback);
    break;
  case 5437:
    wrapper->m_setRootIndexCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_setRootIndex>(
        callback);
    break;
  case 5438:
    wrapper->m_setSelectionCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_setSelection>(
        callback);
    break;
  case 5439:
    wrapper->m_setSelectionModelCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_setSelectionModel>(callback);
    break;
  case 1309:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_setVisible>(
        callback);
    break;
  case 5207:
    wrapper->m_setupViewportCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_setupViewport>(
        callback);
    break;
  case 1318:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1326:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_sizeHint>(
        callback);
    break;
  case 5444:
    wrapper->m_sizeHintForColumnCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_sizeHintForColumn>(callback);
    break;
  case 5446:
    wrapper->m_sizeHintForRowCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_sizeHintForRow>(
        callback);
    break;
  case 5452:
    wrapper->m_updateEditorDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_updateEditorData>(callback);
    break;
  case 5453:
    wrapper->m_updateEditorGeometriesCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_updateEditorGeometries>(callback);
    break;
  case 5454:
    wrapper->m_updateGeometriesCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_updateGeometries>(callback);
    break;
  case 5455:
    wrapper->m_verticalOffsetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_verticalOffset>(
        callback);
    break;
  case 5456:
    wrapper->m_verticalScrollbarActionCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_verticalScrollbarAction>(callback);
    break;
  case 5457:
    wrapper->m_verticalScrollbarValueChangedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_verticalScrollbarValueChanged>(callback);
    break;
  case 5210:
    wrapper->m_viewportEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_viewportEvent>(
        callback);
    break;
  case 5211:
    wrapper->m_viewportSizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_viewportSizeHint>(callback);
    break;
  case 5460:
    wrapper->m_visualRectCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTableView_wrapper::Callback_visualRect>(
        callback);
    break;
  case 5461:
    wrapper->m_visualRegionForSelectionCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QTableView_wrapper::
                             Callback_visualRegionForSelection>(callback);
    break;
  }
}
}
