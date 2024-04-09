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

class QPen implements ffi.Finalizable {
  static var s_dartInstanceByCppPtr = Map<int, QPen>();
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

  factory QPen.fromCache(var cppPointer, [needsAutoDelete = false]) {
    return (s_dartInstanceByCppPtr[cppPointer.address] ??
        QPen.fromCppPointer(cppPointer, needsAutoDelete)) as QPen;
  }
  QPen.fromCppPointer(var cppPointer, [this._needsAutoDelete = false]) {
    thisCpp = cppPointer;
  }
  QPen.init() {}
  String getFinalizerName() {
    return "c_QPen_Finalizer";
  } //QPen()

  QPen() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_QPen__constructor')
        .asFunction();
    thisCpp = func();
    QPen.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QPen(const QBrush & brush, qreal width)
  QPen.ctor2(QBrush brush, double width) {
    final voidstar_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Double_FFI>>(
            'c_QPen__constructor_QBrush_qreal')
        .asFunction();
    thisCpp = func(brush == null ? ffi.nullptr : brush.thisCpp, width);
    QPen.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QPen(const QColor & color)
  QPen.ctor3(QColor? color) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPen__constructor_QColor')
        .asFunction();
    thisCpp = func(color == null ? ffi.nullptr : color.thisCpp);
    QPen.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } // brush() const
  QBrush brush() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>('c_QPen__brush')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QBrush.fromCppPointer(result, true);
  } // color() const

  QColor color() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>('c_QPen__color')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QColor.fromCppPointer(result, true);
  } // dashOffset() const

  double dashOffset() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QPen__dashOffset')
        .asFunction();
    return func(thisCpp);
  } // dashPattern() const

  QList dashPattern() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPen__dashPattern')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QList<double>.fromCppPointer(result, true);
  } // detach()

  detach() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>('c_QPen__detach')
        .asFunction();
    func(thisCpp);
  } // isCosmetic() const

  bool isCosmetic() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QPen__isCosmetic')
        .asFunction();
    return func(thisCpp) != 0;
  } // isDetached()

  bool isDetached() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QPen__isDetached')
        .asFunction();
    return func(thisCpp) != 0;
  } // isSolid() const

  bool isSolid() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>('c_QPen__isSolid')
        .asFunction();
    return func(thisCpp) != 0;
  } // miterLimit() const

  double miterLimit() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QPen__miterLimit')
        .asFunction();
    return func(thisCpp);
  } // setBrush(const QBrush & brush)

  setBrush(QBrush brush) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPen__setBrush_QBrush')
        .asFunction();
    func(thisCpp, brush == null ? ffi.nullptr : brush.thisCpp);
  } // setColor(const QColor & color)

  setColor(QColor? color) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPen__setColor_QColor')
        .asFunction();
    func(thisCpp, color == null ? ffi.nullptr : color.thisCpp);
  } // setCosmetic(bool cosmetic)

  setCosmetic(bool cosmetic) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QPen__setCosmetic_bool')
        .asFunction();
    func(thisCpp, cosmetic ? 1 : 0);
  } // setDashOffset(qreal doffset)

  setDashOffset(double doffset) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QPen__setDashOffset_qreal')
        .asFunction();
    func(thisCpp, doffset);
  } // setDashPattern(const QList<qreal > & pattern)

  setDashPattern(QList? pattern) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPen__setDashPattern_QList_qreal')
        .asFunction();
    func(thisCpp, pattern == null ? ffi.nullptr : pattern.thisCpp);
  } // setMiterLimit(qreal limit)

  setMiterLimit(double limit) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QPen__setMiterLimit_qreal')
        .asFunction();
    func(thisCpp, limit);
  } // setWidth(int width)

  setWidth(int width) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QPen__setWidth_int')
        .asFunction();
    func(thisCpp, width);
  } // setWidthF(qreal width)

  setWidthF(double width) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QPen__setWidthF_qreal')
        .asFunction();
    func(thisCpp, width);
  } // width() const

  int width() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QPen__width')
        .asFunction();
    return func(thisCpp);
  } // widthF() const

  double widthF() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>('c_QPen__widthF')
        .asFunction();
    return func(thisCpp);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QPen__destructor')
        .asFunction();
    func(thisCpp);
  }
}
