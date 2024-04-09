#include "QFrame_wrapper.h"

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
QFrame_wrapper::QFrame_wrapper(QWidget *parent) : ::QFrame(parent) {}
void QFrame_wrapper::changeEvent(QEvent *arg__1) {
  // tag=1000
  if (m_changeEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QFrame::changeEvent(arg__1);
  }
}
// tag=1009
void QFrame_wrapper::changeEvent_nocallback(QEvent *arg__1) {
  // tag=1003
  ::QFrame::changeEvent(arg__1);
}
void QFrame_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QFrame::customEvent(event);
  }
}
// tag=1009
void QFrame_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QFrame::customEvent(event);
}
int QFrame_wrapper::devType() const {
  // tag=1000
  if (m_devTypeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QFrame::devType();
  }
}
// tag=1009
int QFrame_wrapper::devType_nocallback() const {
  // tag=1003
  return ::QFrame::devType();
}
void QFrame_wrapper::drawFrame(QPainter *arg__1) {
  // tag=1000

  // tag=1004
  ::QFrame::drawFrame(arg__1);
}
bool QFrame_wrapper::event(QEvent *e) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), e);
  } else {
    // tag=1002
    return ::QFrame::event(e);
  }
}
// tag=1009
bool QFrame_wrapper::event_nocallback(QEvent *e) {
  // tag=1003
  return ::QFrame::event(e);
}
bool QFrame_wrapper::eventFilter(QObject *watched, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    // tag=1002
    return ::QFrame::eventFilter(watched, event);
  }
}
// tag=1009
bool QFrame_wrapper::eventFilter_nocallback(QObject *watched, QEvent *event) {
  // tag=1003
  return ::QFrame::eventFilter(watched, event);
}
bool QFrame_wrapper::focusNextPrevChild(bool next) {
  // tag=1000
  if (m_focusNextPrevChildCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    // tag=1002
    return ::QFrame::focusNextPrevChild(next);
  }
}
// tag=1009
bool QFrame_wrapper::focusNextPrevChild_nocallback(bool next) {
  // tag=1003
  return ::QFrame::focusNextPrevChild(next);
}
QRect QFrame_wrapper::frameRect() const {
  // tag=1000

  // tag=1004
  return ::QFrame::frameRect();
}
int QFrame_wrapper::frameStyle() const {
  // tag=1000

  // tag=1004
  return ::QFrame::frameStyle();
}
int QFrame_wrapper::frameWidth() const {
  // tag=1000

  // tag=1004
  return ::QFrame::frameWidth();
}
bool QFrame_wrapper::hasHeightForWidth() const {
  // tag=1000
  if (m_hasHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QFrame::hasHeightForWidth();
  }
}
// tag=1009
bool QFrame_wrapper::hasHeightForWidth_nocallback() const {
  // tag=1003
  return ::QFrame::hasHeightForWidth();
}
int QFrame_wrapper::heightForWidth(int arg__1) const {
  // tag=1000
  if (m_heightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QFrame::heightForWidth(arg__1);
  }
}
// tag=1009
int QFrame_wrapper::heightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QFrame::heightForWidth(arg__1);
}
void QFrame_wrapper::initPainter(QPainter *painter) const {
  // tag=1000
  if (m_initPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    // tag=1002
    ::QFrame::initPainter(painter);
  }
}
// tag=1009
void QFrame_wrapper::initPainter_nocallback(QPainter *painter) const {
  // tag=1003
  ::QFrame::initPainter(painter);
}
void QFrame_wrapper::leaveEvent(QEvent *event) {
  // tag=1000
  if (m_leaveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QFrame::leaveEvent(event);
  }
}
// tag=1009
void QFrame_wrapper::leaveEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QFrame::leaveEvent(event);
}
int QFrame_wrapper::lineWidth() const {
  // tag=1000

  // tag=1004
  return ::QFrame::lineWidth();
}
int QFrame_wrapper::midLineWidth() const {
  // tag=1000

  // tag=1004
  return ::QFrame::midLineWidth();
}
QSize QFrame_wrapper::minimumSizeHint() const {
  // tag=1000
  if (m_minimumSizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QFrame::minimumSizeHint();
  }
}
// tag=1009
QSize QFrame_wrapper::minimumSizeHint_nocallback() const {
  // tag=1003
  return ::QFrame::minimumSizeHint();
}
void QFrame_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseDoubleClickEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QFrame::mouseDoubleClickEvent(event);
  }
}
// tag=1009
void QFrame_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QFrame::mouseDoubleClickEvent(event);
}
void QFrame_wrapper::mouseMoveEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseMoveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QFrame::mouseMoveEvent(event);
  }
}
// tag=1009
void QFrame_wrapper::mouseMoveEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QFrame::mouseMoveEvent(event);
}
void QFrame_wrapper::mousePressEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mousePressEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QFrame::mousePressEvent(event);
  }
}
// tag=1009
void QFrame_wrapper::mousePressEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QFrame::mousePressEvent(event);
}
void QFrame_wrapper::mouseReleaseEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseReleaseEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QFrame::mouseReleaseEvent(event);
  }
}
// tag=1009
void QFrame_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QFrame::mouseReleaseEvent(event);
}
void QFrame_wrapper::paintEvent(QPaintEvent *arg__1) {
  // tag=1000
  if (m_paintEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QFrame::paintEvent(arg__1);
  }
}
// tag=1009
void QFrame_wrapper::paintEvent_nocallback(QPaintEvent *arg__1) {
  // tag=1003
  ::QFrame::paintEvent(arg__1);
}
void QFrame_wrapper::setFrameRect(const QRect &arg__1) {
  // tag=1000

  // tag=1004
  ::QFrame::setFrameRect(arg__1);
}
void QFrame_wrapper::setFrameStyle(int arg__1) {
  // tag=1000

  // tag=1004
  ::QFrame::setFrameStyle(arg__1);
}
void QFrame_wrapper::setLineWidth(int arg__1) {
  // tag=1000

  // tag=1004
  ::QFrame::setLineWidth(arg__1);
}
void QFrame_wrapper::setMidLineWidth(int arg__1) {
  // tag=1000

  // tag=1004
  ::QFrame::setMidLineWidth(arg__1);
}
void QFrame_wrapper::setVisible(bool visible) {
  // tag=1000
  if (m_setVisibleCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    // tag=1002
    ::QFrame::setVisible(visible);
  }
}
// tag=1009
void QFrame_wrapper::setVisible_nocallback(bool visible) {
  // tag=1003
  ::QFrame::setVisible(visible);
}
QPainter *QFrame_wrapper::sharedPainter() const {
  // tag=1000
  if (m_sharedPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QFrame::sharedPainter();
  }
}
// tag=1009
QPainter *QFrame_wrapper::sharedPainter_nocallback() const {
  // tag=1003
  return ::QFrame::sharedPainter();
}
QSize QFrame_wrapper::sizeHint() const {
  // tag=1000
  if (m_sizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QFrame::sizeHint();
  }
}
// tag=1009
QSize QFrame_wrapper::sizeHint_nocallback() const {
  // tag=1003
  return ::QFrame::sizeHint();
}
QString QFrame_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QFrame::tr(s, c, n);
}

// tag=1005
QFrame_wrapper::~QFrame_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QFrame *fromPtr(void *ptr) { return reinterpret_cast<QFrame *>(ptr); }
// tag=1014
static QtDartBindings_wrappersNS::QFrame_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QFrame_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QFrame_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QFrame_wrapper *>(cppObj);
}
void *c_QFrame__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QFrame_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// changeEvent(QEvent * arg__1)
void c_QFrame__changeEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->changeEvent_nocallback(arg__1);
}

// tag=1079
void c_QFrame__onCustomContextMenuRequested_QPoint(void *thisObj,
                                                   void *contextQObject,
                                                   void *callback) {
  auto instance = reinterpret_cast<QFrame *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QFrame::customContextMenuRequested,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// customEvent(QEvent * event)
void c_QFrame__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// devType() const
int c_QFrame__devType(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QFrame_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->devType_nocallback();
        } else {
          return targetPtr->devType();
        }
      }();
}

// tag=1050
// drawFrame(QPainter * arg__1)
void c_QFrame__drawFrame_QPainter(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QPainter *>(arg__1_);
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->drawFrame(arg__1);
}

// tag=1050
// event(QEvent * e)
bool c_QFrame__event_QEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QEvent *>(e_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->event_nocallback(e);
}

// tag=1050
// eventFilter(QObject * watched, QEvent * event)
bool c_QFrame__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                          void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QFrame_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->eventFilter_nocallback(watched, event);
        } else {
          return targetPtr->eventFilter(watched, event);
        }
      }();
}

// tag=1050
// focusNextPrevChild(bool next)
bool c_QFrame__focusNextPrevChild_bool(void *thisObj, bool next) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
}

// tag=1050
// frameRect() const
void *c_QFrame__frameRect(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->frameRect()};
}

// tag=1050
// frameStyle() const
int c_QFrame__frameStyle(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->frameStyle();
}

// tag=1050
// frameWidth() const
int c_QFrame__frameWidth(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->frameWidth();
}

// tag=1050
// hasHeightForWidth() const
bool c_QFrame__hasHeightForWidth(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QFrame_wrapper *>(
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
int c_QFrame__heightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QFrame_wrapper *>(
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
void c_QFrame__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}

// tag=1050
// leaveEvent(QEvent * event)
void c_QFrame__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}

// tag=1050
// lineWidth() const
int c_QFrame__lineWidth(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->lineWidth();
}

// tag=1050
// midLineWidth() const
int c_QFrame__midLineWidth(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->midLineWidth();
}

// tag=1050
// minimumSizeHint() const
void *c_QFrame__minimumSizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QFrame_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->minimumSizeHint_nocallback();
        } else {
          return targetPtr->minimumSizeHint();
        }
      }()};
}

// tag=1050
// mouseDoubleClickEvent(QMouseEvent * event)
void c_QFrame__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}

// tag=1050
// mouseMoveEvent(QMouseEvent * event)
void c_QFrame__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(event);
}

// tag=1050
// mousePressEvent(QMouseEvent * event)
void c_QFrame__mousePressEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(event);
}

// tag=1050
// mouseReleaseEvent(QMouseEvent * event)
void c_QFrame__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(event);
}

// tag=1050
// paintEvent(QPaintEvent * arg__1)
void c_QFrame__paintEvent_QPaintEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QPaintEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->paintEvent_nocallback(arg__1);
}

// tag=1050
// setFrameRect(const QRect & arg__1)
void c_QFrame__setFrameRect_QRect(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setFrameRect(arg__1);
}

// tag=1050
// setFrameStyle(int arg__1)
void c_QFrame__setFrameStyle_int(void *thisObj, int arg__1) {
  // tag=1010
  fromPtr(thisObj)->setFrameStyle(arg__1);
}

// tag=1050
// setLineWidth(int arg__1)
void c_QFrame__setLineWidth_int(void *thisObj, int arg__1) {
  // tag=1010
  fromPtr(thisObj)->setLineWidth(arg__1);
}

// tag=1050
// setMidLineWidth(int arg__1)
void c_QFrame__setMidLineWidth_int(void *thisObj, int arg__1) {
  // tag=1010
  fromPtr(thisObj)->setMidLineWidth(arg__1);
}

// tag=1050
// setVisible(bool visible)
void c_QFrame__setVisible_bool(void *thisObj, bool visible) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QFrame_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}

// tag=1050
// sharedPainter() const
void *c_QFrame__sharedPainter(void *thisObj) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->sharedPainter_nocallback();
}

// tag=1050
// sizeHint() const
void *c_QFrame__sizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QFrame_wrapper *>(
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
void *c_static_QFrame__tr_char_char_int(const char *s, const char *c, int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QFrame_wrapper::tr(s, c, n)};
}

// tag=1079
void c_QFrame__onWindowIconChanged_QIcon(void *thisObj, void *contextQObject,
                                         void *callback) {
  auto instance = reinterpret_cast<QFrame *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QFrame::windowIconChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1079
void c_QFrame__onWindowIconTextChanged_QString(void *thisObj,
                                               void *contextQObject,
                                               void *callback) {
  auto instance = reinterpret_cast<QFrame *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QFrame::windowIconTextChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1079
void c_QFrame__onWindowTitleChanged_QString(void *thisObj, void *contextQObject,
                                            void *callback) {
  auto instance = reinterpret_cast<QFrame *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QFrame::windowTitleChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QFrame__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QFrame__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1124:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 944:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_customEvent>(
        callback);
    break;
  case 1141:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_devType>(callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_event>(callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1150:
    wrapper->m_focusNextPrevChildCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_focusNextPrevChild>(
        callback);
    break;
  case 1164:
    wrapper->m_hasHeightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_hasHeightForWidth>(
        callback);
    break;
  case 1168:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 1171:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_initPainter>(
        callback);
    break;
  case 1196:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1216:
    wrapper->m_minimumSizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_minimumSizeHint>(
        callback);
    break;
  case 1218:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QFrame_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1220:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_mouseMoveEvent>(
        callback);
    break;
  case 1221:
    wrapper->m_mousePressEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_mousePressEvent>(
        callback);
    break;
  case 1222:
    wrapper->m_mouseReleaseEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_mouseReleaseEvent>(
        callback);
    break;
  case 1229:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 1309:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_setVisible>(
        callback);
    break;
  case 1318:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1326:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QFrame_wrapper::Callback_sizeHint>(callback);
    break;
  }
}
}
