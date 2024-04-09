
// tag=1040
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
// tag=1017
class QGridLayout_wrapper : public ::QGridLayout {
public:
  ~QGridLayout_wrapper();
  // tag=1041
  QGridLayout_wrapper(QWidget *parent = nullptr);
  // tag=1041
  virtual void addItem(QLayoutItem *arg__1);
  // tag=1008
  virtual void addItem_nocallback(QLayoutItem *arg__1);
  // tag=1041
  void addItem(QLayoutItem *item, int row, int column, int rowSpan = 1,
               int columnSpan = 1);
  // tag=1041
  void addLayout(QLayout *arg__1, int row, int column);
  // tag=1041
  void addLayout(QLayout *arg__1, int row, int column, int rowSpan,
                 int columnSpan);
  // tag=1041
  void addWidget(QWidget *arg__1, int row, int column);
  // tag=1041
  void addWidget(QWidget *arg__1, int row, int column, int rowSpan,
                 int columnSpan);
  // tag=1041
  void addWidget(QWidget *w);
  // tag=1041
  QRect cellRect(int row, int column) const;
  // tag=1041
  int columnCount() const;
  // tag=1041
  int columnMinimumWidth(int column) const;
  // tag=1041
  int columnStretch(int column) const;
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
  int horizontalSpacing() const;
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
  virtual QLayoutItem *itemAt(int index) const;
  // tag=1008
  virtual QLayoutItem *itemAt_nocallback(int index) const;
  // tag=1041
  QLayoutItem *itemAtPosition(int row, int column) const;
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
  int rowCount() const;
  // tag=1041
  int rowMinimumHeight(int row) const;
  // tag=1041
  int rowStretch(int row) const;
  // tag=1041
  void setColumnMinimumWidth(int column, int minSize);
  // tag=1041
  void setColumnStretch(int column, int stretch);
  // tag=1041
  void setDefaultPositioning(int n, Qt::Orientation orient);
  // tag=1041
  virtual void setGeometry(const QRect &arg__1);
  // tag=1008
  virtual void setGeometry_nocallback(const QRect &arg__1);
  // tag=1041
  void setHorizontalSpacing(int spacing);
  // tag=1041
  void setRowMinimumHeight(int row, int minSize);
  // tag=1041
  void setRowStretch(int row, int stretch);
  // tag=1041
  virtual void setSpacing(int spacing);
  // tag=1008
  virtual void setSpacing_nocallback(int spacing);
  // tag=1041
  void setVerticalSpacing(int spacing);
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
  static QString tr(const char *s, const char *c, int n);
  // tag=1041
  int verticalSpacing() const;
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
  typedef void (*Callback_setSpacing)(void *, int spacing);
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
//  QGridLayout::QGridLayout(QWidget * parent)
QtDartBindings_EXPORT void *c_QGridLayout__constructor_QWidget(void *parent_);

// tag=1067
//  QGridLayout::addItem(QLayoutItem * arg__1)
QtDartBindings_EXPORT void c_QGridLayout__addItem_QLayoutItem(void *thisObj,
                                                              void *arg__1_);

// tag=1067
//  QGridLayout::addItem(QLayoutItem * item, int row, int column, int rowSpan,
//  int columnSpan)
QtDartBindings_EXPORT void
c_QGridLayout__addItemToGrid_QLayoutItem_int_int_int_int(void *thisObj,
                                                         void *item_, int row,
                                                         int column,
                                                         int rowSpan,
                                                         int columnSpan);

// tag=1067
//  QGridLayout::addLayout(QLayout * arg__1, int row, int column)
QtDartBindings_EXPORT void
c_QGridLayout__addLayout_QLayout_int_int(void *thisObj, void *arg__1_, int row,
                                         int column);

// tag=1067
//  QGridLayout::addLayout(QLayout * arg__1, int row, int column, int rowSpan,
//  int columnSpan)
QtDartBindings_EXPORT void
c_QGridLayout__addLayout_QLayout_int_int_int_int(void *thisObj, void *arg__1_,
                                                 int row, int column,
                                                 int rowSpan, int columnSpan);

// tag=1067
//  QGridLayout::addWidget(QWidget * arg__1, int row, int column)
QtDartBindings_EXPORT void
c_QGridLayout__addWidgetToGrid_QWidget_int_int(void *thisObj, void *arg__1_,
                                               int row, int column);

// tag=1067
//  QGridLayout::addWidget(QWidget * arg__1, int row, int column, int rowSpan,
//  int columnSpan)
QtDartBindings_EXPORT void
c_QGridLayout__addWidgetToGrid_QWidget_int_int_int_int(void *thisObj,
                                                       void *arg__1_, int row,
                                                       int column, int rowSpan,
                                                       int columnSpan);

// tag=1067
//  QGridLayout::addWidget(QWidget * w)
QtDartBindings_EXPORT void c_QGridLayout__addWidget_QWidget(void *thisObj,
                                                            void *w_);

// tag=1067
//  QGridLayout::cellRect(int row, int column) const
QtDartBindings_EXPORT void *
c_QGridLayout__cellRect_int_int(void *thisObj, int row, int column);

// tag=1067
//  QGridLayout::columnCount() const
QtDartBindings_EXPORT int c_QGridLayout__columnCount(void *thisObj);

// tag=1067
//  QGridLayout::columnMinimumWidth(int column) const
QtDartBindings_EXPORT int c_QGridLayout__columnMinimumWidth_int(void *thisObj,
                                                                int column);

// tag=1067
//  QGridLayout::columnStretch(int column) const
QtDartBindings_EXPORT int c_QGridLayout__columnStretch_int(void *thisObj,
                                                           int column);

// tag=1067
//  QGridLayout::count() const
QtDartBindings_EXPORT int c_QGridLayout__count(void *thisObj);

// tag=1067
//  QGridLayout::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QGridLayout__customEvent_QEvent(void *thisObj,
                                                             void *event_);

// tag=1067
//  QGridLayout::event(QEvent * event)
QtDartBindings_EXPORT bool c_QGridLayout__event_QEvent(void *thisObj,
                                                       void *event_);

// tag=1067
//  QGridLayout::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QGridLayout__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                          void *event_);

// tag=1067
//  QGridLayout::expandingDirections() const
QtDartBindings_EXPORT int c_QGridLayout__expandingDirections(void *thisObj);

// tag=1067
//  QGridLayout::geometry() const
QtDartBindings_EXPORT void *c_QGridLayout__geometry(void *thisObj);

// tag=1067
//  QGridLayout::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QGridLayout__hasHeightForWidth(void *thisObj);

// tag=1067
//  QGridLayout::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QGridLayout__heightForWidth_int(void *thisObj,
                                                            int arg__1);

// tag=1067
//  QGridLayout::horizontalSpacing() const
QtDartBindings_EXPORT int c_QGridLayout__horizontalSpacing(void *thisObj);

// tag=1067
//  QGridLayout::indexOf(const QLayoutItem * arg__1) const
QtDartBindings_EXPORT int c_QGridLayout__indexOf_QLayoutItem(void *thisObj,
                                                             void *arg__1_);

// tag=1067
//  QGridLayout::indexOf(const QWidget * arg__1) const
QtDartBindings_EXPORT int c_QGridLayout__indexOf_QWidget(void *thisObj,
                                                         void *arg__1_);

// tag=1067
//  QGridLayout::invalidate()
QtDartBindings_EXPORT void c_QGridLayout__invalidate(void *thisObj);

// tag=1067
//  QGridLayout::isEmpty() const
QtDartBindings_EXPORT bool c_QGridLayout__isEmpty(void *thisObj);

// tag=1067
//  QGridLayout::itemAt(int index) const
QtDartBindings_EXPORT void *c_QGridLayout__itemAt_int(void *thisObj, int index);

// tag=1067
//  QGridLayout::itemAtPosition(int row, int column) const
QtDartBindings_EXPORT void *
c_QGridLayout__itemAtPosition_int_int(void *thisObj, int row, int column);

// tag=1067
//  QGridLayout::layout()
QtDartBindings_EXPORT void *c_QGridLayout__layout(void *thisObj);

// tag=1067
//  QGridLayout::maximumSize() const
QtDartBindings_EXPORT void *c_QGridLayout__maximumSize(void *thisObj);

// tag=1067
//  QGridLayout::minimumHeightForWidth(int arg__1) const
QtDartBindings_EXPORT int
c_QGridLayout__minimumHeightForWidth_int(void *thisObj, int arg__1);

// tag=1067
//  QGridLayout::minimumSize() const
QtDartBindings_EXPORT void *c_QGridLayout__minimumSize(void *thisObj);

// tag=1067
//  QGridLayout::rowCount() const
QtDartBindings_EXPORT int c_QGridLayout__rowCount(void *thisObj);

// tag=1067
//  QGridLayout::rowMinimumHeight(int row) const
QtDartBindings_EXPORT int c_QGridLayout__rowMinimumHeight_int(void *thisObj,
                                                              int row);

// tag=1067
//  QGridLayout::rowStretch(int row) const
QtDartBindings_EXPORT int c_QGridLayout__rowStretch_int(void *thisObj, int row);

// tag=1067
//  QGridLayout::setColumnMinimumWidth(int column, int minSize)
QtDartBindings_EXPORT void
c_QGridLayout__setColumnMinimumWidth_int_int(void *thisObj, int column,
                                             int minSize);

// tag=1067
//  QGridLayout::setColumnStretch(int column, int stretch)
QtDartBindings_EXPORT void
c_QGridLayout__setColumnStretch_int_int(void *thisObj, int column, int stretch);

// tag=1067
//  QGridLayout::setDefaultPositioning(int n, Qt::Orientation orient)
QtDartBindings_EXPORT void
c_QGridLayout__setDefaultPositioning_int_Orientation(void *thisObj, int n,
                                                     int orient);

// tag=1067
//  QGridLayout::setGeometry(const QRect & arg__1)
QtDartBindings_EXPORT void c_QGridLayout__setGeometry_QRect(void *thisObj,
                                                            void *arg__1_);

// tag=1067
//  QGridLayout::setHorizontalSpacing(int spacing)
QtDartBindings_EXPORT void
c_QGridLayout__setHorizontalSpacing_int(void *thisObj, int spacing);

// tag=1067
//  QGridLayout::setRowMinimumHeight(int row, int minSize)
QtDartBindings_EXPORT void
c_QGridLayout__setRowMinimumHeight_int_int(void *thisObj, int row, int minSize);

// tag=1067
//  QGridLayout::setRowStretch(int row, int stretch)
QtDartBindings_EXPORT void
c_QGridLayout__setRowStretch_int_int(void *thisObj, int row, int stretch);

// tag=1067
//  QGridLayout::setSpacing(int spacing)
QtDartBindings_EXPORT void c_QGridLayout__setSpacing_int(void *thisObj,
                                                         int spacing);

// tag=1067
//  QGridLayout::setVerticalSpacing(int spacing)
QtDartBindings_EXPORT void c_QGridLayout__setVerticalSpacing_int(void *thisObj,
                                                                 int spacing);

// tag=1067
//  QGridLayout::sizeHint() const
QtDartBindings_EXPORT void *c_QGridLayout__sizeHint(void *thisObj);

// tag=1067
//  QGridLayout::spacing() const
QtDartBindings_EXPORT int c_QGridLayout__spacing(void *thisObj);

// tag=1067
//  QGridLayout::takeAt(int index)
QtDartBindings_EXPORT void *c_QGridLayout__takeAt_int(void *thisObj, int index);

// tag=1067
//  QGridLayout::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QGridLayout__tr_char_char_int(const char *s, const char *c, int n);

// tag=1067
//  QGridLayout::verticalSpacing() const
QtDartBindings_EXPORT int c_QGridLayout__verticalSpacing(void *thisObj);

// tag=1067
//  QGridLayout::widget() const
QtDartBindings_EXPORT void *c_QGridLayout__widget(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QGridLayout__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QGridLayout__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QGridLayout_Finalizer(void *, void *cppObj,
                                                   void *);
}
