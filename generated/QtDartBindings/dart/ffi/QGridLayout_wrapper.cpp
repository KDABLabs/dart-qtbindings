#include "QGridLayout_wrapper.h"

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
QGridLayout_wrapper::QGridLayout_wrapper(QWidget *parent)
    : ::QGridLayout(parent) {}
void QGridLayout_wrapper::addItem(QLayoutItem *arg__1) {
  // tag=1000
  if (m_addItemCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_addItemCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QGridLayout::addItem(arg__1);
  }
}
// tag=1009
void QGridLayout_wrapper::addItem_nocallback(QLayoutItem *arg__1) {
  // tag=1003
  ::QGridLayout::addItem(arg__1);
}
void QGridLayout_wrapper::addItem(QLayoutItem *item, int row, int column,
                                  int rowSpan, int columnSpan) {
  // tag=1000

  // tag=1004
  ::QGridLayout::addItem(item, row, column, rowSpan, columnSpan);
}
void QGridLayout_wrapper::addLayout(QLayout *arg__1, int row, int column) {
  // tag=1000

  // tag=1004
  ::QGridLayout::addLayout(arg__1, row, column);
}
void QGridLayout_wrapper::addLayout(QLayout *arg__1, int row, int column,
                                    int rowSpan, int columnSpan) {
  // tag=1000

  // tag=1004
  ::QGridLayout::addLayout(arg__1, row, column, rowSpan, columnSpan);
}
void QGridLayout_wrapper::addWidget(QWidget *arg__1, int row, int column) {
  // tag=1000

  // tag=1004
  ::QGridLayout::addWidget(arg__1, row, column);
}
void QGridLayout_wrapper::addWidget(QWidget *arg__1, int row, int column,
                                    int rowSpan, int columnSpan) {
  // tag=1000

  // tag=1004
  ::QGridLayout::addWidget(arg__1, row, column, rowSpan, columnSpan);
}
void QGridLayout_wrapper::addWidget(QWidget *w) {
  // tag=1000

  // tag=1004
  ::QGridLayout::addWidget(w);
}
QRect QGridLayout_wrapper::cellRect(int row, int column) const {
  // tag=1000

  // tag=1004
  return ::QGridLayout::cellRect(row, column);
}
int QGridLayout_wrapper::columnCount() const {
  // tag=1000

  // tag=1004
  return ::QGridLayout::columnCount();
}
int QGridLayout_wrapper::columnMinimumWidth(int column) const {
  // tag=1000

  // tag=1004
  return ::QGridLayout::columnMinimumWidth(column);
}
int QGridLayout_wrapper::columnStretch(int column) const {
  // tag=1000

  // tag=1004
  return ::QGridLayout::columnStretch(column);
}
int QGridLayout_wrapper::count() const {
  // tag=1000
  if (m_countCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_countCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QGridLayout::count();
  }
}
// tag=1009
int QGridLayout_wrapper::count_nocallback() const {
  // tag=1003
  return ::QGridLayout::count();
}
void QGridLayout_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QGridLayout::customEvent(event);
  }
}
// tag=1009
void QGridLayout_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QGridLayout::customEvent(event);
}
bool QGridLayout_wrapper::event(QEvent *event) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    return ::QGridLayout::event(event);
  }
}
// tag=1009
bool QGridLayout_wrapper::event_nocallback(QEvent *event) {
  // tag=1003
  return ::QGridLayout::event(event);
}
bool QGridLayout_wrapper::eventFilter(QObject *watched, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    // tag=1002
    return ::QGridLayout::eventFilter(watched, event);
  }
}
// tag=1009
bool QGridLayout_wrapper::eventFilter_nocallback(QObject *watched,
                                                 QEvent *event) {
  // tag=1003
  return ::QGridLayout::eventFilter(watched, event);
}
QFlags<Qt::Orientation> QGridLayout_wrapper::expandingDirections() const {
  // tag=1000
  if (m_expandingDirectionsCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_expandingDirectionsCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QGridLayout::expandingDirections();
  }
}
// tag=1009
QFlags<Qt::Orientation>
QGridLayout_wrapper::expandingDirections_nocallback() const {
  // tag=1003
  return ::QGridLayout::expandingDirections();
}
QRect QGridLayout_wrapper::geometry() const {
  // tag=1000
  if (m_geometryCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_geometryCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QGridLayout::geometry();
  }
}
// tag=1009
QRect QGridLayout_wrapper::geometry_nocallback() const {
  // tag=1003
  return ::QGridLayout::geometry();
}
bool QGridLayout_wrapper::hasHeightForWidth() const {
  // tag=1000
  if (m_hasHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QGridLayout::hasHeightForWidth();
  }
}
// tag=1009
bool QGridLayout_wrapper::hasHeightForWidth_nocallback() const {
  // tag=1003
  return ::QGridLayout::hasHeightForWidth();
}
int QGridLayout_wrapper::heightForWidth(int arg__1) const {
  // tag=1000
  if (m_heightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QGridLayout::heightForWidth(arg__1);
  }
}
// tag=1009
int QGridLayout_wrapper::heightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QGridLayout::heightForWidth(arg__1);
}
int QGridLayout_wrapper::horizontalSpacing() const {
  // tag=1000

  // tag=1004
  return ::QGridLayout::horizontalSpacing();
}
int QGridLayout_wrapper::indexOf(const QLayoutItem *arg__1) const {
  // tag=1000
  if (m_indexOfCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_indexOfCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QGridLayout::indexOf(arg__1);
  }
}
// tag=1009
int QGridLayout_wrapper::indexOf_nocallback(const QLayoutItem *arg__1) const {
  // tag=1003
  return ::QGridLayout::indexOf(arg__1);
}
int QGridLayout_wrapper::indexOf(const QWidget *arg__1) const {
  // tag=1000
  if (m_indexOf_2Callback) {
    // tag=1001
    const void *thisPtr = this;
    return m_indexOf_2Callback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QGridLayout::indexOf(arg__1);
  }
}
// tag=1009
int QGridLayout_wrapper::indexOf_nocallback(const QWidget *arg__1) const {
  // tag=1003
  return ::QGridLayout::indexOf(arg__1);
}
void QGridLayout_wrapper::invalidate() {
  // tag=1000
  if (m_invalidateCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_invalidateCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QGridLayout::invalidate();
  }
}
// tag=1009
void QGridLayout_wrapper::invalidate_nocallback() {
  // tag=1003
  ::QGridLayout::invalidate();
}
bool QGridLayout_wrapper::isEmpty() const {
  // tag=1000
  if (m_isEmptyCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_isEmptyCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QGridLayout::isEmpty();
  }
}
// tag=1009
bool QGridLayout_wrapper::isEmpty_nocallback() const {
  // tag=1003
  return ::QGridLayout::isEmpty();
}
QLayoutItem *QGridLayout_wrapper::itemAt(int index) const {
  // tag=1000
  if (m_itemAtCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_itemAtCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1002
    return ::QGridLayout::itemAt(index);
  }
}
// tag=1009
QLayoutItem *QGridLayout_wrapper::itemAt_nocallback(int index) const {
  // tag=1003
  return ::QGridLayout::itemAt(index);
}
QLayoutItem *QGridLayout_wrapper::itemAtPosition(int row, int column) const {
  // tag=1000

  // tag=1004
  return ::QGridLayout::itemAtPosition(row, column);
}
QLayout *QGridLayout_wrapper::layout() {
  // tag=1000
  if (m_layoutCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_layoutCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QGridLayout::layout();
  }
}
// tag=1009
QLayout *QGridLayout_wrapper::layout_nocallback() {
  // tag=1003
  return ::QGridLayout::layout();
}
QSize QGridLayout_wrapper::maximumSize() const {
  // tag=1000
  if (m_maximumSizeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_maximumSizeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QGridLayout::maximumSize();
  }
}
// tag=1009
QSize QGridLayout_wrapper::maximumSize_nocallback() const {
  // tag=1003
  return ::QGridLayout::maximumSize();
}
int QGridLayout_wrapper::minimumHeightForWidth(int arg__1) const {
  // tag=1000
  if (m_minimumHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_minimumHeightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QGridLayout::minimumHeightForWidth(arg__1);
  }
}
// tag=1009
int QGridLayout_wrapper::minimumHeightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QGridLayout::minimumHeightForWidth(arg__1);
}
QSize QGridLayout_wrapper::minimumSize() const {
  // tag=1000
  if (m_minimumSizeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_minimumSizeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QGridLayout::minimumSize();
  }
}
// tag=1009
QSize QGridLayout_wrapper::minimumSize_nocallback() const {
  // tag=1003
  return ::QGridLayout::minimumSize();
}
int QGridLayout_wrapper::rowCount() const {
  // tag=1000

  // tag=1004
  return ::QGridLayout::rowCount();
}
int QGridLayout_wrapper::rowMinimumHeight(int row) const {
  // tag=1000

  // tag=1004
  return ::QGridLayout::rowMinimumHeight(row);
}
int QGridLayout_wrapper::rowStretch(int row) const {
  // tag=1000

  // tag=1004
  return ::QGridLayout::rowStretch(row);
}
void QGridLayout_wrapper::setColumnMinimumWidth(int column, int minSize) {
  // tag=1000

  // tag=1004
  ::QGridLayout::setColumnMinimumWidth(column, minSize);
}
void QGridLayout_wrapper::setColumnStretch(int column, int stretch) {
  // tag=1000

  // tag=1004
  ::QGridLayout::setColumnStretch(column, stretch);
}
void QGridLayout_wrapper::setDefaultPositioning(int n, Qt::Orientation orient) {
  // tag=1000

  // tag=1004
  ::QGridLayout::setDefaultPositioning(n, orient);
}
void QGridLayout_wrapper::setGeometry(const QRect &arg__1) {
  // tag=1000
  if (m_setGeometryCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setGeometryCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QGridLayout::setGeometry(arg__1);
  }
}
// tag=1009
void QGridLayout_wrapper::setGeometry_nocallback(const QRect &arg__1) {
  // tag=1003
  ::QGridLayout::setGeometry(arg__1);
}
void QGridLayout_wrapper::setHorizontalSpacing(int spacing) {
  // tag=1000

  // tag=1004
  ::QGridLayout::setHorizontalSpacing(spacing);
}
void QGridLayout_wrapper::setRowMinimumHeight(int row, int minSize) {
  // tag=1000

  // tag=1004
  ::QGridLayout::setRowMinimumHeight(row, minSize);
}
void QGridLayout_wrapper::setRowStretch(int row, int stretch) {
  // tag=1000

  // tag=1004
  ::QGridLayout::setRowStretch(row, stretch);
}
void QGridLayout_wrapper::setSpacing(int spacing) {
  // tag=1000
  if (m_setSpacingCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setSpacingCallback(const_cast<void *>(thisPtr), spacing);
  } else {
    // tag=1002
    ::QGridLayout::setSpacing(spacing);
  }
}
// tag=1009
void QGridLayout_wrapper::setSpacing_nocallback(int spacing) {
  // tag=1003
  ::QGridLayout::setSpacing(spacing);
}
void QGridLayout_wrapper::setVerticalSpacing(int spacing) {
  // tag=1000

  // tag=1004
  ::QGridLayout::setVerticalSpacing(spacing);
}
QSize QGridLayout_wrapper::sizeHint() const {
  // tag=1000
  if (m_sizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QGridLayout::sizeHint();
  }
}
// tag=1009
QSize QGridLayout_wrapper::sizeHint_nocallback() const {
  // tag=1003
  return ::QGridLayout::sizeHint();
}
int QGridLayout_wrapper::spacing() const {
  // tag=1000
  if (m_spacingCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_spacingCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QGridLayout::spacing();
  }
}
// tag=1009
int QGridLayout_wrapper::spacing_nocallback() const {
  // tag=1003
  return ::QGridLayout::spacing();
}
QLayoutItem *QGridLayout_wrapper::takeAt(int index) {
  // tag=1000
  if (m_takeAtCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_takeAtCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1002
    return ::QGridLayout::takeAt(index);
  }
}
// tag=1009
QLayoutItem *QGridLayout_wrapper::takeAt_nocallback(int index) {
  // tag=1003
  return ::QGridLayout::takeAt(index);
}
QString QGridLayout_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QGridLayout::tr(s, c, n);
}
int QGridLayout_wrapper::verticalSpacing() const {
  // tag=1000

  // tag=1004
  return ::QGridLayout::verticalSpacing();
}
QWidget *QGridLayout_wrapper::widget() const {
  // tag=1000
  if (m_widgetCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_widgetCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QGridLayout::widget();
  }
}
// tag=1009
QWidget *QGridLayout_wrapper::widget_nocallback() const {
  // tag=1003
  return ::QGridLayout::widget();
}

// tag=1005
QGridLayout_wrapper::~QGridLayout_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QGridLayout *fromPtr(void *ptr) {
  return reinterpret_cast<QGridLayout *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QGridLayout_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
      ptr);
}
extern "C" {

// tag=1049
void c_QGridLayout_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
      cppObj);
}
void *c_QGridLayout__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QGridLayout_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// addItem(QLayoutItem * arg__1)
void c_QGridLayout__addItem_QLayoutItem(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QLayoutItem *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->addItem_nocallback(arg__1);
}

// tag=1050
// addItem(QLayoutItem * item, int row, int column, int rowSpan, int columnSpan)
void c_QGridLayout__addItemToGrid_QLayoutItem_int_int_int_int(
    void *thisObj, void *item_, int row, int column, int rowSpan,
    int columnSpan) {
  auto item = reinterpret_cast<QLayoutItem *>(item_);
  // tag=1010
  fromPtr(thisObj)->addItem(item, row, column, rowSpan, columnSpan);
}

// tag=1050
// addLayout(QLayout * arg__1, int row, int column)
void c_QGridLayout__addLayout_QLayout_int_int(void *thisObj, void *arg__1_,
                                              int row, int column) {
  auto arg__1 = reinterpret_cast<QLayout *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->addLayout(arg__1, row, column);
}

// tag=1050
// addLayout(QLayout * arg__1, int row, int column, int rowSpan, int columnSpan)
void c_QGridLayout__addLayout_QLayout_int_int_int_int(void *thisObj,
                                                      void *arg__1_, int row,
                                                      int column, int rowSpan,
                                                      int columnSpan) {
  auto arg__1 = reinterpret_cast<QLayout *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->addLayout(arg__1, row, column, rowSpan, columnSpan);
}

// tag=1050
// addWidget(QWidget * arg__1, int row, int column)
void c_QGridLayout__addWidgetToGrid_QWidget_int_int(void *thisObj,
                                                    void *arg__1_, int row,
                                                    int column) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->addWidget(arg__1, row, column);
}

// tag=1050
// addWidget(QWidget * arg__1, int row, int column, int rowSpan, int columnSpan)
void c_QGridLayout__addWidgetToGrid_QWidget_int_int_int_int(void *thisObj,
                                                            void *arg__1_,
                                                            int row, int column,
                                                            int rowSpan,
                                                            int columnSpan) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->addWidget(arg__1, row, column, rowSpan, columnSpan);
}

// tag=1050
// addWidget(QWidget * w)
void c_QGridLayout__addWidget_QWidget(void *thisObj, void *w_) {
  auto w = reinterpret_cast<QWidget *>(w_);
  // tag=1010
  fromPtr(thisObj)->addWidget(w);
}

// tag=1050
// cellRect(int row, int column) const
void *c_QGridLayout__cellRect_int_int(void *thisObj, int row, int column) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{
          fromPtr(thisObj)->cellRect(row, column)};
}

// tag=1050
// columnCount() const
int c_QGridLayout__columnCount(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->columnCount();
}

// tag=1050
// columnMinimumWidth(int column) const
int c_QGridLayout__columnMinimumWidth_int(void *thisObj, int column) {
  return
      // tag=1010
      fromPtr(thisObj)->columnMinimumWidth(column);
}

// tag=1050
// columnStretch(int column) const
int c_QGridLayout__columnStretch_int(void *thisObj, int column) {
  return
      // tag=1010
      fromPtr(thisObj)->columnStretch(column);
}

// tag=1050
// count() const
int c_QGridLayout__count(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
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
void c_QGridLayout__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// event(QEvent * event)
bool c_QGridLayout__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
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
bool c_QGridLayout__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                               void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
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
int c_QGridLayout__expandingDirections(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
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
void *c_QGridLayout__geometry(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
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
bool c_QGridLayout__hasHeightForWidth(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->hasHeightForWidth_nocallback();
        } else {
          return targetPtr->hasHeightForWidth();
        }
      }();
}

// tag=1050
// heightForWidth(int arg__1) const
int c_QGridLayout__heightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->heightForWidth_nocallback(arg__1);
        } else {
          return targetPtr->heightForWidth(arg__1);
        }
      }();
}

// tag=1050
// horizontalSpacing() const
int c_QGridLayout__horizontalSpacing(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->horizontalSpacing();
}

// tag=1050
// indexOf(const QLayoutItem * arg__1) const
int c_QGridLayout__indexOf_QLayoutItem(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QLayoutItem *>(arg__1_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
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
int c_QGridLayout__indexOf_QWidget(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->indexOf_nocallback(arg__1);
        } else {
          return targetPtr->indexOf(arg__1);
        }
      }();
}

// tag=1050
// invalidate()
void c_QGridLayout__invalidate(void *thisObj) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
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
bool c_QGridLayout__isEmpty(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
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
void *c_QGridLayout__itemAt_int(void *thisObj, int index) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->itemAt_nocallback(index);
        } else {
          return targetPtr->itemAt(index);
        }
      }();
}

// tag=1050
// itemAtPosition(int row, int column) const
void *c_QGridLayout__itemAtPosition_int_int(void *thisObj, int row,
                                            int column) {
  return
      // tag=1010
      fromPtr(thisObj)->itemAtPosition(row, column);
}

// tag=1050
// layout()
void *c_QGridLayout__layout(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
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
void *c_QGridLayout__maximumSize(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
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
int c_QGridLayout__minimumHeightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
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
void *c_QGridLayout__minimumSize(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->minimumSize_nocallback();
        } else {
          return targetPtr->minimumSize();
        }
      }()};
}

// tag=1050
// rowCount() const
int c_QGridLayout__rowCount(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->rowCount();
}

// tag=1050
// rowMinimumHeight(int row) const
int c_QGridLayout__rowMinimumHeight_int(void *thisObj, int row) {
  return
      // tag=1010
      fromPtr(thisObj)->rowMinimumHeight(row);
}

// tag=1050
// rowStretch(int row) const
int c_QGridLayout__rowStretch_int(void *thisObj, int row) {
  return
      // tag=1010
      fromPtr(thisObj)->rowStretch(row);
}

// tag=1050
// setColumnMinimumWidth(int column, int minSize)
void c_QGridLayout__setColumnMinimumWidth_int_int(void *thisObj, int column,
                                                  int minSize) {
  // tag=1010
  fromPtr(thisObj)->setColumnMinimumWidth(column, minSize);
}

// tag=1050
// setColumnStretch(int column, int stretch)
void c_QGridLayout__setColumnStretch_int_int(void *thisObj, int column,
                                             int stretch) {
  // tag=1010
  fromPtr(thisObj)->setColumnStretch(column, stretch);
}

// tag=1050
// setDefaultPositioning(int n, Qt::Orientation orient)
void c_QGridLayout__setDefaultPositioning_int_Orientation(void *thisObj, int n,
                                                          int orient) {
  // tag=1010
  fromPtr(thisObj)->setDefaultPositioning(n,
                                          static_cast<Qt::Orientation>(orient));
}

// tag=1050
// setGeometry(const QRect & arg__1)
void c_QGridLayout__setGeometry_QRect(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setGeometry_nocallback(arg__1);
    } else {
      return targetPtr->setGeometry(arg__1);
    }
  }();
}

// tag=1050
// setHorizontalSpacing(int spacing)
void c_QGridLayout__setHorizontalSpacing_int(void *thisObj, int spacing) {
  // tag=1010
  fromPtr(thisObj)->setHorizontalSpacing(spacing);
}

// tag=1050
// setRowMinimumHeight(int row, int minSize)
void c_QGridLayout__setRowMinimumHeight_int_int(void *thisObj, int row,
                                                int minSize) {
  // tag=1010
  fromPtr(thisObj)->setRowMinimumHeight(row, minSize);
}

// tag=1050
// setRowStretch(int row, int stretch)
void c_QGridLayout__setRowStretch_int_int(void *thisObj, int row, int stretch) {
  // tag=1010
  fromPtr(thisObj)->setRowStretch(row, stretch);
}

// tag=1050
// setSpacing(int spacing)
void c_QGridLayout__setSpacing_int(void *thisObj, int spacing) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setSpacing_nocallback(spacing);
    } else {
      return targetPtr->setSpacing(spacing);
    }
  }();
}

// tag=1050
// setVerticalSpacing(int spacing)
void c_QGridLayout__setVerticalSpacing_int(void *thisObj, int spacing) {
  // tag=1010
  fromPtr(thisObj)->setVerticalSpacing(spacing);
}

// tag=1050
// sizeHint() const
void *c_QGridLayout__sizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
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
int c_QGridLayout__spacing(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
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
void *c_QGridLayout__takeAt_int(void *thisObj, int index) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
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
void *c_static_QGridLayout__tr_char_char_int(const char *s, const char *c,
                                             int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QGridLayout_wrapper::tr(s, c, n)};
}

// tag=1050
// verticalSpacing() const
int c_QGridLayout__verticalSpacing(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->verticalSpacing();
}

// tag=1050
// widget() const
void *c_QGridLayout__widget(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->widget_nocallback();
        } else {
          return targetPtr->widget();
        }
      }();
}
void c_QGridLayout__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QGridLayout__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 3180:
    wrapper->m_addItemCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_addItem>(
        callback);
    break;
  case 3188:
    wrapper->m_countCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_count>(
        callback);
    break;
  case 944:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_customEvent>(
        callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_event>(
        callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 3162:
    wrapper->m_expandingDirectionsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper::
                             Callback_expandingDirections>(callback);
    break;
  case 3163:
    wrapper->m_geometryCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_geometry>(
        callback);
    break;
  case 3164:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 3165:
    wrapper->m_heightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper::
                             Callback_heightForWidth>(callback);
    break;
  case 3198:
    wrapper->m_indexOfCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_indexOf>(
        callback);
    break;
  case 3199:
    wrapper->m_indexOf_2Callback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_indexOf_2>(
        callback);
    break;
  case 3166:
    wrapper->m_invalidateCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_invalidate>(
        callback);
    break;
  case 3167:
    wrapper->m_isEmptyCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_isEmpty>(
        callback);
    break;
  case 3205:
    wrapper->m_itemAtCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_itemAt>(
        callback);
    break;
  case 3168:
    wrapper->m_layoutCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_layout>(
        callback);
    break;
  case 3169:
    wrapper->m_maximumSizeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_maximumSize>(
        callback);
    break;
  case 3170:
    wrapper->m_minimumHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QGridLayout_wrapper::
                             Callback_minimumHeightForWidth>(callback);
    break;
  case 3171:
    wrapper->m_minimumSizeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_minimumSize>(
        callback);
    break;
  case 3172:
    wrapper->m_setGeometryCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_setGeometry>(
        callback);
    break;
  case 3224:
    wrapper->m_setSpacingCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_setSpacing>(
        callback);
    break;
  case 3173:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_sizeHint>(
        callback);
    break;
  case 3226:
    wrapper->m_spacingCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_spacing>(
        callback);
    break;
  case 3228:
    wrapper->m_takeAtCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_takeAt>(
        callback);
    break;
  case 3174:
    wrapper->m_widgetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QGridLayout_wrapper::Callback_widget>(
        callback);
    break;
  }
}
}
