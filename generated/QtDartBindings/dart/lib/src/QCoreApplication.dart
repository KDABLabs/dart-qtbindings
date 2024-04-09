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

class QCoreApplication extends QObject {
  // Anonymous enum
  static const ApplicationFlags = 394242;
  QCoreApplication.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QCoreApplication.init() : super.init() {}
  factory QCoreApplication.fromCache(var cppPointer,
      [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QCoreApplication;
    }
    return QCoreApplication.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QCoreApplication_Finalizer";
  }

  static // addLibraryPath(const QString & arg__1)
      addLibraryPath(String? arg__1) {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_static_QCoreApplication__addLibraryPath_QString')
        .asFunction();
    func(arg__1?.toNativeUtf8() ?? ffi.nullptr);
  }

  static // applicationDirPath()
      QString applicationDirPath() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QCoreApplication__applicationDirPath')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QString.fromCppPointer(result, true);
  }

  static // applicationFilePath()
      QString applicationFilePath() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QCoreApplication__applicationFilePath')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QString.fromCppPointer(result, true);
  }

  static // applicationName()
      QString applicationName() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QCoreApplication__applicationName')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QString.fromCppPointer(result, true);
  } // applicationNameChanged()

  applicationNameChanged() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QCoreApplication__applicationNameChanged')
        .asFunction();
    func(thisCpp);
  }

  void onApplicationNameChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QCoreApplication__onApplicationNameChanged')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onApplicationNameChanged_callback);
    final callbackMethod = onApplicationNameChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onApplicationNameChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QCoreApplication;
    final signalHandlers = dartInstance
            .signalHandlerersBySignal[onApplicationNameChanged_callback] ??
        [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static // applicationVersion()
      QString applicationVersion() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QCoreApplication__applicationVersion')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QString.fromCppPointer(result, true);
  } // applicationVersionChanged()

  applicationVersionChanged() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QCoreApplication__applicationVersionChanged')
        .asFunction();
    func(thisCpp);
  }

  void onApplicationVersionChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QCoreApplication__onApplicationVersionChanged')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onApplicationVersionChanged_callback);
    final callbackMethod = onApplicationVersionChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onApplicationVersionChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QCoreApplication;
    final signalHandlers = dartInstance
            .signalHandlerersBySignal[onApplicationVersionChanged_callback] ??
        [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static // arguments()
      QList arguments() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QCoreApplication__arguments')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QList<QString>.fromCppPointer(result, true);
  }

  static // closingDown()
      bool closingDown() {
    final bool_Func_void func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_void_FFI>>(
            'c_static_QCoreApplication__closingDown')
        .asFunction();
    return func() != 0;
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QCoreApplication;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QCoreApplication::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QCoreApplication;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QCoreApplication::event(QEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.event((arg__1 == null || arg__1.address == 0)
        ? null
        : QEvent.fromCppPointer(arg__1));
    return result ? 1 : 0;
  }

  static int eventFilter_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void>? watched, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QCoreApplication;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QCoreApplication::eventFilter(QObject * watched, QEvent * event)! (${thisCpp.address})");
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

  static // exec()
      int exec() {
    final int_Func_void func = _dylib
        .lookup<ffi.NativeFunction<int_Func_void_FFI>>(
            'c_static_QCoreApplication__exec')
        .asFunction();
    return func();
  }

  static // exit(int retcode)
      exit({int retcode = 0}) {
    final void_Func_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_ffi_Int32_FFI>>(
            'c_static_QCoreApplication__exit_int')
        .asFunction();
    func(retcode);
  }

  static // forwardEvent(QObject * receiver, QEvent * event, QEvent * originatingEvent)
      bool forwardEvent(QObject? receiver, QEvent? event,
          {required QEvent? originatingEvent}) {
    final bool_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_static_QCoreApplication__forwardEvent_QObject_QEvent_QEvent')
        .asFunction();
    return func(
            receiver == null ? ffi.nullptr : receiver.thisCpp,
            event == null ? ffi.nullptr : event.thisCpp,
            originatingEvent == null
                ? ffi.nullptr
                : originatingEvent.thisCpp) !=
        0;
  }

  static // instance()
      QCoreApplication instance() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QCoreApplication__instance')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QCoreApplication.fromCppPointer(result, false);
  }

  static // isQuitLockEnabled()
      bool isQuitLockEnabled() {
    final bool_Func_void func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_void_FFI>>(
            'c_static_QCoreApplication__isQuitLockEnabled')
        .asFunction();
    return func() != 0;
  }

  static // isSetuidAllowed()
      bool isSetuidAllowed() {
    final bool_Func_void func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_void_FFI>>(
            'c_static_QCoreApplication__isSetuidAllowed')
        .asFunction();
    return func() != 0;
  }

  static // libraryPaths()
      QList libraryPaths() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QCoreApplication__libraryPaths')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QList<QString>.fromCppPointer(result, true);
  }

  static // libraryPathsLocked()
      QList libraryPathsLocked() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QCoreApplication__libraryPathsLocked')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QList<QString>.fromCppPointer(result, true);
  } // notify(QObject * arg__1, QEvent * arg__2)

  bool notify(QObject? arg__1, QEvent? arg__2) {
    final bool_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(4558))
        .asFunction();
    return func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp,
            arg__2 == null ? ffi.nullptr : arg__2.thisCpp) !=
        0;
  }

  static int notify_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void>? arg__1, ffi.Pointer<void>? arg__2) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QCoreApplication;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QCoreApplication::notify(QObject * arg__1, QEvent * arg__2)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.notify(
        (arg__1 == null || arg__1.address == 0)
            ? null
            : QObject.fromCppPointer(arg__1),
        (arg__2 == null || arg__2.address == 0)
            ? null
            : QEvent.fromCppPointer(arg__2));
    return result ? 1 : 0;
  }

  static // notifyInternal2(QObject * receiver, QEvent * arg__2)
      bool notifyInternal2(QObject? receiver, QEvent? arg__2) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_static_QCoreApplication__notifyInternal2_QObject_QEvent')
        .asFunction();
    return func(receiver == null ? ffi.nullptr : receiver.thisCpp,
            arg__2 == null ? ffi.nullptr : arg__2.thisCpp) !=
        0;
  }

  static // organizationDomain()
      QString organizationDomain() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QCoreApplication__organizationDomain')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QString.fromCppPointer(result, true);
  } // organizationDomainChanged()

  organizationDomainChanged() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QCoreApplication__organizationDomainChanged')
        .asFunction();
    func(thisCpp);
  }

  void onOrganizationDomainChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QCoreApplication__onOrganizationDomainChanged')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onOrganizationDomainChanged_callback);
    final callbackMethod = onOrganizationDomainChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onOrganizationDomainChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QCoreApplication;
    final signalHandlers = dartInstance
            .signalHandlerersBySignal[onOrganizationDomainChanged_callback] ??
        [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static // organizationName()
      QString organizationName() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QCoreApplication__organizationName')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QString.fromCppPointer(result, true);
  } // organizationNameChanged()

  organizationNameChanged() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QCoreApplication__organizationNameChanged')
        .asFunction();
    func(thisCpp);
  }

  void onOrganizationNameChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QCoreApplication__onOrganizationNameChanged')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onOrganizationNameChanged_callback);
    final callbackMethod = onOrganizationNameChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onOrganizationNameChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QCoreApplication;
    final signalHandlers = dartInstance
            .signalHandlerersBySignal[onOrganizationNameChanged_callback] ??
        [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static // postEvent(QObject * receiver, QEvent * event, int priority)
      postEvent(QObject? receiver, QEvent? event,
          {int priority = Qt_EventPriority.NormalEventPriority}) {
    final void_Func_voidstar_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            'c_static_QCoreApplication__postEvent_QObject_QEvent_int')
        .asFunction();
    func(receiver == null ? ffi.nullptr : receiver.thisCpp,
        event == null ? ffi.nullptr : event.thisCpp, priority);
  }

  static // processEvents()
      processEvents() {
    final void_Func_void func = _dylib
        .lookup<ffi.NativeFunction<void_Func_void_FFI>>(
            'c_static_QCoreApplication__processEvents')
        .asFunction();
    func();
  }

  static // quit()
      quit() {
    final void_Func_void func = _dylib
        .lookup<ffi.NativeFunction<void_Func_void_FFI>>(
            'c_static_QCoreApplication__quit')
        .asFunction();
    func();
  }

  static // removeLibraryPath(const QString & arg__1)
      removeLibraryPath(String? arg__1) {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_static_QCoreApplication__removeLibraryPath_QString')
        .asFunction();
    func(arg__1?.toNativeUtf8() ?? ffi.nullptr);
  }

  static // removePostedEvents(QObject * receiver, int eventType)
      removePostedEvents(QObject? receiver, {int eventType = 0}) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_static_QCoreApplication__removePostedEvents_QObject_int')
        .asFunction();
    func(receiver == null ? ffi.nullptr : receiver.thisCpp, eventType);
  }

  static // sendEvent(QObject * receiver, QEvent * event)
      bool sendEvent(QObject? receiver, QEvent? event) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_static_QCoreApplication__sendEvent_QObject_QEvent')
        .asFunction();
    return func(receiver == null ? ffi.nullptr : receiver.thisCpp,
            event == null ? ffi.nullptr : event.thisCpp) !=
        0;
  }

  static // sendPostedEvents(QObject * receiver, int event_type)
      sendPostedEvents({required QObject? receiver, int event_type = 0}) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_static_QCoreApplication__sendPostedEvents_QObject_int')
        .asFunction();
    func(receiver == null ? ffi.nullptr : receiver.thisCpp, event_type);
  }

  static // sendSpontaneousEvent(QObject * receiver, QEvent * event)
      bool sendSpontaneousEvent(QObject? receiver, QEvent? event) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_static_QCoreApplication__sendSpontaneousEvent_QObject_QEvent')
        .asFunction();
    return func(receiver == null ? ffi.nullptr : receiver.thisCpp,
            event == null ? ffi.nullptr : event.thisCpp) !=
        0;
  }

  static // setApplicationName(const QString & application)
      setApplicationName(String? application) {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_static_QCoreApplication__setApplicationName_QString')
        .asFunction();
    func(application?.toNativeUtf8() ?? ffi.nullptr);
  }

  static // setApplicationVersion(const QString & version)
      setApplicationVersion(String? version) {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_static_QCoreApplication__setApplicationVersion_QString')
        .asFunction();
    func(version?.toNativeUtf8() ?? ffi.nullptr);
  }

  static // setLibraryPaths(const QList<QString > & arg__1)
      setLibraryPaths(QList? arg__1) {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_static_QCoreApplication__setLibraryPaths_QList_QString')
        .asFunction();
    func(arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  }

  static // setOrganizationDomain(const QString & orgDomain)
      setOrganizationDomain(String? orgDomain) {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_static_QCoreApplication__setOrganizationDomain_QString')
        .asFunction();
    func(orgDomain?.toNativeUtf8() ?? ffi.nullptr);
  }

  static // setOrganizationName(const QString & orgName)
      setOrganizationName(String? orgName) {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_static_QCoreApplication__setOrganizationName_QString')
        .asFunction();
    func(orgName?.toNativeUtf8() ?? ffi.nullptr);
  }

  static // setQuitLockEnabled(bool enabled)
      setQuitLockEnabled(bool enabled) {
    final void_Func_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_ffi_Int8_FFI>>(
            'c_static_QCoreApplication__setQuitLockEnabled_bool')
        .asFunction();
    func(enabled ? 1 : 0);
  }

  static // setSetuidAllowed(bool allow)
      setSetuidAllowed(bool allow) {
    final void_Func_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_ffi_Int8_FFI>>(
            'c_static_QCoreApplication__setSetuidAllowed_bool')
        .asFunction();
    func(allow ? 1 : 0);
  }

  static // startingUp()
      bool startingUp() {
    final bool_Func_void func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_void_FFI>>(
            'c_static_QCoreApplication__startingUp')
        .asFunction();
    return func() != 0;
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QCoreApplication__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  }

  static // translate(const char * context, const char * key, const char * disambiguation, int n)
      QString translate(String? context, String? key,
          {String? disambiguation, int n = -1}) {
    final voidstar_Func_string_string_string_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_string_string_string_ffi_Int32_FFI>>(
            'c_static_QCoreApplication__translate_char_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        context?.toNativeUtf8() ?? ffi.nullptr,
        key?.toNativeUtf8() ?? ffi.nullptr,
        disambiguation?.toNativeUtf8() ?? ffi.nullptr,
        n);
    return QString.fromCppPointer(result, true);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QCoreApplication__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 946:
        return "c_QCoreApplication__customEvent_QEvent";
      case 956:
        return "c_QCoreApplication__event_QEvent";
      case 957:
        return "c_QCoreApplication__eventFilter_QObject_QEvent";
      case 4558:
        return "c_QCoreApplication__notify_QObject_QEvent";
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
      case 4558:
        return "notify";
    }
    throw Error();
  }

  void registerCallbacks() {
    assert(thisCpp != null);
    final RegisterMethodIsReimplementedCallback registerCallback = _dylib
        .lookup<ffi.NativeFunction<RegisterMethodIsReimplementedCallback_FFI>>(
            'c_QCoreApplication__registerVirtualMethodCallback')
        .asFunction();
    final callback946 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QObject.customEvent_calledFromC);
    registerCallback(thisCpp, callback946, 946);
    const callbackExcept956 = 0;
    final callback956 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_FFI>(
            QCoreApplication.event_calledFromC, callbackExcept956);
    registerCallback(thisCpp, callback956, 956);
    const callbackExcept957 = 0;
    final callback957 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_voidstar_FFI>(
            QObject.eventFilter_calledFromC, callbackExcept957);
    registerCallback(thisCpp, callback957, 957);
    const callbackExcept4558 = 0;
    final callback4558 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_voidstar_FFI>(
            QCoreApplication.notify_calledFromC, callbackExcept4558);
    registerCallback(thisCpp, callback4558, 4558);
  }
}
