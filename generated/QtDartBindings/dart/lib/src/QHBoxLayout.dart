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

class QHBoxLayout extends QBoxLayout {
  QHBoxLayout.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QHBoxLayout.init() : super.init() {}
  factory QHBoxLayout.fromCache(var cppPointer, [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QHBoxLayout;
    }
    return QHBoxLayout.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QHBoxLayout_Finalizer";
  } //QHBoxLayout(QWidget * parent)

  QHBoxLayout(QWidget? parent) : super.init() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QHBoxLayout__constructor_QWidget')
        .asFunction();
    thisCpp = func(parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  }
  static void addItem_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QHBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QHBoxLayout::addItem(QLayoutItem * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.addItem((arg__1 == null || arg__1.address == 0)
        ? null
        : QLayoutItem.fromCppPointer(arg__1));
  }

  static int count_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QHBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QHBoxLayout::count() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.count();
    return result;
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QHBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QHBoxLayout::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QHBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QHBoxLayout::event(QEvent * event)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QHBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QHBoxLayout::eventFilter(QObject * watched, QEvent * event)! (${thisCpp.address})");
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
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QHBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QHBoxLayout::expandingDirections() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.expandingDirections();
    return result;
  }

  static ffi.Pointer<void> geometry_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QHBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QHBoxLayout::geometry() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.geometry();
    return result.thisCpp;
  }

  static int hasHeightForWidth_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QHBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QHBoxLayout::hasHeightForWidth() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.hasHeightForWidth();
    return result ? 1 : 0;
  }

  static int heightForWidth_calledFromC(ffi.Pointer<void> thisCpp, int arg__1) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QHBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QHBoxLayout::heightForWidth(int arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.heightForWidth(arg__1);
    return result;
  }

  static int indexOf_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QHBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QHBoxLayout::indexOf(const QLayoutItem * arg__1) const! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QHBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QHBoxLayout::indexOf(const QWidget * arg__1) const! (${thisCpp.address})");
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
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QHBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QHBoxLayout::invalidate()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.invalidate();
  }

  static int isEmpty_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QHBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QHBoxLayout::isEmpty() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.isEmpty();
    return result ? 1 : 0;
  }

  static ffi.Pointer<void> itemAt_calledFromC(
      ffi.Pointer<void> thisCpp, int arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QHBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QHBoxLayout::itemAt(int arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.itemAt(arg__1);
    return result.thisCpp;
  }

  static ffi.Pointer<void> layout_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QHBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QHBoxLayout::layout()! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.layout();
    return result.thisCpp;
  }

  static ffi.Pointer<void> maximumSize_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QHBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QHBoxLayout::maximumSize() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.maximumSize();
    return result.thisCpp;
  }

  static int minimumHeightForWidth_calledFromC(
      ffi.Pointer<void> thisCpp, int arg__1) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QHBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QHBoxLayout::minimumHeightForWidth(int arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.minimumHeightForWidth(arg__1);
    return result;
  }

  static ffi.Pointer<void> minimumSize_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QHBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QHBoxLayout::minimumSize() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.minimumSize();
    return result.thisCpp;
  }

  static void setGeometry_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QHBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QHBoxLayout::setGeometry(const QRect & arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setGeometry((arg__1 == null || arg__1.address == 0)
        ? null
        : QRect.fromCppPointer(arg__1));
  }

  static void setSpacing_calledFromC(ffi.Pointer<void> thisCpp, int spacing) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QHBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QHBoxLayout::setSpacing(int spacing)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setSpacing(spacing);
  }

  static ffi.Pointer<void> sizeHint_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QHBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QHBoxLayout::sizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sizeHint();
    return result.thisCpp;
  }

  static int spacing_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QHBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QHBoxLayout::spacing() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.spacing();
    return result;
  }

  static ffi.Pointer<void> takeAt_calledFromC(
      ffi.Pointer<void> thisCpp, int arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QHBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QHBoxLayout::takeAt(int arg__1)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.takeAt(arg__1);
    return result.thisCpp;
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QHBoxLayout__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> widget_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QHBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QHBoxLayout::widget() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.widget();
    return result.thisCpp;
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QHBoxLayout__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 3187:
        return "c_QHBoxLayout__addItem_QLayoutItem";
      case 3195:
        return "c_QHBoxLayout__count";
      case 946:
        return "c_QHBoxLayout__customEvent_QEvent";
      case 956:
        return "c_QHBoxLayout__event_QEvent";
      case 957:
        return "c_QHBoxLayout__eventFilter_QObject_QEvent";
      case 3169:
        return "c_QHBoxLayout__expandingDirections";
      case 3170:
        return "c_QHBoxLayout__geometry";
      case 3171:
        return "c_QHBoxLayout__hasHeightForWidth";
      case 3172:
        return "c_QHBoxLayout__heightForWidth_int";
      case 3206:
        return "c_QHBoxLayout__indexOf_QLayoutItem";
      case 3207:
        return "c_QHBoxLayout__indexOf_QWidget";
      case 3173:
        return "c_QHBoxLayout__invalidate";
      case 3174:
        return "c_QHBoxLayout__isEmpty";
      case 3214:
        return "c_QHBoxLayout__itemAt_int";
      case 3175:
        return "c_QHBoxLayout__layout";
      case 3176:
        return "c_QHBoxLayout__maximumSize";
      case 3177:
        return "c_QHBoxLayout__minimumHeightForWidth_int";
      case 3178:
        return "c_QHBoxLayout__minimumSize";
      case 3179:
        return "c_QHBoxLayout__setGeometry_QRect";
      case 3232:
        return "c_QHBoxLayout__setSpacing_int";
      case 3180:
        return "c_QHBoxLayout__sizeHint";
      case 3234:
        return "c_QHBoxLayout__spacing";
      case 3236:
        return "c_QHBoxLayout__takeAt_int";
      case 3181:
        return "c_QHBoxLayout__widget";
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
            'c_QHBoxLayout__registerVirtualMethodCallback')
        .asFunction();
    final callback3187 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QBoxLayout.addItem_calledFromC);
    registerCallback(thisCpp, callback3187, 3187);
    const callbackExcept3195 = 0;
    final callback3195 = ffi.Pointer.fromFunction<int_Func_voidstar_FFI>(
        QBoxLayout.count_calledFromC, callbackExcept3195);
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
            QBoxLayout.itemAt_calledFromC);
    registerCallback(thisCpp, callback3214, 3214);
    final callback3232 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_FFI>(
            QBoxLayout.setSpacing_calledFromC);
    registerCallback(thisCpp, callback3232, 3232);
    const callbackExcept3234 = 0;
    final callback3234 = ffi.Pointer.fromFunction<int_Func_voidstar_FFI>(
        QBoxLayout.spacing_calledFromC, callbackExcept3234);
    registerCallback(thisCpp, callback3234, 3234);
    final callback3236 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_ffi_Int32_FFI>(
            QBoxLayout.takeAt_calledFromC);
    registerCallback(thisCpp, callback3236, 3236);
  }
}
