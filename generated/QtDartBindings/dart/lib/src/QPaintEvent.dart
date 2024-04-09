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

class QPaintEvent extends QEvent {
  QPaintEvent.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QPaintEvent.init() : super.init() {}
  factory QPaintEvent.fromCache(var cppPointer, [needsAutoDelete = false]) {
    if (QEvent.isCached(cppPointer)) {
      var instance = QEvent.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QPaintEvent;
    }
    return QPaintEvent.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QPaintEvent_Finalizer";
  } //QPaintEvent(const QRect & paintRect)

  QPaintEvent(QRect? paintRect) : super.init() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPaintEvent__constructor_QRect')
        .asFunction();
    thisCpp = func(paintRect == null ? ffi.nullptr : paintRect.thisCpp);
    QEvent.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } //QPaintEvent(const QRegion & paintRegion)
  QPaintEvent.ctor2(QRegion paintRegion) : super.init() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPaintEvent__constructor_QRegion')
        .asFunction();
    thisCpp = func(paintRegion == null ? ffi.nullptr : paintRegion.thisCpp);
    QEvent.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  }
  static ffi.Pointer<void> clone_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QEvent.s_dartInstanceByCppPtr[thisCpp.address] as QPaintEvent;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QPaintEvent::clone() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.clone();
    return result.thisCpp;
  } // rect() const

  QRect rect() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPaintEvent__rect')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRect.fromCppPointer(result, false);
  } // region() const

  QRegion region() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPaintEvent__region')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRegion.fromCppPointer(result, false);
  }

  static void setAccepted_calledFromC(ffi.Pointer<void> thisCpp, int accepted) {
    var dartInstance =
        QEvent.s_dartInstanceByCppPtr[thisCpp.address] as QPaintEvent;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QPaintEvent::setAccepted(bool accepted)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setAccepted(accepted != 0);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QPaintEvent__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 4164:
        return "c_QPaintEvent__clone";
      case 4172:
        return "c_QPaintEvent__setAccepted_bool";
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
            'c_QPaintEvent__registerVirtualMethodCallback')
        .asFunction();
    final callback4164 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QPaintEvent.clone_calledFromC);
    registerCallback(thisCpp, callback4164, 4164);
    final callback4172 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int8_FFI>(
            QEvent.setAccepted_calledFromC);
    registerCallback(thisCpp, callback4172, 4172);
  }
}
