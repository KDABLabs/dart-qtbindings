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

class QShortcut extends QObject {
  QShortcut.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QShortcut.init() : super.init() {}
  factory QShortcut.fromCache(var cppPointer, [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QShortcut;
    }
    return QShortcut.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QShortcut_Finalizer";
  } //QShortcut(QKeySequence::StandardKey key, QObject * parent, const char * member, const char * ambiguousMember)

  QShortcut(int key, QObject? parent, {String? member, String? ambiguousMember})
      : super.init() {
    final voidstar_Func_int_voidstar_string_string func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_ffi_Int32_voidstar_string_string_FFI>>(
            'c_QShortcut__constructor_StandardKey_QObject_char_char')
        .asFunction();
    thisCpp = func(
        key,
        parent == null ? ffi.nullptr : parent.thisCpp,
        member?.toNativeUtf8() ?? ffi.nullptr,
        ambiguousMember?.toNativeUtf8() ?? ffi.nullptr);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } //QShortcut(QObject * parent)
  QShortcut.ctor2(QObject? parent) : super.init() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QShortcut__constructor_QObject')
        .asFunction();
    thisCpp = func(parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } //QShortcut(const QKeySequence & key, QObject * parent, const char * member, const char * ambiguousMember)
  QShortcut.ctor3(QKeySequence? key, QObject? parent,
      {String? member, String? ambiguousMember})
      : super.init() {
    final voidstar_Func_voidstar_voidstar_string_string func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_voidstar_string_string_FFI>>(
            'c_QShortcut__constructor_QKeySequence_QObject_char_char')
        .asFunction();
    thisCpp = func(
        key == null ? ffi.nullptr : key.thisCpp,
        parent == null ? ffi.nullptr : parent.thisCpp,
        member?.toNativeUtf8() ?? ffi.nullptr,
        ambiguousMember?.toNativeUtf8() ?? ffi.nullptr);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } // activated()
  activated() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QShortcut__activated')
        .asFunction();
    func(thisCpp);
  }

  void onActivated(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QShortcut__onActivated')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onActivated_callback);
    final callbackMethod = onActivated_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onActivated_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QShortcut;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onActivated_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // activatedAmbiguously()

  activatedAmbiguously() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QShortcut__activatedAmbiguously')
        .asFunction();
    func(thisCpp);
  }

  void onActivatedAmbiguously(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QShortcut__onActivatedAmbiguously')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onActivatedAmbiguously_callback);
    final callbackMethod = onActivatedAmbiguously_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onActivatedAmbiguously_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QShortcut;
    final signalHandlers = dartInstance
            .signalHandlerersBySignal[onActivatedAmbiguously_callback] ??
        [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // autoRepeat() const

  bool autoRepeat() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QShortcut__autoRepeat')
        .asFunction();
    return func(thisCpp) != 0;
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QShortcut;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QShortcut::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? e) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QShortcut;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QShortcut::event(QEvent * e)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance
        .event((e == null || e.address == 0) ? null : QEvent.fromCppPointer(e));
    return result ? 1 : 0;
  }

  static int eventFilter_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void>? watched, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QShortcut;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QShortcut::eventFilter(QObject * watched, QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.eventFilter(
        (watched == null || watched.address == 0)
            ? null
            : QObject.fromCppPointer(watched),
        (event == null || event.address == 0)
            ? null
            : QEvent.fromCppPointer(event));
    return result ? 1 : 0;
  } // isEnabled() const

  bool isEnabled() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QShortcut__isEnabled')
        .asFunction();
    return func(thisCpp) != 0;
  } // key() const

  QKeySequence key() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QShortcut__key')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QKeySequence.fromCppPointer(result, true);
  } // keys() const

  QList keys() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QShortcut__keys')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QList<QKeySequence>.fromCppPointer(result, true);
  } // setAutoRepeat(bool on)

  setAutoRepeat(bool on) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QShortcut__setAutoRepeat_bool')
        .asFunction();
    func(thisCpp, on ? 1 : 0);
  } // setEnabled(bool enable)

  setEnabled(bool enable) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QShortcut__setEnabled_bool')
        .asFunction();
    func(thisCpp, enable ? 1 : 0);
  } // setKey(const QKeySequence & key)

  setKey(QKeySequence? key) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QShortcut__setKey_QKeySequence')
        .asFunction();
    func(thisCpp, key == null ? ffi.nullptr : key.thisCpp);
  } // setKeys(QKeySequence::StandardKey key)

  setKeys(int key) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QShortcut__setKeys_StandardKey')
        .asFunction();
    func(thisCpp, key);
  } // setKeys(const QList<QKeySequence > & keys)

  setKeys_2(QList? keys) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QShortcut__setKeys_QList_QKeySequence')
        .asFunction();
    func(thisCpp, keys == null ? ffi.nullptr : keys.thisCpp);
  } // setWhatsThis(const QString & text)

  setWhatsThis(String? text) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QShortcut__setWhatsThis_QString')
        .asFunction();
    func(thisCpp, text?.toNativeUtf8() ?? ffi.nullptr);
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QShortcut__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  } // whatsThis() const

  QString whatsThis() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QShortcut__whatsThis')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QShortcut__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 946:
        return "c_QShortcut__customEvent_QEvent";
      case 956:
        return "c_QShortcut__event_QEvent";
      case 957:
        return "c_QShortcut__eventFilter_QObject_QEvent";
    }
    return super.cFunctionSymbolName(methodId);
  }

  static String methodNameFromId(int methodId) {
    switch (methodId) {
      case 946:
        return "customEvent";
      case 956:
        return "event";
      case 957:
        return "eventFilter";
    }
    throw Error();
  }

  void registerCallbacks() {
    assert(thisCpp != null);
    final RegisterMethodIsReimplementedCallback registerCallback = _dylib
        .lookup<ffi.NativeFunction<RegisterMethodIsReimplementedCallback_FFI>>(
            'c_QShortcut__registerVirtualMethodCallback')
        .asFunction();
    final callback946 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QObject.customEvent_calledFromC);
    registerCallback(thisCpp, callback946, 946);
    const callbackExcept956 = 0;
    final callback956 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_FFI>(
            QShortcut.event_calledFromC, callbackExcept956);
    registerCallback(thisCpp, callback956, 956);
    const callbackExcept957 = 0;
    final callback957 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_voidstar_FFI>(
            QObject.eventFilter_calledFromC, callbackExcept957);
    registerCallback(thisCpp, callback957, 957);
  }
}
