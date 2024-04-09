#include "QCheckBox_wrapper.h"

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
QCheckBox_wrapper::QCheckBox_wrapper(QWidget *parent) : ::QCheckBox(parent) {}

// tag=1006
QCheckBox_wrapper::QCheckBox_wrapper(const QString &text, QWidget *parent)
    : ::QCheckBox(text, parent) {}
void QCheckBox_wrapper::changeEvent(QEvent *e) {
  // tag=1000
  if (m_changeEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    // tag=1002
    ::QCheckBox::changeEvent(e);
  }
}
// tag=1009
void QCheckBox_wrapper::changeEvent_nocallback(QEvent *e) {
  // tag=1003
  ::QCheckBox::changeEvent(e);
}
void QCheckBox_wrapper::checkStateSet() {
  // tag=1000
  if (m_checkStateSetCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_checkStateSetCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QCheckBox::checkStateSet();
  }
}
// tag=1009
void QCheckBox_wrapper::checkStateSet_nocallback() {
  // tag=1003
  ::QCheckBox::checkStateSet();
}
void QCheckBox_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QCheckBox::customEvent(event);
  }
}
// tag=1009
void QCheckBox_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QCheckBox::customEvent(event);
}
int QCheckBox_wrapper::devType() const {
  // tag=1000
  if (m_devTypeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QCheckBox::devType();
  }
}
// tag=1009
int QCheckBox_wrapper::devType_nocallback() const {
  // tag=1003
  return ::QCheckBox::devType();
}
bool QCheckBox_wrapper::event(QEvent *e) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), e);
  } else {
    // tag=1002
    return ::QCheckBox::event(e);
  }
}
// tag=1009
bool QCheckBox_wrapper::event_nocallback(QEvent *e) {
  // tag=1003
  return ::QCheckBox::event(e);
}
bool QCheckBox_wrapper::eventFilter(QObject *watched, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    // tag=1002
    return ::QCheckBox::eventFilter(watched, event);
  }
}
// tag=1009
bool QCheckBox_wrapper::eventFilter_nocallback(QObject *watched,
                                               QEvent *event) {
  // tag=1003
  return ::QCheckBox::eventFilter(watched, event);
}
bool QCheckBox_wrapper::focusNextPrevChild(bool next) {
  // tag=1000
  if (m_focusNextPrevChildCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    // tag=1002
    return ::QCheckBox::focusNextPrevChild(next);
  }
}
// tag=1009
bool QCheckBox_wrapper::focusNextPrevChild_nocallback(bool next) {
  // tag=1003
  return ::QCheckBox::focusNextPrevChild(next);
}
bool QCheckBox_wrapper::hasHeightForWidth() const {
  // tag=1000
  if (m_hasHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QCheckBox::hasHeightForWidth();
  }
}
// tag=1009
bool QCheckBox_wrapper::hasHeightForWidth_nocallback() const {
  // tag=1003
  return ::QCheckBox::hasHeightForWidth();
}
int QCheckBox_wrapper::heightForWidth(int arg__1) const {
  // tag=1000
  if (m_heightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QCheckBox::heightForWidth(arg__1);
  }
}
// tag=1009
int QCheckBox_wrapper::heightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QCheckBox::heightForWidth(arg__1);
}
bool QCheckBox_wrapper::hitButton(const QPoint &pos) const {
  // tag=1000
  if (m_hitButtonCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hitButtonCallback(const_cast<void *>(thisPtr), pos);
  } else {
    // tag=1002
    return ::QCheckBox::hitButton(pos);
  }
}
// tag=1009
bool QCheckBox_wrapper::hitButton_nocallback(const QPoint &pos) const {
  // tag=1003
  return ::QCheckBox::hitButton(pos);
}
void QCheckBox_wrapper::initPainter(QPainter *painter) const {
  // tag=1000
  if (m_initPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    // tag=1002
    ::QCheckBox::initPainter(painter);
  }
}
// tag=1009
void QCheckBox_wrapper::initPainter_nocallback(QPainter *painter) const {
  // tag=1003
  ::QCheckBox::initPainter(painter);
}
bool QCheckBox_wrapper::isTristate() const {
  // tag=1000

  // tag=1004
  return ::QCheckBox::isTristate();
}
void QCheckBox_wrapper::leaveEvent(QEvent *event) {
  // tag=1000
  if (m_leaveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QCheckBox::leaveEvent(event);
  }
}
// tag=1009
void QCheckBox_wrapper::leaveEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QCheckBox::leaveEvent(event);
}
QSize QCheckBox_wrapper::minimumSizeHint() const {
  // tag=1000
  if (m_minimumSizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QCheckBox::minimumSizeHint();
  }
}
// tag=1009
QSize QCheckBox_wrapper::minimumSizeHint_nocallback() const {
  // tag=1003
  return ::QCheckBox::minimumSizeHint();
}
void QCheckBox_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseDoubleClickEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QCheckBox::mouseDoubleClickEvent(event);
  }
}
// tag=1009
void QCheckBox_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QCheckBox::mouseDoubleClickEvent(event);
}
void QCheckBox_wrapper::mouseMoveEvent(QMouseEvent *arg__1) {
  // tag=1000
  if (m_mouseMoveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QCheckBox::mouseMoveEvent(arg__1);
  }
}
// tag=1009
void QCheckBox_wrapper::mouseMoveEvent_nocallback(QMouseEvent *arg__1) {
  // tag=1003
  ::QCheckBox::mouseMoveEvent(arg__1);
}
void QCheckBox_wrapper::mousePressEvent(QMouseEvent *e) {
  // tag=1000
  if (m_mousePressEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    // tag=1002
    ::QCheckBox::mousePressEvent(e);
  }
}
// tag=1009
void QCheckBox_wrapper::mousePressEvent_nocallback(QMouseEvent *e) {
  // tag=1003
  ::QCheckBox::mousePressEvent(e);
}
void QCheckBox_wrapper::mouseReleaseEvent(QMouseEvent *e) {
  // tag=1000
  if (m_mouseReleaseEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    // tag=1002
    ::QCheckBox::mouseReleaseEvent(e);
  }
}
// tag=1009
void QCheckBox_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *e) {
  // tag=1003
  ::QCheckBox::mouseReleaseEvent(e);
}
void QCheckBox_wrapper::nextCheckState() {
  // tag=1000
  if (m_nextCheckStateCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_nextCheckStateCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QCheckBox::nextCheckState();
  }
}
// tag=1009
void QCheckBox_wrapper::nextCheckState_nocallback() {
  // tag=1003
  ::QCheckBox::nextCheckState();
}
void QCheckBox_wrapper::paintEvent(QPaintEvent *arg__1) {
  // tag=1000
  if (m_paintEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QCheckBox::paintEvent(arg__1);
  }
}
// tag=1009
void QCheckBox_wrapper::paintEvent_nocallback(QPaintEvent *arg__1) {
  // tag=1003
  ::QCheckBox::paintEvent(arg__1);
}
void QCheckBox_wrapper::setTristate(bool y) {
  // tag=1000

  // tag=1004
  ::QCheckBox::setTristate(y);
}
void QCheckBox_wrapper::setVisible(bool visible) {
  // tag=1000
  if (m_setVisibleCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    // tag=1002
    ::QCheckBox::setVisible(visible);
  }
}
// tag=1009
void QCheckBox_wrapper::setVisible_nocallback(bool visible) {
  // tag=1003
  ::QCheckBox::setVisible(visible);
}
QPainter *QCheckBox_wrapper::sharedPainter() const {
  // tag=1000
  if (m_sharedPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QCheckBox::sharedPainter();
  }
}
// tag=1009
QPainter *QCheckBox_wrapper::sharedPainter_nocallback() const {
  // tag=1003
  return ::QCheckBox::sharedPainter();
}
QSize QCheckBox_wrapper::sizeHint() const {
  // tag=1000
  if (m_sizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QCheckBox::sizeHint();
  }
}
// tag=1009
QSize QCheckBox_wrapper::sizeHint_nocallback() const {
  // tag=1003
  return ::QCheckBox::sizeHint();
}
void QCheckBox_wrapper::stateChanged(int arg__1) {
  // tag=1000

  // tag=1004
  ::QCheckBox::stateChanged(arg__1);
}
QString QCheckBox_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QCheckBox::tr(s, c, n);
}

// tag=1005
QCheckBox_wrapper::~QCheckBox_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QCheckBox *fromPtr(void *ptr) {
  return reinterpret_cast<QCheckBox *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QCheckBox_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QCheckBox_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QCheckBox_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QCheckBox_wrapper *>(
      cppObj);
}
void *c_QCheckBox__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QCheckBox_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
void *c_QCheckBox__constructor_QString_QWidget(const char *text_,
                                               void *parent_) {
  const auto text = QString::fromUtf8(text_);
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QCheckBox_wrapper(text, parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// changeEvent(QEvent * e)
void c_QCheckBox__changeEvent_QEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QEvent *>(e_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->changeEvent_nocallback(e);
}

// tag=1050
// checkStateSet()
void c_QCheckBox__checkStateSet(void *thisObj) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->checkStateSet_nocallback();
}

// tag=1079
void c_QCheckBox__onClicked_bool(void *thisObj, void *contextQObject,
                                 void *callback) {
  auto instance = reinterpret_cast<QCheckBox *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QCheckBox::clicked, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// customEvent(QEvent * event)
void c_QCheckBox__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// devType() const
int c_QCheckBox__devType(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QCheckBox_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->devType_nocallback();
        } else {
          return targetPtr->devType();
        }
      }();
}

// tag=1050
// event(QEvent * e)
bool c_QCheckBox__event_QEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QEvent *>(e_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->event_nocallback(e);
}

// tag=1050
// eventFilter(QObject * watched, QEvent * event)
bool c_QCheckBox__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                             void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QCheckBox_wrapper *>(
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
bool c_QCheckBox__focusNextPrevChild_bool(void *thisObj, bool next) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
}

// tag=1050
// hasHeightForWidth() const
bool c_QCheckBox__hasHeightForWidth(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QCheckBox_wrapper *>(
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
int c_QCheckBox__heightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QCheckBox_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->heightForWidth_nocallback(arg__1);
        } else {
          return targetPtr->heightForWidth(arg__1);
        }
      }();
}

// tag=1050
// hitButton(const QPoint & pos) const
bool c_QCheckBox__hitButton_QPoint(void *thisObj, void *pos_) {
  auto &pos = *reinterpret_cast<QPoint *>(pos_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->hitButton_nocallback(pos);
}

// tag=1050
// initPainter(QPainter * painter) const
void c_QCheckBox__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}

// tag=1050
// isTristate() const
bool c_QCheckBox__isTristate(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isTristate();
}

// tag=1050
// leaveEvent(QEvent * event)
void c_QCheckBox__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}

// tag=1050
// minimumSizeHint() const
void *c_QCheckBox__minimumSizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QCheckBox_wrapper *>(
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
void c_QCheckBox__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                    void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}

// tag=1050
// mouseMoveEvent(QMouseEvent * arg__1)
void c_QCheckBox__mouseMoveEvent_QMouseEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(arg__1);
}

// tag=1050
// mousePressEvent(QMouseEvent * e)
void c_QCheckBox__mousePressEvent_QMouseEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QMouseEvent *>(e_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(e);
}

// tag=1050
// mouseReleaseEvent(QMouseEvent * e)
void c_QCheckBox__mouseReleaseEvent_QMouseEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QMouseEvent *>(e_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(e);
}

// tag=1050
// nextCheckState()
void c_QCheckBox__nextCheckState(void *thisObj) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->nextCheckState_nocallback();
}

// tag=1050
// paintEvent(QPaintEvent * arg__1)
void c_QCheckBox__paintEvent_QPaintEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QPaintEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->paintEvent_nocallback(arg__1);
}

// tag=1079
void c_QCheckBox__onPressed(void *thisObj, void *contextQObject,
                            void *callback) {
  auto instance = reinterpret_cast<QCheckBox *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QCheckBox::pressed, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1079
void c_QCheckBox__onReleased(void *thisObj, void *contextQObject,
                             void *callback) {
  auto instance = reinterpret_cast<QCheckBox *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QCheckBox::released, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// setTristate(bool y)
void c_QCheckBox__setTristate_bool(void *thisObj, bool y) {
  // tag=1010
  fromPtr(thisObj)->setTristate(y);
}

// tag=1050
// setVisible(bool visible)
void c_QCheckBox__setVisible_bool(void *thisObj, bool visible) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QCheckBox_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}

// tag=1050
// sharedPainter() const
void *c_QCheckBox__sharedPainter(void *thisObj) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->sharedPainter_nocallback();
}

// tag=1050
// sizeHint() const
void *c_QCheckBox__sizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QCheckBox_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->sizeHint_nocallback();
        } else {
          return targetPtr->sizeHint();
        }
      }()};
}

// tag=1050
// stateChanged(int arg__1)
void c_QCheckBox__stateChanged_int(void *thisObj, int arg__1) {
  // tag=1010
  fromPtr(thisObj)->stateChanged(arg__1);
}

// tag=1079
void c_QCheckBox__onStateChanged_int(void *thisObj, void *contextQObject,
                                     void *callback) {
  auto instance = reinterpret_cast<QCheckBox *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QCheckBox::stateChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1079
void c_QCheckBox__onToggled_bool(void *thisObj, void *contextQObject,
                                 void *callback) {
  auto instance = reinterpret_cast<QCheckBox *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QCheckBox::toggled, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QCheckBox__tr_char_char_int(const char *s, const char *c,
                                           int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QCheckBox_wrapper::tr(s, c, n)};
}
void c_QCheckBox__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QCheckBox__registerVirtualMethodCallback(void *ptr, void *callback,
                                                int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1124:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QCheckBox_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 6020:
    wrapper->m_checkStateSetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QCheckBox_wrapper::Callback_checkStateSet>(
        callback);
    break;
  case 944:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QCheckBox_wrapper::Callback_customEvent>(
        callback);
    break;
  case 1141:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QCheckBox_wrapper::Callback_devType>(
        callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QCheckBox_wrapper::Callback_event>(callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QCheckBox_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1150:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QCheckBox_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1164:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QCheckBox_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 1168:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QCheckBox_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 6055:
    wrapper->m_hitButtonCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QCheckBox_wrapper::Callback_hitButton>(
        callback);
    break;
  case 1171:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QCheckBox_wrapper::Callback_initPainter>(
        callback);
    break;
  case 1196:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QCheckBox_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1216:
    wrapper->m_minimumSizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QCheckBox_wrapper::Callback_minimumSizeHint>(
        callback);
    break;
  case 1218:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QCheckBox_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1220:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QCheckBox_wrapper::Callback_mouseMoveEvent>(
        callback);
    break;
  case 1221:
    wrapper->m_mousePressEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QCheckBox_wrapper::Callback_mousePressEvent>(
        callback);
    break;
  case 1222:
    wrapper->m_mouseReleaseEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QCheckBox_wrapper::
                             Callback_mouseReleaseEvent>(callback);
    break;
  case 6105:
    wrapper->m_nextCheckStateCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QCheckBox_wrapper::Callback_nextCheckState>(
        callback);
    break;
  case 1229:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QCheckBox_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 1309:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QCheckBox_wrapper::Callback_setVisible>(
        callback);
    break;
  case 1318:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QCheckBox_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1326:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QCheckBox_wrapper::Callback_sizeHint>(
        callback);
    break;
  }
}
}
