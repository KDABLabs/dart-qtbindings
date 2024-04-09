#include "QFontDatabase_wrapper.h"

#include <QDebug>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
int QFontDatabase_wrapper::addApplicationFont(const QString &fileName) {
  // tag=1000

  // tag=1004
  return ::QFontDatabase::addApplicationFont(fileName);
}
int QFontDatabase_wrapper::addApplicationFontFromData(
    const QByteArray &fontData) {
  // tag=1000

  // tag=1004
  return ::QFontDatabase::addApplicationFontFromData(fontData);
}
QList<QString> QFontDatabase_wrapper::applicationFontFamilies(int id) {
  // tag=1000

  // tag=1004
  return ::QFontDatabase::applicationFontFamilies(id);
}
bool QFontDatabase_wrapper::bold(const QString &family, const QString &style) {
  // tag=1000

  // tag=1004
  return ::QFontDatabase::bold(family, style);
}
QList<QString> QFontDatabase_wrapper::families() {
  // tag=1000

  // tag=1004
  return ::QFontDatabase::families();
}
QFont QFontDatabase_wrapper::font(const QString &family, const QString &style,
                                  int pointSize) {
  // tag=1000

  // tag=1004
  return ::QFontDatabase::font(family, style, pointSize);
}
bool QFontDatabase_wrapper::hasFamily(const QString &family) {
  // tag=1000

  // tag=1004
  return ::QFontDatabase::hasFamily(family);
}
bool QFontDatabase_wrapper::isBitmapScalable(const QString &family,
                                             const QString &style) {
  // tag=1000

  // tag=1004
  return ::QFontDatabase::isBitmapScalable(family, style);
}
bool QFontDatabase_wrapper::isFixedPitch(const QString &family,
                                         const QString &style) {
  // tag=1000

  // tag=1004
  return ::QFontDatabase::isFixedPitch(family, style);
}
bool QFontDatabase_wrapper::isPrivateFamily(const QString &family) {
  // tag=1000

  // tag=1004
  return ::QFontDatabase::isPrivateFamily(family);
}
bool QFontDatabase_wrapper::isScalable(const QString &family,
                                       const QString &style) {
  // tag=1000

  // tag=1004
  return ::QFontDatabase::isScalable(family, style);
}
bool QFontDatabase_wrapper::isSmoothlyScalable(const QString &family,
                                               const QString &style) {
  // tag=1000

  // tag=1004
  return ::QFontDatabase::isSmoothlyScalable(family, style);
}
bool QFontDatabase_wrapper::italic(const QString &family,
                                   const QString &style) {
  // tag=1000

  // tag=1004
  return ::QFontDatabase::italic(family, style);
}
QList<int> QFontDatabase_wrapper::pointSizes(const QString &family,
                                             const QString &style) {
  // tag=1000

  // tag=1004
  return ::QFontDatabase::pointSizes(family, style);
}
bool QFontDatabase_wrapper::removeAllApplicationFonts() {
  // tag=1000

  // tag=1004
  return ::QFontDatabase::removeAllApplicationFonts();
}
bool QFontDatabase_wrapper::removeApplicationFont(int id) {
  // tag=1000

  // tag=1004
  return ::QFontDatabase::removeApplicationFont(id);
}
QList<int> QFontDatabase_wrapper::smoothSizes(const QString &family,
                                              const QString &style) {
  // tag=1000

  // tag=1004
  return ::QFontDatabase::smoothSizes(family, style);
}
QList<int> QFontDatabase_wrapper::standardSizes() {
  // tag=1000

  // tag=1004
  return ::QFontDatabase::standardSizes();
}
QString QFontDatabase_wrapper::styleString(const QFont &font) {
  // tag=1000

  // tag=1004
  return ::QFontDatabase::styleString(font);
}
QList<QString> QFontDatabase_wrapper::styles(const QString &family) {
  // tag=1000

  // tag=1004
  return ::QFontDatabase::styles(family);
}
QFont QFontDatabase_wrapper::systemFont(QFontDatabase::SystemFont type) {
  // tag=1000

  // tag=1004
  return ::QFontDatabase::systemFont(type);
}
int QFontDatabase_wrapper::weight(const QString &family, const QString &style) {
  // tag=1000

  // tag=1004
  return ::QFontDatabase::weight(family, style);
}

// tag=1005
QFontDatabase_wrapper::~QFontDatabase_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QFontDatabase *fromPtr(void *ptr) {
  return reinterpret_cast<QFontDatabase *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QFontDatabase_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QFontDatabase_wrapper *>(
      ptr);
}
extern "C" {

// tag=1049
void c_QFontDatabase_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QFontDatabase_wrapper *>(
      cppObj);
}
// tag=1050
// addApplicationFont(const QString & fileName)
int c_static_QFontDatabase__addApplicationFont_QString(const char *fileName_) {
  const auto fileName = QString::fromUtf8(fileName_);
  return
      // tag=1068
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::addApplicationFont(
          fileName);
}

// tag=1050
// addApplicationFontFromData(const QByteArray & fontData)
int c_static_QFontDatabase__addApplicationFontFromData_QByteArray(
    void *fontData_) {
  auto &fontData = *reinterpret_cast<QByteArray *>(fontData_);
  return
      // tag=1068
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::
          addApplicationFontFromData(fontData);
}

// tag=1050
// applicationFontFamilies(int id)
void *c_static_QFontDatabase__applicationFontFamilies_int(int id) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QString>>{
          QtDartBindings_wrappersNS::QFontDatabase_wrapper::
              applicationFontFamilies(id)};
}

// tag=1050
// bold(const QString & family, const QString & style)
bool c_static_QFontDatabase__bold_QString_QString(const char *family_,
                                                  const char *style_) {
  const auto family = QString::fromUtf8(family_);
  const auto style = QString::fromUtf8(style_);
  return
      // tag=1068
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::bold(family, style);
}

// tag=1050
// families()
void *c_static_QFontDatabase__families() {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QString>>{
          QtDartBindings_wrappersNS::QFontDatabase_wrapper::families()};
}

// tag=1050
// font(const QString & family, const QString & style, int pointSize)
void *c_static_QFontDatabase__font_QString_QString_int(const char *family_,
                                                       const char *style_,
                                                       int pointSize) {
  const auto family = QString::fromUtf8(family_);
  const auto style = QString::fromUtf8(style_);
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QFont>{
          QtDartBindings_wrappersNS::QFontDatabase_wrapper::font(family, style,
                                                                 pointSize)};
}

// tag=1050
// hasFamily(const QString & family)
bool c_static_QFontDatabase__hasFamily_QString(const char *family_) {
  const auto family = QString::fromUtf8(family_);
  return
      // tag=1068
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::hasFamily(family);
}

// tag=1050
// isBitmapScalable(const QString & family, const QString & style)
bool c_static_QFontDatabase__isBitmapScalable_QString_QString(
    const char *family_, const char *style_) {
  const auto family = QString::fromUtf8(family_);
  const auto style = QString::fromUtf8(style_);
  return
      // tag=1068
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::isBitmapScalable(family,
                                                                         style);
}

// tag=1050
// isFixedPitch(const QString & family, const QString & style)
bool c_static_QFontDatabase__isFixedPitch_QString_QString(const char *family_,
                                                          const char *style_) {
  const auto family = QString::fromUtf8(family_);
  const auto style = QString::fromUtf8(style_);
  return
      // tag=1068
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::isFixedPitch(family,
                                                                     style);
}

// tag=1050
// isPrivateFamily(const QString & family)
bool c_static_QFontDatabase__isPrivateFamily_QString(const char *family_) {
  const auto family = QString::fromUtf8(family_);
  return
      // tag=1068
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::isPrivateFamily(family);
}

// tag=1050
// isScalable(const QString & family, const QString & style)
bool c_static_QFontDatabase__isScalable_QString_QString(const char *family_,
                                                        const char *style_) {
  const auto family = QString::fromUtf8(family_);
  const auto style = QString::fromUtf8(style_);
  return
      // tag=1068
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::isScalable(family,
                                                                   style);
}

// tag=1050
// isSmoothlyScalable(const QString & family, const QString & style)
bool c_static_QFontDatabase__isSmoothlyScalable_QString_QString(
    const char *family_, const char *style_) {
  const auto family = QString::fromUtf8(family_);
  const auto style = QString::fromUtf8(style_);
  return
      // tag=1068
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::isSmoothlyScalable(
          family, style);
}

// tag=1050
// italic(const QString & family, const QString & style)
bool c_static_QFontDatabase__italic_QString_QString(const char *family_,
                                                    const char *style_) {
  const auto family = QString::fromUtf8(family_);
  const auto style = QString::fromUtf8(style_);
  return
      // tag=1068
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::italic(family, style);
}

// tag=1050
// pointSizes(const QString & family, const QString & style)
void *c_static_QFontDatabase__pointSizes_QString_QString(const char *family_,
                                                         const char *style_) {
  const auto family = QString::fromUtf8(family_);
  const auto style = QString::fromUtf8(style_);
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QList<int>>{
          QtDartBindings_wrappersNS::QFontDatabase_wrapper::pointSizes(family,
                                                                       style)};
}

// tag=1050
// removeAllApplicationFonts()
bool c_static_QFontDatabase__removeAllApplicationFonts() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::
          removeAllApplicationFonts();
}

// tag=1050
// removeApplicationFont(int id)
bool c_static_QFontDatabase__removeApplicationFont_int(int id) {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::removeApplicationFont(
          id);
}

// tag=1050
// smoothSizes(const QString & family, const QString & style)
void *c_static_QFontDatabase__smoothSizes_QString_QString(const char *family_,
                                                          const char *style_) {
  const auto family = QString::fromUtf8(family_);
  const auto style = QString::fromUtf8(style_);
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QList<int>>{
          QtDartBindings_wrappersNS::QFontDatabase_wrapper::smoothSizes(family,
                                                                        style)};
}

// tag=1050
// standardSizes()
void *c_static_QFontDatabase__standardSizes() {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QList<int>>{
          QtDartBindings_wrappersNS::QFontDatabase_wrapper::standardSizes()};
}

// tag=1050
// styleString(const QFont & font)
void *c_static_QFontDatabase__styleString_QFont(void *font_) {
  auto &font = *reinterpret_cast<QFont *>(font_);
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QFontDatabase_wrapper::styleString(font)};
}

// tag=1050
// styles(const QString & family)
void *c_static_QFontDatabase__styles_QString(const char *family_) {
  const auto family = QString::fromUtf8(family_);
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QString>>{
          QtDartBindings_wrappersNS::QFontDatabase_wrapper::styles(family)};
}

// tag=1050
// systemFont(QFontDatabase::SystemFont type)
void *c_static_QFontDatabase__systemFont_SystemFont(int type) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QFont>{
          QtDartBindings_wrappersNS::QFontDatabase_wrapper::systemFont(
              static_cast<QFontDatabase::SystemFont>(type))};
}

// tag=1050
// weight(const QString & family, const QString & style)
int c_static_QFontDatabase__weight_QString_QString(const char *family_,
                                                   const char *style_) {
  const auto family = QString::fromUtf8(family_);
  const auto style = QString::fromUtf8(style_);
  return
      // tag=1068
      QtDartBindings_wrappersNS::QFontDatabase_wrapper::weight(family, style);
}
void c_QFontDatabase__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
}
