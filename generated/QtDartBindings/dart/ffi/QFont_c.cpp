/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QFont_c.h"

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
QFont_wrapper::QFont_wrapper() : ::QFont() {}
QFont_wrapper::QFont_wrapper(const QList<QString> &families, int pointSize,
                             int weight, bool italic)
    : ::QFont(families, pointSize, weight, italic) {}
QFont_wrapper::QFont_wrapper(const QString &family, int pointSize, int weight,
                             bool italic)
    : ::QFont(family, pointSize, weight, italic) {}
bool QFont_wrapper::bold() const { return ::QFont::bold(); }
void QFont_wrapper::cacheStatistics() { ::QFont::cacheStatistics(); }
void QFont_wrapper::cleanup() { ::QFont::cleanup(); }
QString QFont_wrapper::defaultFamily() const {
  return ::QFont::defaultFamily();
}
bool QFont_wrapper::exactMatch() const { return ::QFont::exactMatch(); }
QList<QString> QFont_wrapper::families() const { return ::QFont::families(); }
QString QFont_wrapper::family() const { return ::QFont::family(); }
bool QFont_wrapper::fixedPitch() const { return ::QFont::fixedPitch(); }
bool QFont_wrapper::fromString(const QString &arg__1) {
  return ::QFont::fromString(arg__1);
}
void QFont_wrapper::initialize() { ::QFont::initialize(); }
void QFont_wrapper::insertSubstitution(const QString &arg__1,
                                       const QString &arg__2) {
  ::QFont::insertSubstitution(arg__1, arg__2);
}
void QFont_wrapper::insertSubstitutions(const QString &arg__1,
                                        const QList<QString> &arg__2) {
  ::QFont::insertSubstitutions(arg__1, arg__2);
}
bool QFont_wrapper::isCopyOf(const QFont &arg__1) const {
  return ::QFont::isCopyOf(arg__1);
}
bool QFont_wrapper::italic() const { return ::QFont::italic(); }
bool QFont_wrapper::kerning() const { return ::QFont::kerning(); }
QString QFont_wrapper::key() const { return ::QFont::key(); }
qreal QFont_wrapper::letterSpacing() const { return ::QFont::letterSpacing(); }
bool QFont_wrapper::overline() const { return ::QFont::overline(); }
int QFont_wrapper::pixelSize() const { return ::QFont::pixelSize(); }
int QFont_wrapper::pointSize() const { return ::QFont::pointSize(); }
qreal QFont_wrapper::pointSizeF() const { return ::QFont::pointSizeF(); }
void QFont_wrapper::removeSubstitutions(const QString &arg__1) {
  ::QFont::removeSubstitutions(arg__1);
}
QFont QFont_wrapper::resolve(const QFont &arg__1) const {
  return ::QFont::resolve(arg__1);
}
void QFont_wrapper::setBold(bool arg__1) { ::QFont::setBold(arg__1); }
void QFont_wrapper::setFamilies(const QList<QString> &arg__1) {
  ::QFont::setFamilies(arg__1);
}
void QFont_wrapper::setFamily(const QString &arg__1) {
  ::QFont::setFamily(arg__1);
}
void QFont_wrapper::setFixedPitch(bool arg__1) {
  ::QFont::setFixedPitch(arg__1);
}
void QFont_wrapper::setItalic(bool b) { ::QFont::setItalic(b); }
void QFont_wrapper::setKerning(bool arg__1) { ::QFont::setKerning(arg__1); }
void QFont_wrapper::setOverline(bool arg__1) { ::QFont::setOverline(arg__1); }
void QFont_wrapper::setPixelSize(int arg__1) { ::QFont::setPixelSize(arg__1); }
void QFont_wrapper::setPointSize(int arg__1) { ::QFont::setPointSize(arg__1); }
void QFont_wrapper::setPointSizeF(qreal arg__1) {
  ::QFont::setPointSizeF(arg__1);
}
void QFont_wrapper::setStretch(int arg__1) { ::QFont::setStretch(arg__1); }
void QFont_wrapper::setStrikeOut(bool arg__1) { ::QFont::setStrikeOut(arg__1); }
void QFont_wrapper::setStyleHint(QFont::StyleHint arg__1) {
  ::QFont::setStyleHint(arg__1);
}
void QFont_wrapper::setStyleName(const QString &arg__1) {
  ::QFont::setStyleName(arg__1);
}
void QFont_wrapper::setUnderline(bool arg__1) { ::QFont::setUnderline(arg__1); }
void QFont_wrapper::setWordSpacing(qreal spacing) {
  ::QFont::setWordSpacing(spacing);
}
int QFont_wrapper::stretch() const { return ::QFont::stretch(); }
bool QFont_wrapper::strikeOut() const { return ::QFont::strikeOut(); }
QFont::StyleHint QFont_wrapper::styleHint() const {
  return ::QFont::styleHint();
}
QString QFont_wrapper::styleName() const { return ::QFont::styleName(); }
QString QFont_wrapper::substitute(const QString &arg__1) {
  return ::QFont::substitute(arg__1);
}
QList<QString> QFont_wrapper::substitutes(const QString &arg__1) {
  return ::QFont::substitutes(arg__1);
}
QList<QString> QFont_wrapper::substitutions() {
  return ::QFont::substitutions();
}
bool QFont_wrapper::underline() const { return ::QFont::underline(); }
qreal QFont_wrapper::wordSpacing() const { return ::QFont::wordSpacing(); }
QFont_wrapper::~QFont_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QFont *fromPtr(void *ptr) { return reinterpret_cast<QFont *>(ptr); }
static QtDartBindings_wrappersNS::QFont_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QFont_wrapper *>(ptr);
}
extern "C" {
void c_QFont_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QFont_wrapper *>(cppObj);
}
void *c_QFont__constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QFont_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QFont__constructor_QList_QString_int_int_bool(void *families_,
                                                      int pointSize, int weight,
                                                      bool italic) {
  assert(families_);
  auto &families = *reinterpret_cast<QList<QString> *>(families_);
  auto ptr = new QtDartBindings_wrappersNS::QFont_wrapper(families, pointSize,
                                                          weight, italic);
  return reinterpret_cast<void *>(ptr);
}
void *c_QFont__constructor_QString_int_int_bool(const char *family_,
                                                int pointSize, int weight,
                                                bool italic) {
  const auto family = QString::fromUtf8(family_);
  auto ptr = new QtDartBindings_wrappersNS::QFont_wrapper(family, pointSize,
                                                          weight, italic);
  return reinterpret_cast<void *>(ptr);
}
// bold() const
bool c_QFont__bold(void *thisObj) {
  const auto &result = fromPtr(thisObj)->bold();
  return result;
}
// cacheStatistics()
void c_static_QFont__cacheStatistics() {
  QtDartBindings_wrappersNS::QFont_wrapper::cacheStatistics();
}
// cleanup()
void c_static_QFont__cleanup() {
  QtDartBindings_wrappersNS::QFont_wrapper::cleanup();
}
// defaultFamily() const
void *c_QFont__defaultFamily(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->defaultFamily()};
  return result;
}
// exactMatch() const
bool c_QFont__exactMatch(void *thisObj) {
  const auto &result = fromPtr(thisObj)->exactMatch();
  return result;
}
// families() const
void *c_QFont__families(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QList<QString>>{fromPtr(thisObj)->families()};
  return result;
}
// family() const
void *c_QFont__family(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->family()};
  return result;
}
// fixedPitch() const
bool c_QFont__fixedPitch(void *thisObj) {
  const auto &result = fromPtr(thisObj)->fixedPitch();
  return result;
}
// fromString(const QString & arg__1)
bool c_QFont__fromString_QString(void *thisObj, const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  const auto &result = fromPtr(thisObj)->fromString(arg__1);
  free((char *)arg__1_);
  return result;
}
// initialize()
void c_static_QFont__initialize() {
  QtDartBindings_wrappersNS::QFont_wrapper::initialize();
}
// insertSubstitution(const QString & arg__1, const QString & arg__2)
void c_static_QFont__insertSubstitution_QString_QString(const char *arg__1_,
                                                        const char *arg__2_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  const auto arg__2 = QString::fromUtf8(arg__2_);
  QtDartBindings_wrappersNS::QFont_wrapper::insertSubstitution(arg__1, arg__2);
  free((char *)arg__1_);
  free((char *)arg__2_);
}
// insertSubstitutions(const QString & arg__1, const QList<QString > & arg__2)
void c_static_QFont__insertSubstitutions_QString_QList_QString(
    const char *arg__1_, void *arg__2_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  assert(arg__2_);
  auto &arg__2 = *reinterpret_cast<QList<QString> *>(arg__2_);
  QtDartBindings_wrappersNS::QFont_wrapper::insertSubstitutions(arg__1, arg__2);
  free((char *)arg__1_);
}
// isCopyOf(const QFont & arg__1) const
bool c_QFont__isCopyOf_QFont(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QFont *>(arg__1_);
  const auto &result = fromPtr(thisObj)->isCopyOf(arg__1);
  return result;
}
// italic() const
bool c_QFont__italic(void *thisObj) {
  const auto &result = fromPtr(thisObj)->italic();
  return result;
}
// kerning() const
bool c_QFont__kerning(void *thisObj) {
  const auto &result = fromPtr(thisObj)->kerning();
  return result;
}
// key() const
void *c_QFont__key(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->key()};
  return result;
}
// letterSpacing() const
qreal c_QFont__letterSpacing(void *thisObj) {
  const auto &result = fromPtr(thisObj)->letterSpacing();
  return result;
}
// overline() const
bool c_QFont__overline(void *thisObj) {
  const auto &result = fromPtr(thisObj)->overline();
  return result;
}
// pixelSize() const
int c_QFont__pixelSize(void *thisObj) {
  const auto &result = fromPtr(thisObj)->pixelSize();
  return result;
}
// pointSize() const
int c_QFont__pointSize(void *thisObj) {
  const auto &result = fromPtr(thisObj)->pointSize();
  return result;
}
// pointSizeF() const
qreal c_QFont__pointSizeF(void *thisObj) {
  const auto &result = fromPtr(thisObj)->pointSizeF();
  return result;
}
// removeSubstitutions(const QString & arg__1)
void c_static_QFont__removeSubstitutions_QString(const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  QtDartBindings_wrappersNS::QFont_wrapper::removeSubstitutions(arg__1);
  free((char *)arg__1_);
}
// resolve(const QFont & arg__1) const
void *c_QFont__resolve_QFont(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QFont *>(arg__1_);
  const auto &result =
      new Dartagnan::ValueWrapper<QFont>{fromPtr(thisObj)->resolve(arg__1)};
  return result;
}
// setBold(bool arg__1)
void c_QFont__setBold_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->setBold(arg__1);
}
// setFamilies(const QList<QString > & arg__1)
void c_QFont__setFamilies_QList_QString(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QList<QString> *>(arg__1_);
  fromPtr(thisObj)->setFamilies(arg__1);
}
// setFamily(const QString & arg__1)
void c_QFont__setFamily_QString(void *thisObj, const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  fromPtr(thisObj)->setFamily(arg__1);
  free((char *)arg__1_);
}
// setFixedPitch(bool arg__1)
void c_QFont__setFixedPitch_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->setFixedPitch(arg__1);
}
// setItalic(bool b)
void c_QFont__setItalic_bool(void *thisObj, bool b) {
  fromPtr(thisObj)->setItalic(b);
}
// setKerning(bool arg__1)
void c_QFont__setKerning_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->setKerning(arg__1);
}
// setOverline(bool arg__1)
void c_QFont__setOverline_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->setOverline(arg__1);
}
// setPixelSize(int arg__1)
void c_QFont__setPixelSize_int(void *thisObj, int arg__1) {
  fromPtr(thisObj)->setPixelSize(arg__1);
}
// setPointSize(int arg__1)
void c_QFont__setPointSize_int(void *thisObj, int arg__1) {
  fromPtr(thisObj)->setPointSize(arg__1);
}
// setPointSizeF(qreal arg__1)
void c_QFont__setPointSizeF_qreal(void *thisObj, qreal arg__1) {
  fromPtr(thisObj)->setPointSizeF(arg__1);
}
// setStretch(int arg__1)
void c_QFont__setStretch_int(void *thisObj, int arg__1) {
  fromPtr(thisObj)->setStretch(arg__1);
}
// setStrikeOut(bool arg__1)
void c_QFont__setStrikeOut_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->setStrikeOut(arg__1);
}
// setStyleHint(QFont::StyleHint arg__1)
void c_QFont__setStyleHint_StyleHint(void *thisObj, int arg__1) {
  fromPtr(thisObj)->setStyleHint(static_cast<QFont::StyleHint>(arg__1));
}
// setStyleName(const QString & arg__1)
void c_QFont__setStyleName_QString(void *thisObj, const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  fromPtr(thisObj)->setStyleName(arg__1);
  free((char *)arg__1_);
}
// setUnderline(bool arg__1)
void c_QFont__setUnderline_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->setUnderline(arg__1);
}
// setWordSpacing(qreal spacing)
void c_QFont__setWordSpacing_qreal(void *thisObj, qreal spacing) {
  fromPtr(thisObj)->setWordSpacing(spacing);
}
// stretch() const
int c_QFont__stretch(void *thisObj) {
  const auto &result = fromPtr(thisObj)->stretch();
  return result;
}
// strikeOut() const
bool c_QFont__strikeOut(void *thisObj) {
  const auto &result = fromPtr(thisObj)->strikeOut();
  return result;
}
// styleHint() const
int c_QFont__styleHint(void *thisObj) {
  const auto &result = int(fromPtr(thisObj)->styleHint());
  return result;
}
// styleName() const
void *c_QFont__styleName(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->styleName()};
  return result;
}
// substitute(const QString & arg__1)
void *c_static_QFont__substitute_QString(const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QFont_wrapper::substitute(arg__1)};
  free((char *)arg__1_);
  return result;
}
// substitutes(const QString & arg__1)
void *c_static_QFont__substitutes_QString(const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  const auto &result = new Dartagnan::ValueWrapper<QList<QString>>{
      QtDartBindings_wrappersNS::QFont_wrapper::substitutes(arg__1)};
  free((char *)arg__1_);
  return result;
}
// substitutions()
void *c_static_QFont__substitutions() {
  const auto &result = new Dartagnan::ValueWrapper<QList<QString>>{
      QtDartBindings_wrappersNS::QFont_wrapper::substitutions()};
  return result;
}
// underline() const
bool c_QFont__underline(void *thisObj) {
  const auto &result = fromPtr(thisObj)->underline();
  return result;
}
// wordSpacing() const
qreal c_QFont__wordSpacing(void *thisObj) {
  const auto &result = fromPtr(thisObj)->wordSpacing();
  return result;
}
void c_QFont__destructor(void *thisObj) { delete fromPtr(thisObj); }
}
