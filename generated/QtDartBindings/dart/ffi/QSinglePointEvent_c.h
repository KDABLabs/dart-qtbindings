/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qevent.h>
#include <qobject.h>
#include <qpoint.h>

namespace QtDartBindings_wrappersNS {
class QSinglePointEvent_wrapper : public ::QSinglePointEvent {
public:
  ~QSinglePointEvent_wrapper();
  virtual QSinglePointEvent *clone() const;
  virtual QSinglePointEvent *clone_nocallback() const;
  QObject *exclusivePointGrabber() const;
  QPointF globalPosition() const;
  virtual bool isBeginEvent() const;
  virtual bool isBeginEvent_nocallback() const;
  virtual bool isEndEvent() const;
  virtual bool isEndEvent_nocallback() const;
  virtual bool isUpdateEvent() const;
  virtual bool isUpdateEvent_nocallback() const;
  QPointF position() const;
  QPointF scenePosition() const;
  virtual void setAccepted(bool accepted);
  virtual void setAccepted_nocallback(bool accepted);
  void setExclusivePointGrabber(QObject *exclusiveGrabber);
  typedef QSinglePointEvent *(*Callback_clone)(void *);
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
// QSinglePointEvent::clone() const
QtDartBindings_EXPORT void *c_QSinglePointEvent__clone(void *thisObj);
// QSinglePointEvent::exclusivePointGrabber() const
QtDartBindings_EXPORT void *
c_QSinglePointEvent__exclusivePointGrabber(void *thisObj);
// QSinglePointEvent::globalPosition() const
QtDartBindings_EXPORT void *c_QSinglePointEvent__globalPosition(void *thisObj);
// QSinglePointEvent::isBeginEvent() const
QtDartBindings_EXPORT bool c_QSinglePointEvent__isBeginEvent(void *thisObj);
// QSinglePointEvent::isEndEvent() const
QtDartBindings_EXPORT bool c_QSinglePointEvent__isEndEvent(void *thisObj);
// QSinglePointEvent::isUpdateEvent() const
QtDartBindings_EXPORT bool c_QSinglePointEvent__isUpdateEvent(void *thisObj);
// QSinglePointEvent::position() const
QtDartBindings_EXPORT void *c_QSinglePointEvent__position(void *thisObj);
// QSinglePointEvent::scenePosition() const
QtDartBindings_EXPORT void *c_QSinglePointEvent__scenePosition(void *thisObj);
// QSinglePointEvent::setAccepted(bool accepted)
QtDartBindings_EXPORT void c_QSinglePointEvent__setAccepted_bool(void *thisObj,
                                                                 bool accepted);
// QSinglePointEvent::setExclusivePointGrabber(QObject * exclusiveGrabber)
QtDartBindings_EXPORT void
c_QSinglePointEvent__setExclusivePointGrabber_QObject(void *thisObj,
                                                      void *exclusiveGrabber_);
QtDartBindings_EXPORT void c_QSinglePointEvent__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QSinglePointEvent__registerVirtualMethodCallback(void *ptr, void *callback,
                                                   int methodId);
QtDartBindings_EXPORT void c_QSinglePointEvent_Finalizer(void *cppObj);
}
