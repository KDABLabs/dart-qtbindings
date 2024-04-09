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

class QLayout extends QObject {
  QLayout.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QLayout.init() : super.init() {}
  factory QLayout.fromCache(var cppPointer, [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QLayout;
    }
    return QLayout.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QLayout_Finalizer";
  } //QLayout(QWidget * parent)

  QLayout({required QWidget? parent}) : super.init() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QLayout__constructor_QWidget')
        .asFunction();
    thisCpp = func(parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } // activate()
  bool activate() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QLayout__activate')
        .asFunction();
    return func(thisCpp) != 0;
  }

  static // activateRecursiveHelper(QLayoutItem * item)
      activateRecursiveHelper(QLayoutItem? item) {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_static_QLayout__activateRecursiveHelper_QLayoutItem')
        .asFunction();
    func(item == null ? ffi.nullptr : item.thisCpp);
  } // addChildLayout(QLayout * l)

  addChildLayout(QLayout? l) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QLayout__addChildLayout_QLayout')
        .asFunction();
    func(thisCpp, l == null ? ffi.nullptr : l.thisCpp);
  } // addChildWidget(QWidget * w)

  addChildWidget(QWidget? w) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QLayout__addChildWidget_QWidget')
        .asFunction();
    func(thisCpp, w == null ? ffi.nullptr : w.thisCpp);
  } // addItem(QLayoutItem * arg__1)

  addItem(QLayoutItem? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(3187))
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  }

  static void addItem_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayout::addItem(QLayoutItem * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.addItem((arg__1 == null || arg__1.address == 0)
        ? null
        : QLayoutItem.fromCppPointer(arg__1));
  } // addWidget(QWidget * w)

  addWidget(QWidget? w) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QLayout__addWidget_QWidget')
        .asFunction();
    func(thisCpp, w == null ? ffi.nullptr : w.thisCpp);
  } // adoptLayout(QLayout * layout)

  bool adoptLayout(QLayout? layout) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_QLayout__adoptLayout_QLayout')
        .asFunction();
    return func(thisCpp, layout == null ? ffi.nullptr : layout.thisCpp) != 0;
  } // alignmentRect(const QRect & arg__1) const

  QRect alignmentRect(QRect? arg__1) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QLayout__alignmentRect_QRect')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
    return QRect.fromCppPointer(result, true);
  }

  static // closestAcceptableSize(const QWidget * w, const QSize & s)
      QSize closestAcceptableSize(QWidget? w, QSize? s) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_static_QLayout__closestAcceptableSize_QWidget_QSize')
        .asFunction();
    ffi.Pointer<void> result = func(w == null ? ffi.nullptr : w.thisCpp,
        s == null ? ffi.nullptr : s.thisCpp);
    return QSize.fromCppPointer(result, true);
  } // contentsRect() const

  QRect contentsRect() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QLayout__contentsRect')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRect.fromCppPointer(result, true);
  } // count() const

  int count() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            cFunctionSymbolName(3195))
        .asFunction();
    return func(thisCpp);
  }

  static int count_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayout::count() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.count();
    return result;
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
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayout::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
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
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayout::event(QEvent * event)! (${thisCpp.address})");
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
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayout::eventFilter(QObject * watched, QEvent * event)! (${thisCpp.address})");
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
  } // expandingDirections() const

  int expandingDirections() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            cFunctionSymbolName(3169))
        .asFunction();
    return func(thisCpp);
  }

  static int expandingDirections_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayout::expandingDirections() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.expandingDirections();
    return result;
  } // geometry() const

  QRect geometry() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            cFunctionSymbolName(3170))
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRect.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> geometry_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayout::geometry() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.geometry();
    return result.thisCpp;
  } // hasHeightForWidth() const

  bool hasHeightForWidth() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            cFunctionSymbolName(3171))
        .asFunction();
    return func(thisCpp) != 0;
  }

  static int hasHeightForWidth_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayout::hasHeightForWidth() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.hasHeightForWidth();
    return result ? 1 : 0;
  } // heightForWidth(int arg__1) const

  int heightForWidth(int arg__1) {
    final int_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_ffi_Int32_FFI>>(
            cFunctionSymbolName(3172))
        .asFunction();
    return func(thisCpp, arg__1);
  }

  static int heightForWidth_calledFromC(ffi.Pointer<void> thisCpp, int arg__1) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayout::heightForWidth(int arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.heightForWidth(arg__1);
    return result;
  } // indexOf(const QLayoutItem * arg__1) const

  int indexOf(QLayoutItem? arg__1) {
    final int_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(3206))
        .asFunction();
    return func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  }

  static int indexOf_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayout::indexOf(const QLayoutItem * arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.indexOf((arg__1 == null || arg__1.address == 0)
        ? null
        : QLayoutItem.fromCppPointer(arg__1));
    return result;
  } // indexOf(const QWidget * arg__1) const

  int indexOf_2(QWidget? arg__1) {
    final int_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(3207))
        .asFunction();
    return func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  }

  static int indexOf_2_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayout::indexOf(const QWidget * arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.indexOf_2(
        (arg__1 == null || arg__1.address == 0)
            ? null
            : QWidget.fromCppPointer(arg__1));
    return result;
  } // invalidate()

  invalidate() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            cFunctionSymbolName(3173))
        .asFunction();
    func(thisCpp);
  }

  static void invalidate_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayout::invalidate()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.invalidate();
  } // isEmpty() const

  bool isEmpty() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            cFunctionSymbolName(3174))
        .asFunction();
    return func(thisCpp) != 0;
  }

  static int isEmpty_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayout::isEmpty() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.isEmpty();
    return result ? 1 : 0;
  } // isEnabled() const

  bool isEnabled() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QLayout__isEnabled')
        .asFunction();
    return func(thisCpp) != 0;
  } // itemAt(int index) const

  QLayoutItem itemAt(int index) {
    final voidstar_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
            cFunctionSymbolName(3214))
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, index);
    return QLayoutItem.fromCppPointer(result, false);
  }

  static ffi.Pointer<void> itemAt_calledFromC(
      ffi.Pointer<void> thisCpp, int index) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayout::itemAt(int index) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.itemAt(index);
    return result.thisCpp;
  } // layout()

  QLayout layout() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            cFunctionSymbolName(3175))
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QLayout.fromCppPointer(result, false);
  }

  static ffi.Pointer<void> layout_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayout::layout()! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.layout();
    return result.thisCpp;
  } // maximumSize() const

  QSize maximumSize() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            cFunctionSymbolName(3176))
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QSize.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> maximumSize_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayout::maximumSize() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.maximumSize();
    return result.thisCpp;
  } // menuBar() const

  QWidget menuBar() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QLayout__menuBar')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QWidget.fromCppPointer(result, false);
  } // minimumHeightForWidth(int arg__1) const

  int minimumHeightForWidth(int arg__1) {
    final int_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_ffi_Int32_FFI>>(
            cFunctionSymbolName(3177))
        .asFunction();
    return func(thisCpp, arg__1);
  }

  static int minimumHeightForWidth_calledFromC(
      ffi.Pointer<void> thisCpp, int arg__1) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayout::minimumHeightForWidth(int arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.minimumHeightForWidth(arg__1);
    return result;
  } // minimumSize() const

  QSize minimumSize() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            cFunctionSymbolName(3178))
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QSize.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> minimumSize_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayout::minimumSize() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.minimumSize();
    return result.thisCpp;
  } // parentWidget() const

  QWidget parentWidget() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QLayout__parentWidget')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QWidget.fromCppPointer(result, false);
  } // removeItem(QLayoutItem * arg__1)

  removeItem(QLayoutItem? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QLayout__removeItem_QLayoutItem')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // removeWidget(QWidget * w)

  removeWidget(QWidget? w) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QLayout__removeWidget_QWidget')
        .asFunction();
    func(thisCpp, w == null ? ffi.nullptr : w.thisCpp);
  } // setContentsMargins(int left, int top, int right, int bottom)

  setContentsMargins(int left, int top, int right, int bottom) {
    final void_Func_voidstar_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QLayout__setContentsMargins_int_int_int_int')
        .asFunction();
    func(thisCpp, left, top, right, bottom);
  } // setEnabled(bool arg__1)

  setEnabled(bool arg__1) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QLayout__setEnabled_bool')
        .asFunction();
    func(thisCpp, arg__1 ? 1 : 0);
  } // setGeometry(const QRect & arg__1)

  setGeometry(QRect? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(3179))
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  }

  static void setGeometry_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayout::setGeometry(const QRect & arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setGeometry((arg__1 == null || arg__1.address == 0)
        ? null
        : QRect.fromCppPointer(arg__1));
  } // setMenuBar(QWidget * w)

  setMenuBar(QWidget? w) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QLayout__setMenuBar_QWidget')
        .asFunction();
    func(thisCpp, w == null ? ffi.nullptr : w.thisCpp);
  } // setSpacing(int arg__1)

  setSpacing(int arg__1) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            cFunctionSymbolName(3232))
        .asFunction();
    func(thisCpp, arg__1);
  }

  static void setSpacing_calledFromC(ffi.Pointer<void> thisCpp, int arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayout::setSpacing(int arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setSpacing(arg__1);
  } // sizeHint() const

  QSize sizeHint() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            cFunctionSymbolName(3180))
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QSize.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> sizeHint_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayout::sizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sizeHint();
    return result.thisCpp;
  } // spacing() const

  int spacing() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            cFunctionSymbolName(3234))
        .asFunction();
    return func(thisCpp);
  }

  static int spacing_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayout::spacing() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.spacing();
    return result;
  } // takeAt(int index)

  QLayoutItem takeAt(int index) {
    final voidstar_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
            cFunctionSymbolName(3236))
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, index);
    return QLayoutItem.fromCppPointer(result, false);
  }

  static ffi.Pointer<void> takeAt_calledFromC(
      ffi.Pointer<void> thisCpp, int index) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayout::takeAt(int index)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.takeAt(index);
    return result.thisCpp;
  } // totalHeightForWidth(int w) const

  int totalHeightForWidth(int w) {
    final int_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_ffi_Int32_FFI>>(
            'c_QLayout__totalHeightForWidth_int')
        .asFunction();
    return func(thisCpp, w);
  } // totalMaximumSize() const

  QSize totalMaximumSize() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QLayout__totalMaximumSize')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QSize.fromCppPointer(result, true);
  } // totalMinimumHeightForWidth(int w) const

  int totalMinimumHeightForWidth(int w) {
    final int_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_ffi_Int32_FFI>>(
            'c_QLayout__totalMinimumHeightForWidth_int')
        .asFunction();
    return func(thisCpp, w);
  } // totalMinimumSize() const

  QSize totalMinimumSize() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QLayout__totalMinimumSize')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QSize.fromCppPointer(result, true);
  } // totalSizeHint() const

  QSize totalSizeHint() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QLayout__totalSizeHint')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QSize.fromCppPointer(result, true);
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QLayout__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  } // unsetContentsMargins()

  unsetContentsMargins() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QLayout__unsetContentsMargins')
        .asFunction();
    func(thisCpp);
  } // update()

  update() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>('c_QLayout__update')
        .asFunction();
    func(thisCpp);
  } // widget() const

  QWidget widget() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            cFunctionSymbolName(3181))
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QWidget.fromCppPointer(result, false);
  }

  static ffi.Pointer<void> widget_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayout::widget() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.widget();
    return result.thisCpp;
  } // widgetEvent(QEvent * arg__1)

  widgetEvent(QEvent? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QLayout__widgetEvent_QEvent')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QLayout__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 3187:
        return "c_QLayout__addItem_QLayoutItem";
      case 3195:
        return "c_QLayout__count";
      case 946:
        return "c_QLayout__customEvent_QEvent";
      case 956:
        return "c_QLayout__event_QEvent";
      case 957:
        return "c_QLayout__eventFilter_QObject_QEvent";
      case 3169:
        return "c_QLayout__expandingDirections";
      case 3170:
        return "c_QLayout__geometry";
      case 3171:
        return "c_QLayout__hasHeightForWidth";
      case 3172:
        return "c_QLayout__heightForWidth_int";
      case 3206:
        return "c_QLayout__indexOf_QLayoutItem";
      case 3207:
        return "c_QLayout__indexOf_QWidget";
      case 3173:
        return "c_QLayout__invalidate";
      case 3174:
        return "c_QLayout__isEmpty";
      case 3214:
        return "c_QLayout__itemAt_int";
      case 3175:
        return "c_QLayout__layout";
      case 3176:
        return "c_QLayout__maximumSize";
      case 3177:
        return "c_QLayout__minimumHeightForWidth_int";
      case 3178:
        return "c_QLayout__minimumSize";
      case 3179:
        return "c_QLayout__setGeometry_QRect";
      case 3232:
        return "c_QLayout__setSpacing_int";
      case 3180:
        return "c_QLayout__sizeHint";
      case 3234:
        return "c_QLayout__spacing";
      case 3236:
        return "c_QLayout__takeAt_int";
      case 3181:
        return "c_QLayout__widget";
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
            'c_QLayout__registerVirtualMethodCallback')
        .asFunction();
    final callback3187 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QLayout.addItem_calledFromC);
    registerCallback(thisCpp, callback3187, 3187);
    const callbackExcept3195 = 0;
    final callback3195 = ffi.Pointer.fromFunction<int_Func_voidstar_FFI>(
        QLayout.count_calledFromC, callbackExcept3195);
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
            QLayout.itemAt_calledFromC);
    registerCallback(thisCpp, callback3214, 3214);
    final callback3232 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_FFI>(
            QLayout.setSpacing_calledFromC);
    registerCallback(thisCpp, callback3232, 3232);
    const callbackExcept3234 = 0;
    final callback3234 = ffi.Pointer.fromFunction<int_Func_voidstar_FFI>(
        QLayout.spacing_calledFromC, callbackExcept3234);
    registerCallback(thisCpp, callback3234, 3234);
    final callback3236 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_ffi_Int32_FFI>(
            QLayout.takeAt_calledFromC);
    registerCallback(thisCpp, callback3236, 3236);
  }
}
