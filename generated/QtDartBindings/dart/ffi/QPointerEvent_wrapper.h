
// tag=1040
#include "QtDartBindings_exports.h"
#include <qevent.h>

namespace QtDartBindings_wrappersNS {
// tag=1017
class QPointerEvent_wrapper : public ::QPointerEvent {
public:
  ~QPointerEvent_wrapper();
  // tag=1041
  bool allPointsAccepted() const;
  // tag=1041
  bool allPointsGrabbed() const;
  // tag=1041
  virtual QPointerEvent *clone() const;
  // tag=1008
  virtual QPointerEvent *clone_nocallback() const;
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
  qsizetype pointCount() const;
  // tag=1041
  virtual void setAccepted(bool accepted);
  // tag=1008
  virtual void setAccepted_nocallback(bool accepted);
  // tag=1042
  typedef QPointerEvent *(*Callback_clone)(void *);
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
//  QPointerEvent::allPointsAccepted() const
QtDartBindings_EXPORT bool c_QPointerEvent__allPointsAccepted(void *thisObj);

// tag=1067
//  QPointerEvent::allPointsGrabbed() const
QtDartBindings_EXPORT bool c_QPointerEvent__allPointsGrabbed(void *thisObj);

// tag=1067
//  QPointerEvent::clone() const
QtDartBindings_EXPORT void *c_QPointerEvent__clone(void *thisObj);

// tag=1067
//  QPointerEvent::isBeginEvent() const
QtDartBindings_EXPORT bool c_QPointerEvent__isBeginEvent(void *thisObj);

// tag=1067
//  QPointerEvent::isEndEvent() const
QtDartBindings_EXPORT bool c_QPointerEvent__isEndEvent(void *thisObj);

// tag=1067
//  QPointerEvent::isUpdateEvent() const
QtDartBindings_EXPORT bool c_QPointerEvent__isUpdateEvent(void *thisObj);

// tag=1067
//  QPointerEvent::pointCount() const
QtDartBindings_EXPORT qsizetype c_QPointerEvent__pointCount(void *thisObj);

// tag=1067
//  QPointerEvent::setAccepted(bool accepted)
QtDartBindings_EXPORT void c_QPointerEvent__setAccepted_bool(void *thisObj,
                                                             bool accepted);

// tag=1066
QtDartBindings_EXPORT void c_QPointerEvent__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QPointerEvent__registerVirtualMethodCallback(void *ptr, void *callback,
                                               int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QPointerEvent_Finalizer(void *, void *cppObj,
                                                     void *);
}
