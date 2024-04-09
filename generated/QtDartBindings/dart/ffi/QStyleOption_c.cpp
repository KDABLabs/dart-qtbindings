/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QStyleOption_c.h"

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
QStyleOption_wrapper::QStyleOption_wrapper(int version, int type)
    : ::QStyleOption(version, type) {}
void QStyleOption_wrapper::initFrom(const QWidget *w) {
  ::QStyleOption::initFrom(w);
}
QStyleOption_wrapper::~QStyleOption_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QStyleOption *fromPtr(void *ptr) {
  return reinterpret_cast<QStyleOption *>(ptr);
}
static QtDartBindings_wrappersNS::QStyleOption_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QStyleOption_wrapper *>(
      ptr);
}
extern "C" {
void c_QStyleOption_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QStyleOption_wrapper *>(
      cppObj);
}
void *c_QStyleOption__constructor_int_int(int version, int type) {
  auto ptr = new QtDartBindings_wrappersNS::QStyleOption_wrapper(version, type);
  return reinterpret_cast<void *>(ptr);
}
// initFrom(const QWidget * w)
void c_QStyleOption__initFrom_QWidget(void *thisObj, void *w_) {
  auto w = reinterpret_cast<QWidget *>(w_);
  fromPtr(thisObj)->initFrom(w);
}
void c_QStyleOption__destructor(void *thisObj) { delete fromPtr(thisObj); }
int c_QStyleOption___get_version(void *thisObj) {
  return fromPtr(thisObj)->version;
}
int c_QStyleOption___get_type(void *thisObj) { return fromPtr(thisObj)->type; }
void c_QStyleOption___set_version_int(void *thisObj, int version_) {
  fromPtr(thisObj)->version = version_;
}
void c_QStyleOption___set_type_int(void *thisObj, int type_) {
  fromPtr(thisObj)->type = type_;
}
}
