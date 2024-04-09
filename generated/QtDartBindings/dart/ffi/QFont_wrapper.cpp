#include "QFont_wrapper.h"

#include <QDebug>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
// tag=1006
QFont_wrapper::QFont_wrapper() : ::QFont() {}

// tag=1006
QFont_wrapper::QFont_wrapper(const QList<QString> &families, int pointSize,
                             int weight, bool italic)
    : ::QFont(families, pointSize, weight, italic) {}

// tag=1006
QFont_wrapper::QFont_wrapper(const QString &family, int pointSize, int weight,
                             bool italic)
    : ::QFont(family, pointSize, weight, italic) {}
bool QFont_wrapper::bold() const {
  // tag=1000

  // tag=1004
  return ::QFont::bold();
}
void QFont_wrapper::cacheStatistics() {
  // tag=1000

  // tag=1004
  ::QFont::cacheStatistics();
}
void QFont_wrapper::cleanup() {
  // tag=1000

  // tag=1004
  ::QFont::cleanup();
}
QString QFont_wrapper::defaultFamily() const {
  // tag=1000

  // tag=1004
  return ::QFont::defaultFamily();
}
bool QFont_wrapper::exactMatch() const {
  // tag=1000

  // tag=1004
  return ::QFont::exactMatch();
}
QList<QString> QFont_wrapper::families() const {
  // tag=1000

  // tag=1004
  return ::QFont::families();
}
QString QFont_wrapper::family() const {
  // tag=1000

  // tag=1004
  return ::QFont::family();
}
bool QFont_wrapper::fixedPitch() const {
  // tag=1000

  // tag=1004
  return ::QFont::fixedPitch();
}
bool QFont_wrapper::fromString(const QString &arg__1) {
  // tag=1000

  // tag=1004
  return ::QFont::fromString(arg__1);
}
void QFont_wrapper::initialize() {
  // tag=1000

  // tag=1004
  ::QFont::initialize();
}
void QFont_wrapper::insertSubstitution(const QString &arg__1,
                                       const QString &arg__2) {
  // tag=1000

  // tag=1004
  ::QFont::insertSubstitution(arg__1, arg__2);
}
void QFont_wrapper::insertSubstitutions(const QString &arg__1,
                                        const QList<QString> &arg__2) {
  // tag=1000

  // tag=1004
  ::QFont::insertSubstitutions(arg__1, arg__2);
}
bool QFont_wrapper::isCopyOf(const QFont &arg__1) const {
  // tag=1000

  // tag=1004
  return ::QFont::isCopyOf(arg__1);
}
bool QFont_wrapper::italic() const {
  // tag=1000

  // tag=1004
  return ::QFont::italic();
}
bool QFont_wrapper::kerning() const {
  // tag=1000

  // tag=1004
  return ::QFont::kerning();
}
QString QFont_wrapper::key() const {
  // tag=1000

  // tag=1004
  return ::QFont::key();
}
qreal QFont_wrapper::letterSpacing() const {
  // tag=1000

  // tag=1004
  return ::QFont::letterSpacing();
}
bool QFont_wrapper::overline() const {
  // tag=1000

  // tag=1004
  return ::QFont::overline();
}
int QFont_wrapper::pixelSize() const {
  // tag=1000

  // tag=1004
  return ::QFont::pixelSize();
}
int QFont_wrapper::pointSize() const {
  // tag=1000

  // tag=1004
  return ::QFont::pointSize();
}
qreal QFont_wrapper::pointSizeF() const {
  // tag=1000

  // tag=1004
  return ::QFont::pointSizeF();
}
void QFont_wrapper::removeSubstitutions(const QString &arg__1) {
  // tag=1000

  // tag=1004
  ::QFont::removeSubstitutions(arg__1);
}
QFont QFont_wrapper::resolve(const QFont &arg__1) const {
  // tag=1000

  // tag=1004
  return ::QFont::resolve(arg__1);
}
void QFont_wrapper::setBold(bool arg__1) {
  // tag=1000

  // tag=1004
  ::QFont::setBold(arg__1);
}
void QFont_wrapper::setFamilies(const QList<QString> &arg__1) {
  // tag=1000

  // tag=1004
  ::QFont::setFamilies(arg__1);
}
void QFont_wrapper::setFamily(const QString &arg__1) {
  // tag=1000

  // tag=1004
  ::QFont::setFamily(arg__1);
}
void QFont_wrapper::setFixedPitch(bool arg__1) {
  // tag=1000

  // tag=1004
  ::QFont::setFixedPitch(arg__1);
}
void QFont_wrapper::setItalic(bool b) {
  // tag=1000

  // tag=1004
  ::QFont::setItalic(b);
}
void QFont_wrapper::setKerning(bool arg__1) {
  // tag=1000

  // tag=1004
  ::QFont::setKerning(arg__1);
}
void QFont_wrapper::setOverline(bool arg__1) {
  // tag=1000

  // tag=1004
  ::QFont::setOverline(arg__1);
}
void QFont_wrapper::setPixelSize(int arg__1) {
  // tag=1000

  // tag=1004
  ::QFont::setPixelSize(arg__1);
}
void QFont_wrapper::setPointSize(int arg__1) {
  // tag=1000

  // tag=1004
  ::QFont::setPointSize(arg__1);
}
void QFont_wrapper::setPointSizeF(qreal arg__1) {
  // tag=1000

  // tag=1004
  ::QFont::setPointSizeF(arg__1);
}
void QFont_wrapper::setStretch(int arg__1) {
  // tag=1000

  // tag=1004
  ::QFont::setStretch(arg__1);
}
void QFont_wrapper::setStrikeOut(bool arg__1) {
  // tag=1000

  // tag=1004
  ::QFont::setStrikeOut(arg__1);
}
void QFont_wrapper::setStyleHint(QFont::StyleHint arg__1) {
  // tag=1000

  // tag=1004
  ::QFont::setStyleHint(arg__1);
}
void QFont_wrapper::setStyleName(const QString &arg__1) {
  // tag=1000

  // tag=1004
  ::QFont::setStyleName(arg__1);
}
void QFont_wrapper::setUnderline(bool arg__1) {
  // tag=1000

  // tag=1004
  ::QFont::setUnderline(arg__1);
}
void QFont_wrapper::setWordSpacing(qreal spacing) {
  // tag=1000

  // tag=1004
  ::QFont::setWordSpacing(spacing);
}
int QFont_wrapper::stretch() const {
  // tag=1000

  // tag=1004
  return ::QFont::stretch();
}
bool QFont_wrapper::strikeOut() const {
  // tag=1000

  // tag=1004
  return ::QFont::strikeOut();
}
QFont::StyleHint QFont_wrapper::styleHint() const {
  // tag=1000

  // tag=1004
  return ::QFont::styleHint();
}
QString QFont_wrapper::styleName() const {
  // tag=1000

  // tag=1004
  return ::QFont::styleName();
}
QString QFont_wrapper::substitute(const QString &arg__1) {
  // tag=1000

  // tag=1004
  return ::QFont::substitute(arg__1);
}
QList<QString> QFont_wrapper::substitutes(const QString &arg__1) {
  // tag=1000

  // tag=1004
  return ::QFont::substitutes(arg__1);
}
QList<QString> QFont_wrapper::substitutions() {
  // tag=1000

  // tag=1004
  return ::QFont::substitutions();
}
bool QFont_wrapper::underline() const {
  // tag=1000

  // tag=1004
  return ::QFont::underline();
}
qreal QFont_wrapper::wordSpacing() const {
  // tag=1000

  // tag=1004
  return ::QFont::wordSpacing();
}

// tag=1005
QFont_wrapper::~QFont_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QFont *fromPtr(void *ptr) { return reinterpret_cast<QFont *>(ptr); }
// tag=1014
static QtDartBindings_wrappersNS::QFont_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QFont_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QFont_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QFont_wrapper *>(cppObj);
}
void *c_QFont__constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QFont_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QFont__constructor_QList_QString_int_int_bool(void *families_,
                                                      int pointSize, int weight,
                                                      bool italic) {
  auto &families = *reinterpret_cast<QList<QString> *>(families_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QFont_wrapper(families, pointSize,
                                                          weight, italic);
  return reinterpret_cast<void *>(ptr);
}
void *c_QFont__constructor_QString_int_int_bool(const char *family_,
                                                int pointSize, int weight,
                                                bool italic) {
  const auto family = QString::fromUtf8(family_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QFont_wrapper(family, pointSize,
                                                          weight, italic);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// bold() const
bool c_QFont__bold(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->bold();
}

// tag=1050
// cacheStatistics()
void c_static_QFont__cacheStatistics() {
  // tag=1068
  QtDartBindings_wrappersNS::QFont_wrapper::cacheStatistics();
}

// tag=1050
// cleanup()
void c_static_QFont__cleanup() {
  // tag=1068
  QtDartBindings_wrappersNS::QFont_wrapper::cleanup();
}

// tag=1050
// defaultFamily() const
void *c_QFont__defaultFamily(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->defaultFamily()};
}

// tag=1050
// exactMatch() const
bool c_QFont__exactMatch(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->exactMatch();
}

// tag=1050
// families() const
void *c_QFont__families(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QString>>{fromPtr(thisObj)->families()};
}

// tag=1050
// family() const
void *c_QFont__family(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->family()};
}

// tag=1050
// fixedPitch() const
bool c_QFont__fixedPitch(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->fixedPitch();
}

// tag=1050
// fromString(const QString & arg__1)
bool c_QFont__fromString_QString(void *thisObj, const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  return
      // tag=1010
      fromPtr(thisObj)->fromString(arg__1);
}

// tag=1050
// initialize()
void c_static_QFont__initialize() {
  // tag=1068
  QtDartBindings_wrappersNS::QFont_wrapper::initialize();
}

// tag=1050
// insertSubstitution(const QString & arg__1, const QString & arg__2)
void c_static_QFont__insertSubstitution_QString_QString(const char *arg__1_,
                                                        const char *arg__2_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  const auto arg__2 = QString::fromUtf8(arg__2_);
  // tag=1068
  QtDartBindings_wrappersNS::QFont_wrapper::insertSubstitution(arg__1, arg__2);
}

// tag=1050
// insertSubstitutions(const QString & arg__1, const QList<QString > & arg__2)
void c_static_QFont__insertSubstitutions_QString_QList_QString(
    const char *arg__1_, void *arg__2_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  auto &arg__2 = *reinterpret_cast<QList<QString> *>(arg__2_);
  // tag=1068
  QtDartBindings_wrappersNS::QFont_wrapper::insertSubstitutions(arg__1, arg__2);
}

// tag=1050
// isCopyOf(const QFont & arg__1) const
bool c_QFont__isCopyOf_QFont(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QFont *>(arg__1_);
  return
      // tag=1010
      fromPtr(thisObj)->isCopyOf(arg__1);
}

// tag=1050
// italic() const
bool c_QFont__italic(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->italic();
}

// tag=1050
// kerning() const
bool c_QFont__kerning(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->kerning();
}

// tag=1050
// key() const
void *c_QFont__key(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->key()};
}

// tag=1050
// letterSpacing() const
qreal c_QFont__letterSpacing(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->letterSpacing();
}

// tag=1050
// overline() const
bool c_QFont__overline(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->overline();
}

// tag=1050
// pixelSize() const
int c_QFont__pixelSize(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->pixelSize();
}

// tag=1050
// pointSize() const
int c_QFont__pointSize(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->pointSize();
}

// tag=1050
// pointSizeF() const
qreal c_QFont__pointSizeF(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->pointSizeF();
}

// tag=1050
// removeSubstitutions(const QString & arg__1)
void c_static_QFont__removeSubstitutions_QString(const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  // tag=1068
  QtDartBindings_wrappersNS::QFont_wrapper::removeSubstitutions(arg__1);
}

// tag=1050
// resolve(const QFont & arg__1) const
void *c_QFont__resolve_QFont(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QFont *>(arg__1_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QFont>{fromPtr(thisObj)->resolve(arg__1)};
}

// tag=1050
// setBold(bool arg__1)
void c_QFont__setBold_bool(void *thisObj, bool arg__1) {
  // tag=1010
  fromPtr(thisObj)->setBold(arg__1);
}

// tag=1050
// setFamilies(const QList<QString > & arg__1)
void c_QFont__setFamilies_QList_QString(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QList<QString> *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setFamilies(arg__1);
}

// tag=1050
// setFamily(const QString & arg__1)
void c_QFont__setFamily_QString(void *thisObj, const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setFamily(arg__1);
}

// tag=1050
// setFixedPitch(bool arg__1)
void c_QFont__setFixedPitch_bool(void *thisObj, bool arg__1) {
  // tag=1010
  fromPtr(thisObj)->setFixedPitch(arg__1);
}

// tag=1050
// setItalic(bool b)
void c_QFont__setItalic_bool(void *thisObj, bool b) {
  // tag=1010
  fromPtr(thisObj)->setItalic(b);
}

// tag=1050
// setKerning(bool arg__1)
void c_QFont__setKerning_bool(void *thisObj, bool arg__1) {
  // tag=1010
  fromPtr(thisObj)->setKerning(arg__1);
}

// tag=1050
// setOverline(bool arg__1)
void c_QFont__setOverline_bool(void *thisObj, bool arg__1) {
  // tag=1010
  fromPtr(thisObj)->setOverline(arg__1);
}

// tag=1050
// setPixelSize(int arg__1)
void c_QFont__setPixelSize_int(void *thisObj, int arg__1) {
  // tag=1010
  fromPtr(thisObj)->setPixelSize(arg__1);
}

// tag=1050
// setPointSize(int arg__1)
void c_QFont__setPointSize_int(void *thisObj, int arg__1) {
  // tag=1010
  fromPtr(thisObj)->setPointSize(arg__1);
}

// tag=1050
// setPointSizeF(qreal arg__1)
void c_QFont__setPointSizeF_qreal(void *thisObj, qreal arg__1) {
  // tag=1010
  fromPtr(thisObj)->setPointSizeF(arg__1);
}

// tag=1050
// setStretch(int arg__1)
void c_QFont__setStretch_int(void *thisObj, int arg__1) {
  // tag=1010
  fromPtr(thisObj)->setStretch(arg__1);
}

// tag=1050
// setStrikeOut(bool arg__1)
void c_QFont__setStrikeOut_bool(void *thisObj, bool arg__1) {
  // tag=1010
  fromPtr(thisObj)->setStrikeOut(arg__1);
}

// tag=1050
// setStyleHint(QFont::StyleHint arg__1)
void c_QFont__setStyleHint_StyleHint(void *thisObj, int arg__1) {
  // tag=1010
  fromPtr(thisObj)->setStyleHint(static_cast<QFont::StyleHint>(arg__1));
}

// tag=1050
// setStyleName(const QString & arg__1)
void c_QFont__setStyleName_QString(void *thisObj, const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setStyleName(arg__1);
}

// tag=1050
// setUnderline(bool arg__1)
void c_QFont__setUnderline_bool(void *thisObj, bool arg__1) {
  // tag=1010
  fromPtr(thisObj)->setUnderline(arg__1);
}

// tag=1050
// setWordSpacing(qreal spacing)
void c_QFont__setWordSpacing_qreal(void *thisObj, qreal spacing) {
  // tag=1010
  fromPtr(thisObj)->setWordSpacing(spacing);
}

// tag=1050
// stretch() const
int c_QFont__stretch(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->stretch();
}

// tag=1050
// strikeOut() const
bool c_QFont__strikeOut(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->strikeOut();
}

// tag=1050
// styleHint() const
int c_QFont__styleHint(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->styleHint();
}

// tag=1050
// styleName() const
void *c_QFont__styleName(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->styleName()};
}

// tag=1050
// substitute(const QString & arg__1)
void *c_static_QFont__substitute_QString(const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QFont_wrapper::substitute(arg__1)};
}

// tag=1050
// substitutes(const QString & arg__1)
void *c_static_QFont__substitutes_QString(const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QString>>{
          QtDartBindings_wrappersNS::QFont_wrapper::substitutes(arg__1)};
}

// tag=1050
// substitutions()
void *c_static_QFont__substitutions() {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QString>>{
          QtDartBindings_wrappersNS::QFont_wrapper::substitutions()};
}

// tag=1050
// underline() const
bool c_QFont__underline(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->underline();
}

// tag=1050
// wordSpacing() const
qreal c_QFont__wordSpacing(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->wordSpacing();
}
void c_QFont__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
}
