
// tag=1040
#include "QtDartBindings_exports.h"
#include <qfont.h>
#include <qlist.h>
#include <qstring.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
// tag=1043
class QFont_wrapper : public ::QFont {
public:
  ~QFont_wrapper();
  // tag=1041
  QFont_wrapper();
  // tag=1041
  QFont_wrapper(const QList<QString> &families, int pointSize = -1,
                int weight = -1, bool italic = false);
  // tag=1041
  QFont_wrapper(const QString &family, int pointSize = -1, int weight = -1,
                bool italic = false);
  // tag=1041
  bool bold() const;
  // tag=1041
  static void cacheStatistics();
  // tag=1041
  static void cleanup();
  // tag=1041
  QString defaultFamily() const;
  // tag=1041
  bool exactMatch() const;
  // tag=1041
  QList<QString> families() const;
  // tag=1041
  QString family() const;
  // tag=1041
  bool fixedPitch() const;
  // tag=1041
  bool fromString(const QString &arg__1);
  // tag=1041
  static void initialize();
  // tag=1041
  static void insertSubstitution(const QString &arg__1, const QString &arg__2);
  // tag=1041
  static void insertSubstitutions(const QString &arg__1,
                                  const QList<QString> &arg__2);
  // tag=1041
  bool isCopyOf(const QFont &arg__1) const;
  // tag=1041
  bool italic() const;
  // tag=1041
  bool kerning() const;
  // tag=1041
  QString key() const;
  // tag=1041
  qreal letterSpacing() const;
  // tag=1041
  bool overline() const;
  // tag=1041
  int pixelSize() const;
  // tag=1041
  int pointSize() const;
  // tag=1041
  qreal pointSizeF() const;
  // tag=1041
  static void removeSubstitutions(const QString &arg__1);
  // tag=1041
  QFont resolve(const QFont &arg__1) const;
  // tag=1041
  void setBold(bool arg__1);
  // tag=1041
  void setFamilies(const QList<QString> &arg__1);
  // tag=1041
  void setFamily(const QString &arg__1);
  // tag=1041
  void setFixedPitch(bool arg__1);
  // tag=1041
  void setItalic(bool b);
  // tag=1041
  void setKerning(bool arg__1);
  // tag=1041
  void setOverline(bool arg__1);
  // tag=1041
  void setPixelSize(int arg__1);
  // tag=1041
  void setPointSize(int arg__1);
  // tag=1041
  void setPointSizeF(qreal arg__1);
  // tag=1041
  void setStretch(int arg__1);
  // tag=1041
  void setStrikeOut(bool arg__1);
  // tag=1041
  void setStyleHint(QFont::StyleHint arg__1);
  // tag=1041
  void setStyleName(const QString &arg__1);
  // tag=1041
  void setUnderline(bool arg__1);
  // tag=1041
  void setWordSpacing(qreal spacing);
  // tag=1041
  int stretch() const;
  // tag=1041
  bool strikeOut() const;
  // tag=1041
  QFont::StyleHint styleHint() const;
  // tag=1041
  QString styleName() const;
  // tag=1041
  static QString substitute(const QString &arg__1);
  // tag=1041
  static QList<QString> substitutes(const QString &arg__1);
  // tag=1041
  static QList<QString> substitutions();
  // tag=1041
  bool underline() const;
  // tag=1041
  qreal wordSpacing() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QFont::QFont()
QtDartBindings_EXPORT void *c_QFont__constructor();

// tag=1067
//  QFont::QFont(const QList<QString > & families, int pointSize, int weight,
//  bool italic)
QtDartBindings_EXPORT void *
c_QFont__constructor_QList_QString_int_int_bool(void *families_, int pointSize,
                                                int weight, bool italic);

// tag=1067
//  QFont::QFont(const QString & family, int pointSize, int weight, bool italic)
QtDartBindings_EXPORT void *
c_QFont__constructor_QString_int_int_bool(const char *family_, int pointSize,
                                          int weight, bool italic);

// tag=1067
//  QFont::bold() const
QtDartBindings_EXPORT bool c_QFont__bold(void *thisObj);

// tag=1067
//  QFont::cacheStatistics()
QtDartBindings_EXPORT void c_static_QFont__cacheStatistics();

// tag=1067
//  QFont::cleanup()
QtDartBindings_EXPORT void c_static_QFont__cleanup();

// tag=1067
//  QFont::defaultFamily() const
QtDartBindings_EXPORT void *c_QFont__defaultFamily(void *thisObj);

// tag=1067
//  QFont::exactMatch() const
QtDartBindings_EXPORT bool c_QFont__exactMatch(void *thisObj);

// tag=1067
//  QFont::families() const
QtDartBindings_EXPORT void *c_QFont__families(void *thisObj);

// tag=1067
//  QFont::family() const
QtDartBindings_EXPORT void *c_QFont__family(void *thisObj);

// tag=1067
//  QFont::fixedPitch() const
QtDartBindings_EXPORT bool c_QFont__fixedPitch(void *thisObj);

// tag=1067
//  QFont::fromString(const QString & arg__1)
QtDartBindings_EXPORT bool c_QFont__fromString_QString(void *thisObj,
                                                       const char *arg__1_);

// tag=1067
//  QFont::initialize()
QtDartBindings_EXPORT void c_static_QFont__initialize();

// tag=1067
//  QFont::insertSubstitution(const QString & arg__1, const QString & arg__2)
QtDartBindings_EXPORT void
c_static_QFont__insertSubstitution_QString_QString(const char *arg__1_,
                                                   const char *arg__2_);

// tag=1067
//  QFont::insertSubstitutions(const QString & arg__1, const QList<QString > &
//  arg__2)
QtDartBindings_EXPORT void
c_static_QFont__insertSubstitutions_QString_QList_QString(const char *arg__1_,
                                                          void *arg__2_);

// tag=1067
//  QFont::isCopyOf(const QFont & arg__1) const
QtDartBindings_EXPORT bool c_QFont__isCopyOf_QFont(void *thisObj,
                                                   void *arg__1_);

// tag=1067
//  QFont::italic() const
QtDartBindings_EXPORT bool c_QFont__italic(void *thisObj);

// tag=1067
//  QFont::kerning() const
QtDartBindings_EXPORT bool c_QFont__kerning(void *thisObj);

// tag=1067
//  QFont::key() const
QtDartBindings_EXPORT void *c_QFont__key(void *thisObj);

// tag=1067
//  QFont::letterSpacing() const
QtDartBindings_EXPORT qreal c_QFont__letterSpacing(void *thisObj);

// tag=1067
//  QFont::overline() const
QtDartBindings_EXPORT bool c_QFont__overline(void *thisObj);

// tag=1067
//  QFont::pixelSize() const
QtDartBindings_EXPORT int c_QFont__pixelSize(void *thisObj);

// tag=1067
//  QFont::pointSize() const
QtDartBindings_EXPORT int c_QFont__pointSize(void *thisObj);

// tag=1067
//  QFont::pointSizeF() const
QtDartBindings_EXPORT qreal c_QFont__pointSizeF(void *thisObj);

// tag=1067
//  QFont::removeSubstitutions(const QString & arg__1)
QtDartBindings_EXPORT void
c_static_QFont__removeSubstitutions_QString(const char *arg__1_);

// tag=1067
//  QFont::resolve(const QFont & arg__1) const
QtDartBindings_EXPORT void *c_QFont__resolve_QFont(void *thisObj,
                                                   void *arg__1_);

// tag=1067
//  QFont::setBold(bool arg__1)
QtDartBindings_EXPORT void c_QFont__setBold_bool(void *thisObj, bool arg__1);

// tag=1067
//  QFont::setFamilies(const QList<QString > & arg__1)
QtDartBindings_EXPORT void c_QFont__setFamilies_QList_QString(void *thisObj,
                                                              void *arg__1_);

// tag=1067
//  QFont::setFamily(const QString & arg__1)
QtDartBindings_EXPORT void c_QFont__setFamily_QString(void *thisObj,
                                                      const char *arg__1_);

// tag=1067
//  QFont::setFixedPitch(bool arg__1)
QtDartBindings_EXPORT void c_QFont__setFixedPitch_bool(void *thisObj,
                                                       bool arg__1);

// tag=1067
//  QFont::setItalic(bool b)
QtDartBindings_EXPORT void c_QFont__setItalic_bool(void *thisObj, bool b);

// tag=1067
//  QFont::setKerning(bool arg__1)
QtDartBindings_EXPORT void c_QFont__setKerning_bool(void *thisObj, bool arg__1);

// tag=1067
//  QFont::setOverline(bool arg__1)
QtDartBindings_EXPORT void c_QFont__setOverline_bool(void *thisObj,
                                                     bool arg__1);

// tag=1067
//  QFont::setPixelSize(int arg__1)
QtDartBindings_EXPORT void c_QFont__setPixelSize_int(void *thisObj, int arg__1);

// tag=1067
//  QFont::setPointSize(int arg__1)
QtDartBindings_EXPORT void c_QFont__setPointSize_int(void *thisObj, int arg__1);

// tag=1067
//  QFont::setPointSizeF(qreal arg__1)
QtDartBindings_EXPORT void c_QFont__setPointSizeF_qreal(void *thisObj,
                                                        qreal arg__1);

// tag=1067
//  QFont::setStretch(int arg__1)
QtDartBindings_EXPORT void c_QFont__setStretch_int(void *thisObj, int arg__1);

// tag=1067
//  QFont::setStrikeOut(bool arg__1)
QtDartBindings_EXPORT void c_QFont__setStrikeOut_bool(void *thisObj,
                                                      bool arg__1);

// tag=1067
//  QFont::setStyleHint(QFont::StyleHint arg__1)
QtDartBindings_EXPORT void c_QFont__setStyleHint_StyleHint(void *thisObj,
                                                           int arg__1);

// tag=1067
//  QFont::setStyleName(const QString & arg__1)
QtDartBindings_EXPORT void c_QFont__setStyleName_QString(void *thisObj,
                                                         const char *arg__1_);

// tag=1067
//  QFont::setUnderline(bool arg__1)
QtDartBindings_EXPORT void c_QFont__setUnderline_bool(void *thisObj,
                                                      bool arg__1);

// tag=1067
//  QFont::setWordSpacing(qreal spacing)
QtDartBindings_EXPORT void c_QFont__setWordSpacing_qreal(void *thisObj,
                                                         qreal spacing);

// tag=1067
//  QFont::stretch() const
QtDartBindings_EXPORT int c_QFont__stretch(void *thisObj);

// tag=1067
//  QFont::strikeOut() const
QtDartBindings_EXPORT bool c_QFont__strikeOut(void *thisObj);

// tag=1067
//  QFont::styleHint() const
QtDartBindings_EXPORT int c_QFont__styleHint(void *thisObj);

// tag=1067
//  QFont::styleName() const
QtDartBindings_EXPORT void *c_QFont__styleName(void *thisObj);

// tag=1067
//  QFont::substitute(const QString & arg__1)
QtDartBindings_EXPORT void *
c_static_QFont__substitute_QString(const char *arg__1_);

// tag=1067
//  QFont::substitutes(const QString & arg__1)
QtDartBindings_EXPORT void *
c_static_QFont__substitutes_QString(const char *arg__1_);

// tag=1067
//  QFont::substitutions()
QtDartBindings_EXPORT void *c_static_QFont__substitutions();

// tag=1067
//  QFont::underline() const
QtDartBindings_EXPORT bool c_QFont__underline(void *thisObj);

// tag=1067
//  QFont::wordSpacing() const
QtDartBindings_EXPORT qreal c_QFont__wordSpacing(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QFont__destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QFont_Finalizer(void *, void *cppObj, void *);
}
