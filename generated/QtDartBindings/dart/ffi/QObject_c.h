/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstring.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
class QObject_wrapper : public ::QObject {
public:
  ~QObject_wrapper();
  QObject_wrapper(QObject *parent = nullptr);
  bool blockSignals(bool b);
  const QList<QObject *> &children() const;
  virtual void customEvent(QEvent *event);
  virtual void customEvent_nocallback(QEvent *event);
  void deleteLater();
  void destroyed(QObject *arg__1 = nullptr);
  bool disconnect(const QObject *receiver, const char *member = nullptr) const;
  static bool disconnect(const QObject *sender, const char *signal,
                         const QObject *receiver, const char *member);
  bool disconnect(const char *signal = nullptr,
                  const QObject *receiver = nullptr,
                  const char *member = nullptr) const;
  void dumpObjectInfo() const;
  void dumpObjectTree() const;
  QList<QByteArray> dynamicPropertyNames() const;
  virtual bool event(QEvent *event);
  virtual bool event_nocallback(QEvent *event);
  virtual bool eventFilter(QObject *watched, QEvent *event);
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  bool inherits(const char *classname) const;
  void installEventFilter(QObject *filterObj);
  bool isQuickItemType() const;
  bool isWidgetType() const;
  bool isWindowType() const;
  void killTimer(int id);
  QString objectName() const;
  QObject *parent() const;
  QVariant property(const char *name) const;
  int receivers(const char *signal) const;
  void removeEventFilter(QObject *obj);
  QObject *sender() const;
  int senderSignalIndex() const;
  void setParent(QObject *parent);
  bool setProperty(const char *name, const QVariant &value);
  bool signalsBlocked() const;
  int startTimer(int interval);
  static QString tr(const char *s, const char *c, int n);
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  typedef bool (*Callback_event)(void *, QEvent *event);
  Callback_event m_eventCallback = nullptr;
  typedef bool (*Callback_eventFilter)(void *, QObject *watched, QEvent *event);
  Callback_eventFilter m_eventFilterCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QObject::QObject(QObject * parent)
QtDartBindings_EXPORT void *c_QObject__constructor_QObject(void *parent_);
// QObject::blockSignals(bool b)
QtDartBindings_EXPORT bool c_QObject__blockSignals_bool(void *thisObj, bool b);
// QObject::children() const
QtDartBindings_EXPORT void *c_QObject__children(void *thisObj);
// QObject::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QObject__customEvent_QEvent(void *thisObj,
                                                         void *event_);
// QObject::deleteLater()
QtDartBindings_EXPORT void c_QObject__deleteLater(void *thisObj);
// QObject::destroyed(QObject * arg__1)
QtDartBindings_EXPORT void c_QObject__destroyed_QObject(void *thisObj,
                                                        void *arg__1_);
QtDartBindings_EXPORT void c_QObject__onDestroyed_QObject(
    void *thisObj, void *contextQObject,
    void *callback); // QObject::disconnect(const QObject * receiver, const char
                     // * member) const
QtDartBindings_EXPORT bool
c_QObject__disconnect_QObject_char(void *thisObj, void *receiver_,
                                   const char *member);
// QObject::disconnect(const QObject * sender, const char * signal, const
// QObject * receiver, const char * member)
QtDartBindings_EXPORT bool
c_static_QObject__disconnect_QObject_char_QObject_char(void *sender_,
                                                       const char *signal,
                                                       void *receiver_,
                                                       const char *member);
// QObject::disconnect(const char * signal, const QObject * receiver, const char
// * member) const
QtDartBindings_EXPORT bool
c_QObject__disconnect_char_QObject_char(void *thisObj, const char *signal,
                                        void *receiver_, const char *member);
// QObject::dumpObjectInfo() const
QtDartBindings_EXPORT void c_QObject__dumpObjectInfo(void *thisObj);
// QObject::dumpObjectTree() const
QtDartBindings_EXPORT void c_QObject__dumpObjectTree(void *thisObj);
// QObject::dynamicPropertyNames() const
QtDartBindings_EXPORT void *c_QObject__dynamicPropertyNames(void *thisObj);
// QObject::event(QEvent * event)
QtDartBindings_EXPORT bool c_QObject__event_QEvent(void *thisObj, void *event_);
// QObject::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool c_QObject__eventFilter_QObject_QEvent(void *thisObj,
                                                                 void *watched_,
                                                                 void *event_);
// QObject::inherits(const char * classname) const
QtDartBindings_EXPORT bool c_QObject__inherits_char(void *thisObj,
                                                    const char *classname);
// QObject::installEventFilter(QObject * filterObj)
QtDartBindings_EXPORT void
c_QObject__installEventFilter_QObject(void *thisObj, void *filterObj_);
// QObject::isQuickItemType() const
QtDartBindings_EXPORT bool c_QObject__isQuickItemType(void *thisObj);
// QObject::isWidgetType() const
QtDartBindings_EXPORT bool c_QObject__isWidgetType(void *thisObj);
// QObject::isWindowType() const
QtDartBindings_EXPORT bool c_QObject__isWindowType(void *thisObj);
// QObject::killTimer(int id)
QtDartBindings_EXPORT void c_QObject__killTimer_int(void *thisObj, int id);
// QObject::objectName() const
QtDartBindings_EXPORT void *c_QObject__objectName(void *thisObj);
// QObject::parent() const
QtDartBindings_EXPORT void *c_QObject__parent(void *thisObj);
// QObject::property(const char * name) const
QtDartBindings_EXPORT void *c_QObject__property_char(void *thisObj,
                                                     const char *name);
// QObject::receivers(const char * signal) const
QtDartBindings_EXPORT int c_QObject__receivers_char(void *thisObj,
                                                    const char *signal);
// QObject::removeEventFilter(QObject * obj)
QtDartBindings_EXPORT void c_QObject__removeEventFilter_QObject(void *thisObj,
                                                                void *obj_);
// QObject::sender() const
QtDartBindings_EXPORT void *c_QObject__sender(void *thisObj);
// QObject::senderSignalIndex() const
QtDartBindings_EXPORT int c_QObject__senderSignalIndex(void *thisObj);
// QObject::setParent(QObject * parent)
QtDartBindings_EXPORT void c_QObject__setParent_QObject(void *thisObj,
                                                        void *parent_);
// QObject::setProperty(const char * name, const QVariant & value)
QtDartBindings_EXPORT bool
c_QObject__setProperty_char_QVariant(void *thisObj, const char *name,
                                     void *value_);
// QObject::signalsBlocked() const
QtDartBindings_EXPORT bool c_QObject__signalsBlocked(void *thisObj);
// QObject::startTimer(int interval)
QtDartBindings_EXPORT int c_QObject__startTimer_int(void *thisObj,
                                                    int interval);
// QObject::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QObject__tr_char_char_int(const char *s, const char *c, int n);
QtDartBindings_EXPORT void c_QObject__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QObject__registerVirtualMethodCallback(void *ptr, void *callback,
                                         int methodId);
QtDartBindings_EXPORT void c_QObject_Finalizer(void *cppObj);
}
