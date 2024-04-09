
// tag=1040
#include "QtDartBindings_exports.h"
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstring.h>
#include <qtimer.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
// tag=1017
class QTimer_wrapper : public ::QTimer {
public:
  ~QTimer_wrapper();
  // tag=1041
  QTimer_wrapper(QObject *parent = nullptr);
  // tag=1041
  virtual void customEvent(QEvent *event);
  // tag=1008
  virtual void customEvent_nocallback(QEvent *event);
  // tag=1041
  virtual bool event(QEvent *event);
  // tag=1008
  virtual bool event_nocallback(QEvent *event);
  // tag=1041
  virtual bool eventFilter(QObject *watched, QEvent *event);
  // tag=1008
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  // tag=1041
  int interval() const;
  // tag=1041
  bool isActive() const;
  // tag=1041
  bool isSingleShot() const;
  // tag=1041
  int remainingTime() const;
  // tag=1041
  void setInterval(int msec);
  // tag=1041
  void setSingleShot(bool singleShot);
  // tag=1041
  static void singleShot(int msec, const QObject *receiver, const char *member);
  // tag=1041
  void start();
  // tag=1041
  void start(int msec);
  // tag=1041
  void stop();
  // tag=1041
  int timerId() const;
  // tag=1041
  static QString tr(const char *s, const char *c, int n);
  // tag=1042
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_event)(void *, QEvent *event);
  Callback_event m_eventCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_eventFilter)(void *, QObject *watched, QEvent *event);
  Callback_eventFilter m_eventFilterCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QTimer::QTimer(QObject * parent)
QtDartBindings_EXPORT void *c_QTimer__constructor_QObject(void *parent_);

// tag=1067
//  QTimer::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QTimer__customEvent_QEvent(void *thisObj,
                                                        void *event_);

// tag=1067
//  QTimer::event(QEvent * event)
QtDartBindings_EXPORT bool c_QTimer__event_QEvent(void *thisObj, void *event_);

// tag=1067
//  QTimer::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool c_QTimer__eventFilter_QObject_QEvent(void *thisObj,
                                                                void *watched_,
                                                                void *event_);

// tag=1067
//  QTimer::interval() const
QtDartBindings_EXPORT int c_QTimer__interval(void *thisObj);

// tag=1067
//  QTimer::isActive() const
QtDartBindings_EXPORT bool c_QTimer__isActive(void *thisObj);

// tag=1067
//  QTimer::isSingleShot() const
QtDartBindings_EXPORT bool c_QTimer__isSingleShot(void *thisObj);

// tag=1067
//  QTimer::remainingTime() const
QtDartBindings_EXPORT int c_QTimer__remainingTime(void *thisObj);

// tag=1067
//  QTimer::setInterval(int msec)
QtDartBindings_EXPORT void c_QTimer__setInterval_int(void *thisObj, int msec);

// tag=1067
//  QTimer::setSingleShot(bool singleShot)
QtDartBindings_EXPORT void c_QTimer__setSingleShot_bool(void *thisObj,
                                                        bool singleShot);

// tag=1067
//  QTimer::singleShot(int msec, const QObject * receiver, const char * member)
QtDartBindings_EXPORT void
c_static_QTimer__singleShot_int_QObject_char(int msec, void *receiver_,
                                             const char *member);

// tag=1067
//  QTimer::start()
QtDartBindings_EXPORT void c_QTimer__start(void *thisObj);

// tag=1067
//  QTimer::start(int msec)
QtDartBindings_EXPORT void c_QTimer__start_int(void *thisObj, int msec);

// tag=1067
//  QTimer::stop()
QtDartBindings_EXPORT void c_QTimer__stop(void *thisObj);

// tag=1067
//  QTimer::timerId() const
QtDartBindings_EXPORT int c_QTimer__timerId(void *thisObj);

// tag=1067
//  QTimer::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QTimer__tr_char_char_int(const char *s, const char *c, int n);

// tag=1066
QtDartBindings_EXPORT void c_QTimer__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QTimer__registerVirtualMethodCallback(void *ptr, void *callback,
                                        int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QTimer_Finalizer(void *, void *cppObj, void *);
}
