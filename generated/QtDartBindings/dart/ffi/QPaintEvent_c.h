/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qevent.h>
#include <qrect.h>
#include <qregion.h>

namespace QtDartBindings_wrappersNS {
class QPaintEvent_wrapper : public ::QPaintEvent {
public:
  ~QPaintEvent_wrapper();
  QPaintEvent_wrapper(const QRect &paintRect);
  QPaintEvent_wrapper(const QRegion &paintRegion);
  virtual QPaintEvent *clone() const;
  virtual QPaintEvent *clone_nocallback() const;
  const QRect &rect() const;
  const QRegion &region() const;
  virtual void setAccepted(bool accepted);
  virtual void setAccepted_nocallback(bool accepted);
  typedef QPaintEvent *(*Callback_clone)(void *);
  Callback_clone m_cloneCallback = nullptr;
  typedef void (*Callback_setAccepted)(void *, bool accepted);
  Callback_setAccepted m_setAcceptedCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QPaintEvent::QPaintEvent(const QRect & paintRect)
QtDartBindings_EXPORT void *c_QPaintEvent__constructor_QRect(void *paintRect_);
// QPaintEvent::QPaintEvent(const QRegion & paintRegion)
QtDartBindings_EXPORT void *
c_QPaintEvent__constructor_QRegion(void *paintRegion_);
// QPaintEvent::clone() const
QtDartBindings_EXPORT void *c_QPaintEvent__clone(void *thisObj);
// QPaintEvent::rect() const
QtDartBindings_EXPORT void *c_QPaintEvent__rect(void *thisObj);
// QPaintEvent::region() const
QtDartBindings_EXPORT void *c_QPaintEvent__region(void *thisObj);
// QPaintEvent::setAccepted(bool accepted)
QtDartBindings_EXPORT void c_QPaintEvent__setAccepted_bool(void *thisObj,
                                                           bool accepted);
QtDartBindings_EXPORT void c_QPaintEvent__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QPaintEvent__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId);
QtDartBindings_EXPORT void c_QPaintEvent_Finalizer(void *cppObj);
}
