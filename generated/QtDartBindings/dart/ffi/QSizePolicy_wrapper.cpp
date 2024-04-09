#include "QSizePolicy_wrapper.h"

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
QSizePolicy_wrapper::QSizePolicy_wrapper() : ::QSizePolicy() {}

// tag=1006
QSizePolicy_wrapper::QSizePolicy_wrapper(QSizePolicy::Policy horizontal,
                                         QSizePolicy::Policy vertical,
                                         QSizePolicy::ControlType type)
    : ::QSizePolicy(horizontal, vertical, type) {}
QSizePolicy::ControlType QSizePolicy_wrapper::controlType() const {
  // tag=1000

  // tag=1004
  return ::QSizePolicy::controlType();
}
QFlags<Qt::Orientation> QSizePolicy_wrapper::expandingDirections() const {
  // tag=1000

  // tag=1004
  return ::QSizePolicy::expandingDirections();
}
bool QSizePolicy_wrapper::hasHeightForWidth() const {
  // tag=1000

  // tag=1004
  return ::QSizePolicy::hasHeightForWidth();
}
bool QSizePolicy_wrapper::hasWidthForHeight() const {
  // tag=1000

  // tag=1004
  return ::QSizePolicy::hasWidthForHeight();
}
QSizePolicy::Policy QSizePolicy_wrapper::horizontalPolicy() const {
  // tag=1000

  // tag=1004
  return ::QSizePolicy::horizontalPolicy();
}
int QSizePolicy_wrapper::horizontalStretch() const {
  // tag=1000

  // tag=1004
  return ::QSizePolicy::horizontalStretch();
}
bool QSizePolicy_wrapper::retainSizeWhenHidden() const {
  // tag=1000

  // tag=1004
  return ::QSizePolicy::retainSizeWhenHidden();
}
void QSizePolicy_wrapper::setControlType(QSizePolicy::ControlType type) {
  // tag=1000

  // tag=1004
  ::QSizePolicy::setControlType(type);
}
void QSizePolicy_wrapper::setHeightForWidth(bool b) {
  // tag=1000

  // tag=1004
  ::QSizePolicy::setHeightForWidth(b);
}
void QSizePolicy_wrapper::setHorizontalPolicy(QSizePolicy::Policy d) {
  // tag=1000

  // tag=1004
  ::QSizePolicy::setHorizontalPolicy(d);
}
void QSizePolicy_wrapper::setHorizontalStretch(int stretchFactor) {
  // tag=1000

  // tag=1004
  ::QSizePolicy::setHorizontalStretch(stretchFactor);
}
void QSizePolicy_wrapper::setRetainSizeWhenHidden(bool retainSize) {
  // tag=1000

  // tag=1004
  ::QSizePolicy::setRetainSizeWhenHidden(retainSize);
}
void QSizePolicy_wrapper::setVerticalPolicy(QSizePolicy::Policy d) {
  // tag=1000

  // tag=1004
  ::QSizePolicy::setVerticalPolicy(d);
}
void QSizePolicy_wrapper::setVerticalStretch(int stretchFactor) {
  // tag=1000

  // tag=1004
  ::QSizePolicy::setVerticalStretch(stretchFactor);
}
void QSizePolicy_wrapper::setWidthForHeight(bool b) {
  // tag=1000

  // tag=1004
  ::QSizePolicy::setWidthForHeight(b);
}
void QSizePolicy_wrapper::transpose() {
  // tag=1000

  // tag=1004
  ::QSizePolicy::transpose();
}
QSizePolicy QSizePolicy_wrapper::transposed() const {
  // tag=1000

  // tag=1004
  return ::QSizePolicy::transposed();
}
QSizePolicy::Policy QSizePolicy_wrapper::verticalPolicy() const {
  // tag=1000

  // tag=1004
  return ::QSizePolicy::verticalPolicy();
}
int QSizePolicy_wrapper::verticalStretch() const {
  // tag=1000

  // tag=1004
  return ::QSizePolicy::verticalStretch();
}

// tag=1005
QSizePolicy_wrapper::~QSizePolicy_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QSizePolicy *fromPtr(void *ptr) {
  return reinterpret_cast<QSizePolicy *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QSizePolicy_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QSizePolicy_wrapper *>(
      ptr);
}
extern "C" {

// tag=1049
void c_QSizePolicy_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QSizePolicy_wrapper *>(
      cppObj);
}
void *c_QSizePolicy__constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QSizePolicy_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QSizePolicy__constructor_Policy_Policy_ControlType(int horizontal,
                                                           int vertical,
                                                           int type) {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QSizePolicy_wrapper(
      static_cast<QSizePolicy::Policy>(horizontal),
      static_cast<QSizePolicy::Policy>(vertical),
      static_cast<QSizePolicy::ControlType>(type));
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// controlType() const
int c_QSizePolicy__controlType(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->controlType();
}

// tag=1050
// expandingDirections() const
int c_QSizePolicy__expandingDirections(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->expandingDirections();
}

// tag=1050
// hasHeightForWidth() const
bool c_QSizePolicy__hasHeightForWidth(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->hasHeightForWidth();
}

// tag=1050
// hasWidthForHeight() const
bool c_QSizePolicy__hasWidthForHeight(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->hasWidthForHeight();
}

// tag=1050
// horizontalPolicy() const
int c_QSizePolicy__horizontalPolicy(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->horizontalPolicy();
}

// tag=1050
// horizontalStretch() const
int c_QSizePolicy__horizontalStretch(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->horizontalStretch();
}

// tag=1050
// retainSizeWhenHidden() const
bool c_QSizePolicy__retainSizeWhenHidden(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->retainSizeWhenHidden();
}

// tag=1050
// setControlType(QSizePolicy::ControlType type)
void c_QSizePolicy__setControlType_ControlType(void *thisObj, int type) {
  // tag=1010
  fromPtr(thisObj)->setControlType(static_cast<QSizePolicy::ControlType>(type));
}

// tag=1050
// setHeightForWidth(bool b)
void c_QSizePolicy__setHeightForWidth_bool(void *thisObj, bool b) {
  // tag=1010
  fromPtr(thisObj)->setHeightForWidth(b);
}

// tag=1050
// setHorizontalPolicy(QSizePolicy::Policy d)
void c_QSizePolicy__setHorizontalPolicy_Policy(void *thisObj, int d) {
  // tag=1010
  fromPtr(thisObj)->setHorizontalPolicy(static_cast<QSizePolicy::Policy>(d));
}

// tag=1050
// setHorizontalStretch(int stretchFactor)
void c_QSizePolicy__setHorizontalStretch_int(void *thisObj, int stretchFactor) {
  // tag=1010
  fromPtr(thisObj)->setHorizontalStretch(stretchFactor);
}

// tag=1050
// setRetainSizeWhenHidden(bool retainSize)
void c_QSizePolicy__setRetainSizeWhenHidden_bool(void *thisObj,
                                                 bool retainSize) {
  // tag=1010
  fromPtr(thisObj)->setRetainSizeWhenHidden(retainSize);
}

// tag=1050
// setVerticalPolicy(QSizePolicy::Policy d)
void c_QSizePolicy__setVerticalPolicy_Policy(void *thisObj, int d) {
  // tag=1010
  fromPtr(thisObj)->setVerticalPolicy(static_cast<QSizePolicy::Policy>(d));
}

// tag=1050
// setVerticalStretch(int stretchFactor)
void c_QSizePolicy__setVerticalStretch_int(void *thisObj, int stretchFactor) {
  // tag=1010
  fromPtr(thisObj)->setVerticalStretch(stretchFactor);
}

// tag=1050
// setWidthForHeight(bool b)
void c_QSizePolicy__setWidthForHeight_bool(void *thisObj, bool b) {
  // tag=1010
  fromPtr(thisObj)->setWidthForHeight(b);
}

// tag=1050
// transpose()
void c_QSizePolicy__transpose(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->transpose();
}

// tag=1050
// transposed() const
void *c_QSizePolicy__transposed(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSizePolicy>{fromPtr(thisObj)->transposed()};
}

// tag=1050
// verticalPolicy() const
int c_QSizePolicy__verticalPolicy(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->verticalPolicy();
}

// tag=1050
// verticalStretch() const
int c_QSizePolicy__verticalStretch(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->verticalStretch();
}
void c_QSizePolicy__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
}
