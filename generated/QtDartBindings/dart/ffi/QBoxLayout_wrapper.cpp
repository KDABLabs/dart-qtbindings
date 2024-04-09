#include "QBoxLayout_wrapper.h"

#include <QDebug>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
void QBoxLayout_wrapper::addItem(QLayoutItem *arg__1) {
  // tag=1000
  if (m_addItemCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_addItemCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QBoxLayout::addItem(arg__1);
  }
}
// tag=1009
void QBoxLayout_wrapper::addItem_nocallback(QLayoutItem *arg__1) {
  // tag=1003
  ::QBoxLayout::addItem(arg__1);
}
void QBoxLayout_wrapper::addLayout(QLayout *layout, int stretch) {
  // tag=1000

  // tag=1004
  ::QBoxLayout::addLayout(layout, stretch);
}
void QBoxLayout_wrapper::addSpacing(int size) {
  // tag=1000

  // tag=1004
  ::QBoxLayout::addSpacing(size);
}
void QBoxLayout_wrapper::addStretch(int stretch) {
  // tag=1000

  // tag=1004
  ::QBoxLayout::addStretch(stretch);
}
void QBoxLayout_wrapper::addStrut(int arg__1) {
  // tag=1000

  // tag=1004
  ::QBoxLayout::addStrut(arg__1);
}
void QBoxLayout_wrapper::addWidget(QWidget *arg__1, int stretch) {
  // tag=1000

  // tag=1004
  ::QBoxLayout::addWidget(arg__1, stretch);
}
int QBoxLayout_wrapper::count() const {
  // tag=1000
  if (m_countCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_countCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QBoxLayout::count();
  }
}
// tag=1009
int QBoxLayout_wrapper::count_nocallback() const {
  // tag=1003
  return ::QBoxLayout::count();
}
void QBoxLayout_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QBoxLayout::customEvent(event);
  }
}
// tag=1009
void QBoxLayout_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QBoxLayout::customEvent(event);
}
bool QBoxLayout_wrapper::event(QEvent *event) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    return ::QBoxLayout::event(event);
  }
}
// tag=1009
bool QBoxLayout_wrapper::event_nocallback(QEvent *event) {
  // tag=1003
  return ::QBoxLayout::event(event);
}
bool QBoxLayout_wrapper::eventFilter(QObject *watched, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    // tag=1002
    return ::QBoxLayout::eventFilter(watched, event);
  }
}
// tag=1009
bool QBoxLayout_wrapper::eventFilter_nocallback(QObject *watched,
                                                QEvent *event) {
  // tag=1003
  return ::QBoxLayout::eventFilter(watched, event);
}
QFlags<Qt::Orientation> QBoxLayout_wrapper::expandingDirections() const {
  // tag=1000
  if (m_expandingDirectionsCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_expandingDirectionsCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QBoxLayout::expandingDirections();
  }
}
// tag=1009
QFlags<Qt::Orientation>
QBoxLayout_wrapper::expandingDirections_nocallback() const {
  // tag=1003
  return ::QBoxLayout::expandingDirections();
}
QRect QBoxLayout_wrapper::geometry() const {
  // tag=1000
  if (m_geometryCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_geometryCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QBoxLayout::geometry();
  }
}
// tag=1009
QRect QBoxLayout_wrapper::geometry_nocallback() const {
  // tag=1003
  return ::QBoxLayout::geometry();
}
bool QBoxLayout_wrapper::hasHeightForWidth() const {
  // tag=1000
  if (m_hasHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QBoxLayout::hasHeightForWidth();
  }
}
// tag=1009
bool QBoxLayout_wrapper::hasHeightForWidth_nocallback() const {
  // tag=1003
  return ::QBoxLayout::hasHeightForWidth();
}
int QBoxLayout_wrapper::heightForWidth(int arg__1) const {
  // tag=1000
  if (m_heightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QBoxLayout::heightForWidth(arg__1);
  }
}
// tag=1009
int QBoxLayout_wrapper::heightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QBoxLayout::heightForWidth(arg__1);
}
int QBoxLayout_wrapper::indexOf(const QLayoutItem *arg__1) const {
  // tag=1000
  if (m_indexOfCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_indexOfCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QBoxLayout::indexOf(arg__1);
  }
}
// tag=1009
int QBoxLayout_wrapper::indexOf_nocallback(const QLayoutItem *arg__1) const {
  // tag=1003
  return ::QBoxLayout::indexOf(arg__1);
}
int QBoxLayout_wrapper::indexOf(const QWidget *arg__1) const {
  // tag=1000
  if (m_indexOf_2Callback) {
    // tag=1001
    const void *thisPtr = this;
    return m_indexOf_2Callback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QBoxLayout::indexOf(arg__1);
  }
}
// tag=1009
int QBoxLayout_wrapper::indexOf_nocallback(const QWidget *arg__1) const {
  // tag=1003
  return ::QBoxLayout::indexOf(arg__1);
}
void QBoxLayout_wrapper::insertItem(int index, QLayoutItem *arg__2) {
  // tag=1000

  // tag=1004
  ::QBoxLayout::insertItem(index, arg__2);
}
void QBoxLayout_wrapper::insertLayout(int index, QLayout *layout, int stretch) {
  // tag=1000

  // tag=1004
  ::QBoxLayout::insertLayout(index, layout, stretch);
}
void QBoxLayout_wrapper::insertSpacing(int index, int size) {
  // tag=1000

  // tag=1004
  ::QBoxLayout::insertSpacing(index, size);
}
void QBoxLayout_wrapper::insertStretch(int index, int stretch) {
  // tag=1000

  // tag=1004
  ::QBoxLayout::insertStretch(index, stretch);
}
void QBoxLayout_wrapper::insertWidget(int index, QWidget *widget, int stretch) {
  // tag=1000

  // tag=1004
  ::QBoxLayout::insertWidget(index, widget, stretch);
}
void QBoxLayout_wrapper::invalidate() {
  // tag=1000
  if (m_invalidateCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_invalidateCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QBoxLayout::invalidate();
  }
}
// tag=1009
void QBoxLayout_wrapper::invalidate_nocallback() {
  // tag=1003
  ::QBoxLayout::invalidate();
}
bool QBoxLayout_wrapper::isEmpty() const {
  // tag=1000
  if (m_isEmptyCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_isEmptyCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QBoxLayout::isEmpty();
  }
}
// tag=1009
bool QBoxLayout_wrapper::isEmpty_nocallback() const {
  // tag=1003
  return ::QBoxLayout::isEmpty();
}
QLayoutItem *QBoxLayout_wrapper::itemAt(int arg__1) const {
  // tag=1000
  if (m_itemAtCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_itemAtCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QBoxLayout::itemAt(arg__1);
  }
}
// tag=1009
QLayoutItem *QBoxLayout_wrapper::itemAt_nocallback(int arg__1) const {
  // tag=1003
  return ::QBoxLayout::itemAt(arg__1);
}
QLayout *QBoxLayout_wrapper::layout() {
  // tag=1000
  if (m_layoutCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_layoutCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QBoxLayout::layout();
  }
}
// tag=1009
QLayout *QBoxLayout_wrapper::layout_nocallback() {
  // tag=1003
  return ::QBoxLayout::layout();
}
QSize QBoxLayout_wrapper::maximumSize() const {
  // tag=1000
  if (m_maximumSizeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_maximumSizeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QBoxLayout::maximumSize();
  }
}
// tag=1009
QSize QBoxLayout_wrapper::maximumSize_nocallback() const {
  // tag=1003
  return ::QBoxLayout::maximumSize();
}
int QBoxLayout_wrapper::minimumHeightForWidth(int arg__1) const {
  // tag=1000
  if (m_minimumHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_minimumHeightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QBoxLayout::minimumHeightForWidth(arg__1);
  }
}
// tag=1009
int QBoxLayout_wrapper::minimumHeightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QBoxLayout::minimumHeightForWidth(arg__1);
}
QSize QBoxLayout_wrapper::minimumSize() const {
  // tag=1000
  if (m_minimumSizeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_minimumSizeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QBoxLayout::minimumSize();
  }
}
// tag=1009
QSize QBoxLayout_wrapper::minimumSize_nocallback() const {
  // tag=1003
  return ::QBoxLayout::minimumSize();
}
void QBoxLayout_wrapper::setGeometry(const QRect &arg__1) {
  // tag=1000
  if (m_setGeometryCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setGeometryCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QBoxLayout::setGeometry(arg__1);
  }
}
// tag=1009
void QBoxLayout_wrapper::setGeometry_nocallback(const QRect &arg__1) {
  // tag=1003
  ::QBoxLayout::setGeometry(arg__1);
}
void QBoxLayout_wrapper::setSpacing(int spacing) {
  // tag=1000
  if (m_setSpacingCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setSpacingCallback(const_cast<void *>(thisPtr), spacing);
  } else {
    // tag=1002
    ::QBoxLayout::setSpacing(spacing);
  }
}
// tag=1009
void QBoxLayout_wrapper::setSpacing_nocallback(int spacing) {
  // tag=1003
  ::QBoxLayout::setSpacing(spacing);
}
void QBoxLayout_wrapper::setStretch(int index, int stretch) {
  // tag=1000

  // tag=1004
  ::QBoxLayout::setStretch(index, stretch);
}
bool QBoxLayout_wrapper::setStretchFactor(QLayout *l, int stretch) {
  // tag=1000

  // tag=1004
  return ::QBoxLayout::setStretchFactor(l, stretch);
}
bool QBoxLayout_wrapper::setStretchFactor(QWidget *w, int stretch) {
  // tag=1000

  // tag=1004
  return ::QBoxLayout::setStretchFactor(w, stretch);
}
QSize QBoxLayout_wrapper::sizeHint() const {
  // tag=1000
  if (m_sizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QBoxLayout::sizeHint();
  }
}
// tag=1009
QSize QBoxLayout_wrapper::sizeHint_nocallback() const {
  // tag=1003
  return ::QBoxLayout::sizeHint();
}
int QBoxLayout_wrapper::spacing() const {
  // tag=1000
  if (m_spacingCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_spacingCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QBoxLayout::spacing();
  }
}
// tag=1009
int QBoxLayout_wrapper::spacing_nocallback() const {
  // tag=1003
  return ::QBoxLayout::spacing();
}
int QBoxLayout_wrapper::stretch(int index) const {
  // tag=1000

  // tag=1004
  return ::QBoxLayout::stretch(index);
}
QLayoutItem *QBoxLayout_wrapper::takeAt(int arg__1) {
  // tag=1000
  if (m_takeAtCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_takeAtCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QBoxLayout::takeAt(arg__1);
  }
}
// tag=1009
QLayoutItem *QBoxLayout_wrapper::takeAt_nocallback(int arg__1) {
  // tag=1003
  return ::QBoxLayout::takeAt(arg__1);
}
QString QBoxLayout_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QBoxLayout::tr(s, c, n);
}
QWidget *QBoxLayout_wrapper::widget() const {
  // tag=1000
  if (m_widgetCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_widgetCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QBoxLayout::widget();
  }
}
// tag=1009
QWidget *QBoxLayout_wrapper::widget_nocallback() const {
  // tag=1003
  return ::QBoxLayout::widget();
}

// tag=1005
QBoxLayout_wrapper::~QBoxLayout_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QBoxLayout *fromPtr(void *ptr) {
  return reinterpret_cast<QBoxLayout *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QBoxLayout_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QBoxLayout_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
      cppObj);
}
// tag=1050
// addItem(QLayoutItem * arg__1)
void c_QBoxLayout__addItem_QLayoutItem(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QLayoutItem *>(arg__1_);
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->addItem_nocallback(arg__1);
    } else {
      return targetPtr->addItem(arg__1);
    }
  }();
}

// tag=1050
// addLayout(QLayout * layout, int stretch)
void c_QBoxLayout__addLayout_QLayout_int(void *thisObj, void *layout_,
                                         int stretch) {
  auto layout = reinterpret_cast<QLayout *>(layout_);
  // tag=1010
  fromPtr(thisObj)->addLayout(layout, stretch);
}

// tag=1050
// addSpacing(int size)
void c_QBoxLayout__addSpacing_int(void *thisObj, int size) {
  // tag=1010
  fromPtr(thisObj)->addSpacing(size);
}

// tag=1050
// addStretch(int stretch)
void c_QBoxLayout__addStretch_int(void *thisObj, int stretch) {
  // tag=1010
  fromPtr(thisObj)->addStretch(stretch);
}

// tag=1050
// addStrut(int arg__1)
void c_QBoxLayout__addStrut_int(void *thisObj, int arg__1) {
  // tag=1010
  fromPtr(thisObj)->addStrut(arg__1);
}

// tag=1050
// addWidget(QWidget * arg__1, int stretch)
void c_QBoxLayout__addWidget_QWidget_int(void *thisObj, void *arg__1_,
                                         int stretch) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->addWidget(arg__1, stretch);
}

// tag=1050
// count() const
int c_QBoxLayout__count(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
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
void c_QBoxLayout__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// event(QEvent * event)
bool c_QBoxLayout__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
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
bool c_QBoxLayout__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                              void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
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
int c_QBoxLayout__expandingDirections(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
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
void *c_QBoxLayout__geometry(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
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
bool c_QBoxLayout__hasHeightForWidth(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
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
int c_QBoxLayout__heightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->heightForWidth_nocallback(arg__1);
        } else {
          return targetPtr->heightForWidth(arg__1);
        }
      }();
}

// tag=1050
// indexOf(const QLayoutItem * arg__1) const
int c_QBoxLayout__indexOf_QLayoutItem(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QLayoutItem *>(arg__1_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
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
int c_QBoxLayout__indexOf_QWidget(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->indexOf_nocallback(arg__1);
        } else {
          return targetPtr->indexOf(arg__1);
        }
      }();
}

// tag=1050
// insertItem(int index, QLayoutItem * arg__2)
void c_QBoxLayout__insertItem_int_QLayoutItem(void *thisObj, int index,
                                              void *arg__2_) {
  auto arg__2 = reinterpret_cast<QLayoutItem *>(arg__2_);
  // tag=1010
  fromPtr(thisObj)->insertItem(index, arg__2);
}

// tag=1050
// insertLayout(int index, QLayout * layout, int stretch)
void c_QBoxLayout__insertLayout_int_QLayout_int(void *thisObj, int index,
                                                void *layout_, int stretch) {
  auto layout = reinterpret_cast<QLayout *>(layout_);
  // tag=1010
  fromPtr(thisObj)->insertLayout(index, layout, stretch);
}

// tag=1050
// insertSpacing(int index, int size)
void c_QBoxLayout__insertSpacing_int_int(void *thisObj, int index, int size) {
  // tag=1010
  fromPtr(thisObj)->insertSpacing(index, size);
}

// tag=1050
// insertStretch(int index, int stretch)
void c_QBoxLayout__insertStretch_int_int(void *thisObj, int index,
                                         int stretch) {
  // tag=1010
  fromPtr(thisObj)->insertStretch(index, stretch);
}

// tag=1050
// insertWidget(int index, QWidget * widget, int stretch)
void c_QBoxLayout__insertWidget_int_QWidget_int(void *thisObj, int index,
                                                void *widget_, int stretch) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  // tag=1010
  fromPtr(thisObj)->insertWidget(index, widget, stretch);
}

// tag=1050
// invalidate()
void c_QBoxLayout__invalidate(void *thisObj) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
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
bool c_QBoxLayout__isEmpty(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->isEmpty_nocallback();
        } else {
          return targetPtr->isEmpty();
        }
      }();
}

// tag=1050
// itemAt(int arg__1) const
void *c_QBoxLayout__itemAt_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->itemAt_nocallback(arg__1);
        } else {
          return targetPtr->itemAt(arg__1);
        }
      }();
}

// tag=1050
// layout()
void *c_QBoxLayout__layout(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
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
void *c_QBoxLayout__maximumSize(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
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
int c_QBoxLayout__minimumHeightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
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
void *c_QBoxLayout__minimumSize(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->minimumSize_nocallback();
        } else {
          return targetPtr->minimumSize();
        }
      }()};
}

// tag=1050
// setGeometry(const QRect & arg__1)
void c_QBoxLayout__setGeometry_QRect(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setGeometry_nocallback(arg__1);
    } else {
      return targetPtr->setGeometry(arg__1);
    }
  }();
}

// tag=1050
// setSpacing(int spacing)
void c_QBoxLayout__setSpacing_int(void *thisObj, int spacing) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setSpacing_nocallback(spacing);
    } else {
      return targetPtr->setSpacing(spacing);
    }
  }();
}

// tag=1050
// setStretch(int index, int stretch)
void c_QBoxLayout__setStretch_int_int(void *thisObj, int index, int stretch) {
  // tag=1010
  fromPtr(thisObj)->setStretch(index, stretch);
}

// tag=1050
// setStretchFactor(QLayout * l, int stretch)
bool c_QBoxLayout__setStretchFactor_QLayout_int(void *thisObj, void *l_,
                                                int stretch) {
  auto l = reinterpret_cast<QLayout *>(l_);
  return
      // tag=1010
      fromPtr(thisObj)->setStretchFactor(l, stretch);
}

// tag=1050
// setStretchFactor(QWidget * w, int stretch)
bool c_QBoxLayout__setStretchFactor_QWidget_int(void *thisObj, void *w_,
                                                int stretch) {
  auto w = reinterpret_cast<QWidget *>(w_);
  return
      // tag=1010
      fromPtr(thisObj)->setStretchFactor(w, stretch);
}

// tag=1050
// sizeHint() const
void *c_QBoxLayout__sizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
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
int c_QBoxLayout__spacing(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->spacing_nocallback();
        } else {
          return targetPtr->spacing();
        }
      }();
}

// tag=1050
// stretch(int index) const
int c_QBoxLayout__stretch_int(void *thisObj, int index) {
  return
      // tag=1010
      fromPtr(thisObj)->stretch(index);
}

// tag=1050
// takeAt(int arg__1)
void *c_QBoxLayout__takeAt_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->takeAt_nocallback(arg__1);
        } else {
          return targetPtr->takeAt(arg__1);
        }
      }();
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QBoxLayout__tr_char_char_int(const char *s, const char *c,
                                            int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QBoxLayout_wrapper::tr(s, c, n)};
}

// tag=1050
// widget() const
void *c_QBoxLayout__widget(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->widget_nocallback();
        } else {
          return targetPtr->widget();
        }
      }();
}
void c_QBoxLayout__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QBoxLayout__registerVirtualMethodCallback(void *ptr, void *callback,
                                                 int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 3180:
    wrapper->m_addItemCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_addItem>(
        callback);
    break;
  case 3188:
    wrapper->m_countCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_count>(
        callback);
    break;
  case 944:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_customEvent>(
        callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_event>(
        callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 3162:
    wrapper->m_expandingDirectionsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper::
                             Callback_expandingDirections>(callback);
    break;
  case 3163:
    wrapper->m_geometryCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_geometry>(
        callback);
    break;
  case 3164:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 3165:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 3198:
    wrapper->m_indexOfCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_indexOf>(
        callback);
    break;
  case 3199:
    wrapper->m_indexOf_2Callback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_indexOf_2>(
        callback);
    break;
  case 3166:
    wrapper->m_invalidateCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_invalidate>(
        callback);
    break;
  case 3167:
    wrapper->m_isEmptyCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_isEmpty>(
        callback);
    break;
  case 3205:
    wrapper->m_itemAtCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_itemAt>(
        callback);
    break;
  case 3168:
    wrapper->m_layoutCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_layout>(
        callback);
    break;
  case 3169:
    wrapper->m_maximumSizeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_maximumSize>(
        callback);
    break;
  case 3170:
    wrapper->m_minimumHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QBoxLayout_wrapper::
                             Callback_minimumHeightForWidth>(callback);
    break;
  case 3171:
    wrapper->m_minimumSizeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_minimumSize>(
        callback);
    break;
  case 3172:
    wrapper->m_setGeometryCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_setGeometry>(
        callback);
    break;
  case 3224:
    wrapper->m_setSpacingCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_setSpacing>(
        callback);
    break;
  case 3173:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_sizeHint>(
        callback);
    break;
  case 3226:
    wrapper->m_spacingCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_spacing>(
        callback);
    break;
  case 3228:
    wrapper->m_takeAtCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_takeAt>(
        callback);
    break;
  case 3174:
    wrapper->m_widgetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QBoxLayout_wrapper::Callback_widget>(
        callback);
    break;
  }
}
}
