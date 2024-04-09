#include "QStyleOptionComplex_wrapper.h"

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
QStyleOptionComplex_wrapper::QStyleOptionComplex_wrapper(int version, int type)
    : ::QStyleOptionComplex(version, type) {}

// tag=1005
QStyleOptionComplex_wrapper::~QStyleOptionComplex_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QStyleOptionComplex *fromPtr(void *ptr) {
  return reinterpret_cast<QStyleOptionComplex *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QStyleOptionComplex_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<
      QtDartBindings_wrappersNS::QStyleOptionComplex_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QStyleOptionComplex_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QStyleOptionComplex_wrapper *>(cppObj);
}
void *c_QStyleOptionComplex__constructor_int_int(int version, int type) {

  // tag=1056
  auto ptr =
      new QtDartBindings_wrappersNS::QStyleOptionComplex_wrapper(version, type);
  return reinterpret_cast<void *>(ptr);
}
void c_QStyleOptionComplex__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
}
