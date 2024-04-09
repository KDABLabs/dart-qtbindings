/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QString_c.h"

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
QString_wrapper::QString_wrapper() : ::QString() {}
QString_wrapper::QString_wrapper(const QByteArray &a) : ::QString(a) {}
QString_wrapper::QString_wrapper(const char *ch) : ::QString(ch) {}
QString &QString_wrapper::append(const QByteArray &s) {
  return ::QString::append(s);
}
QString &QString_wrapper::append(const QString &s) {
  return ::QString::append(s);
}
QString &QString_wrapper::append(const char *s) { return ::QString::append(s); }
QString QString_wrapper::arg(const QString &a, int fieldWidth) const {
  return ::QString::arg(a, fieldWidth);
}
QString QString_wrapper::arg(int a, int fieldWidth, int base) const {
  return ::QString::arg(a, fieldWidth, base);
}
QString QString_wrapper::arg(long a, int fieldwidth, int base) const {
  return ::QString::arg(a, fieldwidth, base);
}
QString QString_wrapper::arg(qint64 a, int fieldwidth, int base) const {
  return ::QString::arg(a, fieldwidth, base);
}
QString QString_wrapper::arg(short a, int fieldWidth, int base) const {
  return ::QString::arg(a, fieldWidth, base);
}
QString QString_wrapper::asprintf(const char *format) {
  return ::QString::asprintf(format);
}
qsizetype QString_wrapper::capacity() const { return ::QString::capacity(); }
void QString_wrapper::chop(qsizetype n) { ::QString::chop(n); }
QString QString_wrapper::chopped(qsizetype n) const {
  return ::QString::chopped(n);
}
void QString_wrapper::clear() { ::QString::clear(); }
int QString_wrapper::compare(const QString &s) const {
  return ::QString::compare(s);
}
int QString_wrapper::compare(const QString &s1, const QString &s2) {
  return ::QString::compare(s1, s2);
}
bool QString_wrapper::contains(const QString &s) const {
  return ::QString::contains(s);
}
qsizetype QString_wrapper::count(const QString &s) const {
  return ::QString::count(s);
}
void QString_wrapper::detach() { ::QString::detach(); }
bool QString_wrapper::endsWith(const QString &s) const {
  return ::QString::endsWith(s);
}
QString QString_wrapper::first(qsizetype n) const {
  return ::QString::first(n);
}
QString QString_wrapper::fromLatin1(const char *str, qsizetype size) {
  return ::QString::fromLatin1(str, size);
}
QString QString_wrapper::fromLocal8Bit(const char *str, qsizetype size) {
  return ::QString::fromLocal8Bit(str, size);
}
QString QString_wrapper::fromUtf8(const char *utf8, qsizetype size) {
  return ::QString::fromUtf8(utf8, size);
}
qsizetype QString_wrapper::indexOf(const QString &s, qsizetype from) const {
  return ::QString::indexOf(s, from);
}
QString &QString_wrapper::insert(qsizetype i, const QByteArray &s) {
  return ::QString::insert(i, s);
}
QString &QString_wrapper::insert(qsizetype i, const QString &s) {
  return ::QString::insert(i, s);
}
QString &QString_wrapper::insert(qsizetype i, const char *s) {
  return ::QString::insert(i, s);
}
bool QString_wrapper::isDetached() const { return ::QString::isDetached(); }
bool QString_wrapper::isEmpty() const { return ::QString::isEmpty(); }
bool QString_wrapper::isLower() const { return ::QString::isLower(); }
bool QString_wrapper::isNull() const { return ::QString::isNull(); }
bool QString_wrapper::isRightToLeft() const {
  return ::QString::isRightToLeft();
}
bool QString_wrapper::isSharedWith(const QString &other) const {
  return ::QString::isSharedWith(other);
}
bool QString_wrapper::isSimpleText() const { return ::QString::isSimpleText(); }
bool QString_wrapper::isUpper() const { return ::QString::isUpper(); }
bool QString_wrapper::isValidUtf16() const { return ::QString::isValidUtf16(); }
QString QString_wrapper::last(qsizetype n) const { return ::QString::last(n); }
qsizetype QString_wrapper::lastIndexOf(const QString &s) const {
  return ::QString::lastIndexOf(s);
}
qsizetype QString_wrapper::lastIndexOf(const QString &s, qsizetype from) const {
  return ::QString::lastIndexOf(s, from);
}
QString QString_wrapper::left(qsizetype n) const { return ::QString::left(n); }
QString QString_wrapper::leftJustified(qsizetype width) const {
  return ::QString::leftJustified(width);
}
qsizetype QString_wrapper::length() const { return ::QString::length(); }
int QString_wrapper::localeAwareCompare(const QString &s) const {
  return ::QString::localeAwareCompare(s);
}
int QString_wrapper::localeAwareCompare(const QString &s1, const QString &s2) {
  return ::QString::localeAwareCompare(s1, s2);
}
QString QString_wrapper::mid(qsizetype position, qsizetype n) const {
  return ::QString::mid(position, n);
}
QString QString_wrapper::number(int arg__1, int base) {
  return ::QString::number(arg__1, base);
}
QString QString_wrapper::number(long arg__1, int base) {
  return ::QString::number(arg__1, base);
}
QString QString_wrapper::number(qint64 arg__1, int base) {
  return ::QString::number(arg__1, base);
}
QString &QString_wrapper::prepend(const QByteArray &s) {
  return ::QString::prepend(s);
}
QString &QString_wrapper::prepend(const QString &s) {
  return ::QString::prepend(s);
}
QString &QString_wrapper::prepend(const char *s) {
  return ::QString::prepend(s);
}
void QString_wrapper::push_back(const QString &s) { ::QString::push_back(s); }
void QString_wrapper::push_front(const QString &s) { ::QString::push_front(s); }
QString &QString_wrapper::remove(const QString &s) {
  return ::QString::remove(s);
}
QString &QString_wrapper::remove(qsizetype i, qsizetype len) {
  return ::QString::remove(i, len);
}
QString QString_wrapper::repeated(qsizetype times) const {
  return ::QString::repeated(times);
}
QString &QString_wrapper::replace(const QString &before, const QString &after) {
  return ::QString::replace(before, after);
}
QString &QString_wrapper::replace(qsizetype i, qsizetype len,
                                  const QString &after) {
  return ::QString::replace(i, len, after);
}
void QString_wrapper::reserve(qsizetype size) { ::QString::reserve(size); }
void QString_wrapper::resize(qsizetype size) { ::QString::resize(size); }
QString QString_wrapper::right(qsizetype n) const {
  return ::QString::right(n);
}
QString QString_wrapper::rightJustified(qsizetype width) const {
  return ::QString::rightJustified(width);
}
QString QString_wrapper::section(const QString &in_sep, qsizetype start,
                                 qsizetype end) const {
  return ::QString::section(in_sep, start, end);
}
QString &QString_wrapper::setNum(int arg__1, int base) {
  return ::QString::setNum(arg__1, base);
}
QString &QString_wrapper::setNum(long arg__1, int base) {
  return ::QString::setNum(arg__1, base);
}
QString &QString_wrapper::setNum(qint64 arg__1, int base) {
  return ::QString::setNum(arg__1, base);
}
QString &QString_wrapper::setNum(short arg__1, int base) {
  return ::QString::setNum(arg__1, base);
}
void QString_wrapper::shrink_to_fit() { ::QString::shrink_to_fit(); }
QString QString_wrapper::simplified() { return ::QString::simplified(); }
qsizetype QString_wrapper::size() const { return ::QString::size(); }
QString QString_wrapper::sliced(qsizetype pos) const {
  return ::QString::sliced(pos);
}
QString QString_wrapper::sliced(qsizetype pos, qsizetype n) const {
  return ::QString::sliced(pos, n);
}
QList<QString> QString_wrapper::split(const QString &sep) const {
  return ::QString::split(sep);
}
void QString_wrapper::squeeze() { ::QString::squeeze(); }
bool QString_wrapper::startsWith(const QString &s) const {
  return ::QString::startsWith(s);
}
QString QString_wrapper::toCaseFolded() { return ::QString::toCaseFolded(); }
QString QString_wrapper::toHtmlEscaped() const {
  return ::QString::toHtmlEscaped();
}
QByteArray QString_wrapper::toLatin1() { return ::QString::toLatin1(); }
QByteArray QString_wrapper::toLocal8Bit() { return ::QString::toLocal8Bit(); }
QString QString_wrapper::toLower() { return ::QString::toLower(); }
QList<unsigned int> QString_wrapper::toUcs4() const {
  return ::QString::toUcs4();
}
QString QString_wrapper::toUpper() { return ::QString::toUpper(); }
QByteArray QString_wrapper::toUtf8() { return ::QString::toUtf8(); }
QString QString_wrapper::trimmed() { return ::QString::trimmed(); }
void QString_wrapper::truncate(qsizetype pos) { ::QString::truncate(pos); }
QString_wrapper::~QString_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QString *fromPtr(void *ptr) { return reinterpret_cast<QString *>(ptr); }
static QtDartBindings_wrappersNS::QString_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QString_wrapper *>(ptr);
}
extern "C" {
void c_QString_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QString_wrapper *>(cppObj);
}
void *c_QString__constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QString_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QString__constructor_QByteArray(void *a_) {
  assert(a_);
  auto &a = *reinterpret_cast<QByteArray *>(a_);
  auto ptr = new QtDartBindings_wrappersNS::QString_wrapper(a);
  return reinterpret_cast<void *>(ptr);
}
void *c_QString__constructor_char(const char *ch) {
  auto ptr = new QtDartBindings_wrappersNS::QString_wrapper(ch);
  return reinterpret_cast<void *>(ptr);
}
// append(const QByteArray & s)
void *c_QString__append_QByteArray(void *thisObj, void *s_) {
  assert(s_);
  auto &s = *reinterpret_cast<QByteArray *>(s_);
  const auto &result = &fromPtr(thisObj)->append(s);
  return result;
}
// append(const QString & s)
void *c_QString__append_QString(void *thisObj, const char *s_) {
  const auto s = QString::fromUtf8(s_);
  const auto &result = &fromPtr(thisObj)->append(s);
  free((char *)s_);
  return result;
}
// append(const char * s)
void *c_QString__append_char(void *thisObj, const char *s) {
  const auto &result = &fromPtr(thisObj)->append(s);
  free((char *)s);
  return result;
}
// arg(const QString & a, int fieldWidth) const
void *c_QString__arg_QString_int(void *thisObj, const char *a_,
                                 int fieldWidth) {
  const auto a = QString::fromUtf8(a_);
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      fromPtr(thisObj)->arg(a, fieldWidth)};
  free((char *)a_);
  return result;
}
// arg(int a, int fieldWidth, int base) const
void *c_QString__arg_int_int_int(void *thisObj, int a, int fieldWidth,
                                 int base) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      fromPtr(thisObj)->arg(a, fieldWidth, base)};
  return result;
}
// arg(long a, int fieldwidth, int base) const
void *c_QString__arg_long_int_int(void *thisObj, long a, int fieldwidth,
                                  int base) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      fromPtr(thisObj)->arg(a, fieldwidth, base)};
  return result;
}
// arg(qint64 a, int fieldwidth, int base) const
void *c_QString__arg_qint64_int_int(void *thisObj, qint64 a, int fieldwidth,
                                    int base) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      fromPtr(thisObj)->arg(a, fieldwidth, base)};
  return result;
}
// arg(short a, int fieldWidth, int base) const
void *c_QString__arg_short_int_int(void *thisObj, short a, int fieldWidth,
                                   int base) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      fromPtr(thisObj)->arg(a, fieldWidth, base)};
  return result;
}
// asprintf(const char * format)
void *c_static_QString__asprintf_char(const char *format) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QString_wrapper::asprintf(format)};
  free((char *)format);
  return result;
}
// capacity() const
qsizetype c_QString__capacity(void *thisObj) {
  const auto &result = fromPtr(thisObj)->capacity();
  return result;
}
// chop(qsizetype n)
void c_QString__chop_qsizetype(void *thisObj, qsizetype n) {
  fromPtr(thisObj)->chop(n);
}
// chopped(qsizetype n) const
void *c_QString__chopped_qsizetype(void *thisObj, qsizetype n) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->chopped(n)};
  return result;
}
// clear()
void c_QString__clear(void *thisObj) { fromPtr(thisObj)->clear(); }
// compare(const QString & s) const
int c_QString__compare_QString(void *thisObj, const char *s_) {
  const auto s = QString::fromUtf8(s_);
  const auto &result = fromPtr(thisObj)->compare(s);
  free((char *)s_);
  return result;
}
// compare(const QString & s1, const QString & s2)
int c_static_QString__compare_QString_QString(const char *s1_,
                                              const char *s2_) {
  const auto s1 = QString::fromUtf8(s1_);
  const auto s2 = QString::fromUtf8(s2_);
  const auto &result =
      QtDartBindings_wrappersNS::QString_wrapper::compare(s1, s2);
  free((char *)s1_);
  free((char *)s2_);
  return result;
}
// contains(const QString & s) const
bool c_QString__contains_QString(void *thisObj, const char *s_) {
  const auto s = QString::fromUtf8(s_);
  const auto &result = fromPtr(thisObj)->contains(s);
  free((char *)s_);
  return result;
}
// count(const QString & s) const
qsizetype c_QString__count_QString(void *thisObj, const char *s_) {
  const auto s = QString::fromUtf8(s_);
  const auto &result = fromPtr(thisObj)->count(s);
  free((char *)s_);
  return result;
}
// detach()
void c_QString__detach(void *thisObj) { fromPtr(thisObj)->detach(); }
// endsWith(const QString & s) const
bool c_QString__endsWith_QString(void *thisObj, const char *s_) {
  const auto s = QString::fromUtf8(s_);
  const auto &result = fromPtr(thisObj)->endsWith(s);
  free((char *)s_);
  return result;
}
// first(qsizetype n) const
void *c_QString__first_qsizetype(void *thisObj, qsizetype n) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->first(n)};
  return result;
}
// fromLatin1(const char * str, qsizetype size)
void *c_static_QString__fromLatin1_char_qsizetype(const char *str,
                                                  qsizetype size) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QString_wrapper::fromLatin1(str, size)};
  free((char *)str);
  return result;
}
// fromLocal8Bit(const char * str, qsizetype size)
void *c_static_QString__fromLocal8Bit_char_qsizetype(const char *str,
                                                     qsizetype size) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QString_wrapper::fromLocal8Bit(str, size)};
  free((char *)str);
  return result;
}
// fromUtf8(const char * utf8, qsizetype size)
void *c_static_QString__fromUtf8_char_qsizetype(const char *utf8,
                                                qsizetype size) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QString_wrapper::fromUtf8(utf8, size)};
  free((char *)utf8);
  return result;
}
// indexOf(const QString & s, qsizetype from) const
qsizetype c_QString__indexOf_QString_qsizetype(void *thisObj, const char *s_,
                                               qsizetype from) {
  const auto s = QString::fromUtf8(s_);
  const auto &result = fromPtr(thisObj)->indexOf(s, from);
  free((char *)s_);
  return result;
}
// insert(qsizetype i, const QByteArray & s)
void *c_QString__insert_qsizetype_QByteArray(void *thisObj, qsizetype i,
                                             void *s_) {
  assert(s_);
  auto &s = *reinterpret_cast<QByteArray *>(s_);
  const auto &result = &fromPtr(thisObj)->insert(i, s);
  return result;
}
// insert(qsizetype i, const QString & s)
void *c_QString__insert_qsizetype_QString(void *thisObj, qsizetype i,
                                          const char *s_) {
  const auto s = QString::fromUtf8(s_);
  const auto &result = &fromPtr(thisObj)->insert(i, s);
  free((char *)s_);
  return result;
}
// insert(qsizetype i, const char * s)
void *c_QString__insert_qsizetype_char(void *thisObj, qsizetype i,
                                       const char *s) {
  const auto &result = &fromPtr(thisObj)->insert(i, s);
  free((char *)s);
  return result;
}
// isDetached() const
bool c_QString__isDetached(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isDetached();
  return result;
}
// isEmpty() const
bool c_QString__isEmpty(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isEmpty();
  return result;
}
// isLower() const
bool c_QString__isLower(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isLower();
  return result;
}
// isNull() const
bool c_QString__isNull(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isNull();
  return result;
}
// isRightToLeft() const
bool c_QString__isRightToLeft(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isRightToLeft();
  return result;
}
// isSharedWith(const QString & other) const
bool c_QString__isSharedWith_QString(void *thisObj, const char *other_) {
  const auto other = QString::fromUtf8(other_);
  const auto &result = fromPtr(thisObj)->isSharedWith(other);
  free((char *)other_);
  return result;
}
// isSimpleText() const
bool c_QString__isSimpleText(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isSimpleText();
  return result;
}
// isUpper() const
bool c_QString__isUpper(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isUpper();
  return result;
}
// isValidUtf16() const
bool c_QString__isValidUtf16(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isValidUtf16();
  return result;
}
// last(qsizetype n) const
void *c_QString__last_qsizetype(void *thisObj, qsizetype n) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->last(n)};
  return result;
}
// lastIndexOf(const QString & s) const
qsizetype c_QString__lastIndexOf_QString(void *thisObj, const char *s_) {
  const auto s = QString::fromUtf8(s_);
  const auto &result = fromPtr(thisObj)->lastIndexOf(s);
  free((char *)s_);
  return result;
}
// lastIndexOf(const QString & s, qsizetype from) const
qsizetype c_QString__lastIndexOf_QString_qsizetype(void *thisObj,
                                                   const char *s_,
                                                   qsizetype from) {
  const auto s = QString::fromUtf8(s_);
  const auto &result = fromPtr(thisObj)->lastIndexOf(s, from);
  free((char *)s_);
  return result;
}
// left(qsizetype n) const
void *c_QString__left_qsizetype(void *thisObj, qsizetype n) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->left(n)};
  return result;
}
// leftJustified(qsizetype width) const
void *c_QString__leftJustified_qsizetype(void *thisObj, qsizetype width) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      fromPtr(thisObj)->leftJustified(width)};
  return result;
}
// length() const
qsizetype c_QString__length(void *thisObj) {
  const auto &result = fromPtr(thisObj)->length();
  return result;
}
// localeAwareCompare(const QString & s) const
int c_QString__localeAwareCompare_QString(void *thisObj, const char *s_) {
  const auto s = QString::fromUtf8(s_);
  const auto &result = fromPtr(thisObj)->localeAwareCompare(s);
  free((char *)s_);
  return result;
}
// localeAwareCompare(const QString & s1, const QString & s2)
int c_static_QString__localeAwareCompare_QString_QString(const char *s1_,
                                                         const char *s2_) {
  const auto s1 = QString::fromUtf8(s1_);
  const auto s2 = QString::fromUtf8(s2_);
  const auto &result =
      QtDartBindings_wrappersNS::QString_wrapper::localeAwareCompare(s1, s2);
  free((char *)s1_);
  free((char *)s2_);
  return result;
}
// mid(qsizetype position, qsizetype n) const
void *c_QString__mid_qsizetype_qsizetype(void *thisObj, qsizetype position,
                                         qsizetype n) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->mid(position, n)};
  return result;
}
// number(int arg__1, int base)
void *c_static_QString__number_int_int(int arg__1, int base) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QString_wrapper::number(arg__1, base)};
  return result;
}
// number(long arg__1, int base)
void *c_static_QString__number_long_int(long arg__1, int base) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QString_wrapper::number(arg__1, base)};
  return result;
}
// number(qint64 arg__1, int base)
void *c_static_QString__number_qint64_int(qint64 arg__1, int base) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QString_wrapper::number(arg__1, base)};
  return result;
}
// prepend(const QByteArray & s)
void *c_QString__prepend_QByteArray(void *thisObj, void *s_) {
  assert(s_);
  auto &s = *reinterpret_cast<QByteArray *>(s_);
  const auto &result = &fromPtr(thisObj)->prepend(s);
  return result;
}
// prepend(const QString & s)
void *c_QString__prepend_QString(void *thisObj, const char *s_) {
  const auto s = QString::fromUtf8(s_);
  const auto &result = &fromPtr(thisObj)->prepend(s);
  free((char *)s_);
  return result;
}
// prepend(const char * s)
void *c_QString__prepend_char(void *thisObj, const char *s) {
  const auto &result = &fromPtr(thisObj)->prepend(s);
  free((char *)s);
  return result;
}
// push_back(const QString & s)
void c_QString__push_back_QString(void *thisObj, const char *s_) {
  const auto s = QString::fromUtf8(s_);
  fromPtr(thisObj)->push_back(s);
  free((char *)s_);
}
// push_front(const QString & s)
void c_QString__push_front_QString(void *thisObj, const char *s_) {
  const auto s = QString::fromUtf8(s_);
  fromPtr(thisObj)->push_front(s);
  free((char *)s_);
}
// remove(const QString & s)
void *c_QString__remove_QString(void *thisObj, const char *s_) {
  const auto s = QString::fromUtf8(s_);
  const auto &result = &fromPtr(thisObj)->remove(s);
  free((char *)s_);
  return result;
}
// remove(qsizetype i, qsizetype len)
void *c_QString__remove_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                            qsizetype len) {
  const auto &result = &fromPtr(thisObj)->remove(i, len);
  return result;
}
// repeated(qsizetype times) const
void *c_QString__repeated_qsizetype(void *thisObj, qsizetype times) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->repeated(times)};
  return result;
}
// replace(const QString & before, const QString & after)
void *c_QString__replace_QString_QString(void *thisObj, const char *before_,
                                         const char *after_) {
  const auto before = QString::fromUtf8(before_);
  const auto after = QString::fromUtf8(after_);
  const auto &result = &fromPtr(thisObj)->replace(before, after);
  free((char *)before_);
  free((char *)after_);
  return result;
}
// replace(qsizetype i, qsizetype len, const QString & after)
void *c_QString__replace_qsizetype_qsizetype_QString(void *thisObj, qsizetype i,
                                                     qsizetype len,
                                                     const char *after_) {
  const auto after = QString::fromUtf8(after_);
  const auto &result = &fromPtr(thisObj)->replace(i, len, after);
  free((char *)after_);
  return result;
}
// reserve(qsizetype size)
void c_QString__reserve_qsizetype(void *thisObj, qsizetype size) {
  fromPtr(thisObj)->reserve(size);
}
// resize(qsizetype size)
void c_QString__resize_qsizetype(void *thisObj, qsizetype size) {
  fromPtr(thisObj)->resize(size);
}
// right(qsizetype n) const
void *c_QString__right_qsizetype(void *thisObj, qsizetype n) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->right(n)};
  return result;
}
// rightJustified(qsizetype width) const
void *c_QString__rightJustified_qsizetype(void *thisObj, qsizetype width) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      fromPtr(thisObj)->rightJustified(width)};
  return result;
}
// section(const QString & in_sep, qsizetype start, qsizetype end) const
void *c_QString__section_QString_qsizetype_qsizetype(void *thisObj,
                                                     const char *in_sep_,
                                                     qsizetype start,
                                                     qsizetype end) {
  const auto in_sep = QString::fromUtf8(in_sep_);
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      fromPtr(thisObj)->section(in_sep, start, end)};
  free((char *)in_sep_);
  return result;
}
// setNum(int arg__1, int base)
void *c_QString__setNum_int_int(void *thisObj, int arg__1, int base) {
  const auto &result = &fromPtr(thisObj)->setNum(arg__1, base);
  return result;
}
// setNum(long arg__1, int base)
void *c_QString__setNum_long_int(void *thisObj, long arg__1, int base) {
  const auto &result = &fromPtr(thisObj)->setNum(arg__1, base);
  return result;
}
// setNum(qint64 arg__1, int base)
void *c_QString__setNum_qint64_int(void *thisObj, qint64 arg__1, int base) {
  const auto &result = &fromPtr(thisObj)->setNum(arg__1, base);
  return result;
}
// setNum(short arg__1, int base)
void *c_QString__setNum_short_int(void *thisObj, short arg__1, int base) {
  const auto &result = &fromPtr(thisObj)->setNum(arg__1, base);
  return result;
}
// shrink_to_fit()
void c_QString__shrink_to_fit(void *thisObj) {
  fromPtr(thisObj)->shrink_to_fit();
}
// simplified()
void *c_QString__simplified(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->simplified()};
  return result;
}
// size() const
qsizetype c_QString__size(void *thisObj) {
  const auto &result = fromPtr(thisObj)->size();
  return result;
}
// sliced(qsizetype pos) const
void *c_QString__sliced_qsizetype(void *thisObj, qsizetype pos) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->sliced(pos)};
  return result;
}
// sliced(qsizetype pos, qsizetype n) const
void *c_QString__sliced_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                            qsizetype n) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->sliced(pos, n)};
  return result;
}
// split(const QString & sep) const
void *c_QString__split_QString(void *thisObj, const char *sep_) {
  const auto sep = QString::fromUtf8(sep_);
  const auto &result =
      new Dartagnan::ValueWrapper<QList<QString>>{fromPtr(thisObj)->split(sep)};
  free((char *)sep_);
  return result;
}
// squeeze()
void c_QString__squeeze(void *thisObj) { fromPtr(thisObj)->squeeze(); }
// startsWith(const QString & s) const
bool c_QString__startsWith_QString(void *thisObj, const char *s_) {
  const auto s = QString::fromUtf8(s_);
  const auto &result = fromPtr(thisObj)->startsWith(s);
  free((char *)s_);
  return result;
}
// toCaseFolded()
void *c_QString__toCaseFolded(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->toCaseFolded()};
  return result;
}
// toHtmlEscaped() const
void *c_QString__toHtmlEscaped(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->toHtmlEscaped()};
  return result;
}
// toLatin1()
void *c_QString__toLatin1(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->toLatin1()};
  return result;
}
// toLocal8Bit()
void *c_QString__toLocal8Bit(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->toLocal8Bit()};
  return result;
}
// toLower()
void *c_QString__toLower(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->toLower()};
  return result;
}
// toUcs4() const
void *c_QString__toUcs4(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<unsigned int>>{
      fromPtr(thisObj)->toUcs4()};
  return result;
}
// toUpper()
void *c_QString__toUpper(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->toUpper()};
  return result;
}
// toUtf8()
void *c_QString__toUtf8(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->toUtf8()};
  return result;
}
// trimmed()
void *c_QString__trimmed(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->trimmed()};
  return result;
}
// truncate(qsizetype pos)
void c_QString__truncate_qsizetype(void *thisObj, qsizetype pos) {
  fromPtr(thisObj)->truncate(pos);
}
void c_QString__destructor(void *thisObj) { delete fromPtr(thisObj); }
}
