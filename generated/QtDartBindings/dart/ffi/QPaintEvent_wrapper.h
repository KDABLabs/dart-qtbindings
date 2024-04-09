
// tag=1040
#include "QtDartBindings_exports.h"
#include <qevent.h>
#include <qrect.h>
#include <qregion.h>

namespace QtDartBindings_wrappersNS {
// tag=1017
class QPaintEvent_wrapper : public ::QPaintEvent {
public:
  ~QPaintEvent_wrapper();
  // tag=1041
  QPaintEvent_wrapper(const QRect &paintRect);
  // tag=1041
  QPaintEvent_wrapper(const QRegion &paintRegion);
  // tag=1041
  virtual QPaintEvent *clone() const;
  // tag=1008
  virtual QPaintEvent *clone_nocallback() const;
  // tag=1041
  const QRect &rect() const;
  // tag=1041
  const QRegion &region() const;
  // tag=1041
  virtual void setAccepted(bool accepted);
  // tag=1008
  virtual void setAccepted_nocallback(bool accepted);
  // tag=1042
  typedef QPaintEvent *(*Callback_clone)(void *);
  Callback_clone m_cloneCallback = nullptr;
  // tag=1042
  typedef void (*Callback_setAccepted)(void *, bool accepted);
  Callback_setAccepted m_setAcceptedCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QPaintEvent::QPaintEvent(const QRect & paintRect)
QtDartBindings_EXPORT void *c_QPaintEvent__constructor_QRect(void *paintRect_);

// tag=1067
//  QPaintEvent::QPaintEvent(const QRegion & paintRegion)
QtDartBindings_EXPORT void *
c_QPaintEvent__constructor_QRegion(void *paintRegion_);

// tag=1067
//  QPaintEvent::clone() const
QtDartBindings_EXPORT void *c_QPaintEvent__clone(void *thisObj);

// tag=1067
//  QPaintEvent::rect() const
QtDartBindings_EXPORT void *c_QPaintEvent__rect(void *thisObj);

// tag=1067
//  QPaintEvent::region() const
QtDartBindings_EXPORT void *c_QPaintEvent__region(void *thisObj);

// tag=1067
//  QPaintEvent::setAccepted(bool accepted)
QtDartBindings_EXPORT void c_QPaintEvent__setAccepted_bool(void *thisObj,
                                                           bool accepted);

// tag=1066
QtDartBindings_EXPORT void c_QPaintEvent__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QPaintEvent__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QPaintEvent_Finalizer(void *, void *cppObj,
                                                   void *);
}
