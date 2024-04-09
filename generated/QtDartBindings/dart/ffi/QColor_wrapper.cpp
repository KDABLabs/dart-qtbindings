#include "QColor_wrapper.h"

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
QColor_wrapper::QColor_wrapper() : ::QColor() {}

// tag=1006
QColor_wrapper::QColor_wrapper(const QString &name) : ::QColor(name) {}

// tag=1006
QColor_wrapper::QColor_wrapper(const char *aname) : ::QColor(aname) {}

// tag=1006
QColor_wrapper::QColor_wrapper(int r, int g, int b, int a)
    : ::QColor(r, g, b, a) {}
int QColor_wrapper::alpha() const {
  // tag=1000

  // tag=1004
  return ::QColor::alpha();
}
float QColor_wrapper::alphaF() const {
  // tag=1000

  // tag=1004
  return ::QColor::alphaF();
}
int QColor_wrapper::black() const {
  // tag=1000

  // tag=1004
  return ::QColor::black();
}
float QColor_wrapper::blackF() const {
  // tag=1000

  // tag=1004
  return ::QColor::blackF();
}
int QColor_wrapper::blue() const {
  // tag=1000

  // tag=1004
  return ::QColor::blue();
}
float QColor_wrapper::blueF() const {
  // tag=1000

  // tag=1004
  return ::QColor::blueF();
}
QList<QString> QColor_wrapper::colorNames() {
  // tag=1000

  // tag=1004
  return ::QColor::colorNames();
}
int QColor_wrapper::cyan() const {
  // tag=1000

  // tag=1004
  return ::QColor::cyan();
}
float QColor_wrapper::cyanF() const {
  // tag=1000

  // tag=1004
  return ::QColor::cyanF();
}
QColor QColor_wrapper::darker(int f) const {
  // tag=1000

  // tag=1004
  return ::QColor::darker(f);
}
QColor QColor_wrapper::fromCmyk(int c, int m, int y, int k, int a) {
  // tag=1000

  // tag=1004
  return ::QColor::fromCmyk(c, m, y, k, a);
}
QColor QColor_wrapper::fromCmykF(float c, float m, float y, float k, float a) {
  // tag=1000

  // tag=1004
  return ::QColor::fromCmykF(c, m, y, k, a);
}
QColor QColor_wrapper::fromHsl(int h, int s, int l, int a) {
  // tag=1000

  // tag=1004
  return ::QColor::fromHsl(h, s, l, a);
}
QColor QColor_wrapper::fromHslF(float h, float s, float l, float a) {
  // tag=1000

  // tag=1004
  return ::QColor::fromHslF(h, s, l, a);
}
QColor QColor_wrapper::fromHsv(int h, int s, int v, int a) {
  // tag=1000

  // tag=1004
  return ::QColor::fromHsv(h, s, v, a);
}
QColor QColor_wrapper::fromHsvF(float h, float s, float v, float a) {
  // tag=1000

  // tag=1004
  return ::QColor::fromHsvF(h, s, v, a);
}
QColor QColor_wrapper::fromRgb(int r, int g, int b, int a) {
  // tag=1000

  // tag=1004
  return ::QColor::fromRgb(r, g, b, a);
}
QColor QColor_wrapper::fromRgbF(float r, float g, float b, float a) {
  // tag=1000

  // tag=1004
  return ::QColor::fromRgbF(r, g, b, a);
}
int QColor_wrapper::green() const {
  // tag=1000

  // tag=1004
  return ::QColor::green();
}
float QColor_wrapper::greenF() const {
  // tag=1000

  // tag=1004
  return ::QColor::greenF();
}
int QColor_wrapper::hslHue() const {
  // tag=1000

  // tag=1004
  return ::QColor::hslHue();
}
float QColor_wrapper::hslHueF() const {
  // tag=1000

  // tag=1004
  return ::QColor::hslHueF();
}
int QColor_wrapper::hslSaturation() const {
  // tag=1000

  // tag=1004
  return ::QColor::hslSaturation();
}
float QColor_wrapper::hslSaturationF() const {
  // tag=1000

  // tag=1004
  return ::QColor::hslSaturationF();
}
int QColor_wrapper::hsvHue() const {
  // tag=1000

  // tag=1004
  return ::QColor::hsvHue();
}
float QColor_wrapper::hsvHueF() const {
  // tag=1000

  // tag=1004
  return ::QColor::hsvHueF();
}
int QColor_wrapper::hsvSaturation() const {
  // tag=1000

  // tag=1004
  return ::QColor::hsvSaturation();
}
float QColor_wrapper::hsvSaturationF() const {
  // tag=1000

  // tag=1004
  return ::QColor::hsvSaturationF();
}
int QColor_wrapper::hue() const {
  // tag=1000

  // tag=1004
  return ::QColor::hue();
}
float QColor_wrapper::hueF() const {
  // tag=1000

  // tag=1004
  return ::QColor::hueF();
}
bool QColor_wrapper::isValid() const {
  // tag=1000

  // tag=1004
  return ::QColor::isValid();
}
bool QColor_wrapper::isValidColor(const QString &name) {
  // tag=1000

  // tag=1004
  return ::QColor::isValidColor(name);
}
QColor QColor_wrapper::lighter(int f) const {
  // tag=1000

  // tag=1004
  return ::QColor::lighter(f);
}
int QColor_wrapper::lightness() const {
  // tag=1000

  // tag=1004
  return ::QColor::lightness();
}
float QColor_wrapper::lightnessF() const {
  // tag=1000

  // tag=1004
  return ::QColor::lightnessF();
}
int QColor_wrapper::magenta() const {
  // tag=1000

  // tag=1004
  return ::QColor::magenta();
}
float QColor_wrapper::magentaF() const {
  // tag=1000

  // tag=1004
  return ::QColor::magentaF();
}
QString QColor_wrapper::name() const {
  // tag=1000

  // tag=1004
  return ::QColor::name();
}
int QColor_wrapper::red() const {
  // tag=1000

  // tag=1004
  return ::QColor::red();
}
float QColor_wrapper::redF() const {
  // tag=1000

  // tag=1004
  return ::QColor::redF();
}
int QColor_wrapper::saturation() const {
  // tag=1000

  // tag=1004
  return ::QColor::saturation();
}
float QColor_wrapper::saturationF() const {
  // tag=1000

  // tag=1004
  return ::QColor::saturationF();
}
void QColor_wrapper::setAlpha(int alpha) {
  // tag=1000

  // tag=1004
  ::QColor::setAlpha(alpha);
}
void QColor_wrapper::setAlphaF(float alpha) {
  // tag=1000

  // tag=1004
  ::QColor::setAlphaF(alpha);
}
void QColor_wrapper::setBlue(int blue) {
  // tag=1000

  // tag=1004
  ::QColor::setBlue(blue);
}
void QColor_wrapper::setBlueF(float blue) {
  // tag=1000

  // tag=1004
  ::QColor::setBlueF(blue);
}
void QColor_wrapper::setCmyk(int c, int m, int y, int k, int a) {
  // tag=1000

  // tag=1004
  ::QColor::setCmyk(c, m, y, k, a);
}
void QColor_wrapper::setCmykF(float c, float m, float y, float k, float a) {
  // tag=1000

  // tag=1004
  ::QColor::setCmykF(c, m, y, k, a);
}
void QColor_wrapper::setGreen(int green) {
  // tag=1000

  // tag=1004
  ::QColor::setGreen(green);
}
void QColor_wrapper::setGreenF(float green) {
  // tag=1000

  // tag=1004
  ::QColor::setGreenF(green);
}
void QColor_wrapper::setHsl(int h, int s, int l, int a) {
  // tag=1000

  // tag=1004
  ::QColor::setHsl(h, s, l, a);
}
void QColor_wrapper::setHslF(float h, float s, float l, float a) {
  // tag=1000

  // tag=1004
  ::QColor::setHslF(h, s, l, a);
}
void QColor_wrapper::setHsv(int h, int s, int v, int a) {
  // tag=1000

  // tag=1004
  ::QColor::setHsv(h, s, v, a);
}
void QColor_wrapper::setHsvF(float h, float s, float v, float a) {
  // tag=1000

  // tag=1004
  ::QColor::setHsvF(h, s, v, a);
}
void QColor_wrapper::setNamedColor(const QString &name) {
  // tag=1000

  // tag=1004
  ::QColor::setNamedColor(name);
}
void QColor_wrapper::setRed(int red) {
  // tag=1000

  // tag=1004
  ::QColor::setRed(red);
}
void QColor_wrapper::setRedF(float red) {
  // tag=1000

  // tag=1004
  ::QColor::setRedF(red);
}
void QColor_wrapper::setRgb(int r, int g, int b, int a) {
  // tag=1000

  // tag=1004
  ::QColor::setRgb(r, g, b, a);
}
void QColor_wrapper::setRgbF(float r, float g, float b, float a) {
  // tag=1000

  // tag=1004
  ::QColor::setRgbF(r, g, b, a);
}
QColor QColor_wrapper::toCmyk() const {
  // tag=1000

  // tag=1004
  return ::QColor::toCmyk();
}
QColor QColor_wrapper::toExtendedRgb() const {
  // tag=1000

  // tag=1004
  return ::QColor::toExtendedRgb();
}
QColor QColor_wrapper::toHsl() const {
  // tag=1000

  // tag=1004
  return ::QColor::toHsl();
}
QColor QColor_wrapper::toHsv() const {
  // tag=1000

  // tag=1004
  return ::QColor::toHsv();
}
QColor QColor_wrapper::toRgb() const {
  // tag=1000

  // tag=1004
  return ::QColor::toRgb();
}
int QColor_wrapper::value() const {
  // tag=1000

  // tag=1004
  return ::QColor::value();
}
float QColor_wrapper::valueF() const {
  // tag=1000

  // tag=1004
  return ::QColor::valueF();
}
int QColor_wrapper::yellow() const {
  // tag=1000

  // tag=1004
  return ::QColor::yellow();
}
float QColor_wrapper::yellowF() const {
  // tag=1000

  // tag=1004
  return ::QColor::yellowF();
}

// tag=1005
QColor_wrapper::~QColor_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QColor *fromPtr(void *ptr) { return reinterpret_cast<QColor *>(ptr); }
// tag=1014
static QtDartBindings_wrappersNS::QColor_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QColor_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QColor_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QColor_wrapper *>(cppObj);
}
void *c_QColor__constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QColor_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QColor__constructor_QString(const char *name_) {
  const auto name = QString::fromUtf8(name_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QColor_wrapper(name);
  return reinterpret_cast<void *>(ptr);
}
void *c_QColor__constructor_char(const char *aname) {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QColor_wrapper(aname);
  return reinterpret_cast<void *>(ptr);
}
void *c_QColor__constructor_int_int_int_int(int r, int g, int b, int a) {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QColor_wrapper(r, g, b, a);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// alpha() const
int c_QColor__alpha(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->alpha();
}

// tag=1050
// alphaF() const
float c_QColor__alphaF(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->alphaF();
}

// tag=1050
// black() const
int c_QColor__black(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->black();
}

// tag=1050
// blackF() const
float c_QColor__blackF(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->blackF();
}

// tag=1050
// blue() const
int c_QColor__blue(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->blue();
}

// tag=1050
// blueF() const
float c_QColor__blueF(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->blueF();
}

// tag=1050
// colorNames()
void *c_static_QColor__colorNames() {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QString>>{
          QtDartBindings_wrappersNS::QColor_wrapper::colorNames()};
}

// tag=1050
// cyan() const
int c_QColor__cyan(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->cyan();
}

// tag=1050
// cyanF() const
float c_QColor__cyanF(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->cyanF();
}

// tag=1050
// darker(int f) const
void *c_QColor__darker_int(void *thisObj, int f) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QColor>{fromPtr(thisObj)->darker(f)};
}

// tag=1050
// fromCmyk(int c, int m, int y, int k, int a)
void *c_static_QColor__fromCmyk_int_int_int_int_int(int c, int m, int y, int k,
                                                    int a) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QColor>{
          QtDartBindings_wrappersNS::QColor_wrapper::fromCmyk(c, m, y, k, a)};
}

// tag=1050
// fromCmykF(float c, float m, float y, float k, float a)
void *c_static_QColor__fromCmykF_float_float_float_float_float(float c, float m,
                                                               float y, float k,
                                                               float a) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QColor>{
          QtDartBindings_wrappersNS::QColor_wrapper::fromCmykF(c, m, y, k, a)};
}

// tag=1050
// fromHsl(int h, int s, int l, int a)
void *c_static_QColor__fromHsl_int_int_int_int(int h, int s, int l, int a) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QColor>{
          QtDartBindings_wrappersNS::QColor_wrapper::fromHsl(h, s, l, a)};
}

// tag=1050
// fromHslF(float h, float s, float l, float a)
void *c_static_QColor__fromHslF_float_float_float_float(float h, float s,
                                                        float l, float a) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QColor>{
          QtDartBindings_wrappersNS::QColor_wrapper::fromHslF(h, s, l, a)};
}

// tag=1050
// fromHsv(int h, int s, int v, int a)
void *c_static_QColor__fromHsv_int_int_int_int(int h, int s, int v, int a) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QColor>{
          QtDartBindings_wrappersNS::QColor_wrapper::fromHsv(h, s, v, a)};
}

// tag=1050
// fromHsvF(float h, float s, float v, float a)
void *c_static_QColor__fromHsvF_float_float_float_float(float h, float s,
                                                        float v, float a) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QColor>{
          QtDartBindings_wrappersNS::QColor_wrapper::fromHsvF(h, s, v, a)};
}

// tag=1050
// fromRgb(int r, int g, int b, int a)
void *c_static_QColor__fromRgb_int_int_int_int(int r, int g, int b, int a) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QColor>{
          QtDartBindings_wrappersNS::QColor_wrapper::fromRgb(r, g, b, a)};
}

// tag=1050
// fromRgbF(float r, float g, float b, float a)
void *c_static_QColor__fromRgbF_float_float_float_float(float r, float g,
                                                        float b, float a) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QColor>{
          QtDartBindings_wrappersNS::QColor_wrapper::fromRgbF(r, g, b, a)};
}

// tag=1050
// green() const
int c_QColor__green(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->green();
}

// tag=1050
// greenF() const
float c_QColor__greenF(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->greenF();
}

// tag=1050
// hslHue() const
int c_QColor__hslHue(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->hslHue();
}

// tag=1050
// hslHueF() const
float c_QColor__hslHueF(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->hslHueF();
}

// tag=1050
// hslSaturation() const
int c_QColor__hslSaturation(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->hslSaturation();
}

// tag=1050
// hslSaturationF() const
float c_QColor__hslSaturationF(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->hslSaturationF();
}

// tag=1050
// hsvHue() const
int c_QColor__hsvHue(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->hsvHue();
}

// tag=1050
// hsvHueF() const
float c_QColor__hsvHueF(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->hsvHueF();
}

// tag=1050
// hsvSaturation() const
int c_QColor__hsvSaturation(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->hsvSaturation();
}

// tag=1050
// hsvSaturationF() const
float c_QColor__hsvSaturationF(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->hsvSaturationF();
}

// tag=1050
// hue() const
int c_QColor__hue(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->hue();
}

// tag=1050
// hueF() const
float c_QColor__hueF(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->hueF();
}

// tag=1050
// isValid() const
bool c_QColor__isValid(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isValid();
}

// tag=1050
// isValidColor(const QString & name)
bool c_static_QColor__isValidColor_QString(const char *name_) {
  const auto name = QString::fromUtf8(name_);
  return
      // tag=1068
      QtDartBindings_wrappersNS::QColor_wrapper::isValidColor(name);
}

// tag=1050
// lighter(int f) const
void *c_QColor__lighter_int(void *thisObj, int f) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QColor>{fromPtr(thisObj)->lighter(f)};
}

// tag=1050
// lightness() const
int c_QColor__lightness(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->lightness();
}

// tag=1050
// lightnessF() const
float c_QColor__lightnessF(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->lightnessF();
}

// tag=1050
// magenta() const
int c_QColor__magenta(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->magenta();
}

// tag=1050
// magentaF() const
float c_QColor__magentaF(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->magentaF();
}

// tag=1050
// name() const
void *c_QColor__name(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->name()};
}

// tag=1050
// red() const
int c_QColor__red(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->red();
}

// tag=1050
// redF() const
float c_QColor__redF(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->redF();
}

// tag=1050
// saturation() const
int c_QColor__saturation(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->saturation();
}

// tag=1050
// saturationF() const
float c_QColor__saturationF(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->saturationF();
}

// tag=1050
// setAlpha(int alpha)
void c_QColor__setAlpha_int(void *thisObj, int alpha) {
  // tag=1010
  fromPtr(thisObj)->setAlpha(alpha);
}

// tag=1050
// setAlphaF(float alpha)
void c_QColor__setAlphaF_float(void *thisObj, float alpha) {
  // tag=1010
  fromPtr(thisObj)->setAlphaF(alpha);
}

// tag=1050
// setBlue(int blue)
void c_QColor__setBlue_int(void *thisObj, int blue) {
  // tag=1010
  fromPtr(thisObj)->setBlue(blue);
}

// tag=1050
// setBlueF(float blue)
void c_QColor__setBlueF_float(void *thisObj, float blue) {
  // tag=1010
  fromPtr(thisObj)->setBlueF(blue);
}

// tag=1050
// setCmyk(int c, int m, int y, int k, int a)
void c_QColor__setCmyk_int_int_int_int_int(void *thisObj, int c, int m, int y,
                                           int k, int a) {
  // tag=1010
  fromPtr(thisObj)->setCmyk(c, m, y, k, a);
}

// tag=1050
// setCmykF(float c, float m, float y, float k, float a)
void c_QColor__setCmykF_float_float_float_float_float(void *thisObj, float c,
                                                      float m, float y, float k,
                                                      float a) {
  // tag=1010
  fromPtr(thisObj)->setCmykF(c, m, y, k, a);
}

// tag=1050
// setGreen(int green)
void c_QColor__setGreen_int(void *thisObj, int green) {
  // tag=1010
  fromPtr(thisObj)->setGreen(green);
}

// tag=1050
// setGreenF(float green)
void c_QColor__setGreenF_float(void *thisObj, float green) {
  // tag=1010
  fromPtr(thisObj)->setGreenF(green);
}

// tag=1050
// setHsl(int h, int s, int l, int a)
void c_QColor__setHsl_int_int_int_int(void *thisObj, int h, int s, int l,
                                      int a) {
  // tag=1010
  fromPtr(thisObj)->setHsl(h, s, l, a);
}

// tag=1050
// setHslF(float h, float s, float l, float a)
void c_QColor__setHslF_float_float_float_float(void *thisObj, float h, float s,
                                               float l, float a) {
  // tag=1010
  fromPtr(thisObj)->setHslF(h, s, l, a);
}

// tag=1050
// setHsv(int h, int s, int v, int a)
void c_QColor__setHsv_int_int_int_int(void *thisObj, int h, int s, int v,
                                      int a) {
  // tag=1010
  fromPtr(thisObj)->setHsv(h, s, v, a);
}

// tag=1050
// setHsvF(float h, float s, float v, float a)
void c_QColor__setHsvF_float_float_float_float(void *thisObj, float h, float s,
                                               float v, float a) {
  // tag=1010
  fromPtr(thisObj)->setHsvF(h, s, v, a);
}

// tag=1050
// setNamedColor(const QString & name)
void c_QColor__setNamedColor_QString(void *thisObj, const char *name_) {
  const auto name = QString::fromUtf8(name_);
  // tag=1010
  fromPtr(thisObj)->setNamedColor(name);
}

// tag=1050
// setRed(int red)
void c_QColor__setRed_int(void *thisObj, int red) {
  // tag=1010
  fromPtr(thisObj)->setRed(red);
}

// tag=1050
// setRedF(float red)
void c_QColor__setRedF_float(void *thisObj, float red) {
  // tag=1010
  fromPtr(thisObj)->setRedF(red);
}

// tag=1050
// setRgb(int r, int g, int b, int a)
void c_QColor__setRgb_int_int_int_int(void *thisObj, int r, int g, int b,
                                      int a) {
  // tag=1010
  fromPtr(thisObj)->setRgb(r, g, b, a);
}

// tag=1050
// setRgbF(float r, float g, float b, float a)
void c_QColor__setRgbF_float_float_float_float(void *thisObj, float r, float g,
                                               float b, float a) {
  // tag=1010
  fromPtr(thisObj)->setRgbF(r, g, b, a);
}

// tag=1050
// toCmyk() const
void *c_QColor__toCmyk(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QColor>{fromPtr(thisObj)->toCmyk()};
}

// tag=1050
// toExtendedRgb() const
void *c_QColor__toExtendedRgb(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QColor>{fromPtr(thisObj)->toExtendedRgb()};
}

// tag=1050
// toHsl() const
void *c_QColor__toHsl(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QColor>{fromPtr(thisObj)->toHsl()};
}

// tag=1050
// toHsv() const
void *c_QColor__toHsv(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QColor>{fromPtr(thisObj)->toHsv()};
}

// tag=1050
// toRgb() const
void *c_QColor__toRgb(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QColor>{fromPtr(thisObj)->toRgb()};
}

// tag=1050
// value() const
int c_QColor__value(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->value();
}

// tag=1050
// valueF() const
float c_QColor__valueF(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->valueF();
}

// tag=1050
// yellow() const
int c_QColor__yellow(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->yellow();
}

// tag=1050
// yellowF() const
float c_QColor__yellowF(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->yellowF();
}
void c_QColor__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
}
