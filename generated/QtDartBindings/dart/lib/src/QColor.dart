/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group company <info@kdab.com>
/// SPDX-License-Identifier: MIT
import 'dart:ffi' as ffi;
import 'package:ffi/ffi.dart';
import 'TypeHelpers.dart';
import '../Bindings.dart';
import '../LibraryLoader.dart';

var _dylib = Library.instance().dylib;
final _finalizerFunc = (String name) {
  return _dylib
      .lookup<ffi.NativeFunction<ffi.Void Function(ffi.Pointer)>>(name);
};

Map<String, ffi.NativeFinalizer> _finalizers = {};

class QColor implements ffi.Finalizable {
  static var s_dartInstanceByCppPtr = Map<int, QColor>();
  var _thisCpp = null;
  bool _needsAutoDelete = true;
  get thisCpp => _thisCpp;
  set thisCpp(var ptr) {
    _thisCpp = ptr;
    ffi.Pointer<ffi.Void> ptrvoid = ptr.cast<ffi.Void>();
    if (_needsAutoDelete) {
      final String finalizerName = getFinalizerName();
      if (!_finalizers.keys.contains(runtimeType)) {
        _finalizers[finalizerName] =
            ffi.NativeFinalizer(_finalizerFunc(finalizerName).cast());
      }
      _finalizers[finalizerName]!.attach(this, ptrvoid);
    }
  }

  static bool isCached(var cppPointer) {
    return s_dartInstanceByCppPtr.containsKey(cppPointer.address);
  }

  factory QColor.fromCache(var cppPointer, [needsAutoDelete = false]) {
    return (s_dartInstanceByCppPtr[cppPointer.address] ??
        QColor.fromCppPointer(cppPointer, needsAutoDelete)) as QColor;
  }
  QColor.fromCppPointer(var cppPointer, [this._needsAutoDelete = false]) {
    thisCpp = cppPointer;
  }
  QColor.init() {}
  String getFinalizerName() {
    return "c_QColor_Finalizer";
  } //QColor()

  QColor() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_QColor__constructor')
        .asFunction();
    thisCpp = func();
    QColor.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QColor(const QString & name)
  QColor.ctor2(String? name) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QColor__constructor_QString')
        .asFunction();
    thisCpp = func(name?.toNativeUtf8() ?? ffi.nullptr);
    QColor.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QColor(const char * aname)
  QColor.ctor3(String? aname) {
    final voidstar_Func_string func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_FFI>>(
            'c_QColor__constructor_char')
        .asFunction();
    thisCpp = func(aname?.toNativeUtf8() ?? ffi.nullptr);
    QColor.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QColor(int r, int g, int b, int a)
  QColor.ctor4(int r, int g, int b, {int a = 255}) {
    final voidstar_Func_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QColor__constructor_int_int_int_int')
        .asFunction();
    thisCpp = func(r, g, b, a);
    QColor.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } // alpha() const
  int alpha() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QColor__alpha')
        .asFunction();
    return func(thisCpp);
  } // alphaF() const

  double alphaF() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QColor__alphaF')
        .asFunction();
    return func(thisCpp);
  } // black() const

  int black() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QColor__black')
        .asFunction();
    return func(thisCpp);
  } // blackF() const

  double blackF() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QColor__blackF')
        .asFunction();
    return func(thisCpp);
  } // blue() const

  int blue() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QColor__blue')
        .asFunction();
    return func(thisCpp);
  } // blueF() const

  double blueF() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>('c_QColor__blueF')
        .asFunction();
    return func(thisCpp);
  }

  static // colorNames()
      QList colorNames() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QColor__colorNames')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QList<QString>.fromCppPointer(result, true);
  } // cyan() const

  int cyan() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QColor__cyan')
        .asFunction();
    return func(thisCpp);
  } // cyanF() const

  double cyanF() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>('c_QColor__cyanF')
        .asFunction();
    return func(thisCpp);
  } // darker(int f) const

  QColor darker({int f = 200}) {
    final voidstar_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
            'c_QColor__darker_int')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, f);
    return QColor.fromCppPointer(result, true);
  }

  static // fromCmyk(int c, int m, int y, int k, int a)
      QColor fromCmyk(int c, int m, int y, int k, {int a = 255}) {
    final voidstar_Func_int_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_static_QColor__fromCmyk_int_int_int_int_int')
        .asFunction();
    ffi.Pointer<void> result = func(c, m, y, k, a);
    return QColor.fromCppPointer(result, true);
  }

  static // fromCmykF(float c, float m, float y, float k, float a)
      QColor fromCmykF(double c, double m, double y, double k,
          {double a = 1.0}) {
    final voidstar_Func_double_double_double_double_double func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_ffi_Double_ffi_Double_ffi_Double_ffi_Double_ffi_Double_FFI>>(
            'c_static_QColor__fromCmykF_float_float_float_float_float')
        .asFunction();
    ffi.Pointer<void> result = func(c, m, y, k, a);
    return QColor.fromCppPointer(result, true);
  }

  static // fromHsl(int h, int s, int l, int a)
      QColor fromHsl(int h, int s, int l, {int a = 255}) {
    final voidstar_Func_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_static_QColor__fromHsl_int_int_int_int')
        .asFunction();
    ffi.Pointer<void> result = func(h, s, l, a);
    return QColor.fromCppPointer(result, true);
  }

  static // fromHslF(float h, float s, float l, float a)
      QColor fromHslF(double h, double s, double l, {double a = 1.0}) {
    final voidstar_Func_double_double_double_double func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_ffi_Double_ffi_Double_ffi_Double_ffi_Double_FFI>>(
            'c_static_QColor__fromHslF_float_float_float_float')
        .asFunction();
    ffi.Pointer<void> result = func(h, s, l, a);
    return QColor.fromCppPointer(result, true);
  }

  static // fromHsv(int h, int s, int v, int a)
      QColor fromHsv(int h, int s, int v, {int a = 255}) {
    final voidstar_Func_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_static_QColor__fromHsv_int_int_int_int')
        .asFunction();
    ffi.Pointer<void> result = func(h, s, v, a);
    return QColor.fromCppPointer(result, true);
  }

  static // fromHsvF(float h, float s, float v, float a)
      QColor fromHsvF(double h, double s, double v, {double a = 1.0}) {
    final voidstar_Func_double_double_double_double func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_ffi_Double_ffi_Double_ffi_Double_ffi_Double_FFI>>(
            'c_static_QColor__fromHsvF_float_float_float_float')
        .asFunction();
    ffi.Pointer<void> result = func(h, s, v, a);
    return QColor.fromCppPointer(result, true);
  }

  static // fromRgb(int r, int g, int b, int a)
      QColor fromRgb(int r, int g, int b, {int a = 255}) {
    final voidstar_Func_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_static_QColor__fromRgb_int_int_int_int')
        .asFunction();
    ffi.Pointer<void> result = func(r, g, b, a);
    return QColor.fromCppPointer(result, true);
  }

  static // fromRgbF(float r, float g, float b, float a)
      QColor fromRgbF(double r, double g, double b, {double a = 1.0}) {
    final voidstar_Func_double_double_double_double func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_ffi_Double_ffi_Double_ffi_Double_ffi_Double_FFI>>(
            'c_static_QColor__fromRgbF_float_float_float_float')
        .asFunction();
    ffi.Pointer<void> result = func(r, g, b, a);
    return QColor.fromCppPointer(result, true);
  } // green() const

  int green() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QColor__green')
        .asFunction();
    return func(thisCpp);
  } // greenF() const

  double greenF() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QColor__greenF')
        .asFunction();
    return func(thisCpp);
  } // hslHue() const

  int hslHue() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QColor__hslHue')
        .asFunction();
    return func(thisCpp);
  } // hslHueF() const

  double hslHueF() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QColor__hslHueF')
        .asFunction();
    return func(thisCpp);
  } // hslSaturation() const

  int hslSaturation() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QColor__hslSaturation')
        .asFunction();
    return func(thisCpp);
  } // hslSaturationF() const

  double hslSaturationF() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QColor__hslSaturationF')
        .asFunction();
    return func(thisCpp);
  } // hsvHue() const

  int hsvHue() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QColor__hsvHue')
        .asFunction();
    return func(thisCpp);
  } // hsvHueF() const

  double hsvHueF() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QColor__hsvHueF')
        .asFunction();
    return func(thisCpp);
  } // hsvSaturation() const

  int hsvSaturation() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QColor__hsvSaturation')
        .asFunction();
    return func(thisCpp);
  } // hsvSaturationF() const

  double hsvSaturationF() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QColor__hsvSaturationF')
        .asFunction();
    return func(thisCpp);
  } // hue() const

  int hue() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QColor__hue')
        .asFunction();
    return func(thisCpp);
  } // hueF() const

  double hueF() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>('c_QColor__hueF')
        .asFunction();
    return func(thisCpp);
  } // invalidate()

  invalidate() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QColor__invalidate')
        .asFunction();
    func(thisCpp);
  }

  static // isRgbaValid(int r, int g, int b, int a)
      bool isRgbaValid(int r, int g, int b, {int a = 255}) {
    final bool_Func_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    bool_Func_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_static_QColor__isRgbaValid_int_int_int_int')
        .asFunction();
    return func(r, g, b, a) != 0;
  } // isValid() const

  bool isValid() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>('c_QColor__isValid')
        .asFunction();
    return func(thisCpp) != 0;
  }

  static // isValidColor(const QString & name)
      bool isValidColor(String? name) {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_static_QColor__isValidColor_QString')
        .asFunction();
    return func(name?.toNativeUtf8() ?? ffi.nullptr) != 0;
  } // lighter(int f) const

  QColor lighter({int f = 150}) {
    final voidstar_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
            'c_QColor__lighter_int')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, f);
    return QColor.fromCppPointer(result, true);
  } // lightness() const

  int lightness() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QColor__lightness')
        .asFunction();
    return func(thisCpp);
  } // lightnessF() const

  double lightnessF() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QColor__lightnessF')
        .asFunction();
    return func(thisCpp);
  } // magenta() const

  int magenta() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QColor__magenta')
        .asFunction();
    return func(thisCpp);
  } // magentaF() const

  double magentaF() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QColor__magentaF')
        .asFunction();
    return func(thisCpp);
  } // name() const

  QString name() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QColor__name')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // red() const

  int red() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QColor__red')
        .asFunction();
    return func(thisCpp);
  } // redF() const

  double redF() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>('c_QColor__redF')
        .asFunction();
    return func(thisCpp);
  } // saturation() const

  int saturation() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QColor__saturation')
        .asFunction();
    return func(thisCpp);
  } // saturationF() const

  double saturationF() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QColor__saturationF')
        .asFunction();
    return func(thisCpp);
  } // setAlpha(int alpha)

  setAlpha(int alpha) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QColor__setAlpha_int')
        .asFunction();
    func(thisCpp, alpha);
  } // setAlphaF(float alpha)

  setAlphaF(double alpha) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QColor__setAlphaF_float')
        .asFunction();
    func(thisCpp, alpha);
  } // setBlue(int blue)

  setBlue(int blue) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QColor__setBlue_int')
        .asFunction();
    func(thisCpp, blue);
  } // setBlueF(float blue)

  setBlueF(double blue) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QColor__setBlueF_float')
        .asFunction();
    func(thisCpp, blue);
  } // setCmyk(int c, int m, int y, int k, int a)

  setCmyk(int c, int m, int y, int k, {int a = 255}) {
    final void_Func_voidstar_int_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QColor__setCmyk_int_int_int_int_int')
        .asFunction();
    func(thisCpp, c, m, y, k, a);
  } // setCmykF(float c, float m, float y, float k, float a)

  setCmykF(double c, double m, double y, double k, {double a = 1.0}) {
    final void_Func_voidstar_double_double_double_double_double func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Double_ffi_Double_ffi_Double_ffi_Double_ffi_Double_FFI>>(
            'c_QColor__setCmykF_float_float_float_float_float')
        .asFunction();
    func(thisCpp, c, m, y, k, a);
  } // setGreen(int green)

  setGreen(int green) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QColor__setGreen_int')
        .asFunction();
    func(thisCpp, green);
  } // setGreenF(float green)

  setGreenF(double green) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QColor__setGreenF_float')
        .asFunction();
    func(thisCpp, green);
  } // setHsl(int h, int s, int l, int a)

  setHsl(int h, int s, int l, {int a = 255}) {
    final void_Func_voidstar_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QColor__setHsl_int_int_int_int')
        .asFunction();
    func(thisCpp, h, s, l, a);
  } // setHslF(float h, float s, float l, float a)

  setHslF(double h, double s, double l, {double a = 1.0}) {
    final void_Func_voidstar_double_double_double_double func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Double_ffi_Double_ffi_Double_ffi_Double_FFI>>(
            'c_QColor__setHslF_float_float_float_float')
        .asFunction();
    func(thisCpp, h, s, l, a);
  } // setHsv(int h, int s, int v, int a)

  setHsv(int h, int s, int v, {int a = 255}) {
    final void_Func_voidstar_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QColor__setHsv_int_int_int_int')
        .asFunction();
    func(thisCpp, h, s, v, a);
  } // setHsvF(float h, float s, float v, float a)

  setHsvF(double h, double s, double v, {double a = 1.0}) {
    final void_Func_voidstar_double_double_double_double func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Double_ffi_Double_ffi_Double_ffi_Double_FFI>>(
            'c_QColor__setHsvF_float_float_float_float')
        .asFunction();
    func(thisCpp, h, s, v, a);
  } // setNamedColor(const QString & name)

  setNamedColor(String? name) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QColor__setNamedColor_QString')
        .asFunction();
    func(thisCpp, name?.toNativeUtf8() ?? ffi.nullptr);
  } // setRed(int red)

  setRed(int red) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QColor__setRed_int')
        .asFunction();
    func(thisCpp, red);
  } // setRedF(float red)

  setRedF(double red) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QColor__setRedF_float')
        .asFunction();
    func(thisCpp, red);
  } // setRgb(int r, int g, int b, int a)

  setRgb(int r, int g, int b, {int a = 255}) {
    final void_Func_voidstar_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QColor__setRgb_int_int_int_int')
        .asFunction();
    func(thisCpp, r, g, b, a);
  } // setRgbF(float r, float g, float b, float a)

  setRgbF(double r, double g, double b, {double a = 1.0}) {
    final void_Func_voidstar_double_double_double_double func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Double_ffi_Double_ffi_Double_ffi_Double_FFI>>(
            'c_QColor__setRgbF_float_float_float_float')
        .asFunction();
    func(thisCpp, r, g, b, a);
  } // toCmyk() const

  QColor toCmyk() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QColor__toCmyk')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QColor.fromCppPointer(result, true);
  } // toExtendedRgb() const

  QColor toExtendedRgb() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QColor__toExtendedRgb')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QColor.fromCppPointer(result, true);
  } // toHsl() const

  QColor toHsl() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QColor__toHsl')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QColor.fromCppPointer(result, true);
  } // toHsv() const

  QColor toHsv() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QColor__toHsv')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QColor.fromCppPointer(result, true);
  } // toRgb() const

  QColor toRgb() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QColor__toRgb')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QColor.fromCppPointer(result, true);
  } // value() const

  int value() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QColor__value')
        .asFunction();
    return func(thisCpp);
  } // valueF() const

  double valueF() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QColor__valueF')
        .asFunction();
    return func(thisCpp);
  } // yellow() const

  int yellow() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QColor__yellow')
        .asFunction();
    return func(thisCpp);
  } // yellowF() const

  double yellowF() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QColor__yellowF')
        .asFunction();
    return func(thisCpp);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QColor__destructor')
        .asFunction();
    func(thisCpp);
  }
}
