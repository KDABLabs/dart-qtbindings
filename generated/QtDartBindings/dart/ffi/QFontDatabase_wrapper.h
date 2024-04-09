
// tag=1040
#include "QtDartBindings_exports.h"
#include <qbytearray.h>
#include <qfont.h>
#include <qfontdatabase.h>
#include <qlist.h>
#include <qstring.h>

namespace QtDartBindings_wrappersNS {
// tag=1043
class QFontDatabase_wrapper : public ::QFontDatabase {
public:
  ~QFontDatabase_wrapper();
  // tag=1041
  static int addApplicationFont(const QString &fileName);
  // tag=1041
  static int addApplicationFontFromData(const QByteArray &fontData);
  // tag=1041
  static QList<QString> applicationFontFamilies(int id);
  // tag=1041
  static bool bold(const QString &family, const QString &style);
  // tag=1041
  static QList<QString> families();
  // tag=1041
  static QFont font(const QString &family, const QString &style, int pointSize);
  // tag=1041
  static bool hasFamily(const QString &family);
  // tag=1041
  static bool isBitmapScalable(const QString &family,
                               const QString &style = QString());
  // tag=1041
  static bool isFixedPitch(const QString &family,
                           const QString &style = QString());
  // tag=1041
  static bool isPrivateFamily(const QString &family);
  // tag=1041
  static bool isScalable(const QString &family,
                         const QString &style = QString());
  // tag=1041
  static bool isSmoothlyScalable(const QString &family,
                                 const QString &style = QString());
  // tag=1041
  static bool italic(const QString &family, const QString &style);
  // tag=1041
  static QList<int> pointSizes(const QString &family,
                               const QString &style = QString());
  // tag=1041
  static bool removeAllApplicationFonts();
  // tag=1041
  static bool removeApplicationFont(int id);
  // tag=1041
  static QList<int> smoothSizes(const QString &family, const QString &style);
  // tag=1041
  static QList<int> standardSizes();
  // tag=1041
  static QString styleString(const QFont &font);
  // tag=1041
  static QList<QString> styles(const QString &family);
  // tag=1041
  static QFont systemFont(QFontDatabase::SystemFont type);
  // tag=1041
  static int weight(const QString &family, const QString &style);
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QFontDatabase::addApplicationFont(const QString & fileName)
QtDartBindings_EXPORT int
c_static_QFontDatabase__addApplicationFont_QString(const char *fileName_);

// tag=1067
//  QFontDatabase::addApplicationFontFromData(const QByteArray & fontData)
QtDartBindings_EXPORT int
c_static_QFontDatabase__addApplicationFontFromData_QByteArray(void *fontData_);

// tag=1067
//  QFontDatabase::applicationFontFamilies(int id)
QtDartBindings_EXPORT void *
c_static_QFontDatabase__applicationFontFamilies_int(int id);

// tag=1067
//  QFontDatabase::bold(const QString & family, const QString & style)
QtDartBindings_EXPORT bool
c_static_QFontDatabase__bold_QString_QString(const char *family_,
                                             const char *style_);

// tag=1067
//  QFontDatabase::families()
QtDartBindings_EXPORT void *c_static_QFontDatabase__families();

// tag=1067
//  QFontDatabase::font(const QString & family, const QString & style, int
//  pointSize)
QtDartBindings_EXPORT void *c_static_QFontDatabase__font_QString_QString_int(
    const char *family_, const char *style_, int pointSize);

// tag=1067
//  QFontDatabase::hasFamily(const QString & family)
QtDartBindings_EXPORT bool
c_static_QFontDatabase__hasFamily_QString(const char *family_);

// tag=1067
//  QFontDatabase::isBitmapScalable(const QString & family, const QString &
//  style)
QtDartBindings_EXPORT bool
c_static_QFontDatabase__isBitmapScalable_QString_QString(const char *family_,
                                                         const char *style_);

// tag=1067
//  QFontDatabase::isFixedPitch(const QString & family, const QString & style)
QtDartBindings_EXPORT bool
c_static_QFontDatabase__isFixedPitch_QString_QString(const char *family_,
                                                     const char *style_);

// tag=1067
//  QFontDatabase::isPrivateFamily(const QString & family)
QtDartBindings_EXPORT bool
c_static_QFontDatabase__isPrivateFamily_QString(const char *family_);

// tag=1067
//  QFontDatabase::isScalable(const QString & family, const QString & style)
QtDartBindings_EXPORT bool
c_static_QFontDatabase__isScalable_QString_QString(const char *family_,
                                                   const char *style_);

// tag=1067
//  QFontDatabase::isSmoothlyScalable(const QString & family, const QString &
//  style)
QtDartBindings_EXPORT bool
c_static_QFontDatabase__isSmoothlyScalable_QString_QString(const char *family_,
                                                           const char *style_);

// tag=1067
//  QFontDatabase::italic(const QString & family, const QString & style)
QtDartBindings_EXPORT bool
c_static_QFontDatabase__italic_QString_QString(const char *family_,
                                               const char *style_);

// tag=1067
//  QFontDatabase::pointSizes(const QString & family, const QString & style)
QtDartBindings_EXPORT void *
c_static_QFontDatabase__pointSizes_QString_QString(const char *family_,
                                                   const char *style_);

// tag=1067
//  QFontDatabase::removeAllApplicationFonts()
QtDartBindings_EXPORT bool c_static_QFontDatabase__removeAllApplicationFonts();

// tag=1067
//  QFontDatabase::removeApplicationFont(int id)
QtDartBindings_EXPORT bool
c_static_QFontDatabase__removeApplicationFont_int(int id);

// tag=1067
//  QFontDatabase::smoothSizes(const QString & family, const QString & style)
QtDartBindings_EXPORT void *
c_static_QFontDatabase__smoothSizes_QString_QString(const char *family_,
                                                    const char *style_);

// tag=1067
//  QFontDatabase::standardSizes()
QtDartBindings_EXPORT void *c_static_QFontDatabase__standardSizes();

// tag=1067
//  QFontDatabase::styleString(const QFont & font)
QtDartBindings_EXPORT void *
c_static_QFontDatabase__styleString_QFont(void *font_);

// tag=1067
//  QFontDatabase::styles(const QString & family)
QtDartBindings_EXPORT void *
c_static_QFontDatabase__styles_QString(const char *family_);

// tag=1067
//  QFontDatabase::systemFont(QFontDatabase::SystemFont type)
QtDartBindings_EXPORT void *
c_static_QFontDatabase__systemFont_SystemFont(int type);

// tag=1067
//  QFontDatabase::weight(const QString & family, const QString & style)
QtDartBindings_EXPORT int
c_static_QFontDatabase__weight_QString_QString(const char *family_,
                                               const char *style_);

// tag=1066
QtDartBindings_EXPORT void c_QFontDatabase__destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QFontDatabase_Finalizer(void *, void *cppObj,
                                                     void *);
}
