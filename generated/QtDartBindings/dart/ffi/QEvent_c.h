/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qcoreevent.h>

namespace QtDartBindings_wrappersNS {
class QEvent_wrapper : public ::QEvent {
public:
  ~QEvent_wrapper();
  void accept();
  virtual QEvent *clone() const;
  virtual QEvent *clone_nocallback() const;
  void ignore();
  bool isAccepted() const;
  bool isInputEvent() const;
  bool isPointerEvent() const;
  bool isSinglePointEvent() const;
  static int registerEventType(int hint = -1);
  virtual void setAccepted(bool accepted);
  virtual void setAccepted_nocallback(bool accepted);
  bool spontaneous() const;
  typedef QEvent *(*Callback_clone)(void *);
  Callback_clone m_cloneCallback = nullptr;
  typedef void (*Callback_setAccepted)(void *, bool accepted);
  Callback_setAccepted m_setAcceptedCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QEvent::accept()
QtDartBindings_EXPORT void c_QEvent__accept(void *thisObj);
// QEvent::clone() const
QtDartBindings_EXPORT void *c_QEvent__clone(void *thisObj);
// QEvent::ignore()
QtDartBindings_EXPORT void c_QEvent__ignore(void *thisObj);
// QEvent::isAccepted() const
QtDartBindings_EXPORT bool c_QEvent__isAccepted(void *thisObj);
// QEvent::isInputEvent() const
QtDartBindings_EXPORT bool c_QEvent__isInputEvent(void *thisObj);
// QEvent::isPointerEvent() const
QtDartBindings_EXPORT bool c_QEvent__isPointerEvent(void *thisObj);
// QEvent::isSinglePointEvent() const
QtDartBindings_EXPORT bool c_QEvent__isSinglePointEvent(void *thisObj);
// QEvent::registerEventType(int hint)
QtDartBindings_EXPORT int c_static_QEvent__registerEventType_int(int hint);
// QEvent::setAccepted(bool accepted)
QtDartBindings_EXPORT void c_QEvent__setAccepted_bool(void *thisObj,
                                                      bool accepted);
// QEvent::spontaneous() const
QtDartBindings_EXPORT bool c_QEvent__spontaneous(void *thisObj);
QtDartBindings_EXPORT void c_QEvent__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QEvent__registerVirtualMethodCallback(void *ptr, void *callback,
                                        int methodId);
QtDartBindings_EXPORT void c_QEvent_Finalizer(void *cppObj);
}
