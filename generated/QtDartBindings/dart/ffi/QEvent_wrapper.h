
// tag=1040
#include "QtDartBindings_exports.h"
#include <qcoreevent.h>

namespace QtDartBindings_wrappersNS {
// tag=1017
class QEvent_wrapper : public ::QEvent {
public:
  ~QEvent_wrapper();
  // tag=1041
  void accept();
  // tag=1041
  virtual QEvent *clone() const;
  // tag=1008
  virtual QEvent *clone_nocallback() const;
  // tag=1041
  void ignore();
  // tag=1041
  bool isAccepted() const;
  // tag=1041
  bool isInputEvent() const;
  // tag=1041
  bool isPointerEvent() const;
  // tag=1041
  bool isSinglePointEvent() const;
  // tag=1041
  static int registerEventType(int hint = -1);
  // tag=1041
  virtual void setAccepted(bool accepted);
  // tag=1008
  virtual void setAccepted_nocallback(bool accepted);
  // tag=1041
  bool spontaneous() const;
  // tag=1042
  typedef QEvent *(*Callback_clone)(void *);
  Callback_clone m_cloneCallback = nullptr;
  // tag=1042
  typedef void (*Callback_setAccepted)(void *, bool accepted);
  Callback_setAccepted m_setAcceptedCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QEvent::accept()
QtDartBindings_EXPORT void c_QEvent__accept(void *thisObj);

// tag=1067
//  QEvent::clone() const
QtDartBindings_EXPORT void *c_QEvent__clone(void *thisObj);

// tag=1067
//  QEvent::ignore()
QtDartBindings_EXPORT void c_QEvent__ignore(void *thisObj);

// tag=1067
//  QEvent::isAccepted() const
QtDartBindings_EXPORT bool c_QEvent__isAccepted(void *thisObj);

// tag=1067
//  QEvent::isInputEvent() const
QtDartBindings_EXPORT bool c_QEvent__isInputEvent(void *thisObj);

// tag=1067
//  QEvent::isPointerEvent() const
QtDartBindings_EXPORT bool c_QEvent__isPointerEvent(void *thisObj);

// tag=1067
//  QEvent::isSinglePointEvent() const
QtDartBindings_EXPORT bool c_QEvent__isSinglePointEvent(void *thisObj);

// tag=1067
//  QEvent::registerEventType(int hint)
QtDartBindings_EXPORT int c_static_QEvent__registerEventType_int(int hint);

// tag=1067
//  QEvent::setAccepted(bool accepted)
QtDartBindings_EXPORT void c_QEvent__setAccepted_bool(void *thisObj,
                                                      bool accepted);

// tag=1067
//  QEvent::spontaneous() const
QtDartBindings_EXPORT bool c_QEvent__spontaneous(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QEvent__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QEvent__registerVirtualMethodCallback(void *ptr, void *callback,
                                        int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QEvent_Finalizer(void *, void *cppObj, void *);
}
