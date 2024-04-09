
// tag=1040
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
// tag=1017
class QVBoxLayout_wrapper : public ::QVBoxLayout {
public:
  ~QVBoxLayout_wrapper();
  // tag=1041
  QVBoxLayout_wrapper(QWidget *parent);
  // tag=1041
  virtual void addItem(QLayoutItem *arg__1);
  // tag=1008
  virtual void addItem_nocallback(QLayoutItem *arg__1);
  // tag=1041
  virtual int count() const;
  // tag=1008
  virtual int count_nocallback() const;
  // tag=1041
  virtual void customEvent(QEvent *event);
  // tag=1008
  virtual void customEvent_nocallback(QEvent *event);
  // tag=1041
  virtual bool event(QEvent *event);
  // tag=1008
  virtual bool event_nocallback(QEvent *event);
  // tag=1041
  virtual bool eventFilter(QObject *watched, QEvent *event);
  // tag=1008
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
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
  virtual int indexOf(const QLayoutItem *arg__1) const;
  // tag=1008
  virtual int indexOf_nocallback(const QLayoutItem *arg__1) const;
  // tag=1041
  virtual int indexOf(const QWidget *arg__1) const;
  // tag=1008
  virtual int indexOf_nocallback(const QWidget *arg__1) const;
  // tag=1041
  virtual void invalidate();
  // tag=1008
  virtual void invalidate_nocallback();
  // tag=1041
  virtual bool isEmpty() const;
  // tag=1008
  virtual bool isEmpty_nocallback() const;
  // tag=1041
  virtual QLayoutItem *itemAt(int arg__1) const;
  // tag=1008
  virtual QLayoutItem *itemAt_nocallback(int arg__1) const;
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
  virtual void setSpacing(int spacing);
  // tag=1008
  virtual void setSpacing_nocallback(int spacing);
  // tag=1041
  virtual QSize sizeHint() const;
  // tag=1008
  virtual QSize sizeHint_nocallback() const;
  // tag=1041
  virtual int spacing() const;
  // tag=1008
  virtual int spacing_nocallback() const;
  // tag=1041
  virtual QLayoutItem *takeAt(int arg__1);
  // tag=1008
  virtual QLayoutItem *takeAt_nocallback(int arg__1);
  // tag=1041
  static QString tr(const char *s, const char *c, int n);
  // tag=1041
  virtual QWidget *widget() const;
  // tag=1008
  virtual QWidget *widget_nocallback() const;
  // tag=1042
  typedef void (*Callback_addItem)(void *, QLayoutItem *arg__1);
  Callback_addItem m_addItemCallback = nullptr;
  // tag=1042
  typedef int (*Callback_count)(void *);
  Callback_count m_countCallback = nullptr;
  // tag=1042
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_event)(void *, QEvent *event);
  Callback_event m_eventCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_eventFilter)(void *, QObject *watched, QEvent *event);
  Callback_eventFilter m_eventFilterCallback = nullptr;
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
  typedef int (*Callback_indexOf)(void *, const QLayoutItem *arg__1);
  Callback_indexOf m_indexOfCallback = nullptr;
  // tag=1042
  typedef int (*Callback_indexOf_2)(void *, const QWidget *arg__1);
  Callback_indexOf_2 m_indexOf_2Callback = nullptr;
  // tag=1042
  typedef void (*Callback_invalidate)(void *);
  Callback_invalidate m_invalidateCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_isEmpty)(void *);
  Callback_isEmpty m_isEmptyCallback = nullptr;
  // tag=1042
  typedef QLayoutItem *(*Callback_itemAt)(void *, int arg__1);
  Callback_itemAt m_itemAtCallback = nullptr;
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
  typedef void (*Callback_setSpacing)(void *, int spacing);
  Callback_setSpacing m_setSpacingCallback = nullptr;
  // tag=1042
  typedef QSize *(*Callback_sizeHint)(void *);
  Callback_sizeHint m_sizeHintCallback = nullptr;
  // tag=1042
  typedef int (*Callback_spacing)(void *);
  Callback_spacing m_spacingCallback = nullptr;
  // tag=1042
  typedef QLayoutItem *(*Callback_takeAt)(void *, int arg__1);
  Callback_takeAt m_takeAtCallback = nullptr;
  // tag=1042
  typedef QWidget *(*Callback_widget)(void *);
  Callback_widget m_widgetCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QVBoxLayout::QVBoxLayout(QWidget * parent)
QtDartBindings_EXPORT void *c_QVBoxLayout__constructor_QWidget(void *parent_);

// tag=1067
//  QVBoxLayout::addItem(QLayoutItem * arg__1)
QtDartBindings_EXPORT void c_QVBoxLayout__addItem_QLayoutItem(void *thisObj,
                                                              void *arg__1_);

// tag=1067
//  QVBoxLayout::count() const
QtDartBindings_EXPORT int c_QVBoxLayout__count(void *thisObj);

// tag=1067
//  QVBoxLayout::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QVBoxLayout__customEvent_QEvent(void *thisObj,
                                                             void *event_);

// tag=1067
//  QVBoxLayout::event(QEvent * event)
QtDartBindings_EXPORT bool c_QVBoxLayout__event_QEvent(void *thisObj,
                                                       void *event_);

// tag=1067
//  QVBoxLayout::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QVBoxLayout__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                          void *event_);

// tag=1067
//  QVBoxLayout::expandingDirections() const
QtDartBindings_EXPORT int c_QVBoxLayout__expandingDirections(void *thisObj);

// tag=1067
//  QVBoxLayout::geometry() const
QtDartBindings_EXPORT void *c_QVBoxLayout__geometry(void *thisObj);

// tag=1067
//  QVBoxLayout::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QVBoxLayout__hasHeightForWidth(void *thisObj);

// tag=1067
//  QVBoxLayout::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QVBoxLayout__heightForWidth_int(void *thisObj,
                                                            int arg__1);

// tag=1067
//  QVBoxLayout::indexOf(const QLayoutItem * arg__1) const
QtDartBindings_EXPORT int c_QVBoxLayout__indexOf_QLayoutItem(void *thisObj,
                                                             void *arg__1_);

// tag=1067
//  QVBoxLayout::indexOf(const QWidget * arg__1) const
QtDartBindings_EXPORT int c_QVBoxLayout__indexOf_QWidget(void *thisObj,
                                                         void *arg__1_);

// tag=1067
//  QVBoxLayout::invalidate()
QtDartBindings_EXPORT void c_QVBoxLayout__invalidate(void *thisObj);

// tag=1067
//  QVBoxLayout::isEmpty() const
QtDartBindings_EXPORT bool c_QVBoxLayout__isEmpty(void *thisObj);

// tag=1067
//  QVBoxLayout::itemAt(int arg__1) const
QtDartBindings_EXPORT void *c_QVBoxLayout__itemAt_int(void *thisObj,
                                                      int arg__1);

// tag=1067
//  QVBoxLayout::layout()
QtDartBindings_EXPORT void *c_QVBoxLayout__layout(void *thisObj);

// tag=1067
//  QVBoxLayout::maximumSize() const
QtDartBindings_EXPORT void *c_QVBoxLayout__maximumSize(void *thisObj);

// tag=1067
//  QVBoxLayout::minimumHeightForWidth(int arg__1) const
QtDartBindings_EXPORT int
c_QVBoxLayout__minimumHeightForWidth_int(void *thisObj, int arg__1);

// tag=1067
//  QVBoxLayout::minimumSize() const
QtDartBindings_EXPORT void *c_QVBoxLayout__minimumSize(void *thisObj);

// tag=1067
//  QVBoxLayout::setGeometry(const QRect & arg__1)
QtDartBindings_EXPORT void c_QVBoxLayout__setGeometry_QRect(void *thisObj,
                                                            void *arg__1_);

// tag=1067
//  QVBoxLayout::setSpacing(int spacing)
QtDartBindings_EXPORT void c_QVBoxLayout__setSpacing_int(void *thisObj,
                                                         int spacing);

// tag=1067
//  QVBoxLayout::sizeHint() const
QtDartBindings_EXPORT void *c_QVBoxLayout__sizeHint(void *thisObj);

// tag=1067
//  QVBoxLayout::spacing() const
QtDartBindings_EXPORT int c_QVBoxLayout__spacing(void *thisObj);

// tag=1067
//  QVBoxLayout::takeAt(int arg__1)
QtDartBindings_EXPORT void *c_QVBoxLayout__takeAt_int(void *thisObj,
                                                      int arg__1);

// tag=1067
//  QVBoxLayout::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QVBoxLayout__tr_char_char_int(const char *s, const char *c, int n);

// tag=1067
//  QVBoxLayout::widget() const
QtDartBindings_EXPORT void *c_QVBoxLayout__widget(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QVBoxLayout__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QVBoxLayout__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QVBoxLayout_Finalizer(void *, void *cppObj,
                                                   void *);
}
