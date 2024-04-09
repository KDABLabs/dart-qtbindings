/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qcoreevent.h>
#include <qgridlayout.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qobject.h>
#include <qrect.h>
#include <qsize.h>
#include <qstring.h>
#include <qwidget.h>

namespace QtDartBindings_wrappersNS {
class QGridLayout_wrapper : public ::QGridLayout {
public:
  ~QGridLayout_wrapper();
  QGridLayout_wrapper(QWidget *parent = nullptr);
  virtual void addItem(QLayoutItem *arg__1);
  virtual void addItem_nocallback(QLayoutItem *arg__1);
  void addItem(QLayoutItem *item, int row, int column, int rowSpan = 1,
               int columnSpan = 1);
  void addLayout(QLayout *arg__1, int row, int column);
  void addLayout(QLayout *arg__1, int row, int column, int rowSpan,
                 int columnSpan);
  void addWidget(QWidget *arg__1, int row, int column);
  void addWidget(QWidget *arg__1, int row, int column, int rowSpan,
                 int columnSpan);
  void addWidget(QWidget *w);
  QRect cellRect(int row, int column) const;
  int columnCount() const;
  int columnMinimumWidth(int column) const;
  int columnStretch(int column) const;
  virtual int count() const;
  virtual int count_nocallback() const;
  virtual void customEvent(QEvent *event);
  virtual void customEvent_nocallback(QEvent *event);
  virtual bool event(QEvent *event);
  virtual bool event_nocallback(QEvent *event);
  virtual bool eventFilter(QObject *watched, QEvent *event);
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  virtual QFlags<Qt::Orientation> expandingDirections() const;
  virtual QFlags<Qt::Orientation> expandingDirections_nocallback() const;
  virtual QRect geometry() const;
  virtual QRect geometry_nocallback() const;
  virtual bool hasHeightForWidth() const;
  virtual bool hasHeightForWidth_nocallback() const;
  virtual int heightForWidth(int arg__1) const;
  virtual int heightForWidth_nocallback(int arg__1) const;
  int horizontalSpacing() const;
  virtual int indexOf(const QLayoutItem *arg__1) const;
  virtual int indexOf_nocallback(const QLayoutItem *arg__1) const;
  virtual int indexOf(const QWidget *arg__1) const;
  virtual int indexOf_nocallback(const QWidget *arg__1) const;
  virtual void invalidate();
  virtual void invalidate_nocallback();
  virtual bool isEmpty() const;
  virtual bool isEmpty_nocallback() const;
  virtual QLayoutItem *itemAt(int index) const;
  virtual QLayoutItem *itemAt_nocallback(int index) const;
  QLayoutItem *itemAtPosition(int row, int column) const;
  virtual QLayout *layout();
  virtual QLayout *layout_nocallback();
  virtual QSize maximumSize() const;
  virtual QSize maximumSize_nocallback() const;
  virtual int minimumHeightForWidth(int arg__1) const;
  virtual int minimumHeightForWidth_nocallback(int arg__1) const;
  virtual QSize minimumSize() const;
  virtual QSize minimumSize_nocallback() const;
  int rowCount() const;
  int rowMinimumHeight(int row) const;
  int rowStretch(int row) const;
  void setColumnMinimumWidth(int column, int minSize);
  void setColumnStretch(int column, int stretch);
  void setDefaultPositioning(int n, Qt::Orientation orient);
  virtual void setGeometry(const QRect &arg__1);
  virtual void setGeometry_nocallback(const QRect &arg__1);
  void setHorizontalSpacing(int spacing);
  void setRowMinimumHeight(int row, int minSize);
  void setRowStretch(int row, int stretch);
  virtual void setSpacing(int spacing);
  virtual void setSpacing_nocallback(int spacing);
  void setVerticalSpacing(int spacing);
  virtual QSize sizeHint() const;
  virtual QSize sizeHint_nocallback() const;
  virtual int spacing() const;
  virtual int spacing_nocallback() const;
  virtual QLayoutItem *takeAt(int index);
  virtual QLayoutItem *takeAt_nocallback(int index);
  static QString tr(const char *s, const char *c, int n);
  int verticalSpacing() const;
  virtual QWidget *widget() const;
  virtual QWidget *widget_nocallback() const;
  typedef void (*Callback_addItem)(void *, QLayoutItem *arg__1);
  Callback_addItem m_addItemCallback = nullptr;
  typedef int (*Callback_count)(void *);
  Callback_count m_countCallback = nullptr;
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  typedef bool (*Callback_event)(void *, QEvent *event);
  Callback_event m_eventCallback = nullptr;
  typedef bool (*Callback_eventFilter)(void *, QObject *watched, QEvent *event);
  Callback_eventFilter m_eventFilterCallback = nullptr;
  typedef QFlags<Qt::Orientation> (*Callback_expandingDirections)(void *);
  Callback_expandingDirections m_expandingDirectionsCallback = nullptr;
  typedef QRect *(*Callback_geometry)(void *);
  Callback_geometry m_geometryCallback = nullptr;
  typedef bool (*Callback_hasHeightForWidth)(void *);
  Callback_hasHeightForWidth m_hasHeightForWidthCallback = nullptr;
  typedef int (*Callback_heightForWidth)(void *, int arg__1);
  Callback_heightForWidth m_heightForWidthCallback = nullptr;
  typedef int (*Callback_indexOf)(void *, const QLayoutItem *arg__1);
  Callback_indexOf m_indexOfCallback = nullptr;
  typedef int (*Callback_indexOf_2)(void *, const QWidget *arg__1);
  Callback_indexOf_2 m_indexOf_2Callback = nullptr;
  typedef void (*Callback_invalidate)(void *);
  Callback_invalidate m_invalidateCallback = nullptr;
  typedef bool (*Callback_isEmpty)(void *);
  Callback_isEmpty m_isEmptyCallback = nullptr;
  typedef QLayoutItem *(*Callback_itemAt)(void *, int index);
  Callback_itemAt m_itemAtCallback = nullptr;
  typedef QLayout *(*Callback_layout)(void *);
  Callback_layout m_layoutCallback = nullptr;
  typedef QSize *(*Callback_maximumSize)(void *);
  Callback_maximumSize m_maximumSizeCallback = nullptr;
  typedef int (*Callback_minimumHeightForWidth)(void *, int arg__1);
  Callback_minimumHeightForWidth m_minimumHeightForWidthCallback = nullptr;
  typedef QSize *(*Callback_minimumSize)(void *);
  Callback_minimumSize m_minimumSizeCallback = nullptr;
  typedef void (*Callback_setGeometry)(void *, const QRect &arg__1);
  Callback_setGeometry m_setGeometryCallback = nullptr;
  typedef void (*Callback_setSpacing)(void *, int spacing);
  Callback_setSpacing m_setSpacingCallback = nullptr;
  typedef QSize *(*Callback_sizeHint)(void *);
  Callback_sizeHint m_sizeHintCallback = nullptr;
  typedef int (*Callback_spacing)(void *);
  Callback_spacing m_spacingCallback = nullptr;
  typedef QLayoutItem *(*Callback_takeAt)(void *, int index);
  Callback_takeAt m_takeAtCallback = nullptr;
  typedef QWidget *(*Callback_widget)(void *);
  Callback_widget m_widgetCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QGridLayout::QGridLayout(QWidget * parent)
QtDartBindings_EXPORT void *c_QGridLayout__constructor_QWidget(void *parent_);
// QGridLayout::addItem(QLayoutItem * arg__1)
QtDartBindings_EXPORT void c_QGridLayout__addItem_QLayoutItem(void *thisObj,
                                                              void *arg__1_);
// QGridLayout::addItem(QLayoutItem * item, int row, int column, int rowSpan,
// int columnSpan)
QtDartBindings_EXPORT void
c_QGridLayout__addItemToGrid_QLayoutItem_int_int_int_int(void *thisObj,
                                                         void *item_, int row,
                                                         int column,
                                                         int rowSpan,
                                                         int columnSpan);
// QGridLayout::addLayout(QLayout * arg__1, int row, int column)
QtDartBindings_EXPORT void
c_QGridLayout__addLayout_QLayout_int_int(void *thisObj, void *arg__1_, int row,
                                         int column);
// QGridLayout::addLayout(QLayout * arg__1, int row, int column, int rowSpan,
// int columnSpan)
QtDartBindings_EXPORT void
c_QGridLayout__addLayout_QLayout_int_int_int_int(void *thisObj, void *arg__1_,
                                                 int row, int column,
                                                 int rowSpan, int columnSpan);
// QGridLayout::addWidget(QWidget * arg__1, int row, int column)
QtDartBindings_EXPORT void
c_QGridLayout__addWidgetToGrid_QWidget_int_int(void *thisObj, void *arg__1_,
                                               int row, int column);
// QGridLayout::addWidget(QWidget * arg__1, int row, int column, int rowSpan,
// int columnSpan)
QtDartBindings_EXPORT void
c_QGridLayout__addWidgetToGrid_QWidget_int_int_int_int(void *thisObj,
                                                       void *arg__1_, int row,
                                                       int column, int rowSpan,
                                                       int columnSpan);
// QGridLayout::addWidget(QWidget * w)
QtDartBindings_EXPORT void c_QGridLayout__addWidget_QWidget(void *thisObj,
                                                            void *w_);
// QGridLayout::cellRect(int row, int column) const
QtDartBindings_EXPORT void *
c_QGridLayout__cellRect_int_int(void *thisObj, int row, int column);
// QGridLayout::columnCount() const
QtDartBindings_EXPORT int c_QGridLayout__columnCount(void *thisObj);
// QGridLayout::columnMinimumWidth(int column) const
QtDartBindings_EXPORT int c_QGridLayout__columnMinimumWidth_int(void *thisObj,
                                                                int column);
// QGridLayout::columnStretch(int column) const
QtDartBindings_EXPORT int c_QGridLayout__columnStretch_int(void *thisObj,
                                                           int column);
// QGridLayout::count() const
QtDartBindings_EXPORT int c_QGridLayout__count(void *thisObj);
// QGridLayout::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QGridLayout__customEvent_QEvent(void *thisObj,
                                                             void *event_);
// QGridLayout::event(QEvent * event)
QtDartBindings_EXPORT bool c_QGridLayout__event_QEvent(void *thisObj,
                                                       void *event_);
// QGridLayout::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QGridLayout__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                          void *event_);
// QGridLayout::expandingDirections() const
QtDartBindings_EXPORT int c_QGridLayout__expandingDirections(void *thisObj);
// QGridLayout::geometry() const
QtDartBindings_EXPORT void *c_QGridLayout__geometry(void *thisObj);
// QGridLayout::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QGridLayout__hasHeightForWidth(void *thisObj);
// QGridLayout::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QGridLayout__heightForWidth_int(void *thisObj,
                                                            int arg__1);
// QGridLayout::horizontalSpacing() const
QtDartBindings_EXPORT int c_QGridLayout__horizontalSpacing(void *thisObj);
// QGridLayout::indexOf(const QLayoutItem * arg__1) const
QtDartBindings_EXPORT int c_QGridLayout__indexOf_QLayoutItem(void *thisObj,
                                                             void *arg__1_);
// QGridLayout::indexOf(const QWidget * arg__1) const
QtDartBindings_EXPORT int c_QGridLayout__indexOf_QWidget(void *thisObj,
                                                         void *arg__1_);
// QGridLayout::invalidate()
QtDartBindings_EXPORT void c_QGridLayout__invalidate(void *thisObj);
// QGridLayout::isEmpty() const
QtDartBindings_EXPORT bool c_QGridLayout__isEmpty(void *thisObj);
// QGridLayout::itemAt(int index) const
QtDartBindings_EXPORT void *c_QGridLayout__itemAt_int(void *thisObj, int index);
// QGridLayout::itemAtPosition(int row, int column) const
QtDartBindings_EXPORT void *
c_QGridLayout__itemAtPosition_int_int(void *thisObj, int row, int column);
// QGridLayout::layout()
QtDartBindings_EXPORT void *c_QGridLayout__layout(void *thisObj);
// QGridLayout::maximumSize() const
QtDartBindings_EXPORT void *c_QGridLayout__maximumSize(void *thisObj);
// QGridLayout::minimumHeightForWidth(int arg__1) const
QtDartBindings_EXPORT int
c_QGridLayout__minimumHeightForWidth_int(void *thisObj, int arg__1);
// QGridLayout::minimumSize() const
QtDartBindings_EXPORT void *c_QGridLayout__minimumSize(void *thisObj);
// QGridLayout::rowCount() const
QtDartBindings_EXPORT int c_QGridLayout__rowCount(void *thisObj);
// QGridLayout::rowMinimumHeight(int row) const
QtDartBindings_EXPORT int c_QGridLayout__rowMinimumHeight_int(void *thisObj,
                                                              int row);
// QGridLayout::rowStretch(int row) const
QtDartBindings_EXPORT int c_QGridLayout__rowStretch_int(void *thisObj, int row);
// QGridLayout::setColumnMinimumWidth(int column, int minSize)
QtDartBindings_EXPORT void
c_QGridLayout__setColumnMinimumWidth_int_int(void *thisObj, int column,
                                             int minSize);
// QGridLayout::setColumnStretch(int column, int stretch)
QtDartBindings_EXPORT void
c_QGridLayout__setColumnStretch_int_int(void *thisObj, int column, int stretch);
// QGridLayout::setDefaultPositioning(int n, Qt::Orientation orient)
QtDartBindings_EXPORT void
c_QGridLayout__setDefaultPositioning_int_Orientation(void *thisObj, int n,
                                                     int orient);
// QGridLayout::setGeometry(const QRect & arg__1)
QtDartBindings_EXPORT void c_QGridLayout__setGeometry_QRect(void *thisObj,
                                                            void *arg__1_);
// QGridLayout::setHorizontalSpacing(int spacing)
QtDartBindings_EXPORT void
c_QGridLayout__setHorizontalSpacing_int(void *thisObj, int spacing);
// QGridLayout::setRowMinimumHeight(int row, int minSize)
QtDartBindings_EXPORT void
c_QGridLayout__setRowMinimumHeight_int_int(void *thisObj, int row, int minSize);
// QGridLayout::setRowStretch(int row, int stretch)
QtDartBindings_EXPORT void
c_QGridLayout__setRowStretch_int_int(void *thisObj, int row, int stretch);
// QGridLayout::setSpacing(int spacing)
QtDartBindings_EXPORT void c_QGridLayout__setSpacing_int(void *thisObj,
                                                         int spacing);
// QGridLayout::setVerticalSpacing(int spacing)
QtDartBindings_EXPORT void c_QGridLayout__setVerticalSpacing_int(void *thisObj,
                                                                 int spacing);
// QGridLayout::sizeHint() const
QtDartBindings_EXPORT void *c_QGridLayout__sizeHint(void *thisObj);
// QGridLayout::spacing() const
QtDartBindings_EXPORT int c_QGridLayout__spacing(void *thisObj);
// QGridLayout::takeAt(int index)
QtDartBindings_EXPORT void *c_QGridLayout__takeAt_int(void *thisObj, int index);
// QGridLayout::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QGridLayout__tr_char_char_int(const char *s, const char *c, int n);
// QGridLayout::verticalSpacing() const
QtDartBindings_EXPORT int c_QGridLayout__verticalSpacing(void *thisObj);
// QGridLayout::widget() const
QtDartBindings_EXPORT void *c_QGridLayout__widget(void *thisObj);
QtDartBindings_EXPORT void c_QGridLayout__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QGridLayout__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId);
QtDartBindings_EXPORT void c_QGridLayout_Finalizer(void *cppObj);
}
