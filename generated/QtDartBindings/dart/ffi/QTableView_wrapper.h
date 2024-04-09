
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
#include <qtableview.h>
#include <qwidget.h>

namespace QtDartBindings_wrappersNS {
// tag=1017
class QTableView_wrapper : public ::QTableView {
public:
  ~QTableView_wrapper();
  using ::QAbstractItemView::CursorAction;

  // tag=1041
  QTableView_wrapper(QWidget *parent = nullptr);
  // tag=1041
  virtual void changeEvent(QEvent *arg__1);
  // tag=1008
  virtual void changeEvent_nocallback(QEvent *arg__1);
  // tag=1041
  void clearSpans();
  // tag=1041
  int columnAt(int x) const;
  // tag=1041
  void columnCountChanged(int oldCount, int newCount);
  // tag=1041
  void columnMoved(int column, int oldIndex, int newIndex);
  // tag=1041
  void columnResized(int column, int oldWidth, int newWidth);
  // tag=1041
  int columnSpan(int row, int column) const;
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
  void hideRow(int row);
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
  virtual QModelIndex indexAt(const QPoint &p) const;
  // tag=1008
  virtual QModelIndex indexAt_nocallback(const QPoint &p) const;
  // tag=1041
  virtual void initPainter(QPainter *painter) const;
  // tag=1008
  virtual void initPainter_nocallback(QPainter *painter) const;
  // tag=1041
  bool isColumnHidden(int column) const;
  // tag=1041
  bool isCornerButtonEnabled() const;
  // tag=1041
  virtual bool isIndexHidden(const QModelIndex &index) const;
  // tag=1008
  virtual bool isIndexHidden_nocallback(const QModelIndex &index) const;
  // tag=1041
  bool isRowHidden(int row) const;
  // tag=1041
  bool isSortingEnabled() const;
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
  virtual void paintEvent(QPaintEvent *e);
  // tag=1008
  virtual void paintEvent_nocallback(QPaintEvent *e);
  // tag=1041
  virtual void reset();
  // tag=1008
  virtual void reset_nocallback();
  // tag=1041
  void resizeColumnToContents(int column);
  // tag=1041
  void resizeColumnsToContents();
  // tag=1041
  void resizeRowToContents(int row);
  // tag=1041
  void resizeRowsToContents();
  // tag=1041
  int rowAt(int y) const;
  // tag=1041
  void rowCountChanged(int oldCount, int newCount);
  // tag=1041
  int rowHeight(int row) const;
  // tag=1041
  void rowMoved(int row, int oldIndex, int newIndex);
  // tag=1041
  void rowResized(int row, int oldHeight, int newHeight);
  // tag=1041
  int rowSpan(int row, int column) const;
  // tag=1041
  int rowViewportPosition(int row) const;
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
  void selectColumn(int column);
  // tag=1041
  void selectRow(int row);
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
  void setColumnHidden(int column, bool hide);
  // tag=1041
  void setColumnWidth(int column, int width);
  // tag=1041
  void setCornerButtonEnabled(bool enable);
  // tag=1041
  virtual void setModel(QAbstractItemModel *model);
  // tag=1008
  virtual void setModel_nocallback(QAbstractItemModel *model);
  // tag=1041
  virtual void setRootIndex(const QModelIndex &index);
  // tag=1008
  virtual void setRootIndex_nocallback(const QModelIndex &index);
  // tag=1041
  void setRowHeight(int row, int height);
  // tag=1041
  void setRowHidden(int row, bool hide);
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
  void setShowGrid(bool show);
  // tag=1041
  void setSortingEnabled(bool enable);
  // tag=1041
  void setSpan(int row, int column, int rowSpan, int columnSpan);
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
  bool showGrid() const;
  // tag=1041
  void showRow(int row);
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
  typedef void (*Callback_changeEvent)(void *, QEvent *arg__1);
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
  typedef void (*Callback_paintEvent)(void *, QPaintEvent *e);
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
//  QTableView::QTableView(QWidget * parent)
QtDartBindings_EXPORT void *c_QTableView__constructor_QWidget(void *parent_);

// tag=1067
//  QTableView::changeEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QTableView__changeEvent_QEvent(void *thisObj,
                                                            void *arg__1_);

// tag=1067
//  QTableView::clearSpans()
QtDartBindings_EXPORT void c_QTableView__clearSpans(void *thisObj);

// tag=1067
//  QTableView::columnAt(int x) const
QtDartBindings_EXPORT int c_QTableView__columnAt_int(void *thisObj, int x);

// tag=1067
//  QTableView::columnCountChanged(int oldCount, int newCount)
QtDartBindings_EXPORT void
c_QTableView__columnCountChanged_int_int(void *thisObj, int oldCount,
                                         int newCount);

// tag=1067
//  QTableView::columnMoved(int column, int oldIndex, int newIndex)
QtDartBindings_EXPORT void c_QTableView__columnMoved_int_int_int(void *thisObj,
                                                                 int column,
                                                                 int oldIndex,
                                                                 int newIndex);

// tag=1067
//  QTableView::columnResized(int column, int oldWidth, int newWidth)
QtDartBindings_EXPORT void
c_QTableView__columnResized_int_int_int(void *thisObj, int column, int oldWidth,
                                        int newWidth);

// tag=1067
//  QTableView::columnSpan(int row, int column) const
QtDartBindings_EXPORT int c_QTableView__columnSpan_int_int(void *thisObj,
                                                           int row, int column);

// tag=1067
//  QTableView::columnViewportPosition(int column) const
QtDartBindings_EXPORT int
c_QTableView__columnViewportPosition_int(void *thisObj, int column);

// tag=1067
//  QTableView::columnWidth(int column) const
QtDartBindings_EXPORT int c_QTableView__columnWidth_int(void *thisObj,
                                                        int column);

// tag=1067
//  QTableView::commitData(QWidget * editor)
QtDartBindings_EXPORT void c_QTableView__commitData_QWidget(void *thisObj,
                                                            void *editor_);

// tag=1067
//  QTableView::currentChanged(const QModelIndex & current, const QModelIndex &
//  previous)
QtDartBindings_EXPORT void c_QTableView__currentChanged_QModelIndex_QModelIndex(
    void *thisObj, void *current_, void *previous_);

// tag=1067
//  QTableView::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QTableView__customEvent_QEvent(void *thisObj,
                                                            void *event_);

// tag=1067
//  QTableView::dataChanged(const QModelIndex & topLeft, const QModelIndex &
//  bottomRight, const QList<int > & roles)
QtDartBindings_EXPORT void
c_QTableView__dataChanged_QModelIndex_QModelIndex_QList_int(void *thisObj,
                                                            void *topLeft_,
                                                            void *bottomRight_,
                                                            void *roles_);

// tag=1067
//  QTableView::devType() const
QtDartBindings_EXPORT int c_QTableView__devType(void *thisObj);

// tag=1067
//  QTableView::doItemsLayout()
QtDartBindings_EXPORT void c_QTableView__doItemsLayout(void *thisObj);

// tag=1067
//  QTableView::editorDestroyed(QObject * editor)
QtDartBindings_EXPORT void c_QTableView__editorDestroyed_QObject(void *thisObj,
                                                                 void *editor_);

// tag=1067
//  QTableView::event(QEvent * event)
QtDartBindings_EXPORT bool c_QTableView__event_QEvent(void *thisObj,
                                                      void *event_);

// tag=1067
//  QTableView::eventFilter(QObject * object, QEvent * event)
QtDartBindings_EXPORT bool
c_QTableView__eventFilter_QObject_QEvent(void *thisObj, void *object_,
                                         void *event_);

// tag=1067
//  QTableView::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QTableView__focusNextPrevChild_bool(void *thisObj,
                                                                 bool next);

// tag=1067
//  QTableView::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QTableView__hasHeightForWidth(void *thisObj);

// tag=1067
//  QTableView::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QTableView__heightForWidth_int(void *thisObj,
                                                           int arg__1);

// tag=1067
//  QTableView::hideColumn(int column)
QtDartBindings_EXPORT void c_QTableView__hideColumn_int(void *thisObj,
                                                        int column);

// tag=1067
//  QTableView::hideRow(int row)
QtDartBindings_EXPORT void c_QTableView__hideRow_int(void *thisObj, int row);

// tag=1067
//  QTableView::horizontalOffset() const
QtDartBindings_EXPORT int c_QTableView__horizontalOffset(void *thisObj);

// tag=1067
//  QTableView::horizontalScrollbarAction(int action)
QtDartBindings_EXPORT void
c_QTableView__horizontalScrollbarAction_int(void *thisObj, int action);

// tag=1067
//  QTableView::horizontalScrollbarValueChanged(int value)
QtDartBindings_EXPORT void
c_QTableView__horizontalScrollbarValueChanged_int(void *thisObj, int value);

// tag=1067
//  QTableView::indexAt(const QPoint & p) const
QtDartBindings_EXPORT void *c_QTableView__indexAt_QPoint(void *thisObj,
                                                         void *p_);

// tag=1067
//  QTableView::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QTableView__initPainter_QPainter(void *thisObj,
                                                              void *painter_);

// tag=1067
//  QTableView::isColumnHidden(int column) const
QtDartBindings_EXPORT bool c_QTableView__isColumnHidden_int(void *thisObj,
                                                            int column);

// tag=1067
//  QTableView::isCornerButtonEnabled() const
QtDartBindings_EXPORT bool c_QTableView__isCornerButtonEnabled(void *thisObj);

// tag=1067
//  QTableView::isIndexHidden(const QModelIndex & index) const
QtDartBindings_EXPORT bool
c_QTableView__isIndexHidden_QModelIndex(void *thisObj, void *index_);

// tag=1067
//  QTableView::isRowHidden(int row) const
QtDartBindings_EXPORT bool c_QTableView__isRowHidden_int(void *thisObj,
                                                         int row);

// tag=1067
//  QTableView::isSortingEnabled() const
QtDartBindings_EXPORT bool c_QTableView__isSortingEnabled(void *thisObj);

// tag=1067
//  QTableView::keyboardSearch(const QString & search)
QtDartBindings_EXPORT void
c_QTableView__keyboardSearch_QString(void *thisObj, const char *search_);

// tag=1067
//  QTableView::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QTableView__leaveEvent_QEvent(void *thisObj,
                                                           void *event_);

// tag=1067
//  QTableView::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QTableView__minimumSizeHint(void *thisObj);

// tag=1067
//  QTableView::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QTableView__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QTableView::mouseMoveEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QTableView__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QTableView::mousePressEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QTableView__mousePressEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QTableView::mouseReleaseEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QTableView__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QTableView::moveCursor(QAbstractItemView::CursorAction cursorAction,
//  QFlags<Qt::KeyboardModifier> modifiers)
QtDartBindings_EXPORT void *
c_QTableView__moveCursor_CursorAction_KeyboardModifiers(void *thisObj,
                                                        int cursorAction,
                                                        int modifiers_);

// tag=1067
//  QTableView::paintEvent(QPaintEvent * e)
QtDartBindings_EXPORT void c_QTableView__paintEvent_QPaintEvent(void *thisObj,
                                                                void *e_);

// tag=1067
//  QTableView::reset()
QtDartBindings_EXPORT void c_QTableView__reset(void *thisObj);

// tag=1067
//  QTableView::resizeColumnToContents(int column)
QtDartBindings_EXPORT void
c_QTableView__resizeColumnToContents_int(void *thisObj, int column);

// tag=1067
//  QTableView::resizeColumnsToContents()
QtDartBindings_EXPORT void c_QTableView__resizeColumnsToContents(void *thisObj);

// tag=1067
//  QTableView::resizeRowToContents(int row)
QtDartBindings_EXPORT void c_QTableView__resizeRowToContents_int(void *thisObj,
                                                                 int row);

// tag=1067
//  QTableView::resizeRowsToContents()
QtDartBindings_EXPORT void c_QTableView__resizeRowsToContents(void *thisObj);

// tag=1067
//  QTableView::rowAt(int y) const
QtDartBindings_EXPORT int c_QTableView__rowAt_int(void *thisObj, int y);

// tag=1067
//  QTableView::rowCountChanged(int oldCount, int newCount)
QtDartBindings_EXPORT void c_QTableView__rowCountChanged_int_int(void *thisObj,
                                                                 int oldCount,
                                                                 int newCount);

// tag=1067
//  QTableView::rowHeight(int row) const
QtDartBindings_EXPORT int c_QTableView__rowHeight_int(void *thisObj, int row);

// tag=1067
//  QTableView::rowMoved(int row, int oldIndex, int newIndex)
QtDartBindings_EXPORT void c_QTableView__rowMoved_int_int_int(void *thisObj,
                                                              int row,
                                                              int oldIndex,
                                                              int newIndex);

// tag=1067
//  QTableView::rowResized(int row, int oldHeight, int newHeight)
QtDartBindings_EXPORT void c_QTableView__rowResized_int_int_int(void *thisObj,
                                                                int row,
                                                                int oldHeight,
                                                                int newHeight);

// tag=1067
//  QTableView::rowSpan(int row, int column) const
QtDartBindings_EXPORT int c_QTableView__rowSpan_int_int(void *thisObj, int row,
                                                        int column);

// tag=1067
//  QTableView::rowViewportPosition(int row) const
QtDartBindings_EXPORT int c_QTableView__rowViewportPosition_int(void *thisObj,
                                                                int row);

// tag=1067
//  QTableView::rowsAboutToBeRemoved(const QModelIndex & parent, int start, int
//  end)
QtDartBindings_EXPORT void
c_QTableView__rowsAboutToBeRemoved_QModelIndex_int_int(void *thisObj,
                                                       void *parent_, int start,
                                                       int end);

// tag=1067
//  QTableView::rowsInserted(const QModelIndex & parent, int start, int end)
QtDartBindings_EXPORT void
c_QTableView__rowsInserted_QModelIndex_int_int(void *thisObj, void *parent_,
                                               int start, int end);

// tag=1067
//  QTableView::scrollContentsBy(int dx, int dy)
QtDartBindings_EXPORT void
c_QTableView__scrollContentsBy_int_int(void *thisObj, int dx, int dy);

// tag=1067
//  QTableView::scrollTo(const QModelIndex & index,
//  QAbstractItemView::ScrollHint hint)
QtDartBindings_EXPORT void
c_QTableView__scrollTo_QModelIndex_ScrollHint(void *thisObj, void *index_,
                                              int hint);

// tag=1067
//  QTableView::selectAll()
QtDartBindings_EXPORT void c_QTableView__selectAll(void *thisObj);

// tag=1067
//  QTableView::selectColumn(int column)
QtDartBindings_EXPORT void c_QTableView__selectColumn_int(void *thisObj,
                                                          int column);

// tag=1067
//  QTableView::selectRow(int row)
QtDartBindings_EXPORT void c_QTableView__selectRow_int(void *thisObj, int row);

// tag=1067
//  QTableView::selectedIndexes() const
QtDartBindings_EXPORT void *c_QTableView__selectedIndexes(void *thisObj);

// tag=1067
//  QTableView::selectionChanged(const QItemSelection & selected, const
//  QItemSelection & deselected)
QtDartBindings_EXPORT void
c_QTableView__selectionChanged_QItemSelection_QItemSelection(void *thisObj,
                                                             void *selected_,
                                                             void *deselected_);

// tag=1067
//  QTableView::selectionCommand(const QModelIndex & index, const QEvent *
//  event) const
QtDartBindings_EXPORT int
c_QTableView__selectionCommand_QModelIndex_QEvent(void *thisObj, void *index_,
                                                  void *event_);

// tag=1067
//  QTableView::setColumnHidden(int column, bool hide)
QtDartBindings_EXPORT void
c_QTableView__setColumnHidden_int_bool(void *thisObj, int column, bool hide);

// tag=1067
//  QTableView::setColumnWidth(int column, int width)
QtDartBindings_EXPORT void
c_QTableView__setColumnWidth_int_int(void *thisObj, int column, int width);

// tag=1067
//  QTableView::setCornerButtonEnabled(bool enable)
QtDartBindings_EXPORT void
c_QTableView__setCornerButtonEnabled_bool(void *thisObj, bool enable);

// tag=1067
//  QTableView::setModel(QAbstractItemModel * model)
QtDartBindings_EXPORT void
c_QTableView__setModel_QAbstractItemModel(void *thisObj, void *model_);

// tag=1067
//  QTableView::setRootIndex(const QModelIndex & index)
QtDartBindings_EXPORT void c_QTableView__setRootIndex_QModelIndex(void *thisObj,
                                                                  void *index_);

// tag=1067
//  QTableView::setRowHeight(int row, int height)
QtDartBindings_EXPORT void
c_QTableView__setRowHeight_int_int(void *thisObj, int row, int height);

// tag=1067
//  QTableView::setRowHidden(int row, bool hide)
QtDartBindings_EXPORT void
c_QTableView__setRowHidden_int_bool(void *thisObj, int row, bool hide);

// tag=1067
//  QTableView::setSelection(const QRect & rect,
//  QFlags<QItemSelectionModel::SelectionFlag> command)
QtDartBindings_EXPORT void
c_QTableView__setSelection_QRect_SelectionFlags(void *thisObj, void *rect_,
                                                int command_);

// tag=1067
//  QTableView::setSelectionModel(QItemSelectionModel * selectionModel)
QtDartBindings_EXPORT void
c_QTableView__setSelectionModel_QItemSelectionModel(void *thisObj,
                                                    void *selectionModel_);

// tag=1067
//  QTableView::setShowGrid(bool show)
QtDartBindings_EXPORT void c_QTableView__setShowGrid_bool(void *thisObj,
                                                          bool show);

// tag=1067
//  QTableView::setSortingEnabled(bool enable)
QtDartBindings_EXPORT void c_QTableView__setSortingEnabled_bool(void *thisObj,
                                                                bool enable);

// tag=1067
//  QTableView::setSpan(int row, int column, int rowSpan, int columnSpan)
QtDartBindings_EXPORT void
c_QTableView__setSpan_int_int_int_int(void *thisObj, int row, int column,
                                      int rowSpan, int columnSpan);

// tag=1067
//  QTableView::setVisible(bool visible)
QtDartBindings_EXPORT void c_QTableView__setVisible_bool(void *thisObj,
                                                         bool visible);

// tag=1067
//  QTableView::setWordWrap(bool on)
QtDartBindings_EXPORT void c_QTableView__setWordWrap_bool(void *thisObj,
                                                          bool on);

// tag=1067
//  QTableView::setupViewport(QWidget * viewport)
QtDartBindings_EXPORT void c_QTableView__setupViewport_QWidget(void *thisObj,
                                                               void *viewport_);

// tag=1067
//  QTableView::sharedPainter() const
QtDartBindings_EXPORT void *c_QTableView__sharedPainter(void *thisObj);

// tag=1067
//  QTableView::showColumn(int column)
QtDartBindings_EXPORT void c_QTableView__showColumn_int(void *thisObj,
                                                        int column);

// tag=1067
//  QTableView::showGrid() const
QtDartBindings_EXPORT bool c_QTableView__showGrid(void *thisObj);

// tag=1067
//  QTableView::showRow(int row)
QtDartBindings_EXPORT void c_QTableView__showRow_int(void *thisObj, int row);

// tag=1067
//  QTableView::sizeHint() const
QtDartBindings_EXPORT void *c_QTableView__sizeHint(void *thisObj);

// tag=1067
//  QTableView::sizeHintForColumn(int column) const
QtDartBindings_EXPORT int c_QTableView__sizeHintForColumn_int(void *thisObj,
                                                              int column);

// tag=1067
//  QTableView::sizeHintForRow(int row) const
QtDartBindings_EXPORT int c_QTableView__sizeHintForRow_int(void *thisObj,
                                                           int row);

// tag=1067
//  QTableView::sortByColumn(int column, Qt::SortOrder order)
QtDartBindings_EXPORT void
c_QTableView__sortByColumn_int_SortOrder(void *thisObj, int column, int order);

// tag=1067
//  QTableView::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QTableView__tr_char_char_int(const char *s, const char *c, int n);

// tag=1067
//  QTableView::updateEditorData()
QtDartBindings_EXPORT void c_QTableView__updateEditorData(void *thisObj);

// tag=1067
//  QTableView::updateEditorGeometries()
QtDartBindings_EXPORT void c_QTableView__updateEditorGeometries(void *thisObj);

// tag=1067
//  QTableView::updateGeometries()
QtDartBindings_EXPORT void c_QTableView__updateGeometries(void *thisObj);

// tag=1067
//  QTableView::verticalOffset() const
QtDartBindings_EXPORT int c_QTableView__verticalOffset(void *thisObj);

// tag=1067
//  QTableView::verticalScrollbarAction(int action)
QtDartBindings_EXPORT void
c_QTableView__verticalScrollbarAction_int(void *thisObj, int action);

// tag=1067
//  QTableView::verticalScrollbarValueChanged(int value)
QtDartBindings_EXPORT void
c_QTableView__verticalScrollbarValueChanged_int(void *thisObj, int value);

// tag=1067
//  QTableView::viewportEvent(QEvent * event)
QtDartBindings_EXPORT bool c_QTableView__viewportEvent_QEvent(void *thisObj,
                                                              void *event_);

// tag=1067
//  QTableView::viewportSizeHint() const
QtDartBindings_EXPORT void *c_QTableView__viewportSizeHint(void *thisObj);

// tag=1067
//  QTableView::visualRect(const QModelIndex & index) const
QtDartBindings_EXPORT void *c_QTableView__visualRect_QModelIndex(void *thisObj,
                                                                 void *index_);

// tag=1067
//  QTableView::visualRegionForSelection(const QItemSelection & selection) const
QtDartBindings_EXPORT void *
c_QTableView__visualRegionForSelection_QItemSelection(void *thisObj,
                                                      void *selection_);

// tag=1067
//  QTableView::wordWrap() const
QtDartBindings_EXPORT bool c_QTableView__wordWrap(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QTableView__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QTableView__registerVirtualMethodCallback(void *ptr, void *callback,
                                            int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QTableView_Finalizer(void *, void *cppObj, void *);
}
