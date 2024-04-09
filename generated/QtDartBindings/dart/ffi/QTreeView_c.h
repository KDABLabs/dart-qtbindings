/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qabstractitemmodel.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qitemselectionmodel.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qstring.h>
#include <qtreeview.h>
#include <qwidget.h>

namespace QtDartBindings_wrappersNS {
class QTreeView_wrapper : public ::QTreeView {
public:
  ~QTreeView_wrapper();
  using ::QAbstractItemView::CursorAction;
  QTreeView_wrapper(QWidget *parent = nullptr);
  bool allColumnsShowFocus() const;
  int autoExpandDelay() const;
  virtual void changeEvent(QEvent *event);
  virtual void changeEvent_nocallback(QEvent *event);
  void collapse(const QModelIndex &index);
  void collapseAll();
  void collapsed(const QModelIndex &index);
  int columnAt(int x) const;
  void columnCountChanged(int oldCount, int newCount);
  void columnMoved();
  void columnResized(int column, int oldSize, int newSize);
  int columnViewportPosition(int column) const;
  int columnWidth(int column) const;
  virtual void commitData(QWidget *editor);
  virtual void commitData_nocallback(QWidget *editor);
  virtual void currentChanged(const QModelIndex &current,
                              const QModelIndex &previous);
  virtual void currentChanged_nocallback(const QModelIndex &current,
                                         const QModelIndex &previous);
  virtual void customEvent(QEvent *event);
  virtual void customEvent_nocallback(QEvent *event);
  virtual void dataChanged(const QModelIndex &topLeft,
                           const QModelIndex &bottomRight,
                           const QList<int> &roles = QList<int>());
  virtual void dataChanged_nocallback(const QModelIndex &topLeft,
                                      const QModelIndex &bottomRight,
                                      const QList<int> &roles = QList<int>());
  virtual int devType() const;
  virtual int devType_nocallback() const;
  virtual void doItemsLayout();
  virtual void doItemsLayout_nocallback();
  virtual void drawBranches(QPainter *painter, const QRect &rect,
                            const QModelIndex &index) const;
  virtual void drawBranches_nocallback(QPainter *painter, const QRect &rect,
                                       const QModelIndex &index) const;
  void drawTree(QPainter *painter, const QRegion &region) const;
  virtual void editorDestroyed(QObject *editor);
  virtual void editorDestroyed_nocallback(QObject *editor);
  virtual bool event(QEvent *event);
  virtual bool event_nocallback(QEvent *event);
  virtual bool eventFilter(QObject *object, QEvent *event);
  virtual bool eventFilter_nocallback(QObject *object, QEvent *event);
  void expand(const QModelIndex &index);
  void expandAll();
  void expandRecursively(const QModelIndex &index, int depth = -1);
  void expandToDepth(int depth);
  void expanded(const QModelIndex &index);
  bool expandsOnDoubleClick() const;
  virtual bool focusNextPrevChild(bool next);
  virtual bool focusNextPrevChild_nocallback(bool next);
  virtual bool hasHeightForWidth() const;
  virtual bool hasHeightForWidth_nocallback() const;
  virtual int heightForWidth(int arg__1) const;
  virtual int heightForWidth_nocallback(int arg__1) const;
  void hideColumn(int column);
  virtual int horizontalOffset() const;
  virtual int horizontalOffset_nocallback() const;
  virtual void horizontalScrollbarAction(int action);
  virtual void horizontalScrollbarAction_nocallback(int action);
  virtual void horizontalScrollbarValueChanged(int value);
  virtual void horizontalScrollbarValueChanged_nocallback(int value);
  int indentation() const;
  QModelIndex indexAbove(const QModelIndex &index) const;
  virtual QModelIndex indexAt(const QPoint &p) const;
  virtual QModelIndex indexAt_nocallback(const QPoint &p) const;
  QModelIndex indexBelow(const QModelIndex &index) const;
  int indexRowSizeHint(const QModelIndex &index) const;
  virtual void initPainter(QPainter *painter) const;
  virtual void initPainter_nocallback(QPainter *painter) const;
  bool isAnimated() const;
  bool isColumnHidden(int column) const;
  bool isExpanded(const QModelIndex &index) const;
  bool isFirstColumnSpanned(int row, const QModelIndex &parent) const;
  bool isHeaderHidden() const;
  virtual bool isIndexHidden(const QModelIndex &index) const;
  virtual bool isIndexHidden_nocallback(const QModelIndex &index) const;
  bool isRowHidden(int row, const QModelIndex &parent) const;
  bool isSortingEnabled() const;
  bool itemsExpandable() const;
  virtual void keyboardSearch(const QString &search);
  virtual void keyboardSearch_nocallback(const QString &search);
  virtual void leaveEvent(QEvent *event);
  virtual void leaveEvent_nocallback(QEvent *event);
  virtual QSize minimumSizeHint() const;
  virtual QSize minimumSizeHint_nocallback() const;
  virtual void mouseDoubleClickEvent(QMouseEvent *event);
  virtual void mouseDoubleClickEvent_nocallback(QMouseEvent *event);
  virtual void mouseMoveEvent(QMouseEvent *event);
  virtual void mouseMoveEvent_nocallback(QMouseEvent *event);
  virtual void mousePressEvent(QMouseEvent *event);
  virtual void mousePressEvent_nocallback(QMouseEvent *event);
  virtual void mouseReleaseEvent(QMouseEvent *event);
  virtual void mouseReleaseEvent_nocallback(QMouseEvent *event);
  virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction,
                                 QFlags<Qt::KeyboardModifier> modifiers);
  virtual QModelIndex
  moveCursor_nocallback(QAbstractItemView::CursorAction cursorAction,
                        QFlags<Qt::KeyboardModifier> modifiers);
  virtual void paintEvent(QPaintEvent *event);
  virtual void paintEvent_nocallback(QPaintEvent *event);
  void reexpand();
  virtual void reset();
  virtual void reset_nocallback();
  void resetIndentation();
  void resizeColumnToContents(int column);
  bool rootIsDecorated() const;
  int rowHeight(const QModelIndex &index) const;
  virtual void rowsAboutToBeRemoved(const QModelIndex &parent, int start,
                                    int end);
  virtual void rowsAboutToBeRemoved_nocallback(const QModelIndex &parent,
                                               int start, int end);
  virtual void rowsInserted(const QModelIndex &parent, int start, int end);
  virtual void rowsInserted_nocallback(const QModelIndex &parent, int start,
                                       int end);
  void rowsRemoved(const QModelIndex &parent, int first, int last);
  virtual void scrollContentsBy(int dx, int dy);
  virtual void scrollContentsBy_nocallback(int dx, int dy);
  virtual void scrollTo(const QModelIndex &index,
                        QAbstractItemView::ScrollHint hint =
                            QAbstractItemView::ScrollHint::EnsureVisible);
  virtual void
  scrollTo_nocallback(const QModelIndex &index,
                      QAbstractItemView::ScrollHint hint =
                          QAbstractItemView::ScrollHint::EnsureVisible);
  virtual void selectAll();
  virtual void selectAll_nocallback();
  virtual QList<QModelIndex> selectedIndexes() const;
  virtual QList<QModelIndex> selectedIndexes_nocallback() const;
  virtual void selectionChanged(const QItemSelection &selected,
                                const QItemSelection &deselected);
  virtual void selectionChanged_nocallback(const QItemSelection &selected,
                                           const QItemSelection &deselected);
  virtual QFlags<QItemSelectionModel::SelectionFlag>
  selectionCommand(const QModelIndex &index,
                   const QEvent *event = nullptr) const;
  virtual QFlags<QItemSelectionModel::SelectionFlag>
  selectionCommand_nocallback(const QModelIndex &index,
                              const QEvent *event = nullptr) const;
  void setAllColumnsShowFocus(bool enable);
  void setAnimated(bool enable);
  void setAutoExpandDelay(int delay);
  void setColumnHidden(int column, bool hide);
  void setColumnWidth(int column, int width);
  void setExpanded(const QModelIndex &index, bool expand);
  void setExpandsOnDoubleClick(bool enable);
  void setFirstColumnSpanned(int row, const QModelIndex &parent, bool span);
  void setHeaderHidden(bool hide);
  void setIndentation(int i);
  void setItemsExpandable(bool enable);
  virtual void setModel(QAbstractItemModel *model);
  virtual void setModel_nocallback(QAbstractItemModel *model);
  virtual void setRootIndex(const QModelIndex &index);
  virtual void setRootIndex_nocallback(const QModelIndex &index);
  void setRootIsDecorated(bool show);
  void setRowHidden(int row, const QModelIndex &parent, bool hide);
  virtual void setSelection(const QRect &rect,
                            QFlags<QItemSelectionModel::SelectionFlag> command);
  virtual void
  setSelection_nocallback(const QRect &rect,
                          QFlags<QItemSelectionModel::SelectionFlag> command);
  virtual void setSelectionModel(QItemSelectionModel *selectionModel);
  virtual void
  setSelectionModel_nocallback(QItemSelectionModel *selectionModel);
  void setSortingEnabled(bool enable);
  void setTreePosition(int logicalIndex);
  void setUniformRowHeights(bool uniform);
  virtual void setVisible(bool visible);
  virtual void setVisible_nocallback(bool visible);
  void setWordWrap(bool on);
  virtual void setupViewport(QWidget *viewport);
  virtual void setupViewport_nocallback(QWidget *viewport);
  virtual QPainter *sharedPainter() const;
  virtual QPainter *sharedPainter_nocallback() const;
  void showColumn(int column);
  virtual QSize sizeHint() const;
  virtual QSize sizeHint_nocallback() const;
  virtual int sizeHintForColumn(int column) const;
  virtual int sizeHintForColumn_nocallback(int column) const;
  virtual int sizeHintForRow(int row) const;
  virtual int sizeHintForRow_nocallback(int row) const;
  void sortByColumn(int column, Qt::SortOrder order);
  static QString tr(const char *s, const char *c, int n);
  int treePosition() const;
  bool uniformRowHeights() const;
  virtual void updateEditorData();
  virtual void updateEditorData_nocallback();
  virtual void updateEditorGeometries();
  virtual void updateEditorGeometries_nocallback();
  virtual void updateGeometries();
  virtual void updateGeometries_nocallback();
  virtual int verticalOffset() const;
  virtual int verticalOffset_nocallback() const;
  virtual void verticalScrollbarAction(int action);
  virtual void verticalScrollbarAction_nocallback(int action);
  virtual void verticalScrollbarValueChanged(int value);
  virtual void verticalScrollbarValueChanged_nocallback(int value);
  virtual bool viewportEvent(QEvent *event);
  virtual bool viewportEvent_nocallback(QEvent *event);
  virtual QSize viewportSizeHint() const;
  virtual QSize viewportSizeHint_nocallback() const;
  virtual QRect visualRect(const QModelIndex &index) const;
  virtual QRect visualRect_nocallback(const QModelIndex &index) const;
  virtual QRegion
  visualRegionForSelection(const QItemSelection &selection) const;
  virtual QRegion
  visualRegionForSelection_nocallback(const QItemSelection &selection) const;
  bool wordWrap() const;
  typedef void (*Callback_changeEvent)(void *, QEvent *event);
  Callback_changeEvent m_changeEventCallback = nullptr;
  typedef void (*Callback_commitData)(void *, QWidget *editor);
  Callback_commitData m_commitDataCallback = nullptr;
  typedef void (*Callback_currentChanged)(void *, const QModelIndex &current,
                                          const QModelIndex &previous);
  Callback_currentChanged m_currentChangedCallback = nullptr;
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  typedef void (*Callback_dataChanged)(void *, const QModelIndex &topLeft,
                                       const QModelIndex &bottomRight,
                                       const QList<int> &roles);
  Callback_dataChanged m_dataChangedCallback = nullptr;
  typedef int (*Callback_devType)(void *);
  Callback_devType m_devTypeCallback = nullptr;
  typedef void (*Callback_doItemsLayout)(void *);
  Callback_doItemsLayout m_doItemsLayoutCallback = nullptr;
  typedef void (*Callback_drawBranches)(void *, QPainter *painter,
                                        const QRect &rect,
                                        const QModelIndex &index);
  Callback_drawBranches m_drawBranchesCallback = nullptr;
  typedef void (*Callback_editorDestroyed)(void *, QObject *editor);
  Callback_editorDestroyed m_editorDestroyedCallback = nullptr;
  typedef bool (*Callback_event)(void *, QEvent *event);
  Callback_event m_eventCallback = nullptr;
  typedef bool (*Callback_eventFilter)(void *, QObject *object, QEvent *event);
  Callback_eventFilter m_eventFilterCallback = nullptr;
  typedef bool (*Callback_focusNextPrevChild)(void *, bool next);
  Callback_focusNextPrevChild m_focusNextPrevChildCallback = nullptr;
  typedef bool (*Callback_hasHeightForWidth)(void *);
  Callback_hasHeightForWidth m_hasHeightForWidthCallback = nullptr;
  typedef int (*Callback_heightForWidth)(void *, int arg__1);
  Callback_heightForWidth m_heightForWidthCallback = nullptr;
  typedef int (*Callback_horizontalOffset)(void *);
  Callback_horizontalOffset m_horizontalOffsetCallback = nullptr;
  typedef void (*Callback_horizontalScrollbarAction)(void *, int action);
  Callback_horizontalScrollbarAction m_horizontalScrollbarActionCallback =
      nullptr;
  typedef void (*Callback_horizontalScrollbarValueChanged)(void *, int value);
  Callback_horizontalScrollbarValueChanged
      m_horizontalScrollbarValueChangedCallback = nullptr;
  typedef QModelIndex *(*Callback_indexAt)(void *, const QPoint &p);
  Callback_indexAt m_indexAtCallback = nullptr;
  typedef void (*Callback_initPainter)(void *, QPainter *painter);
  Callback_initPainter m_initPainterCallback = nullptr;
  typedef bool (*Callback_isIndexHidden)(void *, const QModelIndex &index);
  Callback_isIndexHidden m_isIndexHiddenCallback = nullptr;
  typedef void (*Callback_keyboardSearch)(void *, const QString &search);
  Callback_keyboardSearch m_keyboardSearchCallback = nullptr;
  typedef void (*Callback_leaveEvent)(void *, QEvent *event);
  Callback_leaveEvent m_leaveEventCallback = nullptr;
  typedef QSize *(*Callback_minimumSizeHint)(void *);
  Callback_minimumSizeHint m_minimumSizeHintCallback = nullptr;
  typedef void (*Callback_mouseDoubleClickEvent)(void *, QMouseEvent *event);
  Callback_mouseDoubleClickEvent m_mouseDoubleClickEventCallback = nullptr;
  typedef void (*Callback_mouseMoveEvent)(void *, QMouseEvent *event);
  Callback_mouseMoveEvent m_mouseMoveEventCallback = nullptr;
  typedef void (*Callback_mousePressEvent)(void *, QMouseEvent *event);
  Callback_mousePressEvent m_mousePressEventCallback = nullptr;
  typedef void (*Callback_mouseReleaseEvent)(void *, QMouseEvent *event);
  Callback_mouseReleaseEvent m_mouseReleaseEventCallback = nullptr;
  typedef QModelIndex *(*Callback_moveCursor)(
      void *, QAbstractItemView::CursorAction cursorAction,
      QFlags<Qt::KeyboardModifier> modifiers);
  Callback_moveCursor m_moveCursorCallback = nullptr;
  typedef void (*Callback_paintEvent)(void *, QPaintEvent *event);
  Callback_paintEvent m_paintEventCallback = nullptr;
  typedef void (*Callback_reset)(void *);
  Callback_reset m_resetCallback = nullptr;
  typedef void (*Callback_rowsAboutToBeRemoved)(void *,
                                                const QModelIndex &parent,
                                                int start, int end);
  Callback_rowsAboutToBeRemoved m_rowsAboutToBeRemovedCallback = nullptr;
  typedef void (*Callback_rowsInserted)(void *, const QModelIndex &parent,
                                        int start, int end);
  Callback_rowsInserted m_rowsInsertedCallback = nullptr;
  typedef void (*Callback_scrollContentsBy)(void *, int dx, int dy);
  Callback_scrollContentsBy m_scrollContentsByCallback = nullptr;
  typedef void (*Callback_scrollTo)(void *, const QModelIndex &index,
                                    QAbstractItemView::ScrollHint hint);
  Callback_scrollTo m_scrollToCallback = nullptr;
  typedef void (*Callback_selectAll)(void *);
  Callback_selectAll m_selectAllCallback = nullptr;
  typedef QList<QModelIndex> *(*Callback_selectedIndexes)(void *);
  Callback_selectedIndexes m_selectedIndexesCallback = nullptr;
  typedef void (*Callback_selectionChanged)(void *,
                                            const QItemSelection &selected,
                                            const QItemSelection &deselected);
  Callback_selectionChanged m_selectionChangedCallback = nullptr;
  typedef QFlags<QItemSelectionModel::SelectionFlag> (
      *Callback_selectionCommand)(void *, const QModelIndex &index,
                                  const QEvent *event);
  Callback_selectionCommand m_selectionCommandCallback = nullptr;
  typedef void (*Callback_setModel)(void *, QAbstractItemModel *model);
  Callback_setModel m_setModelCallback = nullptr;
  typedef void (*Callback_setRootIndex)(void *, const QModelIndex &index);
  Callback_setRootIndex m_setRootIndexCallback = nullptr;
  typedef void (*Callback_setSelection)(
      void *, const QRect &rect,
      QFlags<QItemSelectionModel::SelectionFlag> command);
  Callback_setSelection m_setSelectionCallback = nullptr;
  typedef void (*Callback_setSelectionModel)(
      void *, QItemSelectionModel *selectionModel);
  Callback_setSelectionModel m_setSelectionModelCallback = nullptr;
  typedef void (*Callback_setVisible)(void *, bool visible);
  Callback_setVisible m_setVisibleCallback = nullptr;
  typedef void (*Callback_setupViewport)(void *, QWidget *viewport);
  Callback_setupViewport m_setupViewportCallback = nullptr;
  typedef QPainter *(*Callback_sharedPainter)(void *);
  Callback_sharedPainter m_sharedPainterCallback = nullptr;
  typedef QSize *(*Callback_sizeHint)(void *);
  Callback_sizeHint m_sizeHintCallback = nullptr;
  typedef int (*Callback_sizeHintForColumn)(void *, int column);
  Callback_sizeHintForColumn m_sizeHintForColumnCallback = nullptr;
  typedef int (*Callback_sizeHintForRow)(void *, int row);
  Callback_sizeHintForRow m_sizeHintForRowCallback = nullptr;
  typedef void (*Callback_updateEditorData)(void *);
  Callback_updateEditorData m_updateEditorDataCallback = nullptr;
  typedef void (*Callback_updateEditorGeometries)(void *);
  Callback_updateEditorGeometries m_updateEditorGeometriesCallback = nullptr;
  typedef void (*Callback_updateGeometries)(void *);
  Callback_updateGeometries m_updateGeometriesCallback = nullptr;
  typedef int (*Callback_verticalOffset)(void *);
  Callback_verticalOffset m_verticalOffsetCallback = nullptr;
  typedef void (*Callback_verticalScrollbarAction)(void *, int action);
  Callback_verticalScrollbarAction m_verticalScrollbarActionCallback = nullptr;
  typedef void (*Callback_verticalScrollbarValueChanged)(void *, int value);
  Callback_verticalScrollbarValueChanged
      m_verticalScrollbarValueChangedCallback = nullptr;
  typedef bool (*Callback_viewportEvent)(void *, QEvent *event);
  Callback_viewportEvent m_viewportEventCallback = nullptr;
  typedef QSize *(*Callback_viewportSizeHint)(void *);
  Callback_viewportSizeHint m_viewportSizeHintCallback = nullptr;
  typedef QRect *(*Callback_visualRect)(void *, const QModelIndex &index);
  Callback_visualRect m_visualRectCallback = nullptr;
  typedef QRegion *(*Callback_visualRegionForSelection)(
      void *, const QItemSelection &selection);
  Callback_visualRegionForSelection m_visualRegionForSelectionCallback =
      nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QTreeView::QTreeView(QWidget * parent)
QtDartBindings_EXPORT void *c_QTreeView__constructor_QWidget(void *parent_);
// QTreeView::allColumnsShowFocus() const
QtDartBindings_EXPORT bool c_QTreeView__allColumnsShowFocus(void *thisObj);
// QTreeView::autoExpandDelay() const
QtDartBindings_EXPORT int c_QTreeView__autoExpandDelay(void *thisObj);
// QTreeView::changeEvent(QEvent * event)
QtDartBindings_EXPORT void c_QTreeView__changeEvent_QEvent(void *thisObj,
                                                           void *event_);
// QTreeView::collapse(const QModelIndex & index)
QtDartBindings_EXPORT void c_QTreeView__collapse_QModelIndex(void *thisObj,
                                                             void *index_);
// QTreeView::collapseAll()
QtDartBindings_EXPORT void c_QTreeView__collapseAll(void *thisObj);
// QTreeView::collapsed(const QModelIndex & index)
QtDartBindings_EXPORT void c_QTreeView__collapsed_QModelIndex(void *thisObj,
                                                              void *index_);
QtDartBindings_EXPORT void c_QTreeView__onCollapsed_QModelIndex(
    void *thisObj, void *contextQObject,
    void *callback); // QTreeView::columnAt(int x) const
QtDartBindings_EXPORT int c_QTreeView__columnAt_int(void *thisObj, int x);
// QTreeView::columnCountChanged(int oldCount, int newCount)
QtDartBindings_EXPORT void
c_QTreeView__columnCountChanged_int_int(void *thisObj, int oldCount,
                                        int newCount);
// QTreeView::columnMoved()
QtDartBindings_EXPORT void c_QTreeView__columnMoved(void *thisObj);
// QTreeView::columnResized(int column, int oldSize, int newSize)
QtDartBindings_EXPORT void c_QTreeView__columnResized_int_int_int(void *thisObj,
                                                                  int column,
                                                                  int oldSize,
                                                                  int newSize);
// QTreeView::columnViewportPosition(int column) const
QtDartBindings_EXPORT int c_QTreeView__columnViewportPosition_int(void *thisObj,
                                                                  int column);
// QTreeView::columnWidth(int column) const
QtDartBindings_EXPORT int c_QTreeView__columnWidth_int(void *thisObj,
                                                       int column);
// QTreeView::commitData(QWidget * editor)
QtDartBindings_EXPORT void c_QTreeView__commitData_QWidget(void *thisObj,
                                                           void *editor_);
// QTreeView::currentChanged(const QModelIndex & current, const QModelIndex &
// previous)
QtDartBindings_EXPORT void c_QTreeView__currentChanged_QModelIndex_QModelIndex(
    void *thisObj, void *current_, void *previous_);
// QTreeView::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QTreeView__customEvent_QEvent(void *thisObj,
                                                           void *event_);
// QTreeView::dataChanged(const QModelIndex & topLeft, const QModelIndex &
// bottomRight, const QList<int > & roles)
QtDartBindings_EXPORT void
c_QTreeView__dataChanged_QModelIndex_QModelIndex_QList_int(void *thisObj,
                                                           void *topLeft_,
                                                           void *bottomRight_,
                                                           void *roles_);
// QTreeView::devType() const
QtDartBindings_EXPORT int c_QTreeView__devType(void *thisObj);
// QTreeView::doItemsLayout()
QtDartBindings_EXPORT void c_QTreeView__doItemsLayout(void *thisObj);
// QTreeView::drawBranches(QPainter * painter, const QRect & rect, const
// QModelIndex & index) const
QtDartBindings_EXPORT void c_QTreeView__drawBranches_QPainter_QRect_QModelIndex(
    void *thisObj, void *painter_, void *rect_, void *index_);
// QTreeView::drawTree(QPainter * painter, const QRegion & region) const
QtDartBindings_EXPORT void
c_QTreeView__drawTree_QPainter_QRegion(void *thisObj, void *painter_,
                                       void *region_);
// QTreeView::editorDestroyed(QObject * editor)
QtDartBindings_EXPORT void c_QTreeView__editorDestroyed_QObject(void *thisObj,
                                                                void *editor_);
// QTreeView::event(QEvent * event)
QtDartBindings_EXPORT bool c_QTreeView__event_QEvent(void *thisObj,
                                                     void *event_);
// QTreeView::eventFilter(QObject * object, QEvent * event)
QtDartBindings_EXPORT bool
c_QTreeView__eventFilter_QObject_QEvent(void *thisObj, void *object_,
                                        void *event_);
// QTreeView::expand(const QModelIndex & index)
QtDartBindings_EXPORT void c_QTreeView__expand_QModelIndex(void *thisObj,
                                                           void *index_);
// QTreeView::expandAll()
QtDartBindings_EXPORT void c_QTreeView__expandAll(void *thisObj);
// QTreeView::expandRecursively(const QModelIndex & index, int depth)
QtDartBindings_EXPORT void
c_QTreeView__expandRecursively_QModelIndex_int(void *thisObj, void *index_,
                                               int depth);
// QTreeView::expandToDepth(int depth)
QtDartBindings_EXPORT void c_QTreeView__expandToDepth_int(void *thisObj,
                                                          int depth);
// QTreeView::expanded(const QModelIndex & index)
QtDartBindings_EXPORT void c_QTreeView__expanded_QModelIndex(void *thisObj,
                                                             void *index_);
QtDartBindings_EXPORT void c_QTreeView__onExpanded_QModelIndex(
    void *thisObj, void *contextQObject,
    void *callback); // QTreeView::expandsOnDoubleClick() const
QtDartBindings_EXPORT bool c_QTreeView__expandsOnDoubleClick(void *thisObj);
// QTreeView::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QTreeView__focusNextPrevChild_bool(void *thisObj,
                                                                bool next);
// QTreeView::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QTreeView__hasHeightForWidth(void *thisObj);
// QTreeView::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QTreeView__heightForWidth_int(void *thisObj,
                                                          int arg__1);
// QTreeView::hideColumn(int column)
QtDartBindings_EXPORT void c_QTreeView__hideColumn_int(void *thisObj,
                                                       int column);
// QTreeView::horizontalOffset() const
QtDartBindings_EXPORT int c_QTreeView__horizontalOffset(void *thisObj);
// QTreeView::horizontalScrollbarAction(int action)
QtDartBindings_EXPORT void
c_QTreeView__horizontalScrollbarAction_int(void *thisObj, int action);
// QTreeView::horizontalScrollbarValueChanged(int value)
QtDartBindings_EXPORT void
c_QTreeView__horizontalScrollbarValueChanged_int(void *thisObj, int value);
// QTreeView::indentation() const
QtDartBindings_EXPORT int c_QTreeView__indentation(void *thisObj);
// QTreeView::indexAbove(const QModelIndex & index) const
QtDartBindings_EXPORT void *c_QTreeView__indexAbove_QModelIndex(void *thisObj,
                                                                void *index_);
// QTreeView::indexAt(const QPoint & p) const
QtDartBindings_EXPORT void *c_QTreeView__indexAt_QPoint(void *thisObj,
                                                        void *p_);
// QTreeView::indexBelow(const QModelIndex & index) const
QtDartBindings_EXPORT void *c_QTreeView__indexBelow_QModelIndex(void *thisObj,
                                                                void *index_);
// QTreeView::indexRowSizeHint(const QModelIndex & index) const
QtDartBindings_EXPORT int
c_QTreeView__indexRowSizeHint_QModelIndex(void *thisObj, void *index_);
// QTreeView::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QTreeView__initPainter_QPainter(void *thisObj,
                                                             void *painter_);
// QTreeView::isAnimated() const
QtDartBindings_EXPORT bool c_QTreeView__isAnimated(void *thisObj);
// QTreeView::isColumnHidden(int column) const
QtDartBindings_EXPORT bool c_QTreeView__isColumnHidden_int(void *thisObj,
                                                           int column);
// QTreeView::isExpanded(const QModelIndex & index) const
QtDartBindings_EXPORT bool c_QTreeView__isExpanded_QModelIndex(void *thisObj,
                                                               void *index_);
// QTreeView::isFirstColumnSpanned(int row, const QModelIndex & parent) const
QtDartBindings_EXPORT bool
c_QTreeView__isFirstColumnSpanned_int_QModelIndex(void *thisObj, int row,
                                                  void *parent_);
// QTreeView::isHeaderHidden() const
QtDartBindings_EXPORT bool c_QTreeView__isHeaderHidden(void *thisObj);
// QTreeView::isIndexHidden(const QModelIndex & index) const
QtDartBindings_EXPORT bool c_QTreeView__isIndexHidden_QModelIndex(void *thisObj,
                                                                  void *index_);
// QTreeView::isRowHidden(int row, const QModelIndex & parent) const
QtDartBindings_EXPORT bool
c_QTreeView__isRowHidden_int_QModelIndex(void *thisObj, int row, void *parent_);
// QTreeView::isSortingEnabled() const
QtDartBindings_EXPORT bool c_QTreeView__isSortingEnabled(void *thisObj);
// QTreeView::itemsExpandable() const
QtDartBindings_EXPORT bool c_QTreeView__itemsExpandable(void *thisObj);
// QTreeView::keyboardSearch(const QString & search)
QtDartBindings_EXPORT void
c_QTreeView__keyboardSearch_QString(void *thisObj, const char *search_);
// QTreeView::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QTreeView__leaveEvent_QEvent(void *thisObj,
                                                          void *event_);
// QTreeView::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QTreeView__minimumSizeHint(void *thisObj);
// QTreeView::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QTreeView__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);
// QTreeView::mouseMoveEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QTreeView__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_);
// QTreeView::mousePressEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QTreeView__mousePressEvent_QMouseEvent(void *thisObj, void *event_);
// QTreeView::mouseReleaseEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QTreeView__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_);
// QTreeView::moveCursor(QAbstractItemView::CursorAction cursorAction,
// QFlags<Qt::KeyboardModifier> modifiers)
QtDartBindings_EXPORT void *
c_QTreeView__moveCursor_CursorAction_KeyboardModifiers(void *thisObj,
                                                       int cursorAction,
                                                       int modifiers_);
// QTreeView::paintEvent(QPaintEvent * event)
QtDartBindings_EXPORT void c_QTreeView__paintEvent_QPaintEvent(void *thisObj,
                                                               void *event_);
// QTreeView::reexpand()
QtDartBindings_EXPORT void c_QTreeView__reexpand(void *thisObj);
// QTreeView::reset()
QtDartBindings_EXPORT void c_QTreeView__reset(void *thisObj);
// QTreeView::resetIndentation()
QtDartBindings_EXPORT void c_QTreeView__resetIndentation(void *thisObj);
// QTreeView::resizeColumnToContents(int column)
QtDartBindings_EXPORT void
c_QTreeView__resizeColumnToContents_int(void *thisObj, int column);
// QTreeView::rootIsDecorated() const
QtDartBindings_EXPORT bool c_QTreeView__rootIsDecorated(void *thisObj);
// QTreeView::rowHeight(const QModelIndex & index) const
QtDartBindings_EXPORT int c_QTreeView__rowHeight_QModelIndex(void *thisObj,
                                                             void *index_);
// QTreeView::rowsAboutToBeRemoved(const QModelIndex & parent, int start, int
// end)
QtDartBindings_EXPORT void
c_QTreeView__rowsAboutToBeRemoved_QModelIndex_int_int(void *thisObj,
                                                      void *parent_, int start,
                                                      int end);
// QTreeView::rowsInserted(const QModelIndex & parent, int start, int end)
QtDartBindings_EXPORT void
c_QTreeView__rowsInserted_QModelIndex_int_int(void *thisObj, void *parent_,
                                              int start, int end);
// QTreeView::rowsRemoved(const QModelIndex & parent, int first, int last)
QtDartBindings_EXPORT void
c_QTreeView__rowsRemoved_QModelIndex_int_int(void *thisObj, void *parent_,
                                             int first, int last);
// QTreeView::scrollContentsBy(int dx, int dy)
QtDartBindings_EXPORT void
c_QTreeView__scrollContentsBy_int_int(void *thisObj, int dx, int dy);
// QTreeView::scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint
// hint)
QtDartBindings_EXPORT void
c_QTreeView__scrollTo_QModelIndex_ScrollHint(void *thisObj, void *index_,
                                             int hint);
// QTreeView::selectAll()
QtDartBindings_EXPORT void c_QTreeView__selectAll(void *thisObj);
// QTreeView::selectedIndexes() const
QtDartBindings_EXPORT void *c_QTreeView__selectedIndexes(void *thisObj);
// QTreeView::selectionChanged(const QItemSelection & selected, const
// QItemSelection & deselected)
QtDartBindings_EXPORT void
c_QTreeView__selectionChanged_QItemSelection_QItemSelection(void *thisObj,
                                                            void *selected_,
                                                            void *deselected_);
// QTreeView::selectionCommand(const QModelIndex & index, const QEvent * event)
// const
QtDartBindings_EXPORT int
c_QTreeView__selectionCommand_QModelIndex_QEvent(void *thisObj, void *index_,
                                                 void *event_);
// QTreeView::setAllColumnsShowFocus(bool enable)
QtDartBindings_EXPORT void
c_QTreeView__setAllColumnsShowFocus_bool(void *thisObj, bool enable);
// QTreeView::setAnimated(bool enable)
QtDartBindings_EXPORT void c_QTreeView__setAnimated_bool(void *thisObj,
                                                         bool enable);
// QTreeView::setAutoExpandDelay(int delay)
QtDartBindings_EXPORT void c_QTreeView__setAutoExpandDelay_int(void *thisObj,
                                                               int delay);
// QTreeView::setColumnHidden(int column, bool hide)
QtDartBindings_EXPORT void
c_QTreeView__setColumnHidden_int_bool(void *thisObj, int column, bool hide);
// QTreeView::setColumnWidth(int column, int width)
QtDartBindings_EXPORT void
c_QTreeView__setColumnWidth_int_int(void *thisObj, int column, int width);
// QTreeView::setExpanded(const QModelIndex & index, bool expand)
QtDartBindings_EXPORT void
c_QTreeView__setExpanded_QModelIndex_bool(void *thisObj, void *index_,
                                          bool expand);
// QTreeView::setExpandsOnDoubleClick(bool enable)
QtDartBindings_EXPORT void
c_QTreeView__setExpandsOnDoubleClick_bool(void *thisObj, bool enable);
// QTreeView::setFirstColumnSpanned(int row, const QModelIndex & parent, bool
// span)
QtDartBindings_EXPORT void
c_QTreeView__setFirstColumnSpanned_int_QModelIndex_bool(void *thisObj, int row,
                                                        void *parent_,
                                                        bool span);
// QTreeView::setHeaderHidden(bool hide)
QtDartBindings_EXPORT void c_QTreeView__setHeaderHidden_bool(void *thisObj,
                                                             bool hide);
// QTreeView::setIndentation(int i)
QtDartBindings_EXPORT void c_QTreeView__setIndentation_int(void *thisObj,
                                                           int i);
// QTreeView::setItemsExpandable(bool enable)
QtDartBindings_EXPORT void c_QTreeView__setItemsExpandable_bool(void *thisObj,
                                                                bool enable);
// QTreeView::setModel(QAbstractItemModel * model)
QtDartBindings_EXPORT void
c_QTreeView__setModel_QAbstractItemModel(void *thisObj, void *model_);
// QTreeView::setRootIndex(const QModelIndex & index)
QtDartBindings_EXPORT void c_QTreeView__setRootIndex_QModelIndex(void *thisObj,
                                                                 void *index_);
// QTreeView::setRootIsDecorated(bool show)
QtDartBindings_EXPORT void c_QTreeView__setRootIsDecorated_bool(void *thisObj,
                                                                bool show);
// QTreeView::setRowHidden(int row, const QModelIndex & parent, bool hide)
QtDartBindings_EXPORT void
c_QTreeView__setRowHidden_int_QModelIndex_bool(void *thisObj, int row,
                                               void *parent_, bool hide);
// QTreeView::setSelection(const QRect & rect,
// QFlags<QItemSelectionModel::SelectionFlag> command)
QtDartBindings_EXPORT void
c_QTreeView__setSelection_QRect_SelectionFlags(void *thisObj, void *rect_,
                                               int command_);
// QTreeView::setSelectionModel(QItemSelectionModel * selectionModel)
QtDartBindings_EXPORT void
c_QTreeView__setSelectionModel_QItemSelectionModel(void *thisObj,
                                                   void *selectionModel_);
// QTreeView::setSortingEnabled(bool enable)
QtDartBindings_EXPORT void c_QTreeView__setSortingEnabled_bool(void *thisObj,
                                                               bool enable);
// QTreeView::setTreePosition(int logicalIndex)
QtDartBindings_EXPORT void c_QTreeView__setTreePosition_int(void *thisObj,
                                                            int logicalIndex);
// QTreeView::setUniformRowHeights(bool uniform)
QtDartBindings_EXPORT void c_QTreeView__setUniformRowHeights_bool(void *thisObj,
                                                                  bool uniform);
// QTreeView::setVisible(bool visible)
QtDartBindings_EXPORT void c_QTreeView__setVisible_bool(void *thisObj,
                                                        bool visible);
// QTreeView::setWordWrap(bool on)
QtDartBindings_EXPORT void c_QTreeView__setWordWrap_bool(void *thisObj,
                                                         bool on);
// QTreeView::setupViewport(QWidget * viewport)
QtDartBindings_EXPORT void c_QTreeView__setupViewport_QWidget(void *thisObj,
                                                              void *viewport_);
// QTreeView::sharedPainter() const
QtDartBindings_EXPORT void *c_QTreeView__sharedPainter(void *thisObj);
// QTreeView::showColumn(int column)
QtDartBindings_EXPORT void c_QTreeView__showColumn_int(void *thisObj,
                                                       int column);
// QTreeView::sizeHint() const
QtDartBindings_EXPORT void *c_QTreeView__sizeHint(void *thisObj);
// QTreeView::sizeHintForColumn(int column) const
QtDartBindings_EXPORT int c_QTreeView__sizeHintForColumn_int(void *thisObj,
                                                             int column);
// QTreeView::sizeHintForRow(int row) const
QtDartBindings_EXPORT int c_QTreeView__sizeHintForRow_int(void *thisObj,
                                                          int row);
// QTreeView::sortByColumn(int column, Qt::SortOrder order)
QtDartBindings_EXPORT void
c_QTreeView__sortByColumn_int_SortOrder(void *thisObj, int column, int order);
// QTreeView::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QTreeView__tr_char_char_int(const char *s, const char *c, int n);
// QTreeView::treePosition() const
QtDartBindings_EXPORT int c_QTreeView__treePosition(void *thisObj);
// QTreeView::uniformRowHeights() const
QtDartBindings_EXPORT bool c_QTreeView__uniformRowHeights(void *thisObj);
// QTreeView::updateEditorData()
QtDartBindings_EXPORT void c_QTreeView__updateEditorData(void *thisObj);
// QTreeView::updateEditorGeometries()
QtDartBindings_EXPORT void c_QTreeView__updateEditorGeometries(void *thisObj);
// QTreeView::updateGeometries()
QtDartBindings_EXPORT void c_QTreeView__updateGeometries(void *thisObj);
// QTreeView::verticalOffset() const
QtDartBindings_EXPORT int c_QTreeView__verticalOffset(void *thisObj);
// QTreeView::verticalScrollbarAction(int action)
QtDartBindings_EXPORT void
c_QTreeView__verticalScrollbarAction_int(void *thisObj, int action);
// QTreeView::verticalScrollbarValueChanged(int value)
QtDartBindings_EXPORT void
c_QTreeView__verticalScrollbarValueChanged_int(void *thisObj, int value);
// QTreeView::viewportEvent(QEvent * event)
QtDartBindings_EXPORT bool c_QTreeView__viewportEvent_QEvent(void *thisObj,
                                                             void *event_);
// QTreeView::viewportSizeHint() const
QtDartBindings_EXPORT void *c_QTreeView__viewportSizeHint(void *thisObj);
// QTreeView::visualRect(const QModelIndex & index) const
QtDartBindings_EXPORT void *c_QTreeView__visualRect_QModelIndex(void *thisObj,
                                                                void *index_);
// QTreeView::visualRegionForSelection(const QItemSelection & selection) const
QtDartBindings_EXPORT void *
c_QTreeView__visualRegionForSelection_QItemSelection(void *thisObj,
                                                     void *selection_);
// QTreeView::wordWrap() const
QtDartBindings_EXPORT bool c_QTreeView__wordWrap(void *thisObj);
QtDartBindings_EXPORT void c_QTreeView__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QTreeView__registerVirtualMethodCallback(void *ptr, void *callback,
                                           int methodId);
QtDartBindings_EXPORT void c_QTreeView_Finalizer(void *cppObj);
}
