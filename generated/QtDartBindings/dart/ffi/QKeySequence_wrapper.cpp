#include "QKeySequence_wrapper.h"

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
QKeySequence_wrapper::QKeySequence_wrapper() : ::QKeySequence() {}

// tag=1006
QKeySequence_wrapper::QKeySequence_wrapper(QKeySequence::StandardKey key)
    : ::QKeySequence(key) {}

// tag=1006
QKeySequence_wrapper::QKeySequence_wrapper(const QString &key)
    : ::QKeySequence(key) {}

// tag=1006
QKeySequence_wrapper::QKeySequence_wrapper(int k1, int k2, int k3, int k4)
    : ::QKeySequence(k1, k2, k3, k4) {}
int QKeySequence_wrapper::count() const {
  // tag=1000

  // tag=1004
  return ::QKeySequence::count();
}
QKeySequence QKeySequence_wrapper::fromString(const QString &str) {
  // tag=1000

  // tag=1004
  return ::QKeySequence::fromString(str);
}
bool QKeySequence_wrapper::isDetached() const {
  // tag=1000

  // tag=1004
  return ::QKeySequence::isDetached();
}
bool QKeySequence_wrapper::isEmpty() const {
  // tag=1000

  // tag=1004
  return ::QKeySequence::isEmpty();
}
QList<QKeySequence>
QKeySequence_wrapper::keyBindings(QKeySequence::StandardKey key) {
  // tag=1000

  // tag=1004
  return ::QKeySequence::keyBindings(key);
}
QList<QKeySequence> QKeySequence_wrapper::listFromString(const QString &str) {
  // tag=1000

  // tag=1004
  return ::QKeySequence::listFromString(str);
}
QString QKeySequence_wrapper::listToString(const QList<QKeySequence> &list) {
  // tag=1000

  // tag=1004
  return ::QKeySequence::listToString(list);
}
QKeySequence QKeySequence_wrapper::mnemonic(const QString &text) {
  // tag=1000

  // tag=1004
  return ::QKeySequence::mnemonic(text);
}

// tag=1005
QKeySequence_wrapper::~QKeySequence_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QKeySequence *fromPtr(void *ptr) {
  return reinterpret_cast<QKeySequence *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QKeySequence_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QKeySequence_wrapper *>(
      ptr);
}
extern "C" {

// tag=1049
void c_QKeySequence_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QKeySequence_wrapper *>(
      cppObj);
}
void *c_QKeySequence__constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QKeySequence_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QKeySequence__constructor_StandardKey(int key) {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QKeySequence_wrapper(
      static_cast<QKeySequence::StandardKey>(key));
  return reinterpret_cast<void *>(ptr);
}
void *c_QKeySequence__constructor_QString(const char *key_) {
  const auto key = QString::fromUtf8(key_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QKeySequence_wrapper(key);
  return reinterpret_cast<void *>(ptr);
}
void *c_QKeySequence__constructor_int_int_int_int(int k1, int k2, int k3,
                                                  int k4) {

  // tag=1056
  auto ptr =
      new QtDartBindings_wrappersNS::QKeySequence_wrapper(k1, k2, k3, k4);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// count() const
int c_QKeySequence__count(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->count();
}

// tag=1050
// fromString(const QString & str)
void *c_static_QKeySequence__fromString_QString(const char *str_) {
  const auto str = QString::fromUtf8(str_);
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QKeySequence>{
          QtDartBindings_wrappersNS::QKeySequence_wrapper::fromString(str)};
}

// tag=1050
// isDetached() const
bool c_QKeySequence__isDetached(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isDetached();
}

// tag=1050
// isEmpty() const
bool c_QKeySequence__isEmpty(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isEmpty();
}

// tag=1050
// keyBindings(QKeySequence::StandardKey key)
void *c_static_QKeySequence__keyBindings_StandardKey(int key) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QKeySequence>>{
          QtDartBindings_wrappersNS::QKeySequence_wrapper::keyBindings(
              static_cast<QKeySequence::StandardKey>(key))};
}

// tag=1050
// listFromString(const QString & str)
void *c_static_QKeySequence__listFromString_QString(const char *str_) {
  const auto str = QString::fromUtf8(str_);
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QKeySequence>>{
          QtDartBindings_wrappersNS::QKeySequence_wrapper::listFromString(str)};
}

// tag=1050
// listToString(const QList<QKeySequence > & list)
void *c_static_QKeySequence__listToString_QList_QKeySequence(void *list_) {
  auto &list = *reinterpret_cast<QList<QKeySequence> *>(list_);
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QKeySequence_wrapper::listToString(list)};
}

// tag=1050
// mnemonic(const QString & text)
void *c_static_QKeySequence__mnemonic_QString(const char *text_) {
  const auto text = QString::fromUtf8(text_);
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QKeySequence>{
          QtDartBindings_wrappersNS::QKeySequence_wrapper::mnemonic(text)};
}
void c_QKeySequence__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
}
