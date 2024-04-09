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

class QFont_StyleHint {
  static const Helvetica = 0;
  static const SansSerif = 0;
  static const Times = 1;
  static const Serif = 1;
  static const Courier = 2;
  static const TypeWriter = 2;
  static const OldEnglish = 3;
  static const Decorative = 3;
  static const System = 4;
  static const AnyStyle = 5;
  static const Cursive = 6;
  static const Monospace = 7;
  static const Fantasy = 8;
}

class QFont implements ffi.Finalizable {
  static var s_dartInstanceByCppPtr = Map<int, QFont>();
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

  factory QFont.fromCache(var cppPointer, [needsAutoDelete = false]) {
    return (s_dartInstanceByCppPtr[cppPointer.address] ??
        QFont.fromCppPointer(cppPointer, needsAutoDelete)) as QFont;
  }
  QFont.fromCppPointer(var cppPointer, [this._needsAutoDelete = false]) {
    thisCpp = cppPointer;
  }
  QFont.init() {}
  String getFinalizerName() {
    return "c_QFont_Finalizer";
  } //QFont()

  QFont() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_QFont__constructor')
        .asFunction();
    thisCpp = func();
    QFont.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QFont(const QList<QString > & families, int pointSize, int weight, bool italic)
  QFont.ctor2(QList? families,
      {int pointSize = -1, int weight = -1, bool italic = false}) {
    final voidstar_Func_voidstar_int_int_bool func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int8_FFI>>(
            'c_QFont__constructor_QList_QString_int_int_bool')
        .asFunction();
    thisCpp = func(families == null ? ffi.nullptr : families.thisCpp, pointSize,
        weight, italic ? 1 : 0);
    QFont.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QFont(const QString & family, int pointSize, int weight, bool italic)
  QFont.ctor3(String? family,
      {int pointSize = -1, int weight = -1, bool italic = false}) {
    final voidstar_Func_voidstar_int_int_bool func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int8_FFI>>(
            'c_QFont__constructor_QString_int_int_bool')
        .asFunction();
    thisCpp = func(family?.toNativeUtf8() ?? ffi.nullptr, pointSize, weight,
        italic ? 1 : 0);
    QFont.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } // bold() const
  bool bold() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>('c_QFont__bold')
        .asFunction();
    return func(thisCpp) != 0;
  }

  static // cacheStatistics()
      cacheStatistics() {
    final void_Func_void func = _dylib
        .lookup<ffi.NativeFunction<void_Func_void_FFI>>(
            'c_static_QFont__cacheStatistics')
        .asFunction();
    func();
  }

  static // cleanup()
      cleanup() {
    final void_Func_void func = _dylib
        .lookup<ffi.NativeFunction<void_Func_void_FFI>>(
            'c_static_QFont__cleanup')
        .asFunction();
    func();
  } // defaultFamily() const

  QString defaultFamily() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QFont__defaultFamily')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // detach()

  detach() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>('c_QFont__detach')
        .asFunction();
    func(thisCpp);
  } // exactMatch() const

  bool exactMatch() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QFont__exactMatch')
        .asFunction();
    return func(thisCpp) != 0;
  } // families() const

  QList families() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QFont__families')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QList<QString>.fromCppPointer(result, true);
  } // family() const

  QString family() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QFont__family')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // fixedPitch() const

  bool fixedPitch() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QFont__fixedPitch')
        .asFunction();
    return func(thisCpp) != 0;
  } // fromString(const QString & arg__1)

  bool fromString(String? arg__1) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_QFont__fromString_QString')
        .asFunction();
    return func(thisCpp, arg__1?.toNativeUtf8() ?? ffi.nullptr) != 0;
  }

  static // initialize()
      initialize() {
    final void_Func_void func = _dylib
        .lookup<ffi.NativeFunction<void_Func_void_FFI>>(
            'c_static_QFont__initialize')
        .asFunction();
    func();
  }

  static // insertSubstitution(const QString & arg__1, const QString & arg__2)
      insertSubstitution(String? arg__1, String? arg__2) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_static_QFont__insertSubstitution_QString_QString')
        .asFunction();
    func(arg__1?.toNativeUtf8() ?? ffi.nullptr,
        arg__2?.toNativeUtf8() ?? ffi.nullptr);
  }

  static // insertSubstitutions(const QString & arg__1, const QList<QString > & arg__2)
      insertSubstitutions(String? arg__1, QList? arg__2) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_static_QFont__insertSubstitutions_QString_QList_QString')
        .asFunction();
    func(arg__1?.toNativeUtf8() ?? ffi.nullptr,
        arg__2 == null ? ffi.nullptr : arg__2.thisCpp);
  } // isCopyOf(const QFont & arg__1) const

  bool isCopyOf(QFont? arg__1) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_QFont__isCopyOf_QFont')
        .asFunction();
    return func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp) != 0;
  } // italic() const

  bool italic() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>('c_QFont__italic')
        .asFunction();
    return func(thisCpp) != 0;
  } // kerning() const

  bool kerning() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>('c_QFont__kerning')
        .asFunction();
    return func(thisCpp) != 0;
  } // key() const

  QString key() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>('c_QFont__key')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // letterSpacing() const

  double letterSpacing() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QFont__letterSpacing')
        .asFunction();
    return func(thisCpp);
  } // overline() const

  bool overline() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>('c_QFont__overline')
        .asFunction();
    return func(thisCpp) != 0;
  } // pixelSize() const

  int pixelSize() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QFont__pixelSize')
        .asFunction();
    return func(thisCpp);
  } // pointSize() const

  int pointSize() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QFont__pointSize')
        .asFunction();
    return func(thisCpp);
  } // pointSizeF() const

  double pointSizeF() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QFont__pointSizeF')
        .asFunction();
    return func(thisCpp);
  }

  static // removeSubstitutions(const QString & arg__1)
      removeSubstitutions(String? arg__1) {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_static_QFont__removeSubstitutions_QString')
        .asFunction();
    func(arg__1?.toNativeUtf8() ?? ffi.nullptr);
  } // resolve(const QFont & arg__1) const

  QFont resolve(QFont? arg__1) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QFont__resolve_QFont')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
    return QFont.fromCppPointer(result, true);
  } // setBold(bool arg__1)

  setBold(bool arg__1) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QFont__setBold_bool')
        .asFunction();
    func(thisCpp, arg__1 ? 1 : 0);
  } // setFamilies(const QList<QString > & arg__1)

  setFamilies(QList? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QFont__setFamilies_QList_QString')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // setFamily(const QString & arg__1)

  setFamily(String? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QFont__setFamily_QString')
        .asFunction();
    func(thisCpp, arg__1?.toNativeUtf8() ?? ffi.nullptr);
  } // setFixedPitch(bool arg__1)

  setFixedPitch(bool arg__1) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QFont__setFixedPitch_bool')
        .asFunction();
    func(thisCpp, arg__1 ? 1 : 0);
  } // setItalic(bool b)

  setItalic(bool b) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QFont__setItalic_bool')
        .asFunction();
    func(thisCpp, b ? 1 : 0);
  } // setKerning(bool arg__1)

  setKerning(bool arg__1) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QFont__setKerning_bool')
        .asFunction();
    func(thisCpp, arg__1 ? 1 : 0);
  } // setOverline(bool arg__1)

  setOverline(bool arg__1) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QFont__setOverline_bool')
        .asFunction();
    func(thisCpp, arg__1 ? 1 : 0);
  } // setPixelSize(int arg__1)

  setPixelSize(int arg__1) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QFont__setPixelSize_int')
        .asFunction();
    func(thisCpp, arg__1);
  } // setPointSize(int arg__1)

  setPointSize(int arg__1) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QFont__setPointSize_int')
        .asFunction();
    func(thisCpp, arg__1);
  } // setPointSizeF(qreal arg__1)

  setPointSizeF(double arg__1) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QFont__setPointSizeF_qreal')
        .asFunction();
    func(thisCpp, arg__1);
  } // setStretch(int arg__1)

  setStretch(int arg__1) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QFont__setStretch_int')
        .asFunction();
    func(thisCpp, arg__1);
  } // setStrikeOut(bool arg__1)

  setStrikeOut(bool arg__1) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QFont__setStrikeOut_bool')
        .asFunction();
    func(thisCpp, arg__1 ? 1 : 0);
  } // setStyleHint(QFont::StyleHint arg__1)

  setStyleHint(int arg__1) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QFont__setStyleHint_StyleHint')
        .asFunction();
    func(thisCpp, arg__1);
  } // setStyleName(const QString & arg__1)

  setStyleName(String? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QFont__setStyleName_QString')
        .asFunction();
    func(thisCpp, arg__1?.toNativeUtf8() ?? ffi.nullptr);
  } // setUnderline(bool arg__1)

  setUnderline(bool arg__1) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QFont__setUnderline_bool')
        .asFunction();
    func(thisCpp, arg__1 ? 1 : 0);
  } // setWordSpacing(qreal spacing)

  setWordSpacing(double spacing) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QFont__setWordSpacing_qreal')
        .asFunction();
    func(thisCpp, spacing);
  } // stretch() const

  int stretch() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QFont__stretch')
        .asFunction();
    return func(thisCpp);
  } // strikeOut() const

  bool strikeOut() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QFont__strikeOut')
        .asFunction();
    return func(thisCpp) != 0;
  } // styleHint() const

  int styleHint() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QFont__styleHint')
        .asFunction();
    return func(thisCpp);
  } // styleName() const

  QString styleName() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QFont__styleName')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  }

  static // substitute(const QString & arg__1)
      QString substitute(String? arg__1) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_static_QFont__substitute_QString')
        .asFunction();
    ffi.Pointer<void> result = func(arg__1?.toNativeUtf8() ?? ffi.nullptr);
    return QString.fromCppPointer(result, true);
  }

  static // substitutes(const QString & arg__1)
      QList substitutes(String? arg__1) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_static_QFont__substitutes_QString')
        .asFunction();
    ffi.Pointer<void> result = func(arg__1?.toNativeUtf8() ?? ffi.nullptr);
    return QList<QString>.fromCppPointer(result, true);
  }

  static // substitutions()
      QList substitutions() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QFont__substitutions')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QList<QString>.fromCppPointer(result, true);
  } // underline() const

  bool underline() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QFont__underline')
        .asFunction();
    return func(thisCpp) != 0;
  } // wordSpacing() const

  double wordSpacing() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QFont__wordSpacing')
        .asFunction();
    return func(thisCpp);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QFont__destructor')
        .asFunction();
    func(thisCpp);
  }
}
