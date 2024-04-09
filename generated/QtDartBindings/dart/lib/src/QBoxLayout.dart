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

class QBoxLayout extends QLayout {
  QBoxLayout.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QBoxLayout.init() : super.init() {}
  factory QBoxLayout.fromCache(var cppPointer, [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QBoxLayout;
    }
    return QBoxLayout.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QBoxLayout_Finalizer";
  }

  static void addItem_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QBoxLayout::addItem(QLayoutItem * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.addItem((arg__1 == null || arg__1.address == 0)
        ? null
        : QLayoutItem.fromCppPointer(arg__1));
  } // addLayout(QLayout * layout, int stretch)

  addLayout(QLayout? layout, {int stretch = 0}) {
    final void_Func_voidstar_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            'c_QBoxLayout__addLayout_QLayout_int')
        .asFunction();
    func(thisCpp, layout == null ? ffi.nullptr : layout.thisCpp, stretch);
  } // addSpacing(int size)

  addSpacing(int size) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QBoxLayout__addSpacing_int')
        .asFunction();
    func(thisCpp, size);
  } // addStretch(int stretch)

  addStretch({int stretch = 0}) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QBoxLayout__addStretch_int')
        .asFunction();
    func(thisCpp, stretch);
  } // addStrut(int arg__1)

  addStrut(int arg__1) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QBoxLayout__addStrut_int')
        .asFunction();
    func(thisCpp, arg__1);
  } // addWidget(QWidget * arg__1, int stretch)

  addWidget(QWidget? arg__1, {int stretch = 0}) {
    final void_Func_voidstar_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            'c_QBoxLayout__addWidget_QWidget_int')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp, stretch);
  }

  static int count_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QBoxLayout::count() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.count();
    return result;
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QBoxLayout::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QBoxLayout::event(QEvent * event)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QBoxLayout::eventFilter(QObject * watched, QEvent * event)! (${thisCpp.address})");
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
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QBoxLayout::expandingDirections() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.expandingDirections();
    return result;
  }

  static ffi.Pointer<void> geometry_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QBoxLayout::geometry() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.geometry();
    return result.thisCpp;
  }

  static int hasHeightForWidth_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QBoxLayout::hasHeightForWidth() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.hasHeightForWidth();
    return result ? 1 : 0;
  }

  static int heightForWidth_calledFromC(ffi.Pointer<void> thisCpp, int arg__1) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QBoxLayout::heightForWidth(int arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.heightForWidth(arg__1);
    return result;
  }

  static int indexOf_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QBoxLayout::indexOf(const QLayoutItem * arg__1) const! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QBoxLayout::indexOf(const QWidget * arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.indexOf_2(
        (arg__1 == null || arg__1.address == 0)
            ? null
            : QWidget.fromCppPointer(arg__1));
    return result;
  } // insertItem(int index, QLayoutItem * arg__2)

  insertItem(int index, QLayoutItem? arg__2) {
    final void_Func_voidstar_int_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_voidstar_FFI>>(
            'c_QBoxLayout__insertItem_int_QLayoutItem')
        .asFunction();
    func(thisCpp, index, arg__2 == null ? ffi.nullptr : arg__2.thisCpp);
  } // insertLayout(int index, QLayout * layout, int stretch)

  insertLayout(int index, QLayout? layout, {int stretch = 0}) {
    final void_Func_voidstar_int_voidstar_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_voidstar_ffi_Int32_FFI>>(
            'c_QBoxLayout__insertLayout_int_QLayout_int')
        .asFunction();
    func(
        thisCpp, index, layout == null ? ffi.nullptr : layout.thisCpp, stretch);
  } // insertSpacing(int index, int size)

  insertSpacing(int index, int size) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QBoxLayout__insertSpacing_int_int')
        .asFunction();
    func(thisCpp, index, size);
  } // insertStretch(int index, int stretch)

  insertStretch(int index, {int stretch = 0}) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QBoxLayout__insertStretch_int_int')
        .asFunction();
    func(thisCpp, index, stretch);
  } // insertWidget(int index, QWidget * widget, int stretch)

  insertWidget(int index, QWidget? widget, {int stretch = 0}) {
    final void_Func_voidstar_int_voidstar_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_voidstar_ffi_Int32_FFI>>(
            'c_QBoxLayout__insertWidget_int_QWidget_int')
        .asFunction();
    func(
        thisCpp, index, widget == null ? ffi.nullptr : widget.thisCpp, stretch);
  }

  static void invalidate_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QBoxLayout::invalidate()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.invalidate();
  }

  static int isEmpty_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QBoxLayout::isEmpty() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.isEmpty();
    return result ? 1 : 0;
  }

  static ffi.Pointer<void> itemAt_calledFromC(
      ffi.Pointer<void> thisCpp, int arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QBoxLayout::itemAt(int arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.itemAt(arg__1);
    return result.thisCpp;
  }

  static ffi.Pointer<void> layout_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QBoxLayout::layout()! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.layout();
    return result.thisCpp;
  }

  static ffi.Pointer<void> maximumSize_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QBoxLayout::maximumSize() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.maximumSize();
    return result.thisCpp;
  }

  static int minimumHeightForWidth_calledFromC(
      ffi.Pointer<void> thisCpp, int arg__1) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QBoxLayout::minimumHeightForWidth(int arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.minimumHeightForWidth(arg__1);
    return result;
  }

  static ffi.Pointer<void> minimumSize_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QBoxLayout::minimumSize() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.minimumSize();
    return result.thisCpp;
  }

  static void setGeometry_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QBoxLayout::setGeometry(const QRect & arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setGeometry((arg__1 == null || arg__1.address == 0)
        ? null
        : QRect.fromCppPointer(arg__1));
  }

  static void setSpacing_calledFromC(ffi.Pointer<void> thisCpp, int spacing) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QBoxLayout::setSpacing(int spacing)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setSpacing(spacing);
  } // setStretch(int index, int stretch)

  setStretch(int index, int stretch) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QBoxLayout__setStretch_int_int')
        .asFunction();
    func(thisCpp, index, stretch);
  } // setStretchFactor(QLayout * l, int stretch)

  bool setStretchFactor(QLayout? l, int stretch) {
    final bool_Func_voidstar_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            'c_QBoxLayout__setStretchFactor_QLayout_int')
        .asFunction();
    return func(thisCpp, l == null ? ffi.nullptr : l.thisCpp, stretch) != 0;
  } // setStretchFactor(QWidget * w, int stretch)

  bool setStretchFactor_2(QWidget? w, int stretch) {
    final bool_Func_voidstar_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            'c_QBoxLayout__setStretchFactor_QWidget_int')
        .asFunction();
    return func(thisCpp, w == null ? ffi.nullptr : w.thisCpp, stretch) != 0;
  }

  static ffi.Pointer<void> sizeHint_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QBoxLayout::sizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sizeHint();
    return result.thisCpp;
  }

  static int spacing_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QBoxLayout::spacing() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.spacing();
    return result;
  } // stretch(int index) const

  int stretch(int index) {
    final int_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_ffi_Int32_FFI>>(
            'c_QBoxLayout__stretch_int')
        .asFunction();
    return func(thisCpp, index);
  }

  static ffi.Pointer<void> takeAt_calledFromC(
      ffi.Pointer<void> thisCpp, int arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QBoxLayout::takeAt(int arg__1)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.takeAt(arg__1);
    return result.thisCpp;
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QBoxLayout__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> widget_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QLayoutItem.s_dartInstanceByCppPtr[thisCpp.address] as QBoxLayout;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QBoxLayout::widget() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.widget();
    return result.thisCpp;
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QBoxLayout__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 3187:
        return "c_QBoxLayout__addItem_QLayoutItem";
      case 3195:
        return "c_QBoxLayout__count";
      case 946:
        return "c_QBoxLayout__customEvent_QEvent";
      case 956:
        return "c_QBoxLayout__event_QEvent";
      case 957:
        return "c_QBoxLayout__eventFilter_QObject_QEvent";
      case 3169:
        return "c_QBoxLayout__expandingDirections";
      case 3170:
        return "c_QBoxLayout__geometry";
      case 3171:
        return "c_QBoxLayout__hasHeightForWidth";
      case 3172:
        return "c_QBoxLayout__heightForWidth_int";
      case 3206:
        return "c_QBoxLayout__indexOf_QLayoutItem";
      case 3207:
        return "c_QBoxLayout__indexOf_QWidget";
      case 3173:
        return "c_QBoxLayout__invalidate";
      case 3174:
        return "c_QBoxLayout__isEmpty";
      case 3214:
        return "c_QBoxLayout__itemAt_int";
      case 3175:
        return "c_QBoxLayout__layout";
      case 3176:
        return "c_QBoxLayout__maximumSize";
      case 3177:
        return "c_QBoxLayout__minimumHeightForWidth_int";
      case 3178:
        return "c_QBoxLayout__minimumSize";
      case 3179:
        return "c_QBoxLayout__setGeometry_QRect";
      case 3232:
        return "c_QBoxLayout__setSpacing_int";
      case 3180:
        return "c_QBoxLayout__sizeHint";
      case 3234:
        return "c_QBoxLayout__spacing";
      case 3236:
        return "c_QBoxLayout__takeAt_int";
      case 3181:
        return "c_QBoxLayout__widget";
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
            'c_QBoxLayout__registerVirtualMethodCallback')
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
