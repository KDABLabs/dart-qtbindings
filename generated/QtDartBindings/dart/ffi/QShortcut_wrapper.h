
// tag=1040
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
// tag=1017
class QShortcut_wrapper : public ::QShortcut {
public:
  ~QShortcut_wrapper();
  // tag=1041
  QShortcut_wrapper(QKeySequence::StandardKey key, QObject *parent,
                    const char *member = nullptr,
                    const char *ambiguousMember = nullptr);
  // tag=1041
  QShortcut_wrapper(QObject *parent);
  // tag=1041
  QShortcut_wrapper(const QKeySequence &key, QObject *parent,
                    const char *member = nullptr,
                    const char *ambiguousMember = nullptr);
  // tag=1041
  void activated();
  // tag=1041
  void activatedAmbiguously();
  // tag=1041
  bool autoRepeat() const;
  // tag=1041
  virtual void customEvent(QEvent *event);
  // tag=1008
  virtual void customEvent_nocallback(QEvent *event);
  // tag=1041
  virtual bool event(QEvent *e);
  // tag=1008
  virtual bool event_nocallback(QEvent *e);
  // tag=1041
  virtual bool eventFilter(QObject *watched, QEvent *event);
  // tag=1008
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  // tag=1041
  bool isEnabled() const;
  // tag=1041
  QKeySequence key() const;
  // tag=1041
  QList<QKeySequence> keys() const;
  // tag=1041
  void setAutoRepeat(bool on);
  // tag=1041
  void setEnabled(bool enable);
  // tag=1041
  void setKey(const QKeySequence &key);
  // tag=1041
  void setKeys(QKeySequence::StandardKey key);
  // tag=1041
  void setKeys(const QList<QKeySequence> &keys);
  // tag=1041
  void setWhatsThis(const QString &text);
  // tag=1041
  static QString tr(const char *s, const char *c, int n);
  // tag=1041
  QString whatsThis() const;
  // tag=1042
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_event)(void *, QEvent *e);
  Callback_event m_eventCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_eventFilter)(void *, QObject *watched, QEvent *event);
  Callback_eventFilter m_eventFilterCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QShortcut::QShortcut(QKeySequence::StandardKey key, QObject * parent, const
//  char * member, const char * ambiguousMember)
QtDartBindings_EXPORT void *
c_QShortcut__constructor_StandardKey_QObject_char_char(
    int key, void *parent_, const char *member, const char *ambiguousMember);

// tag=1067
//  QShortcut::QShortcut(QObject * parent)
QtDartBindings_EXPORT void *c_QShortcut__constructor_QObject(void *parent_);

// tag=1067
//  QShortcut::QShortcut(const QKeySequence & key, QObject * parent, const char
//  * member, const char * ambiguousMember)
QtDartBindings_EXPORT void *
c_QShortcut__constructor_QKeySequence_QObject_char_char(
    void *key_, void *parent_, const char *member, const char *ambiguousMember);

// tag=1067
//  QShortcut::activated()
QtDartBindings_EXPORT void c_QShortcut__activated(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void
c_QShortcut__onActivated(void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QShortcut::activatedAmbiguously()
QtDartBindings_EXPORT void c_QShortcut__activatedAmbiguously(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void
c_QShortcut__onActivatedAmbiguously(void *thisObj, void *contextQObject,
                                    void *callback);
// tag=1067
//  QShortcut::autoRepeat() const
QtDartBindings_EXPORT bool c_QShortcut__autoRepeat(void *thisObj);

// tag=1067
//  QShortcut::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QShortcut__customEvent_QEvent(void *thisObj,
                                                           void *event_);

// tag=1067
//  QShortcut::event(QEvent * e)
QtDartBindings_EXPORT bool c_QShortcut__event_QEvent(void *thisObj, void *e_);

// tag=1067
//  QShortcut::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QShortcut__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                        void *event_);

// tag=1067
//  QShortcut::isEnabled() const
QtDartBindings_EXPORT bool c_QShortcut__isEnabled(void *thisObj);

// tag=1067
//  QShortcut::key() const
QtDartBindings_EXPORT void *c_QShortcut__key(void *thisObj);

// tag=1067
//  QShortcut::keys() const
QtDartBindings_EXPORT void *c_QShortcut__keys(void *thisObj);

// tag=1067
//  QShortcut::setAutoRepeat(bool on)
QtDartBindings_EXPORT void c_QShortcut__setAutoRepeat_bool(void *thisObj,
                                                           bool on);

// tag=1067
//  QShortcut::setEnabled(bool enable)
QtDartBindings_EXPORT void c_QShortcut__setEnabled_bool(void *thisObj,
                                                        bool enable);

// tag=1067
//  QShortcut::setKey(const QKeySequence & key)
QtDartBindings_EXPORT void c_QShortcut__setKey_QKeySequence(void *thisObj,
                                                            void *key_);

// tag=1067
//  QShortcut::setKeys(QKeySequence::StandardKey key)
QtDartBindings_EXPORT void c_QShortcut__setKeys_StandardKey(void *thisObj,
                                                            int key);

// tag=1067
//  QShortcut::setKeys(const QList<QKeySequence > & keys)
QtDartBindings_EXPORT void
c_QShortcut__setKeys_QList_QKeySequence(void *thisObj, void *keys_);

// tag=1067
//  QShortcut::setWhatsThis(const QString & text)
QtDartBindings_EXPORT void c_QShortcut__setWhatsThis_QString(void *thisObj,
                                                             const char *text_);

// tag=1067
//  QShortcut::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QShortcut__tr_char_char_int(const char *s, const char *c, int n);

// tag=1067
//  QShortcut::whatsThis() const
QtDartBindings_EXPORT void *c_QShortcut__whatsThis(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QShortcut__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QShortcut__registerVirtualMethodCallback(void *ptr, void *callback,
                                           int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QShortcut_Finalizer(void *, void *cppObj, void *);
}
