#include "QStyleFactory_wrapper.h"

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
QStyleFactory_wrapper::QStyleFactory_wrapper() : ::QStyleFactory() {}
QStyle *QStyleFactory_wrapper::create(const QString &arg__1) {
  // tag=1000

  // tag=1004
  return ::QStyleFactory::create(arg__1);
}
QList<QString> QStyleFactory_wrapper::keys() {
  // tag=1000

  // tag=1004
  return ::QStyleFactory::keys();
}

// tag=1005
QStyleFactory_wrapper::~QStyleFactory_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QStyleFactory *fromPtr(void *ptr) {
  return reinterpret_cast<QStyleFactory *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QStyleFactory_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QStyleFactory_wrapper *>(
      ptr);
}
extern "C" {

// tag=1049
void c_QStyleFactory_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QStyleFactory_wrapper *>(
      cppObj);
}
void *c_QStyleFactory__constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QStyleFactory_wrapper();
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// create(const QString & arg__1)
void *c_static_QStyleFactory__create_QString(const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  return
      // tag=1068
      QtDartBindings_wrappersNS::QStyleFactory_wrapper::create(arg__1);
}

// tag=1050
// keys()
void *c_static_QStyleFactory__keys() {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QString>>{
          QtDartBindings_wrappersNS::QStyleFactory_wrapper::keys()};
}
void c_QStyleFactory__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
}
