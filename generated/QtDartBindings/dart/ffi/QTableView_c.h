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
#include <qtableview.h>
#include <qwidget.h>

namespace QtDartBindings_wrappersNS {
class QTableView_wrapper : public ::QTableView {
public:
  ~QTableView_wrapper();
  using ::QAbstractItemView::CursorAction;
  QTableView_wrapper(QWidget *parent = nullptr);
  virtual void changeEvent(QEvent *arg__1);
  virtual void changeEvent_nocallback(QEvent *arg__1);
  void clearSpans();
  int columnAt(int x) const;
  void columnCountChanged(int oldCount, int newCount);
  void columnMoved(int column, int oldIndex, int newIndex);
  void columnResized(int column, int oldWidth, int newWidth);
  int columnSpan(int row, int column) const;
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
  virtual void editorDestroyed(QObject *editor);
  virtual void editorDestroyed_nocallback(QObject *editor);
  virtual bool event(QEvent *event);
  virtual bool event_nocallback(QEvent *event);
  virtual bool eventFilter(QObject *object, QEvent *event);
  virtual bool eventFilter_nocallback(QObject *object, QEvent *event);
  virtual bool focusNextPrevChild(bool next);
  virtual bool focusNextPrevChild_nocallback(bool next);
  virtual bool hasHeightForWidth() const;
  virtual bool hasHeightForWidth_nocallback() const;
  virtual int heightForWidth(int arg__1) const;
  virtual int heightForWidth_nocallback(int arg__1) const;
  void hideColumn(int column);
  void hideRow(int row);
  virtual int horizontalOffset() const;
  virtual int horizontalOffset_nocallback() const;
  virtual void horizontalScrollbarAction(int action);
  virtual void horizontalScrollbarAction_nocallback(int action);
  virtual void horizontalScrollbarValueChanged(int value);
  virtual void horizontalScrollbarValueChanged_nocallback(int value);
  virtual QModelIndex indexAt(const QPoint &p) const;
  virtual QModelIndex indexAt_nocallback(const QPoint &p) const;
  virtual void initPainter(QPainter *painter) const;
  virtual void initPainter_nocallback(QPainter *painter) const;
  bool isColumnHidden(int column) const;
  bool isCornerButtonEnabled() const;
  virtual bool isIndexHidden(const QModelIndex &index) const;
  virtual bool isIndexHidden_nocallback(const QModelIndex &index) const;
  bool isRowHidden(int row) const;
  bool isSortingEnabled() const;
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
  virtual void paintEvent(QPaintEvent *e);
  virtual void paintEvent_nocallback(QPaintEvent *e);
  virtual void reset();
  virtual void reset_nocallback();
  void resizeColumnToContents(int column);
  void resizeColumnsToContents();
  void resizeRowToContents(int row);
  void resizeRowsToContents();
  int rowAt(int y) const;
  void rowCountChanged(int oldCount, int newCount);
  int rowHeight(int row) const;
  void rowMoved(int row, int oldIndex, int newIndex);
  void rowResized(int row, int oldHeight, int newHeight);
  int rowSpan(int row, int column) const;
  int rowViewportPosition(int row) const;
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
  void selectColumn(int column);
  void selectRow(int row);
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
  void setColumnHidden(int column, bool hide);
  void setColumnWidth(int column, int width);
  void setCornerButtonEnabled(bool enable);
  virtual void setModel(QAbstractItemModel *model);
  virtual void setModel_nocallback(QAbstractItemModel *model);
  virtual void setRootIndex(const QModelIndex &index);
  virtual void setRootIndex_nocallback(const QModelIndex &index);
  void setRowHeight(int row, int height);
  void setRowHidden(int row, bool hide);
  virtual void setSelection(const QRect &rect,
                            QFlags<QItemSelectionModel::SelectionFlag> command);
  virtual void
  setSelection_nocallback(const QRect &rect,
                          QFlags<QItemSelectionModel::SelectionFlag> command);
  virtual void setSelectionModel(QItemSelectionModel *selectionModel);
  virtual void
  setSelectionModel_nocallback(QItemSelectionModel *selectionModel);
  void setShowGrid(bool show);
  void setSortingEnabled(bool enable);
  void setSpan(int row, int column, int rowSpan, int columnSpan);
  virtual void setVisible(bool visible);
  virtual void setVisible_nocallback(bool visible);
  void setWordWrap(bool on);
  virtual void setupViewport(QWidget *viewport);
  virtual void setupViewport_nocallback(QWidget *viewport);
  virtual QPainter *sharedPainter() const;
  virtual QPainter *sharedPainter_nocallback() const;
  void showColumn(int column);
  bool showGrid() const;
  void showRow(int row);
  virtual QSize sizeHint() const;
  virtual QSize sizeHint_nocallback() const;
  virtual int sizeHintForColumn(int column) const;
  virtual int sizeHintForColumn_nocallback(int column) const;
  virtual int sizeHintForRow(int row) const;
  virtual int sizeHintForRow_nocallback(int row) const;
  void sortByColumn(int column, Qt::SortOrder order);
  static QString tr(const char *s, const char *c, int n);
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
// QTableView::QTableView(QWidget * parent)
QtDartBindings_EXPORT void *c_QTableView__constructor_QWidget(void *parent_);
// QTableView::changeEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QTableView__changeEvent_QEvent(void *thisObj,
                                                            void *arg__1_);
// QTableView::clearSpans()
QtDartBindings_EXPORT void c_QTableView__clearSpans(void *thisObj);
// QTableView::columnAt(int x) const
QtDartBindings_EXPORT int c_QTableView__columnAt_int(void *thisObj, int x);
// QTableView::columnCountChanged(int oldCount, int newCount)
QtDartBindings_EXPORT void
c_QTableView__columnCountChanged_int_int(void *thisObj, int oldCount,
                                         int newCount);
// QTableView::columnMoved(int column, int oldIndex, int newIndex)
QtDartBindings_EXPORT void c_QTableView__columnMoved_int_int_int(void *thisObj,
                                                                 int column,
                                                                 int oldIndex,
                                                                 int newIndex);
// QTableView::columnResized(int column, int oldWidth, int newWidth)
QtDartBindings_EXPORT void
c_QTableView__columnResized_int_int_int(void *thisObj, int column, int oldWidth,
                                        int newWidth);
// QTableView::columnSpan(int row, int column) const
QtDartBindings_EXPORT int c_QTableView__columnSpan_int_int(void *thisObj,
                                                           int row, int column);
// QTableView::columnViewportPosition(int column) const
QtDartBindings_EXPORT int
c_QTableView__columnViewportPosition_int(void *thisObj, int column);
// QTableView::columnWidth(int column) const
QtDartBindings_EXPORT int c_QTableView__columnWidth_int(void *thisObj,
                                                        int column);
// QTableView::commitData(QWidget * editor)
QtDartBindings_EXPORT void c_QTableView__commitData_QWidget(void *thisObj,
                                                            void *editor_);
// QTableView::currentChanged(const QModelIndex & current, const QModelIndex &
// previous)
QtDartBindings_EXPORT void c_QTableView__currentChanged_QModelIndex_QModelIndex(
    void *thisObj, void *current_, void *previous_);
// QTableView::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QTableView__customEvent_QEvent(void *thisObj,
                                                            void *event_);
// QTableView::dataChanged(const QModelIndex & topLeft, const QModelIndex &
// bottomRight, const QList<int > & roles)
QtDartBindings_EXPORT void
c_QTableView__dataChanged_QModelIndex_QModelIndex_QList_int(void *thisObj,
                                                            void *topLeft_,
                                                            void *bottomRight_,
                                                            void *roles_);
// QTableView::devType() const
QtDartBindings_EXPORT int c_QTableView__devType(void *thisObj);
// QTableView::doItemsLayout()
QtDartBindings_EXPORT void c_QTableView__doItemsLayout(void *thisObj);
// QTableView::editorDestroyed(QObject * editor)
QtDartBindings_EXPORT void c_QTableView__editorDestroyed_QObject(void *thisObj,
                                                                 void *editor_);
// QTableView::event(QEvent * event)
QtDartBindings_EXPORT bool c_QTableView__event_QEvent(void *thisObj,
                                                      void *event_);
// QTableView::eventFilter(QObject * object, QEvent * event)
QtDartBindings_EXPORT bool
c_QTableView__eventFilter_QObject_QEvent(void *thisObj, void *object_,
                                         void *event_);
// QTableView::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QTableView__focusNextPrevChild_bool(void *thisObj,
                                                                 bool next);
// QTableView::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QTableView__hasHeightForWidth(void *thisObj);
// QTableView::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QTableView__heightForWidth_int(void *thisObj,
                                                           int arg__1);
// QTableView::hideColumn(int column)
QtDartBindings_EXPORT void c_QTableView__hideColumn_int(void *thisObj,
                                                        int column);
// QTableView::hideRow(int row)
QtDartBindings_EXPORT void c_QTableView__hideRow_int(void *thisObj, int row);
// QTableView::horizontalOffset() const
QtDartBindings_EXPORT int c_QTableView__horizontalOffset(void *thisObj);
// QTableView::horizontalScrollbarAction(int action)
QtDartBindings_EXPORT void
c_QTableView__horizontalScrollbarAction_int(void *thisObj, int action);
// QTableView::horizontalScrollbarValueChanged(int value)
QtDartBindings_EXPORT void
c_QTableView__horizontalScrollbarValueChanged_int(void *thisObj, int value);
// QTableView::indexAt(const QPoint & p) const
QtDartBindings_EXPORT void *c_QTableView__indexAt_QPoint(void *thisObj,
                                                         void *p_);
// QTableView::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QTableView__initPainter_QPainter(void *thisObj,
                                                              void *painter_);
// QTableView::isColumnHidden(int column) const
QtDartBindings_EXPORT bool c_QTableView__isColumnHidden_int(void *thisObj,
                                                            int column);
// QTableView::isCornerButtonEnabled() const
QtDartBindings_EXPORT bool c_QTableView__isCornerButtonEnabled(void *thisObj);
// QTableView::isIndexHidden(const QModelIndex & index) const
QtDartBindings_EXPORT bool
c_QTableView__isIndexHidden_QModelIndex(void *thisObj, void *index_);
// QTableView::isRowHidden(int row) const
QtDartBindings_EXPORT bool c_QTableView__isRowHidden_int(void *thisObj,
                                                         int row);
// QTableView::isSortingEnabled() const
QtDartBindings_EXPORT bool c_QTableView__isSortingEnabled(void *thisObj);
// QTableView::keyboardSearch(const QString & search)
QtDartBindings_EXPORT void
c_QTableView__keyboardSearch_QString(void *thisObj, const char *search_);
// QTableView::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QTableView__leaveEvent_QEvent(void *thisObj,
                                                           void *event_);
// QTableView::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QTableView__minimumSizeHint(void *thisObj);
// QTableView::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QTableView__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);
// QTableView::mouseMoveEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QTableView__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_);
// QTableView::mousePressEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QTableView__mousePressEvent_QMouseEvent(void *thisObj, void *event_);
// QTableView::mouseReleaseEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QTableView__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_);
// QTableView::moveCursor(QAbstractItemView::CursorAction cursorAction,
// QFlags<Qt::KeyboardModifier> modifiers)
QtDartBindings_EXPORT void *
c_QTableView__moveCursor_CursorAction_KeyboardModifiers(void *thisObj,
                                                        int cursorAction,
                                                        int modifiers_);
// QTableView::paintEvent(QPaintEvent * e)
QtDartBindings_EXPORT void c_QTableView__paintEvent_QPaintEvent(void *thisObj,
                                                                void *e_);
// QTableView::reset()
QtDartBindings_EXPORT void c_QTableView__reset(void *thisObj);
// QTableView::resizeColumnToContents(int column)
QtDartBindings_EXPORT void
c_QTableView__resizeColumnToContents_int(void *thisObj, int column);
// QTableView::resizeColumnsToContents()
QtDartBindings_EXPORT void c_QTableView__resizeColumnsToContents(void *thisObj);
// QTableView::resizeRowToContents(int row)
QtDartBindings_EXPORT void c_QTableView__resizeRowToContents_int(void *thisObj,
                                                                 int row);
// QTableView::resizeRowsToContents()
QtDartBindings_EXPORT void c_QTableView__resizeRowsToContents(void *thisObj);
// QTableView::rowAt(int y) const
QtDartBindings_EXPORT int c_QTableView__rowAt_int(void *thisObj, int y);
// QTableView::rowCountChanged(int oldCount, int newCount)
QtDartBindings_EXPORT void c_QTableView__rowCountChanged_int_int(void *thisObj,
                                                                 int oldCount,
                                                                 int newCount);
// QTableView::rowHeight(int row) const
QtDartBindings_EXPORT int c_QTableView__rowHeight_int(void *thisObj, int row);
// QTableView::rowMoved(int row, int oldIndex, int newIndex)
QtDartBindings_EXPORT void c_QTableView__rowMoved_int_int_int(void *thisObj,
                                                              int row,
                                                              int oldIndex,
                                                              int newIndex);
// QTableView::rowResized(int row, int oldHeight, int newHeight)
QtDartBindings_EXPORT void c_QTableView__rowResized_int_int_int(void *thisObj,
                                                                int row,
                                                                int oldHeight,
                                                                int newHeight);
// QTableView::rowSpan(int row, int column) const
QtDartBindings_EXPORT int c_QTableView__rowSpan_int_int(void *thisObj, int row,
                                                        int column);
// QTableView::rowViewportPosition(int row) const
QtDartBindings_EXPORT int c_QTableView__rowViewportPosition_int(void *thisObj,
                                                                int row);
// QTableView::rowsAboutToBeRemoved(const QModelIndex & parent, int start, int
// end)
QtDartBindings_EXPORT void
c_QTableView__rowsAboutToBeRemoved_QModelIndex_int_int(void *thisObj,
                                                       void *parent_, int start,
                                                       int end);
// QTableView::rowsInserted(const QModelIndex & parent, int start, int end)
QtDartBindings_EXPORT void
c_QTableView__rowsInserted_QModelIndex_int_int(void *thisObj, void *parent_,
                                               int start, int end);
// QTableView::scrollContentsBy(int dx, int dy)
QtDartBindings_EXPORT void
c_QTableView__scrollContentsBy_int_int(void *thisObj, int dx, int dy);
// QTableView::scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint
// hint)
QtDartBindings_EXPORT void
c_QTableView__scrollTo_QModelIndex_ScrollHint(void *thisObj, void *index_,
                                              int hint);
// QTableView::selectAll()
QtDartBindings_EXPORT void c_QTableView__selectAll(void *thisObj);
// QTableView::selectColumn(int column)
QtDartBindings_EXPORT void c_QTableView__selectColumn_int(void *thisObj,
                                                          int column);
// QTableView::selectRow(int row)
QtDartBindings_EXPORT void c_QTableView__selectRow_int(void *thisObj, int row);
// QTableView::selectedIndexes() const
QtDartBindings_EXPORT void *c_QTableView__selectedIndexes(void *thisObj);
// QTableView::selectionChanged(const QItemSelection & selected, const
// QItemSelection & deselected)
QtDartBindings_EXPORT void
c_QTableView__selectionChanged_QItemSelection_QItemSelection(void *thisObj,
                                                             void *selected_,
                                                             void *deselected_);
// QTableView::selectionCommand(const QModelIndex & index, const QEvent * event)
// const
QtDartBindings_EXPORT int
c_QTableView__selectionCommand_QModelIndex_QEvent(void *thisObj, void *index_,
                                                  void *event_);
// QTableView::setColumnHidden(int column, bool hide)
QtDartBindings_EXPORT void
c_QTableView__setColumnHidden_int_bool(void *thisObj, int column, bool hide);
// QTableView::setColumnWidth(int column, int width)
QtDartBindings_EXPORT void
c_QTableView__setColumnWidth_int_int(void *thisObj, int column, int width);
// QTableView::setCornerButtonEnabled(bool enable)
QtDartBindings_EXPORT void
c_QTableView__setCornerButtonEnabled_bool(void *thisObj, bool enable);
// QTableView::setModel(QAbstractItemModel * model)
QtDartBindings_EXPORT void
c_QTableView__setModel_QAbstractItemModel(void *thisObj, void *model_);
// QTableView::setRootIndex(const QModelIndex & index)
QtDartBindings_EXPORT void c_QTableView__setRootIndex_QModelIndex(void *thisObj,
                                                                  void *index_);
// QTableView::setRowHeight(int row, int height)
QtDartBindings_EXPORT void
c_QTableView__setRowHeight_int_int(void *thisObj, int row, int height);
// QTableView::setRowHidden(int row, bool hide)
QtDartBindings_EXPORT void
c_QTableView__setRowHidden_int_bool(void *thisObj, int row, bool hide);
// QTableView::setSelection(const QRect & rect,
// QFlags<QItemSelectionModel::SelectionFlag> command)
QtDartBindings_EXPORT void
c_QTableView__setSelection_QRect_SelectionFlags(void *thisObj, void *rect_,
                                                int command_);
// QTableView::setSelectionModel(QItemSelectionModel * selectionModel)
QtDartBindings_EXPORT void
c_QTableView__setSelectionModel_QItemSelectionModel(void *thisObj,
                                                    void *selectionModel_);
// QTableView::setShowGrid(bool show)
QtDartBindings_EXPORT void c_QTableView__setShowGrid_bool(void *thisObj,
                                                          bool show);
// QTableView::setSortingEnabled(bool enable)
QtDartBindings_EXPORT void c_QTableView__setSortingEnabled_bool(void *thisObj,
                                                                bool enable);
// QTableView::setSpan(int row, int column, int rowSpan, int columnSpan)
QtDartBindings_EXPORT void
c_QTableView__setSpan_int_int_int_int(void *thisObj, int row, int column,
                                      int rowSpan, int columnSpan);
// QTableView::setVisible(bool visible)
QtDartBindings_EXPORT void c_QTableView__setVisible_bool(void *thisObj,
                                                         bool visible);
// QTableView::setWordWrap(bool on)
QtDartBindings_EXPORT void c_QTableView__setWordWrap_bool(void *thisObj,
                                                          bool on);
// QTableView::setupViewport(QWidget * viewport)
QtDartBindings_EXPORT void c_QTableView__setupViewport_QWidget(void *thisObj,
                                                               void *viewport_);
// QTableView::sharedPainter() const
QtDartBindings_EXPORT void *c_QTableView__sharedPainter(void *thisObj);
// QTableView::showColumn(int column)
QtDartBindings_EXPORT void c_QTableView__showColumn_int(void *thisObj,
                                                        int column);
// QTableView::showGrid() const
QtDartBindings_EXPORT bool c_QTableView__showGrid(void *thisObj);
// QTableView::showRow(int row)
QtDartBindings_EXPORT void c_QTableView__showRow_int(void *thisObj, int row);
// QTableView::sizeHint() const
QtDartBindings_EXPORT void *c_QTableView__sizeHint(void *thisObj);
// QTableView::sizeHintForColumn(int column) const
QtDartBindings_EXPORT int c_QTableView__sizeHintForColumn_int(void *thisObj,
                                                              int column);
// QTableView::sizeHintForRow(int row) const
QtDartBindings_EXPORT int c_QTableView__sizeHintForRow_int(void *thisObj,
                                                           int row);
// QTableView::sortByColumn(int column, Qt::SortOrder order)
QtDartBindings_EXPORT void
c_QTableView__sortByColumn_int_SortOrder(void *thisObj, int column, int order);
// QTableView::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QTableView__tr_char_char_int(const char *s, const char *c, int n);
// QTableView::updateEditorData()
QtDartBindings_EXPORT void c_QTableView__updateEditorData(void *thisObj);
// QTableView::updateEditorGeometries()
QtDartBindings_EXPORT void c_QTableView__updateEditorGeometries(void *thisObj);
// QTableView::updateGeometries()
QtDartBindings_EXPORT void c_QTableView__updateGeometries(void *thisObj);
// QTableView::verticalOffset() const
QtDartBindings_EXPORT int c_QTableView__verticalOffset(void *thisObj);
// QTableView::verticalScrollbarAction(int action)
QtDartBindings_EXPORT void
c_QTableView__verticalScrollbarAction_int(void *thisObj, int action);
// QTableView::verticalScrollbarValueChanged(int value)
QtDartBindings_EXPORT void
c_QTableView__verticalScrollbarValueChanged_int(void *thisObj, int value);
// QTableView::viewportEvent(QEvent * event)
QtDartBindings_EXPORT bool c_QTableView__viewportEvent_QEvent(void *thisObj,
                                                              void *event_);
// QTableView::viewportSizeHint() const
QtDartBindings_EXPORT void *c_QTableView__viewportSizeHint(void *thisObj);
// QTableView::visualRect(const QModelIndex & index) const
QtDartBindings_EXPORT void *c_QTableView__visualRect_QModelIndex(void *thisObj,
                                                                 void *index_);
// QTableView::visualRegionForSelection(const QItemSelection & selection) const
QtDartBindings_EXPORT void *
c_QTableView__visualRegionForSelection_QItemSelection(void *thisObj,
                                                      void *selection_);
// QTableView::wordWrap() const
QtDartBindings_EXPORT bool c_QTableView__wordWrap(void *thisObj);
QtDartBindings_EXPORT void c_QTableView__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QTableView__registerVirtualMethodCallback(void *ptr, void *callback,
                                            int methodId);
QtDartBindings_EXPORT void c_QTableView_Finalizer(void *cppObj);
}
