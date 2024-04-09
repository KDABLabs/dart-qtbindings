/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qrect.h>
#include <qsize.h>
#include <qwidget.h>

namespace QtDartBindings_wrappersNS {
class QLayoutItem_wrapper : public ::QLayoutItem {
public:
  ~QLayoutItem_wrapper();
  QLayoutItem_wrapper();
  virtual QFlags<Qt::Orientation> expandingDirections() const;
  virtual QFlags<Qt::Orientation> expandingDirections_nocallback() const;
  virtual QRect geometry() const;
  virtual QRect geometry_nocallback() const;
  virtual bool hasHeightForWidth() const;
  virtual bool hasHeightForWidth_nocallback() const;
  virtual int heightForWidth(int arg__1) const;
  virtual int heightForWidth_nocallback(int arg__1) const;
  virtual void invalidate();
  virtual void invalidate_nocallback();
  virtual bool isEmpty() const;
  virtual bool isEmpty_nocallback() const;
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
  virtual QSize sizeHint() const;
  virtual QSize sizeHint_nocallback() const;
  virtual QWidget *widget() const;
  virtual QWidget *widget_nocallback() const;
  typedef QFlags<Qt::Orientation> (*Callback_expandingDirections)(void *);
  Callback_expandingDirections m_expandingDirectionsCallback = nullptr;
  typedef QRect *(*Callback_geometry)(void *);
  Callback_geometry m_geometryCallback = nullptr;
  typedef bool (*Callback_hasHeightForWidth)(void *);
  Callback_hasHeightForWidth m_hasHeightForWidthCallback = nullptr;
  typedef int (*Callback_heightForWidth)(void *, int arg__1);
  Callback_heightForWidth m_heightForWidthCallback = nullptr;
  typedef void (*Callback_invalidate)(void *);
  Callback_invalidate m_invalidateCallback = nullptr;
  typedef bool (*Callback_isEmpty)(void *);
  Callback_isEmpty m_isEmptyCallback = nullptr;
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
  typedef QSize *(*Callback_sizeHint)(void *);
  Callback_sizeHint m_sizeHintCallback = nullptr;
  typedef QWidget *(*Callback_widget)(void *);
  Callback_widget m_widgetCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QLayoutItem::QLayoutItem()
QtDartBindings_EXPORT void *c_QLayoutItem__constructor();
// QLayoutItem::expandingDirections() const
QtDartBindings_EXPORT int c_QLayoutItem__expandingDirections(void *thisObj);
// QLayoutItem::geometry() const
QtDartBindings_EXPORT void *c_QLayoutItem__geometry(void *thisObj);
// QLayoutItem::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QLayoutItem__hasHeightForWidth(void *thisObj);
// QLayoutItem::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QLayoutItem__heightForWidth_int(void *thisObj,
                                                            int arg__1);
// QLayoutItem::invalidate()
QtDartBindings_EXPORT void c_QLayoutItem__invalidate(void *thisObj);
// QLayoutItem::isEmpty() const
QtDartBindings_EXPORT bool c_QLayoutItem__isEmpty(void *thisObj);
// QLayoutItem::layout()
QtDartBindings_EXPORT void *c_QLayoutItem__layout(void *thisObj);
// QLayoutItem::maximumSize() const
QtDartBindings_EXPORT void *c_QLayoutItem__maximumSize(void *thisObj);
// QLayoutItem::minimumHeightForWidth(int arg__1) const
QtDartBindings_EXPORT int
c_QLayoutItem__minimumHeightForWidth_int(void *thisObj, int arg__1);
// QLayoutItem::minimumSize() const
QtDartBindings_EXPORT void *c_QLayoutItem__minimumSize(void *thisObj);
// QLayoutItem::setGeometry(const QRect & arg__1)
QtDartBindings_EXPORT void c_QLayoutItem__setGeometry_QRect(void *thisObj,
                                                            void *arg__1_);
// QLayoutItem::sizeHint() const
QtDartBindings_EXPORT void *c_QLayoutItem__sizeHint(void *thisObj);
// QLayoutItem::widget() const
QtDartBindings_EXPORT void *c_QLayoutItem__widget(void *thisObj);
QtDartBindings_EXPORT void c_QLayoutItem__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QLayoutItem__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId);
QtDartBindings_EXPORT void c_QLayoutItem_Finalizer(void *cppObj);
}
