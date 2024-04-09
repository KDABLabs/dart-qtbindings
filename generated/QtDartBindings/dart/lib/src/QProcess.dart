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

class QProcess extends QIODevice {
  QProcess.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QProcess.init() : super.init() {}
  factory QProcess.fromCache(var cppPointer, [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QProcess;
    }
    return QProcess.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QProcess_Finalizer";
  } //QProcess(QObject * parent)

  QProcess({required QObject? parent}) : super.init() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QProcess__constructor_QObject')
        .asFunction();
    thisCpp = func(parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } // arguments() const
  QList arguments() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QProcess__arguments')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QList<QString>.fromCppPointer(result, true);
  }

  static int atEnd_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QProcess;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QProcess::atEnd() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.atEnd();
    return result ? 1 : 0;
  }

  static int canReadLine_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QProcess;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QProcess::canReadLine() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.canReadLine();
    return result ? 1 : 0;
  }

  static void close_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QProcess;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QProcess::close()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.close();
  } // closeWriteChannel()

  closeWriteChannel() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QProcess__closeWriteChannel')
        .asFunction();
    func(thisCpp);
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QProcess;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QProcess::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  } // environment() const

  QList environment() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QProcess__environment')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QList<QString>.fromCppPointer(result, true);
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QProcess;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QProcess::event(QEvent * event)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QProcess;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QProcess::eventFilter(QObject * watched, QEvent * event)! (${thisCpp.address})");
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
  }

  static // execute(const QString & program, const QList<QString > & arguments)
      int execute(String? program, {required QList? arguments}) {
    final int_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_voidstar_FFI>>(
            'c_static_QProcess__execute_QString_QList_QString')
        .asFunction();
    return func(program?.toNativeUtf8() ?? ffi.nullptr,
        arguments == null ? ffi.nullptr : arguments.thisCpp);
  } // exitCode() const

  int exitCode() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QProcess__exitCode')
        .asFunction();
    return func(thisCpp);
  } // finished(int exitCode)

  finished(int exitCode) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QProcess__finished_int')
        .asFunction();
    func(thisCpp, exitCode);
  }

  void onFinished(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QProcess__onFinished_int')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onFinished_callback);
    final callbackMethod = onFinished_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onFinished_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QProcess;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onFinished_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static int isSequential_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QProcess;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QProcess::isSequential() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.isSequential();
    return result ? 1 : 0;
  } // kill()

  kill() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>('c_QProcess__kill')
        .asFunction();
    func(thisCpp);
  }

  static // nullDevice()
      QString nullDevice() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QProcess__nullDevice')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QString.fromCppPointer(result, true);
  } // program() const

  QString program() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QProcess__program')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // readAllStandardError()

  QByteArray readAllStandardError() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QProcess__readAllStandardError')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QByteArray.fromCppPointer(result, true);
  } // readAllStandardOutput()

  QByteArray readAllStandardOutput() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QProcess__readAllStandardOutput')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QByteArray.fromCppPointer(result, true);
  }

  static int reset_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QProcess;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QProcess::reset()! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.reset();
    return result ? 1 : 0;
  } // setArguments(const QList<QString > & arguments)

  setArguments(QList? arguments) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QProcess__setArguments_QList_QString')
        .asFunction();
    func(thisCpp, arguments == null ? ffi.nullptr : arguments.thisCpp);
  } // setEnvironment(const QList<QString > & environment)

  setEnvironment(QList? environment) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QProcess__setEnvironment_QList_QString')
        .asFunction();
    func(thisCpp, environment == null ? ffi.nullptr : environment.thisCpp);
  } // setProgram(const QString & program)

  setProgram(String? program) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QProcess__setProgram_QString')
        .asFunction();
    func(thisCpp, program?.toNativeUtf8() ?? ffi.nullptr);
  } // setStandardErrorFile(const QString & fileName)

  setStandardErrorFile(String? fileName) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QProcess__setStandardErrorFile_QString')
        .asFunction();
    func(thisCpp, fileName?.toNativeUtf8() ?? ffi.nullptr);
  } // setStandardInputFile(const QString & fileName)

  setStandardInputFile(String? fileName) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QProcess__setStandardInputFile_QString')
        .asFunction();
    func(thisCpp, fileName?.toNativeUtf8() ?? ffi.nullptr);
  } // setStandardOutputFile(const QString & fileName)

  setStandardOutputFile(String? fileName) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QProcess__setStandardOutputFile_QString')
        .asFunction();
    func(thisCpp, fileName?.toNativeUtf8() ?? ffi.nullptr);
  } // setStandardOutputProcess(QProcess * destination)

  setStandardOutputProcess(QProcess? destination) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QProcess__setStandardOutputProcess_QProcess')
        .asFunction();
    func(thisCpp, destination == null ? ffi.nullptr : destination.thisCpp);
  } // setWorkingDirectory(const QString & dir)

  setWorkingDirectory(String? dir) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QProcess__setWorkingDirectory_QString')
        .asFunction();
    func(thisCpp, dir?.toNativeUtf8() ?? ffi.nullptr);
  } // start()

  start() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>('c_QProcess__start')
        .asFunction();
    func(thisCpp);
  } // start(const QString & program, const QList<QString > & arguments)

  start_2(String? program, {required QList? arguments}) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QProcess__start_QString_QList_QString')
        .asFunction();
    func(thisCpp, program?.toNativeUtf8() ?? ffi.nullptr,
        arguments == null ? ffi.nullptr : arguments.thisCpp);
  } // startCommand(const QString & command)

  startCommand(String? command) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QProcess__startCommand_QString')
        .asFunction();
    func(thisCpp, command?.toNativeUtf8() ?? ffi.nullptr);
  }

  static // systemEnvironment()
      QList systemEnvironment() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QProcess__systemEnvironment')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QList<QString>.fromCppPointer(result, true);
  } // terminate()

  terminate() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QProcess__terminate')
        .asFunction();
    func(thisCpp);
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QProcess__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  } // waitForFinished(int msecs)

  bool waitForFinished({int msecs = 30000}) {
    final bool_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_ffi_Int32_FFI>>(
            'c_QProcess__waitForFinished_int')
        .asFunction();
    return func(thisCpp, msecs) != 0;
  } // waitForStarted(int msecs)

  bool waitForStarted({int msecs = 30000}) {
    final bool_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_ffi_Int32_FFI>>(
            'c_QProcess__waitForStarted_int')
        .asFunction();
    return func(thisCpp, msecs) != 0;
  } // workingDirectory() const

  QString workingDirectory() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QProcess__workingDirectory')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QProcess__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 3458:
        return "c_QProcess__atEnd";
      case 3463:
        return "c_QProcess__canReadLine";
      case 3467:
        return "c_QProcess__close";
      case 946:
        return "c_QProcess__customEvent_QEvent";
      case 956:
        return "c_QProcess__event_QEvent";
      case 957:
        return "c_QProcess__eventFilter_QObject_QEvent";
      case 3487:
        return "c_QProcess__isSequential";
      case 3513:
        return "c_QProcess__reset";
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
    }
    throw Error();
  }

  void registerCallbacks() {
    assert(thisCpp != null);
    final RegisterMethodIsReimplementedCallback registerCallback = _dylib
        .lookup<ffi.NativeFunction<RegisterMethodIsReimplementedCallback_FFI>>(
            'c_QProcess__registerVirtualMethodCallback')
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
        QProcess.close_calledFromC);
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
        QProcess.isSequential_calledFromC, callbackExcept3487);
    registerCallback(thisCpp, callback3487, 3487);
    const callbackExcept3513 = 0;
    final callback3513 = ffi.Pointer.fromFunction<bool_Func_voidstar_FFI>(
        QIODevice.reset_calledFromC, callbackExcept3513);
    registerCallback(thisCpp, callback3513, 3513);
  }
}
