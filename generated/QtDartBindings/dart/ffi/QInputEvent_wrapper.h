
// tag=1040
#include "QtDartBindings_exports.h"
#include <qevent.h>

namespace QtDartBindings_wrappersNS {
// tag=1017
class QInputEvent_wrapper : public ::QInputEvent {
public:
  ~QInputEvent_wrapper();
  // tag=1041
  virtual QInputEvent *clone() const;
  // tag=1008
  virtual QInputEvent *clone_nocallback() const;
  // tag=1041
  QFlags<Qt::KeyboardModifier> modifiers() const;
  // tag=1041
  virtual void setAccepted(bool accepted);
  // tag=1008
  virtual void setAccepted_nocallback(bool accepted);
  // tag=1041
  void setModifiers(QFlags<Qt::KeyboardModifier> modifiers);
  // tag=1042
  typedef QInputEvent *(*Callback_clone)(void *);
  Callback_clone m_cloneCallback = nullptr;
  // tag=1042
  typedef void (*Callback_setAccepted)(void *, bool accepted);
  Callback_setAccepted m_setAcceptedCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QInputEvent::clone() const
QtDartBindings_EXPORT void *c_QInputEvent__clone(void *thisObj);

// tag=1067
//  QInputEvent::modifiers() const
QtDartBindings_EXPORT int c_QInputEvent__modifiers(void *thisObj);

// tag=1067
//  QInputEvent::setAccepted(bool accepted)
QtDartBindings_EXPORT void c_QInputEvent__setAccepted_bool(void *thisObj,
                                                           bool accepted);

// tag=1067
//  QInputEvent::setModifiers(QFlags<Qt::KeyboardModifier> modifiers)
QtDartBindings_EXPORT void
c_QInputEvent__setModifiers_KeyboardModifiers(void *thisObj, int modifiers_);

// tag=1066
QtDartBindings_EXPORT void c_QInputEvent__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QInputEvent__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QInputEvent_Finalizer(void *, void *cppObj,
                                                   void *);
}
