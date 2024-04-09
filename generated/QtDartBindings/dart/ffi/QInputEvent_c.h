/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qevent.h>

namespace QtDartBindings_wrappersNS {
class QInputEvent_wrapper : public ::QInputEvent {
public:
  ~QInputEvent_wrapper();
  virtual QInputEvent *clone() const;
  virtual QInputEvent *clone_nocallback() const;
  QFlags<Qt::KeyboardModifier> modifiers() const;
  virtual void setAccepted(bool accepted);
  virtual void setAccepted_nocallback(bool accepted);
  void setModifiers(QFlags<Qt::KeyboardModifier> modifiers);
  typedef QInputEvent *(*Callback_clone)(void *);
  Callback_clone m_cloneCallback = nullptr;
  typedef void (*Callback_setAccepted)(void *, bool accepted);
  Callback_setAccepted m_setAcceptedCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QInputEvent::clone() const
QtDartBindings_EXPORT void *c_QInputEvent__clone(void *thisObj);
// QInputEvent::modifiers() const
QtDartBindings_EXPORT int c_QInputEvent__modifiers(void *thisObj);
// QInputEvent::setAccepted(bool accepted)
QtDartBindings_EXPORT void c_QInputEvent__setAccepted_bool(void *thisObj,
                                                           bool accepted);
// QInputEvent::setModifiers(QFlags<Qt::KeyboardModifier> modifiers)
QtDartBindings_EXPORT void
c_QInputEvent__setModifiers_KeyboardModifiers(void *thisObj, int modifiers_);
QtDartBindings_EXPORT void c_QInputEvent__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QInputEvent__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId);
QtDartBindings_EXPORT void c_QInputEvent_Finalizer(void *cppObj);
}
