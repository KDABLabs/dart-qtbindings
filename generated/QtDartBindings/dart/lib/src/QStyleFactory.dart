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

class QStyleFactory implements ffi.Finalizable {
  static var s_dartInstanceByCppPtr = Map<int, QStyleFactory>();
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

  factory QStyleFactory.fromCache(var cppPointer, [needsAutoDelete = false]) {
    return (s_dartInstanceByCppPtr[cppPointer.address] ??
            QStyleFactory.fromCppPointer(cppPointer, needsAutoDelete))
        as QStyleFactory;
  }
  QStyleFactory.fromCppPointer(var cppPointer,
      [this._needsAutoDelete = false]) {
    thisCpp = cppPointer;
  }
  QStyleFactory.init() {}
  String getFinalizerName() {
    return "c_QStyleFactory_Finalizer";
  } //QStyleFactory()

  QStyleFactory() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_QStyleFactory__constructor')
        .asFunction();
    thisCpp = func();
    QStyleFactory.s_dartInstanceByCppPtr[thisCpp.address] = this;
  }
  static // create(const QString & arg__1)
      QStyle create(String? arg__1) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_static_QStyleFactory__create_QString')
        .asFunction();
    ffi.Pointer<void> result = func(arg__1?.toNativeUtf8() ?? ffi.nullptr);
    return QStyle.fromCppPointer(result, false);
  }

  static // keys()
      QList keys() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QStyleFactory__keys')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QList<QString>.fromCppPointer(result, true);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QStyleFactory__destructor')
        .asFunction();
    func(thisCpp);
  }
}
