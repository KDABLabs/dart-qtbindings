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

class QInputEvent extends QEvent {
  QInputEvent.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QInputEvent.init() : super.init() {}
  factory QInputEvent.fromCache(var cppPointer, [needsAutoDelete = false]) {
    if (QEvent.isCached(cppPointer)) {
      var instance = QEvent.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QInputEvent;
    }
    return QInputEvent.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QInputEvent_Finalizer";
  }

  static ffi.Pointer<void> clone_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QEvent.s_dartInstanceByCppPtr[thisCpp.address] as QInputEvent;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QInputEvent::clone() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.clone();
    return result.thisCpp;
  } // modifiers() const

  int modifiers() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QInputEvent__modifiers')
        .asFunction();
    return func(thisCpp);
  }

  static void setAccepted_calledFromC(ffi.Pointer<void> thisCpp, int accepted) {
    var dartInstance =
        QEvent.s_dartInstanceByCppPtr[thisCpp.address] as QInputEvent;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QInputEvent::setAccepted(bool accepted)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setAccepted(accepted != 0);
  } // setModifiers(QFlags<Qt::KeyboardModifier> modifiers)

  setModifiers(int modifiers) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QInputEvent__setModifiers_KeyboardModifiers')
        .asFunction();
    func(thisCpp, modifiers);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QInputEvent__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 4164:
        return "c_QInputEvent__clone";
      case 4172:
        return "c_QInputEvent__setAccepted_bool";
    }
    return super.cFunctionSymbolName(methodId);
  }

  static String methodNameFromId(int methodId) {
    switch (methodId) {
      case 4164:
        return "clone";
      case 4172:
        return "setAccepted";
    }
    throw Error();
  }

  void registerCallbacks() {
    assert(thisCpp != null);
    final RegisterMethodIsReimplementedCallback registerCallback = _dylib
        .lookup<ffi.NativeFunction<RegisterMethodIsReimplementedCallback_FFI>>(
            'c_QInputEvent__registerVirtualMethodCallback')
        .asFunction();
    final callback4164 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QInputEvent.clone_calledFromC);
    registerCallback(thisCpp, callback4164, 4164);
    final callback4172 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int8_FFI>(
            QEvent.setAccepted_calledFromC);
    registerCallback(thisCpp, callback4172, 4172);
  }
}
