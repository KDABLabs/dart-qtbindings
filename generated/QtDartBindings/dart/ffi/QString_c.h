/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qbytearray.h>
#include <qlist.h>
#include <qstring.h>

namespace QtDartBindings_wrappersNS {
class QString_wrapper : public ::QString {
public:
  ~QString_wrapper();
  QString_wrapper();
  QString_wrapper(const QByteArray &a);
  QString_wrapper(const char *ch);
  QString &append(const QByteArray &s);
  QString &append(const QString &s);
  QString &append(const char *s);
  QString arg(const QString &a, int fieldWidth = 0) const;
  QString arg(int a, int fieldWidth = 0, int base = 10) const;
  QString arg(long a, int fieldwidth = 0, int base = 10) const;
  QString arg(qint64 a, int fieldwidth = 0, int base = 10) const;
  QString arg(short a, int fieldWidth = 0, int base = 10) const;
  static QString asprintf(const char *format);
  qsizetype capacity() const;
  void chop(qsizetype n);
  QString chopped(qsizetype n) const;
  void clear();
  int compare(const QString &s) const;
  static int compare(const QString &s1, const QString &s2);
  bool contains(const QString &s) const;
  qsizetype count(const QString &s) const;
  void detach();
  bool endsWith(const QString &s) const;
  QString first(qsizetype n) const;
  static QString fromLatin1(const char *str, qsizetype size);
  static QString fromLocal8Bit(const char *str, qsizetype size);
  static QString fromUtf8(const char *utf8, qsizetype size);
  qsizetype indexOf(const QString &s, qsizetype from = 0) const;
  QString &insert(qsizetype i, const QByteArray &s);
  QString &insert(qsizetype i, const QString &s);
  QString &insert(qsizetype i, const char *s);
  bool isDetached() const;
  bool isEmpty() const;
  bool isLower() const;
  bool isNull() const;
  bool isRightToLeft() const;
  bool isSharedWith(const QString &other) const;
  bool isSimpleText() const;
  bool isUpper() const;
  bool isValidUtf16() const;
  QString last(qsizetype n) const;
  qsizetype lastIndexOf(const QString &s) const;
  qsizetype lastIndexOf(const QString &s, qsizetype from) const;
  QString left(qsizetype n) const;
  QString leftJustified(qsizetype width) const;
  qsizetype length() const;
  int localeAwareCompare(const QString &s) const;
  static int localeAwareCompare(const QString &s1, const QString &s2);
  QString mid(qsizetype position, qsizetype n = -1) const;
  static QString number(int arg__1, int base = 10);
  static QString number(long arg__1, int base = 10);
  static QString number(qint64 arg__1, int base = 10);
  QString &prepend(const QByteArray &s);
  QString &prepend(const QString &s);
  QString &prepend(const char *s);
  void push_back(const QString &s);
  void push_front(const QString &s);
  QString &remove(const QString &s);
  QString &remove(qsizetype i, qsizetype len);
  QString repeated(qsizetype times) const;
  QString &replace(const QString &before, const QString &after);
  QString &replace(qsizetype i, qsizetype len, const QString &after);
  void reserve(qsizetype size);
  void resize(qsizetype size);
  QString right(qsizetype n) const;
  QString rightJustified(qsizetype width) const;
  QString section(const QString &in_sep, qsizetype start,
                  qsizetype end = -1) const;
  QString &setNum(int arg__1, int base = 10);
  QString &setNum(long arg__1, int base = 10);
  QString &setNum(qint64 arg__1, int base = 10);
  QString &setNum(short arg__1, int base = 10);
  void shrink_to_fit();
  QString simplified();
  qsizetype size() const;
  QString sliced(qsizetype pos) const;
  QString sliced(qsizetype pos, qsizetype n) const;
  QList<QString> split(const QString &sep) const;
  void squeeze();
  bool startsWith(const QString &s) const;
  QString toCaseFolded();
  QString toHtmlEscaped() const;
  QByteArray toLatin1();
  QByteArray toLocal8Bit();
  QString toLower();
  QList<unsigned int> toUcs4() const;
  QString toUpper();
  QByteArray toUtf8();
  QString trimmed();
  void truncate(qsizetype pos);
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QString::QString()
QtDartBindings_EXPORT void *c_QString__constructor();
// QString::QString(const QByteArray & a)
QtDartBindings_EXPORT void *c_QString__constructor_QByteArray(void *a_);
// QString::QString(const char * ch)
QtDartBindings_EXPORT void *c_QString__constructor_char(const char *ch);
// QString::append(const QByteArray & s)
QtDartBindings_EXPORT void *c_QString__append_QByteArray(void *thisObj,
                                                         void *s_);
// QString::append(const QString & s)
QtDartBindings_EXPORT void *c_QString__append_QString(void *thisObj,
                                                      const char *s_);
// QString::append(const char * s)
QtDartBindings_EXPORT void *c_QString__append_char(void *thisObj,
                                                   const char *s);
// QString::arg(const QString & a, int fieldWidth) const
QtDartBindings_EXPORT void *
c_QString__arg_QString_int(void *thisObj, const char *a_, int fieldWidth);
// QString::arg(int a, int fieldWidth, int base) const
QtDartBindings_EXPORT void *
c_QString__arg_int_int_int(void *thisObj, int a, int fieldWidth, int base);
// QString::arg(long a, int fieldwidth, int base) const
QtDartBindings_EXPORT void *
c_QString__arg_long_int_int(void *thisObj, long a, int fieldwidth, int base);
// QString::arg(qint64 a, int fieldwidth, int base) const
QtDartBindings_EXPORT void *c_QString__arg_qint64_int_int(void *thisObj,
                                                          qint64 a,
                                                          int fieldwidth,
                                                          int base);
// QString::arg(short a, int fieldWidth, int base) const
QtDartBindings_EXPORT void *
c_QString__arg_short_int_int(void *thisObj, short a, int fieldWidth, int base);
// QString::asprintf(const char * format)
QtDartBindings_EXPORT void *c_static_QString__asprintf_char(const char *format);
// QString::capacity() const
QtDartBindings_EXPORT qsizetype c_QString__capacity(void *thisObj);
// QString::chop(qsizetype n)
QtDartBindings_EXPORT void c_QString__chop_qsizetype(void *thisObj,
                                                     qsizetype n);
// QString::chopped(qsizetype n) const
QtDartBindings_EXPORT void *c_QString__chopped_qsizetype(void *thisObj,
                                                         qsizetype n);
// QString::clear()
QtDartBindings_EXPORT void c_QString__clear(void *thisObj);
// QString::compare(const QString & s) const
QtDartBindings_EXPORT int c_QString__compare_QString(void *thisObj,
                                                     const char *s_);
// QString::compare(const QString & s1, const QString & s2)
QtDartBindings_EXPORT int
c_static_QString__compare_QString_QString(const char *s1_, const char *s2_);
// QString::contains(const QString & s) const
QtDartBindings_EXPORT bool c_QString__contains_QString(void *thisObj,
                                                       const char *s_);
// QString::count(const QString & s) const
QtDartBindings_EXPORT qsizetype c_QString__count_QString(void *thisObj,
                                                         const char *s_);
// QString::detach()
QtDartBindings_EXPORT void c_QString__detach(void *thisObj);
// QString::endsWith(const QString & s) const
QtDartBindings_EXPORT bool c_QString__endsWith_QString(void *thisObj,
                                                       const char *s_);
// QString::first(qsizetype n) const
QtDartBindings_EXPORT void *c_QString__first_qsizetype(void *thisObj,
                                                       qsizetype n);
// QString::fromLatin1(const char * str, qsizetype size)
QtDartBindings_EXPORT void *
c_static_QString__fromLatin1_char_qsizetype(const char *str, qsizetype size);
// QString::fromLocal8Bit(const char * str, qsizetype size)
QtDartBindings_EXPORT void *
c_static_QString__fromLocal8Bit_char_qsizetype(const char *str, qsizetype size);
// QString::fromUtf8(const char * utf8, qsizetype size)
QtDartBindings_EXPORT void *
c_static_QString__fromUtf8_char_qsizetype(const char *utf8, qsizetype size);
// QString::indexOf(const QString & s, qsizetype from) const
QtDartBindings_EXPORT qsizetype c_QString__indexOf_QString_qsizetype(
    void *thisObj, const char *s_, qsizetype from);
// QString::insert(qsizetype i, const QByteArray & s)
QtDartBindings_EXPORT void *
c_QString__insert_qsizetype_QByteArray(void *thisObj, qsizetype i, void *s_);
// QString::insert(qsizetype i, const QString & s)
QtDartBindings_EXPORT void *
c_QString__insert_qsizetype_QString(void *thisObj, qsizetype i, const char *s_);
// QString::insert(qsizetype i, const char * s)
QtDartBindings_EXPORT void *
c_QString__insert_qsizetype_char(void *thisObj, qsizetype i, const char *s);
// QString::isDetached() const
QtDartBindings_EXPORT bool c_QString__isDetached(void *thisObj);
// QString::isEmpty() const
QtDartBindings_EXPORT bool c_QString__isEmpty(void *thisObj);
// QString::isLower() const
QtDartBindings_EXPORT bool c_QString__isLower(void *thisObj);
// QString::isNull() const
QtDartBindings_EXPORT bool c_QString__isNull(void *thisObj);
// QString::isRightToLeft() const
QtDartBindings_EXPORT bool c_QString__isRightToLeft(void *thisObj);
// QString::isSharedWith(const QString & other) const
QtDartBindings_EXPORT bool c_QString__isSharedWith_QString(void *thisObj,
                                                           const char *other_);
// QString::isSimpleText() const
QtDartBindings_EXPORT bool c_QString__isSimpleText(void *thisObj);
// QString::isUpper() const
QtDartBindings_EXPORT bool c_QString__isUpper(void *thisObj);
// QString::isValidUtf16() const
QtDartBindings_EXPORT bool c_QString__isValidUtf16(void *thisObj);
// QString::last(qsizetype n) const
QtDartBindings_EXPORT void *c_QString__last_qsizetype(void *thisObj,
                                                      qsizetype n);
// QString::lastIndexOf(const QString & s) const
QtDartBindings_EXPORT qsizetype c_QString__lastIndexOf_QString(void *thisObj,
                                                               const char *s_);
// QString::lastIndexOf(const QString & s, qsizetype from) const
QtDartBindings_EXPORT qsizetype c_QString__lastIndexOf_QString_qsizetype(
    void *thisObj, const char *s_, qsizetype from);
// QString::left(qsizetype n) const
QtDartBindings_EXPORT void *c_QString__left_qsizetype(void *thisObj,
                                                      qsizetype n);
// QString::leftJustified(qsizetype width) const
QtDartBindings_EXPORT void *c_QString__leftJustified_qsizetype(void *thisObj,
                                                               qsizetype width);
// QString::length() const
QtDartBindings_EXPORT qsizetype c_QString__length(void *thisObj);
// QString::localeAwareCompare(const QString & s) const
QtDartBindings_EXPORT int c_QString__localeAwareCompare_QString(void *thisObj,
                                                                const char *s_);
// QString::localeAwareCompare(const QString & s1, const QString & s2)
QtDartBindings_EXPORT int
c_static_QString__localeAwareCompare_QString_QString(const char *s1_,
                                                     const char *s2_);
// QString::mid(qsizetype position, qsizetype n) const
QtDartBindings_EXPORT void *
c_QString__mid_qsizetype_qsizetype(void *thisObj, qsizetype position,
                                   qsizetype n);
// QString::number(int arg__1, int base)
QtDartBindings_EXPORT void *c_static_QString__number_int_int(int arg__1,
                                                             int base);
// QString::number(long arg__1, int base)
QtDartBindings_EXPORT void *c_static_QString__number_long_int(long arg__1,
                                                              int base);
// QString::number(qint64 arg__1, int base)
QtDartBindings_EXPORT void *c_static_QString__number_qint64_int(qint64 arg__1,
                                                                int base);
// QString::prepend(const QByteArray & s)
QtDartBindings_EXPORT void *c_QString__prepend_QByteArray(void *thisObj,
                                                          void *s_);
// QString::prepend(const QString & s)
QtDartBindings_EXPORT void *c_QString__prepend_QString(void *thisObj,
                                                       const char *s_);
// QString::prepend(const char * s)
QtDartBindings_EXPORT void *c_QString__prepend_char(void *thisObj,
                                                    const char *s);
// QString::push_back(const QString & s)
QtDartBindings_EXPORT void c_QString__push_back_QString(void *thisObj,
                                                        const char *s_);
// QString::push_front(const QString & s)
QtDartBindings_EXPORT void c_QString__push_front_QString(void *thisObj,
                                                         const char *s_);
// QString::remove(const QString & s)
QtDartBindings_EXPORT void *c_QString__remove_QString(void *thisObj,
                                                      const char *s_);
// QString::remove(qsizetype i, qsizetype len)
QtDartBindings_EXPORT void *
c_QString__remove_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                      qsizetype len);
// QString::repeated(qsizetype times) const
QtDartBindings_EXPORT void *c_QString__repeated_qsizetype(void *thisObj,
                                                          qsizetype times);
// QString::replace(const QString & before, const QString & after)
QtDartBindings_EXPORT void *
c_QString__replace_QString_QString(void *thisObj, const char *before_,
                                   const char *after_);
// QString::replace(qsizetype i, qsizetype len, const QString & after)
QtDartBindings_EXPORT void *c_QString__replace_qsizetype_qsizetype_QString(
    void *thisObj, qsizetype i, qsizetype len, const char *after_);
// QString::reserve(qsizetype size)
QtDartBindings_EXPORT void c_QString__reserve_qsizetype(void *thisObj,
                                                        qsizetype size);
// QString::resize(qsizetype size)
QtDartBindings_EXPORT void c_QString__resize_qsizetype(void *thisObj,
                                                       qsizetype size);
// QString::right(qsizetype n) const
QtDartBindings_EXPORT void *c_QString__right_qsizetype(void *thisObj,
                                                       qsizetype n);
// QString::rightJustified(qsizetype width) const
QtDartBindings_EXPORT void *
c_QString__rightJustified_qsizetype(void *thisObj, qsizetype width);
// QString::section(const QString & in_sep, qsizetype start, qsizetype end)
// const
QtDartBindings_EXPORT void *c_QString__section_QString_qsizetype_qsizetype(
    void *thisObj, const char *in_sep_, qsizetype start, qsizetype end);
// QString::setNum(int arg__1, int base)
QtDartBindings_EXPORT void *c_QString__setNum_int_int(void *thisObj, int arg__1,
                                                      int base);
// QString::setNum(long arg__1, int base)
QtDartBindings_EXPORT void *c_QString__setNum_long_int(void *thisObj,
                                                       long arg__1, int base);
// QString::setNum(qint64 arg__1, int base)
QtDartBindings_EXPORT void *
c_QString__setNum_qint64_int(void *thisObj, qint64 arg__1, int base);
// QString::setNum(short arg__1, int base)
QtDartBindings_EXPORT void *c_QString__setNum_short_int(void *thisObj,
                                                        short arg__1, int base);
// QString::shrink_to_fit()
QtDartBindings_EXPORT void c_QString__shrink_to_fit(void *thisObj);
// QString::simplified()
QtDartBindings_EXPORT void *c_QString__simplified(void *thisObj);
// QString::size() const
QtDartBindings_EXPORT qsizetype c_QString__size(void *thisObj);
// QString::sliced(qsizetype pos) const
QtDartBindings_EXPORT void *c_QString__sliced_qsizetype(void *thisObj,
                                                        qsizetype pos);
// QString::sliced(qsizetype pos, qsizetype n) const
QtDartBindings_EXPORT void *c_QString__sliced_qsizetype_qsizetype(void *thisObj,
                                                                  qsizetype pos,
                                                                  qsizetype n);
// QString::split(const QString & sep) const
QtDartBindings_EXPORT void *c_QString__split_QString(void *thisObj,
                                                     const char *sep_);
// QString::squeeze()
QtDartBindings_EXPORT void c_QString__squeeze(void *thisObj);
// QString::startsWith(const QString & s) const
QtDartBindings_EXPORT bool c_QString__startsWith_QString(void *thisObj,
                                                         const char *s_);
// QString::toCaseFolded()
QtDartBindings_EXPORT void *c_QString__toCaseFolded(void *thisObj);
// QString::toHtmlEscaped() const
QtDartBindings_EXPORT void *c_QString__toHtmlEscaped(void *thisObj);
// QString::toLatin1()
QtDartBindings_EXPORT void *c_QString__toLatin1(void *thisObj);
// QString::toLocal8Bit()
QtDartBindings_EXPORT void *c_QString__toLocal8Bit(void *thisObj);
// QString::toLower()
QtDartBindings_EXPORT void *c_QString__toLower(void *thisObj);
// QString::toUcs4() const
QtDartBindings_EXPORT void *c_QString__toUcs4(void *thisObj);
// QString::toUpper()
QtDartBindings_EXPORT void *c_QString__toUpper(void *thisObj);
// QString::toUtf8()
QtDartBindings_EXPORT void *c_QString__toUtf8(void *thisObj);
// QString::trimmed()
QtDartBindings_EXPORT void *c_QString__trimmed(void *thisObj);
// QString::truncate(qsizetype pos)
QtDartBindings_EXPORT void c_QString__truncate_qsizetype(void *thisObj,
                                                         qsizetype pos);
QtDartBindings_EXPORT void c_QString__destructor(void *thisObj);
QtDartBindings_EXPORT void c_QString_Finalizer(void *cppObj);
}
