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

class QFontDatabase_SystemFont {
  static const GeneralFont = 0;
  static const FixedFont = 1;
  static const TitleFont = 2;
  static const SmallestReadableFont = 3;
}

class QFontDatabase implements ffi.Finalizable {
  static var s_dartInstanceByCppPtr = Map<int, QFontDatabase>();
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

  factory QFontDatabase.fromCache(var cppPointer, [needsAutoDelete = false]) {
    return (s_dartInstanceByCppPtr[cppPointer.address] ??
            QFontDatabase.fromCppPointer(cppPointer, needsAutoDelete))
        as QFontDatabase;
  }
  QFontDatabase.fromCppPointer(var cppPointer,
      [this._needsAutoDelete = false]) {
    thisCpp = cppPointer;
  }
  QFontDatabase.init() {}
  String getFinalizerName() {
    return "c_QFontDatabase_Finalizer";
  }

  static // addApplicationFont(const QString & fileName)
      int addApplicationFont(String? fileName) {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_static_QFontDatabase__addApplicationFont_QString')
        .asFunction();
    return func(fileName?.toNativeUtf8() ?? ffi.nullptr);
  }

  static // addApplicationFontFromData(const QByteArray & fontData)
      int addApplicationFontFromData(QByteArray? fontData) {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_static_QFontDatabase__addApplicationFontFromData_QByteArray')
        .asFunction();
    return func(fontData == null ? ffi.nullptr : fontData.thisCpp);
  }

  static // applicationFontFamilies(int id)
      QList applicationFontFamilies(int id) {
    final voidstar_Func_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_ffi_Int32_FFI>>(
            'c_static_QFontDatabase__applicationFontFamilies_int')
        .asFunction();
    ffi.Pointer<void> result = func(id);
    return QList<QString>.fromCppPointer(result, true);
  }

  static // bold(const QString & family, const QString & style)
      bool bold(String? family, String? style) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_static_QFontDatabase__bold_QString_QString')
        .asFunction();
    return func(family?.toNativeUtf8() ?? ffi.nullptr,
            style?.toNativeUtf8() ?? ffi.nullptr) !=
        0;
  }

  static // families()
      QList families() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QFontDatabase__families')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QList<QString>.fromCppPointer(result, true);
  }

  static // font(const QString & family, const QString & style, int pointSize)
      QFont font(String? family, String? style, int pointSize) {
    final voidstar_Func_voidstar_voidstar_int func = _dylib
        .lookup<
                ffi
                .NativeFunction<voidstar_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            'c_static_QFontDatabase__font_QString_QString_int')
        .asFunction();
    ffi.Pointer<void> result = func(family?.toNativeUtf8() ?? ffi.nullptr,
        style?.toNativeUtf8() ?? ffi.nullptr, pointSize);
    return QFont.fromCppPointer(result, true);
  }

  static // hasFamily(const QString & family)
      bool hasFamily(String? family) {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_static_QFontDatabase__hasFamily_QString')
        .asFunction();
    return func(family?.toNativeUtf8() ?? ffi.nullptr) != 0;
  }

  static // isBitmapScalable(const QString & family, const QString & style)
      bool isBitmapScalable(String? family, {required String? style}) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_static_QFontDatabase__isBitmapScalable_QString_QString')
        .asFunction();
    return func(family?.toNativeUtf8() ?? ffi.nullptr,
            style?.toNativeUtf8() ?? ffi.nullptr) !=
        0;
  }

  static // isFixedPitch(const QString & family, const QString & style)
      bool isFixedPitch(String? family, {required String? style}) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_static_QFontDatabase__isFixedPitch_QString_QString')
        .asFunction();
    return func(family?.toNativeUtf8() ?? ffi.nullptr,
            style?.toNativeUtf8() ?? ffi.nullptr) !=
        0;
  }

  static // isPrivateFamily(const QString & family)
      bool isPrivateFamily(String? family) {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_static_QFontDatabase__isPrivateFamily_QString')
        .asFunction();
    return func(family?.toNativeUtf8() ?? ffi.nullptr) != 0;
  }

  static // isScalable(const QString & family, const QString & style)
      bool isScalable(String? family, {required String? style}) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_static_QFontDatabase__isScalable_QString_QString')
        .asFunction();
    return func(family?.toNativeUtf8() ?? ffi.nullptr,
            style?.toNativeUtf8() ?? ffi.nullptr) !=
        0;
  }

  static // isSmoothlyScalable(const QString & family, const QString & style)
      bool isSmoothlyScalable(String? family, {required String? style}) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_static_QFontDatabase__isSmoothlyScalable_QString_QString')
        .asFunction();
    return func(family?.toNativeUtf8() ?? ffi.nullptr,
            style?.toNativeUtf8() ?? ffi.nullptr) !=
        0;
  }

  static // italic(const QString & family, const QString & style)
      bool italic(String? family, String? style) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_static_QFontDatabase__italic_QString_QString')
        .asFunction();
    return func(family?.toNativeUtf8() ?? ffi.nullptr,
            style?.toNativeUtf8() ?? ffi.nullptr) !=
        0;
  }

  static // pointSizes(const QString & family, const QString & style)
      QList pointSizes(String? family, {required String? style}) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_static_QFontDatabase__pointSizes_QString_QString')
        .asFunction();
    ffi.Pointer<void> result = func(family?.toNativeUtf8() ?? ffi.nullptr,
        style?.toNativeUtf8() ?? ffi.nullptr);
    return QList<int>.fromCppPointer(result, true);
  }

  static // removeAllApplicationFonts()
      bool removeAllApplicationFonts() {
    final bool_Func_void func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_void_FFI>>(
            'c_static_QFontDatabase__removeAllApplicationFonts')
        .asFunction();
    return func() != 0;
  }

  static // removeApplicationFont(int id)
      bool removeApplicationFont(int id) {
    final bool_Func_int func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_ffi_Int32_FFI>>(
            'c_static_QFontDatabase__removeApplicationFont_int')
        .asFunction();
    return func(id) != 0;
  }

  static // smoothSizes(const QString & family, const QString & style)
      QList smoothSizes(String? family, String? style) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_static_QFontDatabase__smoothSizes_QString_QString')
        .asFunction();
    ffi.Pointer<void> result = func(family?.toNativeUtf8() ?? ffi.nullptr,
        style?.toNativeUtf8() ?? ffi.nullptr);
    return QList<int>.fromCppPointer(result, true);
  }

  static // standardSizes()
      QList standardSizes() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QFontDatabase__standardSizes')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QList<int>.fromCppPointer(result, true);
  }

  static // styleString(const QFont & font)
      QString styleString(QFont? font) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_static_QFontDatabase__styleString_QFont')
        .asFunction();
    ffi.Pointer<void> result = func(font == null ? ffi.nullptr : font.thisCpp);
    return QString.fromCppPointer(result, true);
  }

  static // styles(const QString & family)
      QList styles(String? family) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_static_QFontDatabase__styles_QString')
        .asFunction();
    ffi.Pointer<void> result = func(family?.toNativeUtf8() ?? ffi.nullptr);
    return QList<QString>.fromCppPointer(result, true);
  }

  static // systemFont(QFontDatabase::SystemFont type)
      QFont systemFont(int type) {
    final voidstar_Func_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_ffi_Int32_FFI>>(
            'c_static_QFontDatabase__systemFont_SystemFont')
        .asFunction();
    ffi.Pointer<void> result = func(type);
    return QFont.fromCppPointer(result, true);
  }

  static // weight(const QString & family, const QString & style)
      int weight(String? family, String? style) {
    final int_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_voidstar_FFI>>(
            'c_static_QFontDatabase__weight_QString_QString')
        .asFunction();
    return func(family?.toNativeUtf8() ?? ffi.nullptr,
        style?.toNativeUtf8() ?? ffi.nullptr);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QFontDatabase__destructor')
        .asFunction();
    func(thisCpp);
  }
}
