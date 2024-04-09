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

class QWindow extends QObject {
  QWindow.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QWindow.init() : super.init() {}
  factory QWindow.fromCache(var cppPointer, [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QWindow;
    }
    return QWindow.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QWindow_Finalizer";
  } //QWindow()

  QWindow() : super.init() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_QWindow__constructor')
        .asFunction();
    thisCpp = func();
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } //QWindow(QWindow * parent)
  QWindow.ctor2(QWindow? parent) : super.init() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWindow__constructor_QWindow')
        .asFunction();
    thisCpp = func(parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } // activeChanged()
  activeChanged() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QWindow__activeChanged')
        .asFunction();
    func(thisCpp);
  }

  void onActiveChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QWindow__onActiveChanged')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onActiveChanged_callback);
    final callbackMethod = onActiveChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onActiveChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWindow;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onActiveChanged_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // alert(int msec)

  alert(int msec) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QWindow__alert_int')
        .asFunction();
    func(thisCpp, msec);
  } // baseSize() const

  QSize baseSize() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWindow__baseSize')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QSize.fromCppPointer(result, true);
  } // close()

  bool close() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>('c_QWindow__close')
        .asFunction();
    return func(thisCpp) != 0;
  } // create()

  create() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>('c_QWindow__create')
        .asFunction();
    func(thisCpp);
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWindow;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QWindow::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  } // destroy()

  destroy() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QWindow__destroy')
        .asFunction();
    func(thisCpp);
  } // devicePixelRatio() const

  double devicePixelRatio() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QWindow__devicePixelRatio')
        .asFunction();
    return func(thisCpp);
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWindow;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QWindow::event(QEvent * arg__1)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWindow;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QWindow::eventFilter(QObject * watched, QEvent * event)! (${thisCpp.address})");
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
  } // filePath() const

  QString filePath() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWindow__filePath')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // focusObject() const

  QObject focusObject() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            cFunctionSymbolName(997))
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QObject.fromCppPointer(result, false);
  }

  static ffi.Pointer<void> focusObject_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWindow;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QWindow::focusObject() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.focusObject();
    return result.thisCpp;
  } // focusObjectChanged(QObject * object)

  focusObjectChanged(QObject? object) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWindow__focusObjectChanged_QObject')
        .asFunction();
    func(thisCpp, object == null ? ffi.nullptr : object.thisCpp);
  }

  void onFocusObjectChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QWindow__onFocusObjectChanged_QObject')
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWindow;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onFocusObjectChanged_callback] ??
            [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // frameGeometry() const

  QRect frameGeometry() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWindow__frameGeometry')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRect.fromCppPointer(result, true);
  } // framePosition() const

  QPoint framePosition() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWindow__framePosition')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QPoint.fromCppPointer(result, true);
  } // geometry() const

  QRect geometry() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWindow__geometry')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRect.fromCppPointer(result, true);
  } // height() const

  int height() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QWindow__height')
        .asFunction();
    return func(thisCpp);
  } // heightChanged(int arg)

  heightChanged(int arg) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QWindow__heightChanged_int')
        .asFunction();
    func(thisCpp, arg);
  }

  void onHeightChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QWindow__onHeightChanged_int')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onHeightChanged_callback);
    final callbackMethod = onHeightChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onHeightChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWindow;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onHeightChanged_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // hide()

  hide() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>('c_QWindow__hide')
        .asFunction();
    func(thisCpp);
  } // icon() const

  QIcon icon() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWindow__icon')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QIcon.fromCppPointer(result, true);
  } // isActive() const

  bool isActive() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QWindow__isActive')
        .asFunction();
    return func(thisCpp) != 0;
  } // isAncestorOf(const QWindow * child) const

  bool isAncestorOf(QWindow? child) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_QWindow__isAncestorOf_QWindow')
        .asFunction();
    return func(thisCpp, child == null ? ffi.nullptr : child.thisCpp) != 0;
  } // isExposed() const

  bool isExposed() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QWindow__isExposed')
        .asFunction();
    return func(thisCpp) != 0;
  } // isModal() const

  bool isModal() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QWindow__isModal')
        .asFunction();
    return func(thisCpp) != 0;
  } // isTopLevel() const

  bool isTopLevel() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QWindow__isTopLevel')
        .asFunction();
    return func(thisCpp) != 0;
  } // isVisible() const

  bool isVisible() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QWindow__isVisible')
        .asFunction();
    return func(thisCpp) != 0;
  } // lower()

  lower() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>('c_QWindow__lower')
        .asFunction();
    func(thisCpp);
  } // mapFromGlobal(const QPoint & pos) const

  QPoint mapFromGlobal(QPoint? pos) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QWindow__mapFromGlobal_QPoint')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, pos == null ? ffi.nullptr : pos.thisCpp);
    return QPoint.fromCppPointer(result, true);
  } // mapFromGlobal(const QPointF & pos) const

  QPointF mapFromGlobal_2(QPointF? pos) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QWindow__mapFromGlobal_QPointF')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, pos == null ? ffi.nullptr : pos.thisCpp);
    return QPointF.fromCppPointer(result, true);
  } // mapToGlobal(const QPoint & pos) const

  QPoint mapToGlobal(QPoint? pos) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QWindow__mapToGlobal_QPoint')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, pos == null ? ffi.nullptr : pos.thisCpp);
    return QPoint.fromCppPointer(result, true);
  } // mapToGlobal(const QPointF & pos) const

  QPointF mapToGlobal_2(QPointF? pos) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QWindow__mapToGlobal_QPointF')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, pos == null ? ffi.nullptr : pos.thisCpp);
    return QPointF.fromCppPointer(result, true);
  } // mask() const

  QRegion mask() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWindow__mask')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRegion.fromCppPointer(result, true);
  } // maximumHeight() const

  int maximumHeight() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QWindow__maximumHeight')
        .asFunction();
    return func(thisCpp);
  } // maximumHeightChanged(int arg)

  maximumHeightChanged(int arg) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QWindow__maximumHeightChanged_int')
        .asFunction();
    func(thisCpp, arg);
  }

  void onMaximumHeightChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QWindow__onMaximumHeightChanged_int')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onMaximumHeightChanged_callback);
    final callbackMethod = onMaximumHeightChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onMaximumHeightChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWindow;
    final signalHandlers = dartInstance
            .signalHandlerersBySignal[onMaximumHeightChanged_callback] ??
        [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // maximumSize() const

  QSize maximumSize() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWindow__maximumSize')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QSize.fromCppPointer(result, true);
  } // maximumWidth() const

  int maximumWidth() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QWindow__maximumWidth')
        .asFunction();
    return func(thisCpp);
  } // maximumWidthChanged(int arg)

  maximumWidthChanged(int arg) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QWindow__maximumWidthChanged_int')
        .asFunction();
    func(thisCpp, arg);
  }

  void onMaximumWidthChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QWindow__onMaximumWidthChanged_int')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onMaximumWidthChanged_callback);
    final callbackMethod = onMaximumWidthChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onMaximumWidthChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWindow;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onMaximumWidthChanged_callback] ??
            [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // minimumHeight() const

  int minimumHeight() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QWindow__minimumHeight')
        .asFunction();
    return func(thisCpp);
  } // minimumHeightChanged(int arg)

  minimumHeightChanged(int arg) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QWindow__minimumHeightChanged_int')
        .asFunction();
    func(thisCpp, arg);
  }

  void onMinimumHeightChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QWindow__onMinimumHeightChanged_int')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onMinimumHeightChanged_callback);
    final callbackMethod = onMinimumHeightChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onMinimumHeightChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWindow;
    final signalHandlers = dartInstance
            .signalHandlerersBySignal[onMinimumHeightChanged_callback] ??
        [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // minimumSize() const

  QSize minimumSize() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWindow__minimumSize')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QSize.fromCppPointer(result, true);
  } // minimumWidth() const

  int minimumWidth() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QWindow__minimumWidth')
        .asFunction();
    return func(thisCpp);
  } // minimumWidthChanged(int arg)

  minimumWidthChanged(int arg) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QWindow__minimumWidthChanged_int')
        .asFunction();
    func(thisCpp, arg);
  }

  void onMinimumWidthChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QWindow__onMinimumWidthChanged_int')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onMinimumWidthChanged_callback);
    final callbackMethod = onMinimumWidthChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onMinimumWidthChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWindow;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onMinimumWidthChanged_callback] ??
            [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // mouseDoubleClickEvent(QMouseEvent * arg__1)

  mouseDoubleClickEvent(QMouseEvent? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1034))
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  }

  static void mouseDoubleClickEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWindow;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QWindow::mouseDoubleClickEvent(QMouseEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseDoubleClickEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(arg__1));
  } // mouseMoveEvent(QMouseEvent * arg__1)

  mouseMoveEvent(QMouseEvent? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1035))
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  }

  static void mouseMoveEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWindow;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QWindow::mouseMoveEvent(QMouseEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseMoveEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(arg__1));
  } // mousePressEvent(QMouseEvent * arg__1)

  mousePressEvent(QMouseEvent? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1036))
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  }

  static void mousePressEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWindow;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QWindow::mousePressEvent(QMouseEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mousePressEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(arg__1));
  } // mouseReleaseEvent(QMouseEvent * arg__1)

  mouseReleaseEvent(QMouseEvent? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1037))
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  }

  static void mouseReleaseEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWindow;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QWindow::mouseReleaseEvent(QMouseEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseReleaseEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(arg__1));
  } // opacity() const

  double opacity() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QWindow__opacity')
        .asFunction();
    return func(thisCpp);
  } // opacityChanged(qreal opacity)

  opacityChanged(double opacity) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QWindow__opacityChanged_qreal')
        .asFunction();
    func(thisCpp, opacity);
  }

  void onOpacityChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QWindow__onOpacityChanged_qreal')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onOpacityChanged_callback);
    final callbackMethod = onOpacityChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onOpacityChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWindow;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onOpacityChanged_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // paintEvent(QPaintEvent * arg__1)

  paintEvent(QPaintEvent? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1041))
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  }

  static void paintEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWindow;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QWindow::paintEvent(QPaintEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.paintEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QPaintEvent.fromCppPointer(arg__1));
  } // parent() const

  QWindow parent() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWindow__parent')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QWindow.fromCppPointer(result, false);
  } // position() const

  QPoint position() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWindow__position')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QPoint.fromCppPointer(result, true);
  } // raise()

  raise() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>('c_QWindow__raise')
        .asFunction();
    func(thisCpp);
  } // requestActivate()

  requestActivate() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QWindow__requestActivate')
        .asFunction();
    func(thisCpp);
  } // requestUpdate()

  requestUpdate() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QWindow__requestUpdate')
        .asFunction();
    func(thisCpp);
  } // resize(const QSize & newSize)

  resize(QSize? newSize) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWindow__resize_QSize')
        .asFunction();
    func(thisCpp, newSize == null ? ffi.nullptr : newSize.thisCpp);
  } // resize(int w, int h)

  resize_2(int w, int h) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QWindow__resize_int_int')
        .asFunction();
    func(thisCpp, w, h);
  } // setBaseSize(const QSize & size)

  setBaseSize(QSize? size) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWindow__setBaseSize_QSize')
        .asFunction();
    func(thisCpp, size == null ? ffi.nullptr : size.thisCpp);
  } // setFilePath(const QString & filePath)

  setFilePath(String? filePath) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWindow__setFilePath_QString')
        .asFunction();
    func(thisCpp, filePath?.toNativeUtf8() ?? ffi.nullptr);
  } // setFramePosition(const QPoint & point)

  setFramePosition(QPoint? point) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWindow__setFramePosition_QPoint')
        .asFunction();
    func(thisCpp, point == null ? ffi.nullptr : point.thisCpp);
  } // setGeometry(const QRect & rect)

  setGeometry(QRect? rect) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWindow__setGeometry_QRect')
        .asFunction();
    func(thisCpp, rect == null ? ffi.nullptr : rect.thisCpp);
  } // setGeometry(int posx, int posy, int w, int h)

  setGeometry_2(int posx, int posy, int w, int h) {
    final void_Func_voidstar_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QWindow__setGeometry_int_int_int_int')
        .asFunction();
    func(thisCpp, posx, posy, w, h);
  } // setHeight(int arg)

  setHeight(int arg) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QWindow__setHeight_int')
        .asFunction();
    func(thisCpp, arg);
  } // setIcon(const QIcon & icon)

  setIcon(QIcon icon) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWindow__setIcon_QIcon')
        .asFunction();
    func(thisCpp, icon == null ? ffi.nullptr : icon.thisCpp);
  } // setKeyboardGrabEnabled(bool grab)

  bool setKeyboardGrabEnabled(bool grab) {
    final bool_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_ffi_Int8_FFI>>(
            'c_QWindow__setKeyboardGrabEnabled_bool')
        .asFunction();
    return func(thisCpp, grab ? 1 : 0) != 0;
  } // setMask(const QRegion & region)

  setMask(QRegion region) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWindow__setMask_QRegion')
        .asFunction();
    func(thisCpp, region == null ? ffi.nullptr : region.thisCpp);
  } // setMaximumHeight(int h)

  setMaximumHeight(int h) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QWindow__setMaximumHeight_int')
        .asFunction();
    func(thisCpp, h);
  } // setMaximumSize(const QSize & size)

  setMaximumSize(QSize? size) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWindow__setMaximumSize_QSize')
        .asFunction();
    func(thisCpp, size == null ? ffi.nullptr : size.thisCpp);
  } // setMaximumWidth(int w)

  setMaximumWidth(int w) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QWindow__setMaximumWidth_int')
        .asFunction();
    func(thisCpp, w);
  } // setMinimumHeight(int h)

  setMinimumHeight(int h) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QWindow__setMinimumHeight_int')
        .asFunction();
    func(thisCpp, h);
  } // setMinimumSize(const QSize & size)

  setMinimumSize(QSize? size) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWindow__setMinimumSize_QSize')
        .asFunction();
    func(thisCpp, size == null ? ffi.nullptr : size.thisCpp);
  } // setMinimumWidth(int w)

  setMinimumWidth(int w) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QWindow__setMinimumWidth_int')
        .asFunction();
    func(thisCpp, w);
  } // setMouseGrabEnabled(bool grab)

  bool setMouseGrabEnabled(bool grab) {
    final bool_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_ffi_Int8_FFI>>(
            'c_QWindow__setMouseGrabEnabled_bool')
        .asFunction();
    return func(thisCpp, grab ? 1 : 0) != 0;
  } // setOpacity(qreal level)

  setOpacity(double level) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QWindow__setOpacity_qreal')
        .asFunction();
    func(thisCpp, level);
  } // setPosition(const QPoint & pt)

  setPosition(QPoint? pt) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWindow__setPosition_QPoint')
        .asFunction();
    func(thisCpp, pt == null ? ffi.nullptr : pt.thisCpp);
  } // setPosition(int posx, int posy)

  setPosition_2(int posx, int posy) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QWindow__setPosition_int_int')
        .asFunction();
    func(thisCpp, posx, posy);
  } // setSizeIncrement(const QSize & size)

  setSizeIncrement(QSize? size) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWindow__setSizeIncrement_QSize')
        .asFunction();
    func(thisCpp, size == null ? ffi.nullptr : size.thisCpp);
  } // setTitle(const QString & arg__1)

  setTitle(String? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWindow__setTitle_QString')
        .asFunction();
    func(thisCpp, arg__1?.toNativeUtf8() ?? ffi.nullptr);
  } // setTransientParent(QWindow * parent)

  setTransientParent(QWindow? parent) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWindow__setTransientParent_QWindow')
        .asFunction();
    func(thisCpp, parent == null ? ffi.nullptr : parent.thisCpp);
  } // setVisible(bool visible)

  setVisible(bool visible) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QWindow__setVisible_bool')
        .asFunction();
    func(thisCpp, visible ? 1 : 0);
  } // setWidth(int arg)

  setWidth(int arg) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QWindow__setWidth_int')
        .asFunction();
    func(thisCpp, arg);
  } // setX(int arg)

  setX(int arg) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QWindow__setX_int')
        .asFunction();
    func(thisCpp, arg);
  } // setY(int arg)

  setY(int arg) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QWindow__setY_int')
        .asFunction();
    func(thisCpp, arg);
  } // show()

  show() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>('c_QWindow__show')
        .asFunction();
    func(thisCpp);
  } // showFullScreen()

  showFullScreen() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QWindow__showFullScreen')
        .asFunction();
    func(thisCpp);
  } // showMaximized()

  showMaximized() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QWindow__showMaximized')
        .asFunction();
    func(thisCpp);
  } // showMinimized()

  showMinimized() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QWindow__showMinimized')
        .asFunction();
    func(thisCpp);
  } // showNormal()

  showNormal() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QWindow__showNormal')
        .asFunction();
    func(thisCpp);
  } // size() const

  QSize size() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            cFunctionSymbolName(1090))
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QSize.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> size_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWindow;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QWindow::size() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.size();
    return result.thisCpp;
  } // sizeIncrement() const

  QSize sizeIncrement() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWindow__sizeIncrement')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QSize.fromCppPointer(result, true);
  } // startSystemMove()

  bool startSystemMove() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QWindow__startSystemMove')
        .asFunction();
    return func(thisCpp) != 0;
  } // title() const

  QString title() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWindow__title')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QWindow__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  } // transientParent() const

  QWindow transientParent() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWindow__transientParent')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QWindow.fromCppPointer(result, false);
  } // transientParentChanged(QWindow * transientParent)

  transientParentChanged(QWindow? transientParent) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWindow__transientParentChanged_QWindow')
        .asFunction();
    func(thisCpp,
        transientParent == null ? ffi.nullptr : transientParent.thisCpp);
  }

  void onTransientParentChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QWindow__onTransientParentChanged_QWindow')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onTransientParentChanged_callback);
    final callbackMethod = onTransientParentChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onTransientParentChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWindow;
    final signalHandlers = dartInstance
            .signalHandlerersBySignal[onTransientParentChanged_callback] ??
        [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // unsetCursor()

  unsetCursor() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QWindow__unsetCursor')
        .asFunction();
    func(thisCpp);
  } // visibleChanged(bool arg)

  visibleChanged(bool arg) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QWindow__visibleChanged_bool')
        .asFunction();
    func(thisCpp, arg ? 1 : 0);
  }

  void onVisibleChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QWindow__onVisibleChanged_bool')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onVisibleChanged_callback);
    final callbackMethod = onVisibleChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onVisibleChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWindow;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onVisibleChanged_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // width() const

  int width() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QWindow__width')
        .asFunction();
    return func(thisCpp);
  } // widthChanged(int arg)

  widthChanged(int arg) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QWindow__widthChanged_int')
        .asFunction();
    func(thisCpp, arg);
  }

  void onWidthChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QWindow__onWidthChanged_int')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onWidthChanged_callback);
    final callbackMethod = onWidthChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onWidthChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWindow;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onWidthChanged_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // windowTitleChanged(const QString & title)

  windowTitleChanged(String? title) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWindow__windowTitleChanged_QString')
        .asFunction();
    func(thisCpp, title?.toNativeUtf8() ?? ffi.nullptr);
  }

  void onWindowTitleChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QWindow__onWindowTitleChanged_QString')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onWindowTitleChanged_callback);
    final callbackMethod = onWindowTitleChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onWindowTitleChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWindow;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onWindowTitleChanged_callback] ??
            [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // x() const

  int x() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QWindow__x')
        .asFunction();
    return func(thisCpp);
  } // xChanged(int arg)

  xChanged(int arg) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QWindow__xChanged_int')
        .asFunction();
    func(thisCpp, arg);
  }

  void onXChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QWindow__onXChanged_int')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onXChanged_callback);
    final callbackMethod = onXChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onXChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWindow;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onXChanged_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // y() const

  int y() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QWindow__y')
        .asFunction();
    return func(thisCpp);
  } // yChanged(int arg)

  yChanged(int arg) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QWindow__yChanged_int')
        .asFunction();
    func(thisCpp, arg);
  }

  void onYChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QWindow__onYChanged_int')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onYChanged_callback);
    final callbackMethod = onYChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onYChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWindow;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onYChanged_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QWindow__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 946:
        return "c_QWindow__customEvent_QEvent";
      case 956:
        return "c_QWindow__event_QEvent";
      case 957:
        return "c_QWindow__eventFilter_QObject_QEvent";
      case 997:
        return "c_QWindow__focusObject";
      case 1034:
        return "c_QWindow__mouseDoubleClickEvent_QMouseEvent";
      case 1035:
        return "c_QWindow__mouseMoveEvent_QMouseEvent";
      case 1036:
        return "c_QWindow__mousePressEvent_QMouseEvent";
      case 1037:
        return "c_QWindow__mouseReleaseEvent_QMouseEvent";
      case 1041:
        return "c_QWindow__paintEvent_QPaintEvent";
      case 1090:
        return "c_QWindow__size";
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
      case 997:
        return "focusObject";
      case 1034:
        return "mouseDoubleClickEvent";
      case 1035:
        return "mouseMoveEvent";
      case 1036:
        return "mousePressEvent";
      case 1037:
        return "mouseReleaseEvent";
      case 1041:
        return "paintEvent";
      case 1090:
        return "size";
    }
    throw Error();
  }

  void registerCallbacks() {
    assert(thisCpp != null);
    final RegisterMethodIsReimplementedCallback registerCallback = _dylib
        .lookup<ffi.NativeFunction<RegisterMethodIsReimplementedCallback_FFI>>(
            'c_QWindow__registerVirtualMethodCallback')
        .asFunction();
    final callback946 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QObject.customEvent_calledFromC);
    registerCallback(thisCpp, callback946, 946);
    const callbackExcept956 = 0;
    final callback956 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_FFI>(
            QWindow.event_calledFromC, callbackExcept956);
    registerCallback(thisCpp, callback956, 956);
    const callbackExcept957 = 0;
    final callback957 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_voidstar_FFI>(
            QObject.eventFilter_calledFromC, callbackExcept957);
    registerCallback(thisCpp, callback957, 957);
    final callback997 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QWindow.focusObject_calledFromC);
    registerCallback(thisCpp, callback997, 997);
    final callback1034 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QWindow.mouseDoubleClickEvent_calledFromC);
    registerCallback(thisCpp, callback1034, 1034);
    final callback1035 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QWindow.mouseMoveEvent_calledFromC);
    registerCallback(thisCpp, callback1035, 1035);
    final callback1036 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QWindow.mousePressEvent_calledFromC);
    registerCallback(thisCpp, callback1036, 1036);
    final callback1037 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QWindow.mouseReleaseEvent_calledFromC);
    registerCallback(thisCpp, callback1037, 1037);
    final callback1041 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QWindow.paintEvent_calledFromC);
    registerCallback(thisCpp, callback1041, 1041);
    final callback1090 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QWindow.size_calledFromC);
    registerCallback(thisCpp, callback1090, 1090);
  }
}
