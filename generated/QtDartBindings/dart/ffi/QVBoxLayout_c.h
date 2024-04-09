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
class QVBoxLayout_wrapper : public ::QVBoxLayout {
public:
  ~QVBoxLayout_wrapper();
  QVBoxLayout_wrapper(QWidget *parent);
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
// QVBoxLayout::QVBoxLayout(QWidget * parent)
QtDartBindings_EXPORT void *c_QVBoxLayout__constructor_QWidget(void *parent_);
// QVBoxLayout::addItem(QLayoutItem * arg__1)
QtDartBindings_EXPORT void c_QVBoxLayout__addItem_QLayoutItem(void *thisObj,
                                                              void *arg__1_);
// QVBoxLayout::count() const
QtDartBindings_EXPORT int c_QVBoxLayout__count(void *thisObj);
// QVBoxLayout::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QVBoxLayout__customEvent_QEvent(void *thisObj,
                                                             void *event_);
// QVBoxLayout::event(QEvent * event)
QtDartBindings_EXPORT bool c_QVBoxLayout__event_QEvent(void *thisObj,
                                                       void *event_);
// QVBoxLayout::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QVBoxLayout__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                          void *event_);
// QVBoxLayout::expandingDirections() const
QtDartBindings_EXPORT int c_QVBoxLayout__expandingDirections(void *thisObj);
// QVBoxLayout::geometry() const
QtDartBindings_EXPORT void *c_QVBoxLayout__geometry(void *thisObj);
// QVBoxLayout::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QVBoxLayout__hasHeightForWidth(void *thisObj);
// QVBoxLayout::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QVBoxLayout__heightForWidth_int(void *thisObj,
                                                            int arg__1);
// QVBoxLayout::indexOf(const QLayoutItem * arg__1) const
QtDartBindings_EXPORT int c_QVBoxLayout__indexOf_QLayoutItem(void *thisObj,
                                                             void *arg__1_);
// QVBoxLayout::indexOf(const QWidget * arg__1) const
QtDartBindings_EXPORT int c_QVBoxLayout__indexOf_QWidget(void *thisObj,
                                                         void *arg__1_);
// QVBoxLayout::invalidate()
QtDartBindings_EXPORT void c_QVBoxLayout__invalidate(void *thisObj);
// QVBoxLayout::isEmpty() const
QtDartBindings_EXPORT bool c_QVBoxLayout__isEmpty(void *thisObj);
// QVBoxLayout::itemAt(int arg__1) const
QtDartBindings_EXPORT void *c_QVBoxLayout__itemAt_int(void *thisObj,
                                                      int arg__1);
// QVBoxLayout::layout()
QtDartBindings_EXPORT void *c_QVBoxLayout__layout(void *thisObj);
// QVBoxLayout::maximumSize() const
QtDartBindings_EXPORT void *c_QVBoxLayout__maximumSize(void *thisObj);
// QVBoxLayout::minimumHeightForWidth(int arg__1) const
QtDartBindings_EXPORT int
c_QVBoxLayout__minimumHeightForWidth_int(void *thisObj, int arg__1);
// QVBoxLayout::minimumSize() const
QtDartBindings_EXPORT void *c_QVBoxLayout__minimumSize(void *thisObj);
// QVBoxLayout::setGeometry(const QRect & arg__1)
QtDartBindings_EXPORT void c_QVBoxLayout__setGeometry_QRect(void *thisObj,
                                                            void *arg__1_);
// QVBoxLayout::setSpacing(int spacing)
QtDartBindings_EXPORT void c_QVBoxLayout__setSpacing_int(void *thisObj,
                                                         int spacing);
// QVBoxLayout::sizeHint() const
QtDartBindings_EXPORT void *c_QVBoxLayout__sizeHint(void *thisObj);
// QVBoxLayout::spacing() const
QtDartBindings_EXPORT int c_QVBoxLayout__spacing(void *thisObj);
// QVBoxLayout::takeAt(int arg__1)
QtDartBindings_EXPORT void *c_QVBoxLayout__takeAt_int(void *thisObj,
                                                      int arg__1);
// QVBoxLayout::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QVBoxLayout__tr_char_char_int(const char *s, const char *c, int n);
// QVBoxLayout::widget() const
QtDartBindings_EXPORT void *c_QVBoxLayout__widget(void *thisObj);
QtDartBindings_EXPORT void c_QVBoxLayout__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QVBoxLayout__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId);
QtDartBindings_EXPORT void c_QVBoxLayout_Finalizer(void *cppObj);
}
