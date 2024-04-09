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

class QLayoutItem implements ffi.Finalizable {
  static var s_dartInstanceByCppPtr = Map<int, QLayoutItem>();
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

  factory QLayoutItem.fromCache(var cppPointer, [needsAutoDelete = false]) {
    return (s_dartInstanceByCppPtr[cppPointer.address] ??
        QLayoutItem.fromCppPointer(cppPointer, needsAutoDelete)) as QLayoutItem;
  }
  QLayoutItem.fromCppPointer(var cppPointer, [this._needsAutoDelete = false]) {
    thisCpp = cppPointer;
  }
  QLayoutItem.init() {}
  String getFinalizerName() {
    return "c_QLayoutItem_Finalizer";
  } //QLayoutItem()

  QLayoutItem() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_QLayoutItem__constructor')
        .asFunction();
    thisCpp = func();
    QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } // expandingDirections() const
  int expandingDirections() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            cFunctionSymbolName(3169))
        .asFunction();
    return func(thisCpp);
  }

  static int expandingDirections_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance = QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address];
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayoutItem::expandingDirections() const! (${thisCpp.address})");
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
    var dartInstance = QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address];
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayoutItem::geometry() const! (${thisCpp.address})");
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
    var dartInstance = QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address];
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayoutItem::hasHeightForWidth() const! (${thisCpp.address})");
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
    var dartInstance = QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address];
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayoutItem::heightForWidth(int arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.heightForWidth(arg__1);
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
    var dartInstance = QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address];
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayoutItem::invalidate()! (${thisCpp.address})");
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
    var dartInstance = QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address];
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayoutItem::isEmpty() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.isEmpty();
    return result ? 1 : 0;
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
    var dartInstance = QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address];
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayoutItem::layout()! (${thisCpp.address})");
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
    var dartInstance = QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address];
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayoutItem::maximumSize() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.maximumSize();
    return result.thisCpp;
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
    var dartInstance = QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address];
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayoutItem::minimumHeightForWidth(int arg__1) const! (${thisCpp.address})");
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
    var dartInstance = QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address];
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayoutItem::minimumSize() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.minimumSize();
    return result.thisCpp;
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
    var dartInstance = QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address];
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayoutItem::setGeometry(const QRect & arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setGeometry((arg__1 == null || arg__1.address == 0)
        ? null
        : QRect.fromCppPointer(arg__1));
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
    var dartInstance = QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address];
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayoutItem::sizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sizeHint();
    return result.thisCpp;
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
    var dartInstance = QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address];
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLayoutItem::widget() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.widget();
    return result.thisCpp;
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QLayoutItem__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 3169:
        return "c_QLayoutItem__expandingDirections";
      case 3170:
        return "c_QLayoutItem__geometry";
      case 3171:
        return "c_QLayoutItem__hasHeightForWidth";
      case 3172:
        return "c_QLayoutItem__heightForWidth_int";
      case 3173:
        return "c_QLayoutItem__invalidate";
      case 3174:
        return "c_QLayoutItem__isEmpty";
      case 3175:
        return "c_QLayoutItem__layout";
      case 3176:
        return "c_QLayoutItem__maximumSize";
      case 3177:
        return "c_QLayoutItem__minimumHeightForWidth_int";
      case 3178:
        return "c_QLayoutItem__minimumSize";
      case 3179:
        return "c_QLayoutItem__setGeometry_QRect";
      case 3180:
        return "c_QLayoutItem__sizeHint";
      case 3181:
        return "c_QLayoutItem__widget";
    }
    return "";
  }

  static String methodNameFromId(int methodId) {
    switch (methodId) {
      case 3169:
        return "expandingDirections";
      case 3170:
        return "geometry";
      case 3171:
        return "hasHeightForWidth";
      case 3172:
        return "heightForWidth";
      case 3173:
        return "invalidate";
      case 3174:
        return "isEmpty";
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
      case 3180:
        return "sizeHint";
      case 3181:
        return "widget";
    }
    throw Error();
  }

  void registerCallbacks() {
    assert(thisCpp != null);
    final RegisterMethodIsReimplementedCallback registerCallback = _dylib
        .lookup<ffi.NativeFunction<RegisterMethodIsReimplementedCallback_FFI>>(
            'c_QLayoutItem__registerVirtualMethodCallback')
        .asFunction();
    const callbackExcept3169 = 0;
    final callback3169 = ffi.Pointer.fromFunction<int_Func_voidstar_FFI>(
        QLayoutItem.expandingDirections_calledFromC, callbackExcept3169);
    registerCallback(thisCpp, callback3169, 3169);
    final callback3170 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QLayoutItem.geometry_calledFromC);
    registerCallback(thisCpp, callback3170, 3170);
    const callbackExcept3171 = 0;
    final callback3171 = ffi.Pointer.fromFunction<bool_Func_voidstar_FFI>(
        QLayoutItem.hasHeightForWidth_calledFromC, callbackExcept3171);
    registerCallback(thisCpp, callback3171, 3171);
    const callbackExcept3172 = 0;
    final callback3172 =
        ffi.Pointer.fromFunction<int_Func_voidstar_ffi_Int32_FFI>(
            QLayoutItem.heightForWidth_calledFromC, callbackExcept3172);
    registerCallback(thisCpp, callback3172, 3172);
    final callback3173 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QLayoutItem.invalidate_calledFromC);
    registerCallback(thisCpp, callback3173, 3173);
    const callbackExcept3174 = 0;
    final callback3174 = ffi.Pointer.fromFunction<bool_Func_voidstar_FFI>(
        QLayoutItem.isEmpty_calledFromC, callbackExcept3174);
    registerCallback(thisCpp, callback3174, 3174);
    final callback3175 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QLayoutItem.layout_calledFromC);
    registerCallback(thisCpp, callback3175, 3175);
    final callback3176 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QLayoutItem.maximumSize_calledFromC);
    registerCallback(thisCpp, callback3176, 3176);
    const callbackExcept3177 = 0;
    final callback3177 =
        ffi.Pointer.fromFunction<int_Func_voidstar_ffi_Int32_FFI>(
            QLayoutItem.minimumHeightForWidth_calledFromC, callbackExcept3177);
    registerCallback(thisCpp, callback3177, 3177);
    final callback3178 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QLayoutItem.minimumSize_calledFromC);
    registerCallback(thisCpp, callback3178, 3178);
    final callback3179 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QLayoutItem.setGeometry_calledFromC);
    registerCallback(thisCpp, callback3179, 3179);
    final callback3180 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QLayoutItem.sizeHint_calledFromC);
    registerCallback(thisCpp, callback3180, 3180);
    final callback3181 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QLayoutItem.widget_calledFromC);
    registerCallback(thisCpp, callback3181, 3181);
  }
}
