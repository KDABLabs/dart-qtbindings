#include "QStyleOption_wrapper.h"

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
QStyleOption_wrapper::QStyleOption_wrapper(int version, int type)
    : ::QStyleOption(version, type) {}
void QStyleOption_wrapper::initFrom(const QWidget *w) {
  // tag=1000

  // tag=1004
  ::QStyleOption::initFrom(w);
}

// tag=1005
QStyleOption_wrapper::~QStyleOption_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QStyleOption *fromPtr(void *ptr) {
  return reinterpret_cast<QStyleOption *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QStyleOption_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QStyleOption_wrapper *>(
      ptr);
}
extern "C" {

// tag=1049
void c_QStyleOption_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QStyleOption_wrapper *>(
      cppObj);
}
void *c_QStyleOption__constructor_int_int(int version, int type) {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QStyleOption_wrapper(version, type);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// initFrom(const QWidget * w)
void c_QStyleOption__initFrom_QWidget(void *thisObj, void *w_) {
  auto w = reinterpret_cast<QWidget *>(w_);
  // tag=1010
  fromPtr(thisObj)->initFrom(w);
}
void c_QStyleOption__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
int c_QStyleOption___get_version(void *thisObj) {

  // tag=1058
  return fromPtr(thisObj)->version;
}
int c_QStyleOption___get_type(void *thisObj) {

  // tag=1058
  return fromPtr(thisObj)->type;
}
void c_QStyleOption___set_version_int(void *thisObj, int version_) {

  // tag=1057
  fromPtr(thisObj)->version = version_;
}
void c_QStyleOption___set_type_int(void *thisObj, int type_) {

  // tag=1057
  fromPtr(thisObj)->type = type_;
}
}
