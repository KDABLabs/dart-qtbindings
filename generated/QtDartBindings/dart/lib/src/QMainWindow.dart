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

class QMainWindow extends QWidget {
  QMainWindow.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QMainWindow.init() : super.init() {}
  factory QMainWindow.fromCache(var cppPointer, [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QMainWindow;
    }
    return QMainWindow.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QMainWindow_Finalizer";
  } //QMainWindow(QWidget * parent)

  QMainWindow({required QWidget? parent}) : super.init() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QMainWindow__constructor_QWidget')
        .asFunction();
    thisCpp = func(parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } // addToolBar(QToolBar * toolbar)
  addToolBar(QToolBar? toolbar) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QMainWindow__addToolBar_QToolBar')
        .asFunction();
    func(thisCpp, toolbar == null ? ffi.nullptr : toolbar.thisCpp);
  } // addToolBar(const QString & title)

  QToolBar addToolBar_2(String? title) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QMainWindow__addToolBar_QString')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, title?.toNativeUtf8() ?? ffi.nullptr);
    return QToolBar.fromCppPointer(result, false);
  } // addToolBarBreak()

  addToolBarBreak() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QMainWindow__addToolBarBreak')
        .asFunction();
    func(thisCpp);
  } // centralWidget() const

  QWidget centralWidget() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QMainWindow__centralWidget')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QWidget.fromCppPointer(result, false);
  }

  static void changeEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMainWindow;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMainWindow::changeEvent(QEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.changeEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QEvent.fromCppPointer(arg__1));
  } // createPopupMenu()

  QMenu createPopupMenu() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            cFunctionSymbolName(2553))
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QMenu.fromCppPointer(result, false);
  }

  static ffi.Pointer<void> createPopupMenu_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMainWindow;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMainWindow::createPopupMenu()! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.createPopupMenu();
    return result.thisCpp;
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMainWindow;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMainWindow::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  }

  static int devType_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMainWindow;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMainWindow::devType() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.devType();
    return result;
  } // documentMode() const

  bool documentMode() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QMainWindow__documentMode')
        .asFunction();
    return func(thisCpp) != 0;
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMainWindow;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMainWindow::event(QEvent * event)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMainWindow;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMainWindow::eventFilter(QObject * watched, QEvent * event)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMainWindow;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMainWindow::focusNextPrevChild(bool next)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.focusNextPrevChild(next != 0);
    return result ? 1 : 0;
  }

  static int hasHeightForWidth_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMainWindow;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMainWindow::hasHeightForWidth() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.hasHeightForWidth();
    return result ? 1 : 0;
  }

  static int heightForWidth_calledFromC(ffi.Pointer<void> thisCpp, int arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMainWindow;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMainWindow::heightForWidth(int arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.heightForWidth(arg__1);
    return result;
  } // iconSize() const

  QSize iconSize() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QMainWindow__iconSize')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QSize.fromCppPointer(result, true);
  } // iconSizeChanged(const QSize & iconSize)

  iconSizeChanged(QSize? iconSize) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QMainWindow__iconSizeChanged_QSize')
        .asFunction();
    func(thisCpp, iconSize == null ? ffi.nullptr : iconSize.thisCpp);
  }

  void onIconSizeChanged(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QMainWindow__onIconSizeChanged_QSize')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onIconSizeChanged_callback);
    final callbackMethod = onIconSizeChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onIconSizeChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMainWindow;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onIconSizeChanged_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static void initPainter_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? painter) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMainWindow;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMainWindow::initPainter(QPainter * painter) const! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.initPainter((painter == null || painter.address == 0)
        ? null
        : QPainter.fromCppPointer(painter));
  } // insertToolBar(QToolBar * before, QToolBar * toolbar)

  insertToolBar(QToolBar? before, QToolBar? toolbar) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QMainWindow__insertToolBar_QToolBar_QToolBar')
        .asFunction();
    func(thisCpp, before == null ? ffi.nullptr : before.thisCpp,
        toolbar == null ? ffi.nullptr : toolbar.thisCpp);
  } // insertToolBarBreak(QToolBar * before)

  insertToolBarBreak(QToolBar? before) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QMainWindow__insertToolBarBreak_QToolBar')
        .asFunction();
    func(thisCpp, before == null ? ffi.nullptr : before.thisCpp);
  } // isAnimated() const

  bool isAnimated() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QMainWindow__isAnimated')
        .asFunction();
    return func(thisCpp) != 0;
  } // isDockNestingEnabled() const

  bool isDockNestingEnabled() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QMainWindow__isDockNestingEnabled')
        .asFunction();
    return func(thisCpp) != 0;
  } // isSeparator(const QPoint & pos) const

  bool isSeparator(QPoint? pos) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_QMainWindow__isSeparator_QPoint')
        .asFunction();
    return func(thisCpp, pos == null ? ffi.nullptr : pos.thisCpp) != 0;
  }

  static void leaveEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMainWindow;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMainWindow::leaveEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.leaveEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  } // menuBar() const

  QMenuBar menuBar() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QMainWindow__menuBar')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QMenuBar.fromCppPointer(result, false);
  } // menuWidget() const

  QWidget menuWidget() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QMainWindow__menuWidget')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QWidget.fromCppPointer(result, false);
  }

  static ffi.Pointer<void> minimumSizeHint_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMainWindow;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMainWindow::minimumSizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.minimumSizeHint();
    return result.thisCpp;
  }

  static void mouseDoubleClickEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMainWindow;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMainWindow::mouseDoubleClickEvent(QMouseEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseDoubleClickEvent((event == null || event.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(event));
  }

  static void mouseMoveEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMainWindow;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMainWindow::mouseMoveEvent(QMouseEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseMoveEvent((event == null || event.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(event));
  }

  static void mousePressEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMainWindow;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMainWindow::mousePressEvent(QMouseEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mousePressEvent((event == null || event.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(event));
  }

  static void mouseReleaseEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMainWindow;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMainWindow::mouseReleaseEvent(QMouseEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseReleaseEvent((event == null || event.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(event));
  }

  static void paintEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMainWindow;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMainWindow::paintEvent(QPaintEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.paintEvent((event == null || event.address == 0)
        ? null
        : QPaintEvent.fromCppPointer(event));
  } // removeToolBar(QToolBar * toolbar)

  removeToolBar(QToolBar? toolbar) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QMainWindow__removeToolBar_QToolBar')
        .asFunction();
    func(thisCpp, toolbar == null ? ffi.nullptr : toolbar.thisCpp);
  } // removeToolBarBreak(QToolBar * before)

  removeToolBarBreak(QToolBar? before) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QMainWindow__removeToolBarBreak_QToolBar')
        .asFunction();
    func(thisCpp, before == null ? ffi.nullptr : before.thisCpp);
  } // restoreState(const QByteArray & state, int version)

  bool restoreState(QByteArray? state, {int version = 0}) {
    final bool_Func_voidstar_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            'c_QMainWindow__restoreState_QByteArray_int')
        .asFunction();
    return func(
            thisCpp, state == null ? ffi.nullptr : state.thisCpp, version) !=
        0;
  } // saveState(int version) const

  QByteArray saveState({int version = 0}) {
    final voidstar_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
            'c_QMainWindow__saveState_int')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, version);
    return QByteArray.fromCppPointer(result, true);
  } // setAnimated(bool enabled)

  setAnimated(bool enabled) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QMainWindow__setAnimated_bool')
        .asFunction();
    func(thisCpp, enabled ? 1 : 0);
  } // setCentralWidget(QWidget * widget)

  setCentralWidget(QWidget? widget) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QMainWindow__setCentralWidget_QWidget')
        .asFunction();
    func(thisCpp, widget == null ? ffi.nullptr : widget.thisCpp);
  } // setDockNestingEnabled(bool enabled)

  setDockNestingEnabled(bool enabled) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QMainWindow__setDockNestingEnabled_bool')
        .asFunction();
    func(thisCpp, enabled ? 1 : 0);
  } // setDocumentMode(bool enabled)

  setDocumentMode(bool enabled) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QMainWindow__setDocumentMode_bool')
        .asFunction();
    func(thisCpp, enabled ? 1 : 0);
  } // setIconSize(const QSize & iconSize)

  setIconSize(QSize? iconSize) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QMainWindow__setIconSize_QSize')
        .asFunction();
    func(thisCpp, iconSize == null ? ffi.nullptr : iconSize.thisCpp);
  } // setMenuBar(QMenuBar * menubar)

  setMenuBar(QMenuBar? menubar) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QMainWindow__setMenuBar_QMenuBar')
        .asFunction();
    func(thisCpp, menubar == null ? ffi.nullptr : menubar.thisCpp);
  } // setMenuWidget(QWidget * menubar)

  setMenuWidget(QWidget? menubar) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QMainWindow__setMenuWidget_QWidget')
        .asFunction();
    func(thisCpp, menubar == null ? ffi.nullptr : menubar.thisCpp);
  } // setStatusBar(QStatusBar * statusbar)

  setStatusBar(QStatusBar? statusbar) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QMainWindow__setStatusBar_QStatusBar')
        .asFunction();
    func(thisCpp, statusbar == null ? ffi.nullptr : statusbar.thisCpp);
  } // setUnifiedTitleAndToolBarOnMac(bool set)

  setUnifiedTitleAndToolBarOnMac(bool set) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QMainWindow__setUnifiedTitleAndToolBarOnMac_bool')
        .asFunction();
    func(thisCpp, set ? 1 : 0);
  }

  static void setVisible_calledFromC(ffi.Pointer<void> thisCpp, int visible) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMainWindow;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMainWindow::setVisible(bool visible)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setVisible(visible != 0);
  }

  static ffi.Pointer<void> sharedPainter_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMainWindow;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMainWindow::sharedPainter() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sharedPainter();
    return result.thisCpp;
  }

  static ffi.Pointer<void> sizeHint_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMainWindow;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMainWindow::sizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sizeHint();
    return result.thisCpp;
  } // statusBar() const

  QStatusBar statusBar() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QMainWindow__statusBar')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QStatusBar.fromCppPointer(result, false);
  } // takeCentralWidget()

  QWidget takeCentralWidget() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QMainWindow__takeCentralWidget')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QWidget.fromCppPointer(result, false);
  } // toolBarBreak(QToolBar * toolbar) const

  bool toolBarBreak(QToolBar? toolbar) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            'c_QMainWindow__toolBarBreak_QToolBar')
        .asFunction();
    return func(thisCpp, toolbar == null ? ffi.nullptr : toolbar.thisCpp) != 0;
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QMainWindow__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  } // unifiedTitleAndToolBarOnMac() const

  bool unifiedTitleAndToolBarOnMac() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QMainWindow__unifiedTitleAndToolBarOnMac')
        .asFunction();
    return func(thisCpp) != 0;
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QMainWindow__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 1128:
        return "c_QMainWindow__changeEvent_QEvent";
      case 2553:
        return "c_QMainWindow__createPopupMenu";
      case 946:
        return "c_QMainWindow__customEvent_QEvent";
      case 1145:
        return "c_QMainWindow__devType";
      case 956:
        return "c_QMainWindow__event_QEvent";
      case 957:
        return "c_QMainWindow__eventFilter_QObject_QEvent";
      case 1155:
        return "c_QMainWindow__focusNextPrevChild_bool";
      case 1169:
        return "c_QMainWindow__hasHeightForWidth";
      case 1173:
        return "c_QMainWindow__heightForWidth_int";
      case 1176:
        return "c_QMainWindow__initPainter_QPainter";
      case 1202:
        return "c_QMainWindow__leaveEvent_QEvent";
      case 1222:
        return "c_QMainWindow__minimumSizeHint";
      case 1224:
        return "c_QMainWindow__mouseDoubleClickEvent_QMouseEvent";
      case 1226:
        return "c_QMainWindow__mouseMoveEvent_QMouseEvent";
      case 1227:
        return "c_QMainWindow__mousePressEvent_QMouseEvent";
      case 1228:
        return "c_QMainWindow__mouseReleaseEvent_QMouseEvent";
      case 1235:
        return "c_QMainWindow__paintEvent_QPaintEvent";
      case 1314:
        return "c_QMainWindow__setVisible_bool";
      case 1323:
        return "c_QMainWindow__sharedPainter";
      case 1331:
        return "c_QMainWindow__sizeHint";
    }
    return super.cFunctionSymbolName(methodId);
  }

  static String methodNameFromId(int methodId) {
    switch (methodId) {
      case 1128:
        return "changeEvent";
      case 2553:
        return "createPopupMenu";
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
            'c_QMainWindow__registerVirtualMethodCallback')
        .asFunction();
    final callback1128 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QWidget.changeEvent_calledFromC);
    registerCallback(thisCpp, callback1128, 1128);
    final callback2553 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QMainWindow.createPopupMenu_calledFromC);
    registerCallback(thisCpp, callback2553, 2553);
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
            QMainWindow.event_calledFromC, callbackExcept956);
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
        QWidget.minimumSizeHint_calledFromC);
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
            QWidget.paintEvent_calledFromC);
    registerCallback(thisCpp, callback1235, 1235);
    final callback1314 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int8_FFI>(
            QWidget.setVisible_calledFromC);
    registerCallback(thisCpp, callback1314, 1314);
    final callback1323 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QWidget.sharedPainter_calledFromC);
    registerCallback(thisCpp, callback1323, 1323);
    final callback1331 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QWidget.sizeHint_calledFromC);
    registerCallback(thisCpp, callback1331, 1331);
  }
}
