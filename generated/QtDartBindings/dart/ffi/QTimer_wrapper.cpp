#include "QTimer_wrapper.h"

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
QTimer_wrapper::QTimer_wrapper(QObject *parent) : ::QTimer(parent) {}
void QTimer_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QTimer::customEvent(event);
  }
}
// tag=1009
void QTimer_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QTimer::customEvent(event);
}
bool QTimer_wrapper::event(QEvent *event) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    return ::QTimer::event(event);
  }
}
// tag=1009
bool QTimer_wrapper::event_nocallback(QEvent *event) {
  // tag=1003
  return ::QTimer::event(event);
}
bool QTimer_wrapper::eventFilter(QObject *watched, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    // tag=1002
    return ::QTimer::eventFilter(watched, event);
  }
}
// tag=1009
bool QTimer_wrapper::eventFilter_nocallback(QObject *watched, QEvent *event) {
  // tag=1003
  return ::QTimer::eventFilter(watched, event);
}
int QTimer_wrapper::interval() const {
  // tag=1000

  // tag=1004
  return ::QTimer::interval();
}
bool QTimer_wrapper::isActive() const {
  // tag=1000

  // tag=1004
  return ::QTimer::isActive();
}
bool QTimer_wrapper::isSingleShot() const {
  // tag=1000

  // tag=1004
  return ::QTimer::isSingleShot();
}
int QTimer_wrapper::remainingTime() const {
  // tag=1000

  // tag=1004
  return ::QTimer::remainingTime();
}
void QTimer_wrapper::setInterval(int msec) {
  // tag=1000

  // tag=1004
  ::QTimer::setInterval(msec);
}
void QTimer_wrapper::setSingleShot(bool singleShot) {
  // tag=1000

  // tag=1004
  ::QTimer::setSingleShot(singleShot);
}
void QTimer_wrapper::singleShot(int msec, const QObject *receiver,
                                const char *member) {
  // tag=1000

  // tag=1004
  ::QTimer::singleShot(msec, receiver, member);
}
void QTimer_wrapper::start() {
  // tag=1000

  // tag=1004
  ::QTimer::start();
}
void QTimer_wrapper::start(int msec) {
  // tag=1000

  // tag=1004
  ::QTimer::start(msec);
}
void QTimer_wrapper::stop() {
  // tag=1000

  // tag=1004
  ::QTimer::stop();
}
int QTimer_wrapper::timerId() const {
  // tag=1000

  // tag=1004
  return ::QTimer::timerId();
}
QString QTimer_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QTimer::tr(s, c, n);
}

// tag=1005
QTimer_wrapper::~QTimer_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QTimer *fromPtr(void *ptr) { return reinterpret_cast<QTimer *>(ptr); }
// tag=1014
static QtDartBindings_wrappersNS::QTimer_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QTimer_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QTimer_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QTimer_wrapper *>(cppObj);
}
void *c_QTimer__constructor_QObject(void *parent_) {
  auto parent = reinterpret_cast<QObject *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QTimer_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// customEvent(QEvent * event)
void c_QTimer__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1079
void c_QTimer__onDestroyed_QObject(void *thisObj, void *contextQObject,
                                   void *callback) {
  auto instance = reinterpret_cast<QTimer *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QTimer::destroyed, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// event(QEvent * event)
bool c_QTimer__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QTimer_wrapper *>(
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
bool c_QTimer__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                          void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QTimer_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->eventFilter_nocallback(watched, event);
        } else {
          return targetPtr->eventFilter(watched, event);
        }
      }();
}

// tag=1050
// interval() const
int c_QTimer__interval(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->interval();
}

// tag=1050
// isActive() const
bool c_QTimer__isActive(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isActive();
}

// tag=1050
// isSingleShot() const
bool c_QTimer__isSingleShot(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isSingleShot();
}

// tag=1050
// remainingTime() const
int c_QTimer__remainingTime(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->remainingTime();
}

// tag=1050
// setInterval(int msec)
void c_QTimer__setInterval_int(void *thisObj, int msec) {
  // tag=1010
  fromPtr(thisObj)->setInterval(msec);
}

// tag=1050
// setSingleShot(bool singleShot)
void c_QTimer__setSingleShot_bool(void *thisObj, bool singleShot) {
  // tag=1010
  fromPtr(thisObj)->setSingleShot(singleShot);
}

// tag=1050
// singleShot(int msec, const QObject * receiver, const char * member)
void c_static_QTimer__singleShot_int_QObject_char(int msec, void *receiver_,
                                                  const char *member) {
  auto receiver = reinterpret_cast<QObject *>(receiver_);
  // tag=1068
  QtDartBindings_wrappersNS::QTimer_wrapper::singleShot(msec, receiver, member);
}

// tag=1050
// start()
void c_QTimer__start(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->start();
}

// tag=1050
// start(int msec)
void c_QTimer__start_int(void *thisObj, int msec) {
  // tag=1010
  fromPtr(thisObj)->start(msec);
}

// tag=1050
// stop()
void c_QTimer__stop(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->stop();
}

// tag=1050
// timerId() const
int c_QTimer__timerId(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->timerId();
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QTimer__tr_char_char_int(const char *s, const char *c, int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QTimer_wrapper::tr(s, c, n)};
}
void c_QTimer__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QTimer__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 944:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTimer_wrapper::Callback_customEvent>(
        callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTimer_wrapper::Callback_event>(callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QTimer_wrapper::Callback_eventFilter>(
        callback);
    break;
  }
}
}
