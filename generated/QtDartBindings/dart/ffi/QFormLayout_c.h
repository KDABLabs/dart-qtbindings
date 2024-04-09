/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qcoreevent.h>
#include <qformlayout.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qobject.h>
#include <qrect.h>
#include <qsize.h>
#include <qstring.h>
#include <qwidget.h>

namespace QtDartBindings_wrappersNS {
class QFormLayout_wrapper : public ::QFormLayout {
public:
  ~QFormLayout_wrapper();
  QFormLayout_wrapper(QWidget *parent = nullptr);
  virtual void addItem(QLayoutItem *item);
  virtual void addItem_nocallback(QLayoutItem *item);
  void addRow(QLayout *layout);
  void addRow(QWidget *label, QLayout *field);
  void addRow(QWidget *label, QWidget *field);
  void addRow(QWidget *widget);
  void addRow(const QString &labelText, QLayout *field);
  void addRow(const QString &labelText, QWidget *field);
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
  virtual int heightForWidth(int width) const;
  virtual int heightForWidth_nocallback(int width) const;
  int horizontalSpacing() const;
  virtual int indexOf(const QLayoutItem *arg__1) const;
  virtual int indexOf_nocallback(const QLayoutItem *arg__1) const;
  virtual int indexOf(const QWidget *arg__1) const;
  virtual int indexOf_nocallback(const QWidget *arg__1) const;
  void insertRow(int row, QLayout *layout);
  void insertRow(int row, QWidget *label, QLayout *field);
  void insertRow(int row, QWidget *label, QWidget *field);
  void insertRow(int row, QWidget *widget);
  void insertRow(int row, const QString &labelText, QLayout *field);
  void insertRow(int row, const QString &labelText, QWidget *field);
  virtual void invalidate();
  virtual void invalidate_nocallback();
  virtual bool isEmpty() const;
  virtual bool isEmpty_nocallback() const;
  bool isRowVisible(QLayout *layout) const;
  bool isRowVisible(QWidget *widget) const;
  bool isRowVisible(int row) const;
  virtual QLayoutItem *itemAt(int index) const;
  virtual QLayoutItem *itemAt_nocallback(int index) const;
  QWidget *labelForField(QLayout *field) const;
  QWidget *labelForField(QWidget *field) const;
  virtual QLayout *layout();
  virtual QLayout *layout_nocallback();
  virtual QSize maximumSize() const;
  virtual QSize maximumSize_nocallback() const;
  virtual int minimumHeightForWidth(int arg__1) const;
  virtual int minimumHeightForWidth_nocallback(int arg__1) const;
  virtual QSize minimumSize() const;
  virtual QSize minimumSize_nocallback() const;
  void removeRow(QLayout *layout);
  void removeRow(QWidget *widget);
  void removeRow(int row);
  int rowCount() const;
  virtual void setGeometry(const QRect &rect);
  virtual void setGeometry_nocallback(const QRect &rect);
  void setHorizontalSpacing(int spacing);
  void setRowVisible(QLayout *layout, bool on);
  void setRowVisible(QWidget *widget, bool on);
  void setRowVisible(int row, bool on);
  virtual void setSpacing(int arg__1);
  virtual void setSpacing_nocallback(int arg__1);
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
  typedef void (*Callback_addItem)(void *, QLayoutItem *item);
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
  typedef int (*Callback_heightForWidth)(void *, int width);
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
  typedef void (*Callback_setGeometry)(void *, const QRect &rect);
  Callback_setGeometry m_setGeometryCallback = nullptr;
  typedef void (*Callback_setSpacing)(void *, int arg__1);
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
// QFormLayout::QFormLayout(QWidget * parent)
QtDartBindings_EXPORT void *c_QFormLayout__constructor_QWidget(void *parent_);
// QFormLayout::addItem(QLayoutItem * item)
QtDartBindings_EXPORT void c_QFormLayout__addItem_QLayoutItem(void *thisObj,
                                                              void *item_);
// QFormLayout::addRow(QLayout * layout)
QtDartBindings_EXPORT void c_QFormLayout__addRow_QLayout(void *thisObj,
                                                         void *layout_);
// QFormLayout::addRow(QWidget * label, QLayout * field)
QtDartBindings_EXPORT void c_QFormLayout__addRow_QWidget_QLayout(void *thisObj,
                                                                 void *label_,
                                                                 void *field_);
// QFormLayout::addRow(QWidget * label, QWidget * field)
QtDartBindings_EXPORT void c_QFormLayout__addRow_QWidget_QWidget(void *thisObj,
                                                                 void *label_,
                                                                 void *field_);
// QFormLayout::addRow(QWidget * widget)
QtDartBindings_EXPORT void c_QFormLayout__addRow_QWidget(void *thisObj,
                                                         void *widget_);
// QFormLayout::addRow(const QString & labelText, QLayout * field)
QtDartBindings_EXPORT void
c_QFormLayout__addRow_QString_QLayout(void *thisObj, const char *labelText_,
                                      void *field_);
// QFormLayout::addRow(const QString & labelText, QWidget * field)
QtDartBindings_EXPORT void
c_QFormLayout__addRow_QString_QWidget(void *thisObj, const char *labelText_,
                                      void *field_);
// QFormLayout::count() const
QtDartBindings_EXPORT int c_QFormLayout__count(void *thisObj);
// QFormLayout::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QFormLayout__customEvent_QEvent(void *thisObj,
                                                             void *event_);
// QFormLayout::event(QEvent * event)
QtDartBindings_EXPORT bool c_QFormLayout__event_QEvent(void *thisObj,
                                                       void *event_);
// QFormLayout::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QFormLayout__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                          void *event_);
// QFormLayout::expandingDirections() const
QtDartBindings_EXPORT int c_QFormLayout__expandingDirections(void *thisObj);
// QFormLayout::geometry() const
QtDartBindings_EXPORT void *c_QFormLayout__geometry(void *thisObj);
// QFormLayout::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QFormLayout__hasHeightForWidth(void *thisObj);
// QFormLayout::heightForWidth(int width) const
QtDartBindings_EXPORT int c_QFormLayout__heightForWidth_int(void *thisObj,
                                                            int width);
// QFormLayout::horizontalSpacing() const
QtDartBindings_EXPORT int c_QFormLayout__horizontalSpacing(void *thisObj);
// QFormLayout::indexOf(const QLayoutItem * arg__1) const
QtDartBindings_EXPORT int c_QFormLayout__indexOf_QLayoutItem(void *thisObj,
                                                             void *arg__1_);
// QFormLayout::indexOf(const QWidget * arg__1) const
QtDartBindings_EXPORT int c_QFormLayout__indexOf_QWidget(void *thisObj,
                                                         void *arg__1_);
// QFormLayout::insertRow(int row, QLayout * layout)
QtDartBindings_EXPORT void
c_QFormLayout__insertRow_int_QLayout(void *thisObj, int row, void *layout_);
// QFormLayout::insertRow(int row, QWidget * label, QLayout * field)
QtDartBindings_EXPORT void
c_QFormLayout__insertRow_int_QWidget_QLayout(void *thisObj, int row,
                                             void *label_, void *field_);
// QFormLayout::insertRow(int row, QWidget * label, QWidget * field)
QtDartBindings_EXPORT void
c_QFormLayout__insertRow_int_QWidget_QWidget(void *thisObj, int row,
                                             void *label_, void *field_);
// QFormLayout::insertRow(int row, QWidget * widget)
QtDartBindings_EXPORT void
c_QFormLayout__insertRow_int_QWidget(void *thisObj, int row, void *widget_);
// QFormLayout::insertRow(int row, const QString & labelText, QLayout * field)
QtDartBindings_EXPORT void c_QFormLayout__insertRow_int_QString_QLayout(
    void *thisObj, int row, const char *labelText_, void *field_);
// QFormLayout::insertRow(int row, const QString & labelText, QWidget * field)
QtDartBindings_EXPORT void c_QFormLayout__insertRow_int_QString_QWidget(
    void *thisObj, int row, const char *labelText_, void *field_);
// QFormLayout::invalidate()
QtDartBindings_EXPORT void c_QFormLayout__invalidate(void *thisObj);
// QFormLayout::isEmpty() const
QtDartBindings_EXPORT bool c_QFormLayout__isEmpty(void *thisObj);
// QFormLayout::isRowVisible(QLayout * layout) const
QtDartBindings_EXPORT bool c_QFormLayout__isRowVisible_QLayout(void *thisObj,
                                                               void *layout_);
// QFormLayout::isRowVisible(QWidget * widget) const
QtDartBindings_EXPORT bool c_QFormLayout__isRowVisible_QWidget(void *thisObj,
                                                               void *widget_);
// QFormLayout::isRowVisible(int row) const
QtDartBindings_EXPORT bool c_QFormLayout__isRowVisible_int(void *thisObj,
                                                           int row);
// QFormLayout::itemAt(int index) const
QtDartBindings_EXPORT void *c_QFormLayout__itemAt_int(void *thisObj, int index);
// QFormLayout::labelForField(QLayout * field) const
QtDartBindings_EXPORT void *c_QFormLayout__labelForField_QLayout(void *thisObj,
                                                                 void *field_);
// QFormLayout::labelForField(QWidget * field) const
QtDartBindings_EXPORT void *c_QFormLayout__labelForField_QWidget(void *thisObj,
                                                                 void *field_);
// QFormLayout::layout()
QtDartBindings_EXPORT void *c_QFormLayout__layout(void *thisObj);
// QFormLayout::maximumSize() const
QtDartBindings_EXPORT void *c_QFormLayout__maximumSize(void *thisObj);
// QFormLayout::minimumHeightForWidth(int arg__1) const
QtDartBindings_EXPORT int
c_QFormLayout__minimumHeightForWidth_int(void *thisObj, int arg__1);
// QFormLayout::minimumSize() const
QtDartBindings_EXPORT void *c_QFormLayout__minimumSize(void *thisObj);
// QFormLayout::removeRow(QLayout * layout)
QtDartBindings_EXPORT void c_QFormLayout__removeRow_QLayout(void *thisObj,
                                                            void *layout_);
// QFormLayout::removeRow(QWidget * widget)
QtDartBindings_EXPORT void c_QFormLayout__removeRow_QWidget(void *thisObj,
                                                            void *widget_);
// QFormLayout::removeRow(int row)
QtDartBindings_EXPORT void c_QFormLayout__removeRow_int(void *thisObj, int row);
// QFormLayout::rowCount() const
QtDartBindings_EXPORT int c_QFormLayout__rowCount(void *thisObj);
// QFormLayout::setGeometry(const QRect & rect)
QtDartBindings_EXPORT void c_QFormLayout__setGeometry_QRect(void *thisObj,
                                                            void *rect_);
// QFormLayout::setHorizontalSpacing(int spacing)
QtDartBindings_EXPORT void
c_QFormLayout__setHorizontalSpacing_int(void *thisObj, int spacing);
// QFormLayout::setRowVisible(QLayout * layout, bool on)
QtDartBindings_EXPORT void
c_QFormLayout__setRowVisible_QLayout_bool(void *thisObj, void *layout_,
                                          bool on);
// QFormLayout::setRowVisible(QWidget * widget, bool on)
QtDartBindings_EXPORT void
c_QFormLayout__setRowVisible_QWidget_bool(void *thisObj, void *widget_,
                                          bool on);
// QFormLayout::setRowVisible(int row, bool on)
QtDartBindings_EXPORT void
c_QFormLayout__setRowVisible_int_bool(void *thisObj, int row, bool on);
// QFormLayout::setSpacing(int arg__1)
QtDartBindings_EXPORT void c_QFormLayout__setSpacing_int(void *thisObj,
                                                         int arg__1);
// QFormLayout::setVerticalSpacing(int spacing)
QtDartBindings_EXPORT void c_QFormLayout__setVerticalSpacing_int(void *thisObj,
                                                                 int spacing);
// QFormLayout::sizeHint() const
QtDartBindings_EXPORT void *c_QFormLayout__sizeHint(void *thisObj);
// QFormLayout::spacing() const
QtDartBindings_EXPORT int c_QFormLayout__spacing(void *thisObj);
// QFormLayout::takeAt(int index)
QtDartBindings_EXPORT void *c_QFormLayout__takeAt_int(void *thisObj, int index);
// QFormLayout::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QFormLayout__tr_char_char_int(const char *s, const char *c, int n);
// QFormLayout::verticalSpacing() const
QtDartBindings_EXPORT int c_QFormLayout__verticalSpacing(void *thisObj);
// QFormLayout::widget() const
QtDartBindings_EXPORT void *c_QFormLayout__widget(void *thisObj);
QtDartBindings_EXPORT void c_QFormLayout__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QFormLayout__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId);
QtDartBindings_EXPORT void c_QFormLayout_Finalizer(void *cppObj);
}
