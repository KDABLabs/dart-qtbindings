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

class QIODevice extends QObject {
  QIODevice.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QIODevice.init() : super.init() {}
  factory QIODevice.fromCache(var cppPointer, [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QIODevice;
    }
    return QIODevice.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QIODevice_Finalizer";
  } //QIODevice()

  QIODevice() : super.init() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_QIODevice__constructor')
        .asFunction();
    thisCpp = func();
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } //QIODevice(QObject * parent)
  QIODevice.ctor2(QObject? parent) : super.init() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QIODevice__constructor_QObject')
        .asFunction();
    thisCpp = func(parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } // aboutToClose()
  aboutToClose() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QIODevice__aboutToClose')
        .asFunction();
    func(thisCpp);
  }

  void onAboutToClose(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QIODevice__onAboutToClose')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onAboutToClose_callback);
    final callbackMethod = onAboutToClose_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onAboutToClose_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QIODevice;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onAboutToClose_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // atEnd() const

  bool atEnd() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            cFunctionSymbolName(3458))
        .asFunction();
    return func(thisCpp) != 0;
  }

  static int atEnd_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QIODevice;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QIODevice::atEnd() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.atEnd();
    return result ? 1 : 0;
  }

  void onBytesWritten(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QIODevice__onBytesWritten_qint64')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onBytesWritten_callback);
    final callbackMethod = onBytesWritten_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onBytesWritten_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QIODevice;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onBytesWritten_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // canReadLine() const

  bool canReadLine() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            cFunctionSymbolName(3463))
        .asFunction();
    return func(thisCpp) != 0;
  }

  static int canReadLine_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QIODevice;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QIODevice::canReadLine() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.canReadLine();
    return result ? 1 : 0;
  }

  void onChannelBytesWritten(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QIODevice__onChannelBytesWritten_int_qint64')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onChannelBytesWritten_callback);
    final callbackMethod = onChannelBytesWritten_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onChannelBytesWritten_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QIODevice;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onChannelBytesWritten_callback] ??
            [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // channelReadyRead(int channel)

  channelReadyRead(int channel) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QIODevice__channelReadyRead_int')
        .asFunction();
    func(thisCpp, channel);
  }

  void onChannelReadyRead(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QIODevice__onChannelReadyRead_int')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onChannelReadyRead_callback);
    final callbackMethod = onChannelReadyRead_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onChannelReadyRead_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QIODevice;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onChannelReadyRead_callback] ??
            [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // close()

  close() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            cFunctionSymbolName(3467))
        .asFunction();
    func(thisCpp);
  }

  static void close_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QIODevice;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QIODevice::close()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.close();
  } // commitTransaction()

  commitTransaction() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QIODevice__commitTransaction')
        .asFunction();
    func(thisCpp);
  } // currentReadChannel() const

  int currentReadChannel() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QIODevice__currentReadChannel')
        .asFunction();
    return func(thisCpp);
  } // currentWriteChannel() const

  int currentWriteChannel() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QIODevice__currentWriteChannel')
        .asFunction();
    return func(thisCpp);
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QIODevice;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QIODevice::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  } // errorString() const

  QString errorString() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QIODevice__errorString')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QIODevice;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QIODevice::event(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.event((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
    return result ? 1 : 0;
  }

  static int eventFilter_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void>? watched, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QIODevice;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QIODevice::eventFilter(QObject * watched, QEvent * event)! (${thisCpp.address})");
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
  } // getChar(char * c)

  bool getChar(String? c) {
    final bool_Func_voidstar_string func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_string_FFI>>(
            'c_QIODevice__getChar_char')
        .asFunction();
    return func(thisCpp, c?.toNativeUtf8() ?? ffi.nullptr) != 0;
  } // isOpen() const

  bool isOpen() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QIODevice__isOpen')
        .asFunction();
    return func(thisCpp) != 0;
  } // isReadable() const

  bool isReadable() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QIODevice__isReadable')
        .asFunction();
    return func(thisCpp) != 0;
  } // isSequential() const

  bool isSequential() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            cFunctionSymbolName(3487))
        .asFunction();
    return func(thisCpp) != 0;
  }

  static int isSequential_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QIODevice;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QIODevice::isSequential() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.isSequential();
    return result ? 1 : 0;
  } // isTextModeEnabled() const

  bool isTextModeEnabled() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QIODevice__isTextModeEnabled')
        .asFunction();
    return func(thisCpp) != 0;
  } // isTransactionStarted() const

  bool isTransactionStarted() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QIODevice__isTransactionStarted')
        .asFunction();
    return func(thisCpp) != 0;
  } // isWritable() const

  bool isWritable() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QIODevice__isWritable')
        .asFunction();
    return func(thisCpp) != 0;
  } // readAll()

  QByteArray readAll() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QIODevice__readAll')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QByteArray.fromCppPointer(result, true);
  } // readChannelCount() const

  int readChannelCount() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QIODevice__readChannelCount')
        .asFunction();
    return func(thisCpp);
  } // readChannelFinished()

  readChannelFinished() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QIODevice__readChannelFinished')
        .asFunction();
    func(thisCpp);
  }

  void onReadChannelFinished(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QIODevice__onReadChannelFinished')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onReadChannelFinished_callback);
    final callbackMethod = onReadChannelFinished_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onReadChannelFinished_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QIODevice;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onReadChannelFinished_callback] ??
            [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // readyRead()

  readyRead() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QIODevice__readyRead')
        .asFunction();
    func(thisCpp);
  }

  void onReadyRead(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QIODevice__onReadyRead')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onReadyRead_callback);
    final callbackMethod = onReadyRead_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onReadyRead_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QIODevice;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onReadyRead_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // reset()

  bool reset() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            cFunctionSymbolName(3513))
        .asFunction();
    return func(thisCpp) != 0;
  }

  static int reset_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QIODevice;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QIODevice::reset()! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.reset();
    return result ? 1 : 0;
  } // rollbackTransaction()

  rollbackTransaction() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QIODevice__rollbackTransaction')
        .asFunction();
    func(thisCpp);
  } // setCurrentReadChannel(int channel)

  setCurrentReadChannel(int channel) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QIODevice__setCurrentReadChannel_int')
        .asFunction();
    func(thisCpp, channel);
  } // setCurrentWriteChannel(int channel)

  setCurrentWriteChannel(int channel) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QIODevice__setCurrentWriteChannel_int')
        .asFunction();
    func(thisCpp, channel);
  } // setErrorString(const QString & errorString)

  setErrorString(String? errorString) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QIODevice__setErrorString_QString')
        .asFunction();
    func(thisCpp, errorString?.toNativeUtf8() ?? ffi.nullptr);
  } // setTextModeEnabled(bool enabled)

  setTextModeEnabled(bool enabled) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QIODevice__setTextModeEnabled_bool')
        .asFunction();
    func(thisCpp, enabled ? 1 : 0);
  } // startTransaction()

  startTransaction() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QIODevice__startTransaction')
        .asFunction();
    func(thisCpp);
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QIODevice__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  } // waitForBytesWritten(int msecs)

  bool waitForBytesWritten(int msecs) {
    final bool_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_ffi_Int32_FFI>>(
            cFunctionSymbolName(3532))
        .asFunction();
    return func(thisCpp, msecs) != 0;
  }

  static int waitForBytesWritten_calledFromC(
      ffi.Pointer<void> thisCpp, int msecs) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QIODevice;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QIODevice::waitForBytesWritten(int msecs)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.waitForBytesWritten(msecs);
    return result ? 1 : 0;
  } // waitForReadyRead(int msecs)

  bool waitForReadyRead(int msecs) {
    final bool_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_ffi_Int32_FFI>>(
            cFunctionSymbolName(3533))
        .asFunction();
    return func(thisCpp, msecs) != 0;
  }

  static int waitForReadyRead_calledFromC(
      ffi.Pointer<void> thisCpp, int msecs) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QIODevice;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QIODevice::waitForReadyRead(int msecs)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.waitForReadyRead(msecs);
    return result ? 1 : 0;
  } // writeChannelCount() const

  int writeChannelCount() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QIODevice__writeChannelCount')
        .asFunction();
    return func(thisCpp);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QIODevice__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 3458:
        return "c_QIODevice__atEnd";
      case 3463:
        return "c_QIODevice__canReadLine";
      case 3467:
        return "c_QIODevice__close";
      case 946:
        return "c_QIODevice__customEvent_QEvent";
      case 956:
        return "c_QIODevice__event_QEvent";
      case 957:
        return "c_QIODevice__eventFilter_QObject_QEvent";
      case 3487:
        return "c_QIODevice__isSequential";
      case 3513:
        return "c_QIODevice__reset";
      case 3532:
        return "c_QIODevice__waitForBytesWritten_int";
      case 3533:
        return "c_QIODevice__waitForReadyRead_int";
    }
    return super.cFunctionSymbolName(methodId);
  }

  static String methodNameFromId(int methodId) {
    switch (methodId) {
      case 3458:
        return "atEnd";
      case 3463:
        return "canReadLine";
      case 3467:
        return "close";
      case 946:
        return "customEvent";
      case 956:
        return "event";
      case 957:
        return "eventFilter";
      case 3487:
        return "isSequential";
      case 3513:
        return "reset";
      case 3532:
        return "waitForBytesWritten";
      case 3533:
        return "waitForReadyRead";
    }
    throw Error();
  }

  void registerCallbacks() {
    assert(thisCpp != null);
    final RegisterMethodIsReimplementedCallback registerCallback = _dylib
        .lookup<ffi.NativeFunction<RegisterMethodIsReimplementedCallback_FFI>>(
            'c_QIODevice__registerVirtualMethodCallback')
        .asFunction();
    const callbackExcept3458 = 0;
    final callback3458 = ffi.Pointer.fromFunction<bool_Func_voidstar_FFI>(
        QIODevice.atEnd_calledFromC, callbackExcept3458);
    registerCallback(thisCpp, callback3458, 3458);
    const callbackExcept3463 = 0;
    final callback3463 = ffi.Pointer.fromFunction<bool_Func_voidstar_FFI>(
        QIODevice.canReadLine_calledFromC, callbackExcept3463);
    registerCallback(thisCpp, callback3463, 3463);
    final callback3467 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QIODevice.close_calledFromC);
    registerCallback(thisCpp, callback3467, 3467);
    final callback946 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QObject.customEvent_calledFromC);
    registerCallback(thisCpp, callback946, 946);
    const callbackExcept956 = 0;
    final callback956 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_FFI>(
            QObject.event_calledFromC, callbackExcept956);
    registerCallback(thisCpp, callback956, 956);
    const callbackExcept957 = 0;
    final callback957 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_voidstar_FFI>(
            QObject.eventFilter_calledFromC, callbackExcept957);
    registerCallback(thisCpp, callback957, 957);
    const callbackExcept3487 = 0;
    final callback3487 = ffi.Pointer.fromFunction<bool_Func_voidstar_FFI>(
        QIODevice.isSequential_calledFromC, callbackExcept3487);
    registerCallback(thisCpp, callback3487, 3487);
    const callbackExcept3513 = 0;
    final callback3513 = ffi.Pointer.fromFunction<bool_Func_voidstar_FFI>(
        QIODevice.reset_calledFromC, callbackExcept3513);
    registerCallback(thisCpp, callback3513, 3513);
    const callbackExcept3532 = 0;
    final callback3532 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_ffi_Int32_FFI>(
            QIODevice.waitForBytesWritten_calledFromC, callbackExcept3532);
    registerCallback(thisCpp, callback3532, 3532);
    const callbackExcept3533 = 0;
    final callback3533 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_ffi_Int32_FFI>(
            QIODevice.waitForReadyRead_calledFromC, callbackExcept3533);
    registerCallback(thisCpp, callback3533, 3533);
  }
}
