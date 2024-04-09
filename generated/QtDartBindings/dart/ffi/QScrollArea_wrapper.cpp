#include "QScrollArea_wrapper.h"

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
QScrollArea_wrapper::QScrollArea_wrapper(QWidget *parent)
    : ::QScrollArea(parent) {}
void QScrollArea_wrapper::changeEvent(QEvent *arg__1) {
  // tag=1000
  if (m_changeEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QScrollArea::changeEvent(arg__1);
  }
}
// tag=1009
void QScrollArea_wrapper::changeEvent_nocallback(QEvent *arg__1) {
  // tag=1003
  ::QScrollArea::changeEvent(arg__1);
}
void QScrollArea_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QScrollArea::customEvent(event);
  }
}
// tag=1009
void QScrollArea_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QScrollArea::customEvent(event);
}
int QScrollArea_wrapper::devType() const {
  // tag=1000
  if (m_devTypeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QScrollArea::devType();
  }
}
// tag=1009
int QScrollArea_wrapper::devType_nocallback() const {
  // tag=1003
  return ::QScrollArea::devType();
}
void QScrollArea_wrapper::ensureVisible(int x, int y, int xmargin,
                                        int ymargin) {
  // tag=1000

  // tag=1004
  ::QScrollArea::ensureVisible(x, y, xmargin, ymargin);
}
void QScrollArea_wrapper::ensureWidgetVisible(QWidget *childWidget, int xmargin,
                                              int ymargin) {
  // tag=1000

  // tag=1004
  ::QScrollArea::ensureWidgetVisible(childWidget, xmargin, ymargin);
}
bool QScrollArea_wrapper::event(QEvent *arg__1) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QScrollArea::event(arg__1);
  }
}
// tag=1009
bool QScrollArea_wrapper::event_nocallback(QEvent *arg__1) {
  // tag=1003
  return ::QScrollArea::event(arg__1);
}
bool QScrollArea_wrapper::eventFilter(QObject *arg__1, QEvent *arg__2) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), arg__1, arg__2);
  } else {
    // tag=1002
    return ::QScrollArea::eventFilter(arg__1, arg__2);
  }
}
// tag=1009
bool QScrollArea_wrapper::eventFilter_nocallback(QObject *arg__1,
                                                 QEvent *arg__2) {
  // tag=1003
  return ::QScrollArea::eventFilter(arg__1, arg__2);
}
bool QScrollArea_wrapper::focusNextPrevChild(bool next) {
  // tag=1000
  if (m_focusNextPrevChildCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    // tag=1002
    return ::QScrollArea::focusNextPrevChild(next);
  }
}
// tag=1009
bool QScrollArea_wrapper::focusNextPrevChild_nocallback(bool next) {
  // tag=1003
  return ::QScrollArea::focusNextPrevChild(next);
}
bool QScrollArea_wrapper::hasHeightForWidth() const {
  // tag=1000
  if (m_hasHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QScrollArea::hasHeightForWidth();
  }
}
// tag=1009
bool QScrollArea_wrapper::hasHeightForWidth_nocallback() const {
  // tag=1003
  return ::QScrollArea::hasHeightForWidth();
}
int QScrollArea_wrapper::heightForWidth(int arg__1) const {
  // tag=1000
  if (m_heightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QScrollArea::heightForWidth(arg__1);
  }
}
// tag=1009
int QScrollArea_wrapper::heightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QScrollArea::heightForWidth(arg__1);
}
void QScrollArea_wrapper::initPainter(QPainter *painter) const {
  // tag=1000
  if (m_initPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    // tag=1002
    ::QScrollArea::initPainter(painter);
  }
}
// tag=1009
void QScrollArea_wrapper::initPainter_nocallback(QPainter *painter) const {
  // tag=1003
  ::QScrollArea::initPainter(painter);
}
void QScrollArea_wrapper::leaveEvent(QEvent *event) {
  // tag=1000
  if (m_leaveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QScrollArea::leaveEvent(event);
  }
}
// tag=1009
void QScrollArea_wrapper::leaveEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QScrollArea::leaveEvent(event);
}
QSize QScrollArea_wrapper::minimumSizeHint() const {
  // tag=1000
  if (m_minimumSizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QScrollArea::minimumSizeHint();
  }
}
// tag=1009
QSize QScrollArea_wrapper::minimumSizeHint_nocallback() const {
  // tag=1003
  return ::QScrollArea::minimumSizeHint();
}
void QScrollArea_wrapper::mouseDoubleClickEvent(QMouseEvent *arg__1) {
  // tag=1000
  if (m_mouseDoubleClickEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QScrollArea::mouseDoubleClickEvent(arg__1);
  }
}
// tag=1009
void QScrollArea_wrapper::mouseDoubleClickEvent_nocallback(
    QMouseEvent *arg__1) {
  // tag=1003
  ::QScrollArea::mouseDoubleClickEvent(arg__1);
}
void QScrollArea_wrapper::mouseMoveEvent(QMouseEvent *arg__1) {
  // tag=1000
  if (m_mouseMoveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QScrollArea::mouseMoveEvent(arg__1);
  }
}
// tag=1009
void QScrollArea_wrapper::mouseMoveEvent_nocallback(QMouseEvent *arg__1) {
  // tag=1003
  ::QScrollArea::mouseMoveEvent(arg__1);
}
void QScrollArea_wrapper::mousePressEvent(QMouseEvent *arg__1) {
  // tag=1000
  if (m_mousePressEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QScrollArea::mousePressEvent(arg__1);
  }
}
// tag=1009
void QScrollArea_wrapper::mousePressEvent_nocallback(QMouseEvent *arg__1) {
  // tag=1003
  ::QScrollArea::mousePressEvent(arg__1);
}
void QScrollArea_wrapper::mouseReleaseEvent(QMouseEvent *arg__1) {
  // tag=1000
  if (m_mouseReleaseEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QScrollArea::mouseReleaseEvent(arg__1);
  }
}
// tag=1009
void QScrollArea_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *arg__1) {
  // tag=1003
  ::QScrollArea::mouseReleaseEvent(arg__1);
}
void QScrollArea_wrapper::paintEvent(QPaintEvent *arg__1) {
  // tag=1000
  if (m_paintEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QScrollArea::paintEvent(arg__1);
  }
}
// tag=1009
void QScrollArea_wrapper::paintEvent_nocallback(QPaintEvent *arg__1) {
  // tag=1003
  ::QScrollArea::paintEvent(arg__1);
}
void QScrollArea_wrapper::scrollContentsBy(int dx, int dy) {
  // tag=1000
  if (m_scrollContentsByCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_scrollContentsByCallback(const_cast<void *>(thisPtr), dx, dy);
  } else {
    // tag=1002
    ::QScrollArea::scrollContentsBy(dx, dy);
  }
}
// tag=1009
void QScrollArea_wrapper::scrollContentsBy_nocallback(int dx, int dy) {
  // tag=1003
  ::QScrollArea::scrollContentsBy(dx, dy);
}
void QScrollArea_wrapper::setVisible(bool visible) {
  // tag=1000
  if (m_setVisibleCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    // tag=1002
    ::QScrollArea::setVisible(visible);
  }
}
// tag=1009
void QScrollArea_wrapper::setVisible_nocallback(bool visible) {
  // tag=1003
  ::QScrollArea::setVisible(visible);
}
void QScrollArea_wrapper::setWidget(QWidget *widget) {
  // tag=1000

  // tag=1004
  ::QScrollArea::setWidget(widget);
}
void QScrollArea_wrapper::setWidgetResizable(bool resizable) {
  // tag=1000

  // tag=1004
  ::QScrollArea::setWidgetResizable(resizable);
}
void QScrollArea_wrapper::setupViewport(QWidget *viewport) {
  // tag=1000
  if (m_setupViewportCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setupViewportCallback(const_cast<void *>(thisPtr), viewport);
  } else {
    // tag=1002
    ::QScrollArea::setupViewport(viewport);
  }
}
// tag=1009
void QScrollArea_wrapper::setupViewport_nocallback(QWidget *viewport) {
  // tag=1003
  ::QScrollArea::setupViewport(viewport);
}
QPainter *QScrollArea_wrapper::sharedPainter() const {
  // tag=1000
  if (m_sharedPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QScrollArea::sharedPainter();
  }
}
// tag=1009
QPainter *QScrollArea_wrapper::sharedPainter_nocallback() const {
  // tag=1003
  return ::QScrollArea::sharedPainter();
}
QSize QScrollArea_wrapper::sizeHint() const {
  // tag=1000
  if (m_sizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QScrollArea::sizeHint();
  }
}
// tag=1009
QSize QScrollArea_wrapper::sizeHint_nocallback() const {
  // tag=1003
  return ::QScrollArea::sizeHint();
}
QWidget *QScrollArea_wrapper::takeWidget() {
  // tag=1000

  // tag=1004
  return ::QScrollArea::takeWidget();
}
QString QScrollArea_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QScrollArea::tr(s, c, n);
}
bool QScrollArea_wrapper::viewportEvent(QEvent *arg__1) {
  // tag=1000
  if (m_viewportEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_viewportEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QScrollArea::viewportEvent(arg__1);
  }
}
// tag=1009
bool QScrollArea_wrapper::viewportEvent_nocallback(QEvent *arg__1) {
  // tag=1003
  return ::QScrollArea::viewportEvent(arg__1);
}
QSize QScrollArea_wrapper::viewportSizeHint() const {
  // tag=1000
  if (m_viewportSizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_viewportSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QScrollArea::viewportSizeHint();
  }
}
// tag=1009
QSize QScrollArea_wrapper::viewportSizeHint_nocallback() const {
  // tag=1003
  return ::QScrollArea::viewportSizeHint();
}
QWidget *QScrollArea_wrapper::widget() const {
  // tag=1000

  // tag=1004
  return ::QScrollArea::widget();
}
bool QScrollArea_wrapper::widgetResizable() const {
  // tag=1000

  // tag=1004
  return ::QScrollArea::widgetResizable();
}

// tag=1005
QScrollArea_wrapper::~QScrollArea_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QScrollArea *fromPtr(void *ptr) {
  return reinterpret_cast<QScrollArea *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QScrollArea_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper *>(
      ptr);
}
extern "C" {

// tag=1049
void c_QScrollArea_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper *>(
      cppObj);
}
void *c_QScrollArea__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QScrollArea_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// changeEvent(QEvent * arg__1)
void c_QScrollArea__changeEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->changeEvent_nocallback(arg__1);
}

// tag=1050
// customEvent(QEvent * event)
void c_QScrollArea__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// devType() const
int c_QScrollArea__devType(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->devType_nocallback();
        } else {
          return targetPtr->devType();
        }
      }();
}

// tag=1050
// ensureVisible(int x, int y, int xmargin, int ymargin)
void c_QScrollArea__ensureVisible_int_int_int_int(void *thisObj, int x, int y,
                                                  int xmargin, int ymargin) {
  // tag=1010
  fromPtr(thisObj)->ensureVisible(x, y, xmargin, ymargin);
}

// tag=1050
// ensureWidgetVisible(QWidget * childWidget, int xmargin, int ymargin)
void c_QScrollArea__ensureWidgetVisible_QWidget_int_int(void *thisObj,
                                                        void *childWidget_,
                                                        int xmargin,
                                                        int ymargin) {
  auto childWidget = reinterpret_cast<QWidget *>(childWidget_);
  // tag=1010
  fromPtr(thisObj)->ensureWidgetVisible(childWidget, xmargin, ymargin);
}

// tag=1050
// event(QEvent * arg__1)
bool c_QScrollArea__event_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->event_nocallback(arg__1);
}

// tag=1050
// eventFilter(QObject * arg__1, QEvent * arg__2)
bool c_QScrollArea__eventFilter_QObject_QEvent(void *thisObj, void *arg__1_,
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
bool c_QScrollArea__focusNextPrevChild_bool(void *thisObj, bool next) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->focusNextPrevChild_nocallback(next);
        } else {
          return targetPtr->focusNextPrevChild(next);
        }
      }();
}

// tag=1050
// hasHeightForWidth() const
bool c_QScrollArea__hasHeightForWidth(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper *>(
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
int c_QScrollArea__heightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper *>(
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
void c_QScrollArea__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}

// tag=1050
// leaveEvent(QEvent * event)
void c_QScrollArea__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}

// tag=1050
// minimumSizeHint() const
void *c_QScrollArea__minimumSizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper *>(
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
void c_QScrollArea__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                      void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(arg__1);
}

// tag=1050
// mouseMoveEvent(QMouseEvent * arg__1)
void c_QScrollArea__mouseMoveEvent_QMouseEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(arg__1);
}

// tag=1050
// mousePressEvent(QMouseEvent * arg__1)
void c_QScrollArea__mousePressEvent_QMouseEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(arg__1);
}

// tag=1050
// mouseReleaseEvent(QMouseEvent * arg__1)
void c_QScrollArea__mouseReleaseEvent_QMouseEvent(void *thisObj,
                                                  void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(arg__1);
}

// tag=1050
// paintEvent(QPaintEvent * arg__1)
void c_QScrollArea__paintEvent_QPaintEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QPaintEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->paintEvent_nocallback(arg__1);
}

// tag=1050
// scrollContentsBy(int dx, int dy)
void c_QScrollArea__scrollContentsBy_int_int(void *thisObj, int dx, int dy) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->scrollContentsBy_nocallback(dx, dy);
}

// tag=1050
// setVisible(bool visible)
void c_QScrollArea__setVisible_bool(void *thisObj, bool visible) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}

// tag=1050
// setWidget(QWidget * widget)
void c_QScrollArea__setWidget_QWidget(void *thisObj, void *widget_) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  // tag=1010
  fromPtr(thisObj)->setWidget(widget);
}

// tag=1050
// setWidgetResizable(bool resizable)
void c_QScrollArea__setWidgetResizable_bool(void *thisObj, bool resizable) {
  // tag=1010
  fromPtr(thisObj)->setWidgetResizable(resizable);
}

// tag=1050
// setupViewport(QWidget * viewport)
void c_QScrollArea__setupViewport_QWidget(void *thisObj, void *viewport_) {
  auto viewport = reinterpret_cast<QWidget *>(viewport_);
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper *>(
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
void *c_QScrollArea__sharedPainter(void *thisObj) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->sharedPainter_nocallback();
}

// tag=1050
// sizeHint() const
void *c_QScrollArea__sizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->sizeHint_nocallback();
        } else {
          return targetPtr->sizeHint();
        }
      }()};
}

// tag=1050
// takeWidget()
void *c_QScrollArea__takeWidget(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->takeWidget();
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QScrollArea__tr_char_char_int(const char *s, const char *c,
                                             int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QScrollArea_wrapper::tr(s, c, n)};
}

// tag=1050
// viewportEvent(QEvent * arg__1)
bool c_QScrollArea__viewportEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->viewportEvent_nocallback(arg__1);
}

// tag=1050
// viewportSizeHint() const
void *c_QScrollArea__viewportSizeHint(void *thisObj) {
  return
      // tag=1011

      // tag=1074

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{
          fromWrapperPtr(thisObj)->viewportSizeHint_nocallback()};
}

// tag=1050
// widget() const
void *c_QScrollArea__widget(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->widget();
}

// tag=1050
// widgetResizable() const
bool c_QScrollArea__widgetResizable(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->widgetResizable();
}
void c_QScrollArea__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QScrollArea__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1124:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QScrollArea_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 944:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QScrollArea_wrapper::Callback_customEvent>(
        callback);
    break;
  case 1141:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QScrollArea_wrapper::Callback_devType>(
        callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QScrollArea_wrapper::Callback_event>(
        callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QScrollArea_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1150:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1164:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 1168:
    wrapper->m_heightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper::
                             Callback_heightForWidth>(callback);
    break;
  case 1171:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QScrollArea_wrapper::Callback_initPainter>(
        callback);
    break;
  case 1196:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QScrollArea_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1216:
    wrapper->m_minimumSizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper::
                             Callback_minimumSizeHint>(callback);
    break;
  case 1218:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1220:
    wrapper->m_mouseMoveEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper::
                             Callback_mouseMoveEvent>(callback);
    break;
  case 1221:
    wrapper->m_mousePressEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper::
                             Callback_mousePressEvent>(callback);
    break;
  case 1222:
    wrapper->m_mouseReleaseEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper::
                             Callback_mouseReleaseEvent>(callback);
    break;
  case 1229:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QScrollArea_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 5199:
    wrapper->m_scrollContentsByCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper::
                             Callback_scrollContentsBy>(callback);
    break;
  case 1309:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QScrollArea_wrapper::Callback_setVisible>(
        callback);
    break;
  case 5207:
    wrapper->m_setupViewportCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QScrollArea_wrapper::Callback_setupViewport>(
        callback);
    break;
  case 1318:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QScrollArea_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1326:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QScrollArea_wrapper::Callback_sizeHint>(
        callback);
    break;
  case 5210:
    wrapper->m_viewportEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QScrollArea_wrapper::Callback_viewportEvent>(
        callback);
    break;
  case 5211:
    wrapper->m_viewportSizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QScrollArea_wrapper::
                             Callback_viewportSizeHint>(callback);
    break;
  }
}
}
