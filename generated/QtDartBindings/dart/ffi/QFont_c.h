/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qfont.h>
#include <qlist.h>
#include <qstring.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
class QFont_wrapper : public ::QFont {
public:
  ~QFont_wrapper();
  QFont_wrapper();
  QFont_wrapper(const QList<QString> &families, int pointSize = -1,
                int weight = -1, bool italic = false);
  QFont_wrapper(const QString &family, int pointSize = -1, int weight = -1,
                bool italic = false);
  bool bold() const;
  static void cacheStatistics();
  static void cleanup();
  QString defaultFamily() const;
  bool exactMatch() const;
  QList<QString> families() const;
  QString family() const;
  bool fixedPitch() const;
  bool fromString(const QString &arg__1);
  static void initialize();
  static void insertSubstitution(const QString &arg__1, const QString &arg__2);
  static void insertSubstitutions(const QString &arg__1,
                                  const QList<QString> &arg__2);
  bool isCopyOf(const QFont &arg__1) const;
  bool italic() const;
  bool kerning() const;
  QString key() const;
  qreal letterSpacing() const;
  bool overline() const;
  int pixelSize() const;
  int pointSize() const;
  qreal pointSizeF() const;
  static void removeSubstitutions(const QString &arg__1);
  QFont resolve(const QFont &arg__1) const;
  void setBold(bool arg__1);
  void setFamilies(const QList<QString> &arg__1);
  void setFamily(const QString &arg__1);
  void setFixedPitch(bool arg__1);
  void setItalic(bool b);
  void setKerning(bool arg__1);
  void setOverline(bool arg__1);
  void setPixelSize(int arg__1);
  void setPointSize(int arg__1);
  void setPointSizeF(qreal arg__1);
  void setStretch(int arg__1);
  void setStrikeOut(bool arg__1);
  void setStyleHint(QFont::StyleHint arg__1);
  void setStyleName(const QString &arg__1);
  void setUnderline(bool arg__1);
  void setWordSpacing(qreal spacing);
  int stretch() const;
  bool strikeOut() const;
  QFont::StyleHint styleHint() const;
  QString styleName() const;
  static QString substitute(const QString &arg__1);
  static QList<QString> substitutes(const QString &arg__1);
  static QList<QString> substitutions();
  bool underline() const;
  qreal wordSpacing() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QFont::QFont()
QtDartBindings_EXPORT void *c_QFont__constructor();
// QFont::QFont(const QList<QString > & families, int pointSize, int weight,
// bool italic)
QtDartBindings_EXPORT void *
c_QFont__constructor_QList_QString_int_int_bool(void *families_, int pointSize,
                                                int weight, bool italic);
// QFont::QFont(const QString & family, int pointSize, int weight, bool italic)
QtDartBindings_EXPORT void *
c_QFont__constructor_QString_int_int_bool(const char *family_, int pointSize,
                                          int weight, bool italic);
// QFont::bold() const
QtDartBindings_EXPORT bool c_QFont__bold(void *thisObj);
// QFont::cacheStatistics()
QtDartBindings_EXPORT void c_static_QFont__cacheStatistics();
// QFont::cleanup()
QtDartBindings_EXPORT void c_static_QFont__cleanup();
// QFont::defaultFamily() const
QtDartBindings_EXPORT void *c_QFont__defaultFamily(void *thisObj);
// QFont::exactMatch() const
QtDartBindings_EXPORT bool c_QFont__exactMatch(void *thisObj);
// QFont::families() const
QtDartBindings_EXPORT void *c_QFont__families(void *thisObj);
// QFont::family() const
QtDartBindings_EXPORT void *c_QFont__family(void *thisObj);
// QFont::fixedPitch() const
QtDartBindings_EXPORT bool c_QFont__fixedPitch(void *thisObj);
// QFont::fromString(const QString & arg__1)
QtDartBindings_EXPORT bool c_QFont__fromString_QString(void *thisObj,
                                                       const char *arg__1_);
// QFont::initialize()
QtDartBindings_EXPORT void c_static_QFont__initialize();
// QFont::insertSubstitution(const QString & arg__1, const QString & arg__2)
QtDartBindings_EXPORT void
c_static_QFont__insertSubstitution_QString_QString(const char *arg__1_,
                                                   const char *arg__2_);
// QFont::insertSubstitutions(const QString & arg__1, const QList<QString > &
// arg__2)
QtDartBindings_EXPORT void
c_static_QFont__insertSubstitutions_QString_QList_QString(const char *arg__1_,
                                                          void *arg__2_);
// QFont::isCopyOf(const QFont & arg__1) const
QtDartBindings_EXPORT bool c_QFont__isCopyOf_QFont(void *thisObj,
                                                   void *arg__1_);
// QFont::italic() const
QtDartBindings_EXPORT bool c_QFont__italic(void *thisObj);
// QFont::kerning() const
QtDartBindings_EXPORT bool c_QFont__kerning(void *thisObj);
// QFont::key() const
QtDartBindings_EXPORT void *c_QFont__key(void *thisObj);
// QFont::letterSpacing() const
QtDartBindings_EXPORT qreal c_QFont__letterSpacing(void *thisObj);
// QFont::overline() const
QtDartBindings_EXPORT bool c_QFont__overline(void *thisObj);
// QFont::pixelSize() const
QtDartBindings_EXPORT int c_QFont__pixelSize(void *thisObj);
// QFont::pointSize() const
QtDartBindings_EXPORT int c_QFont__pointSize(void *thisObj);
// QFont::pointSizeF() const
QtDartBindings_EXPORT qreal c_QFont__pointSizeF(void *thisObj);
// QFont::removeSubstitutions(const QString & arg__1)
QtDartBindings_EXPORT void
c_static_QFont__removeSubstitutions_QString(const char *arg__1_);
// QFont::resolve(const QFont & arg__1) const
QtDartBindings_EXPORT void *c_QFont__resolve_QFont(void *thisObj,
                                                   void *arg__1_);
// QFont::setBold(bool arg__1)
QtDartBindings_EXPORT void c_QFont__setBold_bool(void *thisObj, bool arg__1);
// QFont::setFamilies(const QList<QString > & arg__1)
QtDartBindings_EXPORT void c_QFont__setFamilies_QList_QString(void *thisObj,
                                                              void *arg__1_);
// QFont::setFamily(const QString & arg__1)
QtDartBindings_EXPORT void c_QFont__setFamily_QString(void *thisObj,
                                                      const char *arg__1_);
// QFont::setFixedPitch(bool arg__1)
QtDartBindings_EXPORT void c_QFont__setFixedPitch_bool(void *thisObj,
                                                       bool arg__1);
// QFont::setItalic(bool b)
QtDartBindings_EXPORT void c_QFont__setItalic_bool(void *thisObj, bool b);
// QFont::setKerning(bool arg__1)
QtDartBindings_EXPORT void c_QFont__setKerning_bool(void *thisObj, bool arg__1);
// QFont::setOverline(bool arg__1)
QtDartBindings_EXPORT void c_QFont__setOverline_bool(void *thisObj,
                                                     bool arg__1);
// QFont::setPixelSize(int arg__1)
QtDartBindings_EXPORT void c_QFont__setPixelSize_int(void *thisObj, int arg__1);
// QFont::setPointSize(int arg__1)
QtDartBindings_EXPORT void c_QFont__setPointSize_int(void *thisObj, int arg__1);
// QFont::setPointSizeF(qreal arg__1)
QtDartBindings_EXPORT void c_QFont__setPointSizeF_qreal(void *thisObj,
                                                        qreal arg__1);
// QFont::setStretch(int arg__1)
QtDartBindings_EXPORT void c_QFont__setStretch_int(void *thisObj, int arg__1);
// QFont::setStrikeOut(bool arg__1)
QtDartBindings_EXPORT void c_QFont__setStrikeOut_bool(void *thisObj,
                                                      bool arg__1);
// QFont::setStyleHint(QFont::StyleHint arg__1)
QtDartBindings_EXPORT void c_QFont__setStyleHint_StyleHint(void *thisObj,
                                                           int arg__1);
// QFont::setStyleName(const QString & arg__1)
QtDartBindings_EXPORT void c_QFont__setStyleName_QString(void *thisObj,
                                                         const char *arg__1_);
// QFont::setUnderline(bool arg__1)
QtDartBindings_EXPORT void c_QFont__setUnderline_bool(void *thisObj,
                                                      bool arg__1);
// QFont::setWordSpacing(qreal spacing)
QtDartBindings_EXPORT void c_QFont__setWordSpacing_qreal(void *thisObj,
                                                         qreal spacing);
// QFont::stretch() const
QtDartBindings_EXPORT int c_QFont__stretch(void *thisObj);
// QFont::strikeOut() const
QtDartBindings_EXPORT bool c_QFont__strikeOut(void *thisObj);
// QFont::styleHint() const
QtDartBindings_EXPORT int c_QFont__styleHint(void *thisObj);
// QFont::styleName() const
QtDartBindings_EXPORT void *c_QFont__styleName(void *thisObj);
// QFont::substitute(const QString & arg__1)
QtDartBindings_EXPORT void *
c_static_QFont__substitute_QString(const char *arg__1_);
// QFont::substitutes(const QString & arg__1)
QtDartBindings_EXPORT void *
c_static_QFont__substitutes_QString(const char *arg__1_);
// QFont::substitutions()
QtDartBindings_EXPORT void *c_static_QFont__substitutions();
// QFont::underline() const
QtDartBindings_EXPORT bool c_QFont__underline(void *thisObj);
// QFont::wordSpacing() const
QtDartBindings_EXPORT qreal c_QFont__wordSpacing(void *thisObj);
QtDartBindings_EXPORT void c_QFont__destructor(void *thisObj);
QtDartBindings_EXPORT void c_QFont_Finalizer(void *cppObj);
}
