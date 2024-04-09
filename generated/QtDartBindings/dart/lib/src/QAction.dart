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

class QAction extends QObject {
  QAction.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QAction.init() : super.init() {}
  factory QAction.fromCache(var cppPointer, [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QAction;
    }
    return QAction.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QAction_Finalizer";
  } //QAction(QObject * parent)

  QAction({required QObject? parent}) : super.init() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QAction__constructor_QObject')
        .asFunction();
    thisCpp = func(parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } //QAction(const QIcon & icon, const QString & text, QObject * parent)
  QAction.ctor2(QIcon icon, String? text, {required QObject? parent})
      : super.init() {
    final voidstar_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi
                .NativeFunction<voidstar_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QAction__constructor_QIcon_QString_QObject')
        .asFunction();
    thisCpp = func(
        icon == null ? ffi.nullptr : icon.thisCpp,
        text?.toNativeUtf8() ?? ffi.nullptr,
        parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } //QAction(const QString & text, QObject * parent)
  QAction.ctor3(String? text, {required QObject? parent}) : super.init() {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QAction__constructor_QString_QObject')
        .asFunction();
    thisCpp = func(text?.toNativeUtf8() ?? ffi.nullptr,
        parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } // associatedObjects() const
  QList associatedObjects() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QAction__associatedObjects')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QList<QObject>.fromCppPointer(result, true);
  } // autoRepeat() const

  bool autoRepeat() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QAction__autoRepeat')
        .asFunction();
    return func(thisCpp) != 0;
  } // changed()

  changed() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAction__changed')
        .asFunction();
    func(thisCpp);
  }

  void onChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>('c_QAction__onChanged')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onChanged_callback);
    final callbackMethod = onChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAction;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onChanged_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // checkableChanged(bool checkable)

  checkableChanged(bool checkable) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QAction__checkableChanged_bool')
        .asFunction();
    func(thisCpp, checkable ? 1 : 0);
  }

  void onCheckableChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QAction__onCheckableChanged_bool')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onCheckableChanged_callback);
    final callbackMethod = onCheckableChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onCheckableChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAction;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onCheckableChanged_callback] ??
            [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAction;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAction::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  } // data() const

  QVariant data() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QAction__data')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QVariant.fromCppPointer(result, true);
  } // enabledChanged(bool enabled)

  enabledChanged(bool enabled) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QAction__enabledChanged_bool')
        .asFunction();
    func(thisCpp, enabled ? 1 : 0);
  }

  void onEnabledChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QAction__onEnabledChanged_bool')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onEnabledChanged_callback);
    final callbackMethod = onEnabledChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onEnabledChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAction;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onEnabledChanged_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAction;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAction::event(QEvent * arg__1)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAction;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAction::eventFilter(QObject * watched, QEvent * event)! (${thisCpp.address})");
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
  } // font() const

  QFont font() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QAction__font')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QFont.fromCppPointer(result, true);
  } // hover()

  hover() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>('c_QAction__hover')
        .asFunction();
    func(thisCpp);
  } // hovered()

  hovered() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAction__hovered')
        .asFunction();
    func(thisCpp);
  }

  void onHovered(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>('c_QAction__onHovered')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onHovered_callback);
    final callbackMethod = onHovered_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onHovered_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAction;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onHovered_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // icon() const

  QIcon icon() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QAction__icon')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QIcon.fromCppPointer(result, true);
  } // iconText() const

  QString iconText() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QAction__iconText')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // isCheckable() const

  bool isCheckable() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QAction__isCheckable')
        .asFunction();
    return func(thisCpp) != 0;
  } // isChecked() const

  bool isChecked() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QAction__isChecked')
        .asFunction();
    return func(thisCpp) != 0;
  } // isEnabled() const

  bool isEnabled() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QAction__isEnabled')
        .asFunction();
    return func(thisCpp) != 0;
  } // isIconVisibleInMenu() const

  bool isIconVisibleInMenu() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QAction__isIconVisibleInMenu')
        .asFunction();
    return func(thisCpp) != 0;
  } // isSeparator() const

  bool isSeparator() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QAction__isSeparator')
        .asFunction();
    return func(thisCpp) != 0;
  } // isShortcutVisibleInContextMenu() const

  bool isShortcutVisibleInContextMenu() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QAction__isShortcutVisibleInContextMenu')
        .asFunction();
    return func(thisCpp) != 0;
  } // isVisible() const

  bool isVisible() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QAction__isVisible')
        .asFunction();
    return func(thisCpp) != 0;
  } // menuObject() const

  QObject menuObject() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QAction__menuObject')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QObject.fromCppPointer(result, false);
  } // resetEnabled()

  resetEnabled() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAction__resetEnabled')
        .asFunction();
    func(thisCpp);
  } // setAutoRepeat(bool arg__1)

  setAutoRepeat(bool arg__1) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QAction__setAutoRepeat_bool')
        .asFunction();
    func(thisCpp, arg__1 ? 1 : 0);
  } // setCheckable(bool arg__1)

  setCheckable(bool arg__1) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QAction__setCheckable_bool')
        .asFunction();
    func(thisCpp, arg__1 ? 1 : 0);
  } // setChecked(bool arg__1)

  setChecked(bool arg__1) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QAction__setChecked_bool')
        .asFunction();
    func(thisCpp, arg__1 ? 1 : 0);
  } // setData(const QVariant & var)

  setData(QVariant var_dart) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QAction__setData_QVariant')
        .asFunction();
    func(thisCpp, var_dart == null ? ffi.nullptr : var_dart.thisCpp);
  } // setDisabled(bool b)

  setDisabled(bool b) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QAction__setDisabled_bool')
        .asFunction();
    func(thisCpp, b ? 1 : 0);
  } // setEnabled(bool arg__1)

  setEnabled(bool arg__1) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QAction__setEnabled_bool')
        .asFunction();
    func(thisCpp, arg__1 ? 1 : 0);
  } // setFont(const QFont & font)

  setFont(QFont? font) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QAction__setFont_QFont')
        .asFunction();
    func(thisCpp, font == null ? ffi.nullptr : font.thisCpp);
  } // setIcon(const QIcon & icon)

  setIcon(QIcon icon) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QAction__setIcon_QIcon')
        .asFunction();
    func(thisCpp, icon == null ? ffi.nullptr : icon.thisCpp);
  } // setIconText(const QString & text)

  setIconText(String? text) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QAction__setIconText_QString')
        .asFunction();
    func(thisCpp, text?.toNativeUtf8() ?? ffi.nullptr);
  } // setIconVisibleInMenu(bool visible)

  setIconVisibleInMenu(bool visible) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QAction__setIconVisibleInMenu_bool')
        .asFunction();
    func(thisCpp, visible ? 1 : 0);
  } // setMenuObject(QObject * object)

  setMenuObject(QObject? object) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QAction__setMenuObject_QObject')
        .asFunction();
    func(thisCpp, object == null ? ffi.nullptr : object.thisCpp);
  } // setSeparator(bool b)

  setSeparator(bool b) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QAction__setSeparator_bool')
        .asFunction();
    func(thisCpp, b ? 1 : 0);
  } // setShortcut(const QKeySequence & shortcut)

  setShortcut(QKeySequence? shortcut) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QAction__setShortcut_QKeySequence')
        .asFunction();
    func(thisCpp, shortcut == null ? ffi.nullptr : shortcut.thisCpp);
  } // setShortcutVisibleInContextMenu(bool show)

  setShortcutVisibleInContextMenu(bool show) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QAction__setShortcutVisibleInContextMenu_bool')
        .asFunction();
    func(thisCpp, show ? 1 : 0);
  } // setShortcuts(QKeySequence::StandardKey arg__1)

  setShortcuts(int arg__1) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QAction__setShortcuts_StandardKey')
        .asFunction();
    func(thisCpp, arg__1);
  } // setShortcuts(const QList<QKeySequence > & shortcuts)

  setShortcuts_2(QList? shortcuts) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QAction__setShortcuts_QList_QKeySequence')
        .asFunction();
    func(thisCpp, shortcuts == null ? ffi.nullptr : shortcuts.thisCpp);
  } // setStatusTip(const QString & statusTip)

  setStatusTip(String? statusTip) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QAction__setStatusTip_QString')
        .asFunction();
    func(thisCpp, statusTip?.toNativeUtf8() ?? ffi.nullptr);
  } // setText(const QString & text)

  setText(String? text) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QAction__setText_QString')
        .asFunction();
    func(thisCpp, text?.toNativeUtf8() ?? ffi.nullptr);
  } // setToolTip(const QString & tip)

  setToolTip(String? tip) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QAction__setToolTip_QString')
        .asFunction();
    func(thisCpp, tip?.toNativeUtf8() ?? ffi.nullptr);
  } // setVisible(bool arg__1)

  setVisible(bool arg__1) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QAction__setVisible_bool')
        .asFunction();
    func(thisCpp, arg__1 ? 1 : 0);
  } // setWhatsThis(const QString & what)

  setWhatsThis(String? what) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QAction__setWhatsThis_QString')
        .asFunction();
    func(thisCpp, what?.toNativeUtf8() ?? ffi.nullptr);
  } // shortcut() const

  QKeySequence shortcut() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QAction__shortcut')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QKeySequence.fromCppPointer(result, true);
  } // shortcuts() const

  QList shortcuts() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QAction__shortcuts')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QList<QKeySequence>.fromCppPointer(result, true);
  } // showStatusText(QObject * object)

  bool showStatusText({required QObject? object}) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_QAction__showStatusText_QObject')
        .asFunction();
    return func(thisCpp, object == null ? ffi.nullptr : object.thisCpp) != 0;
  } // statusTip() const

  QString statusTip() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QAction__statusTip')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // text() const

  QString text() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QAction__text')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // toggle()

  toggle() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>('c_QAction__toggle')
        .asFunction();
    func(thisCpp);
  } // toggled(bool arg__1)

  toggled(bool arg__1) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QAction__toggled_bool')
        .asFunction();
    func(thisCpp, arg__1 ? 1 : 0);
  }

  void onToggled(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QAction__onToggled_bool')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onToggled_callback);
    final callbackMethod = onToggled_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onToggled_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAction;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onToggled_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // toolTip() const

  QString toolTip() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QAction__toolTip')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QAction__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  } // trigger()

  trigger() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAction__trigger')
        .asFunction();
    func(thisCpp);
  } // triggered(bool checked)

  triggered({bool checked = false}) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QAction__triggered_bool')
        .asFunction();
    func(thisCpp, checked ? 1 : 0);
  }

  void onTriggered(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QAction__onTriggered_bool')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onTriggered_callback);
    final callbackMethod = onTriggered_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onTriggered_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAction;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onTriggered_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // visibleChanged()

  visibleChanged() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAction__visibleChanged')
        .asFunction();
    func(thisCpp);
  }

  void onVisibleChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QAction__onVisibleChanged')
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAction;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onVisibleChanged_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // whatsThis() const

  QString whatsThis() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QAction__whatsThis')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAction__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 946:
        return "c_QAction__customEvent_QEvent";
      case 956:
        return "c_QAction__event_QEvent";
      case 957:
        return "c_QAction__eventFilter_QObject_QEvent";
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
            'c_QAction__registerVirtualMethodCallback')
        .asFunction();
    final callback946 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QObject.customEvent_calledFromC);
    registerCallback(thisCpp, callback946, 946);
    const callbackExcept956 = 0;
    final callback956 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_FFI>(
            QAction.event_calledFromC, callbackExcept956);
    registerCallback(thisCpp, callback956, 956);
    const callbackExcept957 = 0;
    final callback957 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_voidstar_FFI>(
            QObject.eventFilter_calledFromC, callbackExcept957);
    registerCallback(thisCpp, callback957, 957);
  }
}
