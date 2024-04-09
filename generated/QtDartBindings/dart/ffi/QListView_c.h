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
class QListView_wrapper : public ::QListView {
public:
  ~QListView_wrapper();
  using ::QAbstractItemView::CursorAction;
  QListView_wrapper(QWidget *parent = nullptr);
  int batchSize() const;
  virtual void changeEvent(QEvent *arg__1);
  virtual void changeEvent_nocallback(QEvent *arg__1);
  void clearPropertyFlags();
  virtual void commitData(QWidget *editor);
  virtual void commitData_nocallback(QWidget *editor);
  QSize contentsSize() const;
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
  virtual void editorDestroyed(QObject *editor);
  virtual void editorDestroyed_nocallback(QObject *editor);
  virtual bool event(QEvent *e);
  virtual bool event_nocallback(QEvent *e);
  virtual bool eventFilter(QObject *object, QEvent *event);
  virtual bool eventFilter_nocallback(QObject *object, QEvent *event);
  virtual bool focusNextPrevChild(bool next);
  virtual bool focusNextPrevChild_nocallback(bool next);
  QSize gridSize() const;
  virtual bool hasHeightForWidth() const;
  virtual bool hasHeightForWidth_nocallback() const;
  virtual int heightForWidth(int arg__1) const;
  virtual int heightForWidth_nocallback(int arg__1) const;
  virtual int horizontalOffset() const;
  virtual int horizontalOffset_nocallback() const;
  virtual void horizontalScrollbarAction(int action);
  virtual void horizontalScrollbarAction_nocallback(int action);
  virtual void horizontalScrollbarValueChanged(int value);
  virtual void horizontalScrollbarValueChanged_nocallback(int value);
  virtual QModelIndex indexAt(const QPoint &p) const;
  virtual QModelIndex indexAt_nocallback(const QPoint &p) const;
  void indexesMoved(const QList<QModelIndex> &indexes);
  virtual void initPainter(QPainter *painter) const;
  virtual void initPainter_nocallback(QPainter *painter) const;
  virtual bool isIndexHidden(const QModelIndex &index) const;
  virtual bool isIndexHidden_nocallback(const QModelIndex &index) const;
  bool isRowHidden(int row) const;
  bool isSelectionRectVisible() const;
  bool isWrapping() const;
  virtual void keyboardSearch(const QString &search);
  virtual void keyboardSearch_nocallback(const QString &search);
  virtual void leaveEvent(QEvent *event);
  virtual void leaveEvent_nocallback(QEvent *event);
  virtual QSize minimumSizeHint() const;
  virtual QSize minimumSizeHint_nocallback() const;
  int modelColumn() const;
  virtual void mouseDoubleClickEvent(QMouseEvent *event);
  virtual void mouseDoubleClickEvent_nocallback(QMouseEvent *event);
  virtual void mouseMoveEvent(QMouseEvent *e);
  virtual void mouseMoveEvent_nocallback(QMouseEvent *e);
  virtual void mousePressEvent(QMouseEvent *event);
  virtual void mousePressEvent_nocallback(QMouseEvent *event);
  virtual void mouseReleaseEvent(QMouseEvent *e);
  virtual void mouseReleaseEvent_nocallback(QMouseEvent *e);
  virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction,
                                 QFlags<Qt::KeyboardModifier> modifiers);
  virtual QModelIndex
  moveCursor_nocallback(QAbstractItemView::CursorAction cursorAction,
                        QFlags<Qt::KeyboardModifier> modifiers);
  virtual void paintEvent(QPaintEvent *e);
  virtual void paintEvent_nocallback(QPaintEvent *e);
  QRect rectForIndex(const QModelIndex &index) const;
  virtual void reset();
  virtual void reset_nocallback();
  void resizeContents(int width, int height);
  virtual void rowsAboutToBeRemoved(const QModelIndex &parent, int start,
                                    int end);
  virtual void rowsAboutToBeRemoved_nocallback(const QModelIndex &parent,
                                               int start, int end);
  virtual void rowsInserted(const QModelIndex &parent, int start, int end);
  virtual void rowsInserted_nocallback(const QModelIndex &parent, int start,
                                       int end);
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
  void setBatchSize(int batchSize);
  void setGridSize(const QSize &size);
  virtual void setModel(QAbstractItemModel *model);
  virtual void setModel_nocallback(QAbstractItemModel *model);
  void setModelColumn(int column);
  void setPositionForIndex(const QPoint &position, const QModelIndex &index);
  virtual void setRootIndex(const QModelIndex &index);
  virtual void setRootIndex_nocallback(const QModelIndex &index);
  void setRowHidden(int row, bool hide);
  virtual void setSelection(const QRect &rect,
                            QFlags<QItemSelectionModel::SelectionFlag> command);
  virtual void
  setSelection_nocallback(const QRect &rect,
                          QFlags<QItemSelectionModel::SelectionFlag> command);
  virtual void setSelectionModel(QItemSelectionModel *selectionModel);
  virtual void
  setSelectionModel_nocallback(QItemSelectionModel *selectionModel);
  void setSelectionRectVisible(bool show);
  void setSpacing(int space);
  void setUniformItemSizes(bool enable);
  virtual void setVisible(bool visible);
  virtual void setVisible_nocallback(bool visible);
  void setWordWrap(bool on);
  void setWrapping(bool enable);
  virtual void setupViewport(QWidget *viewport);
  virtual void setupViewport_nocallback(QWidget *viewport);
  virtual QPainter *sharedPainter() const;
  virtual QPainter *sharedPainter_nocallback() const;
  virtual QSize sizeHint() const;
  virtual QSize sizeHint_nocallback() const;
  virtual int sizeHintForColumn(int column) const;
  virtual int sizeHintForColumn_nocallback(int column) const;
  virtual int sizeHintForRow(int row) const;
  virtual int sizeHintForRow_nocallback(int row) const;
  int spacing() const;
  static QString tr(const char *s, const char *c, int n);
  bool uniformItemSizes() const;
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
  typedef void (*Callback_changeEvent)(void *, QEvent *arg__1);
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
  typedef void (*Callback_editorDestroyed)(void *, QObject *editor);
  Callback_editorDestroyed m_editorDestroyedCallback = nullptr;
  typedef bool (*Callback_event)(void *, QEvent *e);
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
  typedef void (*Callback_mouseMoveEvent)(void *, QMouseEvent *e);
  Callback_mouseMoveEvent m_mouseMoveEventCallback = nullptr;
  typedef void (*Callback_mousePressEvent)(void *, QMouseEvent *event);
  Callback_mousePressEvent m_mousePressEventCallback = nullptr;
  typedef void (*Callback_mouseReleaseEvent)(void *, QMouseEvent *e);
  Callback_mouseReleaseEvent m_mouseReleaseEventCallback = nullptr;
  typedef QModelIndex *(*Callback_moveCursor)(
      void *, QAbstractItemView::CursorAction cursorAction,
      QFlags<Qt::KeyboardModifier> modifiers);
  Callback_moveCursor m_moveCursorCallback = nullptr;
  typedef void (*Callback_paintEvent)(void *, QPaintEvent *e);
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
// QListView::QListView(QWidget * parent)
QtDartBindings_EXPORT void *c_QListView__constructor_QWidget(void *parent_);
// QListView::batchSize() const
QtDartBindings_EXPORT int c_QListView__batchSize(void *thisObj);
// QListView::changeEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QListView__changeEvent_QEvent(void *thisObj,
                                                           void *arg__1_);
// QListView::clearPropertyFlags()
QtDartBindings_EXPORT void c_QListView__clearPropertyFlags(void *thisObj);
// QListView::commitData(QWidget * editor)
QtDartBindings_EXPORT void c_QListView__commitData_QWidget(void *thisObj,
                                                           void *editor_);
// QListView::contentsSize() const
QtDartBindings_EXPORT void *c_QListView__contentsSize(void *thisObj);
// QListView::currentChanged(const QModelIndex & current, const QModelIndex &
// previous)
QtDartBindings_EXPORT void c_QListView__currentChanged_QModelIndex_QModelIndex(
    void *thisObj, void *current_, void *previous_);
// QListView::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QListView__customEvent_QEvent(void *thisObj,
                                                           void *event_);
// QListView::dataChanged(const QModelIndex & topLeft, const QModelIndex &
// bottomRight, const QList<int > & roles)
QtDartBindings_EXPORT void
c_QListView__dataChanged_QModelIndex_QModelIndex_QList_int(void *thisObj,
                                                           void *topLeft_,
                                                           void *bottomRight_,
                                                           void *roles_);
// QListView::devType() const
QtDartBindings_EXPORT int c_QListView__devType(void *thisObj);
// QListView::doItemsLayout()
QtDartBindings_EXPORT void c_QListView__doItemsLayout(void *thisObj);
// QListView::editorDestroyed(QObject * editor)
QtDartBindings_EXPORT void c_QListView__editorDestroyed_QObject(void *thisObj,
                                                                void *editor_);
// QListView::event(QEvent * e)
QtDartBindings_EXPORT bool c_QListView__event_QEvent(void *thisObj, void *e_);
// QListView::eventFilter(QObject * object, QEvent * event)
QtDartBindings_EXPORT bool
c_QListView__eventFilter_QObject_QEvent(void *thisObj, void *object_,
                                        void *event_);
// QListView::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QListView__focusNextPrevChild_bool(void *thisObj,
                                                                bool next);
// QListView::gridSize() const
QtDartBindings_EXPORT void *c_QListView__gridSize(void *thisObj);
// QListView::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QListView__hasHeightForWidth(void *thisObj);
// QListView::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QListView__heightForWidth_int(void *thisObj,
                                                          int arg__1);
// QListView::horizontalOffset() const
QtDartBindings_EXPORT int c_QListView__horizontalOffset(void *thisObj);
// QListView::horizontalScrollbarAction(int action)
QtDartBindings_EXPORT void
c_QListView__horizontalScrollbarAction_int(void *thisObj, int action);
// QListView::horizontalScrollbarValueChanged(int value)
QtDartBindings_EXPORT void
c_QListView__horizontalScrollbarValueChanged_int(void *thisObj, int value);
// QListView::indexAt(const QPoint & p) const
QtDartBindings_EXPORT void *c_QListView__indexAt_QPoint(void *thisObj,
                                                        void *p_);
// QListView::indexesMoved(const QList<QModelIndex > & indexes)
QtDartBindings_EXPORT void
c_QListView__indexesMoved_QList_QModelIndex(void *thisObj, void *indexes_);
QtDartBindings_EXPORT void c_QListView__onIndexesMoved_QList_QModelIndex(
    void *thisObj, void *contextQObject,
    void *callback); // QListView::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QListView__initPainter_QPainter(void *thisObj,
                                                             void *painter_);
// QListView::isIndexHidden(const QModelIndex & index) const
QtDartBindings_EXPORT bool c_QListView__isIndexHidden_QModelIndex(void *thisObj,
                                                                  void *index_);
// QListView::isRowHidden(int row) const
QtDartBindings_EXPORT bool c_QListView__isRowHidden_int(void *thisObj, int row);
// QListView::isSelectionRectVisible() const
QtDartBindings_EXPORT bool c_QListView__isSelectionRectVisible(void *thisObj);
// QListView::isWrapping() const
QtDartBindings_EXPORT bool c_QListView__isWrapping(void *thisObj);
// QListView::keyboardSearch(const QString & search)
QtDartBindings_EXPORT void
c_QListView__keyboardSearch_QString(void *thisObj, const char *search_);
// QListView::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QListView__leaveEvent_QEvent(void *thisObj,
                                                          void *event_);
// QListView::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QListView__minimumSizeHint(void *thisObj);
// QListView::modelColumn() const
QtDartBindings_EXPORT int c_QListView__modelColumn(void *thisObj);
// QListView::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QListView__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);
// QListView::mouseMoveEvent(QMouseEvent * e)
QtDartBindings_EXPORT void
c_QListView__mouseMoveEvent_QMouseEvent(void *thisObj, void *e_);
// QListView::mousePressEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QListView__mousePressEvent_QMouseEvent(void *thisObj, void *event_);
// QListView::mouseReleaseEvent(QMouseEvent * e)
QtDartBindings_EXPORT void
c_QListView__mouseReleaseEvent_QMouseEvent(void *thisObj, void *e_);
// QListView::moveCursor(QAbstractItemView::CursorAction cursorAction,
// QFlags<Qt::KeyboardModifier> modifiers)
QtDartBindings_EXPORT void *
c_QListView__moveCursor_CursorAction_KeyboardModifiers(void *thisObj,
                                                       int cursorAction,
                                                       int modifiers_);
// QListView::paintEvent(QPaintEvent * e)
QtDartBindings_EXPORT void c_QListView__paintEvent_QPaintEvent(void *thisObj,
                                                               void *e_);
// QListView::rectForIndex(const QModelIndex & index) const
QtDartBindings_EXPORT void *c_QListView__rectForIndex_QModelIndex(void *thisObj,
                                                                  void *index_);
// QListView::reset()
QtDartBindings_EXPORT void c_QListView__reset(void *thisObj);
// QListView::resizeContents(int width, int height)
QtDartBindings_EXPORT void
c_QListView__resizeContents_int_int(void *thisObj, int width, int height);
// QListView::rowsAboutToBeRemoved(const QModelIndex & parent, int start, int
// end)
QtDartBindings_EXPORT void
c_QListView__rowsAboutToBeRemoved_QModelIndex_int_int(void *thisObj,
                                                      void *parent_, int start,
                                                      int end);
// QListView::rowsInserted(const QModelIndex & parent, int start, int end)
QtDartBindings_EXPORT void
c_QListView__rowsInserted_QModelIndex_int_int(void *thisObj, void *parent_,
                                              int start, int end);
// QListView::scrollContentsBy(int dx, int dy)
QtDartBindings_EXPORT void
c_QListView__scrollContentsBy_int_int(void *thisObj, int dx, int dy);
// QListView::scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint
// hint)
QtDartBindings_EXPORT void
c_QListView__scrollTo_QModelIndex_ScrollHint(void *thisObj, void *index_,
                                             int hint);
// QListView::selectAll()
QtDartBindings_EXPORT void c_QListView__selectAll(void *thisObj);
// QListView::selectedIndexes() const
QtDartBindings_EXPORT void *c_QListView__selectedIndexes(void *thisObj);
// QListView::selectionChanged(const QItemSelection & selected, const
// QItemSelection & deselected)
QtDartBindings_EXPORT void
c_QListView__selectionChanged_QItemSelection_QItemSelection(void *thisObj,
                                                            void *selected_,
                                                            void *deselected_);
// QListView::selectionCommand(const QModelIndex & index, const QEvent * event)
// const
QtDartBindings_EXPORT int
c_QListView__selectionCommand_QModelIndex_QEvent(void *thisObj, void *index_,
                                                 void *event_);
// QListView::setBatchSize(int batchSize)
QtDartBindings_EXPORT void c_QListView__setBatchSize_int(void *thisObj,
                                                         int batchSize);
// QListView::setGridSize(const QSize & size)
QtDartBindings_EXPORT void c_QListView__setGridSize_QSize(void *thisObj,
                                                          void *size_);
// QListView::setModel(QAbstractItemModel * model)
QtDartBindings_EXPORT void
c_QListView__setModel_QAbstractItemModel(void *thisObj, void *model_);
// QListView::setModelColumn(int column)
QtDartBindings_EXPORT void c_QListView__setModelColumn_int(void *thisObj,
                                                           int column);
// QListView::setPositionForIndex(const QPoint & position, const QModelIndex &
// index)
QtDartBindings_EXPORT void c_QListView__setPositionForIndex_QPoint_QModelIndex(
    void *thisObj, void *position_, void *index_);
// QListView::setRootIndex(const QModelIndex & index)
QtDartBindings_EXPORT void c_QListView__setRootIndex_QModelIndex(void *thisObj,
                                                                 void *index_);
// QListView::setRowHidden(int row, bool hide)
QtDartBindings_EXPORT void
c_QListView__setRowHidden_int_bool(void *thisObj, int row, bool hide);
// QListView::setSelection(const QRect & rect,
// QFlags<QItemSelectionModel::SelectionFlag> command)
QtDartBindings_EXPORT void
c_QListView__setSelection_QRect_SelectionFlags(void *thisObj, void *rect_,
                                               int command_);
// QListView::setSelectionModel(QItemSelectionModel * selectionModel)
QtDartBindings_EXPORT void
c_QListView__setSelectionModel_QItemSelectionModel(void *thisObj,
                                                   void *selectionModel_);
// QListView::setSelectionRectVisible(bool show)
QtDartBindings_EXPORT void
c_QListView__setSelectionRectVisible_bool(void *thisObj, bool show);
// QListView::setSpacing(int space)
QtDartBindings_EXPORT void c_QListView__setSpacing_int(void *thisObj,
                                                       int space);
// QListView::setUniformItemSizes(bool enable)
QtDartBindings_EXPORT void c_QListView__setUniformItemSizes_bool(void *thisObj,
                                                                 bool enable);
// QListView::setVisible(bool visible)
QtDartBindings_EXPORT void c_QListView__setVisible_bool(void *thisObj,
                                                        bool visible);
// QListView::setWordWrap(bool on)
QtDartBindings_EXPORT void c_QListView__setWordWrap_bool(void *thisObj,
                                                         bool on);
// QListView::setWrapping(bool enable)
QtDartBindings_EXPORT void c_QListView__setWrapping_bool(void *thisObj,
                                                         bool enable);
// QListView::setupViewport(QWidget * viewport)
QtDartBindings_EXPORT void c_QListView__setupViewport_QWidget(void *thisObj,
                                                              void *viewport_);
// QListView::sharedPainter() const
QtDartBindings_EXPORT void *c_QListView__sharedPainter(void *thisObj);
// QListView::sizeHint() const
QtDartBindings_EXPORT void *c_QListView__sizeHint(void *thisObj);
// QListView::sizeHintForColumn(int column) const
QtDartBindings_EXPORT int c_QListView__sizeHintForColumn_int(void *thisObj,
                                                             int column);
// QListView::sizeHintForRow(int row) const
QtDartBindings_EXPORT int c_QListView__sizeHintForRow_int(void *thisObj,
                                                          int row);
// QListView::spacing() const
QtDartBindings_EXPORT int c_QListView__spacing(void *thisObj);
// QListView::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QListView__tr_char_char_int(const char *s, const char *c, int n);
// QListView::uniformItemSizes() const
QtDartBindings_EXPORT bool c_QListView__uniformItemSizes(void *thisObj);
// QListView::updateEditorData()
QtDartBindings_EXPORT void c_QListView__updateEditorData(void *thisObj);
// QListView::updateEditorGeometries()
QtDartBindings_EXPORT void c_QListView__updateEditorGeometries(void *thisObj);
// QListView::updateGeometries()
QtDartBindings_EXPORT void c_QListView__updateGeometries(void *thisObj);
// QListView::verticalOffset() const
QtDartBindings_EXPORT int c_QListView__verticalOffset(void *thisObj);
// QListView::verticalScrollbarAction(int action)
QtDartBindings_EXPORT void
c_QListView__verticalScrollbarAction_int(void *thisObj, int action);
// QListView::verticalScrollbarValueChanged(int value)
QtDartBindings_EXPORT void
c_QListView__verticalScrollbarValueChanged_int(void *thisObj, int value);
// QListView::viewportEvent(QEvent * event)
QtDartBindings_EXPORT bool c_QListView__viewportEvent_QEvent(void *thisObj,
                                                             void *event_);
// QListView::viewportSizeHint() const
QtDartBindings_EXPORT void *c_QListView__viewportSizeHint(void *thisObj);
// QListView::visualRect(const QModelIndex & index) const
QtDartBindings_EXPORT void *c_QListView__visualRect_QModelIndex(void *thisObj,
                                                                void *index_);
// QListView::visualRegionForSelection(const QItemSelection & selection) const
QtDartBindings_EXPORT void *
c_QListView__visualRegionForSelection_QItemSelection(void *thisObj,
                                                     void *selection_);
// QListView::wordWrap() const
QtDartBindings_EXPORT bool c_QListView__wordWrap(void *thisObj);
QtDartBindings_EXPORT void c_QListView__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QListView__registerVirtualMethodCallback(void *ptr, void *callback,
                                           int methodId);
QtDartBindings_EXPORT void c_QListView_Finalizer(void *cppObj);
}
