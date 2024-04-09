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

class QAbstractButton extends QWidget {
  QAbstractButton.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QAbstractButton.init() : super.init() {}
  factory QAbstractButton.fromCache(var cppPointer, [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QAbstractButton;
    }
    return QAbstractButton.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QAbstractButton_Finalizer";
  } //QAbstractButton(QWidget * parent)

  QAbstractButton({required QWidget? parent}) : super.init() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QAbstractButton__constructor_QWidget')
        .asFunction();
    thisCpp = func(parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } // animateClick()
  animateClick() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAbstractButton__animateClick')
        .asFunction();
    func(thisCpp);
  } // autoExclusive() const

  bool autoExclusive() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QAbstractButton__autoExclusive')
        .asFunction();
    return func(thisCpp) != 0;
  } // autoRepeat() const

  bool autoRepeat() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QAbstractButton__autoRepeat')
        .asFunction();
    return func(thisCpp) != 0;
  } // autoRepeatDelay() const

  int autoRepeatDelay() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QAbstractButton__autoRepeatDelay')
        .asFunction();
    return func(thisCpp);
  } // autoRepeatInterval() const

  int autoRepeatInterval() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QAbstractButton__autoRepeatInterval')
        .asFunction();
    return func(thisCpp);
  }

  static void changeEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? e) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractButton;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractButton::changeEvent(QEvent * e)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.changeEvent(
        (e == null || e.address == 0) ? null : QEvent.fromCppPointer(e));
  } // checkStateSet()

  checkStateSet() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            cFunctionSymbolName(6040))
        .asFunction();
    func(thisCpp);
  }

  static void checkStateSet_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractButton;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractButton::checkStateSet()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.checkStateSet();
  } // click()

  click() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAbstractButton__click')
        .asFunction();
    func(thisCpp);
  } // clicked(bool checked)

  clicked({bool checked = false}) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QAbstractButton__clicked_bool')
        .asFunction();
    func(thisCpp, checked ? 1 : 0);
  }

  void onClicked(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QAbstractButton__onClicked_bool')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onClicked_callback);
    final callbackMethod = onClicked_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onClicked_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractButton;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onClicked_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractButton;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractButton::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  }

  static int devType_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractButton;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractButton::devType() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.devType();
    return result;
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? e) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractButton;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractButton::event(QEvent * e)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance
        .event((e == null || e.address == 0) ? null : QEvent.fromCppPointer(e));
    return result ? 1 : 0;
  }

  static int eventFilter_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void>? watched, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractButton;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractButton::eventFilter(QObject * watched, QEvent * event)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractButton;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractButton::focusNextPrevChild(bool next)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.focusNextPrevChild(next != 0);
    return result ? 1 : 0;
  }

  static int hasHeightForWidth_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractButton;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractButton::hasHeightForWidth() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.hasHeightForWidth();
    return result ? 1 : 0;
  }

  static int heightForWidth_calledFromC(ffi.Pointer<void> thisCpp, int arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractButton;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractButton::heightForWidth(int arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.heightForWidth(arg__1);
    return result;
  } // hitButton(const QPoint & pos) const

  bool hitButton(QPoint? pos) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(6075))
        .asFunction();
    return func(thisCpp, pos == null ? ffi.nullptr : pos.thisCpp) != 0;
  }

  static int hitButton_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? pos) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractButton;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractButton::hitButton(const QPoint & pos) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.hitButton(
        (pos == null || pos.address == 0) ? null : QPoint.fromCppPointer(pos));
    return result ? 1 : 0;
  } // icon() const

  QIcon icon() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QAbstractButton__icon')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QIcon.fromCppPointer(result, true);
  } // iconSize() const

  QSize iconSize() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QAbstractButton__iconSize')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QSize.fromCppPointer(result, true);
  }

  static void initPainter_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? painter) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractButton;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractButton::initPainter(QPainter * painter) const! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.initPainter((painter == null || painter.address == 0)
        ? null
        : QPainter.fromCppPointer(painter));
  } // isCheckable() const

  bool isCheckable() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QAbstractButton__isCheckable')
        .asFunction();
    return func(thisCpp) != 0;
  } // isChecked() const

  bool isChecked() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QAbstractButton__isChecked')
        .asFunction();
    return func(thisCpp) != 0;
  } // isDown() const

  bool isDown() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QAbstractButton__isDown')
        .asFunction();
    return func(thisCpp) != 0;
  }

  static void leaveEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractButton;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractButton::leaveEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.leaveEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  }

  static ffi.Pointer<void> minimumSizeHint_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractButton;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractButton::minimumSizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.minimumSizeHint();
    return result.thisCpp;
  }

  static void mouseDoubleClickEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractButton;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractButton::mouseDoubleClickEvent(QMouseEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseDoubleClickEvent((event == null || event.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(event));
  }

  static void mouseMoveEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? e) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractButton;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractButton::mouseMoveEvent(QMouseEvent * e)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseMoveEvent(
        (e == null || e.address == 0) ? null : QMouseEvent.fromCppPointer(e));
  }

  static void mousePressEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? e) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractButton;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractButton::mousePressEvent(QMouseEvent * e)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mousePressEvent(
        (e == null || e.address == 0) ? null : QMouseEvent.fromCppPointer(e));
  }

  static void mouseReleaseEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? e) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractButton;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractButton::mouseReleaseEvent(QMouseEvent * e)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseReleaseEvent(
        (e == null || e.address == 0) ? null : QMouseEvent.fromCppPointer(e));
  } // nextCheckState()

  nextCheckState() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            cFunctionSymbolName(6125))
        .asFunction();
    func(thisCpp);
  }

  static void nextCheckState_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractButton;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractButton::nextCheckState()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.nextCheckState();
  } // paintEvent(QPaintEvent * e)

  paintEvent(QPaintEvent? e) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1235))
        .asFunction();
    func(thisCpp, e == null ? ffi.nullptr : e.thisCpp);
  }

  static void paintEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? e) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractButton;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractButton::paintEvent(QPaintEvent * e)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.paintEvent(
        (e == null || e.address == 0) ? null : QPaintEvent.fromCppPointer(e));
  } // pressed()

  pressed() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAbstractButton__pressed')
        .asFunction();
    func(thisCpp);
  }

  void onPressed(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QAbstractButton__onPressed')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onPressed_callback);
    final callbackMethod = onPressed_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onPressed_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractButton;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onPressed_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // released()

  released() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAbstractButton__released')
        .asFunction();
    func(thisCpp);
  }

  void onReleased(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QAbstractButton__onReleased')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onReleased_callback);
    final callbackMethod = onReleased_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onReleased_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractButton;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onReleased_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // setAutoExclusive(bool arg__1)

  setAutoExclusive(bool arg__1) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QAbstractButton__setAutoExclusive_bool')
        .asFunction();
    func(thisCpp, arg__1 ? 1 : 0);
  } // setAutoRepeat(bool arg__1)

  setAutoRepeat(bool arg__1) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QAbstractButton__setAutoRepeat_bool')
        .asFunction();
    func(thisCpp, arg__1 ? 1 : 0);
  } // setAutoRepeatDelay(int arg__1)

  setAutoRepeatDelay(int arg__1) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QAbstractButton__setAutoRepeatDelay_int')
        .asFunction();
    func(thisCpp, arg__1);
  } // setAutoRepeatInterval(int arg__1)

  setAutoRepeatInterval(int arg__1) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QAbstractButton__setAutoRepeatInterval_int')
        .asFunction();
    func(thisCpp, arg__1);
  } // setCheckable(bool arg__1)

  setCheckable(bool arg__1) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QAbstractButton__setCheckable_bool')
        .asFunction();
    func(thisCpp, arg__1 ? 1 : 0);
  } // setChecked(bool arg__1)

  setChecked(bool arg__1) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QAbstractButton__setChecked_bool')
        .asFunction();
    func(thisCpp, arg__1 ? 1 : 0);
  } // setDown(bool arg__1)

  setDown(bool arg__1) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QAbstractButton__setDown_bool')
        .asFunction();
    func(thisCpp, arg__1 ? 1 : 0);
  } // setIcon(const QIcon & icon)

  setIcon(QIcon icon) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QAbstractButton__setIcon_QIcon')
        .asFunction();
    func(thisCpp, icon == null ? ffi.nullptr : icon.thisCpp);
  } // setIconSize(const QSize & size)

  setIconSize(QSize? size) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QAbstractButton__setIconSize_QSize')
        .asFunction();
    func(thisCpp, size == null ? ffi.nullptr : size.thisCpp);
  } // setShortcut(const QKeySequence & key)

  setShortcut(QKeySequence? key) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QAbstractButton__setShortcut_QKeySequence')
        .asFunction();
    func(thisCpp, key == null ? ffi.nullptr : key.thisCpp);
  } // setText(const QString & text)

  setText(String? text) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QAbstractButton__setText_QString')
        .asFunction();
    func(thisCpp, text?.toNativeUtf8() ?? ffi.nullptr);
  }

  static void setVisible_calledFromC(ffi.Pointer<void> thisCpp, int visible) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractButton;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractButton::setVisible(bool visible)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setVisible(visible != 0);
  }

  static ffi.Pointer<void> sharedPainter_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractButton;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractButton::sharedPainter() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sharedPainter();
    return result.thisCpp;
  } // shortcut() const

  QKeySequence shortcut() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QAbstractButton__shortcut')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QKeySequence.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> sizeHint_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractButton;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QAbstractButton::sizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sizeHint();
    return result.thisCpp;
  } // text() const

  QString text() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QAbstractButton__text')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // toggle()

  toggle() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAbstractButton__toggle')
        .asFunction();
    func(thisCpp);
  } // toggled(bool checked)

  toggled(bool checked) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QAbstractButton__toggled_bool')
        .asFunction();
    func(thisCpp, checked ? 1 : 0);
  }

  void onToggled(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QAbstractButton__onToggled_bool')
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QAbstractButton;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onToggled_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QAbstractButton__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QAbstractButton__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 1128:
        return "c_QAbstractButton__changeEvent_QEvent";
      case 6040:
        return "c_QAbstractButton__checkStateSet";
      case 946:
        return "c_QAbstractButton__customEvent_QEvent";
      case 1145:
        return "c_QAbstractButton__devType";
      case 956:
        return "c_QAbstractButton__event_QEvent";
      case 957:
        return "c_QAbstractButton__eventFilter_QObject_QEvent";
      case 1155:
        return "c_QAbstractButton__focusNextPrevChild_bool";
      case 1169:
        return "c_QAbstractButton__hasHeightForWidth";
      case 1173:
        return "c_QAbstractButton__heightForWidth_int";
      case 6075:
        return "c_QAbstractButton__hitButton_QPoint";
      case 1176:
        return "c_QAbstractButton__initPainter_QPainter";
      case 1202:
        return "c_QAbstractButton__leaveEvent_QEvent";
      case 1222:
        return "c_QAbstractButton__minimumSizeHint";
      case 1224:
        return "c_QAbstractButton__mouseDoubleClickEvent_QMouseEvent";
      case 1226:
        return "c_QAbstractButton__mouseMoveEvent_QMouseEvent";
      case 1227:
        return "c_QAbstractButton__mousePressEvent_QMouseEvent";
      case 1228:
        return "c_QAbstractButton__mouseReleaseEvent_QMouseEvent";
      case 6125:
        return "c_QAbstractButton__nextCheckState";
      case 1235:
        return "c_QAbstractButton__paintEvent_QPaintEvent";
      case 1314:
        return "c_QAbstractButton__setVisible_bool";
      case 1323:
        return "c_QAbstractButton__sharedPainter";
      case 1331:
        return "c_QAbstractButton__sizeHint";
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
            'c_QAbstractButton__registerVirtualMethodCallback')
        .asFunction();
    final callback1128 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractButton.changeEvent_calledFromC);
    registerCallback(thisCpp, callback1128, 1128);
    final callback6040 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QAbstractButton.checkStateSet_calledFromC);
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
            QAbstractButton.event_calledFromC, callbackExcept956);
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
            QAbstractButton.hitButton_calledFromC, callbackExcept6075);
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
        QWidget.minimumSizeHint_calledFromC);
    registerCallback(thisCpp, callback1222, 1222);
    final callback1224 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QWidget.mouseDoubleClickEvent_calledFromC);
    registerCallback(thisCpp, callback1224, 1224);
    final callback1226 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractButton.mouseMoveEvent_calledFromC);
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
        QAbstractButton.nextCheckState_calledFromC);
    registerCallback(thisCpp, callback6125, 6125);
    final callback1235 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractButton.paintEvent_calledFromC);
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
