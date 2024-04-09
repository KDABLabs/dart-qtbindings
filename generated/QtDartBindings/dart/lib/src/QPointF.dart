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

class QPointF implements ffi.Finalizable {
  static var s_dartInstanceByCppPtr = Map<int, QPointF>();
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

  factory QPointF.fromCache(var cppPointer, [needsAutoDelete = false]) {
    return (s_dartInstanceByCppPtr[cppPointer.address] ??
        QPointF.fromCppPointer(cppPointer, needsAutoDelete)) as QPointF;
  }
  QPointF.fromCppPointer(var cppPointer, [this._needsAutoDelete = false]) {
    thisCpp = cppPointer;
  }
  QPointF.init() {}
  String getFinalizerName() {
    return "c_QPointF_Finalizer";
  } //QPointF()

  QPointF() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_QPointF__constructor')
        .asFunction();
    thisCpp = func();
    QPointF.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QPointF(const QPoint & p)
  QPointF.ctor2(QPoint? p) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPointF__constructor_QPoint')
        .asFunction();
    thisCpp = func(p == null ? ffi.nullptr : p.thisCpp);
    QPointF.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QPointF(qreal xpos, qreal ypos)
  QPointF.ctor3(double xpos, double ypos) {
    final voidstar_Func_double_double func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_ffi_Double_ffi_Double_FFI>>(
            'c_QPointF__constructor_qreal_qreal')
        .asFunction();
    thisCpp = func(xpos, ypos);
    QPointF.s_dartInstanceByCppPtr[thisCpp.address] = this;
  }
  static // dotProduct(const QPointF & p1, const QPointF & p2)
      double dotProduct(QPointF? p1, QPointF? p2) {
    final double_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_voidstar_FFI>>(
            'c_static_QPointF__dotProduct_QPointF_QPointF')
        .asFunction();
    return func(p1 == null ? ffi.nullptr : p1.thisCpp,
        p2 == null ? ffi.nullptr : p2.thisCpp);
  } // isNull() const

  bool isNull() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>('c_QPointF__isNull')
        .asFunction();
    return func(thisCpp) != 0;
  } // manhattanLength() const

  double manhattanLength() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QPointF__manhattanLength')
        .asFunction();
    return func(thisCpp);
  } // setX(qreal x)

  setX(double x) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QPointF__setX_qreal')
        .asFunction();
    func(thisCpp, x);
  } // setY(qreal y)

  setY(double y) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QPointF__setY_qreal')
        .asFunction();
    func(thisCpp, y);
  } // toPoint() const

  QPoint toPoint() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPointF__toPoint')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QPoint.fromCppPointer(result, true);
  } // transposed() const

  QPointF transposed() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPointF__transposed')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QPointF.fromCppPointer(result, true);
  } // x() const

  double x() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>('c_QPointF__x')
        .asFunction();
    return func(thisCpp);
  } // y() const

  double y() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>('c_QPointF__y')
        .asFunction();
    return func(thisCpp);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QPointF__destructor')
        .asFunction();
    func(thisCpp);
  }
}
