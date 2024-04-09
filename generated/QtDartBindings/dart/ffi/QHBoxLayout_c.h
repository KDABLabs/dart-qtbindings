/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qboxlayout.h>
#include <qcoreevent.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qobject.h>
#include <qrect.h>
#include <qsize.h>
#include <qstring.h>
#include <qwidget.h>

namespace QtDartBindings_wrappersNS {
class QHBoxLayout_wrapper : public ::QHBoxLayout {
public:
  ~QHBoxLayout_wrapper();
  QHBoxLayout_wrapper(QWidget *parent);
  virtual void addItem(QLayoutItem *arg__1);
  virtual void addItem_nocallback(QLayoutItem *arg__1);
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
  virtual int indexOf(const QLayoutItem *arg__1) const;
  virtual int indexOf_nocallback(const QLayoutItem *arg__1) const;
  virtual int indexOf(const QWidget *arg__1) const;
  virtual int indexOf_nocallback(const QWidget *arg__1) const;
  virtual void invalidate();
  virtual void invalidate_nocallback();
  virtual bool isEmpty() const;
  virtual bool isEmpty_nocallback() const;
  virtual QLayoutItem *itemAt(int arg__1) const;
  virtual QLayoutItem *itemAt_nocallback(int arg__1) const;
  virtual QLayout *layout();
  virtual QLayout *layout_nocallback();
  virtual QSize maximumSize() const;
  virtual QSize maximumSize_nocallback() const;
  virtual int minimumHeightForWidth(int arg__1) const;
  virtual int minimumHeightForWidth_nocallback(int arg__1) const;
  virtual QSize minimumSize() const;
  virtual QSize minimumSize_nocallback() const;
  virtual void setGeometry(const QRect &arg__1);
  virtual void setGeometry_nocallback(const QRect &arg__1);
  virtual void setSpacing(int spacing);
  virtual void setSpacing_nocallback(int spacing);
  virtual QSize sizeHint() const;
  virtual QSize sizeHint_nocallback() const;
  virtual int spacing() const;
  virtual int spacing_nocallback() const;
  virtual QLayoutItem *takeAt(int arg__1);
  virtual QLayoutItem *takeAt_nocallback(int arg__1);
  static QString tr(const char *s, const char *c, int n);
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
  typedef QLayoutItem *(*Callback_itemAt)(void *, int arg__1);
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
  typedef QLayoutItem *(*Callback_takeAt)(void *, int arg__1);
  Callback_takeAt m_takeAtCallback = nullptr;
  typedef QWidget *(*Callback_widget)(void *);
  Callback_widget m_widgetCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QHBoxLayout::QHBoxLayout(QWidget * parent)
QtDartBindings_EXPORT void *c_QHBoxLayout__constructor_QWidget(void *parent_);
// QHBoxLayout::addItem(QLayoutItem * arg__1)
QtDartBindings_EXPORT void c_QHBoxLayout__addItem_QLayoutItem(void *thisObj,
                                                              void *arg__1_);
// QHBoxLayout::count() const
QtDartBindings_EXPORT int c_QHBoxLayout__count(void *thisObj);
// QHBoxLayout::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QHBoxLayout__customEvent_QEvent(void *thisObj,
                                                             void *event_);
// QHBoxLayout::event(QEvent * event)
QtDartBindings_EXPORT bool c_QHBoxLayout__event_QEvent(void *thisObj,
                                                       void *event_);
// QHBoxLayout::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QHBoxLayout__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                          void *event_);
// QHBoxLayout::expandingDirections() const
QtDartBindings_EXPORT int c_QHBoxLayout__expandingDirections(void *thisObj);
// QHBoxLayout::geometry() const
QtDartBindings_EXPORT void *c_QHBoxLayout__geometry(void *thisObj);
// QHBoxLayout::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QHBoxLayout__hasHeightForWidth(void *thisObj);
// QHBoxLayout::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QHBoxLayout__heightForWidth_int(void *thisObj,
                                                            int arg__1);
// QHBoxLayout::indexOf(const QLayoutItem * arg__1) const
QtDartBindings_EXPORT int c_QHBoxLayout__indexOf_QLayoutItem(void *thisObj,
                                                             void *arg__1_);
// QHBoxLayout::indexOf(const QWidget * arg__1) const
QtDartBindings_EXPORT int c_QHBoxLayout__indexOf_QWidget(void *thisObj,
                                                         void *arg__1_);
// QHBoxLayout::invalidate()
QtDartBindings_EXPORT void c_QHBoxLayout__invalidate(void *thisObj);
// QHBoxLayout::isEmpty() const
QtDartBindings_EXPORT bool c_QHBoxLayout__isEmpty(void *thisObj);
// QHBoxLayout::itemAt(int arg__1) const
QtDartBindings_EXPORT void *c_QHBoxLayout__itemAt_int(void *thisObj,
                                                      int arg__1);
// QHBoxLayout::layout()
QtDartBindings_EXPORT void *c_QHBoxLayout__layout(void *thisObj);
// QHBoxLayout::maximumSize() const
QtDartBindings_EXPORT void *c_QHBoxLayout__maximumSize(void *thisObj);
// QHBoxLayout::minimumHeightForWidth(int arg__1) const
QtDartBindings_EXPORT int
c_QHBoxLayout__minimumHeightForWidth_int(void *thisObj, int arg__1);
// QHBoxLayout::minimumSize() const
QtDartBindings_EXPORT void *c_QHBoxLayout__minimumSize(void *thisObj);
// QHBoxLayout::setGeometry(const QRect & arg__1)
QtDartBindings_EXPORT void c_QHBoxLayout__setGeometry_QRect(void *thisObj,
                                                            void *arg__1_);
// QHBoxLayout::setSpacing(int spacing)
QtDartBindings_EXPORT void c_QHBoxLayout__setSpacing_int(void *thisObj,
                                                         int spacing);
// QHBoxLayout::sizeHint() const
QtDartBindings_EXPORT void *c_QHBoxLayout__sizeHint(void *thisObj);
// QHBoxLayout::spacing() const
QtDartBindings_EXPORT int c_QHBoxLayout__spacing(void *thisObj);
// QHBoxLayout::takeAt(int arg__1)
QtDartBindings_EXPORT void *c_QHBoxLayout__takeAt_int(void *thisObj,
                                                      int arg__1);
// QHBoxLayout::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QHBoxLayout__tr_char_char_int(const char *s, const char *c, int n);
// QHBoxLayout::widget() const
QtDartBindings_EXPORT void *c_QHBoxLayout__widget(void *thisObj);
QtDartBindings_EXPORT void c_QHBoxLayout__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QHBoxLayout__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId);
QtDartBindings_EXPORT void c_QHBoxLayout_Finalizer(void *cppObj);
}
