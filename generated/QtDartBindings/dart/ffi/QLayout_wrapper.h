
// tag=1040
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
// tag=1017
class QLayout_wrapper : public ::QLayout {
public:
  ~QLayout_wrapper();
  // tag=1041
  QLayout_wrapper(QWidget *parent = nullptr);
  // tag=1041
  bool activate();
  // tag=1041
  void addChildLayout(QLayout *l);
  // tag=1041
  void addChildWidget(QWidget *w);
  // tag=1041
  virtual void addItem(QLayoutItem *arg__1);
  // tag=1008
  virtual void addItem_nocallback(QLayoutItem *arg__1);
  // tag=1041
  void addWidget(QWidget *w);
  // tag=1041
  bool adoptLayout(QLayout *layout);
  // tag=1041
  QRect alignmentRect(const QRect &arg__1) const;
  // tag=1041
  static QSize closestAcceptableSize(const QWidget *w, const QSize &s);
  // tag=1041
  QRect contentsRect() const;
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
  bool isEnabled() const;
  // tag=1041
  virtual QLayoutItem *itemAt(int index) const;
  // tag=1008
  virtual QLayoutItem *itemAt_nocallback(int index) const;
  // tag=1041
  virtual QLayout *layout();
  // tag=1008
  virtual QLayout *layout_nocallback();
  // tag=1041
  virtual QSize maximumSize() const;
  // tag=1008
  virtual QSize maximumSize_nocallback() const;
  // tag=1041
  QWidget *menuBar() const;
  // tag=1041
  virtual int minimumHeightForWidth(int arg__1) const;
  // tag=1008
  virtual int minimumHeightForWidth_nocallback(int arg__1) const;
  // tag=1041
  virtual QSize minimumSize() const;
  // tag=1008
  virtual QSize minimumSize_nocallback() const;
  // tag=1041
  QWidget *parentWidget() const;
  // tag=1041
  void removeItem(QLayoutItem *arg__1);
  // tag=1041
  void removeWidget(QWidget *w);
  // tag=1041
  void setContentsMargins(int left, int top, int right, int bottom);
  // tag=1041
  void setEnabled(bool arg__1);
  // tag=1041
  virtual void setGeometry(const QRect &arg__1);
  // tag=1008
  virtual void setGeometry_nocallback(const QRect &arg__1);
  // tag=1041
  void setMenuBar(QWidget *w);
  // tag=1041
  virtual void setSpacing(int arg__1);
  // tag=1008
  virtual void setSpacing_nocallback(int arg__1);
  // tag=1041
  virtual QSize sizeHint() const;
  // tag=1008
  virtual QSize sizeHint_nocallback() const;
  // tag=1041
  virtual int spacing() const;
  // tag=1008
  virtual int spacing_nocallback() const;
  // tag=1041
  virtual QLayoutItem *takeAt(int index);
  // tag=1008
  virtual QLayoutItem *takeAt_nocallback(int index);
  // tag=1041
  int totalHeightForWidth(int w) const;
  // tag=1041
  QSize totalMaximumSize() const;
  // tag=1041
  int totalMinimumHeightForWidth(int w) const;
  // tag=1041
  QSize totalMinimumSize() const;
  // tag=1041
  QSize totalSizeHint() const;
  // tag=1041
  static QString tr(const char *s, const char *c, int n);
  // tag=1041
  void unsetContentsMargins();
  // tag=1041
  void update();
  // tag=1041
  virtual QWidget *widget() const;
  // tag=1008
  virtual QWidget *widget_nocallback() const;
  // tag=1041
  void widgetEvent(QEvent *arg__1);
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
  typedef QLayoutItem *(*Callback_itemAt)(void *, int index);
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
  typedef void (*Callback_setSpacing)(void *, int arg__1);
  Callback_setSpacing m_setSpacingCallback = nullptr;
  // tag=1042
  typedef QSize *(*Callback_sizeHint)(void *);
  Callback_sizeHint m_sizeHintCallback = nullptr;
  // tag=1042
  typedef int (*Callback_spacing)(void *);
  Callback_spacing m_spacingCallback = nullptr;
  // tag=1042
  typedef QLayoutItem *(*Callback_takeAt)(void *, int index);
  Callback_takeAt m_takeAtCallback = nullptr;
  // tag=1042
  typedef QWidget *(*Callback_widget)(void *);
  Callback_widget m_widgetCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QLayout::QLayout(QWidget * parent)
QtDartBindings_EXPORT void *c_QLayout__constructor_QWidget(void *parent_);

// tag=1067
//  QLayout::activate()
QtDartBindings_EXPORT bool c_QLayout__activate(void *thisObj);

// tag=1067
//  QLayout::addChildLayout(QLayout * l)
QtDartBindings_EXPORT void c_QLayout__addChildLayout_QLayout(void *thisObj,
                                                             void *l_);

// tag=1067
//  QLayout::addChildWidget(QWidget * w)
QtDartBindings_EXPORT void c_QLayout__addChildWidget_QWidget(void *thisObj,
                                                             void *w_);

// tag=1067
//  QLayout::addItem(QLayoutItem * arg__1)
QtDartBindings_EXPORT void c_QLayout__addItem_QLayoutItem(void *thisObj,
                                                          void *arg__1_);

// tag=1067
//  QLayout::addWidget(QWidget * w)
QtDartBindings_EXPORT void c_QLayout__addWidget_QWidget(void *thisObj,
                                                        void *w_);

// tag=1067
//  QLayout::adoptLayout(QLayout * layout)
QtDartBindings_EXPORT bool c_QLayout__adoptLayout_QLayout(void *thisObj,
                                                          void *layout_);

// tag=1067
//  QLayout::alignmentRect(const QRect & arg__1) const
QtDartBindings_EXPORT void *c_QLayout__alignmentRect_QRect(void *thisObj,
                                                           void *arg__1_);

// tag=1067
//  QLayout::closestAcceptableSize(const QWidget * w, const QSize & s)
QtDartBindings_EXPORT void *
c_static_QLayout__closestAcceptableSize_QWidget_QSize(void *w_, void *s_);

// tag=1067
//  QLayout::contentsRect() const
QtDartBindings_EXPORT void *c_QLayout__contentsRect(void *thisObj);

// tag=1067
//  QLayout::count() const
QtDartBindings_EXPORT int c_QLayout__count(void *thisObj);

// tag=1067
//  QLayout::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QLayout__customEvent_QEvent(void *thisObj,
                                                         void *event_);

// tag=1067
//  QLayout::event(QEvent * event)
QtDartBindings_EXPORT bool c_QLayout__event_QEvent(void *thisObj, void *event_);

// tag=1067
//  QLayout::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool c_QLayout__eventFilter_QObject_QEvent(void *thisObj,
                                                                 void *watched_,
                                                                 void *event_);

// tag=1067
//  QLayout::expandingDirections() const
QtDartBindings_EXPORT int c_QLayout__expandingDirections(void *thisObj);

// tag=1067
//  QLayout::geometry() const
QtDartBindings_EXPORT void *c_QLayout__geometry(void *thisObj);

// tag=1067
//  QLayout::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QLayout__hasHeightForWidth(void *thisObj);

// tag=1067
//  QLayout::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QLayout__heightForWidth_int(void *thisObj,
                                                        int arg__1);

// tag=1067
//  QLayout::indexOf(const QLayoutItem * arg__1) const
QtDartBindings_EXPORT int c_QLayout__indexOf_QLayoutItem(void *thisObj,
                                                         void *arg__1_);

// tag=1067
//  QLayout::indexOf(const QWidget * arg__1) const
QtDartBindings_EXPORT int c_QLayout__indexOf_QWidget(void *thisObj,
                                                     void *arg__1_);

// tag=1067
//  QLayout::invalidate()
QtDartBindings_EXPORT void c_QLayout__invalidate(void *thisObj);

// tag=1067
//  QLayout::isEmpty() const
QtDartBindings_EXPORT bool c_QLayout__isEmpty(void *thisObj);

// tag=1067
//  QLayout::isEnabled() const
QtDartBindings_EXPORT bool c_QLayout__isEnabled(void *thisObj);

// tag=1067
//  QLayout::itemAt(int index) const
QtDartBindings_EXPORT void *c_QLayout__itemAt_int(void *thisObj, int index);

// tag=1067
//  QLayout::layout()
QtDartBindings_EXPORT void *c_QLayout__layout(void *thisObj);

// tag=1067
//  QLayout::maximumSize() const
QtDartBindings_EXPORT void *c_QLayout__maximumSize(void *thisObj);

// tag=1067
//  QLayout::menuBar() const
QtDartBindings_EXPORT void *c_QLayout__menuBar(void *thisObj);

// tag=1067
//  QLayout::minimumHeightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QLayout__minimumHeightForWidth_int(void *thisObj,
                                                               int arg__1);

// tag=1067
//  QLayout::minimumSize() const
QtDartBindings_EXPORT void *c_QLayout__minimumSize(void *thisObj);

// tag=1067
//  QLayout::parentWidget() const
QtDartBindings_EXPORT void *c_QLayout__parentWidget(void *thisObj);

// tag=1067
//  QLayout::removeItem(QLayoutItem * arg__1)
QtDartBindings_EXPORT void c_QLayout__removeItem_QLayoutItem(void *thisObj,
                                                             void *arg__1_);

// tag=1067
//  QLayout::removeWidget(QWidget * w)
QtDartBindings_EXPORT void c_QLayout__removeWidget_QWidget(void *thisObj,
                                                           void *w_);

// tag=1067
//  QLayout::setContentsMargins(int left, int top, int right, int bottom)
QtDartBindings_EXPORT void
c_QLayout__setContentsMargins_int_int_int_int(void *thisObj, int left, int top,
                                              int right, int bottom);

// tag=1067
//  QLayout::setEnabled(bool arg__1)
QtDartBindings_EXPORT void c_QLayout__setEnabled_bool(void *thisObj,
                                                      bool arg__1);

// tag=1067
//  QLayout::setGeometry(const QRect & arg__1)
QtDartBindings_EXPORT void c_QLayout__setGeometry_QRect(void *thisObj,
                                                        void *arg__1_);

// tag=1067
//  QLayout::setMenuBar(QWidget * w)
QtDartBindings_EXPORT void c_QLayout__setMenuBar_QWidget(void *thisObj,
                                                         void *w_);

// tag=1067
//  QLayout::setSpacing(int arg__1)
QtDartBindings_EXPORT void c_QLayout__setSpacing_int(void *thisObj, int arg__1);

// tag=1067
//  QLayout::sizeHint() const
QtDartBindings_EXPORT void *c_QLayout__sizeHint(void *thisObj);

// tag=1067
//  QLayout::spacing() const
QtDartBindings_EXPORT int c_QLayout__spacing(void *thisObj);

// tag=1067
//  QLayout::takeAt(int index)
QtDartBindings_EXPORT void *c_QLayout__takeAt_int(void *thisObj, int index);

// tag=1067
//  QLayout::totalHeightForWidth(int w) const
QtDartBindings_EXPORT int c_QLayout__totalHeightForWidth_int(void *thisObj,
                                                             int w);

// tag=1067
//  QLayout::totalMaximumSize() const
QtDartBindings_EXPORT void *c_QLayout__totalMaximumSize(void *thisObj);

// tag=1067
//  QLayout::totalMinimumHeightForWidth(int w) const
QtDartBindings_EXPORT int
c_QLayout__totalMinimumHeightForWidth_int(void *thisObj, int w);

// tag=1067
//  QLayout::totalMinimumSize() const
QtDartBindings_EXPORT void *c_QLayout__totalMinimumSize(void *thisObj);

// tag=1067
//  QLayout::totalSizeHint() const
QtDartBindings_EXPORT void *c_QLayout__totalSizeHint(void *thisObj);

// tag=1067
//  QLayout::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QLayout__tr_char_char_int(const char *s, const char *c, int n);

// tag=1067
//  QLayout::unsetContentsMargins()
QtDartBindings_EXPORT void c_QLayout__unsetContentsMargins(void *thisObj);

// tag=1067
//  QLayout::update()
QtDartBindings_EXPORT void c_QLayout__update(void *thisObj);

// tag=1067
//  QLayout::widget() const
QtDartBindings_EXPORT void *c_QLayout__widget(void *thisObj);

// tag=1067
//  QLayout::widgetEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QLayout__widgetEvent_QEvent(void *thisObj,
                                                         void *arg__1_);

// tag=1066
QtDartBindings_EXPORT void c_QLayout__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QLayout__registerVirtualMethodCallback(void *ptr, void *callback,
                                         int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QLayout_Finalizer(void *, void *cppObj, void *);
}
