
// tag=1040
#include "QtDartBindings_exports.h"
#include <qbytearray.h>
#include <qlist.h>
#include <qstring.h>

namespace QtDartBindings_wrappersNS {
// tag=1043
class QByteArray_wrapper : public ::QByteArray {
public:
  ~QByteArray_wrapper();
  // tag=1041
  QByteArray_wrapper();
  // tag=1041
  QByteArray_wrapper(const char *arg__1, qsizetype size = -1);
  // tag=1041
  QByteArray &append(const QByteArray &a);
  // tag=1041
  QByteArray &append(const char *s);
  // tag=1041
  QByteArray &append(const char *s, qsizetype len);
  // tag=1041
  char at(qsizetype i) const;
  // tag=1041
  char back() const;
  // tag=1041
  const char *begin() const;
  // tag=1041
  qsizetype capacity() const;
  // tag=1041
  const char *cbegin() const;
  // tag=1041
  const char *cend() const;
  // tag=1041
  void chop(qsizetype n);
  // tag=1041
  QByteArray chopped(qsizetype len) const;
  // tag=1041
  void clear();
  // tag=1041
  const char *constBegin() const;
  // tag=1041
  const char *constData() const;
  // tag=1041
  const char *constEnd() const;
  // tag=1041
  qsizetype count() const;
  // tag=1041
  const char *data() const;
  // tag=1041
  void detach();
  // tag=1041
  const char *end() const;
  // tag=1041
  QByteArray first(qsizetype n) const;
  // tag=1041
  static QByteArray fromBase64(const QByteArray &base64);
  // tag=1041
  static QByteArray fromHex(const QByteArray &hexEncoded);
  // tag=1041
  static QByteArray fromRawData(const char *data, qsizetype size);
  // tag=1041
  char front() const;
  // tag=1041
  QByteArray &insert(qsizetype i, const QByteArray &data);
  // tag=1041
  QByteArray &insert(qsizetype i, const char *s);
  // tag=1041
  QByteArray &insert(qsizetype i, const char *s, qsizetype len);
  // tag=1041
  bool isDetached() const;
  // tag=1041
  bool isEmpty() const;
  // tag=1041
  bool isLower() const;
  // tag=1041
  bool isNull() const;
  // tag=1041
  bool isSharedWith(const QByteArray &other) const;
  // tag=1041
  bool isUpper() const;
  // tag=1041
  bool isValidUtf8() const;
  // tag=1041
  QByteArray last(qsizetype n) const;
  // tag=1041
  QByteArray left(qsizetype len) const;
  // tag=1041
  qsizetype length() const;
  // tag=1041
  QByteArray mid(qsizetype index, qsizetype len = -1) const;
  // tag=1041
  static QByteArray number(int arg__1, int base = 10);
  // tag=1041
  static QByteArray number(long arg__1, int base = 10);
  // tag=1041
  static QByteArray number(qint64 arg__1, int base = 10);
  // tag=1041
  QByteArray &prepend(const QByteArray &a);
  // tag=1041
  QByteArray &prepend(const char *s);
  // tag=1041
  QByteArray &prepend(const char *s, qsizetype len);
  // tag=1041
  void push_back(const QByteArray &a);
  // tag=1041
  void push_back(const char *s);
  // tag=1041
  void push_front(const QByteArray &a);
  // tag=1041
  void push_front(const char *c);
  // tag=1041
  QByteArray &remove(qsizetype index, qsizetype len);
  // tag=1041
  QByteArray repeated(qsizetype times) const;
  // tag=1041
  QByteArray &replace(const char *before, qsizetype bsize, const char *after,
                      qsizetype asize);
  // tag=1041
  QByteArray &replace(qsizetype index, qsizetype len, const char *s,
                      qsizetype alen);
  // tag=1041
  void reserve(qsizetype size);
  // tag=1041
  void resize(qsizetype size);
  // tag=1041
  QByteArray right(qsizetype len) const;
  // tag=1041
  QByteArray &setNum(int arg__1, int base = 10);
  // tag=1041
  QByteArray &setNum(long arg__1, int base = 10);
  // tag=1041
  QByteArray &setNum(qint64 arg__1, int base = 10);
  // tag=1041
  QByteArray &setNum(short arg__1, int base = 10);
  // tag=1041
  QByteArray &setRawData(const char *a, qsizetype n);
  // tag=1041
  void shrink_to_fit();
  // tag=1041
  QByteArray simplified();
  // tag=1041
  qsizetype size() const;
  // tag=1041
  QByteArray sliced(qsizetype pos) const;
  // tag=1041
  QByteArray sliced(qsizetype pos, qsizetype n) const;
  // tag=1041
  void squeeze();
  // tag=1041
  QByteArray toBase64() const;
  // tag=1041
  QByteArray toLower();
  // tag=1041
  QByteArray toUpper();
  // tag=1041
  QByteArray trimmed();
  // tag=1041
  void truncate(qsizetype pos);
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QByteArray::QByteArray()
QtDartBindings_EXPORT void *c_QByteArray__constructor();

// tag=1067
//  QByteArray::QByteArray(const char * arg__1, qsizetype size)
QtDartBindings_EXPORT void *
c_QByteArray__constructor_char_qsizetype(const char *arg__1, qsizetype size);

// tag=1067
//  QByteArray::append(const QByteArray & a)
QtDartBindings_EXPORT void *c_QByteArray__append_QByteArray(void *thisObj,
                                                            void *a_);

// tag=1067
//  QByteArray::append(const char * s)
QtDartBindings_EXPORT void *c_QByteArray__append_char(void *thisObj,
                                                      const char *s);

// tag=1067
//  QByteArray::append(const char * s, qsizetype len)
QtDartBindings_EXPORT void *c_QByteArray__append_char_qsizetype(void *thisObj,
                                                                const char *s,
                                                                qsizetype len);

// tag=1067
//  QByteArray::at(qsizetype i) const
QtDartBindings_EXPORT char c_QByteArray__at_qsizetype(void *thisObj,
                                                      qsizetype i);

// tag=1067
//  QByteArray::back() const
QtDartBindings_EXPORT char c_QByteArray__back(void *thisObj);

// tag=1067
//  QByteArray::begin() const
QtDartBindings_EXPORT const char *c_QByteArray__begin(void *thisObj);

// tag=1067
//  QByteArray::capacity() const
QtDartBindings_EXPORT qsizetype c_QByteArray__capacity(void *thisObj);

// tag=1067
//  QByteArray::cbegin() const
QtDartBindings_EXPORT const char *c_QByteArray__cbegin(void *thisObj);

// tag=1067
//  QByteArray::cend() const
QtDartBindings_EXPORT const char *c_QByteArray__cend(void *thisObj);

// tag=1067
//  QByteArray::chop(qsizetype n)
QtDartBindings_EXPORT void c_QByteArray__chop_qsizetype(void *thisObj,
                                                        qsizetype n);

// tag=1067
//  QByteArray::chopped(qsizetype len) const
QtDartBindings_EXPORT void *c_QByteArray__chopped_qsizetype(void *thisObj,
                                                            qsizetype len);

// tag=1067
//  QByteArray::clear()
QtDartBindings_EXPORT void c_QByteArray__clear(void *thisObj);

// tag=1067
//  QByteArray::constBegin() const
QtDartBindings_EXPORT const char *c_QByteArray__constBegin(void *thisObj);

// tag=1067
//  QByteArray::constData() const
QtDartBindings_EXPORT const char *c_QByteArray__constData(void *thisObj);

// tag=1067
//  QByteArray::constEnd() const
QtDartBindings_EXPORT const char *c_QByteArray__constEnd(void *thisObj);

// tag=1067
//  QByteArray::count() const
QtDartBindings_EXPORT qsizetype c_QByteArray__count(void *thisObj);

// tag=1067
//  QByteArray::data() const
QtDartBindings_EXPORT const char *c_QByteArray__data(void *thisObj);

// tag=1067
//  QByteArray::detach()
QtDartBindings_EXPORT void c_QByteArray__detach(void *thisObj);

// tag=1067
//  QByteArray::end() const
QtDartBindings_EXPORT const char *c_QByteArray__end(void *thisObj);

// tag=1067
//  QByteArray::first(qsizetype n) const
QtDartBindings_EXPORT void *c_QByteArray__first_qsizetype(void *thisObj,
                                                          qsizetype n);

// tag=1067
//  QByteArray::fromBase64(const QByteArray & base64)
QtDartBindings_EXPORT void *
c_static_QByteArray__fromBase64_QByteArray(void *base64_);

// tag=1067
//  QByteArray::fromHex(const QByteArray & hexEncoded)
QtDartBindings_EXPORT void *
c_static_QByteArray__fromHex_QByteArray(void *hexEncoded_);

// tag=1067
//  QByteArray::fromRawData(const char * data, qsizetype size)
QtDartBindings_EXPORT void *
c_static_QByteArray__fromRawData_char_qsizetype(const char *data,
                                                qsizetype size);

// tag=1067
//  QByteArray::front() const
QtDartBindings_EXPORT char c_QByteArray__front(void *thisObj);

// tag=1067
//  QByteArray::insert(qsizetype i, const QByteArray & data)
QtDartBindings_EXPORT void *
c_QByteArray__insert_qsizetype_QByteArray(void *thisObj, qsizetype i,
                                          void *data_);

// tag=1067
//  QByteArray::insert(qsizetype i, const char * s)
QtDartBindings_EXPORT void *
c_QByteArray__insert_qsizetype_char(void *thisObj, qsizetype i, const char *s);

// tag=1067
//  QByteArray::insert(qsizetype i, const char * s, qsizetype len)
QtDartBindings_EXPORT void *
c_QByteArray__insert_qsizetype_char_qsizetype(void *thisObj, qsizetype i,
                                              const char *s, qsizetype len);

// tag=1067
//  QByteArray::isDetached() const
QtDartBindings_EXPORT bool c_QByteArray__isDetached(void *thisObj);

// tag=1067
//  QByteArray::isEmpty() const
QtDartBindings_EXPORT bool c_QByteArray__isEmpty(void *thisObj);

// tag=1067
//  QByteArray::isLower() const
QtDartBindings_EXPORT bool c_QByteArray__isLower(void *thisObj);

// tag=1067
//  QByteArray::isNull() const
QtDartBindings_EXPORT bool c_QByteArray__isNull(void *thisObj);

// tag=1067
//  QByteArray::isSharedWith(const QByteArray & other) const
QtDartBindings_EXPORT bool c_QByteArray__isSharedWith_QByteArray(void *thisObj,
                                                                 void *other_);

// tag=1067
//  QByteArray::isUpper() const
QtDartBindings_EXPORT bool c_QByteArray__isUpper(void *thisObj);

// tag=1067
//  QByteArray::isValidUtf8() const
QtDartBindings_EXPORT bool c_QByteArray__isValidUtf8(void *thisObj);

// tag=1067
//  QByteArray::last(qsizetype n) const
QtDartBindings_EXPORT void *c_QByteArray__last_qsizetype(void *thisObj,
                                                         qsizetype n);

// tag=1067
//  QByteArray::left(qsizetype len) const
QtDartBindings_EXPORT void *c_QByteArray__left_qsizetype(void *thisObj,
                                                         qsizetype len);

// tag=1067
//  QByteArray::length() const
QtDartBindings_EXPORT qsizetype c_QByteArray__length(void *thisObj);

// tag=1067
//  QByteArray::mid(qsizetype index, qsizetype len) const
QtDartBindings_EXPORT void *
c_QByteArray__mid_qsizetype_qsizetype(void *thisObj, qsizetype index,
                                      qsizetype len);

// tag=1067
//  QByteArray::number(int arg__1, int base)
QtDartBindings_EXPORT void *c_static_QByteArray__number_int_int(int arg__1,
                                                                int base);

// tag=1067
//  QByteArray::number(long arg__1, int base)
QtDartBindings_EXPORT void *c_static_QByteArray__number_long_int(long arg__1,
                                                                 int base);

// tag=1067
//  QByteArray::number(qint64 arg__1, int base)
QtDartBindings_EXPORT void *
c_static_QByteArray__number_qint64_int(qint64 arg__1, int base);

// tag=1067
//  QByteArray::prepend(const QByteArray & a)
QtDartBindings_EXPORT void *c_QByteArray__prepend_QByteArray(void *thisObj,
                                                             void *a_);

// tag=1067
//  QByteArray::prepend(const char * s)
QtDartBindings_EXPORT void *c_QByteArray__prepend_char(void *thisObj,
                                                       const char *s);

// tag=1067
//  QByteArray::prepend(const char * s, qsizetype len)
QtDartBindings_EXPORT void *c_QByteArray__prepend_char_qsizetype(void *thisObj,
                                                                 const char *s,
                                                                 qsizetype len);

// tag=1067
//  QByteArray::push_back(const QByteArray & a)
QtDartBindings_EXPORT void c_QByteArray__push_back_QByteArray(void *thisObj,
                                                              void *a_);

// tag=1067
//  QByteArray::push_back(const char * s)
QtDartBindings_EXPORT void c_QByteArray__push_back_char(void *thisObj,
                                                        const char *s);

// tag=1067
//  QByteArray::push_front(const QByteArray & a)
QtDartBindings_EXPORT void c_QByteArray__push_front_QByteArray(void *thisObj,
                                                               void *a_);

// tag=1067
//  QByteArray::push_front(const char * c)
QtDartBindings_EXPORT void c_QByteArray__push_front_char(void *thisObj,
                                                         const char *c);

// tag=1067
//  QByteArray::remove(qsizetype index, qsizetype len)
QtDartBindings_EXPORT void *
c_QByteArray__remove_qsizetype_qsizetype(void *thisObj, qsizetype index,
                                         qsizetype len);

// tag=1067
//  QByteArray::repeated(qsizetype times) const
QtDartBindings_EXPORT void *c_QByteArray__repeated_qsizetype(void *thisObj,
                                                             qsizetype times);

// tag=1067
//  QByteArray::replace(const char * before, qsizetype bsize, const char *
//  after, qsizetype asize)
QtDartBindings_EXPORT void *c_QByteArray__replace_char_qsizetype_char_qsizetype(
    void *thisObj, const char *before, qsizetype bsize, const char *after,
    qsizetype asize);

// tag=1067
//  QByteArray::replace(qsizetype index, qsizetype len, const char * s,
//  qsizetype alen)
QtDartBindings_EXPORT void *
c_QByteArray__replace_qsizetype_qsizetype_char_qsizetype(void *thisObj,
                                                         qsizetype index,
                                                         qsizetype len,
                                                         const char *s,
                                                         qsizetype alen);

// tag=1067
//  QByteArray::reserve(qsizetype size)
QtDartBindings_EXPORT void c_QByteArray__reserve_qsizetype(void *thisObj,
                                                           qsizetype size);

// tag=1067
//  QByteArray::resize(qsizetype size)
QtDartBindings_EXPORT void c_QByteArray__resize_qsizetype(void *thisObj,
                                                          qsizetype size);

// tag=1067
//  QByteArray::right(qsizetype len) const
QtDartBindings_EXPORT void *c_QByteArray__right_qsizetype(void *thisObj,
                                                          qsizetype len);

// tag=1067
//  QByteArray::setNum(int arg__1, int base)
QtDartBindings_EXPORT void *c_QByteArray__setNum_int_int(void *thisObj,
                                                         int arg__1, int base);

// tag=1067
//  QByteArray::setNum(long arg__1, int base)
QtDartBindings_EXPORT void *
c_QByteArray__setNum_long_int(void *thisObj, long arg__1, int base);

// tag=1067
//  QByteArray::setNum(qint64 arg__1, int base)
QtDartBindings_EXPORT void *
c_QByteArray__setNum_qint64_int(void *thisObj, qint64 arg__1, int base);

// tag=1067
//  QByteArray::setNum(short arg__1, int base)
QtDartBindings_EXPORT void *
c_QByteArray__setNum_short_int(void *thisObj, short arg__1, int base);

// tag=1067
//  QByteArray::setRawData(const char * a, qsizetype n)
QtDartBindings_EXPORT void *
c_QByteArray__setRawData_char_qsizetype(void *thisObj, const char *a,
                                        qsizetype n);

// tag=1067
//  QByteArray::shrink_to_fit()
QtDartBindings_EXPORT void c_QByteArray__shrink_to_fit(void *thisObj);

// tag=1067
//  QByteArray::simplified()
QtDartBindings_EXPORT void *c_QByteArray__simplified(void *thisObj);

// tag=1067
//  QByteArray::size() const
QtDartBindings_EXPORT qsizetype c_QByteArray__size(void *thisObj);

// tag=1067
//  QByteArray::sliced(qsizetype pos) const
QtDartBindings_EXPORT void *c_QByteArray__sliced_qsizetype(void *thisObj,
                                                           qsizetype pos);

// tag=1067
//  QByteArray::sliced(qsizetype pos, qsizetype n) const
QtDartBindings_EXPORT void *
c_QByteArray__sliced_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                         qsizetype n);

// tag=1067
//  QByteArray::squeeze()
QtDartBindings_EXPORT void c_QByteArray__squeeze(void *thisObj);

// tag=1067
//  QByteArray::toBase64() const
QtDartBindings_EXPORT void *c_QByteArray__toBase64(void *thisObj);

// tag=1067
//  QByteArray::toLower()
QtDartBindings_EXPORT void *c_QByteArray__toLower(void *thisObj);

// tag=1067
//  QByteArray::toUpper()
QtDartBindings_EXPORT void *c_QByteArray__toUpper(void *thisObj);

// tag=1067
//  QByteArray::trimmed()
QtDartBindings_EXPORT void *c_QByteArray__trimmed(void *thisObj);

// tag=1067
//  QByteArray::truncate(qsizetype pos)
QtDartBindings_EXPORT void c_QByteArray__truncate_qsizetype(void *thisObj,
                                                            qsizetype pos);

// tag=1066
QtDartBindings_EXPORT void c_QByteArray__destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QByteArray_Finalizer(void *, void *cppObj, void *);
}
