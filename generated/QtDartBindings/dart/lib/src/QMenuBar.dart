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

class QMenuBar extends QWidget {
  QMenuBar.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QMenuBar.init() : super.init() {}
  factory QMenuBar.fromCache(var cppPointer, [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QMenuBar;
    }
    return QMenuBar.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QMenuBar_Finalizer";
  } //QMenuBar(QWidget * parent)

  QMenuBar({required QWidget? parent}) : super.init() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QMenuBar__constructor_QWidget')
        .asFunction();
    thisCpp = func(parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } // actionAt(const QPoint & arg__1) const
  QAction actionAt(QPoint? arg__1) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QMenuBar__actionAt_QPoint')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
    return QAction.fromCppPointer(result, false);
  } // actionGeometry(QAction * arg__1) const

  QRect actionGeometry(QAction? arg__1) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QMenuBar__actionGeometry_QAction')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
    return QRect.fromCppPointer(result, true);
  } // activeAction() const

  QAction activeAction() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QMenuBar__activeAction')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QAction.fromCppPointer(result, false);
  } // addMenu(QMenu * menu)

  QAction addMenu(QMenu? menu) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QMenuBar__addMenu_QMenu')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, menu == null ? ffi.nullptr : menu.thisCpp);
    return QAction.fromCppPointer(result, false);
  } // addMenu(const QIcon & icon, const QString & title)

  QMenu addMenu_2(QIcon icon, String? title) {
    final voidstar_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi
                .NativeFunction<voidstar_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QMenuBar__addMenu_QIcon_QString')
        .asFunction();
    ffi.Pointer<void> result = func(
        thisCpp,
        icon == null ? ffi.nullptr : icon.thisCpp,
        title?.toNativeUtf8() ?? ffi.nullptr);
    return QMenu.fromCppPointer(result, false);
  } // addMenu(const QString & title)

  QMenu addMenu_3(String? title) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QMenuBar__addMenu_QString')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, title?.toNativeUtf8() ?? ffi.nullptr);
    return QMenu.fromCppPointer(result, false);
  } // addSeparator()

  QAction addSeparator() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QMenuBar__addSeparator')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QAction.fromCppPointer(result, false);
  }

  static void changeEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenuBar;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenuBar::changeEvent(QEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.changeEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QEvent.fromCppPointer(arg__1));
  } // clear()

  clear() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>('c_QMenuBar__clear')
        .asFunction();
    func(thisCpp);
  } // cornerWidget() const

  QWidget cornerWidget() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QMenuBar__cornerWidget')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QWidget.fromCppPointer(result, false);
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenuBar;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenuBar::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  }

  static int devType_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenuBar;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenuBar::devType() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.devType();
    return result;
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenuBar;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenuBar::event(QEvent * arg__1)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenuBar;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenuBar::eventFilter(QObject * arg__1, QEvent * arg__2)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenuBar;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenuBar::focusNextPrevChild(bool next)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.focusNextPrevChild(next != 0);
    return result ? 1 : 0;
  }

  static int hasHeightForWidth_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenuBar;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenuBar::hasHeightForWidth() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.hasHeightForWidth();
    return result ? 1 : 0;
  }

  static int heightForWidth_calledFromC(ffi.Pointer<void> thisCpp, int arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenuBar;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenuBar::heightForWidth(int arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.heightForWidth(arg__1);
    return result;
  } // hovered(QAction * action)

  hovered(QAction? action) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QMenuBar__hovered_QAction')
        .asFunction();
    func(thisCpp, action == null ? ffi.nullptr : action.thisCpp);
  }

  void onHovered(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QMenuBar__onHovered_QAction')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onHovered_callback);
    final callbackMethod = onHovered_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onHovered_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenuBar;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onHovered_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static void initPainter_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? painter) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenuBar;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenuBar::initPainter(QPainter * painter) const! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.initPainter((painter == null || painter.address == 0)
        ? null
        : QPainter.fromCppPointer(painter));
  } // insertMenu(QAction * before, QMenu * menu)

  QAction insertMenu(QAction? before, QMenu? menu) {
    final voidstar_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi
                .NativeFunction<voidstar_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QMenuBar__insertMenu_QAction_QMenu')
        .asFunction();
    ffi.Pointer<void> result = func(
        thisCpp,
        before == null ? ffi.nullptr : before.thisCpp,
        menu == null ? ffi.nullptr : menu.thisCpp);
    return QAction.fromCppPointer(result, false);
  } // insertSeparator(QAction * before)

  QAction insertSeparator(QAction? before) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QMenuBar__insertSeparator_QAction')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, before == null ? ffi.nullptr : before.thisCpp);
    return QAction.fromCppPointer(result, false);
  } // isDefaultUp() const

  bool isDefaultUp() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QMenuBar__isDefaultUp')
        .asFunction();
    return func(thisCpp) != 0;
  } // isNativeMenuBar() const

  bool isNativeMenuBar() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QMenuBar__isNativeMenuBar')
        .asFunction();
    return func(thisCpp) != 0;
  }

  static void leaveEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenuBar;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenuBar::leaveEvent(QEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.leaveEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QEvent.fromCppPointer(arg__1));
  }

  static ffi.Pointer<void> minimumSizeHint_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenuBar;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenuBar::minimumSizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.minimumSizeHint();
    return result.thisCpp;
  }

  static void mouseDoubleClickEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenuBar;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenuBar::mouseDoubleClickEvent(QMouseEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseDoubleClickEvent((event == null || event.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(event));
  }

  static void mouseMoveEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenuBar;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenuBar::mouseMoveEvent(QMouseEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseMoveEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(arg__1));
  }

  static void mousePressEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenuBar;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenuBar::mousePressEvent(QMouseEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mousePressEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(arg__1));
  }

  static void mouseReleaseEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenuBar;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenuBar::mouseReleaseEvent(QMouseEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseReleaseEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(arg__1));
  }

  static void paintEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenuBar;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenuBar::paintEvent(QPaintEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.paintEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QPaintEvent.fromCppPointer(arg__1));
  } // setActiveAction(QAction * action)

  setActiveAction(QAction? action) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QMenuBar__setActiveAction_QAction')
        .asFunction();
    func(thisCpp, action == null ? ffi.nullptr : action.thisCpp);
  } // setCornerWidget(QWidget * w)

  setCornerWidget(QWidget? w) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QMenuBar__setCornerWidget_QWidget')
        .asFunction();
    func(thisCpp, w == null ? ffi.nullptr : w.thisCpp);
  } // setDefaultUp(bool arg__1)

  setDefaultUp(bool arg__1) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QMenuBar__setDefaultUp_bool')
        .asFunction();
    func(thisCpp, arg__1 ? 1 : 0);
  } // setNativeMenuBar(bool nativeMenuBar)

  setNativeMenuBar(bool nativeMenuBar) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QMenuBar__setNativeMenuBar_bool')
        .asFunction();
    func(thisCpp, nativeMenuBar ? 1 : 0);
  }

  static void setVisible_calledFromC(ffi.Pointer<void> thisCpp, int visible) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenuBar;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenuBar::setVisible(bool visible)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setVisible(visible != 0);
  }

  static ffi.Pointer<void> sharedPainter_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenuBar;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenuBar::sharedPainter() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sharedPainter();
    return result.thisCpp;
  }

  static ffi.Pointer<void> sizeHint_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenuBar;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenuBar::sizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sizeHint();
    return result.thisCpp;
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QMenuBar__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  } // triggered(QAction * action)

  triggered(QAction? action) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QMenuBar__triggered_QAction')
        .asFunction();
    func(thisCpp, action == null ? ffi.nullptr : action.thisCpp);
  }

  void onTriggered(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QMenuBar__onTriggered_QAction')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onTriggered_callback);
    final callbackMethod = onTriggered_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onTriggered_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenuBar;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onTriggered_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QMenuBar__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 1128:
        return "c_QMenuBar__changeEvent_QEvent";
      case 946:
        return "c_QMenuBar__customEvent_QEvent";
      case 1145:
        return "c_QMenuBar__devType";
      case 956:
        return "c_QMenuBar__event_QEvent";
      case 957:
        return "c_QMenuBar__eventFilter_QObject_QEvent";
      case 1155:
        return "c_QMenuBar__focusNextPrevChild_bool";
      case 1169:
        return "c_QMenuBar__hasHeightForWidth";
      case 1173:
        return "c_QMenuBar__heightForWidth_int";
      case 1176:
        return "c_QMenuBar__initPainter_QPainter";
      case 1202:
        return "c_QMenuBar__leaveEvent_QEvent";
      case 1222:
        return "c_QMenuBar__minimumSizeHint";
      case 1224:
        return "c_QMenuBar__mouseDoubleClickEvent_QMouseEvent";
      case 1226:
        return "c_QMenuBar__mouseMoveEvent_QMouseEvent";
      case 1227:
        return "c_QMenuBar__mousePressEvent_QMouseEvent";
      case 1228:
        return "c_QMenuBar__mouseReleaseEvent_QMouseEvent";
      case 1235:
        return "c_QMenuBar__paintEvent_QPaintEvent";
      case 1314:
        return "c_QMenuBar__setVisible_bool";
      case 1323:
        return "c_QMenuBar__sharedPainter";
      case 1331:
        return "c_QMenuBar__sizeHint";
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
            'c_QMenuBar__registerVirtualMethodCallback')
        .asFunction();
    final callback1128 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QMenuBar.changeEvent_calledFromC);
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
            QMenuBar.event_calledFromC, callbackExcept956);
    registerCallback(thisCpp, callback956, 956);
    const callbackExcept957 = 0;
    final callback957 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_voidstar_FFI>(
            QMenuBar.eventFilter_calledFromC, callbackExcept957);
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
            QMenuBar.heightForWidth_calledFromC, callbackExcept1173);
    registerCallback(thisCpp, callback1173, 1173);
    final callback1176 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QWidget.initPainter_calledFromC);
    registerCallback(thisCpp, callback1176, 1176);
    final callback1202 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QMenuBar.leaveEvent_calledFromC);
    registerCallback(thisCpp, callback1202, 1202);
    final callback1222 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QMenuBar.minimumSizeHint_calledFromC);
    registerCallback(thisCpp, callback1222, 1222);
    final callback1224 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QWidget.mouseDoubleClickEvent_calledFromC);
    registerCallback(thisCpp, callback1224, 1224);
    final callback1226 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QMenuBar.mouseMoveEvent_calledFromC);
    registerCallback(thisCpp, callback1226, 1226);
    final callback1227 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QMenuBar.mousePressEvent_calledFromC);
    registerCallback(thisCpp, callback1227, 1227);
    final callback1228 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QMenuBar.mouseReleaseEvent_calledFromC);
    registerCallback(thisCpp, callback1228, 1228);
    final callback1235 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QMenuBar.paintEvent_calledFromC);
    registerCallback(thisCpp, callback1235, 1235);
    final callback1314 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int8_FFI>(
            QMenuBar.setVisible_calledFromC);
    registerCallback(thisCpp, callback1314, 1314);
    final callback1323 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QWidget.sharedPainter_calledFromC);
    registerCallback(thisCpp, callback1323, 1323);
    final callback1331 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QMenuBar.sizeHint_calledFromC);
    registerCallback(thisCpp, callback1331, 1331);
  }
}
