/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QStyleFactory_c.h"

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
QStyleFactory_wrapper::QStyleFactory_wrapper() : ::QStyleFactory() {}
QStyle *QStyleFactory_wrapper::create(const QString &arg__1) {
  return ::QStyleFactory::create(arg__1);
}
QList<QString> QStyleFactory_wrapper::keys() { return ::QStyleFactory::keys(); }
QStyleFactory_wrapper::~QStyleFactory_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QStyleFactory *fromPtr(void *ptr) {
  return reinterpret_cast<QStyleFactory *>(ptr);
}
static QtDartBindings_wrappersNS::QStyleFactory_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QStyleFactory_wrapper *>(
      ptr);
}
extern "C" {
void c_QStyleFactory_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QStyleFactory_wrapper *>(
      cppObj);
}
void *c_QStyleFactory__constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QStyleFactory_wrapper();
  return reinterpret_cast<void *>(ptr);
}
// create(const QString & arg__1)
void *c_static_QStyleFactory__create_QString(const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  const auto &result =
      QtDartBindings_wrappersNS::QStyleFactory_wrapper::create(arg__1);
  free((char *)arg__1_);
  return result;
}
// keys()
void *c_static_QStyleFactory__keys() {
  const auto &result = new Dartagnan::ValueWrapper<QList<QString>>{
      QtDartBindings_wrappersNS::QStyleFactory_wrapper::keys()};
  return result;
}
void c_QStyleFactory__destructor(void *thisObj) { delete fromPtr(thisObj); }
}
