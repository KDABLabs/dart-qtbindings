
// tag=1040
#include "QtDartBindings_exports.h"
#include <qevent.h>
#include <qobject.h>
#include <qpoint.h>

namespace QtDartBindings_wrappersNS {
// tag=1017
class QMouseEvent_wrapper : public ::QMouseEvent {
public:
  ~QMouseEvent_wrapper();
  // tag=1041
  virtual QMouseEvent *clone() const;
  // tag=1008
  virtual QMouseEvent *clone_nocallback() const;
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
  QPoint pos() const;
  // tag=1041
  virtual void setAccepted(bool accepted);
  // tag=1008
  virtual void setAccepted_nocallback(bool accepted);
  // tag=1042
  typedef QMouseEvent *(*Callback_clone)(void *);
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
//  QMouseEvent::clone() const
QtDartBindings_EXPORT void *c_QMouseEvent__clone(void *thisObj);

// tag=1067
//  QMouseEvent::isBeginEvent() const
QtDartBindings_EXPORT bool c_QMouseEvent__isBeginEvent(void *thisObj);

// tag=1067
//  QMouseEvent::isEndEvent() const
QtDartBindings_EXPORT bool c_QMouseEvent__isEndEvent(void *thisObj);

// tag=1067
//  QMouseEvent::isUpdateEvent() const
QtDartBindings_EXPORT bool c_QMouseEvent__isUpdateEvent(void *thisObj);

// tag=1067
//  QMouseEvent::pos() const
QtDartBindings_EXPORT void *c_QMouseEvent__pos(void *thisObj);

// tag=1067
//  QMouseEvent::setAccepted(bool accepted)
QtDartBindings_EXPORT void c_QMouseEvent__setAccepted_bool(void *thisObj,
                                                           bool accepted);

// tag=1066
QtDartBindings_EXPORT void c_QMouseEvent__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QMouseEvent__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QMouseEvent_Finalizer(void *, void *cppObj,
                                                   void *);
}
