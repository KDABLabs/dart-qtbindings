#include "QAbstractScrollArea_wrapper.h"

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
QAbstractScrollArea_wrapper::QAbstractScrollArea_wrapper(QWidget *parent)
    : ::QAbstractScrollArea(parent) {}
void QAbstractScrollArea_wrapper::changeEvent(QEvent *arg__1) {
  // tag=1000
  if (m_changeEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QAbstractScrollArea::changeEvent(arg__1);
  }
}
// tag=1009
void QAbstractScrollArea_wrapper::changeEvent_nocallback(QEvent *arg__1) {
  // tag=1003
  ::QAbstractScrollArea::changeEvent(arg__1);
}
QWidget *QAbstractScrollArea_wrapper::cornerWidget() const {
  // tag=1000

  // tag=1004
  return ::QAbstractScrollArea::cornerWidget();
}
void QAbstractScrollArea_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QAbstractScrollArea::customEvent(event);
  }
}
// tag=1009
void QAbstractScrollArea_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QAbstractScrollArea::customEvent(event);
}
int QAbstractScrollArea_wrapper::devType() const {
  // tag=1000
  if (m_devTypeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QAbstractScrollArea::devType();
  }
}
// tag=1009
int QAbstractScrollArea_wrapper::devType_nocallback() const {
  // tag=1003
  return ::QAbstractScrollArea::devType();
}
bool QAbstractScrollArea_wrapper::event(QEvent *arg__1) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QAbstractScrollArea::event(arg__1);
  }
}
// tag=1009
bool QAbstractScrollArea_wrapper::event_nocallback(QEvent *arg__1) {
  // tag=1003
  return ::QAbstractScrollArea::event(arg__1);
}
bool QAbstractScrollArea_wrapper::eventFilter(QObject *arg__1, QEvent *arg__2) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), arg__1, arg__2);
  } else {
    // tag=1002
    return ::QAbstractScrollArea::eventFilter(arg__1, arg__2);
  }
}
// tag=1009
bool QAbstractScrollArea_wrapper::eventFilter_nocallback(QObject *arg__1,
                                                         QEvent *arg__2) {
  // tag=1003
  return ::QAbstractScrollArea::eventFilter(arg__1, arg__2);
}
bool QAbstractScrollArea_wrapper::focusNextPrevChild(bool next) {
  // tag=1000
  if (m_focusNextPrevChildCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    // tag=1002
    return ::QAbstractScrollArea::focusNextPrevChild(next);
  }
}
// tag=1009
bool QAbstractScrollArea_wrapper::focusNextPrevChild_nocallback(bool next) {
  // tag=1003
  return ::QAbstractScrollArea::focusNextPrevChild(next);
}
bool QAbstractScrollArea_wrapper::hasHeightForWidth() const {
  // tag=1000
  if (m_hasHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QAbstractScrollArea::hasHeightForWidth();
  }
}
// tag=1009
bool QAbstractScrollArea_wrapper::hasHeightForWidth_nocallback() const {
  // tag=1003
  return ::QAbstractScrollArea::hasHeightForWidth();
}
int QAbstractScrollArea_wrapper::heightForWidth(int arg__1) const {
  // tag=1000
  if (m_heightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QAbstractScrollArea::heightForWidth(arg__1);
  }
}
// tag=1009
int QAbstractScrollArea_wrapper::heightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QAbstractScrollArea::heightForWidth(arg__1);
}
void QAbstractScrollArea_wrapper::initPainter(QPainter *painter) const {
  // tag=1000
  if (m_initPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    // tag=1002
    ::QAbstractScrollArea::initPainter(painter);
  }
}
// tag=1009
void QAbstractScrollArea_wrapper::initPainter_nocallback(
    QPainter *painter) const {
  // tag=1003
  ::QAbstractScrollArea::initPainter(painter);
}
void QAbstractScrollArea_wrapper::leaveEvent(QEvent *event) {
  // tag=1000
  if (m_leaveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QAbstractScrollArea::leaveEvent(event);
  }
}
// tag=1009
void QAbstractScrollArea_wrapper::leaveEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QAbstractScrollArea::leaveEvent(event);
}
QSize QAbstractScrollArea_wrapper::maximumViewportSize() const {
  // tag=1000

  // tag=1004
  return ::QAbstractScrollArea::maximumViewportSize();
}
QSize QAbstractScrollArea_wrapper::minimumSizeHint() const {
  // tag=1000
  if (m_minimumSizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QAbstractScrollArea::minimumSizeHint();
  }
}
// tag=1009
QSize QAbstractScrollArea_wrapper::minimumSizeHint_nocallback() const {
  // tag=1003
  return ::QAbstractScrollArea::minimumSizeHint();
}
void QAbstractScrollArea_wrapper::mouseDoubleClickEvent(QMouseEvent *arg__1) {
  // tag=1000
  if (m_mouseDoubleClickEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QAbstractScrollArea::mouseDoubleClickEvent(arg__1);
  }
}
// tag=1009
void QAbstractScrollArea_wrapper::mouseDoubleClickEvent_nocallback(
    QMouseEvent *arg__1) {
  // tag=1003
  ::QAbstractScrollArea::mouseDoubleClickEvent(arg__1);
}
void QAbstractScrollArea_wrapper::mouseMoveEvent(QMouseEvent *arg__1) {
  // tag=1000
  if (m_mouseMoveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QAbstractScrollArea::mouseMoveEvent(arg__1);
  }
}
// tag=1009
void QAbstractScrollArea_wrapper::mouseMoveEvent_nocallback(
    QMouseEvent *arg__1) {
  // tag=1003
  ::QAbstractScrollArea::mouseMoveEvent(arg__1);
}
void QAbstractScrollArea_wrapper::mousePressEvent(QMouseEvent *arg__1) {
  // tag=1000
  if (m_mousePressEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QAbstractScrollArea::mousePressEvent(arg__1);
  }
}
// tag=1009
void QAbstractScrollArea_wrapper::mousePressEvent_nocallback(
    QMouseEvent *arg__1) {
  // tag=1003
  ::QAbstractScrollArea::mousePressEvent(arg__1);
}
void QAbstractScrollArea_wrapper::mouseReleaseEvent(QMouseEvent *arg__1) {
  // tag=1000
  if (m_mouseReleaseEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QAbstractScrollArea::mouseReleaseEvent(arg__1);
  }
}
// tag=1009
void QAbstractScrollArea_wrapper::mouseReleaseEvent_nocallback(
    QMouseEvent *arg__1) {
  // tag=1003
  ::QAbstractScrollArea::mouseReleaseEvent(arg__1);
}
void QAbstractScrollArea_wrapper::paintEvent(QPaintEvent *arg__1) {
  // tag=1000
  if (m_paintEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QAbstractScrollArea::paintEvent(arg__1);
  }
}
// tag=1009
void QAbstractScrollArea_wrapper::paintEvent_nocallback(QPaintEvent *arg__1) {
  // tag=1003
  ::QAbstractScrollArea::paintEvent(arg__1);
}
void QAbstractScrollArea_wrapper::scrollContentsBy(int dx, int dy) {
  // tag=1000
  if (m_scrollContentsByCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_scrollContentsByCallback(const_cast<void *>(thisPtr), dx, dy);
  } else {
    // tag=1002
    ::QAbstractScrollArea::scrollContentsBy(dx, dy);
  }
}
// tag=1009
void QAbstractScrollArea_wrapper::scrollContentsBy_nocallback(int dx, int dy) {
  // tag=1003
  ::QAbstractScrollArea::scrollContentsBy(dx, dy);
}
void QAbstractScrollArea_wrapper::setCornerWidget(QWidget *widget) {
  // tag=1000

  // tag=1004
  ::QAbstractScrollArea::setCornerWidget(widget);
}
void QAbstractScrollArea_wrapper::setViewport(QWidget *widget) {
  // tag=1000

  // tag=1004
  ::QAbstractScrollArea::setViewport(widget);
}
void QAbstractScrollArea_wrapper::setViewportMargins(int left, int top,
                                                     int right, int bottom) {
  // tag=1000

  // tag=1004
  ::QAbstractScrollArea::setViewportMargins(left, top, right, bottom);
}
void QAbstractScrollArea_wrapper::setVisible(bool visible) {
  // tag=1000
  if (m_setVisibleCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    // tag=1002
    ::QAbstractScrollArea::setVisible(visible);
  }
}
// tag=1009
void QAbstractScrollArea_wrapper::setVisible_nocallback(bool visible) {
  // tag=1003
  ::QAbstractScrollArea::setVisible(visible);
}
void QAbstractScrollArea_wrapper::setupViewport(QWidget *viewport) {
  // tag=1000
  if (m_setupViewportCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setupViewportCallback(const_cast<void *>(thisPtr), viewport);
  } else {
    // tag=1002
    ::QAbstractScrollArea::setupViewport(viewport);
  }
}
// tag=1009
void QAbstractScrollArea_wrapper::setupViewport_nocallback(QWidget *viewport) {
  // tag=1003
  ::QAbstractScrollArea::setupViewport(viewport);
}
QPainter *QAbstractScrollArea_wrapper::sharedPainter() const {
  // tag=1000
  if (m_sharedPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QAbstractScrollArea::sharedPainter();
  }
}
// tag=1009
QPainter *QAbstractScrollArea_wrapper::sharedPainter_nocallback() const {
  // tag=1003
  return ::QAbstractScrollArea::sharedPainter();
}
QSize QAbstractScrollArea_wrapper::sizeHint() const {
  // tag=1000
  if (m_sizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QAbstractScrollArea::sizeHint();
  }
}
// tag=1009
QSize QAbstractScrollArea_wrapper::sizeHint_nocallback() const {
  // tag=1003
  return ::QAbstractScrollArea::sizeHint();
}
QString QAbstractScrollArea_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QAbstractScrollArea::tr(s, c, n);
}
QWidget *QAbstractScrollArea_wrapper::viewport() const {
  // tag=1000

  // tag=1004
  return ::QAbstractScrollArea::viewport();
}
bool QAbstractScrollArea_wrapper::viewportEvent(QEvent *arg__1) {
  // tag=1000
  if (m_viewportEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_viewportEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QAbstractScrollArea::viewportEvent(arg__1);
  }
}
// tag=1009
bool QAbstractScrollArea_wrapper::viewportEvent_nocallback(QEvent *arg__1) {
  // tag=1003
  return ::QAbstractScrollArea::viewportEvent(arg__1);
}
QSize QAbstractScrollArea_wrapper::viewportSizeHint() const {
  // tag=1000
  if (m_viewportSizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_viewportSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QAbstractScrollArea::viewportSizeHint();
  }
}
// tag=1009
QSize QAbstractScrollArea_wrapper::viewportSizeHint_nocallback() const {
  // tag=1003
  return ::QAbstractScrollArea::viewportSizeHint();
}

// tag=1005
QAbstractScrollArea_wrapper::~QAbstractScrollArea_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QAbstractScrollArea *fromPtr(void *ptr) {
  return reinterpret_cast<QAbstractScrollArea *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<
      QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QAbstractScrollArea_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper *>(cppObj);
}
void *c_QAbstractScrollArea__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// changeEvent(QEvent * arg__1)
void c_QAbstractScrollArea__changeEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->changeEvent_nocallback(arg__1);
}

// tag=1050
// cornerWidget() const
void *c_QAbstractScrollArea__cornerWidget(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->cornerWidget();
}

// tag=1050
// customEvent(QEvent * event)
void c_QAbstractScrollArea__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// devType() const
int c_QAbstractScrollArea__devType(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->devType_nocallback();
        } else {
          return targetPtr->devType();
        }
      }();
}

// tag=1050
// event(QEvent * arg__1)
bool c_QAbstractScrollArea__event_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->event_nocallback(arg__1);
}

// tag=1050
// eventFilter(QObject * arg__1, QEvent * arg__2)
bool c_QAbstractScrollArea__eventFilter_QObject_QEvent(void *thisObj,
                                                       void *arg__1_,
                                                       void *arg__2_) {
  auto arg__1 = reinterpret_cast<QObject *>(arg__1_);
  auto arg__2 = reinterpret_cast<QEvent *>(arg__2_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->eventFilter_nocallback(arg__1, arg__2);
}

// tag=1050
// focusNextPrevChild(bool next)
bool c_QAbstractScrollArea__focusNextPrevChild_bool(void *thisObj, bool next) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
}

// tag=1050
// hasHeightForWidth() const
bool c_QAbstractScrollArea__hasHeightForWidth(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper *>(
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
int c_QAbstractScrollArea__heightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->heightForWidth_nocallback(arg__1);
        } else {
          return targetPtr->heightForWidth(arg__1);
        }
      }();
}

// tag=1050
// initPainter(QPainter * painter) const
void c_QAbstractScrollArea__initPainter_QPainter(void *thisObj,
                                                 void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}

// tag=1050
// leaveEvent(QEvent * event)
void c_QAbstractScrollArea__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}

// tag=1050
// maximumViewportSize() const
void *c_QAbstractScrollArea__maximumViewportSize(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{
          fromPtr(thisObj)->maximumViewportSize()};
}

// tag=1050
// minimumSizeHint() const
void *c_QAbstractScrollArea__minimumSizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->minimumSizeHint_nocallback();
        } else {
          return targetPtr->minimumSizeHint();
        }
      }()};
}

// tag=1050
// mouseDoubleClickEvent(QMouseEvent * arg__1)
void c_QAbstractScrollArea__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                              void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(arg__1);
}

// tag=1050
// mouseMoveEvent(QMouseEvent * arg__1)
void c_QAbstractScrollArea__mouseMoveEvent_QMouseEvent(void *thisObj,
                                                       void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(arg__1);
}

// tag=1050
// mousePressEvent(QMouseEvent * arg__1)
void c_QAbstractScrollArea__mousePressEvent_QMouseEvent(void *thisObj,
                                                        void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(arg__1);
}

// tag=1050
// mouseReleaseEvent(QMouseEvent * arg__1)
void c_QAbstractScrollArea__mouseReleaseEvent_QMouseEvent(void *thisObj,
                                                          void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(arg__1);
}

// tag=1050
// paintEvent(QPaintEvent * arg__1)
void c_QAbstractScrollArea__paintEvent_QPaintEvent(void *thisObj,
                                                   void *arg__1_) {
  auto arg__1 = reinterpret_cast<QPaintEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->paintEvent_nocallback(arg__1);
}

// tag=1050
// scrollContentsBy(int dx, int dy)
void c_QAbstractScrollArea__scrollContentsBy_int_int(void *thisObj, int dx,
                                                     int dy) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->scrollContentsBy_nocallback(dx, dy);
}

// tag=1050
// setCornerWidget(QWidget * widget)
void c_QAbstractScrollArea__setCornerWidget_QWidget(void *thisObj,
                                                    void *widget_) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  // tag=1010
  fromPtr(thisObj)->setCornerWidget(widget);
}

// tag=1050
// setViewport(QWidget * widget)
void c_QAbstractScrollArea__setViewport_QWidget(void *thisObj, void *widget_) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  // tag=1010
  fromPtr(thisObj)->setViewport(widget);
}

// tag=1050
// setViewportMargins(int left, int top, int right, int bottom)
void c_QAbstractScrollArea__setViewportMargins_int_int_int_int(
    void *thisObj, int left, int top, int right, int bottom) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->setViewportMargins(left, top, right, bottom);
}

// tag=1050
// setVisible(bool visible)
void c_QAbstractScrollArea__setVisible_bool(void *thisObj, bool visible) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}

// tag=1050
// setupViewport(QWidget * viewport)
void c_QAbstractScrollArea__setupViewport_QWidget(void *thisObj,
                                                  void *viewport_) {
  auto viewport = reinterpret_cast<QWidget *>(viewport_);
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setupViewport_nocallback(viewport);
    } else {
      return targetPtr->setupViewport(viewport);
    }
  }();
}

// tag=1050
// sharedPainter() const
void *c_QAbstractScrollArea__sharedPainter(void *thisObj) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->sharedPainter_nocallback();
}

// tag=1050
// sizeHint() const
void *c_QAbstractScrollArea__sizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr = dynamic_cast<
            QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper *>(
            targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->sizeHint_nocallback();
        } else {
          return targetPtr->sizeHint();
        }
      }()};
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QAbstractScrollArea__tr_char_char_int(const char *s,
                                                     const char *c, int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper::tr(s, c, n)};
}

// tag=1050
// viewport() const
void *c_QAbstractScrollArea__viewport(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->viewport();
}

// tag=1050
// viewportEvent(QEvent * arg__1)
bool c_QAbstractScrollArea__viewportEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->viewportEvent_nocallback(arg__1);
}

// tag=1050
// viewportSizeHint() const
void *c_QAbstractScrollArea__viewportSizeHint(void *thisObj) {
  return
      // tag=1011

      // tag=1074

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{
          fromWrapperPtr(thisObj)->viewportSizeHint_nocallback()};
}
void c_QAbstractScrollArea__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QAbstractScrollArea__registerVirtualMethodCallback(void *ptr,
                                                          void *callback,
                                                          int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1124:
    wrapper->m_changeEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractScrollArea_wrapper::Callback_changeEvent>(
            callback);
    break;
  case 944:
    wrapper->m_customEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractScrollArea_wrapper::Callback_customEvent>(
            callback);
    break;
  case 1141:
    wrapper->m_devTypeCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractScrollArea_wrapper::Callback_devType>(
            callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper::Callback_event>(
        callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractScrollArea_wrapper::Callback_eventFilter>(
            callback);
    break;
  case 1150:
    wrapper->m_focusNextPrevChildCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper::
            Callback_focusNextPrevChild>(callback);
    break;
  case 1164:
    wrapper->m_hasHeightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper::
            Callback_hasHeightForWidth>(callback);
    break;
  case 1168:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper::
            Callback_heightForWidth>(callback);
    break;
  case 1171:
    wrapper->m_initPainterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractScrollArea_wrapper::Callback_initPainter>(
            callback);
    break;
  case 1196:
    wrapper->m_leaveEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractScrollArea_wrapper::Callback_leaveEvent>(
            callback);
    break;
  case 1216:
    wrapper->m_minimumSizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper::
            Callback_minimumSizeHint>(callback);
    break;
  case 1218:
    wrapper->m_mouseDoubleClickEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper::
            Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1220:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper::
            Callback_mouseMoveEvent>(callback);
    break;
  case 1221:
    wrapper->m_mousePressEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper::
            Callback_mousePressEvent>(callback);
    break;
  case 1222:
    wrapper->m_mouseReleaseEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper::
            Callback_mouseReleaseEvent>(callback);
    break;
  case 1229:
    wrapper->m_paintEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractScrollArea_wrapper::Callback_paintEvent>(
            callback);
    break;
  case 5199:
    wrapper->m_scrollContentsByCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper::
            Callback_scrollContentsBy>(callback);
    break;
  case 1309:
    wrapper->m_setVisibleCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractScrollArea_wrapper::Callback_setVisible>(
            callback);
    break;
  case 5207:
    wrapper->m_setupViewportCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper::
            Callback_setupViewport>(callback);
    break;
  case 1318:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper::
            Callback_sharedPainter>(callback);
    break;
  case 1326:
    wrapper->m_sizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::
                             QAbstractScrollArea_wrapper::Callback_sizeHint>(
            callback);
    break;
  case 5210:
    wrapper->m_viewportEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper::
            Callback_viewportEvent>(callback);
    break;
  case 5211:
    wrapper->m_viewportSizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractScrollArea_wrapper::
            Callback_viewportSizeHint>(callback);
    break;
  }
}
}
