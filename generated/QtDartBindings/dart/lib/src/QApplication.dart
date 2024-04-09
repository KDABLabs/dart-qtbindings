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

class QApplication extends QGuiApplication {
  QApplication.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QApplication.init() : super.init() {}
  factory QApplication.fromCache(var cppPointer, [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QApplication;
    }
    return QApplication.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QApplication_Finalizer";
  } //QApplication()

  QApplication() : super.init() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_QApplication__constructor')
        .asFunction();
    thisCpp = func();
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  }
  static // aboutQt()
      aboutQt() {
    final void_Func_void func = _dylib
        .lookup<ffi.NativeFunction<void_Func_void_FFI>>(
            'c_static_QApplication__aboutQt')
        .asFunction();
    func();
  }

  static // activeModalWidget()
      QWidget activeModalWidget() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QApplication__activeModalWidget')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QWidget.fromCppPointer(result, false);
  }

  static // activePopupWidget()
      QWidget activePopupWidget() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QApplication__activePopupWidget')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QWidget.fromCppPointer(result, false);
  }

  static // activeWindow()
      QWidget activeWindow() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QApplication__activeWindow')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QWidget.fromCppPointer(result, false);
  }

  static // alert(QWidget * widget, int duration)
      alert(QWidget? widget, {int duration = 0}) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_static_QApplication__alert_QWidget_int')
        .asFunction();
    func(widget == null ? ffi.nullptr : widget.thisCpp, duration);
  }

  static // allWidgets()
      QList allWidgets() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QApplication__allWidgets')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QList<QWidget>.fromCppPointer(result, true);
  } // autoSipEnabled() const

  bool autoSipEnabled() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QApplication__autoSipEnabled')
        .asFunction();
    return func(thisCpp) != 0;
  }

  static // beep()
      beep() {
    final void_Func_void func = _dylib
        .lookup<ffi.NativeFunction<void_Func_void_FFI>>(
            'c_static_QApplication__beep')
        .asFunction();
    func();
  }

  static // closeAllWindows()
      closeAllWindows() {
    final void_Func_void func = _dylib
        .lookup<ffi.NativeFunction<void_Func_void_FFI>>(
            'c_static_QApplication__closeAllWindows')
        .asFunction();
    func();
  }

  static // cursorFlashTime()
      int cursorFlashTime() {
    final int_Func_void func = _dylib
        .lookup<ffi.NativeFunction<int_Func_void_FFI>>(
            'c_static_QApplication__cursorFlashTime')
        .asFunction();
    return func();
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QApplication;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QApplication::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  }

  static // doubleClickInterval()
      int doubleClickInterval() {
    final int_Func_void func = _dylib
        .lookup<ffi.NativeFunction<int_Func_void_FFI>>(
            'c_static_QApplication__doubleClickInterval')
        .asFunction();
    return func();
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QApplication;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QApplication::event(QEvent * arg__1)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QApplication;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QApplication::eventFilter(QObject * watched, QEvent * event)! (${thisCpp.address})");
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
            'c_static_QApplication__exec')
        .asFunction();
    return func();
  } // focusChanged(QWidget * old, QWidget * now)

  focusChanged(QWidget? old, QWidget? now) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QApplication__focusChanged_QWidget_QWidget')
        .asFunction();
    func(thisCpp, old == null ? ffi.nullptr : old.thisCpp,
        now == null ? ffi.nullptr : now.thisCpp);
  }

  void onFocusChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QApplication__onFocusChanged_QWidget_QWidget')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onFocusChanged_callback);
    final callbackMethod = onFocusChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onFocusChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QApplication;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onFocusChanged_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static // focusWidget()
      QWidget focusWidget() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QApplication__focusWidget')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QWidget.fromCppPointer(result, false);
  }

  static // font()
      QFont font() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QApplication__font')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QFont.fromCppPointer(result, true);
  }

  static // font(const QWidget * arg__1)
      QFont fontForWidget(QWidget? arg__1) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_static_QApplication__fontForWidget_QWidget')
        .asFunction();
    ffi.Pointer<void> result =
        func(arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
    return QFont.fromCppPointer(result, true);
  }

  static // font(const char * className)
      QFont fontForClassName(String? className) {
    final voidstar_Func_string func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_FFI>>(
            'c_static_QApplication__fontForClassName_char')
        .asFunction();
    ffi.Pointer<void> result = func(className?.toNativeUtf8() ?? ffi.nullptr);
    return QFont.fromCppPointer(result, true);
  }

  static // keyboardInputInterval()
      int keyboardInputInterval() {
    final int_Func_void func = _dylib
        .lookup<ffi.NativeFunction<int_Func_void_FFI>>(
            'c_static_QApplication__keyboardInputInterval')
        .asFunction();
    return func();
  }

  static int notify_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void>? arg__1, ffi.Pointer<void>? arg__2) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QApplication;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QApplication::notify(QObject * arg__1, QEvent * arg__2)! (${thisCpp.address})");
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

  static // palette(const QWidget * arg__1)
      QPalette palette(QWidget? arg__1) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_static_QApplication__palette_QWidget')
        .asFunction();
    ffi.Pointer<void> result =
        func(arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
    return QPalette.fromCppPointer(result, true);
  }

  static // palette(const char * className)
      QPalette palette_2(String? className) {
    final voidstar_Func_string func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_FFI>>(
            'c_static_QApplication__palette_char')
        .asFunction();
    ffi.Pointer<void> result = func(className?.toNativeUtf8() ?? ffi.nullptr);
    return QPalette.fromCppPointer(result, true);
  }

  static // setActiveWindow(QWidget * act)
      setActiveWindow(QWidget? act) {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_static_QApplication__setActiveWindow_QWidget')
        .asFunction();
    func(act == null ? ffi.nullptr : act.thisCpp);
  } // setAutoSipEnabled(const bool enabled)

  setAutoSipEnabled(bool enabled) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QApplication__setAutoSipEnabled_bool')
        .asFunction();
    func(thisCpp, enabled ? 1 : 0);
  }

  static // setCursorFlashTime(int arg__1)
      setCursorFlashTime(int arg__1) {
    final void_Func_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_ffi_Int32_FFI>>(
            'c_static_QApplication__setCursorFlashTime_int')
        .asFunction();
    func(arg__1);
  }

  static // setDoubleClickInterval(int arg__1)
      setDoubleClickInterval(int arg__1) {
    final void_Func_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_ffi_Int32_FFI>>(
            'c_static_QApplication__setDoubleClickInterval_int')
        .asFunction();
    func(arg__1);
  }

  static // setFont(const QFont & arg__1, const char * className)
      setFont(QFont? arg__1, {String? className}) {
    final void_Func_voidstar_string func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_string_FFI>>(
            'c_static_QApplication__setFont_QFont_char')
        .asFunction();
    func(arg__1 == null ? ffi.nullptr : arg__1.thisCpp,
        className?.toNativeUtf8() ?? ffi.nullptr);
  }

  static // setKeyboardInputInterval(int arg__1)
      setKeyboardInputInterval(int arg__1) {
    final void_Func_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_ffi_Int32_FFI>>(
            'c_static_QApplication__setKeyboardInputInterval_int')
        .asFunction();
    func(arg__1);
  }

  static // setPalette(const QPalette & arg__1, const char * className)
      setPalette(QPalette arg__1, {String? className}) {
    final void_Func_voidstar_string func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_string_FFI>>(
            'c_static_QApplication__setPalette_QPalette_char')
        .asFunction();
    func(arg__1 == null ? ffi.nullptr : arg__1.thisCpp,
        className?.toNativeUtf8() ?? ffi.nullptr);
  }

  static // setStartDragDistance(int l)
      setStartDragDistance(int l) {
    final void_Func_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_ffi_Int32_FFI>>(
            'c_static_QApplication__setStartDragDistance_int')
        .asFunction();
    func(l);
  }

  static // setStartDragTime(int ms)
      setStartDragTime(int ms) {
    final void_Func_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_ffi_Int32_FFI>>(
            'c_static_QApplication__setStartDragTime_int')
        .asFunction();
    func(ms);
  }

  static // setStyle(QStyle * arg__1)
      setStyle(QStyle? arg__1) {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_static_QApplication__setStyle_QStyle')
        .asFunction();
    func(arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  }

  static // setStyle(const QString & arg__1)
      QStyle setStyle_2(String? arg__1) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_static_QApplication__setStyle_QString')
        .asFunction();
    ffi.Pointer<void> result = func(arg__1?.toNativeUtf8() ?? ffi.nullptr);
    return QStyle.fromCppPointer(result, false);
  } // setStyleSheet(const QString & sheet)

  setStyleSheet(String? sheet) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QApplication__setStyleSheet_QString')
        .asFunction();
    func(thisCpp, sheet?.toNativeUtf8() ?? ffi.nullptr);
  }

  static // setWheelScrollLines(int arg__1)
      setWheelScrollLines(int arg__1) {
    final void_Func_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_ffi_Int32_FFI>>(
            'c_static_QApplication__setWheelScrollLines_int')
        .asFunction();
    func(arg__1);
  }

  static // startDragDistance()
      int startDragDistance() {
    final int_Func_void func = _dylib
        .lookup<ffi.NativeFunction<int_Func_void_FFI>>(
            'c_static_QApplication__startDragDistance')
        .asFunction();
    return func();
  }

  static // startDragTime()
      int startDragTime() {
    final int_Func_void func = _dylib
        .lookup<ffi.NativeFunction<int_Func_void_FFI>>(
            'c_static_QApplication__startDragTime')
        .asFunction();
    return func();
  }

  static // style()
      QStyle style() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QApplication__style')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QStyle.fromCppPointer(result, false);
  } // styleSheet() const

  QString styleSheet() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QApplication__styleSheet')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  }

  static // topLevelAt(const QPoint & p)
      QWidget topLevelWidgetAtPos(QPoint? p) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_static_QApplication__topLevelWidgetAtPos_QPoint')
        .asFunction();
    ffi.Pointer<void> result = func(p == null ? ffi.nullptr : p.thisCpp);
    return QWidget.fromCppPointer(result, false);
  }

  static // topLevelAt(int x, int y)
      QWidget topLevelWidgetAt(int x, int y) {
    final voidstar_Func_int_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_ffi_Int32_ffi_Int32_FFI>>(
            'c_static_QApplication__topLevelWidgetAt_int_int')
        .asFunction();
    ffi.Pointer<void> result = func(x, y);
    return QWidget.fromCppPointer(result, false);
  }

  static // topLevelWidgets()
      QList topLevelWidgets() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QApplication__topLevelWidgets')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QList<QWidget>.fromCppPointer(result, true);
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QApplication__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  }

  static // wheelScrollLines()
      int wheelScrollLines() {
    final int_Func_void func = _dylib
        .lookup<ffi.NativeFunction<int_Func_void_FFI>>(
            'c_static_QApplication__wheelScrollLines')
        .asFunction();
    return func();
  }

  static // widgetAt(const QPoint & p)
      QWidget widgetAt(QPoint? p) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_static_QApplication__widgetAt_QPoint')
        .asFunction();
    ffi.Pointer<void> result = func(p == null ? ffi.nullptr : p.thisCpp);
    return QWidget.fromCppPointer(result, false);
  }

  static // widgetAt(int x, int y)
      QWidget widgetAt_2(int x, int y) {
    final voidstar_Func_int_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_ffi_Int32_ffi_Int32_FFI>>(
            'c_static_QApplication__widgetAt_int_int')
        .asFunction();
    ffi.Pointer<void> result = func(x, y);
    return QWidget.fromCppPointer(result, false);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QApplication__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 946:
        return "c_QApplication__customEvent_QEvent";
      case 956:
        return "c_QApplication__event_QEvent";
      case 957:
        return "c_QApplication__eventFilter_QObject_QEvent";
      case 4558:
        return "c_QApplication__notify_QObject_QEvent";
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
            'c_QApplication__registerVirtualMethodCallback')
        .asFunction();
    final callback946 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QObject.customEvent_calledFromC);
    registerCallback(thisCpp, callback946, 946);
    const callbackExcept956 = 0;
    final callback956 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_FFI>(
            QApplication.event_calledFromC, callbackExcept956);
    registerCallback(thisCpp, callback956, 956);
    const callbackExcept957 = 0;
    final callback957 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_voidstar_FFI>(
            QObject.eventFilter_calledFromC, callbackExcept957);
    registerCallback(thisCpp, callback957, 957);
    const callbackExcept4558 = 0;
    final callback4558 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_voidstar_FFI>(
            QApplication.notify_calledFromC, callbackExcept4558);
    registerCallback(thisCpp, callback4558, 4558);
  }
}
