
// tag=1040
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
// tag=1017
class QFormLayout_wrapper : public ::QFormLayout {
public:
  ~QFormLayout_wrapper();
  // tag=1041
  QFormLayout_wrapper(QWidget *parent = nullptr);
  // tag=1041
  virtual void addItem(QLayoutItem *item);
  // tag=1008
  virtual void addItem_nocallback(QLayoutItem *item);
  // tag=1041
  void addRow(QLayout *layout);
  // tag=1041
  void addRow(QWidget *label, QLayout *field);
  // tag=1041
  void addRow(QWidget *label, QWidget *field);
  // tag=1041
  void addRow(QWidget *widget);
  // tag=1041
  void addRow(const QString &labelText, QLayout *field);
  // tag=1041
  void addRow(const QString &labelText, QWidget *field);
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
  virtual int heightForWidth(int width) const;
  // tag=1008
  virtual int heightForWidth_nocallback(int width) const;
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
  void insertRow(int row, QLayout *layout);
  // tag=1041
  void insertRow(int row, QWidget *label, QLayout *field);
  // tag=1041
  void insertRow(int row, QWidget *label, QWidget *field);
  // tag=1041
  void insertRow(int row, QWidget *widget);
  // tag=1041
  void insertRow(int row, const QString &labelText, QLayout *field);
  // tag=1041
  void insertRow(int row, const QString &labelText, QWidget *field);
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
  QWidget *labelForField(QLayout *field) const;
  // tag=1041
  QWidget *labelForField(QWidget *field) const;
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
  void removeRow(QLayout *layout);
  // tag=1041
  void removeRow(QWidget *widget);
  // tag=1041
  void removeRow(int row);
  // tag=1041
  int rowCount() const;
  // tag=1041
  virtual void setGeometry(const QRect &rect);
  // tag=1008
  virtual void setGeometry_nocallback(const QRect &rect);
  // tag=1041
  void setHorizontalSpacing(int spacing);
  // tag=1041
  virtual void setSpacing(int arg__1);
  // tag=1008
  virtual void setSpacing_nocallback(int arg__1);
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
  typedef void (*Callback_addItem)(void *, QLayoutItem *item);
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
  typedef int (*Callback_heightForWidth)(void *, int width);
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
  typedef void (*Callback_setGeometry)(void *, const QRect &rect);
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
//  QFormLayout::QFormLayout(QWidget * parent)
QtDartBindings_EXPORT void *c_QFormLayout__constructor_QWidget(void *parent_);

// tag=1067
//  QFormLayout::addItem(QLayoutItem * item)
QtDartBindings_EXPORT void c_QFormLayout__addItem_QLayoutItem(void *thisObj,
                                                              void *item_);

// tag=1067
//  QFormLayout::addRow(QLayout * layout)
QtDartBindings_EXPORT void c_QFormLayout__addRow_QLayout(void *thisObj,
                                                         void *layout_);

// tag=1067
//  QFormLayout::addRow(QWidget * label, QLayout * field)
QtDartBindings_EXPORT void c_QFormLayout__addRow_QWidget_QLayout(void *thisObj,
                                                                 void *label_,
                                                                 void *field_);

// tag=1067
//  QFormLayout::addRow(QWidget * label, QWidget * field)
QtDartBindings_EXPORT void c_QFormLayout__addRow_QWidget_QWidget(void *thisObj,
                                                                 void *label_,
                                                                 void *field_);

// tag=1067
//  QFormLayout::addRow(QWidget * widget)
QtDartBindings_EXPORT void c_QFormLayout__addRow_QWidget(void *thisObj,
                                                         void *widget_);

// tag=1067
//  QFormLayout::addRow(const QString & labelText, QLayout * field)
QtDartBindings_EXPORT void
c_QFormLayout__addRow_QString_QLayout(void *thisObj, const char *labelText_,
                                      void *field_);

// tag=1067
//  QFormLayout::addRow(const QString & labelText, QWidget * field)
QtDartBindings_EXPORT void
c_QFormLayout__addRow_QString_QWidget(void *thisObj, const char *labelText_,
                                      void *field_);

// tag=1067
//  QFormLayout::count() const
QtDartBindings_EXPORT int c_QFormLayout__count(void *thisObj);

// tag=1067
//  QFormLayout::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QFormLayout__customEvent_QEvent(void *thisObj,
                                                             void *event_);

// tag=1067
//  QFormLayout::event(QEvent * event)
QtDartBindings_EXPORT bool c_QFormLayout__event_QEvent(void *thisObj,
                                                       void *event_);

// tag=1067
//  QFormLayout::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QFormLayout__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                          void *event_);

// tag=1067
//  QFormLayout::expandingDirections() const
QtDartBindings_EXPORT int c_QFormLayout__expandingDirections(void *thisObj);

// tag=1067
//  QFormLayout::geometry() const
QtDartBindings_EXPORT void *c_QFormLayout__geometry(void *thisObj);

// tag=1067
//  QFormLayout::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QFormLayout__hasHeightForWidth(void *thisObj);

// tag=1067
//  QFormLayout::heightForWidth(int width) const
QtDartBindings_EXPORT int c_QFormLayout__heightForWidth_int(void *thisObj,
                                                            int width);

// tag=1067
//  QFormLayout::horizontalSpacing() const
QtDartBindings_EXPORT int c_QFormLayout__horizontalSpacing(void *thisObj);

// tag=1067
//  QFormLayout::indexOf(const QLayoutItem * arg__1) const
QtDartBindings_EXPORT int c_QFormLayout__indexOf_QLayoutItem(void *thisObj,
                                                             void *arg__1_);

// tag=1067
//  QFormLayout::indexOf(const QWidget * arg__1) const
QtDartBindings_EXPORT int c_QFormLayout__indexOf_QWidget(void *thisObj,
                                                         void *arg__1_);

// tag=1067
//  QFormLayout::insertRow(int row, QLayout * layout)
QtDartBindings_EXPORT void
c_QFormLayout__insertRow_int_QLayout(void *thisObj, int row, void *layout_);

// tag=1067
//  QFormLayout::insertRow(int row, QWidget * label, QLayout * field)
QtDartBindings_EXPORT void
c_QFormLayout__insertRow_int_QWidget_QLayout(void *thisObj, int row,
                                             void *label_, void *field_);

// tag=1067
//  QFormLayout::insertRow(int row, QWidget * label, QWidget * field)
QtDartBindings_EXPORT void
c_QFormLayout__insertRow_int_QWidget_QWidget(void *thisObj, int row,
                                             void *label_, void *field_);

// tag=1067
//  QFormLayout::insertRow(int row, QWidget * widget)
QtDartBindings_EXPORT void
c_QFormLayout__insertRow_int_QWidget(void *thisObj, int row, void *widget_);

// tag=1067
//  QFormLayout::insertRow(int row, const QString & labelText, QLayout * field)
QtDartBindings_EXPORT void c_QFormLayout__insertRow_int_QString_QLayout(
    void *thisObj, int row, const char *labelText_, void *field_);

// tag=1067
//  QFormLayout::insertRow(int row, const QString & labelText, QWidget * field)
QtDartBindings_EXPORT void c_QFormLayout__insertRow_int_QString_QWidget(
    void *thisObj, int row, const char *labelText_, void *field_);

// tag=1067
//  QFormLayout::invalidate()
QtDartBindings_EXPORT void c_QFormLayout__invalidate(void *thisObj);

// tag=1067
//  QFormLayout::isEmpty() const
QtDartBindings_EXPORT bool c_QFormLayout__isEmpty(void *thisObj);

// tag=1067
//  QFormLayout::itemAt(int index) const
QtDartBindings_EXPORT void *c_QFormLayout__itemAt_int(void *thisObj, int index);

// tag=1067
//  QFormLayout::labelForField(QLayout * field) const
QtDartBindings_EXPORT void *c_QFormLayout__labelForField_QLayout(void *thisObj,
                                                                 void *field_);

// tag=1067
//  QFormLayout::labelForField(QWidget * field) const
QtDartBindings_EXPORT void *c_QFormLayout__labelForField_QWidget(void *thisObj,
                                                                 void *field_);

// tag=1067
//  QFormLayout::layout()
QtDartBindings_EXPORT void *c_QFormLayout__layout(void *thisObj);

// tag=1067
//  QFormLayout::maximumSize() const
QtDartBindings_EXPORT void *c_QFormLayout__maximumSize(void *thisObj);

// tag=1067
//  QFormLayout::minimumHeightForWidth(int arg__1) const
QtDartBindings_EXPORT int
c_QFormLayout__minimumHeightForWidth_int(void *thisObj, int arg__1);

// tag=1067
//  QFormLayout::minimumSize() const
QtDartBindings_EXPORT void *c_QFormLayout__minimumSize(void *thisObj);

// tag=1067
//  QFormLayout::removeRow(QLayout * layout)
QtDartBindings_EXPORT void c_QFormLayout__removeRow_QLayout(void *thisObj,
                                                            void *layout_);

// tag=1067
//  QFormLayout::removeRow(QWidget * widget)
QtDartBindings_EXPORT void c_QFormLayout__removeRow_QWidget(void *thisObj,
                                                            void *widget_);

// tag=1067
//  QFormLayout::removeRow(int row)
QtDartBindings_EXPORT void c_QFormLayout__removeRow_int(void *thisObj, int row);

// tag=1067
//  QFormLayout::rowCount() const
QtDartBindings_EXPORT int c_QFormLayout__rowCount(void *thisObj);

// tag=1067
//  QFormLayout::setGeometry(const QRect & rect)
QtDartBindings_EXPORT void c_QFormLayout__setGeometry_QRect(void *thisObj,
                                                            void *rect_);

// tag=1067
//  QFormLayout::setHorizontalSpacing(int spacing)
QtDartBindings_EXPORT void
c_QFormLayout__setHorizontalSpacing_int(void *thisObj, int spacing);

// tag=1067
//  QFormLayout::setSpacing(int arg__1)
QtDartBindings_EXPORT void c_QFormLayout__setSpacing_int(void *thisObj,
                                                         int arg__1);

// tag=1067
//  QFormLayout::setVerticalSpacing(int spacing)
QtDartBindings_EXPORT void c_QFormLayout__setVerticalSpacing_int(void *thisObj,
                                                                 int spacing);

// tag=1067
//  QFormLayout::sizeHint() const
QtDartBindings_EXPORT void *c_QFormLayout__sizeHint(void *thisObj);

// tag=1067
//  QFormLayout::spacing() const
QtDartBindings_EXPORT int c_QFormLayout__spacing(void *thisObj);

// tag=1067
//  QFormLayout::takeAt(int index)
QtDartBindings_EXPORT void *c_QFormLayout__takeAt_int(void *thisObj, int index);

// tag=1067
//  QFormLayout::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QFormLayout__tr_char_char_int(const char *s, const char *c, int n);

// tag=1067
//  QFormLayout::verticalSpacing() const
QtDartBindings_EXPORT int c_QFormLayout__verticalSpacing(void *thisObj);

// tag=1067
//  QFormLayout::widget() const
QtDartBindings_EXPORT void *c_QFormLayout__widget(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QFormLayout__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QFormLayout__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QFormLayout_Finalizer(void *, void *cppObj,
                                                   void *);
}
