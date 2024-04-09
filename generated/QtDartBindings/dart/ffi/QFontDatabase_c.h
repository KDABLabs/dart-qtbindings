/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qbytearray.h>
#include <qfont.h>
#include <qfontdatabase.h>
#include <qlist.h>
#include <qstring.h>

namespace QtDartBindings_wrappersNS {
class QFontDatabase_wrapper : public ::QFontDatabase {
public:
  ~QFontDatabase_wrapper();
  static int addApplicationFont(const QString &fileName);
  static int addApplicationFontFromData(const QByteArray &fontData);
  static QList<QString> applicationFontFamilies(int id);
  static bool bold(const QString &family, const QString &style);
  static QList<QString> families();
  static QFont font(const QString &family, const QString &style, int pointSize);
  static bool hasFamily(const QString &family);
  static bool isBitmapScalable(const QString &family,
                               const QString &style = QString());
  static bool isFixedPitch(const QString &family,
                           const QString &style = QString());
  static bool isPrivateFamily(const QString &family);
  static bool isScalable(const QString &family,
                         const QString &style = QString());
  static bool isSmoothlyScalable(const QString &family,
                                 const QString &style = QString());
  static bool italic(const QString &family, const QString &style);
  static QList<int> pointSizes(const QString &family,
                               const QString &style = QString());
  static bool removeAllApplicationFonts();
  static bool removeApplicationFont(int id);
  static QList<int> smoothSizes(const QString &family, const QString &style);
  static QList<int> standardSizes();
  static QString styleString(const QFont &font);
  static QList<QString> styles(const QString &family);
  static QFont systemFont(QFontDatabase::SystemFont type);
  static int weight(const QString &family, const QString &style);
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QFontDatabase::addApplicationFont(const QString & fileName)
QtDartBindings_EXPORT int
c_static_QFontDatabase__addApplicationFont_QString(const char *fileName_);
// QFontDatabase::addApplicationFontFromData(const QByteArray & fontData)
QtDartBindings_EXPORT int
c_static_QFontDatabase__addApplicationFontFromData_QByteArray(void *fontData_);
// QFontDatabase::applicationFontFamilies(int id)
QtDartBindings_EXPORT void *
c_static_QFontDatabase__applicationFontFamilies_int(int id);
// QFontDatabase::bold(const QString & family, const QString & style)
QtDartBindings_EXPORT bool
c_static_QFontDatabase__bold_QString_QString(const char *family_,
                                             const char *style_);
// QFontDatabase::families()
QtDartBindings_EXPORT void *c_static_QFontDatabase__families();
// QFontDatabase::font(const QString & family, const QString & style, int
// pointSize)
QtDartBindings_EXPORT void *c_static_QFontDatabase__font_QString_QString_int(
    const char *family_, const char *style_, int pointSize);
// QFontDatabase::hasFamily(const QString & family)
QtDartBindings_EXPORT bool
c_static_QFontDatabase__hasFamily_QString(const char *family_);
// QFontDatabase::isBitmapScalable(const QString & family, const QString &
// style)
QtDartBindings_EXPORT bool
c_static_QFontDatabase__isBitmapScalable_QString_QString(const char *family_,
                                                         const char *style_);
// QFontDatabase::isFixedPitch(const QString & family, const QString & style)
QtDartBindings_EXPORT bool
c_static_QFontDatabase__isFixedPitch_QString_QString(const char *family_,
                                                     const char *style_);
// QFontDatabase::isPrivateFamily(const QString & family)
QtDartBindings_EXPORT bool
c_static_QFontDatabase__isPrivateFamily_QString(const char *family_);
// QFontDatabase::isScalable(const QString & family, const QString & style)
QtDartBindings_EXPORT bool
c_static_QFontDatabase__isScalable_QString_QString(const char *family_,
                                                   const char *style_);
// QFontDatabase::isSmoothlyScalable(const QString & family, const QString &
// style)
QtDartBindings_EXPORT bool
c_static_QFontDatabase__isSmoothlyScalable_QString_QString(const char *family_,
                                                           const char *style_);
// QFontDatabase::italic(const QString & family, const QString & style)
QtDartBindings_EXPORT bool
c_static_QFontDatabase__italic_QString_QString(const char *family_,
                                               const char *style_);
// QFontDatabase::pointSizes(const QString & family, const QString & style)
QtDartBindings_EXPORT void *
c_static_QFontDatabase__pointSizes_QString_QString(const char *family_,
                                                   const char *style_);
// QFontDatabase::removeAllApplicationFonts()
QtDartBindings_EXPORT bool c_static_QFontDatabase__removeAllApplicationFonts();
// QFontDatabase::removeApplicationFont(int id)
QtDartBindings_EXPORT bool
c_static_QFontDatabase__removeApplicationFont_int(int id);
// QFontDatabase::smoothSizes(const QString & family, const QString & style)
QtDartBindings_EXPORT void *
c_static_QFontDatabase__smoothSizes_QString_QString(const char *family_,
                                                    const char *style_);
// QFontDatabase::standardSizes()
QtDartBindings_EXPORT void *c_static_QFontDatabase__standardSizes();
// QFontDatabase::styleString(const QFont & font)
QtDartBindings_EXPORT void *
c_static_QFontDatabase__styleString_QFont(void *font_);
// QFontDatabase::styles(const QString & family)
QtDartBindings_EXPORT void *
c_static_QFontDatabase__styles_QString(const char *family_);
// QFontDatabase::systemFont(QFontDatabase::SystemFont type)
QtDartBindings_EXPORT void *
c_static_QFontDatabase__systemFont_SystemFont(int type);
// QFontDatabase::weight(const QString & family, const QString & style)
QtDartBindings_EXPORT int
c_static_QFontDatabase__weight_QString_QString(const char *family_,
                                               const char *style_);
QtDartBindings_EXPORT void c_QFontDatabase__destructor(void *thisObj);
QtDartBindings_EXPORT void c_QFontDatabase_Finalizer(void *cppObj);
}
