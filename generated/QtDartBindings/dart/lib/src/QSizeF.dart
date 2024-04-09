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

class QSizeF implements ffi.Finalizable {
  static var s_dartInstanceByCppPtr = Map<int, QSizeF>();
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

  factory QSizeF.fromCache(var cppPointer, [needsAutoDelete = false]) {
    return (s_dartInstanceByCppPtr[cppPointer.address] ??
        QSizeF.fromCppPointer(cppPointer, needsAutoDelete)) as QSizeF;
  }
  QSizeF.fromCppPointer(var cppPointer, [this._needsAutoDelete = false]) {
    thisCpp = cppPointer;
  }
  QSizeF.init() {}
  String getFinalizerName() {
    return "c_QSizeF_Finalizer";
  } //QSizeF()

  QSizeF() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_QSizeF__constructor')
        .asFunction();
    thisCpp = func();
    QSizeF.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QSizeF(const QSize & sz)
  QSizeF.ctor2(QSize? sz) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QSizeF__constructor_QSize')
        .asFunction();
    thisCpp = func(sz == null ? ffi.nullptr : sz.thisCpp);
    QSizeF.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QSizeF(qreal w, qreal h)
  QSizeF.ctor3(double w, double h) {
    final voidstar_Func_double_double func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_ffi_Double_ffi_Double_FFI>>(
            'c_QSizeF__constructor_qreal_qreal')
        .asFunction();
    thisCpp = func(w, h);
    QSizeF.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } // boundedTo(const QSizeF & arg__1) const
  QSizeF boundedTo(QSizeF? arg__1) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QSizeF__boundedTo_QSizeF')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
    return QSizeF.fromCppPointer(result, true);
  } // expandedTo(const QSizeF & arg__1) const

  QSizeF expandedTo(QSizeF? arg__1) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QSizeF__expandedTo_QSizeF')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
    return QSizeF.fromCppPointer(result, true);
  } // height() const

  double height() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QSizeF__height')
        .asFunction();
    return func(thisCpp);
  } // isEmpty() const

  bool isEmpty() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>('c_QSizeF__isEmpty')
        .asFunction();
    return func(thisCpp) != 0;
  } // isNull() const

  bool isNull() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>('c_QSizeF__isNull')
        .asFunction();
    return func(thisCpp) != 0;
  } // isValid() const

  bool isValid() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>('c_QSizeF__isValid')
        .asFunction();
    return func(thisCpp) != 0;
  } // setHeight(qreal h)

  setHeight(double h) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QSizeF__setHeight_qreal')
        .asFunction();
    func(thisCpp, h);
  } // setWidth(qreal w)

  setWidth(double w) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QSizeF__setWidth_qreal')
        .asFunction();
    func(thisCpp, w);
  } // toSize() const

  QSize toSize() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QSizeF__toSize')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QSize.fromCppPointer(result, true);
  } // transpose()

  transpose() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QSizeF__transpose')
        .asFunction();
    func(thisCpp);
  } // transposed() const

  QSizeF transposed() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QSizeF__transposed')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QSizeF.fromCppPointer(result, true);
  } // width() const

  double width() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>('c_QSizeF__width')
        .asFunction();
    return func(thisCpp);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QSizeF__destructor')
        .asFunction();
    func(thisCpp);
  }
}
