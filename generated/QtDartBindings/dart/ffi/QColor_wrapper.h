
// tag=1040
#include "QtDartBindings_exports.h"
#include <qcolor.h>
#include <qlist.h>
#include <qstring.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
// tag=1043
class QColor_wrapper : public ::QColor {
public:
  ~QColor_wrapper();
  // tag=1041
  QColor_wrapper();
  // tag=1041
  QColor_wrapper(const QString &name);
  // tag=1041
  QColor_wrapper(const char *aname);
  // tag=1041
  QColor_wrapper(int r, int g, int b, int a = 255);
  // tag=1041
  int alpha() const;
  // tag=1041
  float alphaF() const;
  // tag=1041
  int black() const;
  // tag=1041
  float blackF() const;
  // tag=1041
  int blue() const;
  // tag=1041
  float blueF() const;
  // tag=1041
  static QList<QString> colorNames();
  // tag=1041
  int cyan() const;
  // tag=1041
  float cyanF() const;
  // tag=1041
  QColor darker(int f = 200) const;
  // tag=1041
  static QColor fromCmyk(int c, int m, int y, int k, int a = 255);
  // tag=1041
  static QColor fromCmykF(float c, float m, float y, float k, float a = 1.0);
  // tag=1041
  static QColor fromHsl(int h, int s, int l, int a = 255);
  // tag=1041
  static QColor fromHslF(float h, float s, float l, float a = 1.0);
  // tag=1041
  static QColor fromHsv(int h, int s, int v, int a = 255);
  // tag=1041
  static QColor fromHsvF(float h, float s, float v, float a = 1.0);
  // tag=1041
  static QColor fromRgb(int r, int g, int b, int a = 255);
  // tag=1041
  static QColor fromRgbF(float r, float g, float b, float a = 1.0);
  // tag=1041
  int green() const;
  // tag=1041
  float greenF() const;
  // tag=1041
  int hslHue() const;
  // tag=1041
  float hslHueF() const;
  // tag=1041
  int hslSaturation() const;
  // tag=1041
  float hslSaturationF() const;
  // tag=1041
  int hsvHue() const;
  // tag=1041
  float hsvHueF() const;
  // tag=1041
  int hsvSaturation() const;
  // tag=1041
  float hsvSaturationF() const;
  // tag=1041
  int hue() const;
  // tag=1041
  float hueF() const;
  // tag=1041
  bool isValid() const;
  // tag=1041
  static bool isValidColor(const QString &name);
  // tag=1041
  QColor lighter(int f = 150) const;
  // tag=1041
  int lightness() const;
  // tag=1041
  float lightnessF() const;
  // tag=1041
  int magenta() const;
  // tag=1041
  float magentaF() const;
  // tag=1041
  QString name() const;
  // tag=1041
  int red() const;
  // tag=1041
  float redF() const;
  // tag=1041
  int saturation() const;
  // tag=1041
  float saturationF() const;
  // tag=1041
  void setAlpha(int alpha);
  // tag=1041
  void setAlphaF(float alpha);
  // tag=1041
  void setBlue(int blue);
  // tag=1041
  void setBlueF(float blue);
  // tag=1041
  void setCmyk(int c, int m, int y, int k, int a = 255);
  // tag=1041
  void setCmykF(float c, float m, float y, float k, float a = 1.0);
  // tag=1041
  void setGreen(int green);
  // tag=1041
  void setGreenF(float green);
  // tag=1041
  void setHsl(int h, int s, int l, int a = 255);
  // tag=1041
  void setHslF(float h, float s, float l, float a = 1.0);
  // tag=1041
  void setHsv(int h, int s, int v, int a = 255);
  // tag=1041
  void setHsvF(float h, float s, float v, float a = 1.0);
  // tag=1041
  void setNamedColor(const QString &name);
  // tag=1041
  void setRed(int red);
  // tag=1041
  void setRedF(float red);
  // tag=1041
  void setRgb(int r, int g, int b, int a = 255);
  // tag=1041
  void setRgbF(float r, float g, float b, float a = 1.0);
  // tag=1041
  QColor toCmyk() const;
  // tag=1041
  QColor toExtendedRgb() const;
  // tag=1041
  QColor toHsl() const;
  // tag=1041
  QColor toHsv() const;
  // tag=1041
  QColor toRgb() const;
  // tag=1041
  int value() const;
  // tag=1041
  float valueF() const;
  // tag=1041
  int yellow() const;
  // tag=1041
  float yellowF() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QColor::QColor()
QtDartBindings_EXPORT void *c_QColor__constructor();

// tag=1067
//  QColor::QColor(const QString & name)
QtDartBindings_EXPORT void *c_QColor__constructor_QString(const char *name_);

// tag=1067
//  QColor::QColor(const char * aname)
QtDartBindings_EXPORT void *c_QColor__constructor_char(const char *aname);

// tag=1067
//  QColor::QColor(int r, int g, int b, int a)
QtDartBindings_EXPORT void *c_QColor__constructor_int_int_int_int(int r, int g,
                                                                  int b, int a);

// tag=1067
//  QColor::alpha() const
QtDartBindings_EXPORT int c_QColor__alpha(void *thisObj);

// tag=1067
//  QColor::alphaF() const
QtDartBindings_EXPORT float c_QColor__alphaF(void *thisObj);

// tag=1067
//  QColor::black() const
QtDartBindings_EXPORT int c_QColor__black(void *thisObj);

// tag=1067
//  QColor::blackF() const
QtDartBindings_EXPORT float c_QColor__blackF(void *thisObj);

// tag=1067
//  QColor::blue() const
QtDartBindings_EXPORT int c_QColor__blue(void *thisObj);

// tag=1067
//  QColor::blueF() const
QtDartBindings_EXPORT float c_QColor__blueF(void *thisObj);

// tag=1067
//  QColor::colorNames()
QtDartBindings_EXPORT void *c_static_QColor__colorNames();

// tag=1067
//  QColor::cyan() const
QtDartBindings_EXPORT int c_QColor__cyan(void *thisObj);

// tag=1067
//  QColor::cyanF() const
QtDartBindings_EXPORT float c_QColor__cyanF(void *thisObj);

// tag=1067
//  QColor::darker(int f) const
QtDartBindings_EXPORT void *c_QColor__darker_int(void *thisObj, int f);

// tag=1067
//  QColor::fromCmyk(int c, int m, int y, int k, int a)
QtDartBindings_EXPORT void *
c_static_QColor__fromCmyk_int_int_int_int_int(int c, int m, int y, int k,
                                              int a);

// tag=1067
//  QColor::fromCmykF(float c, float m, float y, float k, float a)
QtDartBindings_EXPORT void *
c_static_QColor__fromCmykF_float_float_float_float_float(float c, float m,
                                                         float y, float k,
                                                         float a);

// tag=1067
//  QColor::fromHsl(int h, int s, int l, int a)
QtDartBindings_EXPORT void *
c_static_QColor__fromHsl_int_int_int_int(int h, int s, int l, int a);

// tag=1067
//  QColor::fromHslF(float h, float s, float l, float a)
QtDartBindings_EXPORT void *
c_static_QColor__fromHslF_float_float_float_float(float h, float s, float l,
                                                  float a);

// tag=1067
//  QColor::fromHsv(int h, int s, int v, int a)
QtDartBindings_EXPORT void *
c_static_QColor__fromHsv_int_int_int_int(int h, int s, int v, int a);

// tag=1067
//  QColor::fromHsvF(float h, float s, float v, float a)
QtDartBindings_EXPORT void *
c_static_QColor__fromHsvF_float_float_float_float(float h, float s, float v,
                                                  float a);

// tag=1067
//  QColor::fromRgb(int r, int g, int b, int a)
QtDartBindings_EXPORT void *
c_static_QColor__fromRgb_int_int_int_int(int r, int g, int b, int a);

// tag=1067
//  QColor::fromRgbF(float r, float g, float b, float a)
QtDartBindings_EXPORT void *
c_static_QColor__fromRgbF_float_float_float_float(float r, float g, float b,
                                                  float a);

// tag=1067
//  QColor::green() const
QtDartBindings_EXPORT int c_QColor__green(void *thisObj);

// tag=1067
//  QColor::greenF() const
QtDartBindings_EXPORT float c_QColor__greenF(void *thisObj);

// tag=1067
//  QColor::hslHue() const
QtDartBindings_EXPORT int c_QColor__hslHue(void *thisObj);

// tag=1067
//  QColor::hslHueF() const
QtDartBindings_EXPORT float c_QColor__hslHueF(void *thisObj);

// tag=1067
//  QColor::hslSaturation() const
QtDartBindings_EXPORT int c_QColor__hslSaturation(void *thisObj);

// tag=1067
//  QColor::hslSaturationF() const
QtDartBindings_EXPORT float c_QColor__hslSaturationF(void *thisObj);

// tag=1067
//  QColor::hsvHue() const
QtDartBindings_EXPORT int c_QColor__hsvHue(void *thisObj);

// tag=1067
//  QColor::hsvHueF() const
QtDartBindings_EXPORT float c_QColor__hsvHueF(void *thisObj);

// tag=1067
//  QColor::hsvSaturation() const
QtDartBindings_EXPORT int c_QColor__hsvSaturation(void *thisObj);

// tag=1067
//  QColor::hsvSaturationF() const
QtDartBindings_EXPORT float c_QColor__hsvSaturationF(void *thisObj);

// tag=1067
//  QColor::hue() const
QtDartBindings_EXPORT int c_QColor__hue(void *thisObj);

// tag=1067
//  QColor::hueF() const
QtDartBindings_EXPORT float c_QColor__hueF(void *thisObj);

// tag=1067
//  QColor::isValid() const
QtDartBindings_EXPORT bool c_QColor__isValid(void *thisObj);

// tag=1067
//  QColor::isValidColor(const QString & name)
QtDartBindings_EXPORT bool
c_static_QColor__isValidColor_QString(const char *name_);

// tag=1067
//  QColor::lighter(int f) const
QtDartBindings_EXPORT void *c_QColor__lighter_int(void *thisObj, int f);

// tag=1067
//  QColor::lightness() const
QtDartBindings_EXPORT int c_QColor__lightness(void *thisObj);

// tag=1067
//  QColor::lightnessF() const
QtDartBindings_EXPORT float c_QColor__lightnessF(void *thisObj);

// tag=1067
//  QColor::magenta() const
QtDartBindings_EXPORT int c_QColor__magenta(void *thisObj);

// tag=1067
//  QColor::magentaF() const
QtDartBindings_EXPORT float c_QColor__magentaF(void *thisObj);

// tag=1067
//  QColor::name() const
QtDartBindings_EXPORT void *c_QColor__name(void *thisObj);

// tag=1067
//  QColor::red() const
QtDartBindings_EXPORT int c_QColor__red(void *thisObj);

// tag=1067
//  QColor::redF() const
QtDartBindings_EXPORT float c_QColor__redF(void *thisObj);

// tag=1067
//  QColor::saturation() const
QtDartBindings_EXPORT int c_QColor__saturation(void *thisObj);

// tag=1067
//  QColor::saturationF() const
QtDartBindings_EXPORT float c_QColor__saturationF(void *thisObj);

// tag=1067
//  QColor::setAlpha(int alpha)
QtDartBindings_EXPORT void c_QColor__setAlpha_int(void *thisObj, int alpha);

// tag=1067
//  QColor::setAlphaF(float alpha)
QtDartBindings_EXPORT void c_QColor__setAlphaF_float(void *thisObj,
                                                     float alpha);

// tag=1067
//  QColor::setBlue(int blue)
QtDartBindings_EXPORT void c_QColor__setBlue_int(void *thisObj, int blue);

// tag=1067
//  QColor::setBlueF(float blue)
QtDartBindings_EXPORT void c_QColor__setBlueF_float(void *thisObj, float blue);

// tag=1067
//  QColor::setCmyk(int c, int m, int y, int k, int a)
QtDartBindings_EXPORT void c_QColor__setCmyk_int_int_int_int_int(void *thisObj,
                                                                 int c, int m,
                                                                 int y, int k,
                                                                 int a);

// tag=1067
//  QColor::setCmykF(float c, float m, float y, float k, float a)
QtDartBindings_EXPORT void c_QColor__setCmykF_float_float_float_float_float(
    void *thisObj, float c, float m, float y, float k, float a);

// tag=1067
//  QColor::setGreen(int green)
QtDartBindings_EXPORT void c_QColor__setGreen_int(void *thisObj, int green);

// tag=1067
//  QColor::setGreenF(float green)
QtDartBindings_EXPORT void c_QColor__setGreenF_float(void *thisObj,
                                                     float green);

// tag=1067
//  QColor::setHsl(int h, int s, int l, int a)
QtDartBindings_EXPORT void
c_QColor__setHsl_int_int_int_int(void *thisObj, int h, int s, int l, int a);

// tag=1067
//  QColor::setHslF(float h, float s, float l, float a)
QtDartBindings_EXPORT void
c_QColor__setHslF_float_float_float_float(void *thisObj, float h, float s,
                                          float l, float a);

// tag=1067
//  QColor::setHsv(int h, int s, int v, int a)
QtDartBindings_EXPORT void
c_QColor__setHsv_int_int_int_int(void *thisObj, int h, int s, int v, int a);

// tag=1067
//  QColor::setHsvF(float h, float s, float v, float a)
QtDartBindings_EXPORT void
c_QColor__setHsvF_float_float_float_float(void *thisObj, float h, float s,
                                          float v, float a);

// tag=1067
//  QColor::setNamedColor(const QString & name)
QtDartBindings_EXPORT void c_QColor__setNamedColor_QString(void *thisObj,
                                                           const char *name_);

// tag=1067
//  QColor::setRed(int red)
QtDartBindings_EXPORT void c_QColor__setRed_int(void *thisObj, int red);

// tag=1067
//  QColor::setRedF(float red)
QtDartBindings_EXPORT void c_QColor__setRedF_float(void *thisObj, float red);

// tag=1067
//  QColor::setRgb(int r, int g, int b, int a)
QtDartBindings_EXPORT void
c_QColor__setRgb_int_int_int_int(void *thisObj, int r, int g, int b, int a);

// tag=1067
//  QColor::setRgbF(float r, float g, float b, float a)
QtDartBindings_EXPORT void
c_QColor__setRgbF_float_float_float_float(void *thisObj, float r, float g,
                                          float b, float a);

// tag=1067
//  QColor::toCmyk() const
QtDartBindings_EXPORT void *c_QColor__toCmyk(void *thisObj);

// tag=1067
//  QColor::toExtendedRgb() const
QtDartBindings_EXPORT void *c_QColor__toExtendedRgb(void *thisObj);

// tag=1067
//  QColor::toHsl() const
QtDartBindings_EXPORT void *c_QColor__toHsl(void *thisObj);

// tag=1067
//  QColor::toHsv() const
QtDartBindings_EXPORT void *c_QColor__toHsv(void *thisObj);

// tag=1067
//  QColor::toRgb() const
QtDartBindings_EXPORT void *c_QColor__toRgb(void *thisObj);

// tag=1067
//  QColor::value() const
QtDartBindings_EXPORT int c_QColor__value(void *thisObj);

// tag=1067
//  QColor::valueF() const
QtDartBindings_EXPORT float c_QColor__valueF(void *thisObj);

// tag=1067
//  QColor::yellow() const
QtDartBindings_EXPORT int c_QColor__yellow(void *thisObj);

// tag=1067
//  QColor::yellowF() const
QtDartBindings_EXPORT float c_QColor__yellowF(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QColor__destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QColor_Finalizer(void *, void *cppObj, void *);
}
