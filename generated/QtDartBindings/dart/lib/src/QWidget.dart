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

class QWidget_RenderFlag {
  static const DrawWindowBackground = 1;
  static const DrawChildren = 2;
  static const IgnoreMask = 4;
}

class QWidget extends QObject {
  QWidget.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QWidget.init() : super.init() {}
  factory QWidget.fromCache(var cppPointer, [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QWidget;
    }
    return QWidget.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QWidget_Finalizer";
  } //QWidget(QWidget * parent)

  QWidget({required QWidget? parent}) : super.init() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__constructor_QWidget')
        .asFunction();
    thisCpp = func(parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } // acceptDrops() const
  bool acceptDrops() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QWidget__acceptDrops')
        .asFunction();
    return func(thisCpp) != 0;
  } // accessibleDescription() const

  QString accessibleDescription() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__accessibleDescription')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // accessibleName() const

  QString accessibleName() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__accessibleName')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // actions() const

  QList actions() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__actions')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QList<QAction>.fromCppPointer(result, true);
  } // activateWindow()

  activateWindow() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QWidget__activateWindow')
        .asFunction();
    func(thisCpp);
  } // addAction(QAction * action)

  addAction(QAction? action) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__addAction_QAction')
        .asFunction();
    func(thisCpp, action == null ? ffi.nullptr : action.thisCpp);
  } // addAction(const QIcon & icon, const QString & text)

  QAction addAction_2(QIcon icon, String? text) {
    final voidstar_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi
                .NativeFunction<voidstar_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QWidget__addAction_QIcon_QString')
        .asFunction();
    ffi.Pointer<void> result = func(
        thisCpp,
        icon == null ? ffi.nullptr : icon.thisCpp,
        text?.toNativeUtf8() ?? ffi.nullptr);
    return QAction.fromCppPointer(result, false);
  } // addAction(const QIcon & icon, const QString & text, const QKeySequence & shortcut)

  QAction addAction_3(QIcon icon, String? text, QKeySequence? shortcut) {
    final voidstar_Func_voidstar_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_voidstar_voidstar_voidstar_FFI>>(
            'c_QWidget__addAction_QIcon_QString_QKeySequence')
        .asFunction();
    ffi.Pointer<void> result = func(
        thisCpp,
        icon == null ? ffi.nullptr : icon.thisCpp,
        text?.toNativeUtf8() ?? ffi.nullptr,
        shortcut == null ? ffi.nullptr : shortcut.thisCpp);
    return QAction.fromCppPointer(result, false);
  } // addAction(const QIcon & icon, const QString & text, const QKeySequence & shortcut, const QObject * receiver, const char * member)

  QAction addAction_4(QIcon icon, String? text, QKeySequence? shortcut,
      QObject? receiver, String? member) {
    final voidstar_Func_voidstar_voidstar_voidstar_voidstar_voidstar_string
        func = _dylib
            .lookup<
                    ffi.NativeFunction<
                        voidstar_Func_voidstar_voidstar_voidstar_voidstar_voidstar_string_FFI>>(
                'c_QWidget__addAction_QIcon_QString_QKeySequence_QObject_char')
            .asFunction();
    ffi.Pointer<void> result = func(
        thisCpp,
        icon == null ? ffi.nullptr : icon.thisCpp,
        text?.toNativeUtf8() ?? ffi.nullptr,
        shortcut == null ? ffi.nullptr : shortcut.thisCpp,
        receiver == null ? ffi.nullptr : receiver.thisCpp,
        member?.toNativeUtf8() ?? ffi.nullptr);
    return QAction.fromCppPointer(result, false);
  } // addAction(const QIcon & icon, const QString & text, const QObject * receiver, const char * member)

  QAction addAction_5(
      QIcon icon, String? text, QObject? receiver, String? member) {
    final voidstar_Func_voidstar_voidstar_voidstar_voidstar_string func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_voidstar_voidstar_voidstar_string_FFI>>(
            'c_QWidget__addAction_QIcon_QString_QObject_char')
        .asFunction();
    ffi.Pointer<void> result = func(
        thisCpp,
        icon == null ? ffi.nullptr : icon.thisCpp,
        text?.toNativeUtf8() ?? ffi.nullptr,
        receiver == null ? ffi.nullptr : receiver.thisCpp,
        member?.toNativeUtf8() ?? ffi.nullptr);
    return QAction.fromCppPointer(result, false);
  } // addAction(const QString & text)

  QAction addAction_6(String? text) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__addAction_QString')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, text?.toNativeUtf8() ?? ffi.nullptr);
    return QAction.fromCppPointer(result, false);
  } // addAction(const QString & text, const QKeySequence & shortcut)

  QAction addAction_7(String? text, QKeySequence? shortcut) {
    final voidstar_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi
                .NativeFunction<voidstar_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QWidget__addAction_QString_QKeySequence')
        .asFunction();
    ffi.Pointer<void> result = func(
        thisCpp,
        text?.toNativeUtf8() ?? ffi.nullptr,
        shortcut == null ? ffi.nullptr : shortcut.thisCpp);
    return QAction.fromCppPointer(result, false);
  } // addAction(const QString & text, const QKeySequence & shortcut, const QObject * receiver, const char * member)

  QAction addAction_8(
      String? text, QKeySequence? shortcut, QObject? receiver, String? member) {
    final voidstar_Func_voidstar_voidstar_voidstar_voidstar_string func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_voidstar_voidstar_voidstar_string_FFI>>(
            'c_QWidget__addAction_QString_QKeySequence_QObject_char')
        .asFunction();
    ffi.Pointer<void> result = func(
        thisCpp,
        text?.toNativeUtf8() ?? ffi.nullptr,
        shortcut == null ? ffi.nullptr : shortcut.thisCpp,
        receiver == null ? ffi.nullptr : receiver.thisCpp,
        member?.toNativeUtf8() ?? ffi.nullptr);
    return QAction.fromCppPointer(result, false);
  } // addAction(const QString & text, const QObject * receiver, const char * member)

  QAction addAction_9(String? text, QObject? receiver, String? member) {
    final voidstar_Func_voidstar_voidstar_voidstar_string func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_voidstar_voidstar_string_FFI>>(
            'c_QWidget__addAction_QString_QObject_char')
        .asFunction();
    ffi.Pointer<void> result = func(
        thisCpp,
        text?.toNativeUtf8() ?? ffi.nullptr,
        receiver == null ? ffi.nullptr : receiver.thisCpp,
        member?.toNativeUtf8() ?? ffi.nullptr);
    return QAction.fromCppPointer(result, false);
  } // addActions(const QList<QAction* > & actions)

  addActions(QList? actions) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__addActions_QList_QAction')
        .asFunction();
    func(thisCpp, actions == null ? ffi.nullptr : actions.thisCpp);
  } // adjustSize()

  adjustSize() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QWidget__adjustSize')
        .asFunction();
    func(thisCpp);
  } // autoFillBackground() const

  bool autoFillBackground() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QWidget__autoFillBackground')
        .asFunction();
    return func(thisCpp) != 0;
  } // backgroundRole() const

  int backgroundRole() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QWidget__backgroundRole')
        .asFunction();
    return func(thisCpp);
  } // baseSize() const

  QSize baseSize() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__baseSize')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QSize.fromCppPointer(result, true);
  } // changeEvent(QEvent * arg__1)

  changeEvent(QEvent? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1128))
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  }

  static void changeEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWidget;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QWidget::changeEvent(QEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.changeEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QEvent.fromCppPointer(arg__1));
  } // childAt(const QPoint & p) const

  QWidget childAt(QPoint? p) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__childAt_QPoint')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, p == null ? ffi.nullptr : p.thisCpp);
    return QWidget.fromCppPointer(result, false);
  } // childAt(int x, int y) const

  QWidget childAt_2(int x, int y) {
    final voidstar_Func_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QWidget__childAt_int_int')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, x, y);
    return QWidget.fromCppPointer(result, false);
  } // childrenRect() const

  QRect childrenRect() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__childrenRect')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRect.fromCppPointer(result, true);
  } // childrenRegion() const

  QRegion childrenRegion() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__childrenRegion')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRegion.fromCppPointer(result, true);
  } // clearFocus()

  clearFocus() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QWidget__clearFocus')
        .asFunction();
    func(thisCpp);
  } // clearMask()

  clearMask() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QWidget__clearMask')
        .asFunction();
    func(thisCpp);
  } // close()

  bool close() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>('c_QWidget__close')
        .asFunction();
    return func(thisCpp) != 0;
  } // contentsRect() const

  QRect contentsRect() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__contentsRect')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRect.fromCppPointer(result, true);
  } // create()

  create() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>('c_QWidget__create')
        .asFunction();
    func(thisCpp);
  } // createWinId()

  createWinId() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QWidget__createWinId')
        .asFunction();
    func(thisCpp);
  }

  static // createWindowContainer(QWindow * window, QWidget * parent)
      QWidget createWindowContainer(QWindow? window,
          {required QWidget? parent}) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_static_QWidget__createWindowContainer_QWindow_QWidget')
        .asFunction();
    ffi.Pointer<void> result = func(
        window == null ? ffi.nullptr : window.thisCpp,
        parent == null ? ffi.nullptr : parent.thisCpp);
    return QWidget.fromCppPointer(result, false);
  } // customContextMenuRequested(const QPoint & pos)

  customContextMenuRequested(QPoint? pos) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__customContextMenuRequested_QPoint')
        .asFunction();
    func(thisCpp, pos == null ? ffi.nullptr : pos.thisCpp);
  }

  void onCustomContextMenuRequested(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QWidget__onCustomContextMenuRequested_QPoint')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onCustomContextMenuRequested_callback);
    final callbackMethod = onCustomContextMenuRequested_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onCustomContextMenuRequested_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWidget;
    final signalHandlers = dartInstance
            .signalHandlerersBySignal[onCustomContextMenuRequested_callback] ??
        [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWidget;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QWidget::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  } // destroy(bool destroyWindow, bool destroySubWindows)

  destroy({bool destroyWindow = true, bool destroySubWindows = true}) {
    final void_Func_voidstar_bool_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_ffi_Int8_FFI>>(
            'c_QWidget__destroy_bool_bool')
        .asFunction();
    func(thisCpp, destroyWindow ? 1 : 0, destroySubWindows ? 1 : 0);
  } // devType() const

  int devType() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            cFunctionSymbolName(1145))
        .asFunction();
    return func(thisCpp);
  }

  static int devType_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWidget;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QWidget::devType() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.devType();
    return result;
  } // ensurePolished() const

  ensurePolished() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QWidget__ensurePolished')
        .asFunction();
    func(thisCpp);
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWidget;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QWidget::event(QEvent * event)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWidget;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QWidget::eventFilter(QObject * watched, QEvent * event)! (${thisCpp.address})");
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
  } // focusNextChild()

  bool focusNextChild() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QWidget__focusNextChild')
        .asFunction();
    return func(thisCpp) != 0;
  } // focusNextPrevChild(bool next)

  bool focusNextPrevChild(bool next) {
    final bool_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_ffi_Int8_FFI>>(
            cFunctionSymbolName(1155))
        .asFunction();
    return func(thisCpp, next ? 1 : 0) != 0;
  }

  static int focusNextPrevChild_calledFromC(
      ffi.Pointer<void> thisCpp, int next) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWidget;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QWidget::focusNextPrevChild(bool next)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.focusNextPrevChild(next != 0);
    return result ? 1 : 0;
  } // focusPreviousChild()

  bool focusPreviousChild() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QWidget__focusPreviousChild')
        .asFunction();
    return func(thisCpp) != 0;
  } // focusProxy() const

  QWidget focusProxy() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__focusProxy')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QWidget.fromCppPointer(result, false);
  } // focusWidget() const

  QWidget focusWidget() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__focusWidget')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QWidget.fromCppPointer(result, false);
  } // font() const

  QFont font() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__font')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QFont.fromCppPointer(result, false);
  } // foregroundRole() const

  int foregroundRole() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QWidget__foregroundRole')
        .asFunction();
    return func(thisCpp);
  } // frameGeometry() const

  QRect frameGeometry() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__frameGeometry')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRect.fromCppPointer(result, true);
  } // frameSize() const

  QSize frameSize() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__frameSize')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QSize.fromCppPointer(result, true);
  } // geometry() const

  QRect geometry() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__geometry')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRect.fromCppPointer(result, false);
  } // grab(const QRect & rectangle)

  QPixmap grab({required QRect? rectangle}) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__grab_QRect')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, rectangle == null ? ffi.nullptr : rectangle.thisCpp);
    return QPixmap.fromCppPointer(result, true);
  } // grabKeyboard()

  grabKeyboard() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QWidget__grabKeyboard')
        .asFunction();
    func(thisCpp);
  } // grabMouse()

  grabMouse() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QWidget__grabMouse')
        .asFunction();
    func(thisCpp);
  } // grabShortcut(const QKeySequence & key)

  int grabShortcut(QKeySequence? key) {
    final int_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__grabShortcut_QKeySequence')
        .asFunction();
    return func(thisCpp, key == null ? ffi.nullptr : key.thisCpp);
  } // hasFocus() const

  bool hasFocus() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QWidget__hasFocus')
        .asFunction();
    return func(thisCpp) != 0;
  } // hasHeightForWidth() const

  bool hasHeightForWidth() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            cFunctionSymbolName(1169))
        .asFunction();
    return func(thisCpp) != 0;
  }

  static int hasHeightForWidth_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWidget;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QWidget::hasHeightForWidth() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.hasHeightForWidth();
    return result ? 1 : 0;
  } // hasMouseTracking() const

  bool hasMouseTracking() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QWidget__hasMouseTracking')
        .asFunction();
    return func(thisCpp) != 0;
  } // hasTabletTracking() const

  bool hasTabletTracking() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QWidget__hasTabletTracking')
        .asFunction();
    return func(thisCpp) != 0;
  } // height() const

  int height() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QWidget__height')
        .asFunction();
    return func(thisCpp);
  } // heightForWidth(int arg__1) const

  int heightForWidth(int arg__1) {
    final int_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_ffi_Int32_FFI>>(
            cFunctionSymbolName(1173))
        .asFunction();
    return func(thisCpp, arg__1);
  }

  static int heightForWidth_calledFromC(ffi.Pointer<void> thisCpp, int arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWidget;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QWidget::heightForWidth(int arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.heightForWidth(arg__1);
    return result;
  } // hide()

  hide() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>('c_QWidget__hide')
        .asFunction();
    func(thisCpp);
  } // initPainter(QPainter * painter) const

  initPainter(QPainter? painter) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1176))
        .asFunction();
    func(thisCpp, painter == null ? ffi.nullptr : painter.thisCpp);
  }

  static void initPainter_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? painter) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWidget;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QWidget::initPainter(QPainter * painter) const! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.initPainter((painter == null || painter.address == 0)
        ? null
        : QPainter.fromCppPointer(painter));
  } // insertAction(QAction * before, QAction * action)

  insertAction(QAction? before, QAction? action) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QWidget__insertAction_QAction_QAction')
        .asFunction();
    func(thisCpp, before == null ? ffi.nullptr : before.thisCpp,
        action == null ? ffi.nullptr : action.thisCpp);
  } // insertActions(QAction * before, const QList<QAction* > & actions)

  insertActions(QAction? before, QList? actions) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QWidget__insertActions_QAction_QList_QAction')
        .asFunction();
    func(thisCpp, before == null ? ffi.nullptr : before.thisCpp,
        actions == null ? ffi.nullptr : actions.thisCpp);
  } // isActiveWindow() const

  bool isActiveWindow() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QWidget__isActiveWindow')
        .asFunction();
    return func(thisCpp) != 0;
  } // isAncestorOf(const QWidget * child) const

  bool isAncestorOf(QWidget? child) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__isAncestorOf_QWidget')
        .asFunction();
    return func(thisCpp, child == null ? ffi.nullptr : child.thisCpp) != 0;
  } // isEnabled() const

  bool isEnabled() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QWidget__isEnabled')
        .asFunction();
    return func(thisCpp) != 0;
  } // isEnabledTo(const QWidget * arg__1) const

  bool isEnabledTo(QWidget? arg__1) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__isEnabledTo_QWidget')
        .asFunction();
    return func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp) != 0;
  } // isFullScreen() const

  bool isFullScreen() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QWidget__isFullScreen')
        .asFunction();
    return func(thisCpp) != 0;
  } // isHidden() const

  bool isHidden() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QWidget__isHidden')
        .asFunction();
    return func(thisCpp) != 0;
  } // isLeftToRight() const

  bool isLeftToRight() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QWidget__isLeftToRight')
        .asFunction();
    return func(thisCpp) != 0;
  } // isMaximized() const

  bool isMaximized() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QWidget__isMaximized')
        .asFunction();
    return func(thisCpp) != 0;
  } // isMinimized() const

  bool isMinimized() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QWidget__isMinimized')
        .asFunction();
    return func(thisCpp) != 0;
  } // isModal() const

  bool isModal() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QWidget__isModal')
        .asFunction();
    return func(thisCpp) != 0;
  } // isRightToLeft() const

  bool isRightToLeft() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QWidget__isRightToLeft')
        .asFunction();
    return func(thisCpp) != 0;
  } // isVisible() const

  bool isVisible() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QWidget__isVisible')
        .asFunction();
    return func(thisCpp) != 0;
  } // isVisibleTo(const QWidget * arg__1) const

  bool isVisibleTo(QWidget? arg__1) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__isVisibleTo_QWidget')
        .asFunction();
    return func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp) != 0;
  } // isWindow() const

  bool isWindow() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QWidget__isWindow')
        .asFunction();
    return func(thisCpp) != 0;
  } // isWindowModified() const

  bool isWindowModified() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QWidget__isWindowModified')
        .asFunction();
    return func(thisCpp) != 0;
  }

  static // keyboardGrabber()
      QWidget keyboardGrabber() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QWidget__keyboardGrabber')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QWidget.fromCppPointer(result, false);
  } // layout() const

  QLayout layout() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__layout')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QLayout.fromCppPointer(result, false);
  } // layoutDirection() const

  int layoutDirection() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QWidget__layoutDirection')
        .asFunction();
    return func(thisCpp);
  } // leaveEvent(QEvent * event)

  leaveEvent(QEvent? event) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1202))
        .asFunction();
    func(thisCpp, event == null ? ffi.nullptr : event.thisCpp);
  }

  static void leaveEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWidget;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QWidget::leaveEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.leaveEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  } // lower()

  lower() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>('c_QWidget__lower')
        .asFunction();
    func(thisCpp);
  } // mapFrom(const QWidget * arg__1, const QPoint & arg__2) const

  QPoint mapFrom(QWidget? arg__1, QPoint? arg__2) {
    final voidstar_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi
                .NativeFunction<voidstar_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QWidget__mapFrom_QWidget_QPoint')
        .asFunction();
    ffi.Pointer<void> result = func(
        thisCpp,
        arg__1 == null ? ffi.nullptr : arg__1.thisCpp,
        arg__2 == null ? ffi.nullptr : arg__2.thisCpp);
    return QPoint.fromCppPointer(result, true);
  } // mapFrom(const QWidget * arg__1, const QPointF & arg__2) const

  QPointF mapFrom_2(QWidget? arg__1, QPointF? arg__2) {
    final voidstar_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi
                .NativeFunction<voidstar_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QWidget__mapFrom_QWidget_QPointF')
        .asFunction();
    ffi.Pointer<void> result = func(
        thisCpp,
        arg__1 == null ? ffi.nullptr : arg__1.thisCpp,
        arg__2 == null ? ffi.nullptr : arg__2.thisCpp);
    return QPointF.fromCppPointer(result, true);
  } // mapFromGlobal(const QPoint & arg__1) const

  QPoint mapFromGlobal(QPoint? arg__1) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__mapFromGlobal_QPoint')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
    return QPoint.fromCppPointer(result, true);
  } // mapFromGlobal(const QPointF & arg__1) const

  QPointF mapFromGlobal_2(QPointF? arg__1) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__mapFromGlobal_QPointF')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
    return QPointF.fromCppPointer(result, true);
  } // mapFromParent(const QPoint & arg__1) const

  QPoint mapFromParent(QPoint? arg__1) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__mapFromParent_QPoint')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
    return QPoint.fromCppPointer(result, true);
  } // mapFromParent(const QPointF & arg__1) const

  QPointF mapFromParent_2(QPointF? arg__1) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__mapFromParent_QPointF')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
    return QPointF.fromCppPointer(result, true);
  } // mapTo(const QWidget * arg__1, const QPoint & arg__2) const

  QPoint mapTo(QWidget? arg__1, QPoint? arg__2) {
    final voidstar_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi
                .NativeFunction<voidstar_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QWidget__mapTo_QWidget_QPoint')
        .asFunction();
    ffi.Pointer<void> result = func(
        thisCpp,
        arg__1 == null ? ffi.nullptr : arg__1.thisCpp,
        arg__2 == null ? ffi.nullptr : arg__2.thisCpp);
    return QPoint.fromCppPointer(result, true);
  } // mapTo(const QWidget * arg__1, const QPointF & arg__2) const

  QPointF mapTo_2(QWidget? arg__1, QPointF? arg__2) {
    final voidstar_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi
                .NativeFunction<voidstar_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QWidget__mapTo_QWidget_QPointF')
        .asFunction();
    ffi.Pointer<void> result = func(
        thisCpp,
        arg__1 == null ? ffi.nullptr : arg__1.thisCpp,
        arg__2 == null ? ffi.nullptr : arg__2.thisCpp);
    return QPointF.fromCppPointer(result, true);
  } // mapToGlobal(const QPoint & arg__1) const

  QPoint mapToGlobal(QPoint? arg__1) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__mapToGlobal_QPoint')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
    return QPoint.fromCppPointer(result, true);
  } // mapToGlobal(const QPointF & arg__1) const

  QPointF mapToGlobal_2(QPointF? arg__1) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__mapToGlobal_QPointF')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
    return QPointF.fromCppPointer(result, true);
  } // mapToParent(const QPoint & arg__1) const

  QPoint mapToParent(QPoint? arg__1) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__mapToParent_QPoint')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
    return QPoint.fromCppPointer(result, true);
  } // mapToParent(const QPointF & arg__1) const

  QPointF mapToParent_2(QPointF? arg__1) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__mapToParent_QPointF')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
    return QPointF.fromCppPointer(result, true);
  } // mask() const

  QRegion mask() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__mask')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRegion.fromCppPointer(result, true);
  } // maximumHeight() const

  int maximumHeight() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QWidget__maximumHeight')
        .asFunction();
    return func(thisCpp);
  } // maximumSize() const

  QSize maximumSize() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__maximumSize')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QSize.fromCppPointer(result, true);
  } // maximumWidth() const

  int maximumWidth() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QWidget__maximumWidth')
        .asFunction();
    return func(thisCpp);
  } // minimumHeight() const

  int minimumHeight() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QWidget__minimumHeight')
        .asFunction();
    return func(thisCpp);
  } // minimumSize() const

  QSize minimumSize() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__minimumSize')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QSize.fromCppPointer(result, true);
  } // minimumSizeHint() const

  QSize minimumSizeHint() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            cFunctionSymbolName(1222))
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QSize.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> minimumSizeHint_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWidget;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QWidget::minimumSizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.minimumSizeHint();
    return result.thisCpp;
  } // minimumWidth() const

  int minimumWidth() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QWidget__minimumWidth')
        .asFunction();
    return func(thisCpp);
  } // mouseDoubleClickEvent(QMouseEvent * event)

  mouseDoubleClickEvent(QMouseEvent? event) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1224))
        .asFunction();
    func(thisCpp, event == null ? ffi.nullptr : event.thisCpp);
  }

  static void mouseDoubleClickEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWidget;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QWidget::mouseDoubleClickEvent(QMouseEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseDoubleClickEvent((event == null || event.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(event));
  }

  static // mouseGrabber()
      QWidget mouseGrabber() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_static_QWidget__mouseGrabber')
        .asFunction();
    ffi.Pointer<void> result = func();
    return QWidget.fromCppPointer(result, false);
  } // mouseMoveEvent(QMouseEvent * event)

  mouseMoveEvent(QMouseEvent? event) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1226))
        .asFunction();
    func(thisCpp, event == null ? ffi.nullptr : event.thisCpp);
  }

  static void mouseMoveEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWidget;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QWidget::mouseMoveEvent(QMouseEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseMoveEvent((event == null || event.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(event));
  } // mousePressEvent(QMouseEvent * event)

  mousePressEvent(QMouseEvent? event) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1227))
        .asFunction();
    func(thisCpp, event == null ? ffi.nullptr : event.thisCpp);
  }

  static void mousePressEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWidget;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QWidget::mousePressEvent(QMouseEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mousePressEvent((event == null || event.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(event));
  } // mouseReleaseEvent(QMouseEvent * event)

  mouseReleaseEvent(QMouseEvent? event) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1228))
        .asFunction();
    func(thisCpp, event == null ? ffi.nullptr : event.thisCpp);
  }

  static void mouseReleaseEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWidget;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QWidget::mouseReleaseEvent(QMouseEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseReleaseEvent((event == null || event.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(event));
  } // move(const QPoint & arg__1)

  move(QPoint? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__move_QPoint')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // move(int x, int y)

  move_2(int x, int y) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QWidget__move_int_int')
        .asFunction();
    func(thisCpp, x, y);
  } // nativeParentWidget() const

  QWidget nativeParentWidget() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__nativeParentWidget')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QWidget.fromCppPointer(result, false);
  } // nextInFocusChain() const

  QWidget nextInFocusChain() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__nextInFocusChain')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QWidget.fromCppPointer(result, false);
  } // normalGeometry() const

  QRect normalGeometry() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__normalGeometry')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRect.fromCppPointer(result, true);
  } // paintEvent(QPaintEvent * event)

  paintEvent(QPaintEvent? event) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1235))
        .asFunction();
    func(thisCpp, event == null ? ffi.nullptr : event.thisCpp);
  }

  static void paintEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWidget;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QWidget::paintEvent(QPaintEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.paintEvent((event == null || event.address == 0)
        ? null
        : QPaintEvent.fromCppPointer(event));
  } // palette() const

  QPalette palette() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__palette')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QPalette.fromCppPointer(result, false);
  } // parentWidget() const

  QWidget parentWidget() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__parentWidget')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QWidget.fromCppPointer(result, false);
  } // pos() const

  QPoint pos() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__pos')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QPoint.fromCppPointer(result, true);
  } // previousInFocusChain() const

  QWidget previousInFocusChain() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__previousInFocusChain')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QWidget.fromCppPointer(result, false);
  } // raise()

  raise() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>('c_QWidget__raise')
        .asFunction();
    func(thisCpp);
  } // rect() const

  QRect rect() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__rect')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRect.fromCppPointer(result, true);
  } // releaseKeyboard()

  releaseKeyboard() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QWidget__releaseKeyboard')
        .asFunction();
    func(thisCpp);
  } // releaseMouse()

  releaseMouse() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QWidget__releaseMouse')
        .asFunction();
    func(thisCpp);
  } // releaseShortcut(int id)

  releaseShortcut(int id) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QWidget__releaseShortcut_int')
        .asFunction();
    func(thisCpp, id);
  } // removeAction(QAction * action)

  removeAction(QAction? action) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__removeAction_QAction')
        .asFunction();
    func(thisCpp, action == null ? ffi.nullptr : action.thisCpp);
  } // render(QPainter * painter, const QPoint & targetOffset, const QRegion & sourceRegion)

  render(QPainter? painter,
      {required QPoint? targetOffset, required QRegion sourceRegion}) {
    final void_Func_voidstar_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_voidstar_voidstar_FFI>>(
            'c_QWidget__render_QPainter_QPoint_QRegion')
        .asFunction();
    func(
        thisCpp,
        painter == null ? ffi.nullptr : painter.thisCpp,
        targetOffset == null ? ffi.nullptr : targetOffset.thisCpp,
        sourceRegion == null ? ffi.nullptr : sourceRegion.thisCpp);
  } // repaint()

  repaint() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QWidget__repaint')
        .asFunction();
    func(thisCpp);
  } // repaint(const QRect & arg__1)

  repaint_2(QRect? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__repaint_QRect')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // repaint(const QRegion & arg__1)

  repaint_3(QRegion arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__repaint_QRegion')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // repaint(int x, int y, int w, int h)

  repaint_4(int x, int y, int w, int h) {
    final void_Func_voidstar_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QWidget__repaint_int_int_int_int')
        .asFunction();
    func(thisCpp, x, y, w, h);
  } // resize(const QSize & arg__1)

  resize(QSize? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__resize_QSize')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // resize(int w, int h)

  resize_2(int w, int h) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QWidget__resize_int_int')
        .asFunction();
    func(thisCpp, w, h);
  } // restoreGeometry(const QByteArray & geometry)

  bool restoreGeometry(QByteArray? geometry) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__restoreGeometry_QByteArray')
        .asFunction();
    return func(thisCpp, geometry == null ? ffi.nullptr : geometry.thisCpp) !=
        0;
  } // saveGeometry() const

  QByteArray saveGeometry() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__saveGeometry')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QByteArray.fromCppPointer(result, true);
  } // scroll(int dx, int dy)

  scroll(int dx, int dy) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QWidget__scroll_int_int')
        .asFunction();
    func(thisCpp, dx, dy);
  } // scroll(int dx, int dy, const QRect & arg__3)

  scroll_2(int dx, int dy, QRect? arg__3) {
    final void_Func_voidstar_int_int_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_FFI>>(
            'c_QWidget__scroll_int_int_QRect')
        .asFunction();
    func(thisCpp, dx, dy, arg__3 == null ? ffi.nullptr : arg__3.thisCpp);
  } // setAcceptDrops(bool on)

  setAcceptDrops(bool on) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QWidget__setAcceptDrops_bool')
        .asFunction();
    func(thisCpp, on ? 1 : 0);
  } // setAccessibleDescription(const QString & description)

  setAccessibleDescription(String? description) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__setAccessibleDescription_QString')
        .asFunction();
    func(thisCpp, description?.toNativeUtf8() ?? ffi.nullptr);
  } // setAccessibleName(const QString & name)

  setAccessibleName(String? name) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__setAccessibleName_QString')
        .asFunction();
    func(thisCpp, name?.toNativeUtf8() ?? ffi.nullptr);
  } // setAutoFillBackground(bool enabled)

  setAutoFillBackground(bool enabled) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QWidget__setAutoFillBackground_bool')
        .asFunction();
    func(thisCpp, enabled ? 1 : 0);
  } // setBackgroundRole(QPalette::ColorRole arg__1)

  setBackgroundRole(int arg__1) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QWidget__setBackgroundRole_ColorRole')
        .asFunction();
    func(thisCpp, arg__1);
  } // setBaseSize(const QSize & arg__1)

  setBaseSize(QSize? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__setBaseSize_QSize')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // setBaseSize(int basew, int baseh)

  setBaseSize_2(int basew, int baseh) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QWidget__setBaseSize_int_int')
        .asFunction();
    func(thisCpp, basew, baseh);
  } // setContentsMargins(int left, int top, int right, int bottom)

  setContentsMargins(int left, int top, int right, int bottom) {
    final void_Func_voidstar_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QWidget__setContentsMargins_int_int_int_int')
        .asFunction();
    func(thisCpp, left, top, right, bottom);
  } // setDisabled(bool arg__1)

  setDisabled(bool arg__1) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QWidget__setDisabled_bool')
        .asFunction();
    func(thisCpp, arg__1 ? 1 : 0);
  } // setEnabled(bool arg__1)

  setEnabled(bool arg__1) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QWidget__setEnabled_bool')
        .asFunction();
    func(thisCpp, arg__1 ? 1 : 0);
  } // setFixedHeight(int h)

  setFixedHeight(int h) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QWidget__setFixedHeight_int')
        .asFunction();
    func(thisCpp, h);
  } // setFixedSize(const QSize & arg__1)

  setFixedSize(QSize? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__setFixedSize_QSize')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // setFixedSize(int w, int h)

  setFixedSize_2(int w, int h) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QWidget__setFixedSize_int_int')
        .asFunction();
    func(thisCpp, w, h);
  } // setFixedWidth(int w)

  setFixedWidth(int w) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QWidget__setFixedWidth_int')
        .asFunction();
    func(thisCpp, w);
  } // setFocus()

  setFocus() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QWidget__setFocus')
        .asFunction();
    func(thisCpp);
  } // setFocusProxy(QWidget * arg__1)

  setFocusProxy(QWidget? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__setFocusProxy_QWidget')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // setFont(const QFont & arg__1)

  setFont(QFont? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__setFont_QFont')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // setForegroundRole(QPalette::ColorRole arg__1)

  setForegroundRole(int arg__1) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QWidget__setForegroundRole_ColorRole')
        .asFunction();
    func(thisCpp, arg__1);
  } // setGeometry(const QRect & arg__1)

  setGeometry(QRect? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__setGeometry_QRect')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // setGeometry(int x, int y, int w, int h)

  setGeometry_2(int x, int y, int w, int h) {
    final void_Func_voidstar_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QWidget__setGeometry_int_int_int_int')
        .asFunction();
    func(thisCpp, x, y, w, h);
  } // setHidden(bool hidden)

  setHidden(bool hidden) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QWidget__setHidden_bool')
        .asFunction();
    func(thisCpp, hidden ? 1 : 0);
  } // setLayout(QLayout * arg__1)

  setLayout(QLayout? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__setLayout_QLayout')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // setLayoutDirection(Qt::LayoutDirection direction)

  setLayoutDirection(int direction) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QWidget__setLayoutDirection_LayoutDirection')
        .asFunction();
    func(thisCpp, direction);
  } // setMask(const QRegion & arg__1)

  setMask(QRegion arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__setMask_QRegion')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // setMaximumHeight(int maxh)

  setMaximumHeight(int maxh) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QWidget__setMaximumHeight_int')
        .asFunction();
    func(thisCpp, maxh);
  } // setMaximumSize(const QSize & arg__1)

  setMaximumSize(QSize? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__setMaximumSize_QSize')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // setMaximumSize(int maxw, int maxh)

  setMaximumSize_2(int maxw, int maxh) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QWidget__setMaximumSize_int_int')
        .asFunction();
    func(thisCpp, maxw, maxh);
  } // setMaximumWidth(int maxw)

  setMaximumWidth(int maxw) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QWidget__setMaximumWidth_int')
        .asFunction();
    func(thisCpp, maxw);
  } // setMinimumHeight(int minh)

  setMinimumHeight(int minh) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QWidget__setMinimumHeight_int')
        .asFunction();
    func(thisCpp, minh);
  } // setMinimumSize(const QSize & arg__1)

  setMinimumSize(QSize? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__setMinimumSize_QSize')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // setMinimumSize(int minw, int minh)

  setMinimumSize_2(int minw, int minh) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QWidget__setMinimumSize_int_int')
        .asFunction();
    func(thisCpp, minw, minh);
  } // setMinimumWidth(int minw)

  setMinimumWidth(int minw) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QWidget__setMinimumWidth_int')
        .asFunction();
    func(thisCpp, minw);
  } // setMouseTracking(bool enable)

  setMouseTracking(bool enable) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QWidget__setMouseTracking_bool')
        .asFunction();
    func(thisCpp, enable ? 1 : 0);
  } // setPalette(const QPalette & arg__1)

  setPalette(QPalette arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__setPalette_QPalette')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // setShortcutAutoRepeat(int id, bool enable)

  setShortcutAutoRepeat(int id, {bool enable = true}) {
    final void_Func_voidstar_int_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int8_FFI>>(
            'c_QWidget__setShortcutAutoRepeat_int_bool')
        .asFunction();
    func(thisCpp, id, enable ? 1 : 0);
  } // setShortcutEnabled(int id, bool enable)

  setShortcutEnabled(int id, {bool enable = true}) {
    final void_Func_voidstar_int_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int8_FFI>>(
            'c_QWidget__setShortcutEnabled_int_bool')
        .asFunction();
    func(thisCpp, id, enable ? 1 : 0);
  } // setSizeIncrement(const QSize & arg__1)

  setSizeIncrement(QSize? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__setSizeIncrement_QSize')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // setSizeIncrement(int w, int h)

  setSizeIncrement_2(int w, int h) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QWidget__setSizeIncrement_int_int')
        .asFunction();
    func(thisCpp, w, h);
  } // setSizePolicy(QSizePolicy arg__1)

  setSizePolicy(QSizePolicy arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__setSizePolicy_QSizePolicy')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // setSizePolicy(QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical)

  setSizePolicy_2(int horizontal, int vertical) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QWidget__setSizePolicy_Policy_Policy')
        .asFunction();
    func(thisCpp, horizontal, vertical);
  } // setStatusTip(const QString & arg__1)

  setStatusTip(String? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__setStatusTip_QString')
        .asFunction();
    func(thisCpp, arg__1?.toNativeUtf8() ?? ffi.nullptr);
  } // setStyle(QStyle * arg__1)

  setStyle(QStyle? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__setStyle_QStyle')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // setStyleSheet(const QString & styleSheet)

  setStyleSheet(String? styleSheet) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__setStyleSheet_QString')
        .asFunction();
    func(thisCpp, styleSheet?.toNativeUtf8() ?? ffi.nullptr);
  }

  static // setTabOrder(QWidget * arg__1, QWidget * arg__2)
      setTabOrder(QWidget? arg__1, QWidget? arg__2) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_static_QWidget__setTabOrder_QWidget_QWidget')
        .asFunction();
    func(arg__1 == null ? ffi.nullptr : arg__1.thisCpp,
        arg__2 == null ? ffi.nullptr : arg__2.thisCpp);
  } // setTabletTracking(bool enable)

  setTabletTracking(bool enable) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QWidget__setTabletTracking_bool')
        .asFunction();
    func(thisCpp, enable ? 1 : 0);
  } // setToolTip(const QString & arg__1)

  setToolTip(String? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__setToolTip_QString')
        .asFunction();
    func(thisCpp, arg__1?.toNativeUtf8() ?? ffi.nullptr);
  } // setToolTipDuration(int msec)

  setToolTipDuration(int msec) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QWidget__setToolTipDuration_int')
        .asFunction();
    func(thisCpp, msec);
  } // setUpdatesEnabled(bool enable)

  setUpdatesEnabled(bool enable) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QWidget__setUpdatesEnabled_bool')
        .asFunction();
    func(thisCpp, enable ? 1 : 0);
  } // setVisible(bool visible)

  setVisible(bool visible) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            cFunctionSymbolName(1314))
        .asFunction();
    func(thisCpp, visible ? 1 : 0);
  }

  static void setVisible_calledFromC(ffi.Pointer<void> thisCpp, int visible) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWidget;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QWidget::setVisible(bool visible)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setVisible(visible != 0);
  } // setWhatsThis(const QString & arg__1)

  setWhatsThis(String? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__setWhatsThis_QString')
        .asFunction();
    func(thisCpp, arg__1?.toNativeUtf8() ?? ffi.nullptr);
  } // setWindowFilePath(const QString & filePath)

  setWindowFilePath(String? filePath) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__setWindowFilePath_QString')
        .asFunction();
    func(thisCpp, filePath?.toNativeUtf8() ?? ffi.nullptr);
  } // setWindowIcon(const QIcon & icon)

  setWindowIcon(QIcon icon) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__setWindowIcon_QIcon')
        .asFunction();
    func(thisCpp, icon == null ? ffi.nullptr : icon.thisCpp);
  } // setWindowIconText(const QString & arg__1)

  setWindowIconText(String? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__setWindowIconText_QString')
        .asFunction();
    func(thisCpp, arg__1?.toNativeUtf8() ?? ffi.nullptr);
  } // setWindowModified(bool arg__1)

  setWindowModified(bool arg__1) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QWidget__setWindowModified_bool')
        .asFunction();
    func(thisCpp, arg__1 ? 1 : 0);
  } // setWindowOpacity(qreal level)

  setWindowOpacity(double level) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QWidget__setWindowOpacity_qreal')
        .asFunction();
    func(thisCpp, level);
  } // setWindowRole(const QString & arg__1)

  setWindowRole(String? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__setWindowRole_QString')
        .asFunction();
    func(thisCpp, arg__1?.toNativeUtf8() ?? ffi.nullptr);
  } // setWindowTitle(const QString & arg__1)

  setWindowTitle(String? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__setWindowTitle_QString')
        .asFunction();
    func(thisCpp, arg__1?.toNativeUtf8() ?? ffi.nullptr);
  } // sharedPainter() const

  QPainter sharedPainter() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            cFunctionSymbolName(1323))
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QPainter.fromCppPointer(result, false);
  }

  static ffi.Pointer<void> sharedPainter_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWidget;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QWidget::sharedPainter() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sharedPainter();
    return result.thisCpp;
  } // show()

  show() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>('c_QWidget__show')
        .asFunction();
    func(thisCpp);
  } // showFullScreen()

  showFullScreen() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QWidget__showFullScreen')
        .asFunction();
    func(thisCpp);
  } // showMaximized()

  showMaximized() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QWidget__showMaximized')
        .asFunction();
    func(thisCpp);
  } // showMinimized()

  showMinimized() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QWidget__showMinimized')
        .asFunction();
    func(thisCpp);
  } // showNormal()

  showNormal() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QWidget__showNormal')
        .asFunction();
    func(thisCpp);
  } // size() const

  QSize size() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__size')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QSize.fromCppPointer(result, true);
  } // sizeHint() const

  QSize sizeHint() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            cFunctionSymbolName(1331))
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QSize.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> sizeHint_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWidget;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QWidget::sizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sizeHint();
    return result.thisCpp;
  } // sizeIncrement() const

  QSize sizeIncrement() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__sizeIncrement')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QSize.fromCppPointer(result, true);
  } // sizePolicy() const

  QSizePolicy sizePolicy() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__sizePolicy')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QSizePolicy.fromCppPointer(result, true);
  } // stackUnder(QWidget * arg__1)

  stackUnder(QWidget? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__stackUnder_QWidget')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // statusTip() const

  QString statusTip() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__statusTip')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // style() const

  QStyle style() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__style')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QStyle.fromCppPointer(result, false);
  } // styleSheet() const

  QString styleSheet() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__styleSheet')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // takeLayout()

  QLayout takeLayout() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__takeLayout')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QLayout.fromCppPointer(result, false);
  } // toolTip() const

  QString toolTip() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__toolTip')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // toolTipDuration() const

  int toolTipDuration() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QWidget__toolTipDuration')
        .asFunction();
    return func(thisCpp);
  } // topLevelWidget() const

  QWidget topLevelWidget() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__topLevelWidget')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QWidget.fromCppPointer(result, false);
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QWidget__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  } // underMouse() const

  bool underMouse() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QWidget__underMouse')
        .asFunction();
    return func(thisCpp) != 0;
  } // unsetCursor()

  unsetCursor() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QWidget__unsetCursor')
        .asFunction();
    func(thisCpp);
  } // unsetLayoutDirection()

  unsetLayoutDirection() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QWidget__unsetLayoutDirection')
        .asFunction();
    func(thisCpp);
  } // unsetLocale()

  unsetLocale() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QWidget__unsetLocale')
        .asFunction();
    func(thisCpp);
  } // update()

  update() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>('c_QWidget__update')
        .asFunction();
    func(thisCpp);
  } // update(const QRect & arg__1)

  update_2(QRect? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__update_QRect')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // update(const QRegion & arg__1)

  update_3(QRegion arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__update_QRegion')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // update(int x, int y, int w, int h)

  update_4(int x, int y, int w, int h) {
    final void_Func_voidstar_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QWidget__update_int_int_int_int')
        .asFunction();
    func(thisCpp, x, y, w, h);
  } // updateGeometry()

  updateGeometry() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QWidget__updateGeometry')
        .asFunction();
    func(thisCpp);
  } // updateMicroFocus()

  updateMicroFocus() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QWidget__updateMicroFocus')
        .asFunction();
    func(thisCpp);
  } // updatesEnabled() const

  bool updatesEnabled() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QWidget__updatesEnabled')
        .asFunction();
    return func(thisCpp) != 0;
  } // visibleRegion() const

  QRegion visibleRegion() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__visibleRegion')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRegion.fromCppPointer(result, true);
  } // whatsThis() const

  QString whatsThis() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__whatsThis')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // width() const

  int width() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QWidget__width')
        .asFunction();
    return func(thisCpp);
  } // window() const

  QWidget window() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__window')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QWidget.fromCppPointer(result, false);
  } // windowFilePath() const

  QString windowFilePath() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__windowFilePath')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // windowHandle() const

  QWindow windowHandle() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__windowHandle')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QWindow.fromCppPointer(result, false);
  } // windowIcon() const

  QIcon windowIcon() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__windowIcon')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QIcon.fromCppPointer(result, true);
  } // windowIconChanged(const QIcon & icon)

  windowIconChanged(QIcon icon) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__windowIconChanged_QIcon')
        .asFunction();
    func(thisCpp, icon == null ? ffi.nullptr : icon.thisCpp);
  }

  void onWindowIconChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QWidget__onWindowIconChanged_QIcon')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onWindowIconChanged_callback);
    final callbackMethod = onWindowIconChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onWindowIconChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWidget;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onWindowIconChanged_callback] ??
            [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // windowIconText() const

  QString windowIconText() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__windowIconText')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // windowIconTextChanged(const QString & iconText)

  windowIconTextChanged(String? iconText) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__windowIconTextChanged_QString')
        .asFunction();
    func(thisCpp, iconText?.toNativeUtf8() ?? ffi.nullptr);
  }

  void onWindowIconTextChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QWidget__onWindowIconTextChanged_QString')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onWindowIconTextChanged_callback);
    final callbackMethod = onWindowIconTextChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onWindowIconTextChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWidget;
    final signalHandlers = dartInstance
            .signalHandlerersBySignal[onWindowIconTextChanged_callback] ??
        [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // windowOpacity() const

  double windowOpacity() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QWidget__windowOpacity')
        .asFunction();
    return func(thisCpp);
  } // windowRole() const

  QString windowRole() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__windowRole')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // windowTitle() const

  QString windowTitle() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QWidget__windowTitle')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // windowTitleChanged(const QString & title)

  windowTitleChanged(String? title) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QWidget__windowTitleChanged_QString')
        .asFunction();
    func(thisCpp, title?.toNativeUtf8() ?? ffi.nullptr);
  }

  void onWindowTitleChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QWidget__onWindowTitleChanged_QString')
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QWidget;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onWindowTitleChanged_callback] ??
            [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // x() const

  int x() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QWidget__x')
        .asFunction();
    return func(thisCpp);
  } // y() const

  int y() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QWidget__y')
        .asFunction();
    return func(thisCpp);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QWidget__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 1128:
        return "c_QWidget__changeEvent_QEvent";
      case 946:
        return "c_QWidget__customEvent_QEvent";
      case 1145:
        return "c_QWidget__devType";
      case 956:
        return "c_QWidget__event_QEvent";
      case 957:
        return "c_QWidget__eventFilter_QObject_QEvent";
      case 1155:
        return "c_QWidget__focusNextPrevChild_bool";
      case 1169:
        return "c_QWidget__hasHeightForWidth";
      case 1173:
        return "c_QWidget__heightForWidth_int";
      case 1176:
        return "c_QWidget__initPainter_QPainter";
      case 1202:
        return "c_QWidget__leaveEvent_QEvent";
      case 1222:
        return "c_QWidget__minimumSizeHint";
      case 1224:
        return "c_QWidget__mouseDoubleClickEvent_QMouseEvent";
      case 1226:
        return "c_QWidget__mouseMoveEvent_QMouseEvent";
      case 1227:
        return "c_QWidget__mousePressEvent_QMouseEvent";
      case 1228:
        return "c_QWidget__mouseReleaseEvent_QMouseEvent";
      case 1235:
        return "c_QWidget__paintEvent_QPaintEvent";
      case 1314:
        return "c_QWidget__setVisible_bool";
      case 1323:
        return "c_QWidget__sharedPainter";
      case 1331:
        return "c_QWidget__sizeHint";
    }
    return super.cFunctionSymbolName(methodId);
  }

  static String methodNameFromId(int methodId) {
    switch (methodId) {
      case 1128:
        return "changeEvent";
      case 946:
        return "customEvent";
      case 1145:
        return "devType";
      case 956:
        return "event";
      case 957:
        return "eventFilter";
      case 1155:
        return "focusNextPrevChild";
      case 1169:
        return "hasHeightForWidth";
      case 1173:
        return "heightForWidth";
      case 1176:
        return "initPainter";
      case 1202:
        return "leaveEvent";
      case 1222:
        return "minimumSizeHint";
      case 1224:
        return "mouseDoubleClickEvent";
      case 1226:
        return "mouseMoveEvent";
      case 1227:
        return "mousePressEvent";
      case 1228:
        return "mouseReleaseEvent";
      case 1235:
        return "paintEvent";
      case 1314:
        return "setVisible";
      case 1323:
        return "sharedPainter";
      case 1331:
        return "sizeHint";
    }
    throw Error();
  }

  void registerCallbacks() {
    assert(thisCpp != null);
    final RegisterMethodIsReimplementedCallback registerCallback = _dylib
        .lookup<ffi.NativeFunction<RegisterMethodIsReimplementedCallback_FFI>>(
            'c_QWidget__registerVirtualMethodCallback')
        .asFunction();
    final callback1128 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QWidget.changeEvent_calledFromC);
    registerCallback(thisCpp, callback1128, 1128);
    final callback946 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QObject.customEvent_calledFromC);
    registerCallback(thisCpp, callback946, 946);
    const callbackExcept1145 = 0;
    final callback1145 = ffi.Pointer.fromFunction<int_Func_voidstar_FFI>(
        QWidget.devType_calledFromC, callbackExcept1145);
    registerCallback(thisCpp, callback1145, 1145);
    const callbackExcept956 = 0;
    final callback956 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_FFI>(
            QWidget.event_calledFromC, callbackExcept956);
    registerCallback(thisCpp, callback956, 956);
    const callbackExcept957 = 0;
    final callback957 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_voidstar_FFI>(
            QObject.eventFilter_calledFromC, callbackExcept957);
    registerCallback(thisCpp, callback957, 957);
    const callbackExcept1155 = 0;
    final callback1155 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_ffi_Int8_FFI>(
            QWidget.focusNextPrevChild_calledFromC, callbackExcept1155);
    registerCallback(thisCpp, callback1155, 1155);
    const callbackExcept1169 = 0;
    final callback1169 = ffi.Pointer.fromFunction<bool_Func_voidstar_FFI>(
        QWidget.hasHeightForWidth_calledFromC, callbackExcept1169);
    registerCallback(thisCpp, callback1169, 1169);
    const callbackExcept1173 = 0;
    final callback1173 =
        ffi.Pointer.fromFunction<int_Func_voidstar_ffi_Int32_FFI>(
            QWidget.heightForWidth_calledFromC, callbackExcept1173);
    registerCallback(thisCpp, callback1173, 1173);
    final callback1176 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QWidget.initPainter_calledFromC);
    registerCallback(thisCpp, callback1176, 1176);
    final callback1202 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QWidget.leaveEvent_calledFromC);
    registerCallback(thisCpp, callback1202, 1202);
    final callback1222 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QWidget.minimumSizeHint_calledFromC);
    registerCallback(thisCpp, callback1222, 1222);
    final callback1224 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QWidget.mouseDoubleClickEvent_calledFromC);
    registerCallback(thisCpp, callback1224, 1224);
    final callback1226 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QWidget.mouseMoveEvent_calledFromC);
    registerCallback(thisCpp, callback1226, 1226);
    final callback1227 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QWidget.mousePressEvent_calledFromC);
    registerCallback(thisCpp, callback1227, 1227);
    final callback1228 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QWidget.mouseReleaseEvent_calledFromC);
    registerCallback(thisCpp, callback1228, 1228);
    final callback1235 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QWidget.paintEvent_calledFromC);
    registerCallback(thisCpp, callback1235, 1235);
    final callback1314 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int8_FFI>(
            QWidget.setVisible_calledFromC);
    registerCallback(thisCpp, callback1314, 1314);
    final callback1323 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QWidget.sharedPainter_calledFromC);
    registerCallback(thisCpp, callback1323, 1323);
    final callback1331 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QWidget.sizeHint_calledFromC);
    registerCallback(thisCpp, callback1331, 1331);
  }
}
