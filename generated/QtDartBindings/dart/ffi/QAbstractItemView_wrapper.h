
// tag=1040
#include "QtDartBindings_exports.h"
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
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
#include <qwidget.h>

namespace QtDartBindings_wrappersNS {
// tag=1017
class QAbstractItemView_wrapper : public ::QAbstractItemView {
public:
  ~QAbstractItemView_wrapper();
  using ::QAbstractItemView::CursorAction;

  // tag=1041
  QAbstractItemView_wrapper(QWidget *parent = nullptr);
  // tag=1041
  void activated(const QModelIndex &index);
  // tag=1041
  bool alternatingRowColors() const;
  // tag=1041
  int autoScrollMargin() const;
  // tag=1041
  virtual void changeEvent(QEvent *arg__1);
  // tag=1008
  virtual void changeEvent_nocallback(QEvent *arg__1);
  // tag=1041
  void clearSelection();
  // tag=1041
  void clicked(const QModelIndex &index);
  // tag=1041
  void closePersistentEditor(const QModelIndex &index);
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
  QModelIndex currentIndex() const;
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
  QPoint dirtyRegionOffset() const;
  // tag=1041
  void doAutoScroll();
  // tag=1041
  virtual void doItemsLayout();
  // tag=1008
  virtual void doItemsLayout_nocallback();
  // tag=1041
  void doubleClicked(const QModelIndex &index);
  // tag=1041
  bool dragDropOverwriteMode() const;
  // tag=1041
  bool dragEnabled() const;
  // tag=1041
  void edit(const QModelIndex &index);
  // tag=1041
  virtual void editorDestroyed(QObject *editor);
  // tag=1008
  virtual void editorDestroyed_nocallback(QObject *editor);
  // tag=1041
  void entered(const QModelIndex &index);
  // tag=1041
  virtual bool event(QEvent *event);
  // tag=1008
  virtual bool event_nocallback(QEvent *event);
  // tag=1041
  virtual bool eventFilter(QObject *object, QEvent *event);
  // tag=1008
  virtual bool eventFilter_nocallback(QObject *object, QEvent *event);
  // tag=1041
  void executeDelayedItemsLayout();
  // tag=1041
  virtual bool focusNextPrevChild(bool next);
  // tag=1008
  virtual bool focusNextPrevChild_nocallback(bool next);
  // tag=1041
  bool hasAutoScroll() const;
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
  QSize iconSize() const;
  // tag=1041
  void iconSizeChanged(const QSize &size);
  // tag=1041
  virtual QModelIndex indexAt(const QPoint &point) const;
  // tag=1008
  virtual QModelIndex indexAt_nocallback(const QPoint &point) const;
  // tag=1041
  QWidget *indexWidget(const QModelIndex &index) const;
  // tag=1041
  virtual void initPainter(QPainter *painter) const;
  // tag=1008
  virtual void initPainter_nocallback(QPainter *painter) const;
  // tag=1041
  virtual bool isIndexHidden(const QModelIndex &index) const;
  // tag=1008
  virtual bool isIndexHidden_nocallback(const QModelIndex &index) const;
  // tag=1041
  bool isPersistentEditorOpen(const QModelIndex &index) const;
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
  QAbstractItemModel *model() const;
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
  void openPersistentEditor(const QModelIndex &index);
  // tag=1041
  virtual void paintEvent(QPaintEvent *arg__1);
  // tag=1008
  virtual void paintEvent_nocallback(QPaintEvent *arg__1);
  // tag=1041
  void pressed(const QModelIndex &index);
  // tag=1041
  virtual void reset();
  // tag=1008
  virtual void reset_nocallback();
  // tag=1041
  void resetHorizontalScrollMode();
  // tag=1041
  void resetVerticalScrollMode();
  // tag=1041
  QModelIndex rootIndex() const;
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
  void scheduleDelayedItemsLayout();
  // tag=1041
  virtual void scrollContentsBy(int dx, int dy);
  // tag=1008
  virtual void scrollContentsBy_nocallback(int dx, int dy);
  // tag=1041
  void scrollDirtyRegion(int dx, int dy);
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
  void scrollToBottom();
  // tag=1041
  void scrollToTop();
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
  QItemSelectionModel *selectionModel() const;
  // tag=1041
  void setAlternatingRowColors(bool enable);
  // tag=1041
  void setAutoScroll(bool enable);
  // tag=1041
  void setAutoScrollMargin(int margin);
  // tag=1041
  void setCurrentIndex(const QModelIndex &index);
  // tag=1041
  void setDirtyRegion(const QRegion &region);
  // tag=1041
  void setDragDropOverwriteMode(bool overwrite);
  // tag=1041
  void setDragEnabled(bool enable);
  // tag=1041
  void setDropIndicatorShown(bool enable);
  // tag=1041
  void setIconSize(const QSize &size);
  // tag=1041
  void setIndexWidget(const QModelIndex &index, QWidget *widget);
  // tag=1041
  virtual void setModel(QAbstractItemModel *model);
  // tag=1008
  virtual void setModel_nocallback(QAbstractItemModel *model);
  // tag=1041
  virtual void setRootIndex(const QModelIndex &index);
  // tag=1008
  virtual void setRootIndex_nocallback(const QModelIndex &index);
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
  void setTabKeyNavigation(bool enable);
  // tag=1041
  virtual void setVisible(bool visible);
  // tag=1008
  virtual void setVisible_nocallback(bool visible);
  // tag=1041
  virtual void setupViewport(QWidget *viewport);
  // tag=1008
  virtual void setupViewport_nocallback(QWidget *viewport);
  // tag=1041
  virtual QPainter *sharedPainter() const;
  // tag=1008
  virtual QPainter *sharedPainter_nocallback() const;
  // tag=1041
  bool showDropIndicator() const;
  // tag=1041
  virtual QSize sizeHint() const;
  // tag=1008
  virtual QSize sizeHint_nocallback() const;
  // tag=1041
  virtual int sizeHintForColumn(int column) const;
  // tag=1008
  virtual int sizeHintForColumn_nocallback(int column) const;
  // tag=1041
  QSize sizeHintForIndex(const QModelIndex &index) const;
  // tag=1041
  virtual int sizeHintForRow(int row) const;
  // tag=1008
  virtual int sizeHintForRow_nocallback(int row) const;
  // tag=1041
  void startAutoScroll();
  // tag=1041
  void stopAutoScroll();
  // tag=1041
  bool tabKeyNavigation() const;
  // tag=1041
  static QString tr(const char *s, const char *c, int n);
  // tag=1041
  void update(const QModelIndex &index);
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
  void viewportEntered();
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
  typedef QModelIndex *(*Callback_indexAt)(void *, const QPoint &point);
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
  typedef void (*Callback_paintEvent)(void *, QPaintEvent *arg__1);
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
//  QAbstractItemView::QAbstractItemView(QWidget * parent)
QtDartBindings_EXPORT void *
c_QAbstractItemView__constructor_QWidget(void *parent_);

// tag=1067
//  QAbstractItemView::activated(const QModelIndex & index)
QtDartBindings_EXPORT void
c_QAbstractItemView__activated_QModelIndex(void *thisObj, void *index_);

// tag=1078
QtDartBindings_EXPORT void c_QAbstractItemView__onActivated_QModelIndex(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QAbstractItemView::alternatingRowColors() const
QtDartBindings_EXPORT bool
c_QAbstractItemView__alternatingRowColors(void *thisObj);

// tag=1067
//  QAbstractItemView::autoScrollMargin() const
QtDartBindings_EXPORT int c_QAbstractItemView__autoScrollMargin(void *thisObj);

// tag=1067
//  QAbstractItemView::changeEvent(QEvent * arg__1)
QtDartBindings_EXPORT void
c_QAbstractItemView__changeEvent_QEvent(void *thisObj, void *arg__1_);

// tag=1067
//  QAbstractItemView::clearSelection()
QtDartBindings_EXPORT void c_QAbstractItemView__clearSelection(void *thisObj);

// tag=1067
//  QAbstractItemView::clicked(const QModelIndex & index)
QtDartBindings_EXPORT void
c_QAbstractItemView__clicked_QModelIndex(void *thisObj, void *index_);

// tag=1078
QtDartBindings_EXPORT void
c_QAbstractItemView__onClicked_QModelIndex(void *thisObj, void *contextQObject,
                                           void *callback);
// tag=1067
//  QAbstractItemView::closePersistentEditor(const QModelIndex & index)
QtDartBindings_EXPORT void
c_QAbstractItemView__closePersistentEditor_QModelIndex(void *thisObj,
                                                       void *index_);

// tag=1067
//  QAbstractItemView::commitData(QWidget * editor)
QtDartBindings_EXPORT void
c_QAbstractItemView__commitData_QWidget(void *thisObj, void *editor_);

// tag=1067
//  QAbstractItemView::currentChanged(const QModelIndex & current, const
//  QModelIndex & previous)
QtDartBindings_EXPORT void
c_QAbstractItemView__currentChanged_QModelIndex_QModelIndex(void *thisObj,
                                                            void *current_,
                                                            void *previous_);

// tag=1067
//  QAbstractItemView::currentIndex() const
QtDartBindings_EXPORT void *c_QAbstractItemView__currentIndex(void *thisObj);

// tag=1067
//  QAbstractItemView::customEvent(QEvent * event)
QtDartBindings_EXPORT void
c_QAbstractItemView__customEvent_QEvent(void *thisObj, void *event_);

// tag=1067
//  QAbstractItemView::dataChanged(const QModelIndex & topLeft, const
//  QModelIndex & bottomRight, const QList<int > & roles)
QtDartBindings_EXPORT void
c_QAbstractItemView__dataChanged_QModelIndex_QModelIndex_QList_int(
    void *thisObj, void *topLeft_, void *bottomRight_, void *roles_);

// tag=1067
//  QAbstractItemView::devType() const
QtDartBindings_EXPORT int c_QAbstractItemView__devType(void *thisObj);

// tag=1067
//  QAbstractItemView::dirtyRegionOffset() const
QtDartBindings_EXPORT void *
c_QAbstractItemView__dirtyRegionOffset(void *thisObj);

// tag=1067
//  QAbstractItemView::doAutoScroll()
QtDartBindings_EXPORT void c_QAbstractItemView__doAutoScroll(void *thisObj);

// tag=1067
//  QAbstractItemView::doItemsLayout()
QtDartBindings_EXPORT void c_QAbstractItemView__doItemsLayout(void *thisObj);

// tag=1067
//  QAbstractItemView::doubleClicked(const QModelIndex & index)
QtDartBindings_EXPORT void
c_QAbstractItemView__doubleClicked_QModelIndex(void *thisObj, void *index_);

// tag=1078
QtDartBindings_EXPORT void c_QAbstractItemView__onDoubleClicked_QModelIndex(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QAbstractItemView::dragDropOverwriteMode() const
QtDartBindings_EXPORT bool
c_QAbstractItemView__dragDropOverwriteMode(void *thisObj);

// tag=1067
//  QAbstractItemView::dragEnabled() const
QtDartBindings_EXPORT bool c_QAbstractItemView__dragEnabled(void *thisObj);

// tag=1067
//  QAbstractItemView::edit(const QModelIndex & index)
QtDartBindings_EXPORT void c_QAbstractItemView__edit_QModelIndex(void *thisObj,
                                                                 void *index_);

// tag=1067
//  QAbstractItemView::editorDestroyed(QObject * editor)
QtDartBindings_EXPORT void
c_QAbstractItemView__editorDestroyed_QObject(void *thisObj, void *editor_);

// tag=1067
//  QAbstractItemView::entered(const QModelIndex & index)
QtDartBindings_EXPORT void
c_QAbstractItemView__entered_QModelIndex(void *thisObj, void *index_);

// tag=1078
QtDartBindings_EXPORT void
c_QAbstractItemView__onEntered_QModelIndex(void *thisObj, void *contextQObject,
                                           void *callback);
// tag=1067
//  QAbstractItemView::event(QEvent * event)
QtDartBindings_EXPORT bool c_QAbstractItemView__event_QEvent(void *thisObj,
                                                             void *event_);

// tag=1067
//  QAbstractItemView::eventFilter(QObject * object, QEvent * event)
QtDartBindings_EXPORT bool
c_QAbstractItemView__eventFilter_QObject_QEvent(void *thisObj, void *object_,
                                                void *event_);

// tag=1067
//  QAbstractItemView::executeDelayedItemsLayout()
QtDartBindings_EXPORT void
c_QAbstractItemView__executeDelayedItemsLayout(void *thisObj);

// tag=1067
//  QAbstractItemView::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool
c_QAbstractItemView__focusNextPrevChild_bool(void *thisObj, bool next);

// tag=1067
//  QAbstractItemView::hasAutoScroll() const
QtDartBindings_EXPORT bool c_QAbstractItemView__hasAutoScroll(void *thisObj);

// tag=1067
//  QAbstractItemView::hasHeightForWidth() const
QtDartBindings_EXPORT bool
c_QAbstractItemView__hasHeightForWidth(void *thisObj);

// tag=1067
//  QAbstractItemView::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QAbstractItemView__heightForWidth_int(void *thisObj,
                                                                  int arg__1);

// tag=1067
//  QAbstractItemView::horizontalOffset() const
QtDartBindings_EXPORT int c_QAbstractItemView__horizontalOffset(void *thisObj);

// tag=1067
//  QAbstractItemView::horizontalScrollbarAction(int action)
QtDartBindings_EXPORT void
c_QAbstractItemView__horizontalScrollbarAction_int(void *thisObj, int action);

// tag=1067
//  QAbstractItemView::horizontalScrollbarValueChanged(int value)
QtDartBindings_EXPORT void
c_QAbstractItemView__horizontalScrollbarValueChanged_int(void *thisObj,
                                                         int value);

// tag=1067
//  QAbstractItemView::iconSize() const
QtDartBindings_EXPORT void *c_QAbstractItemView__iconSize(void *thisObj);

// tag=1067
//  QAbstractItemView::iconSizeChanged(const QSize & size)
QtDartBindings_EXPORT void
c_QAbstractItemView__iconSizeChanged_QSize(void *thisObj, void *size_);

// tag=1078
QtDartBindings_EXPORT void c_QAbstractItemView__onIconSizeChanged_QSize(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QAbstractItemView::indexAt(const QPoint & point) const
QtDartBindings_EXPORT void *c_QAbstractItemView__indexAt_QPoint(void *thisObj,
                                                                void *point_);

// tag=1067
//  QAbstractItemView::indexWidget(const QModelIndex & index) const
QtDartBindings_EXPORT void *
c_QAbstractItemView__indexWidget_QModelIndex(void *thisObj, void *index_);

// tag=1067
//  QAbstractItemView::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void
c_QAbstractItemView__initPainter_QPainter(void *thisObj, void *painter_);

// tag=1067
//  QAbstractItemView::isIndexHidden(const QModelIndex & index) const
QtDartBindings_EXPORT bool
c_QAbstractItemView__isIndexHidden_QModelIndex(void *thisObj, void *index_);

// tag=1067
//  QAbstractItemView::isPersistentEditorOpen(const QModelIndex & index) const
QtDartBindings_EXPORT bool
c_QAbstractItemView__isPersistentEditorOpen_QModelIndex(void *thisObj,
                                                        void *index_);

// tag=1067
//  QAbstractItemView::keyboardSearch(const QString & search)
QtDartBindings_EXPORT void
c_QAbstractItemView__keyboardSearch_QString(void *thisObj, const char *search_);

// tag=1067
//  QAbstractItemView::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QAbstractItemView__leaveEvent_QEvent(void *thisObj,
                                                                  void *event_);

// tag=1067
//  QAbstractItemView::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QAbstractItemView__minimumSizeHint(void *thisObj);

// tag=1067
//  QAbstractItemView::model() const
QtDartBindings_EXPORT void *c_QAbstractItemView__model(void *thisObj);

// tag=1067
//  QAbstractItemView::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QAbstractItemView__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                       void *event_);

// tag=1067
//  QAbstractItemView::mouseMoveEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QAbstractItemView__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QAbstractItemView::mousePressEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QAbstractItemView__mousePressEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QAbstractItemView::mouseReleaseEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QAbstractItemView__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QAbstractItemView::moveCursor(QAbstractItemView::CursorAction cursorAction,
//  QFlags<Qt::KeyboardModifier> modifiers)
QtDartBindings_EXPORT void *
c_QAbstractItemView__moveCursor_CursorAction_KeyboardModifiers(void *thisObj,
                                                               int cursorAction,
                                                               int modifiers_);

// tag=1067
//  QAbstractItemView::openPersistentEditor(const QModelIndex & index)
QtDartBindings_EXPORT void
c_QAbstractItemView__openPersistentEditor_QModelIndex(void *thisObj,
                                                      void *index_);

// tag=1067
//  QAbstractItemView::paintEvent(QPaintEvent * arg__1)
QtDartBindings_EXPORT void
c_QAbstractItemView__paintEvent_QPaintEvent(void *thisObj, void *arg__1_);

// tag=1067
//  QAbstractItemView::pressed(const QModelIndex & index)
QtDartBindings_EXPORT void
c_QAbstractItemView__pressed_QModelIndex(void *thisObj, void *index_);

// tag=1078
QtDartBindings_EXPORT void
c_QAbstractItemView__onPressed_QModelIndex(void *thisObj, void *contextQObject,
                                           void *callback);
// tag=1067
//  QAbstractItemView::reset()
QtDartBindings_EXPORT void c_QAbstractItemView__reset(void *thisObj);

// tag=1067
//  QAbstractItemView::resetHorizontalScrollMode()
QtDartBindings_EXPORT void
c_QAbstractItemView__resetHorizontalScrollMode(void *thisObj);

// tag=1067
//  QAbstractItemView::resetVerticalScrollMode()
QtDartBindings_EXPORT void
c_QAbstractItemView__resetVerticalScrollMode(void *thisObj);

// tag=1067
//  QAbstractItemView::rootIndex() const
QtDartBindings_EXPORT void *c_QAbstractItemView__rootIndex(void *thisObj);

// tag=1067
//  QAbstractItemView::rowsAboutToBeRemoved(const QModelIndex & parent, int
//  start, int end)
QtDartBindings_EXPORT void
c_QAbstractItemView__rowsAboutToBeRemoved_QModelIndex_int_int(void *thisObj,
                                                              void *parent_,
                                                              int start,
                                                              int end);

// tag=1067
//  QAbstractItemView::rowsInserted(const QModelIndex & parent, int start, int
//  end)
QtDartBindings_EXPORT void
c_QAbstractItemView__rowsInserted_QModelIndex_int_int(void *thisObj,
                                                      void *parent_, int start,
                                                      int end);

// tag=1067
//  QAbstractItemView::scheduleDelayedItemsLayout()
QtDartBindings_EXPORT void
c_QAbstractItemView__scheduleDelayedItemsLayout(void *thisObj);

// tag=1067
//  QAbstractItemView::scrollContentsBy(int dx, int dy)
QtDartBindings_EXPORT void
c_QAbstractItemView__scrollContentsBy_int_int(void *thisObj, int dx, int dy);

// tag=1067
//  QAbstractItemView::scrollDirtyRegion(int dx, int dy)
QtDartBindings_EXPORT void
c_QAbstractItemView__scrollDirtyRegion_int_int(void *thisObj, int dx, int dy);

// tag=1067
//  QAbstractItemView::scrollTo(const QModelIndex & index,
//  QAbstractItemView::ScrollHint hint)
QtDartBindings_EXPORT void
c_QAbstractItemView__scrollTo_QModelIndex_ScrollHint(void *thisObj,
                                                     void *index_, int hint);

// tag=1067
//  QAbstractItemView::scrollToBottom()
QtDartBindings_EXPORT void c_QAbstractItemView__scrollToBottom(void *thisObj);

// tag=1067
//  QAbstractItemView::scrollToTop()
QtDartBindings_EXPORT void c_QAbstractItemView__scrollToTop(void *thisObj);

// tag=1067
//  QAbstractItemView::selectAll()
QtDartBindings_EXPORT void c_QAbstractItemView__selectAll(void *thisObj);

// tag=1067
//  QAbstractItemView::selectedIndexes() const
QtDartBindings_EXPORT void *c_QAbstractItemView__selectedIndexes(void *thisObj);

// tag=1067
//  QAbstractItemView::selectionChanged(const QItemSelection & selected, const
//  QItemSelection & deselected)
QtDartBindings_EXPORT void
c_QAbstractItemView__selectionChanged_QItemSelection_QItemSelection(
    void *thisObj, void *selected_, void *deselected_);

// tag=1067
//  QAbstractItemView::selectionCommand(const QModelIndex & index, const QEvent
//  * event) const
QtDartBindings_EXPORT int
c_QAbstractItemView__selectionCommand_QModelIndex_QEvent(void *thisObj,
                                                         void *index_,
                                                         void *event_);

// tag=1067
//  QAbstractItemView::selectionModel() const
QtDartBindings_EXPORT void *c_QAbstractItemView__selectionModel(void *thisObj);

// tag=1067
//  QAbstractItemView::setAlternatingRowColors(bool enable)
QtDartBindings_EXPORT void
c_QAbstractItemView__setAlternatingRowColors_bool(void *thisObj, bool enable);

// tag=1067
//  QAbstractItemView::setAutoScroll(bool enable)
QtDartBindings_EXPORT void
c_QAbstractItemView__setAutoScroll_bool(void *thisObj, bool enable);

// tag=1067
//  QAbstractItemView::setAutoScrollMargin(int margin)
QtDartBindings_EXPORT void
c_QAbstractItemView__setAutoScrollMargin_int(void *thisObj, int margin);

// tag=1067
//  QAbstractItemView::setCurrentIndex(const QModelIndex & index)
QtDartBindings_EXPORT void
c_QAbstractItemView__setCurrentIndex_QModelIndex(void *thisObj, void *index_);

// tag=1067
//  QAbstractItemView::setDirtyRegion(const QRegion & region)
QtDartBindings_EXPORT void
c_QAbstractItemView__setDirtyRegion_QRegion(void *thisObj, void *region_);

// tag=1067
//  QAbstractItemView::setDragDropOverwriteMode(bool overwrite)
QtDartBindings_EXPORT void
c_QAbstractItemView__setDragDropOverwriteMode_bool(void *thisObj,
                                                   bool overwrite);

// tag=1067
//  QAbstractItemView::setDragEnabled(bool enable)
QtDartBindings_EXPORT void
c_QAbstractItemView__setDragEnabled_bool(void *thisObj, bool enable);

// tag=1067
//  QAbstractItemView::setDropIndicatorShown(bool enable)
QtDartBindings_EXPORT void
c_QAbstractItemView__setDropIndicatorShown_bool(void *thisObj, bool enable);

// tag=1067
//  QAbstractItemView::setIconSize(const QSize & size)
QtDartBindings_EXPORT void c_QAbstractItemView__setIconSize_QSize(void *thisObj,
                                                                  void *size_);

// tag=1067
//  QAbstractItemView::setIndexWidget(const QModelIndex & index, QWidget *
//  widget)
QtDartBindings_EXPORT void
c_QAbstractItemView__setIndexWidget_QModelIndex_QWidget(void *thisObj,
                                                        void *index_,
                                                        void *widget_);

// tag=1067
//  QAbstractItemView::setModel(QAbstractItemModel * model)
QtDartBindings_EXPORT void
c_QAbstractItemView__setModel_QAbstractItemModel(void *thisObj, void *model_);

// tag=1067
//  QAbstractItemView::setRootIndex(const QModelIndex & index)
QtDartBindings_EXPORT void
c_QAbstractItemView__setRootIndex_QModelIndex(void *thisObj, void *index_);

// tag=1067
//  QAbstractItemView::setSelection(const QRect & rect,
//  QFlags<QItemSelectionModel::SelectionFlag> command)
QtDartBindings_EXPORT void
c_QAbstractItemView__setSelection_QRect_SelectionFlags(void *thisObj,
                                                       void *rect_,
                                                       int command_);

// tag=1067
//  QAbstractItemView::setSelectionModel(QItemSelectionModel * selectionModel)
QtDartBindings_EXPORT void
c_QAbstractItemView__setSelectionModel_QItemSelectionModel(
    void *thisObj, void *selectionModel_);

// tag=1067
//  QAbstractItemView::setTabKeyNavigation(bool enable)
QtDartBindings_EXPORT void
c_QAbstractItemView__setTabKeyNavigation_bool(void *thisObj, bool enable);

// tag=1067
//  QAbstractItemView::setVisible(bool visible)
QtDartBindings_EXPORT void c_QAbstractItemView__setVisible_bool(void *thisObj,
                                                                bool visible);

// tag=1067
//  QAbstractItemView::setupViewport(QWidget * viewport)
QtDartBindings_EXPORT void
c_QAbstractItemView__setupViewport_QWidget(void *thisObj, void *viewport_);

// tag=1067
//  QAbstractItemView::sharedPainter() const
QtDartBindings_EXPORT void *c_QAbstractItemView__sharedPainter(void *thisObj);

// tag=1067
//  QAbstractItemView::showDropIndicator() const
QtDartBindings_EXPORT bool
c_QAbstractItemView__showDropIndicator(void *thisObj);

// tag=1067
//  QAbstractItemView::sizeHint() const
QtDartBindings_EXPORT void *c_QAbstractItemView__sizeHint(void *thisObj);

// tag=1067
//  QAbstractItemView::sizeHintForColumn(int column) const
QtDartBindings_EXPORT int
c_QAbstractItemView__sizeHintForColumn_int(void *thisObj, int column);

// tag=1067
//  QAbstractItemView::sizeHintForIndex(const QModelIndex & index) const
QtDartBindings_EXPORT void *
c_QAbstractItemView__sizeHintForIndex_QModelIndex(void *thisObj, void *index_);

// tag=1067
//  QAbstractItemView::sizeHintForRow(int row) const
QtDartBindings_EXPORT int c_QAbstractItemView__sizeHintForRow_int(void *thisObj,
                                                                  int row);

// tag=1067
//  QAbstractItemView::startAutoScroll()
QtDartBindings_EXPORT void c_QAbstractItemView__startAutoScroll(void *thisObj);

// tag=1067
//  QAbstractItemView::stopAutoScroll()
QtDartBindings_EXPORT void c_QAbstractItemView__stopAutoScroll(void *thisObj);

// tag=1067
//  QAbstractItemView::tabKeyNavigation() const
QtDartBindings_EXPORT bool c_QAbstractItemView__tabKeyNavigation(void *thisObj);

// tag=1067
//  QAbstractItemView::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QAbstractItemView__tr_char_char_int(const char *s, const char *c,
                                             int n);

// tag=1067
//  QAbstractItemView::update(const QModelIndex & index)
QtDartBindings_EXPORT void
c_QAbstractItemView__updateIndex_QModelIndex(void *thisObj, void *index_);

// tag=1067
//  QAbstractItemView::updateEditorData()
QtDartBindings_EXPORT void c_QAbstractItemView__updateEditorData(void *thisObj);

// tag=1067
//  QAbstractItemView::updateEditorGeometries()
QtDartBindings_EXPORT void
c_QAbstractItemView__updateEditorGeometries(void *thisObj);

// tag=1067
//  QAbstractItemView::updateGeometries()
QtDartBindings_EXPORT void c_QAbstractItemView__updateGeometries(void *thisObj);

// tag=1067
//  QAbstractItemView::verticalOffset() const
QtDartBindings_EXPORT int c_QAbstractItemView__verticalOffset(void *thisObj);

// tag=1067
//  QAbstractItemView::verticalScrollbarAction(int action)
QtDartBindings_EXPORT void
c_QAbstractItemView__verticalScrollbarAction_int(void *thisObj, int action);

// tag=1067
//  QAbstractItemView::verticalScrollbarValueChanged(int value)
QtDartBindings_EXPORT void
c_QAbstractItemView__verticalScrollbarValueChanged_int(void *thisObj,
                                                       int value);

// tag=1067
//  QAbstractItemView::viewportEntered()
QtDartBindings_EXPORT void c_QAbstractItemView__viewportEntered(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void
c_QAbstractItemView__onViewportEntered(void *thisObj, void *contextQObject,
                                       void *callback);
// tag=1067
//  QAbstractItemView::viewportEvent(QEvent * event)
QtDartBindings_EXPORT bool
c_QAbstractItemView__viewportEvent_QEvent(void *thisObj, void *event_);

// tag=1067
//  QAbstractItemView::viewportSizeHint() const
QtDartBindings_EXPORT void *
c_QAbstractItemView__viewportSizeHint(void *thisObj);

// tag=1067
//  QAbstractItemView::visualRect(const QModelIndex & index) const
QtDartBindings_EXPORT void *
c_QAbstractItemView__visualRect_QModelIndex(void *thisObj, void *index_);

// tag=1067
//  QAbstractItemView::visualRegionForSelection(const QItemSelection &
//  selection) const
QtDartBindings_EXPORT void *
c_QAbstractItemView__visualRegionForSelection_QItemSelection(void *thisObj,
                                                             void *selection_);

// tag=1066
QtDartBindings_EXPORT void c_QAbstractItemView__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QAbstractItemView__registerVirtualMethodCallback(void *ptr, void *callback,
                                                   int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QAbstractItemView_Finalizer(void *, void *cppObj,
                                                         void *);
}
