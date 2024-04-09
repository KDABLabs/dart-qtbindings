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

class QGuiApplication extends QCoreApplication {
  QGuiApplication.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QGuiApplication.init() : super.init() {}
  factory QGuiApplication.fromCache(var cppPointer, [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QGuiApplication;
    }
    return QGuiApplication.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QGuiApplication_Finalizer";
  }

  static // allWindows()
      QList allWindows() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QGuiApplication__allWindows')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QList<QWindow>.fromCppPointer(result, true);
  }

  static // applicationDisplayName()
      QString applicationDisplayName() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QGuiApplication__applicationDisplayName')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QString.fromCppPointer(result, true);
  } // applicationDisplayNameChanged()

  applicationDisplayNameChanged() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QGuiApplication__applicationDisplayNameChanged')
        .asFunction();
    func(thisCpp);
  }

  void onApplicationDisplayNameChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QGuiApplication__onApplicationDisplayNameChanged')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onApplicationDisplayNameChanged_callback);
    final callbackMethod = onApplicationDisplayNameChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onApplicationDisplayNameChanged_callback(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QGuiApplication;
    final signalHandlers = dartInstance.signalHandlerersBySignal[
            onApplicationDisplayNameChanged_callback] ??
        [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QGuiApplication;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QGuiApplication::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  }

  static // desktopFileName()
      QString desktopFileName() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QGuiApplication__desktopFileName')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QString.fromCppPointer(result, true);
  }

  static // desktopSettingsAware()
      bool desktopSettingsAware() {
    final bool_Func_void func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_void_FFI>>(
            'c_static_QGuiApplication__desktopSettingsAware')
        .asFunction();
    return func() != 0;
  } // devicePixelRatio() const

  double devicePixelRatio() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QGuiApplication__devicePixelRatio')
        .asFunction();
    return func(thisCpp);
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QGuiApplication;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QGuiApplication::event(QEvent * arg__1)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QGuiApplication;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QGuiApplication::eventFilter(QObject * watched, QEvent * event)! (${thisCpp.address})");
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
            'c_static_QGuiApplication__exec')
        .asFunction();
    return func();
  }

  static // focusObject()
      QObject focusObject() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QGuiApplication__focusObject')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QObject.fromCppPointer(result, false);
  } // focusObjectChanged(QObject * focusObject)

  focusObjectChanged(QObject? focusObject) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QGuiApplication__focusObjectChanged_QObject')
        .asFunction();
    func(thisCpp, focusObject == null ? ffi.nullptr : focusObject.thisCpp);
  }

  void onFocusObjectChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QGuiApplication__onFocusObjectChanged_QObject')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onFocusObjectChanged_callback);
    final callbackMethod = onFocusObjectChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onFocusObjectChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QGuiApplication;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onFocusObjectChanged_callback] ??
            [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static // focusWindow()
      QWindow focusWindow() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QGuiApplication__focusWindow')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QWindow.fromCppPointer(result, false);
  } // focusWindowChanged(QWindow * focusWindow)

  focusWindowChanged(QWindow? focusWindow) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QGuiApplication__focusWindowChanged_QWindow')
        .asFunction();
    func(thisCpp, focusWindow == null ? ffi.nullptr : focusWindow.thisCpp);
  }

  void onFocusWindowChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QGuiApplication__onFocusWindowChanged_QWindow')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onFocusWindowChanged_callback);
    final callbackMethod = onFocusWindowChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onFocusWindowChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QGuiApplication;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onFocusWindowChanged_callback] ??
            [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static // font()
      QFont font() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QGuiApplication__font')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QFont.fromCppPointer(result, true);
  } // fontDatabaseChanged()

  fontDatabaseChanged() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QGuiApplication__fontDatabaseChanged')
        .asFunction();
    func(thisCpp);
  }

  void onFontDatabaseChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QGuiApplication__onFontDatabaseChanged')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onFontDatabaseChanged_callback);
    final callbackMethod = onFontDatabaseChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onFontDatabaseChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QGuiApplication;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onFontDatabaseChanged_callback] ??
            [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static // isLeftToRight()
      bool isLeftToRight() {
    final bool_Func_void func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_void_FFI>>(
            'c_static_QGuiApplication__isLeftToRight')
        .asFunction();
    return func() != 0;
  }

  static // isRightToLeft()
      bool isRightToLeft() {
    final bool_Func_void func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_void_FFI>>(
            'c_static_QGuiApplication__isRightToLeft')
        .asFunction();
    return func() != 0;
  } // isSavingSession() const

  bool isSavingSession() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QGuiApplication__isSavingSession')
        .asFunction();
    return func(thisCpp) != 0;
  } // isSessionRestored() const

  bool isSessionRestored() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QGuiApplication__isSessionRestored')
        .asFunction();
    return func(thisCpp) != 0;
  }

  static // keyboardModifiers()
      int keyboardModifiers() {
    final int_Func_void func = _dylib
        .lookup<ffi.NativeFunction<int_Func_void_FFI>>(
            'c_static_QGuiApplication__keyboardModifiers')
        .asFunction();
    return func();
  } // lastWindowClosed()

  lastWindowClosed() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QGuiApplication__lastWindowClosed')
        .asFunction();
    func(thisCpp);
  }

  void onLastWindowClosed(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QGuiApplication__onLastWindowClosed')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onLastWindowClosed_callback);
    final callbackMethod = onLastWindowClosed_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onLastWindowClosed_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QGuiApplication;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onLastWindowClosed_callback] ??
            [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static // layoutDirection()
      int layoutDirection() {
    final int_Func_void func = _dylib
        .lookup<ffi.NativeFunction<int_Func_void_FFI>>(
            'c_static_QGuiApplication__layoutDirection')
        .asFunction();
    return func();
  } // layoutDirectionChanged(Qt::LayoutDirection direction)

  layoutDirectionChanged(int direction) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QGuiApplication__layoutDirectionChanged_LayoutDirection')
        .asFunction();
    func(thisCpp, direction);
  }

  void onLayoutDirectionChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QGuiApplication__onLayoutDirectionChanged_LayoutDirection')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onLayoutDirectionChanged_callback);
    final callbackMethod = onLayoutDirectionChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onLayoutDirectionChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QGuiApplication;
    final signalHandlers = dartInstance
            .signalHandlerersBySignal[onLayoutDirectionChanged_callback] ??
        [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static // modalWindow()
      QWindow modalWindow() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QGuiApplication__modalWindow')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QWindow.fromCppPointer(result, false);
  }

  static int notify_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void>? arg__1, ffi.Pointer<void>? arg__2) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QGuiApplication;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QGuiApplication::notify(QObject * arg__1, QEvent * arg__2)! (${thisCpp.address})");
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

  static // palette()
      QPalette palette() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QGuiApplication__palette')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QPalette.fromCppPointer(result, true);
  }

  static // platformName()
      QString platformName() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QGuiApplication__platformName')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QString.fromCppPointer(result, true);
  }

  static // queryKeyboardModifiers()
      int queryKeyboardModifiers() {
    final int_Func_void func = _dylib
        .lookup<ffi.NativeFunction<int_Func_void_FFI>>(
            'c_static_QGuiApplication__queryKeyboardModifiers')
        .asFunction();
    return func();
  }

  static // quitOnLastWindowClosed()
      bool quitOnLastWindowClosed() {
    final bool_Func_void func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_void_FFI>>(
            'c_static_QGuiApplication__quitOnLastWindowClosed')
        .asFunction();
    return func() != 0;
  }

  static // restoreOverrideCursor()
      restoreOverrideCursor() {
    final void_Func_void func = _dylib
        .lookup<ffi.NativeFunction<void_Func_void_FFI>>(
            'c_static_QGuiApplication__restoreOverrideCursor')
        .asFunction();
    func();
  } // sessionId() const

  QString sessionId() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QGuiApplication__sessionId')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // sessionKey() const

  QString sessionKey() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QGuiApplication__sessionKey')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  }

  static // setApplicationDisplayName(const QString & name)
      setApplicationDisplayName(String? name) {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_static_QGuiApplication__setApplicationDisplayName_QString')
        .asFunction();
    func(name?.toNativeUtf8() ?? ffi.nullptr);
  }

  static // setDesktopFileName(const QString & name)
      setDesktopFileName(String? name) {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_static_QGuiApplication__setDesktopFileName_QString')
        .asFunction();
    func(name?.toNativeUtf8() ?? ffi.nullptr);
  }

  static // setDesktopSettingsAware(bool on)
      setDesktopSettingsAware(bool on) {
    final void_Func_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_ffi_Int8_FFI>>(
            'c_static_QGuiApplication__setDesktopSettingsAware_bool')
        .asFunction();
    func(on ? 1 : 0);
  }

  static // setFont(const QFont & arg__1)
      setFont(QFont? arg__1) {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_static_QGuiApplication__setFont_QFont')
        .asFunction();
    func(arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  }

  static // setLayoutDirection(Qt::LayoutDirection direction)
      setLayoutDirection(int direction) {
    final void_Func_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_ffi_Int32_FFI>>(
            'c_static_QGuiApplication__setLayoutDirection_LayoutDirection')
        .asFunction();
    func(direction);
  }

  static // setPalette(const QPalette & pal)
      setPalette(QPalette pal) {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_static_QGuiApplication__setPalette_QPalette')
        .asFunction();
    func(pal == null ? ffi.nullptr : pal.thisCpp);
  }

  static // setQuitOnLastWindowClosed(bool quit)
      setQuitOnLastWindowClosed(bool quit) {
    final void_Func_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_ffi_Int8_FFI>>(
            'c_static_QGuiApplication__setQuitOnLastWindowClosed_bool')
        .asFunction();
    func(quit ? 1 : 0);
  }

  static // setWindowIcon(const QIcon & icon)
      setWindowIcon(QIcon icon) {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_static_QGuiApplication__setWindowIcon_QIcon')
        .asFunction();
    func(icon == null ? ffi.nullptr : icon.thisCpp);
  }

  static // sync()
      sync() {
    final void_Func_void func = _dylib
        .lookup<ffi.NativeFunction<void_Func_void_FFI>>(
            'c_static_QGuiApplication__sync')
        .asFunction();
    func();
  }

  static // topLevelAt(const QPoint & pos)
      QWindow topLevelWindowAtPos(QPoint? pos) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_static_QGuiApplication__topLevelWindowAtPos_QPoint')
        .asFunction();
    ffi.Pointer<void> result = func(pos == null ? ffi.nullptr : pos.thisCpp);
    return QWindow.fromCppPointer(result, false);
  }

  static // topLevelWindows()
      QList topLevelWindows() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QGuiApplication__topLevelWindows')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QList<QWindow>.fromCppPointer(result, true);
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QGuiApplication__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  }

  static // windowIcon()
      QIcon windowIcon() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QGuiApplication__windowIcon')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QIcon.fromCppPointer(result, true);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QGuiApplication__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 946:
        return "c_QGuiApplication__customEvent_QEvent";
      case 956:
        return "c_QGuiApplication__event_QEvent";
      case 957:
        return "c_QGuiApplication__eventFilter_QObject_QEvent";
      case 4558:
        return "c_QGuiApplication__notify_QObject_QEvent";
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
            'c_QGuiApplication__registerVirtualMethodCallback')
        .asFunction();
    final callback946 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QObject.customEvent_calledFromC);
    registerCallback(thisCpp, callback946, 946);
    const callbackExcept956 = 0;
    final callback956 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_FFI>(
            QGuiApplication.event_calledFromC, callbackExcept956);
    registerCallback(thisCpp, callback956, 956);
    const callbackExcept957 = 0;
    final callback957 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_voidstar_FFI>(
            QObject.eventFilter_calledFromC, callbackExcept957);
    registerCallback(thisCpp, callback957, 957);
    const callbackExcept4558 = 0;
    final callback4558 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_voidstar_FFI>(
            QGuiApplication.notify_calledFromC, callbackExcept4558);
    registerCallback(thisCpp, callback4558, 4558);
  }
}
