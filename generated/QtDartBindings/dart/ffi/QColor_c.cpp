/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QColor_c.h"

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
QColor_wrapper::QColor_wrapper() : ::QColor() {}
QColor_wrapper::QColor_wrapper(const QString &name) : ::QColor(name) {}
QColor_wrapper::QColor_wrapper(const char *aname) : ::QColor(aname) {}
QColor_wrapper::QColor_wrapper(int r, int g, int b, int a)
    : ::QColor(r, g, b, a) {}
int QColor_wrapper::alpha() const { return ::QColor::alpha(); }
float QColor_wrapper::alphaF() const { return ::QColor::alphaF(); }
int QColor_wrapper::black() const { return ::QColor::black(); }
float QColor_wrapper::blackF() const { return ::QColor::blackF(); }
int QColor_wrapper::blue() const { return ::QColor::blue(); }
float QColor_wrapper::blueF() const { return ::QColor::blueF(); }
QList<QString> QColor_wrapper::colorNames() { return ::QColor::colorNames(); }
int QColor_wrapper::cyan() const { return ::QColor::cyan(); }
float QColor_wrapper::cyanF() const { return ::QColor::cyanF(); }
QColor QColor_wrapper::darker(int f) const { return ::QColor::darker(f); }
QColor QColor_wrapper::fromCmyk(int c, int m, int y, int k, int a) {
  return ::QColor::fromCmyk(c, m, y, k, a);
}
QColor QColor_wrapper::fromCmykF(float c, float m, float y, float k, float a) {
  return ::QColor::fromCmykF(c, m, y, k, a);
}
QColor QColor_wrapper::fromHsl(int h, int s, int l, int a) {
  return ::QColor::fromHsl(h, s, l, a);
}
QColor QColor_wrapper::fromHslF(float h, float s, float l, float a) {
  return ::QColor::fromHslF(h, s, l, a);
}
QColor QColor_wrapper::fromHsv(int h, int s, int v, int a) {
  return ::QColor::fromHsv(h, s, v, a);
}
QColor QColor_wrapper::fromHsvF(float h, float s, float v, float a) {
  return ::QColor::fromHsvF(h, s, v, a);
}
QColor QColor_wrapper::fromRgb(int r, int g, int b, int a) {
  return ::QColor::fromRgb(r, g, b, a);
}
QColor QColor_wrapper::fromRgbF(float r, float g, float b, float a) {
  return ::QColor::fromRgbF(r, g, b, a);
}
int QColor_wrapper::green() const { return ::QColor::green(); }
float QColor_wrapper::greenF() const { return ::QColor::greenF(); }
int QColor_wrapper::hslHue() const { return ::QColor::hslHue(); }
float QColor_wrapper::hslHueF() const { return ::QColor::hslHueF(); }
int QColor_wrapper::hslSaturation() const { return ::QColor::hslSaturation(); }
float QColor_wrapper::hslSaturationF() const {
  return ::QColor::hslSaturationF();
}
int QColor_wrapper::hsvHue() const { return ::QColor::hsvHue(); }
float QColor_wrapper::hsvHueF() const { return ::QColor::hsvHueF(); }
int QColor_wrapper::hsvSaturation() const { return ::QColor::hsvSaturation(); }
float QColor_wrapper::hsvSaturationF() const {
  return ::QColor::hsvSaturationF();
}
int QColor_wrapper::hue() const { return ::QColor::hue(); }
float QColor_wrapper::hueF() const { return ::QColor::hueF(); }
bool QColor_wrapper::isValid() const { return ::QColor::isValid(); }
bool QColor_wrapper::isValidColor(const QString &name) {
  return ::QColor::isValidColor(name);
}
QColor QColor_wrapper::lighter(int f) const { return ::QColor::lighter(f); }
int QColor_wrapper::lightness() const { return ::QColor::lightness(); }
float QColor_wrapper::lightnessF() const { return ::QColor::lightnessF(); }
int QColor_wrapper::magenta() const { return ::QColor::magenta(); }
float QColor_wrapper::magentaF() const { return ::QColor::magentaF(); }
QString QColor_wrapper::name() const { return ::QColor::name(); }
int QColor_wrapper::red() const { return ::QColor::red(); }
float QColor_wrapper::redF() const { return ::QColor::redF(); }
int QColor_wrapper::saturation() const { return ::QColor::saturation(); }
float QColor_wrapper::saturationF() const { return ::QColor::saturationF(); }
void QColor_wrapper::setAlpha(int alpha) { ::QColor::setAlpha(alpha); }
void QColor_wrapper::setAlphaF(float alpha) { ::QColor::setAlphaF(alpha); }
void QColor_wrapper::setBlue(int blue) { ::QColor::setBlue(blue); }
void QColor_wrapper::setBlueF(float blue) { ::QColor::setBlueF(blue); }
void QColor_wrapper::setCmyk(int c, int m, int y, int k, int a) {
  ::QColor::setCmyk(c, m, y, k, a);
}
void QColor_wrapper::setCmykF(float c, float m, float y, float k, float a) {
  ::QColor::setCmykF(c, m, y, k, a);
}
void QColor_wrapper::setGreen(int green) { ::QColor::setGreen(green); }
void QColor_wrapper::setGreenF(float green) { ::QColor::setGreenF(green); }
void QColor_wrapper::setHsl(int h, int s, int l, int a) {
  ::QColor::setHsl(h, s, l, a);
}
void QColor_wrapper::setHslF(float h, float s, float l, float a) {
  ::QColor::setHslF(h, s, l, a);
}
void QColor_wrapper::setHsv(int h, int s, int v, int a) {
  ::QColor::setHsv(h, s, v, a);
}
void QColor_wrapper::setHsvF(float h, float s, float v, float a) {
  ::QColor::setHsvF(h, s, v, a);
}
void QColor_wrapper::setNamedColor(const QString &name) {
  ::QColor::setNamedColor(name);
}
void QColor_wrapper::setRed(int red) { ::QColor::setRed(red); }
void QColor_wrapper::setRedF(float red) { ::QColor::setRedF(red); }
void QColor_wrapper::setRgb(int r, int g, int b, int a) {
  ::QColor::setRgb(r, g, b, a);
}
void QColor_wrapper::setRgbF(float r, float g, float b, float a) {
  ::QColor::setRgbF(r, g, b, a);
}
QColor QColor_wrapper::toCmyk() const { return ::QColor::toCmyk(); }
QColor QColor_wrapper::toExtendedRgb() const {
  return ::QColor::toExtendedRgb();
}
QColor QColor_wrapper::toHsl() const { return ::QColor::toHsl(); }
QColor QColor_wrapper::toHsv() const { return ::QColor::toHsv(); }
QColor QColor_wrapper::toRgb() const { return ::QColor::toRgb(); }
int QColor_wrapper::value() const { return ::QColor::value(); }
float QColor_wrapper::valueF() const { return ::QColor::valueF(); }
int QColor_wrapper::yellow() const { return ::QColor::yellow(); }
float QColor_wrapper::yellowF() const { return ::QColor::yellowF(); }
QColor_wrapper::~QColor_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QColor *fromPtr(void *ptr) { return reinterpret_cast<QColor *>(ptr); }
static QtDartBindings_wrappersNS::QColor_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QColor_wrapper *>(ptr);
}
extern "C" {
void c_QColor_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QColor_wrapper *>(cppObj);
}
void *c_QColor__constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QColor_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QColor__constructor_QString(const char *name_) {
  const auto name = QString::fromUtf8(name_);
  auto ptr = new QtDartBindings_wrappersNS::QColor_wrapper(name);
  return reinterpret_cast<void *>(ptr);
}
void *c_QColor__constructor_char(const char *aname) {
  auto ptr = new QtDartBindings_wrappersNS::QColor_wrapper(aname);
  return reinterpret_cast<void *>(ptr);
}
void *c_QColor__constructor_int_int_int_int(int r, int g, int b, int a) {
  auto ptr = new QtDartBindings_wrappersNS::QColor_wrapper(r, g, b, a);
  return reinterpret_cast<void *>(ptr);
}
// alpha() const
int c_QColor__alpha(void *thisObj) {
  const auto &result = fromPtr(thisObj)->alpha();
  return result;
}
// alphaF() const
float c_QColor__alphaF(void *thisObj) {
  const auto &result = fromPtr(thisObj)->alphaF();
  return result;
}
// black() const
int c_QColor__black(void *thisObj) {
  const auto &result = fromPtr(thisObj)->black();
  return result;
}
// blackF() const
float c_QColor__blackF(void *thisObj) {
  const auto &result = fromPtr(thisObj)->blackF();
  return result;
}
// blue() const
int c_QColor__blue(void *thisObj) {
  const auto &result = fromPtr(thisObj)->blue();
  return result;
}
// blueF() const
float c_QColor__blueF(void *thisObj) {
  const auto &result = fromPtr(thisObj)->blueF();
  return result;
}
// colorNames()
void *c_static_QColor__colorNames() {
  const auto &result = new Dartagnan::ValueWrapper<QList<QString>>{
      QtDartBindings_wrappersNS::QColor_wrapper::colorNames()};
  return result;
}
// cyan() const
int c_QColor__cyan(void *thisObj) {
  const auto &result = fromPtr(thisObj)->cyan();
  return result;
}
// cyanF() const
float c_QColor__cyanF(void *thisObj) {
  const auto &result = fromPtr(thisObj)->cyanF();
  return result;
}
// darker(int f) const
void *c_QColor__darker_int(void *thisObj, int f) {
  const auto &result =
      new Dartagnan::ValueWrapper<QColor>{fromPtr(thisObj)->darker(f)};
  return result;
}
// fromCmyk(int c, int m, int y, int k, int a)
void *c_static_QColor__fromCmyk_int_int_int_int_int(int c, int m, int y, int k,
                                                    int a) {
  const auto &result = new Dartagnan::ValueWrapper<QColor>{
      QtDartBindings_wrappersNS::QColor_wrapper::fromCmyk(c, m, y, k, a)};
  return result;
}
// fromCmykF(float c, float m, float y, float k, float a)
void *c_static_QColor__fromCmykF_float_float_float_float_float(float c, float m,
                                                               float y, float k,
                                                               float a) {
  const auto &result = new Dartagnan::ValueWrapper<QColor>{
      QtDartBindings_wrappersNS::QColor_wrapper::fromCmykF(c, m, y, k, a)};
  return result;
}
// fromHsl(int h, int s, int l, int a)
void *c_static_QColor__fromHsl_int_int_int_int(int h, int s, int l, int a) {
  const auto &result = new Dartagnan::ValueWrapper<QColor>{
      QtDartBindings_wrappersNS::QColor_wrapper::fromHsl(h, s, l, a)};
  return result;
}
// fromHslF(float h, float s, float l, float a)
void *c_static_QColor__fromHslF_float_float_float_float(float h, float s,
                                                        float l, float a) {
  const auto &result = new Dartagnan::ValueWrapper<QColor>{
      QtDartBindings_wrappersNS::QColor_wrapper::fromHslF(h, s, l, a)};
  return result;
}
// fromHsv(int h, int s, int v, int a)
void *c_static_QColor__fromHsv_int_int_int_int(int h, int s, int v, int a) {
  const auto &result = new Dartagnan::ValueWrapper<QColor>{
      QtDartBindings_wrappersNS::QColor_wrapper::fromHsv(h, s, v, a)};
  return result;
}
// fromHsvF(float h, float s, float v, float a)
void *c_static_QColor__fromHsvF_float_float_float_float(float h, float s,
                                                        float v, float a) {
  const auto &result = new Dartagnan::ValueWrapper<QColor>{
      QtDartBindings_wrappersNS::QColor_wrapper::fromHsvF(h, s, v, a)};
  return result;
}
// fromRgb(int r, int g, int b, int a)
void *c_static_QColor__fromRgb_int_int_int_int(int r, int g, int b, int a) {
  const auto &result = new Dartagnan::ValueWrapper<QColor>{
      QtDartBindings_wrappersNS::QColor_wrapper::fromRgb(r, g, b, a)};
  return result;
}
// fromRgbF(float r, float g, float b, float a)
void *c_static_QColor__fromRgbF_float_float_float_float(float r, float g,
                                                        float b, float a) {
  const auto &result = new Dartagnan::ValueWrapper<QColor>{
      QtDartBindings_wrappersNS::QColor_wrapper::fromRgbF(r, g, b, a)};
  return result;
}
// green() const
int c_QColor__green(void *thisObj) {
  const auto &result = fromPtr(thisObj)->green();
  return result;
}
// greenF() const
float c_QColor__greenF(void *thisObj) {
  const auto &result = fromPtr(thisObj)->greenF();
  return result;
}
// hslHue() const
int c_QColor__hslHue(void *thisObj) {
  const auto &result = fromPtr(thisObj)->hslHue();
  return result;
}
// hslHueF() const
float c_QColor__hslHueF(void *thisObj) {
  const auto &result = fromPtr(thisObj)->hslHueF();
  return result;
}
// hslSaturation() const
int c_QColor__hslSaturation(void *thisObj) {
  const auto &result = fromPtr(thisObj)->hslSaturation();
  return result;
}
// hslSaturationF() const
float c_QColor__hslSaturationF(void *thisObj) {
  const auto &result = fromPtr(thisObj)->hslSaturationF();
  return result;
}
// hsvHue() const
int c_QColor__hsvHue(void *thisObj) {
  const auto &result = fromPtr(thisObj)->hsvHue();
  return result;
}
// hsvHueF() const
float c_QColor__hsvHueF(void *thisObj) {
  const auto &result = fromPtr(thisObj)->hsvHueF();
  return result;
}
// hsvSaturation() const
int c_QColor__hsvSaturation(void *thisObj) {
  const auto &result = fromPtr(thisObj)->hsvSaturation();
  return result;
}
// hsvSaturationF() const
float c_QColor__hsvSaturationF(void *thisObj) {
  const auto &result = fromPtr(thisObj)->hsvSaturationF();
  return result;
}
// hue() const
int c_QColor__hue(void *thisObj) {
  const auto &result = fromPtr(thisObj)->hue();
  return result;
}
// hueF() const
float c_QColor__hueF(void *thisObj) {
  const auto &result = fromPtr(thisObj)->hueF();
  return result;
}
// isValid() const
bool c_QColor__isValid(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isValid();
  return result;
}
// isValidColor(const QString & name)
bool c_static_QColor__isValidColor_QString(const char *name_) {
  const auto name = QString::fromUtf8(name_);
  const auto &result =
      QtDartBindings_wrappersNS::QColor_wrapper::isValidColor(name);
  free((char *)name_);
  return result;
}
// lighter(int f) const
void *c_QColor__lighter_int(void *thisObj, int f) {
  const auto &result =
      new Dartagnan::ValueWrapper<QColor>{fromPtr(thisObj)->lighter(f)};
  return result;
}
// lightness() const
int c_QColor__lightness(void *thisObj) {
  const auto &result = fromPtr(thisObj)->lightness();
  return result;
}
// lightnessF() const
float c_QColor__lightnessF(void *thisObj) {
  const auto &result = fromPtr(thisObj)->lightnessF();
  return result;
}
// magenta() const
int c_QColor__magenta(void *thisObj) {
  const auto &result = fromPtr(thisObj)->magenta();
  return result;
}
// magentaF() const
float c_QColor__magentaF(void *thisObj) {
  const auto &result = fromPtr(thisObj)->magentaF();
  return result;
}
// name() const
void *c_QColor__name(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->name()};
  return result;
}
// red() const
int c_QColor__red(void *thisObj) {
  const auto &result = fromPtr(thisObj)->red();
  return result;
}
// redF() const
float c_QColor__redF(void *thisObj) {
  const auto &result = fromPtr(thisObj)->redF();
  return result;
}
// saturation() const
int c_QColor__saturation(void *thisObj) {
  const auto &result = fromPtr(thisObj)->saturation();
  return result;
}
// saturationF() const
float c_QColor__saturationF(void *thisObj) {
  const auto &result = fromPtr(thisObj)->saturationF();
  return result;
}
// setAlpha(int alpha)
void c_QColor__setAlpha_int(void *thisObj, int alpha) {
  fromPtr(thisObj)->setAlpha(alpha);
}
// setAlphaF(float alpha)
void c_QColor__setAlphaF_float(void *thisObj, float alpha) {
  fromPtr(thisObj)->setAlphaF(alpha);
}
// setBlue(int blue)
void c_QColor__setBlue_int(void *thisObj, int blue) {
  fromPtr(thisObj)->setBlue(blue);
}
// setBlueF(float blue)
void c_QColor__setBlueF_float(void *thisObj, float blue) {
  fromPtr(thisObj)->setBlueF(blue);
}
// setCmyk(int c, int m, int y, int k, int a)
void c_QColor__setCmyk_int_int_int_int_int(void *thisObj, int c, int m, int y,
                                           int k, int a) {
  fromPtr(thisObj)->setCmyk(c, m, y, k, a);
}
// setCmykF(float c, float m, float y, float k, float a)
void c_QColor__setCmykF_float_float_float_float_float(void *thisObj, float c,
                                                      float m, float y, float k,
                                                      float a) {
  fromPtr(thisObj)->setCmykF(c, m, y, k, a);
}
// setGreen(int green)
void c_QColor__setGreen_int(void *thisObj, int green) {
  fromPtr(thisObj)->setGreen(green);
}
// setGreenF(float green)
void c_QColor__setGreenF_float(void *thisObj, float green) {
  fromPtr(thisObj)->setGreenF(green);
}
// setHsl(int h, int s, int l, int a)
void c_QColor__setHsl_int_int_int_int(void *thisObj, int h, int s, int l,
                                      int a) {
  fromPtr(thisObj)->setHsl(h, s, l, a);
}
// setHslF(float h, float s, float l, float a)
void c_QColor__setHslF_float_float_float_float(void *thisObj, float h, float s,
                                               float l, float a) {
  fromPtr(thisObj)->setHslF(h, s, l, a);
}
// setHsv(int h, int s, int v, int a)
void c_QColor__setHsv_int_int_int_int(void *thisObj, int h, int s, int v,
                                      int a) {
  fromPtr(thisObj)->setHsv(h, s, v, a);
}
// setHsvF(float h, float s, float v, float a)
void c_QColor__setHsvF_float_float_float_float(void *thisObj, float h, float s,
                                               float v, float a) {
  fromPtr(thisObj)->setHsvF(h, s, v, a);
}
// setNamedColor(const QString & name)
void c_QColor__setNamedColor_QString(void *thisObj, const char *name_) {
  const auto name = QString::fromUtf8(name_);
  fromPtr(thisObj)->setNamedColor(name);
  free((char *)name_);
}
// setRed(int red)
void c_QColor__setRed_int(void *thisObj, int red) {
  fromPtr(thisObj)->setRed(red);
}
// setRedF(float red)
void c_QColor__setRedF_float(void *thisObj, float red) {
  fromPtr(thisObj)->setRedF(red);
}
// setRgb(int r, int g, int b, int a)
void c_QColor__setRgb_int_int_int_int(void *thisObj, int r, int g, int b,
                                      int a) {
  fromPtr(thisObj)->setRgb(r, g, b, a);
}
// setRgbF(float r, float g, float b, float a)
void c_QColor__setRgbF_float_float_float_float(void *thisObj, float r, float g,
                                               float b, float a) {
  fromPtr(thisObj)->setRgbF(r, g, b, a);
}
// toCmyk() const
void *c_QColor__toCmyk(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QColor>{fromPtr(thisObj)->toCmyk()};
  return result;
}
// toExtendedRgb() const
void *c_QColor__toExtendedRgb(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QColor>{fromPtr(thisObj)->toExtendedRgb()};
  return result;
}
// toHsl() const
void *c_QColor__toHsl(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QColor>{fromPtr(thisObj)->toHsl()};
  return result;
}
// toHsv() const
void *c_QColor__toHsv(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QColor>{fromPtr(thisObj)->toHsv()};
  return result;
}
// toRgb() const
void *c_QColor__toRgb(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QColor>{fromPtr(thisObj)->toRgb()};
  return result;
}
// value() const
int c_QColor__value(void *thisObj) {
  const auto &result = fromPtr(thisObj)->value();
  return result;
}
// valueF() const
float c_QColor__valueF(void *thisObj) {
  const auto &result = fromPtr(thisObj)->valueF();
  return result;
}
// yellow() const
int c_QColor__yellow(void *thisObj) {
  const auto &result = fromPtr(thisObj)->yellow();
  return result;
}
// yellowF() const
float c_QColor__yellowF(void *thisObj) {
  const auto &result = fromPtr(thisObj)->yellowF();
  return result;
}
void c_QColor__destructor(void *thisObj) { delete fromPtr(thisObj); }
}
