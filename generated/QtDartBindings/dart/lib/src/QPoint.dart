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

class QPoint implements ffi.Finalizable {
  static var s_dartInstanceByCppPtr = Map<int, QPoint>();
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

  factory QPoint.fromCache(var cppPointer, [needsAutoDelete = false]) {
    return (s_dartInstanceByCppPtr[cppPointer.address] ??
        QPoint.fromCppPointer(cppPointer, needsAutoDelete)) as QPoint;
  }
  QPoint.fromCppPointer(var cppPointer, [this._needsAutoDelete = false]) {
    thisCpp = cppPointer;
  }
  QPoint.init() {}
  String getFinalizerName() {
    return "c_QPoint_Finalizer";
  } //QPoint()

  QPoint() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_QPoint__constructor')
        .asFunction();
    thisCpp = func();
    QPoint.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QPoint(int xpos, int ypos)
  QPoint.ctor2(int xpos, int ypos) {
    final voidstar_Func_int_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_ffi_Int32_ffi_Int32_FFI>>(
            'c_QPoint__constructor_int_int')
        .asFunction();
    thisCpp = func(xpos, ypos);
    QPoint.s_dartInstanceByCppPtr[thisCpp.address] = this;
  }
  static // dotProduct(const QPoint & p1, const QPoint & p2)
      int dotProduct(QPoint? p1, QPoint? p2) {
    final int_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_voidstar_FFI>>(
            'c_static_QPoint__dotProduct_QPoint_QPoint')
        .asFunction();
    return func(p1 == null ? ffi.nullptr : p1.thisCpp,
        p2 == null ? ffi.nullptr : p2.thisCpp);
  } // isNull() const

  bool isNull() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>('c_QPoint__isNull')
        .asFunction();
    return func(thisCpp) != 0;
  } // manhattanLength() const

  int manhattanLength() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QPoint__manhattanLength')
        .asFunction();
    return func(thisCpp);
  } // setX(int x)

  setX(int x) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QPoint__setX_int')
        .asFunction();
    func(thisCpp, x);
  } // setY(int y)

  setY(int y) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QPoint__setY_int')
        .asFunction();
    func(thisCpp, y);
  } // toPointF() const

  QPointF toPointF() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPoint__toPointF')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QPointF.fromCppPointer(result, true);
  } // transposed() const

  QPoint transposed() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPoint__transposed')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QPoint.fromCppPointer(result, true);
  } // x() const

  int x() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QPoint__x')
        .asFunction();
    return func(thisCpp);
  } // y() const

  int y() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QPoint__y')
        .asFunction();
    return func(thisCpp);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QPoint__destructor')
        .asFunction();
    func(thisCpp);
  }
}
