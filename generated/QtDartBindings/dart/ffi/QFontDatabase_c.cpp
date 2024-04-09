/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QFontDatabase_c.h"

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
int QFontDatabase_wrapper::addApplicationFont(const QString &fileName) {
  return ::QFontDatabase::addApplicationFont(fileName);
}
int QFontDatabase_wrapper::addApplicationFontFromData(
    const QByteArray &fontData) {
  return ::QFontDatabase::addApplicationFontFromData(fontData);
}
QList<QString> QFontDatabase_wrapper::applicationFontFamilies(int id) {
  return ::QFontDatabase::applicationFontFamilies(id);
}
bool QFontDatabase_wrapper::bold(const QString &family, const QString &style) {
  return ::QFontDatabase::bold(family, style);
}
QList<QString> QFontDatabase_wrapper::families() {
  return ::QFontDatabase::families();
}
QFont QFontDatabase_wrapper::font(const QString &family, const QString &style,
                                  int pointSize) {
  return ::QFontDatabase::font(family, style, pointSize);
}
bool QFontDatabase_wrapper::hasFamily(const QString &family) {
  return ::QFontDatabase::hasFamily(family);
}
bool QFontDatabase_wrapper::isBitmapScalable(const QString &family,
                                             const QString &style) {
  return ::QFontDatabase::isBitmapScalable(family, style);
}
bool QFontDatabase_wrapper::isFixedPitch(const QString &family,
                                         const QString &style) {
  return ::QFontDatabase::isFixedPitch(family, style);
}
bool QFontDatabase_wrapper::isPrivateFamily(const QString &family) {
  return ::QFontDatabase::isPrivateFamily(family);
}
bool QFontDatabase_wrapper::isScalable(const QString &family,
                                       const QString &style) {
  return ::QFontDatabase::isScalable(family, style);
}
bool QFontDatabase_wrapper::isSmoothlyScalable(const QString &family,
                                               const QString &style) {
  return ::QFontDatabase::isSmoothlyScalable(family, style);
}
bool QFontDatabase_wrapper::italic(const QString &family,
                                   const QString &style) {
  return ::QFontDatabase::italic(family, style);
}
QList<int> QFontDatabase_wrapper::pointSizes(const QString &family,
                                             const QString &style) {
  return ::QFontDatabase::pointSizes(family, style);
}
bool QFontDatabase_wrapper::removeAllApplicationFonts() {
  return ::QFontDatabase::removeAllApplicationFonts();
}
bool QFontDatabase_wrapper::removeApplicationFont(int id) {
  return ::QFontDatabase::removeApplicationFont(id);
}
QList<int> QFontDatabase_wrapper::smoothSizes(const QString &family,
                                              const QString &style) {
  return ::QFontDatabase::smoothSizes(family, style);
}
QList<int> QFontDatabase_wrapper::standardSizes() {
  return ::QFontDatabase::standardSizes();
}
QString QFontDatabase_wrapper::styleString(const QFont &font) {
  return ::QFontDatabase::styleString(font);
}
QList<QString> QFontDatabase_wrapper::styles(const QString &family) {
  return ::QFontDatabase::styles(family);
}
QFont QFontDatabase_wrapper::systemFont(QFontDatabase::SystemFont type) {
  return ::QFontDatabase::systemFont(type);
}
int QFontDatabase_wrapper::weight(const QString &family, const QString &style) {
  return ::QFontDatabase::weight(family, style);
}
QFontDatabase_wrapper::~QFontDatabase_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QFontDatabase *fromPtr(void *ptr) {
  return reinterpret_cast<QFontDatabase *>(ptr);
}
static QtDartBindings_wrappersNS::QFontDatabase_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QFontDatabase_wrapper *>(
      ptr);
}
extern "C" {
void c_QFontDatabase_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QFontDatabase_wrapper *>(
      cppObj);
} // addApplicationFont(const QString & fileName)
int c_static_QFontDatabase__addApplicationFont_QString(const char *fileName_) {
  const auto fileName = QString::fromUtf8(fileName_);
  const auto &result =
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::addApplicationFont(
          fileName);
  free((char *)fileName_);
  return result;
}
// addApplicationFontFromData(const QByteArray & fontData)
int c_static_QFontDatabase__addApplicationFontFromData_QByteArray(
    void *fontData_) {
  assert(fontData_);
  auto &fontData = *reinterpret_cast<QByteArray *>(fontData_);
  const auto &result = QtDartBindings_wrappersNS::QFontDatabase_wrapper::
      addApplicationFontFromData(fontData);
  return result;
}
// applicationFontFamilies(int id)
void *c_static_QFontDatabase__applicationFontFamilies_int(int id) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QString>>{
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::applicationFontFamilies(
          id)};
  return result;
}
// bold(const QString & family, const QString & style)
bool c_static_QFontDatabase__bold_QString_QString(const char *family_,
                                                  const char *style_) {
  const auto family = QString::fromUtf8(family_);
  const auto style = QString::fromUtf8(style_);
  const auto &result =
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::bold(family, style);
  free((char *)family_);
  free((char *)style_);
  return result;
}
// families()
void *c_static_QFontDatabase__families() {
  const auto &result = new Dartagnan::ValueWrapper<QList<QString>>{
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::families()};
  return result;
}
// font(const QString & family, const QString & style, int pointSize)
void *c_static_QFontDatabase__font_QString_QString_int(const char *family_,
                                                       const char *style_,
                                                       int pointSize) {
  const auto family = QString::fromUtf8(family_);
  const auto style = QString::fromUtf8(style_);
  const auto &result = new Dartagnan::ValueWrapper<QFont>{
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::font(family, style,
                                                             pointSize)};
  free((char *)family_);
  free((char *)style_);
  return result;
}
// hasFamily(const QString & family)
bool c_static_QFontDatabase__hasFamily_QString(const char *family_) {
  const auto family = QString::fromUtf8(family_);
  const auto &result =
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::hasFamily(family);
  free((char *)family_);
  return result;
}
// isBitmapScalable(const QString & family, const QString & style)
bool c_static_QFontDatabase__isBitmapScalable_QString_QString(
    const char *family_, const char *style_) {
  const auto family = QString::fromUtf8(family_);
  const auto style = QString::fromUtf8(style_);
  const auto &result =
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::isBitmapScalable(family,
                                                                         style);
  free((char *)family_);
  free((char *)style_);
  return result;
}
// isFixedPitch(const QString & family, const QString & style)
bool c_static_QFontDatabase__isFixedPitch_QString_QString(const char *family_,
                                                          const char *style_) {
  const auto family = QString::fromUtf8(family_);
  const auto style = QString::fromUtf8(style_);
  const auto &result =
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::isFixedPitch(family,
                                                                     style);
  free((char *)family_);
  free((char *)style_);
  return result;
}
// isPrivateFamily(const QString & family)
bool c_static_QFontDatabase__isPrivateFamily_QString(const char *family_) {
  const auto family = QString::fromUtf8(family_);
  const auto &result =
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::isPrivateFamily(family);
  free((char *)family_);
  return result;
}
// isScalable(const QString & family, const QString & style)
bool c_static_QFontDatabase__isScalable_QString_QString(const char *family_,
                                                        const char *style_) {
  const auto family = QString::fromUtf8(family_);
  const auto style = QString::fromUtf8(style_);
  const auto &result =
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::isScalable(family,
                                                                   style);
  free((char *)family_);
  free((char *)style_);
  return result;
}
// isSmoothlyScalable(const QString & family, const QString & style)
bool c_static_QFontDatabase__isSmoothlyScalable_QString_QString(
    const char *family_, const char *style_) {
  const auto family = QString::fromUtf8(family_);
  const auto style = QString::fromUtf8(style_);
  const auto &result =
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::isSmoothlyScalable(
          family, style);
  free((char *)family_);
  free((char *)style_);
  return result;
}
// italic(const QString & family, const QString & style)
bool c_static_QFontDatabase__italic_QString_QString(const char *family_,
                                                    const char *style_) {
  const auto family = QString::fromUtf8(family_);
  const auto style = QString::fromUtf8(style_);
  const auto &result =
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::italic(family, style);
  free((char *)family_);
  free((char *)style_);
  return result;
}
// pointSizes(const QString & family, const QString & style)
void *c_static_QFontDatabase__pointSizes_QString_QString(const char *family_,
                                                         const char *style_) {
  const auto family = QString::fromUtf8(family_);
  const auto style = QString::fromUtf8(style_);
  const auto &result = new Dartagnan::ValueWrapper<QList<int>>{
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::pointSizes(family,
                                                                   style)};
  free((char *)family_);
  free((char *)style_);
  return result;
}
// removeAllApplicationFonts()
bool c_static_QFontDatabase__removeAllApplicationFonts() {
  const auto &result = QtDartBindings_wrappersNS::QFontDatabase_wrapper::
      removeAllApplicationFonts();
  return result;
}
// removeApplicationFont(int id)
bool c_static_QFontDatabase__removeApplicationFont_int(int id) {
  const auto &result =
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::removeApplicationFont(
          id);
  return result;
}
// smoothSizes(const QString & family, const QString & style)
void *c_static_QFontDatabase__smoothSizes_QString_QString(const char *family_,
                                                          const char *style_) {
  const auto family = QString::fromUtf8(family_);
  const auto style = QString::fromUtf8(style_);
  const auto &result = new Dartagnan::ValueWrapper<QList<int>>{
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::smoothSizes(family,
                                                                    style)};
  free((char *)family_);
  free((char *)style_);
  return result;
}
// standardSizes()
void *c_static_QFontDatabase__standardSizes() {
  const auto &result = new Dartagnan::ValueWrapper<QList<int>>{
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::standardSizes()};
  return result;
}
// styleString(const QFont & font)
void *c_static_QFontDatabase__styleString_QFont(void *font_) {
  assert(font_);
  auto &font = *reinterpret_cast<QFont *>(font_);
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::styleString(font)};
  return result;
}
// styles(const QString & family)
void *c_static_QFontDatabase__styles_QString(const char *family_) {
  const auto family = QString::fromUtf8(family_);
  const auto &result = new Dartagnan::ValueWrapper<QList<QString>>{
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::styles(family)};
  free((char *)family_);
  return result;
}
// systemFont(QFontDatabase::SystemFont type)
void *c_static_QFontDatabase__systemFont_SystemFont(int type) {
  const auto &result = new Dartagnan::ValueWrapper<QFont>{
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::systemFont(
          static_cast<QFontDatabase::SystemFont>(type))};
  return result;
}
// weight(const QString & family, const QString & style)
int c_static_QFontDatabase__weight_QString_QString(const char *family_,
                                                   const char *style_) {
  const auto family = QString::fromUtf8(family_);
  const auto style = QString::fromUtf8(style_);
  const auto &result =
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::weight(family, style);
  free((char *)family_);
  free((char *)style_);
  return result;
}
void c_QFontDatabase__destructor(void *thisObj) { delete fromPtr(thisObj); }
}
