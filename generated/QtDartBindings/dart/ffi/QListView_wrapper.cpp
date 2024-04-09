#include "QListView_wrapper.h"

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
QListView_wrapper::QListView_wrapper(QWidget *parent) : ::QListView(parent) {}
int QListView_wrapper::batchSize() const {
  // tag=1000

  // tag=1004
  return ::QListView::batchSize();
}
void QListView_wrapper::changeEvent(QEvent *arg__1) {
  // tag=1000
  if (m_changeEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QListView::changeEvent(arg__1);
  }
}
// tag=1009
void QListView_wrapper::changeEvent_nocallback(QEvent *arg__1) {
  // tag=1003
  ::QListView::changeEvent(arg__1);
}
void QListView_wrapper::clearPropertyFlags() {
  // tag=1000

  // tag=1004
  ::QListView::clearPropertyFlags();
}
void QListView_wrapper::commitData(QWidget *editor) {
  // tag=1000
  if (m_commitDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_commitDataCallback(const_cast<void *>(thisPtr), editor);
  } else {
    // tag=1002
    ::QListView::commitData(editor);
  }
}
// tag=1009
void QListView_wrapper::commitData_nocallback(QWidget *editor) {
  // tag=1003
  ::QListView::commitData(editor);
}
QSize QListView_wrapper::contentsSize() const {
  // tag=1000

  // tag=1004
  return ::QListView::contentsSize();
}
void QListView_wrapper::currentChanged(const QModelIndex &current,
                                       const QModelIndex &previous) {
  // tag=1000
  if (m_currentChangedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_currentChangedCallback(const_cast<void *>(thisPtr), current, previous);
  } else {
    // tag=1002
    ::QListView::currentChanged(current, previous);
  }
}
// tag=1009
void QListView_wrapper::currentChanged_nocallback(const QModelIndex &current,
                                                  const QModelIndex &previous) {
  // tag=1003
  ::QListView::currentChanged(current, previous);
}
void QListView_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QListView::customEvent(event);
  }
}
// tag=1009
void QListView_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QListView::customEvent(event);
}
void QListView_wrapper::dataChanged(const QModelIndex &topLeft,
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
    ::QListView::dataChanged(topLeft, bottomRight, roles);
  }
}
// tag=1009
void QListView_wrapper::dataChanged_nocallback(const QModelIndex &topLeft,
                                               const QModelIndex &bottomRight,
                                               const QList<int> &roles) {
  // tag=1003
  ::QListView::dataChanged(topLeft, bottomRight, roles);
}
int QListView_wrapper::devType() const {
  // tag=1000
  if (m_devTypeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QListView::devType();
  }
}
// tag=1009
int QListView_wrapper::devType_nocallback() const {
  // tag=1003
  return ::QListView::devType();
}
void QListView_wrapper::doItemsLayout() {
  // tag=1000
  if (m_doItemsLayoutCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_doItemsLayoutCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QListView::doItemsLayout();
  }
}
// tag=1009
void QListView_wrapper::doItemsLayout_nocallback() {
  // tag=1003
  ::QListView::doItemsLayout();
}
void QListView_wrapper::editorDestroyed(QObject *editor) {
  // tag=1000
  if (m_editorDestroyedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_editorDestroyedCallback(const_cast<void *>(thisPtr), editor);
  } else {
    // tag=1002
    ::QListView::editorDestroyed(editor);
  }
}
// tag=1009
void QListView_wrapper::editorDestroyed_nocallback(QObject *editor) {
  // tag=1003
  ::QListView::editorDestroyed(editor);
}
bool QListView_wrapper::event(QEvent *e) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), e);
  } else {
    // tag=1002
    return ::QListView::event(e);
  }
}
// tag=1009
bool QListView_wrapper::event_nocallback(QEvent *e) {
  // tag=1003
  return ::QListView::event(e);
}
bool QListView_wrapper::eventFilter(QObject *object, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), object, event);
  } else {
    // tag=1002
    return ::QListView::eventFilter(object, event);
  }
}
// tag=1009
bool QListView_wrapper::eventFilter_nocallback(QObject *object, QEvent *event) {
  // tag=1003
  return ::QListView::eventFilter(object, event);
}
bool QListView_wrapper::focusNextPrevChild(bool next) {
  // tag=1000
  if (m_focusNextPrevChildCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    // tag=1002
    return ::QListView::focusNextPrevChild(next);
  }
}
// tag=1009
bool QListView_wrapper::focusNextPrevChild_nocallback(bool next) {
  // tag=1003
  return ::QListView::focusNextPrevChild(next);
}
QSize QListView_wrapper::gridSize() const {
  // tag=1000

  // tag=1004
  return ::QListView::gridSize();
}
bool QListView_wrapper::hasHeightForWidth() const {
  // tag=1000
  if (m_hasHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QListView::hasHeightForWidth();
  }
}
// tag=1009
bool QListView_wrapper::hasHeightForWidth_nocallback() const {
  // tag=1003
  return ::QListView::hasHeightForWidth();
}
int QListView_wrapper::heightForWidth(int arg__1) const {
  // tag=1000
  if (m_heightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QListView::heightForWidth(arg__1);
  }
}
// tag=1009
int QListView_wrapper::heightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QListView::heightForWidth(arg__1);
}
int QListView_wrapper::horizontalOffset() const {
  // tag=1000
  if (m_horizontalOffsetCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_horizontalOffsetCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QListView::horizontalOffset();
  }
}
// tag=1009
int QListView_wrapper::horizontalOffset_nocallback() const {
  // tag=1003
  return ::QListView::horizontalOffset();
}
void QListView_wrapper::horizontalScrollbarAction(int action) {
  // tag=1000
  if (m_horizontalScrollbarActionCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_horizontalScrollbarActionCallback(const_cast<void *>(thisPtr), action);
  } else {
    // tag=1002
    ::QListView::horizontalScrollbarAction(action);
  }
}
// tag=1009
void QListView_wrapper::horizontalScrollbarAction_nocallback(int action) {
  // tag=1003
  ::QListView::horizontalScrollbarAction(action);
}
void QListView_wrapper::horizontalScrollbarValueChanged(int value) {
  // tag=1000
  if (m_horizontalScrollbarValueChangedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_horizontalScrollbarValueChangedCallback(const_cast<void *>(thisPtr),
                                              value);
  } else {
    // tag=1002
    ::QListView::horizontalScrollbarValueChanged(value);
  }
}
// tag=1009
void QListView_wrapper::horizontalScrollbarValueChanged_nocallback(int value) {
  // tag=1003
  ::QListView::horizontalScrollbarValueChanged(value);
}
QModelIndex QListView_wrapper::indexAt(const QPoint &p) const {
  // tag=1000
  if (m_indexAtCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_indexAtCallback(const_cast<void *>(thisPtr), p);
  } else {
    // tag=1002
    return ::QListView::indexAt(p);
  }
}
// tag=1009
QModelIndex QListView_wrapper::indexAt_nocallback(const QPoint &p) const {
  // tag=1003
  return ::QListView::indexAt(p);
}
void QListView_wrapper::indexesMoved(const QList<QModelIndex> &indexes) {
  // tag=1000

  // tag=1004
  ::QListView::indexesMoved(indexes);
}
void QListView_wrapper::initPainter(QPainter *painter) const {
  // tag=1000
  if (m_initPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    // tag=1002
    ::QListView::initPainter(painter);
  }
}
// tag=1009
void QListView_wrapper::initPainter_nocallback(QPainter *painter) const {
  // tag=1003
  ::QListView::initPainter(painter);
}
bool QListView_wrapper::isIndexHidden(const QModelIndex &index) const {
  // tag=1000
  if (m_isIndexHiddenCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_isIndexHiddenCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1002
    return ::QListView::isIndexHidden(index);
  }
}
// tag=1009
bool QListView_wrapper::isIndexHidden_nocallback(
    const QModelIndex &index) const {
  // tag=1003
  return ::QListView::isIndexHidden(index);
}
bool QListView_wrapper::isRowHidden(int row) const {
  // tag=1000

  // tag=1004
  return ::QListView::isRowHidden(row);
}
bool QListView_wrapper::isSelectionRectVisible() const {
  // tag=1000

  // tag=1004
  return ::QListView::isSelectionRectVisible();
}
bool QListView_wrapper::isWrapping() const {
  // tag=1000

  // tag=1004
  return ::QListView::isWrapping();
}
void QListView_wrapper::keyboardSearch(const QString &search) {
  // tag=1000
  if (m_keyboardSearchCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_keyboardSearchCallback(const_cast<void *>(thisPtr), search);
  } else {
    // tag=1002
    ::QListView::keyboardSearch(search);
  }
}
// tag=1009
void QListView_wrapper::keyboardSearch_nocallback(const QString &search) {
  // tag=1003
  ::QListView::keyboardSearch(search);
}
void QListView_wrapper::leaveEvent(QEvent *event) {
  // tag=1000
  if (m_leaveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QListView::leaveEvent(event);
  }
}
// tag=1009
void QListView_wrapper::leaveEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QListView::leaveEvent(event);
}
QSize QListView_wrapper::minimumSizeHint() const {
  // tag=1000
  if (m_minimumSizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QListView::minimumSizeHint();
  }
}
// tag=1009
QSize QListView_wrapper::minimumSizeHint_nocallback() const {
  // tag=1003
  return ::QListView::minimumSizeHint();
}
int QListView_wrapper::modelColumn() const {
  // tag=1000

  // tag=1004
  return ::QListView::modelColumn();
}
void QListView_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseDoubleClickEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QListView::mouseDoubleClickEvent(event);
  }
}
// tag=1009
void QListView_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QListView::mouseDoubleClickEvent(event);
}
void QListView_wrapper::mouseMoveEvent(QMouseEvent *e) {
  // tag=1000
  if (m_mouseMoveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    // tag=1002
    ::QListView::mouseMoveEvent(e);
  }
}
// tag=1009
void QListView_wrapper::mouseMoveEvent_nocallback(QMouseEvent *e) {
  // tag=1003
  ::QListView::mouseMoveEvent(e);
}
void QListView_wrapper::mousePressEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mousePressEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QListView::mousePressEvent(event);
  }
}
// tag=1009
void QListView_wrapper::mousePressEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QListView::mousePressEvent(event);
}
void QListView_wrapper::mouseReleaseEvent(QMouseEvent *e) {
  // tag=1000
  if (m_mouseReleaseEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    // tag=1002
    ::QListView::mouseReleaseEvent(e);
  }
}
// tag=1009
void QListView_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *e) {
  // tag=1003
  ::QListView::mouseReleaseEvent(e);
}
QModelIndex
QListView_wrapper::moveCursor(QAbstractItemView::CursorAction cursorAction,
                              QFlags<Qt::KeyboardModifier> modifiers) {
  // tag=1000
  if (m_moveCursorCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_moveCursorCallback(const_cast<void *>(thisPtr), cursorAction,
                                 modifiers);
  } else {
    // tag=1002
    return ::QListView::moveCursor(cursorAction, modifiers);
  }
}
// tag=1009
QModelIndex QListView_wrapper::moveCursor_nocallback(
    QAbstractItemView::CursorAction cursorAction,
    QFlags<Qt::KeyboardModifier> modifiers) {
  // tag=1003
  return ::QListView::moveCursor(cursorAction, modifiers);
}
void QListView_wrapper::paintEvent(QPaintEvent *e) {
  // tag=1000
  if (m_paintEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    // tag=1002
    ::QListView::paintEvent(e);
  }
}
// tag=1009
void QListView_wrapper::paintEvent_nocallback(QPaintEvent *e) {
  // tag=1003
  ::QListView::paintEvent(e);
}
QRect QListView_wrapper::rectForIndex(const QModelIndex &index) const {
  // tag=1000

  // tag=1004
  return ::QListView::rectForIndex(index);
}
void QListView_wrapper::reset() {
  // tag=1000
  if (m_resetCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_resetCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QListView::reset();
  }
}
// tag=1009
void QListView_wrapper::reset_nocallback() {
  // tag=1003
  ::QListView::reset();
}
void QListView_wrapper::resizeContents(int width, int height) {
  // tag=1000

  // tag=1004
  ::QListView::resizeContents(width, height);
}
void QListView_wrapper::rowsAboutToBeRemoved(const QModelIndex &parent,
                                             int start, int end) {
  // tag=1000
  if (m_rowsAboutToBeRemovedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_rowsAboutToBeRemovedCallback(const_cast<void *>(thisPtr), parent, start,
                                   end);
  } else {
    // tag=1002
    ::QListView::rowsAboutToBeRemoved(parent, start, end);
  }
}
// tag=1009
void QListView_wrapper::rowsAboutToBeRemoved_nocallback(
    const QModelIndex &parent, int start, int end) {
  // tag=1003
  ::QListView::rowsAboutToBeRemoved(parent, start, end);
}
void QListView_wrapper::rowsInserted(const QModelIndex &parent, int start,
                                     int end) {
  // tag=1000
  if (m_rowsInsertedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_rowsInsertedCallback(const_cast<void *>(thisPtr), parent, start, end);
  } else {
    // tag=1002
    ::QListView::rowsInserted(parent, start, end);
  }
}
// tag=1009
void QListView_wrapper::rowsInserted_nocallback(const QModelIndex &parent,
                                                int start, int end) {
  // tag=1003
  ::QListView::rowsInserted(parent, start, end);
}
void QListView_wrapper::scrollContentsBy(int dx, int dy) {
  // tag=1000
  if (m_scrollContentsByCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_scrollContentsByCallback(const_cast<void *>(thisPtr), dx, dy);
  } else {
    // tag=1002
    ::QListView::scrollContentsBy(dx, dy);
  }
}
// tag=1009
void QListView_wrapper::scrollContentsBy_nocallback(int dx, int dy) {
  // tag=1003
  ::QListView::scrollContentsBy(dx, dy);
}
void QListView_wrapper::scrollTo(const QModelIndex &index,
                                 QAbstractItemView::ScrollHint hint) {
  // tag=1000
  if (m_scrollToCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_scrollToCallback(const_cast<void *>(thisPtr), index, hint);
  } else {
    // tag=1002
    ::QListView::scrollTo(index, hint);
  }
}
// tag=1009
void QListView_wrapper::scrollTo_nocallback(
    const QModelIndex &index, QAbstractItemView::ScrollHint hint) {
  // tag=1003
  ::QListView::scrollTo(index, hint);
}
void QListView_wrapper::selectAll() {
  // tag=1000
  if (m_selectAllCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_selectAllCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QListView::selectAll();
  }
}
// tag=1009
void QListView_wrapper::selectAll_nocallback() {
  // tag=1003
  ::QListView::selectAll();
}
QList<QModelIndex> QListView_wrapper::selectedIndexes() const {
  // tag=1000
  if (m_selectedIndexesCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_selectedIndexesCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QListView::selectedIndexes();
  }
}
// tag=1009
QList<QModelIndex> QListView_wrapper::selectedIndexes_nocallback() const {
  // tag=1003
  return ::QListView::selectedIndexes();
}
void QListView_wrapper::selectionChanged(const QItemSelection &selected,
                                         const QItemSelection &deselected) {
  // tag=1000
  if (m_selectionChangedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_selectionChangedCallback(const_cast<void *>(thisPtr), selected,
                               deselected);
  } else {
    // tag=1002
    ::QListView::selectionChanged(selected, deselected);
  }
}
// tag=1009
void QListView_wrapper::selectionChanged_nocallback(
    const QItemSelection &selected, const QItemSelection &deselected) {
  // tag=1003
  ::QListView::selectionChanged(selected, deselected);
}
QFlags<QItemSelectionModel::SelectionFlag>
QListView_wrapper::selectionCommand(const QModelIndex &index,
                                    const QEvent *event) const {
  // tag=1000
  if (m_selectionCommandCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_selectionCommandCallback(const_cast<void *>(thisPtr), index,
                                      event);
  } else {
    // tag=1002
    return ::QListView::selectionCommand(index, event);
  }
}
// tag=1009
QFlags<QItemSelectionModel::SelectionFlag>
QListView_wrapper::selectionCommand_nocallback(const QModelIndex &index,
                                               const QEvent *event) const {
  // tag=1003
  return ::QListView::selectionCommand(index, event);
}
void QListView_wrapper::setBatchSize(int batchSize) {
  // tag=1000

  // tag=1004
  ::QListView::setBatchSize(batchSize);
}
void QListView_wrapper::setGridSize(const QSize &size) {
  // tag=1000

  // tag=1004
  ::QListView::setGridSize(size);
}
void QListView_wrapper::setModel(QAbstractItemModel *model) {
  // tag=1000
  if (m_setModelCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setModelCallback(const_cast<void *>(thisPtr), model);
  } else {
    // tag=1002
    ::QListView::setModel(model);
  }
}
// tag=1009
void QListView_wrapper::setModel_nocallback(QAbstractItemModel *model) {
  // tag=1003
  ::QListView::setModel(model);
}
void QListView_wrapper::setModelColumn(int column) {
  // tag=1000

  // tag=1004
  ::QListView::setModelColumn(column);
}
void QListView_wrapper::setPositionForIndex(const QPoint &position,
                                            const QModelIndex &index) {
  // tag=1000

  // tag=1004
  ::QListView::setPositionForIndex(position, index);
}
void QListView_wrapper::setRootIndex(const QModelIndex &index) {
  // tag=1000
  if (m_setRootIndexCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setRootIndexCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1002
    ::QListView::setRootIndex(index);
  }
}
// tag=1009
void QListView_wrapper::setRootIndex_nocallback(const QModelIndex &index) {
  // tag=1003
  ::QListView::setRootIndex(index);
}
void QListView_wrapper::setRowHidden(int row, bool hide) {
  // tag=1000

  // tag=1004
  ::QListView::setRowHidden(row, hide);
}
void QListView_wrapper::setSelection(
    const QRect &rect, QFlags<QItemSelectionModel::SelectionFlag> command) {
  // tag=1000
  if (m_setSelectionCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setSelectionCallback(const_cast<void *>(thisPtr), rect, command);
  } else {
    // tag=1002
    ::QListView::setSelection(rect, command);
  }
}
// tag=1009
void QListView_wrapper::setSelection_nocallback(
    const QRect &rect, QFlags<QItemSelectionModel::SelectionFlag> command) {
  // tag=1003
  ::QListView::setSelection(rect, command);
}
void QListView_wrapper::setSelectionModel(QItemSelectionModel *selectionModel) {
  // tag=1000
  if (m_setSelectionModelCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setSelectionModelCallback(const_cast<void *>(thisPtr), selectionModel);
  } else {
    // tag=1002
    ::QListView::setSelectionModel(selectionModel);
  }
}
// tag=1009
void QListView_wrapper::setSelectionModel_nocallback(
    QItemSelectionModel *selectionModel) {
  // tag=1003
  ::QListView::setSelectionModel(selectionModel);
}
void QListView_wrapper::setSelectionRectVisible(bool show) {
  // tag=1000

  // tag=1004
  ::QListView::setSelectionRectVisible(show);
}
void QListView_wrapper::setSpacing(int space) {
  // tag=1000

  // tag=1004
  ::QListView::setSpacing(space);
}
void QListView_wrapper::setUniformItemSizes(bool enable) {
  // tag=1000

  // tag=1004
  ::QListView::setUniformItemSizes(enable);
}
void QListView_wrapper::setVisible(bool visible) {
  // tag=1000
  if (m_setVisibleCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    // tag=1002
    ::QListView::setVisible(visible);
  }
}
// tag=1009
void QListView_wrapper::setVisible_nocallback(bool visible) {
  // tag=1003
  ::QListView::setVisible(visible);
}
void QListView_wrapper::setWordWrap(bool on) {
  // tag=1000

  // tag=1004
  ::QListView::setWordWrap(on);
}
void QListView_wrapper::setWrapping(bool enable) {
  // tag=1000

  // tag=1004
  ::QListView::setWrapping(enable);
}
void QListView_wrapper::setupViewport(QWidget *viewport) {
  // tag=1000
  if (m_setupViewportCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setupViewportCallback(const_cast<void *>(thisPtr), viewport);
  } else {
    // tag=1002
    ::QListView::setupViewport(viewport);
  }
}
// tag=1009
void QListView_wrapper::setupViewport_nocallback(QWidget *viewport) {
  // tag=1003
  ::QListView::setupViewport(viewport);
}
QPainter *QListView_wrapper::sharedPainter() const {
  // tag=1000
  if (m_sharedPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QListView::sharedPainter();
  }
}
// tag=1009
QPainter *QListView_wrapper::sharedPainter_nocallback() const {
  // tag=1003
  return ::QListView::sharedPainter();
}
QSize QListView_wrapper::sizeHint() const {
  // tag=1000
  if (m_sizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QListView::sizeHint();
  }
}
// tag=1009
QSize QListView_wrapper::sizeHint_nocallback() const {
  // tag=1003
  return ::QListView::sizeHint();
}
int QListView_wrapper::sizeHintForColumn(int column) const {
  // tag=1000
  if (m_sizeHintForColumnCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_sizeHintForColumnCallback(const_cast<void *>(thisPtr), column);
  } else {
    // tag=1002
    return ::QListView::sizeHintForColumn(column);
  }
}
// tag=1009
int QListView_wrapper::sizeHintForColumn_nocallback(int column) const {
  // tag=1003
  return ::QListView::sizeHintForColumn(column);
}
int QListView_wrapper::sizeHintForRow(int row) const {
  // tag=1000
  if (m_sizeHintForRowCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_sizeHintForRowCallback(const_cast<void *>(thisPtr), row);
  } else {
    // tag=1002
    return ::QListView::sizeHintForRow(row);
  }
}
// tag=1009
int QListView_wrapper::sizeHintForRow_nocallback(int row) const {
  // tag=1003
  return ::QListView::sizeHintForRow(row);
}
int QListView_wrapper::spacing() const {
  // tag=1000

  // tag=1004
  return ::QListView::spacing();
}
QString QListView_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QListView::tr(s, c, n);
}
bool QListView_wrapper::uniformItemSizes() const {
  // tag=1000

  // tag=1004
  return ::QListView::uniformItemSizes();
}
void QListView_wrapper::updateEditorData() {
  // tag=1000
  if (m_updateEditorDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_updateEditorDataCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QListView::updateEditorData();
  }
}
// tag=1009
void QListView_wrapper::updateEditorData_nocallback() {
  // tag=1003
  ::QListView::updateEditorData();
}
void QListView_wrapper::updateEditorGeometries() {
  // tag=1000
  if (m_updateEditorGeometriesCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_updateEditorGeometriesCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QListView::updateEditorGeometries();
  }
}
// tag=1009
void QListView_wrapper::updateEditorGeometries_nocallback() {
  // tag=1003
  ::QListView::updateEditorGeometries();
}
void QListView_wrapper::updateGeometries() {
  // tag=1000
  if (m_updateGeometriesCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_updateGeometriesCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QListView::updateGeometries();
  }
}
// tag=1009
void QListView_wrapper::updateGeometries_nocallback() {
  // tag=1003
  ::QListView::updateGeometries();
}
int QListView_wrapper::verticalOffset() const {
  // tag=1000
  if (m_verticalOffsetCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_verticalOffsetCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QListView::verticalOffset();
  }
}
// tag=1009
int QListView_wrapper::verticalOffset_nocallback() const {
  // tag=1003
  return ::QListView::verticalOffset();
}
void QListView_wrapper::verticalScrollbarAction(int action) {
  // tag=1000
  if (m_verticalScrollbarActionCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_verticalScrollbarActionCallback(const_cast<void *>(thisPtr), action);
  } else {
    // tag=1002
    ::QListView::verticalScrollbarAction(action);
  }
}
// tag=1009
void QListView_wrapper::verticalScrollbarAction_nocallback(int action) {
  // tag=1003
  ::QListView::verticalScrollbarAction(action);
}
void QListView_wrapper::verticalScrollbarValueChanged(int value) {
  // tag=1000
  if (m_verticalScrollbarValueChangedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_verticalScrollbarValueChangedCallback(const_cast<void *>(thisPtr), value);
  } else {
    // tag=1002
    ::QListView::verticalScrollbarValueChanged(value);
  }
}
// tag=1009
void QListView_wrapper::verticalScrollbarValueChanged_nocallback(int value) {
  // tag=1003
  ::QListView::verticalScrollbarValueChanged(value);
}
bool QListView_wrapper::viewportEvent(QEvent *event) {
  // tag=1000
  if (m_viewportEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_viewportEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    return ::QListView::viewportEvent(event);
  }
}
// tag=1009
bool QListView_wrapper::viewportEvent_nocallback(QEvent *event) {
  // tag=1003
  return ::QListView::viewportEvent(event);
}
QSize QListView_wrapper::viewportSizeHint() const {
  // tag=1000
  if (m_viewportSizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_viewportSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QListView::viewportSizeHint();
  }
}
// tag=1009
QSize QListView_wrapper::viewportSizeHint_nocallback() const {
  // tag=1003
  return ::QListView::viewportSizeHint();
}
QRect QListView_wrapper::visualRect(const QModelIndex &index) const {
  // tag=1000
  if (m_visualRectCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_visualRectCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1002
    return ::QListView::visualRect(index);
  }
}
// tag=1009
QRect QListView_wrapper::visualRect_nocallback(const QModelIndex &index) const {
  // tag=1003
  return ::QListView::visualRect(index);
}
QRegion QListView_wrapper::visualRegionForSelection(
    const QItemSelection &selection) const {
  // tag=1000
  if (m_visualRegionForSelectionCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_visualRegionForSelectionCallback(const_cast<void *>(thisPtr),
                                               selection);
  } else {
    // tag=1002
    return ::QListView::visualRegionForSelection(selection);
  }
}
// tag=1009
QRegion QListView_wrapper::visualRegionForSelection_nocallback(
    const QItemSelection &selection) const {
  // tag=1003
  return ::QListView::visualRegionForSelection(selection);
}
bool QListView_wrapper::wordWrap() const {
  // tag=1000

  // tag=1004
  return ::QListView::wordWrap();
}

// tag=1005
QListView_wrapper::~QListView_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QListView *fromPtr(void *ptr) {
  return reinterpret_cast<QListView *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QListView_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QListView_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper *>(
      cppObj);
}
void *c_QListView__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QListView_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1079
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

// tag=1050
// batchSize() const
int c_QListView__batchSize(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->batchSize();
}

// tag=1050
// changeEvent(QEvent * arg__1)
void c_QListView__changeEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->changeEvent_nocallback(arg__1);
}

// tag=1050
// clearPropertyFlags()
void c_QListView__clearPropertyFlags(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->clearPropertyFlags();
}

// tag=1079
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

// tag=1050
// commitData(QWidget * editor)
void c_QListView__commitData_QWidget(void *thisObj, void *editor_) {
  auto editor = reinterpret_cast<QWidget *>(editor_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->commitData_nocallback(editor);
}

// tag=1050
// contentsSize() const
void *c_QListView__contentsSize(void *thisObj) {
  return
      // tag=1011

      // tag=1073

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{
          fromWrapperPtr(thisObj)->contentsSize()};
}

// tag=1050
// currentChanged(const QModelIndex & current, const QModelIndex & previous)
void c_QListView__currentChanged_QModelIndex_QModelIndex(void *thisObj,
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
void c_QListView__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// dataChanged(const QModelIndex & topLeft, const QModelIndex & bottomRight,
// const QList<int > & roles)
void c_QListView__dataChanged_QModelIndex_QModelIndex_QList_int(
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
int c_QListView__devType(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QListView_wrapper *>(
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
void c_QListView__doItemsLayout(void *thisObj) {
  // tag=1016
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

// tag=1079
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

// tag=1050
// editorDestroyed(QObject * editor)
void c_QListView__editorDestroyed_QObject(void *thisObj, void *editor_) {
  auto editor = reinterpret_cast<QObject *>(editor_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->editorDestroyed_nocallback(editor);
}

// tag=1079
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

// tag=1050
// event(QEvent * e)
bool c_QListView__event_QEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QEvent *>(e_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->event_nocallback(e);
}

// tag=1050
// eventFilter(QObject * object, QEvent * event)
bool c_QListView__eventFilter_QObject_QEvent(void *thisObj, void *object_,
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
bool c_QListView__focusNextPrevChild_bool(void *thisObj, bool next) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
}

// tag=1050
// gridSize() const
void *c_QListView__gridSize(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->gridSize()};
}

// tag=1050
// hasHeightForWidth() const
bool c_QListView__hasHeightForWidth(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QListView_wrapper *>(
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
int c_QListView__heightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QListView_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->heightForWidth_nocallback(arg__1);
        } else {
          return targetPtr->heightForWidth(arg__1);
        }
      }();
}

// tag=1050
// horizontalOffset() const
int c_QListView__horizontalOffset(void *thisObj) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->horizontalOffset_nocallback();
}

// tag=1050
// horizontalScrollbarAction(int action)
void c_QListView__horizontalScrollbarAction_int(void *thisObj, int action) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->horizontalScrollbarAction_nocallback(action);
}

// tag=1050
// horizontalScrollbarValueChanged(int value)
void c_QListView__horizontalScrollbarValueChanged_int(void *thisObj,
                                                      int value) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->horizontalScrollbarValueChanged_nocallback(value);
}

// tag=1079
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

// tag=1050
// indexAt(const QPoint & p) const
void *c_QListView__indexAt_QPoint(void *thisObj, void *p_) {
  auto &p = *reinterpret_cast<QPoint *>(p_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QListView_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->indexAt_nocallback(p);
        } else {
          return targetPtr->indexAt(p);
        }
      }()};
}

// tag=1050
// indexesMoved(const QList<QModelIndex > & indexes)
void c_QListView__indexesMoved_QList_QModelIndex(void *thisObj,
                                                 void *indexes_) {
  auto &indexes = *reinterpret_cast<QList<QModelIndex> *>(indexes_);
  // tag=1010
  fromPtr(thisObj)->indexesMoved(indexes);
}

// tag=1079
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

// tag=1050
// initPainter(QPainter * painter) const
void c_QListView__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}

// tag=1050
// isIndexHidden(const QModelIndex & index) const
bool c_QListView__isIndexHidden_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->isIndexHidden_nocallback(index);
}

// tag=1050
// isRowHidden(int row) const
bool c_QListView__isRowHidden_int(void *thisObj, int row) {
  return
      // tag=1010
      fromPtr(thisObj)->isRowHidden(row);
}

// tag=1050
// isSelectionRectVisible() const
bool c_QListView__isSelectionRectVisible(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isSelectionRectVisible();
}

// tag=1050
// isWrapping() const
bool c_QListView__isWrapping(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isWrapping();
}

// tag=1050
// keyboardSearch(const QString & search)
void c_QListView__keyboardSearch_QString(void *thisObj, const char *search_) {
  const auto search = QString::fromUtf8(search_);
  // tag=1016
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
}

// tag=1050
// leaveEvent(QEvent * event)
void c_QListView__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}

// tag=1050
// minimumSizeHint() const
void *c_QListView__minimumSizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QListView_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->minimumSizeHint_nocallback();
        } else {
          return targetPtr->minimumSizeHint();
        }
      }()};
}

// tag=1050
// modelColumn() const
int c_QListView__modelColumn(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->modelColumn();
}

// tag=1050
// mouseDoubleClickEvent(QMouseEvent * event)
void c_QListView__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                    void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}

// tag=1050
// mouseMoveEvent(QMouseEvent * e)
void c_QListView__mouseMoveEvent_QMouseEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QMouseEvent *>(e_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(e);
}

// tag=1050
// mousePressEvent(QMouseEvent * event)
void c_QListView__mousePressEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(event);
}

// tag=1050
// mouseReleaseEvent(QMouseEvent * e)
void c_QListView__mouseReleaseEvent_QMouseEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QMouseEvent *>(e_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(e);
}

// tag=1050
// moveCursor(QAbstractItemView::CursorAction cursorAction,
// QFlags<Qt::KeyboardModifier> modifiers)
void *c_QListView__moveCursor_CursorAction_KeyboardModifiers(void *thisObj,
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
                  QtDartBindings_wrappersNS::QListView_wrapper::CursorAction>(
                  cursorAction),
              modifiers)};
}

// tag=1050
// paintEvent(QPaintEvent * e)
void c_QListView__paintEvent_QPaintEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QPaintEvent *>(e_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->paintEvent_nocallback(e);
}

// tag=1079
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

// tag=1050
// rectForIndex(const QModelIndex & index) const
void *c_QListView__rectForIndex_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1011

      // tag=1073

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{
          fromWrapperPtr(thisObj)->rectForIndex(index)};
}

// tag=1050
// reset()
void c_QListView__reset(void *thisObj) {
  // tag=1016
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

// tag=1050
// resizeContents(int width, int height)
void c_QListView__resizeContents_int_int(void *thisObj, int width, int height) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->resizeContents(width, height);
}

// tag=1050
// rowsAboutToBeRemoved(const QModelIndex & parent, int start, int end)
void c_QListView__rowsAboutToBeRemoved_QModelIndex_int_int(void *thisObj,
                                                           void *parent_,
                                                           int start, int end) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->rowsAboutToBeRemoved_nocallback(parent, start, end);
}

// tag=1050
// rowsInserted(const QModelIndex & parent, int start, int end)
void c_QListView__rowsInserted_QModelIndex_int_int(void *thisObj, void *parent_,
                                                   int start, int end) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->rowsInserted_nocallback(parent, start, end);
}

// tag=1050
// scrollContentsBy(int dx, int dy)
void c_QListView__scrollContentsBy_int_int(void *thisObj, int dx, int dy) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->scrollContentsBy_nocallback(dx, dy);
}

// tag=1050
// scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint hint)
void c_QListView__scrollTo_QModelIndex_ScrollHint(void *thisObj, void *index_,
                                                  int hint) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  // tag=1016
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

// tag=1050
// selectAll()
void c_QListView__selectAll(void *thisObj) {
  // tag=1016
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

// tag=1050
// selectedIndexes() const
void *c_QListView__selectedIndexes(void *thisObj) {
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
void c_QListView__selectionChanged_QItemSelection_QItemSelection(
    void *thisObj, void *selected_, void *deselected_) {
  auto &selected = *reinterpret_cast<QItemSelection *>(selected_);
  auto &deselected = *reinterpret_cast<QItemSelection *>(deselected_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->selectionChanged_nocallback(selected, deselected);
}

// tag=1050
// selectionCommand(const QModelIndex & index, const QEvent * event) const
int c_QListView__selectionCommand_QModelIndex_QEvent(void *thisObj,
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
// setBatchSize(int batchSize)
void c_QListView__setBatchSize_int(void *thisObj, int batchSize) {
  // tag=1010
  fromPtr(thisObj)->setBatchSize(batchSize);
}

// tag=1050
// setGridSize(const QSize & size)
void c_QListView__setGridSize_QSize(void *thisObj, void *size_) {
  auto &size = *reinterpret_cast<QSize *>(size_);
  // tag=1010
  fromPtr(thisObj)->setGridSize(size);
}

// tag=1050
// setModel(QAbstractItemModel * model)
void c_QListView__setModel_QAbstractItemModel(void *thisObj, void *model_) {
  auto model = reinterpret_cast<QAbstractItemModel *>(model_);
  // tag=1016
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

// tag=1050
// setModelColumn(int column)
void c_QListView__setModelColumn_int(void *thisObj, int column) {
  // tag=1010
  fromPtr(thisObj)->setModelColumn(column);
}

// tag=1050
// setPositionForIndex(const QPoint & position, const QModelIndex & index)
void c_QListView__setPositionForIndex_QPoint_QModelIndex(void *thisObj,
                                                         void *position_,
                                                         void *index_) {
  auto &position = *reinterpret_cast<QPoint *>(position_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->setPositionForIndex(position, index);
}

// tag=1050
// setRootIndex(const QModelIndex & index)
void c_QListView__setRootIndex_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  // tag=1016
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

// tag=1050
// setRowHidden(int row, bool hide)
void c_QListView__setRowHidden_int_bool(void *thisObj, int row, bool hide) {
  // tag=1010
  fromPtr(thisObj)->setRowHidden(row, hide);
}

// tag=1050
// setSelection(const QRect & rect, QFlags<QItemSelectionModel::SelectionFlag>
// command)
void c_QListView__setSelection_QRect_SelectionFlags(void *thisObj, void *rect_,
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
void c_QListView__setSelectionModel_QItemSelectionModel(void *thisObj,
                                                        void *selectionModel_) {
  auto selectionModel =
      reinterpret_cast<QItemSelectionModel *>(selectionModel_);
  // tag=1016
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

// tag=1050
// setSelectionRectVisible(bool show)
void c_QListView__setSelectionRectVisible_bool(void *thisObj, bool show) {
  // tag=1010
  fromPtr(thisObj)->setSelectionRectVisible(show);
}

// tag=1050
// setSpacing(int space)
void c_QListView__setSpacing_int(void *thisObj, int space) {
  // tag=1010
  fromPtr(thisObj)->setSpacing(space);
}

// tag=1050
// setUniformItemSizes(bool enable)
void c_QListView__setUniformItemSizes_bool(void *thisObj, bool enable) {
  // tag=1010
  fromPtr(thisObj)->setUniformItemSizes(enable);
}

// tag=1050
// setVisible(bool visible)
void c_QListView__setVisible_bool(void *thisObj, bool visible) {
  // tag=1016
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

// tag=1050
// setWordWrap(bool on)
void c_QListView__setWordWrap_bool(void *thisObj, bool on) {
  // tag=1010
  fromPtr(thisObj)->setWordWrap(on);
}

// tag=1050
// setWrapping(bool enable)
void c_QListView__setWrapping_bool(void *thisObj, bool enable) {
  // tag=1010
  fromPtr(thisObj)->setWrapping(enable);
}

// tag=1050
// setupViewport(QWidget * viewport)
void c_QListView__setupViewport_QWidget(void *thisObj, void *viewport_) {
  auto viewport = reinterpret_cast<QWidget *>(viewport_);
  // tag=1016
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

// tag=1050
// sharedPainter() const
void *c_QListView__sharedPainter(void *thisObj) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->sharedPainter_nocallback();
}

// tag=1050
// sizeHint() const
void *c_QListView__sizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QListView_wrapper *>(
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
int c_QListView__sizeHintForColumn_int(void *thisObj, int column) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QListView_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->sizeHintForColumn_nocallback(column);
        } else {
          return targetPtr->sizeHintForColumn(column);
        }
      }();
}

// tag=1050
// sizeHintForRow(int row) const
int c_QListView__sizeHintForRow_int(void *thisObj, int row) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QListView_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->sizeHintForRow_nocallback(row);
        } else {
          return targetPtr->sizeHintForRow(row);
        }
      }();
}

// tag=1050
// spacing() const
int c_QListView__spacing(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->spacing();
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QListView__tr_char_char_int(const char *s, const char *c,
                                           int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QListView_wrapper::tr(s, c, n)};
}

// tag=1050
// uniformItemSizes() const
bool c_QListView__uniformItemSizes(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->uniformItemSizes();
}

// tag=1050
// updateEditorData()
void c_QListView__updateEditorData(void *thisObj) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->updateEditorData_nocallback();
}

// tag=1050
// updateEditorGeometries()
void c_QListView__updateEditorGeometries(void *thisObj) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->updateEditorGeometries_nocallback();
}

// tag=1050
// updateGeometries()
void c_QListView__updateGeometries(void *thisObj) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->updateGeometries_nocallback();
}

// tag=1050
// verticalOffset() const
int c_QListView__verticalOffset(void *thisObj) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->verticalOffset_nocallback();
}

// tag=1050
// verticalScrollbarAction(int action)
void c_QListView__verticalScrollbarAction_int(void *thisObj, int action) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->verticalScrollbarAction_nocallback(action);
}

// tag=1050
// verticalScrollbarValueChanged(int value)
void c_QListView__verticalScrollbarValueChanged_int(void *thisObj, int value) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->verticalScrollbarValueChanged_nocallback(value);
}

// tag=1079
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

// tag=1050
// viewportEvent(QEvent * event)
bool c_QListView__viewportEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->viewportEvent_nocallback(event);
}

// tag=1050
// viewportSizeHint() const
void *c_QListView__viewportSizeHint(void *thisObj) {
  return
      // tag=1011

      // tag=1074

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{
          fromWrapperPtr(thisObj)->viewportSizeHint_nocallback()};
}

// tag=1050
// visualRect(const QModelIndex & index) const
void *c_QListView__visualRect_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QListView_wrapper *>(
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
void *c_QListView__visualRegionForSelection_QItemSelection(void *thisObj,
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
bool c_QListView__wordWrap(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->wordWrap();
}
void c_QListView__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QListView__registerVirtualMethodCallback(void *ptr, void *callback,
                                                int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1124:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 5378:
    wrapper->m_commitDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_commitData>(
        callback);
    break;
  case 5380:
    wrapper->m_currentChangedCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_currentChanged>(
        callback);
    break;
  case 944:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_customEvent>(
        callback);
    break;
  case 5382:
    wrapper->m_dataChangedCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_dataChanged>(
        callback);
    break;
  case 1141:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_devType>(
        callback);
    break;
  case 5385:
    wrapper->m_doItemsLayoutCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_doItemsLayout>(
        callback);
    break;
  case 5390:
    wrapper->m_editorDestroyedCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_editorDestroyed>(
        callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_event>(callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1150:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1164:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 1168:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 5394:
    wrapper->m_horizontalOffsetCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_horizontalOffset>(callback);
    break;
  case 5395:
    wrapper->m_horizontalScrollbarActionCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_horizontalScrollbarAction>(callback);
    break;
  case 5396:
    wrapper->m_horizontalScrollbarValueChangedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_horizontalScrollbarValueChanged>(
            callback);
    break;
  case 5399:
    wrapper->m_indexAtCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_indexAt>(
        callback);
    break;
  case 1171:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_initPainter>(
        callback);
    break;
  case 5401:
    wrapper->m_isIndexHiddenCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_isIndexHidden>(
        callback);
    break;
  case 5403:
    wrapper->m_keyboardSearchCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_keyboardSearch>(
        callback);
    break;
  case 1196:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1216:
    wrapper->m_minimumSizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_minimumSizeHint>(
        callback);
    break;
  case 1218:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1220:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_mouseMoveEvent>(
        callback);
    break;
  case 1221:
    wrapper->m_mousePressEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_mousePressEvent>(
        callback);
    break;
  case 1222:
    wrapper->m_mouseReleaseEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_mouseReleaseEvent>(callback);
    break;
  case 5406:
    wrapper->m_moveCursorCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_moveCursor>(
        callback);
    break;
  case 1229:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 5409:
    wrapper->m_resetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_reset>(callback);
    break;
  case 5413:
    wrapper->m_rowsAboutToBeRemovedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_rowsAboutToBeRemoved>(callback);
    break;
  case 5414:
    wrapper->m_rowsInsertedCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_rowsInserted>(
        callback);
    break;
  case 5199:
    wrapper->m_scrollContentsByCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_scrollContentsBy>(callback);
    break;
  case 5417:
    wrapper->m_scrollToCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_scrollTo>(
        callback);
    break;
  case 5420:
    wrapper->m_selectAllCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_selectAll>(
        callback);
    break;
  case 5421:
    wrapper->m_selectedIndexesCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_selectedIndexes>(
        callback);
    break;
  case 5422:
    wrapper->m_selectionChangedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_selectionChanged>(callback);
    break;
  case 5423:
    wrapper->m_selectionCommandCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_selectionCommand>(callback);
    break;
  case 5436:
    wrapper->m_setModelCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_setModel>(
        callback);
    break;
  case 5437:
    wrapper->m_setRootIndexCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_setRootIndex>(
        callback);
    break;
  case 5438:
    wrapper->m_setSelectionCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_setSelection>(
        callback);
    break;
  case 5439:
    wrapper->m_setSelectionModelCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_setSelectionModel>(callback);
    break;
  case 1309:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_setVisible>(
        callback);
    break;
  case 5207:
    wrapper->m_setupViewportCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_setupViewport>(
        callback);
    break;
  case 1318:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1326:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_sizeHint>(
        callback);
    break;
  case 5444:
    wrapper->m_sizeHintForColumnCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_sizeHintForColumn>(callback);
    break;
  case 5446:
    wrapper->m_sizeHintForRowCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_sizeHintForRow>(
        callback);
    break;
  case 5452:
    wrapper->m_updateEditorDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_updateEditorData>(callback);
    break;
  case 5453:
    wrapper->m_updateEditorGeometriesCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_updateEditorGeometries>(callback);
    break;
  case 5454:
    wrapper->m_updateGeometriesCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_updateGeometries>(callback);
    break;
  case 5455:
    wrapper->m_verticalOffsetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_verticalOffset>(
        callback);
    break;
  case 5456:
    wrapper->m_verticalScrollbarActionCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_verticalScrollbarAction>(callback);
    break;
  case 5457:
    wrapper->m_verticalScrollbarValueChangedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_verticalScrollbarValueChanged>(callback);
    break;
  case 5210:
    wrapper->m_viewportEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_viewportEvent>(
        callback);
    break;
  case 5211:
    wrapper->m_viewportSizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_viewportSizeHint>(callback);
    break;
  case 5460:
    wrapper->m_visualRectCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QListView_wrapper::Callback_visualRect>(
        callback);
    break;
  case 5461:
    wrapper->m_visualRegionForSelectionCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QListView_wrapper::
                             Callback_visualRegionForSelection>(callback);
    break;
  }
}
}
