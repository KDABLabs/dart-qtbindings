#include "QStyleHintReturn_wrapper.h"

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
QStyleHintReturn_wrapper::QStyleHintReturn_wrapper(int version, int type)
    : ::QStyleHintReturn(version, type) {}

// tag=1005
QStyleHintReturn_wrapper::~QStyleHintReturn_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QStyleHintReturn *fromPtr(void *ptr) {
  return reinterpret_cast<QStyleHintReturn *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QStyleHintReturn_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<
      QtDartBindings_wrappersNS::QStyleHintReturn_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QStyleHintReturn_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QStyleHintReturn_wrapper *>(cppObj);
}
void *c_QStyleHintReturn__constructor_int_int(int version, int type) {

  // tag=1056
  auto ptr =
      new QtDartBindings_wrappersNS::QStyleHintReturn_wrapper(version, type);
  return reinterpret_cast<void *>(ptr);
}
void c_QStyleHintReturn__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
int c_QStyleHintReturn___get_version(void *thisObj) {

  // tag=1058
  return fromPtr(thisObj)->version;
}
int c_QStyleHintReturn___get_type(void *thisObj) {

  // tag=1058
  return fromPtr(thisObj)->type;
}
void c_QStyleHintReturn___set_version_int(void *thisObj, int version_) {

  // tag=1057
  fromPtr(thisObj)->version = version_;
}
void c_QStyleHintReturn___set_type_int(void *thisObj, int type_) {

  // tag=1057
  fromPtr(thisObj)->type = type_;
}
}
