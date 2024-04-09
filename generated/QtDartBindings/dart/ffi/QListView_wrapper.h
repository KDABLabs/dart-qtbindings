
// tag=1040
#include "QtDartBindings_exports.h"
#include <qabstractitemmodel.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qitemselectionmodel.h>
#include <qlist.h>
#include <qlistview.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qstring.h>
#include <qwidget.h>

namespace QtDartBindings_wrappersNS {
// tag=1017
class QListView_wrapper : public ::QListView {
public:
  ~QListView_wrapper();
  using ::QAbstractItemView::CursorAction;

  // tag=1041
  QListView_wrapper(QWidget *parent = nullptr);
  // tag=1041
  int batchSize() const;
  // tag=1041
  virtual void changeEvent(QEvent *arg__1);
  // tag=1008
  virtual void changeEvent_nocallback(QEvent *arg__1);
  // tag=1041
  void clearPropertyFlags();
  // tag=1041
  virtual void commitData(QWidget *editor);
  // tag=1008
  virtual void commitData_nocallback(QWidget *editor);
  // tag=1041
  QSize contentsSize() const;
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
  virtual bool event(QEvent *e);
  // tag=1008
  virtual bool event_nocallback(QEvent *e);
  // tag=1041
  virtual bool eventFilter(QObject *object, QEvent *event);
  // tag=1008
  virtual bool eventFilter_nocallback(QObject *object, QEvent *event);
  // tag=1041
  virtual bool focusNextPrevChild(bool next);
  // tag=1008
  virtual bool focusNextPrevChild_nocallback(bool next);
  // tag=1041
  QSize gridSize() const;
  // tag=1041
  virtual bool hasHeightForWidth() const;
  // tag=1008
  virtual bool hasHeightForWidth_nocallback() const;
  // tag=1041
  virtual int heightForWidth(int arg__1) const;
  // tag=1008
  virtual int heightForWidth_nocallback(int arg__1) const;
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
  void indexesMoved(const QList<QModelIndex> &indexes);
  // tag=1041
  virtual void initPainter(QPainter *painter) const;
  // tag=1008
  virtual void initPainter_nocallback(QPainter *painter) const;
  // tag=1041
  virtual bool isIndexHidden(const QModelIndex &index) const;
  // tag=1008
  virtual bool isIndexHidden_nocallback(const QModelIndex &index) const;
  // tag=1041
  bool isRowHidden(int row) const;
  // tag=1041
  bool isSelectionRectVisible() const;
  // tag=1041
  bool isWrapping() const;
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
  int modelColumn() const;
  // tag=1041
  virtual void mouseDoubleClickEvent(QMouseEvent *event);
  // tag=1008
  virtual void mouseDoubleClickEvent_nocallback(QMouseEvent *event);
  // tag=1041
  virtual void mouseMoveEvent(QMouseEvent *e);
  // tag=1008
  virtual void mouseMoveEvent_nocallback(QMouseEvent *e);
  // tag=1041
  virtual void mousePressEvent(QMouseEvent *event);
  // tag=1008
  virtual void mousePressEvent_nocallback(QMouseEvent *event);
  // tag=1041
  virtual void mouseReleaseEvent(QMouseEvent *e);
  // tag=1008
  virtual void mouseReleaseEvent_nocallback(QMouseEvent *e);
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
  QRect rectForIndex(const QModelIndex &index) const;
  // tag=1041
  virtual void reset();
  // tag=1008
  virtual void reset_nocallback();
  // tag=1041
  void resizeContents(int width, int height);
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
  void setBatchSize(int batchSize);
  // tag=1041
  void setGridSize(const QSize &size);
  // tag=1041
  virtual void setModel(QAbstractItemModel *model);
  // tag=1008
  virtual void setModel_nocallback(QAbstractItemModel *model);
  // tag=1041
  void setModelColumn(int column);
  // tag=1041
  void setPositionForIndex(const QPoint &position, const QModelIndex &index);
  // tag=1041
  virtual void setRootIndex(const QModelIndex &index);
  // tag=1008
  virtual void setRootIndex_nocallback(const QModelIndex &index);
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
  void setSelectionRectVisible(bool show);
  // tag=1041
  void setSpacing(int space);
  // tag=1041
  void setUniformItemSizes(bool enable);
  // tag=1041
  virtual void setVisible(bool visible);
  // tag=1008
  virtual void setVisible_nocallback(bool visible);
  // tag=1041
  void setWordWrap(bool on);
  // tag=1041
  void setWrapping(bool enable);
  // tag=1041
  virtual void setupViewport(QWidget *viewport);
  // tag=1008
  virtual void setupViewport_nocallback(QWidget *viewport);
  // tag=1041
  virtual QPainter *sharedPainter() const;
  // tag=1008
  virtual QPainter *sharedPainter_nocallback() const;
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
  int spacing() const;
  // tag=1041
  static QString tr(const char *s, const char *c, int n);
  // tag=1041
  bool uniformItemSizes() const;
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
  typedef bool (*Callback_event)(void *, QEvent *e);
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
  typedef void (*Callback_mouseMoveEvent)(void *, QMouseEvent *e);
  Callback_mouseMoveEvent m_mouseMoveEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mousePressEvent)(void *, QMouseEvent *event);
  Callback_mousePressEvent m_mousePressEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mouseReleaseEvent)(void *, QMouseEvent *e);
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
//  QListView::QListView(QWidget * parent)
QtDartBindings_EXPORT void *c_QListView__constructor_QWidget(void *parent_);

// tag=1067
//  QListView::batchSize() const
QtDartBindings_EXPORT int c_QListView__batchSize(void *thisObj);

// tag=1067
//  QListView::changeEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QListView__changeEvent_QEvent(void *thisObj,
                                                           void *arg__1_);

// tag=1067
//  QListView::clearPropertyFlags()
QtDartBindings_EXPORT void c_QListView__clearPropertyFlags(void *thisObj);

// tag=1067
//  QListView::commitData(QWidget * editor)
QtDartBindings_EXPORT void c_QListView__commitData_QWidget(void *thisObj,
                                                           void *editor_);

// tag=1067
//  QListView::contentsSize() const
QtDartBindings_EXPORT void *c_QListView__contentsSize(void *thisObj);

// tag=1067
//  QListView::currentChanged(const QModelIndex & current, const QModelIndex &
//  previous)
QtDartBindings_EXPORT void c_QListView__currentChanged_QModelIndex_QModelIndex(
    void *thisObj, void *current_, void *previous_);

// tag=1067
//  QListView::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QListView__customEvent_QEvent(void *thisObj,
                                                           void *event_);

// tag=1067
//  QListView::dataChanged(const QModelIndex & topLeft, const QModelIndex &
//  bottomRight, const QList<int > & roles)
QtDartBindings_EXPORT void
c_QListView__dataChanged_QModelIndex_QModelIndex_QList_int(void *thisObj,
                                                           void *topLeft_,
                                                           void *bottomRight_,
                                                           void *roles_);

// tag=1067
//  QListView::devType() const
QtDartBindings_EXPORT int c_QListView__devType(void *thisObj);

// tag=1067
//  QListView::doItemsLayout()
QtDartBindings_EXPORT void c_QListView__doItemsLayout(void *thisObj);

// tag=1067
//  QListView::editorDestroyed(QObject * editor)
QtDartBindings_EXPORT void c_QListView__editorDestroyed_QObject(void *thisObj,
                                                                void *editor_);

// tag=1067
//  QListView::event(QEvent * e)
QtDartBindings_EXPORT bool c_QListView__event_QEvent(void *thisObj, void *e_);

// tag=1067
//  QListView::eventFilter(QObject * object, QEvent * event)
QtDartBindings_EXPORT bool
c_QListView__eventFilter_QObject_QEvent(void *thisObj, void *object_,
                                        void *event_);

// tag=1067
//  QListView::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QListView__focusNextPrevChild_bool(void *thisObj,
                                                                bool next);

// tag=1067
//  QListView::gridSize() const
QtDartBindings_EXPORT void *c_QListView__gridSize(void *thisObj);

// tag=1067
//  QListView::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QListView__hasHeightForWidth(void *thisObj);

// tag=1067
//  QListView::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QListView__heightForWidth_int(void *thisObj,
                                                          int arg__1);

// tag=1067
//  QListView::horizontalOffset() const
QtDartBindings_EXPORT int c_QListView__horizontalOffset(void *thisObj);

// tag=1067
//  QListView::horizontalScrollbarAction(int action)
QtDartBindings_EXPORT void
c_QListView__horizontalScrollbarAction_int(void *thisObj, int action);

// tag=1067
//  QListView::horizontalScrollbarValueChanged(int value)
QtDartBindings_EXPORT void
c_QListView__horizontalScrollbarValueChanged_int(void *thisObj, int value);

// tag=1067
//  QListView::indexAt(const QPoint & p) const
QtDartBindings_EXPORT void *c_QListView__indexAt_QPoint(void *thisObj,
                                                        void *p_);

// tag=1067
//  QListView::indexesMoved(const QList<QModelIndex > & indexes)
QtDartBindings_EXPORT void
c_QListView__indexesMoved_QList_QModelIndex(void *thisObj, void *indexes_);

// tag=1078
QtDartBindings_EXPORT void c_QListView__onIndexesMoved_QList_QModelIndex(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QListView::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QListView__initPainter_QPainter(void *thisObj,
                                                             void *painter_);

// tag=1067
//  QListView::isIndexHidden(const QModelIndex & index) const
QtDartBindings_EXPORT bool c_QListView__isIndexHidden_QModelIndex(void *thisObj,
                                                                  void *index_);

// tag=1067
//  QListView::isRowHidden(int row) const
QtDartBindings_EXPORT bool c_QListView__isRowHidden_int(void *thisObj, int row);

// tag=1067
//  QListView::isSelectionRectVisible() const
QtDartBindings_EXPORT bool c_QListView__isSelectionRectVisible(void *thisObj);

// tag=1067
//  QListView::isWrapping() const
QtDartBindings_EXPORT bool c_QListView__isWrapping(void *thisObj);

// tag=1067
//  QListView::keyboardSearch(const QString & search)
QtDartBindings_EXPORT void
c_QListView__keyboardSearch_QString(void *thisObj, const char *search_);

// tag=1067
//  QListView::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QListView__leaveEvent_QEvent(void *thisObj,
                                                          void *event_);

// tag=1067
//  QListView::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QListView__minimumSizeHint(void *thisObj);

// tag=1067
//  QListView::modelColumn() const
QtDartBindings_EXPORT int c_QListView__modelColumn(void *thisObj);

// tag=1067
//  QListView::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QListView__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QListView::mouseMoveEvent(QMouseEvent * e)
QtDartBindings_EXPORT void
c_QListView__mouseMoveEvent_QMouseEvent(void *thisObj, void *e_);

// tag=1067
//  QListView::mousePressEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QListView__mousePressEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QListView::mouseReleaseEvent(QMouseEvent * e)
QtDartBindings_EXPORT void
c_QListView__mouseReleaseEvent_QMouseEvent(void *thisObj, void *e_);

// tag=1067
//  QListView::moveCursor(QAbstractItemView::CursorAction cursorAction,
//  QFlags<Qt::KeyboardModifier> modifiers)
QtDartBindings_EXPORT void *
c_QListView__moveCursor_CursorAction_KeyboardModifiers(void *thisObj,
                                                       int cursorAction,
                                                       int modifiers_);

// tag=1067
//  QListView::paintEvent(QPaintEvent * e)
QtDartBindings_EXPORT void c_QListView__paintEvent_QPaintEvent(void *thisObj,
                                                               void *e_);

// tag=1067
//  QListView::rectForIndex(const QModelIndex & index) const
QtDartBindings_EXPORT void *c_QListView__rectForIndex_QModelIndex(void *thisObj,
                                                                  void *index_);

// tag=1067
//  QListView::reset()
QtDartBindings_EXPORT void c_QListView__reset(void *thisObj);

// tag=1067
//  QListView::resizeContents(int width, int height)
QtDartBindings_EXPORT void
c_QListView__resizeContents_int_int(void *thisObj, int width, int height);

// tag=1067
//  QListView::rowsAboutToBeRemoved(const QModelIndex & parent, int start, int
//  end)
QtDartBindings_EXPORT void
c_QListView__rowsAboutToBeRemoved_QModelIndex_int_int(void *thisObj,
                                                      void *parent_, int start,
                                                      int end);

// tag=1067
//  QListView::rowsInserted(const QModelIndex & parent, int start, int end)
QtDartBindings_EXPORT void
c_QListView__rowsInserted_QModelIndex_int_int(void *thisObj, void *parent_,
                                              int start, int end);

// tag=1067
//  QListView::scrollContentsBy(int dx, int dy)
QtDartBindings_EXPORT void
c_QListView__scrollContentsBy_int_int(void *thisObj, int dx, int dy);

// tag=1067
//  QListView::scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint
//  hint)
QtDartBindings_EXPORT void
c_QListView__scrollTo_QModelIndex_ScrollHint(void *thisObj, void *index_,
                                             int hint);

// tag=1067
//  QListView::selectAll()
QtDartBindings_EXPORT void c_QListView__selectAll(void *thisObj);

// tag=1067
//  QListView::selectedIndexes() const
QtDartBindings_EXPORT void *c_QListView__selectedIndexes(void *thisObj);

// tag=1067
//  QListView::selectionChanged(const QItemSelection & selected, const
//  QItemSelection & deselected)
QtDartBindings_EXPORT void
c_QListView__selectionChanged_QItemSelection_QItemSelection(void *thisObj,
                                                            void *selected_,
                                                            void *deselected_);

// tag=1067
//  QListView::selectionCommand(const QModelIndex & index, const QEvent * event)
//  const
QtDartBindings_EXPORT int
c_QListView__selectionCommand_QModelIndex_QEvent(void *thisObj, void *index_,
                                                 void *event_);

// tag=1067
//  QListView::setBatchSize(int batchSize)
QtDartBindings_EXPORT void c_QListView__setBatchSize_int(void *thisObj,
                                                         int batchSize);

// tag=1067
//  QListView::setGridSize(const QSize & size)
QtDartBindings_EXPORT void c_QListView__setGridSize_QSize(void *thisObj,
                                                          void *size_);

// tag=1067
//  QListView::setModel(QAbstractItemModel * model)
QtDartBindings_EXPORT void
c_QListView__setModel_QAbstractItemModel(void *thisObj, void *model_);

// tag=1067
//  QListView::setModelColumn(int column)
QtDartBindings_EXPORT void c_QListView__setModelColumn_int(void *thisObj,
                                                           int column);

// tag=1067
//  QListView::setPositionForIndex(const QPoint & position, const QModelIndex &
//  index)
QtDartBindings_EXPORT void c_QListView__setPositionForIndex_QPoint_QModelIndex(
    void *thisObj, void *position_, void *index_);

// tag=1067
//  QListView::setRootIndex(const QModelIndex & index)
QtDartBindings_EXPORT void c_QListView__setRootIndex_QModelIndex(void *thisObj,
                                                                 void *index_);

// tag=1067
//  QListView::setRowHidden(int row, bool hide)
QtDartBindings_EXPORT void
c_QListView__setRowHidden_int_bool(void *thisObj, int row, bool hide);

// tag=1067
//  QListView::setSelection(const QRect & rect,
//  QFlags<QItemSelectionModel::SelectionFlag> command)
QtDartBindings_EXPORT void
c_QListView__setSelection_QRect_SelectionFlags(void *thisObj, void *rect_,
                                               int command_);

// tag=1067
//  QListView::setSelectionModel(QItemSelectionModel * selectionModel)
QtDartBindings_EXPORT void
c_QListView__setSelectionModel_QItemSelectionModel(void *thisObj,
                                                   void *selectionModel_);

// tag=1067
//  QListView::setSelectionRectVisible(bool show)
QtDartBindings_EXPORT void
c_QListView__setSelectionRectVisible_bool(void *thisObj, bool show);

// tag=1067
//  QListView::setSpacing(int space)
QtDartBindings_EXPORT void c_QListView__setSpacing_int(void *thisObj,
                                                       int space);

// tag=1067
//  QListView::setUniformItemSizes(bool enable)
QtDartBindings_EXPORT void c_QListView__setUniformItemSizes_bool(void *thisObj,
                                                                 bool enable);

// tag=1067
//  QListView::setVisible(bool visible)
QtDartBindings_EXPORT void c_QListView__setVisible_bool(void *thisObj,
                                                        bool visible);

// tag=1067
//  QListView::setWordWrap(bool on)
QtDartBindings_EXPORT void c_QListView__setWordWrap_bool(void *thisObj,
                                                         bool on);

// tag=1067
//  QListView::setWrapping(bool enable)
QtDartBindings_EXPORT void c_QListView__setWrapping_bool(void *thisObj,
                                                         bool enable);

// tag=1067
//  QListView::setupViewport(QWidget * viewport)
QtDartBindings_EXPORT void c_QListView__setupViewport_QWidget(void *thisObj,
                                                              void *viewport_);

// tag=1067
//  QListView::sharedPainter() const
QtDartBindings_EXPORT void *c_QListView__sharedPainter(void *thisObj);

// tag=1067
//  QListView::sizeHint() const
QtDartBindings_EXPORT void *c_QListView__sizeHint(void *thisObj);

// tag=1067
//  QListView::sizeHintForColumn(int column) const
QtDartBindings_EXPORT int c_QListView__sizeHintForColumn_int(void *thisObj,
                                                             int column);

// tag=1067
//  QListView::sizeHintForRow(int row) const
QtDartBindings_EXPORT int c_QListView__sizeHintForRow_int(void *thisObj,
                                                          int row);

// tag=1067
//  QListView::spacing() const
QtDartBindings_EXPORT int c_QListView__spacing(void *thisObj);

// tag=1067
//  QListView::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QListView__tr_char_char_int(const char *s, const char *c, int n);

// tag=1067
//  QListView::uniformItemSizes() const
QtDartBindings_EXPORT bool c_QListView__uniformItemSizes(void *thisObj);

// tag=1067
//  QListView::updateEditorData()
QtDartBindings_EXPORT void c_QListView__updateEditorData(void *thisObj);

// tag=1067
//  QListView::updateEditorGeometries()
QtDartBindings_EXPORT void c_QListView__updateEditorGeometries(void *thisObj);

// tag=1067
//  QListView::updateGeometries()
QtDartBindings_EXPORT void c_QListView__updateGeometries(void *thisObj);

// tag=1067
//  QListView::verticalOffset() const
QtDartBindings_EXPORT int c_QListView__verticalOffset(void *thisObj);

// tag=1067
//  QListView::verticalScrollbarAction(int action)
QtDartBindings_EXPORT void
c_QListView__verticalScrollbarAction_int(void *thisObj, int action);

// tag=1067
//  QListView::verticalScrollbarValueChanged(int value)
QtDartBindings_EXPORT void
c_QListView__verticalScrollbarValueChanged_int(void *thisObj, int value);

// tag=1067
//  QListView::viewportEvent(QEvent * event)
QtDartBindings_EXPORT bool c_QListView__viewportEvent_QEvent(void *thisObj,
                                                             void *event_);

// tag=1067
//  QListView::viewportSizeHint() const
QtDartBindings_EXPORT void *c_QListView__viewportSizeHint(void *thisObj);

// tag=1067
//  QListView::visualRect(const QModelIndex & index) const
QtDartBindings_EXPORT void *c_QListView__visualRect_QModelIndex(void *thisObj,
                                                                void *index_);

// tag=1067
//  QListView::visualRegionForSelection(const QItemSelection & selection) const
QtDartBindings_EXPORT void *
c_QListView__visualRegionForSelection_QItemSelection(void *thisObj,
                                                     void *selection_);

// tag=1067
//  QListView::wordWrap() const
QtDartBindings_EXPORT bool c_QListView__wordWrap(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QListView__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QListView__registerVirtualMethodCallback(void *ptr, void *callback,
                                           int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QListView_Finalizer(void *, void *cppObj, void *);
}
