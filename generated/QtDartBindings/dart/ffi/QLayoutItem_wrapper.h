
// tag=1040
#include "QtDartBindings_exports.h"
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qrect.h>
#include <qsize.h>
#include <qwidget.h>

namespace QtDartBindings_wrappersNS {
// tag=1017
class QLayoutItem_wrapper : public ::QLayoutItem {
public:
  ~QLayoutItem_wrapper();
  // tag=1041
  QLayoutItem_wrapper();
  // tag=1041
  virtual QFlags<Qt::Orientation> expandingDirections() const;
  // tag=1008
  virtual QFlags<Qt::Orientation> expandingDirections_nocallback() const;
  // tag=1041
  virtual QRect geometry() const;
  // tag=1008
  virtual QRect geometry_nocallback() const;
  // tag=1041
  virtual bool hasHeightForWidth() const;
  // tag=1008
  virtual bool hasHeightForWidth_nocallback() const;
  // tag=1041
  virtual int heightForWidth(int arg__1) const;
  // tag=1008
  virtual int heightForWidth_nocallback(int arg__1) const;
  // tag=1041
  virtual void invalidate();
  // tag=1008
  virtual void invalidate_nocallback();
  // tag=1041
  virtual bool isEmpty() const;
  // tag=1008
  virtual bool isEmpty_nocallback() const;
  // tag=1041
  virtual QLayout *layout();
  // tag=1008
  virtual QLayout *layout_nocallback();
  // tag=1041
  virtual QSize maximumSize() const;
  // tag=1008
  virtual QSize maximumSize_nocallback() const;
  // tag=1041
  virtual int minimumHeightForWidth(int arg__1) const;
  // tag=1008
  virtual int minimumHeightForWidth_nocallback(int arg__1) const;
  // tag=1041
  virtual QSize minimumSize() const;
  // tag=1008
  virtual QSize minimumSize_nocallback() const;
  // tag=1041
  virtual void setGeometry(const QRect &arg__1);
  // tag=1008
  virtual void setGeometry_nocallback(const QRect &arg__1);
  // tag=1041
  virtual QSize sizeHint() const;
  // tag=1008
  virtual QSize sizeHint_nocallback() const;
  // tag=1041
  virtual QWidget *widget() const;
  // tag=1008
  virtual QWidget *widget_nocallback() const;
  // tag=1042
  typedef QFlags<Qt::Orientation> (*Callback_expandingDirections)(void *);
  Callback_expandingDirections m_expandingDirectionsCallback = nullptr;
  // tag=1042
  typedef QRect *(*Callback_geometry)(void *);
  Callback_geometry m_geometryCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_hasHeightForWidth)(void *);
  Callback_hasHeightForWidth m_hasHeightForWidthCallback = nullptr;
  // tag=1042
  typedef int (*Callback_heightForWidth)(void *, int arg__1);
  Callback_heightForWidth m_heightForWidthCallback = nullptr;
  // tag=1042
  typedef void (*Callback_invalidate)(void *);
  Callback_invalidate m_invalidateCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_isEmpty)(void *);
  Callback_isEmpty m_isEmptyCallback = nullptr;
  // tag=1042
  typedef QLayout *(*Callback_layout)(void *);
  Callback_layout m_layoutCallback = nullptr;
  // tag=1042
  typedef QSize *(*Callback_maximumSize)(void *);
  Callback_maximumSize m_maximumSizeCallback = nullptr;
  // tag=1042
  typedef int (*Callback_minimumHeightForWidth)(void *, int arg__1);
  Callback_minimumHeightForWidth m_minimumHeightForWidthCallback = nullptr;
  // tag=1042
  typedef QSize *(*Callback_minimumSize)(void *);
  Callback_minimumSize m_minimumSizeCallback = nullptr;
  // tag=1042
  typedef void (*Callback_setGeometry)(void *, const QRect &arg__1);
  Callback_setGeometry m_setGeometryCallback = nullptr;
  // tag=1042
  typedef QSize *(*Callback_sizeHint)(void *);
  Callback_sizeHint m_sizeHintCallback = nullptr;
  // tag=1042
  typedef QWidget *(*Callback_widget)(void *);
  Callback_widget m_widgetCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QLayoutItem::QLayoutItem()
QtDartBindings_EXPORT void *c_QLayoutItem__constructor();

// tag=1067
//  QLayoutItem::expandingDirections() const
QtDartBindings_EXPORT int c_QLayoutItem__expandingDirections(void *thisObj);

// tag=1067
//  QLayoutItem::geometry() const
QtDartBindings_EXPORT void *c_QLayoutItem__geometry(void *thisObj);

// tag=1067
//  QLayoutItem::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QLayoutItem__hasHeightForWidth(void *thisObj);

// tag=1067
//  QLayoutItem::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QLayoutItem__heightForWidth_int(void *thisObj,
                                                            int arg__1);

// tag=1067
//  QLayoutItem::invalidate()
QtDartBindings_EXPORT void c_QLayoutItem__invalidate(void *thisObj);

// tag=1067
//  QLayoutItem::isEmpty() const
QtDartBindings_EXPORT bool c_QLayoutItem__isEmpty(void *thisObj);

// tag=1067
//  QLayoutItem::layout()
QtDartBindings_EXPORT void *c_QLayoutItem__layout(void *thisObj);

// tag=1067
//  QLayoutItem::maximumSize() const
QtDartBindings_EXPORT void *c_QLayoutItem__maximumSize(void *thisObj);

// tag=1067
//  QLayoutItem::minimumHeightForWidth(int arg__1) const
QtDartBindings_EXPORT int
c_QLayoutItem__minimumHeightForWidth_int(void *thisObj, int arg__1);

// tag=1067
//  QLayoutItem::minimumSize() const
QtDartBindings_EXPORT void *c_QLayoutItem__minimumSize(void *thisObj);

// tag=1067
//  QLayoutItem::setGeometry(const QRect & arg__1)
QtDartBindings_EXPORT void c_QLayoutItem__setGeometry_QRect(void *thisObj,
                                                            void *arg__1_);

// tag=1067
//  QLayoutItem::sizeHint() const
QtDartBindings_EXPORT void *c_QLayoutItem__sizeHint(void *thisObj);

// tag=1067
//  QLayoutItem::widget() const
QtDartBindings_EXPORT void *c_QLayoutItem__widget(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QLayoutItem__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QLayoutItem__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QLayoutItem_Finalizer(void *, void *cppObj,
                                                   void *);
}
