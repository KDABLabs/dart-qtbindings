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
final _finalizerFunc = (String name) {
  return _dylib
      .lookup<ffi.NativeFunction<ffi.Void Function(ffi.Pointer)>>(name);
};

Map<String, ffi.NativeFinalizer> _finalizers = {};

class QObject implements ffi.Finalizable {
  Map<Function, List<Function>> signalHandlerersBySignal = {};
  static var s_dartInstanceByCppPtr = Map<int, QObject>();
  var _thisCpp = null;
  bool _needsAutoDelete = false;
  get thisCpp => _thisCpp;
  set thisCpp(var ptr) {
    _thisCpp = ptr;
    ffi.Pointer<ffi.Void> ptrvoid = ptr.cast<ffi.Void>();
    if (_needsAutoDelete) {
      final String finalizerName = getFinalizerName();
      if (!_finalizers.keys.contains(runtimeType)) {
        _finalizers[finalizerName] =
            ffi.NativeFinalizer(_finalizerFunc(finalizerName).cast());
      }
      _finalizers[finalizerName]!.attach(this, ptrvoid);
    }
  }

  static bool isCached(var cppPointer) {
    return s_dartInstanceByCppPtr.containsKey(cppPointer.address);
  }

  factory QObject.fromCache(var cppPointer, [needsAutoDelete = false]) {
    return (s_dartInstanceByCppPtr[cppPointer.address] ??
        QObject.fromCppPointer(cppPointer, needsAutoDelete)) as QObject;
  }
  QObject.fromCppPointer(var cppPointer, [this._needsAutoDelete = false]) {
    thisCpp = cppPointer;
  }
  QObject.init() {}
  String getFinalizerName() {
    return "c_QObject_Finalizer";
  } //QObject(QObject * parent)

  QObject({required QObject? parent}) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QObject__constructor_QObject')
        .asFunction();
    thisCpp = func(parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } // blockSignals(bool b)
  bool blockSignals(bool b) {
    final bool_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_ffi_Int8_FFI>>(
            'c_QObject__blockSignals_bool')
        .asFunction();
    return func(thisCpp, b ? 1 : 0) != 0;
  } // children() const

  QList children() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QObject__children')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QList<QObject>.fromCppPointer(result, false);
  } // customEvent(QEvent * event)

  customEvent(QEvent? event) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(946))
        .asFunction();
    func(thisCpp, event == null ? ffi.nullptr : event.thisCpp);
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address];
    if (dartInstance == null) {
      print(
          "Dart instance not found for QObject::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  } // deleteLater()

  deleteLater() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QObject__deleteLater')
        .asFunction();
    func(thisCpp);
  } // destroyed(QObject * arg__1)

  destroyed({required QObject? arg__1}) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QObject__destroyed_QObject')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  }

  void onDestroyed(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QObject__onDestroyed_QObject')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onDestroyed_callback);
    final callbackMethod = onDestroyed_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onDestroyed_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QObject;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onDestroyed_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // disconnect(const QObject * receiver, const char * member) const

  bool disconnect(QObject? receiver, {String? member}) {
    final bool_Func_voidstar_voidstar_string func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_string_FFI>>(
            'c_QObject__disconnect_QObject_char')
        .asFunction();
    return func(thisCpp, receiver == null ? ffi.nullptr : receiver.thisCpp,
            member?.toNativeUtf8() ?? ffi.nullptr) !=
        0;
  }

  static // disconnect(const QObject * sender, const char * signal, const QObject * receiver, const char * member)
      bool disconnect_2(
          QObject? sender, String? signal, QObject? receiver, String? member) {
    final bool_Func_voidstar_string_voidstar_string func = _dylib
        .lookup<
                ffi
                .NativeFunction<bool_Func_voidstar_string_voidstar_string_FFI>>(
            'c_static_QObject__disconnect_QObject_char_QObject_char')
        .asFunction();
    return func(
            sender == null ? ffi.nullptr : sender.thisCpp,
            signal?.toNativeUtf8() ?? ffi.nullptr,
            receiver == null ? ffi.nullptr : receiver.thisCpp,
            member?.toNativeUtf8() ?? ffi.nullptr) !=
        0;
  } // disconnect(const char * signal, const QObject * receiver, const char * member) const

  bool disconnect_3(
      {String? signal, required QObject? receiver, String? member}) {
    final bool_Func_voidstar_string_voidstar_string func = _dylib
        .lookup<
                ffi
                .NativeFunction<bool_Func_voidstar_string_voidstar_string_FFI>>(
            'c_QObject__disconnect_char_QObject_char')
        .asFunction();
    return func(
            thisCpp,
            signal?.toNativeUtf8() ?? ffi.nullptr,
            receiver == null ? ffi.nullptr : receiver.thisCpp,
            member?.toNativeUtf8() ?? ffi.nullptr) !=
        0;
  } // doSetObjectName(const QString & name)

  doSetObjectName(String? name) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QObject__doSetObjectName_QString')
        .asFunction();
    func(thisCpp, name?.toNativeUtf8() ?? ffi.nullptr);
  } // dumpObjectInfo() const

  dumpObjectInfo() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QObject__dumpObjectInfo')
        .asFunction();
    func(thisCpp);
  } // dumpObjectTree() const

  dumpObjectTree() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QObject__dumpObjectTree')
        .asFunction();
    func(thisCpp);
  } // dynamicPropertyNames() const

  QList dynamicPropertyNames() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QObject__dynamicPropertyNames')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QList<QByteArray>.fromCppPointer(result, true);
  } // event(QEvent * event)

  bool event(QEvent? event) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(956))
        .asFunction();
    return func(thisCpp, event == null ? ffi.nullptr : event.thisCpp) != 0;
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address];
    if (dartInstance == null) {
      print(
          "Dart instance not found for QObject::event(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.event((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
    return result ? 1 : 0;
  } // eventFilter(QObject * watched, QEvent * event)

  bool eventFilter(QObject? watched, QEvent? event) {
    final bool_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(957))
        .asFunction();
    return func(thisCpp, watched == null ? ffi.nullptr : watched.thisCpp,
            event == null ? ffi.nullptr : event.thisCpp) !=
        0;
  }

  static int eventFilter_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void>? watched, ffi.Pointer<void>? event) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address];
    if (dartInstance == null) {
      print(
          "Dart instance not found for QObject::eventFilter(QObject * watched, QEvent * event)! (${thisCpp.address})");
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
  } // inherits(const char * classname) const

  bool inherits(String? classname) {
    final bool_Func_voidstar_string func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_string_FFI>>(
            'c_QObject__inherits_char')
        .asFunction();
    return func(thisCpp, classname?.toNativeUtf8() ?? ffi.nullptr) != 0;
  } // installEventFilter(QObject * filterObj)

  installEventFilter(QObject? filterObj) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QObject__installEventFilter_QObject')
        .asFunction();
    func(thisCpp, filterObj == null ? ffi.nullptr : filterObj.thisCpp);
  } // isQuickItemType() const

  bool isQuickItemType() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QObject__isQuickItemType')
        .asFunction();
    return func(thisCpp) != 0;
  } // isWidgetType() const

  bool isWidgetType() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QObject__isWidgetType')
        .asFunction();
    return func(thisCpp) != 0;
  } // isWindowType() const

  bool isWindowType() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QObject__isWindowType')
        .asFunction();
    return func(thisCpp) != 0;
  } // killTimer(int id)

  killTimer(int id) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QObject__killTimer_int')
        .asFunction();
    func(thisCpp, id);
  } // objectName() const

  QString objectName() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QObject__objectName')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // parent() const

  QObject parent() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QObject__parent')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QObject.fromCppPointer(result, false);
  } // property(const char * name) const

  QVariant property(String? name) {
    final voidstar_Func_voidstar_string func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_string_FFI>>(
            'c_QObject__property_char')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, name?.toNativeUtf8() ?? ffi.nullptr);
    return QVariant.fromCppPointer(result, true);
  } // receivers(const char * signal) const

  int receivers(String? signal) {
    final int_Func_voidstar_string func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_string_FFI>>(
            'c_QObject__receivers_char')
        .asFunction();
    return func(thisCpp, signal?.toNativeUtf8() ?? ffi.nullptr);
  } // removeEventFilter(QObject * obj)

  removeEventFilter(QObject? obj) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QObject__removeEventFilter_QObject')
        .asFunction();
    func(thisCpp, obj == null ? ffi.nullptr : obj.thisCpp);
  } // sender() const

  QObject sender() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QObject__sender')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QObject.fromCppPointer(result, false);
  } // senderSignalIndex() const

  int senderSignalIndex() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QObject__senderSignalIndex')
        .asFunction();
    return func(thisCpp);
  } // setParent(QObject * parent)

  setParent(QObject? parent) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QObject__setParent_QObject')
        .asFunction();
    func(thisCpp, parent == null ? ffi.nullptr : parent.thisCpp);
  } // setProperty(const char * name, const QVariant & value)

  bool setProperty(String? name, QVariant value) {
    final bool_Func_voidstar_string_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_string_voidstar_FFI>>(
            'c_QObject__setProperty_char_QVariant')
        .asFunction();
    return func(thisCpp, name?.toNativeUtf8() ?? ffi.nullptr,
            value == null ? ffi.nullptr : value.thisCpp) !=
        0;
  } // signalsBlocked() const

  bool signalsBlocked() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QObject__signalsBlocked')
        .asFunction();
    return func(thisCpp) != 0;
  } // startTimer(int interval)

  int startTimer(int interval) {
    final int_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_ffi_Int32_FFI>>(
            'c_QObject__startTimer_int')
        .asFunction();
    return func(thisCpp, interval);
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QObject__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QObject__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 946:
        return "c_QObject__customEvent_QEvent";
      case 956:
        return "c_QObject__event_QEvent";
      case 957:
        return "c_QObject__eventFilter_QObject_QEvent";
    }
    return "";
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
            'c_QObject__registerVirtualMethodCallback')
        .asFunction();
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
  }
}
