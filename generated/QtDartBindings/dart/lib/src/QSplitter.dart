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

class QSplitter extends QFrame {
  QSplitter.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QSplitter.init() : super.init() {}
  factory QSplitter.fromCache(var cppPointer, [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QSplitter;
    }
    return QSplitter.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QSplitter_Finalizer";
  } //QSplitter(QWidget * parent)

  QSplitter({required QWidget? parent}) : super.init() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QSplitter__constructor_QWidget')
        .asFunction();
    thisCpp = func(parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } //QSplitter(Qt::Orientation arg__1, QWidget * parent)
  QSplitter.ctor2(int arg__1, {required QWidget? parent}) : super.init() {
    final voidstar_Func_int_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_ffi_Int32_voidstar_FFI>>(
            'c_QSplitter__constructor_Orientation_QWidget')
        .asFunction();
    thisCpp = func(arg__1, parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } // addWidget(QWidget * widget)
  addWidget(QWidget? widget) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QSplitter__addWidget_QWidget')
        .asFunction();
    func(thisCpp, widget == null ? ffi.nullptr : widget.thisCpp);
  }

  static void changeEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QSplitter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSplitter::changeEvent(QEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.changeEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QEvent.fromCppPointer(arg__1));
  } // childrenCollapsible() const

  bool childrenCollapsible() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QSplitter__childrenCollapsible')
        .asFunction();
    return func(thisCpp) != 0;
  } // closestLegalPosition(int arg__1, int arg__2)

  int closestLegalPosition(int arg__1, int arg__2) {
    final int_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QSplitter__closestLegalPosition_int_int')
        .asFunction();
    return func(thisCpp, arg__1, arg__2);
  } // count() const

  int count() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QSplitter__count')
        .asFunction();
    return func(thisCpp);
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QSplitter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSplitter::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  }

  static int devType_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QSplitter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSplitter::devType() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.devType();
    return result;
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QSplitter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSplitter::event(QEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.event((arg__1 == null || arg__1.address == 0)
        ? null
        : QEvent.fromCppPointer(arg__1));
    return result ? 1 : 0;
  }

  static int eventFilter_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void>? watched, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QSplitter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSplitter::eventFilter(QObject * watched, QEvent * event)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QSplitter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSplitter::focusNextPrevChild(bool next)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.focusNextPrevChild(next != 0);
    return result ? 1 : 0;
  } // handleWidth() const

  int handleWidth() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QSplitter__handleWidth')
        .asFunction();
    return func(thisCpp);
  }

  static int hasHeightForWidth_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QSplitter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSplitter::hasHeightForWidth() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.hasHeightForWidth();
    return result ? 1 : 0;
  }

  static int heightForWidth_calledFromC(ffi.Pointer<void> thisCpp, int arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QSplitter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSplitter::heightForWidth(int arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.heightForWidth(arg__1);
    return result;
  } // indexOf(QWidget * w) const

  int indexOf(QWidget? w) {
    final int_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_voidstar_FFI>>(
            'c_QSplitter__indexOf_QWidget')
        .asFunction();
    return func(thisCpp, w == null ? ffi.nullptr : w.thisCpp);
  }

  static void initPainter_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? painter) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QSplitter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSplitter::initPainter(QPainter * painter) const! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.initPainter((painter == null || painter.address == 0)
        ? null
        : QPainter.fromCppPointer(painter));
  } // insertWidget(int index, QWidget * widget)

  insertWidget(int index, QWidget? widget) {
    final void_Func_voidstar_int_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_voidstar_FFI>>(
            'c_QSplitter__insertWidget_int_QWidget')
        .asFunction();
    func(thisCpp, index, widget == null ? ffi.nullptr : widget.thisCpp);
  } // isCollapsible(int index) const

  bool isCollapsible(int index) {
    final bool_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_ffi_Int32_FFI>>(
            'c_QSplitter__isCollapsible_int')
        .asFunction();
    return func(thisCpp, index) != 0;
  }

  static void leaveEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QSplitter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSplitter::leaveEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.leaveEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  }

  static ffi.Pointer<void> minimumSizeHint_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QSplitter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSplitter::minimumSizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.minimumSizeHint();
    return result.thisCpp;
  }

  static void mouseDoubleClickEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QSplitter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSplitter::mouseDoubleClickEvent(QMouseEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseDoubleClickEvent((event == null || event.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(event));
  }

  static void mouseMoveEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QSplitter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSplitter::mouseMoveEvent(QMouseEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseMoveEvent((event == null || event.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(event));
  }

  static void mousePressEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QSplitter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSplitter::mousePressEvent(QMouseEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mousePressEvent((event == null || event.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(event));
  }

  static void mouseReleaseEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QSplitter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSplitter::mouseReleaseEvent(QMouseEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseReleaseEvent((event == null || event.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(event));
  } // moveSplitter(int pos, int index)

  moveSplitter(int pos, int index) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QSplitter__moveSplitter_int_int')
        .asFunction();
    func(thisCpp, pos, index);
  } // opaqueResize() const

  bool opaqueResize() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QSplitter__opaqueResize')
        .asFunction();
    return func(thisCpp) != 0;
  } // orientation() const

  int orientation() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QSplitter__orientation')
        .asFunction();
    return func(thisCpp);
  }

  static void paintEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QSplitter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSplitter::paintEvent(QPaintEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.paintEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QPaintEvent.fromCppPointer(arg__1));
  } // refresh()

  refresh() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QSplitter__refresh')
        .asFunction();
    func(thisCpp);
  } // replaceWidget(int index, QWidget * widget)

  QWidget replaceWidget(int index, QWidget? widget) {
    final voidstar_Func_voidstar_int_voidstar func = _dylib
        .lookup<
                ffi
                .NativeFunction<voidstar_Func_voidstar_ffi_Int32_voidstar_FFI>>(
            'c_QSplitter__replaceWidget_int_QWidget')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, index, widget == null ? ffi.nullptr : widget.thisCpp);
    return QWidget.fromCppPointer(result, false);
  } // restoreState(const QByteArray & state)

  bool restoreState(QByteArray? state) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_QSplitter__restoreState_QByteArray')
        .asFunction();
    return func(thisCpp, state == null ? ffi.nullptr : state.thisCpp) != 0;
  } // saveState() const

  QByteArray saveState() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QSplitter__saveState')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QByteArray.fromCppPointer(result, true);
  } // setChildrenCollapsible(bool arg__1)

  setChildrenCollapsible(bool arg__1) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QSplitter__setChildrenCollapsible_bool')
        .asFunction();
    func(thisCpp, arg__1 ? 1 : 0);
  } // setCollapsible(int index, bool arg__2)

  setCollapsible(int index, bool arg__2) {
    final void_Func_voidstar_int_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int8_FFI>>(
            'c_QSplitter__setCollapsible_int_bool')
        .asFunction();
    func(thisCpp, index, arg__2 ? 1 : 0);
  } // setHandleWidth(int arg__1)

  setHandleWidth(int arg__1) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QSplitter__setHandleWidth_int')
        .asFunction();
    func(thisCpp, arg__1);
  } // setOpaqueResize(bool opaque)

  setOpaqueResize({bool opaque = true}) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QSplitter__setOpaqueResize_bool')
        .asFunction();
    func(thisCpp, opaque ? 1 : 0);
  } // setOrientation(Qt::Orientation arg__1)

  setOrientation(int arg__1) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QSplitter__setOrientation_Orientation')
        .asFunction();
    func(thisCpp, arg__1);
  } // setRubberBand(int position)

  setRubberBand(int position) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QSplitter__setRubberBand_int')
        .asFunction();
    func(thisCpp, position);
  } // setSizes(const QList<int > & list)

  setSizes(QList? list) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QSplitter__setSizes_QList_int')
        .asFunction();
    func(thisCpp, list == null ? ffi.nullptr : list.thisCpp);
  } // setStretchFactor(int index, int stretch)

  setStretchFactor(int index, int stretch) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QSplitter__setStretchFactor_int_int')
        .asFunction();
    func(thisCpp, index, stretch);
  }

  static void setVisible_calledFromC(ffi.Pointer<void> thisCpp, int visible) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QSplitter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSplitter::setVisible(bool visible)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setVisible(visible != 0);
  }

  static ffi.Pointer<void> sharedPainter_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QSplitter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSplitter::sharedPainter() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sharedPainter();
    return result.thisCpp;
  }

  static ffi.Pointer<void> sizeHint_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QSplitter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QSplitter::sizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sizeHint();
    return result.thisCpp;
  } // sizes() const

  QList sizes() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QSplitter__sizes')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QList<int>.fromCppPointer(result, true);
  } // splitterMoved(int pos, int index)

  splitterMoved(int pos, int index) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QSplitter__splitterMoved_int_int')
        .asFunction();
    func(thisCpp, pos, index);
  }

  void onSplitterMoved(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QSplitter__onSplitterMoved_int_int')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onSplitterMoved_callback);
    final callbackMethod = onSplitterMoved_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onSplitterMoved_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QSplitter;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onSplitterMoved_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QSplitter__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  } // widget(int index) const

  QWidget widget(int index) {
    final voidstar_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
            'c_QSplitter__widget_int')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, index);
    return QWidget.fromCppPointer(result, false);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QSplitter__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 1128:
        return "c_QSplitter__changeEvent_QEvent";
      case 946:
        return "c_QSplitter__customEvent_QEvent";
      case 1145:
        return "c_QSplitter__devType";
      case 956:
        return "c_QSplitter__event_QEvent";
      case 957:
        return "c_QSplitter__eventFilter_QObject_QEvent";
      case 1155:
        return "c_QSplitter__focusNextPrevChild_bool";
      case 1169:
        return "c_QSplitter__hasHeightForWidth";
      case 1173:
        return "c_QSplitter__heightForWidth_int";
      case 1176:
        return "c_QSplitter__initPainter_QPainter";
      case 1202:
        return "c_QSplitter__leaveEvent_QEvent";
      case 1222:
        return "c_QSplitter__minimumSizeHint";
      case 1224:
        return "c_QSplitter__mouseDoubleClickEvent_QMouseEvent";
      case 1226:
        return "c_QSplitter__mouseMoveEvent_QMouseEvent";
      case 1227:
        return "c_QSplitter__mousePressEvent_QMouseEvent";
      case 1228:
        return "c_QSplitter__mouseReleaseEvent_QMouseEvent";
      case 1235:
        return "c_QSplitter__paintEvent_QPaintEvent";
      case 1314:
        return "c_QSplitter__setVisible_bool";
      case 1323:
        return "c_QSplitter__sharedPainter";
      case 1331:
        return "c_QSplitter__sizeHint";
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
            'c_QSplitter__registerVirtualMethodCallback')
        .asFunction();
    final callback1128 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QSplitter.changeEvent_calledFromC);
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
            QSplitter.event_calledFromC, callbackExcept956);
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
    final callback1176 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QWidget.initPainter_calledFromC);
    registerCallback(thisCpp, callback1176, 1176);
    final callback1202 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QWidget.leaveEvent_calledFromC);
    registerCallback(thisCpp, callback1202, 1202);
    final callback1222 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QSplitter.minimumSizeHint_calledFromC);
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
    final callback1235 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QFrame.paintEvent_calledFromC);
    registerCallback(thisCpp, callback1235, 1235);
    final callback1314 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int8_FFI>(
            QWidget.setVisible_calledFromC);
    registerCallback(thisCpp, callback1314, 1314);
    final callback1323 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QWidget.sharedPainter_calledFromC);
    registerCallback(thisCpp, callback1323, 1323);
    final callback1331 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QSplitter.sizeHint_calledFromC);
    registerCallback(thisCpp, callback1331, 1331);
  }
}
