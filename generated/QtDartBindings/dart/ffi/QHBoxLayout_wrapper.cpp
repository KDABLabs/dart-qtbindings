#include "QHBoxLayout_wrapper.h"

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
QHBoxLayout_wrapper::QHBoxLayout_wrapper(QWidget *parent)
    : ::QHBoxLayout(parent) {}
void QHBoxLayout_wrapper::addItem(QLayoutItem *arg__1) {
  // tag=1000
  if (m_addItemCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_addItemCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QHBoxLayout::addItem(arg__1);
  }
}
// tag=1009
void QHBoxLayout_wrapper::addItem_nocallback(QLayoutItem *arg__1) {
  // tag=1003
  ::QHBoxLayout::addItem(arg__1);
}
int QHBoxLayout_wrapper::count() const {
  // tag=1000
  if (m_countCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_countCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QHBoxLayout::count();
  }
}
// tag=1009
int QHBoxLayout_wrapper::count_nocallback() const {
  // tag=1003
  return ::QHBoxLayout::count();
}
void QHBoxLayout_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QHBoxLayout::customEvent(event);
  }
}
// tag=1009
void QHBoxLayout_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QHBoxLayout::customEvent(event);
}
bool QHBoxLayout_wrapper::event(QEvent *event) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    return ::QHBoxLayout::event(event);
  }
}
// tag=1009
bool QHBoxLayout_wrapper::event_nocallback(QEvent *event) {
  // tag=1003
  return ::QHBoxLayout::event(event);
}
bool QHBoxLayout_wrapper::eventFilter(QObject *watched, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    // tag=1002
    return ::QHBoxLayout::eventFilter(watched, event);
  }
}
// tag=1009
bool QHBoxLayout_wrapper::eventFilter_nocallback(QObject *watched,
                                                 QEvent *event) {
  // tag=1003
  return ::QHBoxLayout::eventFilter(watched, event);
}
QFlags<Qt::Orientation> QHBoxLayout_wrapper::expandingDirections() const {
  // tag=1000
  if (m_expandingDirectionsCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_expandingDirectionsCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QHBoxLayout::expandingDirections();
  }
}
// tag=1009
QFlags<Qt::Orientation>
QHBoxLayout_wrapper::expandingDirections_nocallback() const {
  // tag=1003
  return ::QHBoxLayout::expandingDirections();
}
QRect QHBoxLayout_wrapper::geometry() const {
  // tag=1000
  if (m_geometryCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_geometryCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QHBoxLayout::geometry();
  }
}
// tag=1009
QRect QHBoxLayout_wrapper::geometry_nocallback() const {
  // tag=1003
  return ::QHBoxLayout::geometry();
}
bool QHBoxLayout_wrapper::hasHeightForWidth() const {
  // tag=1000
  if (m_hasHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QHBoxLayout::hasHeightForWidth();
  }
}
// tag=1009
bool QHBoxLayout_wrapper::hasHeightForWidth_nocallback() const {
  // tag=1003
  return ::QHBoxLayout::hasHeightForWidth();
}
int QHBoxLayout_wrapper::heightForWidth(int arg__1) const {
  // tag=1000
  if (m_heightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QHBoxLayout::heightForWidth(arg__1);
  }
}
// tag=1009
int QHBoxLayout_wrapper::heightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QHBoxLayout::heightForWidth(arg__1);
}
int QHBoxLayout_wrapper::indexOf(const QLayoutItem *arg__1) const {
  // tag=1000
  if (m_indexOfCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_indexOfCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QHBoxLayout::indexOf(arg__1);
  }
}
// tag=1009
int QHBoxLayout_wrapper::indexOf_nocallback(const QLayoutItem *arg__1) const {
  // tag=1003
  return ::QHBoxLayout::indexOf(arg__1);
}
int QHBoxLayout_wrapper::indexOf(const QWidget *arg__1) const {
  // tag=1000
  if (m_indexOf_2Callback) {
    // tag=1001
    const void *thisPtr = this;
    return m_indexOf_2Callback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QHBoxLayout::indexOf(arg__1);
  }
}
// tag=1009
int QHBoxLayout_wrapper::indexOf_nocallback(const QWidget *arg__1) const {
  // tag=1003
  return ::QHBoxLayout::indexOf(arg__1);
}
void QHBoxLayout_wrapper::invalidate() {
  // tag=1000
  if (m_invalidateCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_invalidateCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QHBoxLayout::invalidate();
  }
}
// tag=1009
void QHBoxLayout_wrapper::invalidate_nocallback() {
  // tag=1003
  ::QHBoxLayout::invalidate();
}
bool QHBoxLayout_wrapper::isEmpty() const {
  // tag=1000
  if (m_isEmptyCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_isEmptyCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QHBoxLayout::isEmpty();
  }
}
// tag=1009
bool QHBoxLayout_wrapper::isEmpty_nocallback() const {
  // tag=1003
  return ::QHBoxLayout::isEmpty();
}
QLayoutItem *QHBoxLayout_wrapper::itemAt(int arg__1) const {
  // tag=1000
  if (m_itemAtCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_itemAtCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QHBoxLayout::itemAt(arg__1);
  }
}
// tag=1009
QLayoutItem *QHBoxLayout_wrapper::itemAt_nocallback(int arg__1) const {
  // tag=1003
  return ::QHBoxLayout::itemAt(arg__1);
}
QLayout *QHBoxLayout_wrapper::layout() {
  // tag=1000
  if (m_layoutCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_layoutCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QHBoxLayout::layout();
  }
}
// tag=1009
QLayout *QHBoxLayout_wrapper::layout_nocallback() {
  // tag=1003
  return ::QHBoxLayout::layout();
}
QSize QHBoxLayout_wrapper::maximumSize() const {
  // tag=1000
  if (m_maximumSizeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_maximumSizeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QHBoxLayout::maximumSize();
  }
}
// tag=1009
QSize QHBoxLayout_wrapper::maximumSize_nocallback() const {
  // tag=1003
  return ::QHBoxLayout::maximumSize();
}
int QHBoxLayout_wrapper::minimumHeightForWidth(int arg__1) const {
  // tag=1000
  if (m_minimumHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_minimumHeightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QHBoxLayout::minimumHeightForWidth(arg__1);
  }
}
// tag=1009
int QHBoxLayout_wrapper::minimumHeightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QHBoxLayout::minimumHeightForWidth(arg__1);
}
QSize QHBoxLayout_wrapper::minimumSize() const {
  // tag=1000
  if (m_minimumSizeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_minimumSizeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QHBoxLayout::minimumSize();
  }
}
// tag=1009
QSize QHBoxLayout_wrapper::minimumSize_nocallback() const {
  // tag=1003
  return ::QHBoxLayout::minimumSize();
}
void QHBoxLayout_wrapper::setGeometry(const QRect &arg__1) {
  // tag=1000
  if (m_setGeometryCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setGeometryCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QHBoxLayout::setGeometry(arg__1);
  }
}
// tag=1009
void QHBoxLayout_wrapper::setGeometry_nocallback(const QRect &arg__1) {
  // tag=1003
  ::QHBoxLayout::setGeometry(arg__1);
}
void QHBoxLayout_wrapper::setSpacing(int spacing) {
  // tag=1000
  if (m_setSpacingCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setSpacingCallback(const_cast<void *>(thisPtr), spacing);
  } else {
    // tag=1002
    ::QHBoxLayout::setSpacing(spacing);
  }
}
// tag=1009
void QHBoxLayout_wrapper::setSpacing_nocallback(int spacing) {
  // tag=1003
  ::QHBoxLayout::setSpacing(spacing);
}
QSize QHBoxLayout_wrapper::sizeHint() const {
  // tag=1000
  if (m_sizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QHBoxLayout::sizeHint();
  }
}
// tag=1009
QSize QHBoxLayout_wrapper::sizeHint_nocallback() const {
  // tag=1003
  return ::QHBoxLayout::sizeHint();
}
int QHBoxLayout_wrapper::spacing() const {
  // tag=1000
  if (m_spacingCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_spacingCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QHBoxLayout::spacing();
  }
}
// tag=1009
int QHBoxLayout_wrapper::spacing_nocallback() const {
  // tag=1003
  return ::QHBoxLayout::spacing();
}
QLayoutItem *QHBoxLayout_wrapper::takeAt(int arg__1) {
  // tag=1000
  if (m_takeAtCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_takeAtCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QHBoxLayout::takeAt(arg__1);
  }
}
// tag=1009
QLayoutItem *QHBoxLayout_wrapper::takeAt_nocallback(int arg__1) {
  // tag=1003
  return ::QHBoxLayout::takeAt(arg__1);
}
QString QHBoxLayout_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QHBoxLayout::tr(s, c, n);
}
QWidget *QHBoxLayout_wrapper::widget() const {
  // tag=1000
  if (m_widgetCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_widgetCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QHBoxLayout::widget();
  }
}
// tag=1009
QWidget *QHBoxLayout_wrapper::widget_nocallback() const {
  // tag=1003
  return ::QHBoxLayout::widget();
}

// tag=1005
QHBoxLayout_wrapper::~QHBoxLayout_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QHBoxLayout *fromPtr(void *ptr) {
  return reinterpret_cast<QHBoxLayout *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QHBoxLayout_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
      ptr);
}
extern "C" {

// tag=1049
void c_QHBoxLayout_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
      cppObj);
}
void *c_QHBoxLayout__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QHBoxLayout_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// addItem(QLayoutItem * arg__1)
void c_QHBoxLayout__addItem_QLayoutItem(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QLayoutItem *>(arg__1_);
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->addItem_nocallback(arg__1);
    } else {
      return targetPtr->addItem(arg__1);
    }
  }();
}

// tag=1050
// count() const
int c_QHBoxLayout__count(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
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
void c_QHBoxLayout__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// event(QEvent * event)
bool c_QHBoxLayout__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
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
bool c_QHBoxLayout__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                               void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
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
int c_QHBoxLayout__expandingDirections(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
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
void *c_QHBoxLayout__geometry(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
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
bool c_QHBoxLayout__hasHeightForWidth(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
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
int c_QHBoxLayout__heightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
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
int c_QHBoxLayout__indexOf_QLayoutItem(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QLayoutItem *>(arg__1_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
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
int c_QHBoxLayout__indexOf_QWidget(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
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
void c_QHBoxLayout__invalidate(void *thisObj) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
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
bool c_QHBoxLayout__isEmpty(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
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
void *c_QHBoxLayout__itemAt_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
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
void *c_QHBoxLayout__layout(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
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
void *c_QHBoxLayout__maximumSize(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
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
int c_QHBoxLayout__minimumHeightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
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
void *c_QHBoxLayout__minimumSize(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
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
void c_QHBoxLayout__setGeometry_QRect(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
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
void c_QHBoxLayout__setSpacing_int(void *thisObj, int spacing) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setSpacing_nocallback(spacing);
    } else {
      return targetPtr->setSpacing(spacing);
    }
  }();
}

// tag=1050
// sizeHint() const
void *c_QHBoxLayout__sizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
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
int c_QHBoxLayout__spacing(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->spacing_nocallback();
        } else {
          return targetPtr->spacing();
        }
      }();
}

// tag=1050
// takeAt(int arg__1)
void *c_QHBoxLayout__takeAt_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
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
void *c_static_QHBoxLayout__tr_char_char_int(const char *s, const char *c,
                                             int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QHBoxLayout_wrapper::tr(s, c, n)};
}

// tag=1050
// widget() const
void *c_QHBoxLayout__widget(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->widget_nocallback();
        } else {
          return targetPtr->widget();
        }
      }();
}
void c_QHBoxLayout__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QHBoxLayout__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 3180:
    wrapper->m_addItemCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_addItem>(
        callback);
    break;
  case 3188:
    wrapper->m_countCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_count>(
        callback);
    break;
  case 944:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_customEvent>(
        callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_event>(
        callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 3162:
    wrapper->m_expandingDirectionsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper::
                             Callback_expandingDirections>(callback);
    break;
  case 3163:
    wrapper->m_geometryCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_geometry>(
        callback);
    break;
  case 3164:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 3165:
    wrapper->m_heightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper::
                             Callback_heightForWidth>(callback);
    break;
  case 3198:
    wrapper->m_indexOfCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_indexOf>(
        callback);
    break;
  case 3199:
    wrapper->m_indexOf_2Callback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_indexOf_2>(
        callback);
    break;
  case 3166:
    wrapper->m_invalidateCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_invalidate>(
        callback);
    break;
  case 3167:
    wrapper->m_isEmptyCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_isEmpty>(
        callback);
    break;
  case 3205:
    wrapper->m_itemAtCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_itemAt>(
        callback);
    break;
  case 3168:
    wrapper->m_layoutCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_layout>(
        callback);
    break;
  case 3169:
    wrapper->m_maximumSizeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_maximumSize>(
        callback);
    break;
  case 3170:
    wrapper->m_minimumHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QHBoxLayout_wrapper::
                             Callback_minimumHeightForWidth>(callback);
    break;
  case 3171:
    wrapper->m_minimumSizeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_minimumSize>(
        callback);
    break;
  case 3172:
    wrapper->m_setGeometryCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_setGeometry>(
        callback);
    break;
  case 3224:
    wrapper->m_setSpacingCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_setSpacing>(
        callback);
    break;
  case 3173:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_sizeHint>(
        callback);
    break;
  case 3226:
    wrapper->m_spacingCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_spacing>(
        callback);
    break;
  case 3228:
    wrapper->m_takeAtCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_takeAt>(
        callback);
    break;
  case 3174:
    wrapper->m_widgetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QHBoxLayout_wrapper::Callback_widget>(
        callback);
    break;
  }
}
}
