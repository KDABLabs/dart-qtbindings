/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qevent.h>
#include <qobject.h>
#include <qpoint.h>

namespace QtDartBindings_wrappersNS {
class QMouseEvent_wrapper : public ::QMouseEvent {
public:
  ~QMouseEvent_wrapper();
  virtual QMouseEvent *clone() const;
  virtual QMouseEvent *clone_nocallback() const;
  virtual bool isBeginEvent() const;
  virtual bool isBeginEvent_nocallback() const;
  virtual bool isEndEvent() const;
  virtual bool isEndEvent_nocallback() const;
  virtual bool isUpdateEvent() const;
  virtual bool isUpdateEvent_nocallback() const;
  QPoint pos() const;
  virtual void setAccepted(bool accepted);
  virtual void setAccepted_nocallback(bool accepted);
  typedef QMouseEvent *(*Callback_clone)(void *);
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
// QMouseEvent::clone() const
QtDartBindings_EXPORT void *c_QMouseEvent__clone(void *thisObj);
// QMouseEvent::isBeginEvent() const
QtDartBindings_EXPORT bool c_QMouseEvent__isBeginEvent(void *thisObj);
// QMouseEvent::isEndEvent() const
QtDartBindings_EXPORT bool c_QMouseEvent__isEndEvent(void *thisObj);
// QMouseEvent::isUpdateEvent() const
QtDartBindings_EXPORT bool c_QMouseEvent__isUpdateEvent(void *thisObj);
// QMouseEvent::pos() const
QtDartBindings_EXPORT void *c_QMouseEvent__pos(void *thisObj);
// QMouseEvent::setAccepted(bool accepted)
QtDartBindings_EXPORT void c_QMouseEvent__setAccepted_bool(void *thisObj,
                                                           bool accepted);
QtDartBindings_EXPORT void c_QMouseEvent__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QMouseEvent__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId);
QtDartBindings_EXPORT void c_QMouseEvent_Finalizer(void *cppObj);
}
