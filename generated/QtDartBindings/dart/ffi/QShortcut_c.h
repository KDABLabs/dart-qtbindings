/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qkeysequence.h>
#include <qlist.h>
#include <qobject.h>
#include <qshortcut.h>
#include <qstring.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
class QShortcut_wrapper : public ::QShortcut {
public:
  ~QShortcut_wrapper();
  QShortcut_wrapper(QKeySequence::StandardKey key, QObject *parent,
                    const char *member = nullptr,
                    const char *ambiguousMember = nullptr);
  QShortcut_wrapper(QObject *parent);
  QShortcut_wrapper(const QKeySequence &key, QObject *parent,
                    const char *member = nullptr,
                    const char *ambiguousMember = nullptr);
  void activated();
  void activatedAmbiguously();
  bool autoRepeat() const;
  virtual void customEvent(QEvent *event);
  virtual void customEvent_nocallback(QEvent *event);
  virtual bool event(QEvent *e);
  virtual bool event_nocallback(QEvent *e);
  virtual bool eventFilter(QObject *watched, QEvent *event);
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  bool isEnabled() const;
  QKeySequence key() const;
  QList<QKeySequence> keys() const;
  void setAutoRepeat(bool on);
  void setEnabled(bool enable);
  void setKey(const QKeySequence &key);
  void setKeys(QKeySequence::StandardKey key);
  void setKeys(const QList<QKeySequence> &keys);
  void setWhatsThis(const QString &text);
  static QString tr(const char *s, const char *c, int n);
  QString whatsThis() const;
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  typedef bool (*Callback_event)(void *, QEvent *e);
  Callback_event m_eventCallback = nullptr;
  typedef bool (*Callback_eventFilter)(void *, QObject *watched, QEvent *event);
  Callback_eventFilter m_eventFilterCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QShortcut::QShortcut(QKeySequence::StandardKey key, QObject * parent, const
// char * member, const char * ambiguousMember)
QtDartBindings_EXPORT void *
c_QShortcut__constructor_StandardKey_QObject_char_char(
    int key, void *parent_, const char *member, const char *ambiguousMember);
// QShortcut::QShortcut(QObject * parent)
QtDartBindings_EXPORT void *c_QShortcut__constructor_QObject(void *parent_);
// QShortcut::QShortcut(const QKeySequence & key, QObject * parent, const char *
// member, const char * ambiguousMember)
QtDartBindings_EXPORT void *
c_QShortcut__constructor_QKeySequence_QObject_char_char(
    void *key_, void *parent_, const char *member, const char *ambiguousMember);
// QShortcut::activated()
QtDartBindings_EXPORT void c_QShortcut__activated(void *thisObj);
QtDartBindings_EXPORT void
c_QShortcut__onActivated(void *thisObj, void *contextQObject,
                         void *callback); // QShortcut::activatedAmbiguously()
QtDartBindings_EXPORT void c_QShortcut__activatedAmbiguously(void *thisObj);
QtDartBindings_EXPORT void c_QShortcut__onActivatedAmbiguously(
    void *thisObj, void *contextQObject,
    void *callback); // QShortcut::autoRepeat() const
QtDartBindings_EXPORT bool c_QShortcut__autoRepeat(void *thisObj);
// QShortcut::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QShortcut__customEvent_QEvent(void *thisObj,
                                                           void *event_);
// QShortcut::event(QEvent * e)
QtDartBindings_EXPORT bool c_QShortcut__event_QEvent(void *thisObj, void *e_);
// QShortcut::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QShortcut__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                        void *event_);
// QShortcut::isEnabled() const
QtDartBindings_EXPORT bool c_QShortcut__isEnabled(void *thisObj);
// QShortcut::key() const
QtDartBindings_EXPORT void *c_QShortcut__key(void *thisObj);
// QShortcut::keys() const
QtDartBindings_EXPORT void *c_QShortcut__keys(void *thisObj);
// QShortcut::setAutoRepeat(bool on)
QtDartBindings_EXPORT void c_QShortcut__setAutoRepeat_bool(void *thisObj,
                                                           bool on);
// QShortcut::setEnabled(bool enable)
QtDartBindings_EXPORT void c_QShortcut__setEnabled_bool(void *thisObj,
                                                        bool enable);
// QShortcut::setKey(const QKeySequence & key)
QtDartBindings_EXPORT void c_QShortcut__setKey_QKeySequence(void *thisObj,
                                                            void *key_);
// QShortcut::setKeys(QKeySequence::StandardKey key)
QtDartBindings_EXPORT void c_QShortcut__setKeys_StandardKey(void *thisObj,
                                                            int key);
// QShortcut::setKeys(const QList<QKeySequence > & keys)
QtDartBindings_EXPORT void
c_QShortcut__setKeys_QList_QKeySequence(void *thisObj, void *keys_);
// QShortcut::setWhatsThis(const QString & text)
QtDartBindings_EXPORT void c_QShortcut__setWhatsThis_QString(void *thisObj,
                                                             const char *text_);
// QShortcut::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QShortcut__tr_char_char_int(const char *s, const char *c, int n);
// QShortcut::whatsThis() const
QtDartBindings_EXPORT void *c_QShortcut__whatsThis(void *thisObj);
QtDartBindings_EXPORT void c_QShortcut__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QShortcut__registerVirtualMethodCallback(void *ptr, void *callback,
                                           int methodId);
QtDartBindings_EXPORT void c_QShortcut_Finalizer(void *cppObj);
}
