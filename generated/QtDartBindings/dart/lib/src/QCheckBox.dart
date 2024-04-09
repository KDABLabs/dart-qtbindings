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

class QCheckBox extends QAbstractButton {
  QCheckBox.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QCheckBox.init() : super.init() {}
  factory QCheckBox.fromCache(var cppPointer, [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QCheckBox;
    }
    return QCheckBox.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QCheckBox_Finalizer";
  } //QCheckBox(QWidget * parent)

  QCheckBox({required QWidget? parent}) : super.init() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QCheckBox__constructor_QWidget')
        .asFunction();
    thisCpp = func(parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } //QCheckBox(const QString & text, QWidget * parent)
  QCheckBox.ctor2(String? text, {required QWidget? parent}) : super.init() {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QCheckBox__constructor_QString_QWidget')
        .asFunction();
    thisCpp = func(text?.toNativeUtf8() ?? ffi.nullptr,
        parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  }
  static void changeEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? e) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QCheckBox;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QCheckBox::changeEvent(QEvent * e)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.changeEvent(
        (e == null || e.address == 0) ? null : QEvent.fromCppPointer(e));
  }

  static void checkStateSet_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QCheckBox;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QCheckBox::checkStateSet()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.checkStateSet();
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QCheckBox;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QCheckBox::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  }

  static int devType_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QCheckBox;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QCheckBox::devType() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.devType();
    return result;
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? e) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QCheckBox;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QCheckBox::event(QEvent * e)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance
        .event((e == null || e.address == 0) ? null : QEvent.fromCppPointer(e));
    return result ? 1 : 0;
  }

  static int eventFilter_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void>? watched, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QCheckBox;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QCheckBox::eventFilter(QObject * watched, QEvent * event)! (${thisCpp.address})");
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

  static int focusNextPrevChild_calledFromC(
      ffi.Pointer<void> thisCpp, int next) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QCheckBox;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QCheckBox::focusNextPrevChild(bool next)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.focusNextPrevChild(next != 0);
    return result ? 1 : 0;
  }

  static int hasHeightForWidth_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QCheckBox;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QCheckBox::hasHeightForWidth() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.hasHeightForWidth();
    return result ? 1 : 0;
  }

  static int heightForWidth_calledFromC(ffi.Pointer<void> thisCpp, int arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QCheckBox;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QCheckBox::heightForWidth(int arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.heightForWidth(arg__1);
    return result;
  }

  static int hitButton_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? pos) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QCheckBox;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QCheckBox::hitButton(const QPoint & pos) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.hitButton(
        (pos == null || pos.address == 0) ? null : QPoint.fromCppPointer(pos));
    return result ? 1 : 0;
  }

  static void initPainter_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? painter) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QCheckBox;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QCheckBox::initPainter(QPainter * painter) const! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.initPainter((painter == null || painter.address == 0)
        ? null
        : QPainter.fromCppPointer(painter));
  } // isTristate() const

  bool isTristate() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QCheckBox__isTristate')
        .asFunction();
    return func(thisCpp) != 0;
  }

  static void leaveEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QCheckBox;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QCheckBox::leaveEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.leaveEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  }

  static ffi.Pointer<void> minimumSizeHint_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QCheckBox;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QCheckBox::minimumSizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.minimumSizeHint();
    return result.thisCpp;
  }

  static void mouseDoubleClickEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QCheckBox;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QCheckBox::mouseDoubleClickEvent(QMouseEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseDoubleClickEvent((event == null || event.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(event));
  }

  static void mouseMoveEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QCheckBox;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QCheckBox::mouseMoveEvent(QMouseEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseMoveEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(arg__1));
  }

  static void mousePressEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? e) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QCheckBox;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QCheckBox::mousePressEvent(QMouseEvent * e)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mousePressEvent(
        (e == null || e.address == 0) ? null : QMouseEvent.fromCppPointer(e));
  }

  static void mouseReleaseEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? e) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QCheckBox;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QCheckBox::mouseReleaseEvent(QMouseEvent * e)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseReleaseEvent(
        (e == null || e.address == 0) ? null : QMouseEvent.fromCppPointer(e));
  }

  static void nextCheckState_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QCheckBox;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QCheckBox::nextCheckState()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.nextCheckState();
  }

  static void paintEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QCheckBox;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QCheckBox::paintEvent(QPaintEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.paintEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QPaintEvent.fromCppPointer(arg__1));
  } // setTristate(bool y)

  setTristate({bool y = true}) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QCheckBox__setTristate_bool')
        .asFunction();
    func(thisCpp, y ? 1 : 0);
  }

  static void setVisible_calledFromC(ffi.Pointer<void> thisCpp, int visible) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QCheckBox;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QCheckBox::setVisible(bool visible)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setVisible(visible != 0);
  }

  static ffi.Pointer<void> sharedPainter_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QCheckBox;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QCheckBox::sharedPainter() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sharedPainter();
    return result.thisCpp;
  }

  static ffi.Pointer<void> sizeHint_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QCheckBox;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QCheckBox::sizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sizeHint();
    return result.thisCpp;
  } // stateChanged(int arg__1)

  stateChanged(int arg__1) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QCheckBox__stateChanged_int')
        .asFunction();
    func(thisCpp, arg__1);
  }

  void onStateChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QCheckBox__onStateChanged_int')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onStateChanged_callback);
    final callbackMethod = onStateChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onStateChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QCheckBox;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onStateChanged_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QCheckBox__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QCheckBox__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 1128:
        return "c_QCheckBox__changeEvent_QEvent";
      case 6040:
        return "c_QCheckBox__checkStateSet";
      case 946:
        return "c_QCheckBox__customEvent_QEvent";
      case 1145:
        return "c_QCheckBox__devType";
      case 956:
        return "c_QCheckBox__event_QEvent";
      case 957:
        return "c_QCheckBox__eventFilter_QObject_QEvent";
      case 1155:
        return "c_QCheckBox__focusNextPrevChild_bool";
      case 1169:
        return "c_QCheckBox__hasHeightForWidth";
      case 1173:
        return "c_QCheckBox__heightForWidth_int";
      case 6075:
        return "c_QCheckBox__hitButton_QPoint";
      case 1176:
        return "c_QCheckBox__initPainter_QPainter";
      case 1202:
        return "c_QCheckBox__leaveEvent_QEvent";
      case 1222:
        return "c_QCheckBox__minimumSizeHint";
      case 1224:
        return "c_QCheckBox__mouseDoubleClickEvent_QMouseEvent";
      case 1226:
        return "c_QCheckBox__mouseMoveEvent_QMouseEvent";
      case 1227:
        return "c_QCheckBox__mousePressEvent_QMouseEvent";
      case 1228:
        return "c_QCheckBox__mouseReleaseEvent_QMouseEvent";
      case 6125:
        return "c_QCheckBox__nextCheckState";
      case 1235:
        return "c_QCheckBox__paintEvent_QPaintEvent";
      case 1314:
        return "c_QCheckBox__setVisible_bool";
      case 1323:
        return "c_QCheckBox__sharedPainter";
      case 1331:
        return "c_QCheckBox__sizeHint";
    }
    return super.cFunctionSymbolName(methodId);
  }

  static String methodNameFromId(int methodId) {
    switch (methodId) {
      case 1128:
        return "changeEvent";
      case 6040:
        return "checkStateSet";
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
      case 6075:
        return "hitButton";
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
      case 6125:
        return "nextCheckState";
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
            'c_QCheckBox__registerVirtualMethodCallback')
        .asFunction();
    final callback1128 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractButton.changeEvent_calledFromC);
    registerCallback(thisCpp, callback1128, 1128);
    final callback6040 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QCheckBox.checkStateSet_calledFromC);
    registerCallback(thisCpp, callback6040, 6040);
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
            QCheckBox.event_calledFromC, callbackExcept956);
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
    const callbackExcept6075 = 0;
    final callback6075 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_FFI>(
            QCheckBox.hitButton_calledFromC, callbackExcept6075);
    registerCallback(thisCpp, callback6075, 6075);
    final callback1176 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QWidget.initPainter_calledFromC);
    registerCallback(thisCpp, callback1176, 1176);
    final callback1202 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QWidget.leaveEvent_calledFromC);
    registerCallback(thisCpp, callback1202, 1202);
    final callback1222 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QCheckBox.minimumSizeHint_calledFromC);
    registerCallback(thisCpp, callback1222, 1222);
    final callback1224 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QWidget.mouseDoubleClickEvent_calledFromC);
    registerCallback(thisCpp, callback1224, 1224);
    final callback1226 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QCheckBox.mouseMoveEvent_calledFromC);
    registerCallback(thisCpp, callback1226, 1226);
    final callback1227 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractButton.mousePressEvent_calledFromC);
    registerCallback(thisCpp, callback1227, 1227);
    final callback1228 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractButton.mouseReleaseEvent_calledFromC);
    registerCallback(thisCpp, callback1228, 1228);
    final callback6125 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QCheckBox.nextCheckState_calledFromC);
    registerCallback(thisCpp, callback6125, 6125);
    final callback1235 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QCheckBox.paintEvent_calledFromC);
    registerCallback(thisCpp, callback1235, 1235);
    final callback1314 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int8_FFI>(
            QWidget.setVisible_calledFromC);
    registerCallback(thisCpp, callback1314, 1314);
    final callback1323 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QWidget.sharedPainter_calledFromC);
    registerCallback(thisCpp, callback1323, 1323);
    final callback1331 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QCheckBox.sizeHint_calledFromC);
    registerCallback(thisCpp, callback1331, 1331);
  }
}
