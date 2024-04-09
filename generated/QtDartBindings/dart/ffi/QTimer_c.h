/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstring.h>
#include <qtimer.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
class QTimer_wrapper : public ::QTimer {
public:
  ~QTimer_wrapper();
  QTimer_wrapper(QObject *parent = nullptr);
  virtual void customEvent(QEvent *event);
  virtual void customEvent_nocallback(QEvent *event);
  virtual bool event(QEvent *event);
  virtual bool event_nocallback(QEvent *event);
  virtual bool eventFilter(QObject *watched, QEvent *event);
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  int interval() const;
  bool isActive() const;
  bool isSingleShot() const;
  int remainingTime() const;
  void setInterval(int msec);
  void setSingleShot(bool singleShot);
  static void singleShot(int msec, const QObject *receiver, const char *member);
  void start();
  void start(int msec);
  void stop();
  int timerId() const;
  static QString tr(const char *s, const char *c, int n);
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  typedef bool (*Callback_event)(void *, QEvent *event);
  Callback_event m_eventCallback = nullptr;
  typedef bool (*Callback_eventFilter)(void *, QObject *watched, QEvent *event);
  Callback_eventFilter m_eventFilterCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QTimer::QTimer(QObject * parent)
QtDartBindings_EXPORT void *c_QTimer__constructor_QObject(void *parent_);
// QTimer::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QTimer__customEvent_QEvent(void *thisObj,
                                                        void *event_);
// QTimer::event(QEvent * event)
QtDartBindings_EXPORT bool c_QTimer__event_QEvent(void *thisObj, void *event_);
// QTimer::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool c_QTimer__eventFilter_QObject_QEvent(void *thisObj,
                                                                void *watched_,
                                                                void *event_);
// QTimer::interval() const
QtDartBindings_EXPORT int c_QTimer__interval(void *thisObj);
// QTimer::isActive() const
QtDartBindings_EXPORT bool c_QTimer__isActive(void *thisObj);
// QTimer::isSingleShot() const
QtDartBindings_EXPORT bool c_QTimer__isSingleShot(void *thisObj);
// QTimer::remainingTime() const
QtDartBindings_EXPORT int c_QTimer__remainingTime(void *thisObj);
// QTimer::setInterval(int msec)
QtDartBindings_EXPORT void c_QTimer__setInterval_int(void *thisObj, int msec);
// QTimer::setSingleShot(bool singleShot)
QtDartBindings_EXPORT void c_QTimer__setSingleShot_bool(void *thisObj,
                                                        bool singleShot);
// QTimer::singleShot(int msec, const QObject * receiver, const char * member)
QtDartBindings_EXPORT void
c_static_QTimer__singleShot_int_QObject_char(int msec, void *receiver_,
                                             const char *member);
// QTimer::start()
QtDartBindings_EXPORT void c_QTimer__start(void *thisObj);
// QTimer::start(int msec)
QtDartBindings_EXPORT void c_QTimer__start_int(void *thisObj, int msec);
// QTimer::stop()
QtDartBindings_EXPORT void c_QTimer__stop(void *thisObj);
// QTimer::timerId() const
QtDartBindings_EXPORT int c_QTimer__timerId(void *thisObj);
// QTimer::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QTimer__tr_char_char_int(const char *s, const char *c, int n);
QtDartBindings_EXPORT void c_QTimer__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QTimer__registerVirtualMethodCallback(void *ptr, void *callback,
                                        int methodId);
QtDartBindings_EXPORT void c_QTimer_Finalizer(void *cppObj);
}
