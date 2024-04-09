#include "QByteArray_wrapper.h"

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
QByteArray_wrapper::QByteArray_wrapper() : ::QByteArray() {}

// tag=1006
QByteArray_wrapper::QByteArray_wrapper(const char *arg__1, qsizetype size)
    : ::QByteArray(arg__1, size) {}
QByteArray &QByteArray_wrapper::append(const QByteArray &a) {
  // tag=1000

  // tag=1004
  return ::QByteArray::append(a);
}
QByteArray &QByteArray_wrapper::append(const char *s) {
  // tag=1000

  // tag=1004
  return ::QByteArray::append(s);
}
QByteArray &QByteArray_wrapper::append(const char *s, qsizetype len) {
  // tag=1000

  // tag=1004
  return ::QByteArray::append(s, len);
}
char QByteArray_wrapper::at(qsizetype i) const {
  // tag=1000

  // tag=1004
  return ::QByteArray::at(i);
}
qsizetype QByteArray_wrapper::capacity() const {
  // tag=1000

  // tag=1004
  return ::QByteArray::capacity();
}
const char *QByteArray_wrapper::cbegin() const {
  // tag=1000

  // tag=1004
  return ::QByteArray::cbegin();
}
const char *QByteArray_wrapper::cend() const {
  // tag=1000

  // tag=1004
  return ::QByteArray::cend();
}
void QByteArray_wrapper::chop(qsizetype n) {
  // tag=1000

  // tag=1004
  ::QByteArray::chop(n);
}
QByteArray QByteArray_wrapper::chopped(qsizetype len) const {
  // tag=1000

  // tag=1004
  return ::QByteArray::chopped(len);
}
void QByteArray_wrapper::clear() {
  // tag=1000

  // tag=1004
  ::QByteArray::clear();
}
const char *QByteArray_wrapper::constBegin() const {
  // tag=1000

  // tag=1004
  return ::QByteArray::constBegin();
}
const char *QByteArray_wrapper::constData() const {
  // tag=1000

  // tag=1004
  return ::QByteArray::constData();
}
const char *QByteArray_wrapper::constEnd() const {
  // tag=1000

  // tag=1004
  return ::QByteArray::constEnd();
}
qsizetype QByteArray_wrapper::count() const {
  // tag=1000

  // tag=1004
  return ::QByteArray::count();
}
void QByteArray_wrapper::detach() {
  // tag=1000

  // tag=1004
  ::QByteArray::detach();
}
QByteArray QByteArray_wrapper::first(qsizetype n) const {
  // tag=1000

  // tag=1004
  return ::QByteArray::first(n);
}
QByteArray QByteArray_wrapper::fromBase64(const QByteArray &base64) {
  // tag=1000

  // tag=1004
  return ::QByteArray::fromBase64(base64);
}
QByteArray QByteArray_wrapper::fromHex(const QByteArray &hexEncoded) {
  // tag=1000

  // tag=1004
  return ::QByteArray::fromHex(hexEncoded);
}
QByteArray QByteArray_wrapper::fromRawData(const char *data, qsizetype size) {
  // tag=1000

  // tag=1004
  return ::QByteArray::fromRawData(data, size);
}
QByteArray &QByteArray_wrapper::insert(qsizetype i, const QByteArray &data) {
  // tag=1000

  // tag=1004
  return ::QByteArray::insert(i, data);
}
QByteArray &QByteArray_wrapper::insert(qsizetype i, const char *s) {
  // tag=1000

  // tag=1004
  return ::QByteArray::insert(i, s);
}
QByteArray &QByteArray_wrapper::insert(qsizetype i, const char *s,
                                       qsizetype len) {
  // tag=1000

  // tag=1004
  return ::QByteArray::insert(i, s, len);
}
bool QByteArray_wrapper::isDetached() const {
  // tag=1000

  // tag=1004
  return ::QByteArray::isDetached();
}
bool QByteArray_wrapper::isEmpty() const {
  // tag=1000

  // tag=1004
  return ::QByteArray::isEmpty();
}
bool QByteArray_wrapper::isLower() const {
  // tag=1000

  // tag=1004
  return ::QByteArray::isLower();
}
bool QByteArray_wrapper::isNull() const {
  // tag=1000

  // tag=1004
  return ::QByteArray::isNull();
}
bool QByteArray_wrapper::isSharedWith(const QByteArray &other) const {
  // tag=1000

  // tag=1004
  return ::QByteArray::isSharedWith(other);
}
bool QByteArray_wrapper::isUpper() const {
  // tag=1000

  // tag=1004
  return ::QByteArray::isUpper();
}
bool QByteArray_wrapper::isValidUtf8() const {
  // tag=1000

  // tag=1004
  return ::QByteArray::isValidUtf8();
}
QByteArray QByteArray_wrapper::last(qsizetype n) const {
  // tag=1000

  // tag=1004
  return ::QByteArray::last(n);
}
QByteArray QByteArray_wrapper::left(qsizetype len) const {
  // tag=1000

  // tag=1004
  return ::QByteArray::left(len);
}
qsizetype QByteArray_wrapper::length() const {
  // tag=1000

  // tag=1004
  return ::QByteArray::length();
}
QByteArray QByteArray_wrapper::mid(qsizetype index, qsizetype len) const {
  // tag=1000

  // tag=1004
  return ::QByteArray::mid(index, len);
}
QByteArray QByteArray_wrapper::number(int arg__1, int base) {
  // tag=1000

  // tag=1004
  return ::QByteArray::number(arg__1, base);
}
QByteArray QByteArray_wrapper::number(long arg__1, int base) {
  // tag=1000

  // tag=1004
  return ::QByteArray::number(arg__1, base);
}
QByteArray QByteArray_wrapper::number(qint64 arg__1, int base) {
  // tag=1000

  // tag=1004
  return ::QByteArray::number(arg__1, base);
}
QByteArray &QByteArray_wrapper::prepend(const QByteArray &a) {
  // tag=1000

  // tag=1004
  return ::QByteArray::prepend(a);
}
QByteArray &QByteArray_wrapper::prepend(const char *s) {
  // tag=1000

  // tag=1004
  return ::QByteArray::prepend(s);
}
QByteArray &QByteArray_wrapper::prepend(const char *s, qsizetype len) {
  // tag=1000

  // tag=1004
  return ::QByteArray::prepend(s, len);
}
void QByteArray_wrapper::push_back(const QByteArray &a) {
  // tag=1000

  // tag=1004
  ::QByteArray::push_back(a);
}
void QByteArray_wrapper::push_back(const char *s) {
  // tag=1000

  // tag=1004
  ::QByteArray::push_back(s);
}
void QByteArray_wrapper::push_front(const QByteArray &a) {
  // tag=1000

  // tag=1004
  ::QByteArray::push_front(a);
}
void QByteArray_wrapper::push_front(const char *c) {
  // tag=1000

  // tag=1004
  ::QByteArray::push_front(c);
}
QByteArray &QByteArray_wrapper::remove(qsizetype index, qsizetype len) {
  // tag=1000

  // tag=1004
  return ::QByteArray::remove(index, len);
}
QByteArray QByteArray_wrapper::repeated(qsizetype times) const {
  // tag=1000

  // tag=1004
  return ::QByteArray::repeated(times);
}
QByteArray &QByteArray_wrapper::replace(const char *before, qsizetype bsize,
                                        const char *after, qsizetype asize) {
  // tag=1000

  // tag=1004
  return ::QByteArray::replace(before, bsize, after, asize);
}
QByteArray &QByteArray_wrapper::replace(qsizetype index, qsizetype len,
                                        const char *s, qsizetype alen) {
  // tag=1000

  // tag=1004
  return ::QByteArray::replace(index, len, s, alen);
}
void QByteArray_wrapper::reserve(qsizetype size) {
  // tag=1000

  // tag=1004
  ::QByteArray::reserve(size);
}
void QByteArray_wrapper::resize(qsizetype size) {
  // tag=1000

  // tag=1004
  ::QByteArray::resize(size);
}
QByteArray QByteArray_wrapper::right(qsizetype len) const {
  // tag=1000

  // tag=1004
  return ::QByteArray::right(len);
}
QByteArray &QByteArray_wrapper::setNum(int arg__1, int base) {
  // tag=1000

  // tag=1004
  return ::QByteArray::setNum(arg__1, base);
}
QByteArray &QByteArray_wrapper::setNum(long arg__1, int base) {
  // tag=1000

  // tag=1004
  return ::QByteArray::setNum(arg__1, base);
}
QByteArray &QByteArray_wrapper::setNum(qint64 arg__1, int base) {
  // tag=1000

  // tag=1004
  return ::QByteArray::setNum(arg__1, base);
}
QByteArray &QByteArray_wrapper::setNum(short arg__1, int base) {
  // tag=1000

  // tag=1004
  return ::QByteArray::setNum(arg__1, base);
}
QByteArray &QByteArray_wrapper::setRawData(const char *a, qsizetype n) {
  // tag=1000

  // tag=1004
  return ::QByteArray::setRawData(a, n);
}
void QByteArray_wrapper::shrink_to_fit() {
  // tag=1000

  // tag=1004
  ::QByteArray::shrink_to_fit();
}
QByteArray QByteArray_wrapper::simplified() {
  // tag=1000

  // tag=1004
  return ::QByteArray::simplified();
}
qsizetype QByteArray_wrapper::size() const {
  // tag=1000

  // tag=1004
  return ::QByteArray::size();
}
QByteArray QByteArray_wrapper::sliced(qsizetype pos) const {
  // tag=1000

  // tag=1004
  return ::QByteArray::sliced(pos);
}
QByteArray QByteArray_wrapper::sliced(qsizetype pos, qsizetype n) const {
  // tag=1000

  // tag=1004
  return ::QByteArray::sliced(pos, n);
}
void QByteArray_wrapper::squeeze() {
  // tag=1000

  // tag=1004
  ::QByteArray::squeeze();
}
QByteArray QByteArray_wrapper::toBase64() const {
  // tag=1000

  // tag=1004
  return ::QByteArray::toBase64();
}
QByteArray QByteArray_wrapper::toLower() {
  // tag=1000

  // tag=1004
  return ::QByteArray::toLower();
}
QByteArray QByteArray_wrapper::toUpper() {
  // tag=1000

  // tag=1004
  return ::QByteArray::toUpper();
}
QByteArray QByteArray_wrapper::trimmed() {
  // tag=1000

  // tag=1004
  return ::QByteArray::trimmed();
}
void QByteArray_wrapper::truncate(qsizetype pos) {
  // tag=1000

  // tag=1004
  ::QByteArray::truncate(pos);
}

// tag=1005
QByteArray_wrapper::~QByteArray_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QByteArray *fromPtr(void *ptr) {
  return reinterpret_cast<QByteArray *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QByteArray_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QByteArray_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QByteArray_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QByteArray_wrapper *>(
      cppObj);
}
void *c_QByteArray__constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QByteArray_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QByteArray__constructor_char_qsizetype(const char *arg__1,
                                               qsizetype size) {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QByteArray_wrapper(arg__1, size);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// append(const QByteArray & a)
void *c_QByteArray__append_QByteArray(void *thisObj, void *a_) {
  auto &a = *reinterpret_cast<QByteArray *>(a_);
  return
      // tag=1010

      // tag=1070
      &fromPtr(thisObj)->append(a);
}

// tag=1050
// append(const char * s)
void *c_QByteArray__append_char(void *thisObj, const char *s) {
  return
      // tag=1010

      // tag=1070
      &fromPtr(thisObj)->append(s);
}

// tag=1050
// append(const char * s, qsizetype len)
void *c_QByteArray__append_char_qsizetype(void *thisObj, const char *s,
                                          qsizetype len) {
  return
      // tag=1010

      // tag=1070
      &fromPtr(thisObj)->append(s, len);
}

// tag=1050
// at(qsizetype i) const
char c_QByteArray__at_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010
      fromPtr(thisObj)->at(i);
}

// tag=1050
// capacity() const
qsizetype c_QByteArray__capacity(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->capacity();
}

// tag=1050
// cbegin() const
const char *c_QByteArray__cbegin(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->cbegin();
}

// tag=1050
// cend() const
const char *c_QByteArray__cend(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->cend();
}

// tag=1050
// chop(qsizetype n)
void c_QByteArray__chop_qsizetype(void *thisObj, qsizetype n) {
  // tag=1010
  fromPtr(thisObj)->chop(n);
}

// tag=1050
// chopped(qsizetype len) const
void *c_QByteArray__chopped_qsizetype(void *thisObj, qsizetype len) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->chopped(len)};
}

// tag=1050
// clear()
void c_QByteArray__clear(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->clear();
}

// tag=1050
// constBegin() const
const char *c_QByteArray__constBegin(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->constBegin();
}

// tag=1050
// constData() const
const char *c_QByteArray__constData(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->constData();
}

// tag=1050
// constEnd() const
const char *c_QByteArray__constEnd(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->constEnd();
}

// tag=1050
// count() const
qsizetype c_QByteArray__count(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->count();
}

// tag=1050
// detach()
void c_QByteArray__detach(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->detach();
}

// tag=1050
// first(qsizetype n) const
void *c_QByteArray__first_qsizetype(void *thisObj, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->first(n)};
}

// tag=1050
// fromBase64(const QByteArray & base64)
void *c_static_QByteArray__fromBase64_QByteArray(void *base64_) {
  auto &base64 = *reinterpret_cast<QByteArray *>(base64_);
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{
          QtDartBindings_wrappersNS::QByteArray_wrapper::fromBase64(base64)};
}

// tag=1050
// fromHex(const QByteArray & hexEncoded)
void *c_static_QByteArray__fromHex_QByteArray(void *hexEncoded_) {
  auto &hexEncoded = *reinterpret_cast<QByteArray *>(hexEncoded_);
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{
          QtDartBindings_wrappersNS::QByteArray_wrapper::fromHex(hexEncoded)};
}

// tag=1050
// fromRawData(const char * data, qsizetype size)
void *c_static_QByteArray__fromRawData_char_qsizetype(const char *data,
                                                      qsizetype size) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{
          QtDartBindings_wrappersNS::QByteArray_wrapper::fromRawData(data,
                                                                     size)};
}

// tag=1050
// insert(qsizetype i, const QByteArray & data)
void *c_QByteArray__insert_qsizetype_QByteArray(void *thisObj, qsizetype i,
                                                void *data_) {
  auto &data = *reinterpret_cast<QByteArray *>(data_);
  return
      // tag=1010

      // tag=1070
      &fromPtr(thisObj)->insert(i, data);
}

// tag=1050
// insert(qsizetype i, const char * s)
void *c_QByteArray__insert_qsizetype_char(void *thisObj, qsizetype i,
                                          const char *s) {
  return
      // tag=1010

      // tag=1070
      &fromPtr(thisObj)->insert(i, s);
}

// tag=1050
// insert(qsizetype i, const char * s, qsizetype len)
void *c_QByteArray__insert_qsizetype_char_qsizetype(void *thisObj, qsizetype i,
                                                    const char *s,
                                                    qsizetype len) {
  return
      // tag=1010

      // tag=1070
      &fromPtr(thisObj)->insert(i, s, len);
}

// tag=1050
// isDetached() const
bool c_QByteArray__isDetached(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isDetached();
}

// tag=1050
// isEmpty() const
bool c_QByteArray__isEmpty(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isEmpty();
}

// tag=1050
// isLower() const
bool c_QByteArray__isLower(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isLower();
}

// tag=1050
// isNull() const
bool c_QByteArray__isNull(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isNull();
}

// tag=1050
// isSharedWith(const QByteArray & other) const
bool c_QByteArray__isSharedWith_QByteArray(void *thisObj, void *other_) {
  auto &other = *reinterpret_cast<QByteArray *>(other_);
  return
      // tag=1010
      fromPtr(thisObj)->isSharedWith(other);
}

// tag=1050
// isUpper() const
bool c_QByteArray__isUpper(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isUpper();
}

// tag=1050
// isValidUtf8() const
bool c_QByteArray__isValidUtf8(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isValidUtf8();
}

// tag=1050
// last(qsizetype n) const
void *c_QByteArray__last_qsizetype(void *thisObj, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->last(n)};
}

// tag=1050
// left(qsizetype len) const
void *c_QByteArray__left_qsizetype(void *thisObj, qsizetype len) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->left(len)};
}

// tag=1050
// length() const
qsizetype c_QByteArray__length(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->length();
}

// tag=1050
// mid(qsizetype index, qsizetype len) const
void *c_QByteArray__mid_qsizetype_qsizetype(void *thisObj, qsizetype index,
                                            qsizetype len) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{
          fromPtr(thisObj)->mid(index, len)};
}

// tag=1050
// number(int arg__1, int base)
void *c_static_QByteArray__number_int_int(int arg__1, int base) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{
          QtDartBindings_wrappersNS::QByteArray_wrapper::number(arg__1, base)};
}

// tag=1050
// number(long arg__1, int base)
void *c_static_QByteArray__number_long_int(long arg__1, int base) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{
          QtDartBindings_wrappersNS::QByteArray_wrapper::number(arg__1, base)};
}

// tag=1050
// number(qint64 arg__1, int base)
void *c_static_QByteArray__number_qint64_int(qint64 arg__1, int base) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{
          QtDartBindings_wrappersNS::QByteArray_wrapper::number(arg__1, base)};
}

// tag=1050
// prepend(const QByteArray & a)
void *c_QByteArray__prepend_QByteArray(void *thisObj, void *a_) {
  auto &a = *reinterpret_cast<QByteArray *>(a_);
  return
      // tag=1010

      // tag=1070
      &fromPtr(thisObj)->prepend(a);
}

// tag=1050
// prepend(const char * s)
void *c_QByteArray__prepend_char(void *thisObj, const char *s) {
  return
      // tag=1010

      // tag=1070
      &fromPtr(thisObj)->prepend(s);
}

// tag=1050
// prepend(const char * s, qsizetype len)
void *c_QByteArray__prepend_char_qsizetype(void *thisObj, const char *s,
                                           qsizetype len) {
  return
      // tag=1010

      // tag=1070
      &fromPtr(thisObj)->prepend(s, len);
}

// tag=1050
// push_back(const QByteArray & a)
void c_QByteArray__push_back_QByteArray(void *thisObj, void *a_) {
  auto &a = *reinterpret_cast<QByteArray *>(a_);
  // tag=1010
  fromPtr(thisObj)->push_back(a);
}

// tag=1050
// push_back(const char * s)
void c_QByteArray__push_back_char(void *thisObj, const char *s) {
  // tag=1010
  fromPtr(thisObj)->push_back(s);
}

// tag=1050
// push_front(const QByteArray & a)
void c_QByteArray__push_front_QByteArray(void *thisObj, void *a_) {
  auto &a = *reinterpret_cast<QByteArray *>(a_);
  // tag=1010
  fromPtr(thisObj)->push_front(a);
}

// tag=1050
// push_front(const char * c)
void c_QByteArray__push_front_char(void *thisObj, const char *c) {
  // tag=1010
  fromPtr(thisObj)->push_front(c);
}

// tag=1050
// remove(qsizetype index, qsizetype len)
void *c_QByteArray__remove_qsizetype_qsizetype(void *thisObj, qsizetype index,
                                               qsizetype len) {
  return
      // tag=1010

      // tag=1070
      &fromPtr(thisObj)->remove(index, len);
}

// tag=1050
// repeated(qsizetype times) const
void *c_QByteArray__repeated_qsizetype(void *thisObj, qsizetype times) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{
          fromPtr(thisObj)->repeated(times)};
}

// tag=1050
// replace(const char * before, qsizetype bsize, const char * after, qsizetype
// asize)
void *c_QByteArray__replace_char_qsizetype_char_qsizetype(void *thisObj,
                                                          const char *before,
                                                          qsizetype bsize,
                                                          const char *after,
                                                          qsizetype asize) {
  return
      // tag=1010

      // tag=1070
      &fromPtr(thisObj)->replace(before, bsize, after, asize);
}

// tag=1050
// replace(qsizetype index, qsizetype len, const char * s, qsizetype alen)
void *c_QByteArray__replace_qsizetype_qsizetype_char_qsizetype(void *thisObj,
                                                               qsizetype index,
                                                               qsizetype len,
                                                               const char *s,
                                                               qsizetype alen) {
  return
      // tag=1010

      // tag=1070
      &fromPtr(thisObj)->replace(index, len, s, alen);
}

// tag=1050
// reserve(qsizetype size)
void c_QByteArray__reserve_qsizetype(void *thisObj, qsizetype size) {
  // tag=1010
  fromPtr(thisObj)->reserve(size);
}

// tag=1050
// resize(qsizetype size)
void c_QByteArray__resize_qsizetype(void *thisObj, qsizetype size) {
  // tag=1010
  fromPtr(thisObj)->resize(size);
}

// tag=1050
// right(qsizetype len) const
void *c_QByteArray__right_qsizetype(void *thisObj, qsizetype len) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->right(len)};
}

// tag=1050
// setNum(int arg__1, int base)
void *c_QByteArray__setNum_int_int(void *thisObj, int arg__1, int base) {
  return
      // tag=1010

      // tag=1070
      &fromPtr(thisObj)->setNum(arg__1, base);
}

// tag=1050
// setNum(long arg__1, int base)
void *c_QByteArray__setNum_long_int(void *thisObj, long arg__1, int base) {
  return
      // tag=1010

      // tag=1070
      &fromPtr(thisObj)->setNum(arg__1, base);
}

// tag=1050
// setNum(qint64 arg__1, int base)
void *c_QByteArray__setNum_qint64_int(void *thisObj, qint64 arg__1, int base) {
  return
      // tag=1010

      // tag=1070
      &fromPtr(thisObj)->setNum(arg__1, base);
}

// tag=1050
// setNum(short arg__1, int base)
void *c_QByteArray__setNum_short_int(void *thisObj, short arg__1, int base) {
  return
      // tag=1010

      // tag=1070
      &fromPtr(thisObj)->setNum(arg__1, base);
}

// tag=1050
// setRawData(const char * a, qsizetype n)
void *c_QByteArray__setRawData_char_qsizetype(void *thisObj, const char *a,
                                              qsizetype n) {
  return
      // tag=1010

      // tag=1070
      &fromPtr(thisObj)->setRawData(a, n);
}

// tag=1050
// shrink_to_fit()
void c_QByteArray__shrink_to_fit(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->shrink_to_fit();
}

// tag=1050
// simplified()
void *c_QByteArray__simplified(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->simplified()};
}

// tag=1050
// size() const
qsizetype c_QByteArray__size(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->size();
}

// tag=1050
// sliced(qsizetype pos) const
void *c_QByteArray__sliced_qsizetype(void *thisObj, qsizetype pos) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->sliced(pos)};
}

// tag=1050
// sliced(qsizetype pos, qsizetype n) const
void *c_QByteArray__sliced_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                               qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->sliced(pos, n)};
}

// tag=1050
// squeeze()
void c_QByteArray__squeeze(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->squeeze();
}

// tag=1050
// toBase64() const
void *c_QByteArray__toBase64(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->toBase64()};
}

// tag=1050
// toLower()
void *c_QByteArray__toLower(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->toLower()};
}

// tag=1050
// toUpper()
void *c_QByteArray__toUpper(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->toUpper()};
}

// tag=1050
// trimmed()
void *c_QByteArray__trimmed(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->trimmed()};
}

// tag=1050
// truncate(qsizetype pos)
void c_QByteArray__truncate_qsizetype(void *thisObj, qsizetype pos) {
  // tag=1010
  fromPtr(thisObj)->truncate(pos);
}
void c_QByteArray__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
}
