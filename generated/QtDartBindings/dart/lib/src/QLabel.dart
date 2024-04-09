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

class QLabel extends QFrame {
  QLabel.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QLabel.init() : super.init() {}
  factory QLabel.fromCache(var cppPointer, [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QLabel;
    }
    return QLabel.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QLabel_Finalizer";
  } //QLabel(QWidget * parent)

  QLabel({required QWidget? parent}) : super.init() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QLabel__constructor_QWidget')
        .asFunction();
    thisCpp = func(parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } //QLabel(const QString & text, QWidget * parent)
  QLabel.ctor2(String? text, {required QWidget? parent}) : super.init() {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QLabel__constructor_QString_QWidget')
        .asFunction();
    thisCpp = func(text?.toNativeUtf8() ?? ffi.nullptr,
        parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } // buddy() const
  QWidget buddy() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QLabel__buddy')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QWidget.fromCppPointer(result, false);
  }

  static void changeEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QLabel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLabel::changeEvent(QEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.changeEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QEvent.fromCppPointer(arg__1));
  } // clear()

  clear() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>('c_QLabel__clear')
        .asFunction();
    func(thisCpp);
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QLabel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLabel::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  }

  static int devType_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QLabel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLabel::devType() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.devType();
    return result;
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? e) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QLabel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLabel::event(QEvent * e)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance
        .event((e == null || e.address == 0) ? null : QEvent.fromCppPointer(e));
    return result ? 1 : 0;
  }

  static int eventFilter_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void>? watched, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QLabel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLabel::eventFilter(QObject * watched, QEvent * event)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QLabel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLabel::focusNextPrevChild(bool next)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.focusNextPrevChild(next != 0);
    return result ? 1 : 0;
  }

  static int hasHeightForWidth_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QLabel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLabel::hasHeightForWidth() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.hasHeightForWidth();
    return result ? 1 : 0;
  } // hasScaledContents() const

  bool hasScaledContents() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QLabel__hasScaledContents')
        .asFunction();
    return func(thisCpp) != 0;
  } // hasSelectedText() const

  bool hasSelectedText() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QLabel__hasSelectedText')
        .asFunction();
    return func(thisCpp) != 0;
  }

  static int heightForWidth_calledFromC(ffi.Pointer<void> thisCpp, int arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QLabel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLabel::heightForWidth(int arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.heightForWidth(arg__1);
    return result;
  } // indent() const

  int indent() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QLabel__indent')
        .asFunction();
    return func(thisCpp);
  }

  static void initPainter_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? painter) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QLabel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLabel::initPainter(QPainter * painter) const! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.initPainter((painter == null || painter.address == 0)
        ? null
        : QPainter.fromCppPointer(painter));
  }

  static void leaveEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QLabel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLabel::leaveEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.leaveEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  } // linkActivated(const QString & link)

  linkActivated(String? link) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QLabel__linkActivated_QString')
        .asFunction();
    func(thisCpp, link?.toNativeUtf8() ?? ffi.nullptr);
  }

  void onLinkActivated(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QLabel__onLinkActivated_QString')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onLinkActivated_callback);
    final callbackMethod = onLinkActivated_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onLinkActivated_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QLabel;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onLinkActivated_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // linkHovered(const QString & link)

  linkHovered(String? link) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QLabel__linkHovered_QString')
        .asFunction();
    func(thisCpp, link?.toNativeUtf8() ?? ffi.nullptr);
  }

  void onLinkHovered(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QLabel__onLinkHovered_QString')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onLinkHovered_callback);
    final callbackMethod = onLinkHovered_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onLinkHovered_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QLabel;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onLinkHovered_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // margin() const

  int margin() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>('c_QLabel__margin')
        .asFunction();
    return func(thisCpp);
  }

  static ffi.Pointer<void> minimumSizeHint_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QLabel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLabel::minimumSizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.minimumSizeHint();
    return result.thisCpp;
  }

  static void mouseDoubleClickEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QLabel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLabel::mouseDoubleClickEvent(QMouseEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseDoubleClickEvent((event == null || event.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(event));
  }

  static void mouseMoveEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? ev) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QLabel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLabel::mouseMoveEvent(QMouseEvent * ev)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseMoveEvent((ev == null || ev.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(ev));
  }

  static void mousePressEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? ev) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QLabel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLabel::mousePressEvent(QMouseEvent * ev)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mousePressEvent((ev == null || ev.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(ev));
  }

  static void mouseReleaseEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? ev) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QLabel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLabel::mouseReleaseEvent(QMouseEvent * ev)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseReleaseEvent((ev == null || ev.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(ev));
  } // openExternalLinks() const

  bool openExternalLinks() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QLabel__openExternalLinks')
        .asFunction();
    return func(thisCpp) != 0;
  }

  static void paintEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QLabel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLabel::paintEvent(QPaintEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.paintEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QPaintEvent.fromCppPointer(arg__1));
  } // pixmap() const

  QPixmap pixmap() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QLabel__pixmap')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QPixmap.fromCppPointer(result, true);
  } // selectedText() const

  QString selectedText() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QLabel__selectedText')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // selectionStart() const

  int selectionStart() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QLabel__selectionStart')
        .asFunction();
    return func(thisCpp);
  } // setBuddy(QWidget * arg__1)

  setBuddy(QWidget? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QLabel__setBuddy_QWidget')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // setIndent(int arg__1)

  setIndent(int arg__1) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QLabel__setIndent_int')
        .asFunction();
    func(thisCpp, arg__1);
  } // setMargin(int arg__1)

  setMargin(int arg__1) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QLabel__setMargin_int')
        .asFunction();
    func(thisCpp, arg__1);
  } // setNum(double arg__1)

  setNum(double arg__1) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QLabel__setNum_double')
        .asFunction();
    func(thisCpp, arg__1);
  } // setNum(int arg__1)

  setNum_2(int arg__1) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QLabel__setNum_int')
        .asFunction();
    func(thisCpp, arg__1);
  } // setOpenExternalLinks(bool open)

  setOpenExternalLinks(bool open) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QLabel__setOpenExternalLinks_bool')
        .asFunction();
    func(thisCpp, open ? 1 : 0);
  } // setPixmap(const QPixmap & arg__1)

  setPixmap(QPixmap arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QLabel__setPixmap_QPixmap')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // setScaledContents(bool arg__1)

  setScaledContents(bool arg__1) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QLabel__setScaledContents_bool')
        .asFunction();
    func(thisCpp, arg__1 ? 1 : 0);
  } // setSelection(int arg__1, int arg__2)

  setSelection(int arg__1, int arg__2) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QLabel__setSelection_int_int')
        .asFunction();
    func(thisCpp, arg__1, arg__2);
  } // setText(const QString & arg__1)

  setText(String? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QLabel__setText_QString')
        .asFunction();
    func(thisCpp, arg__1?.toNativeUtf8() ?? ffi.nullptr);
  }

  static void setVisible_calledFromC(ffi.Pointer<void> thisCpp, int visible) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QLabel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLabel::setVisible(bool visible)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setVisible(visible != 0);
  } // setWordWrap(bool on)

  setWordWrap(bool on) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QLabel__setWordWrap_bool')
        .asFunction();
    func(thisCpp, on ? 1 : 0);
  }

  static ffi.Pointer<void> sharedPainter_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QLabel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLabel::sharedPainter() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sharedPainter();
    return result.thisCpp;
  }

  static ffi.Pointer<void> sizeHint_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QLabel;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QLabel::sizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sizeHint();
    return result.thisCpp;
  } // text() const

  QString text() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QLabel__text')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QLabel__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  } // wordWrap() const

  bool wordWrap() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QLabel__wordWrap')
        .asFunction();
    return func(thisCpp) != 0;
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QLabel__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 1128:
        return "c_QLabel__changeEvent_QEvent";
      case 946:
        return "c_QLabel__customEvent_QEvent";
      case 1145:
        return "c_QLabel__devType";
      case 956:
        return "c_QLabel__event_QEvent";
      case 957:
        return "c_QLabel__eventFilter_QObject_QEvent";
      case 1155:
        return "c_QLabel__focusNextPrevChild_bool";
      case 1169:
        return "c_QLabel__hasHeightForWidth";
      case 1173:
        return "c_QLabel__heightForWidth_int";
      case 1176:
        return "c_QLabel__initPainter_QPainter";
      case 1202:
        return "c_QLabel__leaveEvent_QEvent";
      case 1222:
        return "c_QLabel__minimumSizeHint";
      case 1224:
        return "c_QLabel__mouseDoubleClickEvent_QMouseEvent";
      case 1226:
        return "c_QLabel__mouseMoveEvent_QMouseEvent";
      case 1227:
        return "c_QLabel__mousePressEvent_QMouseEvent";
      case 1228:
        return "c_QLabel__mouseReleaseEvent_QMouseEvent";
      case 1235:
        return "c_QLabel__paintEvent_QPaintEvent";
      case 1314:
        return "c_QLabel__setVisible_bool";
      case 1323:
        return "c_QLabel__sharedPainter";
      case 1331:
        return "c_QLabel__sizeHint";
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
            'c_QLabel__registerVirtualMethodCallback')
        .asFunction();
    final callback1128 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QLabel.changeEvent_calledFromC);
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
            QLabel.event_calledFromC, callbackExcept956);
    registerCallback(thisCpp, callback956, 956);
    const callbackExcept957 = 0;
    final callback957 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_voidstar_FFI>(
            QObject.eventFilter_calledFromC, callbackExcept957);
    registerCallback(thisCpp, callback957, 957);
    const callbackExcept1155 = 0;
    final callback1155 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_ffi_Int8_FFI>(
            QLabel.focusNextPrevChild_calledFromC, callbackExcept1155);
    registerCallback(thisCpp, callback1155, 1155);
    const callbackExcept1169 = 0;
    final callback1169 = ffi.Pointer.fromFunction<bool_Func_voidstar_FFI>(
        QWidget.hasHeightForWidth_calledFromC, callbackExcept1169);
    registerCallback(thisCpp, callback1169, 1169);
    const callbackExcept1173 = 0;
    final callback1173 =
        ffi.Pointer.fromFunction<int_Func_voidstar_ffi_Int32_FFI>(
            QLabel.heightForWidth_calledFromC, callbackExcept1173);
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
        QLabel.minimumSizeHint_calledFromC);
    registerCallback(thisCpp, callback1222, 1222);
    final callback1224 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QWidget.mouseDoubleClickEvent_calledFromC);
    registerCallback(thisCpp, callback1224, 1224);
    final callback1226 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QLabel.mouseMoveEvent_calledFromC);
    registerCallback(thisCpp, callback1226, 1226);
    final callback1227 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QLabel.mousePressEvent_calledFromC);
    registerCallback(thisCpp, callback1227, 1227);
    final callback1228 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QLabel.mouseReleaseEvent_calledFromC);
    registerCallback(thisCpp, callback1228, 1228);
    final callback1235 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QLabel.paintEvent_calledFromC);
    registerCallback(thisCpp, callback1235, 1235);
    final callback1314 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int8_FFI>(
            QWidget.setVisible_calledFromC);
    registerCallback(thisCpp, callback1314, 1314);
    final callback1323 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QWidget.sharedPainter_calledFromC);
    registerCallback(thisCpp, callback1323, 1323);
    final callback1331 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QLabel.sizeHint_calledFromC);
    registerCallback(thisCpp, callback1331, 1331);
  }
}
