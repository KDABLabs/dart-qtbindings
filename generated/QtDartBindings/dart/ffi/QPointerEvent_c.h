/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qevent.h>

namespace QtDartBindings_wrappersNS {
class QPointerEvent_wrapper : public ::QPointerEvent {
public:
  ~QPointerEvent_wrapper();
  bool allPointsAccepted() const;
  bool allPointsGrabbed() const;
  virtual QPointerEvent *clone() const;
  virtual QPointerEvent *clone_nocallback() const;
  virtual bool isBeginEvent() const;
  virtual bool isBeginEvent_nocallback() const;
  virtual bool isEndEvent() const;
  virtual bool isEndEvent_nocallback() const;
  virtual bool isUpdateEvent() const;
  virtual bool isUpdateEvent_nocallback() const;
  qsizetype pointCount() const;
  virtual void setAccepted(bool accepted);
  virtual void setAccepted_nocallback(bool accepted);
  typedef QPointerEvent *(*Callback_clone)(void *);
  Callback_clone m_cloneCallback = nullptr;
  typedef bool (*Callback_isBeginEvent)(void *);
  Callback_isBeginEvent m_isBeginEventCallback = nullptr;
  typedef bool (*Callback_isEndEvent)(void *);
  Callback_isEndEvent m_isEndEventCallback = nullptr;
  typedef bool (*Callback_isUpdateEvent)(void *);
  Callback_isUpdateEvent m_isUpdateEventCallback = nullptr;
  typedef void (*Callback_setAccepted)(void *, bool accepted);
  Callback_setAccepted m_setAcceptedCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QPointerEvent::allPointsAccepted() const
QtDartBindings_EXPORT bool c_QPointerEvent__allPointsAccepted(void *thisObj);
// QPointerEvent::allPointsGrabbed() const
QtDartBindings_EXPORT bool c_QPointerEvent__allPointsGrabbed(void *thisObj);
// QPointerEvent::clone() const
QtDartBindings_EXPORT void *c_QPointerEvent__clone(void *thisObj);
// QPointerEvent::isBeginEvent() const
QtDartBindings_EXPORT bool c_QPointerEvent__isBeginEvent(void *thisObj);
// QPointerEvent::isEndEvent() const
QtDartBindings_EXPORT bool c_QPointerEvent__isEndEvent(void *thisObj);
// QPointerEvent::isUpdateEvent() const
QtDartBindings_EXPORT bool c_QPointerEvent__isUpdateEvent(void *thisObj);
// QPointerEvent::pointCount() const
QtDartBindings_EXPORT qsizetype c_QPointerEvent__pointCount(void *thisObj);
// QPointerEvent::setAccepted(bool accepted)
QtDartBindings_EXPORT void c_QPointerEvent__setAccepted_bool(void *thisObj,
                                                             bool accepted);
QtDartBindings_EXPORT void c_QPointerEvent__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QPointerEvent__registerVirtualMethodCallback(void *ptr, void *callback,
                                               int methodId);
QtDartBindings_EXPORT void c_QPointerEvent_Finalizer(void *cppObj);
}
