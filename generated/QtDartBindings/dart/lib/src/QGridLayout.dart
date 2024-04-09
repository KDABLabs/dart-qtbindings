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

class QGridLayout extends QLayout {
  QGridLayout.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QGridLayout.init() : super.init() {}
  factory QGridLayout.fromCache(var cppPointer, [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QGridLayout;
    }
    return QGridLayout.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QGridLayout_Finalizer";
  } //QGridLayout(QWidget * parent)

  QGridLayout({required QWidget? parent}) : super.init() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QGridLayout__constructor_QWidget')
        .asFunction();
    thisCpp = func(parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  }
  static void addItem_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QGridLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QGridLayout::addItem(QLayoutItem * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.addItem((arg__1 == null || arg__1.address == 0)
        ? null
        : QLayoutItem.fromCppPointer(arg__1));
  } // addItem(QLayoutItem * item, int row, int column, int rowSpan, int columnSpan)

  addItemToGrid(QLayoutItem? item, int row, int column,
      {int rowSpan = 1, int columnSpan = 1}) {
    final void_Func_voidstar_voidstar_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QGridLayout__addItemToGrid_QLayoutItem_int_int_int_int')
        .asFunction();
    func(thisCpp, item == null ? ffi.nullptr : item.thisCpp, row, column,
        rowSpan, columnSpan);
  } // addLayout(QLayout * arg__1, int row, int column)

  addLayout(QLayout? arg__1, int row, int column) {
    final void_Func_voidstar_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QGridLayout__addLayout_QLayout_int_int')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp, row, column);
  } // addLayout(QLayout * arg__1, int row, int column, int rowSpan, int columnSpan)

  addLayout_2(
      QLayout? arg__1, int row, int column, int rowSpan, int columnSpan) {
    final void_Func_voidstar_voidstar_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QGridLayout__addLayout_QLayout_int_int_int_int')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp, row, column,
        rowSpan, columnSpan);
  } // addWidget(QWidget * arg__1, int row, int column)

  addWidgetToGrid(QWidget? arg__1, int row, int column) {
    final void_Func_voidstar_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QGridLayout__addWidgetToGrid_QWidget_int_int')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp, row, column);
  } // addWidget(QWidget * arg__1, int row, int column, int rowSpan, int columnSpan)

  addWidgetToGrid_2(
      QWidget? arg__1, int row, int column, int rowSpan, int columnSpan) {
    final void_Func_voidstar_voidstar_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QGridLayout__addWidgetToGrid_QWidget_int_int_int_int')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp, row, column,
        rowSpan, columnSpan);
  } // addWidget(QWidget * w)

  addWidget(QWidget? w) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QGridLayout__addWidget_QWidget')
        .asFunction();
    func(thisCpp, w == null ? ffi.nullptr : w.thisCpp);
  } // cellRect(int row, int column) const

  QRect cellRect(int row, int column) {
    final voidstar_Func_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QGridLayout__cellRect_int_int')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, row, column);
    return QRect.fromCppPointer(result, true);
  } // columnCount() const

  int columnCount() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QGridLayout__columnCount')
        .asFunction();
    return func(thisCpp);
  } // columnMinimumWidth(int column) const

  int columnMinimumWidth(int column) {
    final int_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_ffi_Int32_FFI>>(
            'c_QGridLayout__columnMinimumWidth_int')
        .asFunction();
    return func(thisCpp, column);
  } // columnStretch(int column) const

  int columnStretch(int column) {
    final int_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_ffi_Int32_FFI>>(
            'c_QGridLayout__columnStretch_int')
        .asFunction();
    return func(thisCpp, column);
  }

  static int count_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QGridLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QGridLayout::count() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.count();
    return result;
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QGridLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QGridLayout::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QGridLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QGridLayout::event(QEvent * event)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QGridLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QGridLayout::eventFilter(QObject * watched, QEvent * event)! (${thisCpp.address})");
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
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QGridLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QGridLayout::expandingDirections() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.expandingDirections();
    return result;
  }

  static ffi.Pointer<void> geometry_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QGridLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QGridLayout::geometry() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.geometry();
    return result.thisCpp;
  }

  static int hasHeightForWidth_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QGridLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QGridLayout::hasHeightForWidth() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.hasHeightForWidth();
    return result ? 1 : 0;
  }

  static int heightForWidth_calledFromC(ffi.Pointer<void> thisCpp, int arg__1) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QGridLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QGridLayout::heightForWidth(int arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.heightForWidth(arg__1);
    return result;
  } // horizontalSpacing() const

  int horizontalSpacing() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QGridLayout__horizontalSpacing')
        .asFunction();
    return func(thisCpp);
  }

  static int indexOf_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QGridLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QGridLayout::indexOf(const QLayoutItem * arg__1) const! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QGridLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QGridLayout::indexOf(const QWidget * arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.indexOf_2(
        (arg__1 == null || arg__1.address == 0)
            ? null
            : QWidget.fromCppPointer(arg__1));
    return result;
  }

  static void invalidate_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QGridLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QGridLayout::invalidate()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.invalidate();
  }

  static int isEmpty_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QGridLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QGridLayout::isEmpty() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.isEmpty();
    return result ? 1 : 0;
  }

  static ffi.Pointer<void> itemAt_calledFromC(
      ffi.Pointer<void> thisCpp, int index) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QGridLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QGridLayout::itemAt(int index) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.itemAt(index);
    return result.thisCpp;
  } // itemAtPosition(int row, int column) const

  QLayoutItem itemAtPosition(int row, int column) {
    final voidstar_Func_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QGridLayout__itemAtPosition_int_int')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, row, column);
    return QLayoutItem.fromCppPointer(result, false);
  }

  static ffi.Pointer<void> layout_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QGridLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QGridLayout::layout()! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.layout();
    return result.thisCpp;
  }

  static ffi.Pointer<void> maximumSize_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QGridLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QGridLayout::maximumSize() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.maximumSize();
    return result.thisCpp;
  }

  static int minimumHeightForWidth_calledFromC(
      ffi.Pointer<void> thisCpp, int arg__1) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QGridLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QGridLayout::minimumHeightForWidth(int arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.minimumHeightForWidth(arg__1);
    return result;
  }

  static ffi.Pointer<void> minimumSize_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QGridLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QGridLayout::minimumSize() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.minimumSize();
    return result.thisCpp;
  } // rowCount() const

  int rowCount() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QGridLayout__rowCount')
        .asFunction();
    return func(thisCpp);
  } // rowMinimumHeight(int row) const

  int rowMinimumHeight(int row) {
    final int_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_ffi_Int32_FFI>>(
            'c_QGridLayout__rowMinimumHeight_int')
        .asFunction();
    return func(thisCpp, row);
  } // rowStretch(int row) const

  int rowStretch(int row) {
    final int_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_ffi_Int32_FFI>>(
            'c_QGridLayout__rowStretch_int')
        .asFunction();
    return func(thisCpp, row);
  } // setColumnMinimumWidth(int column, int minSize)

  setColumnMinimumWidth(int column, int minSize) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QGridLayout__setColumnMinimumWidth_int_int')
        .asFunction();
    func(thisCpp, column, minSize);
  } // setColumnStretch(int column, int stretch)

  setColumnStretch(int column, int stretch) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QGridLayout__setColumnStretch_int_int')
        .asFunction();
    func(thisCpp, column, stretch);
  } // setDefaultPositioning(int n, Qt::Orientation orient)

  setDefaultPositioning(int n, int orient) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QGridLayout__setDefaultPositioning_int_Orientation')
        .asFunction();
    func(thisCpp, n, orient);
  }

  static void setGeometry_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QGridLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QGridLayout::setGeometry(const QRect & arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setGeometry((arg__1 == null || arg__1.address == 0)
        ? null
        : QRect.fromCppPointer(arg__1));
  } // setHorizontalSpacing(int spacing)

  setHorizontalSpacing(int spacing) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QGridLayout__setHorizontalSpacing_int')
        .asFunction();
    func(thisCpp, spacing);
  } // setRowMinimumHeight(int row, int minSize)

  setRowMinimumHeight(int row, int minSize) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QGridLayout__setRowMinimumHeight_int_int')
        .asFunction();
    func(thisCpp, row, minSize);
  } // setRowStretch(int row, int stretch)

  setRowStretch(int row, int stretch) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QGridLayout__setRowStretch_int_int')
        .asFunction();
    func(thisCpp, row, stretch);
  }

  static void setSpacing_calledFromC(ffi.Pointer<void> thisCpp, int spacing) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QGridLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QGridLayout::setSpacing(int spacing)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setSpacing(spacing);
  } // setVerticalSpacing(int spacing)

  setVerticalSpacing(int spacing) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QGridLayout__setVerticalSpacing_int')
        .asFunction();
    func(thisCpp, spacing);
  }

  static ffi.Pointer<void> sizeHint_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QGridLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QGridLayout::sizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sizeHint();
    return result.thisCpp;
  }

  static int spacing_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QGridLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QGridLayout::spacing() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.spacing();
    return result;
  }

  static ffi.Pointer<void> takeAt_calledFromC(
      ffi.Pointer<void> thisCpp, int index) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QGridLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QGridLayout::takeAt(int index)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.takeAt(index);
    return result.thisCpp;
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QGridLayout__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  } // verticalSpacing() const

  int verticalSpacing() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QGridLayout__verticalSpacing')
        .asFunction();
    return func(thisCpp);
  }

  static ffi.Pointer<void> widget_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QGridLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QGridLayout::widget() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.widget();
    return result.thisCpp;
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QGridLayout__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 3187:
        return "c_QGridLayout__addItem_QLayoutItem";
      case 3195:
        return "c_QGridLayout__count";
      case 946:
        return "c_QGridLayout__customEvent_QEvent";
      case 956:
        return "c_QGridLayout__event_QEvent";
      case 957:
        return "c_QGridLayout__eventFilter_QObject_QEvent";
      case 3169:
        return "c_QGridLayout__expandingDirections";
      case 3170:
        return "c_QGridLayout__geometry";
      case 3171:
        return "c_QGridLayout__hasHeightForWidth";
      case 3172:
        return "c_QGridLayout__heightForWidth_int";
      case 3206:
        return "c_QGridLayout__indexOf_QLayoutItem";
      case 3207:
        return "c_QGridLayout__indexOf_QWidget";
      case 3173:
        return "c_QGridLayout__invalidate";
      case 3174:
        return "c_QGridLayout__isEmpty";
      case 3214:
        return "c_QGridLayout__itemAt_int";
      case 3175:
        return "c_QGridLayout__layout";
      case 3176:
        return "c_QGridLayout__maximumSize";
      case 3177:
        return "c_QGridLayout__minimumHeightForWidth_int";
      case 3178:
        return "c_QGridLayout__minimumSize";
      case 3179:
        return "c_QGridLayout__setGeometry_QRect";
      case 3232:
        return "c_QGridLayout__setSpacing_int";
      case 3180:
        return "c_QGridLayout__sizeHint";
      case 3234:
        return "c_QGridLayout__spacing";
      case 3236:
        return "c_QGridLayout__takeAt_int";
      case 3181:
        return "c_QGridLayout__widget";
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
            'c_QGridLayout__registerVirtualMethodCallback')
        .asFunction();
    final callback3187 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QGridLayout.addItem_calledFromC);
    registerCallback(thisCpp, callback3187, 3187);
    const callbackExcept3195 = 0;
    final callback3195 = ffi.Pointer.fromFunction<int_Func_voidstar_FFI>(
        QGridLayout.count_calledFromC, callbackExcept3195);
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
            QGridLayout.itemAt_calledFromC);
    registerCallback(thisCpp, callback3214, 3214);
    final callback3232 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_FFI>(
            QGridLayout.setSpacing_calledFromC);
    registerCallback(thisCpp, callback3232, 3232);
    const callbackExcept3234 = 0;
    final callback3234 = ffi.Pointer.fromFunction<int_Func_voidstar_FFI>(
        QGridLayout.spacing_calledFromC, callbackExcept3234);
    registerCallback(thisCpp, callback3234, 3234);
    final callback3236 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_ffi_Int32_FFI>(
            QGridLayout.takeAt_calledFromC);
    registerCallback(thisCpp, callback3236, 3236);
  }
}
