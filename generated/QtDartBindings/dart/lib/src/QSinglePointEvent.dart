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

class QSinglePointEvent extends QPointerEvent {
  QSinglePointEvent.fromCppPointer(var cppPointer,
      [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QSinglePointEvent.init() : super.init() {}
  factory QSinglePointEvent.fromCache(var cppPointer,
      [needsAutoDelete = false]) {
    if (QEvent.isCached(cppPointer)) {
      var instance = QEvent.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QSinglePointEvent;
    }
    return QSinglePointEvent.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QSinglePointEvent_Finalizer";
  }

  static ffi.Pointer<void> clone_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QEvent.s_dartInstanceByCppPtr[thisCpp.address] as QSinglePointEvent;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSinglePointEvent::clone() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.clone();
    return result.thisCpp;
  } // exclusivePointGrabber() const

  QObject exclusivePointGrabber() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QSinglePointEvent__exclusivePointGrabber')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QObject.fromCppPointer(result, false);
  } // globalPosition() const

  QPointF globalPosition() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QSinglePointEvent__globalPosition')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QPointF.fromCppPointer(result, true);
  }

  static int isBeginEvent_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QEvent.s_dartInstanceByCppPtr[thisCpp.address] as QSinglePointEvent;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSinglePointEvent::isBeginEvent() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.isBeginEvent();
    return result ? 1 : 0;
  }

  static int isEndEvent_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QEvent.s_dartInstanceByCppPtr[thisCpp.address] as QSinglePointEvent;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSinglePointEvent::isEndEvent() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.isEndEvent();
    return result ? 1 : 0;
  }

  static int isUpdateEvent_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QEvent.s_dartInstanceByCppPtr[thisCpp.address] as QSinglePointEvent;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSinglePointEvent::isUpdateEvent() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.isUpdateEvent();
    return result ? 1 : 0;
  } // position() const

  QPointF position() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QSinglePointEvent__position')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QPointF.fromCppPointer(result, true);
  } // scenePosition() const

  QPointF scenePosition() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QSinglePointEvent__scenePosition')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QPointF.fromCppPointer(result, true);
  }

  static void setAccepted_calledFromC(ffi.Pointer<void> thisCpp, int accepted) {
    var dartInstance =
        QEvent.s_dartInstanceByCppPtr[thisCpp.address] as QSinglePointEvent;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSinglePointEvent::setAccepted(bool accepted)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setAccepted(accepted != 0);
  } // setExclusivePointGrabber(QObject * exclusiveGrabber)

  setExclusivePointGrabber(QObject? exclusiveGrabber) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QSinglePointEvent__setExclusivePointGrabber_QObject')
        .asFunction();
    func(thisCpp,
        exclusiveGrabber == null ? ffi.nullptr : exclusiveGrabber.thisCpp);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QSinglePointEvent__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 4164:
        return "c_QSinglePointEvent__clone";
      case 4208:
        return "c_QSinglePointEvent__isBeginEvent";
      case 4209:
        return "c_QSinglePointEvent__isEndEvent";
      case 4210:
        return "c_QSinglePointEvent__isUpdateEvent";
      case 4172:
        return "c_QSinglePointEvent__setAccepted_bool";
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
            'c_QSinglePointEvent__registerVirtualMethodCallback')
        .asFunction();
    final callback4164 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QSinglePointEvent.clone_calledFromC);
    registerCallback(thisCpp, callback4164, 4164);
    const callbackExcept4208 = 0;
    final callback4208 = ffi.Pointer.fromFunction<bool_Func_voidstar_FFI>(
        QSinglePointEvent.isBeginEvent_calledFromC, callbackExcept4208);
    registerCallback(thisCpp, callback4208, 4208);
    const callbackExcept4209 = 0;
    final callback4209 = ffi.Pointer.fromFunction<bool_Func_voidstar_FFI>(
        QSinglePointEvent.isEndEvent_calledFromC, callbackExcept4209);
    registerCallback(thisCpp, callback4209, 4209);
    const callbackExcept4210 = 0;
    final callback4210 = ffi.Pointer.fromFunction<bool_Func_voidstar_FFI>(
        QSinglePointEvent.isUpdateEvent_calledFromC, callbackExcept4210);
    registerCallback(thisCpp, callback4210, 4210);
    final callback4172 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int8_FFI>(
            QPointerEvent.setAccepted_calledFromC);
    registerCallback(thisCpp, callback4172, 4172);
  }
}
