#include "QLayoutItem_wrapper.h"

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
QLayoutItem_wrapper::QLayoutItem_wrapper() : ::QLayoutItem() {}
QFlags<Qt::Orientation> QLayoutItem_wrapper::expandingDirections() const {
  // tag=1000
  if (m_expandingDirectionsCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_expandingDirectionsCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
QFlags<Qt::Orientation>
QLayoutItem_wrapper::expandingDirections_nocallback() const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
QRect QLayoutItem_wrapper::geometry() const {
  // tag=1000
  if (m_geometryCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_geometryCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
QRect QLayoutItem_wrapper::geometry_nocallback() const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
bool QLayoutItem_wrapper::hasHeightForWidth() const {
  // tag=1000
  if (m_hasHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QLayoutItem::hasHeightForWidth();
  }
}
// tag=1009
bool QLayoutItem_wrapper::hasHeightForWidth_nocallback() const {
  // tag=1003
  return ::QLayoutItem::hasHeightForWidth();
}
int QLayoutItem_wrapper::heightForWidth(int arg__1) const {
  // tag=1000
  if (m_heightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QLayoutItem::heightForWidth(arg__1);
  }
}
// tag=1009
int QLayoutItem_wrapper::heightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QLayoutItem::heightForWidth(arg__1);
}
void QLayoutItem_wrapper::invalidate() {
  // tag=1000
  if (m_invalidateCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_invalidateCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QLayoutItem::invalidate();
  }
}
// tag=1009
void QLayoutItem_wrapper::invalidate_nocallback() {
  // tag=1003
  ::QLayoutItem::invalidate();
}
bool QLayoutItem_wrapper::isEmpty() const {
  // tag=1000
  if (m_isEmptyCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_isEmptyCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
bool QLayoutItem_wrapper::isEmpty_nocallback() const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
QLayout *QLayoutItem_wrapper::layout() {
  // tag=1000
  if (m_layoutCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_layoutCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QLayoutItem::layout();
  }
}
// tag=1009
QLayout *QLayoutItem_wrapper::layout_nocallback() {
  // tag=1003
  return ::QLayoutItem::layout();
}
QSize QLayoutItem_wrapper::maximumSize() const {
  // tag=1000
  if (m_maximumSizeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_maximumSizeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
QSize QLayoutItem_wrapper::maximumSize_nocallback() const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
int QLayoutItem_wrapper::minimumHeightForWidth(int arg__1) const {
  // tag=1000
  if (m_minimumHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_minimumHeightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QLayoutItem::minimumHeightForWidth(arg__1);
  }
}
// tag=1009
int QLayoutItem_wrapper::minimumHeightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QLayoutItem::minimumHeightForWidth(arg__1);
}
QSize QLayoutItem_wrapper::minimumSize() const {
  // tag=1000
  if (m_minimumSizeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_minimumSizeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
QSize QLayoutItem_wrapper::minimumSize_nocallback() const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
void QLayoutItem_wrapper::setGeometry(const QRect &arg__1) {
  // tag=1000
  if (m_setGeometryCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setGeometryCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return;
  }
}
// tag=1009
void QLayoutItem_wrapper::setGeometry_nocallback(const QRect &arg__1) {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return;
}
QSize QLayoutItem_wrapper::sizeHint() const {
  // tag=1000
  if (m_sizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
QSize QLayoutItem_wrapper::sizeHint_nocallback() const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
QWidget *QLayoutItem_wrapper::widget() const {
  // tag=1000
  if (m_widgetCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_widgetCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QLayoutItem::widget();
  }
}
// tag=1009
QWidget *QLayoutItem_wrapper::widget_nocallback() const {
  // tag=1003
  return ::QLayoutItem::widget();
}

// tag=1005
QLayoutItem_wrapper::~QLayoutItem_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QLayoutItem *fromPtr(void *ptr) {
  return reinterpret_cast<QLayoutItem *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QLayoutItem_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper *>(
      ptr);
}
extern "C" {

// tag=1049
void c_QLayoutItem_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper *>(
      cppObj);
}
void *c_QLayoutItem__constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QLayoutItem_wrapper();
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// expandingDirections() const
int c_QLayoutItem__expandingDirections(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper *>(
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
void *c_QLayoutItem__geometry(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper *>(
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
bool c_QLayoutItem__hasHeightForWidth(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper *>(
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
int c_QLayoutItem__heightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->heightForWidth_nocallback(arg__1);
        } else {
          return targetPtr->heightForWidth(arg__1);
        }
      }();
}

// tag=1050
// invalidate()
void c_QLayoutItem__invalidate(void *thisObj) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper *>(
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
bool c_QLayoutItem__isEmpty(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->isEmpty_nocallback();
        } else {
          return targetPtr->isEmpty();
        }
      }();
}

// tag=1050
// layout()
void *c_QLayoutItem__layout(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper *>(
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
void *c_QLayoutItem__maximumSize(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper *>(
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
int c_QLayoutItem__minimumHeightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper *>(
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
void *c_QLayoutItem__minimumSize(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper *>(
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
void c_QLayoutItem__setGeometry_QRect(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setGeometry_nocallback(arg__1);
    } else {
      return targetPtr->setGeometry(arg__1);
    }
  }();
}

// tag=1050
// sizeHint() const
void *c_QLayoutItem__sizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->sizeHint_nocallback();
        } else {
          return targetPtr->sizeHint();
        }
      }()};
}

// tag=1050
// widget() const
void *c_QLayoutItem__widget(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->widget_nocallback();
        } else {
          return targetPtr->widget();
        }
      }();
}
void c_QLayoutItem__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QLayoutItem__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 3162:
    wrapper->m_expandingDirectionsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper::
                             Callback_expandingDirections>(callback);
    break;
  case 3163:
    wrapper->m_geometryCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayoutItem_wrapper::Callback_geometry>(
        callback);
    break;
  case 3164:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 3165:
    wrapper->m_heightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper::
                             Callback_heightForWidth>(callback);
    break;
  case 3166:
    wrapper->m_invalidateCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayoutItem_wrapper::Callback_invalidate>(
        callback);
    break;
  case 3167:
    wrapper->m_isEmptyCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayoutItem_wrapper::Callback_isEmpty>(
        callback);
    break;
  case 3168:
    wrapper->m_layoutCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayoutItem_wrapper::Callback_layout>(
        callback);
    break;
  case 3169:
    wrapper->m_maximumSizeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayoutItem_wrapper::Callback_maximumSize>(
        callback);
    break;
  case 3170:
    wrapper->m_minimumHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QLayoutItem_wrapper::
                             Callback_minimumHeightForWidth>(callback);
    break;
  case 3171:
    wrapper->m_minimumSizeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayoutItem_wrapper::Callback_minimumSize>(
        callback);
    break;
  case 3172:
    wrapper->m_setGeometryCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayoutItem_wrapper::Callback_setGeometry>(
        callback);
    break;
  case 3173:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayoutItem_wrapper::Callback_sizeHint>(
        callback);
    break;
  case 3174:
    wrapper->m_widgetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayoutItem_wrapper::Callback_widget>(
        callback);
    break;
  }
}
}
