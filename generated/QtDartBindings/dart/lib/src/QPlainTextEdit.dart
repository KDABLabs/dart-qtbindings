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

class QPlainTextEdit extends QAbstractScrollArea {
  QPlainTextEdit.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QPlainTextEdit.init() : super.init() {}
  factory QPlainTextEdit.fromCache(var cppPointer, [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QPlainTextEdit;
    }
    return QPlainTextEdit.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QPlainTextEdit_Finalizer";
  } //QPlainTextEdit(QWidget * parent)

  QPlainTextEdit({required QWidget? parent}) : super.init() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPlainTextEdit__constructor_QWidget')
        .asFunction();
    thisCpp = func(parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } //QPlainTextEdit(const QString & text, QWidget * parent)
  QPlainTextEdit.ctor2(String? text, {required QWidget? parent})
      : super.init() {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QPlainTextEdit__constructor_QString_QWidget')
        .asFunction();
    thisCpp = func(text?.toNativeUtf8() ?? ffi.nullptr,
        parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } // anchorAt(const QPoint & pos) const
  QString anchorAt(QPoint? pos) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QPlainTextEdit__anchorAt_QPoint')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, pos == null ? ffi.nullptr : pos.thisCpp);
    return QString.fromCppPointer(result, true);
  } // appendHtml(const QString & html)

  appendHtml(String? html) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPlainTextEdit__appendHtml_QString')
        .asFunction();
    func(thisCpp, html?.toNativeUtf8() ?? ffi.nullptr);
  } // appendPlainText(const QString & text)

  appendPlainText(String? text) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPlainTextEdit__appendPlainText_QString')
        .asFunction();
    func(thisCpp, text?.toNativeUtf8() ?? ffi.nullptr);
  } // backgroundVisible() const

  bool backgroundVisible() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QPlainTextEdit__backgroundVisible')
        .asFunction();
    return func(thisCpp) != 0;
  } // blockCount() const

  int blockCount() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QPlainTextEdit__blockCount')
        .asFunction();
    return func(thisCpp);
  } // blockCountChanged(int newBlockCount)

  blockCountChanged(int newBlockCount) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QPlainTextEdit__blockCountChanged_int')
        .asFunction();
    func(thisCpp, newBlockCount);
  }

  void onBlockCountChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QPlainTextEdit__onBlockCountChanged_int')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onBlockCountChanged_callback);
    final callbackMethod = onBlockCountChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onBlockCountChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QPlainTextEdit;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onBlockCountChanged_callback] ??
            [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // canPaste() const

  bool canPaste() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QPlainTextEdit__canPaste')
        .asFunction();
    return func(thisCpp) != 0;
  } // centerCursor()

  centerCursor() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QPlainTextEdit__centerCursor')
        .asFunction();
    func(thisCpp);
  } // centerOnScroll() const

  bool centerOnScroll() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QPlainTextEdit__centerOnScroll')
        .asFunction();
    return func(thisCpp) != 0;
  }

  static void changeEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? e) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QPlainTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QPlainTextEdit::changeEvent(QEvent * e)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.changeEvent(
        (e == null || e.address == 0) ? null : QEvent.fromCppPointer(e));
  } // clear()

  clear() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QPlainTextEdit__clear')
        .asFunction();
    func(thisCpp);
  } // contentOffset() const

  QPointF contentOffset() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPlainTextEdit__contentOffset')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QPointF.fromCppPointer(result, true);
  } // copy()

  copy() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QPlainTextEdit__copy')
        .asFunction();
    func(thisCpp);
  } // copyAvailable(bool b)

  copyAvailable(bool b) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QPlainTextEdit__copyAvailable_bool')
        .asFunction();
    func(thisCpp, b ? 1 : 0);
  }

  void onCopyAvailable(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QPlainTextEdit__onCopyAvailable_bool')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onCopyAvailable_callback);
    final callbackMethod = onCopyAvailable_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onCopyAvailable_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QPlainTextEdit;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onCopyAvailable_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // createStandardContextMenu()

  QMenu createStandardContextMenu() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPlainTextEdit__createStandardContextMenu')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QMenu.fromCppPointer(result, false);
  } // createStandardContextMenu(const QPoint & position)

  QMenu createStandardContextMenu_2(QPoint? position) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QPlainTextEdit__createStandardContextMenu_QPoint')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, position == null ? ffi.nullptr : position.thisCpp);
    return QMenu.fromCppPointer(result, false);
  } // cursorPositionChanged()

  cursorPositionChanged() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QPlainTextEdit__cursorPositionChanged')
        .asFunction();
    func(thisCpp);
  }

  void onCursorPositionChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QPlainTextEdit__onCursorPositionChanged')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onCursorPositionChanged_callback);
    final callbackMethod = onCursorPositionChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onCursorPositionChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QPlainTextEdit;
    final signalHandlers = dartInstance
            .signalHandlerersBySignal[onCursorPositionChanged_callback] ??
        [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // cursorRect() const

  QRect cursorRect() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPlainTextEdit__cursorRect')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRect.fromCppPointer(result, true);
  } // cursorWidth() const

  int cursorWidth() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QPlainTextEdit__cursorWidth')
        .asFunction();
    return func(thisCpp);
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QPlainTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QPlainTextEdit::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  } // cut()

  cut() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QPlainTextEdit__cut')
        .asFunction();
    func(thisCpp);
  }

  static int devType_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QPlainTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QPlainTextEdit::devType() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.devType();
    return result;
  } // documentTitle() const

  QString documentTitle() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPlainTextEdit__documentTitle')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // ensureCursorVisible()

  ensureCursorVisible() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QPlainTextEdit__ensureCursorVisible')
        .asFunction();
    func(thisCpp);
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? e) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QPlainTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QPlainTextEdit::event(QEvent * e)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance
        .event((e == null || e.address == 0) ? null : QEvent.fromCppPointer(e));
    return result ? 1 : 0;
  }

  static int eventFilter_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void>? arg__1, ffi.Pointer<void>? arg__2) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QPlainTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QPlainTextEdit::eventFilter(QObject * arg__1, QEvent * arg__2)! (${thisCpp.address})");
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
  } // find(const QString & exp)

  bool find(String? exp) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_QPlainTextEdit__find_QString')
        .asFunction();
    return func(thisCpp, exp?.toNativeUtf8() ?? ffi.nullptr) != 0;
  }

  static int focusNextPrevChild_calledFromC(
      ffi.Pointer<void> thisCpp, int next) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QPlainTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QPlainTextEdit::focusNextPrevChild(bool next)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.focusNextPrevChild(next != 0);
    return result ? 1 : 0;
  }

  static int hasHeightForWidth_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QPlainTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QPlainTextEdit::hasHeightForWidth() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.hasHeightForWidth();
    return result ? 1 : 0;
  }

  static int heightForWidth_calledFromC(ffi.Pointer<void> thisCpp, int arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QPlainTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QPlainTextEdit::heightForWidth(int arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.heightForWidth(arg__1);
    return result;
  }

  static void initPainter_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? painter) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QPlainTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QPlainTextEdit::initPainter(QPainter * painter) const! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.initPainter((painter == null || painter.address == 0)
        ? null
        : QPainter.fromCppPointer(painter));
  } // insertPlainText(const QString & text)

  insertPlainText(String? text) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPlainTextEdit__insertPlainText_QString')
        .asFunction();
    func(thisCpp, text?.toNativeUtf8() ?? ffi.nullptr);
  } // isReadOnly() const

  bool isReadOnly() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QPlainTextEdit__isReadOnly')
        .asFunction();
    return func(thisCpp) != 0;
  } // isUndoRedoEnabled() const

  bool isUndoRedoEnabled() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QPlainTextEdit__isUndoRedoEnabled')
        .asFunction();
    return func(thisCpp) != 0;
  }

  static void leaveEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QPlainTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QPlainTextEdit::leaveEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.leaveEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  } // maximumBlockCount() const

  int maximumBlockCount() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QPlainTextEdit__maximumBlockCount')
        .asFunction();
    return func(thisCpp);
  }

  static ffi.Pointer<void> minimumSizeHint_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QPlainTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QPlainTextEdit::minimumSizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.minimumSizeHint();
    return result.thisCpp;
  } // modificationChanged(bool arg__1)

  modificationChanged(bool arg__1) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QPlainTextEdit__modificationChanged_bool')
        .asFunction();
    func(thisCpp, arg__1 ? 1 : 0);
  }

  void onModificationChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QPlainTextEdit__onModificationChanged_bool')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onModificationChanged_callback);
    final callbackMethod = onModificationChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onModificationChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QPlainTextEdit;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onModificationChanged_callback] ??
            [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static void mouseDoubleClickEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? e) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QPlainTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QPlainTextEdit::mouseDoubleClickEvent(QMouseEvent * e)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseDoubleClickEvent(
        (e == null || e.address == 0) ? null : QMouseEvent.fromCppPointer(e));
  }

  static void mouseMoveEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? e) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QPlainTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QPlainTextEdit::mouseMoveEvent(QMouseEvent * e)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseMoveEvent(
        (e == null || e.address == 0) ? null : QMouseEvent.fromCppPointer(e));
  }

  static void mousePressEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? e) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QPlainTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QPlainTextEdit::mousePressEvent(QMouseEvent * e)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mousePressEvent(
        (e == null || e.address == 0) ? null : QMouseEvent.fromCppPointer(e));
  }

  static void mouseReleaseEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? e) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QPlainTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QPlainTextEdit::mouseReleaseEvent(QMouseEvent * e)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseReleaseEvent(
        (e == null || e.address == 0) ? null : QMouseEvent.fromCppPointer(e));
  } // overwriteMode() const

  bool overwriteMode() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QPlainTextEdit__overwriteMode')
        .asFunction();
    return func(thisCpp) != 0;
  }

  static void paintEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? e) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QPlainTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QPlainTextEdit::paintEvent(QPaintEvent * e)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.paintEvent(
        (e == null || e.address == 0) ? null : QPaintEvent.fromCppPointer(e));
  } // paste()

  paste() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QPlainTextEdit__paste')
        .asFunction();
    func(thisCpp);
  } // placeholderText() const

  QString placeholderText() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPlainTextEdit__placeholderText')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // redo()

  redo() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QPlainTextEdit__redo')
        .asFunction();
    func(thisCpp);
  } // redoAvailable(bool b)

  redoAvailable(bool b) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QPlainTextEdit__redoAvailable_bool')
        .asFunction();
    func(thisCpp, b ? 1 : 0);
  }

  void onRedoAvailable(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QPlainTextEdit__onRedoAvailable_bool')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onRedoAvailable_callback);
    final callbackMethod = onRedoAvailable_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onRedoAvailable_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QPlainTextEdit;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onRedoAvailable_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static void scrollContentsBy_calledFromC(
      ffi.Pointer<void> thisCpp, int dx, int dy) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QPlainTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QPlainTextEdit::scrollContentsBy(int dx, int dy)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.scrollContentsBy(dx, dy);
  } // selectAll()

  selectAll() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QPlainTextEdit__selectAll')
        .asFunction();
    func(thisCpp);
  } // selectionChanged()

  selectionChanged() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QPlainTextEdit__selectionChanged')
        .asFunction();
    func(thisCpp);
  }

  void onSelectionChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QPlainTextEdit__onSelectionChanged')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onSelectionChanged_callback);
    final callbackMethod = onSelectionChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onSelectionChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QPlainTextEdit;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onSelectionChanged_callback] ??
            [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // setBackgroundVisible(bool visible)

  setBackgroundVisible(bool visible) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QPlainTextEdit__setBackgroundVisible_bool')
        .asFunction();
    func(thisCpp, visible ? 1 : 0);
  } // setCenterOnScroll(bool enabled)

  setCenterOnScroll(bool enabled) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QPlainTextEdit__setCenterOnScroll_bool')
        .asFunction();
    func(thisCpp, enabled ? 1 : 0);
  } // setCursorWidth(int width)

  setCursorWidth(int width) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QPlainTextEdit__setCursorWidth_int')
        .asFunction();
    func(thisCpp, width);
  } // setDocumentTitle(const QString & title)

  setDocumentTitle(String? title) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPlainTextEdit__setDocumentTitle_QString')
        .asFunction();
    func(thisCpp, title?.toNativeUtf8() ?? ffi.nullptr);
  } // setMaximumBlockCount(int maximum)

  setMaximumBlockCount(int maximum) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QPlainTextEdit__setMaximumBlockCount_int')
        .asFunction();
    func(thisCpp, maximum);
  } // setOverwriteMode(bool overwrite)

  setOverwriteMode(bool overwrite) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QPlainTextEdit__setOverwriteMode_bool')
        .asFunction();
    func(thisCpp, overwrite ? 1 : 0);
  } // setPlaceholderText(const QString & placeholderText)

  setPlaceholderText(String? placeholderText) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPlainTextEdit__setPlaceholderText_QString')
        .asFunction();
    func(thisCpp, placeholderText?.toNativeUtf8() ?? ffi.nullptr);
  } // setPlainText(const QString & text)

  setPlainText(String? text) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QPlainTextEdit__setPlainText_QString')
        .asFunction();
    func(thisCpp, text?.toNativeUtf8() ?? ffi.nullptr);
  } // setReadOnly(bool ro)

  setReadOnly(bool ro) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QPlainTextEdit__setReadOnly_bool')
        .asFunction();
    func(thisCpp, ro ? 1 : 0);
  } // setTabChangesFocus(bool b)

  setTabChangesFocus(bool b) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QPlainTextEdit__setTabChangesFocus_bool')
        .asFunction();
    func(thisCpp, b ? 1 : 0);
  } // setTabStopDistance(qreal distance)

  setTabStopDistance(double distance) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QPlainTextEdit__setTabStopDistance_qreal')
        .asFunction();
    func(thisCpp, distance);
  } // setUndoRedoEnabled(bool enable)

  setUndoRedoEnabled(bool enable) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QPlainTextEdit__setUndoRedoEnabled_bool')
        .asFunction();
    func(thisCpp, enable ? 1 : 0);
  }

  static void setVisible_calledFromC(ffi.Pointer<void> thisCpp, int visible) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QPlainTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QPlainTextEdit::setVisible(bool visible)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setVisible(visible != 0);
  }

  static void setupViewport_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? viewport) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QPlainTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QPlainTextEdit::setupViewport(QWidget * viewport)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setupViewport((viewport == null || viewport.address == 0)
        ? null
        : QWidget.fromCppPointer(viewport));
  }

  static ffi.Pointer<void> sharedPainter_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QPlainTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QPlainTextEdit::sharedPainter() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sharedPainter();
    return result.thisCpp;
  }

  static ffi.Pointer<void> sizeHint_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QPlainTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QPlainTextEdit::sizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sizeHint();
    return result.thisCpp;
  } // tabChangesFocus() const

  bool tabChangesFocus() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QPlainTextEdit__tabChangesFocus')
        .asFunction();
    return func(thisCpp) != 0;
  } // tabStopDistance() const

  double tabStopDistance() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QPlainTextEdit__tabStopDistance')
        .asFunction();
    return func(thisCpp);
  } // textChanged()

  textChanged() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QPlainTextEdit__textChanged')
        .asFunction();
    func(thisCpp);
  }

  void onTextChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QPlainTextEdit__onTextChanged')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onTextChanged_callback);
    final callbackMethod = onTextChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onTextChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QPlainTextEdit;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onTextChanged_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // toPlainText() const

  QString toPlainText() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QPlainTextEdit__toPlainText')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QPlainTextEdit__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  } // undo()

  undo() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QPlainTextEdit__undo')
        .asFunction();
    func(thisCpp);
  } // undoAvailable(bool b)

  undoAvailable(bool b) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QPlainTextEdit__undoAvailable_bool')
        .asFunction();
    func(thisCpp, b ? 1 : 0);
  }

  void onUndoAvailable(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QPlainTextEdit__onUndoAvailable_bool')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onUndoAvailable_callback);
    final callbackMethod = onUndoAvailable_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onUndoAvailable_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QPlainTextEdit;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onUndoAvailable_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // updateRequest(const QRect & rect, int dy)

  updateRequest(QRect? rect, int dy) {
    final void_Func_voidstar_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            'c_QPlainTextEdit__updateRequest_QRect_int')
        .asFunction();
    func(thisCpp, rect == null ? ffi.nullptr : rect.thisCpp, dy);
  }

  void onUpdateRequest(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QPlainTextEdit__onUpdateRequest_QRect_int')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onUpdateRequest_callback);
    final callbackMethod = onUpdateRequest_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onUpdateRequest_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QPlainTextEdit;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onUpdateRequest_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static int viewportEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QPlainTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QPlainTextEdit::viewportEvent(QEvent * arg__1)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QPlainTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QPlainTextEdit::viewportSizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.viewportSizeHint();
    return result.thisCpp;
  } // zoomIn(int range)

  zoomIn({int range = 1}) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QPlainTextEdit__zoomIn_int')
        .asFunction();
    func(thisCpp, range);
  } // zoomInF(float range)

  zoomInF(double range) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QPlainTextEdit__zoomInF_float')
        .asFunction();
    func(thisCpp, range);
  } // zoomOut(int range)

  zoomOut({int range = 1}) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QPlainTextEdit__zoomOut_int')
        .asFunction();
    func(thisCpp, range);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QPlainTextEdit__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 1128:
        return "c_QPlainTextEdit__changeEvent_QEvent";
      case 946:
        return "c_QPlainTextEdit__customEvent_QEvent";
      case 1145:
        return "c_QPlainTextEdit__devType";
      case 956:
        return "c_QPlainTextEdit__event_QEvent";
      case 957:
        return "c_QPlainTextEdit__eventFilter_QObject_QEvent";
      case 1155:
        return "c_QPlainTextEdit__focusNextPrevChild_bool";
      case 1169:
        return "c_QPlainTextEdit__hasHeightForWidth";
      case 1173:
        return "c_QPlainTextEdit__heightForWidth_int";
      case 1176:
        return "c_QPlainTextEdit__initPainter_QPainter";
      case 1202:
        return "c_QPlainTextEdit__leaveEvent_QEvent";
      case 1222:
        return "c_QPlainTextEdit__minimumSizeHint";
      case 1224:
        return "c_QPlainTextEdit__mouseDoubleClickEvent_QMouseEvent";
      case 1226:
        return "c_QPlainTextEdit__mouseMoveEvent_QMouseEvent";
      case 1227:
        return "c_QPlainTextEdit__mousePressEvent_QMouseEvent";
      case 1228:
        return "c_QPlainTextEdit__mouseReleaseEvent_QMouseEvent";
      case 1235:
        return "c_QPlainTextEdit__paintEvent_QPaintEvent";
      case 5218:
        return "c_QPlainTextEdit__scrollContentsBy_int_int";
      case 1314:
        return "c_QPlainTextEdit__setVisible_bool";
      case 5226:
        return "c_QPlainTextEdit__setupViewport_QWidget";
      case 1323:
        return "c_QPlainTextEdit__sharedPainter";
      case 1331:
        return "c_QPlainTextEdit__sizeHint";
      case 5229:
        return "c_QPlainTextEdit__viewportEvent_QEvent";
      case 5230:
        return "c_QPlainTextEdit__viewportSizeHint";
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
            'c_QPlainTextEdit__registerVirtualMethodCallback')
        .asFunction();
    final callback1128 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QPlainTextEdit.changeEvent_calledFromC);
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
            QPlainTextEdit.event_calledFromC, callbackExcept956);
    registerCallback(thisCpp, callback956, 956);
    const callbackExcept957 = 0;
    final callback957 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_voidstar_FFI>(
            QAbstractScrollArea.eventFilter_calledFromC, callbackExcept957);
    registerCallback(thisCpp, callback957, 957);
    const callbackExcept1155 = 0;
    final callback1155 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_ffi_Int8_FFI>(
            QPlainTextEdit.focusNextPrevChild_calledFromC, callbackExcept1155);
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
            QPlainTextEdit.mouseDoubleClickEvent_calledFromC);
    registerCallback(thisCpp, callback1224, 1224);
    final callback1226 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QPlainTextEdit.mouseMoveEvent_calledFromC);
    registerCallback(thisCpp, callback1226, 1226);
    final callback1227 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QPlainTextEdit.mousePressEvent_calledFromC);
    registerCallback(thisCpp, callback1227, 1227);
    final callback1228 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QPlainTextEdit.mouseReleaseEvent_calledFromC);
    registerCallback(thisCpp, callback1228, 1228);
    final callback1235 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QPlainTextEdit.paintEvent_calledFromC);
    registerCallback(thisCpp, callback1235, 1235);
    final callback5218 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>(
            QPlainTextEdit.scrollContentsBy_calledFromC);
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
        QAbstractScrollArea.sizeHint_calledFromC);
    registerCallback(thisCpp, callback1331, 1331);
    const callbackExcept5229 = 0;
    final callback5229 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_FFI>(
            QAbstractScrollArea.viewportEvent_calledFromC, callbackExcept5229);
    registerCallback(thisCpp, callback5229, 5229);
    final callback5230 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QAbstractScrollArea.viewportSizeHint_calledFromC);
    registerCallback(thisCpp, callback5230, 5230);
  }
}
