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

class QScrollArea extends QAbstractScrollArea {
  QScrollArea.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QScrollArea.init() : super.init() {}
  factory QScrollArea.fromCache(var cppPointer, [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QScrollArea;
    }
    return QScrollArea.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QScrollArea_Finalizer";
  } //QScrollArea(QWidget * parent)

  QScrollArea({required QWidget? parent}) : super.init() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QScrollArea__constructor_QWidget')
        .asFunction();
    thisCpp = func(parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  }
  static void changeEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QScrollArea;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QScrollArea::changeEvent(QEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.changeEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QEvent.fromCppPointer(arg__1));
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QScrollArea;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QScrollArea::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  }

  static int devType_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QScrollArea;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QScrollArea::devType() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.devType();
    return result;
  } // ensureVisible(int x, int y, int xmargin, int ymargin)

  ensureVisible(int x, int y, {int xmargin = 50, int ymargin = 50}) {
    final void_Func_voidstar_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QScrollArea__ensureVisible_int_int_int_int')
        .asFunction();
    func(thisCpp, x, y, xmargin, ymargin);
  } // ensureWidgetVisible(QWidget * childWidget, int xmargin, int ymargin)

  ensureWidgetVisible(QWidget? childWidget,
      {int xmargin = 50, int ymargin = 50}) {
    final void_Func_voidstar_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QScrollArea__ensureWidgetVisible_QWidget_int_int')
        .asFunction();
    func(thisCpp, childWidget == null ? ffi.nullptr : childWidget.thisCpp,
        xmargin, ymargin);
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QScrollArea;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QScrollArea::event(QEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.event((arg__1 == null || arg__1.address == 0)
        ? null
        : QEvent.fromCppPointer(arg__1));
    return result ? 1 : 0;
  }

  static int eventFilter_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void>? arg__1, ffi.Pointer<void>? arg__2) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QScrollArea;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QScrollArea::eventFilter(QObject * arg__1, QEvent * arg__2)! (${thisCpp.address})");
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

  static int focusNextPrevChild_calledFromC(
      ffi.Pointer<void> thisCpp, int next) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QScrollArea;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QScrollArea::focusNextPrevChild(bool next)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.focusNextPrevChild(next != 0);
    return result ? 1 : 0;
  }

  static int hasHeightForWidth_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QScrollArea;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QScrollArea::hasHeightForWidth() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.hasHeightForWidth();
    return result ? 1 : 0;
  }

  static int heightForWidth_calledFromC(ffi.Pointer<void> thisCpp, int arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QScrollArea;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QScrollArea::heightForWidth(int arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.heightForWidth(arg__1);
    return result;
  }

  static void initPainter_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? painter) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QScrollArea;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QScrollArea::initPainter(QPainter * painter) const! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.initPainter((painter == null || painter.address == 0)
        ? null
        : QPainter.fromCppPointer(painter));
  }

  static void leaveEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QScrollArea;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QScrollArea::leaveEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.leaveEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  }

  static ffi.Pointer<void> minimumSizeHint_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QScrollArea;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QScrollArea::minimumSizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.minimumSizeHint();
    return result.thisCpp;
  }

  static void mouseDoubleClickEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QScrollArea;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QScrollArea::mouseDoubleClickEvent(QMouseEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseDoubleClickEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(arg__1));
  }

  static void mouseMoveEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QScrollArea;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QScrollArea::mouseMoveEvent(QMouseEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseMoveEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(arg__1));
  }

  static void mousePressEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QScrollArea;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QScrollArea::mousePressEvent(QMouseEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mousePressEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(arg__1));
  }

  static void mouseReleaseEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QScrollArea;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QScrollArea::mouseReleaseEvent(QMouseEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseReleaseEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(arg__1));
  }

  static void paintEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QScrollArea;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QScrollArea::paintEvent(QPaintEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.paintEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QPaintEvent.fromCppPointer(arg__1));
  }

  static void scrollContentsBy_calledFromC(
      ffi.Pointer<void> thisCpp, int dx, int dy) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QScrollArea;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QScrollArea::scrollContentsBy(int dx, int dy)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.scrollContentsBy(dx, dy);
  }

  static void setVisible_calledFromC(ffi.Pointer<void> thisCpp, int visible) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QScrollArea;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QScrollArea::setVisible(bool visible)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setVisible(visible != 0);
  } // setWidget(QWidget * widget)

  setWidget(QWidget? widget) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QScrollArea__setWidget_QWidget')
        .asFunction();
    func(thisCpp, widget == null ? ffi.nullptr : widget.thisCpp);
  } // setWidgetResizable(bool resizable)

  setWidgetResizable(bool resizable) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QScrollArea__setWidgetResizable_bool')
        .asFunction();
    func(thisCpp, resizable ? 1 : 0);
  }

  static void setupViewport_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? viewport) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QScrollArea;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QScrollArea::setupViewport(QWidget * viewport)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setupViewport((viewport == null || viewport.address == 0)
        ? null
        : QWidget.fromCppPointer(viewport));
  }

  static ffi.Pointer<void> sharedPainter_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QScrollArea;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QScrollArea::sharedPainter() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sharedPainter();
    return result.thisCpp;
  }

  static ffi.Pointer<void> sizeHint_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QScrollArea;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QScrollArea::sizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sizeHint();
    return result.thisCpp;
  } // takeWidget()

  QWidget takeWidget() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QScrollArea__takeWidget')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QWidget.fromCppPointer(result, false);
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QScrollArea__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  }

  static int viewportEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QScrollArea;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QScrollArea::viewportEvent(QEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.viewportEvent(
        (arg__1 == null || arg__1.address == 0)
            ? null
            : QEvent.fromCppPointer(arg__1));
    return result ? 1 : 0;
  }

  static ffi.Pointer<void> viewportSizeHint_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QScrollArea;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QScrollArea::viewportSizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.viewportSizeHint();
    return result.thisCpp;
  } // widget() const

  QWidget widget() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QScrollArea__widget')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QWidget.fromCppPointer(result, false);
  } // widgetResizable() const

  bool widgetResizable() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QScrollArea__widgetResizable')
        .asFunction();
    return func(thisCpp) != 0;
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QScrollArea__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 1128:
        return "c_QScrollArea__changeEvent_QEvent";
      case 946:
        return "c_QScrollArea__customEvent_QEvent";
      case 1145:
        return "c_QScrollArea__devType";
      case 956:
        return "c_QScrollArea__event_QEvent";
      case 957:
        return "c_QScrollArea__eventFilter_QObject_QEvent";
      case 1155:
        return "c_QScrollArea__focusNextPrevChild_bool";
      case 1169:
        return "c_QScrollArea__hasHeightForWidth";
      case 1173:
        return "c_QScrollArea__heightForWidth_int";
      case 1176:
        return "c_QScrollArea__initPainter_QPainter";
      case 1202:
        return "c_QScrollArea__leaveEvent_QEvent";
      case 1222:
        return "c_QScrollArea__minimumSizeHint";
      case 1224:
        return "c_QScrollArea__mouseDoubleClickEvent_QMouseEvent";
      case 1226:
        return "c_QScrollArea__mouseMoveEvent_QMouseEvent";
      case 1227:
        return "c_QScrollArea__mousePressEvent_QMouseEvent";
      case 1228:
        return "c_QScrollArea__mouseReleaseEvent_QMouseEvent";
      case 1235:
        return "c_QScrollArea__paintEvent_QPaintEvent";
      case 5218:
        return "c_QScrollArea__scrollContentsBy_int_int";
      case 1314:
        return "c_QScrollArea__setVisible_bool";
      case 5226:
        return "c_QScrollArea__setupViewport_QWidget";
      case 1323:
        return "c_QScrollArea__sharedPainter";
      case 1331:
        return "c_QScrollArea__sizeHint";
      case 5229:
        return "c_QScrollArea__viewportEvent_QEvent";
      case 5230:
        return "c_QScrollArea__viewportSizeHint";
    }
    return super.cFunctionSymbolName(methodId);
  }

  static String methodNameFromId(int methodId) {
    switch (methodId) {
      case 1128:
        return "changeEvent";
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
      case 1235:
        return "paintEvent";
      case 5218:
        return "scrollContentsBy";
      case 1314:
        return "setVisible";
      case 5226:
        return "setupViewport";
      case 1323:
        return "sharedPainter";
      case 1331:
        return "sizeHint";
      case 5229:
        return "viewportEvent";
      case 5230:
        return "viewportSizeHint";
    }
    throw Error();
  }

  void registerCallbacks() {
    assert(thisCpp != null);
    final RegisterMethodIsReimplementedCallback registerCallback = _dylib
        .lookup<ffi.NativeFunction<RegisterMethodIsReimplementedCallback_FFI>>(
            'c_QScrollArea__registerVirtualMethodCallback')
        .asFunction();
    final callback1128 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QFrame.changeEvent_calledFromC);
    registerCallback(thisCpp, callback1128, 1128);
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
            QScrollArea.event_calledFromC, callbackExcept956);
    registerCallback(thisCpp, callback956, 956);
    const callbackExcept957 = 0;
    final callback957 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_voidstar_FFI>(
            QScrollArea.eventFilter_calledFromC, callbackExcept957);
    registerCallback(thisCpp, callback957, 957);
    const callbackExcept1155 = 0;
    final callback1155 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_ffi_Int8_FFI>(
            QScrollArea.focusNextPrevChild_calledFromC, callbackExcept1155);
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
        QAbstractScrollArea.minimumSizeHint_calledFromC);
    registerCallback(thisCpp, callback1222, 1222);
    final callback1224 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractScrollArea.mouseDoubleClickEvent_calledFromC);
    registerCallback(thisCpp, callback1224, 1224);
    final callback1226 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractScrollArea.mouseMoveEvent_calledFromC);
    registerCallback(thisCpp, callback1226, 1226);
    final callback1227 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractScrollArea.mousePressEvent_calledFromC);
    registerCallback(thisCpp, callback1227, 1227);
    final callback1228 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractScrollArea.mouseReleaseEvent_calledFromC);
    registerCallback(thisCpp, callback1228, 1228);
    final callback1235 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractScrollArea.paintEvent_calledFromC);
    registerCallback(thisCpp, callback1235, 1235);
    final callback5218 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>(
            QScrollArea.scrollContentsBy_calledFromC);
    registerCallback(thisCpp, callback5218, 5218);
    final callback1314 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int8_FFI>(
            QWidget.setVisible_calledFromC);
    registerCallback(thisCpp, callback1314, 1314);
    final callback5226 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractScrollArea.setupViewport_calledFromC);
    registerCallback(thisCpp, callback5226, 5226);
    final callback1323 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QWidget.sharedPainter_calledFromC);
    registerCallback(thisCpp, callback1323, 1323);
    final callback1331 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QScrollArea.sizeHint_calledFromC);
    registerCallback(thisCpp, callback1331, 1331);
    const callbackExcept5229 = 0;
    final callback5229 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_FFI>(
            QAbstractScrollArea.viewportEvent_calledFromC, callbackExcept5229);
    registerCallback(thisCpp, callback5229, 5229);
    final callback5230 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QScrollArea.viewportSizeHint_calledFromC);
    registerCallback(thisCpp, callback5230, 5230);
  }
}
