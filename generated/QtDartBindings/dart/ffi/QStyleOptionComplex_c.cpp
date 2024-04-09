/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QStyleOptionComplex_c.h"

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
QStyleOptionComplex_wrapper::QStyleOptionComplex_wrapper(int version, int type)
    : ::QStyleOptionComplex(version, type) {}
QStyleOptionComplex_wrapper::~QStyleOptionComplex_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QStyleOptionComplex *fromPtr(void *ptr) {
  return reinterpret_cast<QStyleOptionComplex *>(ptr);
}
static QtDartBindings_wrappersNS::QStyleOptionComplex_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<
      QtDartBindings_wrappersNS::QStyleOptionComplex_wrapper *>(ptr);
}
extern "C" {
void c_QStyleOptionComplex_Finalizer(void *cppObj) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QStyleOptionComplex_wrapper *>(cppObj);
}
void *c_QStyleOptionComplex__constructor_int_int(int version, int type) {
  auto ptr =
      new QtDartBindings_wrappersNS::QStyleOptionComplex_wrapper(version, type);
  return reinterpret_cast<void *>(ptr);
}
void c_QStyleOptionComplex__destructor(void *thisObj) {
  delete fromPtr(thisObj);
}
}
