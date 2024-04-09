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

class QTextEdit extends QAbstractScrollArea {
  QTextEdit.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QTextEdit.init() : super.init() {}
  factory QTextEdit.fromCache(var cppPointer, [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QTextEdit;
    }
    return QTextEdit.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QTextEdit_Finalizer";
  } //QTextEdit(QWidget * parent)

  QTextEdit({required QWidget? parent}) : super.init() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QTextEdit__constructor_QWidget')
        .asFunction();
    thisCpp = func(parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } //QTextEdit(const QString & text, QWidget * parent)
  QTextEdit.ctor2(String? text, {required QWidget? parent}) : super.init() {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QTextEdit__constructor_QString_QWidget')
        .asFunction();
    thisCpp = func(text?.toNativeUtf8() ?? ffi.nullptr,
        parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } // acceptRichText() const
  bool acceptRichText() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QTextEdit__acceptRichText')
        .asFunction();
    return func(thisCpp) != 0;
  } // anchorAt(const QPoint & pos) const

  QString anchorAt(QPoint? pos) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QTextEdit__anchorAt_QPoint')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, pos == null ? ffi.nullptr : pos.thisCpp);
    return QString.fromCppPointer(result, true);
  } // append(const QString & text)

  append(String? text) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QTextEdit__append_QString')
        .asFunction();
    func(thisCpp, text?.toNativeUtf8() ?? ffi.nullptr);
  } // canPaste() const

  bool canPaste() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QTextEdit__canPaste')
        .asFunction();
    return func(thisCpp) != 0;
  }

  static void changeEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? e) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTextEdit::changeEvent(QEvent * e)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.changeEvent(
        (e == null || e.address == 0) ? null : QEvent.fromCppPointer(e));
  } // clear()

  clear() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QTextEdit__clear')
        .asFunction();
    func(thisCpp);
  } // copy()

  copy() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>('c_QTextEdit__copy')
        .asFunction();
    func(thisCpp);
  } // copyAvailable(bool b)

  copyAvailable(bool b) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QTextEdit__copyAvailable_bool')
        .asFunction();
    func(thisCpp, b ? 1 : 0);
  }

  void onCopyAvailable(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QTextEdit__onCopyAvailable_bool')
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTextEdit;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onCopyAvailable_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // createStandardContextMenu()

  QMenu createStandardContextMenu() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QTextEdit__createStandardContextMenu')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QMenu.fromCppPointer(result, false);
  } // createStandardContextMenu(const QPoint & position)

  QMenu createStandardContextMenu_2(QPoint? position) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QTextEdit__createStandardContextMenu_QPoint')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, position == null ? ffi.nullptr : position.thisCpp);
    return QMenu.fromCppPointer(result, false);
  } // currentFont() const

  QFont currentFont() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QTextEdit__currentFont')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QFont.fromCppPointer(result, true);
  } // cursorPositionChanged()

  cursorPositionChanged() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QTextEdit__cursorPositionChanged')
        .asFunction();
    func(thisCpp);
  }

  void onCursorPositionChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QTextEdit__onCursorPositionChanged')
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTextEdit;
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
            'c_QTextEdit__cursorRect')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRect.fromCppPointer(result, true);
  } // cursorWidth() const

  int cursorWidth() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QTextEdit__cursorWidth')
        .asFunction();
    return func(thisCpp);
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTextEdit::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  } // cut()

  cut() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>('c_QTextEdit__cut')
        .asFunction();
    func(thisCpp);
  }

  static int devType_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTextEdit::devType() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.devType();
    return result;
  } // documentTitle() const

  QString documentTitle() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QTextEdit__documentTitle')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // ensureCursorVisible()

  ensureCursorVisible() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QTextEdit__ensureCursorVisible')
        .asFunction();
    func(thisCpp);
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? e) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTextEdit::event(QEvent * e)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance
        .event((e == null || e.address == 0) ? null : QEvent.fromCppPointer(e));
    return result ? 1 : 0;
  }

  static int eventFilter_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void>? arg__1, ffi.Pointer<void>? arg__2) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTextEdit::eventFilter(QObject * arg__1, QEvent * arg__2)! (${thisCpp.address})");
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
            'c_QTextEdit__find_QString')
        .asFunction();
    return func(thisCpp, exp?.toNativeUtf8() ?? ffi.nullptr) != 0;
  }

  static int focusNextPrevChild_calledFromC(
      ffi.Pointer<void> thisCpp, int next) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTextEdit::focusNextPrevChild(bool next)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.focusNextPrevChild(next != 0);
    return result ? 1 : 0;
  } // fontFamily() const

  QString fontFamily() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QTextEdit__fontFamily')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // fontItalic() const

  bool fontItalic() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QTextEdit__fontItalic')
        .asFunction();
    return func(thisCpp) != 0;
  } // fontPointSize() const

  double fontPointSize() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QTextEdit__fontPointSize')
        .asFunction();
    return func(thisCpp);
  } // fontUnderline() const

  bool fontUnderline() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QTextEdit__fontUnderline')
        .asFunction();
    return func(thisCpp) != 0;
  } // fontWeight() const

  int fontWeight() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QTextEdit__fontWeight')
        .asFunction();
    return func(thisCpp);
  }

  static int hasHeightForWidth_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTextEdit::hasHeightForWidth() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.hasHeightForWidth();
    return result ? 1 : 0;
  }

  static int heightForWidth_calledFromC(ffi.Pointer<void> thisCpp, int arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTextEdit::heightForWidth(int arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.heightForWidth(arg__1);
    return result;
  }

  static void initPainter_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? painter) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTextEdit::initPainter(QPainter * painter) const! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.initPainter((painter == null || painter.address == 0)
        ? null
        : QPainter.fromCppPointer(painter));
  } // insertHtml(const QString & text)

  insertHtml(String? text) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QTextEdit__insertHtml_QString')
        .asFunction();
    func(thisCpp, text?.toNativeUtf8() ?? ffi.nullptr);
  } // insertPlainText(const QString & text)

  insertPlainText(String? text) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QTextEdit__insertPlainText_QString')
        .asFunction();
    func(thisCpp, text?.toNativeUtf8() ?? ffi.nullptr);
  } // isReadOnly() const

  bool isReadOnly() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QTextEdit__isReadOnly')
        .asFunction();
    return func(thisCpp) != 0;
  } // isUndoRedoEnabled() const

  bool isUndoRedoEnabled() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QTextEdit__isUndoRedoEnabled')
        .asFunction();
    return func(thisCpp) != 0;
  }

  static void leaveEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTextEdit::leaveEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.leaveEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  } // lineWrapColumnOrWidth() const

  int lineWrapColumnOrWidth() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QTextEdit__lineWrapColumnOrWidth')
        .asFunction();
    return func(thisCpp);
  }

  static ffi.Pointer<void> minimumSizeHint_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTextEdit::minimumSizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.minimumSizeHint();
    return result.thisCpp;
  }

  static void mouseDoubleClickEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? e) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTextEdit::mouseDoubleClickEvent(QMouseEvent * e)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseDoubleClickEvent(
        (e == null || e.address == 0) ? null : QMouseEvent.fromCppPointer(e));
  }

  static void mouseMoveEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? e) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTextEdit::mouseMoveEvent(QMouseEvent * e)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseMoveEvent(
        (e == null || e.address == 0) ? null : QMouseEvent.fromCppPointer(e));
  }

  static void mousePressEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? e) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTextEdit::mousePressEvent(QMouseEvent * e)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mousePressEvent(
        (e == null || e.address == 0) ? null : QMouseEvent.fromCppPointer(e));
  }

  static void mouseReleaseEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? e) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTextEdit::mouseReleaseEvent(QMouseEvent * e)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseReleaseEvent(
        (e == null || e.address == 0) ? null : QMouseEvent.fromCppPointer(e));
  } // overwriteMode() const

  bool overwriteMode() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QTextEdit__overwriteMode')
        .asFunction();
    return func(thisCpp) != 0;
  }

  static void paintEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? e) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTextEdit::paintEvent(QPaintEvent * e)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.paintEvent(
        (e == null || e.address == 0) ? null : QPaintEvent.fromCppPointer(e));
  } // paste()

  paste() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QTextEdit__paste')
        .asFunction();
    func(thisCpp);
  } // placeholderText() const

  QString placeholderText() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QTextEdit__placeholderText')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // redo()

  redo() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>('c_QTextEdit__redo')
        .asFunction();
    func(thisCpp);
  } // redoAvailable(bool b)

  redoAvailable(bool b) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QTextEdit__redoAvailable_bool')
        .asFunction();
    func(thisCpp, b ? 1 : 0);
  }

  void onRedoAvailable(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QTextEdit__onRedoAvailable_bool')
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTextEdit;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onRedoAvailable_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static void scrollContentsBy_calledFromC(
      ffi.Pointer<void> thisCpp, int dx, int dy) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTextEdit::scrollContentsBy(int dx, int dy)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.scrollContentsBy(dx, dy);
  } // scrollToAnchor(const QString & name)

  scrollToAnchor(String? name) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QTextEdit__scrollToAnchor_QString')
        .asFunction();
    func(thisCpp, name?.toNativeUtf8() ?? ffi.nullptr);
  } // selectAll()

  selectAll() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QTextEdit__selectAll')
        .asFunction();
    func(thisCpp);
  } // selectionChanged()

  selectionChanged() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QTextEdit__selectionChanged')
        .asFunction();
    func(thisCpp);
  }

  void onSelectionChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QTextEdit__onSelectionChanged')
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTextEdit;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onSelectionChanged_callback] ??
            [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // setAcceptRichText(bool accept)

  setAcceptRichText(bool accept) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QTextEdit__setAcceptRichText_bool')
        .asFunction();
    func(thisCpp, accept ? 1 : 0);
  } // setCurrentFont(const QFont & f)

  setCurrentFont(QFont? f) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QTextEdit__setCurrentFont_QFont')
        .asFunction();
    func(thisCpp, f == null ? ffi.nullptr : f.thisCpp);
  } // setCursorWidth(int width)

  setCursorWidth(int width) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QTextEdit__setCursorWidth_int')
        .asFunction();
    func(thisCpp, width);
  } // setDocumentTitle(const QString & title)

  setDocumentTitle(String? title) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QTextEdit__setDocumentTitle_QString')
        .asFunction();
    func(thisCpp, title?.toNativeUtf8() ?? ffi.nullptr);
  } // setFontFamily(const QString & fontFamily)

  setFontFamily(String? fontFamily) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QTextEdit__setFontFamily_QString')
        .asFunction();
    func(thisCpp, fontFamily?.toNativeUtf8() ?? ffi.nullptr);
  } // setFontItalic(bool b)

  setFontItalic(bool b) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QTextEdit__setFontItalic_bool')
        .asFunction();
    func(thisCpp, b ? 1 : 0);
  } // setFontPointSize(qreal s)

  setFontPointSize(double s) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QTextEdit__setFontPointSize_qreal')
        .asFunction();
    func(thisCpp, s);
  } // setFontUnderline(bool b)

  setFontUnderline(bool b) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QTextEdit__setFontUnderline_bool')
        .asFunction();
    func(thisCpp, b ? 1 : 0);
  } // setFontWeight(int w)

  setFontWeight(int w) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QTextEdit__setFontWeight_int')
        .asFunction();
    func(thisCpp, w);
  } // setHtml(const QString & text)

  setHtml(String? text) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QTextEdit__setHtml_QString')
        .asFunction();
    func(thisCpp, text?.toNativeUtf8() ?? ffi.nullptr);
  } // setLineWrapColumnOrWidth(int w)

  setLineWrapColumnOrWidth(int w) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QTextEdit__setLineWrapColumnOrWidth_int')
        .asFunction();
    func(thisCpp, w);
  } // setMarkdown(const QString & markdown)

  setMarkdown(String? markdown) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QTextEdit__setMarkdown_QString')
        .asFunction();
    func(thisCpp, markdown?.toNativeUtf8() ?? ffi.nullptr);
  } // setOverwriteMode(bool overwrite)

  setOverwriteMode(bool overwrite) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QTextEdit__setOverwriteMode_bool')
        .asFunction();
    func(thisCpp, overwrite ? 1 : 0);
  } // setPlaceholderText(const QString & placeholderText)

  setPlaceholderText(String? placeholderText) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QTextEdit__setPlaceholderText_QString')
        .asFunction();
    func(thisCpp, placeholderText?.toNativeUtf8() ?? ffi.nullptr);
  } // setPlainText(const QString & text)

  setPlainText(String? text) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QTextEdit__setPlainText_QString')
        .asFunction();
    func(thisCpp, text?.toNativeUtf8() ?? ffi.nullptr);
  } // setReadOnly(bool ro)

  setReadOnly(bool ro) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QTextEdit__setReadOnly_bool')
        .asFunction();
    func(thisCpp, ro ? 1 : 0);
  } // setTabChangesFocus(bool b)

  setTabChangesFocus(bool b) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QTextEdit__setTabChangesFocus_bool')
        .asFunction();
    func(thisCpp, b ? 1 : 0);
  } // setTabStopDistance(qreal distance)

  setTabStopDistance(double distance) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QTextEdit__setTabStopDistance_qreal')
        .asFunction();
    func(thisCpp, distance);
  } // setText(const QString & text)

  setText(String? text) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QTextEdit__setText_QString')
        .asFunction();
    func(thisCpp, text?.toNativeUtf8() ?? ffi.nullptr);
  } // setTextBackgroundColor(const QColor & c)

  setTextBackgroundColor(QColor? c) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QTextEdit__setTextBackgroundColor_QColor')
        .asFunction();
    func(thisCpp, c == null ? ffi.nullptr : c.thisCpp);
  } // setTextColor(const QColor & c)

  setTextColor(QColor? c) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QTextEdit__setTextColor_QColor')
        .asFunction();
    func(thisCpp, c == null ? ffi.nullptr : c.thisCpp);
  } // setUndoRedoEnabled(bool enable)

  setUndoRedoEnabled(bool enable) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QTextEdit__setUndoRedoEnabled_bool')
        .asFunction();
    func(thisCpp, enable ? 1 : 0);
  }

  static void setVisible_calledFromC(ffi.Pointer<void> thisCpp, int visible) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTextEdit::setVisible(bool visible)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setVisible(visible != 0);
  }

  static void setupViewport_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? viewport) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTextEdit::setupViewport(QWidget * viewport)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setupViewport((viewport == null || viewport.address == 0)
        ? null
        : QWidget.fromCppPointer(viewport));
  }

  static ffi.Pointer<void> sharedPainter_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTextEdit::sharedPainter() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sharedPainter();
    return result.thisCpp;
  }

  static ffi.Pointer<void> sizeHint_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTextEdit::sizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sizeHint();
    return result.thisCpp;
  } // tabChangesFocus() const

  bool tabChangesFocus() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QTextEdit__tabChangesFocus')
        .asFunction();
    return func(thisCpp) != 0;
  } // tabStopDistance() const

  double tabStopDistance() {
    final double_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
            'c_QTextEdit__tabStopDistance')
        .asFunction();
    return func(thisCpp);
  } // textBackgroundColor() const

  QColor textBackgroundColor() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QTextEdit__textBackgroundColor')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QColor.fromCppPointer(result, true);
  } // textChanged()

  textChanged() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QTextEdit__textChanged')
        .asFunction();
    func(thisCpp);
  }

  void onTextChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QTextEdit__onTextChanged')
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTextEdit;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onTextChanged_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // textColor() const

  QColor textColor() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QTextEdit__textColor')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QColor.fromCppPointer(result, true);
  } // toHtml() const

  QString toHtml() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QTextEdit__toHtml')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // toMarkdown() const

  QString toMarkdown() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QTextEdit__toMarkdown')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // toPlainText() const

  QString toPlainText() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QTextEdit__toPlainText')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QTextEdit__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  } // undo()

  undo() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>('c_QTextEdit__undo')
        .asFunction();
    func(thisCpp);
  } // undoAvailable(bool b)

  undoAvailable(bool b) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QTextEdit__undoAvailable_bool')
        .asFunction();
    func(thisCpp, b ? 1 : 0);
  }

  void onUndoAvailable(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QTextEdit__onUndoAvailable_bool')
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTextEdit;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onUndoAvailable_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static int viewportEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTextEdit::viewportEvent(QEvent * arg__1)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTextEdit;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTextEdit::viewportSizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.viewportSizeHint();
    return result.thisCpp;
  } // zoomIn(int range)

  zoomIn({int range = 1}) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QTextEdit__zoomIn_int')
        .asFunction();
    func(thisCpp, range);
  } // zoomInF(float range)

  zoomInF(double range) {
    final void_Func_voidstar_double func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Double_FFI>>(
            'c_QTextEdit__zoomInF_float')
        .asFunction();
    func(thisCpp, range);
  } // zoomOut(int range)

  zoomOut({int range = 1}) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QTextEdit__zoomOut_int')
        .asFunction();
    func(thisCpp, range);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QTextEdit__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 1128:
        return "c_QTextEdit__changeEvent_QEvent";
      case 946:
        return "c_QTextEdit__customEvent_QEvent";
      case 1145:
        return "c_QTextEdit__devType";
      case 956:
        return "c_QTextEdit__event_QEvent";
      case 957:
        return "c_QTextEdit__eventFilter_QObject_QEvent";
      case 1155:
        return "c_QTextEdit__focusNextPrevChild_bool";
      case 1169:
        return "c_QTextEdit__hasHeightForWidth";
      case 1173:
        return "c_QTextEdit__heightForWidth_int";
      case 1176:
        return "c_QTextEdit__initPainter_QPainter";
      case 1202:
        return "c_QTextEdit__leaveEvent_QEvent";
      case 1222:
        return "c_QTextEdit__minimumSizeHint";
      case 1224:
        return "c_QTextEdit__mouseDoubleClickEvent_QMouseEvent";
      case 1226:
        return "c_QTextEdit__mouseMoveEvent_QMouseEvent";
      case 1227:
        return "c_QTextEdit__mousePressEvent_QMouseEvent";
      case 1228:
        return "c_QTextEdit__mouseReleaseEvent_QMouseEvent";
      case 1235:
        return "c_QTextEdit__paintEvent_QPaintEvent";
      case 5218:
        return "c_QTextEdit__scrollContentsBy_int_int";
      case 1314:
        return "c_QTextEdit__setVisible_bool";
      case 5226:
        return "c_QTextEdit__setupViewport_QWidget";
      case 1323:
        return "c_QTextEdit__sharedPainter";
      case 1331:
        return "c_QTextEdit__sizeHint";
      case 5229:
        return "c_QTextEdit__viewportEvent_QEvent";
      case 5230:
        return "c_QTextEdit__viewportSizeHint";
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
            'c_QTextEdit__registerVirtualMethodCallback')
        .asFunction();
    final callback1128 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QTextEdit.changeEvent_calledFromC);
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
            QTextEdit.event_calledFromC, callbackExcept956);
    registerCallback(thisCpp, callback956, 956);
    const callbackExcept957 = 0;
    final callback957 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_voidstar_FFI>(
            QAbstractScrollArea.eventFilter_calledFromC, callbackExcept957);
    registerCallback(thisCpp, callback957, 957);
    const callbackExcept1155 = 0;
    final callback1155 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_ffi_Int8_FFI>(
            QTextEdit.focusNextPrevChild_calledFromC, callbackExcept1155);
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
            QTextEdit.mouseDoubleClickEvent_calledFromC);
    registerCallback(thisCpp, callback1224, 1224);
    final callback1226 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QTextEdit.mouseMoveEvent_calledFromC);
    registerCallback(thisCpp, callback1226, 1226);
    final callback1227 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QTextEdit.mousePressEvent_calledFromC);
    registerCallback(thisCpp, callback1227, 1227);
    final callback1228 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QTextEdit.mouseReleaseEvent_calledFromC);
    registerCallback(thisCpp, callback1228, 1228);
    final callback1235 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QTextEdit.paintEvent_calledFromC);
    registerCallback(thisCpp, callback1235, 1235);
    final callback5218 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>(
            QTextEdit.scrollContentsBy_calledFromC);
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
