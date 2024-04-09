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

class QStyleHintReturn_HintReturnType {
  static const SH_Default = 61440;
  static const SH_Mask = 61441;
  static const SH_Variant = 61442;
}

class QStyleHintReturn_StyleOptionType {
  static const Type = 61440;
}

class QStyleHintReturn implements ffi.Finalizable {
  static var s_dartInstanceByCppPtr = Map<int, QStyleHintReturn>();
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

  factory QStyleHintReturn.fromCache(var cppPointer,
      [needsAutoDelete = false]) {
    return (s_dartInstanceByCppPtr[cppPointer.address] ??
            QStyleHintReturn.fromCppPointer(cppPointer, needsAutoDelete))
        as QStyleHintReturn;
  }
  QStyleHintReturn.fromCppPointer(var cppPointer,
      [this._needsAutoDelete = false]) {
    thisCpp = cppPointer;
  }
  QStyleHintReturn.init() {}
  String getFinalizerName() {
    return "c_QStyleHintReturn_Finalizer";
  }

  int get version {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QStyleHintReturn___get_version')
        .asFunction();
    return func(thisCpp);
  }

  set version(int version_) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QStyleHintReturn___set_version_int')
        .asFunction();
    func(thisCpp, version_);
  }

  int get type {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QStyleHintReturn___get_type')
        .asFunction();
    return func(thisCpp);
  }

  set type(int type_) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QStyleHintReturn___set_type_int')
        .asFunction();
    func(thisCpp, type_);
  } //QStyleHintReturn(int version, int type)

  QStyleHintReturn(
      {int version = QStyleOption_StyleOptionVersion.Version,
      int type = QStyleHintReturn_HintReturnType.SH_Default}) {
    final voidstar_Func_int_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_ffi_Int32_ffi_Int32_FFI>>(
            'c_QStyleHintReturn__constructor_int_int')
        .asFunction();
    thisCpp = func(version, type);
    QStyleHintReturn.s_dartInstanceByCppPtr[thisCpp.address] = this;
  }
  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QStyleHintReturn__destructor')
        .asFunction();
    func(thisCpp);
  }
}
