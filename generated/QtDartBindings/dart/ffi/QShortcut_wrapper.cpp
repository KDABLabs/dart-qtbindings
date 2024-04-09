#include "QShortcut_wrapper.h"

#include <QDebug>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
// tag=1006
QShortcut_wrapper::QShortcut_wrapper(QKeySequence::StandardKey key,
                                     QObject *parent, const char *member,
                                     const char *ambiguousMember)
    : ::QShortcut(key, parent, member, ambiguousMember) {}

// tag=1006
QShortcut_wrapper::QShortcut_wrapper(QObject *parent) : ::QShortcut(parent) {}

// tag=1006
QShortcut_wrapper::QShortcut_wrapper(const QKeySequence &key, QObject *parent,
                                     const char *member,
                                     const char *ambiguousMember)
    : ::QShortcut(key, parent, member, ambiguousMember) {}
void QShortcut_wrapper::activated() {
  // tag=1000

  // tag=1004
  ::QShortcut::activated();
}
void QShortcut_wrapper::activatedAmbiguously() {
  // tag=1000

  // tag=1004
  ::QShortcut::activatedAmbiguously();
}
bool QShortcut_wrapper::autoRepeat() const {
  // tag=1000

  // tag=1004
  return ::QShortcut::autoRepeat();
}
void QShortcut_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QShortcut::customEvent(event);
  }
}
// tag=1009
void QShortcut_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QShortcut::customEvent(event);
}
bool QShortcut_wrapper::event(QEvent *e) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), e);
  } else {
    // tag=1002
    return ::QShortcut::event(e);
  }
}
// tag=1009
bool QShortcut_wrapper::event_nocallback(QEvent *e) {
  // tag=1003
  return ::QShortcut::event(e);
}
bool QShortcut_wrapper::eventFilter(QObject *watched, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    // tag=1002
    return ::QShortcut::eventFilter(watched, event);
  }
}
// tag=1009
bool QShortcut_wrapper::eventFilter_nocallback(QObject *watched,
                                               QEvent *event) {
  // tag=1003
  return ::QShortcut::eventFilter(watched, event);
}
bool QShortcut_wrapper::isEnabled() const {
  // tag=1000

  // tag=1004
  return ::QShortcut::isEnabled();
}
QKeySequence QShortcut_wrapper::key() const {
  // tag=1000

  // tag=1004
  return ::QShortcut::key();
}
QList<QKeySequence> QShortcut_wrapper::keys() const {
  // tag=1000

  // tag=1004
  return ::QShortcut::keys();
}
void QShortcut_wrapper::setAutoRepeat(bool on) {
  // tag=1000

  // tag=1004
  ::QShortcut::setAutoRepeat(on);
}
void QShortcut_wrapper::setEnabled(bool enable) {
  // tag=1000

  // tag=1004
  ::QShortcut::setEnabled(enable);
}
void QShortcut_wrapper::setKey(const QKeySequence &key) {
  // tag=1000

  // tag=1004
  ::QShortcut::setKey(key);
}
void QShortcut_wrapper::setKeys(QKeySequence::StandardKey key) {
  // tag=1000

  // tag=1004
  ::QShortcut::setKeys(key);
}
void QShortcut_wrapper::setKeys(const QList<QKeySequence> &keys) {
  // tag=1000

  // tag=1004
  ::QShortcut::setKeys(keys);
}
void QShortcut_wrapper::setWhatsThis(const QString &text) {
  // tag=1000

  // tag=1004
  ::QShortcut::setWhatsThis(text);
}
QString QShortcut_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QShortcut::tr(s, c, n);
}
QString QShortcut_wrapper::whatsThis() const {
  // tag=1000

  // tag=1004
  return ::QShortcut::whatsThis();
}

// tag=1005
QShortcut_wrapper::~QShortcut_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QShortcut *fromPtr(void *ptr) {
  return reinterpret_cast<QShortcut *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QShortcut_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QShortcut_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QShortcut_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QShortcut_wrapper *>(
      cppObj);
}
void *c_QShortcut__constructor_StandardKey_QObject_char_char(
    int key, void *parent_, const char *member, const char *ambiguousMember) {
  auto parent = reinterpret_cast<QObject *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QShortcut_wrapper(
      static_cast<QKeySequence::StandardKey>(key), parent, member,
      ambiguousMember);
  return reinterpret_cast<void *>(ptr);
}
void *c_QShortcut__constructor_QObject(void *parent_) {
  auto parent = reinterpret_cast<QObject *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QShortcut_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
void *c_QShortcut__constructor_QKeySequence_QObject_char_char(
    void *key_, void *parent_, const char *member,
    const char *ambiguousMember) {
  auto &key = *reinterpret_cast<QKeySequence *>(key_);
  auto parent = reinterpret_cast<QObject *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QShortcut_wrapper(
      key, parent, member, ambiguousMember);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// activated()
void c_QShortcut__activated(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->activated();
}

// tag=1079
void c_QShortcut__onActivated(void *thisObj, void *contextQObject,
                              void *callback) {
  auto instance = reinterpret_cast<QShortcut *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QShortcut::activated,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// activatedAmbiguously()
void c_QShortcut__activatedAmbiguously(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->activatedAmbiguously();
}

// tag=1079
void c_QShortcut__onActivatedAmbiguously(void *thisObj, void *contextQObject,
                                         void *callback) {
  auto instance = reinterpret_cast<QShortcut *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QShortcut::activatedAmbiguously,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// autoRepeat() const
bool c_QShortcut__autoRepeat(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->autoRepeat();
}

// tag=1050
// customEvent(QEvent * event)
void c_QShortcut__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1079
void c_QShortcut__onDestroyed_QObject(void *thisObj, void *contextQObject,
                                      void *callback) {
  auto instance = reinterpret_cast<QShortcut *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QShortcut::destroyed,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// event(QEvent * e)
bool c_QShortcut__event_QEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QEvent *>(e_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->event_nocallback(e);
}

// tag=1050
// eventFilter(QObject * watched, QEvent * event)
bool c_QShortcut__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                             void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QShortcut_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->eventFilter_nocallback(watched, event);
        } else {
          return targetPtr->eventFilter(watched, event);
        }
      }();
}

// tag=1050
// isEnabled() const
bool c_QShortcut__isEnabled(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isEnabled();
}

// tag=1050
// key() const
void *c_QShortcut__key(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QKeySequence>{fromPtr(thisObj)->key()};
}

// tag=1050
// keys() const
void *c_QShortcut__keys(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QKeySequence>>{
          fromPtr(thisObj)->keys()};
}

// tag=1050
// setAutoRepeat(bool on)
void c_QShortcut__setAutoRepeat_bool(void *thisObj, bool on) {
  // tag=1010
  fromPtr(thisObj)->setAutoRepeat(on);
}

// tag=1050
// setEnabled(bool enable)
void c_QShortcut__setEnabled_bool(void *thisObj, bool enable) {
  // tag=1010
  fromPtr(thisObj)->setEnabled(enable);
}

// tag=1050
// setKey(const QKeySequence & key)
void c_QShortcut__setKey_QKeySequence(void *thisObj, void *key_) {
  auto &key = *reinterpret_cast<QKeySequence *>(key_);
  // tag=1010
  fromPtr(thisObj)->setKey(key);
}

// tag=1050
// setKeys(QKeySequence::StandardKey key)
void c_QShortcut__setKeys_StandardKey(void *thisObj, int key) {
  // tag=1010
  fromPtr(thisObj)->setKeys(static_cast<QKeySequence::StandardKey>(key));
}

// tag=1050
// setKeys(const QList<QKeySequence > & keys)
void c_QShortcut__setKeys_QList_QKeySequence(void *thisObj, void *keys_) {
  auto &keys = *reinterpret_cast<QList<QKeySequence> *>(keys_);
  // tag=1010
  fromPtr(thisObj)->setKeys(keys);
}

// tag=1050
// setWhatsThis(const QString & text)
void c_QShortcut__setWhatsThis_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  // tag=1010
  fromPtr(thisObj)->setWhatsThis(text);
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QShortcut__tr_char_char_int(const char *s, const char *c,
                                           int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QShortcut_wrapper::tr(s, c, n)};
}

// tag=1050
// whatsThis() const
void *c_QShortcut__whatsThis(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->whatsThis()};
}
void c_QShortcut__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QShortcut__registerVirtualMethodCallback(void *ptr, void *callback,
                                                int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 944:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QShortcut_wrapper::Callback_customEvent>(
        callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QShortcut_wrapper::Callback_event>(callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QShortcut_wrapper::Callback_eventFilter>(
        callback);
    break;
  }
}
}
