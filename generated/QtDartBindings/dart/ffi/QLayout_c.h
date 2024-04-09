/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>
#include <qsize.h>
#include <qstring.h>
#include <qvariant.h>
#include <qwidget.h>

namespace QtDartBindings_wrappersNS {
class QLayout_wrapper : public ::QLayout {
public:
  ~QLayout_wrapper();
  QLayout_wrapper(QWidget *parent = nullptr);
  bool activate();
  void addChildLayout(QLayout *l);
  void addChildWidget(QWidget *w);
  virtual void addItem(QLayoutItem *arg__1);
  virtual void addItem_nocallback(QLayoutItem *arg__1);
  void addWidget(QWidget *w);
  bool adoptLayout(QLayout *layout);
  QRect alignmentRect(const QRect &arg__1) const;
  static QSize closestAcceptableSize(const QWidget *w, const QSize &s);
  QRect contentsRect() const;
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
  bool isEnabled() const;
  virtual QLayoutItem *itemAt(int index) const;
  virtual QLayoutItem *itemAt_nocallback(int index) const;
  virtual QLayout *layout();
  virtual QLayout *layout_nocallback();
  virtual QSize maximumSize() const;
  virtual QSize maximumSize_nocallback() const;
  QWidget *menuBar() const;
  virtual int minimumHeightForWidth(int arg__1) const;
  virtual int minimumHeightForWidth_nocallback(int arg__1) const;
  virtual QSize minimumSize() const;
  virtual QSize minimumSize_nocallback() const;
  QWidget *parentWidget() const;
  void removeItem(QLayoutItem *arg__1);
  void removeWidget(QWidget *w);
  void setContentsMargins(int left, int top, int right, int bottom);
  void setEnabled(bool arg__1);
  virtual void setGeometry(const QRect &arg__1);
  virtual void setGeometry_nocallback(const QRect &arg__1);
  void setMenuBar(QWidget *w);
  virtual void setSpacing(int arg__1);
  virtual void setSpacing_nocallback(int arg__1);
  virtual QSize sizeHint() const;
  virtual QSize sizeHint_nocallback() const;
  virtual int spacing() const;
  virtual int spacing_nocallback() const;
  virtual QLayoutItem *takeAt(int index);
  virtual QLayoutItem *takeAt_nocallback(int index);
  int totalHeightForWidth(int w) const;
  QSize totalMaximumSize() const;
  int totalMinimumHeightForWidth(int w) const;
  QSize totalMinimumSize() const;
  QSize totalSizeHint() const;
  static QString tr(const char *s, const char *c, int n);
  void unsetContentsMargins();
  void update();
  virtual QWidget *widget() const;
  virtual QWidget *widget_nocallback() const;
  void widgetEvent(QEvent *arg__1);
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
// QLayout::QLayout(QWidget * parent)
QtDartBindings_EXPORT void *c_QLayout__constructor_QWidget(void *parent_);
// QLayout::activate()
QtDartBindings_EXPORT bool c_QLayout__activate(void *thisObj);
// QLayout::addChildLayout(QLayout * l)
QtDartBindings_EXPORT void c_QLayout__addChildLayout_QLayout(void *thisObj,
                                                             void *l_);
// QLayout::addChildWidget(QWidget * w)
QtDartBindings_EXPORT void c_QLayout__addChildWidget_QWidget(void *thisObj,
                                                             void *w_);
// QLayout::addItem(QLayoutItem * arg__1)
QtDartBindings_EXPORT void c_QLayout__addItem_QLayoutItem(void *thisObj,
                                                          void *arg__1_);
// QLayout::addWidget(QWidget * w)
QtDartBindings_EXPORT void c_QLayout__addWidget_QWidget(void *thisObj,
                                                        void *w_);
// QLayout::adoptLayout(QLayout * layout)
QtDartBindings_EXPORT bool c_QLayout__adoptLayout_QLayout(void *thisObj,
                                                          void *layout_);
// QLayout::alignmentRect(const QRect & arg__1) const
QtDartBindings_EXPORT void *c_QLayout__alignmentRect_QRect(void *thisObj,
                                                           void *arg__1_);
// QLayout::closestAcceptableSize(const QWidget * w, const QSize & s)
QtDartBindings_EXPORT void *
c_static_QLayout__closestAcceptableSize_QWidget_QSize(void *w_, void *s_);
// QLayout::contentsRect() const
QtDartBindings_EXPORT void *c_QLayout__contentsRect(void *thisObj);
// QLayout::count() const
QtDartBindings_EXPORT int c_QLayout__count(void *thisObj);
// QLayout::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QLayout__customEvent_QEvent(void *thisObj,
                                                         void *event_);
// QLayout::event(QEvent * event)
QtDartBindings_EXPORT bool c_QLayout__event_QEvent(void *thisObj, void *event_);
// QLayout::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool c_QLayout__eventFilter_QObject_QEvent(void *thisObj,
                                                                 void *watched_,
                                                                 void *event_);
// QLayout::expandingDirections() const
QtDartBindings_EXPORT int c_QLayout__expandingDirections(void *thisObj);
// QLayout::geometry() const
QtDartBindings_EXPORT void *c_QLayout__geometry(void *thisObj);
// QLayout::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QLayout__hasHeightForWidth(void *thisObj);
// QLayout::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QLayout__heightForWidth_int(void *thisObj,
                                                        int arg__1);
// QLayout::indexOf(const QLayoutItem * arg__1) const
QtDartBindings_EXPORT int c_QLayout__indexOf_QLayoutItem(void *thisObj,
                                                         void *arg__1_);
// QLayout::indexOf(const QWidget * arg__1) const
QtDartBindings_EXPORT int c_QLayout__indexOf_QWidget(void *thisObj,
                                                     void *arg__1_);
// QLayout::invalidate()
QtDartBindings_EXPORT void c_QLayout__invalidate(void *thisObj);
// QLayout::isEmpty() const
QtDartBindings_EXPORT bool c_QLayout__isEmpty(void *thisObj);
// QLayout::isEnabled() const
QtDartBindings_EXPORT bool c_QLayout__isEnabled(void *thisObj);
// QLayout::itemAt(int index) const
QtDartBindings_EXPORT void *c_QLayout__itemAt_int(void *thisObj, int index);
// QLayout::layout()
QtDartBindings_EXPORT void *c_QLayout__layout(void *thisObj);
// QLayout::maximumSize() const
QtDartBindings_EXPORT void *c_QLayout__maximumSize(void *thisObj);
// QLayout::menuBar() const
QtDartBindings_EXPORT void *c_QLayout__menuBar(void *thisObj);
// QLayout::minimumHeightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QLayout__minimumHeightForWidth_int(void *thisObj,
                                                               int arg__1);
// QLayout::minimumSize() const
QtDartBindings_EXPORT void *c_QLayout__minimumSize(void *thisObj);
// QLayout::parentWidget() const
QtDartBindings_EXPORT void *c_QLayout__parentWidget(void *thisObj);
// QLayout::removeItem(QLayoutItem * arg__1)
QtDartBindings_EXPORT void c_QLayout__removeItem_QLayoutItem(void *thisObj,
                                                             void *arg__1_);
// QLayout::removeWidget(QWidget * w)
QtDartBindings_EXPORT void c_QLayout__removeWidget_QWidget(void *thisObj,
                                                           void *w_);
// QLayout::setContentsMargins(int left, int top, int right, int bottom)
QtDartBindings_EXPORT void
c_QLayout__setContentsMargins_int_int_int_int(void *thisObj, int left, int top,
                                              int right, int bottom);
// QLayout::setEnabled(bool arg__1)
QtDartBindings_EXPORT void c_QLayout__setEnabled_bool(void *thisObj,
                                                      bool arg__1);
// QLayout::setGeometry(const QRect & arg__1)
QtDartBindings_EXPORT void c_QLayout__setGeometry_QRect(void *thisObj,
                                                        void *arg__1_);
// QLayout::setMenuBar(QWidget * w)
QtDartBindings_EXPORT void c_QLayout__setMenuBar_QWidget(void *thisObj,
                                                         void *w_);
// QLayout::setSpacing(int arg__1)
QtDartBindings_EXPORT void c_QLayout__setSpacing_int(void *thisObj, int arg__1);
// QLayout::sizeHint() const
QtDartBindings_EXPORT void *c_QLayout__sizeHint(void *thisObj);
// QLayout::spacing() const
QtDartBindings_EXPORT int c_QLayout__spacing(void *thisObj);
// QLayout::takeAt(int index)
QtDartBindings_EXPORT void *c_QLayout__takeAt_int(void *thisObj, int index);
// QLayout::totalHeightForWidth(int w) const
QtDartBindings_EXPORT int c_QLayout__totalHeightForWidth_int(void *thisObj,
                                                             int w);
// QLayout::totalMaximumSize() const
QtDartBindings_EXPORT void *c_QLayout__totalMaximumSize(void *thisObj);
// QLayout::totalMinimumHeightForWidth(int w) const
QtDartBindings_EXPORT int
c_QLayout__totalMinimumHeightForWidth_int(void *thisObj, int w);
// QLayout::totalMinimumSize() const
QtDartBindings_EXPORT void *c_QLayout__totalMinimumSize(void *thisObj);
// QLayout::totalSizeHint() const
QtDartBindings_EXPORT void *c_QLayout__totalSizeHint(void *thisObj);
// QLayout::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QLayout__tr_char_char_int(const char *s, const char *c, int n);
// QLayout::unsetContentsMargins()
QtDartBindings_EXPORT void c_QLayout__unsetContentsMargins(void *thisObj);
// QLayout::update()
QtDartBindings_EXPORT void c_QLayout__update(void *thisObj);
// QLayout::widget() const
QtDartBindings_EXPORT void *c_QLayout__widget(void *thisObj);
// QLayout::widgetEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QLayout__widgetEvent_QEvent(void *thisObj,
                                                         void *arg__1_);
QtDartBindings_EXPORT void c_QLayout__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QLayout__registerVirtualMethodCallback(void *ptr, void *callback,
                                         int methodId);
QtDartBindings_EXPORT void c_QLayout_Finalizer(void *cppObj);
}
