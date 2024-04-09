
// tag=1040
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
// tag=1017
class QTreeView_wrapper : public ::QTreeView {
public:
  ~QTreeView_wrapper();
  using ::QAbstractItemView::CursorAction;

  // tag=1041
  QTreeView_wrapper(QWidget *parent = nullptr);
  // tag=1041
  bool allColumnsShowFocus() const;
  // tag=1041
  int autoExpandDelay() const;
  // tag=1041
  virtual void changeEvent(QEvent *event);
  // tag=1008
  virtual void changeEvent_nocallback(QEvent *event);
  // tag=1041
  void collapse(const QModelIndex &index);
  // tag=1041
  void collapseAll();
  // tag=1041
  void collapsed(const QModelIndex &index);
  // tag=1041
  int columnAt(int x) const;
  // tag=1041
  void columnCountChanged(int oldCount, int newCount);
  // tag=1041
  void columnMoved();
  // tag=1041
  void columnResized(int column, int oldSize, int newSize);
  // tag=1041
  int columnViewportPosition(int column) const;
  // tag=1041
  int columnWidth(int column) const;
  // tag=1041
  virtual void commitData(QWidget *editor);
  // tag=1008
  virtual void commitData_nocallback(QWidget *editor);
  // tag=1041
  virtual void currentChanged(const QModelIndex &current,
                              const QModelIndex &previous);
  // tag=1008
  virtual void currentChanged_nocallback(const QModelIndex &current,
                                         const QModelIndex &previous);
  // tag=1041
  virtual void customEvent(QEvent *event);
  // tag=1008
  virtual void customEvent_nocallback(QEvent *event);
  // tag=1041
  virtual void dataChanged(const QModelIndex &topLeft,
                           const QModelIndex &bottomRight,
                           const QList<int> &roles = QList<int>());
  // tag=1008
  virtual void dataChanged_nocallback(const QModelIndex &topLeft,
                                      const QModelIndex &bottomRight,
                                      const QList<int> &roles = QList<int>());
  // tag=1041
  virtual int devType() const;
  // tag=1008
  virtual int devType_nocallback() const;
  // tag=1041
  virtual void doItemsLayout();
  // tag=1008
  virtual void doItemsLayout_nocallback();
  // tag=1041
  virtual void drawBranches(QPainter *painter, const QRect &rect,
                            const QModelIndex &index) const;
  // tag=1008
  virtual void drawBranches_nocallback(QPainter *painter, const QRect &rect,
                                       const QModelIndex &index) const;
  // tag=1041
  void drawTree(QPainter *painter, const QRegion &region) const;
  // tag=1041
  virtual void editorDestroyed(QObject *editor);
  // tag=1008
  virtual void editorDestroyed_nocallback(QObject *editor);
  // tag=1041
  virtual bool event(QEvent *event);
  // tag=1008
  virtual bool event_nocallback(QEvent *event);
  // tag=1041
  virtual bool eventFilter(QObject *object, QEvent *event);
  // tag=1008
  virtual bool eventFilter_nocallback(QObject *object, QEvent *event);
  // tag=1041
  void expand(const QModelIndex &index);
  // tag=1041
  void expandAll();
  // tag=1041
  void expandRecursively(const QModelIndex &index, int depth = -1);
  // tag=1041
  void expandToDepth(int depth);
  // tag=1041
  void expanded(const QModelIndex &index);
  // tag=1041
  bool expandsOnDoubleClick() const;
  // tag=1041
  virtual bool focusNextPrevChild(bool next);
  // tag=1008
  virtual bool focusNextPrevChild_nocallback(bool next);
  // tag=1041
  virtual bool hasHeightForWidth() const;
  // tag=1008
  virtual bool hasHeightForWidth_nocallback() const;
  // tag=1041
  virtual int heightForWidth(int arg__1) const;
  // tag=1008
  virtual int heightForWidth_nocallback(int arg__1) const;
  // tag=1041
  void hideColumn(int column);
  // tag=1041
  virtual int horizontalOffset() const;
  // tag=1008
  virtual int horizontalOffset_nocallback() const;
  // tag=1041
  virtual void horizontalScrollbarAction(int action);
  // tag=1008
  virtual void horizontalScrollbarAction_nocallback(int action);
  // tag=1041
  virtual void horizontalScrollbarValueChanged(int value);
  // tag=1008
  virtual void horizontalScrollbarValueChanged_nocallback(int value);
  // tag=1041
  int indentation() const;
  // tag=1041
  QModelIndex indexAbove(const QModelIndex &index) const;
  // tag=1041
  virtual QModelIndex indexAt(const QPoint &p) const;
  // tag=1008
  virtual QModelIndex indexAt_nocallback(const QPoint &p) const;
  // tag=1041
  QModelIndex indexBelow(const QModelIndex &index) const;
  // tag=1041
  int indexRowSizeHint(const QModelIndex &index) const;
  // tag=1041
  virtual void initPainter(QPainter *painter) const;
  // tag=1008
  virtual void initPainter_nocallback(QPainter *painter) const;
  // tag=1041
  bool isAnimated() const;
  // tag=1041
  bool isColumnHidden(int column) const;
  // tag=1041
  bool isExpanded(const QModelIndex &index) const;
  // tag=1041
  bool isFirstColumnSpanned(int row, const QModelIndex &parent) const;
  // tag=1041
  bool isHeaderHidden() const;
  // tag=1041
  virtual bool isIndexHidden(const QModelIndex &index) const;
  // tag=1008
  virtual bool isIndexHidden_nocallback(const QModelIndex &index) const;
  // tag=1041
  bool isRowHidden(int row, const QModelIndex &parent) const;
  // tag=1041
  bool isSortingEnabled() const;
  // tag=1041
  bool itemsExpandable() const;
  // tag=1041
  virtual void keyboardSearch(const QString &search);
  // tag=1008
  virtual void keyboardSearch_nocallback(const QString &search);
  // tag=1041
  virtual void leaveEvent(QEvent *event);
  // tag=1008
  virtual void leaveEvent_nocallback(QEvent *event);
  // tag=1041
  virtual QSize minimumSizeHint() const;
  // tag=1008
  virtual QSize minimumSizeHint_nocallback() const;
  // tag=1041
  virtual void mouseDoubleClickEvent(QMouseEvent *event);
  // tag=1008
  virtual void mouseDoubleClickEvent_nocallback(QMouseEvent *event);
  // tag=1041
  virtual void mouseMoveEvent(QMouseEvent *event);
  // tag=1008
  virtual void mouseMoveEvent_nocallback(QMouseEvent *event);
  // tag=1041
  virtual void mousePressEvent(QMouseEvent *event);
  // tag=1008
  virtual void mousePressEvent_nocallback(QMouseEvent *event);
  // tag=1041
  virtual void mouseReleaseEvent(QMouseEvent *event);
  // tag=1008
  virtual void mouseReleaseEvent_nocallback(QMouseEvent *event);
  // tag=1041
  virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction,
                                 QFlags<Qt::KeyboardModifier> modifiers);
  // tag=1008
  virtual QModelIndex
  moveCursor_nocallback(QAbstractItemView::CursorAction cursorAction,
                        QFlags<Qt::KeyboardModifier> modifiers);
  // tag=1041
  virtual void paintEvent(QPaintEvent *event);
  // tag=1008
  virtual void paintEvent_nocallback(QPaintEvent *event);
  // tag=1041
  void reexpand();
  // tag=1041
  virtual void reset();
  // tag=1008
  virtual void reset_nocallback();
  // tag=1041
  void resetIndentation();
  // tag=1041
  void resizeColumnToContents(int column);
  // tag=1041
  bool rootIsDecorated() const;
  // tag=1041
  int rowHeight(const QModelIndex &index) const;
  // tag=1041
  virtual void rowsAboutToBeRemoved(const QModelIndex &parent, int start,
                                    int end);
  // tag=1008
  virtual void rowsAboutToBeRemoved_nocallback(const QModelIndex &parent,
                                               int start, int end);
  // tag=1041
  virtual void rowsInserted(const QModelIndex &parent, int start, int end);
  // tag=1008
  virtual void rowsInserted_nocallback(const QModelIndex &parent, int start,
                                       int end);
  // tag=1041
  void rowsRemoved(const QModelIndex &parent, int first, int last);
  // tag=1041
  virtual void scrollContentsBy(int dx, int dy);
  // tag=1008
  virtual void scrollContentsBy_nocallback(int dx, int dy);
  // tag=1041
  virtual void scrollTo(const QModelIndex &index,
                        QAbstractItemView::ScrollHint hint =
                            QAbstractItemView::ScrollHint::EnsureVisible);
  // tag=1008
  virtual void
  scrollTo_nocallback(const QModelIndex &index,
                      QAbstractItemView::ScrollHint hint =
                          QAbstractItemView::ScrollHint::EnsureVisible);
  // tag=1041
  virtual void selectAll();
  // tag=1008
  virtual void selectAll_nocallback();
  // tag=1041
  virtual QList<QModelIndex> selectedIndexes() const;
  // tag=1008
  virtual QList<QModelIndex> selectedIndexes_nocallback() const;
  // tag=1041
  virtual void selectionChanged(const QItemSelection &selected,
                                const QItemSelection &deselected);
  // tag=1008
  virtual void selectionChanged_nocallback(const QItemSelection &selected,
                                           const QItemSelection &deselected);
  // tag=1041
  virtual QFlags<QItemSelectionModel::SelectionFlag>
  selectionCommand(const QModelIndex &index,
                   const QEvent *event = nullptr) const;
  // tag=1008
  virtual QFlags<QItemSelectionModel::SelectionFlag>
  selectionCommand_nocallback(const QModelIndex &index,
                              const QEvent *event = nullptr) const;
  // tag=1041
  void setAllColumnsShowFocus(bool enable);
  // tag=1041
  void setAnimated(bool enable);
  // tag=1041
  void setAutoExpandDelay(int delay);
  // tag=1041
  void setColumnHidden(int column, bool hide);
  // tag=1041
  void setColumnWidth(int column, int width);
  // tag=1041
  void setExpanded(const QModelIndex &index, bool expand);
  // tag=1041
  void setExpandsOnDoubleClick(bool enable);
  // tag=1041
  void setFirstColumnSpanned(int row, const QModelIndex &parent, bool span);
  // tag=1041
  void setHeaderHidden(bool hide);
  // tag=1041
  void setIndentation(int i);
  // tag=1041
  void setItemsExpandable(bool enable);
  // tag=1041
  virtual void setModel(QAbstractItemModel *model);
  // tag=1008
  virtual void setModel_nocallback(QAbstractItemModel *model);
  // tag=1041
  virtual void setRootIndex(const QModelIndex &index);
  // tag=1008
  virtual void setRootIndex_nocallback(const QModelIndex &index);
  // tag=1041
  void setRootIsDecorated(bool show);
  // tag=1041
  void setRowHidden(int row, const QModelIndex &parent, bool hide);
  // tag=1041
  virtual void setSelection(const QRect &rect,
                            QFlags<QItemSelectionModel::SelectionFlag> command);
  // tag=1008
  virtual void
  setSelection_nocallback(const QRect &rect,
                          QFlags<QItemSelectionModel::SelectionFlag> command);
  // tag=1041
  virtual void setSelectionModel(QItemSelectionModel *selectionModel);
  // tag=1008
  virtual void
  setSelectionModel_nocallback(QItemSelectionModel *selectionModel);
  // tag=1041
  void setSortingEnabled(bool enable);
  // tag=1041
  void setTreePosition(int logicalIndex);
  // tag=1041
  void setUniformRowHeights(bool uniform);
  // tag=1041
  virtual void setVisible(bool visible);
  // tag=1008
  virtual void setVisible_nocallback(bool visible);
  // tag=1041
  void setWordWrap(bool on);
  // tag=1041
  virtual void setupViewport(QWidget *viewport);
  // tag=1008
  virtual void setupViewport_nocallback(QWidget *viewport);
  // tag=1041
  virtual QPainter *sharedPainter() const;
  // tag=1008
  virtual QPainter *sharedPainter_nocallback() const;
  // tag=1041
  void showColumn(int column);
  // tag=1041
  virtual QSize sizeHint() const;
  // tag=1008
  virtual QSize sizeHint_nocallback() const;
  // tag=1041
  virtual int sizeHintForColumn(int column) const;
  // tag=1008
  virtual int sizeHintForColumn_nocallback(int column) const;
  // tag=1041
  virtual int sizeHintForRow(int row) const;
  // tag=1008
  virtual int sizeHintForRow_nocallback(int row) const;
  // tag=1041
  void sortByColumn(int column, Qt::SortOrder order);
  // tag=1041
  static QString tr(const char *s, const char *c, int n);
  // tag=1041
  int treePosition() const;
  // tag=1041
  bool uniformRowHeights() const;
  // tag=1041
  virtual void updateEditorData();
  // tag=1008
  virtual void updateEditorData_nocallback();
  // tag=1041
  virtual void updateEditorGeometries();
  // tag=1008
  virtual void updateEditorGeometries_nocallback();
  // tag=1041
  virtual void updateGeometries();
  // tag=1008
  virtual void updateGeometries_nocallback();
  // tag=1041
  virtual int verticalOffset() const;
  // tag=1008
  virtual int verticalOffset_nocallback() const;
  // tag=1041
  virtual void verticalScrollbarAction(int action);
  // tag=1008
  virtual void verticalScrollbarAction_nocallback(int action);
  // tag=1041
  virtual void verticalScrollbarValueChanged(int value);
  // tag=1008
  virtual void verticalScrollbarValueChanged_nocallback(int value);
  // tag=1041
  virtual bool viewportEvent(QEvent *event);
  // tag=1008
  virtual bool viewportEvent_nocallback(QEvent *event);
  // tag=1041
  virtual QSize viewportSizeHint() const;
  // tag=1008
  virtual QSize viewportSizeHint_nocallback() const;
  // tag=1041
  virtual QRect visualRect(const QModelIndex &index) const;
  // tag=1008
  virtual QRect visualRect_nocallback(const QModelIndex &index) const;
  // tag=1041
  virtual QRegion
  visualRegionForSelection(const QItemSelection &selection) const;
  // tag=1008
  virtual QRegion
  visualRegionForSelection_nocallback(const QItemSelection &selection) const;
  // tag=1041
  bool wordWrap() const;
  // tag=1042
  typedef void (*Callback_changeEvent)(void *, QEvent *event);
  Callback_changeEvent m_changeEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_commitData)(void *, QWidget *editor);
  Callback_commitData m_commitDataCallback = nullptr;
  // tag=1042
  typedef void (*Callback_currentChanged)(void *, const QModelIndex &current,
                                          const QModelIndex &previous);
  Callback_currentChanged m_currentChangedCallback = nullptr;
  // tag=1042
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_dataChanged)(void *, const QModelIndex &topLeft,
                                       const QModelIndex &bottomRight,
                                       const QList<int> &roles);
  Callback_dataChanged m_dataChangedCallback = nullptr;
  // tag=1042
  typedef int (*Callback_devType)(void *);
  Callback_devType m_devTypeCallback = nullptr;
  // tag=1042
  typedef void (*Callback_doItemsLayout)(void *);
  Callback_doItemsLayout m_doItemsLayoutCallback = nullptr;
  // tag=1042
  typedef void (*Callback_drawBranches)(void *, QPainter *painter,
                                        const QRect &rect,
                                        const QModelIndex &index);
  Callback_drawBranches m_drawBranchesCallback = nullptr;
  // tag=1042
  typedef void (*Callback_editorDestroyed)(void *, QObject *editor);
  Callback_editorDestroyed m_editorDestroyedCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_event)(void *, QEvent *event);
  Callback_event m_eventCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_eventFilter)(void *, QObject *object, QEvent *event);
  Callback_eventFilter m_eventFilterCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_focusNextPrevChild)(void *, bool next);
  Callback_focusNextPrevChild m_focusNextPrevChildCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_hasHeightForWidth)(void *);
  Callback_hasHeightForWidth m_hasHeightForWidthCallback = nullptr;
  // tag=1042
  typedef int (*Callback_heightForWidth)(void *, int arg__1);
  Callback_heightForWidth m_heightForWidthCallback = nullptr;
  // tag=1042
  typedef int (*Callback_horizontalOffset)(void *);
  Callback_horizontalOffset m_horizontalOffsetCallback = nullptr;
  // tag=1042
  typedef void (*Callback_horizontalScrollbarAction)(void *, int action);
  Callback_horizontalScrollbarAction m_horizontalScrollbarActionCallback =
      nullptr;
  // tag=1042
  typedef void (*Callback_horizontalScrollbarValueChanged)(void *, int value);
  Callback_horizontalScrollbarValueChanged
      m_horizontalScrollbarValueChangedCallback = nullptr;
  // tag=1042
  typedef QModelIndex *(*Callback_indexAt)(void *, const QPoint &p);
  Callback_indexAt m_indexAtCallback = nullptr;
  // tag=1042
  typedef void (*Callback_initPainter)(void *, QPainter *painter);
  Callback_initPainter m_initPainterCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_isIndexHidden)(void *, const QModelIndex &index);
  Callback_isIndexHidden m_isIndexHiddenCallback = nullptr;
  // tag=1042
  typedef void (*Callback_keyboardSearch)(void *, const QString &search);
  Callback_keyboardSearch m_keyboardSearchCallback = nullptr;
  // tag=1042
  typedef void (*Callback_leaveEvent)(void *, QEvent *event);
  Callback_leaveEvent m_leaveEventCallback = nullptr;
  // tag=1042
  typedef QSize *(*Callback_minimumSizeHint)(void *);
  Callback_minimumSizeHint m_minimumSizeHintCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mouseDoubleClickEvent)(void *, QMouseEvent *event);
  Callback_mouseDoubleClickEvent m_mouseDoubleClickEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mouseMoveEvent)(void *, QMouseEvent *event);
  Callback_mouseMoveEvent m_mouseMoveEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mousePressEvent)(void *, QMouseEvent *event);
  Callback_mousePressEvent m_mousePressEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mouseReleaseEvent)(void *, QMouseEvent *event);
  Callback_mouseReleaseEvent m_mouseReleaseEventCallback = nullptr;
  // tag=1042
  typedef QModelIndex *(*Callback_moveCursor)(
      void *, QAbstractItemView::CursorAction cursorAction,
      QFlags<Qt::KeyboardModifier> modifiers);
  Callback_moveCursor m_moveCursorCallback = nullptr;
  // tag=1042
  typedef void (*Callback_paintEvent)(void *, QPaintEvent *event);
  Callback_paintEvent m_paintEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_reset)(void *);
  Callback_reset m_resetCallback = nullptr;
  // tag=1042
  typedef void (*Callback_rowsAboutToBeRemoved)(void *,
                                                const QModelIndex &parent,
                                                int start, int end);
  Callback_rowsAboutToBeRemoved m_rowsAboutToBeRemovedCallback = nullptr;
  // tag=1042
  typedef void (*Callback_rowsInserted)(void *, const QModelIndex &parent,
                                        int start, int end);
  Callback_rowsInserted m_rowsInsertedCallback = nullptr;
  // tag=1042
  typedef void (*Callback_scrollContentsBy)(void *, int dx, int dy);
  Callback_scrollContentsBy m_scrollContentsByCallback = nullptr;
  // tag=1042
  typedef void (*Callback_scrollTo)(void *, const QModelIndex &index,
                                    QAbstractItemView::ScrollHint hint);
  Callback_scrollTo m_scrollToCallback = nullptr;
  // tag=1042
  typedef void (*Callback_selectAll)(void *);
  Callback_selectAll m_selectAllCallback = nullptr;
  // tag=1042
  typedef QList<QModelIndex> *(*Callback_selectedIndexes)(void *);
  Callback_selectedIndexes m_selectedIndexesCallback = nullptr;
  // tag=1042
  typedef void (*Callback_selectionChanged)(void *,
                                            const QItemSelection &selected,
                                            const QItemSelection &deselected);
  Callback_selectionChanged m_selectionChangedCallback = nullptr;
  // tag=1042
  typedef QFlags<QItemSelectionModel::SelectionFlag> (
      *Callback_selectionCommand)(void *, const QModelIndex &index,
                                  const QEvent *event);
  Callback_selectionCommand m_selectionCommandCallback = nullptr;
  // tag=1042
  typedef void (*Callback_setModel)(void *, QAbstractItemModel *model);
  Callback_setModel m_setModelCallback = nullptr;
  // tag=1042
  typedef void (*Callback_setRootIndex)(void *, const QModelIndex &index);
  Callback_setRootIndex m_setRootIndexCallback = nullptr;
  // tag=1042
  typedef void (*Callback_setSelection)(
      void *, const QRect &rect,
      QFlags<QItemSelectionModel::SelectionFlag> command);
  Callback_setSelection m_setSelectionCallback = nullptr;
  // tag=1042
  typedef void (*Callback_setSelectionModel)(
      void *, QItemSelectionModel *selectionModel);
  Callback_setSelectionModel m_setSelectionModelCallback = nullptr;
  // tag=1042
  typedef void (*Callback_setVisible)(void *, bool visible);
  Callback_setVisible m_setVisibleCallback = nullptr;
  // tag=1042
  typedef void (*Callback_setupViewport)(void *, QWidget *viewport);
  Callback_setupViewport m_setupViewportCallback = nullptr;
  // tag=1042
  typedef QPainter *(*Callback_sharedPainter)(void *);
  Callback_sharedPainter m_sharedPainterCallback = nullptr;
  // tag=1042
  typedef QSize *(*Callback_sizeHint)(void *);
  Callback_sizeHint m_sizeHintCallback = nullptr;
  // tag=1042
  typedef int (*Callback_sizeHintForColumn)(void *, int column);
  Callback_sizeHintForColumn m_sizeHintForColumnCallback = nullptr;
  // tag=1042
  typedef int (*Callback_sizeHintForRow)(void *, int row);
  Callback_sizeHintForRow m_sizeHintForRowCallback = nullptr;
  // tag=1042
  typedef void (*Callback_updateEditorData)(void *);
  Callback_updateEditorData m_updateEditorDataCallback = nullptr;
  // tag=1042
  typedef void (*Callback_updateEditorGeometries)(void *);
  Callback_updateEditorGeometries m_updateEditorGeometriesCallback = nullptr;
  // tag=1042
  typedef void (*Callback_updateGeometries)(void *);
  Callback_updateGeometries m_updateGeometriesCallback = nullptr;
  // tag=1042
  typedef int (*Callback_verticalOffset)(void *);
  Callback_verticalOffset m_verticalOffsetCallback = nullptr;
  // tag=1042
  typedef void (*Callback_verticalScrollbarAction)(void *, int action);
  Callback_verticalScrollbarAction m_verticalScrollbarActionCallback = nullptr;
  // tag=1042
  typedef void (*Callback_verticalScrollbarValueChanged)(void *, int value);
  Callback_verticalScrollbarValueChanged
      m_verticalScrollbarValueChangedCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_viewportEvent)(void *, QEvent *event);
  Callback_viewportEvent m_viewportEventCallback = nullptr;
  // tag=1042
  typedef QSize *(*Callback_viewportSizeHint)(void *);
  Callback_viewportSizeHint m_viewportSizeHintCallback = nullptr;
  // tag=1042
  typedef QRect *(*Callback_visualRect)(void *, const QModelIndex &index);
  Callback_visualRect m_visualRectCallback = nullptr;
  // tag=1042
  typedef QRegion *(*Callback_visualRegionForSelection)(
      void *, const QItemSelection &selection);
  Callback_visualRegionForSelection m_visualRegionForSelectionCallback =
      nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QTreeView::QTreeView(QWidget * parent)
QtDartBindings_EXPORT void *c_QTreeView__constructor_QWidget(void *parent_);

// tag=1067
//  QTreeView::allColumnsShowFocus() const
QtDartBindings_EXPORT bool c_QTreeView__allColumnsShowFocus(void *thisObj);

// tag=1067
//  QTreeView::autoExpandDelay() const
QtDartBindings_EXPORT int c_QTreeView__autoExpandDelay(void *thisObj);

// tag=1067
//  QTreeView::changeEvent(QEvent * event)
QtDartBindings_EXPORT void c_QTreeView__changeEvent_QEvent(void *thisObj,
                                                           void *event_);

// tag=1067
//  QTreeView::collapse(const QModelIndex & index)
QtDartBindings_EXPORT void c_QTreeView__collapse_QModelIndex(void *thisObj,
                                                             void *index_);

// tag=1067
//  QTreeView::collapseAll()
QtDartBindings_EXPORT void c_QTreeView__collapseAll(void *thisObj);

// tag=1067
//  QTreeView::collapsed(const QModelIndex & index)
QtDartBindings_EXPORT void c_QTreeView__collapsed_QModelIndex(void *thisObj,
                                                              void *index_);

// tag=1078
QtDartBindings_EXPORT void
c_QTreeView__onCollapsed_QModelIndex(void *thisObj, void *contextQObject,
                                     void *callback);
// tag=1067
//  QTreeView::columnAt(int x) const
QtDartBindings_EXPORT int c_QTreeView__columnAt_int(void *thisObj, int x);

// tag=1067
//  QTreeView::columnCountChanged(int oldCount, int newCount)
QtDartBindings_EXPORT void
c_QTreeView__columnCountChanged_int_int(void *thisObj, int oldCount,
                                        int newCount);

// tag=1067
//  QTreeView::columnMoved()
QtDartBindings_EXPORT void c_QTreeView__columnMoved(void *thisObj);

// tag=1067
//  QTreeView::columnResized(int column, int oldSize, int newSize)
QtDartBindings_EXPORT void c_QTreeView__columnResized_int_int_int(void *thisObj,
                                                                  int column,
                                                                  int oldSize,
                                                                  int newSize);

// tag=1067
//  QTreeView::columnViewportPosition(int column) const
QtDartBindings_EXPORT int c_QTreeView__columnViewportPosition_int(void *thisObj,
                                                                  int column);

// tag=1067
//  QTreeView::columnWidth(int column) const
QtDartBindings_EXPORT int c_QTreeView__columnWidth_int(void *thisObj,
                                                       int column);

// tag=1067
//  QTreeView::commitData(QWidget * editor)
QtDartBindings_EXPORT void c_QTreeView__commitData_QWidget(void *thisObj,
                                                           void *editor_);

// tag=1067
//  QTreeView::currentChanged(const QModelIndex & current, const QModelIndex &
//  previous)
QtDartBindings_EXPORT void c_QTreeView__currentChanged_QModelIndex_QModelIndex(
    void *thisObj, void *current_, void *previous_);

// tag=1067
//  QTreeView::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QTreeView__customEvent_QEvent(void *thisObj,
                                                           void *event_);

// tag=1067
//  QTreeView::dataChanged(const QModelIndex & topLeft, const QModelIndex &
//  bottomRight, const QList<int > & roles)
QtDartBindings_EXPORT void
c_QTreeView__dataChanged_QModelIndex_QModelIndex_QList_int(void *thisObj,
                                                           void *topLeft_,
                                                           void *bottomRight_,
                                                           void *roles_);

// tag=1067
//  QTreeView::devType() const
QtDartBindings_EXPORT int c_QTreeView__devType(void *thisObj);

// tag=1067
//  QTreeView::doItemsLayout()
QtDartBindings_EXPORT void c_QTreeView__doItemsLayout(void *thisObj);

// tag=1067
//  QTreeView::drawBranches(QPainter * painter, const QRect & rect, const
//  QModelIndex & index) const
QtDartBindings_EXPORT void c_QTreeView__drawBranches_QPainter_QRect_QModelIndex(
    void *thisObj, void *painter_, void *rect_, void *index_);

// tag=1067
//  QTreeView::drawTree(QPainter * painter, const QRegion & region) const
QtDartBindings_EXPORT void
c_QTreeView__drawTree_QPainter_QRegion(void *thisObj, void *painter_,
                                       void *region_);

// tag=1067
//  QTreeView::editorDestroyed(QObject * editor)
QtDartBindings_EXPORT void c_QTreeView__editorDestroyed_QObject(void *thisObj,
                                                                void *editor_);

// tag=1067
//  QTreeView::event(QEvent * event)
QtDartBindings_EXPORT bool c_QTreeView__event_QEvent(void *thisObj,
                                                     void *event_);

// tag=1067
//  QTreeView::eventFilter(QObject * object, QEvent * event)
QtDartBindings_EXPORT bool
c_QTreeView__eventFilter_QObject_QEvent(void *thisObj, void *object_,
                                        void *event_);

// tag=1067
//  QTreeView::expand(const QModelIndex & index)
QtDartBindings_EXPORT void c_QTreeView__expand_QModelIndex(void *thisObj,
                                                           void *index_);

// tag=1067
//  QTreeView::expandAll()
QtDartBindings_EXPORT void c_QTreeView__expandAll(void *thisObj);

// tag=1067
//  QTreeView::expandRecursively(const QModelIndex & index, int depth)
QtDartBindings_EXPORT void
c_QTreeView__expandRecursively_QModelIndex_int(void *thisObj, void *index_,
                                               int depth);

// tag=1067
//  QTreeView::expandToDepth(int depth)
QtDartBindings_EXPORT void c_QTreeView__expandToDepth_int(void *thisObj,
                                                          int depth);

// tag=1067
//  QTreeView::expanded(const QModelIndex & index)
QtDartBindings_EXPORT void c_QTreeView__expanded_QModelIndex(void *thisObj,
                                                             void *index_);

// tag=1078
QtDartBindings_EXPORT void
c_QTreeView__onExpanded_QModelIndex(void *thisObj, void *contextQObject,
                                    void *callback);
// tag=1067
//  QTreeView::expandsOnDoubleClick() const
QtDartBindings_EXPORT bool c_QTreeView__expandsOnDoubleClick(void *thisObj);

// tag=1067
//  QTreeView::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QTreeView__focusNextPrevChild_bool(void *thisObj,
                                                                bool next);

// tag=1067
//  QTreeView::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QTreeView__hasHeightForWidth(void *thisObj);

// tag=1067
//  QTreeView::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QTreeView__heightForWidth_int(void *thisObj,
                                                          int arg__1);

// tag=1067
//  QTreeView::hideColumn(int column)
QtDartBindings_EXPORT void c_QTreeView__hideColumn_int(void *thisObj,
                                                       int column);

// tag=1067
//  QTreeView::horizontalOffset() const
QtDartBindings_EXPORT int c_QTreeView__horizontalOffset(void *thisObj);

// tag=1067
//  QTreeView::horizontalScrollbarAction(int action)
QtDartBindings_EXPORT void
c_QTreeView__horizontalScrollbarAction_int(void *thisObj, int action);

// tag=1067
//  QTreeView::horizontalScrollbarValueChanged(int value)
QtDartBindings_EXPORT void
c_QTreeView__horizontalScrollbarValueChanged_int(void *thisObj, int value);

// tag=1067
//  QTreeView::indentation() const
QtDartBindings_EXPORT int c_QTreeView__indentation(void *thisObj);

// tag=1067
//  QTreeView::indexAbove(const QModelIndex & index) const
QtDartBindings_EXPORT void *c_QTreeView__indexAbove_QModelIndex(void *thisObj,
                                                                void *index_);

// tag=1067
//  QTreeView::indexAt(const QPoint & p) const
QtDartBindings_EXPORT void *c_QTreeView__indexAt_QPoint(void *thisObj,
                                                        void *p_);

// tag=1067
//  QTreeView::indexBelow(const QModelIndex & index) const
QtDartBindings_EXPORT void *c_QTreeView__indexBelow_QModelIndex(void *thisObj,
                                                                void *index_);

// tag=1067
//  QTreeView::indexRowSizeHint(const QModelIndex & index) const
QtDartBindings_EXPORT int
c_QTreeView__indexRowSizeHint_QModelIndex(void *thisObj, void *index_);

// tag=1067
//  QTreeView::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QTreeView__initPainter_QPainter(void *thisObj,
                                                             void *painter_);

// tag=1067
//  QTreeView::isAnimated() const
QtDartBindings_EXPORT bool c_QTreeView__isAnimated(void *thisObj);

// tag=1067
//  QTreeView::isColumnHidden(int column) const
QtDartBindings_EXPORT bool c_QTreeView__isColumnHidden_int(void *thisObj,
                                                           int column);

// tag=1067
//  QTreeView::isExpanded(const QModelIndex & index) const
QtDartBindings_EXPORT bool c_QTreeView__isExpanded_QModelIndex(void *thisObj,
                                                               void *index_);

// tag=1067
//  QTreeView::isFirstColumnSpanned(int row, const QModelIndex & parent) const
QtDartBindings_EXPORT bool
c_QTreeView__isFirstColumnSpanned_int_QModelIndex(void *thisObj, int row,
                                                  void *parent_);

// tag=1067
//  QTreeView::isHeaderHidden() const
QtDartBindings_EXPORT bool c_QTreeView__isHeaderHidden(void *thisObj);

// tag=1067
//  QTreeView::isIndexHidden(const QModelIndex & index) const
QtDartBindings_EXPORT bool c_QTreeView__isIndexHidden_QModelIndex(void *thisObj,
                                                                  void *index_);

// tag=1067
//  QTreeView::isRowHidden(int row, const QModelIndex & parent) const
QtDartBindings_EXPORT bool
c_QTreeView__isRowHidden_int_QModelIndex(void *thisObj, int row, void *parent_);

// tag=1067
//  QTreeView::isSortingEnabled() const
QtDartBindings_EXPORT bool c_QTreeView__isSortingEnabled(void *thisObj);

// tag=1067
//  QTreeView::itemsExpandable() const
QtDartBindings_EXPORT bool c_QTreeView__itemsExpandable(void *thisObj);

// tag=1067
//  QTreeView::keyboardSearch(const QString & search)
QtDartBindings_EXPORT void
c_QTreeView__keyboardSearch_QString(void *thisObj, const char *search_);

// tag=1067
//  QTreeView::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QTreeView__leaveEvent_QEvent(void *thisObj,
                                                          void *event_);

// tag=1067
//  QTreeView::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QTreeView__minimumSizeHint(void *thisObj);

// tag=1067
//  QTreeView::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QTreeView__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QTreeView::mouseMoveEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QTreeView__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QTreeView::mousePressEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QTreeView__mousePressEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QTreeView::mouseReleaseEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QTreeView__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QTreeView::moveCursor(QAbstractItemView::CursorAction cursorAction,
//  QFlags<Qt::KeyboardModifier> modifiers)
QtDartBindings_EXPORT void *
c_QTreeView__moveCursor_CursorAction_KeyboardModifiers(void *thisObj,
                                                       int cursorAction,
                                                       int modifiers_);

// tag=1067
//  QTreeView::paintEvent(QPaintEvent * event)
QtDartBindings_EXPORT void c_QTreeView__paintEvent_QPaintEvent(void *thisObj,
                                                               void *event_);

// tag=1067
//  QTreeView::reexpand()
QtDartBindings_EXPORT void c_QTreeView__reexpand(void *thisObj);

// tag=1067
//  QTreeView::reset()
QtDartBindings_EXPORT void c_QTreeView__reset(void *thisObj);

// tag=1067
//  QTreeView::resetIndentation()
QtDartBindings_EXPORT void c_QTreeView__resetIndentation(void *thisObj);

// tag=1067
//  QTreeView::resizeColumnToContents(int column)
QtDartBindings_EXPORT void
c_QTreeView__resizeColumnToContents_int(void *thisObj, int column);

// tag=1067
//  QTreeView::rootIsDecorated() const
QtDartBindings_EXPORT bool c_QTreeView__rootIsDecorated(void *thisObj);

// tag=1067
//  QTreeView::rowHeight(const QModelIndex & index) const
QtDartBindings_EXPORT int c_QTreeView__rowHeight_QModelIndex(void *thisObj,
                                                             void *index_);

// tag=1067
//  QTreeView::rowsAboutToBeRemoved(const QModelIndex & parent, int start, int
//  end)
QtDartBindings_EXPORT void
c_QTreeView__rowsAboutToBeRemoved_QModelIndex_int_int(void *thisObj,
                                                      void *parent_, int start,
                                                      int end);

// tag=1067
//  QTreeView::rowsInserted(const QModelIndex & parent, int start, int end)
QtDartBindings_EXPORT void
c_QTreeView__rowsInserted_QModelIndex_int_int(void *thisObj, void *parent_,
                                              int start, int end);

// tag=1067
//  QTreeView::rowsRemoved(const QModelIndex & parent, int first, int last)
QtDartBindings_EXPORT void
c_QTreeView__rowsRemoved_QModelIndex_int_int(void *thisObj, void *parent_,
                                             int first, int last);

// tag=1067
//  QTreeView::scrollContentsBy(int dx, int dy)
QtDartBindings_EXPORT void
c_QTreeView__scrollContentsBy_int_int(void *thisObj, int dx, int dy);

// tag=1067
//  QTreeView::scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint
//  hint)
QtDartBindings_EXPORT void
c_QTreeView__scrollTo_QModelIndex_ScrollHint(void *thisObj, void *index_,
                                             int hint);

// tag=1067
//  QTreeView::selectAll()
QtDartBindings_EXPORT void c_QTreeView__selectAll(void *thisObj);

// tag=1067
//  QTreeView::selectedIndexes() const
QtDartBindings_EXPORT void *c_QTreeView__selectedIndexes(void *thisObj);

// tag=1067
//  QTreeView::selectionChanged(const QItemSelection & selected, const
//  QItemSelection & deselected)
QtDartBindings_EXPORT void
c_QTreeView__selectionChanged_QItemSelection_QItemSelection(void *thisObj,
                                                            void *selected_,
                                                            void *deselected_);

// tag=1067
//  QTreeView::selectionCommand(const QModelIndex & index, const QEvent * event)
//  const
QtDartBindings_EXPORT int
c_QTreeView__selectionCommand_QModelIndex_QEvent(void *thisObj, void *index_,
                                                 void *event_);

// tag=1067
//  QTreeView::setAllColumnsShowFocus(bool enable)
QtDartBindings_EXPORT void
c_QTreeView__setAllColumnsShowFocus_bool(void *thisObj, bool enable);

// tag=1067
//  QTreeView::setAnimated(bool enable)
QtDartBindings_EXPORT void c_QTreeView__setAnimated_bool(void *thisObj,
                                                         bool enable);

// tag=1067
//  QTreeView::setAutoExpandDelay(int delay)
QtDartBindings_EXPORT void c_QTreeView__setAutoExpandDelay_int(void *thisObj,
                                                               int delay);

// tag=1067
//  QTreeView::setColumnHidden(int column, bool hide)
QtDartBindings_EXPORT void
c_QTreeView__setColumnHidden_int_bool(void *thisObj, int column, bool hide);

// tag=1067
//  QTreeView::setColumnWidth(int column, int width)
QtDartBindings_EXPORT void
c_QTreeView__setColumnWidth_int_int(void *thisObj, int column, int width);

// tag=1067
//  QTreeView::setExpanded(const QModelIndex & index, bool expand)
QtDartBindings_EXPORT void
c_QTreeView__setExpanded_QModelIndex_bool(void *thisObj, void *index_,
                                          bool expand);

// tag=1067
//  QTreeView::setExpandsOnDoubleClick(bool enable)
QtDartBindings_EXPORT void
c_QTreeView__setExpandsOnDoubleClick_bool(void *thisObj, bool enable);

// tag=1067
//  QTreeView::setFirstColumnSpanned(int row, const QModelIndex & parent, bool
//  span)
QtDartBindings_EXPORT void
c_QTreeView__setFirstColumnSpanned_int_QModelIndex_bool(void *thisObj, int row,
                                                        void *parent_,
                                                        bool span);

// tag=1067
//  QTreeView::setHeaderHidden(bool hide)
QtDartBindings_EXPORT void c_QTreeView__setHeaderHidden_bool(void *thisObj,
                                                             bool hide);

// tag=1067
//  QTreeView::setIndentation(int i)
QtDartBindings_EXPORT void c_QTreeView__setIndentation_int(void *thisObj,
                                                           int i);

// tag=1067
//  QTreeView::setItemsExpandable(bool enable)
QtDartBindings_EXPORT void c_QTreeView__setItemsExpandable_bool(void *thisObj,
                                                                bool enable);

// tag=1067
//  QTreeView::setModel(QAbstractItemModel * model)
QtDartBindings_EXPORT void
c_QTreeView__setModel_QAbstractItemModel(void *thisObj, void *model_);

// tag=1067
//  QTreeView::setRootIndex(const QModelIndex & index)
QtDartBindings_EXPORT void c_QTreeView__setRootIndex_QModelIndex(void *thisObj,
                                                                 void *index_);

// tag=1067
//  QTreeView::setRootIsDecorated(bool show)
QtDartBindings_EXPORT void c_QTreeView__setRootIsDecorated_bool(void *thisObj,
                                                                bool show);

// tag=1067
//  QTreeView::setRowHidden(int row, const QModelIndex & parent, bool hide)
QtDartBindings_EXPORT void
c_QTreeView__setRowHidden_int_QModelIndex_bool(void *thisObj, int row,
                                               void *parent_, bool hide);

// tag=1067
//  QTreeView::setSelection(const QRect & rect,
//  QFlags<QItemSelectionModel::SelectionFlag> command)
QtDartBindings_EXPORT void
c_QTreeView__setSelection_QRect_SelectionFlags(void *thisObj, void *rect_,
                                               int command_);

// tag=1067
//  QTreeView::setSelectionModel(QItemSelectionModel * selectionModel)
QtDartBindings_EXPORT void
c_QTreeView__setSelectionModel_QItemSelectionModel(void *thisObj,
                                                   void *selectionModel_);

// tag=1067
//  QTreeView::setSortingEnabled(bool enable)
QtDartBindings_EXPORT void c_QTreeView__setSortingEnabled_bool(void *thisObj,
                                                               bool enable);

// tag=1067
//  QTreeView::setTreePosition(int logicalIndex)
QtDartBindings_EXPORT void c_QTreeView__setTreePosition_int(void *thisObj,
                                                            int logicalIndex);

// tag=1067
//  QTreeView::setUniformRowHeights(bool uniform)
QtDartBindings_EXPORT void c_QTreeView__setUniformRowHeights_bool(void *thisObj,
                                                                  bool uniform);

// tag=1067
//  QTreeView::setVisible(bool visible)
QtDartBindings_EXPORT void c_QTreeView__setVisible_bool(void *thisObj,
                                                        bool visible);

// tag=1067
//  QTreeView::setWordWrap(bool on)
QtDartBindings_EXPORT void c_QTreeView__setWordWrap_bool(void *thisObj,
                                                         bool on);

// tag=1067
//  QTreeView::setupViewport(QWidget * viewport)
QtDartBindings_EXPORT void c_QTreeView__setupViewport_QWidget(void *thisObj,
                                                              void *viewport_);

// tag=1067
//  QTreeView::sharedPainter() const
QtDartBindings_EXPORT void *c_QTreeView__sharedPainter(void *thisObj);

// tag=1067
//  QTreeView::showColumn(int column)
QtDartBindings_EXPORT void c_QTreeView__showColumn_int(void *thisObj,
                                                       int column);

// tag=1067
//  QTreeView::sizeHint() const
QtDartBindings_EXPORT void *c_QTreeView__sizeHint(void *thisObj);

// tag=1067
//  QTreeView::sizeHintForColumn(int column) const
QtDartBindings_EXPORT int c_QTreeView__sizeHintForColumn_int(void *thisObj,
                                                             int column);

// tag=1067
//  QTreeView::sizeHintForRow(int row) const
QtDartBindings_EXPORT int c_QTreeView__sizeHintForRow_int(void *thisObj,
                                                          int row);

// tag=1067
//  QTreeView::sortByColumn(int column, Qt::SortOrder order)
QtDartBindings_EXPORT void
c_QTreeView__sortByColumn_int_SortOrder(void *thisObj, int column, int order);

// tag=1067
//  QTreeView::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QTreeView__tr_char_char_int(const char *s, const char *c, int n);

// tag=1067
//  QTreeView::treePosition() const
QtDartBindings_EXPORT int c_QTreeView__treePosition(void *thisObj);

// tag=1067
//  QTreeView::uniformRowHeights() const
QtDartBindings_EXPORT bool c_QTreeView__uniformRowHeights(void *thisObj);

// tag=1067
//  QTreeView::updateEditorData()
QtDartBindings_EXPORT void c_QTreeView__updateEditorData(void *thisObj);

// tag=1067
//  QTreeView::updateEditorGeometries()
QtDartBindings_EXPORT void c_QTreeView__updateEditorGeometries(void *thisObj);

// tag=1067
//  QTreeView::updateGeometries()
QtDartBindings_EXPORT void c_QTreeView__updateGeometries(void *thisObj);

// tag=1067
//  QTreeView::verticalOffset() const
QtDartBindings_EXPORT int c_QTreeView__verticalOffset(void *thisObj);

// tag=1067
//  QTreeView::verticalScrollbarAction(int action)
QtDartBindings_EXPORT void
c_QTreeView__verticalScrollbarAction_int(void *thisObj, int action);

// tag=1067
//  QTreeView::verticalScrollbarValueChanged(int value)
QtDartBindings_EXPORT void
c_QTreeView__verticalScrollbarValueChanged_int(void *thisObj, int value);

// tag=1067
//  QTreeView::viewportEvent(QEvent * event)
QtDartBindings_EXPORT bool c_QTreeView__viewportEvent_QEvent(void *thisObj,
                                                             void *event_);

// tag=1067
//  QTreeView::viewportSizeHint() const
QtDartBindings_EXPORT void *c_QTreeView__viewportSizeHint(void *thisObj);

// tag=1067
//  QTreeView::visualRect(const QModelIndex & index) const
QtDartBindings_EXPORT void *c_QTreeView__visualRect_QModelIndex(void *thisObj,
                                                                void *index_);

// tag=1067
//  QTreeView::visualRegionForSelection(const QItemSelection & selection) const
QtDartBindings_EXPORT void *
c_QTreeView__visualRegionForSelection_QItemSelection(void *thisObj,
                                                     void *selection_);

// tag=1067
//  QTreeView::wordWrap() const
QtDartBindings_EXPORT bool c_QTreeView__wordWrap(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QTreeView__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QTreeView__registerVirtualMethodCallback(void *ptr, void *callback,
                                           int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QTreeView_Finalizer(void *, void *cppObj, void *);
}
