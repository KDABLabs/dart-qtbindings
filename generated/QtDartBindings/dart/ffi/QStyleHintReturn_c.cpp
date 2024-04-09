/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QStyleHintReturn_c.h"

#include <iostream>

#include <cassert>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
QStyleHintReturn_wrapper::QStyleHintReturn_wrapper(int version, int type)
    : ::QStyleHintReturn(version, type) {}
QStyleHintReturn_wrapper::~QStyleHintReturn_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QStyleHintReturn *fromPtr(void *ptr) {
  return reinterpret_cast<QStyleHintReturn *>(ptr);
}
static QtDartBindings_wrappersNS::QStyleHintReturn_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<
      QtDartBindings_wrappersNS::QStyleHintReturn_wrapper *>(ptr);
}
extern "C" {
void c_QStyleHintReturn_Finalizer(void *cppObj) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QStyleHintReturn_wrapper *>(cppObj);
}
void *c_QStyleHintReturn__constructor_int_int(int version, int type) {
  auto ptr =
      new QtDartBindings_wrappersNS::QStyleHintReturn_wrapper(version, type);
  return reinterpret_cast<void *>(ptr);
}
void c_QStyleHintReturn__destructor(void *thisObj) { delete fromPtr(thisObj); }
int c_QStyleHintReturn___get_version(void *thisObj) {
  return fromPtr(thisObj)->version;
}
int c_QStyleHintReturn___get_type(void *thisObj) {
  return fromPtr(thisObj)->type;
}
void c_QStyleHintReturn___set_version_int(void *thisObj, int version_) {
  fromPtr(thisObj)->version = version_;
}
void c_QStyleHintReturn___set_type_int(void *thisObj, int type_) {
  fromPtr(thisObj)->type = type_;
}
}
