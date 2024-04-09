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

class QStyleOptionComplex_StyleOptionType {
  static const Type = 983040;
}

class QStyleOptionComplex_StyleOptionVersion {
  static const Version = 1;
}

class QStyleOptionComplex extends QStyleOption {
  QStyleOptionComplex.fromCppPointer(var cppPointer,
      [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QStyleOptionComplex.init() : super.init() {}
  factory QStyleOptionComplex.fromCache(var cppPointer,
      [needsAutoDelete = false]) {
    if (QStyleOption.isCached(cppPointer)) {
      var instance = QStyleOption.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QStyleOptionComplex;
    }
    return QStyleOptionComplex.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QStyleOptionComplex_Finalizer";
  } //QStyleOptionComplex(int version, int type)

  QStyleOptionComplex(
      {int version = QStyleOptionComplex_StyleOptionVersion.Version,
      int type = QStyleOption_OptionType.SO_Complex})
      : super.init() {
    final voidstar_Func_int_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_ffi_Int32_ffi_Int32_FFI>>(
            'c_QStyleOptionComplex__constructor_int_int')
        .asFunction();
    thisCpp = func(version, type);
    QStyleOption.s_dartInstanceByCppPtr[thisCpp.address] = this;
  }
  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QStyleOptionComplex__destructor')
        .asFunction();
    func(thisCpp);
  }
}
