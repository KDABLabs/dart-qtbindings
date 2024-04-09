
// tag=1040
#include "QtDartBindings_exports.h"
#include <qbytearray.h>
#include <qlist.h>
#include <qstring.h>

namespace QtDartBindings_wrappersNS {
// tag=1043
class QString_wrapper : public ::QString {
public:
  ~QString_wrapper();
  // tag=1041
  QString_wrapper();
  // tag=1041
  QString_wrapper(const QByteArray &a);
  // tag=1041
  QString_wrapper(const char *ch);
  // tag=1041
  QString &append(const QByteArray &s);
  // tag=1041
  QString &append(const QString &s);
  // tag=1041
  QString &append(const char *s);
  // tag=1041
  QString arg(const QString &a, int fieldWidth = 0) const;
  // tag=1041
  QString arg(int a, int fieldWidth = 0, int base = 10) const;
  // tag=1041
  QString arg(long a, int fieldwidth = 0, int base = 10) const;
  // tag=1041
  QString arg(qint64 a, int fieldwidth = 0, int base = 10) const;
  // tag=1041
  QString arg(short a, int fieldWidth = 0, int base = 10) const;
  // tag=1041
  static QString asprintf(const char *format);
  // tag=1041
  qsizetype capacity() const;
  // tag=1041
  void chop(qsizetype n);
  // tag=1041
  QString chopped(qsizetype n) const;
  // tag=1041
  void clear();
  // tag=1041
  int compare(const QString &s) const;
  // tag=1041
  static int compare(const QString &s1, const QString &s2);
  // tag=1041
  bool contains(const QString &s) const;
  // tag=1041
  qsizetype count() const;
  // tag=1041
  qsizetype count(const QString &s) const;
  // tag=1041
  void detach();
  // tag=1041
  bool endsWith(const QString &s) const;
  // tag=1041
  QString first(qsizetype n) const;
  // tag=1041
  static QString fromLatin1(const char *str, qsizetype size);
  // tag=1041
  static QString fromLocal8Bit(const char *str, qsizetype size);
  // tag=1041
  static QString fromUtf8(const char *utf8, qsizetype size);
  // tag=1041
  qsizetype indexOf(const QString &s, qsizetype from = 0) const;
  // tag=1041
  QString &insert(qsizetype i, const QByteArray &s);
  // tag=1041
  QString &insert(qsizetype i, const QString &s);
  // tag=1041
  QString &insert(qsizetype i, const char *s);
  // tag=1041
  bool isDetached() const;
  // tag=1041
  bool isEmpty() const;
  // tag=1041
  bool isLower() const;
  // tag=1041
  bool isNull() const;
  // tag=1041
  bool isRightToLeft() const;
  // tag=1041
  bool isSharedWith(const QString &other) const;
  // tag=1041
  bool isSimpleText() const;
  // tag=1041
  bool isUpper() const;
  // tag=1041
  bool isValidUtf16() const;
  // tag=1041
  QString last(qsizetype n) const;
  // tag=1041
  qsizetype lastIndexOf(const QString &s) const;
  // tag=1041
  qsizetype lastIndexOf(const QString &s, qsizetype from) const;
  // tag=1041
  QString left(qsizetype n) const;
  // tag=1041
  QString leftJustified(qsizetype width) const;
  // tag=1041
  qsizetype length() const;
  // tag=1041
  int localeAwareCompare(const QString &s) const;
  // tag=1041
  static int localeAwareCompare(const QString &s1, const QString &s2);
  // tag=1041
  QString mid(qsizetype position, qsizetype n = -1) const;
  // tag=1041
  static QString number(int arg__1, int base = 10);
  // tag=1041
  static QString number(long arg__1, int base = 10);
  // tag=1041
  static QString number(qint64 arg__1, int base = 10);
  // tag=1041
  QString &prepend(const QByteArray &s);
  // tag=1041
  QString &prepend(const QString &s);
  // tag=1041
  QString &prepend(const char *s);
  // tag=1041
  void push_back(const QString &s);
  // tag=1041
  void push_front(const QString &s);
  // tag=1041
  QString &remove(const QString &s);
  // tag=1041
  QString &remove(qsizetype i, qsizetype len);
  // tag=1041
  QString repeated(qsizetype times) const;
  // tag=1041
  QString &replace(const QString &before, const QString &after);
  // tag=1041
  QString &replace(qsizetype i, qsizetype len, const QString &after);
  // tag=1041
  void reserve(qsizetype size);
  // tag=1041
  void resize(qsizetype size);
  // tag=1041
  QString right(qsizetype n) const;
  // tag=1041
  QString rightJustified(qsizetype width) const;
  // tag=1041
  QString section(const QString &in_sep, qsizetype start,
                  qsizetype end = -1) const;
  // tag=1041
  QString &setNum(int arg__1, int base = 10);
  // tag=1041
  QString &setNum(long arg__1, int base = 10);
  // tag=1041
  QString &setNum(qint64 arg__1, int base = 10);
  // tag=1041
  QString &setNum(short arg__1, int base = 10);
  // tag=1041
  void shrink_to_fit();
  // tag=1041
  QString simplified();
  // tag=1041
  qsizetype size() const;
  // tag=1041
  QString sliced(qsizetype pos) const;
  // tag=1041
  QString sliced(qsizetype pos, qsizetype n) const;
  // tag=1041
  QList<QString> split(const QString &sep) const;
  // tag=1041
  void squeeze();
  // tag=1041
  bool startsWith(const QString &s) const;
  // tag=1041
  QString toCaseFolded();
  // tag=1041
  QString toHtmlEscaped() const;
  // tag=1041
  QByteArray toLatin1();
  // tag=1041
  QByteArray toLocal8Bit();
  // tag=1041
  QString toLower();
  // tag=1041
  QList<unsigned int> toUcs4() const;
  // tag=1041
  QString toUpper();
  // tag=1041
  QByteArray toUtf8();
  // tag=1041
  QString trimmed();
  // tag=1041
  void truncate(qsizetype pos);
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QString::QString()
QtDartBindings_EXPORT void *c_QString__constructor();

// tag=1067
//  QString::QString(const QByteArray & a)
QtDartBindings_EXPORT void *c_QString__constructor_QByteArray(void *a_);

// tag=1067
//  QString::QString(const char * ch)
QtDartBindings_EXPORT void *c_QString__constructor_char(const char *ch);

// tag=1067
//  QString::append(const QByteArray & s)
QtDartBindings_EXPORT void *c_QString__append_QByteArray(void *thisObj,
                                                         void *s_);

// tag=1067
//  QString::append(const QString & s)
QtDartBindings_EXPORT void *c_QString__append_QString(void *thisObj,
                                                      const char *s_);

// tag=1067
//  QString::append(const char * s)
QtDartBindings_EXPORT void *c_QString__append_char(void *thisObj,
                                                   const char *s);

// tag=1067
//  QString::arg(const QString & a, int fieldWidth) const
QtDartBindings_EXPORT void *
c_QString__arg_QString_int(void *thisObj, const char *a_, int fieldWidth);

// tag=1067
//  QString::arg(int a, int fieldWidth, int base) const
QtDartBindings_EXPORT void *
c_QString__arg_int_int_int(void *thisObj, int a, int fieldWidth, int base);

// tag=1067
//  QString::arg(long a, int fieldwidth, int base) const
QtDartBindings_EXPORT void *
c_QString__arg_long_int_int(void *thisObj, long a, int fieldwidth, int base);

// tag=1067
//  QString::arg(qint64 a, int fieldwidth, int base) const
QtDartBindings_EXPORT void *c_QString__arg_qint64_int_int(void *thisObj,
                                                          qint64 a,
                                                          int fieldwidth,
                                                          int base);

// tag=1067
//  QString::arg(short a, int fieldWidth, int base) const
QtDartBindings_EXPORT void *
c_QString__arg_short_int_int(void *thisObj, short a, int fieldWidth, int base);

// tag=1067
//  QString::asprintf(const char * format)
QtDartBindings_EXPORT void *c_static_QString__asprintf_char(const char *format);

// tag=1067
//  QString::capacity() const
QtDartBindings_EXPORT qsizetype c_QString__capacity(void *thisObj);

// tag=1067
//  QString::chop(qsizetype n)
QtDartBindings_EXPORT void c_QString__chop_qsizetype(void *thisObj,
                                                     qsizetype n);

// tag=1067
//  QString::chopped(qsizetype n) const
QtDartBindings_EXPORT void *c_QString__chopped_qsizetype(void *thisObj,
                                                         qsizetype n);

// tag=1067
//  QString::clear()
QtDartBindings_EXPORT void c_QString__clear(void *thisObj);

// tag=1067
//  QString::compare(const QString & s) const
QtDartBindings_EXPORT int c_QString__compare_QString(void *thisObj,
                                                     const char *s_);

// tag=1067
//  QString::compare(const QString & s1, const QString & s2)
QtDartBindings_EXPORT int
c_static_QString__compare_QString_QString(const char *s1_, const char *s2_);

// tag=1067
//  QString::contains(const QString & s) const
QtDartBindings_EXPORT bool c_QString__contains_QString(void *thisObj,
                                                       const char *s_);

// tag=1067
//  QString::count() const
QtDartBindings_EXPORT qsizetype c_QString__count(void *thisObj);

// tag=1067
//  QString::count(const QString & s) const
QtDartBindings_EXPORT qsizetype c_QString__count_QString(void *thisObj,
                                                         const char *s_);

// tag=1067
//  QString::detach()
QtDartBindings_EXPORT void c_QString__detach(void *thisObj);

// tag=1067
//  QString::endsWith(const QString & s) const
QtDartBindings_EXPORT bool c_QString__endsWith_QString(void *thisObj,
                                                       const char *s_);

// tag=1067
//  QString::first(qsizetype n) const
QtDartBindings_EXPORT void *c_QString__first_qsizetype(void *thisObj,
                                                       qsizetype n);

// tag=1067
//  QString::fromLatin1(const char * str, qsizetype size)
QtDartBindings_EXPORT void *
c_static_QString__fromLatin1_char_qsizetype(const char *str, qsizetype size);

// tag=1067
//  QString::fromLocal8Bit(const char * str, qsizetype size)
QtDartBindings_EXPORT void *
c_static_QString__fromLocal8Bit_char_qsizetype(const char *str, qsizetype size);

// tag=1067
//  QString::fromUtf8(const char * utf8, qsizetype size)
QtDartBindings_EXPORT void *
c_static_QString__fromUtf8_char_qsizetype(const char *utf8, qsizetype size);

// tag=1067
//  QString::indexOf(const QString & s, qsizetype from) const
QtDartBindings_EXPORT qsizetype c_QString__indexOf_QString_qsizetype(
    void *thisObj, const char *s_, qsizetype from);

// tag=1067
//  QString::insert(qsizetype i, const QByteArray & s)
QtDartBindings_EXPORT void *
c_QString__insert_qsizetype_QByteArray(void *thisObj, qsizetype i, void *s_);

// tag=1067
//  QString::insert(qsizetype i, const QString & s)
QtDartBindings_EXPORT void *
c_QString__insert_qsizetype_QString(void *thisObj, qsizetype i, const char *s_);

// tag=1067
//  QString::insert(qsizetype i, const char * s)
QtDartBindings_EXPORT void *
c_QString__insert_qsizetype_char(void *thisObj, qsizetype i, const char *s);

// tag=1067
//  QString::isDetached() const
QtDartBindings_EXPORT bool c_QString__isDetached(void *thisObj);

// tag=1067
//  QString::isEmpty() const
QtDartBindings_EXPORT bool c_QString__isEmpty(void *thisObj);

// tag=1067
//  QString::isLower() const
QtDartBindings_EXPORT bool c_QString__isLower(void *thisObj);

// tag=1067
//  QString::isNull() const
QtDartBindings_EXPORT bool c_QString__isNull(void *thisObj);

// tag=1067
//  QString::isRightToLeft() const
QtDartBindings_EXPORT bool c_QString__isRightToLeft(void *thisObj);

// tag=1067
//  QString::isSharedWith(const QString & other) const
QtDartBindings_EXPORT bool c_QString__isSharedWith_QString(void *thisObj,
                                                           const char *other_);

// tag=1067
//  QString::isSimpleText() const
QtDartBindings_EXPORT bool c_QString__isSimpleText(void *thisObj);

// tag=1067
//  QString::isUpper() const
QtDartBindings_EXPORT bool c_QString__isUpper(void *thisObj);

// tag=1067
//  QString::isValidUtf16() const
QtDartBindings_EXPORT bool c_QString__isValidUtf16(void *thisObj);

// tag=1067
//  QString::last(qsizetype n) const
QtDartBindings_EXPORT void *c_QString__last_qsizetype(void *thisObj,
                                                      qsizetype n);

// tag=1067
//  QString::lastIndexOf(const QString & s) const
QtDartBindings_EXPORT qsizetype c_QString__lastIndexOf_QString(void *thisObj,
                                                               const char *s_);

// tag=1067
//  QString::lastIndexOf(const QString & s, qsizetype from) const
QtDartBindings_EXPORT qsizetype c_QString__lastIndexOf_QString_qsizetype(
    void *thisObj, const char *s_, qsizetype from);

// tag=1067
//  QString::left(qsizetype n) const
QtDartBindings_EXPORT void *c_QString__left_qsizetype(void *thisObj,
                                                      qsizetype n);

// tag=1067
//  QString::leftJustified(qsizetype width) const
QtDartBindings_EXPORT void *c_QString__leftJustified_qsizetype(void *thisObj,
                                                               qsizetype width);

// tag=1067
//  QString::length() const
QtDartBindings_EXPORT qsizetype c_QString__length(void *thisObj);

// tag=1067
//  QString::localeAwareCompare(const QString & s) const
QtDartBindings_EXPORT int c_QString__localeAwareCompare_QString(void *thisObj,
                                                                const char *s_);

// tag=1067
//  QString::localeAwareCompare(const QString & s1, const QString & s2)
QtDartBindings_EXPORT int
c_static_QString__localeAwareCompare_QString_QString(const char *s1_,
                                                     const char *s2_);

// tag=1067
//  QString::mid(qsizetype position, qsizetype n) const
QtDartBindings_EXPORT void *
c_QString__mid_qsizetype_qsizetype(void *thisObj, qsizetype position,
                                   qsizetype n);

// tag=1067
//  QString::number(int arg__1, int base)
QtDartBindings_EXPORT void *c_static_QString__number_int_int(int arg__1,
                                                             int base);

// tag=1067
//  QString::number(long arg__1, int base)
QtDartBindings_EXPORT void *c_static_QString__number_long_int(long arg__1,
                                                              int base);

// tag=1067
//  QString::number(qint64 arg__1, int base)
QtDartBindings_EXPORT void *c_static_QString__number_qint64_int(qint64 arg__1,
                                                                int base);

// tag=1067
//  QString::prepend(const QByteArray & s)
QtDartBindings_EXPORT void *c_QString__prepend_QByteArray(void *thisObj,
                                                          void *s_);

// tag=1067
//  QString::prepend(const QString & s)
QtDartBindings_EXPORT void *c_QString__prepend_QString(void *thisObj,
                                                       const char *s_);

// tag=1067
//  QString::prepend(const char * s)
QtDartBindings_EXPORT void *c_QString__prepend_char(void *thisObj,
                                                    const char *s);

// tag=1067
//  QString::push_back(const QString & s)
QtDartBindings_EXPORT void c_QString__push_back_QString(void *thisObj,
                                                        const char *s_);

// tag=1067
//  QString::push_front(const QString & s)
QtDartBindings_EXPORT void c_QString__push_front_QString(void *thisObj,
                                                         const char *s_);

// tag=1067
//  QString::remove(const QString & s)
QtDartBindings_EXPORT void *c_QString__remove_QString(void *thisObj,
                                                      const char *s_);

// tag=1067
//  QString::remove(qsizetype i, qsizetype len)
QtDartBindings_EXPORT void *
c_QString__remove_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                      qsizetype len);

// tag=1067
//  QString::repeated(qsizetype times) const
QtDartBindings_EXPORT void *c_QString__repeated_qsizetype(void *thisObj,
                                                          qsizetype times);

// tag=1067
//  QString::replace(const QString & before, const QString & after)
QtDartBindings_EXPORT void *
c_QString__replace_QString_QString(void *thisObj, const char *before_,
                                   const char *after_);

// tag=1067
//  QString::replace(qsizetype i, qsizetype len, const QString & after)
QtDartBindings_EXPORT void *c_QString__replace_qsizetype_qsizetype_QString(
    void *thisObj, qsizetype i, qsizetype len, const char *after_);

// tag=1067
//  QString::reserve(qsizetype size)
QtDartBindings_EXPORT void c_QString__reserve_qsizetype(void *thisObj,
                                                        qsizetype size);

// tag=1067
//  QString::resize(qsizetype size)
QtDartBindings_EXPORT void c_QString__resize_qsizetype(void *thisObj,
                                                       qsizetype size);

// tag=1067
//  QString::right(qsizetype n) const
QtDartBindings_EXPORT void *c_QString__right_qsizetype(void *thisObj,
                                                       qsizetype n);

// tag=1067
//  QString::rightJustified(qsizetype width) const
QtDartBindings_EXPORT void *
c_QString__rightJustified_qsizetype(void *thisObj, qsizetype width);

// tag=1067
//  QString::section(const QString & in_sep, qsizetype start, qsizetype end)
//  const
QtDartBindings_EXPORT void *c_QString__section_QString_qsizetype_qsizetype(
    void *thisObj, const char *in_sep_, qsizetype start, qsizetype end);

// tag=1067
//  QString::setNum(int arg__1, int base)
QtDartBindings_EXPORT void *c_QString__setNum_int_int(void *thisObj, int arg__1,
                                                      int base);

// tag=1067
//  QString::setNum(long arg__1, int base)
QtDartBindings_EXPORT void *c_QString__setNum_long_int(void *thisObj,
                                                       long arg__1, int base);

// tag=1067
//  QString::setNum(qint64 arg__1, int base)
QtDartBindings_EXPORT void *
c_QString__setNum_qint64_int(void *thisObj, qint64 arg__1, int base);

// tag=1067
//  QString::setNum(short arg__1, int base)
QtDartBindings_EXPORT void *c_QString__setNum_short_int(void *thisObj,
                                                        short arg__1, int base);

// tag=1067
//  QString::shrink_to_fit()
QtDartBindings_EXPORT void c_QString__shrink_to_fit(void *thisObj);

// tag=1067
//  QString::simplified()
QtDartBindings_EXPORT void *c_QString__simplified(void *thisObj);

// tag=1067
//  QString::size() const
QtDartBindings_EXPORT qsizetype c_QString__size(void *thisObj);

// tag=1067
//  QString::sliced(qsizetype pos) const
QtDartBindings_EXPORT void *c_QString__sliced_qsizetype(void *thisObj,
                                                        qsizetype pos);

// tag=1067
//  QString::sliced(qsizetype pos, qsizetype n) const
QtDartBindings_EXPORT void *c_QString__sliced_qsizetype_qsizetype(void *thisObj,
                                                                  qsizetype pos,
                                                                  qsizetype n);

// tag=1067
//  QString::split(const QString & sep) const
QtDartBindings_EXPORT void *c_QString__split_QString(void *thisObj,
                                                     const char *sep_);

// tag=1067
//  QString::squeeze()
QtDartBindings_EXPORT void c_QString__squeeze(void *thisObj);

// tag=1067
//  QString::startsWith(const QString & s) const
QtDartBindings_EXPORT bool c_QString__startsWith_QString(void *thisObj,
                                                         const char *s_);

// tag=1067
//  QString::toCaseFolded()
QtDartBindings_EXPORT void *c_QString__toCaseFolded(void *thisObj);

// tag=1067
//  QString::toHtmlEscaped() const
QtDartBindings_EXPORT void *c_QString__toHtmlEscaped(void *thisObj);

// tag=1067
//  QString::toLatin1()
QtDartBindings_EXPORT void *c_QString__toLatin1(void *thisObj);

// tag=1067
//  QString::toLocal8Bit()
QtDartBindings_EXPORT void *c_QString__toLocal8Bit(void *thisObj);

// tag=1067
//  QString::toLower()
QtDartBindings_EXPORT void *c_QString__toLower(void *thisObj);

// tag=1067
//  QString::toUcs4() const
QtDartBindings_EXPORT void *c_QString__toUcs4(void *thisObj);

// tag=1067
//  QString::toUpper()
QtDartBindings_EXPORT void *c_QString__toUpper(void *thisObj);

// tag=1067
//  QString::toUtf8()
QtDartBindings_EXPORT void *c_QString__toUtf8(void *thisObj);

// tag=1067
//  QString::trimmed()
QtDartBindings_EXPORT void *c_QString__trimmed(void *thisObj);

// tag=1067
//  QString::truncate(qsizetype pos)
QtDartBindings_EXPORT void c_QString__truncate_qsizetype(void *thisObj,
                                                         qsizetype pos);

// tag=1066
QtDartBindings_EXPORT void c_QString__destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QString_Finalizer(void *, void *cppObj, void *);
}
