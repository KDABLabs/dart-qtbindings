#include "QFormLayout_wrapper.h"

#include <QDebug>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
// tag=1006
QFormLayout_wrapper::QFormLayout_wrapper(QWidget *parent)
    : ::QFormLayout(parent) {}
void QFormLayout_wrapper::addItem(QLayoutItem *item) {
  // tag=1000
  if (m_addItemCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_addItemCallback(const_cast<void *>(thisPtr), item);
  } else {
    // tag=1002
    ::QFormLayout::addItem(item);
  }
}
// tag=1009
void QFormLayout_wrapper::addItem_nocallback(QLayoutItem *item) {
  // tag=1003
  ::QFormLayout::addItem(item);
}
void QFormLayout_wrapper::addRow(QLayout *layout) {
  // tag=1000

  // tag=1004
  ::QFormLayout::addRow(layout);
}
void QFormLayout_wrapper::addRow(QWidget *label, QLayout *field) {
  // tag=1000

  // tag=1004
  ::QFormLayout::addRow(label, field);
}
void QFormLayout_wrapper::addRow(QWidget *label, QWidget *field) {
  // tag=1000

  // tag=1004
  ::QFormLayout::addRow(label, field);
}
void QFormLayout_wrapper::addRow(QWidget *widget) {
  // tag=1000

  // tag=1004
  ::QFormLayout::addRow(widget);
}
void QFormLayout_wrapper::addRow(const QString &labelText, QLayout *field) {
  // tag=1000

  // tag=1004
  ::QFormLayout::addRow(labelText, field);
}
void QFormLayout_wrapper::addRow(const QString &labelText, QWidget *field) {
  // tag=1000

  // tag=1004
  ::QFormLayout::addRow(labelText, field);
}
int QFormLayout_wrapper::count() const {
  // tag=1000
  if (m_countCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_countCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QFormLayout::count();
  }
}
// tag=1009
int QFormLayout_wrapper::count_nocallback() const {
  // tag=1003
  return ::QFormLayout::count();
}
void QFormLayout_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QFormLayout::customEvent(event);
  }
}
// tag=1009
void QFormLayout_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QFormLayout::customEvent(event);
}
bool QFormLayout_wrapper::event(QEvent *event) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    return ::QFormLayout::event(event);
  }
}
// tag=1009
bool QFormLayout_wrapper::event_nocallback(QEvent *event) {
  // tag=1003
  return ::QFormLayout::event(event);
}
bool QFormLayout_wrapper::eventFilter(QObject *watched, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    // tag=1002
    return ::QFormLayout::eventFilter(watched, event);
  }
}
// tag=1009
bool QFormLayout_wrapper::eventFilter_nocallback(QObject *watched,
                                                 QEvent *event) {
  // tag=1003
  return ::QFormLayout::eventFilter(watched, event);
}
QFlags<Qt::Orientation> QFormLayout_wrapper::expandingDirections() const {
  // tag=1000
  if (m_expandingDirectionsCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_expandingDirectionsCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QFormLayout::expandingDirections();
  }
}
// tag=1009
QFlags<Qt::Orientation>
QFormLayout_wrapper::expandingDirections_nocallback() const {
  // tag=1003
  return ::QFormLayout::expandingDirections();
}
QRect QFormLayout_wrapper::geometry() const {
  // tag=1000
  if (m_geometryCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_geometryCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QFormLayout::geometry();
  }
}
// tag=1009
QRect QFormLayout_wrapper::geometry_nocallback() const {
  // tag=1003
  return ::QFormLayout::geometry();
}
bool QFormLayout_wrapper::hasHeightForWidth() const {
  // tag=1000
  if (m_hasHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QFormLayout::hasHeightForWidth();
  }
}
// tag=1009
bool QFormLayout_wrapper::hasHeightForWidth_nocallback() const {
  // tag=1003
  return ::QFormLayout::hasHeightForWidth();
}
int QFormLayout_wrapper::heightForWidth(int width) const {
  // tag=1000
  if (m_heightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), width);
  } else {
    // tag=1002
    return ::QFormLayout::heightForWidth(width);
  }
}
// tag=1009
int QFormLayout_wrapper::heightForWidth_nocallback(int width) const {
  // tag=1003
  return ::QFormLayout::heightForWidth(width);
}
int QFormLayout_wrapper::horizontalSpacing() const {
  // tag=1000

  // tag=1004
  return ::QFormLayout::horizontalSpacing();
}
int QFormLayout_wrapper::indexOf(const QLayoutItem *arg__1) const {
  // tag=1000
  if (m_indexOfCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_indexOfCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QFormLayout::indexOf(arg__1);
  }
}
// tag=1009
int QFormLayout_wrapper::indexOf_nocallback(const QLayoutItem *arg__1) const {
  // tag=1003
  return ::QFormLayout::indexOf(arg__1);
}
int QFormLayout_wrapper::indexOf(const QWidget *arg__1) const {
  // tag=1000
  if (m_indexOf_2Callback) {
    // tag=1001
    const void *thisPtr = this;
    return m_indexOf_2Callback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QFormLayout::indexOf(arg__1);
  }
}
// tag=1009
int QFormLayout_wrapper::indexOf_nocallback(const QWidget *arg__1) const {
  // tag=1003
  return ::QFormLayout::indexOf(arg__1);
}
void QFormLayout_wrapper::insertRow(int row, QLayout *layout) {
  // tag=1000

  // tag=1004
  ::QFormLayout::insertRow(row, layout);
}
void QFormLayout_wrapper::insertRow(int row, QWidget *label, QLayout *field) {
  // tag=1000

  // tag=1004
  ::QFormLayout::insertRow(row, label, field);
}
void QFormLayout_wrapper::insertRow(int row, QWidget *label, QWidget *field) {
  // tag=1000

  // tag=1004
  ::QFormLayout::insertRow(row, label, field);
}
void QFormLayout_wrapper::insertRow(int row, QWidget *widget) {
  // tag=1000

  // tag=1004
  ::QFormLayout::insertRow(row, widget);
}
void QFormLayout_wrapper::insertRow(int row, const QString &labelText,
                                    QLayout *field) {
  // tag=1000

  // tag=1004
  ::QFormLayout::insertRow(row, labelText, field);
}
void QFormLayout_wrapper::insertRow(int row, const QString &labelText,
                                    QWidget *field) {
  // tag=1000

  // tag=1004
  ::QFormLayout::insertRow(row, labelText, field);
}
void QFormLayout_wrapper::invalidate() {
  // tag=1000
  if (m_invalidateCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_invalidateCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QFormLayout::invalidate();
  }
}
// tag=1009
void QFormLayout_wrapper::invalidate_nocallback() {
  // tag=1003
  ::QFormLayout::invalidate();
}
bool QFormLayout_wrapper::isEmpty() const {
  // tag=1000
  if (m_isEmptyCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_isEmptyCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QFormLayout::isEmpty();
  }
}
// tag=1009
bool QFormLayout_wrapper::isEmpty_nocallback() const {
  // tag=1003
  return ::QFormLayout::isEmpty();
}
QLayoutItem *QFormLayout_wrapper::itemAt(int index) const {
  // tag=1000
  if (m_itemAtCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_itemAtCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1002
    return ::QFormLayout::itemAt(index);
  }
}
// tag=1009
QLayoutItem *QFormLayout_wrapper::itemAt_nocallback(int index) const {
  // tag=1003
  return ::QFormLayout::itemAt(index);
}
QWidget *QFormLayout_wrapper::labelForField(QLayout *field) const {
  // tag=1000

  // tag=1004
  return ::QFormLayout::labelForField(field);
}
QWidget *QFormLayout_wrapper::labelForField(QWidget *field) const {
  // tag=1000

  // tag=1004
  return ::QFormLayout::labelForField(field);
}
QLayout *QFormLayout_wrapper::layout() {
  // tag=1000
  if (m_layoutCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_layoutCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QFormLayout::layout();
  }
}
// tag=1009
QLayout *QFormLayout_wrapper::layout_nocallback() {
  // tag=1003
  return ::QFormLayout::layout();
}
QSize QFormLayout_wrapper::maximumSize() const {
  // tag=1000
  if (m_maximumSizeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_maximumSizeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QFormLayout::maximumSize();
  }
}
// tag=1009
QSize QFormLayout_wrapper::maximumSize_nocallback() const {
  // tag=1003
  return ::QFormLayout::maximumSize();
}
int QFormLayout_wrapper::minimumHeightForWidth(int arg__1) const {
  // tag=1000
  if (m_minimumHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_minimumHeightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QFormLayout::minimumHeightForWidth(arg__1);
  }
}
// tag=1009
int QFormLayout_wrapper::minimumHeightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QFormLayout::minimumHeightForWidth(arg__1);
}
QSize QFormLayout_wrapper::minimumSize() const {
  // tag=1000
  if (m_minimumSizeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_minimumSizeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QFormLayout::minimumSize();
  }
}
// tag=1009
QSize QFormLayout_wrapper::minimumSize_nocallback() const {
  // tag=1003
  return ::QFormLayout::minimumSize();
}
void QFormLayout_wrapper::removeRow(QLayout *layout) {
  // tag=1000

  // tag=1004
  ::QFormLayout::removeRow(layout);
}
void QFormLayout_wrapper::removeRow(QWidget *widget) {
  // tag=1000

  // tag=1004
  ::QFormLayout::removeRow(widget);
}
void QFormLayout_wrapper::removeRow(int row) {
  // tag=1000

  // tag=1004
  ::QFormLayout::removeRow(row);
}
int QFormLayout_wrapper::rowCount() const {
  // tag=1000

  // tag=1004
  return ::QFormLayout::rowCount();
}
void QFormLayout_wrapper::setGeometry(const QRect &rect) {
  // tag=1000
  if (m_setGeometryCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setGeometryCallback(const_cast<void *>(thisPtr), rect);
  } else {
    // tag=1002
    ::QFormLayout::setGeometry(rect);
  }
}
// tag=1009
void QFormLayout_wrapper::setGeometry_nocallback(const QRect &rect) {
  // tag=1003
  ::QFormLayout::setGeometry(rect);
}
void QFormLayout_wrapper::setHorizontalSpacing(int spacing) {
  // tag=1000

  // tag=1004
  ::QFormLayout::setHorizontalSpacing(spacing);
}
void QFormLayout_wrapper::setSpacing(int arg__1) {
  // tag=1000
  if (m_setSpacingCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setSpacingCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QFormLayout::setSpacing(arg__1);
  }
}
// tag=1009
void QFormLayout_wrapper::setSpacing_nocallback(int arg__1) {
  // tag=1003
  ::QFormLayout::setSpacing(arg__1);
}
void QFormLayout_wrapper::setVerticalSpacing(int spacing) {
  // tag=1000

  // tag=1004
  ::QFormLayout::setVerticalSpacing(spacing);
}
QSize QFormLayout_wrapper::sizeHint() const {
  // tag=1000
  if (m_sizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QFormLayout::sizeHint();
  }
}
// tag=1009
QSize QFormLayout_wrapper::sizeHint_nocallback() const {
  // tag=1003
  return ::QFormLayout::sizeHint();
}
int QFormLayout_wrapper::spacing() const {
  // tag=1000
  if (m_spacingCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_spacingCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QFormLayout::spacing();
  }
}
// tag=1009
int QFormLayout_wrapper::spacing_nocallback() const {
  // tag=1003
  return ::QFormLayout::spacing();
}
QLayoutItem *QFormLayout_wrapper::takeAt(int index) {
  // tag=1000
  if (m_takeAtCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_takeAtCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1002
    return ::QFormLayout::takeAt(index);
  }
}
// tag=1009
QLayoutItem *QFormLayout_wrapper::takeAt_nocallback(int index) {
  // tag=1003
  return ::QFormLayout::takeAt(index);
}
QString QFormLayout_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QFormLayout::tr(s, c, n);
}
int QFormLayout_wrapper::verticalSpacing() const {
  // tag=1000

  // tag=1004
  return ::QFormLayout::verticalSpacing();
}
QWidget *QFormLayout_wrapper::widget() const {
  // tag=1000
  if (m_widgetCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_widgetCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QFormLayout::widget();
  }
}
// tag=1009
QWidget *QFormLayout_wrapper::widget_nocallback() const {
  // tag=1003
  return ::QFormLayout::widget();
}

// tag=1005
QFormLayout_wrapper::~QFormLayout_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QFormLayout *fromPtr(void *ptr) {
  return reinterpret_cast<QFormLayout *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QFormLayout_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
      ptr);
}
extern "C" {

// tag=1049
void c_QFormLayout_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
      cppObj);
}
void *c_QFormLayout__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QFormLayout_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// addItem(QLayoutItem * item)
void c_QFormLayout__addItem_QLayoutItem(void *thisObj, void *item_) {
  auto item = reinterpret_cast<QLayoutItem *>(item_);
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->addItem_nocallback(item);
    } else {
      return targetPtr->addItem(item);
    }
  }();
}

// tag=1050
// addRow(QLayout * layout)
void c_QFormLayout__addRow_QLayout(void *thisObj, void *layout_) {
  auto layout = reinterpret_cast<QLayout *>(layout_);
  // tag=1010
  fromPtr(thisObj)->addRow(layout);
}

// tag=1050
// addRow(QWidget * label, QLayout * field)
void c_QFormLayout__addRow_QWidget_QLayout(void *thisObj, void *label_,
                                           void *field_) {
  auto label = reinterpret_cast<QWidget *>(label_);
  auto field = reinterpret_cast<QLayout *>(field_);
  // tag=1010
  fromPtr(thisObj)->addRow(label, field);
}

// tag=1050
// addRow(QWidget * label, QWidget * field)
void c_QFormLayout__addRow_QWidget_QWidget(void *thisObj, void *label_,
                                           void *field_) {
  auto label = reinterpret_cast<QWidget *>(label_);
  auto field = reinterpret_cast<QWidget *>(field_);
  // tag=1010
  fromPtr(thisObj)->addRow(label, field);
}

// tag=1050
// addRow(QWidget * widget)
void c_QFormLayout__addRow_QWidget(void *thisObj, void *widget_) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  // tag=1010
  fromPtr(thisObj)->addRow(widget);
}

// tag=1050
// addRow(const QString & labelText, QLayout * field)
void c_QFormLayout__addRow_QString_QLayout(void *thisObj,
                                           const char *labelText_,
                                           void *field_) {
  const auto labelText = QString::fromUtf8(labelText_);
  auto field = reinterpret_cast<QLayout *>(field_);
  // tag=1010
  fromPtr(thisObj)->addRow(labelText, field);
}

// tag=1050
// addRow(const QString & labelText, QWidget * field)
void c_QFormLayout__addRow_QString_QWidget(void *thisObj,
                                           const char *labelText_,
                                           void *field_) {
  const auto labelText = QString::fromUtf8(labelText_);
  auto field = reinterpret_cast<QWidget *>(field_);
  // tag=1010
  fromPtr(thisObj)->addRow(labelText, field);
}

// tag=1050
// count() const
int c_QFormLayout__count(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->count_nocallback();
        } else {
          return targetPtr->count();
        }
      }();
}

// tag=1050
// customEvent(QEvent * event)
void c_QFormLayout__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// event(QEvent * event)
bool c_QFormLayout__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->event_nocallback(event);
        } else {
          return targetPtr->event(event);
        }
      }();
}

// tag=1050
// eventFilter(QObject * watched, QEvent * event)
bool c_QFormLayout__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                               void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->eventFilter_nocallback(watched, event);
        } else {
          return targetPtr->eventFilter(watched, event);
        }
      }();
}

// tag=1050
// expandingDirections() const
int c_QFormLayout__expandingDirections(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->expandingDirections_nocallback();
        } else {
          return targetPtr->expandingDirections();
        }
      }();
}

// tag=1050
// geometry() const
void *c_QFormLayout__geometry(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->geometry_nocallback();
        } else {
          return targetPtr->geometry();
        }
      }()};
}

// tag=1050
// hasHeightForWidth() const
bool c_QFormLayout__hasHeightForWidth(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->hasHeightForWidth_nocallback();
        } else {
          return targetPtr->hasHeightForWidth();
        }
      }();
}

// tag=1050
// heightForWidth(int width) const
int c_QFormLayout__heightForWidth_int(void *thisObj, int width) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->heightForWidth_nocallback(width);
        } else {
          return targetPtr->heightForWidth(width);
        }
      }();
}

// tag=1050
// horizontalSpacing() const
int c_QFormLayout__horizontalSpacing(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->horizontalSpacing();
}

// tag=1050
// indexOf(const QLayoutItem * arg__1) const
int c_QFormLayout__indexOf_QLayoutItem(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QLayoutItem *>(arg__1_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->indexOf_nocallback(arg__1);
        } else {
          return targetPtr->indexOf(arg__1);
        }
      }();
}

// tag=1050
// indexOf(const QWidget * arg__1) const
int c_QFormLayout__indexOf_QWidget(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->indexOf_nocallback(arg__1);
        } else {
          return targetPtr->indexOf(arg__1);
        }
      }();
}

// tag=1050
// insertRow(int row, QLayout * layout)
void c_QFormLayout__insertRow_int_QLayout(void *thisObj, int row,
                                          void *layout_) {
  auto layout = reinterpret_cast<QLayout *>(layout_);
  // tag=1010
  fromPtr(thisObj)->insertRow(row, layout);
}

// tag=1050
// insertRow(int row, QWidget * label, QLayout * field)
void c_QFormLayout__insertRow_int_QWidget_QLayout(void *thisObj, int row,
                                                  void *label_, void *field_) {
  auto label = reinterpret_cast<QWidget *>(label_);
  auto field = reinterpret_cast<QLayout *>(field_);
  // tag=1010
  fromPtr(thisObj)->insertRow(row, label, field);
}

// tag=1050
// insertRow(int row, QWidget * label, QWidget * field)
void c_QFormLayout__insertRow_int_QWidget_QWidget(void *thisObj, int row,
                                                  void *label_, void *field_) {
  auto label = reinterpret_cast<QWidget *>(label_);
  auto field = reinterpret_cast<QWidget *>(field_);
  // tag=1010
  fromPtr(thisObj)->insertRow(row, label, field);
}

// tag=1050
// insertRow(int row, QWidget * widget)
void c_QFormLayout__insertRow_int_QWidget(void *thisObj, int row,
                                          void *widget_) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  // tag=1010
  fromPtr(thisObj)->insertRow(row, widget);
}

// tag=1050
// insertRow(int row, const QString & labelText, QLayout * field)
void c_QFormLayout__insertRow_int_QString_QLayout(void *thisObj, int row,
                                                  const char *labelText_,
                                                  void *field_) {
  const auto labelText = QString::fromUtf8(labelText_);
  auto field = reinterpret_cast<QLayout *>(field_);
  // tag=1010
  fromPtr(thisObj)->insertRow(row, labelText, field);
}

// tag=1050
// insertRow(int row, const QString & labelText, QWidget * field)
void c_QFormLayout__insertRow_int_QString_QWidget(void *thisObj, int row,
                                                  const char *labelText_,
                                                  void *field_) {
  const auto labelText = QString::fromUtf8(labelText_);
  auto field = reinterpret_cast<QWidget *>(field_);
  // tag=1010
  fromPtr(thisObj)->insertRow(row, labelText, field);
}

// tag=1050
// invalidate()
void c_QFormLayout__invalidate(void *thisObj) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->invalidate_nocallback();
    } else {
      return targetPtr->invalidate();
    }
  }();
}

// tag=1050
// isEmpty() const
bool c_QFormLayout__isEmpty(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->isEmpty_nocallback();
        } else {
          return targetPtr->isEmpty();
        }
      }();
}

// tag=1050
// itemAt(int index) const
void *c_QFormLayout__itemAt_int(void *thisObj, int index) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->itemAt_nocallback(index);
        } else {
          return targetPtr->itemAt(index);
        }
      }();
}

// tag=1050
// labelForField(QLayout * field) const
void *c_QFormLayout__labelForField_QLayout(void *thisObj, void *field_) {
  auto field = reinterpret_cast<QLayout *>(field_);
  return
      // tag=1010
      fromPtr(thisObj)->labelForField(field);
}

// tag=1050
// labelForField(QWidget * field) const
void *c_QFormLayout__labelForField_QWidget(void *thisObj, void *field_) {
  auto field = reinterpret_cast<QWidget *>(field_);
  return
      // tag=1010
      fromPtr(thisObj)->labelForField(field);
}

// tag=1050
// layout()
void *c_QFormLayout__layout(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->layout_nocallback();
        } else {
          return targetPtr->layout();
        }
      }();
}

// tag=1050
// maximumSize() const
void *c_QFormLayout__maximumSize(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->maximumSize_nocallback();
        } else {
          return targetPtr->maximumSize();
        }
      }()};
}

// tag=1050
// minimumHeightForWidth(int arg__1) const
int c_QFormLayout__minimumHeightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->minimumHeightForWidth_nocallback(arg__1);
        } else {
          return targetPtr->minimumHeightForWidth(arg__1);
        }
      }();
}

// tag=1050
// minimumSize() const
void *c_QFormLayout__minimumSize(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->minimumSize_nocallback();
        } else {
          return targetPtr->minimumSize();
        }
      }()};
}

// tag=1050
// removeRow(QLayout * layout)
void c_QFormLayout__removeRow_QLayout(void *thisObj, void *layout_) {
  auto layout = reinterpret_cast<QLayout *>(layout_);
  // tag=1010
  fromPtr(thisObj)->removeRow(layout);
}

// tag=1050
// removeRow(QWidget * widget)
void c_QFormLayout__removeRow_QWidget(void *thisObj, void *widget_) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  // tag=1010
  fromPtr(thisObj)->removeRow(widget);
}

// tag=1050
// removeRow(int row)
void c_QFormLayout__removeRow_int(void *thisObj, int row) {
  // tag=1010
  fromPtr(thisObj)->removeRow(row);
}

// tag=1050
// rowCount() const
int c_QFormLayout__rowCount(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->rowCount();
}

// tag=1050
// setGeometry(const QRect & rect)
void c_QFormLayout__setGeometry_QRect(void *thisObj, void *rect_) {
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setGeometry_nocallback(rect);
    } else {
      return targetPtr->setGeometry(rect);
    }
  }();
}

// tag=1050
// setHorizontalSpacing(int spacing)
void c_QFormLayout__setHorizontalSpacing_int(void *thisObj, int spacing) {
  // tag=1010
  fromPtr(thisObj)->setHorizontalSpacing(spacing);
}

// tag=1050
// setSpacing(int arg__1)
void c_QFormLayout__setSpacing_int(void *thisObj, int arg__1) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setSpacing_nocallback(arg__1);
    } else {
      return targetPtr->setSpacing(arg__1);
    }
  }();
}

// tag=1050
// setVerticalSpacing(int spacing)
void c_QFormLayout__setVerticalSpacing_int(void *thisObj, int spacing) {
  // tag=1010
  fromPtr(thisObj)->setVerticalSpacing(spacing);
}

// tag=1050
// sizeHint() const
void *c_QFormLayout__sizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->sizeHint_nocallback();
        } else {
          return targetPtr->sizeHint();
        }
      }()};
}

// tag=1050
// spacing() const
int c_QFormLayout__spacing(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->spacing_nocallback();
        } else {
          return targetPtr->spacing();
        }
      }();
}

// tag=1050
// takeAt(int index)
void *c_QFormLayout__takeAt_int(void *thisObj, int index) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->takeAt_nocallback(index);
        } else {
          return targetPtr->takeAt(index);
        }
      }();
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QFormLayout__tr_char_char_int(const char *s, const char *c,
                                             int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QFormLayout_wrapper::tr(s, c, n)};
}

// tag=1050
// verticalSpacing() const
int c_QFormLayout__verticalSpacing(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->verticalSpacing();
}

// tag=1050
// widget() const
void *c_QFormLayout__widget(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->widget_nocallback();
        } else {
          return targetPtr->widget();
        }
      }();
}
void c_QFormLayout__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QFormLayout__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 3180:
    wrapper->m_addItemCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_addItem>(
        callback);
    break;
  case 3188:
    wrapper->m_countCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_count>(
        callback);
    break;
  case 944:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_customEvent>(
        callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_event>(
        callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 3162:
    wrapper->m_expandingDirectionsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper::
                             Callback_expandingDirections>(callback);
    break;
  case 3163:
    wrapper->m_geometryCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_geometry>(
        callback);
    break;
  case 3164:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 3165:
    wrapper->m_heightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper::
                             Callback_heightForWidth>(callback);
    break;
  case 3198:
    wrapper->m_indexOfCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_indexOf>(
        callback);
    break;
  case 3199:
    wrapper->m_indexOf_2Callback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_indexOf_2>(
        callback);
    break;
  case 3166:
    wrapper->m_invalidateCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_invalidate>(
        callback);
    break;
  case 3167:
    wrapper->m_isEmptyCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_isEmpty>(
        callback);
    break;
  case 3205:
    wrapper->m_itemAtCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_itemAt>(
        callback);
    break;
  case 3168:
    wrapper->m_layoutCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_layout>(
        callback);
    break;
  case 3169:
    wrapper->m_maximumSizeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_maximumSize>(
        callback);
    break;
  case 3170:
    wrapper->m_minimumHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QFormLayout_wrapper::
                             Callback_minimumHeightForWidth>(callback);
    break;
  case 3171:
    wrapper->m_minimumSizeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_minimumSize>(
        callback);
    break;
  case 3172:
    wrapper->m_setGeometryCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_setGeometry>(
        callback);
    break;
  case 3224:
    wrapper->m_setSpacingCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_setSpacing>(
        callback);
    break;
  case 3173:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_sizeHint>(
        callback);
    break;
  case 3226:
    wrapper->m_spacingCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_spacing>(
        callback);
    break;
  case 3228:
    wrapper->m_takeAtCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_takeAt>(
        callback);
    break;
  case 3174:
    wrapper->m_widgetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFormLayout_wrapper::Callback_widget>(
        callback);
    break;
  }
}
}
