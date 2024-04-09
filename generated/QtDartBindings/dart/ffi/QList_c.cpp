/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QList_c.h"

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
template <typename T> QList_wrapper<T>::QList_wrapper() : ::QList<T>() {}
template <typename T>
QList_wrapper<T>::QList_wrapper(qsizetype size) : ::QList<T>(size) {}
template <typename T> void QList_wrapper<T>::append(const QList<T> &l) {
  ::QList<T>::append(l);
}
template <typename T> const T &QList_wrapper<T>::at(qsizetype i) const {
  return ::QList<T>::at(i);
}
template <typename T> T &QList_wrapper<T>::back() { return ::QList<T>::back(); }
template <typename T> qsizetype QList_wrapper<T>::capacity() const {
  return ::QList<T>::capacity();
}
template <typename T> void QList_wrapper<T>::clear() { ::QList<T>::clear(); }
template <typename T> const T &QList_wrapper<T>::constFirst() const {
  return ::QList<T>::constFirst();
}
template <typename T> const T &QList_wrapper<T>::constLast() const {
  return ::QList<T>::constLast();
}
template <typename T> qsizetype QList_wrapper<T>::count() const {
  return ::QList<T>::count();
}
template <typename T> void QList_wrapper<T>::detach() { ::QList<T>::detach(); }
template <typename T> bool QList_wrapper<T>::empty() const {
  return ::QList<T>::empty();
}
template <typename T> T &QList_wrapper<T>::first() {
  return ::QList<T>::first();
}
template <typename T> QList<T> QList_wrapper<T>::first(qsizetype n) const {
  return ::QList<T>::first(n);
}
template <typename T> T &QList_wrapper<T>::front() {
  return ::QList<T>::front();
}
template <typename T> bool QList_wrapper<T>::isDetached() const {
  return ::QList<T>::isDetached();
}
template <typename T> bool QList_wrapper<T>::isEmpty() const {
  return ::QList<T>::isEmpty();
}
template <typename T>
bool QList_wrapper<T>::isSharedWith(const QList<T> &other) const {
  return ::QList<T>::isSharedWith(other);
}
template <typename T> T &QList_wrapper<T>::last() { return ::QList<T>::last(); }
template <typename T> QList<T> QList_wrapper<T>::last(qsizetype n) const {
  return ::QList<T>::last(n);
}
template <typename T> qsizetype QList_wrapper<T>::length() const {
  return ::QList<T>::length();
}
template <typename T>
QList<T> QList_wrapper<T>::mid(qsizetype pos, qsizetype len) const {
  return ::QList<T>::mid(pos, len);
}
template <typename T>
void QList_wrapper<T>::move(qsizetype from, qsizetype to) {
  ::QList<T>::move(from, to);
}
template <typename T> void QList_wrapper<T>::pop_back() {
  ::QList<T>::pop_back();
}
template <typename T> void QList_wrapper<T>::pop_front() {
  ::QList<T>::pop_front();
}
template <typename T> void QList_wrapper<T>::remove(qsizetype i, qsizetype n) {
  ::QList<T>::remove(i, n);
}
template <typename T> void QList_wrapper<T>::removeAt(qsizetype i) {
  ::QList<T>::removeAt(i);
}
template <typename T> void QList_wrapper<T>::removeFirst() {
  ::QList<T>::removeFirst();
}
template <typename T> void QList_wrapper<T>::removeLast() {
  ::QList<T>::removeLast();
}
template <typename T> void QList_wrapper<T>::reserve(qsizetype size) {
  ::QList<T>::reserve(size);
}
template <typename T> void QList_wrapper<T>::resize(qsizetype size) {
  ::QList<T>::resize(size);
}
template <typename T> void QList_wrapper<T>::shrink_to_fit() {
  ::QList<T>::shrink_to_fit();
}
template <typename T> qsizetype QList_wrapper<T>::size() const {
  return ::QList<T>::size();
}
template <typename T> QList<T> QList_wrapper<T>::sliced(qsizetype pos) const {
  return ::QList<T>::sliced(pos);
}
template <typename T>
QList<T> QList_wrapper<T>::sliced(qsizetype pos, qsizetype n) const {
  return ::QList<T>::sliced(pos, n);
}
template <typename T> void QList_wrapper<T>::squeeze() {
  ::QList<T>::squeeze();
}
template <typename T>
void QList_wrapper<T>::swapItemsAt(qsizetype i, qsizetype j) {
  ::QList<T>::swapItemsAt(i, j);
}
template <typename T> T QList_wrapper<T>::takeAt(qsizetype i) {
  return ::QList<T>::takeAt(i);
}
template <typename T> QList<T> QList_wrapper<T>::toList() const {
  return ::QList<T>::toList();
}
template <typename T> QList<T> QList_wrapper<T>::toVector() const {
  return ::QList<T>::toVector();
}
template <typename T> T QList_wrapper<T>::value(qsizetype i) const {
  return ::QList<T>::value(i);
}
template <typename T> QList_wrapper<T>::~QList_wrapper() {}

} // namespace QtDartBindings_wrappersNS
template <typename T> static QList<T> *fromPtr(void *ptr) {
  return reinterpret_cast<QList<T> *>(ptr);
}
template <typename T>
static QtDartBindings_wrappersNS::QList_wrapper<T> *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QList_wrapper<T> *>(ptr);
}
extern "C" {
void c_QList_T_QVariant_T__Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QList_wrapper<QVariant> *>(
      cppObj);
}
void *c_QList_T_QVariant_T___constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QVariant>();
  return reinterpret_cast<void *>(ptr);
}
void *c_QList_T_QVariant_T___constructor_qsizetype(qsizetype size) {
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QVariant>(size);
  return reinterpret_cast<void *>(ptr);
}
// append(const QList<T > & l)
void c_QList_T_QVariant_T___append_QList_T(void *thisObj, void *l_) {
  assert(l_);
  auto &l = *reinterpret_cast<QList<QVariant> *>(l_);
  fromPtr<QVariant>(thisObj)->append(l);
}
// at(qsizetype i) const
const void *c_QList_T_QVariant_T___at_qsizetype(void *thisObj, qsizetype i) {
  const auto &result =
      new Dartagnan::ValueWrapper<QVariant>{fromPtr<QVariant>(thisObj)->at(i)};
  return result;
}
// back()
void *c_QList_T_QVariant_T___back(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QVariant>{fromPtr<QVariant>(thisObj)->back()};
  return result;
}
// capacity() const
qsizetype c_QList_T_QVariant_T___capacity(void *thisObj) {
  const auto &result = fromPtr<QVariant>(thisObj)->capacity();
  return result;
}
// clear()
void c_QList_T_QVariant_T___clear(void *thisObj) {
  fromPtr<QVariant>(thisObj)->clear();
}
// constFirst() const
const void *c_QList_T_QVariant_T___constFirst(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QVariant>{
      fromPtr<QVariant>(thisObj)->constFirst()};
  return result;
}
// constLast() const
const void *c_QList_T_QVariant_T___constLast(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QVariant>{
      fromPtr<QVariant>(thisObj)->constLast()};
  return result;
}
// count() const
qsizetype c_QList_T_QVariant_T___count(void *thisObj) {
  const auto &result = fromPtr<QVariant>(thisObj)->count();
  return result;
}
// detach()
void c_QList_T_QVariant_T___detach(void *thisObj) {
  fromPtr<QVariant>(thisObj)->detach();
}
// empty() const
bool c_QList_T_QVariant_T___empty(void *thisObj) {
  const auto &result = fromPtr<QVariant>(thisObj)->empty();
  return result;
}
// first()
void *c_QList_T_QVariant_T___first(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QVariant>{
      fromPtr<QVariant>(thisObj)->first()};
  return result;
}
// first(qsizetype n) const
void *c_QList_T_QVariant_T___first_qsizetype(void *thisObj, qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QVariant>>{
      fromPtr<QVariant>(thisObj)->first(n)};
  return result;
}
// front()
void *c_QList_T_QVariant_T___front(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QVariant>{
      fromPtr<QVariant>(thisObj)->front()};
  return result;
}
// isDetached() const
bool c_QList_T_QVariant_T___isDetached(void *thisObj) {
  const auto &result = fromPtr<QVariant>(thisObj)->isDetached();
  return result;
}
// isEmpty() const
bool c_QList_T_QVariant_T___isEmpty(void *thisObj) {
  const auto &result = fromPtr<QVariant>(thisObj)->isEmpty();
  return result;
}
// isSharedWith(const QList<T > & other) const
bool c_QList_T_QVariant_T___isSharedWith_QList_T(void *thisObj, void *other_) {
  assert(other_);
  auto &other = *reinterpret_cast<QList<QVariant> *>(other_);
  const auto &result = fromPtr<QVariant>(thisObj)->isSharedWith(other);
  return result;
}
// last()
void *c_QList_T_QVariant_T___last(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QVariant>{fromPtr<QVariant>(thisObj)->last()};
  return result;
}
// last(qsizetype n) const
void *c_QList_T_QVariant_T___last_qsizetype(void *thisObj, qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QVariant>>{
      fromPtr<QVariant>(thisObj)->last(n)};
  return result;
}
// length() const
qsizetype c_QList_T_QVariant_T___length(void *thisObj) {
  const auto &result = fromPtr<QVariant>(thisObj)->length();
  return result;
}
// mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QVariant_T___mid_qsizetype_qsizetype(void *thisObj,
                                                     qsizetype pos,
                                                     qsizetype len) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QVariant>>{
      fromPtr<QVariant>(thisObj)->mid(pos, len)};
  return result;
}
// move(qsizetype from, qsizetype to)
void c_QList_T_QVariant_T___move_qsizetype_qsizetype(void *thisObj,
                                                     qsizetype from,
                                                     qsizetype to) {
  fromPtr<QVariant>(thisObj)->move(from, to);
}
// pop_back()
void c_QList_T_QVariant_T___pop_back(void *thisObj) {
  fromPtr<QVariant>(thisObj)->pop_back();
}
// pop_front()
void c_QList_T_QVariant_T___pop_front(void *thisObj) {
  fromPtr<QVariant>(thisObj)->pop_front();
}
// remove(qsizetype i, qsizetype n)
void c_QList_T_QVariant_T___remove_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype i,
                                                       qsizetype n) {
  fromPtr<QVariant>(thisObj)->remove(i, n);
}
// removeAt(qsizetype i)
void c_QList_T_QVariant_T___removeAt_qsizetype(void *thisObj, qsizetype i) {
  fromPtr<QVariant>(thisObj)->removeAt(i);
}
// removeFirst()
void c_QList_T_QVariant_T___removeFirst(void *thisObj) {
  fromPtr<QVariant>(thisObj)->removeFirst();
}
// removeLast()
void c_QList_T_QVariant_T___removeLast(void *thisObj) {
  fromPtr<QVariant>(thisObj)->removeLast();
}
// reserve(qsizetype size)
void c_QList_T_QVariant_T___reserve_qsizetype(void *thisObj, qsizetype size) {
  fromPtr<QVariant>(thisObj)->reserve(size);
}
// resize(qsizetype size)
void c_QList_T_QVariant_T___resize_qsizetype(void *thisObj, qsizetype size) {
  fromPtr<QVariant>(thisObj)->resize(size);
}
// shrink_to_fit()
void c_QList_T_QVariant_T___shrink_to_fit(void *thisObj) {
  fromPtr<QVariant>(thisObj)->shrink_to_fit();
}
// size() const
qsizetype c_QList_T_QVariant_T___size(void *thisObj) {
  const auto &result = fromPtr<QVariant>(thisObj)->size();
  return result;
}
// sliced(qsizetype pos) const
void *c_QList_T_QVariant_T___sliced_qsizetype(void *thisObj, qsizetype pos) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QVariant>>{
      fromPtr<QVariant>(thisObj)->sliced(pos)};
  return result;
}
// sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QVariant_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                        qsizetype pos,
                                                        qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QVariant>>{
      fromPtr<QVariant>(thisObj)->sliced(pos, n)};
  return result;
}
// squeeze()
void c_QList_T_QVariant_T___squeeze(void *thisObj) {
  fromPtr<QVariant>(thisObj)->squeeze();
}
// swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QVariant_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                            qsizetype i,
                                                            qsizetype j) {
  fromPtr<QVariant>(thisObj)->swapItemsAt(i, j);
}
// takeAt(qsizetype i)
void *c_QList_T_QVariant_T___takeAt_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = new Dartagnan::ValueWrapper<QVariant>{
      fromPtr<QVariant>(thisObj)->takeAt(i)};
  return result;
}
// toList() const
void *c_QList_T_QVariant_T___toList(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QVariant>>{
      fromPtr<QVariant>(thisObj)->toList()};
  return result;
}
// toVector() const
void *c_QList_T_QVariant_T___toVector(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QVariant>>{
      fromPtr<QVariant>(thisObj)->toVector()};
  return result;
}
// value(qsizetype i) const
void *c_QList_T_QVariant_T___value_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = new Dartagnan::ValueWrapper<QVariant>{
      fromPtr<QVariant>(thisObj)->value(i)};
  return result;
}
void c_QList_T_QVariant_T___destructor(void *thisObj) {
  delete fromPtr<QVariant>(thisObj);
}
}
extern "C" {
void c_QList_T_QString_T__Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QList_wrapper<QString> *>(
      cppObj);
}
void *c_QList_T_QString_T___constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QString>();
  return reinterpret_cast<void *>(ptr);
}
void *c_QList_T_QString_T___constructor_qsizetype(qsizetype size) {
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QString>(size);
  return reinterpret_cast<void *>(ptr);
}
// append(const QList<T > & l)
void c_QList_T_QString_T___append_QList_T(void *thisObj, void *l_) {
  assert(l_);
  auto &l = *reinterpret_cast<QList<QString> *>(l_);
  fromPtr<QString>(thisObj)->append(l);
}
// at(qsizetype i) const
const void *c_QList_T_QString_T___at_qsizetype(void *thisObj, qsizetype i) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr<QString>(thisObj)->at(i)};
  return result;
}
// back()
void *c_QList_T_QString_T___back(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr<QString>(thisObj)->back()};
  return result;
}
// capacity() const
qsizetype c_QList_T_QString_T___capacity(void *thisObj) {
  const auto &result = fromPtr<QString>(thisObj)->capacity();
  return result;
}
// clear()
void c_QList_T_QString_T___clear(void *thisObj) {
  fromPtr<QString>(thisObj)->clear();
}
// constFirst() const
const void *c_QList_T_QString_T___constFirst(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      fromPtr<QString>(thisObj)->constFirst()};
  return result;
}
// constLast() const
const void *c_QList_T_QString_T___constLast(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      fromPtr<QString>(thisObj)->constLast()};
  return result;
}
// count() const
qsizetype c_QList_T_QString_T___count(void *thisObj) {
  const auto &result = fromPtr<QString>(thisObj)->count();
  return result;
}
// detach()
void c_QList_T_QString_T___detach(void *thisObj) {
  fromPtr<QString>(thisObj)->detach();
}
// empty() const
bool c_QList_T_QString_T___empty(void *thisObj) {
  const auto &result = fromPtr<QString>(thisObj)->empty();
  return result;
}
// first()
void *c_QList_T_QString_T___first(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr<QString>(thisObj)->first()};
  return result;
}
// first(qsizetype n) const
void *c_QList_T_QString_T___first_qsizetype(void *thisObj, qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QString>>{
      fromPtr<QString>(thisObj)->first(n)};
  return result;
}
// front()
void *c_QList_T_QString_T___front(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr<QString>(thisObj)->front()};
  return result;
}
// isDetached() const
bool c_QList_T_QString_T___isDetached(void *thisObj) {
  const auto &result = fromPtr<QString>(thisObj)->isDetached();
  return result;
}
// isEmpty() const
bool c_QList_T_QString_T___isEmpty(void *thisObj) {
  const auto &result = fromPtr<QString>(thisObj)->isEmpty();
  return result;
}
// isSharedWith(const QList<T > & other) const
bool c_QList_T_QString_T___isSharedWith_QList_T(void *thisObj, void *other_) {
  assert(other_);
  auto &other = *reinterpret_cast<QList<QString> *>(other_);
  const auto &result = fromPtr<QString>(thisObj)->isSharedWith(other);
  return result;
}
// last()
void *c_QList_T_QString_T___last(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr<QString>(thisObj)->last()};
  return result;
}
// last(qsizetype n) const
void *c_QList_T_QString_T___last_qsizetype(void *thisObj, qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QString>>{
      fromPtr<QString>(thisObj)->last(n)};
  return result;
}
// length() const
qsizetype c_QList_T_QString_T___length(void *thisObj) {
  const auto &result = fromPtr<QString>(thisObj)->length();
  return result;
}
// mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QString_T___mid_qsizetype_qsizetype(void *thisObj,
                                                    qsizetype pos,
                                                    qsizetype len) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QString>>{
      fromPtr<QString>(thisObj)->mid(pos, len)};
  return result;
}
// move(qsizetype from, qsizetype to)
void c_QList_T_QString_T___move_qsizetype_qsizetype(void *thisObj,
                                                    qsizetype from,
                                                    qsizetype to) {
  fromPtr<QString>(thisObj)->move(from, to);
}
// pop_back()
void c_QList_T_QString_T___pop_back(void *thisObj) {
  fromPtr<QString>(thisObj)->pop_back();
}
// pop_front()
void c_QList_T_QString_T___pop_front(void *thisObj) {
  fromPtr<QString>(thisObj)->pop_front();
}
// remove(qsizetype i, qsizetype n)
void c_QList_T_QString_T___remove_qsizetype_qsizetype(void *thisObj,
                                                      qsizetype i,
                                                      qsizetype n) {
  fromPtr<QString>(thisObj)->remove(i, n);
}
// removeAt(qsizetype i)
void c_QList_T_QString_T___removeAt_qsizetype(void *thisObj, qsizetype i) {
  fromPtr<QString>(thisObj)->removeAt(i);
}
// removeFirst()
void c_QList_T_QString_T___removeFirst(void *thisObj) {
  fromPtr<QString>(thisObj)->removeFirst();
}
// removeLast()
void c_QList_T_QString_T___removeLast(void *thisObj) {
  fromPtr<QString>(thisObj)->removeLast();
}
// reserve(qsizetype size)
void c_QList_T_QString_T___reserve_qsizetype(void *thisObj, qsizetype size) {
  fromPtr<QString>(thisObj)->reserve(size);
}
// resize(qsizetype size)
void c_QList_T_QString_T___resize_qsizetype(void *thisObj, qsizetype size) {
  fromPtr<QString>(thisObj)->resize(size);
}
// shrink_to_fit()
void c_QList_T_QString_T___shrink_to_fit(void *thisObj) {
  fromPtr<QString>(thisObj)->shrink_to_fit();
}
// size() const
qsizetype c_QList_T_QString_T___size(void *thisObj) {
  const auto &result = fromPtr<QString>(thisObj)->size();
  return result;
}
// sliced(qsizetype pos) const
void *c_QList_T_QString_T___sliced_qsizetype(void *thisObj, qsizetype pos) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QString>>{
      fromPtr<QString>(thisObj)->sliced(pos)};
  return result;
}
// sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QString_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype pos,
                                                       qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QString>>{
      fromPtr<QString>(thisObj)->sliced(pos, n)};
  return result;
}
// squeeze()
void c_QList_T_QString_T___squeeze(void *thisObj) {
  fromPtr<QString>(thisObj)->squeeze();
}
// swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QString_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                           qsizetype i,
                                                           qsizetype j) {
  fromPtr<QString>(thisObj)->swapItemsAt(i, j);
}
// takeAt(qsizetype i)
void *c_QList_T_QString_T___takeAt_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      fromPtr<QString>(thisObj)->takeAt(i)};
  return result;
}
// toList() const
void *c_QList_T_QString_T___toList(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QString>>{
      fromPtr<QString>(thisObj)->toList()};
  return result;
}
// toVector() const
void *c_QList_T_QString_T___toVector(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QString>>{
      fromPtr<QString>(thisObj)->toVector()};
  return result;
}
// value(qsizetype i) const
void *c_QList_T_QString_T___value_qsizetype(void *thisObj, qsizetype i) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr<QString>(thisObj)->value(i)};
  return result;
}
void c_QList_T_QString_T___destructor(void *thisObj) {
  delete fromPtr<QString>(thisObj);
}
}
extern "C" {
void c_QList_T_unsigned_int_T__Finalizer(void *cppObj) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QList_wrapper<unsigned int> *>(cppObj);
}
void *c_QList_T_unsigned_int_T___constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<unsigned int>();
  return reinterpret_cast<void *>(ptr);
}
void *c_QList_T_unsigned_int_T___constructor_qsizetype(qsizetype size) {
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<unsigned int>(size);
  return reinterpret_cast<void *>(ptr);
}
// append(const QList<T > & l)
void c_QList_T_unsigned_int_T___append_QList_T(void *thisObj, void *l_) {
  assert(l_);
  auto &l = *reinterpret_cast<QList<unsigned int> *>(l_);
  fromPtr<unsigned int>(thisObj)->append(l);
}
// at(qsizetype i) const
const unsigned int c_QList_T_unsigned_int_T___at_qsizetype(void *thisObj,
                                                           qsizetype i) {
  const auto &result = fromPtr<unsigned int>(thisObj)->at(i);
  return result;
}
// back()
unsigned int c_QList_T_unsigned_int_T___back(void *thisObj) {
  const auto &result = fromPtr<unsigned int>(thisObj)->back();
  return result;
}
// capacity() const
qsizetype c_QList_T_unsigned_int_T___capacity(void *thisObj) {
  const auto &result = fromPtr<unsigned int>(thisObj)->capacity();
  return result;
}
// clear()
void c_QList_T_unsigned_int_T___clear(void *thisObj) {
  fromPtr<unsigned int>(thisObj)->clear();
}
// constFirst() const
const unsigned int c_QList_T_unsigned_int_T___constFirst(void *thisObj) {
  const auto &result = fromPtr<unsigned int>(thisObj)->constFirst();
  return result;
}
// constLast() const
const unsigned int c_QList_T_unsigned_int_T___constLast(void *thisObj) {
  const auto &result = fromPtr<unsigned int>(thisObj)->constLast();
  return result;
}
// count() const
qsizetype c_QList_T_unsigned_int_T___count(void *thisObj) {
  const auto &result = fromPtr<unsigned int>(thisObj)->count();
  return result;
}
// detach()
void c_QList_T_unsigned_int_T___detach(void *thisObj) {
  fromPtr<unsigned int>(thisObj)->detach();
}
// empty() const
bool c_QList_T_unsigned_int_T___empty(void *thisObj) {
  const auto &result = fromPtr<unsigned int>(thisObj)->empty();
  return result;
}
// first()
unsigned int c_QList_T_unsigned_int_T___first(void *thisObj) {
  const auto &result = fromPtr<unsigned int>(thisObj)->first();
  return result;
}
// first(qsizetype n) const
void *c_QList_T_unsigned_int_T___first_qsizetype(void *thisObj, qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<unsigned int>>{
      fromPtr<unsigned int>(thisObj)->first(n)};
  return result;
}
// front()
unsigned int c_QList_T_unsigned_int_T___front(void *thisObj) {
  const auto &result = fromPtr<unsigned int>(thisObj)->front();
  return result;
}
// isDetached() const
bool c_QList_T_unsigned_int_T___isDetached(void *thisObj) {
  const auto &result = fromPtr<unsigned int>(thisObj)->isDetached();
  return result;
}
// isEmpty() const
bool c_QList_T_unsigned_int_T___isEmpty(void *thisObj) {
  const auto &result = fromPtr<unsigned int>(thisObj)->isEmpty();
  return result;
}
// isSharedWith(const QList<T > & other) const
bool c_QList_T_unsigned_int_T___isSharedWith_QList_T(void *thisObj,
                                                     void *other_) {
  assert(other_);
  auto &other = *reinterpret_cast<QList<unsigned int> *>(other_);
  const auto &result = fromPtr<unsigned int>(thisObj)->isSharedWith(other);
  return result;
}
// last()
unsigned int c_QList_T_unsigned_int_T___last(void *thisObj) {
  const auto &result = fromPtr<unsigned int>(thisObj)->last();
  return result;
}
// last(qsizetype n) const
void *c_QList_T_unsigned_int_T___last_qsizetype(void *thisObj, qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<unsigned int>>{
      fromPtr<unsigned int>(thisObj)->last(n)};
  return result;
}
// length() const
qsizetype c_QList_T_unsigned_int_T___length(void *thisObj) {
  const auto &result = fromPtr<unsigned int>(thisObj)->length();
  return result;
}
// mid(qsizetype pos, qsizetype len) const
void *c_QList_T_unsigned_int_T___mid_qsizetype_qsizetype(void *thisObj,
                                                         qsizetype pos,
                                                         qsizetype len) {
  const auto &result = new Dartagnan::ValueWrapper<QList<unsigned int>>{
      fromPtr<unsigned int>(thisObj)->mid(pos, len)};
  return result;
}
// move(qsizetype from, qsizetype to)
void c_QList_T_unsigned_int_T___move_qsizetype_qsizetype(void *thisObj,
                                                         qsizetype from,
                                                         qsizetype to) {
  fromPtr<unsigned int>(thisObj)->move(from, to);
}
// pop_back()
void c_QList_T_unsigned_int_T___pop_back(void *thisObj) {
  fromPtr<unsigned int>(thisObj)->pop_back();
}
// pop_front()
void c_QList_T_unsigned_int_T___pop_front(void *thisObj) {
  fromPtr<unsigned int>(thisObj)->pop_front();
}
// remove(qsizetype i, qsizetype n)
void c_QList_T_unsigned_int_T___remove_qsizetype_qsizetype(void *thisObj,
                                                           qsizetype i,
                                                           qsizetype n) {
  fromPtr<unsigned int>(thisObj)->remove(i, n);
}
// removeAt(qsizetype i)
void c_QList_T_unsigned_int_T___removeAt_qsizetype(void *thisObj, qsizetype i) {
  fromPtr<unsigned int>(thisObj)->removeAt(i);
}
// removeFirst()
void c_QList_T_unsigned_int_T___removeFirst(void *thisObj) {
  fromPtr<unsigned int>(thisObj)->removeFirst();
}
// removeLast()
void c_QList_T_unsigned_int_T___removeLast(void *thisObj) {
  fromPtr<unsigned int>(thisObj)->removeLast();
}
// reserve(qsizetype size)
void c_QList_T_unsigned_int_T___reserve_qsizetype(void *thisObj,
                                                  qsizetype size) {
  fromPtr<unsigned int>(thisObj)->reserve(size);
}
// resize(qsizetype size)
void c_QList_T_unsigned_int_T___resize_qsizetype(void *thisObj,
                                                 qsizetype size) {
  fromPtr<unsigned int>(thisObj)->resize(size);
}
// shrink_to_fit()
void c_QList_T_unsigned_int_T___shrink_to_fit(void *thisObj) {
  fromPtr<unsigned int>(thisObj)->shrink_to_fit();
}
// size() const
qsizetype c_QList_T_unsigned_int_T___size(void *thisObj) {
  const auto &result = fromPtr<unsigned int>(thisObj)->size();
  return result;
}
// sliced(qsizetype pos) const
void *c_QList_T_unsigned_int_T___sliced_qsizetype(void *thisObj,
                                                  qsizetype pos) {
  const auto &result = new Dartagnan::ValueWrapper<QList<unsigned int>>{
      fromPtr<unsigned int>(thisObj)->sliced(pos)};
  return result;
}
// sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_unsigned_int_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                            qsizetype pos,
                                                            qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<unsigned int>>{
      fromPtr<unsigned int>(thisObj)->sliced(pos, n)};
  return result;
}
// squeeze()
void c_QList_T_unsigned_int_T___squeeze(void *thisObj) {
  fromPtr<unsigned int>(thisObj)->squeeze();
}
// swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_unsigned_int_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                                qsizetype i,
                                                                qsizetype j) {
  fromPtr<unsigned int>(thisObj)->swapItemsAt(i, j);
}
// takeAt(qsizetype i)
unsigned int c_QList_T_unsigned_int_T___takeAt_qsizetype(void *thisObj,
                                                         qsizetype i) {
  const auto &result = fromPtr<unsigned int>(thisObj)->takeAt(i);
  return result;
}
// toList() const
void *c_QList_T_unsigned_int_T___toList(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<unsigned int>>{
      fromPtr<unsigned int>(thisObj)->toList()};
  return result;
}
// toVector() const
void *c_QList_T_unsigned_int_T___toVector(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<unsigned int>>{
      fromPtr<unsigned int>(thisObj)->toVector()};
  return result;
}
// value(qsizetype i) const
unsigned int c_QList_T_unsigned_int_T___value_qsizetype(void *thisObj,
                                                        qsizetype i) {
  const auto &result = fromPtr<unsigned int>(thisObj)->value(i);
  return result;
}
void c_QList_T_unsigned_int_T___destructor(void *thisObj) {
  delete fromPtr<unsigned int>(thisObj);
}
}
extern "C" {
void c_QList_T_QStandardItem_T__Finalizer(void *cppObj) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QList_wrapper<QStandardItem *> *>(cppObj);
}
void *c_QList_T_QStandardItem_T___constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QStandardItem *>();
  return reinterpret_cast<void *>(ptr);
}
void *c_QList_T_QStandardItem_T___constructor_qsizetype(qsizetype size) {
  auto ptr =
      new QtDartBindings_wrappersNS::QList_wrapper<QStandardItem *>(size);
  return reinterpret_cast<void *>(ptr);
}
// append(const QList<T > & l)
void c_QList_T_QStandardItem_T___append_QList_T(void *thisObj, void *l_) {
  assert(l_);
  auto &l = *reinterpret_cast<QList<QStandardItem *> *>(l_);
  fromPtr<QStandardItem *>(thisObj)->append(l);
}
// at(qsizetype i) const
const void *c_QList_T_QStandardItem_T___at_qsizetype(void *thisObj,
                                                     qsizetype i) {
  const auto &result = fromPtr<QStandardItem *>(thisObj)->at(i);
  return result;
}
// back()
void *c_QList_T_QStandardItem_T___back(void *thisObj) {
  const auto &result = fromPtr<QStandardItem *>(thisObj)->back();
  return result;
}
// capacity() const
qsizetype c_QList_T_QStandardItem_T___capacity(void *thisObj) {
  const auto &result = fromPtr<QStandardItem *>(thisObj)->capacity();
  return result;
}
// clear()
void c_QList_T_QStandardItem_T___clear(void *thisObj) {
  fromPtr<QStandardItem *>(thisObj)->clear();
}
// constFirst() const
const void *c_QList_T_QStandardItem_T___constFirst(void *thisObj) {
  const auto &result = fromPtr<QStandardItem *>(thisObj)->constFirst();
  return result;
}
// constLast() const
const void *c_QList_T_QStandardItem_T___constLast(void *thisObj) {
  const auto &result = fromPtr<QStandardItem *>(thisObj)->constLast();
  return result;
}
// count() const
qsizetype c_QList_T_QStandardItem_T___count(void *thisObj) {
  const auto &result = fromPtr<QStandardItem *>(thisObj)->count();
  return result;
}
// detach()
void c_QList_T_QStandardItem_T___detach(void *thisObj) {
  fromPtr<QStandardItem *>(thisObj)->detach();
}
// empty() const
bool c_QList_T_QStandardItem_T___empty(void *thisObj) {
  const auto &result = fromPtr<QStandardItem *>(thisObj)->empty();
  return result;
}
// first()
void *c_QList_T_QStandardItem_T___first(void *thisObj) {
  const auto &result = fromPtr<QStandardItem *>(thisObj)->first();
  return result;
}
// first(qsizetype n) const
void *c_QList_T_QStandardItem_T___first_qsizetype(void *thisObj, qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QStandardItem *>>{
      fromPtr<QStandardItem *>(thisObj)->first(n)};
  return result;
}
// front()
void *c_QList_T_QStandardItem_T___front(void *thisObj) {
  const auto &result = fromPtr<QStandardItem *>(thisObj)->front();
  return result;
}
// isDetached() const
bool c_QList_T_QStandardItem_T___isDetached(void *thisObj) {
  const auto &result = fromPtr<QStandardItem *>(thisObj)->isDetached();
  return result;
}
// isEmpty() const
bool c_QList_T_QStandardItem_T___isEmpty(void *thisObj) {
  const auto &result = fromPtr<QStandardItem *>(thisObj)->isEmpty();
  return result;
}
// isSharedWith(const QList<T > & other) const
bool c_QList_T_QStandardItem_T___isSharedWith_QList_T(void *thisObj,
                                                      void *other_) {
  assert(other_);
  auto &other = *reinterpret_cast<QList<QStandardItem *> *>(other_);
  const auto &result = fromPtr<QStandardItem *>(thisObj)->isSharedWith(other);
  return result;
}
// last()
void *c_QList_T_QStandardItem_T___last(void *thisObj) {
  const auto &result = fromPtr<QStandardItem *>(thisObj)->last();
  return result;
}
// last(qsizetype n) const
void *c_QList_T_QStandardItem_T___last_qsizetype(void *thisObj, qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QStandardItem *>>{
      fromPtr<QStandardItem *>(thisObj)->last(n)};
  return result;
}
// length() const
qsizetype c_QList_T_QStandardItem_T___length(void *thisObj) {
  const auto &result = fromPtr<QStandardItem *>(thisObj)->length();
  return result;
}
// mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QStandardItem_T___mid_qsizetype_qsizetype(void *thisObj,
                                                          qsizetype pos,
                                                          qsizetype len) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QStandardItem *>>{
      fromPtr<QStandardItem *>(thisObj)->mid(pos, len)};
  return result;
}
// move(qsizetype from, qsizetype to)
void c_QList_T_QStandardItem_T___move_qsizetype_qsizetype(void *thisObj,
                                                          qsizetype from,
                                                          qsizetype to) {
  fromPtr<QStandardItem *>(thisObj)->move(from, to);
}
// pop_back()
void c_QList_T_QStandardItem_T___pop_back(void *thisObj) {
  fromPtr<QStandardItem *>(thisObj)->pop_back();
}
// pop_front()
void c_QList_T_QStandardItem_T___pop_front(void *thisObj) {
  fromPtr<QStandardItem *>(thisObj)->pop_front();
}
// remove(qsizetype i, qsizetype n)
void c_QList_T_QStandardItem_T___remove_qsizetype_qsizetype(void *thisObj,
                                                            qsizetype i,
                                                            qsizetype n) {
  fromPtr<QStandardItem *>(thisObj)->remove(i, n);
}
// removeAt(qsizetype i)
void c_QList_T_QStandardItem_T___removeAt_qsizetype(void *thisObj,
                                                    qsizetype i) {
  fromPtr<QStandardItem *>(thisObj)->removeAt(i);
}
// removeFirst()
void c_QList_T_QStandardItem_T___removeFirst(void *thisObj) {
  fromPtr<QStandardItem *>(thisObj)->removeFirst();
}
// removeLast()
void c_QList_T_QStandardItem_T___removeLast(void *thisObj) {
  fromPtr<QStandardItem *>(thisObj)->removeLast();
}
// reserve(qsizetype size)
void c_QList_T_QStandardItem_T___reserve_qsizetype(void *thisObj,
                                                   qsizetype size) {
  fromPtr<QStandardItem *>(thisObj)->reserve(size);
}
// resize(qsizetype size)
void c_QList_T_QStandardItem_T___resize_qsizetype(void *thisObj,
                                                  qsizetype size) {
  fromPtr<QStandardItem *>(thisObj)->resize(size);
}
// shrink_to_fit()
void c_QList_T_QStandardItem_T___shrink_to_fit(void *thisObj) {
  fromPtr<QStandardItem *>(thisObj)->shrink_to_fit();
}
// size() const
qsizetype c_QList_T_QStandardItem_T___size(void *thisObj) {
  const auto &result = fromPtr<QStandardItem *>(thisObj)->size();
  return result;
}
// sliced(qsizetype pos) const
void *c_QList_T_QStandardItem_T___sliced_qsizetype(void *thisObj,
                                                   qsizetype pos) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QStandardItem *>>{
      fromPtr<QStandardItem *>(thisObj)->sliced(pos)};
  return result;
}
// sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QStandardItem_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                             qsizetype pos,
                                                             qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QStandardItem *>>{
      fromPtr<QStandardItem *>(thisObj)->sliced(pos, n)};
  return result;
}
// squeeze()
void c_QList_T_QStandardItem_T___squeeze(void *thisObj) {
  fromPtr<QStandardItem *>(thisObj)->squeeze();
}
// swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QStandardItem_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                                 qsizetype i,
                                                                 qsizetype j) {
  fromPtr<QStandardItem *>(thisObj)->swapItemsAt(i, j);
}
// takeAt(qsizetype i)
void *c_QList_T_QStandardItem_T___takeAt_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = fromPtr<QStandardItem *>(thisObj)->takeAt(i);
  return result;
}
// toList() const
void *c_QList_T_QStandardItem_T___toList(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QStandardItem *>>{
      fromPtr<QStandardItem *>(thisObj)->toList()};
  return result;
}
// toVector() const
void *c_QList_T_QStandardItem_T___toVector(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QStandardItem *>>{
      fromPtr<QStandardItem *>(thisObj)->toVector()};
  return result;
}
// value(qsizetype i) const
void *c_QList_T_QStandardItem_T___value_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = fromPtr<QStandardItem *>(thisObj)->value(i);
  return result;
}
void c_QList_T_QStandardItem_T___destructor(void *thisObj) {
  delete fromPtr<QStandardItem *>(thisObj);
}
}
extern "C" {
void c_QList_T_qreal_T__Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QList_wrapper<qreal> *>(
      cppObj);
}
void *c_QList_T_qreal_T___constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<qreal>();
  return reinterpret_cast<void *>(ptr);
}
void *c_QList_T_qreal_T___constructor_qsizetype(qsizetype size) {
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<qreal>(size);
  return reinterpret_cast<void *>(ptr);
}
// append(const QList<T > & l)
void c_QList_T_qreal_T___append_QList_T(void *thisObj, void *l_) {
  assert(l_);
  auto &l = *reinterpret_cast<QList<qreal> *>(l_);
  fromPtr<qreal>(thisObj)->append(l);
}
// at(qsizetype i) const
const qreal c_QList_T_qreal_T___at_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = fromPtr<qreal>(thisObj)->at(i);
  return result;
}
// back()
qreal c_QList_T_qreal_T___back(void *thisObj) {
  const auto &result = fromPtr<qreal>(thisObj)->back();
  return result;
}
// capacity() const
qsizetype c_QList_T_qreal_T___capacity(void *thisObj) {
  const auto &result = fromPtr<qreal>(thisObj)->capacity();
  return result;
}
// clear()
void c_QList_T_qreal_T___clear(void *thisObj) {
  fromPtr<qreal>(thisObj)->clear();
}
// constFirst() const
const qreal c_QList_T_qreal_T___constFirst(void *thisObj) {
  const auto &result = fromPtr<qreal>(thisObj)->constFirst();
  return result;
}
// constLast() const
const qreal c_QList_T_qreal_T___constLast(void *thisObj) {
  const auto &result = fromPtr<qreal>(thisObj)->constLast();
  return result;
}
// count() const
qsizetype c_QList_T_qreal_T___count(void *thisObj) {
  const auto &result = fromPtr<qreal>(thisObj)->count();
  return result;
}
// detach()
void c_QList_T_qreal_T___detach(void *thisObj) {
  fromPtr<qreal>(thisObj)->detach();
}
// empty() const
bool c_QList_T_qreal_T___empty(void *thisObj) {
  const auto &result = fromPtr<qreal>(thisObj)->empty();
  return result;
}
// first()
qreal c_QList_T_qreal_T___first(void *thisObj) {
  const auto &result = fromPtr<qreal>(thisObj)->first();
  return result;
}
// first(qsizetype n) const
void *c_QList_T_qreal_T___first_qsizetype(void *thisObj, qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<qreal>>{
      fromPtr<qreal>(thisObj)->first(n)};
  return result;
}
// front()
qreal c_QList_T_qreal_T___front(void *thisObj) {
  const auto &result = fromPtr<qreal>(thisObj)->front();
  return result;
}
// isDetached() const
bool c_QList_T_qreal_T___isDetached(void *thisObj) {
  const auto &result = fromPtr<qreal>(thisObj)->isDetached();
  return result;
}
// isEmpty() const
bool c_QList_T_qreal_T___isEmpty(void *thisObj) {
  const auto &result = fromPtr<qreal>(thisObj)->isEmpty();
  return result;
}
// isSharedWith(const QList<T > & other) const
bool c_QList_T_qreal_T___isSharedWith_QList_T(void *thisObj, void *other_) {
  assert(other_);
  auto &other = *reinterpret_cast<QList<qreal> *>(other_);
  const auto &result = fromPtr<qreal>(thisObj)->isSharedWith(other);
  return result;
}
// last()
qreal c_QList_T_qreal_T___last(void *thisObj) {
  const auto &result = fromPtr<qreal>(thisObj)->last();
  return result;
}
// last(qsizetype n) const
void *c_QList_T_qreal_T___last_qsizetype(void *thisObj, qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<qreal>>{
      fromPtr<qreal>(thisObj)->last(n)};
  return result;
}
// length() const
qsizetype c_QList_T_qreal_T___length(void *thisObj) {
  const auto &result = fromPtr<qreal>(thisObj)->length();
  return result;
}
// mid(qsizetype pos, qsizetype len) const
void *c_QList_T_qreal_T___mid_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                                  qsizetype len) {
  const auto &result = new Dartagnan::ValueWrapper<QList<qreal>>{
      fromPtr<qreal>(thisObj)->mid(pos, len)};
  return result;
}
// move(qsizetype from, qsizetype to)
void c_QList_T_qreal_T___move_qsizetype_qsizetype(void *thisObj, qsizetype from,
                                                  qsizetype to) {
  fromPtr<qreal>(thisObj)->move(from, to);
}
// pop_back()
void c_QList_T_qreal_T___pop_back(void *thisObj) {
  fromPtr<qreal>(thisObj)->pop_back();
}
// pop_front()
void c_QList_T_qreal_T___pop_front(void *thisObj) {
  fromPtr<qreal>(thisObj)->pop_front();
}
// remove(qsizetype i, qsizetype n)
void c_QList_T_qreal_T___remove_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                                    qsizetype n) {
  fromPtr<qreal>(thisObj)->remove(i, n);
}
// removeAt(qsizetype i)
void c_QList_T_qreal_T___removeAt_qsizetype(void *thisObj, qsizetype i) {
  fromPtr<qreal>(thisObj)->removeAt(i);
}
// removeFirst()
void c_QList_T_qreal_T___removeFirst(void *thisObj) {
  fromPtr<qreal>(thisObj)->removeFirst();
}
// removeLast()
void c_QList_T_qreal_T___removeLast(void *thisObj) {
  fromPtr<qreal>(thisObj)->removeLast();
}
// reserve(qsizetype size)
void c_QList_T_qreal_T___reserve_qsizetype(void *thisObj, qsizetype size) {
  fromPtr<qreal>(thisObj)->reserve(size);
}
// resize(qsizetype size)
void c_QList_T_qreal_T___resize_qsizetype(void *thisObj, qsizetype size) {
  fromPtr<qreal>(thisObj)->resize(size);
}
// shrink_to_fit()
void c_QList_T_qreal_T___shrink_to_fit(void *thisObj) {
  fromPtr<qreal>(thisObj)->shrink_to_fit();
}
// size() const
qsizetype c_QList_T_qreal_T___size(void *thisObj) {
  const auto &result = fromPtr<qreal>(thisObj)->size();
  return result;
}
// sliced(qsizetype pos) const
void *c_QList_T_qreal_T___sliced_qsizetype(void *thisObj, qsizetype pos) {
  const auto &result = new Dartagnan::ValueWrapper<QList<qreal>>{
      fromPtr<qreal>(thisObj)->sliced(pos)};
  return result;
}
// sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_qreal_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                     qsizetype pos,
                                                     qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<qreal>>{
      fromPtr<qreal>(thisObj)->sliced(pos, n)};
  return result;
}
// squeeze()
void c_QList_T_qreal_T___squeeze(void *thisObj) {
  fromPtr<qreal>(thisObj)->squeeze();
}
// swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_qreal_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                         qsizetype i,
                                                         qsizetype j) {
  fromPtr<qreal>(thisObj)->swapItemsAt(i, j);
}
// takeAt(qsizetype i)
qreal c_QList_T_qreal_T___takeAt_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = fromPtr<qreal>(thisObj)->takeAt(i);
  return result;
}
// toList() const
void *c_QList_T_qreal_T___toList(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<qreal>>{
      fromPtr<qreal>(thisObj)->toList()};
  return result;
}
// toVector() const
void *c_QList_T_qreal_T___toVector(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<qreal>>{
      fromPtr<qreal>(thisObj)->toVector()};
  return result;
}
// value(qsizetype i) const
qreal c_QList_T_qreal_T___value_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = fromPtr<qreal>(thisObj)->value(i);
  return result;
}
void c_QList_T_qreal_T___destructor(void *thisObj) {
  delete fromPtr<qreal>(thisObj);
}
}
extern "C" {
void c_QList_T_QObject_T__Finalizer(void *cppObj) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QList_wrapper<QObject *> *>(cppObj);
}
void *c_QList_T_QObject_T___constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QObject *>();
  return reinterpret_cast<void *>(ptr);
}
void *c_QList_T_QObject_T___constructor_qsizetype(qsizetype size) {
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QObject *>(size);
  return reinterpret_cast<void *>(ptr);
}
// append(const QList<T > & l)
void c_QList_T_QObject_T___append_QList_T(void *thisObj, void *l_) {
  assert(l_);
  auto &l = *reinterpret_cast<QList<QObject *> *>(l_);
  fromPtr<QObject *>(thisObj)->append(l);
}
// at(qsizetype i) const
const void *c_QList_T_QObject_T___at_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = fromPtr<QObject *>(thisObj)->at(i);
  return result;
}
// back()
void *c_QList_T_QObject_T___back(void *thisObj) {
  const auto &result = fromPtr<QObject *>(thisObj)->back();
  return result;
}
// capacity() const
qsizetype c_QList_T_QObject_T___capacity(void *thisObj) {
  const auto &result = fromPtr<QObject *>(thisObj)->capacity();
  return result;
}
// clear()
void c_QList_T_QObject_T___clear(void *thisObj) {
  fromPtr<QObject *>(thisObj)->clear();
}
// constFirst() const
const void *c_QList_T_QObject_T___constFirst(void *thisObj) {
  const auto &result = fromPtr<QObject *>(thisObj)->constFirst();
  return result;
}
// constLast() const
const void *c_QList_T_QObject_T___constLast(void *thisObj) {
  const auto &result = fromPtr<QObject *>(thisObj)->constLast();
  return result;
}
// count() const
qsizetype c_QList_T_QObject_T___count(void *thisObj) {
  const auto &result = fromPtr<QObject *>(thisObj)->count();
  return result;
}
// detach()
void c_QList_T_QObject_T___detach(void *thisObj) {
  fromPtr<QObject *>(thisObj)->detach();
}
// empty() const
bool c_QList_T_QObject_T___empty(void *thisObj) {
  const auto &result = fromPtr<QObject *>(thisObj)->empty();
  return result;
}
// first()
void *c_QList_T_QObject_T___first(void *thisObj) {
  const auto &result = fromPtr<QObject *>(thisObj)->first();
  return result;
}
// first(qsizetype n) const
void *c_QList_T_QObject_T___first_qsizetype(void *thisObj, qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QObject *>>{
      fromPtr<QObject *>(thisObj)->first(n)};
  return result;
}
// front()
void *c_QList_T_QObject_T___front(void *thisObj) {
  const auto &result = fromPtr<QObject *>(thisObj)->front();
  return result;
}
// isDetached() const
bool c_QList_T_QObject_T___isDetached(void *thisObj) {
  const auto &result = fromPtr<QObject *>(thisObj)->isDetached();
  return result;
}
// isEmpty() const
bool c_QList_T_QObject_T___isEmpty(void *thisObj) {
  const auto &result = fromPtr<QObject *>(thisObj)->isEmpty();
  return result;
}
// isSharedWith(const QList<T > & other) const
bool c_QList_T_QObject_T___isSharedWith_QList_T(void *thisObj, void *other_) {
  assert(other_);
  auto &other = *reinterpret_cast<QList<QObject *> *>(other_);
  const auto &result = fromPtr<QObject *>(thisObj)->isSharedWith(other);
  return result;
}
// last()
void *c_QList_T_QObject_T___last(void *thisObj) {
  const auto &result = fromPtr<QObject *>(thisObj)->last();
  return result;
}
// last(qsizetype n) const
void *c_QList_T_QObject_T___last_qsizetype(void *thisObj, qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QObject *>>{
      fromPtr<QObject *>(thisObj)->last(n)};
  return result;
}
// length() const
qsizetype c_QList_T_QObject_T___length(void *thisObj) {
  const auto &result = fromPtr<QObject *>(thisObj)->length();
  return result;
}
// mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QObject_T___mid_qsizetype_qsizetype(void *thisObj,
                                                    qsizetype pos,
                                                    qsizetype len) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QObject *>>{
      fromPtr<QObject *>(thisObj)->mid(pos, len)};
  return result;
}
// move(qsizetype from, qsizetype to)
void c_QList_T_QObject_T___move_qsizetype_qsizetype(void *thisObj,
                                                    qsizetype from,
                                                    qsizetype to) {
  fromPtr<QObject *>(thisObj)->move(from, to);
}
// pop_back()
void c_QList_T_QObject_T___pop_back(void *thisObj) {
  fromPtr<QObject *>(thisObj)->pop_back();
}
// pop_front()
void c_QList_T_QObject_T___pop_front(void *thisObj) {
  fromPtr<QObject *>(thisObj)->pop_front();
}
// remove(qsizetype i, qsizetype n)
void c_QList_T_QObject_T___remove_qsizetype_qsizetype(void *thisObj,
                                                      qsizetype i,
                                                      qsizetype n) {
  fromPtr<QObject *>(thisObj)->remove(i, n);
}
// removeAt(qsizetype i)
void c_QList_T_QObject_T___removeAt_qsizetype(void *thisObj, qsizetype i) {
  fromPtr<QObject *>(thisObj)->removeAt(i);
}
// removeFirst()
void c_QList_T_QObject_T___removeFirst(void *thisObj) {
  fromPtr<QObject *>(thisObj)->removeFirst();
}
// removeLast()
void c_QList_T_QObject_T___removeLast(void *thisObj) {
  fromPtr<QObject *>(thisObj)->removeLast();
}
// reserve(qsizetype size)
void c_QList_T_QObject_T___reserve_qsizetype(void *thisObj, qsizetype size) {
  fromPtr<QObject *>(thisObj)->reserve(size);
}
// resize(qsizetype size)
void c_QList_T_QObject_T___resize_qsizetype(void *thisObj, qsizetype size) {
  fromPtr<QObject *>(thisObj)->resize(size);
}
// shrink_to_fit()
void c_QList_T_QObject_T___shrink_to_fit(void *thisObj) {
  fromPtr<QObject *>(thisObj)->shrink_to_fit();
}
// size() const
qsizetype c_QList_T_QObject_T___size(void *thisObj) {
  const auto &result = fromPtr<QObject *>(thisObj)->size();
  return result;
}
// sliced(qsizetype pos) const
void *c_QList_T_QObject_T___sliced_qsizetype(void *thisObj, qsizetype pos) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QObject *>>{
      fromPtr<QObject *>(thisObj)->sliced(pos)};
  return result;
}
// sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QObject_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype pos,
                                                       qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QObject *>>{
      fromPtr<QObject *>(thisObj)->sliced(pos, n)};
  return result;
}
// squeeze()
void c_QList_T_QObject_T___squeeze(void *thisObj) {
  fromPtr<QObject *>(thisObj)->squeeze();
}
// swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QObject_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                           qsizetype i,
                                                           qsizetype j) {
  fromPtr<QObject *>(thisObj)->swapItemsAt(i, j);
}
// takeAt(qsizetype i)
void *c_QList_T_QObject_T___takeAt_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = fromPtr<QObject *>(thisObj)->takeAt(i);
  return result;
}
// toList() const
void *c_QList_T_QObject_T___toList(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QObject *>>{
      fromPtr<QObject *>(thisObj)->toList()};
  return result;
}
// toVector() const
void *c_QList_T_QObject_T___toVector(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QObject *>>{
      fromPtr<QObject *>(thisObj)->toVector()};
  return result;
}
// value(qsizetype i) const
void *c_QList_T_QObject_T___value_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = fromPtr<QObject *>(thisObj)->value(i);
  return result;
}
void c_QList_T_QObject_T___destructor(void *thisObj) {
  delete fromPtr<QObject *>(thisObj);
}
}
extern "C" {
void c_QList_T_QByteArray_T__Finalizer(void *cppObj) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QList_wrapper<QByteArray> *>(cppObj);
}
void *c_QList_T_QByteArray_T___constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QByteArray>();
  return reinterpret_cast<void *>(ptr);
}
void *c_QList_T_QByteArray_T___constructor_qsizetype(qsizetype size) {
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QByteArray>(size);
  return reinterpret_cast<void *>(ptr);
}
// append(const QList<T > & l)
void c_QList_T_QByteArray_T___append_QList_T(void *thisObj, void *l_) {
  assert(l_);
  auto &l = *reinterpret_cast<QList<QByteArray> *>(l_);
  fromPtr<QByteArray>(thisObj)->append(l);
}
// at(qsizetype i) const
const void *c_QList_T_QByteArray_T___at_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = new Dartagnan::ValueWrapper<QByteArray>{
      fromPtr<QByteArray>(thisObj)->at(i)};
  return result;
}
// back()
void *c_QList_T_QByteArray_T___back(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QByteArray>{
      fromPtr<QByteArray>(thisObj)->back()};
  return result;
}
// capacity() const
qsizetype c_QList_T_QByteArray_T___capacity(void *thisObj) {
  const auto &result = fromPtr<QByteArray>(thisObj)->capacity();
  return result;
}
// clear()
void c_QList_T_QByteArray_T___clear(void *thisObj) {
  fromPtr<QByteArray>(thisObj)->clear();
}
// constFirst() const
const void *c_QList_T_QByteArray_T___constFirst(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QByteArray>{
      fromPtr<QByteArray>(thisObj)->constFirst()};
  return result;
}
// constLast() const
const void *c_QList_T_QByteArray_T___constLast(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QByteArray>{
      fromPtr<QByteArray>(thisObj)->constLast()};
  return result;
}
// count() const
qsizetype c_QList_T_QByteArray_T___count(void *thisObj) {
  const auto &result = fromPtr<QByteArray>(thisObj)->count();
  return result;
}
// detach()
void c_QList_T_QByteArray_T___detach(void *thisObj) {
  fromPtr<QByteArray>(thisObj)->detach();
}
// empty() const
bool c_QList_T_QByteArray_T___empty(void *thisObj) {
  const auto &result = fromPtr<QByteArray>(thisObj)->empty();
  return result;
}
// first()
void *c_QList_T_QByteArray_T___first(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QByteArray>{
      fromPtr<QByteArray>(thisObj)->first()};
  return result;
}
// first(qsizetype n) const
void *c_QList_T_QByteArray_T___first_qsizetype(void *thisObj, qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QByteArray>>{
      fromPtr<QByteArray>(thisObj)->first(n)};
  return result;
}
// front()
void *c_QList_T_QByteArray_T___front(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QByteArray>{
      fromPtr<QByteArray>(thisObj)->front()};
  return result;
}
// isDetached() const
bool c_QList_T_QByteArray_T___isDetached(void *thisObj) {
  const auto &result = fromPtr<QByteArray>(thisObj)->isDetached();
  return result;
}
// isEmpty() const
bool c_QList_T_QByteArray_T___isEmpty(void *thisObj) {
  const auto &result = fromPtr<QByteArray>(thisObj)->isEmpty();
  return result;
}
// isSharedWith(const QList<T > & other) const
bool c_QList_T_QByteArray_T___isSharedWith_QList_T(void *thisObj,
                                                   void *other_) {
  assert(other_);
  auto &other = *reinterpret_cast<QList<QByteArray> *>(other_);
  const auto &result = fromPtr<QByteArray>(thisObj)->isSharedWith(other);
  return result;
}
// last()
void *c_QList_T_QByteArray_T___last(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QByteArray>{
      fromPtr<QByteArray>(thisObj)->last()};
  return result;
}
// last(qsizetype n) const
void *c_QList_T_QByteArray_T___last_qsizetype(void *thisObj, qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QByteArray>>{
      fromPtr<QByteArray>(thisObj)->last(n)};
  return result;
}
// length() const
qsizetype c_QList_T_QByteArray_T___length(void *thisObj) {
  const auto &result = fromPtr<QByteArray>(thisObj)->length();
  return result;
}
// mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QByteArray_T___mid_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype pos,
                                                       qsizetype len) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QByteArray>>{
      fromPtr<QByteArray>(thisObj)->mid(pos, len)};
  return result;
}
// move(qsizetype from, qsizetype to)
void c_QList_T_QByteArray_T___move_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype from,
                                                       qsizetype to) {
  fromPtr<QByteArray>(thisObj)->move(from, to);
}
// pop_back()
void c_QList_T_QByteArray_T___pop_back(void *thisObj) {
  fromPtr<QByteArray>(thisObj)->pop_back();
}
// pop_front()
void c_QList_T_QByteArray_T___pop_front(void *thisObj) {
  fromPtr<QByteArray>(thisObj)->pop_front();
}
// remove(qsizetype i, qsizetype n)
void c_QList_T_QByteArray_T___remove_qsizetype_qsizetype(void *thisObj,
                                                         qsizetype i,
                                                         qsizetype n) {
  fromPtr<QByteArray>(thisObj)->remove(i, n);
}
// removeAt(qsizetype i)
void c_QList_T_QByteArray_T___removeAt_qsizetype(void *thisObj, qsizetype i) {
  fromPtr<QByteArray>(thisObj)->removeAt(i);
}
// removeFirst()
void c_QList_T_QByteArray_T___removeFirst(void *thisObj) {
  fromPtr<QByteArray>(thisObj)->removeFirst();
}
// removeLast()
void c_QList_T_QByteArray_T___removeLast(void *thisObj) {
  fromPtr<QByteArray>(thisObj)->removeLast();
}
// reserve(qsizetype size)
void c_QList_T_QByteArray_T___reserve_qsizetype(void *thisObj, qsizetype size) {
  fromPtr<QByteArray>(thisObj)->reserve(size);
}
// resize(qsizetype size)
void c_QList_T_QByteArray_T___resize_qsizetype(void *thisObj, qsizetype size) {
  fromPtr<QByteArray>(thisObj)->resize(size);
}
// shrink_to_fit()
void c_QList_T_QByteArray_T___shrink_to_fit(void *thisObj) {
  fromPtr<QByteArray>(thisObj)->shrink_to_fit();
}
// size() const
qsizetype c_QList_T_QByteArray_T___size(void *thisObj) {
  const auto &result = fromPtr<QByteArray>(thisObj)->size();
  return result;
}
// sliced(qsizetype pos) const
void *c_QList_T_QByteArray_T___sliced_qsizetype(void *thisObj, qsizetype pos) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QByteArray>>{
      fromPtr<QByteArray>(thisObj)->sliced(pos)};
  return result;
}
// sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QByteArray_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                          qsizetype pos,
                                                          qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QByteArray>>{
      fromPtr<QByteArray>(thisObj)->sliced(pos, n)};
  return result;
}
// squeeze()
void c_QList_T_QByteArray_T___squeeze(void *thisObj) {
  fromPtr<QByteArray>(thisObj)->squeeze();
}
// swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QByteArray_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                              qsizetype i,
                                                              qsizetype j) {
  fromPtr<QByteArray>(thisObj)->swapItemsAt(i, j);
}
// takeAt(qsizetype i)
void *c_QList_T_QByteArray_T___takeAt_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = new Dartagnan::ValueWrapper<QByteArray>{
      fromPtr<QByteArray>(thisObj)->takeAt(i)};
  return result;
}
// toList() const
void *c_QList_T_QByteArray_T___toList(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QByteArray>>{
      fromPtr<QByteArray>(thisObj)->toList()};
  return result;
}
// toVector() const
void *c_QList_T_QByteArray_T___toVector(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QByteArray>>{
      fromPtr<QByteArray>(thisObj)->toVector()};
  return result;
}
// value(qsizetype i) const
void *c_QList_T_QByteArray_T___value_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = new Dartagnan::ValueWrapper<QByteArray>{
      fromPtr<QByteArray>(thisObj)->value(i)};
  return result;
}
void c_QList_T_QByteArray_T___destructor(void *thisObj) {
  delete fromPtr<QByteArray>(thisObj);
}
}
extern "C" {
void c_QList_T_QAction_T__Finalizer(void *cppObj) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QList_wrapper<QAction *> *>(cppObj);
}
void *c_QList_T_QAction_T___constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QAction *>();
  return reinterpret_cast<void *>(ptr);
}
void *c_QList_T_QAction_T___constructor_qsizetype(qsizetype size) {
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QAction *>(size);
  return reinterpret_cast<void *>(ptr);
}
// append(const QList<T > & l)
void c_QList_T_QAction_T___append_QList_T(void *thisObj, void *l_) {
  assert(l_);
  auto &l = *reinterpret_cast<QList<QAction *> *>(l_);
  fromPtr<QAction *>(thisObj)->append(l);
}
// at(qsizetype i) const
const void *c_QList_T_QAction_T___at_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = fromPtr<QAction *>(thisObj)->at(i);
  return result;
}
// back()
void *c_QList_T_QAction_T___back(void *thisObj) {
  const auto &result = fromPtr<QAction *>(thisObj)->back();
  return result;
}
// capacity() const
qsizetype c_QList_T_QAction_T___capacity(void *thisObj) {
  const auto &result = fromPtr<QAction *>(thisObj)->capacity();
  return result;
}
// clear()
void c_QList_T_QAction_T___clear(void *thisObj) {
  fromPtr<QAction *>(thisObj)->clear();
}
// constFirst() const
const void *c_QList_T_QAction_T___constFirst(void *thisObj) {
  const auto &result = fromPtr<QAction *>(thisObj)->constFirst();
  return result;
}
// constLast() const
const void *c_QList_T_QAction_T___constLast(void *thisObj) {
  const auto &result = fromPtr<QAction *>(thisObj)->constLast();
  return result;
}
// count() const
qsizetype c_QList_T_QAction_T___count(void *thisObj) {
  const auto &result = fromPtr<QAction *>(thisObj)->count();
  return result;
}
// detach()
void c_QList_T_QAction_T___detach(void *thisObj) {
  fromPtr<QAction *>(thisObj)->detach();
}
// empty() const
bool c_QList_T_QAction_T___empty(void *thisObj) {
  const auto &result = fromPtr<QAction *>(thisObj)->empty();
  return result;
}
// first()
void *c_QList_T_QAction_T___first(void *thisObj) {
  const auto &result = fromPtr<QAction *>(thisObj)->first();
  return result;
}
// first(qsizetype n) const
void *c_QList_T_QAction_T___first_qsizetype(void *thisObj, qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QAction *>>{
      fromPtr<QAction *>(thisObj)->first(n)};
  return result;
}
// front()
void *c_QList_T_QAction_T___front(void *thisObj) {
  const auto &result = fromPtr<QAction *>(thisObj)->front();
  return result;
}
// isDetached() const
bool c_QList_T_QAction_T___isDetached(void *thisObj) {
  const auto &result = fromPtr<QAction *>(thisObj)->isDetached();
  return result;
}
// isEmpty() const
bool c_QList_T_QAction_T___isEmpty(void *thisObj) {
  const auto &result = fromPtr<QAction *>(thisObj)->isEmpty();
  return result;
}
// isSharedWith(const QList<T > & other) const
bool c_QList_T_QAction_T___isSharedWith_QList_T(void *thisObj, void *other_) {
  assert(other_);
  auto &other = *reinterpret_cast<QList<QAction *> *>(other_);
  const auto &result = fromPtr<QAction *>(thisObj)->isSharedWith(other);
  return result;
}
// last()
void *c_QList_T_QAction_T___last(void *thisObj) {
  const auto &result = fromPtr<QAction *>(thisObj)->last();
  return result;
}
// last(qsizetype n) const
void *c_QList_T_QAction_T___last_qsizetype(void *thisObj, qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QAction *>>{
      fromPtr<QAction *>(thisObj)->last(n)};
  return result;
}
// length() const
qsizetype c_QList_T_QAction_T___length(void *thisObj) {
  const auto &result = fromPtr<QAction *>(thisObj)->length();
  return result;
}
// mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QAction_T___mid_qsizetype_qsizetype(void *thisObj,
                                                    qsizetype pos,
                                                    qsizetype len) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QAction *>>{
      fromPtr<QAction *>(thisObj)->mid(pos, len)};
  return result;
}
// move(qsizetype from, qsizetype to)
void c_QList_T_QAction_T___move_qsizetype_qsizetype(void *thisObj,
                                                    qsizetype from,
                                                    qsizetype to) {
  fromPtr<QAction *>(thisObj)->move(from, to);
}
// pop_back()
void c_QList_T_QAction_T___pop_back(void *thisObj) {
  fromPtr<QAction *>(thisObj)->pop_back();
}
// pop_front()
void c_QList_T_QAction_T___pop_front(void *thisObj) {
  fromPtr<QAction *>(thisObj)->pop_front();
}
// remove(qsizetype i, qsizetype n)
void c_QList_T_QAction_T___remove_qsizetype_qsizetype(void *thisObj,
                                                      qsizetype i,
                                                      qsizetype n) {
  fromPtr<QAction *>(thisObj)->remove(i, n);
}
// removeAt(qsizetype i)
void c_QList_T_QAction_T___removeAt_qsizetype(void *thisObj, qsizetype i) {
  fromPtr<QAction *>(thisObj)->removeAt(i);
}
// removeFirst()
void c_QList_T_QAction_T___removeFirst(void *thisObj) {
  fromPtr<QAction *>(thisObj)->removeFirst();
}
// removeLast()
void c_QList_T_QAction_T___removeLast(void *thisObj) {
  fromPtr<QAction *>(thisObj)->removeLast();
}
// reserve(qsizetype size)
void c_QList_T_QAction_T___reserve_qsizetype(void *thisObj, qsizetype size) {
  fromPtr<QAction *>(thisObj)->reserve(size);
}
// resize(qsizetype size)
void c_QList_T_QAction_T___resize_qsizetype(void *thisObj, qsizetype size) {
  fromPtr<QAction *>(thisObj)->resize(size);
}
// shrink_to_fit()
void c_QList_T_QAction_T___shrink_to_fit(void *thisObj) {
  fromPtr<QAction *>(thisObj)->shrink_to_fit();
}
// size() const
qsizetype c_QList_T_QAction_T___size(void *thisObj) {
  const auto &result = fromPtr<QAction *>(thisObj)->size();
  return result;
}
// sliced(qsizetype pos) const
void *c_QList_T_QAction_T___sliced_qsizetype(void *thisObj, qsizetype pos) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QAction *>>{
      fromPtr<QAction *>(thisObj)->sliced(pos)};
  return result;
}
// sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QAction_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype pos,
                                                       qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QAction *>>{
      fromPtr<QAction *>(thisObj)->sliced(pos, n)};
  return result;
}
// squeeze()
void c_QList_T_QAction_T___squeeze(void *thisObj) {
  fromPtr<QAction *>(thisObj)->squeeze();
}
// swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QAction_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                           qsizetype i,
                                                           qsizetype j) {
  fromPtr<QAction *>(thisObj)->swapItemsAt(i, j);
}
// takeAt(qsizetype i)
void *c_QList_T_QAction_T___takeAt_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = fromPtr<QAction *>(thisObj)->takeAt(i);
  return result;
}
// toList() const
void *c_QList_T_QAction_T___toList(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QAction *>>{
      fromPtr<QAction *>(thisObj)->toList()};
  return result;
}
// toVector() const
void *c_QList_T_QAction_T___toVector(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QAction *>>{
      fromPtr<QAction *>(thisObj)->toVector()};
  return result;
}
// value(qsizetype i) const
void *c_QList_T_QAction_T___value_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = fromPtr<QAction *>(thisObj)->value(i);
  return result;
}
void c_QList_T_QAction_T___destructor(void *thisObj) {
  delete fromPtr<QAction *>(thisObj);
}
}
extern "C" {
void c_QList_T_QKeySequence_T__Finalizer(void *cppObj) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QList_wrapper<QKeySequence> *>(cppObj);
}
void *c_QList_T_QKeySequence_T___constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QKeySequence>();
  return reinterpret_cast<void *>(ptr);
}
void *c_QList_T_QKeySequence_T___constructor_qsizetype(qsizetype size) {
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QKeySequence>(size);
  return reinterpret_cast<void *>(ptr);
}
// append(const QList<T > & l)
void c_QList_T_QKeySequence_T___append_QList_T(void *thisObj, void *l_) {
  assert(l_);
  auto &l = *reinterpret_cast<QList<QKeySequence> *>(l_);
  fromPtr<QKeySequence>(thisObj)->append(l);
}
// at(qsizetype i) const
const void *c_QList_T_QKeySequence_T___at_qsizetype(void *thisObj,
                                                    qsizetype i) {
  const auto &result = new Dartagnan::ValueWrapper<QKeySequence>{
      fromPtr<QKeySequence>(thisObj)->at(i)};
  return result;
}
// back()
void *c_QList_T_QKeySequence_T___back(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QKeySequence>{
      fromPtr<QKeySequence>(thisObj)->back()};
  return result;
}
// capacity() const
qsizetype c_QList_T_QKeySequence_T___capacity(void *thisObj) {
  const auto &result = fromPtr<QKeySequence>(thisObj)->capacity();
  return result;
}
// clear()
void c_QList_T_QKeySequence_T___clear(void *thisObj) {
  fromPtr<QKeySequence>(thisObj)->clear();
}
// constFirst() const
const void *c_QList_T_QKeySequence_T___constFirst(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QKeySequence>{
      fromPtr<QKeySequence>(thisObj)->constFirst()};
  return result;
}
// constLast() const
const void *c_QList_T_QKeySequence_T___constLast(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QKeySequence>{
      fromPtr<QKeySequence>(thisObj)->constLast()};
  return result;
}
// count() const
qsizetype c_QList_T_QKeySequence_T___count(void *thisObj) {
  const auto &result = fromPtr<QKeySequence>(thisObj)->count();
  return result;
}
// detach()
void c_QList_T_QKeySequence_T___detach(void *thisObj) {
  fromPtr<QKeySequence>(thisObj)->detach();
}
// empty() const
bool c_QList_T_QKeySequence_T___empty(void *thisObj) {
  const auto &result = fromPtr<QKeySequence>(thisObj)->empty();
  return result;
}
// first()
void *c_QList_T_QKeySequence_T___first(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QKeySequence>{
      fromPtr<QKeySequence>(thisObj)->first()};
  return result;
}
// first(qsizetype n) const
void *c_QList_T_QKeySequence_T___first_qsizetype(void *thisObj, qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QKeySequence>>{
      fromPtr<QKeySequence>(thisObj)->first(n)};
  return result;
}
// front()
void *c_QList_T_QKeySequence_T___front(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QKeySequence>{
      fromPtr<QKeySequence>(thisObj)->front()};
  return result;
}
// isDetached() const
bool c_QList_T_QKeySequence_T___isDetached(void *thisObj) {
  const auto &result = fromPtr<QKeySequence>(thisObj)->isDetached();
  return result;
}
// isEmpty() const
bool c_QList_T_QKeySequence_T___isEmpty(void *thisObj) {
  const auto &result = fromPtr<QKeySequence>(thisObj)->isEmpty();
  return result;
}
// isSharedWith(const QList<T > & other) const
bool c_QList_T_QKeySequence_T___isSharedWith_QList_T(void *thisObj,
                                                     void *other_) {
  assert(other_);
  auto &other = *reinterpret_cast<QList<QKeySequence> *>(other_);
  const auto &result = fromPtr<QKeySequence>(thisObj)->isSharedWith(other);
  return result;
}
// last()
void *c_QList_T_QKeySequence_T___last(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QKeySequence>{
      fromPtr<QKeySequence>(thisObj)->last()};
  return result;
}
// last(qsizetype n) const
void *c_QList_T_QKeySequence_T___last_qsizetype(void *thisObj, qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QKeySequence>>{
      fromPtr<QKeySequence>(thisObj)->last(n)};
  return result;
}
// length() const
qsizetype c_QList_T_QKeySequence_T___length(void *thisObj) {
  const auto &result = fromPtr<QKeySequence>(thisObj)->length();
  return result;
}
// mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QKeySequence_T___mid_qsizetype_qsizetype(void *thisObj,
                                                         qsizetype pos,
                                                         qsizetype len) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QKeySequence>>{
      fromPtr<QKeySequence>(thisObj)->mid(pos, len)};
  return result;
}
// move(qsizetype from, qsizetype to)
void c_QList_T_QKeySequence_T___move_qsizetype_qsizetype(void *thisObj,
                                                         qsizetype from,
                                                         qsizetype to) {
  fromPtr<QKeySequence>(thisObj)->move(from, to);
}
// pop_back()
void c_QList_T_QKeySequence_T___pop_back(void *thisObj) {
  fromPtr<QKeySequence>(thisObj)->pop_back();
}
// pop_front()
void c_QList_T_QKeySequence_T___pop_front(void *thisObj) {
  fromPtr<QKeySequence>(thisObj)->pop_front();
}
// remove(qsizetype i, qsizetype n)
void c_QList_T_QKeySequence_T___remove_qsizetype_qsizetype(void *thisObj,
                                                           qsizetype i,
                                                           qsizetype n) {
  fromPtr<QKeySequence>(thisObj)->remove(i, n);
}
// removeAt(qsizetype i)
void c_QList_T_QKeySequence_T___removeAt_qsizetype(void *thisObj, qsizetype i) {
  fromPtr<QKeySequence>(thisObj)->removeAt(i);
}
// removeFirst()
void c_QList_T_QKeySequence_T___removeFirst(void *thisObj) {
  fromPtr<QKeySequence>(thisObj)->removeFirst();
}
// removeLast()
void c_QList_T_QKeySequence_T___removeLast(void *thisObj) {
  fromPtr<QKeySequence>(thisObj)->removeLast();
}
// reserve(qsizetype size)
void c_QList_T_QKeySequence_T___reserve_qsizetype(void *thisObj,
                                                  qsizetype size) {
  fromPtr<QKeySequence>(thisObj)->reserve(size);
}
// resize(qsizetype size)
void c_QList_T_QKeySequence_T___resize_qsizetype(void *thisObj,
                                                 qsizetype size) {
  fromPtr<QKeySequence>(thisObj)->resize(size);
}
// shrink_to_fit()
void c_QList_T_QKeySequence_T___shrink_to_fit(void *thisObj) {
  fromPtr<QKeySequence>(thisObj)->shrink_to_fit();
}
// size() const
qsizetype c_QList_T_QKeySequence_T___size(void *thisObj) {
  const auto &result = fromPtr<QKeySequence>(thisObj)->size();
  return result;
}
// sliced(qsizetype pos) const
void *c_QList_T_QKeySequence_T___sliced_qsizetype(void *thisObj,
                                                  qsizetype pos) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QKeySequence>>{
      fromPtr<QKeySequence>(thisObj)->sliced(pos)};
  return result;
}
// sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QKeySequence_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                            qsizetype pos,
                                                            qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QKeySequence>>{
      fromPtr<QKeySequence>(thisObj)->sliced(pos, n)};
  return result;
}
// squeeze()
void c_QList_T_QKeySequence_T___squeeze(void *thisObj) {
  fromPtr<QKeySequence>(thisObj)->squeeze();
}
// swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QKeySequence_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                                qsizetype i,
                                                                qsizetype j) {
  fromPtr<QKeySequence>(thisObj)->swapItemsAt(i, j);
}
// takeAt(qsizetype i)
void *c_QList_T_QKeySequence_T___takeAt_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = new Dartagnan::ValueWrapper<QKeySequence>{
      fromPtr<QKeySequence>(thisObj)->takeAt(i)};
  return result;
}
// toList() const
void *c_QList_T_QKeySequence_T___toList(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QKeySequence>>{
      fromPtr<QKeySequence>(thisObj)->toList()};
  return result;
}
// toVector() const
void *c_QList_T_QKeySequence_T___toVector(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QKeySequence>>{
      fromPtr<QKeySequence>(thisObj)->toVector()};
  return result;
}
// value(qsizetype i) const
void *c_QList_T_QKeySequence_T___value_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = new Dartagnan::ValueWrapper<QKeySequence>{
      fromPtr<QKeySequence>(thisObj)->value(i)};
  return result;
}
void c_QList_T_QKeySequence_T___destructor(void *thisObj) {
  delete fromPtr<QKeySequence>(thisObj);
}
}
extern "C" {
void c_QList_T_QModelIndex_T__Finalizer(void *cppObj) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QList_wrapper<QModelIndex> *>(cppObj);
}
void *c_QList_T_QModelIndex_T___constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QModelIndex>();
  return reinterpret_cast<void *>(ptr);
}
void *c_QList_T_QModelIndex_T___constructor_qsizetype(qsizetype size) {
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QModelIndex>(size);
  return reinterpret_cast<void *>(ptr);
}
// append(const QList<T > & l)
void c_QList_T_QModelIndex_T___append_QList_T(void *thisObj, void *l_) {
  assert(l_);
  auto &l = *reinterpret_cast<QList<QModelIndex> *>(l_);
  fromPtr<QModelIndex>(thisObj)->append(l);
}
// at(qsizetype i) const
const void *c_QList_T_QModelIndex_T___at_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{
      fromPtr<QModelIndex>(thisObj)->at(i)};
  return result;
}
// back()
void *c_QList_T_QModelIndex_T___back(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{
      fromPtr<QModelIndex>(thisObj)->back()};
  return result;
}
// capacity() const
qsizetype c_QList_T_QModelIndex_T___capacity(void *thisObj) {
  const auto &result = fromPtr<QModelIndex>(thisObj)->capacity();
  return result;
}
// clear()
void c_QList_T_QModelIndex_T___clear(void *thisObj) {
  fromPtr<QModelIndex>(thisObj)->clear();
}
// constFirst() const
const void *c_QList_T_QModelIndex_T___constFirst(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{
      fromPtr<QModelIndex>(thisObj)->constFirst()};
  return result;
}
// constLast() const
const void *c_QList_T_QModelIndex_T___constLast(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{
      fromPtr<QModelIndex>(thisObj)->constLast()};
  return result;
}
// count() const
qsizetype c_QList_T_QModelIndex_T___count(void *thisObj) {
  const auto &result = fromPtr<QModelIndex>(thisObj)->count();
  return result;
}
// detach()
void c_QList_T_QModelIndex_T___detach(void *thisObj) {
  fromPtr<QModelIndex>(thisObj)->detach();
}
// empty() const
bool c_QList_T_QModelIndex_T___empty(void *thisObj) {
  const auto &result = fromPtr<QModelIndex>(thisObj)->empty();
  return result;
}
// first()
void *c_QList_T_QModelIndex_T___first(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{
      fromPtr<QModelIndex>(thisObj)->first()};
  return result;
}
// first(qsizetype n) const
void *c_QList_T_QModelIndex_T___first_qsizetype(void *thisObj, qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QModelIndex>>{
      fromPtr<QModelIndex>(thisObj)->first(n)};
  return result;
}
// front()
void *c_QList_T_QModelIndex_T___front(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{
      fromPtr<QModelIndex>(thisObj)->front()};
  return result;
}
// isDetached() const
bool c_QList_T_QModelIndex_T___isDetached(void *thisObj) {
  const auto &result = fromPtr<QModelIndex>(thisObj)->isDetached();
  return result;
}
// isEmpty() const
bool c_QList_T_QModelIndex_T___isEmpty(void *thisObj) {
  const auto &result = fromPtr<QModelIndex>(thisObj)->isEmpty();
  return result;
}
// isSharedWith(const QList<T > & other) const
bool c_QList_T_QModelIndex_T___isSharedWith_QList_T(void *thisObj,
                                                    void *other_) {
  assert(other_);
  auto &other = *reinterpret_cast<QList<QModelIndex> *>(other_);
  const auto &result = fromPtr<QModelIndex>(thisObj)->isSharedWith(other);
  return result;
}
// last()
void *c_QList_T_QModelIndex_T___last(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{
      fromPtr<QModelIndex>(thisObj)->last()};
  return result;
}
// last(qsizetype n) const
void *c_QList_T_QModelIndex_T___last_qsizetype(void *thisObj, qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QModelIndex>>{
      fromPtr<QModelIndex>(thisObj)->last(n)};
  return result;
}
// length() const
qsizetype c_QList_T_QModelIndex_T___length(void *thisObj) {
  const auto &result = fromPtr<QModelIndex>(thisObj)->length();
  return result;
}
// mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QModelIndex_T___mid_qsizetype_qsizetype(void *thisObj,
                                                        qsizetype pos,
                                                        qsizetype len) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QModelIndex>>{
      fromPtr<QModelIndex>(thisObj)->mid(pos, len)};
  return result;
}
// move(qsizetype from, qsizetype to)
void c_QList_T_QModelIndex_T___move_qsizetype_qsizetype(void *thisObj,
                                                        qsizetype from,
                                                        qsizetype to) {
  fromPtr<QModelIndex>(thisObj)->move(from, to);
}
// pop_back()
void c_QList_T_QModelIndex_T___pop_back(void *thisObj) {
  fromPtr<QModelIndex>(thisObj)->pop_back();
}
// pop_front()
void c_QList_T_QModelIndex_T___pop_front(void *thisObj) {
  fromPtr<QModelIndex>(thisObj)->pop_front();
}
// remove(qsizetype i, qsizetype n)
void c_QList_T_QModelIndex_T___remove_qsizetype_qsizetype(void *thisObj,
                                                          qsizetype i,
                                                          qsizetype n) {
  fromPtr<QModelIndex>(thisObj)->remove(i, n);
}
// removeAt(qsizetype i)
void c_QList_T_QModelIndex_T___removeAt_qsizetype(void *thisObj, qsizetype i) {
  fromPtr<QModelIndex>(thisObj)->removeAt(i);
}
// removeFirst()
void c_QList_T_QModelIndex_T___removeFirst(void *thisObj) {
  fromPtr<QModelIndex>(thisObj)->removeFirst();
}
// removeLast()
void c_QList_T_QModelIndex_T___removeLast(void *thisObj) {
  fromPtr<QModelIndex>(thisObj)->removeLast();
}
// reserve(qsizetype size)
void c_QList_T_QModelIndex_T___reserve_qsizetype(void *thisObj,
                                                 qsizetype size) {
  fromPtr<QModelIndex>(thisObj)->reserve(size);
}
// resize(qsizetype size)
void c_QList_T_QModelIndex_T___resize_qsizetype(void *thisObj, qsizetype size) {
  fromPtr<QModelIndex>(thisObj)->resize(size);
}
// shrink_to_fit()
void c_QList_T_QModelIndex_T___shrink_to_fit(void *thisObj) {
  fromPtr<QModelIndex>(thisObj)->shrink_to_fit();
}
// size() const
qsizetype c_QList_T_QModelIndex_T___size(void *thisObj) {
  const auto &result = fromPtr<QModelIndex>(thisObj)->size();
  return result;
}
// sliced(qsizetype pos) const
void *c_QList_T_QModelIndex_T___sliced_qsizetype(void *thisObj, qsizetype pos) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QModelIndex>>{
      fromPtr<QModelIndex>(thisObj)->sliced(pos)};
  return result;
}
// sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QModelIndex_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                           qsizetype pos,
                                                           qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QModelIndex>>{
      fromPtr<QModelIndex>(thisObj)->sliced(pos, n)};
  return result;
}
// squeeze()
void c_QList_T_QModelIndex_T___squeeze(void *thisObj) {
  fromPtr<QModelIndex>(thisObj)->squeeze();
}
// swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QModelIndex_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                               qsizetype i,
                                                               qsizetype j) {
  fromPtr<QModelIndex>(thisObj)->swapItemsAt(i, j);
}
// takeAt(qsizetype i)
void *c_QList_T_QModelIndex_T___takeAt_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{
      fromPtr<QModelIndex>(thisObj)->takeAt(i)};
  return result;
}
// toList() const
void *c_QList_T_QModelIndex_T___toList(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QModelIndex>>{
      fromPtr<QModelIndex>(thisObj)->toList()};
  return result;
}
// toVector() const
void *c_QList_T_QModelIndex_T___toVector(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QModelIndex>>{
      fromPtr<QModelIndex>(thisObj)->toVector()};
  return result;
}
// value(qsizetype i) const
void *c_QList_T_QModelIndex_T___value_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{
      fromPtr<QModelIndex>(thisObj)->value(i)};
  return result;
}
void c_QList_T_QModelIndex_T___destructor(void *thisObj) {
  delete fromPtr<QModelIndex>(thisObj);
}
}
extern "C" {
void c_QList_T_QItemSelectionRange_T__Finalizer(void *cppObj) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QList_wrapper<QItemSelectionRange> *>(cppObj);
}
void *c_QList_T_QItemSelectionRange_T___constructor() {
  auto ptr =
      new QtDartBindings_wrappersNS::QList_wrapper<QItemSelectionRange>();
  return reinterpret_cast<void *>(ptr);
}
void *c_QList_T_QItemSelectionRange_T___constructor_qsizetype(qsizetype size) {
  auto ptr =
      new QtDartBindings_wrappersNS::QList_wrapper<QItemSelectionRange>(size);
  return reinterpret_cast<void *>(ptr);
}
// append(const QList<T > & l)
void c_QList_T_QItemSelectionRange_T___append_QList_T(void *thisObj, void *l_) {
  assert(l_);
  auto &l = *reinterpret_cast<QList<QItemSelectionRange> *>(l_);
  fromPtr<QItemSelectionRange>(thisObj)->append(l);
}
// at(qsizetype i) const
const void *c_QList_T_QItemSelectionRange_T___at_qsizetype(void *thisObj,
                                                           qsizetype i) {
  const auto &result = new Dartagnan::ValueWrapper<QItemSelectionRange>{
      fromPtr<QItemSelectionRange>(thisObj)->at(i)};
  return result;
}
// back()
void *c_QList_T_QItemSelectionRange_T___back(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QItemSelectionRange>{
      fromPtr<QItemSelectionRange>(thisObj)->back()};
  return result;
}
// capacity() const
qsizetype c_QList_T_QItemSelectionRange_T___capacity(void *thisObj) {
  const auto &result = fromPtr<QItemSelectionRange>(thisObj)->capacity();
  return result;
}
// clear()
void c_QList_T_QItemSelectionRange_T___clear(void *thisObj) {
  fromPtr<QItemSelectionRange>(thisObj)->clear();
}
// constFirst() const
const void *c_QList_T_QItemSelectionRange_T___constFirst(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QItemSelectionRange>{
      fromPtr<QItemSelectionRange>(thisObj)->constFirst()};
  return result;
}
// constLast() const
const void *c_QList_T_QItemSelectionRange_T___constLast(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QItemSelectionRange>{
      fromPtr<QItemSelectionRange>(thisObj)->constLast()};
  return result;
}
// count() const
qsizetype c_QList_T_QItemSelectionRange_T___count(void *thisObj) {
  const auto &result = fromPtr<QItemSelectionRange>(thisObj)->count();
  return result;
}
// detach()
void c_QList_T_QItemSelectionRange_T___detach(void *thisObj) {
  fromPtr<QItemSelectionRange>(thisObj)->detach();
}
// empty() const
bool c_QList_T_QItemSelectionRange_T___empty(void *thisObj) {
  const auto &result = fromPtr<QItemSelectionRange>(thisObj)->empty();
  return result;
}
// first()
void *c_QList_T_QItemSelectionRange_T___first(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QItemSelectionRange>{
      fromPtr<QItemSelectionRange>(thisObj)->first()};
  return result;
}
// first(qsizetype n) const
void *c_QList_T_QItemSelectionRange_T___first_qsizetype(void *thisObj,
                                                        qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QItemSelectionRange>>{
      fromPtr<QItemSelectionRange>(thisObj)->first(n)};
  return result;
}
// front()
void *c_QList_T_QItemSelectionRange_T___front(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QItemSelectionRange>{
      fromPtr<QItemSelectionRange>(thisObj)->front()};
  return result;
}
// isDetached() const
bool c_QList_T_QItemSelectionRange_T___isDetached(void *thisObj) {
  const auto &result = fromPtr<QItemSelectionRange>(thisObj)->isDetached();
  return result;
}
// isEmpty() const
bool c_QList_T_QItemSelectionRange_T___isEmpty(void *thisObj) {
  const auto &result = fromPtr<QItemSelectionRange>(thisObj)->isEmpty();
  return result;
}
// isSharedWith(const QList<T > & other) const
bool c_QList_T_QItemSelectionRange_T___isSharedWith_QList_T(void *thisObj,
                                                            void *other_) {
  assert(other_);
  auto &other = *reinterpret_cast<QList<QItemSelectionRange> *>(other_);
  const auto &result =
      fromPtr<QItemSelectionRange>(thisObj)->isSharedWith(other);
  return result;
}
// last()
void *c_QList_T_QItemSelectionRange_T___last(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QItemSelectionRange>{
      fromPtr<QItemSelectionRange>(thisObj)->last()};
  return result;
}
// last(qsizetype n) const
void *c_QList_T_QItemSelectionRange_T___last_qsizetype(void *thisObj,
                                                       qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QItemSelectionRange>>{
      fromPtr<QItemSelectionRange>(thisObj)->last(n)};
  return result;
}
// length() const
qsizetype c_QList_T_QItemSelectionRange_T___length(void *thisObj) {
  const auto &result = fromPtr<QItemSelectionRange>(thisObj)->length();
  return result;
}
// mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QItemSelectionRange_T___mid_qsizetype_qsizetype(void *thisObj,
                                                                qsizetype pos,
                                                                qsizetype len) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QItemSelectionRange>>{
      fromPtr<QItemSelectionRange>(thisObj)->mid(pos, len)};
  return result;
}
// move(qsizetype from, qsizetype to)
void c_QList_T_QItemSelectionRange_T___move_qsizetype_qsizetype(void *thisObj,
                                                                qsizetype from,
                                                                qsizetype to) {
  fromPtr<QItemSelectionRange>(thisObj)->move(from, to);
}
// pop_back()
void c_QList_T_QItemSelectionRange_T___pop_back(void *thisObj) {
  fromPtr<QItemSelectionRange>(thisObj)->pop_back();
}
// pop_front()
void c_QList_T_QItemSelectionRange_T___pop_front(void *thisObj) {
  fromPtr<QItemSelectionRange>(thisObj)->pop_front();
}
// remove(qsizetype i, qsizetype n)
void c_QList_T_QItemSelectionRange_T___remove_qsizetype_qsizetype(void *thisObj,
                                                                  qsizetype i,
                                                                  qsizetype n) {
  fromPtr<QItemSelectionRange>(thisObj)->remove(i, n);
}
// removeAt(qsizetype i)
void c_QList_T_QItemSelectionRange_T___removeAt_qsizetype(void *thisObj,
                                                          qsizetype i) {
  fromPtr<QItemSelectionRange>(thisObj)->removeAt(i);
}
// removeFirst()
void c_QList_T_QItemSelectionRange_T___removeFirst(void *thisObj) {
  fromPtr<QItemSelectionRange>(thisObj)->removeFirst();
}
// removeLast()
void c_QList_T_QItemSelectionRange_T___removeLast(void *thisObj) {
  fromPtr<QItemSelectionRange>(thisObj)->removeLast();
}
// reserve(qsizetype size)
void c_QList_T_QItemSelectionRange_T___reserve_qsizetype(void *thisObj,
                                                         qsizetype size) {
  fromPtr<QItemSelectionRange>(thisObj)->reserve(size);
}
// resize(qsizetype size)
void c_QList_T_QItemSelectionRange_T___resize_qsizetype(void *thisObj,
                                                        qsizetype size) {
  fromPtr<QItemSelectionRange>(thisObj)->resize(size);
}
// shrink_to_fit()
void c_QList_T_QItemSelectionRange_T___shrink_to_fit(void *thisObj) {
  fromPtr<QItemSelectionRange>(thisObj)->shrink_to_fit();
}
// size() const
qsizetype c_QList_T_QItemSelectionRange_T___size(void *thisObj) {
  const auto &result = fromPtr<QItemSelectionRange>(thisObj)->size();
  return result;
}
// sliced(qsizetype pos) const
void *c_QList_T_QItemSelectionRange_T___sliced_qsizetype(void *thisObj,
                                                         qsizetype pos) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QItemSelectionRange>>{
      fromPtr<QItemSelectionRange>(thisObj)->sliced(pos)};
  return result;
}
// sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QItemSelectionRange_T___sliced_qsizetype_qsizetype(
    void *thisObj, qsizetype pos, qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QItemSelectionRange>>{
      fromPtr<QItemSelectionRange>(thisObj)->sliced(pos, n)};
  return result;
}
// squeeze()
void c_QList_T_QItemSelectionRange_T___squeeze(void *thisObj) {
  fromPtr<QItemSelectionRange>(thisObj)->squeeze();
}
// swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QItemSelectionRange_T___swapItemsAt_qsizetype_qsizetype(
    void *thisObj, qsizetype i, qsizetype j) {
  fromPtr<QItemSelectionRange>(thisObj)->swapItemsAt(i, j);
}
// takeAt(qsizetype i)
void *c_QList_T_QItemSelectionRange_T___takeAt_qsizetype(void *thisObj,
                                                         qsizetype i) {
  const auto &result = new Dartagnan::ValueWrapper<QItemSelectionRange>{
      fromPtr<QItemSelectionRange>(thisObj)->takeAt(i)};
  return result;
}
// toList() const
void *c_QList_T_QItemSelectionRange_T___toList(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QItemSelectionRange>>{
      fromPtr<QItemSelectionRange>(thisObj)->toList()};
  return result;
}
// toVector() const
void *c_QList_T_QItemSelectionRange_T___toVector(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QItemSelectionRange>>{
      fromPtr<QItemSelectionRange>(thisObj)->toVector()};
  return result;
}
// value(qsizetype i) const
void *c_QList_T_QItemSelectionRange_T___value_qsizetype(void *thisObj,
                                                        qsizetype i) {
  const auto &result = new Dartagnan::ValueWrapper<QItemSelectionRange>{
      fromPtr<QItemSelectionRange>(thisObj)->value(i)};
  return result;
}
void c_QList_T_QItemSelectionRange_T___destructor(void *thisObj) {
  delete fromPtr<QItemSelectionRange>(thisObj);
}
}
extern "C" {
void c_QList_T_QSize_T__Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QList_wrapper<QSize> *>(
      cppObj);
}
void *c_QList_T_QSize_T___constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QSize>();
  return reinterpret_cast<void *>(ptr);
}
void *c_QList_T_QSize_T___constructor_qsizetype(qsizetype size) {
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QSize>(size);
  return reinterpret_cast<void *>(ptr);
}
// append(const QList<T > & l)
void c_QList_T_QSize_T___append_QList_T(void *thisObj, void *l_) {
  assert(l_);
  auto &l = *reinterpret_cast<QList<QSize> *>(l_);
  fromPtr<QSize>(thisObj)->append(l);
}
// at(qsizetype i) const
const void *c_QList_T_QSize_T___at_qsizetype(void *thisObj, qsizetype i) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr<QSize>(thisObj)->at(i)};
  return result;
}
// back()
void *c_QList_T_QSize_T___back(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr<QSize>(thisObj)->back()};
  return result;
}
// capacity() const
qsizetype c_QList_T_QSize_T___capacity(void *thisObj) {
  const auto &result = fromPtr<QSize>(thisObj)->capacity();
  return result;
}
// clear()
void c_QList_T_QSize_T___clear(void *thisObj) {
  fromPtr<QSize>(thisObj)->clear();
}
// constFirst() const
const void *c_QList_T_QSize_T___constFirst(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr<QSize>(thisObj)->constFirst()};
  return result;
}
// constLast() const
const void *c_QList_T_QSize_T___constLast(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr<QSize>(thisObj)->constLast()};
  return result;
}
// count() const
qsizetype c_QList_T_QSize_T___count(void *thisObj) {
  const auto &result = fromPtr<QSize>(thisObj)->count();
  return result;
}
// detach()
void c_QList_T_QSize_T___detach(void *thisObj) {
  fromPtr<QSize>(thisObj)->detach();
}
// empty() const
bool c_QList_T_QSize_T___empty(void *thisObj) {
  const auto &result = fromPtr<QSize>(thisObj)->empty();
  return result;
}
// first()
void *c_QList_T_QSize_T___first(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr<QSize>(thisObj)->first()};
  return result;
}
// first(qsizetype n) const
void *c_QList_T_QSize_T___first_qsizetype(void *thisObj, qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QSize>>{
      fromPtr<QSize>(thisObj)->first(n)};
  return result;
}
// front()
void *c_QList_T_QSize_T___front(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr<QSize>(thisObj)->front()};
  return result;
}
// isDetached() const
bool c_QList_T_QSize_T___isDetached(void *thisObj) {
  const auto &result = fromPtr<QSize>(thisObj)->isDetached();
  return result;
}
// isEmpty() const
bool c_QList_T_QSize_T___isEmpty(void *thisObj) {
  const auto &result = fromPtr<QSize>(thisObj)->isEmpty();
  return result;
}
// isSharedWith(const QList<T > & other) const
bool c_QList_T_QSize_T___isSharedWith_QList_T(void *thisObj, void *other_) {
  assert(other_);
  auto &other = *reinterpret_cast<QList<QSize> *>(other_);
  const auto &result = fromPtr<QSize>(thisObj)->isSharedWith(other);
  return result;
}
// last()
void *c_QList_T_QSize_T___last(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr<QSize>(thisObj)->last()};
  return result;
}
// last(qsizetype n) const
void *c_QList_T_QSize_T___last_qsizetype(void *thisObj, qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QSize>>{
      fromPtr<QSize>(thisObj)->last(n)};
  return result;
}
// length() const
qsizetype c_QList_T_QSize_T___length(void *thisObj) {
  const auto &result = fromPtr<QSize>(thisObj)->length();
  return result;
}
// mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QSize_T___mid_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                                  qsizetype len) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QSize>>{
      fromPtr<QSize>(thisObj)->mid(pos, len)};
  return result;
}
// move(qsizetype from, qsizetype to)
void c_QList_T_QSize_T___move_qsizetype_qsizetype(void *thisObj, qsizetype from,
                                                  qsizetype to) {
  fromPtr<QSize>(thisObj)->move(from, to);
}
// pop_back()
void c_QList_T_QSize_T___pop_back(void *thisObj) {
  fromPtr<QSize>(thisObj)->pop_back();
}
// pop_front()
void c_QList_T_QSize_T___pop_front(void *thisObj) {
  fromPtr<QSize>(thisObj)->pop_front();
}
// remove(qsizetype i, qsizetype n)
void c_QList_T_QSize_T___remove_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                                    qsizetype n) {
  fromPtr<QSize>(thisObj)->remove(i, n);
}
// removeAt(qsizetype i)
void c_QList_T_QSize_T___removeAt_qsizetype(void *thisObj, qsizetype i) {
  fromPtr<QSize>(thisObj)->removeAt(i);
}
// removeFirst()
void c_QList_T_QSize_T___removeFirst(void *thisObj) {
  fromPtr<QSize>(thisObj)->removeFirst();
}
// removeLast()
void c_QList_T_QSize_T___removeLast(void *thisObj) {
  fromPtr<QSize>(thisObj)->removeLast();
}
// reserve(qsizetype size)
void c_QList_T_QSize_T___reserve_qsizetype(void *thisObj, qsizetype size) {
  fromPtr<QSize>(thisObj)->reserve(size);
}
// resize(qsizetype size)
void c_QList_T_QSize_T___resize_qsizetype(void *thisObj, qsizetype size) {
  fromPtr<QSize>(thisObj)->resize(size);
}
// shrink_to_fit()
void c_QList_T_QSize_T___shrink_to_fit(void *thisObj) {
  fromPtr<QSize>(thisObj)->shrink_to_fit();
}
// size() const
qsizetype c_QList_T_QSize_T___size(void *thisObj) {
  const auto &result = fromPtr<QSize>(thisObj)->size();
  return result;
}
// sliced(qsizetype pos) const
void *c_QList_T_QSize_T___sliced_qsizetype(void *thisObj, qsizetype pos) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QSize>>{
      fromPtr<QSize>(thisObj)->sliced(pos)};
  return result;
}
// sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QSize_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                     qsizetype pos,
                                                     qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QSize>>{
      fromPtr<QSize>(thisObj)->sliced(pos, n)};
  return result;
}
// squeeze()
void c_QList_T_QSize_T___squeeze(void *thisObj) {
  fromPtr<QSize>(thisObj)->squeeze();
}
// swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QSize_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                         qsizetype i,
                                                         qsizetype j) {
  fromPtr<QSize>(thisObj)->swapItemsAt(i, j);
}
// takeAt(qsizetype i)
void *c_QList_T_QSize_T___takeAt_qsizetype(void *thisObj, qsizetype i) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr<QSize>(thisObj)->takeAt(i)};
  return result;
}
// toList() const
void *c_QList_T_QSize_T___toList(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QSize>>{
      fromPtr<QSize>(thisObj)->toList()};
  return result;
}
// toVector() const
void *c_QList_T_QSize_T___toVector(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QSize>>{
      fromPtr<QSize>(thisObj)->toVector()};
  return result;
}
// value(qsizetype i) const
void *c_QList_T_QSize_T___value_qsizetype(void *thisObj, qsizetype i) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr<QSize>(thisObj)->value(i)};
  return result;
}
void c_QList_T_QSize_T___destructor(void *thisObj) {
  delete fromPtr<QSize>(thisObj);
}
}
extern "C" {
void c_QList_T_int_T__Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QList_wrapper<int> *>(
      cppObj);
}
void *c_QList_T_int_T___constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<int>();
  return reinterpret_cast<void *>(ptr);
}
void *c_QList_T_int_T___constructor_qsizetype(qsizetype size) {
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<int>(size);
  return reinterpret_cast<void *>(ptr);
}
// append(const QList<T > & l)
void c_QList_T_int_T___append_QList_T(void *thisObj, void *l_) {
  assert(l_);
  auto &l = *reinterpret_cast<QList<int> *>(l_);
  fromPtr<int>(thisObj)->append(l);
}
// at(qsizetype i) const
const int c_QList_T_int_T___at_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = fromPtr<int>(thisObj)->at(i);
  return result;
}
// back()
int c_QList_T_int_T___back(void *thisObj) {
  const auto &result = fromPtr<int>(thisObj)->back();
  return result;
}
// capacity() const
qsizetype c_QList_T_int_T___capacity(void *thisObj) {
  const auto &result = fromPtr<int>(thisObj)->capacity();
  return result;
}
// clear()
void c_QList_T_int_T___clear(void *thisObj) { fromPtr<int>(thisObj)->clear(); }
// constFirst() const
const int c_QList_T_int_T___constFirst(void *thisObj) {
  const auto &result = fromPtr<int>(thisObj)->constFirst();
  return result;
}
// constLast() const
const int c_QList_T_int_T___constLast(void *thisObj) {
  const auto &result = fromPtr<int>(thisObj)->constLast();
  return result;
}
// count() const
qsizetype c_QList_T_int_T___count(void *thisObj) {
  const auto &result = fromPtr<int>(thisObj)->count();
  return result;
}
// detach()
void c_QList_T_int_T___detach(void *thisObj) {
  fromPtr<int>(thisObj)->detach();
}
// empty() const
bool c_QList_T_int_T___empty(void *thisObj) {
  const auto &result = fromPtr<int>(thisObj)->empty();
  return result;
}
// first()
int c_QList_T_int_T___first(void *thisObj) {
  const auto &result = fromPtr<int>(thisObj)->first();
  return result;
}
// first(qsizetype n) const
void *c_QList_T_int_T___first_qsizetype(void *thisObj, qsizetype n) {
  const auto &result =
      new Dartagnan::ValueWrapper<QList<int>>{fromPtr<int>(thisObj)->first(n)};
  return result;
}
// front()
int c_QList_T_int_T___front(void *thisObj) {
  const auto &result = fromPtr<int>(thisObj)->front();
  return result;
}
// isDetached() const
bool c_QList_T_int_T___isDetached(void *thisObj) {
  const auto &result = fromPtr<int>(thisObj)->isDetached();
  return result;
}
// isEmpty() const
bool c_QList_T_int_T___isEmpty(void *thisObj) {
  const auto &result = fromPtr<int>(thisObj)->isEmpty();
  return result;
}
// isSharedWith(const QList<T > & other) const
bool c_QList_T_int_T___isSharedWith_QList_T(void *thisObj, void *other_) {
  assert(other_);
  auto &other = *reinterpret_cast<QList<int> *>(other_);
  const auto &result = fromPtr<int>(thisObj)->isSharedWith(other);
  return result;
}
// last()
int c_QList_T_int_T___last(void *thisObj) {
  const auto &result = fromPtr<int>(thisObj)->last();
  return result;
}
// last(qsizetype n) const
void *c_QList_T_int_T___last_qsizetype(void *thisObj, qsizetype n) {
  const auto &result =
      new Dartagnan::ValueWrapper<QList<int>>{fromPtr<int>(thisObj)->last(n)};
  return result;
}
// length() const
qsizetype c_QList_T_int_T___length(void *thisObj) {
  const auto &result = fromPtr<int>(thisObj)->length();
  return result;
}
// mid(qsizetype pos, qsizetype len) const
void *c_QList_T_int_T___mid_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                                qsizetype len) {
  const auto &result = new Dartagnan::ValueWrapper<QList<int>>{
      fromPtr<int>(thisObj)->mid(pos, len)};
  return result;
}
// move(qsizetype from, qsizetype to)
void c_QList_T_int_T___move_qsizetype_qsizetype(void *thisObj, qsizetype from,
                                                qsizetype to) {
  fromPtr<int>(thisObj)->move(from, to);
}
// pop_back()
void c_QList_T_int_T___pop_back(void *thisObj) {
  fromPtr<int>(thisObj)->pop_back();
}
// pop_front()
void c_QList_T_int_T___pop_front(void *thisObj) {
  fromPtr<int>(thisObj)->pop_front();
}
// remove(qsizetype i, qsizetype n)
void c_QList_T_int_T___remove_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                                  qsizetype n) {
  fromPtr<int>(thisObj)->remove(i, n);
}
// removeAt(qsizetype i)
void c_QList_T_int_T___removeAt_qsizetype(void *thisObj, qsizetype i) {
  fromPtr<int>(thisObj)->removeAt(i);
}
// removeFirst()
void c_QList_T_int_T___removeFirst(void *thisObj) {
  fromPtr<int>(thisObj)->removeFirst();
}
// removeLast()
void c_QList_T_int_T___removeLast(void *thisObj) {
  fromPtr<int>(thisObj)->removeLast();
}
// reserve(qsizetype size)
void c_QList_T_int_T___reserve_qsizetype(void *thisObj, qsizetype size) {
  fromPtr<int>(thisObj)->reserve(size);
}
// resize(qsizetype size)
void c_QList_T_int_T___resize_qsizetype(void *thisObj, qsizetype size) {
  fromPtr<int>(thisObj)->resize(size);
}
// shrink_to_fit()
void c_QList_T_int_T___shrink_to_fit(void *thisObj) {
  fromPtr<int>(thisObj)->shrink_to_fit();
}
// size() const
qsizetype c_QList_T_int_T___size(void *thisObj) {
  const auto &result = fromPtr<int>(thisObj)->size();
  return result;
}
// sliced(qsizetype pos) const
void *c_QList_T_int_T___sliced_qsizetype(void *thisObj, qsizetype pos) {
  const auto &result = new Dartagnan::ValueWrapper<QList<int>>{
      fromPtr<int>(thisObj)->sliced(pos)};
  return result;
}
// sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_int_T___sliced_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                                   qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<int>>{
      fromPtr<int>(thisObj)->sliced(pos, n)};
  return result;
}
// squeeze()
void c_QList_T_int_T___squeeze(void *thisObj) {
  fromPtr<int>(thisObj)->squeeze();
}
// swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_int_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype i,
                                                       qsizetype j) {
  fromPtr<int>(thisObj)->swapItemsAt(i, j);
}
// takeAt(qsizetype i)
int c_QList_T_int_T___takeAt_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = fromPtr<int>(thisObj)->takeAt(i);
  return result;
}
// toList() const
void *c_QList_T_int_T___toList(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QList<int>>{fromPtr<int>(thisObj)->toList()};
  return result;
}
// toVector() const
void *c_QList_T_int_T___toVector(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<int>>{
      fromPtr<int>(thisObj)->toVector()};
  return result;
}
// value(qsizetype i) const
int c_QList_T_int_T___value_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = fromPtr<int>(thisObj)->value(i);
  return result;
}
void c_QList_T_int_T___destructor(void *thisObj) {
  delete fromPtr<int>(thisObj);
}
}
extern "C" {
void c_QList_T_QWindow_T__Finalizer(void *cppObj) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QList_wrapper<QWindow *> *>(cppObj);
}
void *c_QList_T_QWindow_T___constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QWindow *>();
  return reinterpret_cast<void *>(ptr);
}
void *c_QList_T_QWindow_T___constructor_qsizetype(qsizetype size) {
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QWindow *>(size);
  return reinterpret_cast<void *>(ptr);
}
// append(const QList<T > & l)
void c_QList_T_QWindow_T___append_QList_T(void *thisObj, void *l_) {
  assert(l_);
  auto &l = *reinterpret_cast<QList<QWindow *> *>(l_);
  fromPtr<QWindow *>(thisObj)->append(l);
}
// at(qsizetype i) const
const void *c_QList_T_QWindow_T___at_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = fromPtr<QWindow *>(thisObj)->at(i);
  return result;
}
// back()
void *c_QList_T_QWindow_T___back(void *thisObj) {
  const auto &result = fromPtr<QWindow *>(thisObj)->back();
  return result;
}
// capacity() const
qsizetype c_QList_T_QWindow_T___capacity(void *thisObj) {
  const auto &result = fromPtr<QWindow *>(thisObj)->capacity();
  return result;
}
// clear()
void c_QList_T_QWindow_T___clear(void *thisObj) {
  fromPtr<QWindow *>(thisObj)->clear();
}
// constFirst() const
const void *c_QList_T_QWindow_T___constFirst(void *thisObj) {
  const auto &result = fromPtr<QWindow *>(thisObj)->constFirst();
  return result;
}
// constLast() const
const void *c_QList_T_QWindow_T___constLast(void *thisObj) {
  const auto &result = fromPtr<QWindow *>(thisObj)->constLast();
  return result;
}
// count() const
qsizetype c_QList_T_QWindow_T___count(void *thisObj) {
  const auto &result = fromPtr<QWindow *>(thisObj)->count();
  return result;
}
// detach()
void c_QList_T_QWindow_T___detach(void *thisObj) {
  fromPtr<QWindow *>(thisObj)->detach();
}
// empty() const
bool c_QList_T_QWindow_T___empty(void *thisObj) {
  const auto &result = fromPtr<QWindow *>(thisObj)->empty();
  return result;
}
// first()
void *c_QList_T_QWindow_T___first(void *thisObj) {
  const auto &result = fromPtr<QWindow *>(thisObj)->first();
  return result;
}
// first(qsizetype n) const
void *c_QList_T_QWindow_T___first_qsizetype(void *thisObj, qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QWindow *>>{
      fromPtr<QWindow *>(thisObj)->first(n)};
  return result;
}
// front()
void *c_QList_T_QWindow_T___front(void *thisObj) {
  const auto &result = fromPtr<QWindow *>(thisObj)->front();
  return result;
}
// isDetached() const
bool c_QList_T_QWindow_T___isDetached(void *thisObj) {
  const auto &result = fromPtr<QWindow *>(thisObj)->isDetached();
  return result;
}
// isEmpty() const
bool c_QList_T_QWindow_T___isEmpty(void *thisObj) {
  const auto &result = fromPtr<QWindow *>(thisObj)->isEmpty();
  return result;
}
// isSharedWith(const QList<T > & other) const
bool c_QList_T_QWindow_T___isSharedWith_QList_T(void *thisObj, void *other_) {
  assert(other_);
  auto &other = *reinterpret_cast<QList<QWindow *> *>(other_);
  const auto &result = fromPtr<QWindow *>(thisObj)->isSharedWith(other);
  return result;
}
// last()
void *c_QList_T_QWindow_T___last(void *thisObj) {
  const auto &result = fromPtr<QWindow *>(thisObj)->last();
  return result;
}
// last(qsizetype n) const
void *c_QList_T_QWindow_T___last_qsizetype(void *thisObj, qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QWindow *>>{
      fromPtr<QWindow *>(thisObj)->last(n)};
  return result;
}
// length() const
qsizetype c_QList_T_QWindow_T___length(void *thisObj) {
  const auto &result = fromPtr<QWindow *>(thisObj)->length();
  return result;
}
// mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QWindow_T___mid_qsizetype_qsizetype(void *thisObj,
                                                    qsizetype pos,
                                                    qsizetype len) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QWindow *>>{
      fromPtr<QWindow *>(thisObj)->mid(pos, len)};
  return result;
}
// move(qsizetype from, qsizetype to)
void c_QList_T_QWindow_T___move_qsizetype_qsizetype(void *thisObj,
                                                    qsizetype from,
                                                    qsizetype to) {
  fromPtr<QWindow *>(thisObj)->move(from, to);
}
// pop_back()
void c_QList_T_QWindow_T___pop_back(void *thisObj) {
  fromPtr<QWindow *>(thisObj)->pop_back();
}
// pop_front()
void c_QList_T_QWindow_T___pop_front(void *thisObj) {
  fromPtr<QWindow *>(thisObj)->pop_front();
}
// remove(qsizetype i, qsizetype n)
void c_QList_T_QWindow_T___remove_qsizetype_qsizetype(void *thisObj,
                                                      qsizetype i,
                                                      qsizetype n) {
  fromPtr<QWindow *>(thisObj)->remove(i, n);
}
// removeAt(qsizetype i)
void c_QList_T_QWindow_T___removeAt_qsizetype(void *thisObj, qsizetype i) {
  fromPtr<QWindow *>(thisObj)->removeAt(i);
}
// removeFirst()
void c_QList_T_QWindow_T___removeFirst(void *thisObj) {
  fromPtr<QWindow *>(thisObj)->removeFirst();
}
// removeLast()
void c_QList_T_QWindow_T___removeLast(void *thisObj) {
  fromPtr<QWindow *>(thisObj)->removeLast();
}
// reserve(qsizetype size)
void c_QList_T_QWindow_T___reserve_qsizetype(void *thisObj, qsizetype size) {
  fromPtr<QWindow *>(thisObj)->reserve(size);
}
// resize(qsizetype size)
void c_QList_T_QWindow_T___resize_qsizetype(void *thisObj, qsizetype size) {
  fromPtr<QWindow *>(thisObj)->resize(size);
}
// shrink_to_fit()
void c_QList_T_QWindow_T___shrink_to_fit(void *thisObj) {
  fromPtr<QWindow *>(thisObj)->shrink_to_fit();
}
// size() const
qsizetype c_QList_T_QWindow_T___size(void *thisObj) {
  const auto &result = fromPtr<QWindow *>(thisObj)->size();
  return result;
}
// sliced(qsizetype pos) const
void *c_QList_T_QWindow_T___sliced_qsizetype(void *thisObj, qsizetype pos) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QWindow *>>{
      fromPtr<QWindow *>(thisObj)->sliced(pos)};
  return result;
}
// sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QWindow_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype pos,
                                                       qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QWindow *>>{
      fromPtr<QWindow *>(thisObj)->sliced(pos, n)};
  return result;
}
// squeeze()
void c_QList_T_QWindow_T___squeeze(void *thisObj) {
  fromPtr<QWindow *>(thisObj)->squeeze();
}
// swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QWindow_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                           qsizetype i,
                                                           qsizetype j) {
  fromPtr<QWindow *>(thisObj)->swapItemsAt(i, j);
}
// takeAt(qsizetype i)
void *c_QList_T_QWindow_T___takeAt_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = fromPtr<QWindow *>(thisObj)->takeAt(i);
  return result;
}
// toList() const
void *c_QList_T_QWindow_T___toList(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QWindow *>>{
      fromPtr<QWindow *>(thisObj)->toList()};
  return result;
}
// toVector() const
void *c_QList_T_QWindow_T___toVector(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QWindow *>>{
      fromPtr<QWindow *>(thisObj)->toVector()};
  return result;
}
// value(qsizetype i) const
void *c_QList_T_QWindow_T___value_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = fromPtr<QWindow *>(thisObj)->value(i);
  return result;
}
void c_QList_T_QWindow_T___destructor(void *thisObj) {
  delete fromPtr<QWindow *>(thisObj);
}
}
extern "C" {
void c_QList_T_QWidget_T__Finalizer(void *cppObj) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QList_wrapper<QWidget *> *>(cppObj);
}
void *c_QList_T_QWidget_T___constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QWidget *>();
  return reinterpret_cast<void *>(ptr);
}
void *c_QList_T_QWidget_T___constructor_qsizetype(qsizetype size) {
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QWidget *>(size);
  return reinterpret_cast<void *>(ptr);
}
// append(const QList<T > & l)
void c_QList_T_QWidget_T___append_QList_T(void *thisObj, void *l_) {
  assert(l_);
  auto &l = *reinterpret_cast<QList<QWidget *> *>(l_);
  fromPtr<QWidget *>(thisObj)->append(l);
}
// at(qsizetype i) const
const void *c_QList_T_QWidget_T___at_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = fromPtr<QWidget *>(thisObj)->at(i);
  return result;
}
// back()
void *c_QList_T_QWidget_T___back(void *thisObj) {
  const auto &result = fromPtr<QWidget *>(thisObj)->back();
  return result;
}
// capacity() const
qsizetype c_QList_T_QWidget_T___capacity(void *thisObj) {
  const auto &result = fromPtr<QWidget *>(thisObj)->capacity();
  return result;
}
// clear()
void c_QList_T_QWidget_T___clear(void *thisObj) {
  fromPtr<QWidget *>(thisObj)->clear();
}
// constFirst() const
const void *c_QList_T_QWidget_T___constFirst(void *thisObj) {
  const auto &result = fromPtr<QWidget *>(thisObj)->constFirst();
  return result;
}
// constLast() const
const void *c_QList_T_QWidget_T___constLast(void *thisObj) {
  const auto &result = fromPtr<QWidget *>(thisObj)->constLast();
  return result;
}
// count() const
qsizetype c_QList_T_QWidget_T___count(void *thisObj) {
  const auto &result = fromPtr<QWidget *>(thisObj)->count();
  return result;
}
// detach()
void c_QList_T_QWidget_T___detach(void *thisObj) {
  fromPtr<QWidget *>(thisObj)->detach();
}
// empty() const
bool c_QList_T_QWidget_T___empty(void *thisObj) {
  const auto &result = fromPtr<QWidget *>(thisObj)->empty();
  return result;
}
// first()
void *c_QList_T_QWidget_T___first(void *thisObj) {
  const auto &result = fromPtr<QWidget *>(thisObj)->first();
  return result;
}
// first(qsizetype n) const
void *c_QList_T_QWidget_T___first_qsizetype(void *thisObj, qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QWidget *>>{
      fromPtr<QWidget *>(thisObj)->first(n)};
  return result;
}
// front()
void *c_QList_T_QWidget_T___front(void *thisObj) {
  const auto &result = fromPtr<QWidget *>(thisObj)->front();
  return result;
}
// isDetached() const
bool c_QList_T_QWidget_T___isDetached(void *thisObj) {
  const auto &result = fromPtr<QWidget *>(thisObj)->isDetached();
  return result;
}
// isEmpty() const
bool c_QList_T_QWidget_T___isEmpty(void *thisObj) {
  const auto &result = fromPtr<QWidget *>(thisObj)->isEmpty();
  return result;
}
// isSharedWith(const QList<T > & other) const
bool c_QList_T_QWidget_T___isSharedWith_QList_T(void *thisObj, void *other_) {
  assert(other_);
  auto &other = *reinterpret_cast<QList<QWidget *> *>(other_);
  const auto &result = fromPtr<QWidget *>(thisObj)->isSharedWith(other);
  return result;
}
// last()
void *c_QList_T_QWidget_T___last(void *thisObj) {
  const auto &result = fromPtr<QWidget *>(thisObj)->last();
  return result;
}
// last(qsizetype n) const
void *c_QList_T_QWidget_T___last_qsizetype(void *thisObj, qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QWidget *>>{
      fromPtr<QWidget *>(thisObj)->last(n)};
  return result;
}
// length() const
qsizetype c_QList_T_QWidget_T___length(void *thisObj) {
  const auto &result = fromPtr<QWidget *>(thisObj)->length();
  return result;
}
// mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QWidget_T___mid_qsizetype_qsizetype(void *thisObj,
                                                    qsizetype pos,
                                                    qsizetype len) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QWidget *>>{
      fromPtr<QWidget *>(thisObj)->mid(pos, len)};
  return result;
}
// move(qsizetype from, qsizetype to)
void c_QList_T_QWidget_T___move_qsizetype_qsizetype(void *thisObj,
                                                    qsizetype from,
                                                    qsizetype to) {
  fromPtr<QWidget *>(thisObj)->move(from, to);
}
// pop_back()
void c_QList_T_QWidget_T___pop_back(void *thisObj) {
  fromPtr<QWidget *>(thisObj)->pop_back();
}
// pop_front()
void c_QList_T_QWidget_T___pop_front(void *thisObj) {
  fromPtr<QWidget *>(thisObj)->pop_front();
}
// remove(qsizetype i, qsizetype n)
void c_QList_T_QWidget_T___remove_qsizetype_qsizetype(void *thisObj,
                                                      qsizetype i,
                                                      qsizetype n) {
  fromPtr<QWidget *>(thisObj)->remove(i, n);
}
// removeAt(qsizetype i)
void c_QList_T_QWidget_T___removeAt_qsizetype(void *thisObj, qsizetype i) {
  fromPtr<QWidget *>(thisObj)->removeAt(i);
}
// removeFirst()
void c_QList_T_QWidget_T___removeFirst(void *thisObj) {
  fromPtr<QWidget *>(thisObj)->removeFirst();
}
// removeLast()
void c_QList_T_QWidget_T___removeLast(void *thisObj) {
  fromPtr<QWidget *>(thisObj)->removeLast();
}
// reserve(qsizetype size)
void c_QList_T_QWidget_T___reserve_qsizetype(void *thisObj, qsizetype size) {
  fromPtr<QWidget *>(thisObj)->reserve(size);
}
// resize(qsizetype size)
void c_QList_T_QWidget_T___resize_qsizetype(void *thisObj, qsizetype size) {
  fromPtr<QWidget *>(thisObj)->resize(size);
}
// shrink_to_fit()
void c_QList_T_QWidget_T___shrink_to_fit(void *thisObj) {
  fromPtr<QWidget *>(thisObj)->shrink_to_fit();
}
// size() const
qsizetype c_QList_T_QWidget_T___size(void *thisObj) {
  const auto &result = fromPtr<QWidget *>(thisObj)->size();
  return result;
}
// sliced(qsizetype pos) const
void *c_QList_T_QWidget_T___sliced_qsizetype(void *thisObj, qsizetype pos) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QWidget *>>{
      fromPtr<QWidget *>(thisObj)->sliced(pos)};
  return result;
}
// sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QWidget_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype pos,
                                                       qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QWidget *>>{
      fromPtr<QWidget *>(thisObj)->sliced(pos, n)};
  return result;
}
// squeeze()
void c_QList_T_QWidget_T___squeeze(void *thisObj) {
  fromPtr<QWidget *>(thisObj)->squeeze();
}
// swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QWidget_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                           qsizetype i,
                                                           qsizetype j) {
  fromPtr<QWidget *>(thisObj)->swapItemsAt(i, j);
}
// takeAt(qsizetype i)
void *c_QList_T_QWidget_T___takeAt_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = fromPtr<QWidget *>(thisObj)->takeAt(i);
  return result;
}
// toList() const
void *c_QList_T_QWidget_T___toList(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QWidget *>>{
      fromPtr<QWidget *>(thisObj)->toList()};
  return result;
}
// toVector() const
void *c_QList_T_QWidget_T___toVector(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QWidget *>>{
      fromPtr<QWidget *>(thisObj)->toVector()};
  return result;
}
// value(qsizetype i) const
void *c_QList_T_QWidget_T___value_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = fromPtr<QWidget *>(thisObj)->value(i);
  return result;
}
void c_QList_T_QWidget_T___destructor(void *thisObj) {
  delete fromPtr<QWidget *>(thisObj);
}
}
