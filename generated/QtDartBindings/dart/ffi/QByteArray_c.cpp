/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QByteArray_c.h"

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
QByteArray_wrapper::QByteArray_wrapper() : ::QByteArray() {}
QByteArray_wrapper::QByteArray_wrapper(const char *arg__1, qsizetype size)
    : ::QByteArray(arg__1, size) {}
QByteArray &QByteArray_wrapper::append(const QByteArray &a) {
  return ::QByteArray::append(a);
}
QByteArray &QByteArray_wrapper::append(const char *s) {
  return ::QByteArray::append(s);
}
QByteArray &QByteArray_wrapper::append(const char *s, qsizetype len) {
  return ::QByteArray::append(s, len);
}
char QByteArray_wrapper::at(qsizetype i) const { return ::QByteArray::at(i); }
qsizetype QByteArray_wrapper::capacity() const {
  return ::QByteArray::capacity();
}
const char *QByteArray_wrapper::cbegin() const {
  return ::QByteArray::cbegin();
}
const char *QByteArray_wrapper::cend() const { return ::QByteArray::cend(); }
void QByteArray_wrapper::chop(qsizetype n) { ::QByteArray::chop(n); }
QByteArray QByteArray_wrapper::chopped(qsizetype len) const {
  return ::QByteArray::chopped(len);
}
void QByteArray_wrapper::clear() { ::QByteArray::clear(); }
const char *QByteArray_wrapper::constBegin() const {
  return ::QByteArray::constBegin();
}
const char *QByteArray_wrapper::constData() const {
  return ::QByteArray::constData();
}
const char *QByteArray_wrapper::constEnd() const {
  return ::QByteArray::constEnd();
}
void QByteArray_wrapper::detach() { ::QByteArray::detach(); }
QByteArray QByteArray_wrapper::first(qsizetype n) const {
  return ::QByteArray::first(n);
}
QByteArray QByteArray_wrapper::fromBase64(const QByteArray &base64) {
  return ::QByteArray::fromBase64(base64);
}
QByteArray QByteArray_wrapper::fromHex(const QByteArray &hexEncoded) {
  return ::QByteArray::fromHex(hexEncoded);
}
QByteArray QByteArray_wrapper::fromRawData(const char *data, qsizetype size) {
  return ::QByteArray::fromRawData(data, size);
}
QByteArray &QByteArray_wrapper::insert(qsizetype i, const QByteArray &data) {
  return ::QByteArray::insert(i, data);
}
QByteArray &QByteArray_wrapper::insert(qsizetype i, const char *s) {
  return ::QByteArray::insert(i, s);
}
QByteArray &QByteArray_wrapper::insert(qsizetype i, const char *s,
                                       qsizetype len) {
  return ::QByteArray::insert(i, s, len);
}
bool QByteArray_wrapper::isDetached() const {
  return ::QByteArray::isDetached();
}
bool QByteArray_wrapper::isEmpty() const { return ::QByteArray::isEmpty(); }
bool QByteArray_wrapper::isLower() const { return ::QByteArray::isLower(); }
bool QByteArray_wrapper::isNull() const { return ::QByteArray::isNull(); }
bool QByteArray_wrapper::isSharedWith(const QByteArray &other) const {
  return ::QByteArray::isSharedWith(other);
}
bool QByteArray_wrapper::isUpper() const { return ::QByteArray::isUpper(); }
bool QByteArray_wrapper::isValidUtf8() const {
  return ::QByteArray::isValidUtf8();
}
QByteArray QByteArray_wrapper::last(qsizetype n) const {
  return ::QByteArray::last(n);
}
QByteArray QByteArray_wrapper::left(qsizetype len) const {
  return ::QByteArray::left(len);
}
qsizetype QByteArray_wrapper::length() const { return ::QByteArray::length(); }
QByteArray QByteArray_wrapper::mid(qsizetype index, qsizetype len) const {
  return ::QByteArray::mid(index, len);
}
QByteArray QByteArray_wrapper::number(int arg__1, int base) {
  return ::QByteArray::number(arg__1, base);
}
QByteArray QByteArray_wrapper::number(long arg__1, int base) {
  return ::QByteArray::number(arg__1, base);
}
QByteArray QByteArray_wrapper::number(qint64 arg__1, int base) {
  return ::QByteArray::number(arg__1, base);
}
QByteArray &QByteArray_wrapper::prepend(const QByteArray &a) {
  return ::QByteArray::prepend(a);
}
QByteArray &QByteArray_wrapper::prepend(const char *s) {
  return ::QByteArray::prepend(s);
}
QByteArray &QByteArray_wrapper::prepend(const char *s, qsizetype len) {
  return ::QByteArray::prepend(s, len);
}
void QByteArray_wrapper::push_back(const QByteArray &a) {
  ::QByteArray::push_back(a);
}
void QByteArray_wrapper::push_back(const char *s) {
  ::QByteArray::push_back(s);
}
void QByteArray_wrapper::push_front(const QByteArray &a) {
  ::QByteArray::push_front(a);
}
void QByteArray_wrapper::push_front(const char *c) {
  ::QByteArray::push_front(c);
}
QByteArray &QByteArray_wrapper::remove(qsizetype index, qsizetype len) {
  return ::QByteArray::remove(index, len);
}
QByteArray QByteArray_wrapper::repeated(qsizetype times) const {
  return ::QByteArray::repeated(times);
}
QByteArray &QByteArray_wrapper::replace(const char *before, qsizetype bsize,
                                        const char *after, qsizetype asize) {
  return ::QByteArray::replace(before, bsize, after, asize);
}
QByteArray &QByteArray_wrapper::replace(qsizetype index, qsizetype len,
                                        const char *s, qsizetype alen) {
  return ::QByteArray::replace(index, len, s, alen);
}
void QByteArray_wrapper::reserve(qsizetype size) {
  ::QByteArray::reserve(size);
}
void QByteArray_wrapper::resize(qsizetype size) { ::QByteArray::resize(size); }
QByteArray QByteArray_wrapper::right(qsizetype len) const {
  return ::QByteArray::right(len);
}
QByteArray &QByteArray_wrapper::setNum(int arg__1, int base) {
  return ::QByteArray::setNum(arg__1, base);
}
QByteArray &QByteArray_wrapper::setNum(long arg__1, int base) {
  return ::QByteArray::setNum(arg__1, base);
}
QByteArray &QByteArray_wrapper::setNum(qint64 arg__1, int base) {
  return ::QByteArray::setNum(arg__1, base);
}
QByteArray &QByteArray_wrapper::setNum(short arg__1, int base) {
  return ::QByteArray::setNum(arg__1, base);
}
QByteArray &QByteArray_wrapper::setRawData(const char *a, qsizetype n) {
  return ::QByteArray::setRawData(a, n);
}
void QByteArray_wrapper::shrink_to_fit() { ::QByteArray::shrink_to_fit(); }
QByteArray QByteArray_wrapper::simplified() {
  return ::QByteArray::simplified();
}
qsizetype QByteArray_wrapper::size() const { return ::QByteArray::size(); }
QByteArray QByteArray_wrapper::sliced(qsizetype pos) const {
  return ::QByteArray::sliced(pos);
}
QByteArray QByteArray_wrapper::sliced(qsizetype pos, qsizetype n) const {
  return ::QByteArray::sliced(pos, n);
}
void QByteArray_wrapper::squeeze() { ::QByteArray::squeeze(); }
QByteArray QByteArray_wrapper::toBase64() const {
  return ::QByteArray::toBase64();
}
QByteArray QByteArray_wrapper::toLower() { return ::QByteArray::toLower(); }
QByteArray QByteArray_wrapper::toUpper() { return ::QByteArray::toUpper(); }
QByteArray QByteArray_wrapper::trimmed() { return ::QByteArray::trimmed(); }
void QByteArray_wrapper::truncate(qsizetype pos) {
  ::QByteArray::truncate(pos);
}
QByteArray_wrapper::~QByteArray_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QByteArray *fromPtr(void *ptr) {
  return reinterpret_cast<QByteArray *>(ptr);
}
static QtDartBindings_wrappersNS::QByteArray_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QByteArray_wrapper *>(ptr);
}
extern "C" {
void c_QByteArray_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QByteArray_wrapper *>(
      cppObj);
}
void *c_QByteArray__constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QByteArray_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QByteArray__constructor_char_qsizetype(const char *arg__1,
                                               qsizetype size) {
  auto ptr = new QtDartBindings_wrappersNS::QByteArray_wrapper(arg__1, size);
  return reinterpret_cast<void *>(ptr);
}
// append(const QByteArray & a)
void *c_QByteArray__append_QByteArray(void *thisObj, void *a_) {
  assert(a_);
  auto &a = *reinterpret_cast<QByteArray *>(a_);
  const auto &result = &fromPtr(thisObj)->append(a);
  return result;
}
// append(const char * s)
void *c_QByteArray__append_char(void *thisObj, const char *s) {
  const auto &result = &fromPtr(thisObj)->append(s);
  free((char *)s);
  return result;
}
// append(const char * s, qsizetype len)
void *c_QByteArray__append_char_qsizetype(void *thisObj, const char *s,
                                          qsizetype len) {
  const auto &result = &fromPtr(thisObj)->append(s, len);
  free((char *)s);
  return result;
}
// at(qsizetype i) const
char c_QByteArray__at_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = fromPtr(thisObj)->at(i);
  return result;
}
// capacity() const
qsizetype c_QByteArray__capacity(void *thisObj) {
  const auto &result = fromPtr(thisObj)->capacity();
  return result;
}
// cbegin() const
const char *c_QByteArray__cbegin(void *thisObj) {
  const auto &result = fromPtr(thisObj)->cbegin();
  return result;
}
// cend() const
const char *c_QByteArray__cend(void *thisObj) {
  const auto &result = fromPtr(thisObj)->cend();
  return result;
}
// chop(qsizetype n)
void c_QByteArray__chop_qsizetype(void *thisObj, qsizetype n) {
  fromPtr(thisObj)->chop(n);
}
// chopped(qsizetype len) const
void *c_QByteArray__chopped_qsizetype(void *thisObj, qsizetype len) {
  const auto &result =
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->chopped(len)};
  return result;
}
// clear()
void c_QByteArray__clear(void *thisObj) { fromPtr(thisObj)->clear(); }
// constBegin() const
const char *c_QByteArray__constBegin(void *thisObj) {
  const auto &result = fromPtr(thisObj)->constBegin();
  return result;
}
// constData() const
const char *c_QByteArray__constData(void *thisObj) {
  const auto &result = fromPtr(thisObj)->constData();
  return result;
}
// constEnd() const
const char *c_QByteArray__constEnd(void *thisObj) {
  const auto &result = fromPtr(thisObj)->constEnd();
  return result;
}
// detach()
void c_QByteArray__detach(void *thisObj) { fromPtr(thisObj)->detach(); }
// first(qsizetype n) const
void *c_QByteArray__first_qsizetype(void *thisObj, qsizetype n) {
  const auto &result =
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->first(n)};
  return result;
}
// fromBase64(const QByteArray & base64)
void *c_static_QByteArray__fromBase64_QByteArray(void *base64_) {
  assert(base64_);
  auto &base64 = *reinterpret_cast<QByteArray *>(base64_);
  const auto &result = new Dartagnan::ValueWrapper<QByteArray>{
      QtDartBindings_wrappersNS::QByteArray_wrapper::fromBase64(base64)};
  return result;
}
// fromHex(const QByteArray & hexEncoded)
void *c_static_QByteArray__fromHex_QByteArray(void *hexEncoded_) {
  assert(hexEncoded_);
  auto &hexEncoded = *reinterpret_cast<QByteArray *>(hexEncoded_);
  const auto &result = new Dartagnan::ValueWrapper<QByteArray>{
      QtDartBindings_wrappersNS::QByteArray_wrapper::fromHex(hexEncoded)};
  return result;
}
// fromRawData(const char * data, qsizetype size)
void *c_static_QByteArray__fromRawData_char_qsizetype(const char *data,
                                                      qsizetype size) {
  const auto &result = new Dartagnan::ValueWrapper<QByteArray>{
      QtDartBindings_wrappersNS::QByteArray_wrapper::fromRawData(data, size)};
  free((char *)data);
  return result;
}
// insert(qsizetype i, const QByteArray & data)
void *c_QByteArray__insert_qsizetype_QByteArray(void *thisObj, qsizetype i,
                                                void *data_) {
  assert(data_);
  auto &data = *reinterpret_cast<QByteArray *>(data_);
  const auto &result = &fromPtr(thisObj)->insert(i, data);
  return result;
}
// insert(qsizetype i, const char * s)
void *c_QByteArray__insert_qsizetype_char(void *thisObj, qsizetype i,
                                          const char *s) {
  const auto &result = &fromPtr(thisObj)->insert(i, s);
  free((char *)s);
  return result;
}
// insert(qsizetype i, const char * s, qsizetype len)
void *c_QByteArray__insert_qsizetype_char_qsizetype(void *thisObj, qsizetype i,
                                                    const char *s,
                                                    qsizetype len) {
  const auto &result = &fromPtr(thisObj)->insert(i, s, len);
  free((char *)s);
  return result;
}
// isDetached() const
bool c_QByteArray__isDetached(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isDetached();
  return result;
}
// isEmpty() const
bool c_QByteArray__isEmpty(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isEmpty();
  return result;
}
// isLower() const
bool c_QByteArray__isLower(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isLower();
  return result;
}
// isNull() const
bool c_QByteArray__isNull(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isNull();
  return result;
}
// isSharedWith(const QByteArray & other) const
bool c_QByteArray__isSharedWith_QByteArray(void *thisObj, void *other_) {
  assert(other_);
  auto &other = *reinterpret_cast<QByteArray *>(other_);
  const auto &result = fromPtr(thisObj)->isSharedWith(other);
  return result;
}
// isUpper() const
bool c_QByteArray__isUpper(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isUpper();
  return result;
}
// isValidUtf8() const
bool c_QByteArray__isValidUtf8(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isValidUtf8();
  return result;
}
// last(qsizetype n) const
void *c_QByteArray__last_qsizetype(void *thisObj, qsizetype n) {
  const auto &result =
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->last(n)};
  return result;
}
// left(qsizetype len) const
void *c_QByteArray__left_qsizetype(void *thisObj, qsizetype len) {
  const auto &result =
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->left(len)};
  return result;
}
// length() const
qsizetype c_QByteArray__length(void *thisObj) {
  const auto &result = fromPtr(thisObj)->length();
  return result;
}
// mid(qsizetype index, qsizetype len) const
void *c_QByteArray__mid_qsizetype_qsizetype(void *thisObj, qsizetype index,
                                            qsizetype len) {
  const auto &result = new Dartagnan::ValueWrapper<QByteArray>{
      fromPtr(thisObj)->mid(index, len)};
  return result;
}
// number(int arg__1, int base)
void *c_static_QByteArray__number_int_int(int arg__1, int base) {
  const auto &result = new Dartagnan::ValueWrapper<QByteArray>{
      QtDartBindings_wrappersNS::QByteArray_wrapper::number(arg__1, base)};
  return result;
}
// number(long arg__1, int base)
void *c_static_QByteArray__number_long_int(long arg__1, int base) {
  const auto &result = new Dartagnan::ValueWrapper<QByteArray>{
      QtDartBindings_wrappersNS::QByteArray_wrapper::number(arg__1, base)};
  return result;
}
// number(qint64 arg__1, int base)
void *c_static_QByteArray__number_qint64_int(qint64 arg__1, int base) {
  const auto &result = new Dartagnan::ValueWrapper<QByteArray>{
      QtDartBindings_wrappersNS::QByteArray_wrapper::number(arg__1, base)};
  return result;
}
// prepend(const QByteArray & a)
void *c_QByteArray__prepend_QByteArray(void *thisObj, void *a_) {
  assert(a_);
  auto &a = *reinterpret_cast<QByteArray *>(a_);
  const auto &result = &fromPtr(thisObj)->prepend(a);
  return result;
}
// prepend(const char * s)
void *c_QByteArray__prepend_char(void *thisObj, const char *s) {
  const auto &result = &fromPtr(thisObj)->prepend(s);
  free((char *)s);
  return result;
}
// prepend(const char * s, qsizetype len)
void *c_QByteArray__prepend_char_qsizetype(void *thisObj, const char *s,
                                           qsizetype len) {
  const auto &result = &fromPtr(thisObj)->prepend(s, len);
  free((char *)s);
  return result;
}
// push_back(const QByteArray & a)
void c_QByteArray__push_back_QByteArray(void *thisObj, void *a_) {
  assert(a_);
  auto &a = *reinterpret_cast<QByteArray *>(a_);
  fromPtr(thisObj)->push_back(a);
}
// push_back(const char * s)
void c_QByteArray__push_back_char(void *thisObj, const char *s) {
  fromPtr(thisObj)->push_back(s);
  free((char *)s);
}
// push_front(const QByteArray & a)
void c_QByteArray__push_front_QByteArray(void *thisObj, void *a_) {
  assert(a_);
  auto &a = *reinterpret_cast<QByteArray *>(a_);
  fromPtr(thisObj)->push_front(a);
}
// push_front(const char * c)
void c_QByteArray__push_front_char(void *thisObj, const char *c) {
  fromPtr(thisObj)->push_front(c);
  free((char *)c);
}
// remove(qsizetype index, qsizetype len)
void *c_QByteArray__remove_qsizetype_qsizetype(void *thisObj, qsizetype index,
                                               qsizetype len) {
  const auto &result = &fromPtr(thisObj)->remove(index, len);
  return result;
}
// repeated(qsizetype times) const
void *c_QByteArray__repeated_qsizetype(void *thisObj, qsizetype times) {
  const auto &result = new Dartagnan::ValueWrapper<QByteArray>{
      fromPtr(thisObj)->repeated(times)};
  return result;
}
// replace(const char * before, qsizetype bsize, const char * after, qsizetype
// asize)
void *c_QByteArray__replace_char_qsizetype_char_qsizetype(void *thisObj,
                                                          const char *before,
                                                          qsizetype bsize,
                                                          const char *after,
                                                          qsizetype asize) {
  const auto &result = &fromPtr(thisObj)->replace(before, bsize, after, asize);
  free((char *)before);
  free((char *)after);
  return result;
}
// replace(qsizetype index, qsizetype len, const char * s, qsizetype alen)
void *c_QByteArray__replace_qsizetype_qsizetype_char_qsizetype(void *thisObj,
                                                               qsizetype index,
                                                               qsizetype len,
                                                               const char *s,
                                                               qsizetype alen) {
  const auto &result = &fromPtr(thisObj)->replace(index, len, s, alen);
  free((char *)s);
  return result;
}
// reserve(qsizetype size)
void c_QByteArray__reserve_qsizetype(void *thisObj, qsizetype size) {
  fromPtr(thisObj)->reserve(size);
}
// resize(qsizetype size)
void c_QByteArray__resize_qsizetype(void *thisObj, qsizetype size) {
  fromPtr(thisObj)->resize(size);
}
// right(qsizetype len) const
void *c_QByteArray__right_qsizetype(void *thisObj, qsizetype len) {
  const auto &result =
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->right(len)};
  return result;
}
// setNum(int arg__1, int base)
void *c_QByteArray__setNum_int_int(void *thisObj, int arg__1, int base) {
  const auto &result = &fromPtr(thisObj)->setNum(arg__1, base);
  return result;
}
// setNum(long arg__1, int base)
void *c_QByteArray__setNum_long_int(void *thisObj, long arg__1, int base) {
  const auto &result = &fromPtr(thisObj)->setNum(arg__1, base);
  return result;
}
// setNum(qint64 arg__1, int base)
void *c_QByteArray__setNum_qint64_int(void *thisObj, qint64 arg__1, int base) {
  const auto &result = &fromPtr(thisObj)->setNum(arg__1, base);
  return result;
}
// setNum(short arg__1, int base)
void *c_QByteArray__setNum_short_int(void *thisObj, short arg__1, int base) {
  const auto &result = &fromPtr(thisObj)->setNum(arg__1, base);
  return result;
}
// setRawData(const char * a, qsizetype n)
void *c_QByteArray__setRawData_char_qsizetype(void *thisObj, const char *a,
                                              qsizetype n) {
  const auto &result = &fromPtr(thisObj)->setRawData(a, n);
  free((char *)a);
  return result;
}
// shrink_to_fit()
void c_QByteArray__shrink_to_fit(void *thisObj) {
  fromPtr(thisObj)->shrink_to_fit();
}
// simplified()
void *c_QByteArray__simplified(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->simplified()};
  return result;
}
// size() const
qsizetype c_QByteArray__size(void *thisObj) {
  const auto &result = fromPtr(thisObj)->size();
  return result;
}
// sliced(qsizetype pos) const
void *c_QByteArray__sliced_qsizetype(void *thisObj, qsizetype pos) {
  const auto &result =
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->sliced(pos)};
  return result;
}
// sliced(qsizetype pos, qsizetype n) const
void *c_QByteArray__sliced_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                               qsizetype n) {
  const auto &result =
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->sliced(pos, n)};
  return result;
}
// squeeze()
void c_QByteArray__squeeze(void *thisObj) { fromPtr(thisObj)->squeeze(); }
// toBase64() const
void *c_QByteArray__toBase64(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->toBase64()};
  return result;
}
// toLower()
void *c_QByteArray__toLower(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->toLower()};
  return result;
}
// toUpper()
void *c_QByteArray__toUpper(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->toUpper()};
  return result;
}
// trimmed()
void *c_QByteArray__trimmed(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->trimmed()};
  return result;
}
// truncate(qsizetype pos)
void c_QByteArray__truncate_qsizetype(void *thisObj, qsizetype pos) {
  fromPtr(thisObj)->truncate(pos);
}
void c_QByteArray__destructor(void *thisObj) { delete fromPtr(thisObj); }
}
