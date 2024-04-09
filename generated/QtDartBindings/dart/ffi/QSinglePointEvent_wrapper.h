
// tag=1040
#include "QtDartBindings_exports.h"
#include <qevent.h>
#include <qobject.h>
#include <qpoint.h>

namespace QtDartBindings_wrappersNS {
// tag=1017
class QSinglePointEvent_wrapper : public ::QSinglePointEvent {
public:
  ~QSinglePointEvent_wrapper();
  // tag=1041
  virtual QSinglePointEvent *clone() const;
  // tag=1008
  virtual QSinglePointEvent *clone_nocallback() const;
  // tag=1041
  QObject *exclusivePointGrabber() const;
  // tag=1041
  QPointF globalPosition() const;
  // tag=1041
  virtual bool isBeginEvent() const;
  // tag=1008
  virtual bool isBeginEvent_nocallback() const;
  // tag=1041
  virtual bool isEndEvent() const;
  // tag=1008
  virtual bool isEndEvent_nocallback() const;
  // tag=1041
  virtual bool isUpdateEvent() const;
  // tag=1008
  virtual bool isUpdateEvent_nocallback() const;
  // tag=1041
  QPointF position() const;
  // tag=1041
  QPointF scenePosition() const;
  // tag=1041
  virtual void setAccepted(bool accepted);
  // tag=1008
  virtual void setAccepted_nocallback(bool accepted);
  // tag=1041
  void setExclusivePointGrabber(QObject *exclusiveGrabber);
  // tag=1042
  typedef QSinglePointEvent *(*Callback_clone)(void *);
  Callback_clone m_cloneCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_isBeginEvent)(void *);
  Callback_isBeginEvent m_isBeginEventCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_isEndEvent)(void *);
  Callback_isEndEvent m_isEndEventCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_isUpdateEvent)(void *);
  Callback_isUpdateEvent m_isUpdateEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_setAccepted)(void *, bool accepted);
  Callback_setAccepted m_setAcceptedCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QSinglePointEvent::clone() const
QtDartBindings_EXPORT void *c_QSinglePointEvent__clone(void *thisObj);

// tag=1067
//  QSinglePointEvent::exclusivePointGrabber() const
QtDartBindings_EXPORT void *
c_QSinglePointEvent__exclusivePointGrabber(void *thisObj);

// tag=1067
//  QSinglePointEvent::globalPosition() const
QtDartBindings_EXPORT void *c_QSinglePointEvent__globalPosition(void *thisObj);

// tag=1067
//  QSinglePointEvent::isBeginEvent() const
QtDartBindings_EXPORT bool c_QSinglePointEvent__isBeginEvent(void *thisObj);

// tag=1067
//  QSinglePointEvent::isEndEvent() const
QtDartBindings_EXPORT bool c_QSinglePointEvent__isEndEvent(void *thisObj);

// tag=1067
//  QSinglePointEvent::isUpdateEvent() const
QtDartBindings_EXPORT bool c_QSinglePointEvent__isUpdateEvent(void *thisObj);

// tag=1067
//  QSinglePointEvent::position() const
QtDartBindings_EXPORT void *c_QSinglePointEvent__position(void *thisObj);

// tag=1067
//  QSinglePointEvent::scenePosition() const
QtDartBindings_EXPORT void *c_QSinglePointEvent__scenePosition(void *thisObj);

// tag=1067
//  QSinglePointEvent::setAccepted(bool accepted)
QtDartBindings_EXPORT void c_QSinglePointEvent__setAccepted_bool(void *thisObj,
                                                                 bool accepted);

// tag=1067
//  QSinglePointEvent::setExclusivePointGrabber(QObject * exclusiveGrabber)
QtDartBindings_EXPORT void
c_QSinglePointEvent__setExclusivePointGrabber_QObject(void *thisObj,
                                                      void *exclusiveGrabber_);

// tag=1066
QtDartBindings_EXPORT void c_QSinglePointEvent__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QSinglePointEvent__registerVirtualMethodCallback(void *ptr, void *callback,
                                                   int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QSinglePointEvent_Finalizer(void *, void *cppObj,
                                                         void *);
}
