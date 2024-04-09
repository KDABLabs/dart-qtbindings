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

class QFormLayout extends QLayout {
  QFormLayout.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QFormLayout.init() : super.init() {}
  factory QFormLayout.fromCache(var cppPointer, [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QFormLayout;
    }
    return QFormLayout.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QFormLayout_Finalizer";
  } //QFormLayout(QWidget * parent)

  QFormLayout({required QWidget? parent}) : super.init() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QFormLayout__constructor_QWidget')
        .asFunction();
    thisCpp = func(parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  }
  static void addItem_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? item) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QFormLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QFormLayout::addItem(QLayoutItem * item)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.addItem((item == null || item.address == 0)
        ? null
        : QLayoutItem.fromCppPointer(item));
  } // addRow(QLayout * layout)

  addRow(QLayout? layout) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QFormLayout__addRow_QLayout')
        .asFunction();
    func(thisCpp, layout == null ? ffi.nullptr : layout.thisCpp);
  } // addRow(QWidget * label, QLayout * field)

  addRow_2(QWidget? label, QLayout? field) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QFormLayout__addRow_QWidget_QLayout')
        .asFunction();
    func(thisCpp, label == null ? ffi.nullptr : label.thisCpp,
        field == null ? ffi.nullptr : field.thisCpp);
  } // addRow(QWidget * label, QWidget * field)

  addRow_3(QWidget? label, QWidget? field) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QFormLayout__addRow_QWidget_QWidget')
        .asFunction();
    func(thisCpp, label == null ? ffi.nullptr : label.thisCpp,
        field == null ? ffi.nullptr : field.thisCpp);
  } // addRow(QWidget * widget)

  addRow_4(QWidget? widget) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QFormLayout__addRow_QWidget')
        .asFunction();
    func(thisCpp, widget == null ? ffi.nullptr : widget.thisCpp);
  } // addRow(const QString & labelText, QLayout * field)

  addRow_5(String? labelText, QLayout? field) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QFormLayout__addRow_QString_QLayout')
        .asFunction();
    func(thisCpp, labelText?.toNativeUtf8() ?? ffi.nullptr,
        field == null ? ffi.nullptr : field.thisCpp);
  } // addRow(const QString & labelText, QWidget * field)

  addRow_6(String? labelText, QWidget? field) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QFormLayout__addRow_QString_QWidget')
        .asFunction();
    func(thisCpp, labelText?.toNativeUtf8() ?? ffi.nullptr,
        field == null ? ffi.nullptr : field.thisCpp);
  }

  static int count_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QFormLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QFormLayout::count() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.count();
    return result;
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QFormLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QFormLayout::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QFormLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QFormLayout::event(QEvent * event)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QFormLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QFormLayout::eventFilter(QObject * watched, QEvent * event)! (${thisCpp.address})");
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

  static int expandingDirections_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QFormLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QFormLayout::expandingDirections() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.expandingDirections();
    return result;
  }

  static ffi.Pointer<void> geometry_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QFormLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QFormLayout::geometry() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.geometry();
    return result.thisCpp;
  }

  static int hasHeightForWidth_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QFormLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QFormLayout::hasHeightForWidth() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.hasHeightForWidth();
    return result ? 1 : 0;
  }

  static int heightForWidth_calledFromC(ffi.Pointer<void> thisCpp, int width) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QFormLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QFormLayout::heightForWidth(int width) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.heightForWidth(width);
    return result;
  } // horizontalSpacing() const

  int horizontalSpacing() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QFormLayout__horizontalSpacing')
        .asFunction();
    return func(thisCpp);
  }

  static int indexOf_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QFormLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QFormLayout::indexOf(const QLayoutItem * arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.indexOf((arg__1 == null || arg__1.address == 0)
        ? null
        : QLayoutItem.fromCppPointer(arg__1));
    return result;
  }

  static int indexOf_2_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QFormLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QFormLayout::indexOf(const QWidget * arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.indexOf_2(
        (arg__1 == null || arg__1.address == 0)
            ? null
            : QWidget.fromCppPointer(arg__1));
    return result;
  } // insertRow(int row, QLayout * layout)

  insertRow(int row, QLayout? layout) {
    final void_Func_voidstar_int_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_voidstar_FFI>>(
            'c_QFormLayout__insertRow_int_QLayout')
        .asFunction();
    func(thisCpp, row, layout == null ? ffi.nullptr : layout.thisCpp);
  } // insertRow(int row, QWidget * label, QLayout * field)

  insertRow_2(int row, QWidget? label, QLayout? field) {
    final void_Func_voidstar_int_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_voidstar_voidstar_FFI>>(
            'c_QFormLayout__insertRow_int_QWidget_QLayout')
        .asFunction();
    func(thisCpp, row, label == null ? ffi.nullptr : label.thisCpp,
        field == null ? ffi.nullptr : field.thisCpp);
  } // insertRow(int row, QWidget * label, QWidget * field)

  insertRow_3(int row, QWidget? label, QWidget? field) {
    final void_Func_voidstar_int_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_voidstar_voidstar_FFI>>(
            'c_QFormLayout__insertRow_int_QWidget_QWidget')
        .asFunction();
    func(thisCpp, row, label == null ? ffi.nullptr : label.thisCpp,
        field == null ? ffi.nullptr : field.thisCpp);
  } // insertRow(int row, QWidget * widget)

  insertRow_4(int row, QWidget? widget) {
    final void_Func_voidstar_int_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_voidstar_FFI>>(
            'c_QFormLayout__insertRow_int_QWidget')
        .asFunction();
    func(thisCpp, row, widget == null ? ffi.nullptr : widget.thisCpp);
  } // insertRow(int row, const QString & labelText, QLayout * field)

  insertRow_5(int row, String? labelText, QLayout? field) {
    final void_Func_voidstar_int_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_voidstar_voidstar_FFI>>(
            'c_QFormLayout__insertRow_int_QString_QLayout')
        .asFunction();
    func(thisCpp, row, labelText?.toNativeUtf8() ?? ffi.nullptr,
        field == null ? ffi.nullptr : field.thisCpp);
  } // insertRow(int row, const QString & labelText, QWidget * field)

  insertRow_6(int row, String? labelText, QWidget? field) {
    final void_Func_voidstar_int_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_voidstar_voidstar_FFI>>(
            'c_QFormLayout__insertRow_int_QString_QWidget')
        .asFunction();
    func(thisCpp, row, labelText?.toNativeUtf8() ?? ffi.nullptr,
        field == null ? ffi.nullptr : field.thisCpp);
  }

  static void invalidate_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QFormLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QFormLayout::invalidate()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.invalidate();
  }

  static int isEmpty_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QFormLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QFormLayout::isEmpty() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.isEmpty();
    return result ? 1 : 0;
  } // isRowVisible(QLayout * layout) const

  bool isRowVisible(QLayout? layout) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_QFormLayout__isRowVisible_QLayout')
        .asFunction();
    return func(thisCpp, layout == null ? ffi.nullptr : layout.thisCpp) != 0;
  } // isRowVisible(QWidget * widget) const

  bool isRowVisible_2(QWidget? widget) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_QFormLayout__isRowVisible_QWidget')
        .asFunction();
    return func(thisCpp, widget == null ? ffi.nullptr : widget.thisCpp) != 0;
  } // isRowVisible(int row) const

  bool isRowVisible_3(int row) {
    final bool_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_ffi_Int32_FFI>>(
            'c_QFormLayout__isRowVisible_int')
        .asFunction();
    return func(thisCpp, row) != 0;
  }

  static ffi.Pointer<void> itemAt_calledFromC(
      ffi.Pointer<void> thisCpp, int index) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QFormLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QFormLayout::itemAt(int index) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.itemAt(index);
    return result.thisCpp;
  } // labelForField(QLayout * field) const

  QWidget labelForField(QLayout? field) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QFormLayout__labelForField_QLayout')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, field == null ? ffi.nullptr : field.thisCpp);
    return QWidget.fromCppPointer(result, false);
  } // labelForField(QWidget * field) const

  QWidget labelForField_2(QWidget? field) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QFormLayout__labelForField_QWidget')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, field == null ? ffi.nullptr : field.thisCpp);
    return QWidget.fromCppPointer(result, false);
  }

  static ffi.Pointer<void> layout_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QFormLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QFormLayout::layout()! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.layout();
    return result.thisCpp;
  }

  static ffi.Pointer<void> maximumSize_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QFormLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QFormLayout::maximumSize() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.maximumSize();
    return result.thisCpp;
  }

  static int minimumHeightForWidth_calledFromC(
      ffi.Pointer<void> thisCpp, int arg__1) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QFormLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QFormLayout::minimumHeightForWidth(int arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.minimumHeightForWidth(arg__1);
    return result;
  }

  static ffi.Pointer<void> minimumSize_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QFormLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QFormLayout::minimumSize() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.minimumSize();
    return result.thisCpp;
  } // removeRow(QLayout * layout)

  removeRow(QLayout? layout) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QFormLayout__removeRow_QLayout')
        .asFunction();
    func(thisCpp, layout == null ? ffi.nullptr : layout.thisCpp);
  } // removeRow(QWidget * widget)

  removeRow_2(QWidget? widget) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QFormLayout__removeRow_QWidget')
        .asFunction();
    func(thisCpp, widget == null ? ffi.nullptr : widget.thisCpp);
  } // removeRow(int row)

  removeRow_3(int row) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QFormLayout__removeRow_int')
        .asFunction();
    func(thisCpp, row);
  } // resetFieldGrowthPolicy()

  resetFieldGrowthPolicy() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QFormLayout__resetFieldGrowthPolicy')
        .asFunction();
    func(thisCpp);
  } // resetFormAlignment()

  resetFormAlignment() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QFormLayout__resetFormAlignment')
        .asFunction();
    func(thisCpp);
  } // resetLabelAlignment()

  resetLabelAlignment() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QFormLayout__resetLabelAlignment')
        .asFunction();
    func(thisCpp);
  } // resetRowWrapPolicy()

  resetRowWrapPolicy() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QFormLayout__resetRowWrapPolicy')
        .asFunction();
    func(thisCpp);
  } // rowCount() const

  int rowCount() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QFormLayout__rowCount')
        .asFunction();
    return func(thisCpp);
  }

  static void setGeometry_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? rect) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QFormLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QFormLayout::setGeometry(const QRect & rect)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setGeometry((rect == null || rect.address == 0)
        ? null
        : QRect.fromCppPointer(rect));
  } // setHorizontalSpacing(int spacing)

  setHorizontalSpacing(int spacing) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QFormLayout__setHorizontalSpacing_int')
        .asFunction();
    func(thisCpp, spacing);
  } // setRowVisible(QLayout * layout, bool on)

  setRowVisible(QLayout? layout, bool on) {
    final void_Func_voidstar_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_ffi_Int8_FFI>>(
            'c_QFormLayout__setRowVisible_QLayout_bool')
        .asFunction();
    func(thisCpp, layout == null ? ffi.nullptr : layout.thisCpp, on ? 1 : 0);
  } // setRowVisible(QWidget * widget, bool on)

  setRowVisible_2(QWidget? widget, bool on) {
    final void_Func_voidstar_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_ffi_Int8_FFI>>(
            'c_QFormLayout__setRowVisible_QWidget_bool')
        .asFunction();
    func(thisCpp, widget == null ? ffi.nullptr : widget.thisCpp, on ? 1 : 0);
  } // setRowVisible(int row, bool on)

  setRowVisible_3(int row, bool on) {
    final void_Func_voidstar_int_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int8_FFI>>(
            'c_QFormLayout__setRowVisible_int_bool')
        .asFunction();
    func(thisCpp, row, on ? 1 : 0);
  }

  static void setSpacing_calledFromC(ffi.Pointer<void> thisCpp, int arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QFormLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QFormLayout::setSpacing(int arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setSpacing(arg__1);
  } // setVerticalSpacing(int spacing)

  setVerticalSpacing(int spacing) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QFormLayout__setVerticalSpacing_int')
        .asFunction();
    func(thisCpp, spacing);
  }

  static ffi.Pointer<void> sizeHint_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QFormLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QFormLayout::sizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sizeHint();
    return result.thisCpp;
  }

  static int spacing_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QFormLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QFormLayout::spacing() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.spacing();
    return result;
  }

  static ffi.Pointer<void> takeAt_calledFromC(
      ffi.Pointer<void> thisCpp, int index) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QFormLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QFormLayout::takeAt(int index)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.takeAt(index);
    return result.thisCpp;
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QFormLayout__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  } // verticalSpacing() const

  int verticalSpacing() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QFormLayout__verticalSpacing')
        .asFunction();
    return func(thisCpp);
  }

  static ffi.Pointer<void> widget_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QFormLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QFormLayout::widget() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.widget();
    return result.thisCpp;
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QFormLayout__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 3187:
        return "c_QFormLayout__addItem_QLayoutItem";
      case 3195:
        return "c_QFormLayout__count";
      case 946:
        return "c_QFormLayout__customEvent_QEvent";
      case 956:
        return "c_QFormLayout__event_QEvent";
      case 957:
        return "c_QFormLayout__eventFilter_QObject_QEvent";
      case 3169:
        return "c_QFormLayout__expandingDirections";
      case 3170:
        return "c_QFormLayout__geometry";
      case 3171:
        return "c_QFormLayout__hasHeightForWidth";
      case 3172:
        return "c_QFormLayout__heightForWidth_int";
      case 3206:
        return "c_QFormLayout__indexOf_QLayoutItem";
      case 3207:
        return "c_QFormLayout__indexOf_QWidget";
      case 3173:
        return "c_QFormLayout__invalidate";
      case 3174:
        return "c_QFormLayout__isEmpty";
      case 3214:
        return "c_QFormLayout__itemAt_int";
      case 3175:
        return "c_QFormLayout__layout";
      case 3176:
        return "c_QFormLayout__maximumSize";
      case 3177:
        return "c_QFormLayout__minimumHeightForWidth_int";
      case 3178:
        return "c_QFormLayout__minimumSize";
      case 3179:
        return "c_QFormLayout__setGeometry_QRect";
      case 3232:
        return "c_QFormLayout__setSpacing_int";
      case 3180:
        return "c_QFormLayout__sizeHint";
      case 3234:
        return "c_QFormLayout__spacing";
      case 3236:
        return "c_QFormLayout__takeAt_int";
      case 3181:
        return "c_QFormLayout__widget";
    }
    return super.cFunctionSymbolName(methodId);
  }

  static String methodNameFromId(int methodId) {
    switch (methodId) {
      case 3187:
        return "addItem";
      case 3195:
        return "count";
      case 946:
        return "customEvent";
      case 956:
        return "event";
      case 957:
        return "eventFilter";
      case 3169:
        return "expandingDirections";
      case 3170:
        return "geometry";
      case 3171:
        return "hasHeightForWidth";
      case 3172:
        return "heightForWidth";
      case 3206:
        return "indexOf";
      case 3207:
        return "indexOf_2";
      case 3173:
        return "invalidate";
      case 3174:
        return "isEmpty";
      case 3214:
        return "itemAt";
      case 3175:
        return "layout";
      case 3176:
        return "maximumSize";
      case 3177:
        return "minimumHeightForWidth";
      case 3178:
        return "minimumSize";
      case 3179:
        return "setGeometry";
      case 3232:
        return "setSpacing";
      case 3180:
        return "sizeHint";
      case 3234:
        return "spacing";
      case 3236:
        return "takeAt";
      case 3181:
        return "widget";
    }
    throw Error();
  }

  void registerCallbacks() {
    assert(thisCpp != null);
    final RegisterMethodIsReimplementedCallback registerCallback = _dylib
        .lookup<ffi.NativeFunction<RegisterMethodIsReimplementedCallback_FFI>>(
            'c_QFormLayout__registerVirtualMethodCallback')
        .asFunction();
    final callback3187 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QFormLayout.addItem_calledFromC);
    registerCallback(thisCpp, callback3187, 3187);
    const callbackExcept3195 = 0;
    final callback3195 = ffi.Pointer.fromFunction<int_Func_voidstar_FFI>(
        QFormLayout.count_calledFromC, callbackExcept3195);
    registerCallback(thisCpp, callback3195, 3195);
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
    const callbackExcept3206 = 0;
    final callback3206 =
        ffi.Pointer.fromFunction<int_Func_voidstar_voidstar_FFI>(
            QLayout.indexOf_calledFromC, callbackExcept3206);
    registerCallback(thisCpp, callback3206, 3206);
    const callbackExcept3207 = 0;
    final callback3207 =
        ffi.Pointer.fromFunction<int_Func_voidstar_voidstar_FFI>(
            QLayout.indexOf_2_calledFromC, callbackExcept3207);
    registerCallback(thisCpp, callback3207, 3207);
    final callback3214 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_ffi_Int32_FFI>(
            QFormLayout.itemAt_calledFromC);
    registerCallback(thisCpp, callback3214, 3214);
    final callback3232 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_FFI>(
            QFormLayout.setSpacing_calledFromC);
    registerCallback(thisCpp, callback3232, 3232);
    const callbackExcept3234 = 0;
    final callback3234 = ffi.Pointer.fromFunction<int_Func_voidstar_FFI>(
        QFormLayout.spacing_calledFromC, callbackExcept3234);
    registerCallback(thisCpp, callback3234, 3234);
    final callback3236 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_ffi_Int32_FFI>(
            QFormLayout.takeAt_calledFromC);
    registerCallback(thisCpp, callback3236, 3236);
  }
}
