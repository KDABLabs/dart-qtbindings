/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QKeySequence_c.h"

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
QKeySequence_wrapper::QKeySequence_wrapper() : ::QKeySequence() {}
QKeySequence_wrapper::QKeySequence_wrapper(QKeySequence::StandardKey key)
    : ::QKeySequence(key) {}
QKeySequence_wrapper::QKeySequence_wrapper(const QString &key)
    : ::QKeySequence(key) {}
QKeySequence_wrapper::QKeySequence_wrapper(int k1, int k2, int k3, int k4)
    : ::QKeySequence(k1, k2, k3, k4) {}
int QKeySequence_wrapper::count() const { return ::QKeySequence::count(); }
QKeySequence QKeySequence_wrapper::fromString(const QString &str) {
  return ::QKeySequence::fromString(str);
}
bool QKeySequence_wrapper::isDetached() const {
  return ::QKeySequence::isDetached();
}
bool QKeySequence_wrapper::isEmpty() const { return ::QKeySequence::isEmpty(); }
QList<QKeySequence>
QKeySequence_wrapper::keyBindings(QKeySequence::StandardKey key) {
  return ::QKeySequence::keyBindings(key);
}
QList<QKeySequence> QKeySequence_wrapper::listFromString(const QString &str) {
  return ::QKeySequence::listFromString(str);
}
QString QKeySequence_wrapper::listToString(const QList<QKeySequence> &list) {
  return ::QKeySequence::listToString(list);
}
QKeySequence QKeySequence_wrapper::mnemonic(const QString &text) {
  return ::QKeySequence::mnemonic(text);
}
QKeySequence_wrapper::~QKeySequence_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QKeySequence *fromPtr(void *ptr) {
  return reinterpret_cast<QKeySequence *>(ptr);
}
static QtDartBindings_wrappersNS::QKeySequence_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QKeySequence_wrapper *>(
      ptr);
}
extern "C" {
void c_QKeySequence_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QKeySequence_wrapper *>(
      cppObj);
}
void *c_QKeySequence__constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QKeySequence_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QKeySequence__constructor_StandardKey(int key) {
  auto ptr = new QtDartBindings_wrappersNS::QKeySequence_wrapper(
      static_cast<QKeySequence::StandardKey>(key));
  return reinterpret_cast<void *>(ptr);
}
void *c_QKeySequence__constructor_QString(const char *key_) {
  const auto key = QString::fromUtf8(key_);
  auto ptr = new QtDartBindings_wrappersNS::QKeySequence_wrapper(key);
  return reinterpret_cast<void *>(ptr);
}
void *c_QKeySequence__constructor_int_int_int_int(int k1, int k2, int k3,
                                                  int k4) {
  auto ptr =
      new QtDartBindings_wrappersNS::QKeySequence_wrapper(k1, k2, k3, k4);
  return reinterpret_cast<void *>(ptr);
}
// count() const
int c_QKeySequence__count(void *thisObj) {
  const auto &result = fromPtr(thisObj)->count();
  return result;
}
// fromString(const QString & str)
void *c_static_QKeySequence__fromString_QString(const char *str_) {
  const auto str = QString::fromUtf8(str_);
  const auto &result = new Dartagnan::ValueWrapper<QKeySequence>{
      QtDartBindings_wrappersNS::QKeySequence_wrapper::fromString(str)};
  free((char *)str_);
  return result;
}
// isDetached() const
bool c_QKeySequence__isDetached(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isDetached();
  return result;
}
// isEmpty() const
bool c_QKeySequence__isEmpty(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isEmpty();
  return result;
}
// keyBindings(QKeySequence::StandardKey key)
void *c_static_QKeySequence__keyBindings_StandardKey(int key) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QKeySequence>>{
      QtDartBindings_wrappersNS::QKeySequence_wrapper::keyBindings(
          static_cast<QKeySequence::StandardKey>(key))};
  return result;
}
// listFromString(const QString & str)
void *c_static_QKeySequence__listFromString_QString(const char *str_) {
  const auto str = QString::fromUtf8(str_);
  const auto &result = new Dartagnan::ValueWrapper<QList<QKeySequence>>{
      QtDartBindings_wrappersNS::QKeySequence_wrapper::listFromString(str)};
  free((char *)str_);
  return result;
}
// listToString(const QList<QKeySequence > & list)
void *c_static_QKeySequence__listToString_QList_QKeySequence(void *list_) {
  assert(list_);
  auto &list = *reinterpret_cast<QList<QKeySequence> *>(list_);
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QKeySequence_wrapper::listToString(list)};
  return result;
}
// mnemonic(const QString & text)
void *c_static_QKeySequence__mnemonic_QString(const char *text_) {
  const auto text = QString::fromUtf8(text_);
  const auto &result = new Dartagnan::ValueWrapper<QKeySequence>{
      QtDartBindings_wrappersNS::QKeySequence_wrapper::mnemonic(text)};
  free((char *)text_);
  return result;
}
void c_QKeySequence__destructor(void *thisObj) { delete fromPtr(thisObj); }
}
