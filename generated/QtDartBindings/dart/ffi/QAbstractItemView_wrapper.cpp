#include "QAbstractItemView_wrapper.h"

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
QAbstractItemView_wrapper::QAbstractItemView_wrapper(QWidget *parent)
    : ::QAbstractItemView(parent) {}
void QAbstractItemView_wrapper::activated(const QModelIndex &index) {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::activated(index);
}
bool QAbstractItemView_wrapper::alternatingRowColors() const {
  // tag=1000

  // tag=1004
  return ::QAbstractItemView::alternatingRowColors();
}
int QAbstractItemView_wrapper::autoScrollMargin() const {
  // tag=1000

  // tag=1004
  return ::QAbstractItemView::autoScrollMargin();
}
void QAbstractItemView_wrapper::changeEvent(QEvent *arg__1) {
  // tag=1000
  if (m_changeEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QAbstractItemView::changeEvent(arg__1);
  }
}
// tag=1009
void QAbstractItemView_wrapper::changeEvent_nocallback(QEvent *arg__1) {
  // tag=1003
  ::QAbstractItemView::changeEvent(arg__1);
}
void QAbstractItemView_wrapper::clearSelection() {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::clearSelection();
}
void QAbstractItemView_wrapper::clicked(const QModelIndex &index) {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::clicked(index);
}
void QAbstractItemView_wrapper::closePersistentEditor(
    const QModelIndex &index) {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::closePersistentEditor(index);
}
void QAbstractItemView_wrapper::commitData(QWidget *editor) {
  // tag=1000
  if (m_commitDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_commitDataCallback(const_cast<void *>(thisPtr), editor);
  } else {
    // tag=1002
    ::QAbstractItemView::commitData(editor);
  }
}
// tag=1009
void QAbstractItemView_wrapper::commitData_nocallback(QWidget *editor) {
  // tag=1003
  ::QAbstractItemView::commitData(editor);
}
void QAbstractItemView_wrapper::currentChanged(const QModelIndex &current,
                                               const QModelIndex &previous) {
  // tag=1000
  if (m_currentChangedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_currentChangedCallback(const_cast<void *>(thisPtr), current, previous);
  } else {
    // tag=1002
    ::QAbstractItemView::currentChanged(current, previous);
  }
}
// tag=1009
void QAbstractItemView_wrapper::currentChanged_nocallback(
    const QModelIndex &current, const QModelIndex &previous) {
  // tag=1003
  ::QAbstractItemView::currentChanged(current, previous);
}
QModelIndex QAbstractItemView_wrapper::currentIndex() const {
  // tag=1000

  // tag=1004
  return ::QAbstractItemView::currentIndex();
}
void QAbstractItemView_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QAbstractItemView::customEvent(event);
  }
}
// tag=1009
void QAbstractItemView_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QAbstractItemView::customEvent(event);
}
void QAbstractItemView_wrapper::dataChanged(const QModelIndex &topLeft,
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
    ::QAbstractItemView::dataChanged(topLeft, bottomRight, roles);
  }
}
// tag=1009
void QAbstractItemView_wrapper::dataChanged_nocallback(
    const QModelIndex &topLeft, const QModelIndex &bottomRight,
    const QList<int> &roles) {
  // tag=1003
  ::QAbstractItemView::dataChanged(topLeft, bottomRight, roles);
}
int QAbstractItemView_wrapper::devType() const {
  // tag=1000
  if (m_devTypeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QAbstractItemView::devType();
  }
}
// tag=1009
int QAbstractItemView_wrapper::devType_nocallback() const {
  // tag=1003
  return ::QAbstractItemView::devType();
}
QPoint QAbstractItemView_wrapper::dirtyRegionOffset() const {
  // tag=1000

  // tag=1004
  return ::QAbstractItemView::dirtyRegionOffset();
}
void QAbstractItemView_wrapper::doAutoScroll() {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::doAutoScroll();
}
void QAbstractItemView_wrapper::doItemsLayout() {
  // tag=1000
  if (m_doItemsLayoutCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_doItemsLayoutCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QAbstractItemView::doItemsLayout();
  }
}
// tag=1009
void QAbstractItemView_wrapper::doItemsLayout_nocallback() {
  // tag=1003
  ::QAbstractItemView::doItemsLayout();
}
void QAbstractItemView_wrapper::doubleClicked(const QModelIndex &index) {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::doubleClicked(index);
}
bool QAbstractItemView_wrapper::dragDropOverwriteMode() const {
  // tag=1000

  // tag=1004
  return ::QAbstractItemView::dragDropOverwriteMode();
}
bool QAbstractItemView_wrapper::dragEnabled() const {
  // tag=1000

  // tag=1004
  return ::QAbstractItemView::dragEnabled();
}
void QAbstractItemView_wrapper::edit(const QModelIndex &index) {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::edit(index);
}
void QAbstractItemView_wrapper::editorDestroyed(QObject *editor) {
  // tag=1000
  if (m_editorDestroyedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_editorDestroyedCallback(const_cast<void *>(thisPtr), editor);
  } else {
    // tag=1002
    ::QAbstractItemView::editorDestroyed(editor);
  }
}
// tag=1009
void QAbstractItemView_wrapper::editorDestroyed_nocallback(QObject *editor) {
  // tag=1003
  ::QAbstractItemView::editorDestroyed(editor);
}
void QAbstractItemView_wrapper::entered(const QModelIndex &index) {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::entered(index);
}
bool QAbstractItemView_wrapper::event(QEvent *event) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    return ::QAbstractItemView::event(event);
  }
}
// tag=1009
bool QAbstractItemView_wrapper::event_nocallback(QEvent *event) {
  // tag=1003
  return ::QAbstractItemView::event(event);
}
bool QAbstractItemView_wrapper::eventFilter(QObject *object, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), object, event);
  } else {
    // tag=1002
    return ::QAbstractItemView::eventFilter(object, event);
  }
}
// tag=1009
bool QAbstractItemView_wrapper::eventFilter_nocallback(QObject *object,
                                                       QEvent *event) {
  // tag=1003
  return ::QAbstractItemView::eventFilter(object, event);
}
void QAbstractItemView_wrapper::executeDelayedItemsLayout() {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::executeDelayedItemsLayout();
}
bool QAbstractItemView_wrapper::focusNextPrevChild(bool next) {
  // tag=1000
  if (m_focusNextPrevChildCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    // tag=1002
    return ::QAbstractItemView::focusNextPrevChild(next);
  }
}
// tag=1009
bool QAbstractItemView_wrapper::focusNextPrevChild_nocallback(bool next) {
  // tag=1003
  return ::QAbstractItemView::focusNextPrevChild(next);
}
bool QAbstractItemView_wrapper::hasAutoScroll() const {
  // tag=1000

  // tag=1004
  return ::QAbstractItemView::hasAutoScroll();
}
bool QAbstractItemView_wrapper::hasHeightForWidth() const {
  // tag=1000
  if (m_hasHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QAbstractItemView::hasHeightForWidth();
  }
}
// tag=1009
bool QAbstractItemView_wrapper::hasHeightForWidth_nocallback() const {
  // tag=1003
  return ::QAbstractItemView::hasHeightForWidth();
}
int QAbstractItemView_wrapper::heightForWidth(int arg__1) const {
  // tag=1000
  if (m_heightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QAbstractItemView::heightForWidth(arg__1);
  }
}
// tag=1009
int QAbstractItemView_wrapper::heightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QAbstractItemView::heightForWidth(arg__1);
}
int QAbstractItemView_wrapper::horizontalOffset() const {
  // tag=1000
  if (m_horizontalOffsetCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_horizontalOffsetCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
int QAbstractItemView_wrapper::horizontalOffset_nocallback() const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
void QAbstractItemView_wrapper::horizontalScrollbarAction(int action) {
  // tag=1000
  if (m_horizontalScrollbarActionCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_horizontalScrollbarActionCallback(const_cast<void *>(thisPtr), action);
  } else {
    // tag=1002
    ::QAbstractItemView::horizontalScrollbarAction(action);
  }
}
// tag=1009
void QAbstractItemView_wrapper::horizontalScrollbarAction_nocallback(
    int action) {
  // tag=1003
  ::QAbstractItemView::horizontalScrollbarAction(action);
}
void QAbstractItemView_wrapper::horizontalScrollbarValueChanged(int value) {
  // tag=1000
  if (m_horizontalScrollbarValueChangedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_horizontalScrollbarValueChangedCallback(const_cast<void *>(thisPtr),
                                              value);
  } else {
    // tag=1002
    ::QAbstractItemView::horizontalScrollbarValueChanged(value);
  }
}
// tag=1009
void QAbstractItemView_wrapper::horizontalScrollbarValueChanged_nocallback(
    int value) {
  // tag=1003
  ::QAbstractItemView::horizontalScrollbarValueChanged(value);
}
QSize QAbstractItemView_wrapper::iconSize() const {
  // tag=1000

  // tag=1004
  return ::QAbstractItemView::iconSize();
}
void QAbstractItemView_wrapper::iconSizeChanged(const QSize &size) {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::iconSizeChanged(size);
}
QModelIndex QAbstractItemView_wrapper::indexAt(const QPoint &point) const {
  // tag=1000
  if (m_indexAtCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_indexAtCallback(const_cast<void *>(thisPtr), point);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
QModelIndex
QAbstractItemView_wrapper::indexAt_nocallback(const QPoint &point) const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
QWidget *
QAbstractItemView_wrapper::indexWidget(const QModelIndex &index) const {
  // tag=1000

  // tag=1004
  return ::QAbstractItemView::indexWidget(index);
}
void QAbstractItemView_wrapper::initPainter(QPainter *painter) const {
  // tag=1000
  if (m_initPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    // tag=1002
    ::QAbstractItemView::initPainter(painter);
  }
}
// tag=1009
void QAbstractItemView_wrapper::initPainter_nocallback(
    QPainter *painter) const {
  // tag=1003
  ::QAbstractItemView::initPainter(painter);
}
bool QAbstractItemView_wrapper::isIndexHidden(const QModelIndex &index) const {
  // tag=1000
  if (m_isIndexHiddenCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_isIndexHiddenCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
bool QAbstractItemView_wrapper::isIndexHidden_nocallback(
    const QModelIndex &index) const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
bool QAbstractItemView_wrapper::isPersistentEditorOpen(
    const QModelIndex &index) const {
  // tag=1000

  // tag=1004
  return ::QAbstractItemView::isPersistentEditorOpen(index);
}
void QAbstractItemView_wrapper::keyboardSearch(const QString &search) {
  // tag=1000
  if (m_keyboardSearchCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_keyboardSearchCallback(const_cast<void *>(thisPtr), search);
  } else {
    // tag=1002
    ::QAbstractItemView::keyboardSearch(search);
  }
}
// tag=1009
void QAbstractItemView_wrapper::keyboardSearch_nocallback(
    const QString &search) {
  // tag=1003
  ::QAbstractItemView::keyboardSearch(search);
}
void QAbstractItemView_wrapper::leaveEvent(QEvent *event) {
  // tag=1000
  if (m_leaveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QAbstractItemView::leaveEvent(event);
  }
}
// tag=1009
void QAbstractItemView_wrapper::leaveEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QAbstractItemView::leaveEvent(event);
}
QSize QAbstractItemView_wrapper::minimumSizeHint() const {
  // tag=1000
  if (m_minimumSizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QAbstractItemView::minimumSizeHint();
  }
}
// tag=1009
QSize QAbstractItemView_wrapper::minimumSizeHint_nocallback() const {
  // tag=1003
  return ::QAbstractItemView::minimumSizeHint();
}
QAbstractItemModel *QAbstractItemView_wrapper::model() const {
  // tag=1000

  // tag=1004
  return ::QAbstractItemView::model();
}
void QAbstractItemView_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseDoubleClickEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QAbstractItemView::mouseDoubleClickEvent(event);
  }
}
// tag=1009
void QAbstractItemView_wrapper::mouseDoubleClickEvent_nocallback(
    QMouseEvent *event) {
  // tag=1003
  ::QAbstractItemView::mouseDoubleClickEvent(event);
}
void QAbstractItemView_wrapper::mouseMoveEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseMoveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QAbstractItemView::mouseMoveEvent(event);
  }
}
// tag=1009
void QAbstractItemView_wrapper::mouseMoveEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QAbstractItemView::mouseMoveEvent(event);
}
void QAbstractItemView_wrapper::mousePressEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mousePressEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QAbstractItemView::mousePressEvent(event);
  }
}
// tag=1009
void QAbstractItemView_wrapper::mousePressEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QAbstractItemView::mousePressEvent(event);
}
void QAbstractItemView_wrapper::mouseReleaseEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseReleaseEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QAbstractItemView::mouseReleaseEvent(event);
  }
}
// tag=1009
void QAbstractItemView_wrapper::mouseReleaseEvent_nocallback(
    QMouseEvent *event) {
  // tag=1003
  ::QAbstractItemView::mouseReleaseEvent(event);
}
QModelIndex QAbstractItemView_wrapper::moveCursor(
    QAbstractItemView::CursorAction cursorAction,
    QFlags<Qt::KeyboardModifier> modifiers) {
  // tag=1000
  if (m_moveCursorCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_moveCursorCallback(const_cast<void *>(thisPtr), cursorAction,
                                 modifiers);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
QModelIndex QAbstractItemView_wrapper::moveCursor_nocallback(
    QAbstractItemView::CursorAction cursorAction,
    QFlags<Qt::KeyboardModifier> modifiers) {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
void QAbstractItemView_wrapper::openPersistentEditor(const QModelIndex &index) {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::openPersistentEditor(index);
}
void QAbstractItemView_wrapper::paintEvent(QPaintEvent *arg__1) {
  // tag=1000
  if (m_paintEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QAbstractItemView::paintEvent(arg__1);
  }
}
// tag=1009
void QAbstractItemView_wrapper::paintEvent_nocallback(QPaintEvent *arg__1) {
  // tag=1003
  ::QAbstractItemView::paintEvent(arg__1);
}
void QAbstractItemView_wrapper::pressed(const QModelIndex &index) {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::pressed(index);
}
void QAbstractItemView_wrapper::reset() {
  // tag=1000
  if (m_resetCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_resetCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QAbstractItemView::reset();
  }
}
// tag=1009
void QAbstractItemView_wrapper::reset_nocallback() {
  // tag=1003
  ::QAbstractItemView::reset();
}
void QAbstractItemView_wrapper::resetHorizontalScrollMode() {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::resetHorizontalScrollMode();
}
void QAbstractItemView_wrapper::resetVerticalScrollMode() {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::resetVerticalScrollMode();
}
QModelIndex QAbstractItemView_wrapper::rootIndex() const {
  // tag=1000

  // tag=1004
  return ::QAbstractItemView::rootIndex();
}
void QAbstractItemView_wrapper::rowsAboutToBeRemoved(const QModelIndex &parent,
                                                     int start, int end) {
  // tag=1000
  if (m_rowsAboutToBeRemovedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_rowsAboutToBeRemovedCallback(const_cast<void *>(thisPtr), parent, start,
                                   end);
  } else {
    // tag=1002
    ::QAbstractItemView::rowsAboutToBeRemoved(parent, start, end);
  }
}
// tag=1009
void QAbstractItemView_wrapper::rowsAboutToBeRemoved_nocallback(
    const QModelIndex &parent, int start, int end) {
  // tag=1003
  ::QAbstractItemView::rowsAboutToBeRemoved(parent, start, end);
}
void QAbstractItemView_wrapper::rowsInserted(const QModelIndex &parent,
                                             int start, int end) {
  // tag=1000
  if (m_rowsInsertedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_rowsInsertedCallback(const_cast<void *>(thisPtr), parent, start, end);
  } else {
    // tag=1002
    ::QAbstractItemView::rowsInserted(parent, start, end);
  }
}
// tag=1009
void QAbstractItemView_wrapper::rowsInserted_nocallback(
    const QModelIndex &parent, int start, int end) {
  // tag=1003
  ::QAbstractItemView::rowsInserted(parent, start, end);
}
void QAbstractItemView_wrapper::scheduleDelayedItemsLayout() {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::scheduleDelayedItemsLayout();
}
void QAbstractItemView_wrapper::scrollContentsBy(int dx, int dy) {
  // tag=1000
  if (m_scrollContentsByCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_scrollContentsByCallback(const_cast<void *>(thisPtr), dx, dy);
  } else {
    // tag=1002
    ::QAbstractItemView::scrollContentsBy(dx, dy);
  }
}
// tag=1009
void QAbstractItemView_wrapper::scrollContentsBy_nocallback(int dx, int dy) {
  // tag=1003
  ::QAbstractItemView::scrollContentsBy(dx, dy);
}
void QAbstractItemView_wrapper::scrollDirtyRegion(int dx, int dy) {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::scrollDirtyRegion(dx, dy);
}
void QAbstractItemView_wrapper::scrollTo(const QModelIndex &index,
                                         QAbstractItemView::ScrollHint hint) {
  // tag=1000
  if (m_scrollToCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_scrollToCallback(const_cast<void *>(thisPtr), index, hint);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return;
  }
}
// tag=1009
void QAbstractItemView_wrapper::scrollTo_nocallback(
    const QModelIndex &index, QAbstractItemView::ScrollHint hint) {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return;
}
void QAbstractItemView_wrapper::scrollToBottom() {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::scrollToBottom();
}
void QAbstractItemView_wrapper::scrollToTop() {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::scrollToTop();
}
void QAbstractItemView_wrapper::selectAll() {
  // tag=1000
  if (m_selectAllCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_selectAllCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QAbstractItemView::selectAll();
  }
}
// tag=1009
void QAbstractItemView_wrapper::selectAll_nocallback() {
  // tag=1003
  ::QAbstractItemView::selectAll();
}
QList<QModelIndex> QAbstractItemView_wrapper::selectedIndexes() const {
  // tag=1000
  if (m_selectedIndexesCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_selectedIndexesCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QAbstractItemView::selectedIndexes();
  }
}
// tag=1009
QList<QModelIndex>
QAbstractItemView_wrapper::selectedIndexes_nocallback() const {
  // tag=1003
  return ::QAbstractItemView::selectedIndexes();
}
void QAbstractItemView_wrapper::selectionChanged(
    const QItemSelection &selected, const QItemSelection &deselected) {
  // tag=1000
  if (m_selectionChangedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_selectionChangedCallback(const_cast<void *>(thisPtr), selected,
                               deselected);
  } else {
    // tag=1002
    ::QAbstractItemView::selectionChanged(selected, deselected);
  }
}
// tag=1009
void QAbstractItemView_wrapper::selectionChanged_nocallback(
    const QItemSelection &selected, const QItemSelection &deselected) {
  // tag=1003
  ::QAbstractItemView::selectionChanged(selected, deselected);
}
QFlags<QItemSelectionModel::SelectionFlag>
QAbstractItemView_wrapper::selectionCommand(const QModelIndex &index,
                                            const QEvent *event) const {
  // tag=1000
  if (m_selectionCommandCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_selectionCommandCallback(const_cast<void *>(thisPtr), index,
                                      event);
  } else {
    // tag=1002
    return ::QAbstractItemView::selectionCommand(index, event);
  }
}
// tag=1009
QFlags<QItemSelectionModel::SelectionFlag>
QAbstractItemView_wrapper::selectionCommand_nocallback(
    const QModelIndex &index, const QEvent *event) const {
  // tag=1003
  return ::QAbstractItemView::selectionCommand(index, event);
}
QItemSelectionModel *QAbstractItemView_wrapper::selectionModel() const {
  // tag=1000

  // tag=1004
  return ::QAbstractItemView::selectionModel();
}
void QAbstractItemView_wrapper::setAlternatingRowColors(bool enable) {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::setAlternatingRowColors(enable);
}
void QAbstractItemView_wrapper::setAutoScroll(bool enable) {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::setAutoScroll(enable);
}
void QAbstractItemView_wrapper::setAutoScrollMargin(int margin) {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::setAutoScrollMargin(margin);
}
void QAbstractItemView_wrapper::setCurrentIndex(const QModelIndex &index) {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::setCurrentIndex(index);
}
void QAbstractItemView_wrapper::setDirtyRegion(const QRegion &region) {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::setDirtyRegion(region);
}
void QAbstractItemView_wrapper::setDragDropOverwriteMode(bool overwrite) {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::setDragDropOverwriteMode(overwrite);
}
void QAbstractItemView_wrapper::setDragEnabled(bool enable) {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::setDragEnabled(enable);
}
void QAbstractItemView_wrapper::setDropIndicatorShown(bool enable) {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::setDropIndicatorShown(enable);
}
void QAbstractItemView_wrapper::setIconSize(const QSize &size) {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::setIconSize(size);
}
void QAbstractItemView_wrapper::setIndexWidget(const QModelIndex &index,
                                               QWidget *widget) {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::setIndexWidget(index, widget);
}
void QAbstractItemView_wrapper::setModel(QAbstractItemModel *model) {
  // tag=1000
  if (m_setModelCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setModelCallback(const_cast<void *>(thisPtr), model);
  } else {
    // tag=1002
    ::QAbstractItemView::setModel(model);
  }
}
// tag=1009
void QAbstractItemView_wrapper::setModel_nocallback(QAbstractItemModel *model) {
  // tag=1003
  ::QAbstractItemView::setModel(model);
}
void QAbstractItemView_wrapper::setRootIndex(const QModelIndex &index) {
  // tag=1000
  if (m_setRootIndexCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setRootIndexCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1002
    ::QAbstractItemView::setRootIndex(index);
  }
}
// tag=1009
void QAbstractItemView_wrapper::setRootIndex_nocallback(
    const QModelIndex &index) {
  // tag=1003
  ::QAbstractItemView::setRootIndex(index);
}
void QAbstractItemView_wrapper::setSelection(
    const QRect &rect, QFlags<QItemSelectionModel::SelectionFlag> command) {
  // tag=1000
  if (m_setSelectionCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setSelectionCallback(const_cast<void *>(thisPtr), rect, command);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return;
  }
}
// tag=1009
void QAbstractItemView_wrapper::setSelection_nocallback(
    const QRect &rect, QFlags<QItemSelectionModel::SelectionFlag> command) {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return;
}
void QAbstractItemView_wrapper::setSelectionModel(
    QItemSelectionModel *selectionModel) {
  // tag=1000
  if (m_setSelectionModelCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setSelectionModelCallback(const_cast<void *>(thisPtr), selectionModel);
  } else {
    // tag=1002
    ::QAbstractItemView::setSelectionModel(selectionModel);
  }
}
// tag=1009
void QAbstractItemView_wrapper::setSelectionModel_nocallback(
    QItemSelectionModel *selectionModel) {
  // tag=1003
  ::QAbstractItemView::setSelectionModel(selectionModel);
}
void QAbstractItemView_wrapper::setTabKeyNavigation(bool enable) {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::setTabKeyNavigation(enable);
}
void QAbstractItemView_wrapper::setVisible(bool visible) {
  // tag=1000
  if (m_setVisibleCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    // tag=1002
    ::QAbstractItemView::setVisible(visible);
  }
}
// tag=1009
void QAbstractItemView_wrapper::setVisible_nocallback(bool visible) {
  // tag=1003
  ::QAbstractItemView::setVisible(visible);
}
void QAbstractItemView_wrapper::setupViewport(QWidget *viewport) {
  // tag=1000
  if (m_setupViewportCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setupViewportCallback(const_cast<void *>(thisPtr), viewport);
  } else {
    // tag=1002
    ::QAbstractItemView::setupViewport(viewport);
  }
}
// tag=1009
void QAbstractItemView_wrapper::setupViewport_nocallback(QWidget *viewport) {
  // tag=1003
  ::QAbstractItemView::setupViewport(viewport);
}
QPainter *QAbstractItemView_wrapper::sharedPainter() const {
  // tag=1000
  if (m_sharedPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QAbstractItemView::sharedPainter();
  }
}
// tag=1009
QPainter *QAbstractItemView_wrapper::sharedPainter_nocallback() const {
  // tag=1003
  return ::QAbstractItemView::sharedPainter();
}
bool QAbstractItemView_wrapper::showDropIndicator() const {
  // tag=1000

  // tag=1004
  return ::QAbstractItemView::showDropIndicator();
}
QSize QAbstractItemView_wrapper::sizeHint() const {
  // tag=1000
  if (m_sizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QAbstractItemView::sizeHint();
  }
}
// tag=1009
QSize QAbstractItemView_wrapper::sizeHint_nocallback() const {
  // tag=1003
  return ::QAbstractItemView::sizeHint();
}
int QAbstractItemView_wrapper::sizeHintForColumn(int column) const {
  // tag=1000
  if (m_sizeHintForColumnCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_sizeHintForColumnCallback(const_cast<void *>(thisPtr), column);
  } else {
    // tag=1002
    return ::QAbstractItemView::sizeHintForColumn(column);
  }
}
// tag=1009
int QAbstractItemView_wrapper::sizeHintForColumn_nocallback(int column) const {
  // tag=1003
  return ::QAbstractItemView::sizeHintForColumn(column);
}
QSize QAbstractItemView_wrapper::sizeHintForIndex(
    const QModelIndex &index) const {
  // tag=1000

  // tag=1004
  return ::QAbstractItemView::sizeHintForIndex(index);
}
int QAbstractItemView_wrapper::sizeHintForRow(int row) const {
  // tag=1000
  if (m_sizeHintForRowCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_sizeHintForRowCallback(const_cast<void *>(thisPtr), row);
  } else {
    // tag=1002
    return ::QAbstractItemView::sizeHintForRow(row);
  }
}
// tag=1009
int QAbstractItemView_wrapper::sizeHintForRow_nocallback(int row) const {
  // tag=1003
  return ::QAbstractItemView::sizeHintForRow(row);
}
void QAbstractItemView_wrapper::startAutoScroll() {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::startAutoScroll();
}
void QAbstractItemView_wrapper::stopAutoScroll() {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::stopAutoScroll();
}
bool QAbstractItemView_wrapper::tabKeyNavigation() const {
  // tag=1000

  // tag=1004
  return ::QAbstractItemView::tabKeyNavigation();
}
QString QAbstractItemView_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QAbstractItemView::tr(s, c, n);
}
void QAbstractItemView_wrapper::update(const QModelIndex &index) {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::update(index);
}
void QAbstractItemView_wrapper::updateEditorData() {
  // tag=1000
  if (m_updateEditorDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_updateEditorDataCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QAbstractItemView::updateEditorData();
  }
}
// tag=1009
void QAbstractItemView_wrapper::updateEditorData_nocallback() {
  // tag=1003
  ::QAbstractItemView::updateEditorData();
}
void QAbstractItemView_wrapper::updateEditorGeometries() {
  // tag=1000
  if (m_updateEditorGeometriesCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_updateEditorGeometriesCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QAbstractItemView::updateEditorGeometries();
  }
}
// tag=1009
void QAbstractItemView_wrapper::updateEditorGeometries_nocallback() {
  // tag=1003
  ::QAbstractItemView::updateEditorGeometries();
}
void QAbstractItemView_wrapper::updateGeometries() {
  // tag=1000
  if (m_updateGeometriesCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_updateGeometriesCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QAbstractItemView::updateGeometries();
  }
}
// tag=1009
void QAbstractItemView_wrapper::updateGeometries_nocallback() {
  // tag=1003
  ::QAbstractItemView::updateGeometries();
}
int QAbstractItemView_wrapper::verticalOffset() const {
  // tag=1000
  if (m_verticalOffsetCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_verticalOffsetCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
int QAbstractItemView_wrapper::verticalOffset_nocallback() const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
void QAbstractItemView_wrapper::verticalScrollbarAction(int action) {
  // tag=1000
  if (m_verticalScrollbarActionCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_verticalScrollbarActionCallback(const_cast<void *>(thisPtr), action);
  } else {
    // tag=1002
    ::QAbstractItemView::verticalScrollbarAction(action);
  }
}
// tag=1009
void QAbstractItemView_wrapper::verticalScrollbarAction_nocallback(int action) {
  // tag=1003
  ::QAbstractItemView::verticalScrollbarAction(action);
}
void QAbstractItemView_wrapper::verticalScrollbarValueChanged(int value) {
  // tag=1000
  if (m_verticalScrollbarValueChangedCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_verticalScrollbarValueChangedCallback(const_cast<void *>(thisPtr), value);
  } else {
    // tag=1002
    ::QAbstractItemView::verticalScrollbarValueChanged(value);
  }
}
// tag=1009
void QAbstractItemView_wrapper::verticalScrollbarValueChanged_nocallback(
    int value) {
  // tag=1003
  ::QAbstractItemView::verticalScrollbarValueChanged(value);
}
void QAbstractItemView_wrapper::viewportEntered() {
  // tag=1000

  // tag=1004
  ::QAbstractItemView::viewportEntered();
}
bool QAbstractItemView_wrapper::viewportEvent(QEvent *event) {
  // tag=1000
  if (m_viewportEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_viewportEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    return ::QAbstractItemView::viewportEvent(event);
  }
}
// tag=1009
bool QAbstractItemView_wrapper::viewportEvent_nocallback(QEvent *event) {
  // tag=1003
  return ::QAbstractItemView::viewportEvent(event);
}
QSize QAbstractItemView_wrapper::viewportSizeHint() const {
  // tag=1000
  if (m_viewportSizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_viewportSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QAbstractItemView::viewportSizeHint();
  }
}
// tag=1009
QSize QAbstractItemView_wrapper::viewportSizeHint_nocallback() const {
  // tag=1003
  return ::QAbstractItemView::viewportSizeHint();
}
QRect QAbstractItemView_wrapper::visualRect(const QModelIndex &index) const {
  // tag=1000
  if (m_visualRectCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_visualRectCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
QRect QAbstractItemView_wrapper::visualRect_nocallback(
    const QModelIndex &index) const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
QRegion QAbstractItemView_wrapper::visualRegionForSelection(
    const QItemSelection &selection) const {
  // tag=1000
  if (m_visualRegionForSelectionCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_visualRegionForSelectionCallback(const_cast<void *>(thisPtr),
                                               selection);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
QRegion QAbstractItemView_wrapper::visualRegionForSelection_nocallback(
    const QItemSelection &selection) const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}

// tag=1005
QAbstractItemView_wrapper::~QAbstractItemView_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QAbstractItemView *fromPtr(void *ptr) {
  return reinterpret_cast<QAbstractItemView *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QAbstractItemView_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<
      QtDartBindings_wrappersNS::QAbstractItemView_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QAbstractItemView_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QAbstractItemView_wrapper *>(cppObj);
}
void *c_QAbstractItemView__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QAbstractItemView_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// activated(const QModelIndex & index)
void c_QAbstractItemView__activated_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  // tag=1010
  fromPtr(thisObj)->activated(index);
}

// tag=1079
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

// tag=1050
// alternatingRowColors() const
bool c_QAbstractItemView__alternatingRowColors(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->alternatingRowColors();
}

// tag=1050
// autoScrollMargin() const
int c_QAbstractItemView__autoScrollMargin(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->autoScrollMargin();
}

// tag=1050
// changeEvent(QEvent * arg__1)
void c_QAbstractItemView__changeEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->changeEvent_nocallback(arg__1);
}

// tag=1050
// clearSelection()
void c_QAbstractItemView__clearSelection(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->clearSelection();
}

// tag=1050
// clicked(const QModelIndex & index)
void c_QAbstractItemView__clicked_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  // tag=1010
  fromPtr(thisObj)->clicked(index);
}

// tag=1079
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

// tag=1050
// closePersistentEditor(const QModelIndex & index)
void c_QAbstractItemView__closePersistentEditor_QModelIndex(void *thisObj,
                                                            void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  // tag=1010
  fromPtr(thisObj)->closePersistentEditor(index);
}

// tag=1050
// commitData(QWidget * editor)
void c_QAbstractItemView__commitData_QWidget(void *thisObj, void *editor_) {
  auto editor = reinterpret_cast<QWidget *>(editor_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->commitData_nocallback(editor);
}

// tag=1050
// currentChanged(const QModelIndex & current, const QModelIndex & previous)
void c_QAbstractItemView__currentChanged_QModelIndex_QModelIndex(
    void *thisObj, void *current_, void *previous_) {
  auto &current = *reinterpret_cast<QModelIndex *>(current_);
  auto &previous = *reinterpret_cast<QModelIndex *>(previous_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->currentChanged_nocallback(current, previous);
}

// tag=1050
// currentIndex() const
void *c_QAbstractItemView__currentIndex(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{
          fromPtr(thisObj)->currentIndex()};
}

// tag=1050
// customEvent(QEvent * event)
void c_QAbstractItemView__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// dataChanged(const QModelIndex & topLeft, const QModelIndex & bottomRight,
// const QList<int > & roles)
void c_QAbstractItemView__dataChanged_QModelIndex_QModelIndex_QList_int(
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
int c_QAbstractItemView__devType(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractItemView_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->devType_nocallback();
        } else {
          return targetPtr->devType();
        }
      }();
}

// tag=1050
// dirtyRegionOffset() const
void *c_QAbstractItemView__dirtyRegionOffset(void *thisObj) {
  return
      // tag=1011

      // tag=1073

      // tag=1072
      new Dartagnan::ValueWrapper<QPoint>{
          fromWrapperPtr(thisObj)->dirtyRegionOffset()};
}

// tag=1050
// doAutoScroll()
void c_QAbstractItemView__doAutoScroll(void *thisObj) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->doAutoScroll();
}

// tag=1050
// doItemsLayout()
void c_QAbstractItemView__doItemsLayout(void *thisObj) {
  // tag=1016
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

// tag=1050
// doubleClicked(const QModelIndex & index)
void c_QAbstractItemView__doubleClicked_QModelIndex(void *thisObj,
                                                    void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  // tag=1010
  fromPtr(thisObj)->doubleClicked(index);
}

// tag=1079
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

// tag=1050
// dragDropOverwriteMode() const
bool c_QAbstractItemView__dragDropOverwriteMode(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->dragDropOverwriteMode();
}

// tag=1050
// dragEnabled() const
bool c_QAbstractItemView__dragEnabled(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->dragEnabled();
}

// tag=1050
// edit(const QModelIndex & index)
void c_QAbstractItemView__edit_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  // tag=1010
  fromPtr(thisObj)->edit(index);
}

// tag=1050
// editorDestroyed(QObject * editor)
void c_QAbstractItemView__editorDestroyed_QObject(void *thisObj,
                                                  void *editor_) {
  auto editor = reinterpret_cast<QObject *>(editor_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->editorDestroyed_nocallback(editor);
}

// tag=1050
// entered(const QModelIndex & index)
void c_QAbstractItemView__entered_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  // tag=1010
  fromPtr(thisObj)->entered(index);
}

// tag=1079
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

// tag=1050
// event(QEvent * event)
bool c_QAbstractItemView__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->event_nocallback(event);
}

// tag=1050
// eventFilter(QObject * object, QEvent * event)
bool c_QAbstractItemView__eventFilter_QObject_QEvent(void *thisObj,
                                                     void *object_,
                                                     void *event_) {
  auto object = reinterpret_cast<QObject *>(object_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->eventFilter_nocallback(object, event);
}

// tag=1050
// executeDelayedItemsLayout()
void c_QAbstractItemView__executeDelayedItemsLayout(void *thisObj) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->executeDelayedItemsLayout();
}

// tag=1050
// focusNextPrevChild(bool next)
bool c_QAbstractItemView__focusNextPrevChild_bool(void *thisObj, bool next) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
}

// tag=1050
// hasAutoScroll() const
bool c_QAbstractItemView__hasAutoScroll(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->hasAutoScroll();
}

// tag=1050
// hasHeightForWidth() const
bool c_QAbstractItemView__hasHeightForWidth(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractItemView_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->hasHeightForWidth_nocallback();
        } else {
          return targetPtr->hasHeightForWidth();
        }
      }();
}

// tag=1050
// heightForWidth(int arg__1) const
int c_QAbstractItemView__heightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractItemView_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->heightForWidth_nocallback(arg__1);
        } else {
          return targetPtr->heightForWidth(arg__1);
        }
      }();
}

// tag=1050
// horizontalOffset() const
int c_QAbstractItemView__horizontalOffset(void *thisObj) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->horizontalOffset_nocallback();
}

// tag=1050
// horizontalScrollbarAction(int action)
void c_QAbstractItemView__horizontalScrollbarAction_int(void *thisObj,
                                                        int action) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->horizontalScrollbarAction_nocallback(action);
}

// tag=1050
// horizontalScrollbarValueChanged(int value)
void c_QAbstractItemView__horizontalScrollbarValueChanged_int(void *thisObj,
                                                              int value) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->horizontalScrollbarValueChanged_nocallback(value);
}

// tag=1050
// iconSize() const
void *c_QAbstractItemView__iconSize(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->iconSize()};
}

// tag=1050
// iconSizeChanged(const QSize & size)
void c_QAbstractItemView__iconSizeChanged_QSize(void *thisObj, void *size_) {
  auto &size = *reinterpret_cast<QSize *>(size_);
  // tag=1010
  fromPtr(thisObj)->iconSizeChanged(size);
}

// tag=1079
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

// tag=1050
// indexAt(const QPoint & point) const
void *c_QAbstractItemView__indexAt_QPoint(void *thisObj, void *point_) {
  auto &point = *reinterpret_cast<QPoint *>(point_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractItemView_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->indexAt_nocallback(point);
        } else {
          return targetPtr->indexAt(point);
        }
      }()};
}

// tag=1050
// indexWidget(const QModelIndex & index) const
void *c_QAbstractItemView__indexWidget_QModelIndex(void *thisObj,
                                                   void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1010
      fromPtr(thisObj)->indexWidget(index);
}

// tag=1050
// initPainter(QPainter * painter) const
void c_QAbstractItemView__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}

// tag=1050
// isIndexHidden(const QModelIndex & index) const
bool c_QAbstractItemView__isIndexHidden_QModelIndex(void *thisObj,
                                                    void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->isIndexHidden_nocallback(index);
}

// tag=1050
// isPersistentEditorOpen(const QModelIndex & index) const
bool c_QAbstractItemView__isPersistentEditorOpen_QModelIndex(void *thisObj,
                                                             void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1010
      fromPtr(thisObj)->isPersistentEditorOpen(index);
}

// tag=1050
// keyboardSearch(const QString & search)
void c_QAbstractItemView__keyboardSearch_QString(void *thisObj,
                                                 const char *search_) {
  const auto search = QString::fromUtf8(search_);
  // tag=1016
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
}

// tag=1050
// leaveEvent(QEvent * event)
void c_QAbstractItemView__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}

// tag=1050
// minimumSizeHint() const
void *c_QAbstractItemView__minimumSizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractItemView_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->minimumSizeHint_nocallback();
        } else {
          return targetPtr->minimumSizeHint();
        }
      }()};
}

// tag=1050
// model() const
void *c_QAbstractItemView__model(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->model();
}

// tag=1050
// mouseDoubleClickEvent(QMouseEvent * event)
void c_QAbstractItemView__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                            void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}

// tag=1050
// mouseMoveEvent(QMouseEvent * event)
void c_QAbstractItemView__mouseMoveEvent_QMouseEvent(void *thisObj,
                                                     void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(event);
}

// tag=1050
// mousePressEvent(QMouseEvent * event)
void c_QAbstractItemView__mousePressEvent_QMouseEvent(void *thisObj,
                                                      void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(event);
}

// tag=1050
// mouseReleaseEvent(QMouseEvent * event)
void c_QAbstractItemView__mouseReleaseEvent_QMouseEvent(void *thisObj,
                                                        void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(event);
}

// tag=1050
// moveCursor(QAbstractItemView::CursorAction cursorAction,
// QFlags<Qt::KeyboardModifier> modifiers)
void *c_QAbstractItemView__moveCursor_CursorAction_KeyboardModifiers(
    void *thisObj, int cursorAction, int modifiers_) {
  auto modifiers = static_cast<QFlags<Qt::KeyboardModifier>>(modifiers_);
  return
      // tag=1011

      // tag=1074

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{
          fromWrapperPtr(thisObj)->moveCursor_nocallback(
              static_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                              CursorAction>(cursorAction),
              modifiers)};
}

// tag=1050
// openPersistentEditor(const QModelIndex & index)
void c_QAbstractItemView__openPersistentEditor_QModelIndex(void *thisObj,
                                                           void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  // tag=1010
  fromPtr(thisObj)->openPersistentEditor(index);
}

// tag=1050
// paintEvent(QPaintEvent * arg__1)
void c_QAbstractItemView__paintEvent_QPaintEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QPaintEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->paintEvent_nocallback(arg__1);
}

// tag=1050
// pressed(const QModelIndex & index)
void c_QAbstractItemView__pressed_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  // tag=1010
  fromPtr(thisObj)->pressed(index);
}

// tag=1079
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

// tag=1050
// reset()
void c_QAbstractItemView__reset(void *thisObj) {
  // tag=1016
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

// tag=1050
// resetHorizontalScrollMode()
void c_QAbstractItemView__resetHorizontalScrollMode(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->resetHorizontalScrollMode();
}

// tag=1050
// resetVerticalScrollMode()
void c_QAbstractItemView__resetVerticalScrollMode(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->resetVerticalScrollMode();
}

// tag=1050
// rootIndex() const
void *c_QAbstractItemView__rootIndex(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{fromPtr(thisObj)->rootIndex()};
}

// tag=1050
// rowsAboutToBeRemoved(const QModelIndex & parent, int start, int end)
void c_QAbstractItemView__rowsAboutToBeRemoved_QModelIndex_int_int(
    void *thisObj, void *parent_, int start, int end) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->rowsAboutToBeRemoved_nocallback(parent, start, end);
}

// tag=1050
// rowsInserted(const QModelIndex & parent, int start, int end)
void c_QAbstractItemView__rowsInserted_QModelIndex_int_int(void *thisObj,
                                                           void *parent_,
                                                           int start, int end) {
  auto &parent = *reinterpret_cast<QModelIndex *>(parent_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->rowsInserted_nocallback(parent, start, end);
}

// tag=1050
// scheduleDelayedItemsLayout()
void c_QAbstractItemView__scheduleDelayedItemsLayout(void *thisObj) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->scheduleDelayedItemsLayout();
}

// tag=1050
// scrollContentsBy(int dx, int dy)
void c_QAbstractItemView__scrollContentsBy_int_int(void *thisObj, int dx,
                                                   int dy) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->scrollContentsBy_nocallback(dx, dy);
}

// tag=1050
// scrollDirtyRegion(int dx, int dy)
void c_QAbstractItemView__scrollDirtyRegion_int_int(void *thisObj, int dx,
                                                    int dy) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->scrollDirtyRegion(dx, dy);
}

// tag=1050
// scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint hint)
void c_QAbstractItemView__scrollTo_QModelIndex_ScrollHint(void *thisObj,
                                                          void *index_,
                                                          int hint) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  // tag=1016
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

// tag=1050
// scrollToBottom()
void c_QAbstractItemView__scrollToBottom(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->scrollToBottom();
}

// tag=1050
// scrollToTop()
void c_QAbstractItemView__scrollToTop(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->scrollToTop();
}

// tag=1050
// selectAll()
void c_QAbstractItemView__selectAll(void *thisObj) {
  // tag=1016
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

// tag=1050
// selectedIndexes() const
void *c_QAbstractItemView__selectedIndexes(void *thisObj) {
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
void c_QAbstractItemView__selectionChanged_QItemSelection_QItemSelection(
    void *thisObj, void *selected_, void *deselected_) {
  auto &selected = *reinterpret_cast<QItemSelection *>(selected_);
  auto &deselected = *reinterpret_cast<QItemSelection *>(deselected_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->selectionChanged_nocallback(selected, deselected);
}

// tag=1050
// selectionCommand(const QModelIndex & index, const QEvent * event) const
int c_QAbstractItemView__selectionCommand_QModelIndex_QEvent(void *thisObj,
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
// selectionModel() const
void *c_QAbstractItemView__selectionModel(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->selectionModel();
}

// tag=1050
// setAlternatingRowColors(bool enable)
void c_QAbstractItemView__setAlternatingRowColors_bool(void *thisObj,
                                                       bool enable) {
  // tag=1010
  fromPtr(thisObj)->setAlternatingRowColors(enable);
}

// tag=1050
// setAutoScroll(bool enable)
void c_QAbstractItemView__setAutoScroll_bool(void *thisObj, bool enable) {
  // tag=1010
  fromPtr(thisObj)->setAutoScroll(enable);
}

// tag=1050
// setAutoScrollMargin(int margin)
void c_QAbstractItemView__setAutoScrollMargin_int(void *thisObj, int margin) {
  // tag=1010
  fromPtr(thisObj)->setAutoScrollMargin(margin);
}

// tag=1050
// setCurrentIndex(const QModelIndex & index)
void c_QAbstractItemView__setCurrentIndex_QModelIndex(void *thisObj,
                                                      void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  // tag=1010
  fromPtr(thisObj)->setCurrentIndex(index);
}

// tag=1050
// setDirtyRegion(const QRegion & region)
void c_QAbstractItemView__setDirtyRegion_QRegion(void *thisObj, void *region_) {
  auto &region = *reinterpret_cast<QRegion *>(region_);
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->setDirtyRegion(region);
}

// tag=1050
// setDragDropOverwriteMode(bool overwrite)
void c_QAbstractItemView__setDragDropOverwriteMode_bool(void *thisObj,
                                                        bool overwrite) {
  // tag=1010
  fromPtr(thisObj)->setDragDropOverwriteMode(overwrite);
}

// tag=1050
// setDragEnabled(bool enable)
void c_QAbstractItemView__setDragEnabled_bool(void *thisObj, bool enable) {
  // tag=1010
  fromPtr(thisObj)->setDragEnabled(enable);
}

// tag=1050
// setDropIndicatorShown(bool enable)
void c_QAbstractItemView__setDropIndicatorShown_bool(void *thisObj,
                                                     bool enable) {
  // tag=1010
  fromPtr(thisObj)->setDropIndicatorShown(enable);
}

// tag=1050
// setIconSize(const QSize & size)
void c_QAbstractItemView__setIconSize_QSize(void *thisObj, void *size_) {
  auto &size = *reinterpret_cast<QSize *>(size_);
  // tag=1010
  fromPtr(thisObj)->setIconSize(size);
}

// tag=1050
// setIndexWidget(const QModelIndex & index, QWidget * widget)
void c_QAbstractItemView__setIndexWidget_QModelIndex_QWidget(void *thisObj,
                                                             void *index_,
                                                             void *widget_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  auto widget = reinterpret_cast<QWidget *>(widget_);
  // tag=1010
  fromPtr(thisObj)->setIndexWidget(index, widget);
}

// tag=1050
// setModel(QAbstractItemModel * model)
void c_QAbstractItemView__setModel_QAbstractItemModel(void *thisObj,
                                                      void *model_) {
  auto model = reinterpret_cast<QAbstractItemModel *>(model_);
  // tag=1016
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

// tag=1050
// setRootIndex(const QModelIndex & index)
void c_QAbstractItemView__setRootIndex_QModelIndex(void *thisObj,
                                                   void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  // tag=1016
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

// tag=1050
// setSelection(const QRect & rect, QFlags<QItemSelectionModel::SelectionFlag>
// command)
void c_QAbstractItemView__setSelection_QRect_SelectionFlags(void *thisObj,
                                                            void *rect_,
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
void c_QAbstractItemView__setSelectionModel_QItemSelectionModel(
    void *thisObj, void *selectionModel_) {
  auto selectionModel =
      reinterpret_cast<QItemSelectionModel *>(selectionModel_);
  // tag=1016
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

// tag=1050
// setTabKeyNavigation(bool enable)
void c_QAbstractItemView__setTabKeyNavigation_bool(void *thisObj, bool enable) {
  // tag=1010
  fromPtr(thisObj)->setTabKeyNavigation(enable);
}

// tag=1050
// setVisible(bool visible)
void c_QAbstractItemView__setVisible_bool(void *thisObj, bool visible) {
  // tag=1016
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

// tag=1050
// setupViewport(QWidget * viewport)
void c_QAbstractItemView__setupViewport_QWidget(void *thisObj,
                                                void *viewport_) {
  auto viewport = reinterpret_cast<QWidget *>(viewport_);
  // tag=1016
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

// tag=1050
// sharedPainter() const
void *c_QAbstractItemView__sharedPainter(void *thisObj) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->sharedPainter_nocallback();
}

// tag=1050
// showDropIndicator() const
bool c_QAbstractItemView__showDropIndicator(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->showDropIndicator();
}

// tag=1050
// sizeHint() const
void *c_QAbstractItemView__sizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractItemView_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->sizeHint_nocallback();
        } else {
          return targetPtr->sizeHint();
        }
      }()};
}

// tag=1050
// sizeHintForColumn(int column) const
int c_QAbstractItemView__sizeHintForColumn_int(void *thisObj, int column) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractItemView_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->sizeHintForColumn_nocallback(column);
        } else {
          return targetPtr->sizeHintForColumn(column);
        }
      }();
}

// tag=1050
// sizeHintForIndex(const QModelIndex & index) const
void *c_QAbstractItemView__sizeHintForIndex_QModelIndex(void *thisObj,
                                                        void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{
          fromPtr(thisObj)->sizeHintForIndex(index)};
}

// tag=1050
// sizeHintForRow(int row) const
int c_QAbstractItemView__sizeHintForRow_int(void *thisObj, int row) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractItemView_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->sizeHintForRow_nocallback(row);
        } else {
          return targetPtr->sizeHintForRow(row);
        }
      }();
}

// tag=1050
// startAutoScroll()
void c_QAbstractItemView__startAutoScroll(void *thisObj) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->startAutoScroll();
}

// tag=1050
// stopAutoScroll()
void c_QAbstractItemView__stopAutoScroll(void *thisObj) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->stopAutoScroll();
}

// tag=1050
// tabKeyNavigation() const
bool c_QAbstractItemView__tabKeyNavigation(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->tabKeyNavigation();
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QAbstractItemView__tr_char_char_int(const char *s, const char *c,
                                                   int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QAbstractItemView_wrapper::tr(s, c, n)};
}

// tag=1050
// update(const QModelIndex & index)
void c_QAbstractItemView__updateIndex_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  // tag=1010
  fromPtr(thisObj)->update(index);
}

// tag=1050
// updateEditorData()
void c_QAbstractItemView__updateEditorData(void *thisObj) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->updateEditorData_nocallback();
}

// tag=1050
// updateEditorGeometries()
void c_QAbstractItemView__updateEditorGeometries(void *thisObj) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->updateEditorGeometries_nocallback();
}

// tag=1050
// updateGeometries()
void c_QAbstractItemView__updateGeometries(void *thisObj) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->updateGeometries_nocallback();
}

// tag=1050
// verticalOffset() const
int c_QAbstractItemView__verticalOffset(void *thisObj) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->verticalOffset_nocallback();
}

// tag=1050
// verticalScrollbarAction(int action)
void c_QAbstractItemView__verticalScrollbarAction_int(void *thisObj,
                                                      int action) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->verticalScrollbarAction_nocallback(action);
}

// tag=1050
// verticalScrollbarValueChanged(int value)
void c_QAbstractItemView__verticalScrollbarValueChanged_int(void *thisObj,
                                                            int value) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->verticalScrollbarValueChanged_nocallback(value);
}

// tag=1050
// viewportEntered()
void c_QAbstractItemView__viewportEntered(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->viewportEntered();
}

// tag=1079
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

// tag=1050
// viewportEvent(QEvent * event)
bool c_QAbstractItemView__viewportEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->viewportEvent_nocallback(event);
}

// tag=1050
// viewportSizeHint() const
void *c_QAbstractItemView__viewportSizeHint(void *thisObj) {
  return
      // tag=1011

      // tag=1074

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{
          fromWrapperPtr(thisObj)->viewportSizeHint_nocallback()};
}

// tag=1050
// visualRect(const QModelIndex & index) const
void *c_QAbstractItemView__visualRect_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractItemView_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->visualRect_nocallback(index);
        } else {
          return targetPtr->visualRect(index);
        }
      }()};
}

// tag=1050
// visualRegionForSelection(const QItemSelection & selection) const
void *
c_QAbstractItemView__visualRegionForSelection_QItemSelection(void *thisObj,
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
void c_QAbstractItemView__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QAbstractItemView__registerVirtualMethodCallback(void *ptr,
                                                        void *callback,
                                                        int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1124:
    wrapper->m_changeEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_changeEvent>(callback);
    break;
  case 5378:
    wrapper->m_commitDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_commitData>(callback);
    break;
  case 5380:
    wrapper->m_currentChangedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_currentChanged>(callback);
    break;
  case 944:
    wrapper->m_customEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_customEvent>(callback);
    break;
  case 5382:
    wrapper->m_dataChangedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_dataChanged>(callback);
    break;
  case 1141:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractItemView_wrapper::Callback_devType>(
        callback);
    break;
  case 5385:
    wrapper->m_doItemsLayoutCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_doItemsLayout>(callback);
    break;
  case 5390:
    wrapper->m_editorDestroyedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_editorDestroyed>(callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractItemView_wrapper::Callback_event>(
        callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_eventFilter>(callback);
    break;
  case 1150:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1164:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 1168:
    wrapper->m_heightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_heightForWidth>(callback);
    break;
  case 5394:
    wrapper->m_horizontalOffsetCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_horizontalOffset>(callback);
    break;
  case 5395:
    wrapper->m_horizontalScrollbarActionCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_horizontalScrollbarAction>(callback);
    break;
  case 5396:
    wrapper->m_horizontalScrollbarValueChangedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_horizontalScrollbarValueChanged>(
            callback);
    break;
  case 5399:
    wrapper->m_indexAtCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractItemView_wrapper::Callback_indexAt>(
        callback);
    break;
  case 1171:
    wrapper->m_initPainterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_initPainter>(callback);
    break;
  case 5401:
    wrapper->m_isIndexHiddenCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_isIndexHidden>(callback);
    break;
  case 5403:
    wrapper->m_keyboardSearchCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_keyboardSearch>(callback);
    break;
  case 1196:
    wrapper->m_leaveEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_leaveEvent>(callback);
    break;
  case 1216:
    wrapper->m_minimumSizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_minimumSizeHint>(callback);
    break;
  case 1218:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1220:
    wrapper->m_mouseMoveEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_mouseMoveEvent>(callback);
    break;
  case 1221:
    wrapper->m_mousePressEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_mousePressEvent>(callback);
    break;
  case 1222:
    wrapper->m_mouseReleaseEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_mouseReleaseEvent>(callback);
    break;
  case 5406:
    wrapper->m_moveCursorCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_moveCursor>(callback);
    break;
  case 1229:
    wrapper->m_paintEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_paintEvent>(callback);
    break;
  case 5409:
    wrapper->m_resetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractItemView_wrapper::Callback_reset>(
        callback);
    break;
  case 5413:
    wrapper->m_rowsAboutToBeRemovedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_rowsAboutToBeRemoved>(callback);
    break;
  case 5414:
    wrapper->m_rowsInsertedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_rowsInserted>(callback);
    break;
  case 5199:
    wrapper->m_scrollContentsByCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_scrollContentsBy>(callback);
    break;
  case 5417:
    wrapper->m_scrollToCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_scrollTo>(callback);
    break;
  case 5420:
    wrapper->m_selectAllCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_selectAll>(callback);
    break;
  case 5421:
    wrapper->m_selectedIndexesCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_selectedIndexes>(callback);
    break;
  case 5422:
    wrapper->m_selectionChangedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_selectionChanged>(callback);
    break;
  case 5423:
    wrapper->m_selectionCommandCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_selectionCommand>(callback);
    break;
  case 5436:
    wrapper->m_setModelCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_setModel>(callback);
    break;
  case 5437:
    wrapper->m_setRootIndexCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_setRootIndex>(callback);
    break;
  case 5438:
    wrapper->m_setSelectionCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_setSelection>(callback);
    break;
  case 5439:
    wrapper->m_setSelectionModelCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_setSelectionModel>(callback);
    break;
  case 1309:
    wrapper->m_setVisibleCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_setVisible>(callback);
    break;
  case 5207:
    wrapper->m_setupViewportCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_setupViewport>(callback);
    break;
  case 1318:
    wrapper->m_sharedPainterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_sharedPainter>(callback);
    break;
  case 1326:
    wrapper->m_sizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_sizeHint>(callback);
    break;
  case 5444:
    wrapper->m_sizeHintForColumnCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_sizeHintForColumn>(callback);
    break;
  case 5446:
    wrapper->m_sizeHintForRowCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_sizeHintForRow>(callback);
    break;
  case 5452:
    wrapper->m_updateEditorDataCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_updateEditorData>(callback);
    break;
  case 5453:
    wrapper->m_updateEditorGeometriesCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_updateEditorGeometries>(callback);
    break;
  case 5454:
    wrapper->m_updateGeometriesCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_updateGeometries>(callback);
    break;
  case 5455:
    wrapper->m_verticalOffsetCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_verticalOffset>(callback);
    break;
  case 5456:
    wrapper->m_verticalScrollbarActionCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_verticalScrollbarAction>(callback);
    break;
  case 5457:
    wrapper->m_verticalScrollbarValueChangedCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_verticalScrollbarValueChanged>(callback);
    break;
  case 5210:
    wrapper->m_viewportEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_viewportEvent>(callback);
    break;
  case 5211:
    wrapper->m_viewportSizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_viewportSizeHint>(callback);
    break;
  case 5460:
    wrapper->m_visualRectCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_visualRect>(callback);
    break;
  case 5461:
    wrapper->m_visualRegionForSelectionCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractItemView_wrapper::
                             Callback_visualRegionForSelection>(callback);
    break;
  }
}
}
