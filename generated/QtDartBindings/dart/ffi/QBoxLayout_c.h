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
class QBoxLayout_wrapper : public ::QBoxLayout {
public:
  ~QBoxLayout_wrapper();
  virtual void addItem(QLayoutItem *arg__1);
  virtual void addItem_nocallback(QLayoutItem *arg__1);
  void addLayout(QLayout *layout, int stretch = 0);
  void addSpacing(int size);
  void addStretch(int stretch = 0);
  void addStrut(int arg__1);
  void addWidget(QWidget *arg__1, int stretch = 0);
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
  void insertItem(int index, QLayoutItem *arg__2);
  void insertLayout(int index, QLayout *layout, int stretch = 0);
  void insertSpacing(int index, int size);
  void insertStretch(int index, int stretch = 0);
  void insertWidget(int index, QWidget *widget, int stretch = 0);
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
  void setStretch(int index, int stretch);
  bool setStretchFactor(QLayout *l, int stretch);
  bool setStretchFactor(QWidget *w, int stretch);
  virtual QSize sizeHint() const;
  virtual QSize sizeHint_nocallback() const;
  virtual int spacing() const;
  virtual int spacing_nocallback() const;
  int stretch(int index) const;
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
// QBoxLayout::addItem(QLayoutItem * arg__1)
QtDartBindings_EXPORT void c_QBoxLayout__addItem_QLayoutItem(void *thisObj,
                                                             void *arg__1_);
// QBoxLayout::addLayout(QLayout * layout, int stretch)
QtDartBindings_EXPORT void
c_QBoxLayout__addLayout_QLayout_int(void *thisObj, void *layout_, int stretch);
// QBoxLayout::addSpacing(int size)
QtDartBindings_EXPORT void c_QBoxLayout__addSpacing_int(void *thisObj,
                                                        int size);
// QBoxLayout::addStretch(int stretch)
QtDartBindings_EXPORT void c_QBoxLayout__addStretch_int(void *thisObj,
                                                        int stretch);
// QBoxLayout::addStrut(int arg__1)
QtDartBindings_EXPORT void c_QBoxLayout__addStrut_int(void *thisObj,
                                                      int arg__1);
// QBoxLayout::addWidget(QWidget * arg__1, int stretch)
QtDartBindings_EXPORT void
c_QBoxLayout__addWidget_QWidget_int(void *thisObj, void *arg__1_, int stretch);
// QBoxLayout::count() const
QtDartBindings_EXPORT int c_QBoxLayout__count(void *thisObj);
// QBoxLayout::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QBoxLayout__customEvent_QEvent(void *thisObj,
                                                            void *event_);
// QBoxLayout::event(QEvent * event)
QtDartBindings_EXPORT bool c_QBoxLayout__event_QEvent(void *thisObj,
                                                      void *event_);
// QBoxLayout::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QBoxLayout__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                         void *event_);
// QBoxLayout::expandingDirections() const
QtDartBindings_EXPORT int c_QBoxLayout__expandingDirections(void *thisObj);
// QBoxLayout::geometry() const
QtDartBindings_EXPORT void *c_QBoxLayout__geometry(void *thisObj);
// QBoxLayout::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QBoxLayout__hasHeightForWidth(void *thisObj);
// QBoxLayout::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QBoxLayout__heightForWidth_int(void *thisObj,
                                                           int arg__1);
// QBoxLayout::indexOf(const QLayoutItem * arg__1) const
QtDartBindings_EXPORT int c_QBoxLayout__indexOf_QLayoutItem(void *thisObj,
                                                            void *arg__1_);
// QBoxLayout::indexOf(const QWidget * arg__1) const
QtDartBindings_EXPORT int c_QBoxLayout__indexOf_QWidget(void *thisObj,
                                                        void *arg__1_);
// QBoxLayout::insertItem(int index, QLayoutItem * arg__2)
QtDartBindings_EXPORT void
c_QBoxLayout__insertItem_int_QLayoutItem(void *thisObj, int index,
                                         void *arg__2_);
// QBoxLayout::insertLayout(int index, QLayout * layout, int stretch)
QtDartBindings_EXPORT void
c_QBoxLayout__insertLayout_int_QLayout_int(void *thisObj, int index,
                                           void *layout_, int stretch);
// QBoxLayout::insertSpacing(int index, int size)
QtDartBindings_EXPORT void
c_QBoxLayout__insertSpacing_int_int(void *thisObj, int index, int size);
// QBoxLayout::insertStretch(int index, int stretch)
QtDartBindings_EXPORT void
c_QBoxLayout__insertStretch_int_int(void *thisObj, int index, int stretch);
// QBoxLayout::insertWidget(int index, QWidget * widget, int stretch)
QtDartBindings_EXPORT void
c_QBoxLayout__insertWidget_int_QWidget_int(void *thisObj, int index,
                                           void *widget_, int stretch);
// QBoxLayout::invalidate()
QtDartBindings_EXPORT void c_QBoxLayout__invalidate(void *thisObj);
// QBoxLayout::isEmpty() const
QtDartBindings_EXPORT bool c_QBoxLayout__isEmpty(void *thisObj);
// QBoxLayout::itemAt(int arg__1) const
QtDartBindings_EXPORT void *c_QBoxLayout__itemAt_int(void *thisObj, int arg__1);
// QBoxLayout::layout()
QtDartBindings_EXPORT void *c_QBoxLayout__layout(void *thisObj);
// QBoxLayout::maximumSize() const
QtDartBindings_EXPORT void *c_QBoxLayout__maximumSize(void *thisObj);
// QBoxLayout::minimumHeightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QBoxLayout__minimumHeightForWidth_int(void *thisObj,
                                                                  int arg__1);
// QBoxLayout::minimumSize() const
QtDartBindings_EXPORT void *c_QBoxLayout__minimumSize(void *thisObj);
// QBoxLayout::setGeometry(const QRect & arg__1)
QtDartBindings_EXPORT void c_QBoxLayout__setGeometry_QRect(void *thisObj,
                                                           void *arg__1_);
// QBoxLayout::setSpacing(int spacing)
QtDartBindings_EXPORT void c_QBoxLayout__setSpacing_int(void *thisObj,
                                                        int spacing);
// QBoxLayout::setStretch(int index, int stretch)
QtDartBindings_EXPORT void
c_QBoxLayout__setStretch_int_int(void *thisObj, int index, int stretch);
// QBoxLayout::setStretchFactor(QLayout * l, int stretch)
QtDartBindings_EXPORT bool
c_QBoxLayout__setStretchFactor_QLayout_int(void *thisObj, void *l_,
                                           int stretch);
// QBoxLayout::setStretchFactor(QWidget * w, int stretch)
QtDartBindings_EXPORT bool
c_QBoxLayout__setStretchFactor_QWidget_int(void *thisObj, void *w_,
                                           int stretch);
// QBoxLayout::sizeHint() const
QtDartBindings_EXPORT void *c_QBoxLayout__sizeHint(void *thisObj);
// QBoxLayout::spacing() const
QtDartBindings_EXPORT int c_QBoxLayout__spacing(void *thisObj);
// QBoxLayout::stretch(int index) const
QtDartBindings_EXPORT int c_QBoxLayout__stretch_int(void *thisObj, int index);
// QBoxLayout::takeAt(int arg__1)
QtDartBindings_EXPORT void *c_QBoxLayout__takeAt_int(void *thisObj, int arg__1);
// QBoxLayout::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QBoxLayout__tr_char_char_int(const char *s, const char *c, int n);
// QBoxLayout::widget() const
QtDartBindings_EXPORT void *c_QBoxLayout__widget(void *thisObj);
QtDartBindings_EXPORT void c_QBoxLayout__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QBoxLayout__registerVirtualMethodCallback(void *ptr, void *callback,
                                            int methodId);
QtDartBindings_EXPORT void c_QBoxLayout_Finalizer(void *cppObj);
}
