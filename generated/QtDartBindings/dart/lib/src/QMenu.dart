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

class QMenu extends QWidget {
  QMenu.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QMenu.init() : super.init() {}
  factory QMenu.fromCache(var cppPointer, [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QMenu;
    }
    return QMenu.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QMenu_Finalizer";
  } //QMenu(QWidget * parent)

  QMenu({required QWidget? parent}) : super.init() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QMenu__constructor_QWidget')
        .asFunction();
    thisCpp = func(parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } //QMenu(const QString & title, QWidget * parent)
  QMenu.ctor2(String? title, {required QWidget? parent}) : super.init() {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QMenu__constructor_QString_QWidget')
        .asFunction();
    thisCpp = func(title?.toNativeUtf8() ?? ffi.nullptr,
        parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } // aboutToHide()
  aboutToHide() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QMenu__aboutToHide')
        .asFunction();
    func(thisCpp);
  }

  void onAboutToHide(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>('c_QMenu__onAboutToHide')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onAboutToHide_callback);
    final callbackMethod = onAboutToHide_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onAboutToHide_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenu;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onAboutToHide_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // aboutToShow()

  aboutToShow() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QMenu__aboutToShow')
        .asFunction();
    func(thisCpp);
  }

  void onAboutToShow(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>('c_QMenu__onAboutToShow')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onAboutToShow_callback);
    final callbackMethod = onAboutToShow_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onAboutToShow_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenu;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onAboutToShow_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // actionAt(const QPoint & arg__1) const

  QAction actionAt(QPoint? arg__1) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QMenu__actionAt_QPoint')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
    return QAction.fromCppPointer(result, false);
  } // actionGeometry(QAction * arg__1) const

  QRect actionGeometry(QAction? arg__1) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QMenu__actionGeometry_QAction')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
    return QRect.fromCppPointer(result, true);
  } // activeAction() const

  QAction activeAction() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QMenu__activeAction')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QAction.fromCppPointer(result, false);
  } // addMenu(QMenu * menu)

  QAction addMenu(QMenu? menu) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QMenu__addMenu_QMenu')
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
            'c_QMenu__addMenu_QIcon_QString')
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
            'c_QMenu__addMenu_QString')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, title?.toNativeUtf8() ?? ffi.nullptr);
    return QMenu.fromCppPointer(result, false);
  } // addSection(const QIcon & icon, const QString & text)

  QAction addSection(QIcon icon, String? text) {
    final voidstar_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi
                .NativeFunction<voidstar_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QMenu__addSection_QIcon_QString')
        .asFunction();
    ffi.Pointer<void> result = func(
        thisCpp,
        icon == null ? ffi.nullptr : icon.thisCpp,
        text?.toNativeUtf8() ?? ffi.nullptr);
    return QAction.fromCppPointer(result, false);
  } // addSection(const QString & text)

  QAction addSection_2(String? text) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QMenu__addSection_QString')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, text?.toNativeUtf8() ?? ffi.nullptr);
    return QAction.fromCppPointer(result, false);
  } // addSeparator()

  QAction addSeparator() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QMenu__addSeparator')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QAction.fromCppPointer(result, false);
  }

  static void changeEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenu;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenu::changeEvent(QEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.changeEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QEvent.fromCppPointer(arg__1));
  } // clear()

  clear() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>('c_QMenu__clear')
        .asFunction();
    func(thisCpp);
  } // columnCount() const

  int columnCount() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QMenu__columnCount')
        .asFunction();
    return func(thisCpp);
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenu;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenu::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  } // defaultAction() const

  QAction defaultAction() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QMenu__defaultAction')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QAction.fromCppPointer(result, false);
  }

  static int devType_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenu;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenu::devType() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.devType();
    return result;
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenu;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenu::event(QEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.event((arg__1 == null || arg__1.address == 0)
        ? null
        : QEvent.fromCppPointer(arg__1));
    return result ? 1 : 0;
  }

  static int eventFilter_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void>? watched, ffi.Pointer<void>? event) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenu;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenu::eventFilter(QObject * watched, QEvent * event)! (${thisCpp.address})");
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
  } // exec()

  QAction exec() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>('c_QMenu__exec')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QAction.fromCppPointer(result, false);
  }

  static // exec(const QList<QAction* > & actions, const QPoint & pos, QAction * at, QWidget * parent)
      QAction exec_2(QList? actions, QPoint? pos,
          {required QAction? at, required QWidget? parent}) {
    final voidstar_Func_voidstar_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_voidstar_voidstar_voidstar_FFI>>(
            'c_static_QMenu__exec_QList_QAction_QPoint_QAction_QWidget')
        .asFunction();
    ffi.Pointer<void> result = func(
        actions == null ? ffi.nullptr : actions.thisCpp,
        pos == null ? ffi.nullptr : pos.thisCpp,
        at == null ? ffi.nullptr : at.thisCpp,
        parent == null ? ffi.nullptr : parent.thisCpp);
    return QAction.fromCppPointer(result, false);
  } // exec(const QPoint & pos, QAction * at)

  QAction exec_3(QPoint? pos, {required QAction? at}) {
    final voidstar_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi
                .NativeFunction<voidstar_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QMenu__exec_QPoint_QAction')
        .asFunction();
    ffi.Pointer<void> result = func(
        thisCpp,
        pos == null ? ffi.nullptr : pos.thisCpp,
        at == null ? ffi.nullptr : at.thisCpp);
    return QAction.fromCppPointer(result, false);
  }

  static int focusNextPrevChild_calledFromC(
      ffi.Pointer<void> thisCpp, int next) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenu;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenu::focusNextPrevChild(bool next)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.focusNextPrevChild(next != 0);
    return result ? 1 : 0;
  }

  static int hasHeightForWidth_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenu;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenu::hasHeightForWidth() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.hasHeightForWidth();
    return result ? 1 : 0;
  }

  static int heightForWidth_calledFromC(ffi.Pointer<void> thisCpp, int arg__1) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenu;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenu::heightForWidth(int arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.heightForWidth(arg__1);
    return result;
  } // hideTearOffMenu()

  hideTearOffMenu() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QMenu__hideTearOffMenu')
        .asFunction();
    func(thisCpp);
  } // hovered(QAction * action)

  hovered(QAction? action) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QMenu__hovered_QAction')
        .asFunction();
    func(thisCpp, action == null ? ffi.nullptr : action.thisCpp);
  }

  void onHovered(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QMenu__onHovered_QAction')
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
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenu;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onHovered_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  } // icon() const

  QIcon icon() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>('c_QMenu__icon')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QIcon.fromCppPointer(result, true);
  }

  static void initPainter_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? painter) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenu;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenu::initPainter(QPainter * painter) const! (${thisCpp.address})");
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
            'c_QMenu__insertMenu_QAction_QMenu')
        .asFunction();
    ffi.Pointer<void> result = func(
        thisCpp,
        before == null ? ffi.nullptr : before.thisCpp,
        menu == null ? ffi.nullptr : menu.thisCpp);
    return QAction.fromCppPointer(result, false);
  } // insertSection(QAction * before, const QIcon & icon, const QString & text)

  QAction insertSection(QAction? before, QIcon icon, String? text) {
    final voidstar_Func_voidstar_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_voidstar_voidstar_voidstar_FFI>>(
            'c_QMenu__insertSection_QAction_QIcon_QString')
        .asFunction();
    ffi.Pointer<void> result = func(
        thisCpp,
        before == null ? ffi.nullptr : before.thisCpp,
        icon == null ? ffi.nullptr : icon.thisCpp,
        text?.toNativeUtf8() ?? ffi.nullptr);
    return QAction.fromCppPointer(result, false);
  } // insertSection(QAction * before, const QString & text)

  QAction insertSection_2(QAction? before, String? text) {
    final voidstar_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi
                .NativeFunction<voidstar_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QMenu__insertSection_QAction_QString')
        .asFunction();
    ffi.Pointer<void> result = func(
        thisCpp,
        before == null ? ffi.nullptr : before.thisCpp,
        text?.toNativeUtf8() ?? ffi.nullptr);
    return QAction.fromCppPointer(result, false);
  } // insertSeparator(QAction * before)

  QAction insertSeparator(QAction? before) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QMenu__insertSeparator_QAction')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, before == null ? ffi.nullptr : before.thisCpp);
    return QAction.fromCppPointer(result, false);
  } // internalDelayedPopup()

  internalDelayedPopup() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QMenu__internalDelayedPopup')
        .asFunction();
    func(thisCpp);
  } // isEmpty() const

  bool isEmpty() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>('c_QMenu__isEmpty')
        .asFunction();
    return func(thisCpp) != 0;
  } // isTearOffEnabled() const

  bool isTearOffEnabled() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QMenu__isTearOffEnabled')
        .asFunction();
    return func(thisCpp) != 0;
  } // isTearOffMenuVisible() const

  bool isTearOffMenuVisible() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QMenu__isTearOffMenuVisible')
        .asFunction();
    return func(thisCpp) != 0;
  }

  static void leaveEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenu;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenu::leaveEvent(QEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.leaveEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QEvent.fromCppPointer(arg__1));
  } // menuAction() const

  QAction menuAction() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QMenu__menuAction')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QAction.fromCppPointer(result, false);
  }

  static // menuInAction(const QAction * action)
      QMenu menuInAction(QAction? action) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_static_QMenu__menuInAction_QAction')
        .asFunction();
    ffi.Pointer<void> result =
        func(action == null ? ffi.nullptr : action.thisCpp);
    return QMenu.fromCppPointer(result, false);
  }

  static ffi.Pointer<void> minimumSizeHint_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenu;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenu::minimumSizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.minimumSizeHint();
    return result.thisCpp;
  }

  static void mouseDoubleClickEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenu;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenu::mouseDoubleClickEvent(QMouseEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseDoubleClickEvent((event == null || event.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(event));
  }

  static void mouseMoveEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenu;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenu::mouseMoveEvent(QMouseEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseMoveEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(arg__1));
  }

  static void mousePressEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenu;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenu::mousePressEvent(QMouseEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mousePressEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(arg__1));
  }

  static void mouseReleaseEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenu;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenu::mouseReleaseEvent(QMouseEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseReleaseEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(arg__1));
  }

  static void paintEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenu;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenu::paintEvent(QPaintEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.paintEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QPaintEvent.fromCppPointer(arg__1));
  } // popup(const QPoint & pos, QAction * at)

  popup(QPoint? pos, {required QAction? at}) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QMenu__popup_QPoint_QAction')
        .asFunction();
    func(thisCpp, pos == null ? ffi.nullptr : pos.thisCpp,
        at == null ? ffi.nullptr : at.thisCpp);
  } // separatorsCollapsible() const

  bool separatorsCollapsible() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QMenu__separatorsCollapsible')
        .asFunction();
    return func(thisCpp) != 0;
  } // setActiveAction(QAction * act)

  setActiveAction(QAction? act) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QMenu__setActiveAction_QAction')
        .asFunction();
    func(thisCpp, act == null ? ffi.nullptr : act.thisCpp);
  } // setDefaultAction(QAction * arg__1)

  setDefaultAction(QAction? arg__1) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QMenu__setDefaultAction_QAction')
        .asFunction();
    func(thisCpp, arg__1 == null ? ffi.nullptr : arg__1.thisCpp);
  } // setIcon(const QIcon & icon)

  setIcon(QIcon icon) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QMenu__setIcon_QIcon')
        .asFunction();
    func(thisCpp, icon == null ? ffi.nullptr : icon.thisCpp);
  } // setNoReplayFor(QWidget * widget)

  setNoReplayFor(QWidget? widget) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QMenu__setNoReplayFor_QWidget')
        .asFunction();
    func(thisCpp, widget == null ? ffi.nullptr : widget.thisCpp);
  } // setSeparatorsCollapsible(bool collapse)

  setSeparatorsCollapsible(bool collapse) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QMenu__setSeparatorsCollapsible_bool')
        .asFunction();
    func(thisCpp, collapse ? 1 : 0);
  } // setTearOffEnabled(bool arg__1)

  setTearOffEnabled(bool arg__1) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QMenu__setTearOffEnabled_bool')
        .asFunction();
    func(thisCpp, arg__1 ? 1 : 0);
  } // setTitle(const QString & title)

  setTitle(String? title) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QMenu__setTitle_QString')
        .asFunction();
    func(thisCpp, title?.toNativeUtf8() ?? ffi.nullptr);
  } // setToolTipsVisible(bool visible)

  setToolTipsVisible(bool visible) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QMenu__setToolTipsVisible_bool')
        .asFunction();
    func(thisCpp, visible ? 1 : 0);
  }

  static void setVisible_calledFromC(ffi.Pointer<void> thisCpp, int visible) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenu;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenu::setVisible(bool visible)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setVisible(visible != 0);
  }

  static ffi.Pointer<void> sharedPainter_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenu;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenu::sharedPainter() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sharedPainter();
    return result.thisCpp;
  } // showTearOffMenu()

  showTearOffMenu() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QMenu__showTearOffMenu')
        .asFunction();
    func(thisCpp);
  } // showTearOffMenu(const QPoint & pos)

  showTearOffMenu_2(QPoint? pos) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QMenu__showTearOffMenu_QPoint')
        .asFunction();
    func(thisCpp, pos == null ? ffi.nullptr : pos.thisCpp);
  }

  static ffi.Pointer<void> sizeHint_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenu;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QMenu::sizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sizeHint();
    return result.thisCpp;
  } // title() const

  QString title() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QMenu__title')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // toolTipsVisible() const

  bool toolTipsVisible() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QMenu__toolTipsVisible')
        .asFunction();
    return func(thisCpp) != 0;
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QMenu__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  } // triggered(QAction * action)

  triggered(QAction? action) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QMenu__triggered_QAction')
        .asFunction();
    func(thisCpp, action == null ? ffi.nullptr : action.thisCpp);
  }

  void onTriggered(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QMenu__onTriggered_QAction')
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
    var dartInstance = QObject.s_dartInstanceByCppPtr[thisCpp.address] as QMenu;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onTriggered_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QMenu__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 1128:
        return "c_QMenu__changeEvent_QEvent";
      case 946:
        return "c_QMenu__customEvent_QEvent";
      case 1145:
        return "c_QMenu__devType";
      case 956:
        return "c_QMenu__event_QEvent";
      case 957:
        return "c_QMenu__eventFilter_QObject_QEvent";
      case 1155:
        return "c_QMenu__focusNextPrevChild_bool";
      case 1169:
        return "c_QMenu__hasHeightForWidth";
      case 1173:
        return "c_QMenu__heightForWidth_int";
      case 1176:
        return "c_QMenu__initPainter_QPainter";
      case 1202:
        return "c_QMenu__leaveEvent_QEvent";
      case 1222:
        return "c_QMenu__minimumSizeHint";
      case 1224:
        return "c_QMenu__mouseDoubleClickEvent_QMouseEvent";
      case 1226:
        return "c_QMenu__mouseMoveEvent_QMouseEvent";
      case 1227:
        return "c_QMenu__mousePressEvent_QMouseEvent";
      case 1228:
        return "c_QMenu__mouseReleaseEvent_QMouseEvent";
      case 1235:
        return "c_QMenu__paintEvent_QPaintEvent";
      case 1314:
        return "c_QMenu__setVisible_bool";
      case 1323:
        return "c_QMenu__sharedPainter";
      case 1331:
        return "c_QMenu__sizeHint";
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
            'c_QMenu__registerVirtualMethodCallback')
        .asFunction();
    final callback1128 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QMenu.changeEvent_calledFromC);
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
            QMenu.event_calledFromC, callbackExcept956);
    registerCallback(thisCpp, callback956, 956);
    const callbackExcept957 = 0;
    final callback957 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_voidstar_FFI>(
            QObject.eventFilter_calledFromC, callbackExcept957);
    registerCallback(thisCpp, callback957, 957);
    const callbackExcept1155 = 0;
    final callback1155 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_ffi_Int8_FFI>(
            QMenu.focusNextPrevChild_calledFromC, callbackExcept1155);
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
            QMenu.leaveEvent_calledFromC);
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
            QMenu.mouseMoveEvent_calledFromC);
    registerCallback(thisCpp, callback1226, 1226);
    final callback1227 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QMenu.mousePressEvent_calledFromC);
    registerCallback(thisCpp, callback1227, 1227);
    final callback1228 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QMenu.mouseReleaseEvent_calledFromC);
    registerCallback(thisCpp, callback1228, 1228);
    final callback1235 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QMenu.paintEvent_calledFromC);
    registerCallback(thisCpp, callback1235, 1235);
    final callback1314 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int8_FFI>(
            QWidget.setVisible_calledFromC);
    registerCallback(thisCpp, callback1314, 1314);
    final callback1323 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QWidget.sharedPainter_calledFromC);
    registerCallback(thisCpp, callback1323, 1323);
    final callback1331 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QMenu.sizeHint_calledFromC);
    registerCallback(thisCpp, callback1331, 1331);
  }
}
