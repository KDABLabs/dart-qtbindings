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

class QInputDialog extends QDialog {
  QInputDialog.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QInputDialog.init() : super.init() {}
  factory QInputDialog.fromCache(var cppPointer, [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QInputDialog;
    }
    return QInputDialog.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QInputDialog_Finalizer";
  } //QInputDialog(QWidget * parent)

  QInputDialog({required QWidget? parent}) : super.init() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QInputDialog__constructor_QWidget')
        .asFunction();
    thisCpp = func(parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  }
  static void accept_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QInputDialog;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QInputDialog::accept()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.accept();
  } // cancelButtonText() const

  QString cancelButtonText() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QInputDialog__cancelButtonText')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  }

  static void changeEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QInputDialog;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QInputDialog::changeEvent(QEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.changeEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QEvent.fromCppPointer(arg__1));
  } // comboBoxItems() const

  QList comboBoxItems() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QInputDialog__comboBoxItems')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QList<QString>.fromCppPointer(result, true);
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QInputDialog;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QInputDialog::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  }

  static int devType_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QInputDialog;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QInputDialog::devType() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.devType();
    return result;
  }

  static void done_calledFromC(ffi.Pointer<void> thisCpp, int result) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QInputDialog;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QInputDialog::done(int result)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.done(result);
  } // doubleDecimals() const

  int doubleDecimals() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QInputDialog__doubleDecimals')
        .asFunction();
    return func(thisCpp);
  } // doubleMaximum() const

  double doubleMaximum() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QInputDialog__doubleMaximum')
        .asFunction();
    return func(thisCpp);
  } // doubleMinimum() const

  double doubleMinimum() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QInputDialog__doubleMinimum')
        .asFunction();
    return func(thisCpp);
  } // doubleStep() const

  double doubleStep() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QInputDialog__doubleStep')
        .asFunction();
    return func(thisCpp);
  } // doubleValue() const

  double doubleValue() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QInputDialog__doubleValue')
        .asFunction();
    return func(thisCpp);
  } // doubleValueChanged(double value)

  doubleValueChanged(double value) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QInputDialog__doubleValueChanged_double')
        .asFunction();
    func(thisCpp, value);
  }

  void onDoubleValueChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QInputDialog__onDoubleValueChanged_double')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onDoubleValueChanged_callback);
    final callbackMethod = onDoubleValueChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onDoubleValueChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QInputDialog;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onDoubleValueChanged_callback] ??
            [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // doubleValueSelected(double value)

  doubleValueSelected(double value) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QInputDialog__doubleValueSelected_double')
        .asFunction();
    func(thisCpp, value);
  }

  void onDoubleValueSelected(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QInputDialog__onDoubleValueSelected_double')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onDoubleValueSelected_callback);
    final callbackMethod = onDoubleValueSelected_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onDoubleValueSelected_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QInputDialog;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onDoubleValueSelected_callback] ??
            [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QInputDialog;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QInputDialog::event(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.event((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
    return result ? 1 : 0;
  }

  static int eventFilter_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void>? arg__1, ffi.Pointer<void>? arg__2) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QInputDialog;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QInputDialog::eventFilter(QObject * arg__1, QEvent * arg__2)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.eventFilter(
        (arg__1 == null || arg__1.address == 0)
            ? null
            : QObject.fromCppPointer(arg__1),
        (arg__2 == null || arg__2.address == 0)
            ? null
            : QEvent.fromCppPointer(arg__2));
    return result ? 1 : 0;
  }

  static int exec_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QInputDialog;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QInputDialog::exec()! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.exec();
    return result;
  }

  static int focusNextPrevChild_calledFromC(
      ffi.Pointer<void> thisCpp, int next) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QInputDialog;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QInputDialog::focusNextPrevChild(bool next)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.focusNextPrevChild(next != 0);
    return result ? 1 : 0;
  }

  static // getText(QWidget * parent, const QString & title, const QString & label)
      QString getText(QWidget? parent, String? title, String? label) {
    final voidstar_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi
                .NativeFunction<voidstar_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_static_QInputDialog__getText_QWidget_QString_QString')
        .asFunction();
    ffi.Pointer<void> result = func(
        parent == null ? ffi.nullptr : parent.thisCpp,
        title?.toNativeUtf8() ?? ffi.nullptr,
        label?.toNativeUtf8() ?? ffi.nullptr);
    return QString.fromCppPointer(result, true);
  }

  static int hasHeightForWidth_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QInputDialog;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QInputDialog::hasHeightForWidth() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.hasHeightForWidth();
    return result ? 1 : 0;
  }

  static int heightForWidth_calledFromC(ffi.Pointer<void> thisCpp, int arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QInputDialog;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QInputDialog::heightForWidth(int arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.heightForWidth(arg__1);
    return result;
  }

  static void initPainter_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? painter) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QInputDialog;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QInputDialog::initPainter(QPainter * painter) const! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.initPainter((painter == null || painter.address == 0)
        ? null
        : QPainter.fromCppPointer(painter));
  } // intMaximum() const

  int intMaximum() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QInputDialog__intMaximum')
        .asFunction();
    return func(thisCpp);
  } // intMinimum() const

  int intMinimum() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QInputDialog__intMinimum')
        .asFunction();
    return func(thisCpp);
  } // intStep() const

  int intStep() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QInputDialog__intStep')
        .asFunction();
    return func(thisCpp);
  } // intValue() const

  int intValue() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QInputDialog__intValue')
        .asFunction();
    return func(thisCpp);
  } // intValueChanged(int value)

  intValueChanged(int value) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QInputDialog__intValueChanged_int')
        .asFunction();
    func(thisCpp, value);
  }

  void onIntValueChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QInputDialog__onIntValueChanged_int')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onIntValueChanged_callback);
    final callbackMethod = onIntValueChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onIntValueChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QInputDialog;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onIntValueChanged_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // intValueSelected(int value)

  intValueSelected(int value) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QInputDialog__intValueSelected_int')
        .asFunction();
    func(thisCpp, value);
  }

  void onIntValueSelected(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QInputDialog__onIntValueSelected_int')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onIntValueSelected_callback);
    final callbackMethod = onIntValueSelected_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onIntValueSelected_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QInputDialog;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onIntValueSelected_callback] ??
            [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // isComboBoxEditable() const

  bool isComboBoxEditable() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QInputDialog__isComboBoxEditable')
        .asFunction();
    return func(thisCpp) != 0;
  } // labelText() const

  QString labelText() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QInputDialog__labelText')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  }

  static void leaveEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QInputDialog;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QInputDialog::leaveEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.leaveEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  }

  static ffi.Pointer<void> minimumSizeHint_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QInputDialog;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QInputDialog::minimumSizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.minimumSizeHint();
    return result.thisCpp;
  }

  static void mouseDoubleClickEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QInputDialog;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QInputDialog::mouseDoubleClickEvent(QMouseEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseDoubleClickEvent((event == null || event.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(event));
  }

  static void mouseMoveEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QInputDialog;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QInputDialog::mouseMoveEvent(QMouseEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseMoveEvent((event == null || event.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(event));
  }

  static void mousePressEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QInputDialog;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QInputDialog::mousePressEvent(QMouseEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mousePressEvent((event == null || event.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(event));
  }

  static void mouseReleaseEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QInputDialog;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QInputDialog::mouseReleaseEvent(QMouseEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseReleaseEvent((event == null || event.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(event));
  } // okButtonText() const

  QString okButtonText() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QInputDialog__okButtonText')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  }

  static void open_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QInputDialog;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QInputDialog::open()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.open();
  }

  static void paintEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QInputDialog;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QInputDialog::paintEvent(QPaintEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.paintEvent((event == null || event.address == 0)
        ? null
        : QPaintEvent.fromCppPointer(event));
  }

  static void reject_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QInputDialog;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QInputDialog::reject()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.reject();
  } // setCancelButtonText(const QString & text)

  setCancelButtonText(String? text) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QInputDialog__setCancelButtonText_QString')
        .asFunction();
    func(thisCpp, text?.toNativeUtf8() ?? ffi.nullptr);
  } // setComboBoxEditable(bool editable)

  setComboBoxEditable(bool editable) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QInputDialog__setComboBoxEditable_bool')
        .asFunction();
    func(thisCpp, editable ? 1 : 0);
  } // setComboBoxItems(const QList<QString > & items)

  setComboBoxItems(QList? items) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QInputDialog__setComboBoxItems_QList_QString')
        .asFunction();
    func(thisCpp, items == null ? ffi.nullptr : items.thisCpp);
  } // setDoubleDecimals(int decimals)

  setDoubleDecimals(int decimals) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QInputDialog__setDoubleDecimals_int')
        .asFunction();
    func(thisCpp, decimals);
  } // setDoubleMaximum(double max)

  setDoubleMaximum(double max) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QInputDialog__setDoubleMaximum_double')
        .asFunction();
    func(thisCpp, max);
  } // setDoubleMinimum(double min)

  setDoubleMinimum(double min) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QInputDialog__setDoubleMinimum_double')
        .asFunction();
    func(thisCpp, min);
  } // setDoubleRange(double min, double max)

  setDoubleRange(double min, double max) {
    final void_Func_voidstar_double_double func = _dylib
        .lookup<
                ffi
                .NativeFunction<void_Func_voidstar_ffi_Double_ffi_Double_FFI>>(
            'c_QInputDialog__setDoubleRange_double_double')
        .asFunction();
    func(thisCpp, min, max);
  } // setDoubleStep(double step)

  setDoubleStep(double step) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QInputDialog__setDoubleStep_double')
        .asFunction();
    func(thisCpp, step);
  } // setDoubleValue(double value)

  setDoubleValue(double value) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QInputDialog__setDoubleValue_double')
        .asFunction();
    func(thisCpp, value);
  } // setIntMaximum(int max)

  setIntMaximum(int max) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QInputDialog__setIntMaximum_int')
        .asFunction();
    func(thisCpp, max);
  } // setIntMinimum(int min)

  setIntMinimum(int min) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QInputDialog__setIntMinimum_int')
        .asFunction();
    func(thisCpp, min);
  } // setIntRange(int min, int max)

  setIntRange(int min, int max) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QInputDialog__setIntRange_int_int')
        .asFunction();
    func(thisCpp, min, max);
  } // setIntStep(int step)

  setIntStep(int step) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QInputDialog__setIntStep_int')
        .asFunction();
    func(thisCpp, step);
  } // setIntValue(int value)

  setIntValue(int value) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QInputDialog__setIntValue_int')
        .asFunction();
    func(thisCpp, value);
  } // setLabelText(const QString & text)

  setLabelText(String? text) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QInputDialog__setLabelText_QString')
        .asFunction();
    func(thisCpp, text?.toNativeUtf8() ?? ffi.nullptr);
  } // setOkButtonText(const QString & text)

  setOkButtonText(String? text) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QInputDialog__setOkButtonText_QString')
        .asFunction();
    func(thisCpp, text?.toNativeUtf8() ?? ffi.nullptr);
  } // setTextValue(const QString & text)

  setTextValue(String? text) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QInputDialog__setTextValue_QString')
        .asFunction();
    func(thisCpp, text?.toNativeUtf8() ?? ffi.nullptr);
  }

  static void setVisible_calledFromC(ffi.Pointer<void> thisCpp, int visible) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QInputDialog;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QInputDialog::setVisible(bool visible)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setVisible(visible != 0);
  }

  static ffi.Pointer<void> sharedPainter_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QInputDialog;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QInputDialog::sharedPainter() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sharedPainter();
    return result.thisCpp;
  }

  static ffi.Pointer<void> sizeHint_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QInputDialog;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QInputDialog::sizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sizeHint();
    return result.thisCpp;
  } // textValue() const

  QString textValue() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QInputDialog__textValue')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // textValueChanged(const QString & text)

  textValueChanged(String? text) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QInputDialog__textValueChanged_QString')
        .asFunction();
    func(thisCpp, text?.toNativeUtf8() ?? ffi.nullptr);
  }

  void onTextValueChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QInputDialog__onTextValueChanged_QString')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onTextValueChanged_callback);
    final callbackMethod = onTextValueChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onTextValueChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QInputDialog;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onTextValueChanged_callback] ??
            [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // textValueSelected(const QString & text)

  textValueSelected(String? text) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QInputDialog__textValueSelected_QString')
        .asFunction();
    func(thisCpp, text?.toNativeUtf8() ?? ffi.nullptr);
  }

  void onTextValueSelected(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QInputDialog__onTextValueSelected_QString')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onTextValueSelected_callback);
    final callbackMethod = onTextValueSelected_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onTextValueSelected_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QInputDialog;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onTextValueSelected_callback] ??
            [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QInputDialog__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QInputDialog__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 4235:
        return "c_QInputDialog__accept";
      case 1128:
        return "c_QInputDialog__changeEvent_QEvent";
      case 946:
        return "c_QInputDialog__customEvent_QEvent";
      case 1145:
        return "c_QInputDialog__devType";
      case 4270:
        return "c_QInputDialog__done_int";
      case 956:
        return "c_QInputDialog__event_QEvent";
      case 957:
        return "c_QInputDialog__eventFilter_QObject_QEvent";
      case 4272:
        return "c_QInputDialog__exec";
      case 1155:
        return "c_QInputDialog__focusNextPrevChild_bool";
      case 1169:
        return "c_QInputDialog__hasHeightForWidth";
      case 1173:
        return "c_QInputDialog__heightForWidth_int";
      case 1176:
        return "c_QInputDialog__initPainter_QPainter";
      case 1202:
        return "c_QInputDialog__leaveEvent_QEvent";
      case 1222:
        return "c_QInputDialog__minimumSizeHint";
      case 1224:
        return "c_QInputDialog__mouseDoubleClickEvent_QMouseEvent";
      case 1226:
        return "c_QInputDialog__mouseMoveEvent_QMouseEvent";
      case 1227:
        return "c_QInputDialog__mousePressEvent_QMouseEvent";
      case 1228:
        return "c_QInputDialog__mouseReleaseEvent_QMouseEvent";
      case 4339:
        return "c_QInputDialog__open";
      case 1235:
        return "c_QInputDialog__paintEvent_QPaintEvent";
      case 4346:
        return "c_QInputDialog__reject";
      case 1314:
        return "c_QInputDialog__setVisible_bool";
      case 1323:
        return "c_QInputDialog__sharedPainter";
      case 1331:
        return "c_QInputDialog__sizeHint";
    }
    return super.cFunctionSymbolName(methodId);
  }

  static String methodNameFromId(int methodId) {
    switch (methodId) {
      case 4235:
        return "accept";
      case 1128:
        return "changeEvent";
      case 946:
        return "customEvent";
      case 1145:
        return "devType";
      case 4270:
        return "done";
      case 956:
        return "event";
      case 957:
        return "eventFilter";
      case 4272:
        return "exec";
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
      case 4339:
        return "open";
      case 1235:
        return "paintEvent";
      case 4346:
        return "reject";
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
            'c_QInputDialog__registerVirtualMethodCallback')
        .asFunction();
    final callback4235 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QDialog.accept_calledFromC);
    registerCallback(thisCpp, callback4235, 4235);
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
    final callback4270 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_FFI>(
            QInputDialog.done_calledFromC);
    registerCallback(thisCpp, callback4270, 4270);
    const callbackExcept956 = 0;
    final callback956 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_FFI>(
            QWidget.event_calledFromC, callbackExcept956);
    registerCallback(thisCpp, callback956, 956);
    const callbackExcept957 = 0;
    final callback957 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_voidstar_FFI>(
            QDialog.eventFilter_calledFromC, callbackExcept957);
    registerCallback(thisCpp, callback957, 957);
    const callbackExcept4272 = 0;
    final callback4272 = ffi.Pointer.fromFunction<int_Func_voidstar_FFI>(
        QDialog.exec_calledFromC, callbackExcept4272);
    registerCallback(thisCpp, callback4272, 4272);
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
        QInputDialog.minimumSizeHint_calledFromC);
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
    final callback4339 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QDialog.open_calledFromC);
    registerCallback(thisCpp, callback4339, 4339);
    final callback1235 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QWidget.paintEvent_calledFromC);
    registerCallback(thisCpp, callback1235, 1235);
    final callback4346 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QDialog.reject_calledFromC);
    registerCallback(thisCpp, callback4346, 4346);
    final callback1314 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int8_FFI>(
            QInputDialog.setVisible_calledFromC);
    registerCallback(thisCpp, callback1314, 1314);
    final callback1323 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QWidget.sharedPainter_calledFromC);
    registerCallback(thisCpp, callback1323, 1323);
    final callback1331 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QInputDialog.sizeHint_calledFromC);
    registerCallback(thisCpp, callback1331, 1331);
  }
}
