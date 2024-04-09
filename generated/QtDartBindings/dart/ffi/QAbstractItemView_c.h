/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
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
class QAbstractItemView_wrapper : public ::QAbstractItemView {
public:
  ~QAbstractItemView_wrapper();
  using ::QAbstractItemView::CursorAction;
  QAbstractItemView_wrapper(QWidget *parent = nullptr);
  void activated(const QModelIndex &index);
  bool alternatingRowColors() const;
  int autoScrollMargin() const;
  virtual void changeEvent(QEvent *arg__1);
  virtual void changeEvent_nocallback(QEvent *arg__1);
  void clearSelection();
  void clicked(const QModelIndex &index);
  void closePersistentEditor(const QModelIndex &index);
  virtual void commitData(QWidget *editor);
  virtual void commitData_nocallback(QWidget *editor);
  virtual void currentChanged(const QModelIndex &current,
                              const QModelIndex &previous);
  virtual void currentChanged_nocallback(const QModelIndex &current,
                                         const QModelIndex &previous);
  QModelIndex currentIndex() const;
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
  QPoint dirtyRegionOffset() const;
  void doAutoScroll();
  virtual void doItemsLayout();
  virtual void doItemsLayout_nocallback();
  void doubleClicked(const QModelIndex &index);
  bool dragDropOverwriteMode() const;
  bool dragEnabled() const;
  void edit(const QModelIndex &index);
  virtual void editorDestroyed(QObject *editor);
  virtual void editorDestroyed_nocallback(QObject *editor);
  void entered(const QModelIndex &index);
  virtual bool event(QEvent *event);
  virtual bool event_nocallback(QEvent *event);
  virtual bool eventFilter(QObject *object, QEvent *event);
  virtual bool eventFilter_nocallback(QObject *object, QEvent *event);
  void executeDelayedItemsLayout();
  virtual bool focusNextPrevChild(bool next);
  virtual bool focusNextPrevChild_nocallback(bool next);
  bool hasAutoScroll() const;
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
  QSize iconSize() const;
  void iconSizeChanged(const QSize &size);
  virtual QModelIndex indexAt(const QPoint &point) const;
  virtual QModelIndex indexAt_nocallback(const QPoint &point) const;
  QWidget *indexWidget(const QModelIndex &index) const;
  virtual void initPainter(QPainter *painter) const;
  virtual void initPainter_nocallback(QPainter *painter) const;
  virtual bool isIndexHidden(const QModelIndex &index) const;
  virtual bool isIndexHidden_nocallback(const QModelIndex &index) const;
  bool isPersistentEditorOpen(const QModelIndex &index) const;
  virtual void keyboardSearch(const QString &search);
  virtual void keyboardSearch_nocallback(const QString &search);
  virtual void leaveEvent(QEvent *event);
  virtual void leaveEvent_nocallback(QEvent *event);
  virtual QSize minimumSizeHint() const;
  virtual QSize minimumSizeHint_nocallback() const;
  QAbstractItemModel *model() const;
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
  void openPersistentEditor(const QModelIndex &index);
  virtual void paintEvent(QPaintEvent *arg__1);
  virtual void paintEvent_nocallback(QPaintEvent *arg__1);
  void pressed(const QModelIndex &index);
  virtual void reset();
  virtual void reset_nocallback();
  void resetHorizontalScrollMode();
  void resetVerticalScrollMode();
  QModelIndex rootIndex() const;
  virtual void rowsAboutToBeRemoved(const QModelIndex &parent, int start,
                                    int end);
  virtual void rowsAboutToBeRemoved_nocallback(const QModelIndex &parent,
                                               int start, int end);
  virtual void rowsInserted(const QModelIndex &parent, int start, int end);
  virtual void rowsInserted_nocallback(const QModelIndex &parent, int start,
                                       int end);
  void scheduleDelayedItemsLayout();
  virtual void scrollContentsBy(int dx, int dy);
  virtual void scrollContentsBy_nocallback(int dx, int dy);
  void scrollDirtyRegion(int dx, int dy);
  virtual void scrollTo(const QModelIndex &index,
                        QAbstractItemView::ScrollHint hint =
                            QAbstractItemView::ScrollHint::EnsureVisible);
  virtual void
  scrollTo_nocallback(const QModelIndex &index,
                      QAbstractItemView::ScrollHint hint =
                          QAbstractItemView::ScrollHint::EnsureVisible);
  void scrollToBottom();
  void scrollToTop();
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
  QItemSelectionModel *selectionModel() const;
  void setAlternatingRowColors(bool enable);
  void setAutoScroll(bool enable);
  void setAutoScrollMargin(int margin);
  void setCurrentIndex(const QModelIndex &index);
  void setDirtyRegion(const QRegion &region);
  void setDragDropOverwriteMode(bool overwrite);
  void setDragEnabled(bool enable);
  void setDropIndicatorShown(bool enable);
  void setIconSize(const QSize &size);
  void setIndexWidget(const QModelIndex &index, QWidget *widget);
  virtual void setModel(QAbstractItemModel *model);
  virtual void setModel_nocallback(QAbstractItemModel *model);
  virtual void setRootIndex(const QModelIndex &index);
  virtual void setRootIndex_nocallback(const QModelIndex &index);
  virtual void setSelection(const QRect &rect,
                            QFlags<QItemSelectionModel::SelectionFlag> command);
  virtual void
  setSelection_nocallback(const QRect &rect,
                          QFlags<QItemSelectionModel::SelectionFlag> command);
  virtual void setSelectionModel(QItemSelectionModel *selectionModel);
  virtual void
  setSelectionModel_nocallback(QItemSelectionModel *selectionModel);
  void setTabKeyNavigation(bool enable);
  virtual void setVisible(bool visible);
  virtual void setVisible_nocallback(bool visible);
  virtual void setupViewport(QWidget *viewport);
  virtual void setupViewport_nocallback(QWidget *viewport);
  virtual QPainter *sharedPainter() const;
  virtual QPainter *sharedPainter_nocallback() const;
  bool showDropIndicator() const;
  virtual QSize sizeHint() const;
  virtual QSize sizeHint_nocallback() const;
  virtual int sizeHintForColumn(int column) const;
  virtual int sizeHintForColumn_nocallback(int column) const;
  QSize sizeHintForIndex(const QModelIndex &index) const;
  virtual int sizeHintForRow(int row) const;
  virtual int sizeHintForRow_nocallback(int row) const;
  void startAutoScroll();
  void stopAutoScroll();
  bool tabKeyNavigation() const;
  static QString tr(const char *s, const char *c, int n);
  void update(const QModelIndex &index);
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
  void viewportEntered();
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
  typedef QModelIndex *(*Callback_indexAt)(void *, const QPoint &point);
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
  typedef void (*Callback_paintEvent)(void *, QPaintEvent *arg__1);
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
// QAbstractItemView::QAbstractItemView(QWidget * parent)
QtDartBindings_EXPORT void *
c_QAbstractItemView__constructor_QWidget(void *parent_);
// QAbstractItemView::activated(const QModelIndex & index)
QtDartBindings_EXPORT void
c_QAbstractItemView__activated_QModelIndex(void *thisObj, void *index_);
QtDartBindings_EXPORT void c_QAbstractItemView__onActivated_QModelIndex(
    void *thisObj, void *contextQObject,
    void *callback); // QAbstractItemView::alternatingRowColors() const
QtDartBindings_EXPORT bool
c_QAbstractItemView__alternatingRowColors(void *thisObj);
// QAbstractItemView::autoScrollMargin() const
QtDartBindings_EXPORT int c_QAbstractItemView__autoScrollMargin(void *thisObj);
// QAbstractItemView::changeEvent(QEvent * arg__1)
QtDartBindings_EXPORT void
c_QAbstractItemView__changeEvent_QEvent(void *thisObj, void *arg__1_);
// QAbstractItemView::clearSelection()
QtDartBindings_EXPORT void c_QAbstractItemView__clearSelection(void *thisObj);
// QAbstractItemView::clicked(const QModelIndex & index)
QtDartBindings_EXPORT void
c_QAbstractItemView__clicked_QModelIndex(void *thisObj, void *index_);
QtDartBindings_EXPORT void c_QAbstractItemView__onClicked_QModelIndex(
    void *thisObj, void *contextQObject,
    void *callback); // QAbstractItemView::closePersistentEditor(const
                     // QModelIndex & index)
QtDartBindings_EXPORT void
c_QAbstractItemView__closePersistentEditor_QModelIndex(void *thisObj,
                                                       void *index_);
// QAbstractItemView::commitData(QWidget * editor)
QtDartBindings_EXPORT void
c_QAbstractItemView__commitData_QWidget(void *thisObj, void *editor_);
// QAbstractItemView::currentChanged(const QModelIndex & current, const
// QModelIndex & previous)
QtDartBindings_EXPORT void
c_QAbstractItemView__currentChanged_QModelIndex_QModelIndex(void *thisObj,
                                                            void *current_,
                                                            void *previous_);
// QAbstractItemView::currentIndex() const
QtDartBindings_EXPORT void *c_QAbstractItemView__currentIndex(void *thisObj);
// QAbstractItemView::customEvent(QEvent * event)
QtDartBindings_EXPORT void
c_QAbstractItemView__customEvent_QEvent(void *thisObj, void *event_);
// QAbstractItemView::dataChanged(const QModelIndex & topLeft, const QModelIndex
// & bottomRight, const QList<int > & roles)
QtDartBindings_EXPORT void
c_QAbstractItemView__dataChanged_QModelIndex_QModelIndex_QList_int(
    void *thisObj, void *topLeft_, void *bottomRight_, void *roles_);
// QAbstractItemView::devType() const
QtDartBindings_EXPORT int c_QAbstractItemView__devType(void *thisObj);
// QAbstractItemView::dirtyRegionOffset() const
QtDartBindings_EXPORT void *
c_QAbstractItemView__dirtyRegionOffset(void *thisObj);
// QAbstractItemView::doAutoScroll()
QtDartBindings_EXPORT void c_QAbstractItemView__doAutoScroll(void *thisObj);
// QAbstractItemView::doItemsLayout()
QtDartBindings_EXPORT void c_QAbstractItemView__doItemsLayout(void *thisObj);
// QAbstractItemView::doubleClicked(const QModelIndex & index)
QtDartBindings_EXPORT void
c_QAbstractItemView__doubleClicked_QModelIndex(void *thisObj, void *index_);
QtDartBindings_EXPORT void c_QAbstractItemView__onDoubleClicked_QModelIndex(
    void *thisObj, void *contextQObject,
    void *callback); // QAbstractItemView::dragDropOverwriteMode() const
QtDartBindings_EXPORT bool
c_QAbstractItemView__dragDropOverwriteMode(void *thisObj);
// QAbstractItemView::dragEnabled() const
QtDartBindings_EXPORT bool c_QAbstractItemView__dragEnabled(void *thisObj);
// QAbstractItemView::edit(const QModelIndex & index)
QtDartBindings_EXPORT void c_QAbstractItemView__edit_QModelIndex(void *thisObj,
                                                                 void *index_);
// QAbstractItemView::editorDestroyed(QObject * editor)
QtDartBindings_EXPORT void
c_QAbstractItemView__editorDestroyed_QObject(void *thisObj, void *editor_);
// QAbstractItemView::entered(const QModelIndex & index)
QtDartBindings_EXPORT void
c_QAbstractItemView__entered_QModelIndex(void *thisObj, void *index_);
QtDartBindings_EXPORT void c_QAbstractItemView__onEntered_QModelIndex(
    void *thisObj, void *contextQObject,
    void *callback); // QAbstractItemView::event(QEvent * event)
QtDartBindings_EXPORT bool c_QAbstractItemView__event_QEvent(void *thisObj,
                                                             void *event_);
// QAbstractItemView::eventFilter(QObject * object, QEvent * event)
QtDartBindings_EXPORT bool
c_QAbstractItemView__eventFilter_QObject_QEvent(void *thisObj, void *object_,
                                                void *event_);
// QAbstractItemView::executeDelayedItemsLayout()
QtDartBindings_EXPORT void
c_QAbstractItemView__executeDelayedItemsLayout(void *thisObj);
// QAbstractItemView::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool
c_QAbstractItemView__focusNextPrevChild_bool(void *thisObj, bool next);
// QAbstractItemView::hasAutoScroll() const
QtDartBindings_EXPORT bool c_QAbstractItemView__hasAutoScroll(void *thisObj);
// QAbstractItemView::hasHeightForWidth() const
QtDartBindings_EXPORT bool
c_QAbstractItemView__hasHeightForWidth(void *thisObj);
// QAbstractItemView::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QAbstractItemView__heightForWidth_int(void *thisObj,
                                                                  int arg__1);
// QAbstractItemView::horizontalOffset() const
QtDartBindings_EXPORT int c_QAbstractItemView__horizontalOffset(void *thisObj);
// QAbstractItemView::horizontalScrollbarAction(int action)
QtDartBindings_EXPORT void
c_QAbstractItemView__horizontalScrollbarAction_int(void *thisObj, int action);
// QAbstractItemView::horizontalScrollbarValueChanged(int value)
QtDartBindings_EXPORT void
c_QAbstractItemView__horizontalScrollbarValueChanged_int(void *thisObj,
                                                         int value);
// QAbstractItemView::iconSize() const
QtDartBindings_EXPORT void *c_QAbstractItemView__iconSize(void *thisObj);
// QAbstractItemView::iconSizeChanged(const QSize & size)
QtDartBindings_EXPORT void
c_QAbstractItemView__iconSizeChanged_QSize(void *thisObj, void *size_);
QtDartBindings_EXPORT void c_QAbstractItemView__onIconSizeChanged_QSize(
    void *thisObj, void *contextQObject,
    void *callback); // QAbstractItemView::indexAt(const QPoint & point) const
QtDartBindings_EXPORT void *c_QAbstractItemView__indexAt_QPoint(void *thisObj,
                                                                void *point_);
// QAbstractItemView::indexWidget(const QModelIndex & index) const
QtDartBindings_EXPORT void *
c_QAbstractItemView__indexWidget_QModelIndex(void *thisObj, void *index_);
// QAbstractItemView::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void
c_QAbstractItemView__initPainter_QPainter(void *thisObj, void *painter_);
// QAbstractItemView::isIndexHidden(const QModelIndex & index) const
QtDartBindings_EXPORT bool
c_QAbstractItemView__isIndexHidden_QModelIndex(void *thisObj, void *index_);
// QAbstractItemView::isPersistentEditorOpen(const QModelIndex & index) const
QtDartBindings_EXPORT bool
c_QAbstractItemView__isPersistentEditorOpen_QModelIndex(void *thisObj,
                                                        void *index_);
// QAbstractItemView::keyboardSearch(const QString & search)
QtDartBindings_EXPORT void
c_QAbstractItemView__keyboardSearch_QString(void *thisObj, const char *search_);
// QAbstractItemView::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QAbstractItemView__leaveEvent_QEvent(void *thisObj,
                                                                  void *event_);
// QAbstractItemView::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QAbstractItemView__minimumSizeHint(void *thisObj);
// QAbstractItemView::model() const
QtDartBindings_EXPORT void *c_QAbstractItemView__model(void *thisObj);
// QAbstractItemView::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QAbstractItemView__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                       void *event_);
// QAbstractItemView::mouseMoveEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QAbstractItemView__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_);
// QAbstractItemView::mousePressEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QAbstractItemView__mousePressEvent_QMouseEvent(void *thisObj, void *event_);
// QAbstractItemView::mouseReleaseEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QAbstractItemView__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_);
// QAbstractItemView::moveCursor(QAbstractItemView::CursorAction cursorAction,
// QFlags<Qt::KeyboardModifier> modifiers)
QtDartBindings_EXPORT void *
c_QAbstractItemView__moveCursor_CursorAction_KeyboardModifiers(void *thisObj,
                                                               int cursorAction,
                                                               int modifiers_);
// QAbstractItemView::openPersistentEditor(const QModelIndex & index)
QtDartBindings_EXPORT void
c_QAbstractItemView__openPersistentEditor_QModelIndex(void *thisObj,
                                                      void *index_);
// QAbstractItemView::paintEvent(QPaintEvent * arg__1)
QtDartBindings_EXPORT void
c_QAbstractItemView__paintEvent_QPaintEvent(void *thisObj, void *arg__1_);
// QAbstractItemView::pressed(const QModelIndex & index)
QtDartBindings_EXPORT void
c_QAbstractItemView__pressed_QModelIndex(void *thisObj, void *index_);
QtDartBindings_EXPORT void c_QAbstractItemView__onPressed_QModelIndex(
    void *thisObj, void *contextQObject,
    void *callback); // QAbstractItemView::reset()
QtDartBindings_EXPORT void c_QAbstractItemView__reset(void *thisObj);
// QAbstractItemView::resetHorizontalScrollMode()
QtDartBindings_EXPORT void
c_QAbstractItemView__resetHorizontalScrollMode(void *thisObj);
// QAbstractItemView::resetVerticalScrollMode()
QtDartBindings_EXPORT void
c_QAbstractItemView__resetVerticalScrollMode(void *thisObj);
// QAbstractItemView::rootIndex() const
QtDartBindings_EXPORT void *c_QAbstractItemView__rootIndex(void *thisObj);
// QAbstractItemView::rowsAboutToBeRemoved(const QModelIndex & parent, int
// start, int end)
QtDartBindings_EXPORT void
c_QAbstractItemView__rowsAboutToBeRemoved_QModelIndex_int_int(void *thisObj,
                                                              void *parent_,
                                                              int start,
                                                              int end);
// QAbstractItemView::rowsInserted(const QModelIndex & parent, int start, int
// end)
QtDartBindings_EXPORT void
c_QAbstractItemView__rowsInserted_QModelIndex_int_int(void *thisObj,
                                                      void *parent_, int start,
                                                      int end);
// QAbstractItemView::scheduleDelayedItemsLayout()
QtDartBindings_EXPORT void
c_QAbstractItemView__scheduleDelayedItemsLayout(void *thisObj);
// QAbstractItemView::scrollContentsBy(int dx, int dy)
QtDartBindings_EXPORT void
c_QAbstractItemView__scrollContentsBy_int_int(void *thisObj, int dx, int dy);
// QAbstractItemView::scrollDirtyRegion(int dx, int dy)
QtDartBindings_EXPORT void
c_QAbstractItemView__scrollDirtyRegion_int_int(void *thisObj, int dx, int dy);
// QAbstractItemView::scrollTo(const QModelIndex & index,
// QAbstractItemView::ScrollHint hint)
QtDartBindings_EXPORT void
c_QAbstractItemView__scrollTo_QModelIndex_ScrollHint(void *thisObj,
                                                     void *index_, int hint);
// QAbstractItemView::scrollToBottom()
QtDartBindings_EXPORT void c_QAbstractItemView__scrollToBottom(void *thisObj);
// QAbstractItemView::scrollToTop()
QtDartBindings_EXPORT void c_QAbstractItemView__scrollToTop(void *thisObj);
// QAbstractItemView::selectAll()
QtDartBindings_EXPORT void c_QAbstractItemView__selectAll(void *thisObj);
// QAbstractItemView::selectedIndexes() const
QtDartBindings_EXPORT void *c_QAbstractItemView__selectedIndexes(void *thisObj);
// QAbstractItemView::selectionChanged(const QItemSelection & selected, const
// QItemSelection & deselected)
QtDartBindings_EXPORT void
c_QAbstractItemView__selectionChanged_QItemSelection_QItemSelection(
    void *thisObj, void *selected_, void *deselected_);
// QAbstractItemView::selectionCommand(const QModelIndex & index, const QEvent *
// event) const
QtDartBindings_EXPORT int
c_QAbstractItemView__selectionCommand_QModelIndex_QEvent(void *thisObj,
                                                         void *index_,
                                                         void *event_);
// QAbstractItemView::selectionModel() const
QtDartBindings_EXPORT void *c_QAbstractItemView__selectionModel(void *thisObj);
// QAbstractItemView::setAlternatingRowColors(bool enable)
QtDartBindings_EXPORT void
c_QAbstractItemView__setAlternatingRowColors_bool(void *thisObj, bool enable);
// QAbstractItemView::setAutoScroll(bool enable)
QtDartBindings_EXPORT void
c_QAbstractItemView__setAutoScroll_bool(void *thisObj, bool enable);
// QAbstractItemView::setAutoScrollMargin(int margin)
QtDartBindings_EXPORT void
c_QAbstractItemView__setAutoScrollMargin_int(void *thisObj, int margin);
// QAbstractItemView::setCurrentIndex(const QModelIndex & index)
QtDartBindings_EXPORT void
c_QAbstractItemView__setCurrentIndex_QModelIndex(void *thisObj, void *index_);
// QAbstractItemView::setDirtyRegion(const QRegion & region)
QtDartBindings_EXPORT void
c_QAbstractItemView__setDirtyRegion_QRegion(void *thisObj, void *region_);
// QAbstractItemView::setDragDropOverwriteMode(bool overwrite)
QtDartBindings_EXPORT void
c_QAbstractItemView__setDragDropOverwriteMode_bool(void *thisObj,
                                                   bool overwrite);
// QAbstractItemView::setDragEnabled(bool enable)
QtDartBindings_EXPORT void
c_QAbstractItemView__setDragEnabled_bool(void *thisObj, bool enable);
// QAbstractItemView::setDropIndicatorShown(bool enable)
QtDartBindings_EXPORT void
c_QAbstractItemView__setDropIndicatorShown_bool(void *thisObj, bool enable);
// QAbstractItemView::setIconSize(const QSize & size)
QtDartBindings_EXPORT void c_QAbstractItemView__setIconSize_QSize(void *thisObj,
                                                                  void *size_);
// QAbstractItemView::setIndexWidget(const QModelIndex & index, QWidget *
// widget)
QtDartBindings_EXPORT void
c_QAbstractItemView__setIndexWidget_QModelIndex_QWidget(void *thisObj,
                                                        void *index_,
                                                        void *widget_);
// QAbstractItemView::setModel(QAbstractItemModel * model)
QtDartBindings_EXPORT void
c_QAbstractItemView__setModel_QAbstractItemModel(void *thisObj, void *model_);
// QAbstractItemView::setRootIndex(const QModelIndex & index)
QtDartBindings_EXPORT void
c_QAbstractItemView__setRootIndex_QModelIndex(void *thisObj, void *index_);
// QAbstractItemView::setSelection(const QRect & rect,
// QFlags<QItemSelectionModel::SelectionFlag> command)
QtDartBindings_EXPORT void
c_QAbstractItemView__setSelection_QRect_SelectionFlags(void *thisObj,
                                                       void *rect_,
                                                       int command_);
// QAbstractItemView::setSelectionModel(QItemSelectionModel * selectionModel)
QtDartBindings_EXPORT void
c_QAbstractItemView__setSelectionModel_QItemSelectionModel(
    void *thisObj, void *selectionModel_);
// QAbstractItemView::setTabKeyNavigation(bool enable)
QtDartBindings_EXPORT void
c_QAbstractItemView__setTabKeyNavigation_bool(void *thisObj, bool enable);
// QAbstractItemView::setVisible(bool visible)
QtDartBindings_EXPORT void c_QAbstractItemView__setVisible_bool(void *thisObj,
                                                                bool visible);
// QAbstractItemView::setupViewport(QWidget * viewport)
QtDartBindings_EXPORT void
c_QAbstractItemView__setupViewport_QWidget(void *thisObj, void *viewport_);
// QAbstractItemView::sharedPainter() const
QtDartBindings_EXPORT void *c_QAbstractItemView__sharedPainter(void *thisObj);
// QAbstractItemView::showDropIndicator() const
QtDartBindings_EXPORT bool
c_QAbstractItemView__showDropIndicator(void *thisObj);
// QAbstractItemView::sizeHint() const
QtDartBindings_EXPORT void *c_QAbstractItemView__sizeHint(void *thisObj);
// QAbstractItemView::sizeHintForColumn(int column) const
QtDartBindings_EXPORT int
c_QAbstractItemView__sizeHintForColumn_int(void *thisObj, int column);
// QAbstractItemView::sizeHintForIndex(const QModelIndex & index) const
QtDartBindings_EXPORT void *
c_QAbstractItemView__sizeHintForIndex_QModelIndex(void *thisObj, void *index_);
// QAbstractItemView::sizeHintForRow(int row) const
QtDartBindings_EXPORT int c_QAbstractItemView__sizeHintForRow_int(void *thisObj,
                                                                  int row);
// QAbstractItemView::startAutoScroll()
QtDartBindings_EXPORT void c_QAbstractItemView__startAutoScroll(void *thisObj);
// QAbstractItemView::stopAutoScroll()
QtDartBindings_EXPORT void c_QAbstractItemView__stopAutoScroll(void *thisObj);
// QAbstractItemView::tabKeyNavigation() const
QtDartBindings_EXPORT bool c_QAbstractItemView__tabKeyNavigation(void *thisObj);
// QAbstractItemView::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QAbstractItemView__tr_char_char_int(const char *s, const char *c,
                                             int n);
// QAbstractItemView::update(const QModelIndex & index)
QtDartBindings_EXPORT void
c_QAbstractItemView__updateIndex_QModelIndex(void *thisObj, void *index_);
// QAbstractItemView::updateEditorData()
QtDartBindings_EXPORT void c_QAbstractItemView__updateEditorData(void *thisObj);
// QAbstractItemView::updateEditorGeometries()
QtDartBindings_EXPORT void
c_QAbstractItemView__updateEditorGeometries(void *thisObj);
// QAbstractItemView::updateGeometries()
QtDartBindings_EXPORT void c_QAbstractItemView__updateGeometries(void *thisObj);
// QAbstractItemView::verticalOffset() const
QtDartBindings_EXPORT int c_QAbstractItemView__verticalOffset(void *thisObj);
// QAbstractItemView::verticalScrollbarAction(int action)
QtDartBindings_EXPORT void
c_QAbstractItemView__verticalScrollbarAction_int(void *thisObj, int action);
// QAbstractItemView::verticalScrollbarValueChanged(int value)
QtDartBindings_EXPORT void
c_QAbstractItemView__verticalScrollbarValueChanged_int(void *thisObj,
                                                       int value);
// QAbstractItemView::viewportEntered()
QtDartBindings_EXPORT void c_QAbstractItemView__viewportEntered(void *thisObj);
QtDartBindings_EXPORT void c_QAbstractItemView__onViewportEntered(
    void *thisObj, void *contextQObject,
    void *callback); // QAbstractItemView::viewportEvent(QEvent * event)
QtDartBindings_EXPORT bool
c_QAbstractItemView__viewportEvent_QEvent(void *thisObj, void *event_);
// QAbstractItemView::viewportSizeHint() const
QtDartBindings_EXPORT void *
c_QAbstractItemView__viewportSizeHint(void *thisObj);
// QAbstractItemView::visualRect(const QModelIndex & index) const
QtDartBindings_EXPORT void *
c_QAbstractItemView__visualRect_QModelIndex(void *thisObj, void *index_);
// QAbstractItemView::visualRegionForSelection(const QItemSelection & selection)
// const
QtDartBindings_EXPORT void *
c_QAbstractItemView__visualRegionForSelection_QItemSelection(void *thisObj,
                                                             void *selection_);
QtDartBindings_EXPORT void c_QAbstractItemView__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QAbstractItemView__registerVirtualMethodCallback(void *ptr, void *callback,
                                                   int methodId);
QtDartBindings_EXPORT void c_QAbstractItemView_Finalizer(void *cppObj);
}
