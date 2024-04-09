#include "QLayout_wrapper.h"

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
QLayout_wrapper::QLayout_wrapper(QWidget *parent) : ::QLayout(parent) {}
bool QLayout_wrapper::activate() {
  // tag=1000

  // tag=1004
  return ::QLayout::activate();
}
void QLayout_wrapper::addChildLayout(QLayout *l) {
  // tag=1000

  // tag=1004
  ::QLayout::addChildLayout(l);
}
void QLayout_wrapper::addChildWidget(QWidget *w) {
  // tag=1000

  // tag=1004
  ::QLayout::addChildWidget(w);
}
void QLayout_wrapper::addItem(QLayoutItem *arg__1) {
  // tag=1000
  if (m_addItemCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_addItemCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return;
  }
}
// tag=1009
void QLayout_wrapper::addItem_nocallback(QLayoutItem *arg__1) {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return;
}
void QLayout_wrapper::addWidget(QWidget *w) {
  // tag=1000

  // tag=1004
  ::QLayout::addWidget(w);
}
bool QLayout_wrapper::adoptLayout(QLayout *layout) {
  // tag=1000

  // tag=1004
  return ::QLayout::adoptLayout(layout);
}
QRect QLayout_wrapper::alignmentRect(const QRect &arg__1) const {
  // tag=1000

  // tag=1004
  return ::QLayout::alignmentRect(arg__1);
}
QSize QLayout_wrapper::closestAcceptableSize(const QWidget *w, const QSize &s) {
  // tag=1000

  // tag=1004
  return ::QLayout::closestAcceptableSize(w, s);
}
QRect QLayout_wrapper::contentsRect() const {
  // tag=1000

  // tag=1004
  return ::QLayout::contentsRect();
}
int QLayout_wrapper::count() const {
  // tag=1000
  if (m_countCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_countCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
int QLayout_wrapper::count_nocallback() const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
void QLayout_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QLayout::customEvent(event);
  }
}
// tag=1009
void QLayout_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QLayout::customEvent(event);
}
bool QLayout_wrapper::event(QEvent *event) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    return ::QLayout::event(event);
  }
}
// tag=1009
bool QLayout_wrapper::event_nocallback(QEvent *event) {
  // tag=1003
  return ::QLayout::event(event);
}
bool QLayout_wrapper::eventFilter(QObject *watched, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    // tag=1002
    return ::QLayout::eventFilter(watched, event);
  }
}
// tag=1009
bool QLayout_wrapper::eventFilter_nocallback(QObject *watched, QEvent *event) {
  // tag=1003
  return ::QLayout::eventFilter(watched, event);
}
QFlags<Qt::Orientation> QLayout_wrapper::expandingDirections() const {
  // tag=1000
  if (m_expandingDirectionsCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_expandingDirectionsCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QLayout::expandingDirections();
  }
}
// tag=1009
QFlags<Qt::Orientation>
QLayout_wrapper::expandingDirections_nocallback() const {
  // tag=1003
  return ::QLayout::expandingDirections();
}
QRect QLayout_wrapper::geometry() const {
  // tag=1000
  if (m_geometryCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_geometryCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QLayout::geometry();
  }
}
// tag=1009
QRect QLayout_wrapper::geometry_nocallback() const {
  // tag=1003
  return ::QLayout::geometry();
}
bool QLayout_wrapper::hasHeightForWidth() const {
  // tag=1000
  if (m_hasHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QLayout::hasHeightForWidth();
  }
}
// tag=1009
bool QLayout_wrapper::hasHeightForWidth_nocallback() const {
  // tag=1003
  return ::QLayout::hasHeightForWidth();
}
int QLayout_wrapper::heightForWidth(int arg__1) const {
  // tag=1000
  if (m_heightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QLayout::heightForWidth(arg__1);
  }
}
// tag=1009
int QLayout_wrapper::heightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QLayout::heightForWidth(arg__1);
}
int QLayout_wrapper::indexOf(const QLayoutItem *arg__1) const {
  // tag=1000
  if (m_indexOfCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_indexOfCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QLayout::indexOf(arg__1);
  }
}
// tag=1009
int QLayout_wrapper::indexOf_nocallback(const QLayoutItem *arg__1) const {
  // tag=1003
  return ::QLayout::indexOf(arg__1);
}
int QLayout_wrapper::indexOf(const QWidget *arg__1) const {
  // tag=1000
  if (m_indexOf_2Callback) {
    // tag=1001
    const void *thisPtr = this;
    return m_indexOf_2Callback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QLayout::indexOf(arg__1);
  }
}
// tag=1009
int QLayout_wrapper::indexOf_nocallback(const QWidget *arg__1) const {
  // tag=1003
  return ::QLayout::indexOf(arg__1);
}
void QLayout_wrapper::invalidate() {
  // tag=1000
  if (m_invalidateCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_invalidateCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QLayout::invalidate();
  }
}
// tag=1009
void QLayout_wrapper::invalidate_nocallback() {
  // tag=1003
  ::QLayout::invalidate();
}
bool QLayout_wrapper::isEmpty() const {
  // tag=1000
  if (m_isEmptyCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_isEmptyCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QLayout::isEmpty();
  }
}
// tag=1009
bool QLayout_wrapper::isEmpty_nocallback() const {
  // tag=1003
  return ::QLayout::isEmpty();
}
bool QLayout_wrapper::isEnabled() const {
  // tag=1000

  // tag=1004
  return ::QLayout::isEnabled();
}
QLayoutItem *QLayout_wrapper::itemAt(int index) const {
  // tag=1000
  if (m_itemAtCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_itemAtCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
QLayoutItem *QLayout_wrapper::itemAt_nocallback(int index) const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
QLayout *QLayout_wrapper::layout() {
  // tag=1000
  if (m_layoutCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_layoutCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QLayout::layout();
  }
}
// tag=1009
QLayout *QLayout_wrapper::layout_nocallback() {
  // tag=1003
  return ::QLayout::layout();
}
QSize QLayout_wrapper::maximumSize() const {
  // tag=1000
  if (m_maximumSizeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_maximumSizeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QLayout::maximumSize();
  }
}
// tag=1009
QSize QLayout_wrapper::maximumSize_nocallback() const {
  // tag=1003
  return ::QLayout::maximumSize();
}
QWidget *QLayout_wrapper::menuBar() const {
  // tag=1000

  // tag=1004
  return ::QLayout::menuBar();
}
int QLayout_wrapper::minimumHeightForWidth(int arg__1) const {
  // tag=1000
  if (m_minimumHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_minimumHeightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QLayout::minimumHeightForWidth(arg__1);
  }
}
// tag=1009
int QLayout_wrapper::minimumHeightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QLayout::minimumHeightForWidth(arg__1);
}
QSize QLayout_wrapper::minimumSize() const {
  // tag=1000
  if (m_minimumSizeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_minimumSizeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QLayout::minimumSize();
  }
}
// tag=1009
QSize QLayout_wrapper::minimumSize_nocallback() const {
  // tag=1003
  return ::QLayout::minimumSize();
}
QWidget *QLayout_wrapper::parentWidget() const {
  // tag=1000

  // tag=1004
  return ::QLayout::parentWidget();
}
void QLayout_wrapper::removeItem(QLayoutItem *arg__1) {
  // tag=1000

  // tag=1004
  ::QLayout::removeItem(arg__1);
}
void QLayout_wrapper::removeWidget(QWidget *w) {
  // tag=1000

  // tag=1004
  ::QLayout::removeWidget(w);
}
void QLayout_wrapper::setContentsMargins(int left, int top, int right,
                                         int bottom) {
  // tag=1000

  // tag=1004
  ::QLayout::setContentsMargins(left, top, right, bottom);
}
void QLayout_wrapper::setEnabled(bool arg__1) {
  // tag=1000

  // tag=1004
  ::QLayout::setEnabled(arg__1);
}
void QLayout_wrapper::setGeometry(const QRect &arg__1) {
  // tag=1000
  if (m_setGeometryCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setGeometryCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QLayout::setGeometry(arg__1);
  }
}
// tag=1009
void QLayout_wrapper::setGeometry_nocallback(const QRect &arg__1) {
  // tag=1003
  ::QLayout::setGeometry(arg__1);
}
void QLayout_wrapper::setMenuBar(QWidget *w) {
  // tag=1000

  // tag=1004
  ::QLayout::setMenuBar(w);
}
void QLayout_wrapper::setSpacing(int arg__1) {
  // tag=1000
  if (m_setSpacingCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setSpacingCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QLayout::setSpacing(arg__1);
  }
}
// tag=1009
void QLayout_wrapper::setSpacing_nocallback(int arg__1) {
  // tag=1003
  ::QLayout::setSpacing(arg__1);
}
QSize QLayout_wrapper::sizeHint() const {
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
QSize QLayout_wrapper::sizeHint_nocallback() const {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
int QLayout_wrapper::spacing() const {
  // tag=1000
  if (m_spacingCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_spacingCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QLayout::spacing();
  }
}
// tag=1009
int QLayout_wrapper::spacing_nocallback() const {
  // tag=1003
  return ::QLayout::spacing();
}
QLayoutItem *QLayout_wrapper::takeAt(int index) {
  // tag=1000
  if (m_takeAtCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_takeAtCallback(const_cast<void *>(thisPtr), index);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
QLayoutItem *QLayout_wrapper::takeAt_nocallback(int index) {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
int QLayout_wrapper::totalHeightForWidth(int w) const {
  // tag=1000

  // tag=1004
  return ::QLayout::totalHeightForWidth(w);
}
QSize QLayout_wrapper::totalMaximumSize() const {
  // tag=1000

  // tag=1004
  return ::QLayout::totalMaximumSize();
}
int QLayout_wrapper::totalMinimumHeightForWidth(int w) const {
  // tag=1000

  // tag=1004
  return ::QLayout::totalMinimumHeightForWidth(w);
}
QSize QLayout_wrapper::totalMinimumSize() const {
  // tag=1000

  // tag=1004
  return ::QLayout::totalMinimumSize();
}
QSize QLayout_wrapper::totalSizeHint() const {
  // tag=1000

  // tag=1004
  return ::QLayout::totalSizeHint();
}
QString QLayout_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QLayout::tr(s, c, n);
}
void QLayout_wrapper::unsetContentsMargins() {
  // tag=1000

  // tag=1004
  ::QLayout::unsetContentsMargins();
}
void QLayout_wrapper::update() {
  // tag=1000

  // tag=1004
  ::QLayout::update();
}
QWidget *QLayout_wrapper::widget() const {
  // tag=1000
  if (m_widgetCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_widgetCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QLayout::widget();
  }
}
// tag=1009
QWidget *QLayout_wrapper::widget_nocallback() const {
  // tag=1003
  return ::QLayout::widget();
}
void QLayout_wrapper::widgetEvent(QEvent *arg__1) {
  // tag=1000

  // tag=1004
  ::QLayout::widgetEvent(arg__1);
}

// tag=1005
QLayout_wrapper::~QLayout_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QLayout *fromPtr(void *ptr) { return reinterpret_cast<QLayout *>(ptr); }
// tag=1014
static QtDartBindings_wrappersNS::QLayout_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QLayout_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(cppObj);
}
void *c_QLayout__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QLayout_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// activate()
bool c_QLayout__activate(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->activate();
}

// tag=1050
// addChildLayout(QLayout * l)
void c_QLayout__addChildLayout_QLayout(void *thisObj, void *l_) {
  auto l = reinterpret_cast<QLayout *>(l_);
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->addChildLayout(l);
}

// tag=1050
// addChildWidget(QWidget * w)
void c_QLayout__addChildWidget_QWidget(void *thisObj, void *w_) {
  auto w = reinterpret_cast<QWidget *>(w_);
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->addChildWidget(w);
}

// tag=1050
// addItem(QLayoutItem * arg__1)
void c_QLayout__addItem_QLayoutItem(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QLayoutItem *>(arg__1_);
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->addItem_nocallback(arg__1);
    } else {
      return targetPtr->addItem(arg__1);
    }
  }();
}

// tag=1050
// addWidget(QWidget * w)
void c_QLayout__addWidget_QWidget(void *thisObj, void *w_) {
  auto w = reinterpret_cast<QWidget *>(w_);
  // tag=1010
  fromPtr(thisObj)->addWidget(w);
}

// tag=1050
// adoptLayout(QLayout * layout)
bool c_QLayout__adoptLayout_QLayout(void *thisObj, void *layout_) {
  auto layout = reinterpret_cast<QLayout *>(layout_);
  return
      // tag=1011

      // tag=1073
      fromWrapperPtr(thisObj)->adoptLayout(layout);
}

// tag=1050
// alignmentRect(const QRect & arg__1) const
void *c_QLayout__alignmentRect_QRect(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  return
      // tag=1011

      // tag=1073

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{
          fromWrapperPtr(thisObj)->alignmentRect(arg__1)};
}

// tag=1050
// closestAcceptableSize(const QWidget * w, const QSize & s)
void *c_static_QLayout__closestAcceptableSize_QWidget_QSize(void *w_,
                                                            void *s_) {
  auto w = reinterpret_cast<QWidget *>(w_);
  auto &s = *reinterpret_cast<QSize *>(s_);
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{
          QtDartBindings_wrappersNS::QLayout_wrapper::closestAcceptableSize(w,
                                                                            s)};
}

// tag=1050
// contentsRect() const
void *c_QLayout__contentsRect(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->contentsRect()};
}

// tag=1050
// count() const
int c_QLayout__count(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(
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
void c_QLayout__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1079
void c_QLayout__onDestroyed_QObject(void *thisObj, void *contextQObject,
                                    void *callback) {
  auto instance = reinterpret_cast<QLayout *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QLayout::destroyed, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// event(QEvent * event)
bool c_QLayout__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(
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
bool c_QLayout__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                           void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(
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
int c_QLayout__expandingDirections(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(
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
void *c_QLayout__geometry(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(
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
bool c_QLayout__hasHeightForWidth(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(
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
int c_QLayout__heightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(
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
int c_QLayout__indexOf_QLayoutItem(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QLayoutItem *>(arg__1_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(
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
int c_QLayout__indexOf_QWidget(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(
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
void c_QLayout__invalidate(void *thisObj) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->invalidate_nocallback();
    } else {
      return targetPtr->invalidate();
    }
  }();
}

// tag=1050
// isEmpty() const
bool c_QLayout__isEmpty(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->isEmpty_nocallback();
        } else {
          return targetPtr->isEmpty();
        }
      }();
}

// tag=1050
// isEnabled() const
bool c_QLayout__isEnabled(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isEnabled();
}

// tag=1050
// itemAt(int index) const
void *c_QLayout__itemAt_int(void *thisObj, int index) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->itemAt_nocallback(index);
        } else {
          return targetPtr->itemAt(index);
        }
      }();
}

// tag=1050
// layout()
void *c_QLayout__layout(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(
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
void *c_QLayout__maximumSize(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->maximumSize_nocallback();
        } else {
          return targetPtr->maximumSize();
        }
      }()};
}

// tag=1050
// menuBar() const
void *c_QLayout__menuBar(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->menuBar();
}

// tag=1050
// minimumHeightForWidth(int arg__1) const
int c_QLayout__minimumHeightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(
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
void *c_QLayout__minimumSize(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->minimumSize_nocallback();
        } else {
          return targetPtr->minimumSize();
        }
      }()};
}

// tag=1050
// parentWidget() const
void *c_QLayout__parentWidget(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->parentWidget();
}

// tag=1050
// removeItem(QLayoutItem * arg__1)
void c_QLayout__removeItem_QLayoutItem(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QLayoutItem *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->removeItem(arg__1);
}

// tag=1050
// removeWidget(QWidget * w)
void c_QLayout__removeWidget_QWidget(void *thisObj, void *w_) {
  auto w = reinterpret_cast<QWidget *>(w_);
  // tag=1010
  fromPtr(thisObj)->removeWidget(w);
}

// tag=1050
// setContentsMargins(int left, int top, int right, int bottom)
void c_QLayout__setContentsMargins_int_int_int_int(void *thisObj, int left,
                                                   int top, int right,
                                                   int bottom) {
  // tag=1010
  fromPtr(thisObj)->setContentsMargins(left, top, right, bottom);
}

// tag=1050
// setEnabled(bool arg__1)
void c_QLayout__setEnabled_bool(void *thisObj, bool arg__1) {
  // tag=1010
  fromPtr(thisObj)->setEnabled(arg__1);
}

// tag=1050
// setGeometry(const QRect & arg__1)
void c_QLayout__setGeometry_QRect(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setGeometry_nocallback(arg__1);
    } else {
      return targetPtr->setGeometry(arg__1);
    }
  }();
}

// tag=1050
// setMenuBar(QWidget * w)
void c_QLayout__setMenuBar_QWidget(void *thisObj, void *w_) {
  auto w = reinterpret_cast<QWidget *>(w_);
  // tag=1010
  fromPtr(thisObj)->setMenuBar(w);
}

// tag=1050
// setSpacing(int arg__1)
void c_QLayout__setSpacing_int(void *thisObj, int arg__1) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setSpacing_nocallback(arg__1);
    } else {
      return targetPtr->setSpacing(arg__1);
    }
  }();
}

// tag=1050
// sizeHint() const
void *c_QLayout__sizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(
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
int c_QLayout__spacing(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(
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
void *c_QLayout__takeAt_int(void *thisObj, int index) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->takeAt_nocallback(index);
        } else {
          return targetPtr->takeAt(index);
        }
      }();
}

// tag=1050
// totalHeightForWidth(int w) const
int c_QLayout__totalHeightForWidth_int(void *thisObj, int w) {
  return
      // tag=1010
      fromPtr(thisObj)->totalHeightForWidth(w);
}

// tag=1050
// totalMaximumSize() const
void *c_QLayout__totalMaximumSize(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->totalMaximumSize()};
}

// tag=1050
// totalMinimumHeightForWidth(int w) const
int c_QLayout__totalMinimumHeightForWidth_int(void *thisObj, int w) {
  return
      // tag=1010
      fromPtr(thisObj)->totalMinimumHeightForWidth(w);
}

// tag=1050
// totalMinimumSize() const
void *c_QLayout__totalMinimumSize(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->totalMinimumSize()};
}

// tag=1050
// totalSizeHint() const
void *c_QLayout__totalSizeHint(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->totalSizeHint()};
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QLayout__tr_char_char_int(const char *s, const char *c, int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QLayout_wrapper::tr(s, c, n)};
}

// tag=1050
// unsetContentsMargins()
void c_QLayout__unsetContentsMargins(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->unsetContentsMargins();
}

// tag=1050
// update()
void c_QLayout__update(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->update();
}

// tag=1050
// widget() const
void *c_QLayout__widget(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->widget_nocallback();
        } else {
          return targetPtr->widget();
        }
      }();
}

// tag=1050
// widgetEvent(QEvent * arg__1)
void c_QLayout__widgetEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->widgetEvent(arg__1);
}
void c_QLayout__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QLayout__registerVirtualMethodCallback(void *ptr, void *callback,
                                              int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 3180:
    wrapper->m_addItemCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_addItem>(callback);
    break;
  case 3188:
    wrapper->m_countCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_count>(callback);
    break;
  case 944:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_customEvent>(
        callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_event>(callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 3162:
    wrapper->m_expandingDirectionsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QLayout_wrapper::
                             Callback_expandingDirections>(callback);
    break;
  case 3163:
    wrapper->m_geometryCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_geometry>(
        callback);
    break;
  case 3164:
    wrapper->m_hasHeightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_hasHeightForWidth>(
        callback);
    break;
  case 3165:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 3198:
    wrapper->m_indexOfCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_indexOf>(callback);
    break;
  case 3199:
    wrapper->m_indexOf_2Callback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_indexOf_2>(
        callback);
    break;
  case 3166:
    wrapper->m_invalidateCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_invalidate>(
        callback);
    break;
  case 3167:
    wrapper->m_isEmptyCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_isEmpty>(callback);
    break;
  case 3205:
    wrapper->m_itemAtCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_itemAt>(callback);
    break;
  case 3168:
    wrapper->m_layoutCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_layout>(callback);
    break;
  case 3169:
    wrapper->m_maximumSizeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_maximumSize>(
        callback);
    break;
  case 3170:
    wrapper->m_minimumHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QLayout_wrapper::
                             Callback_minimumHeightForWidth>(callback);
    break;
  case 3171:
    wrapper->m_minimumSizeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_minimumSize>(
        callback);
    break;
  case 3172:
    wrapper->m_setGeometryCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_setGeometry>(
        callback);
    break;
  case 3224:
    wrapper->m_setSpacingCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_setSpacing>(
        callback);
    break;
  case 3173:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_sizeHint>(
        callback);
    break;
  case 3226:
    wrapper->m_spacingCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_spacing>(callback);
    break;
  case 3228:
    wrapper->m_takeAtCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_takeAt>(callback);
    break;
  case 3174:
    wrapper->m_widgetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_widget>(callback);
    break;
  }
}
}
