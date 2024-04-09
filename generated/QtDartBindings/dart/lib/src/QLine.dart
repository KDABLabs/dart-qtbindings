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

class QLine implements ffi.Finalizable {
  static var s_dartInstanceByCppPtr = Map<int, QLine>();
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

  factory QLine.fromCache(var cppPointer, [needsAutoDelete = false]) {
    return (s_dartInstanceByCppPtr[cppPointer.address] ??
        QLine.fromCppPointer(cppPointer, needsAutoDelete)) as QLine;
  }
  QLine.fromCppPointer(var cppPointer, [this._needsAutoDelete = false]) {
    thisCpp = cppPointer;
  }
  QLine.init() {}
  String getFinalizerName() {
    return "c_QLine_Finalizer";
  } //QLine()

  QLine() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_QLine__constructor')
        .asFunction();
    thisCpp = func();
    QLine.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QLine(const QPoint & pt1, const QPoint & pt2)
  QLine.ctor2(QPoint? pt1, QPoint? pt2) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QLine__constructor_QPoint_QPoint')
        .asFunction();
    thisCpp = func(pt1 == null ? ffi.nullptr : pt1.thisCpp,
        pt2 == null ? ffi.nullptr : pt2.thisCpp);
    QLine.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QLine(int x1, int y1, int x2, int y2)
  QLine.ctor3(int x1, int y1, int x2, int y2) {
    final voidstar_Func_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QLine__constructor_int_int_int_int')
        .asFunction();
    thisCpp = func(x1, y1, x2, y2);
    QLine.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } // center() const
  QPoint center() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QLine__center')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QPoint.fromCppPointer(result, true);
  } // dx() const

  int dx() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QLine__dx')
        .asFunction();
    return func(thisCpp);
  } // dy() const

  int dy() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QLine__dy')
        .asFunction();
    return func(thisCpp);
  } // isNull() const

  bool isNull() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>('c_QLine__isNull')
        .asFunction();
    return func(thisCpp) != 0;
  } // p1() const

  QPoint p1() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>('c_QLine__p1')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QPoint.fromCppPointer(result, true);
  } // p2() const

  QPoint p2() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>('c_QLine__p2')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QPoint.fromCppPointer(result, true);
  } // setLine(int x1, int y1, int x2, int y2)

  setLine(int x1, int y1, int x2, int y2) {
    final void_Func_voidstar_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QLine__setLine_int_int_int_int')
        .asFunction();
    func(thisCpp, x1, y1, x2, y2);
  } // setP1(const QPoint & p1)

  setP1(QPoint? p1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QLine__setP1_QPoint')
        .asFunction();
    func(thisCpp, p1 == null ? ffi.nullptr : p1.thisCpp);
  } // setP2(const QPoint & p2)

  setP2(QPoint? p2) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QLine__setP2_QPoint')
        .asFunction();
    func(thisCpp, p2 == null ? ffi.nullptr : p2.thisCpp);
  } // setPoints(const QPoint & p1, const QPoint & p2)

  setPoints(QPoint? p1, QPoint? p2) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QLine__setPoints_QPoint_QPoint')
        .asFunction();
    func(thisCpp, p1 == null ? ffi.nullptr : p1.thisCpp,
        p2 == null ? ffi.nullptr : p2.thisCpp);
  } // toLineF() const

  QLineF toLineF() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QLine__toLineF')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QLineF.fromCppPointer(result, true);
  } // translate(const QPoint & p)

  translate(QPoint? p) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QLine__translate_QPoint')
        .asFunction();
    func(thisCpp, p == null ? ffi.nullptr : p.thisCpp);
  } // translate(int dx, int dy)

  translate_2(int dx, int dy) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QLine__translate_int_int')
        .asFunction();
    func(thisCpp, dx, dy);
  } // translated(const QPoint & p) const

  QLine translated(QPoint? p) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QLine__translated_QPoint')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, p == null ? ffi.nullptr : p.thisCpp);
    return QLine.fromCppPointer(result, true);
  } // translated(int dx, int dy) const

  QLine translated_2(int dx, int dy) {
    final voidstar_Func_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QLine__translated_int_int')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, dx, dy);
    return QLine.fromCppPointer(result, true);
  } // x1() const

  int x1() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QLine__x1')
        .asFunction();
    return func(thisCpp);
  } // x2() const

  int x2() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QLine__x2')
        .asFunction();
    return func(thisCpp);
  } // y1() const

  int y1() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QLine__y1')
        .asFunction();
    return func(thisCpp);
  } // y2() const

  int y2() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QLine__y2')
        .asFunction();
    return func(thisCpp);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QLine__destructor')
        .asFunction();
    func(thisCpp);
  }
}
