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

class QPointerEvent extends QInputEvent {
  QPointerEvent.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QPointerEvent.init() : super.init() {}
  factory QPointerEvent.fromCache(var cppPointer, [needsAutoDelete = false]) {
    if (QEvent.isCached(cppPointer)) {
      var instance = QEvent.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QPointerEvent;
    }
    return QPointerEvent.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QPointerEvent_Finalizer";
  } // allPointsAccepted() const

  bool allPointsAccepted() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QPointerEvent__allPointsAccepted')
        .asFunction();
    return func(thisCpp) != 0;
  } // allPointsGrabbed() const

  bool allPointsGrabbed() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QPointerEvent__allPointsGrabbed')
        .asFunction();
    return func(thisCpp) != 0;
  }

  static ffi.Pointer<void> clone_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QEvent.s_dartInstanceByCppPtr[thisCpp.address] as QPointerEvent;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QPointerEvent::clone() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.clone();
    return result.thisCpp;
  } // isBeginEvent() const

  bool isBeginEvent() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            cFunctionSymbolName(4208))
        .asFunction();
    return func(thisCpp) != 0;
  }

  static int isBeginEvent_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QEvent.s_dartInstanceByCppPtr[thisCpp.address] as QPointerEvent;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QPointerEvent::isBeginEvent() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.isBeginEvent();
    return result ? 1 : 0;
  } // isEndEvent() const

  bool isEndEvent() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            cFunctionSymbolName(4209))
        .asFunction();
    return func(thisCpp) != 0;
  }

  static int isEndEvent_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QEvent.s_dartInstanceByCppPtr[thisCpp.address] as QPointerEvent;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QPointerEvent::isEndEvent() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.isEndEvent();
    return result ? 1 : 0;
  } // isUpdateEvent() const

  bool isUpdateEvent() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            cFunctionSymbolName(4210))
        .asFunction();
    return func(thisCpp) != 0;
  }

  static int isUpdateEvent_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QEvent.s_dartInstanceByCppPtr[thisCpp.address] as QPointerEvent;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QPointerEvent::isUpdateEvent() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.isUpdateEvent();
    return result ? 1 : 0;
  } // pointCount() const

  int pointCount() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QPointerEvent__pointCount')
        .asFunction();
    return func(thisCpp);
  }

  static void setAccepted_calledFromC(ffi.Pointer<void> thisCpp, int accepted) {
    var dartInstance =
        QEvent.s_dartInstanceByCppPtr[thisCpp.address] as QPointerEvent;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QPointerEvent::setAccepted(bool accepted)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setAccepted(accepted != 0);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QPointerEvent__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 4164:
        return "c_QPointerEvent__clone";
      case 4208:
        return "c_QPointerEvent__isBeginEvent";
      case 4209:
        return "c_QPointerEvent__isEndEvent";
      case 4210:
        return "c_QPointerEvent__isUpdateEvent";
      case 4172:
        return "c_QPointerEvent__setAccepted_bool";
    }
    return super.cFunctionSymbolName(methodId);
  }

  static String methodNameFromId(int methodId) {
    switch (methodId) {
      case 4164:
        return "clone";
      case 4208:
        return "isBeginEvent";
      case 4209:
        return "isEndEvent";
      case 4210:
        return "isUpdateEvent";
      case 4172:
        return "setAccepted";
    }
    throw Error();
  }

  void registerCallbacks() {
    assert(thisCpp != null);
    final RegisterMethodIsReimplementedCallback registerCallback = _dylib
        .lookup<ffi.NativeFunction<RegisterMethodIsReimplementedCallback_FFI>>(
            'c_QPointerEvent__registerVirtualMethodCallback')
        .asFunction();
    final callback4164 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QPointerEvent.clone_calledFromC);
    registerCallback(thisCpp, callback4164, 4164);
    const callbackExcept4208 = 0;
    final callback4208 = ffi.Pointer.fromFunction<bool_Func_voidstar_FFI>(
        QPointerEvent.isBeginEvent_calledFromC, callbackExcept4208);
    registerCallback(thisCpp, callback4208, 4208);
    const callbackExcept4209 = 0;
    final callback4209 = ffi.Pointer.fromFunction<bool_Func_voidstar_FFI>(
        QPointerEvent.isEndEvent_calledFromC, callbackExcept4209);
    registerCallback(thisCpp, callback4209, 4209);
    const callbackExcept4210 = 0;
    final callback4210 = ffi.Pointer.fromFunction<bool_Func_voidstar_FFI>(
        QPointerEvent.isUpdateEvent_calledFromC, callbackExcept4210);
    registerCallback(thisCpp, callback4210, 4210);
    final callback4172 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int8_FFI>(
            QPointerEvent.setAccepted_calledFromC);
    registerCallback(thisCpp, callback4172, 4172);
  }
}
