#include "QStatusBar_wrapper.h"

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
QStatusBar_wrapper::QStatusBar_wrapper(QWidget *parent)
    : ::QStatusBar(parent) {}
void QStatusBar_wrapper::addPermanentWidget(QWidget *widget, int stretch) {
  // tag=1000

  // tag=1004
  ::QStatusBar::addPermanentWidget(widget, stretch);
}
void QStatusBar_wrapper::addWidget(QWidget *widget, int stretch) {
  // tag=1000

  // tag=1004
  ::QStatusBar::addWidget(widget, stretch);
}
void QStatusBar_wrapper::changeEvent(QEvent *arg__1) {
  // tag=1000
  if (m_changeEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QStatusBar::changeEvent(arg__1);
  }
}
// tag=1009
void QStatusBar_wrapper::changeEvent_nocallback(QEvent *arg__1) {
  // tag=1003
  ::QStatusBar::changeEvent(arg__1);
}
void QStatusBar_wrapper::clearMessage() {
  // tag=1000

  // tag=1004
  ::QStatusBar::clearMessage();
}
QString QStatusBar_wrapper::currentMessage() const {
  // tag=1000

  // tag=1004
  return ::QStatusBar::currentMessage();
}
void QStatusBar_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QStatusBar::customEvent(event);
  }
}
// tag=1009
void QStatusBar_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QStatusBar::customEvent(event);
}
int QStatusBar_wrapper::devType() const {
  // tag=1000
  if (m_devTypeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QStatusBar::devType();
  }
}
// tag=1009
int QStatusBar_wrapper::devType_nocallback() const {
  // tag=1003
  return ::QStatusBar::devType();
}
bool QStatusBar_wrapper::event(QEvent *arg__1) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QStatusBar::event(arg__1);
  }
}
// tag=1009
bool QStatusBar_wrapper::event_nocallback(QEvent *arg__1) {
  // tag=1003
  return ::QStatusBar::event(arg__1);
}
bool QStatusBar_wrapper::eventFilter(QObject *watched, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    // tag=1002
    return ::QStatusBar::eventFilter(watched, event);
  }
}
// tag=1009
bool QStatusBar_wrapper::eventFilter_nocallback(QObject *watched,
                                                QEvent *event) {
  // tag=1003
  return ::QStatusBar::eventFilter(watched, event);
}
bool QStatusBar_wrapper::focusNextPrevChild(bool next) {
  // tag=1000
  if (m_focusNextPrevChildCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    // tag=1002
    return ::QStatusBar::focusNextPrevChild(next);
  }
}
// tag=1009
bool QStatusBar_wrapper::focusNextPrevChild_nocallback(bool next) {
  // tag=1003
  return ::QStatusBar::focusNextPrevChild(next);
}
bool QStatusBar_wrapper::hasHeightForWidth() const {
  // tag=1000
  if (m_hasHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QStatusBar::hasHeightForWidth();
  }
}
// tag=1009
bool QStatusBar_wrapper::hasHeightForWidth_nocallback() const {
  // tag=1003
  return ::QStatusBar::hasHeightForWidth();
}
int QStatusBar_wrapper::heightForWidth(int arg__1) const {
  // tag=1000
  if (m_heightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QStatusBar::heightForWidth(arg__1);
  }
}
// tag=1009
int QStatusBar_wrapper::heightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QStatusBar::heightForWidth(arg__1);
}
void QStatusBar_wrapper::hideOrShow() {
  // tag=1000

  // tag=1004
  ::QStatusBar::hideOrShow();
}
void QStatusBar_wrapper::initPainter(QPainter *painter) const {
  // tag=1000
  if (m_initPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    // tag=1002
    ::QStatusBar::initPainter(painter);
  }
}
// tag=1009
void QStatusBar_wrapper::initPainter_nocallback(QPainter *painter) const {
  // tag=1003
  ::QStatusBar::initPainter(painter);
}
int QStatusBar_wrapper::insertPermanentWidget(int index, QWidget *widget,
                                              int stretch) {
  // tag=1000

  // tag=1004
  return ::QStatusBar::insertPermanentWidget(index, widget, stretch);
}
int QStatusBar_wrapper::insertWidget(int index, QWidget *widget, int stretch) {
  // tag=1000

  // tag=1004
  return ::QStatusBar::insertWidget(index, widget, stretch);
}
bool QStatusBar_wrapper::isSizeGripEnabled() const {
  // tag=1000

  // tag=1004
  return ::QStatusBar::isSizeGripEnabled();
}
void QStatusBar_wrapper::leaveEvent(QEvent *event) {
  // tag=1000
  if (m_leaveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QStatusBar::leaveEvent(event);
  }
}
// tag=1009
void QStatusBar_wrapper::leaveEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QStatusBar::leaveEvent(event);
}
void QStatusBar_wrapper::messageChanged(const QString &text) {
  // tag=1000

  // tag=1004
  ::QStatusBar::messageChanged(text);
}
QSize QStatusBar_wrapper::minimumSizeHint() const {
  // tag=1000
  if (m_minimumSizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QStatusBar::minimumSizeHint();
  }
}
// tag=1009
QSize QStatusBar_wrapper::minimumSizeHint_nocallback() const {
  // tag=1003
  return ::QStatusBar::minimumSizeHint();
}
void QStatusBar_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseDoubleClickEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QStatusBar::mouseDoubleClickEvent(event);
  }
}
// tag=1009
void QStatusBar_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QStatusBar::mouseDoubleClickEvent(event);
}
void QStatusBar_wrapper::mouseMoveEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseMoveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QStatusBar::mouseMoveEvent(event);
  }
}
// tag=1009
void QStatusBar_wrapper::mouseMoveEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QStatusBar::mouseMoveEvent(event);
}
void QStatusBar_wrapper::mousePressEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mousePressEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QStatusBar::mousePressEvent(event);
  }
}
// tag=1009
void QStatusBar_wrapper::mousePressEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QStatusBar::mousePressEvent(event);
}
void QStatusBar_wrapper::mouseReleaseEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseReleaseEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QStatusBar::mouseReleaseEvent(event);
  }
}
// tag=1009
void QStatusBar_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QStatusBar::mouseReleaseEvent(event);
}
void QStatusBar_wrapper::paintEvent(QPaintEvent *arg__1) {
  // tag=1000
  if (m_paintEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QStatusBar::paintEvent(arg__1);
  }
}
// tag=1009
void QStatusBar_wrapper::paintEvent_nocallback(QPaintEvent *arg__1) {
  // tag=1003
  ::QStatusBar::paintEvent(arg__1);
}
void QStatusBar_wrapper::reformat() {
  // tag=1000

  // tag=1004
  ::QStatusBar::reformat();
}
void QStatusBar_wrapper::removeWidget(QWidget *widget) {
  // tag=1000

  // tag=1004
  ::QStatusBar::removeWidget(widget);
}
void QStatusBar_wrapper::setSizeGripEnabled(bool arg__1) {
  // tag=1000

  // tag=1004
  ::QStatusBar::setSizeGripEnabled(arg__1);
}
void QStatusBar_wrapper::setVisible(bool visible) {
  // tag=1000
  if (m_setVisibleCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    // tag=1002
    ::QStatusBar::setVisible(visible);
  }
}
// tag=1009
void QStatusBar_wrapper::setVisible_nocallback(bool visible) {
  // tag=1003
  ::QStatusBar::setVisible(visible);
}
QPainter *QStatusBar_wrapper::sharedPainter() const {
  // tag=1000
  if (m_sharedPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QStatusBar::sharedPainter();
  }
}
// tag=1009
QPainter *QStatusBar_wrapper::sharedPainter_nocallback() const {
  // tag=1003
  return ::QStatusBar::sharedPainter();
}
void QStatusBar_wrapper::showMessage(const QString &text, int timeout) {
  // tag=1000

  // tag=1004
  ::QStatusBar::showMessage(text, timeout);
}
QSize QStatusBar_wrapper::sizeHint() const {
  // tag=1000
  if (m_sizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QStatusBar::sizeHint();
  }
}
// tag=1009
QSize QStatusBar_wrapper::sizeHint_nocallback() const {
  // tag=1003
  return ::QStatusBar::sizeHint();
}
QString QStatusBar_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QStatusBar::tr(s, c, n);
}

// tag=1005
QStatusBar_wrapper::~QStatusBar_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QStatusBar *fromPtr(void *ptr) {
  return reinterpret_cast<QStatusBar *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QStatusBar_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QStatusBar_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QStatusBar_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QStatusBar_wrapper *>(
      cppObj);
}
void *c_QStatusBar__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QStatusBar_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// addPermanentWidget(QWidget * widget, int stretch)
void c_QStatusBar__addPermanentWidget_QWidget_int(void *thisObj, void *widget_,
                                                  int stretch) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  // tag=1010
  fromPtr(thisObj)->addPermanentWidget(widget, stretch);
}

// tag=1050
// addWidget(QWidget * widget, int stretch)
void c_QStatusBar__addWidget_QWidget_int(void *thisObj, void *widget_,
                                         int stretch) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  // tag=1010
  fromPtr(thisObj)->addWidget(widget, stretch);
}

// tag=1050
// changeEvent(QEvent * arg__1)
void c_QStatusBar__changeEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->changeEvent_nocallback(arg__1);
}

// tag=1050
// clearMessage()
void c_QStatusBar__clearMessage(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->clearMessage();
}

// tag=1050
// currentMessage() const
void *c_QStatusBar__currentMessage(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->currentMessage()};
}

// tag=1079
void c_QStatusBar__onCustomContextMenuRequested_QPoint(void *thisObj,
                                                       void *contextQObject,
                                                       void *callback) {
  auto instance = reinterpret_cast<QStatusBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QStatusBar::customContextMenuRequested,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// customEvent(QEvent * event)
void c_QStatusBar__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// devType() const
int c_QStatusBar__devType(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QStatusBar_wrapper *>(
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
bool c_QStatusBar__event_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->event_nocallback(arg__1);
}

// tag=1050
// eventFilter(QObject * watched, QEvent * event)
bool c_QStatusBar__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                              void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QStatusBar_wrapper *>(
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
bool c_QStatusBar__focusNextPrevChild_bool(void *thisObj, bool next) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
}

// tag=1050
// hasHeightForWidth() const
bool c_QStatusBar__hasHeightForWidth(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QStatusBar_wrapper *>(
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
int c_QStatusBar__heightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QStatusBar_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->heightForWidth_nocallback(arg__1);
        } else {
          return targetPtr->heightForWidth(arg__1);
        }
      }();
}

// tag=1050
// hideOrShow()
void c_QStatusBar__hideOrShow(void *thisObj) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->hideOrShow();
}

// tag=1050
// initPainter(QPainter * painter) const
void c_QStatusBar__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}

// tag=1050
// insertPermanentWidget(int index, QWidget * widget, int stretch)
int c_QStatusBar__insertPermanentWidget_int_QWidget_int(void *thisObj,
                                                        int index,
                                                        void *widget_,
                                                        int stretch) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  return
      // tag=1010
      fromPtr(thisObj)->insertPermanentWidget(index, widget, stretch);
}

// tag=1050
// insertWidget(int index, QWidget * widget, int stretch)
int c_QStatusBar__insertWidget_int_QWidget_int(void *thisObj, int index,
                                               void *widget_, int stretch) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  return
      // tag=1010
      fromPtr(thisObj)->insertWidget(index, widget, stretch);
}

// tag=1050
// isSizeGripEnabled() const
bool c_QStatusBar__isSizeGripEnabled(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isSizeGripEnabled();
}

// tag=1050
// leaveEvent(QEvent * event)
void c_QStatusBar__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}

// tag=1050
// messageChanged(const QString & text)
void c_QStatusBar__messageChanged_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  // tag=1010
  fromPtr(thisObj)->messageChanged(text);
}

// tag=1079
void c_QStatusBar__onMessageChanged_QString(void *thisObj, void *contextQObject,
                                            void *callback) {
  auto instance = reinterpret_cast<QStatusBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QStatusBar::messageChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// minimumSizeHint() const
void *c_QStatusBar__minimumSizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QStatusBar_wrapper *>(
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
void c_QStatusBar__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                     void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}

// tag=1050
// mouseMoveEvent(QMouseEvent * event)
void c_QStatusBar__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(event);
}

// tag=1050
// mousePressEvent(QMouseEvent * event)
void c_QStatusBar__mousePressEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(event);
}

// tag=1050
// mouseReleaseEvent(QMouseEvent * event)
void c_QStatusBar__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(event);
}

// tag=1050
// paintEvent(QPaintEvent * arg__1)
void c_QStatusBar__paintEvent_QPaintEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QPaintEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->paintEvent_nocallback(arg__1);
}

// tag=1050
// reformat()
void c_QStatusBar__reformat(void *thisObj) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->reformat();
}

// tag=1050
// removeWidget(QWidget * widget)
void c_QStatusBar__removeWidget_QWidget(void *thisObj, void *widget_) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  // tag=1010
  fromPtr(thisObj)->removeWidget(widget);
}

// tag=1050
// setSizeGripEnabled(bool arg__1)
void c_QStatusBar__setSizeGripEnabled_bool(void *thisObj, bool arg__1) {
  // tag=1010
  fromPtr(thisObj)->setSizeGripEnabled(arg__1);
}

// tag=1050
// setVisible(bool visible)
void c_QStatusBar__setVisible_bool(void *thisObj, bool visible) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStatusBar_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}

// tag=1050
// sharedPainter() const
void *c_QStatusBar__sharedPainter(void *thisObj) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->sharedPainter_nocallback();
}

// tag=1050
// showMessage(const QString & text, int timeout)
void c_QStatusBar__showMessage_QString_int(void *thisObj, const char *text_,
                                           int timeout) {
  const auto text = QString::fromUtf8(text_);
  // tag=1010
  fromPtr(thisObj)->showMessage(text, timeout);
}

// tag=1050
// sizeHint() const
void *c_QStatusBar__sizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QStatusBar_wrapper *>(
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
void *c_static_QStatusBar__tr_char_char_int(const char *s, const char *c,
                                            int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QStatusBar_wrapper::tr(s, c, n)};
}

// tag=1079
void c_QStatusBar__onWindowIconChanged_QIcon(void *thisObj,
                                             void *contextQObject,
                                             void *callback) {
  auto instance = reinterpret_cast<QStatusBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QStatusBar::windowIconChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1079
void c_QStatusBar__onWindowIconTextChanged_QString(void *thisObj,
                                                   void *contextQObject,
                                                   void *callback) {
  auto instance = reinterpret_cast<QStatusBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QStatusBar::windowIconTextChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1079
void c_QStatusBar__onWindowTitleChanged_QString(void *thisObj,
                                                void *contextQObject,
                                                void *callback) {
  auto instance = reinterpret_cast<QStatusBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QStatusBar::windowTitleChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QStatusBar__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QStatusBar__registerVirtualMethodCallback(void *ptr, void *callback,
                                                 int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1124:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStatusBar_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 944:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStatusBar_wrapper::Callback_customEvent>(
        callback);
    break;
  case 1141:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStatusBar_wrapper::Callback_devType>(
        callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStatusBar_wrapper::Callback_event>(
        callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStatusBar_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1150:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStatusBar_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1164:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStatusBar_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 1168:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStatusBar_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 1171:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStatusBar_wrapper::Callback_initPainter>(
        callback);
    break;
  case 1196:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStatusBar_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1216:
    wrapper->m_minimumSizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStatusBar_wrapper::
                             Callback_minimumSizeHint>(callback);
    break;
  case 1218:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStatusBar_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1220:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStatusBar_wrapper::Callback_mouseMoveEvent>(
        callback);
    break;
  case 1221:
    wrapper->m_mousePressEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStatusBar_wrapper::
                             Callback_mousePressEvent>(callback);
    break;
  case 1222:
    wrapper->m_mouseReleaseEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QStatusBar_wrapper::
                             Callback_mouseReleaseEvent>(callback);
    break;
  case 1229:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStatusBar_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 1309:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStatusBar_wrapper::Callback_setVisible>(
        callback);
    break;
  case 1318:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStatusBar_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1326:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStatusBar_wrapper::Callback_sizeHint>(
        callback);
    break;
  }
}
}
